// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14879a5d4 FUN_14879a5d4 body=28 status=ok
// SIG undefined FUN_14879a5d4(void)

undefined8 FUN_14879a5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14879a690 FUN_14879a690 body=59 status=ok
// SIG undefined FUN_14879a690(void)

undefined8 FUN_14879a690(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879a730 FUN_14879a730 body=29 status=ok
// SIG undefined FUN_14879a730(void)

undefined8 FUN_14879a730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a74e FUN_14879a74e body=57 status=ok
// SIG undefined FUN_14879a74e(void)

void FUN_14879a74e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e408 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e408 = FUN_140002ddd(FUN_14653abba,uVar1,L"SpawnedPickupActorDefPayload");
  }
  return;
}



// FUNCTION 14879a788 FUN_14879a788 body=95 status=ok
// SIG undefined FUN_14879a788(void)

void FUN_14879a788(undefined8 param_1,undefined8 *param_2)

{
  FUN_1404e2388(param_2);
  *param_2 = &PTR_FUN_14b3ae2c0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  *(undefined2 *)(param_2 + 0x15) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  FUN_144a7a8f6((longlong)param_2 + 0xcc);
  return;
}



// FUNCTION 14879a7fe FUN_14879a7fe body=99 status=ok
// SIG undefined FUN_14879a7fe(void)

undefined1 FUN_14879a7fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1a790(param_2,param_3);
    FUN_1487602b2(param_2 + 0x90,param_3 + 0x90);
    uVar1 = *(undefined4 *)(param_3 + 0xcc);
    uVar2 = *(undefined4 *)(param_3 + 0xd0);
    uVar3 = *(undefined4 *)(param_3 + 0xd4);
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_3 + 200);
    *(undefined4 *)(param_2 + 0xcc) = uVar1;
    *(undefined4 *)(param_2 + 0xd0) = uVar2;
    *(undefined4 *)(param_2 + 0xd4) = uVar3;
    param_2 = param_2 + 0xd8;
    param_3 = param_3 + 0xd8;
  }
  return 1;
}



// FUNCTION 14879a88a FUN_14879a88a body=59 status=ok
// SIG undefined FUN_14879a88a(void)

undefined8 FUN_14879a88a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879a8d6 FUN_14879a8d6 body=38 status=ok
// SIG undefined FUN_14879a8d6(void)

void FUN_14879a8d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_141167ffc(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 14879a96a FUN_14879a96a body=63 status=ok
// SIG undefined FUN_14879a96a(void)

undefined1 FUN_14879a96a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14879aa7e(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 14879a9d2 FUN_14879a9d2 body=59 status=ok
// SIG undefined FUN_14879a9d2(void)

undefined8 FUN_14879a9d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879aa1e FUN_14879aa1e body=38 status=ok
// SIG undefined FUN_14879aa1e(void)

void FUN_14879aa1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1410ee820(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 14879aa7e FUN_14879aa7e body=261 status=ok
// SIG undefined FUN_14879aa7e(void)

longlong FUN_14879aa7e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_14184b2ce(param_1 + 0x48,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  FUN_144a7bb84(param_1 + 0x78,param_2 + 0x78);
  FUN_144a82394(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  FUN_144a7bb84(param_1 + 0xa8,param_2 + 0xa8);
  FUN_144a82394(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140e7790a(param_1 + 200,param_2 + 200);
  FUN_1457b9864(param_1 + 0xe0,param_2 + 0xe0);
  uVar4 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  return param_1;
}



// FUNCTION 14879ab84 FUN_14879ab84 body=28 status=ok
// SIG undefined FUN_14879ab84(void)

undefined8 FUN_14879ab84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14879ac06 FUN_14879ac06 body=59 status=ok
// SIG undefined FUN_14879ac06(void)

undefined8 FUN_14879ac06(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879aca8 FUN_14879aca8 body=218 status=ok
// SIG undefined FUN_14879aca8(void)

void FUN_14879aca8(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  memset(param_2,0,0xf8);
  *(undefined4 *)((longlong)param_2 + 8) = 0x3002;
  *(undefined4 *)((longlong)param_2 + 0x54) = 2;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)((longlong)param_2 + 0x70) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
  ;
  *(undefined8 *)((longlong)param_2 + 0x78) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x98) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)((longlong)param_2 + 0x88) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
  ;
  *(undefined8 *)((longlong)param_2 + 0x90) = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)((longlong)param_2 + 0xa0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
  ;
  *(undefined8 *)((longlong)param_2 + 0xa8) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xb0) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)((longlong)param_2 + 0xb8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xbc) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc0) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc4) = uVar4;
  *(undefined8 *)((longlong)param_2 + 200) = DAT_14c8464f0;
  FUN_1405c5fa2();
  *(undefined **)((longlong)param_2 + 0xe0) = &DAT_14cb769e8;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined ***)((longlong)param_2 + 0xd8) = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 14879ad82 FUN_14879ad82 body=228 status=ok
// SIG undefined FUN_14879ad82(void)

void FUN_14879ad82(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0x3002;
  param_2[2] = 0;
  param_2[9] = 0;
  param_2[10] = 0x200000000;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x10] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0xe] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0xf] = uVar1;
  param_2[0x13] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x11] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x12] = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x14] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x15] = uVar1;
  param_2[0x16] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0x17) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xbc) = uVar2;
  *(undefined4 *)(param_2 + 0x18) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc4) = uVar4;
  param_2[0x19] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  FUN_1405c5fa2();
  param_2[0x1c] = &DAT_14cb769e8;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1b] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 14879ae84 FUN_14879ae84 body=63 status=ok
// SIG undefined FUN_14879ae84(void)

undefined1 FUN_14879ae84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487992d0(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 14879aeec FUN_14879aeec body=59 status=ok
// SIG undefined FUN_14879aeec(void)

undefined8 FUN_14879aeec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879af38 FUN_14879af38 body=38 status=ok
// SIG undefined FUN_14879af38(void)

void FUN_14879af38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_14185fad4(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 14879aff8 FUN_14879aff8 body=59 status=ok
// SIG undefined FUN_14879aff8(void)

undefined8 FUN_14879aff8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879b09a FUN_14879b09a body=66 status=ok
// SIG undefined FUN_14879b09a(void)

undefined8 * FUN_14879b09a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3b10b0;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_1403d7c6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879b0e2 FUN_14879b0e2 body=164 status=ok
// SIG undefined FUN_14879b0e2(void)

void FUN_14879b0e2(longlong *param_1,undefined8 param_2)

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
        goto LAB_14879b162;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14879b162:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14879b1ba FUN_14879b1ba body=216 status=ok
// SIG undefined FUN_14879b1ba(void)

void FUN_14879b1ba(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_120);
  }
  puVar2 = local_120;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1415100ba(puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879b53c FUN_14879b53c body=45 status=ok
// SIG undefined FUN_14879b53c(void)

longlong FUN_14879b53c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879b56a FUN_14879b56a body=45 status=ok
// SIG undefined FUN_14879b56a(void)

longlong FUN_14879b56a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879b598 FUN_14879b598 body=45 status=ok
// SIG undefined FUN_14879b598(void)

longlong FUN_14879b598(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879b5c6 FUN_14879b5c6 body=40 status=ok
// SIG undefined FUN_14879b5c6(void)

void FUN_14879b5c6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined4 *)((longlong)param_2 + 0x90) = 0x3f800000;
  return;
}



// FUNCTION 14879b604 FUN_14879b604 body=63 status=ok
// SIG undefined FUN_14879b604(void)

undefined1 FUN_14879b604(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148771ece(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 14879b66c FUN_14879b66c body=59 status=ok
// SIG undefined FUN_14879b66c(void)

undefined8 FUN_14879b66c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879b70e FUN_14879b70e body=88 status=ok
// SIG undefined FUN_14879b70e(void)

void FUN_14879b70e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x340);
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b3b8090;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0x447a000040a00000;
  param_2[0x65] = 0x47742400;
  *(undefined2 *)(param_2 + 0x66) = 0;
  return;
}



// FUNCTION 14879b766 FUN_14879b766 body=72 status=ok
// SIG undefined FUN_14879b766(void)

void FUN_14879b766(undefined8 param_1,undefined8 *param_2)

{
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b3b8090;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0x447a000040a00000;
  param_2[0x65] = 0x47742400;
  *(undefined2 *)(param_2 + 0x66) = 0;
  return;
}



// FUNCTION 14879b7d2 FUN_14879b7d2 body=136 status=ok
// SIG undefined FUN_14879b7d2(void)

undefined8 FUN_14879b7d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f74370(param_2,param_3);
    FUN_14879b9a2(param_2 + 0x300,param_3 + 0x300);
    FUN_14879ba02(param_2 + 0x310,param_3 + 0x310);
    uVar1 = *(undefined4 *)(param_3 + 0x324);
    uVar2 = *(undefined4 *)(param_3 + 0x328);
    uVar3 = *(undefined4 *)(param_3 + 0x32c);
    *(undefined4 *)(param_2 + 800) = *(undefined4 *)(param_3 + 800);
    *(undefined4 *)(param_2 + 0x324) = uVar1;
    *(undefined4 *)(param_2 + 0x328) = uVar2;
    *(undefined4 *)(param_2 + 0x32c) = uVar3;
    *(undefined2 *)(param_2 + 0x330) = *(undefined2 *)(param_3 + 0x330);
    param_2 = param_2 + 0x340;
    param_3 = param_3 + 0x340;
  }
  return 1;
}



// FUNCTION 14879b882 FUN_14879b882 body=59 status=ok
// SIG undefined FUN_14879b882(void)

undefined8 FUN_14879b882(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879b8ce FUN_14879b8ce body=40 status=ok
// SIG undefined FUN_14879b8ce(void)

void FUN_14879b8ce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x340) == '\x01') {
    FUN_14586897a(param_2);
    *(undefined1 *)(param_2 + 0x340) = 0;
  }
  return;
}



// FUNCTION 14879b944 FUN_14879b944 body=38 status=ok
// SIG undefined FUN_14879b944(void)

undefined8 FUN_14879b944(undefined8 param_1,int param_2)

{
  FUN_14586897a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879b96a FUN_14879b96a body=55 status=ok
// SIG undefined FUN_14879b96a(void)

void FUN_14879b96a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e8d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e8d8 = FUN_140002ddd(FUN_14653cb09,uVar1,L"ProjectileAudioProvider");
  }
  return;
}



// FUNCTION 14879b9a2 FUN_14879b9a2 body=95 status=ok
// SIG undefined FUN_14879b9a2(void)

