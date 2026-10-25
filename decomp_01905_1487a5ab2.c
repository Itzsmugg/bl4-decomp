// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487a5ab2 FUN_1487a5ab2 body=59 status=ok
// SIG undefined FUN_1487a5ab2(void)

undefined8 FUN_1487a5ab2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a5bbc FUN_1487a5bbc body=59 status=ok
// SIG undefined FUN_1487a5bbc(void)

undefined8 FUN_1487a5bbc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a5c5c FUN_1487a5c5c body=29 status=ok
// SIG undefined FUN_1487a5c5c(void)

undefined8 FUN_1487a5c5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a5c7a FUN_1487a5c7a body=55 status=ok
// SIG undefined FUN_1487a5c7a(void)

void FUN_1487a5c7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f2e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f2e8 = FUN_140002ddd(FUN_14653ff59,uVar1,L"SpawnedGbxActorDefPayload");
  }
  return;
}



// FUNCTION 1487a5cb2 FUN_1487a5cb2 body=37 status=ok
// SIG undefined FUN_1487a5cb2(void)

void FUN_1487a5cb2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x110);
  FUN_1487a5e2e(param_2);
  return;
}



// FUNCTION 1487a5d04 FUN_1487a5d04 body=63 status=ok
// SIG undefined FUN_1487a5d04(void)