undefined8 * FUN_14879b9a2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145868a28(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14879ba62(param_1,iVar1);
      FUN_14879bad5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14879ba02 FUN_14879ba02 body=95 status=ok
// SIG undefined FUN_14879ba02(void)

undefined8 * FUN_14879ba02(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458689e3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14879bb86(param_1,iVar1);
      FUN_14879bbf9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14879ba62 FUN_14879ba62 body=115 status=ok
// SIG undefined FUN_14879ba62(void)

void FUN_14879ba62(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14879bad5 FUN_14879bad5 body=52 status=ok
// SIG undefined FUN_14879bad5(void)

void FUN_14879bad5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14879bb0a(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 14879bb0a FUN_14879bb0a body=124 status=ok
// SIG undefined FUN_14879bb0a(void)

undefined8 * FUN_14879bb0a(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lVar1 + 0x50));
  }
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  FUN_141818f7a(param_1 + 5,param_2 + 5);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x44);
  return param_1;
}



// FUNCTION 14879bb86 FUN_14879bb86 body=115 status=ok
// SIG undefined FUN_14879bb86(void)

void FUN_14879bb86(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14879bbf9 FUN_14879bbf9 body=106 status=ok
// SIG undefined FUN_14879bbf9(void)

void FUN_14879bbf9(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14cb26569;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_14036e5a4(*(undefined8 *)(lVar1 + 0x50));
        bVar2 = DAT_14cb26569;
      }
      *(undefined4 *)(param_1 + 0x10 + lVar3) = *(undefined4 *)(param_2 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14879bc64 FUN_14879bc64 body=61 status=ok
// SIG undefined FUN_14879bc64(void)

void FUN_14879bc64(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d12354();
  FUN_140aed452(param_2,uVar1);
  *param_2 = &PTR_FUN_14b421900;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  return;
}



// FUNCTION 14879bcbc FUN_14879bcbc body=90 status=ok
// SIG undefined FUN_14879bcbc(void)

undefined8 FUN_14879bcbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x22c);
    uVar2 = *(undefined4 *)(param_3 + 0x230);
    uVar3 = *(undefined4 *)(param_3 + 0x234);
    *(undefined4 *)(param_2 + 0x228) = *(undefined4 *)(param_3 + 0x228);
    *(undefined4 *)(param_2 + 0x22c) = uVar1;
    *(undefined4 *)(param_2 + 0x230) = uVar2;
    *(undefined4 *)(param_2 + 0x234) = uVar3;
    *(undefined8 *)(param_2 + 0x238) = *(undefined8 *)(param_3 + 0x238);
    param_2 = param_2 + 0x240;
    param_3 = param_3 + 0x240;
  }
  return 1;
}



// FUNCTION 14879bd3e FUN_14879bd3e body=59 status=ok
// SIG undefined FUN_14879bd3e(void)

undefined8 FUN_14879bd3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879bd8a FUN_14879bd8a body=38 status=ok
// SIG undefined FUN_14879bd8a(void)

void FUN_14879bd8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x240) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x240) = 0;
  }
  return;
}



// FUNCTION 14879be08 FUN_14879be08 body=48 status=ok
// SIG undefined FUN_14879be08(void)

void FUN_14879be08(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b3b10b0;
  return;
}



// FUNCTION 14879be38 FUN_14879be38 body=32 status=ok
// SIG undefined FUN_14879be38(void)

void FUN_14879be38(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b3b10b0;
  return;
}



// FUNCTION 14879beb2 FUN_14879beb2 body=59 status=ok
// SIG undefined FUN_14879beb2(void)

undefined8 FUN_14879beb2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879befe FUN_14879befe body=63 status=ok
// SIG undefined FUN_14879befe(void)

void FUN_14879befe(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b3b10b0;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_1403d7c6c(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 14879c004 FUN_14879c004 body=59 status=ok
// SIG undefined FUN_14879c004(void)

undefined8 FUN_14879c004(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879c102 FUN_14879c102 body=59 status=ok
// SIG undefined FUN_14879c102(void)

undefined8 FUN_14879c102(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879c1fc FUN_14879c1fc body=59 status=ok
// SIG undefined FUN_14879c1fc(void)

undefined8 FUN_14879c1fc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879c2f8 FUN_14879c2f8 body=59 status=ok
// SIG undefined FUN_14879c2f8(void)

undefined8 FUN_14879c2f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879c3c2 FUN_14879c3c2 body=63 status=ok
// SIG undefined FUN_14879c3c2(void)

undefined1 FUN_14879c3c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486157b2(param_2,param_3);
    param_3 = param_3 + 0x6f0;
    param_2 = param_2 + 0x6f0;
  }
  return 1;
}



// FUNCTION 14879c42a FUN_14879c42a body=59 status=ok
// SIG undefined FUN_14879c42a(void)

undefined8 FUN_14879c42a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879c476 FUN_14879c476 body=38 status=ok
// SIG undefined FUN_14879c476(void)

void FUN_14879c476(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x6f0) == '\x01') {
    FUN_140adedd4(param_2);
    *(undefined1 *)(param_2 + 0x6f0) = 0;
  }
  return;
}



// FUNCTION 14879c55e FUN_14879c55e body=86 status=ok
// SIG undefined FUN_14879c55e(void)

undefined8 FUN_14879c55e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1486162fa(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14879c5dc FUN_14879c5dc body=59 status=ok
// SIG undefined FUN_14879c5dc(void)

undefined8 FUN_14879c5dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879c622 FUN_14879c622 body=48 status=ok
// SIG undefined FUN_14879c622(void)

void FUN_14879c622(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14aff4f48;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14879c6be FUN_14879c6be body=136 status=ok
// SIG undefined FUN_14879c6be(void)

undefined8 FUN_14879c6be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar2;
      plVar1[1] = *(longlong *)(param_3 + lVar4 + 8);
      memcpy(plVar1 + 2,(void *)(param_3 + lVar4 + 0x10),0x88);
      lVar4 = lVar4 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14879c76e FUN_14879c76e body=59 status=ok
// SIG undefined FUN_14879c76e(void)

undefined8 FUN_14879c76e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879c83a FUN_14879c83a body=150 status=ok
// SIG undefined FUN_14879c83a(void)

undefined8 FUN_14879c83a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
    do {
      puVar5 = (undefined8 *)(param_3 + -0x98);
      puVar6 = (undefined8 *)(param_2 + -0x98);
      for (lVar4 = 0xf; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_3 + 0x14);
      param_3 = param_3 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14879c8f8 FUN_14879c8f8 body=59 status=ok
// SIG undefined FUN_14879c8f8(void)

undefined8 FUN_14879c8f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879c944 FUN_14879c944 body=57 status=ok
// SIG undefined FUN_14879c944(void)

void FUN_14879c944(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14aff4f50;
    if (param_2[0x14] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 14879c9f0 FUN_14879c9f0 body=54 status=ok
// SIG undefined FUN_14879c9f0(void)

undefined1 FUN_14879c9f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14879cb02(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14879ca4e FUN_14879ca4e body=59 status=ok
// SIG undefined FUN_14879ca4e(void)

undefined8 FUN_14879ca4e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879ca94 FUN_14879ca94 body=32 status=ok
// SIG undefined FUN_14879ca94(void)

void FUN_14879ca94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14185fd30(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14879cb02 FUN_14879cb02 body=157 status=ok
// SIG undefined FUN_14879cb02(void)

longlong * FUN_14879cb02(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_14689c22e();
      lVar10 = *param_2;
    }
  }
  *param_1 = lVar10;
  param_1[1] = param_2[1];
  param_1[6] = param_2[6];
  lVar10 = param_2[2];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar3 = param_2[3];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar9 = param_2[5];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  *(int *)(param_1 + 5) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  *(int *)(param_1 + 2) = (int)lVar10;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(int *)(param_1 + 3) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  lVar10 = param_2[7];
  lVar3 = param_2[8];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[8];
  param_1[7] = lVar10;
  param_1[8] = lVar3;
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
  *(char *)(param_1 + 9) = (char)param_2[9];
  return param_1;
}



// FUNCTION 14879cbd0 FUN_14879cbd0 body=100 status=ok
// SIG undefined FUN_14879cbd0(void)

undefined1 FUN_14879cbd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14879cc5c FUN_14879cc5c body=59 status=ok
// SIG undefined FUN_14879cc5c(void)

undefined8 FUN_14879cc5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879cd66 FUN_14879cd66 body=59 status=ok
// SIG undefined FUN_14879cd66(void)

undefined8 FUN_14879cd66(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879ce06 FUN_14879ce06 body=29 status=ok
// SIG undefined FUN_14879ce06(void)

undefined8 FUN_14879ce06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879ce24 FUN_14879ce24 body=55 status=ok
// SIG undefined FUN_14879ce24(void)

void FUN_14879ce24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ead8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ead8 = FUN_140002ddd(FUN_14653d02b,uVar1,L"ProjectileMovementModifierData");
  }
  return;
}



// FUNCTION 14879ce5c FUN_14879ce5c body=54 status=ok
// SIG undefined FUN_14879ce5c(void)

undefined8 * FUN_14879ce5c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/ProjectileUtils/ProjectileMovementModifier.h"
                ,0x12,L"Pure virtual not implemented (%s)",
                L"FProjectileMovementModifierData::CreateState");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14879cedc FUN_14879cedc body=103 status=ok
// SIG undefined FUN_14879cedc(void)

undefined1 FUN_14879cedc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 8;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14879cf6c FUN_14879cf6c body=59 status=ok
// SIG undefined FUN_14879cf6c(void)

undefined8 FUN_14879cf6c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879d00c FUN_14879d00c body=29 status=ok
// SIG undefined FUN_14879d00c(void)

undefined8 FUN_14879d00c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879d02a FUN_14879d02a body=55 status=ok
// SIG undefined FUN_14879d02a(void)

void FUN_14879d02a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eaf0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eaf0 = FUN_140002ddd(FUN_14653d4d7,uVar1,L"ProjectileMovementModifierState");
  }
  return;
}



// FUNCTION 14879d07a FUN_14879d07a body=365 status=ok
// SIG undefined FUN_14879d07a(void)

void FUN_14879d07a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0x4000;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  uVar1 = FUN_143e101fa(&local_58,local_3c,local_40);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879d1e8 FUN_14879d1e8 body=365 status=ok
// SIG undefined FUN_14879d1e8(void)

void FUN_14879d1e8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0x4000;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  uVar1 = FUN_143e102ce(&local_58,local_3c,local_40);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879d356 FUN_14879d356 body=781 status=ok
// SIG undefined FUN_14879d356(void)

void FUN_14879d356(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_168 [32];
  uint local_148;
  undefined1 *local_140;
  undefined8 local_138 [13];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  byte local_a9;
  longlong local_a8 [2];
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_94 = 0;
  local_88 = 0;
  local_80 = DAT_14c8464f8;
  uStack_78 = DAT_14c846500;
  local_70 = DAT_14c846508;
  local_68 = 0;
  local_64 = 0;
  local_58 = 0;
  local_40 = DAT_14c8464f0;
  local_50 = DAT_14c8464e0;
  uStack_48 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar2 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  plVar4 = local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_a9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a9);
  }
  local_d0[0] = 0;
  local_c8 = DAT_14c8464e0;
  uStack_c0 = DAT_14c8464e8;
  local_b8 = DAT_14c8464f0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d0);
  }
  local_140 = local_d0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_140 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_148 = (uint)local_a9;
  FUN_14894017a(local_138,local_38,puVar2,plVar4);
  puVar3 = local_138;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879d66a FUN_14879d66a body=626 status=ok
// SIG undefined FUN_14879d66a(void)

void FUN_14879d66a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [13];
  int local_60;
  byte local_59;
  longlong local_58 [3];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_59 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  local_60 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e8 = local_40;
  uStack_e4 = uStack_3c;
  uStack_e0 = uStack_38;
  uStack_dc = uStack_34;
  local_d8 = local_30;
  local_f0 = local_60 != 0;
  local_f8 = (uint)local_59;
  FUN_1489401f8(local_c8,local_28,&local_e8,plVar2);
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879d8ea FUN_14879d8ea body=1802 status=ok
// SIG undefined FUN_14879d8ea(void)

void FUN_14879d8ea(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined8 *local_440;
  undefined8 *local_438;
  undefined1 *local_430;
  undefined4 *local_428;
  undefined1 *local_420;
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_400;
  undefined8 local_3f8 [12];
  int local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_360 [12];
  undefined8 local_300 [9];
  undefined1 local_2b8 [8];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [8];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined1 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined2 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  undefined1 local_1a0 [16];
  undefined2 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120 [2];
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_138 = 0;
  local_130 = 0x4000;
  local_128 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  local_140 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_140);
  }
  local_1a0[0] = 0;
  local_1a0._4_8_ = 0;
  local_190 = 0;
  local_188 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_180 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_178 = DAT_14c846508;
  local_170 = 0;
  local_16c = 0;
  local_160 = 0;
  local_158 = (undefined4)DAT_14c8464e0;
  uStack_154 = DAT_14c8464e0._4_4_;
  uStack_150 = (undefined4)DAT_14c8464e8;
  uStack_14c = DAT_14c8464e8._4_4_;
  local_148 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a0);
  }
  local_1d0 = (uint)local_1d0._2_2_ << 0x10;
  uStack_1c8 = (undefined4)DAT_14c8464f8;
  uStack_1c4 = DAT_14c8464f8._4_4_;
  uStack_1c0 = (undefined4)DAT_14c846500;
  uStack_1bc = DAT_14c846500._4_4_;
  uStack_1b8 = DAT_14c846508;
  local_1b0 = 0;
  uStack_1ac = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d0);
  }
  local_1d8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d8);
  }
  local_238[0] = 0;
  local_238._4_8_ = 0;
  local_228 = 0;
  local_220 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_218 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_210 = DAT_14c846508;
  local_208 = 0;
  local_204 = 0;
  local_1f8 = 0;
  local_1f0 = (undefined4)DAT_14c8464e0;
  uStack_1ec = DAT_14c8464e0._4_4_;
  uStack_1e8 = (undefined4)DAT_14c8464e8;
  uStack_1e4 = DAT_14c8464e8._4_4_;
  local_1e0 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_238);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_238);
  }
  local_280._0_4_ = 0;
  local_280._4_1_ = 0;
  local_278 = 0xbf80000000000000;
  local_270 = 0xc4750000;
  local_26c = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_280);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_280);
  }
  local_298[0] = 0;
  local_290 = 0;
  uStack_288 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_298);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_298);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_120[0] = 0;
  local_118 = 0;
  local_110 = 0x3002;
  local_108 = 0;
  local_d0 = 0;
  local_c8 = 0x200000000;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0xf00000d0;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_1405c5fa2();
  local_68 = &DAT_14cb769e8;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = &PTR_FUN_14b0394b0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_120);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_2b8[0] = 0;
  local_2b0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_2a8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_2a0 = DAT_14c8464f0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2b8);
  }
  local_428 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_428 = local_120;
  }
  local_430 = local_298;
  if (puVar1 != (undefined1 *)0x0) {
    local_430 = puVar1;
  }
  local_420 = local_2b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_420 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_438 = local_300;
  puVar4 = &local_280;
  puVar5 = local_438;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_440 = local_360;
  puVar4 = (undefined8 *)local_238;
  puVar5 = local_440;
  for (lVar3 = 0xc; local_448 = local_1d8, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_398 = local_1d0;
  uStack_394 = uStack_1cc;
  uStack_390 = uStack_1c8;
  uStack_38c = uStack_1c4;
  local_388 = uStack_1c0;
  uStack_384 = uStack_1bc;
  uStack_380 = (undefined4)uStack_1b8;
  uStack_37c = uStack_1b8._4_4_;
  local_378 = local_1b0;
  uStack_374 = (undefined4)uStack_1ac;
  uStack_370 = uStack_1ac._4_4_;
  uStack_36c = uStack_1a4;
  puVar4 = (undefined8 *)local_1a0;
  puVar5 = local_3f8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_410 = local_138;
  local_408 = local_130;
  local_400 = 0;
  FUN_14893f69c(&local_410,local_140);
  FUN_1414dc478(local_120);
  if ((local_50 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879dff6 FUN_14879dff6 body=1579 status=ok
// SIG undefined FUN_14879dff6(void)

void FUN_14879dff6(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_388 [32];
  undefined8 *local_368;
  undefined4 local_360;
  undefined1 *local_358;
  undefined4 *local_350;
  undefined1 *local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 local_328 [12];
  int local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_290 [9];
  undefined1 local_248 [8];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 local_228 [8];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined1 local_190 [16];
  undefined2 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110 [2];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_128 = 0;
  local_120 = 0x4000;
  local_118 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_130 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  local_190[0] = 0;
  local_190._4_8_ = 0;
  local_180 = 0;
  local_178 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_170 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_168 = DAT_14c846508;
  local_160 = 0;
  local_15c = 0;
  local_150 = 0;
  local_148 = (undefined4)DAT_14c8464e0;
  uStack_144 = DAT_14c8464e0._4_4_;
  uStack_140 = (undefined4)DAT_14c8464e8;
  uStack_13c = DAT_14c8464e8._4_4_;
  local_138 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_190);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_190);
  }
  local_1c0 = (uint)local_1c0._2_2_ << 0x10;
  uStack_1b8 = (undefined4)DAT_14c8464f8;
  uStack_1b4 = DAT_14c8464f8._4_4_;
  uStack_1b0 = (undefined4)DAT_14c846500;
  uStack_1ac = DAT_14c846500._4_4_;
  uStack_1a8 = DAT_14c846508;
  local_1a0 = 0;
  uStack_19c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c0);
  }
  local_208._0_4_ = 0;
  local_208._4_1_ = 0;
  local_200 = 0xbf80000000000000;
  local_1f8 = 0xc4750000;
  local_1f4 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_208);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_208);
  }
  local_20c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20c);
  }
  local_228[0] = 0;
  local_220 = 0;
  uStack_218 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_228);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_228);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_110[0] = 0;
  local_108 = 0;
  local_100 = 0x3002;
  local_f8 = 0;
  local_c0 = 0;
  local_b8 = 0x200000000;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0xf00000d0;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1405c5fa2();
  local_58 = &DAT_14cb769e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = &PTR_FUN_14b0394b0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_110);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_248[0] = 0;
  local_240 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_238 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_230 = DAT_14c8464f0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_248);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_248);
  }
  local_360 = local_20c;
  local_350 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_350 = local_110;
  }
  local_358 = local_228;
  if (puVar1 != (undefined1 *)0x0) {
    local_358 = puVar1;
  }
  local_348 = local_248;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_348 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_368 = local_290;
  puVar4 = &local_208;
  puVar5 = local_368;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_2a8 = local_1a0;
  uStack_2a4 = (undefined4)uStack_19c;
  uStack_2a0 = uStack_19c._4_4_;
  uStack_29c = uStack_194;
  local_2b8 = uStack_1b0;
  uStack_2b4 = uStack_1ac;
  uStack_2b0 = (undefined4)uStack_1a8;
  uStack_2ac = uStack_1a8._4_4_;
  local_2c8 = local_1c0;
  uStack_2c4 = uStack_1bc;
  uStack_2c0 = uStack_1b8;
  uStack_2bc = uStack_1b4;
  puVar4 = (undefined8 *)local_190;
  puVar5 = local_328;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_340 = local_128;
  local_338 = local_120;
  local_330 = 0;
  FUN_14893fd2a(&local_340,local_130);
  FUN_1414dc478(local_110);
  if ((local_40 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879e622 FUN_14879e622 body=1594 status=ok
// SIG undefined FUN_14879e622(void)

void FUN_14879e622(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  undefined8 *local_380;
  undefined1 *local_378;
  undefined4 *local_370;
  undefined1 *local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 local_348 [12];
  int local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0 [9];
  undefined1 local_258 [8];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 local_238 [8];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined1 local_190 [16];
  undefined2 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110 [2];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_128 = 0;
  local_120 = 0x4000;
  local_118 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_130 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  local_190[0] = 0;
  local_190._4_8_ = 0;
  local_180 = 0;
  local_178 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_170 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_168 = DAT_14c846508;
  local_160 = 0;
  local_15c = 0;
  local_150 = 0;
  local_148 = (undefined4)DAT_14c8464e0;
  uStack_144 = DAT_14c8464e0._4_4_;
  uStack_140 = (undefined4)DAT_14c8464e8;
  uStack_13c = DAT_14c8464e8._4_4_;
  local_138 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_190);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_190);
  }
  local_1c0 = (uint)local_1c0._2_2_ << 0x10;
  uStack_1b8 = (undefined4)DAT_14c8464f8;
  uStack_1b4 = DAT_14c8464f8._4_4_;
  uStack_1b0 = (undefined4)DAT_14c846500;
  uStack_1ac = DAT_14c846500._4_4_;
  uStack_1a8 = DAT_14c846508;
  local_1a0 = 0;
  uStack_19c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d8);
  }
  local_220._0_4_ = 0;
  local_220._4_1_ = 0;
  local_218 = 0xbf80000000000000;
  local_210 = 0xc4750000;
  local_20c = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_220);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_220);
  }
  local_238[0] = 0;
  local_230 = 0;
  uStack_228 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_238);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_238);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_110[0] = 0;
  local_108 = 0;
  local_100 = 0x3002;
  local_f8 = 0;
  local_c0 = 0;
  local_b8 = 0x200000000;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0xf00000d0;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1405c5fa2();
  local_58 = &DAT_14cb769e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = &PTR_FUN_14b0394b0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_110);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_258[0] = 0;
  local_250 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_248 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_240 = DAT_14c8464f0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_258);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_258);
  }
  local_370 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_370 = local_110;
  }
  local_378 = local_238;
  if (puVar1 != (undefined1 *)0x0) {
    local_378 = puVar1;
  }
  local_368 = local_258;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_368 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_380 = local_2a0;
  puVar4 = &local_220;
  puVar5 = local_380;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_388 = &local_2b8;
  local_2a8 = local_1c8;
  local_2b8 = local_1d8;
  uStack_2b0 = uStack_1d0;
  local_2e8 = local_1c0;
  uStack_2e4 = uStack_1bc;
  uStack_2e0 = uStack_1b8;
  uStack_2dc = uStack_1b4;
  local_2d8 = uStack_1b0;
  uStack_2d4 = uStack_1ac;
  uStack_2d0 = (undefined4)uStack_1a8;
  uStack_2cc = uStack_1a8._4_4_;
  local_2c8 = local_1a0;
  uStack_2c4 = (undefined4)uStack_19c;
  uStack_2c0 = uStack_19c._4_4_;
  uStack_2bc = uStack_194;
  puVar4 = (undefined8 *)local_190;
  puVar5 = local_348;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_360 = local_128;
  local_358 = local_120;
  local_350 = 0;
  FUN_14893f760(&local_360,local_130);
  FUN_1414dc478(local_110);
  if ((local_40 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879ec5e FUN_14879ec5e body=2176 status=ok
// SIG undefined FUN_14879ec5e(void)

void FUN_14879ec5e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined1 auStack_508 [32];
  longlong *local_4e8;
  undefined8 *local_4e0;
  undefined8 local_4d8;
  undefined8 *local_4d0;
  undefined8 *local_4c8;
  undefined4 local_4c0;
  undefined4 local_4b8;
  undefined4 *local_4b0;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  longlong local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined2 local_440;
  undefined6 uStack_43e;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined8 uStack_41c;
  undefined4 uStack_414;
  undefined8 local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  longlong local_3f0;
  longlong local_3e8 [3];
  undefined1 local_3c9;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong lStack_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8 [2];
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined1 local_340;
  undefined8 local_33c;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined1 local_314;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined **local_2f8;
  undefined *local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1a8;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_508;
  local_3b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3b0);
  }
  local_3c8 = 0xffffffffffffffff;
  uStack_3c0 = 0;
  lStack_3b8 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c8);
  }
  local_3c9 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c9);
  }
  puVar6 = &local_3c9;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_3e8[0] = 0;
  local_3e8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3e8);
  }
  plVar5 = local_3e8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_3f0 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3f0);
  }
  plVar9 = &local_3f0;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  local_408 = 0;
  local_400 = 0x4000;
  local_3f8 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_408);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_408);
  }
  local_410 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_410);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_410);
  }
  local_2b0 = 0;
  local_2a8 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  local_2a4 = 0xffffffff00000080;
  local_29c = 0;
  local_290 = 0;
  local_288 = 0;
  local_260 = 0;
  local_258 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_254 = 0xffffffff00000080;
  local_24c = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0xffffffff00000000;
  local_200 = 0;
  local_1f8 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_1f4 = 0xffffffff00000080;
  local_1ec = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = 0;
  local_180 = 0;
  local_178 = 0x200000000;
  local_168 = 0;
  local_160 = 0;
  uStack_15c = 0x20;
  uStack_158 = 0xffffffff;
  uStack_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0x200000000;
  local_100 = 0;
  local_f8 = 0;
  uStack_f4 = 0x20;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_a8 = 0x200000000;
  local_98 = 0;
  local_90 = 0;
  uStack_8c = 0x20;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d8);
  }
  puVar7 = &local_2d8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  local_440 = 0;
  uStack_438 = (undefined4)DAT_14c8464f8;
  uStack_434 = DAT_14c8464f8._4_4_;
  uStack_430 = (undefined4)DAT_14c846500;
  uStack_42c = DAT_14c846500._4_4_;
  uStack_428 = DAT_14c846508;
  local_420 = 0;
  uStack_41c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_440);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_440);
  }
  local_444 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_444);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_444);
  }
  local_448 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_448);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_448);
  }
  local_3a8[0] = 0;
  local_3a0 = 0;
  local_398 = 0x3002;
  local_390 = 0;
  local_358 = 0;
  local_350 = 0x200000000;
  local_348 = 0;
  local_340 = 0;
  local_33c = 0;
  local_330 = 0;
  local_328 = 0xf00000d0;
  local_320 = 0;
  local_318 = 0;
  local_314 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_300 = 0;
  FUN_1405c5fa2();
  local_2f0 = &DAT_14cb769e8;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = &PTR_FUN_14b0394b0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3a8);
  }
  uVar4 = local_410;
  uVar3 = local_444;
  uVar2 = local_448;
  puVar8 = local_3a8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_478 = CONCAT62(uStack_43e,local_440);
  uStack_470 = CONCAT44(uStack_434,uStack_438);
  local_468 = uStack_430;
  uStack_464 = uStack_42c;
  uStack_460 = (undefined4)uStack_428;
  uStack_45c = uStack_428._4_4_;
  local_458 = local_420;
  uStack_454 = (undefined4)uStack_41c;
  uStack_450 = uStack_41c._4_4_;
  uStack_44c = uStack_414;
  local_490 = local_408;
  local_488 = local_400;
  local_480 = 0;
  local_4a8 = (undefined4)local_3c8;
  uStack_4a4 = local_3c8._4_4_;
  uStack_4a0 = (undefined4)uStack_3c0;
  uStack_49c = uStack_3c0._4_4_;
  local_498 = lStack_3b8;
  if ((lStack_3b8 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_4b8 = uVar2;
  local_4c0 = uVar3;
  local_4c8 = &local_478;
  local_4d8 = uVar4;
  local_4e0 = &local_490;
  local_4e8 = plVar9;
  local_4d0 = puVar7;
  local_4b0 = puVar8;
  FUN_14893fdf0(local_3b0,&local_4a8,puVar6,plVar5);
  if ((DAT_14c950c29 == 1) && (*plVar9 != 0)) {
    FUN_14689c22e();
  }
  FUN_1414dc478(local_3a8);
  FUN_14076ba26(&local_2d8);
  if (local_3e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879f4e0 FUN_14879f4e0 body=1509 status=ok
// SIG undefined FUN_14879f4e0(void)

void FUN_14879f4e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_468 [32];
  undefined4 local_448;
  undefined4 local_440;
  undefined4 *local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_420;
  int local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined8 uStack_3b4;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined4 local_388 [2];
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined8 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined1 local_320;
  undefined8 local_31c;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined **local_2d8;
  undefined *local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined4 local_188;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_3a0 = 0;
  local_398 = 0x4000;
  local_390 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a0);
  }
  local_3a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a8);
  }
  local_290 = 0;
  local_288 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  local_284 = 0xffffffff00000080;
  local_27c = 0;
  local_270 = 0;
  local_268 = 0;
  local_240 = 0;
  local_238 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_234 = 0xffffffff00000080;
  local_22c = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0xffffffff00000000;
  local_1e0 = 0;
  local_1d8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1d4 = 0xffffffff00000080;
  local_1cc = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_188 = 0;
  local_160 = 0;
  local_158 = 0x200000000;
  local_148 = 0;
  local_140 = 0;
  uStack_13c = 0x20;
  uStack_138 = 0xffffffff;
  uStack_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_f8 = 0;
  local_f0 = 0x200000000;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x20;
  uStack_d0 = 0xffffffff;
  uStack_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_88 = 0x200000000;
  local_78 = 0;
  local_70 = 0;
  uStack_6c = 0x20;
  uStack_68 = 0xffffffff;
  uStack_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2b8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3d8 = (uint)local_3d8._2_2_ << 0x10;
  uStack_3d0 = (undefined4)DAT_14c8464f8;
  uStack_3cc = DAT_14c8464f8._4_4_;
  uStack_3c8 = (undefined4)DAT_14c846500;
  uStack_3c4 = DAT_14c846500._4_4_;
  uStack_3c0 = DAT_14c846508;
  local_3b8 = 0;
  uStack_3b4 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d8);
  }
  local_3dc = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3dc);
  }
  local_3e0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3e0);
  }
  local_388[0] = 0;
  local_380 = 0;
  local_378 = 0x3002;
  local_370 = 0;
  local_338 = 0;
  local_330 = 0x200000000;
  local_328 = 0;
  local_320 = 0;
  local_31c = 0;
  local_310 = 0;
  local_308 = 0xf00000d0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f4 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2e0 = 0;
  FUN_1405c5fa2();
  local_2d0 = &DAT_14cb769e8;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2d8 = &PTR_FUN_14b0394b0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_388);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_388);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = &local_2b8;
  }
  local_438 = *(undefined4 **)(param_2 + 0x38);
  if (*(undefined4 **)(param_2 + 0x38) == (undefined4 *)0x0) {
    local_438 = local_388;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_418 = local_3d8;
  uStack_414 = uStack_3d4;
  uStack_410 = uStack_3d0;
  uStack_40c = uStack_3cc;
  local_408 = uStack_3c8;
  uStack_404 = uStack_3c4;
  uStack_400 = (undefined4)uStack_3c0;
  uStack_3fc = uStack_3c0._4_4_;
  local_3f8 = local_3b8;
  uStack_3f4 = (undefined4)uStack_3b4;
  uStack_3f0 = uStack_3b4._4_4_;
  uStack_3ec = uStack_3ac;
  local_430 = local_3a0;
  local_428 = local_398;
  local_420 = 0;
  local_440 = local_3e0;
  local_448 = local_3dc;
  FUN_148940082(&local_430,local_3a8,puVar1);
  FUN_1414dc478(local_388);
  FUN_14076ba26(&local_2b8);
  if ((local_40 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879fae9 FUN_14879fae9 body=102 status=ok
// SIG undefined FUN_14879fae9(void)

void FUN_14879fae9(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879fb56 FUN_14879fb56 body=456 status=ok
// SIG undefined FUN_14879fb56(void)

void FUN_14879fb56(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_30 = 0x678bcdb;
  local_28 = 0;
  FUN_1446ef920();
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
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  local_68 = local_48;
  FUN_1488bcd0c(param_1,&local_60,iVar1 != 0,local_40);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879fd20 FUN_14879fd20 body=225 status=ok
// SIG undefined FUN_14879fd20(void)

void FUN_14879fd20(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
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
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488bd514(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879fe02 FUN_14879fe02 body=148 status=ok
// SIG undefined FUN_14879fe02(void)

void FUN_14879fe02(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488bd35a(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879fe98 FUN_14879fe98 body=191 status=ok
// SIG undefined FUN_14879fe98(void)

void FUN_14879fe98(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0x9bf48485;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = local_30;
  local_40 = 0;
  FUN_1488bcdc8(param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879ff58 FUN_14879ff58 body=266 status=ok
// SIG undefined FUN_14879ff58(void)

void FUN_14879ff58(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = *puVar1;
  local_30 = puVar1[1];
  FUN_1488bd644(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a0088 FUN_1487a0088 body=180 status=ok
// SIG undefined FUN_1487a0088(void)

void FUN_1487a0088(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488bd79c(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a01a0 FUN_1487a01a0 body=95 status=ok
// SIG undefined FUN_1487a01a0(void)

undefined8 FUN_1487a01a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + 8 + lVar1) = *(undefined8 *)(param_3 + 8 + lVar1);
      FUN_14117b026(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined1 *)(param_2 + 0x48 + lVar1) = *(undefined1 *)(param_3 + 0x48 + lVar1);
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a0228 FUN_1487a0228 body=59 status=ok
// SIG undefined FUN_1487a0228(void)

undefined8 FUN_1487a0228(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a026e FUN_1487a026e body=32 status=ok
// SIG undefined FUN_1487a026e(void)

void FUN_1487a026e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14104c57e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1487a02d8 FUN_1487a02d8 body=55 status=ok
// SIG undefined FUN_1487a02d8(void)

void FUN_1487a02d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eb08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eb08 = FUN_140002ddd(FUN_14653d79f,uVar1,L"ProjectileMovementModifierData_ViewGuided");
  }
  return;
}



// FUNCTION 1487a0310 FUN_1487a0310 body=130 status=ok
// SIG undefined FUN_1487a0310(void)

void FUN_1487a0310(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b3c0500;
  FUN_1487a0532(param_2 + 3);
  *(undefined1 *)(param_2 + 5) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[6] = DAT_14c8464e0;
  param_2[7] = uVar1;
  param_2[8] = DAT_14c8464f0;
  uVar1 = DAT_14c846500;
  param_2[9] = DAT_14c8464f8;
  param_2[10] = uVar1;
  param_2[0xb] = DAT_14c846508;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  return;
}



// FUNCTION 1487a0392 FUN_1487a0392 body=106 status=ok
// SIG undefined FUN_1487a0392(void)

void FUN_1487a0392(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b3c0500;
  FUN_1487a0532(param_2 + 3);
  *(undefined1 *)(param_2 + 5) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[6] = DAT_14c8464e0;
  param_2[7] = uVar1;
  param_2[8] = DAT_14c8464f0;
  uVar1 = DAT_14c846500;
  param_2[9] = DAT_14c8464f8;
  param_2[10] = uVar1;
  param_2[0xb] = DAT_14c846508;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  return;
}



// FUNCTION 1487a0420 FUN_1487a0420 body=54 status=ok
// SIG undefined FUN_1487a0420(void)

undefined1 FUN_1487a0420(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a066e(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1487a047e FUN_1487a047e body=59 status=ok
// SIG undefined FUN_1487a047e(void)

undefined8 FUN_1487a047e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a04c4 FUN_1487a04c4 body=32 status=ok
// SIG undefined FUN_1487a04c4(void)

void FUN_1487a04c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_143c89ef8(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1487a0532 FUN_1487a0532 body=157 status=ok
// SIG undefined FUN_1487a0532(void)

undefined8 * FUN_1487a0532(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_14b3c0380;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0x447a0000;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 7) = 0xf00000d0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b3c0530;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  FUN_14680ea3d(L"TSharedRef()");
  return param_1;
}



// FUNCTION 1487a05d0 FUN_1487a05d0 body=43 status=ok
// SIG undefined FUN_1487a05d0(void)

undefined8 FUN_1487a05d0(undefined8 param_1,int param_2)

{
  FUN_143c89ef8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1487a05fc FUN_1487a05fc body=55 status=ok
// SIG undefined FUN_1487a05fc(void)

void FUN_1487a05fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eb20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eb20 = FUN_140002ddd(FUN_14653d835,uVar1,L"ProjectileMovementModifierState_ViewGuided")
    ;
  }
  return;
}



// FUNCTION 1487a064c FUN_1487a064c body=34 status=ok
// SIG undefined FUN_1487a064c(void)

undefined8 FUN_1487a064c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1487a066e FUN_1487a066e body=188 status=ok
// SIG undefined FUN_1487a066e(void)

longlong FUN_1487a066e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  
  lVar16 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_14689c22e();
      lVar16 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar16;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar16 = *(longlong *)(param_2 + 0x20);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(longlong *)(param_1 + 0x20) = lVar16;
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
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x38);
  uVar10 = *(undefined4 *)(param_2 + 0x3c);
  uVar11 = *(undefined4 *)(param_2 + 0x40);
  uVar12 = *(undefined4 *)(param_2 + 0x44);
  uVar13 = *(undefined4 *)(param_2 + 0x4c);
  uVar14 = *(undefined4 *)(param_2 + 0x50);
  uVar15 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar13;
  *(undefined4 *)(param_1 + 0x50) = uVar14;
  *(undefined4 *)(param_1 + 0x54) = uVar15;
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  *(undefined4 *)(param_1 + 0x3c) = uVar10;
  *(undefined4 *)(param_1 + 0x40) = uVar11;
  *(undefined4 *)(param_1 + 0x44) = uVar12;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  FUN_1447bdc4c(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 1487a0778 FUN_1487a0778 body=59 status=ok
// SIG undefined FUN_1487a0778(void)

undefined8 FUN_1487a0778(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a081a FUN_1487a081a body=161 status=ok
// SIG undefined FUN_1487a081a(void)

void FUN_1487a081a(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 0x3002;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0x200000000;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1b) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  param_2[0x20] = 0xf00000d0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  param_2[0x24] = 0;
  *(undefined1 *)(param_2 + 0x25) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x2a) = 0;
  FUN_1405c5fa2();
  *(undefined **)(param_2 + 0x2e) = &DAT_14cb769e8;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x32) = 0;
  *(undefined ***)(param_2 + 0x2c) = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 1487a08fa FUN_1487a08fa body=59 status=ok
// SIG undefined FUN_1487a08fa(void)

undefined8 FUN_1487a08fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a0946 FUN_1487a0946 body=38 status=ok
// SIG undefined FUN_1487a0946(void)

void FUN_1487a0946(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1414dc478(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1487a0a26 FUN_1487a0a26 body=59 status=ok
// SIG undefined FUN_1487a0a26(void)

undefined8 FUN_1487a0a26(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a0b36 FUN_1487a0b36 body=59 status=ok
// SIG undefined FUN_1487a0b36(void)

undefined8 FUN_1487a0b36(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a0c34 FUN_1487a0c34 body=59 status=ok
// SIG undefined FUN_1487a0c34(void)

undefined8 FUN_1487a0c34(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a0d16 FUN_1487a0d16 body=54 status=ok
// SIG undefined FUN_1487a0d16(void)

undefined1 FUN_1487a0d16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a0e2e(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1487a0d74 FUN_1487a0d74 body=59 status=ok
// SIG undefined FUN_1487a0d74(void)

undefined8 FUN_1487a0d74(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a0dba FUN_1487a0dba body=38 status=ok
// SIG undefined FUN_1487a0dba(void)

void FUN_1487a0dba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1487a0e2e FUN_1487a0e2e body=155 status=ok
// SIG undefined FUN_1487a0e2e(void)

longlong * FUN_1487a0e2e(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
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
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  FUN_144a7bb84(param_1 + 2,param_2 + 2);
  lVar2 = param_2[5];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[5];
    }
  }
  param_1[5] = lVar2;
  FUN_1406fa324(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 1487a0efe FUN_1487a0efe body=7 status=ok
// SIG undefined FUN_1487a0efe(void)

void FUN_1487a0efe(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 1487a0f9c FUN_1487a0f9c body=422 status=ok
// SIG undefined FUN_1487a0f9c(void)

void FUN_1487a0f9c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  (**(code **)(*param_1 + 0x488))(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a1144 FUN_1487a1144 body=421 status=ok
// SIG undefined FUN_1487a1144(void)

void FUN_1487a1144(longlong *param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = &local_58;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  (**(code **)(*param_1 + 0x490))(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a12ea FUN_1487a12ea body=422 status=ok
// SIG undefined FUN_1487a12ea(void)

void FUN_1487a12ea(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  (**(code **)(*param_1 + 0x480))(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a1492 FUN_1487a1492 body=441 status=ok
// SIG undefined FUN_1487a1492(void)

void FUN_1487a1492(longlong *param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = &local_68;
  local_58 = local_38;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  (**(code **)(*param_1 + 0x498))(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a167c FUN_1487a167c body=1751 status=ok
// SIG undefined FUN_1487a167c(void)

void FUN_1487a167c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  int local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a2;
  undefined1 local_a1;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  int local_88;
  int local_84;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68 [2];
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_50 = 0;
  local_c0 = param_1;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_c4 = local_54;
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar7 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_7d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7d);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  iVar6 = local_84;
  local_88 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  iVar5 = local_88;
  local_90 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  iVar4 = local_94;
  local_98 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  iVar3 = local_98;
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar2 = local_9c;
  local_a0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  iVar1 = local_a0;
  local_a1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a1);
  }
  local_a2 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a2);
  }
  local_a8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_138 = &local_b8;
  local_b8 = local_78;
  uStack_b4 = uStack_74;
  uStack_b0 = uStack_70;
  uStack_ac = uStack_6c;
  local_d8 = local_a8 != 0;
  local_108 = iVar4 != 0;
  local_100 = iVar3 != 0;
  local_118 = iVar5 != 0;
  local_f8 = iVar2 != 0;
  local_f0 = iVar1 != 0;
  local_120 = iVar6 != 0;
  local_e0 = local_a2;
  local_e8 = local_a1;
  local_110 = local_90;
  local_128 = local_7d;
  local_130 = local_7c;
  FUN_14058481a(local_c0,local_50,local_c4 != 0,plVar7);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a1d5a FUN_1487a1d5a body=801 status=ok
// SIG undefined FUN_1487a1d5a(void)

void FUN_1487a1d5a(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = iVar1 != 0;
  local_68 = local_58;
  local_70 = local_50;
  local_80 = local_44;
  local_88 = local_40;
  (**(code **)(*param_1 + 0x478))(param_1,local_28,local_30,local_38);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a20ba FUN_1487a20ba body=45 status=ok
// SIG undefined FUN_1487a20ba(void)

longlong FUN_1487a20ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458b014a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a20ea FUN_1487a20ea body=45 status=ok
// SIG undefined FUN_1487a20ea(void)

longlong FUN_1487a20ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1458b014a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a212e FUN_1487a212e body=48 status=ok
// SIG undefined FUN_1487a212e(void)

longlong FUN_1487a212e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1412e218e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a2170 FUN_1487a2170 body=26 status=ok
// SIG undefined FUN_1487a2170(void)

undefined8 FUN_1487a2170(longlong param_1,undefined8 param_2)

{
  FUN_14882471e(param_1 + -8);
  return param_2;
}



// FUNCTION 1487a2194 FUN_1487a2194 body=48 status=ok
// SIG undefined FUN_1487a2194(void)

longlong FUN_1487a2194(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1412e218e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a21cc FUN_1487a21cc body=48 status=ok
// SIG undefined FUN_1487a21cc(void)

longlong FUN_1487a21cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1412e218e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a2204 FUN_1487a2204 body=45 status=ok
// SIG undefined FUN_1487a2204(void)

longlong FUN_1487a2204(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a2232 FUN_1487a2232 body=45 status=ok
// SIG undefined FUN_1487a2232(void)

longlong FUN_1487a2232(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a2260 FUN_1487a2260 body=45 status=ok
// SIG undefined FUN_1487a2260(void)

longlong FUN_1487a2260(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a228e FUN_1487a228e body=45 status=ok
// SIG undefined FUN_1487a228e(void)

longlong FUN_1487a228e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a22bc FUN_1487a22bc body=42 status=ok
// SIG undefined FUN_1487a22bc(void)

undefined8 FUN_1487a22bc(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Refreshables/RefreshManager.h"
                ,0x4c,L"Pure virtual not implemented (%s)",L"CanRefreshArea");
  return 0;
}



// FUNCTION 1487a22e6 FUN_1487a22e6 body=45 status=ok
// SIG undefined FUN_1487a22e6(void)

longlong FUN_1487a22e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14597b02a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a231a FUN_1487a231a body=48 status=ok
// SIG undefined FUN_1487a231a(void)

longlong FUN_1487a231a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_14597b02a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a236e FUN_1487a236e body=63 status=ok
// SIG undefined FUN_1487a236e(void)

undefined1 FUN_1487a236e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a248a(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1487a23d6 FUN_1487a23d6 body=59 status=ok
// SIG undefined FUN_1487a23d6(void)

undefined8 FUN_1487a23d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a2422 FUN_1487a2422 body=38 status=ok
// SIG undefined FUN_1487a2422(void)

void FUN_1487a2422(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1410224fa(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1487a248a FUN_1487a248a body=138 status=ok
// SIG undefined FUN_1487a248a(void)

longlong FUN_1487a248a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  if ((*(longlong *)(param_1 + 0x40) != *(longlong *)(param_2 + 0x40)) ||
     (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  puVar5 = (undefined8 *)(param_2 + 0x58);
  puVar6 = (undefined8 *)(param_1 + 0x58);
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  return param_1;
}



// FUNCTION 1487a2542 FUN_1487a2542 body=85 status=ok
// SIG undefined FUN_1487a2542(void)

undefined8 FUN_1487a2542(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a25c0 FUN_1487a25c0 body=59 status=ok
// SIG undefined FUN_1487a25c0(void)

undefined8 FUN_1487a25c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a2606 FUN_1487a2606 body=32 status=ok
// SIG undefined FUN_1487a2606(void)

void FUN_1487a2606(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_148856098(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1487a2676 FUN_1487a2676 body=66 status=ok
// SIG undefined FUN_1487a2676(void)

undefined8 * FUN_1487a2676(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3ccfc0;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_1403d7c6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a26b8 FUN_1487a26b8 body=55 status=ok
// SIG undefined FUN_1487a26b8(void)

void FUN_1487a26b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eea0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eea0 = FUN_140002ddd(FUN_14653e9d1,uVar1,L"RadiateDamageAreaBodyState");
  }
  return;
}



// FUNCTION 1487a26f0 FUN_1487a26f0 body=40 status=ok
// SIG undefined FUN_1487a26f0(void)

void FUN_1487a26f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1401726e6();
  FUN_140aed452(param_2,uVar1);
  *param_2 = &PTR_FUN_14b3f7c00;
  return;
}



// FUNCTION 1487a2732 FUN_1487a2732 body=63 status=ok
// SIG undefined FUN_1487a2732(void)

undefined1 FUN_1487a2732(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 1487a279a FUN_1487a279a body=59 status=ok
// SIG undefined FUN_1487a279a(void)

undefined8 FUN_1487a279a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a27e6 FUN_1487a27e6 body=38 status=ok
// SIG undefined FUN_1487a27e6(void)

void FUN_1487a27e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 1487a2864 FUN_1487a2864 body=48 status=ok
// SIG undefined FUN_1487a2864(void)

void FUN_1487a2864(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b3ccfc0;
  return;
}



// FUNCTION 1487a2894 FUN_1487a2894 body=32 status=ok
// SIG undefined FUN_1487a2894(void)

void FUN_1487a2894(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b3ccfc0;
  return;
}



// FUNCTION 1487a290e FUN_1487a290e body=59 status=ok
// SIG undefined FUN_1487a290e(void)

undefined8 FUN_1487a290e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a295a FUN_1487a295a body=63 status=ok
// SIG undefined FUN_1487a295a(void)

void FUN_1487a295a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b3ccfc0;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_1403d7c6c(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1487a2a1e FUN_1487a2a1e body=44 status=ok
// SIG undefined FUN_1487a2a1e(void)

void FUN_1487a2a1e(undefined8 param_1,longlong *param_2)

{
  FUN_14063a71e(param_2 + 3,1);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487a2a60 FUN_1487a2a60 body=74 status=ok
// SIG undefined FUN_1487a2a60(void)

undefined8 FUN_1487a2a60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140311eb6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    param_2 = param_2 + 0x50;
    param_3 = param_3 + 0x50;
  }
  return 1;
}



// FUNCTION 1487a2ad2 FUN_1487a2ad2 body=59 status=ok
// SIG undefined FUN_1487a2ad2(void)

undefined8 FUN_1487a2ad2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a2b18 FUN_1487a2b18 body=48 status=ok
// SIG undefined FUN_1487a2b18(void)

void FUN_1487a2b18(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[10] == '\x01') {
    FUN_14063a71e(param_2 + 3,1);
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 1487a2c1e FUN_1487a2c1e body=99 status=ok
// SIG undefined FUN_1487a2c1e(void)

undefined8 FUN_1487a2c1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_141289ada(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a2caa FUN_1487a2caa body=59 status=ok
// SIG undefined FUN_1487a2caa(void)

undefined8 FUN_1487a2caa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a2cf0 FUN_1487a2cf0 body=34 status=ok
// SIG undefined FUN_1487a2cf0(void)

void FUN_1487a2cf0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1487a2dc2(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1487a2d64 FUN_1487a2d64 body=38 status=ok
// SIG undefined FUN_1487a2d64(void)

undefined8 FUN_1487a2d64(undefined8 param_1,int param_2)

{
  FUN_1487a2dc2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a2d8a FUN_1487a2d8a body=55 status=ok
// SIG undefined FUN_1487a2d8a(void)

void FUN_1487a2d8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ef20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ef20 = FUN_140002ddd(FUN_14653ebbc,uVar1,L"RefreshManagerDef");
  }
  return;
}



// FUNCTION 1487a2dc2 FUN_1487a2dc2 body=59 status=ok
// SIG undefined FUN_1487a2dc2(void)

void FUN_1487a2dc2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3c95a0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1487a2dfe FUN_1487a2dfe body=104 status=ok
// SIG undefined FUN_1487a2dfe(void)

undefined8 FUN_1487a2dfe(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_148941672(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a2e68 FUN_1487a2e68 body=28 status=ok
// SIG undefined FUN_1487a2e68(void)

undefined8 FUN_1487a2e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487a2eca FUN_1487a2eca body=63 status=ok
// SIG undefined FUN_1487a2eca(void)

undefined1 FUN_1487a2eca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148782972(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 1487a2f32 FUN_1487a2f32 body=59 status=ok
// SIG undefined FUN_1487a2f32(void)

undefined8 FUN_1487a2f32(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a2f7e FUN_1487a2f7e body=38 status=ok
// SIG undefined FUN_1487a2f7e(void)

void FUN_1487a2f7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_14118054a(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1487a2ff4 FUN_1487a2ff4 body=74 status=ok
// SIG undefined FUN_1487a2ff4(void)

void FUN_1487a2ff4(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b008d60;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  FUN_144928b90(param_2 + 4,0);
  param_2[0xb] = 0;
  return;
}



// FUNCTION 1487a303e FUN_1487a303e body=54 status=ok
// SIG undefined FUN_1487a303e(void)

void FUN_1487a303e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b008d60;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  FUN_144928b90(param_2 + 4,0);
  param_2[0xb] = 0;
  return;
}



// FUNCTION 1487a3098 FUN_1487a3098 body=54 status=ok
// SIG undefined FUN_1487a3098(void)

undefined1 FUN_1487a3098(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148625552(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1487a30f6 FUN_1487a30f6 body=59 status=ok
// SIG undefined FUN_1487a30f6(void)

undefined8 FUN_1487a30f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a313c FUN_1487a313c body=34 status=ok
// SIG undefined FUN_1487a313c(void)

void FUN_1487a313c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1461f9512(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1487a3230 FUN_1487a3230 body=104 status=ok
// SIG undefined FUN_1487a3230(void)

undefined8 FUN_1487a3230(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar6);
      lVar2 = param_2 + 8 + lVar6;
      *(undefined1 *)(lVar2 + -8) = *puVar1;
      FUN_140d02432(lVar2,puVar1 + 8);
      uVar3 = *(undefined4 *)(puVar1 + 0x5c);
      uVar4 = *(undefined4 *)(puVar1 + 0x60);
      uVar5 = *(undefined4 *)(puVar1 + 100);
      *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(puVar1 + 0x58);
      *(undefined4 *)(lVar2 + 0x54) = uVar3;
      *(undefined4 *)(lVar2 + 0x58) = uVar4;
      *(undefined4 *)(lVar2 + 0x5c) = uVar5;
      *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(puVar1 + 0x68);
      lVar6 = lVar6 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a32c0 FUN_1487a32c0 body=59 status=ok
// SIG undefined FUN_1487a32c0(void)

undefined8 FUN_1487a32c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a3402 FUN_1487a3402 body=59 status=ok
// SIG undefined FUN_1487a3402(void)

undefined8 FUN_1487a3402(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a3532 FUN_1487a3532 body=59 status=ok
// SIG undefined FUN_1487a3532(void)

undefined8 FUN_1487a3532(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a35d2 FUN_1487a35d2 body=29 status=ok
// SIG undefined FUN_1487a35d2(void)

undefined8 FUN_1487a35d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a35f0 FUN_1487a35f0 body=55 status=ok
// SIG undefined FUN_1487a35f0(void)

void FUN_1487a35f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6efe0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6efe0 = FUN_140002ddd(FUN_14653ef3f,uVar1,L"ReplicatedMissionMessage");
  }
  return;
}



// FUNCTION 1487a36e8 FUN_1487a36e8 body=59 status=ok
// SIG undefined FUN_1487a36e8(void)

undefined8 FUN_1487a36e8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a3788 FUN_1487a3788 body=29 status=ok
// SIG undefined FUN_1487a3788(void)

undefined8 FUN_1487a3788(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a37a6 FUN_1487a37a6 body=55 status=ok
// SIG undefined FUN_1487a37a6(void)

void FUN_1487a37a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eff8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eff8 = FUN_140002ddd(FUN_14653efa0,uVar1,L"ReplicatedMissionFactSetBase");
  }
  return;
}



// FUNCTION 1487a38a4 FUN_1487a38a4 body=59 status=ok
// SIG undefined FUN_1487a38a4(void)

undefined8 FUN_1487a38a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a39da FUN_1487a39da body=59 status=ok
// SIG undefined FUN_1487a39da(void)

undefined8 FUN_1487a39da(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a3abe FUN_1487a3abe body=128 status=ok
// SIG undefined FUN_1487a3abe(void)

undefined1 FUN_1487a3abe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_3 + lVar10;
      lVar2 = param_2 + 0x30 + lVar10;
      *(undefined1 *)(lVar2 + -0x28) = *(undefined1 *)(lVar1 + 8);
      uVar3 = *(undefined4 *)(lVar1 + 0x14);
      uVar4 = *(undefined4 *)(lVar1 + 0x18);
      uVar5 = *(undefined4 *)(lVar1 + 0x1c);
      uVar6 = *(undefined4 *)(lVar1 + 0x20);
      uVar7 = *(undefined4 *)(lVar1 + 0x24);
      uVar8 = *(undefined4 *)(lVar1 + 0x28);
      uVar9 = *(undefined4 *)(lVar1 + 0x2c);
      *(undefined4 *)(lVar2 + -0x20) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined4 *)(lVar2 + -0x1c) = uVar3;
      *(undefined4 *)(lVar2 + -0x18) = uVar4;
      *(undefined4 *)(lVar2 + -0x14) = uVar5;
      *(undefined4 *)(lVar2 + -0x10) = uVar6;
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      FUN_140ffff0a();
      FUN_141000060(param_2 + lVar10 + 0x40,param_3 + lVar10 + 0x40);
      FUN_140d7e6a6(param_2 + lVar10 + 0x50,param_3 + lVar10 + 0x50);
      lVar10 = lVar10 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a3b66 FUN_1487a3b66 body=59 status=ok
// SIG undefined FUN_1487a3b66(void)

undefined8 FUN_1487a3b66(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a3bac FUN_1487a3bac body=32 status=ok
// SIG undefined FUN_1487a3bac(void)

void FUN_1487a3bac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1487a3c1a(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1487a3c1a FUN_1487a3c1a body=99 status=ok
// SIG undefined FUN_1487a3c1a(void)

void FUN_1487a3c1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3ca7c0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140d5a359(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14029e8dd(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487a3c7e FUN_1487a3c7e body=98 status=ok
// SIG undefined FUN_1487a3c7e(void)

void FUN_1487a3c7e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487a3ce0 FUN_1487a3ce0 body=52 status=ok
// SIG undefined FUN_1487a3ce0(void)

void FUN_1487a3ce0(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487a3d14(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1487a3d14 FUN_1487a3d14 body=99 status=ok
// SIG undefined FUN_1487a3d14(void)

undefined8 * FUN_1487a3d14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1486eab00(param_1 + 2,iVar1,0);
    FUN_1486eab73(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1487a3e04 FUN_1487a3e04 body=59 status=ok
// SIG undefined FUN_1487a3e04(void)

undefined8 FUN_1487a3e04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a3ea4 FUN_1487a3ea4 body=55 status=ok
// SIG undefined FUN_1487a3ea4(void)

void FUN_1487a3ea4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f058 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f058 = FUN_140002ddd(FUN_14653f120,uVar1,L"ReplicatedGeneratedMissionDestruction");
  }
  return;
}



// FUNCTION 1487a3fea FUN_1487a3fea body=60 status=ok
// SIG undefined FUN_1487a3fea(void)

undefined8 FUN_1487a3fea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      *(undefined1 *)(param_2 + -8 + lVar1) = *(undefined1 *)(param_3 + -8 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_2 + 0x50 + lVar1) = *(undefined4 *)(param_3 + 0x50 + lVar1);
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a404e FUN_1487a404e body=59 status=ok
// SIG undefined FUN_1487a404e(void)

undefined8 FUN_1487a404e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a40ee FUN_1487a40ee body=55 status=ok
// SIG undefined FUN_1487a40ee(void)

void FUN_1487a40ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f070 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f070 = FUN_140002ddd(FUN_14653f180,uVar1,L"ReplicatedDynamicMissionGiverAdd");
  }
  return;
}



// FUNCTION 1487a4234 FUN_1487a4234 body=59 status=ok
// SIG undefined FUN_1487a4234(void)

undefined8 FUN_1487a4234(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a42d4 FUN_1487a42d4 body=55 status=ok
// SIG undefined FUN_1487a42d4(void)

void FUN_1487a42d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f088 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f088 = FUN_140002ddd(FUN_14653f1e0,uVar1,L"ReplicatedDynamicMissionGiverRemove");
  }
  return;
}



// FUNCTION 1487a4374 FUN_1487a4374 body=60 status=ok
// SIG undefined FUN_1487a4374(void)

undefined8 FUN_1487a4374(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      *(undefined1 *)(param_2 + -8 + lVar1) = *(undefined1 *)(param_3 + -8 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)(param_2 + 0x40 + lVar1) = *(undefined1 *)(param_3 + 0x40 + lVar1);
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a43d8 FUN_1487a43d8 body=59 status=ok
// SIG undefined FUN_1487a43d8(void)

undefined8 FUN_1487a43d8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a4478 FUN_1487a4478 body=55 status=ok
// SIG undefined FUN_1487a4478(void)

void FUN_1487a4478(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f0a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f0a0 =
         FUN_140002ddd(FUN_14653f240,uVar1,L"ReplicatedConditionalMissionGiverEnableChange");
  }
  return;
}



// FUNCTION 1487a45e8 FUN_1487a45e8 body=59 status=ok
// SIG undefined FUN_1487a45e8(void)

undefined8 FUN_1487a45e8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a4688 FUN_1487a4688 body=29 status=ok
// SIG undefined FUN_1487a4688(void)

undefined8 FUN_1487a4688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a46a6 FUN_1487a46a6 body=55 status=ok
// SIG undefined FUN_1487a46a6(void)

void FUN_1487a46a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f0b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f0b8 = FUN_140002ddd(FUN_14653f2a0,uVar1,L"ReplicatedMissionGiverWaypointSuppression");
  }
  return;
}



// FUNCTION 1487a4724 FUN_1487a4724 body=68 status=ok
// SIG undefined FUN_1487a4724(void)

undefined1 FUN_1487a4724(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_140d7e6a6(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a4790 FUN_1487a4790 body=59 status=ok
// SIG undefined FUN_1487a4790(void)

undefined8 FUN_1487a4790(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a47d6 FUN_1487a47d6 body=48 status=ok
// SIG undefined FUN_1487a47d6(void)

void FUN_1487a47d6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14b3cb120;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1487a4854 FUN_1487a4854 body=55 status=ok
// SIG undefined FUN_1487a4854(void)

void FUN_1487a4854(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f0d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f0d0 = FUN_140002ddd(FUN_14653f300,uVar1,L"ReplicatedTrackedMissionChange");
  }
  return;
}



// FUNCTION 1487a4916 FUN_1487a4916 body=59 status=ok
// SIG undefined FUN_1487a4916(void)

undefined8 FUN_1487a4916(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a49b6 FUN_1487a49b6 body=55 status=ok
// SIG undefined FUN_1487a49b6(void)

void FUN_1487a49b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f0e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f0e8 = FUN_140002ddd(FUN_14653f360,uVar1,L"ReplicatedMissionStateReset");
  }
  return;
}



// FUNCTION 1487a4a42 FUN_1487a4a42 body=54 status=ok
// SIG undefined FUN_1487a4a42(void)

undefined1 FUN_1487a4a42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a4bf6(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1487a4aa0 FUN_1487a4aa0 body=59 status=ok
// SIG undefined FUN_1487a4aa0(void)

undefined8 FUN_1487a4aa0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a4ae6 FUN_1487a4ae6 body=34 status=ok
// SIG undefined FUN_1487a4ae6(void)

void FUN_1487a4ae6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1487a4bb4(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1487a4b56 FUN_1487a4b56 body=38 status=ok
// SIG undefined FUN_1487a4b56(void)

undefined8 FUN_1487a4b56(undefined8 param_1,int param_2)

{
  FUN_1487a4bb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a4b7c FUN_1487a4b7c body=55 status=ok
// SIG undefined FUN_1487a4b7c(void)

void FUN_1487a4b7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f100 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f100 = FUN_140002ddd(FUN_14653f3c0,uVar1,L"ReplicateMissionReplayUpdate");
  }
  return;
}



// FUNCTION 1487a4bb4 FUN_1487a4bb4 body=66 status=ok
// SIG undefined FUN_1487a4bb4(void)

void FUN_1487a4bb4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3cb440;
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x0001487a4beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487a4bf6 FUN_1487a4bf6 body=88 status=ok
// SIG undefined FUN_1487a4bf6(void)

longlong FUN_1487a4bf6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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



// FUNCTION 1487a4cb6 FUN_1487a4cb6 body=54 status=ok
// SIG undefined FUN_1487a4cb6(void)

undefined1 FUN_1487a4cb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a4e6a(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1487a4d14 FUN_1487a4d14 body=59 status=ok
// SIG undefined FUN_1487a4d14(void)

undefined8 FUN_1487a4d14(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a4d5a FUN_1487a4d5a body=34 status=ok
// SIG undefined FUN_1487a4d5a(void)

void FUN_1487a4d5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1487a4e28(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487a4dca FUN_1487a4dca body=38 status=ok
// SIG undefined FUN_1487a4dca(void)

undefined8 FUN_1487a4dca(undefined8 param_1,int param_2)

{
  FUN_1487a4e28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a4df0 FUN_1487a4df0 body=55 status=ok
// SIG undefined FUN_1487a4df0(void)

void FUN_1487a4df0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f118 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f118 = FUN_140002ddd(FUN_14653f420,uVar1,L"ReplicatedMissionObjectiveUxModifierAdd");
  }
  return;
}



// FUNCTION 1487a4e28 FUN_1487a4e28 body=66 status=ok
// SIG undefined FUN_1487a4e28(void)

void FUN_1487a4e28(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3cb5d0;
  plVar3 = (longlong *)param_1[6];
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
                    /* WARNING: Could not recover jumptable at 0x0001487a4e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487a4e6a FUN_1487a4e6a body=104 status=ok
// SIG undefined FUN_1487a4e6a(void)

longlong FUN_1487a4e6a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar7 = *(undefined4 *)(param_2 + 0x18);
  uVar8 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(undefined4 *)(param_1 + 0x1c) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
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



// FUNCTION 1487a4f8c FUN_1487a4f8c body=59 status=ok
// SIG undefined FUN_1487a4f8c(void)

undefined8 FUN_1487a4f8c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a502c FUN_1487a502c body=29 status=ok
// SIG undefined FUN_1487a502c(void)

undefined8 FUN_1487a502c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a504a FUN_1487a504a body=55 status=ok
// SIG undefined FUN_1487a504a(void)

void FUN_1487a504a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f130 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f130 = FUN_140002ddd(FUN_14653f480,uVar1,L"ReplicatedMissionObjectiveUxModifierRemove")
    ;
  }
  return;
}



// FUNCTION 1487a50ca FUN_1487a50ca body=54 status=ok
// SIG undefined FUN_1487a50ca(void)

undefined1 FUN_1487a50ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a51c8(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1487a5128 FUN_1487a5128 body=59 status=ok
// SIG undefined FUN_1487a5128(void)

undefined8 FUN_1487a5128(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a51c8 FUN_1487a51c8 body=116 status=ok
// SIG undefined FUN_1487a51c8(void)

undefined8 * FUN_1487a51c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  
  *param_1 = *param_2;
  lVar5 = param_2[1];
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[1];
    }
  }
  bVar4 = DAT_14c950c29;
  param_1[1] = lVar5;
  lVar5 = param_2[2];
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[2];
    }
  }
  param_1[2] = lVar5;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  return param_1;
}



// FUNCTION 1487a5286 FUN_1487a5286 body=54 status=ok
// SIG undefined FUN_1487a5286(void)

undefined1 FUN_1487a5286(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a5384(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1487a52e4 FUN_1487a52e4 body=59 status=ok
// SIG undefined FUN_1487a52e4(void)

undefined8 FUN_1487a52e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a5384 FUN_1487a5384 body=151 status=ok
// SIG undefined FUN_1487a5384(void)

longlong * FUN_1487a5384(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *param_2;
    }
  }
  bVar3 = DAT_14c950c29;
  *param_1 = lVar4;
  lVar4 = param_2[1];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[1];
      bVar3 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar4;
  param_1[4] = param_2[4];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar4 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  lVar4 = param_2[5];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[5];
    }
  }
  param_1[5] = lVar4;
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 1487a5444 FUN_1487a5444 body=54 status=ok
// SIG undefined FUN_1487a5444(void)

undefined1 FUN_1487a5444(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148736a1a(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1487a54a2 FUN_1487a54a2 body=59 status=ok
// SIG undefined FUN_1487a54a2(void)

undefined8 FUN_1487a54a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a5562 FUN_1487a5562 body=145 status=ok
// SIG undefined FUN_1487a5562(void)

undefined8 FUN_1487a5562(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
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
  undefined8 uVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar13);
      lVar3 = param_2 + 0x18 + lVar13;
      *(undefined8 *)(lVar3 + -0x18) = *puVar1;
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar5 = *(undefined4 *)(puVar1 + 2);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar3 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar3 + -0xc) = uVar4;
      *(undefined4 *)(lVar3 + -8) = uVar5;
      *(undefined4 *)(lVar3 + -4) = uVar6;
      FUN_144a787a6();
      lVar3 = param_3 + lVar13;
      lVar2 = param_2 + lVar13;
      FUN_14065c7a4(lVar2 + 0x28,lVar3 + 0x28);
      uVar12 = *(undefined8 *)(lVar3 + 0x40);
      uVar4 = *(undefined4 *)(lVar3 + 0x48);
      uVar5 = *(undefined4 *)(lVar3 + 0x4c);
      uVar6 = *(undefined4 *)(lVar3 + 0x50);
      uVar7 = *(undefined4 *)(lVar3 + 0x54);
      uVar8 = *(undefined4 *)(lVar3 + 0x56);
      uVar9 = *(undefined4 *)(lVar3 + 0x5a);
      uVar10 = *(undefined4 *)(lVar3 + 0x5e);
      uVar11 = *(undefined4 *)(lVar3 + 0x62);
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
      *(undefined8 *)(lVar2 + 0x40) = uVar12;
      *(undefined4 *)(lVar2 + 0x48) = uVar4;
      *(undefined4 *)(lVar2 + 0x4c) = uVar5;
      *(undefined4 *)(lVar2 + 0x50) = uVar6;
      *(undefined4 *)(lVar2 + 0x54) = uVar7;
      *(undefined4 *)(lVar2 + 0x56) = uVar8;
      *(undefined4 *)(lVar2 + 0x5a) = uVar9;
      *(undefined4 *)(lVar2 + 0x5e) = uVar10;
      *(undefined4 *)(lVar2 + 0x62) = uVar11;
      lVar13 = lVar13 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a561c FUN_1487a561c body=59 status=ok
// SIG undefined FUN_1487a561c(void)

undefined8 FUN_1487a561c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a56ae FUN_1487a56ae body=52 status=ok
// SIG undefined FUN_1487a56ae(void)

void FUN_1487a56ae(longlong param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1487a56e2 FUN_1487a56e2 body=37 status=ok
// SIG undefined FUN_1487a56e2(void)

void FUN_1487a56e2(undefined8 param_1,longlong param_2)

{
  FUN_140691b02(param_2);
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  return;
}



// FUNCTION 1487a571e FUN_1487a571e body=170 status=ok
// SIG undefined FUN_1487a571e(void)

undefined8 FUN_1487a571e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
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
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar15);
      lVar3 = param_2 + 0x18 + lVar15;
      *(undefined8 *)(lVar3 + -0x18) = *puVar1;
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar5 = *(undefined4 *)(puVar1 + 2);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar3 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar3 + -0xc) = uVar4;
      *(undefined4 *)(lVar3 + -8) = uVar5;
      *(undefined4 *)(lVar3 + -4) = uVar6;
      FUN_144a787a6();
      lVar3 = param_3 + lVar15;
      lVar2 = param_2 + lVar15;
      FUN_14065c7a4(lVar2 + 0x28,lVar3 + 0x28);
      uVar4 = *(undefined4 *)(lVar3 + 0x3c);
      uVar5 = *(undefined4 *)(lVar3 + 0x40);
      uVar6 = *(undefined4 *)(lVar3 + 0x44);
      uVar7 = *(undefined4 *)(lVar3 + 0x48);
      uVar8 = *(undefined4 *)(lVar3 + 0x4c);
      uVar9 = *(undefined4 *)(lVar3 + 0x50);
      uVar10 = *(undefined4 *)(lVar3 + 0x54);
      uVar11 = *(undefined4 *)(lVar3 + 0x56);
      uVar12 = *(undefined4 *)(lVar3 + 0x5a);
      uVar13 = *(undefined4 *)(lVar3 + 0x5e);
      uVar14 = *(undefined4 *)(lVar3 + 0x62);
      *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar2 + 0x3c) = uVar4;
      *(undefined4 *)(lVar2 + 0x40) = uVar5;
      *(undefined4 *)(lVar2 + 0x44) = uVar6;
      *(undefined4 *)(lVar2 + 0x48) = uVar7;
      *(undefined4 *)(lVar2 + 0x4c) = uVar8;
      *(undefined4 *)(lVar2 + 0x50) = uVar9;
      *(undefined4 *)(lVar2 + 0x54) = uVar10;
      *(undefined4 *)(lVar2 + 0x56) = uVar11;
      *(undefined4 *)(lVar2 + 0x5a) = uVar12;
      *(undefined4 *)(lVar2 + 0x5e) = uVar13;
      *(undefined4 *)(lVar2 + 0x62) = uVar14;
      FUN_145c6a960(param_2 + lVar15 + 0x68,param_3 + lVar15 + 0x68);
      lVar15 = lVar15 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487a57f0 FUN_1487a57f0 body=59 status=ok
// SIG undefined FUN_1487a57f0(void)

undefined8 FUN_1487a57f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487a5888 FUN_1487a5888 body=58 status=ok
// SIG undefined FUN_1487a5888(void)

void FUN_1487a5888(longlong param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1487a59a4 FUN_1487a59a4 body=45 status=ok
// SIG undefined FUN_1487a59a4(void)

longlong FUN_1487a59a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a59d2 FUN_1487a59d2 body=45 status=ok
// SIG undefined FUN_1487a59d2(void)

longlong FUN_1487a59d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487a5a00 FUN_1487a5a00 body=45 status=ok
// SIG undefined FUN_1487a5a00(void)

longlong FUN_1487a5a00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