undefined1 FUN_1487a5d04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a5f88(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 1487a5d6c FUN_1487a5d6c body=59 status=ok
// SIG undefined FUN_1487a5d6c(void)

undefined8 FUN_1487a5d6c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a5db8 FUN_1487a5db8 body=40 status=ok
// SIG undefined FUN_1487a5db8(void)

void FUN_1487a5db8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_1487a5f1e(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 1487a5e2e FUN_1487a5e2e body=145 status=ok
// SIG undefined FUN_1487a5e2e(void)

void FUN_1487a5e2e(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b3d5600;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0x16] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 4;
  *(undefined4 *)(param_1 + 0x17) = 1;
  *(undefined1 *)(param_1 + 0x1b) = 2;
  *(byte *)(param_1 + 0x1c) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xc000;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



// FUNCTION 1487a5ec0 FUN_1487a5ec0 body=38 status=ok
// SIG undefined FUN_1487a5ec0(void)

undefined8 FUN_1487a5ec0(undefined8 param_1,int param_2)

{
  FUN_1487a5f1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a5ee6 FUN_1487a5ee6 body=55 status=ok
// SIG undefined FUN_1487a5ee6(void)

void FUN_1487a5ee6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f3a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f3a0 = FUN_140002ddd(FUN_1465401b9,uVar1,L"SpawnLootBehaviorMod");
  }
  return;
}



// FUNCTION 1487a5f1e FUN_1487a5f1e body=106 status=ok
// SIG undefined FUN_1487a5f1e(void)

void FUN_1487a5f1e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b3d5600;
  FUN_144a2da94(param_1 + 0x16);
  FUN_1403d9da7(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
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
  FUN_140f4e84a(param_1);
  return;
}



// FUNCTION 1487a5f88 FUN_1487a5f88 body=252 status=ok
// SIG undefined FUN_1487a5f88(void)

longlong FUN_1487a5f88(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14862318e(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_1487a6084(param_1 + 0x50,param_2 + 0x50);
  FUN_14862451c(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa5) = uVar1;
  FUN_144983130(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  if ((*(longlong *)(param_1 + 0xf0) != *(longlong *)(param_2 + 0xf0)) ||
     (*(int *)(param_1 + 0xf8) != *(int *)(param_2 + 0xf8))) {
    *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  return param_1;
}



// FUNCTION 1487a6084 FUN_1487a6084 body=290 status=ok
// SIG undefined FUN_1487a6084(void)

longlong * FUN_1487a6084(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a61ee FUN_1487a61ee body=59 status=ok
// SIG undefined FUN_1487a61ee(void)

undefined8 FUN_1487a61ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a623a FUN_1487a623a body=40 status=ok
// SIG undefined FUN_1487a623a(void)

void FUN_1487a623a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_145acf35a(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 1487a62b0 FUN_1487a62b0 body=55 status=ok
// SIG undefined FUN_1487a62b0(void)

void FUN_1487a62b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f3d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f3d0 = FUN_140002ddd(FUN_14654024f,uVar1,L"SpawnModifier_StatRatio");
  }
  return;
}



// FUNCTION 1487a6328 FUN_1487a6328 body=132 status=ok
// SIG undefined FUN_1487a6328(void)

undefined1 FUN_1487a6328(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0;
    bVar15 = DAT_14c950c29;
    do {
      lVar16 = *(longlong *)(param_3 + lVar17);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_14689c22e();
          lVar16 = *(longlong *)(param_3 + lVar17);
          bVar15 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar17);
      *plVar1 = lVar16;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar17);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar17);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x28 + lVar17);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)(plVar1 + 4) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      *(undefined4 *)(plVar1 + 5) = uVar11;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar12;
      *(undefined4 *)(plVar1 + 6) = uVar13;
      *(undefined4 *)((longlong)plVar1 + 0x34) = uVar14;
      plVar1[7] = *(longlong *)(param_3 + 0x38 + lVar17);
      lVar17 = lVar17 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a63d4 FUN_1487a63d4 body=59 status=ok
// SIG undefined FUN_1487a63d4(void)

undefined8 FUN_1487a63d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a64d6 FUN_1487a64d6 body=39 status=ok
// SIG undefined FUN_1487a64d6(void)

undefined8 FUN_1487a64d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 1487a6526 FUN_1487a6526 body=59 status=ok
// SIG undefined FUN_1487a6526(void)

undefined8 FUN_1487a6526(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a65e6 FUN_1487a65e6 body=149 status=ok
// SIG undefined FUN_1487a65e6(void)

undefined8 FUN_1487a65e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
    do {
      if (*(char *)(param_3 + -0xc0) == '\0') {
        *(undefined1 *)(param_2 + -0xc0) = 0;
        *(undefined8 *)(param_2 + -200) = *(undefined8 *)(param_3 + -200);
      }
      memcpy((void *)(param_2 + -0xb8),(void *)(param_3 + -0xb8),0x9c);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0xe0;
      param_2 = param_2 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a66a4 FUN_1487a66a4 body=59 status=ok
// SIG undefined FUN_1487a66a4(void)

undefined8 FUN_1487a66a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a66f0 FUN_1487a66f0 body=38 status=ok
// SIG undefined FUN_1487a66f0(void)

void FUN_1487a66f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_140e454ee(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 1487a6752 FUN_1487a6752 body=104 status=ok
// SIG undefined FUN_1487a6752(void)

undefined8 FUN_1487a6752(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1418ac8da(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a67bc FUN_1487a67bc body=28 status=ok
// SIG undefined FUN_1487a67bc(void)

undefined8 FUN_1487a67bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487a6832 FUN_1487a6832 body=59 status=ok
// SIG undefined FUN_1487a6832(void)

undefined8 FUN_1487a6832(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a692c FUN_1487a692c body=63 status=ok
// SIG undefined FUN_1487a692c(void)

undefined1 FUN_1487a692c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 1487a6994 FUN_1487a6994 body=59 status=ok
// SIG undefined FUN_1487a6994(void)

undefined8 FUN_1487a6994(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a69e0 FUN_1487a69e0 body=38 status=ok
// SIG undefined FUN_1487a69e0(void)

void FUN_1487a69e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 1487a6a5e FUN_1487a6a5e body=48 status=ok
// SIG undefined FUN_1487a6a5e(void)

void FUN_1487a6a5e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b177f30;
  return;
}



// FUNCTION 1487a6a8e FUN_1487a6a8e body=32 status=ok
// SIG undefined FUN_1487a6a8e(void)

void FUN_1487a6a8e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b177f30;
  return;
}



// FUNCTION 1487a6b08 FUN_1487a6b08 body=59 status=ok
// SIG undefined FUN_1487a6b08(void)

undefined8 FUN_1487a6b08(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a6b54 FUN_1487a6b54 body=63 status=ok
// SIG undefined FUN_1487a6b54(void)

void FUN_1487a6b54(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b177f30;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_1403d7c6c(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1487a6be4 FUN_1487a6be4 body=37 status=ok
// SIG undefined FUN_1487a6be4(void)

void FUN_1487a6be4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe0);
  FUN_1418624e0(param_2);
  return;
}



// FUNCTION 1487a6c36 FUN_1487a6c36 body=63 status=ok
// SIG undefined FUN_1487a6c36(void)

undefined1 FUN_1487a6c36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a6de0(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 1487a6c9e FUN_1487a6c9e body=59 status=ok
// SIG undefined FUN_1487a6c9e(void)

undefined8 FUN_1487a6c9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a6cea FUN_1487a6cea body=38 status=ok
// SIG undefined FUN_1487a6cea(void)

void FUN_1487a6cea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14186266a(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 1487a6d82 FUN_1487a6d82 body=38 status=ok
// SIG undefined FUN_1487a6d82(void)

undefined8 FUN_1487a6d82(undefined8 param_1,int param_2)

{
  FUN_14186266a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a6da8 FUN_1487a6da8 body=55 status=ok
// SIG undefined FUN_1487a6da8(void)

void FUN_1487a6da8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f498 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f498 = FUN_140002ddd(FUN_146540646,uVar1,L"SpawnPointDef");
  }
  return;
}



// FUNCTION 1487a6de0 FUN_1487a6de0 body=149 status=ok
// SIG undefined FUN_1487a6de0(void)

longlong FUN_1487a6de0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_147e1a790();
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  uVar2 = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  FUN_144a787a6(param_1 + 0xa8,param_2 + 0xa8);
  FUN_148615fc0(param_1 + 0xb8,param_2 + 0xb8);
  if ((*(longlong *)(param_1 + 200) != *(longlong *)(param_2 + 200)) ||
     (*(int *)(param_1 + 0xd0) != *(int *)(param_2 + 0xd0))) {
    *(longlong *)(param_1 + 200) = *(longlong *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return param_1;
}



// FUNCTION 1487a6ebe FUN_1487a6ebe body=96 status=ok
// SIG undefined FUN_1487a6ebe(void)

undefined8 FUN_1487a6ebe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_140d02432();
      FUN_142b160e2(param_2 + lVar1 + 0x58,param_3 + lVar1 + 0x58);
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a6f46 FUN_1487a6f46 body=59 status=ok
// SIG undefined FUN_1487a6f46(void)

undefined8 FUN_1487a6f46(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a701c FUN_1487a701c body=89 status=ok
// SIG undefined FUN_1487a701c(void)

undefined8 FUN_1487a701c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x2c);
      uVar2 = *(undefined4 *)(param_3 + -0x28);
      uVar3 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar1;
      *(undefined4 *)(param_2 + -0x28) = uVar2;
      *(undefined4 *)(param_2 + -0x24) = uVar3;
      FUN_1418443e8(param_2 + -0x20,param_3 + -0x20);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1487a717e(param_2,param_3);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a709e FUN_1487a709e body=59 status=ok
// SIG undefined FUN_1487a709e(void)

undefined8 FUN_1487a709e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a70e4 FUN_1487a70e4 body=32 status=ok
// SIG undefined FUN_1487a70e4(void)

void FUN_1487a70e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1487a7146(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1487a7146 FUN_1487a7146 body=55 status=ok
// SIG undefined FUN_1487a7146(void)

void FUN_1487a7146(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3d6790;
  FUN_14094a9f9(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1487a717e FUN_1487a717e body=93 status=ok
// SIG undefined FUN_1487a717e(void)

undefined8 * FUN_1487a717e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14094a9f9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487a71dc(param_1,iVar1);
      FUN_1487a724f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487a71dc FUN_1487a71dc body=115 status=ok
// SIG undefined FUN_1487a71dc(void)

void FUN_1487a71dc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487a724f FUN_1487a724f body=131 status=ok
// SIG undefined FUN_1487a724f(void)

void FUN_1487a724f(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
    do {
      *(undefined8 *)(param_1 + -0x58) = *(undefined8 *)(param_2 + -0x58);
      *(undefined4 *)(param_1 + -0x50) = *(undefined4 *)(param_2 + -0x50);
      FUN_144a7f96e(param_1 + -0x48,param_2 + -0x48);
      uVar1 = *(undefined8 *)(param_2 + -0x28);
      *(undefined8 *)(param_1 + -0x30) = *(undefined8 *)(param_2 + -0x30);
      *(undefined8 *)(param_1 + -0x28) = uVar1;
      *(undefined8 *)(param_1 + -0x20) = *(undefined8 *)(param_2 + -0x20);
      *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_2 + -0x18);
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_142b16116(param_1,param_2);
      param_1 = param_1 + 0x60;
      param_2 = param_2 + 0x60;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1487a72d4 FUN_1487a72d4 body=144 status=ok
// SIG undefined FUN_1487a72d4(void)

void FUN_1487a72d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b3d6940;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = &PTR_FUN_14b00be70;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xf00000d0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined1 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined1 *)((longlong)param_2 + 0x44) = 1;
  FUN_144a5dc74(param_2 + 9);
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 1487a73a2 FUN_1487a73a2 body=59 status=ok
// SIG undefined FUN_1487a73a2(void)

undefined8 FUN_1487a73a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a73ee FUN_1487a73ee body=38 status=ok
// SIG undefined FUN_1487a73ee(void)

void FUN_1487a73ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1407db14c(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1487a7456 FUN_1487a7456 body=83 status=ok
// SIG undefined FUN_1487a7456(void)

undefined8 * FUN_1487a7456(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1487a74aa FUN_1487a74aa body=29 status=ok
// SIG undefined FUN_1487a74aa(void)

undefined8 FUN_1487a74aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a74c8 FUN_1487a74c8 body=55 status=ok
// SIG undefined FUN_1487a74c8(void)

void FUN_1487a74c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f5a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f5a0 = FUN_140002ddd(FUN_14654089c,uVar1,L"UIStatDisplayValue");
  }
  return;
}



// FUNCTION 1487a7500 FUN_1487a7500 body=89 status=ok
// SIG undefined FUN_1487a7500(void)

undefined8 *
FUN_1487a7500(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Inventory/UIStatDisplayValue.h"
                ,0x14,L"Pure virtual not implemented (%s)",L"FStringDisplayValue::ResolveValue");
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_4 != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return param_2;
}



// FUNCTION 1487a755a FUN_1487a755a body=54 status=ok
// SIG undefined FUN_1487a755a(void)

undefined8 * FUN_1487a755a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Inventory/UIStatDisplayValue.h"
                ,0x13,L"Pure virtual not implemented (%s)",L"FStringDisplayValue::ResolveValue");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1487a7590 FUN_1487a7590 body=54 status=ok
// SIG undefined FUN_1487a7590(void)

undefined8 * FUN_1487a7590(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Inventory/UIStatDisplayValue.h"
                ,0x12,L"Pure virtual not implemented (%s)",L"FStringDisplayValue::ResolveValue");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1487a75c6 FUN_1487a75c6 body=42 status=ok
// SIG undefined FUN_1487a75c6(void)

undefined8 FUN_1487a75c6(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Inventory/UIStatDisplayValue.h"
                ,0x16,L"Pure virtual not implemented (%s)",L"FStringDisplayValue::operator==");
  return 0;
}



// FUNCTION 1487a75f0 FUN_1487a75f0 body=54 status=ok
// SIG undefined FUN_1487a75f0(void)

undefined8 * FUN_1487a75f0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Inventory/UIStatDisplayValue.h"
                ,0x17,L"Pure virtual not implemented (%s)",L"FStringDisplayValue::ToString");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1487a7626 FUN_1487a7626 body=42 status=ok
// SIG undefined FUN_1487a7626(void)

undefined1 FUN_1487a7626(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Inventory/UIStatDisplayValue.h"
                ,0x1a,L"Pure virtual not implemented (%s)",L"FStringDisplayValue::IsValidArgument");
  return 1;
}



// FUNCTION 1487a7650 FUN_1487a7650 body=42 status=ok
// SIG undefined FUN_1487a7650(void)

undefined1 FUN_1487a7650(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Inventory/UIStatDisplayValue.h"
                ,0x19,L"Pure virtual not implemented (%s)",L"FStringDisplayValue::IsValidArgument");
  return 1;
}



// FUNCTION 1487a767a FUN_1487a767a body=54 status=ok
// SIG undefined FUN_1487a767a(void)

undefined8 * FUN_1487a767a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Inventory/UIStatDisplayValue.h"
                ,0x1c,L"Pure virtual not implemented (%s)",L"FStringDisplayValue::GetArgumentIdent")
  ;
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1487a76b2 FUN_1487a76b2 body=37 status=ok
// SIG undefined FUN_1487a76b2(void)

void FUN_1487a76b2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1b8);
  FUN_143c8bed6(param_2);
  return;
}



// FUNCTION 1487a7704 FUN_1487a7704 body=63 status=ok
// SIG undefined FUN_1487a7704(void)

undefined1 FUN_1487a7704(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a788e(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 1487a776c FUN_1487a776c body=59 status=ok
// SIG undefined FUN_1487a776c(void)

undefined8 FUN_1487a776c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a77b8 FUN_1487a77b8 body=38 status=ok
// SIG undefined FUN_1487a77b8(void)

void FUN_1487a77b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_140c08962(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 1487a7830 FUN_1487a7830 body=38 status=ok
// SIG undefined FUN_1487a7830(void)

undefined8 FUN_1487a7830(undefined8 param_1,int param_2)

{
  FUN_140c08962();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a7856 FUN_1487a7856 body=55 status=ok
// SIG undefined FUN_1487a7856(void)

void FUN_1487a7856(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f540 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f540 = FUN_140002ddd(FUN_1465408fe,uVar1,L"TaggedAnimDef_GbxGame");
  }
  return;
}



// FUNCTION 1487a788e FUN_1487a788e body=135 status=ok
// SIG undefined FUN_1487a788e(void)

longlong FUN_1487a788e(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_147e3d4e6(param_1 + 0x20,param_2 + 0x20);
  FUN_148729378(param_1 + 0x70,param_2 + 0x70);
  FUN_148729378(param_1 + 0xc0,param_2 + 0xc0);
  FUN_148729378(param_1 + 0x110,param_2 + 0x110);
  FUN_148729378(param_1 + 0x160,param_2 + 0x160);
  *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 1487a7956 FUN_1487a7956 body=117 status=ok
// SIG undefined FUN_1487a7956(void)

undefined1 FUN_1487a7956(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_3 + lVar6;
      uVar3 = *(undefined4 *)(lVar1 + 0xc);
      uVar4 = *(undefined4 *)(lVar1 + 0x10);
      uVar5 = *(undefined4 *)(lVar1 + 0x14);
      lVar2 = param_2 + lVar6;
      *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar1 + 8);
      *(undefined4 *)(lVar2 + 0xc) = uVar3;
      *(undefined4 *)(lVar2 + 0x10) = uVar4;
      *(undefined4 *)(lVar2 + 0x14) = uVar5;
      FUN_1418443e8();
      FUN_14875e2b0(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      FUN_14875e2b0(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      lVar6 = lVar6 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a79f4 FUN_1487a79f4 body=59 status=ok
// SIG undefined FUN_1487a79f4(void)

undefined8 FUN_1487a79f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a7a3a FUN_1487a7a3a body=32 status=ok
// SIG undefined FUN_1487a7a3a(void)

void FUN_1487a7a3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1487a7a9c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1487a7a9c FUN_1487a7a9c body=59 status=ok
// SIG undefined FUN_1487a7a9c(void)

void FUN_1487a7a9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3d6e90;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1487a7b40 FUN_1487a7b40 body=59 status=ok
// SIG undefined FUN_1487a7b40(void)

undefined8 FUN_1487a7b40(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a7be2 FUN_1487a7be2 body=69 status=ok
// SIG undefined FUN_1487a7be2(void)

void FUN_1487a7be2(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b3d9970;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  FUN_144a5dc74(param_2 + 6);
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 9) = 1;
  return;
}



// FUNCTION 1487a7c3e FUN_1487a7c3e body=54 status=ok
// SIG undefined FUN_1487a7c3e(void)

undefined1 FUN_1487a7c3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a7d3c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1487a7c9c FUN_1487a7c9c body=59 status=ok
// SIG undefined FUN_1487a7c9c(void)

undefined8 FUN_1487a7c9c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a7ce2 FUN_1487a7ce2 body=32 status=ok
// SIG undefined FUN_1487a7ce2(void)

void FUN_1487a7ce2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14094d7aa(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1487a7d3c FUN_1487a7d3c body=120 status=ok
// SIG undefined FUN_1487a7d3c(void)

longlong FUN_1487a7d3c(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x30) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 1487a7db6 FUN_1487a7db6 body=28 status=ok
// SIG undefined FUN_1487a7db6(void)

undefined8 FUN_1487a7db6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487a7e64 FUN_1487a7e64 body=54 status=ok
// SIG undefined FUN_1487a7e64(void)

undefined1 FUN_1487a7e64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c8c220(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1487a7ec2 FUN_1487a7ec2 body=59 status=ok
// SIG undefined FUN_1487a7ec2(void)

undefined8 FUN_1487a7ec2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a7f08 FUN_1487a7f08 body=32 status=ok
// SIG undefined FUN_1487a7f08(void)

void FUN_1487a7f08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410d5cc8(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1487a7f6e FUN_1487a7f6e body=84 status=ok
// SIG undefined FUN_1487a7f6e(void)

longlong * FUN_1487a7f6e(longlong *param_1,longlong *param_2)

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



// FUNCTION 1487a7fc2 FUN_1487a7fc2 body=88 status=ok
// SIG undefined FUN_1487a7fc2(void)

undefined8 * FUN_1487a7fc2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1465417ea(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1487a801c FUN_1487a801c body=28 status=ok
// SIG undefined FUN_1487a801c(void)

undefined8 FUN_1487a801c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487a804a FUN_1487a804a body=37 status=ok
// SIG undefined FUN_1487a804a(void)

void FUN_1487a804a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x148);
  FUN_14583f71c(param_2);
  return;
}



// FUNCTION 1487a8096 FUN_1487a8096 body=63 status=ok
// SIG undefined FUN_1487a8096(void)

undefined1 FUN_1487a8096(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a81c0(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 1487a80fe FUN_1487a80fe body=59 status=ok
// SIG undefined FUN_1487a80fe(void)

undefined8 FUN_1487a80fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a814a FUN_1487a814a body=40 status=ok
// SIG undefined FUN_1487a814a(void)

void FUN_1487a814a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1457e69f6(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 1487a81c0 FUN_1487a81c0 body=112 status=ok
// SIG undefined FUN_1487a81c0(void)

longlong FUN_1487a81c0(longlong param_1,longlong param_2)

{
  FUN_1447715ec();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x30,param_2 + 0x30);
  }
  FUN_1487a8230(param_1 + 0x50,param_2 + 0x50);
  FUN_1487a82aa(param_1 + 0xa0,param_2 + 0xa0);
  FUN_1487a8230(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  return param_1;
}



// FUNCTION 1487a8230 FUN_1487a8230 body=122 status=ok
// SIG undefined FUN_1487a8230(void)

longlong FUN_1487a8230(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1487a8324(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1487a82aa FUN_1487a82aa body=122 status=ok
// SIG undefined FUN_1487a82aa(void)

longlong FUN_1487a82aa(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1487a8398(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1487a8324 FUN_1487a8324 body=115 status=ok
// SIG undefined FUN_1487a8324(void)

undefined8 * FUN_1487a8324(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14106833c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
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



// FUNCTION 1487a8398 FUN_1487a8398 body=211 status=ok
// SIG undefined FUN_1487a8398(void)

undefined8 * FUN_1487a8398(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1402d97ae(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140044672(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1447a97f4(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar4 + 10);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xc;
        puVar6 = puVar6 + 0xc;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1487a846c FUN_1487a846c body=101 status=ok
// SIG undefined FUN_1487a846c(void)

void FUN_1487a846c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  *(undefined4 *)((longlong)param_2 + 0x18) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined1 *)((longlong)param_2 + 0x90) = 0;
  return;
}



// FUNCTION 1487a854c FUN_1487a854c body=63 status=ok
// SIG undefined FUN_1487a854c(void)

undefined1 FUN_1487a854c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a8674(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1487a85b4 FUN_1487a85b4 body=59 status=ok
// SIG undefined FUN_1487a85b4(void)

undefined8 FUN_1487a85b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a8600 FUN_1487a8600 body=38 status=ok
// SIG undefined FUN_1487a8600(void)

void FUN_1487a8600(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1457e678a(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1487a8674 FUN_1487a8674 body=96 status=ok
// SIG undefined FUN_1487a8674(void)

undefined1 * FUN_1487a8674(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  if (param_2 != param_1) {
    FUN_1487a86d4(param_1 + 8,param_2 + 8);
    FUN_1487a86d4(param_1 + 0x20,param_2 + 0x20);
  }
  FUN_1487a8806(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  param_1[0x90] = param_2[0x90];
  return param_1;
}



// FUNCTION 1487a86d4 FUN_1487a86d4 body=304 status=ok
// SIG undefined FUN_1487a86d4(void)

void FUN_1487a86d4(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1487a8806 FUN_1487a8806 body=122 status=ok
// SIG undefined FUN_1487a8806(void)

longlong FUN_1487a8806(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1487a8880(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1487a8880 FUN_1487a8880 body=220 status=ok
// SIG undefined FUN_1487a8880(void)

undefined8 * FUN_1487a8880(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1410683b6(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1447a97f4(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar4 + 10);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1487a89c0 FUN_1487a89c0 body=59 status=ok
// SIG undefined FUN_1487a89c0(void)

undefined8 FUN_1487a89c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a8ac6 FUN_1487a8ac6 body=59 status=ok
// SIG undefined FUN_1487a8ac6(void)

undefined8 FUN_1487a8ac6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a8bd4 FUN_1487a8bd4 body=73 status=ok
// SIG undefined FUN_1487a8bd4(void)

undefined1 FUN_1487a8bd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_140d02432();
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a8c46 FUN_1487a8c46 body=59 status=ok
// SIG undefined FUN_1487a8c46(void)

undefined8 FUN_1487a8c46(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a8d4a FUN_1487a8d4a body=63 status=ok
// SIG undefined FUN_1487a8d4a(void)

undefined1 FUN_1487a8d4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1400fcd14(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1487a8db2 FUN_1487a8db2 body=59 status=ok
// SIG undefined FUN_1487a8db2(void)

undefined8 FUN_1487a8db2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a8dfe FUN_1487a8dfe body=38 status=ok
// SIG undefined FUN_1487a8dfe(void)

void FUN_1487a8dfe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1447cd732(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1487a8e86 FUN_1487a8e86 body=63 status=ok
// SIG undefined FUN_1487a8e86(void)

undefined1 FUN_1487a8e86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14070e2ba(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 1487a8eee FUN_1487a8eee body=59 status=ok
// SIG undefined FUN_1487a8eee(void)

undefined8 FUN_1487a8eee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a8f8c FUN_1487a8f8c body=68 status=ok
// SIG undefined FUN_1487a8f8c(void)

void FUN_1487a8f8c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *param_1 = &PTR_FUN_14b023b20;
    FUN_1447805d2(param_1 + 3);
    *param_1 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_1 + 1);
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}



// FUNCTION 1487a8fee FUN_1487a8fee body=63 status=ok
// SIG undefined FUN_1487a8fee(void)

undefined1 FUN_1487a8fee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a9106(param_2,param_3);
    param_3 = param_3 + 0x2e8;
    param_2 = param_2 + 0x2e8;
  }
  return 1;
}



// FUNCTION 1487a9056 FUN_1487a9056 body=59 status=ok
// SIG undefined FUN_1487a9056(void)

undefined8 FUN_1487a9056(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a90a2 FUN_1487a90a2 body=38 status=ok
// SIG undefined FUN_1487a90a2(void)

void FUN_1487a90a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e8) == '\x01') {
    FUN_14063b166(param_2);
    *(undefined1 *)(param_2 + 0x2e8) = 0;
  }
  return;
}



// FUNCTION 1487a9106 FUN_1487a9106 body=149 status=ok
// SIG undefined FUN_1487a9106(void)

longlong FUN_1487a9106(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_1400fcd14(param_1 + 0x38,param_2 + 0x38);
  FUN_1400fcd14(param_1 + 0xd8,param_2 + 0xd8);
  FUN_14070e2ba(param_1 + 0x178,param_2 + 0x178);
  FUN_1487a919c(param_1 + 0x2d8,param_2 + 0x2d8);
  return param_1;
}



// FUNCTION 1487a919c FUN_1487a919c body=88 status=ok
// SIG undefined FUN_1487a919c(void)

undefined8 * FUN_1487a919c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14083056c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1487a924e FUN_1487a924e body=80 status=ok
// SIG undefined FUN_1487a924e(void)

undefined8 FUN_1487a924e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      if (*(char *)(param_3 + -8) == '\0') {
        *(undefined1 *)(param_2 + -8) = 0;
        *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      }
      FUN_140830282(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a92c6 FUN_1487a92c6 body=59 status=ok
// SIG undefined FUN_1487a92c6(void)

undefined8 FUN_1487a92c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a930c FUN_1487a930c body=34 status=ok
// SIG undefined FUN_1487a930c(void)

void FUN_1487a930c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1487a93da(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1487a937c FUN_1487a937c body=38 status=ok
// SIG undefined FUN_1487a937c(void)

undefined8 FUN_1487a937c(undefined8 param_1,int param_2)

{
  FUN_1487a93da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a93a2 FUN_1487a93a2 body=55 status=ok
// SIG undefined FUN_1487a93a2(void)

void FUN_1487a93a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f7d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f7d0 = FUN_140002ddd(FUN_146541179,uVar1,L"UsabilityResponseDef");
  }
  return;
}



// FUNCTION 1487a93da FUN_1487a93da body=71 status=ok
// SIG undefined FUN_1487a93da(void)

void FUN_1487a93da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3d99d0;
  FUN_14063ab1b(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1487a9500 FUN_1487a9500 body=59 status=ok
// SIG undefined FUN_1487a9500(void)

undefined8 FUN_1487a9500(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a9546 FUN_1487a9546 body=43 status=ok
// SIG undefined FUN_1487a9546(void)

void FUN_1487a9546(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1487a95f6 FUN_1487a95f6 body=115 status=ok
// SIG undefined FUN_1487a95f6(void)

undefined8 FUN_1487a95f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      if (*(char *)(param_3 + -0x20) == '\0') {
        *(undefined1 *)(param_2 + -0x20) = 0;
        *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      }
      FUN_140830282(param_2 + -0x18,param_3 + -0x18);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140830282(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a9692 FUN_1487a9692 body=59 status=ok
// SIG undefined FUN_1487a9692(void)

undefined8 FUN_1487a9692(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a96d8 FUN_1487a96d8 body=32 status=ok
// SIG undefined FUN_1487a96d8(void)

void FUN_1487a96d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1487a9744(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1487a9744 FUN_1487a9744 body=101 status=ok
// SIG undefined FUN_1487a9744(void)

void FUN_1487a9744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b023870;
  FUN_14063ab1b(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14063ab1b(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1487a9828 FUN_1487a9828 body=63 status=ok
// SIG undefined FUN_1487a9828(void)

undefined1 FUN_1487a9828(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a9938(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 1487a9890 FUN_1487a9890 body=59 status=ok
// SIG undefined FUN_1487a9890(void)

undefined8 FUN_1487a9890(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a98dc FUN_1487a98dc body=38 status=ok
// SIG undefined FUN_1487a98dc(void)

void FUN_1487a98dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_14063a91c(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1487a9938 FUN_1487a9938 body=212 status=ok
// SIG undefined FUN_1487a9938(void)

longlong FUN_1487a9938(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x30) == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  }
  FUN_140830282(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  FUN_140830282(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x80) == '\0') {
    *(undefined1 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  }
  FUN_140830282(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  FUN_140830282(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 1487a9a0e FUN_1487a9a0e body=28 status=ok
// SIG undefined FUN_1487a9a0e(void)

undefined8 FUN_1487a9a0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487a9b0e FUN_1487a9b0e body=63 status=ok
// SIG undefined FUN_1487a9b0e(void)

undefined1 FUN_1487a9b0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14083012e(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 1487a9b76 FUN_1487a9b76 body=59 status=ok
// SIG undefined FUN_1487a9b76(void)

undefined8 FUN_1487a9b76(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a9c0a FUN_1487a9c0a body=65 status=ok
// SIG undefined FUN_1487a9c0a(void)

void FUN_1487a9c0a(longlong param_1)

{
  if (*(char *)(param_1 + 0x108) == '\x01') {
    *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_1 + 0xe8);
    FUN_14063a91c(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x108) = 0;
  }
  return;
}



// FUNCTION 1487a9cde FUN_1487a9cde body=28 status=ok
// SIG undefined FUN_1487a9cde(void)

void FUN_1487a9cde(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_140e354a8(param_1);
  return;
}



// FUNCTION 1487a9d32 FUN_1487a9d32 body=40 status=ok
// SIG undefined FUN_1487a9d32(void)

undefined8 FUN_1487a9d32(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140df9088(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1487a9d66 FUN_1487a9d66 body=28 status=ok
// SIG undefined FUN_1487a9d66(void)

void FUN_1487a9d66(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_14104c314(param_1);
  return;
}



// FUNCTION 1487a9dba FUN_1487a9dba body=40 status=ok
// SIG undefined FUN_1487a9dba(void)

undefined8 FUN_1487a9dba(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140e50888(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1487a9df0 FUN_1487a9df0 body=181 status=ok
// SIG undefined FUN_1487a9df0(void)

longlong * FUN_1487a9df0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar3 = FUN_1447210f0();
    lVar4 = FUN_141552268(uVar3,0);
    if (lVar4 != 0) {
      plVar5 = &local_30;
      FUN_1487b12f8(lVar4,plVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x558));
      if (local_30 != 0) {
        plVar5 = (longlong *)FUN_1487b27f4(local_30);
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
      if (local_30 != 0) goto LAB_1487a9e82;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1487a9e82:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 1487a9ea6 FUN_1487a9ea6 body=275 status=ok
// SIG undefined FUN_1487a9ea6(void)

undefined8 FUN_1487a9ea6(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = FUN_14587e20a();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
  if (plVar2 == (longlong *)0x0) {
LAB_1487a9ef9:
    plVar3 = (longlong *)0x0;
  }
  else {
    uVar1 = FUN_14587e20a();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    if (plVar3 == (longlong *)0x0 || plVar2 == plVar3) goto LAB_1487a9ef9;
    lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(longlong *)(lVar5 + 0x28) != 0) goto LAB_1487a9f3d;
  }
  uVar1 = FUN_1401b0f18();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar4 = (longlong *)FUN_144718840(plVar2,uVar1);
    if ((plVar4 != (longlong *)0x0 && plVar2 != plVar4) &&
       (lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4), lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xa8);
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      uVar1 = FUN_14587e20a();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      uVar1 = FUN_14587e20a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar2 == plVar3) {
        return 0;
      }
    }
  }
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
LAB_1487a9f3d:
                    /* WARNING: Could not recover jumptable at 0x0001487a9f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
  return uVar1;
}



// FUNCTION 1487a9fba FUN_1487a9fba body=45 status=ok
// SIG undefined FUN_1487a9fba(void)

longlong FUN_1487a9fba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410b9b1a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a9fe8 FUN_1487a9fe8 body=45 status=ok
// SIG undefined FUN_1487a9fe8(void)

longlong FUN_1487a9fe8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487aa0cc FUN_1487aa0cc body=59 status=ok
// SIG undefined FUN_1487aa0cc(void)

undefined8 FUN_1487aa0cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aa18c FUN_1487aa18c body=63 status=ok
// SIG undefined FUN_1487aa18c(void)

undefined1 FUN_1487aa18c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487aa2f0(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 1487aa1f4 FUN_1487aa1f4 body=59 status=ok
// SIG undefined FUN_1487aa1f4(void)

undefined8 FUN_1487aa1f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aa240 FUN_1487aa240 body=40 status=ok
// SIG undefined FUN_1487aa240(void)

void FUN_1487aa240(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_1459dc522(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 1487aa2b6 FUN_1487aa2b6 body=57 status=ok
// SIG undefined FUN_1487aa2b6(void)

void FUN_1487aa2b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f890 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f890 = FUN_140002ddd(FUN_146541b27,uVar1,L"UsabilityGlobals");
  }
  return;
}



// FUNCTION 1487aa2f0 FUN_1487aa2f0 body=117 status=ok
// SIG undefined FUN_1487aa2f0(void)

longlong FUN_1487aa2f0(longlong param_1,longlong param_2)

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
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  uVar8 = *(undefined4 *)(param_2 + 0x54);
  uVar9 = *(undefined4 *)(param_2 + 0x5c);
  uVar10 = *(undefined4 *)(param_2 + 0x60);
  uVar11 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar9;
  *(undefined4 *)(param_1 + 0x60) = uVar10;
  *(undefined4 *)(param_1 + 100) = uVar11;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  FUN_1487aa366(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 1487aa366 FUN_1487aa366 body=122 status=ok
// SIG undefined FUN_1487aa366(void)

longlong FUN_1487aa366(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1487aa3e0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1487aa3e0 FUN_1487aa3e0 body=121 status=ok
// SIG undefined FUN_1487aa3e0(void)

undefined8 * FUN_1487aa3e0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1459834be(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 1487aa45a FUN_1487aa45a body=64 status=ok
// SIG undefined FUN_1487aa45a(void)

void FUN_1487aa45a(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b3e4af0;
  FUN_144a5dc74(param_2 + 3);
  param_2[5] = DAT_14caa8578;
  *(undefined1 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 1487aa4b0 FUN_1487aa4b0 body=54 status=ok
// SIG undefined FUN_1487aa4b0(void)

undefined1 FUN_1487aa4b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487aa5ea(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1487aa50e FUN_1487aa50e body=59 status=ok
// SIG undefined FUN_1487aa50e(void)

undefined8 FUN_1487aa50e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aa554 FUN_1487aa554 body=32 status=ok
// SIG undefined FUN_1487aa554(void)

void FUN_1487aa554(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1487aa5ae(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487aa5ae FUN_1487aa5ae body=60 status=ok
// SIG undefined FUN_1487aa5ae(void)

void FUN_1487aa5ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3e4af0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1487aa5ea FUN_1487aa5ea body=99 status=ok
// SIG undefined FUN_1487aa5ea(void)

longlong FUN_1487aa5ea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
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
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 1487aa64e FUN_1487aa64e body=28 status=ok
// SIG undefined FUN_1487aa64e(void)

undefined8 FUN_1487aa64e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487aa70c FUN_1487aa70c body=59 status=ok
// SIG undefined FUN_1487aa70c(void)

undefined8 FUN_1487aa70c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aa7ac FUN_1487aa7ac body=29 status=ok
// SIG undefined FUN_1487aa7ac(void)

undefined8 FUN_1487aa7ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487aa86a FUN_1487aa86a body=59 status=ok
// SIG undefined FUN_1487aa86a(void)

undefined8 FUN_1487aa86a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aa8b6 FUN_1487aa8b6 body=38 status=ok
// SIG undefined FUN_1487aa8b6(void)

void FUN_1487aa8b6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_14063ace6(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1487aa974 FUN_1487aa974 body=59 status=ok
// SIG undefined FUN_1487aa974(void)

undefined8 FUN_1487aa974(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aaaa6 FUN_1487aaaa6 body=103 status=ok
// SIG undefined FUN_1487aaaa6(void)

undefined8 FUN_1487aaaa6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_141289ada(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined4 *)(param_2 + 0x28 + lVar6) = *(undefined4 *)(param_3 + 0x28 + lVar6);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487aab36 FUN_1487aab36 body=59 status=ok
// SIG undefined FUN_1487aab36(void)

undefined8 FUN_1487aab36(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aab7c FUN_1487aab7c body=43 status=ok
// SIG undefined FUN_1487aab7c(void)

void FUN_1487aab7c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1487aabf6 FUN_1487aabf6 body=55 status=ok
// SIG undefined FUN_1487aabf6(void)

void FUN_1487aabf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f968 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f968 = FUN_140002ddd(FUN_146541f45,uVar1,L"UsableConsumerDef");
  }
  return;
}



// FUNCTION 1487aac56 FUN_1487aac56 body=112 status=ok
// SIG undefined FUN_1487aac56(void)

undefined1 FUN_1487aac56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined2 *)(param_2 + 0x10 + lVar3) = *(undefined2 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487aacee FUN_1487aacee body=59 status=ok
// SIG undefined FUN_1487aacee(void)

undefined8 FUN_1487aacee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aadc0 FUN_1487aadc0 body=99 status=ok
// SIG undefined FUN_1487aadc0(void)

undefined8 FUN_1487aadc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_148786740();
      FUN_14878679e(param_2 + lVar2 + 0x20,param_3 + lVar2 + 0x20);
      lVar2 = lVar2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487aae4c FUN_1487aae4c body=59 status=ok
// SIG undefined FUN_1487aae4c(void)

undefined8 FUN_1487aae4c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aae92 FUN_1487aae92 body=32 status=ok
// SIG undefined FUN_1487aae92(void)

void FUN_1487aae92(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_140f7620c(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1487aaf62 FUN_1487aaf62 body=59 status=ok
// SIG undefined FUN_1487aaf62(void)

undefined8 FUN_1487aaf62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ab068 FUN_1487ab068 body=59 status=ok
// SIG undefined FUN_1487ab068(void)

undefined8 FUN_1487ab068(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ab16e FUN_1487ab16e body=59 status=ok
// SIG undefined FUN_1487ab16e(void)

undefined8 FUN_1487ab16e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ab27a FUN_1487ab27a body=59 status=ok
// SIG undefined FUN_1487ab27a(void)

undefined8 FUN_1487ab27a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ab386 FUN_1487ab386 body=59 status=ok
// SIG undefined FUN_1487ab386(void)

undefined8 FUN_1487ab386(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ab494 FUN_1487ab494 body=59 status=ok
// SIG undefined FUN_1487ab494(void)

undefined8 FUN_1487ab494(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ab5a2 FUN_1487ab5a2 body=59 status=ok
// SIG undefined FUN_1487ab5a2(void)

undefined8 FUN_1487ab5a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ab6b0 FUN_1487ab6b0 body=59 status=ok
// SIG undefined FUN_1487ab6b0(void)

undefined8 FUN_1487ab6b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ab7be FUN_1487ab7be body=59 status=ok
// SIG undefined FUN_1487ab7be(void)

undefined8 FUN_1487ab7be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ab8cc FUN_1487ab8cc body=59 status=ok
// SIG undefined FUN_1487ab8cc(void)

undefined8 FUN_1487ab8cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ab9da FUN_1487ab9da body=59 status=ok
// SIG undefined FUN_1487ab9da(void)

undefined8 FUN_1487ab9da(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487abab0 FUN_1487abab0 body=54 status=ok
// SIG undefined FUN_1487abab0(void)

undefined1 FUN_1487abab0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1487abb0e FUN_1487abb0e body=59 status=ok
// SIG undefined FUN_1487abb0e(void)

undefined8 FUN_1487abb0e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487abb54 FUN_1487abb54 body=37 status=ok
// SIG undefined FUN_1487abb54(void)

void FUN_1487abb54(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1487abc06 FUN_1487abc06 body=102 status=ok
// SIG undefined FUN_1487abc06(void)

undefined8 FUN_1487abc06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487abc94 FUN_1487abc94 body=59 status=ok
// SIG undefined FUN_1487abc94(void)

undefined8 FUN_1487abc94(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487abcda FUN_1487abcda body=38 status=ok
// SIG undefined FUN_1487abcda(void)

void FUN_1487abcda(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1487abd78 FUN_1487abd78 body=90 status=ok
// SIG undefined FUN_1487abd78(void)

undefined1 FUN_1487abd78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 1487abdfa FUN_1487abdfa body=59 status=ok
// SIG undefined FUN_1487abdfa(void)

undefined8 FUN_1487abdfa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487abee8 FUN_1487abee8 body=80 status=ok
// SIG undefined FUN_1487abee8(void)

undefined8 FUN_1487abee8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1487abf60 FUN_1487abf60 body=59 status=ok
// SIG undefined FUN_1487abf60(void)

undefined8 FUN_1487abf60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487abfa6 FUN_1487abfa6 body=38 status=ok
// SIG undefined FUN_1487abfa6(void)

void FUN_1487abfa6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1487ac05c FUN_1487ac05c body=62 status=ok
// SIG undefined FUN_1487ac05c(void)

undefined1 FUN_1487ac05c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14173baee(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1487ac0c2 FUN_1487ac0c2 body=59 status=ok
// SIG undefined FUN_1487ac0c2(void)

undefined8 FUN_1487ac0c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ac1c0 FUN_1487ac1c0 body=78 status=ok
// SIG undefined FUN_1487ac1c0(void)

undefined8 FUN_1487ac1c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1447715ec();
      lVar2 = lVar2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487ac236 FUN_1487ac236 body=59 status=ok
// SIG undefined FUN_1487ac236(void)

undefined8 FUN_1487ac236(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ac27c FUN_1487ac27c body=40 status=ok
// SIG undefined FUN_1487ac27c(void)

void FUN_1487ac27c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487ac2f4 FUN_1487ac2f4 body=33 status=ok
// SIG undefined FUN_1487ac2f4(void)

void FUN_1487ac2f4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  lVar1 = FUN_140161d51();
  *param_2 = *(undefined8 *)(lVar1 + 0x20);
  return;
}



// FUNCTION 1487ac356 FUN_1487ac356 body=59 status=ok
// SIG undefined FUN_1487ac356(void)

undefined8 FUN_1487ac356(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ac42c FUN_1487ac42c body=54 status=ok
// SIG undefined FUN_1487ac42c(void)

undefined1 FUN_1487ac42c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487ac53e(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1487ac48a FUN_1487ac48a body=59 status=ok
// SIG undefined FUN_1487ac48a(void)

undefined8 FUN_1487ac48a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ac4d0 FUN_1487ac4d0 body=32 status=ok
// SIG undefined FUN_1487ac4d0(void)

void FUN_1487ac4d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140c72088(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1487ac53e FUN_1487ac53e body=114 status=ok
// SIG undefined FUN_1487ac53e(void)

longlong FUN_1487ac53e(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(longlong *)(param_1 + 0x20) = lVar3;
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



// FUNCTION 1487ac61a FUN_1487ac61a body=59 status=ok
// SIG undefined FUN_1487ac61a(void)

undefined8 FUN_1487ac61a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ac6ba FUN_1487ac6ba body=29 status=ok
// SIG undefined FUN_1487ac6ba(void)

undefined8 FUN_1487ac6ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487ac6d8 FUN_1487ac6d8 body=55 status=ok
// SIG undefined FUN_1487ac6d8(void)

void FUN_1487ac6d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fbf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fbf8 = FUN_140002ddd(FUN_146542ddf,uVar1,L"WaypointAttachmentStrategy");
  }
  return;
}



// FUNCTION 1487ac710 FUN_1487ac710 body=113 status=ok
// SIG undefined FUN_1487ac710(void)

void FUN_1487ac710(undefined8 param_1,undefined8 *param_2)

{
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
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xe] = 0;
  FUN_145a5e442(param_2);
  *param_2 = &PTR_FUN_14b3e38b0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 1487ac782 FUN_1487ac782 body=70 status=ok
// SIG undefined FUN_1487ac782(void)

void FUN_1487ac782(undefined8 param_1,undefined8 *param_2)

{
  FUN_145a5e442(param_2);
  *param_2 = &PTR_FUN_14b3e38b0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 1487ac7ec FUN_1487ac7ec body=102 status=ok
// SIG undefined FUN_1487ac7ec(void)

undefined8 FUN_1487ac7ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487ac53e(param_2,param_3);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    FUN_1447715ec(param_2 + 0x38,param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
    FUN_1487ac954(param_2 + 0x68,param_3 + 0x68);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1487ac87a FUN_1487ac87a body=59 status=ok
// SIG undefined FUN_1487ac87a(void)

undefined8 FUN_1487ac87a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ac8c0 FUN_1487ac8c0 body=32 status=ok
// SIG undefined FUN_1487ac8c0(void)

void FUN_1487ac8c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_140c71ff0(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1487ac92e FUN_1487ac92e body=38 status=ok
// SIG undefined FUN_1487ac92e(void)

undefined8 FUN_1487ac92e(undefined8 param_1,int param_2)

{
  FUN_140c71ff0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487ac954 FUN_1487ac954 body=93 status=ok
// SIG undefined FUN_1487ac954(void)

undefined8 * FUN_1487ac954(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c7203b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487ac9b2(param_1,iVar1);
      FUN_1487aca14(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487ac9b2 FUN_1487ac9b2 body=98 status=ok
// SIG undefined FUN_1487ac9b2(void)

void FUN_1487ac9b2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487aca14 FUN_1487aca14 body=45 status=ok
// SIG undefined FUN_1487aca14(void)

void FUN_1487aca14(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1487acac0 FUN_1487acac0 body=76 status=ok
// SIG undefined FUN_1487acac0(void)

undefined8 FUN_1487acac0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1447715ec(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487acb34 FUN_1487acb34 body=59 status=ok
// SIG undefined FUN_1487acb34(void)

undefined8 FUN_1487acb34(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487acb7a FUN_1487acb7a body=50 status=ok
// SIG undefined FUN_1487acb7a(void)

void FUN_1487acb7a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b3e4b50;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1487acbfa FUN_1487acbfa body=59 status=ok
// SIG undefined FUN_1487acbfa(void)

undefined8 * FUN_1487acbfa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3e4b50;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487acc36 FUN_1487acc36 body=55 status=ok
// SIG undefined FUN_1487acc36(void)

void FUN_1487acc36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc28 = FUN_140002ddd(FUN_146542ed5,uVar1,L"WaypointAttachmentStrategy_RegistryActor");
  }
  return;
}



// FUNCTION 1487acc6e FUN_1487acc6e body=113 status=ok
// SIG undefined FUN_1487acc6e(void)

void FUN_1487acc6e(undefined8 param_1,undefined8 *param_2)

{
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
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xe] = 0;
  FUN_145a5e442(param_2);
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14b3e38f0;
  return;
}



// FUNCTION 1487acce0 FUN_1487acce0 body=70 status=ok
// SIG undefined FUN_1487acce0(void)

void FUN_1487acce0(undefined8 param_1,undefined8 *param_2)

{
  FUN_145a5e442(param_2);
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14b3e38f0;
  return;
}



// FUNCTION 1487acd4a FUN_1487acd4a body=102 status=ok
// SIG undefined FUN_1487acd4a(void)

undefined8 FUN_1487acd4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487ac53e(param_2,param_3);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    FUN_1447715ec(param_2 + 0x38,param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
    FUN_1487ac954(param_2 + 0x68,param_3 + 0x68);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1487acdd8 FUN_1487acdd8 body=59 status=ok
// SIG undefined FUN_1487acdd8(void)

undefined8 FUN_1487acdd8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ace1e FUN_1487ace1e body=32 status=ok
// SIG undefined FUN_1487ace1e(void)

void FUN_1487ace1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_140c71ff0(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1487ace8c FUN_1487ace8c body=38 status=ok
// SIG undefined FUN_1487ace8c(void)

undefined8 FUN_1487ace8c(undefined8 param_1,int param_2)

{
  FUN_140c71ff0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487aceb2 FUN_1487aceb2 body=55 status=ok
// SIG undefined FUN_1487aceb2(void)

void FUN_1487aceb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc40 =
         FUN_140002ddd(FUN_146542f6b,uVar1,L"WaypointAttachmentStrategyState_SpawnedActor");
  }
  return;
}



// FUNCTION 1487acf64 FUN_1487acf64 body=76 status=ok
// SIG undefined FUN_1487acf64(void)

undefined8 FUN_1487acf64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1447715ec(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487acfd8 FUN_1487acfd8 body=59 status=ok
// SIG undefined FUN_1487acfd8(void)

undefined8 FUN_1487acfd8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ad01e FUN_1487ad01e body=50 status=ok
// SIG undefined FUN_1487ad01e(void)

void FUN_1487ad01e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b3e4b50;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1487ad09e FUN_1487ad09e body=59 status=ok
// SIG undefined FUN_1487ad09e(void)

undefined8 * FUN_1487ad09e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3e4b50;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487ad0da FUN_1487ad0da body=55 status=ok
// SIG undefined FUN_1487ad0da(void)

void FUN_1487ad0da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc58 = FUN_140002ddd(FUN_146543001,uVar1,L"WaypointAttachmentStrategy_SpawnedActor");
  }
  return;
}



// FUNCTION 1487ad176 FUN_1487ad176 body=111 status=ok
// SIG undefined FUN_1487ad176(void)

undefined8 FUN_1487ad176(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_141289ada(param_2 + -0x28,param_3 + -0x28);
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1447715ec(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x2c);
      uVar2 = *(undefined4 *)(param_3 + 0x30);
      uVar3 = *(undefined4 *)(param_3 + 0x34);
      uVar4 = *(undefined4 *)(param_3 + 0x38);
      uVar5 = *(undefined4 *)(param_3 + 0x3c);
      uVar6 = *(undefined4 *)(param_3 + 0x40);
      uVar7 = *(undefined4 *)(param_3 + 0x44);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_2 + 0x2c) = uVar1;
      *(undefined4 *)(param_2 + 0x30) = uVar2;
      *(undefined4 *)(param_2 + 0x34) = uVar3;
      *(undefined4 *)(param_2 + 0x38) = uVar4;
      *(undefined4 *)(param_2 + 0x3c) = uVar5;
      *(undefined4 *)(param_2 + 0x40) = uVar6;
      *(undefined4 *)(param_2 + 0x44) = uVar7;
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487ad20e FUN_1487ad20e body=59 status=ok
// SIG undefined FUN_1487ad20e(void)

undefined8 FUN_1487ad20e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ad29c FUN_1487ad29c body=69 status=ok
// SIG undefined FUN_1487ad29c(void)

void FUN_1487ad29c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *param_1 = &PTR_FUN_14b3e3930;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_1 + 1);
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return;
}



// FUNCTION 1487ad382 FUN_1487ad382 body=59 status=ok
// SIG undefined FUN_1487ad382(void)

undefined8 FUN_1487ad382(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ad422 FUN_1487ad422 body=29 status=ok
// SIG undefined FUN_1487ad422(void)

undefined8 FUN_1487ad422(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487ad440 FUN_1487ad440 body=55 status=ok
// SIG undefined FUN_1487ad440(void)

void FUN_1487ad440(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fce8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fce8 = FUN_140002ddd(FUN_1465431b3,uVar1,L"WaypointRuntimeParams");
  }
  return;
}



// FUNCTION 1487ad4c0 FUN_1487ad4c0 body=59 status=ok
// SIG undefined FUN_1487ad4c0(void)

undefined8 FUN_1487ad4c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ad5e2 FUN_1487ad5e2 body=59 status=ok
// SIG undefined FUN_1487ad5e2(void)

undefined8 FUN_1487ad5e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ad682 FUN_1487ad682 body=55 status=ok
// SIG undefined FUN_1487ad682(void)

void FUN_1487ad682(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fd48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fd48 = FUN_140002ddd(FUN_14654333d,uVar1,L"ZoomHandlerValueResolver");
  }
  return;
}



// FUNCTION 1487ad752 FUN_1487ad752 body=117 status=ok
// SIG undefined FUN_1487ad752(void)

undefined1 FUN_1487ad752(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(param_2 + 0x10 + lVar6) = *(undefined1 *)(param_3 + 0x10 + lVar6);
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      if (param_2 != param_3) {
        FUN_148726a2e(param_2 + lVar6 + 0x18,param_3 + lVar6 + 0x18);
        FUN_1487ad8a4(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      }
      lVar6 = lVar6 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487ad7f0 FUN_1487ad7f0 body=59 status=ok
// SIG undefined FUN_1487ad7f0(void)

undefined8 FUN_1487ad7f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


