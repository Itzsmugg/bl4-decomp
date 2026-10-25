// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148634132 FUN_148634132 body=59 status=ok
// SIG undefined FUN_148634132(void)

undefined8 FUN_148634132(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863417e FUN_14863417e body=38 status=ok
// SIG undefined FUN_14863417e(void)

void FUN_14863417e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x218) == '\x01') {
    FUN_140ead512(param_2);
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  return;
}



// FUNCTION 1486341f2 FUN_1486341f2 body=544 status=ok
// SIG undefined FUN_1486341f2(void)

longlong FUN_1486341f2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_148634470(param_1 + 8,param_2 + 8);
    FUN_148634470(param_1 + 0x20,param_2 + 0x20);
    FUN_148634470(param_1 + 0x38,param_2 + 0x38);
    FUN_148634470(param_1 + 0x50,param_2 + 0x50);
    FUN_148634470(param_1 + 0x68,param_2 + 0x68);
  }
  FUN_140311eb6(param_1 + 0x80,param_2 + 0x80);
  FUN_140311eb6(param_1 + 0x90,param_2 + 0x90);
  FUN_140311eb6(param_1 + 0xa0,param_2 + 0xa0);
  FUN_140311eb6(param_1 + 0xb0,param_2 + 0xb0);
  FUN_140311eb6(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  (**(code **)(*(longlong *)(param_1 + 0xe0) + 0x20))(param_1 + 0xe0,0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  FUN_1406022fe(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  FUN_14117bcd8(param_1 + 0x104,param_2 + 0x104);
  FUN_14117bcd8(param_1 + 0x110,param_2 + 0x110);
  FUN_14117bcd8(param_1 + 0x11c,param_2 + 0x11c);
  FUN_14117bcd8(param_1 + 0x128,param_2 + 0x128);
  FUN_140841e06(param_1 + 0x134,param_2 + 0x134);
  FUN_140d9ad8a(param_1 + 0x140,param_2 + 0x140);
  FUN_148634412(param_1 + 400,param_2 + 400);
  FUN_148634412(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  FUN_14117bcd8(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_14117bcd8(param_1 + 0x1c4,param_2 + 0x1c4);
  FUN_14117bcd8(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  uVar1 = *(undefined4 *)(param_2 + 0x1e4);
  uVar2 = *(undefined4 *)(param_2 + 0x1e8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = uVar1;
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  (**(code **)(*(longlong *)(param_1 + 0x1f8) + 0x20))(param_1 + 0x1f8,0);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  FUN_1406022fe(param_1 + 0x208,param_2 + 0x208);
  return param_1;
}



// FUNCTION 148634412 FUN_148634412 body=93 status=ok
// SIG undefined FUN_148634412(void)

undefined8 * FUN_148634412(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140eadc4a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148634644(param_1,iVar1);
      FUN_1486346b7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148634470 FUN_148634470 body=304 status=ok
// SIG undefined FUN_148634470(void)

void FUN_148634470(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1486345a2 FUN_1486345a2 body=98 status=ok
// SIG undefined FUN_1486345a2(void)

void FUN_1486345a2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148634604 FUN_148634604 body=63 status=ok
// SIG undefined FUN_148634604(void)

void FUN_148634604(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      uVar2 = *(undefined8 *)(param_2 + lVar3 + 0x18);
      *(undefined8 *)(param_1 + lVar3 + 0x10) = *(undefined8 *)(param_2 + lVar3 + 0x10);
      *(undefined8 *)(param_1 + lVar3 + 0x18) = uVar2;
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148634644 FUN_148634644 body=115 status=ok
// SIG undefined FUN_148634644(void)

void FUN_148634644(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486346b7 FUN_1486346b7 body=52 status=ok
// SIG undefined FUN_1486346b7(void)

void FUN_1486346b7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486346ec(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 1486346ec FUN_1486346ec body=108 status=ok
// SIG undefined FUN_1486346ec(void)

undefined8 * FUN_1486346ec(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_144a8b00e(param_1 + 3,param_2 + 3);
  FUN_144a8b00e((longlong)param_1 + 0x24,(longlong)param_2 + 0x24);
  FUN_144a8b00e(param_1 + 6,param_2 + 6);
  FUN_144a8b00e((longlong)param_1 + 0x3c,(longlong)param_2 + 0x3c);
  return param_1;
}



// FUNCTION 14863475a FUN_14863475a body=43 status=ok
// SIG undefined FUN_14863475a(void)

undefined8 FUN_14863475a(undefined8 param_1,int param_2)

{
  FUN_140ead512();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 148634786 FUN_148634786 body=55 status=ok
// SIG undefined FUN_148634786(void)

void FUN_148634786(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56460 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56460 = FUN_140002ddd(FUN_1464b7395,uVar1,L"DamageCauserData");
  }
  return;
}



// FUNCTION 148634804 FUN_148634804 body=59 status=ok
// SIG undefined FUN_148634804(void)

undefined8 FUN_148634804(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148634850 FUN_148634850 body=38 status=ok
// SIG undefined FUN_148634850(void)

void FUN_148634850(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_14142720e(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 1486348c6 FUN_1486348c6 body=207 status=ok
// SIG undefined FUN_1486348c6(void)

void FUN_1486348c6(undefined8 param_1,undefined8 *param_2)

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
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0x11] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0xf] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x10] = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x12] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x13] = uVar1;
  param_2[0x14] = DAT_14c8464f0;
  param_2[0x17] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0x15) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xac) = uVar2;
  *(undefined4 *)(param_2 + 0x16) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xb4) = uVar4;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  FUN_1405c5fa2();
  param_2[0x1c] = &DAT_14cb769e8;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1b] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 1486349d4 FUN_1486349d4 body=59 status=ok
// SIG undefined FUN_1486349d4(void)

undefined8 FUN_1486349d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148634a20 FUN_148634a20 body=38 status=ok
// SIG undefined FUN_148634a20(void)

void FUN_148634a20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_141845be6(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148634a96 FUN_148634a96 body=99 status=ok
// SIG undefined FUN_148634a96(void)

void FUN_148634a96(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 4) = 0x3002;
  param_2[5] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0x200000000;
  FUN_1405c5fa2();
  param_2[0xf] = &DAT_14cb769e8;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 148634b10 FUN_148634b10 body=63 status=ok
// SIG undefined FUN_148634b10(void)

undefined1 FUN_148634b10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148631430(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 148634b78 FUN_148634b78 body=59 status=ok
// SIG undefined FUN_148634b78(void)

undefined8 FUN_148634b78(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148634bc4 FUN_148634bc4 body=38 status=ok
// SIG undefined FUN_148634bc4(void)

void FUN_148634bc4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_1413e0002(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148634c3a FUN_148634c3a body=78 status=ok
// SIG undefined FUN_148634c3a(void)

void FUN_148634c3a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined4 *)((longlong)param_2 + 0x18) = 0x3002;
  *(undefined4 *)((longlong)param_2 + 100) = 2;
  FUN_1405c5fa2();
  *(undefined **)((longlong)param_2 + 0x70) = &DAT_14cb769e8;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined ***)((longlong)param_2 + 0x68) = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 148634c88 FUN_148634c88 body=96 status=ok
// SIG undefined FUN_148634c88(void)

void FUN_148634c88(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0x3002;
  param_2[4] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0x200000000;
  FUN_1405c5fa2();
  param_2[0xe] = &DAT_14cb769e8;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 148634d06 FUN_148634d06 body=63 status=ok
// SIG undefined FUN_148634d06(void)

undefined1 FUN_148634d06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486314f8(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148634d6e FUN_148634d6e body=59 status=ok
// SIG undefined FUN_148634d6e(void)

undefined8 FUN_148634d6e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148634dba FUN_148634dba body=38 status=ok
// SIG undefined FUN_148634dba(void)

void FUN_148634dba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_141845c68(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14863505e FUN_14863505e body=59 status=ok
// SIG undefined FUN_14863505e(void)

undefined8 FUN_14863505e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486350aa FUN_1486350aa body=38 status=ok
// SIG undefined FUN_1486350aa(void)

void FUN_1486350aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x360) == '\x01') {
    FUN_1408c2642(param_2);
    *(undefined1 *)(param_2 + 0x360) = 0;
  }
  return;
}



// FUNCTION 148635118 FUN_148635118 body=28 status=ok
// SIG undefined FUN_148635118(void)

undefined8 FUN_148635118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148635164 FUN_148635164 body=63 status=ok
// SIG undefined FUN_148635164(void)

undefined1 FUN_148635164(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148633c22(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 1486351cc FUN_1486351cc body=59 status=ok
// SIG undefined FUN_1486351cc(void)

undefined8 FUN_1486351cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148635218 FUN_148635218 body=38 status=ok
// SIG undefined FUN_148635218(void)

void FUN_148635218(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_140bb741a(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 1486352a8 FUN_1486352a8 body=94 status=ok
// SIG undefined FUN_1486352a8(void)

undefined8 FUN_1486352a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_148633d58(lVar2,puVar1 + 1);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[3];
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14863532e FUN_14863532e body=59 status=ok
// SIG undefined FUN_14863532e(void)

undefined8 FUN_14863532e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148635374 FUN_148635374 body=38 status=ok
// SIG undefined FUN_148635374(void)

void FUN_148635374(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14863542c FUN_14863542c body=59 status=ok
// SIG undefined FUN_14863542c(void)

undefined8 FUN_14863542c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148635472 FUN_148635472 body=38 status=ok
// SIG undefined FUN_148635472(void)

void FUN_148635472(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1486354dc FUN_1486354dc body=58 status=ok
// SIG undefined FUN_1486354dc(void)

void FUN_1486354dc(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_1405c5fa2();
  *(undefined **)(param_2 + 0x10) = &DAT_14cb769e8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined ***)(param_2 + 8) = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 14863552c FUN_14863552c body=110 status=ok
// SIG undefined FUN_14863552c(void)

undefined8 FUN_14863552c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      plVar1 = (longlong *)(param_2 + 8 + lVar2);
      plVar1[-1] = *(longlong *)(param_3 + lVar2);
      (**(code **)(*plVar1 + 0x20))(plVar1,0);
      plVar1[1] = ((longlong *)(param_3 + lVar2))[2];
      FUN_1406022fe(param_2 + lVar2 + 0x18);
      lVar2 = lVar2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486355c2 FUN_1486355c2 body=59 status=ok
// SIG undefined FUN_1486355c2(void)

undefined8 FUN_1486355c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148635654 FUN_148635654 body=83 status=ok
// SIG undefined FUN_148635654(void)

void FUN_148635654(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined2 **)(param_1 + 8) = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_140115c12(param_1 + 0x18,0);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486356ee FUN_1486356ee body=73 status=ok
// SIG undefined FUN_1486356ee(void)

undefined1 FUN_1486356ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148635760 FUN_148635760 body=59 status=ok
// SIG undefined FUN_148635760(void)

undefined8 FUN_148635760(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863583e FUN_14863583e body=59 status=ok
// SIG undefined FUN_14863583e(void)

undefined8 FUN_14863583e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863592a FUN_14863592a body=54 status=ok
// SIG undefined FUN_14863592a(void)

undefined1 FUN_14863592a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148635a66(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148635988 FUN_148635988 body=59 status=ok
// SIG undefined FUN_148635988(void)

undefined8 FUN_148635988(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486359ce FUN_1486359ce body=74 status=ok
// SIG undefined FUN_1486359ce(void)

void FUN_1486359ce(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b036de0;
    plVar3 = (longlong *)param_2[9];
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
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 148635a66 FUN_148635a66 body=140 status=ok
// SIG undefined FUN_148635a66(void)

longlong FUN_148635a66(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) ||
     (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 0x38);
  uVar8 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  *(undefined4 *)(param_1 + 0x3c) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  lVar4 = *(longlong *)(param_2 + 0x48);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(longlong *)(param_1 + 0x48) = lVar4;
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



// FUNCTION 148635b8e FUN_148635b8e body=59 status=ok
// SIG undefined FUN_148635b8e(void)

undefined8 FUN_148635b8e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148635c62 FUN_148635c62 body=54 status=ok
// SIG undefined FUN_148635c62(void)

undefined1 FUN_148635c62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148635d54(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148635cc0 FUN_148635cc0 body=59 status=ok
// SIG undefined FUN_148635cc0(void)

undefined8 FUN_148635cc0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148635d54 FUN_148635d54 body=77 status=ok
// SIG undefined FUN_148635d54(void)

void FUN_148635d54(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  if ((param_1[3] != param_2[3]) || ((int)param_1[4] != (int)param_2[4])) {
    param_1[3] = param_2[3];
    *(int *)(param_1 + 4) = (int)param_2[4];
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 148635dc0 FUN_148635dc0 body=111 status=ok
// SIG undefined FUN_148635dc0(void)

undefined8 FUN_148635dc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
    do {
      FUN_148635f0c(param_2 + -0x230,param_3 + -0x230);
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      *(undefined1 *)(param_2 + -6) = *(undefined1 *)(param_3 + -6);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x280;
      param_2 = param_2 + 0x280;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148635e58 FUN_148635e58 body=59 status=ok
// SIG undefined FUN_148635e58(void)

undefined8 FUN_148635e58(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148635ea4 FUN_148635ea4 body=38 status=ok
// SIG undefined FUN_148635ea4(void)

void FUN_148635ea4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_140b605dc(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 148635f0c FUN_148635f0c body=466 status=ok
// SIG undefined FUN_148635f0c(void)

longlong FUN_148635f0c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) ||
     (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  if ((*(longlong *)(param_1 + 0x60) != *(longlong *)(param_2 + 0x60)) ||
     (*(int *)(param_1 + 0x68) != *(int *)(param_2 + 0x68))) {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  FUN_148633d58(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  FUN_145fced18(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  (**(code **)(*(longlong *)(param_1 + 0xf8) + 0x20))(param_1 + 0xf8,0);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  FUN_1406022fe(param_1 + 0x108,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  FUN_140d02432(param_1 + 0x120,param_2 + 0x120);
  FUN_140d02432(param_1 + 0x170,param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_2 + 0x1c8);
  FUN_140d02432(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined2 *)(param_1 + 0x220) = *(undefined2 *)(param_2 + 0x220);
  *(undefined1 *)(param_1 + 0x222) = *(undefined1 *)(param_2 + 0x222);
  return param_1;
}



// FUNCTION 1486360e0 FUN_1486360e0 body=57 status=ok
// SIG undefined FUN_1486360e0(void)

void FUN_1486360e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56760 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56760 = FUN_140002ddd(FUN_1464b82e0,uVar1,L"DamageModifierDef");
  }
  return;
}



// FUNCTION 148636150 FUN_148636150 body=54 status=ok
// SIG undefined FUN_148636150(void)

undefined1 FUN_148636150(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148636242(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1486361ae FUN_1486361ae body=59 status=ok
// SIG undefined FUN_1486361ae(void)

undefined8 FUN_1486361ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148636242 FUN_148636242 body=77 status=ok
// SIG undefined FUN_148636242(void)

void FUN_148636242(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  if ((param_1[3] != param_2[3]) || ((int)param_1[4] != (int)param_2[4])) {
    param_1[3] = param_2[3];
    *(int *)(param_1 + 4) = (int)param_2[4];
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 1486362ae FUN_1486362ae body=63 status=ok
// SIG undefined FUN_1486362ae(void)

undefined1 FUN_1486362ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486365e0(param_2,param_3);
    param_3 = param_3 + 0x2f8;
    param_2 = param_2 + 0x2f8;
  }
  return 1;
}



// FUNCTION 148636316 FUN_148636316 body=59 status=ok
// SIG undefined FUN_148636316(void)

undefined8 FUN_148636316(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148636362 FUN_148636362 body=38 status=ok
// SIG undefined FUN_148636362(void)

void FUN_148636362(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f8) == '\x01') {
    FUN_140b60596(param_2);
    *(undefined1 *)(param_2 + 0x2f8) = 0;
  }
  return;
}



// FUNCTION 1486363ca FUN_1486363ca body=534 status=ok
// SIG undefined FUN_1486363ca(void)

undefined8 * FUN_1486363ca(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b039520;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xf00000d0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xf00000d0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  FUN_1405c5fa2();
  param_1[0x20] = &DAT_14cb769e8;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xf00000d0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xf00000d0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xf00000d0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(undefined1 *)((longlong)param_1 + 0x222) = 1;
  *param_1 = &PTR_FUN_14b0376a0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x3002;
  param_1[0x51] = 0;
  param_1[0x52] = 0x200000000;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x246) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24e) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xf00000d0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  return param_1;
}



// FUNCTION 1486365e0 FUN_1486365e0 body=188 status=ok
// SIG undefined FUN_1486365e0(void)

longlong FUN_1486365e0(longlong param_1,longlong param_2)

{
  FUN_148635f0c();
  if ((*(longlong *)(param_1 + 0x228) != *(longlong *)(param_2 + 0x228)) ||
     (*(int *)(param_1 + 0x230) != *(int *)(param_2 + 0x230))) {
    *(longlong *)(param_1 + 0x228) = *(longlong *)(param_2 + 0x228);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  FUN_14863669c(param_1 + 0x240,param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  *(undefined2 *)(param_1 + 0x254) = *(undefined2 *)(param_2 + 0x254);
  FUN_14118c70e(param_1 + 600,param_2 + 600);
  *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(param_2 + 0x298);
  FUN_140d02432(param_1 + 0x2a0,param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  return param_1;
}



// FUNCTION 14863669c FUN_14863669c body=79 status=ok
// SIG undefined FUN_14863669c(void)

undefined8 * FUN_14863669c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486366ec(param_1,iVar1);
      FUN_14863675f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486366ec FUN_1486366ec body=115 status=ok
// SIG undefined FUN_1486366ec(void)

void FUN_1486366ec(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14863675f FUN_14863675f body=68 status=ok
// SIG undefined FUN_14863675f(void)

void FUN_14863675f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar1) = *(undefined8 *)(param_2 + 0x18 + lVar1);
      *(undefined4 *)(param_1 + 0x20 + lVar1) = *(undefined4 *)(param_2 + 0x20 + lVar1);
      *(undefined8 *)(param_1 + 0x28 + lVar1) = 0;
      lVar1 = lVar1 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486367d8 FUN_1486367d8 body=54 status=ok
// SIG undefined FUN_1486367d8(void)

undefined1 FUN_1486367d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14187c1e4(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148636836 FUN_148636836 body=59 status=ok
// SIG undefined FUN_148636836(void)

undefined8 FUN_148636836(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863687c FUN_14863687c body=32 status=ok
// SIG undefined FUN_14863687c(void)

void FUN_14863687c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_140a3299c(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1486368ec FUN_1486368ec body=38 status=ok
// SIG undefined FUN_1486368ec(void)

undefined8 FUN_1486368ec(undefined8 param_1,int param_2)

{
  FUN_140a3299c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148636930 FUN_148636930 body=63 status=ok
// SIG undefined FUN_148636930(void)

undefined1 FUN_148636930(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148635f0c(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148636998 FUN_148636998 body=59 status=ok
// SIG undefined FUN_148636998(void)

undefined8 FUN_148636998(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486369e4 FUN_1486369e4 body=38 status=ok
// SIG undefined FUN_1486369e4(void)

void FUN_1486369e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140b605dc(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148636a56 FUN_148636a56 body=86 status=ok
// SIG undefined FUN_148636a56(void)

void FUN_148636a56(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x248);
  FUN_1418461d0(param_2);
  *param_2 = &PTR_FUN_14b037dd0;
  param_2[0x45] = 0;
  *(undefined4 *)(param_2 + 0x46) = 0x3006;
  param_2[0x47] = 0;
  *(undefined4 *)(param_2 + 0x48) = 1;
  return;
}



// FUNCTION 148636aac FUN_148636aac body=68 status=ok
// SIG undefined FUN_148636aac(void)

void FUN_148636aac(undefined8 param_1,undefined8 *param_2)

{
  FUN_1418461d0(param_2);
  *param_2 = &PTR_FUN_14b037dd0;
  param_2[0x45] = 0;
  *(undefined4 *)(param_2 + 0x46) = 0x3006;
  param_2[0x47] = 0;
  *(undefined4 *)(param_2 + 0x48) = 1;
  return;
}



// FUNCTION 148636b14 FUN_148636b14 body=63 status=ok
// SIG undefined FUN_148636b14(void)

undefined1 FUN_148636b14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148636c9a(param_2,param_3);
    param_3 = param_3 + 0x248;
    param_2 = param_2 + 0x248;
  }
  return 1;
}



// FUNCTION 148636b7c FUN_148636b7c body=59 status=ok
// SIG undefined FUN_148636b7c(void)

undefined8 FUN_148636b7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148636bc8 FUN_148636bc8 body=38 status=ok
// SIG undefined FUN_148636bc8(void)

void FUN_148636bc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x248) == '\x01') {
    FUN_140b605dc(param_2);
    *(undefined1 *)(param_2 + 0x248) = 0;
  }
  return;
}



// FUNCTION 148636c3c FUN_148636c3c body=38 status=ok
// SIG undefined FUN_148636c3c(void)

undefined8 FUN_148636c3c(undefined8 param_1,int param_2)

{
  FUN_140b605dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148636c62 FUN_148636c62 body=55 status=ok
// SIG undefined FUN_148636c62(void)

void FUN_148636c62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56778 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56778 = FUN_140002ddd(FUN_1464b8592,uVar1,L"DamageModifierHitRegionDef");
  }
  return;
}



// FUNCTION 148636c9a FUN_148636c9a body=99 status=ok
// SIG undefined FUN_148636c9a(void)

longlong FUN_148636c9a(longlong param_1,longlong param_2)

{
  FUN_148635f0c();
  if ((*(longlong *)(param_1 + 0x228) != *(longlong *)(param_2 + 0x228)) ||
     (*(int *)(param_1 + 0x230) != *(int *)(param_2 + 0x230))) {
    *(longlong *)(param_1 + 0x228) = *(longlong *)(param_2 + 0x228);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  return param_1;
}



// FUNCTION 148636cfe FUN_148636cfe body=93 status=ok
// SIG undefined FUN_148636cfe(void)

undefined8 * FUN_148636cfe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1408c28ac(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148636d5c(param_1,iVar1);
      FUN_148636dd2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148636d5c FUN_148636d5c body=118 status=ok
// SIG undefined FUN_148636d5c(void)

void FUN_148636d5c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148636dd2 FUN_148636dd2 body=60 status=ok
// SIG undefined FUN_148636dd2(void)

void FUN_148636dd2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148636e0e(param_1,param_2);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 148636e0e FUN_148636e0e body=189 status=ok
// SIG undefined FUN_148636e0e(void)

undefined8 * FUN_148636e0e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_144a7f96e(param_1 + 3,param_2 + 3);
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  param_1[0xc] = param_2[0xc];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar3 = *(undefined4 *)(param_2 + 0xe);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0xe) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar4;
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148636f50 FUN_148636f50 body=101 status=ok
// SIG undefined FUN_148636f50(void)

undefined8 FUN_148636f50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 != 0) {
    piVar1 = (int *)(param_3 + 8);
    param_2 = param_2 + 0x18;
    do {
      if ((*(longlong *)(param_2 + -0x18) != *(longlong *)(piVar1 + -2)) ||
         (*(int *)(param_2 + -0x10) != *piVar1)) {
        *(longlong *)(param_2 + -0x18) = *(longlong *)(piVar1 + -2);
        *(int *)(param_2 + -0x10) = *piVar1;
        *(undefined8 *)(param_2 + -8) = 0;
      }
      FUN_140d02432(param_2,piVar1 + 4);
      piVar1 = piVar1 + 0x1a;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148636fde FUN_148636fde body=59 status=ok
// SIG undefined FUN_148636fde(void)

undefined8 FUN_148636fde(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863709e FUN_14863709e body=63 status=ok
// SIG undefined FUN_14863709e(void)

undefined1 FUN_14863709e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148637484(param_2,param_3);
    param_3 = param_3 + 0x410;
    param_2 = param_2 + 0x410;
  }
  return 1;
}



// FUNCTION 148637106 FUN_148637106 body=59 status=ok
// SIG undefined FUN_148637106(void)

undefined8 FUN_148637106(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148637152 FUN_148637152 body=38 status=ok
// SIG undefined FUN_148637152(void)

void FUN_148637152(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x410) == '\x01') {
    FUN_140b78b2a(param_2);
    *(undefined1 *)(param_2 + 0x410) = 0;
  }
  return;
}



// FUNCTION 1486371ba FUN_1486371ba body=713 status=ok
// SIG undefined FUN_1486371ba(void)

undefined8 * FUN_1486371ba(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b039520;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xf00000d0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xf00000d0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  FUN_1405c5fa2();
  param_1[0x20] = &DAT_14cb769e8;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xf00000d0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xf00000d0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xf00000d0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(undefined1 *)((longlong)param_1 + 0x222) = 1;
  *param_1 = &PTR_FUN_14b038450;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xf00000d0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0x3f800000;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x52) = 1;
  *(undefined1 *)((longlong)param_1 + 0x292) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b9) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xf00000d0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x3f800000;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0xf00000d0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x36b) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0xf00000d0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0xf00000d0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0x3f800000;
  return param_1;
}



// FUNCTION 148637484 FUN_148637484 body=251 status=ok
// SIG undefined FUN_148637484(void)

longlong FUN_148637484(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148635f0c();
  *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 0x228);
  FUN_140d02432(param_1 + 0x230,param_2 + 0x230);
  FUN_148637580(param_1 + 0x280,param_2 + 0x280);
  *(undefined2 *)(param_1 + 0x290) = *(undefined2 *)(param_2 + 0x290);
  *(undefined1 *)(param_1 + 0x292) = *(undefined1 *)(param_2 + 0x292);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x298);
  uVar1 = *(undefined4 *)(param_2 + 0x2a4);
  uVar2 = *(undefined4 *)(param_2 + 0x2a8);
  uVar3 = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2a4) = uVar1;
  *(undefined4 *)(param_1 + 0x2a8) = uVar2;
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  FUN_144a787a6(param_1 + 0x2b0,param_2 + 0x2b0);
  *(undefined1 *)(param_1 + 0x2c0) = *(undefined1 *)(param_2 + 0x2c0);
  FUN_140d02432(param_1 + 0x2c8,param_2 + 0x2c8);
  FUN_140d02432(param_1 + 0x318,param_2 + 0x318);
  uVar1 = *(undefined4 *)(param_2 + 0x36b);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
  *(undefined4 *)(param_1 + 0x36b) = uVar1;
  FUN_140d02432(param_1 + 0x370,param_2 + 0x370);
  FUN_140d02432(param_1 + 0x3c0,param_2 + 0x3c0);
  return param_1;
}



// FUNCTION 148637580 FUN_148637580 body=79 status=ok
// SIG undefined FUN_148637580(void)

undefined8 * FUN_148637580(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486375d0(param_1,iVar1);
      FUN_14863763f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486375d0 FUN_1486375d0 body=111 status=ok
// SIG undefined FUN_1486375d0(void)

void FUN_1486375d0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14863763f FUN_14863763f body=131 status=ok
// SIG undefined FUN_14863763f(void)

void FUN_14863763f(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_1 + -0x20) = *(undefined8 *)(param_2 + -0x20);
      *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_2 + -0x18);
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_144a7f96e(param_1,param_2);
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      param_1 = param_1 + 0x68;
      param_2 = param_2 + 0x68;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486376f2 FUN_1486376f2 body=63 status=ok
// SIG undefined FUN_1486376f2(void)

undefined1 FUN_1486376f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403e0b1c(param_2,param_3);
    param_3 = param_3 + 0x310;
    param_2 = param_2 + 0x310;
  }
  return 1;
}



// FUNCTION 14863775a FUN_14863775a body=59 status=ok
// SIG undefined FUN_14863775a(void)

undefined8 FUN_14863775a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486377a6 FUN_1486377a6 body=38 status=ok
// SIG undefined FUN_1486377a6(void)

void FUN_1486377a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x310) == '\x01') {
    FUN_1403dfdc4(param_2);
    *(undefined1 *)(param_2 + 0x310) = 0;
  }
  return;
}



// FUNCTION 14863781c FUN_14863781c body=96 status=ok
// SIG undefined FUN_14863781c(void)

void FUN_14863781c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a79b68(&local_20,0);
  *param_2 = local_20;
  *(undefined4 *)(param_2 + 1) = 0x3001;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863790a FUN_14863790a body=59 status=ok
// SIG undefined FUN_14863790a(void)

undefined8 FUN_14863790a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148637a3c FUN_148637a3c body=63 status=ok
// SIG undefined FUN_148637a3c(void)

undefined1 FUN_148637a3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148637b44(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148637aa4 FUN_148637aa4 body=59 status=ok
// SIG undefined FUN_148637aa4(void)

undefined8 FUN_148637aa4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148637b44 FUN_148637b44 body=102 status=ok
// SIG undefined FUN_148637b44(void)

undefined8 * FUN_148637b44(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144a7bb84(param_1 + 2,param_2 + 2);
  FUN_144a7bb84(param_1 + 5,param_2 + 5);
  FUN_144a7bb84(param_1 + 8,param_2 + 8);
  FUN_144a7bb84(param_1 + 0xb,param_2 + 0xb);
  FUN_144a7bb84(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



// FUNCTION 148637bac FUN_148637bac body=37 status=ok
// SIG undefined FUN_148637bac(void)

void FUN_148637bac(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x210);
  FUN_148637cfa(param_2);
  return;
}



// FUNCTION 148637bf2 FUN_148637bf2 body=63 status=ok
// SIG undefined FUN_148637bf2(void)

undefined1 FUN_148637bf2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148637dfe(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 148637c5a FUN_148637c5a body=59 status=ok
// SIG undefined FUN_148637c5a(void)

undefined8 FUN_148637c5a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148637cfa FUN_148637cfa body=259 status=ok
// SIG undefined FUN_148637cfa(void)

undefined4 * FUN_148637cfa(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0x3f800000;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0x7012;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0xff;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x45) = 0x3e4ccccd3f800000;
  memset(param_1 + 0x48,0,200);
  *(undefined2 *)(param_1 + 0x7a) = 1;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 0x7013;
  *(undefined8 *)(param_1 + 0x80) = 0;
  param_1[0x82] = 0x3e800000;
  return param_1;
}



// FUNCTION 148637dfe FUN_148637dfe body=301 status=ok
// SIG undefined FUN_148637dfe(void)

longlong FUN_148637dfe(longlong param_1,longlong param_2)

{
  FUN_140d02432();
  FUN_140d02432(param_1 + 0x50,param_2 + 0x50);
  FUN_140d02432(param_1 + 0xa0,param_2 + 0xa0);
  if ((*(longlong *)(param_1 + 0xf0) != *(longlong *)(param_2 + 0xf0)) ||
     (*(int *)(param_1 + 0xf8) != *(int *)(param_2 + 0xf8))) {
    *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  FUN_148637b44(param_1 + 0x110,param_2 + 0x110);
  FUN_144a7bb84(param_1 + 0x198,param_2 + 0x198);
  FUN_144a7bb84(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_144a7bb84(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined2 *)(param_1 + 0x1e8) = *(undefined2 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  if ((*(longlong *)(param_1 + 0x1f0) != *(longlong *)(param_2 + 0x1f0)) ||
     (*(int *)(param_1 + 0x1f8) != *(int *)(param_2 + 0x1f8))) {
    *(longlong *)(param_1 + 0x1f0) = *(longlong *)(param_2 + 0x1f0);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  return param_1;
}



// FUNCTION 148637f2c FUN_148637f2c body=73 status=ok
// SIG undefined FUN_148637f2c(void)

void FUN_148637f2c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  memset(param_2 + 1,0,0x840);
  *param_2 = &PTR_FUN_14b039080;
  lVar1 = 8;
  do {
    FUN_148637cfa((longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x210;
  } while (lVar1 != 0x848);
  return;
}



// FUNCTION 148637f76 FUN_148637f76 body=56 status=ok
// SIG undefined FUN_148637f76(void)

void FUN_148637f76(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = &PTR_FUN_14b039080;
  lVar1 = 8;
  do {
    FUN_148637cfa((longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x210;
  } while (lVar1 != 0x848);
  return;
}



// FUNCTION 148637fd2 FUN_148637fd2 body=90 status=ok
// SIG undefined FUN_148637fd2(void)

undefined1 FUN_148637fd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    lVar1 = 8;
    do {
      FUN_148637dfe(param_2 + lVar1,param_3 + lVar1);
      lVar1 = lVar1 + 0x210;
    } while (lVar1 != 0x848);
    param_3 = param_3 + 0x848;
    param_2 = param_2 + 0x848;
  }
  return 1;
}



// FUNCTION 148638054 FUN_148638054 body=59 status=ok
// SIG undefined FUN_148638054(void)

undefined8 FUN_148638054(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148638100 FUN_148638100 body=29 status=ok
// SIG undefined FUN_148638100(void)

undefined8 FUN_148638100(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14863811e FUN_14863811e body=63 status=ok
// SIG undefined FUN_14863811e(void)

void FUN_14863811e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = &PTR_FUN_14b039080;
  lVar1 = 0x18;
  do {
    FUN_148637cfa((longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x210;
  } while (lVar1 != 0x858);
  return;
}



// FUNCTION 148638182 FUN_148638182 body=101 status=ok
// SIG undefined FUN_148638182(void)

undefined1 FUN_148638182(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145fced18(param_2,param_3);
    lVar1 = 0x18;
    do {
      FUN_148637dfe(param_2 + lVar1,param_3 + lVar1);
      lVar1 = lVar1 + 0x210;
    } while (lVar1 != 0x858);
    param_3 = param_3 + 0x858;
    param_2 = param_2 + 0x858;
  }
  return 1;
}



// FUNCTION 148638210 FUN_148638210 body=59 status=ok
// SIG undefined FUN_148638210(void)

undefined8 FUN_148638210(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863825c FUN_14863825c body=43 status=ok
// SIG undefined FUN_14863825c(void)

void FUN_14863825c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0x10b] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10b) = 0;
  }
  return;
}



// FUNCTION 1486382f6 FUN_1486382f6 body=63 status=ok
// SIG undefined FUN_1486382f6(void)

undefined1 FUN_1486382f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148638420(param_2,param_3);
    param_3 = param_3 + 0x350;
    param_2 = param_2 + 0x350;
  }
  return 1;
}



// FUNCTION 14863835e FUN_14863835e body=59 status=ok
// SIG undefined FUN_14863835e(void)

undefined8 FUN_14863835e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486383aa FUN_1486383aa body=40 status=ok
// SIG undefined FUN_1486383aa(void)

void FUN_1486383aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x350) == '\x01') {
    FUN_145afe39c(param_2);
    *(undefined1 *)(param_2 + 0x350) = 0;
  }
  return;
}



// FUNCTION 148638420 FUN_148638420 body=646 status=ok
// SIG undefined FUN_148638420(void)

undefined8 * FUN_148638420(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  param_1[5] = param_2[5];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  param_1[10] = param_2[10];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  FUN_144a787a6(param_1 + 0xd,param_2 + 0xd);
  param_1[0xf] = param_2[0xf];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x11);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0x16);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0x16) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
  FUN_144a787a6(param_1 + 0x17,param_2 + 0x17);
  param_1[0x19] = param_2[0x19];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar2 = *(undefined4 *)(param_2 + 0x1b);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar1;
  *(undefined4 *)(param_1 + 0x1b) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar3;
  FUN_144a787a6(param_1 + 0x1c,param_2 + 0x1c);
  param_1[0x1e] = param_2[0x1e];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xfc);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar3;
  FUN_144a787a6(param_1 + 0x21,param_2 + 0x21);
  param_1[0x23] = param_2[0x23];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x124);
  uVar2 = *(undefined4 *)(param_2 + 0x25);
  uVar3 = *(undefined4 *)((longlong)param_2 + 300);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar1;
  *(undefined4 *)(param_1 + 0x25) = uVar2;
  *(undefined4 *)((longlong)param_1 + 300) = uVar3;
  FUN_144a787a6(param_1 + 0x26,param_2 + 0x26);
  param_1[0x28] = param_2[0x28];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14c);
  uVar2 = *(undefined4 *)(param_2 + 0x2a);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar3;
  FUN_144a787a6(param_1 + 0x2b,param_2 + 0x2b);
  param_1[0x2d] = param_2[0x2d];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x174);
  uVar2 = *(undefined4 *)(param_2 + 0x2f);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar1;
  *(undefined4 *)(param_1 + 0x2f) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar3;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  memcpy(param_1 + 0x32,param_2 + 0x32,0x9c);
  FUN_14123c256(param_1 + 0x46,param_2 + 0x46);
  FUN_14123c256(param_1 + 0x49,param_2 + 0x49);
  FUN_14123c256(param_1 + 0x4c,param_2 + 0x4c);
  FUN_14123c256(param_1 + 0x4f,param_2 + 0x4f);
  FUN_14123c256(param_1 + 0x52,param_2 + 0x52);
  FUN_14123c256(param_1 + 0x55,param_2 + 0x55);
  FUN_14123c256(param_1 + 0x58,param_2 + 0x58);
  FUN_14123c256(param_1 + 0x5b,param_2 + 0x5b);
  FUN_14123c256(param_1 + 0x5e,param_2 + 0x5e);
  FUN_14123c256(param_1 + 0x61,param_2 + 0x61);
  FUN_14123c256(param_1 + 100,param_2 + 100);
  FUN_14123c256(param_1 + 0x67,param_2 + 0x67);
  return param_1;
}



// FUNCTION 1486386d6 FUN_1486386d6 body=102 status=ok
// SIG undefined FUN_1486386d6(void)

void FUN_1486386d6(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb569b8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863878a FUN_14863878a body=462 status=ok
// SIG undefined FUN_14863878a(void)

void FUN_14863878a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_188 [32];
  undefined1 local_168 [48];
  undefined8 local_138;
  undefined1 local_128 [48];
  undefined8 local_f8;
  undefined1 local_e8 [48];
  longlong local_b8;
  undefined1 local_a8 [48];
  undefined1 *local_78;
  ulonglong local_70;
  undefined1 local_68 [48];
  undefined1 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_38 = (undefined1 *)0x0;
  local_30 = 0x200000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78 = (undefined1 *)0x0;
  local_70 = 0x200000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = 0;
  puVar1 = local_78;
  if (local_78 == (undefined1 *)0x0) {
    puVar1 = local_a8;
  }
  FUN_1400709d4(local_128,puVar1,local_70 & 0xffffffff,0);
  local_138 = 0;
  puVar1 = local_38;
  if (local_38 == (undefined1 *)0x0) {
    puVar1 = local_68;
  }
  FUN_1400709d4(local_168,puVar1,local_30 & 0xffffffff,0);
  FUN_14881f2b4(local_e8,local_168,local_128);
  FUN_14118c70e(param_3,local_e8);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148638966 FUN_148638966 body=406 status=ok
// SIG undefined FUN_148638966(void)

void FUN_148638966(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_1d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_14881e5ec(local_18,local_1c,local_1d);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148638b16 FUN_148638b16 body=224 status=ok
// SIG undefined FUN_148638b16(void)

void FUN_148638b16(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [48];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_68 = 0x3003;
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  puVar1 = &local_70;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14881f17e(local_58,puVar1);
  FUN_14118c70e(param_3,local_58);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148638bf8 FUN_148638bf8 body=260 status=ok
// SIG undefined FUN_148638bf8(void)

void FUN_148638bf8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  undefined1 local_58 [48];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  local_20 = 0x200000000;
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
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14881f0de(&local_70,puVar1);
  if ((*param_3 != local_70) || ((int)param_3[1] != local_68)) {
    *param_3 = local_70;
    *(int *)(param_3 + 1) = local_68;
    param_3[2] = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148638cfe FUN_148638cfe body=260 status=ok
// SIG undefined FUN_148638cfe(void)

void FUN_148638cfe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  undefined1 local_58 [48];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  local_20 = 0x200000000;
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
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14881f11e(&local_70,puVar1);
  if ((*param_3 != local_70) || ((int)param_3[1] != local_68)) {
    *param_3 = local_70;
    *(int *)(param_3 + 1) = local_68;
    param_3[2] = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148638e04 FUN_148638e04 body=277 status=ok
// SIG undefined FUN_148638e04(void)

void FUN_148638e04(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [48];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  local_20 = 0x200000000;
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
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14881f162(&local_68,puVar1);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148638f1a FUN_148638f1a body=238 status=ok
// SIG undefined FUN_148638f1a(void)

void FUN_148638f1a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_14881dccc(&local_68,local_1c);
  *(undefined4 *)(param_3 + 1) = local_60;
  *param_3 = local_68;
  if ((param_3[2] != local_58) || (*(int *)(param_3 + 3) != local_50)) {
    param_3[2] = local_58;
    *(int *)(param_3 + 3) = local_50;
    param_3[4] = 0;
  }
  *(undefined4 *)(param_3 + 7) = local_30;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_2c;
  *(undefined4 *)(param_3 + 8) = uStack_28;
  *(undefined4 *)((longlong)param_3 + 0x44) = uStack_24;
  *(undefined4 *)(param_3 + 5) = local_40;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_3c;
  *(undefined4 *)(param_3 + 6) = uStack_38;
  *(undefined4 *)((longlong)param_3 + 0x34) = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14863900a FUN_14863900a body=211 status=ok
// SIG undefined FUN_14863900a(void)

void FUN_14863900a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = 0;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0xf00000d0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14881dc6c(puVar1);
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486390e6 FUN_1486390e6 body=358 status=ok
// SIG undefined FUN_1486390e6(void)

void FUN_1486390e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [48];
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [48];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  local_38 = 0x200000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar3 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_80 = 0;
  local_78 = 0x200000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar2 = local_b0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_1400ff15e(puVar3,puVar2);
  *param_3 = uVar1;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148639254 FUN_148639254 body=336 status=ok
// SIG undefined FUN_148639254(void)

void FUN_148639254(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  local_30 = 0x200000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_80 = 0;
  local_78 = 0x3003;
  local_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  puVar2 = &local_80;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14881f1c0(puVar3,puVar2);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486393a6 FUN_1486393a6 body=172 status=ok
// SIG undefined FUN_1486393a6(void)

void FUN_1486393a6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14881e8a4(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148639454 FUN_148639454 body=263 status=ok
// SIG undefined FUN_148639454(void)

void FUN_148639454(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68;
  undefined1 local_58 [48];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  local_20 = 0x200000000;
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
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14881f074(local_78,puVar1);
  FUN_140cc1bde(param_3,local_78);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863955c FUN_14863955c body=187 status=ok
// SIG undefined FUN_14863955c(void)

void FUN_14863955c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0x3003;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14881f050(puVar2);
  FUN_1403de7ba(param_3,uVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148639620 FUN_148639620 body=548 status=ok
// SIG undefined FUN_148639620(void)

void FUN_148639620(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined **local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_178 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  local_170 = 0;
  local_16c = 0;
  local_168 = 0;
  local_160 = 0x3002;
  local_158 = 0;
  local_120 = 0;
  local_118 = 0x200000000;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_e8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_e0 = DAT_14c8464f0;
  local_c8 = DAT_14c8464f0;
  local_b0 = DAT_14c8464f0;
  local_a8 = 0;
  local_a0 = 0x3006;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (undefined4)DAT_14c8464e0;
  uStack_74 = DAT_14c8464e0._4_4_;
  uStack_70 = (undefined4)DAT_14c8464e8;
  uStack_6c = DAT_14c8464e8._4_4_;
  local_68 = DAT_14c8464f0;
  local_60 = 0;
  local_5c = 0;
  local_d8 = local_f0;
  uStack_d0 = uStack_e8;
  local_c0 = local_f0;
  uStack_b8 = uStack_e8;
  FUN_1405c5fa2();
  local_50 = &DAT_14cb769e8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = &PTR_FUN_14b0394b0;
  local_38 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_170);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  if (*(undefined4 **)(param_2 + 0x38) == (undefined4 *)0x0) {
    puVar2 = &local_170;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14881ef1c(local_178,puVar2);
  *param_3 = uVar1;
  FUN_141846ab8(&local_170);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863984c FUN_14863984c body=366 status=ok
// SIG undefined FUN_14863984c(void)

void FUN_14863984c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  local_40 = 0x3006;
  local_38 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  local_58 = local_40;
  local_50 = 0;
  uVar1 = FUN_14881e28c(local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486399c2 FUN_1486399c2 body=239 status=ok
// SIG undefined FUN_1486399c2(void)

void FUN_1486399c2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14881def8(local_20,local_24 != 0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148639ab2 FUN_148639ab2 body=291 status=ok
// SIG undefined FUN_148639ab2(void)

void FUN_148639ab2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60[0] = 0;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0xf00000d0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14892b7cc(puVar1,&local_70);
  if (&local_70 == param_3) {
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_70;
    *(undefined4 *)(param_3 + 1) = local_68;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_64;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148639bee FUN_148639bee body=239 status=ok
// SIG undefined FUN_148639bee(void)

void FUN_148639bee(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14881f316(local_20,local_24 != 0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148639ce4 FUN_148639ce4 body=155 status=ok
// SIG undefined FUN_148639ce4(void)

void FUN_148639ce4(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14881ee3e(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148639d86 FUN_148639d86 body=155 status=ok
// SIG undefined FUN_148639d86(void)

void FUN_148639d86(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14881eea6(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148639e28 FUN_148639e28 body=245 status=ok
// SIG undefined FUN_148639e28(void)

void FUN_148639e28(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14881e8fc(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148639f2a FUN_148639f2a body=370 status=ok
// SIG undefined FUN_148639f2a(void)

void FUN_148639f2a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  int local_3c;
  undefined **local_38;
  undefined *local_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405c5fa2();
  local_30 = &DAT_14cb769e8;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = &PTR_FUN_14b0394b0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  pppuVar2 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar2 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14881efa0(&local_58,pppuVar2);
  (**(code **)(*param_3 + 0x20))(param_3,0);
  param_3[1] = local_50;
  FUN_1406022fe(param_3 + 2,&local_48);
  local_58 = &DAT_14a171d50;
  local_40 = 0;
  if (local_3c != 0) {
    FUN_140115c12(&local_48,0);
  }
  local_50 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_38 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_20 >> 0x20;
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_28,0);
  }
  local_30 = (undefined *)0x0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863a09e FUN_14863a09e body=267 status=ok
// SIG undefined FUN_14863a09e(void)

void FUN_14863a09e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14881efe2(&local_40,local_20);
  (**(code **)(*param_3 + 0x20))(param_3,0);
  param_3[1] = local_38;
  FUN_1406022fe(param_3 + 2,&local_30);
  local_40 = &DAT_14a171d50;
  local_28 = 0;
  if (local_24 != 0) {
    FUN_140115c12(&local_30,0);
  }
  local_38 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863a1aa FUN_14863a1aa body=1637 status=ok
// SIG undefined FUN_14863a1aa(void)

void FUN_14863a1aa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_6f8 [32];
  undefined1 *local_6d8;
  undefined1 *local_6d0;
  undefined4 *local_6c8;
  undefined8 *local_6c0;
  undefined8 *local_6b8;
  undefined8 *local_6b0;
  undefined ***local_6a8;
  undefined8 local_698;
  undefined8 local_690;
  undefined4 local_688;
  undefined8 local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 local_668;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 local_618;
  undefined4 local_610;
  undefined8 local_608;
  undefined4 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined **local_5d0;
  undefined *local_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined **local_5b0;
  undefined *local_5a8;
  longlong local_5a0;
  ulonglong uStack_598;
  uint local_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined8 local_570;
  undefined4 local_568;
  uint uStack_564;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 local_508;
  undefined1 local_500 [4];
  undefined4 local_4fc;
  undefined4 local_45c;
  undefined4 local_430;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined1 local_3d8 [48];
  undefined8 local_3a8;
  undefined1 local_398 [784];
  undefined1 local_88 [48];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  local_3e0 = 0;
  local_698 = param_3;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3e0);
  }
  local_3e8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3e8);
  }
  local_400 = 0;
  local_3f8 = 0x3002;
  local_3f0 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_400);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_400);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x200000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  memset(local_500,0,0x100);
  local_430 = 0xffffffff;
  local_4fc = 0x3f800000;
  local_45c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_500);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_500);
  }
  puVar3 = local_500;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_518);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_518);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_530);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_530);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_548);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_548);
  }
  local_590 = local_590 & 0xffffff00;
  uStack_58c = 0;
  uStack_588 = 0;
  local_580 = 0;
  local_578 = 0xf00000d0;
  local_570 = 0;
  local_568 = 0;
  uStack_564 = uStack_564 & 0xffffff00;
  uStack_560 = 0;
  uStack_558 = 0;
  uStack_550 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_590);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_590);
  }
  FUN_1405c5fa2();
  local_5a8 = &DAT_14cb769e8;
  local_5a0 = 0;
  uStack_598 = 0;
  local_5b0 = &PTR_FUN_14b0394b0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5b0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_5d0 = (undefined **)&DAT_14a171d50;
  local_5c0 = 0;
  uStack_5b8 = 0;
  local_5c8 = local_5a8;
  FUN_1406022fe(&local_5c0,&local_5a0);
  local_5d0 = &PTR_FUN_14b0394b0;
  local_6b0 = &local_618;
  local_610 = uStack_588;
  local_618 = CONCAT44(uStack_58c,local_590);
  local_608 = local_580;
  local_600 = local_578;
  local_5f8 = 0;
  local_5f0 = CONCAT44(uStack_564,local_568);
  uStack_5e8 = uStack_560;
  local_5e0 = (undefined4)uStack_558;
  uStack_5dc = uStack_558._4_4_;
  uStack_5d8 = (undefined4)uStack_550;
  uStack_5d4 = uStack_550._4_4_;
  local_6b8 = &local_638;
  local_638 = local_548;
  uStack_630 = uStack_540;
  local_628 = local_538;
  local_6c0 = &local_658;
  local_648 = local_520;
  local_658 = local_530;
  uStack_650 = uStack_528;
  local_6c8 = &local_678;
  local_678 = local_518;
  uStack_674 = uStack_514;
  uStack_670 = uStack_510;
  uStack_66c = uStack_50c;
  local_668 = local_508;
  local_6d8 = local_3d8;
  local_3a8 = 0;
  puVar2 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar2 = local_88;
  }
  FUN_1400709d4(local_6d8,puVar2,local_50 & 0xffffffff,0);
  local_690 = local_400;
  local_688 = local_3f8;
  local_680 = 0;
  local_6a8 = &local_5d0;
  local_6d0 = puVar3;
  FUN_1405fe086(local_398,local_3e0,local_3e8);
  FUN_1403e0b1c(local_698,local_398);
  FUN_1403dfdc4(local_398);
  local_5b0 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_598 >> 0x20;
  uStack_598 = uStack_598 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_5a0,0);
  }
  local_5a8 = (undefined *)0x0;
  if (local_5a0 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_6f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863a818 FUN_14863a818 body=358 status=ok
// SIG undefined FUN_14863a818(void)

void FUN_14863a818(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [48];
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [48];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  local_38 = 0x200000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar3 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_80 = 0;
  local_78 = 0x200000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar2 = local_b0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14881f1b0(puVar3,puVar2);
  *param_3 = uVar1;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863a986 FUN_14863a986 body=336 status=ok
// SIG undefined FUN_14863a986(void)

void FUN_14863a986(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  local_30 = 0x200000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_80 = 0;
  local_78 = 0x3003;
  local_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  puVar2 = &local_80;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14881f238(puVar3,puVar2);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863aad8 FUN_14863aad8 body=529 status=ok
// SIG undefined FUN_14863aad8(void)

void FUN_14863aad8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
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
  local_40 = 0;
  local_38 = 0x3006;
  local_30 = 0;
  FUN_1446ef920();
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_40;
  local_58 = local_38;
  local_50 = 0;
  local_68 = local_48;
  FUN_14881df7a(local_20,local_28,&local_60,local_44);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863acf0 FUN_14863acf0 body=415 status=ok
// SIG undefined FUN_14863acf0(void)

void FUN_14863acf0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
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
  local_40 = 0;
  local_38 = 0x3001;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58 = 0;
  local_50 = 10;
  local_48 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58;
  local_68 = local_50;
  local_60 = 0;
  local_88 = local_40;
  local_80 = local_38;
  local_78 = 0;
  uVar1 = FUN_14881dce2(local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863ae90 FUN_14863ae90 body=148 status=ok
// SIG undefined FUN_14863ae90(void)

void FUN_14863ae90(undefined8 param_1,longlong param_2)

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
  FUN_14881e484(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863af2c FUN_14863af2c body=155 status=ok
// SIG undefined FUN_14863af2c(void)

void FUN_14863af2c(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14881f364(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863afce FUN_14863afce body=148 status=ok
// SIG undefined FUN_14863afce(void)

void FUN_14863afce(undefined8 param_1,longlong param_2)

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
  FUN_14881db82(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863b064 FUN_14863b064 body=148 status=ok
// SIG undefined FUN_14863b064(void)

void FUN_14863b064(undefined8 param_1,longlong param_2)

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
  FUN_14588d13e(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863b0fa FUN_14863b0fa body=357 status=ok
// SIG undefined FUN_14863b0fa(void)

void FUN_14863b0fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_40 = 0;
  local_38 = 0x3005;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  FUN_143d07c96(local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863b260 FUN_14863b260 body=237 status=ok
// SIG undefined FUN_14863b260(void)

void FUN_14863b260(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
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
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_14881ecb6(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863b34e FUN_14863b34e body=237 status=ok
// SIG undefined FUN_14863b34e(void)

void FUN_14863b34e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
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
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_14881eb2e(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863b43c FUN_14863b43c body=321 status=ok
// SIG undefined FUN_14863b43c(void)

void FUN_14863b43c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140e5d352(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863b57e FUN_14863b57e body=406 status=ok
// SIG undefined FUN_14863b57e(void)

void FUN_14863b57e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_1d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_14881e710(local_18,local_1c,local_1d);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863b716 FUN_14863b716 body=406 status=ok
// SIG undefined FUN_14863b716(void)

void FUN_14863b716(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_1d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_14881e4c8(local_18,local_1c,local_1d);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863b8ae FUN_14863b8ae body=237 status=ok
// SIG undefined FUN_14863b8ae(void)

void FUN_14863b8ae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
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
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_14881ed78(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863b99c FUN_14863b99c body=237 status=ok
// SIG undefined FUN_14863b99c(void)

void FUN_14863b99c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
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
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_14881ebf0(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863bab6 FUN_14863bab6 body=66 status=ok
// SIG undefined FUN_14863bab6(void)

undefined8 FUN_14863bab6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14861620a(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_3 + 0x14);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 14863bb20 FUN_14863bb20 body=59 status=ok
// SIG undefined FUN_14863bb20(void)

undefined8 FUN_14863bb20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863bb66 FUN_14863bb66 body=37 status=ok
// SIG undefined FUN_14863bb66(void)

void FUN_14863bb66(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14863bbd0 FUN_14863bbd0 body=37 status=ok
// SIG undefined FUN_14863bbd0(void)

void FUN_14863bbd0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x110);
  FUN_143c3c90a(param_2);
  return;
}



// FUNCTION 14863bc14 FUN_14863bc14 body=63 status=ok
// SIG undefined FUN_14863bc14(void)

undefined1 FUN_14863bc14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14184683c(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 14863bc7c FUN_14863bc7c body=59 status=ok
// SIG undefined FUN_14863bc7c(void)

undefined8 FUN_14863bc7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863bd3e FUN_14863bd3e body=321 status=ok
// SIG undefined FUN_14863bd3e(void)

undefined4
FUN_14863bd3e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_4 != 0) {
    local_b0 = param_7;
    local_b8 = param_6;
    FUN_14881d57e(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_d8);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_a8);
  if ((local_9c & 2) == 0) {
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_60 = 0x200000000;
  }
  local_b0 = param_7;
  local_b8 = param_6;
  uVar1 = FUN_14881d57e(param_3,param_2,&local_98,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_a8);
  if (((local_9c & 4) != 0) && (local_68 != 0)) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14863be80 FUN_14863be80 body=39 status=ok
// SIG undefined FUN_14863be80(void)

void FUN_14863be80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_14881d328(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14863bec0 FUN_14863bec0 body=59 status=ok
// SIG undefined FUN_14863bec0(void)

undefined8 FUN_14863bec0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863bf06 FUN_14863bf06 body=38 status=ok
// SIG undefined FUN_14863bf06(void)

void FUN_14863bf06(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14863bfc4 FUN_14863bfc4 body=54 status=ok
// SIG undefined FUN_14863bfc4(void)

undefined1 FUN_14863bfc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863c0c2(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 14863c022 FUN_14863c022 body=59 status=ok
// SIG undefined FUN_14863c022(void)

undefined8 FUN_14863c022(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863c0c2 FUN_14863c0c2 body=77 status=ok
// SIG undefined FUN_14863c0c2(void)

void FUN_14863c0c2(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  if ((param_1[3] != param_2[3]) || ((int)param_1[4] != (int)param_2[4])) {
    param_1[3] = param_2[3];
    *(int *)(param_1 + 4) = (int)param_2[4];
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 14863c110 FUN_14863c110 body=37 status=ok
// SIG undefined FUN_14863c110(void)

void FUN_14863c110(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe8);
  FUN_143c3ca42(param_2);
  return;
}



// FUNCTION 14863c162 FUN_14863c162 body=63 status=ok
// SIG undefined FUN_14863c162(void)

undefined1 FUN_14863c162(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863c2e6(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 14863c1ca FUN_14863c1ca body=59 status=ok
// SIG undefined FUN_14863c1ca(void)

undefined8 FUN_14863c1ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863c216 FUN_14863c216 body=38 status=ok
// SIG undefined FUN_14863c216(void)

void FUN_14863c216(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_140c1d2c4(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 14863c282 FUN_14863c282 body=43 status=ok
// SIG undefined FUN_14863c282(void)

undefined8 FUN_14863c282(undefined8 param_1,int param_2)

{
  FUN_140c1d2c4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14863c2ae FUN_14863c2ae body=55 status=ok
// SIG undefined FUN_14863c2ae(void)

void FUN_14863c2ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56a28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56a28 = FUN_140002ddd(FUN_1464b933e,uVar1,L"DamageSourceDef");
  }
  return;
}



// FUNCTION 14863c2e6 FUN_14863c2e6 body=141 status=ok
// SIG undefined FUN_14863c2e6(void)

longlong FUN_14863c2e6(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148635d54(param_1 + 0x18,param_2 + 0x18);
  FUN_140d02432(param_1 + 0x48,param_2 + 0x48);
  FUN_14863c374(param_1 + 0x98,param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  FUN_1403de7ba(param_1 + 0xb8,param_2 + 0xb8);
  FUN_1406fa324(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 14863c374 FUN_14863c374 body=79 status=ok
// SIG undefined FUN_14863c374(void)

undefined8 * FUN_14863c374(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14863c3c4(param_1,iVar1);
      FUN_14863c437(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14863c3c4 FUN_14863c3c4 body=115 status=ok
// SIG undefined FUN_14863c3c4(void)

void FUN_14863c3c4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14863c437 FUN_14863c437 body=68 status=ok
// SIG undefined FUN_14863c437(void)

void FUN_14863c437(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar1) = *(undefined8 *)(param_2 + 0x18 + lVar1);
      *(undefined4 *)(param_1 + 0x20 + lVar1) = *(undefined4 *)(param_2 + 0x20 + lVar1);
      *(undefined8 *)(param_1 + 0x28 + lVar1) = 0;
      lVar1 = lVar1 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14863c47c FUN_14863c47c body=104 status=ok
// SIG undefined FUN_14863c47c(void)

undefined8 FUN_14863c47c(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14881d98c(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863c4e6 FUN_14863c4e6 body=28 status=ok
// SIG undefined FUN_14863c4e6(void)

undefined8 FUN_14863c4e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14863c56a FUN_14863c56a body=196 status=ok
// SIG undefined FUN_14863c56a(void)

void FUN_14863c56a(longlong *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined1 local_300 [704];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_40 = 0;
  local_38 = 0x800000000;
  local_318 = *param_2;
  uStack_314 = param_2[1];
  uStack_310 = param_2[2];
  uStack_30c = param_2[3];
  local_308 = param_2[4];
  FUN_1408d7d42(local_300,param_2 + 6);
  local_30 = *param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb56ec0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_318);
  *param_3 = local_30;
  FUN_1407acd04(local_300);
  if ((local_28 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863c6cc FUN_14863c6cc body=45 status=ok
// SIG undefined FUN_14863c6cc(void)

longlong FUN_14863c6cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140d0032a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14863c700 FUN_14863c700 body=48 status=ok
// SIG undefined FUN_14863c700(void)

longlong FUN_14863c700(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140d0032a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14863c738 FUN_14863c738 body=48 status=ok
// SIG undefined FUN_14863c738(void)

longlong FUN_14863c738(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140d0032a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14863c770 FUN_14863c770 body=48 status=ok
// SIG undefined FUN_14863c770(void)

longlong FUN_14863c770(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140d0032a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14863c7a8 FUN_14863c7a8 body=45 status=ok
// SIG undefined FUN_14863c7a8(void)

longlong FUN_14863c7a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14863c7d6 FUN_14863c7d6 body=47 status=ok
// SIG undefined FUN_14863c7d6(void)

void FUN_14863c7d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1405c5fa2();
  param_2[1] = &DAT_14cb769e8;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 14863c818 FUN_14863c818 body=302 status=ok
// SIG undefined FUN_14863c818(void)

undefined4
FUN_14863c818(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [12];
  byte local_7c;
  undefined **local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
    local_90 = param_7;
    local_98 = param_6;
    (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined **)0x0;
  puStack_70 = (undefined *)0x0;
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 2) == 0) {
    FUN_1405c5fa2();
    puStack_70 = &DAT_14cb769e8;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = &PTR_FUN_14b0394b0;
  }
  local_90 = param_7;
  local_98 = param_6;
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,&local_78,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 4) != 0) {
    (*(code *)local_78[0xb])(&local_78,0);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14863c948 FUN_14863c948 body=41 status=ok
// SIG undefined FUN_14863c948(void)

void FUN_14863c948(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14863c986 FUN_14863c986 body=59 status=ok
// SIG undefined FUN_14863c986(void)

undefined8 FUN_14863c986(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863ca58 FUN_14863ca58 body=140 status=ok
// SIG undefined FUN_14863ca58(void)

undefined8 FUN_14863ca58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14863cb0c FUN_14863cb0c body=59 status=ok
// SIG undefined FUN_14863cb0c(void)

undefined8 FUN_14863cb0c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863cba2 FUN_14863cba2 body=37 status=ok
// SIG undefined FUN_14863cba2(void)

void FUN_14863cba2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  FUN_141526730(param_2);
  return;
}



// FUNCTION 14863cbf4 FUN_14863cbf4 body=63 status=ok
// SIG undefined FUN_14863cbf4(void)

undefined1 FUN_14863cbf4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863cd84(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 14863cc5c FUN_14863cc5c body=59 status=ok
// SIG undefined FUN_14863cc5c(void)

undefined8 FUN_14863cc5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863cca8 FUN_14863cca8 body=38 status=ok
// SIG undefined FUN_14863cca8(void)

void FUN_14863cca8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1410265d4(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 14863cd1c FUN_14863cd1c body=43 status=ok
// SIG undefined FUN_14863cd1c(void)

undefined8 FUN_14863cd1c(undefined8 param_1,int param_2)

{
  FUN_1410265d4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 14863cd48 FUN_14863cd48 body=55 status=ok
// SIG undefined FUN_14863cd48(void)

void FUN_14863cd48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56c70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56c70 = FUN_140002ddd(FUN_141847056,uVar1,L"DamageTypeDef");
  }
  return;
}



// FUNCTION 14863cd84 FUN_14863cd84 body=255 status=ok
// SIG undefined FUN_14863cd84(void)

longlong FUN_14863cd84(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  FUN_1403de7ba(param_1 + 0x50,param_2 + 0x50);
  FUN_148635d54(param_1 + 0x70,param_2 + 0x70);
  FUN_1403de7ba(param_1 + 0xa0,param_2 + 0xa0);
  if ((*(longlong *)(param_1 + 0xc0) != *(longlong *)(param_2 + 0xc0)) ||
     (*(int *)(param_1 + 200) != *(int *)(param_2 + 200))) {
    *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  uVar1 = *(undefined4 *)(param_2 + 0xe4);
  uVar2 = *(undefined4 *)(param_2 + 0xe8);
  uVar3 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  FUN_144a787a6(param_1 + 0xf0,param_2 + 0xf0);
  FUN_148636cfe(param_1 + 0x100,param_2 + 0x100);
  FUN_1406fa324(param_1 + 0x110,param_2 + 0x110);
  return param_1;
}



// FUNCTION 14863ce84 FUN_14863ce84 body=58 status=ok
// SIG undefined FUN_14863ce84(void)

void FUN_14863ce84(undefined8 param_1,uint *param_2)

{
  *param_2 = *param_2 & 0xffffffe0 | 3;
  FUN_1405c5fa2();
  *(undefined **)(param_2 + 4) = &DAT_14cb769e8;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined ***)(param_2 + 2) = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 14863ced4 FUN_14863ced4 body=110 status=ok
// SIG undefined FUN_14863ced4(void)

undefined8 FUN_14863ced4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      plVar1 = (longlong *)(param_2 + 8 + lVar2);
      *(undefined1 *)(plVar1 + -1) = *(undefined1 *)(param_3 + lVar2);
      (**(code **)(*plVar1 + 0x20))(plVar1,0);
      plVar1[1] = *(longlong *)((undefined1 *)(param_3 + lVar2) + 0x10);
      FUN_1406022fe(param_2 + lVar2 + 0x18);
      lVar2 = lVar2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14863cf6a FUN_14863cf6a body=59 status=ok
// SIG undefined FUN_14863cf6a(void)

undefined8 FUN_14863cf6a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863d024 FUN_14863d024 body=54 status=ok
// SIG undefined FUN_14863d024(void)

undefined1 FUN_14863d024(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c3d0e6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14863d082 FUN_14863d082 body=59 status=ok
// SIG undefined FUN_14863d082(void)

undefined8 FUN_14863d082(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863d174 FUN_14863d174 body=59 status=ok
// SIG undefined FUN_14863d174(void)

undefined8 FUN_14863d174(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863d282 FUN_14863d282 body=91 status=ok
// SIG undefined FUN_14863d282(void)

undefined8 FUN_14863d282(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14863d306 FUN_14863d306 body=59 status=ok
// SIG undefined FUN_14863d306(void)

undefined8 FUN_14863d306(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863d34c FUN_14863d34c body=32 status=ok
// SIG undefined FUN_14863d34c(void)

void FUN_14863d34c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1418472b4(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14863d3b2 FUN_14863d3b2 body=43 status=ok
// SIG undefined FUN_14863d3b2(void)

undefined8 FUN_14863d3b2(undefined8 param_1,int param_2)

{
  FUN_1418472b4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14863d3de FUN_14863d3de body=55 status=ok
// SIG undefined FUN_14863d3de(void)

void FUN_14863d3de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56d88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56d88 = FUN_140002ddd(FUN_1464ba4a6,uVar1,L"GbxDialogEchoPresentationDef");
  }
  return;
}



// FUNCTION 14863d416 FUN_14863d416 body=25 status=ok
// SIG undefined FUN_14863d416(void)

undefined8 FUN_14863d416(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 14863d430 FUN_14863d430 body=28 status=ok
// SIG undefined FUN_14863d430(void)

undefined8 FUN_14863d430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14863d57a FUN_14863d57a body=160 status=ok
// SIG undefined FUN_14863d57a(void)

undefined8 FUN_14863d57a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      FUN_141289ada(param_2 + lVar3 + 8,param_3 + lVar3 + 8);
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_14863d6ee(lVar1 + 0x18,lVar2 + 0x18);
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
      *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
      lVar2 = param_2 + 0x40 + lVar3;
      lVar1 = param_3 + lVar3;
      FUN_1418473b6(lVar2,lVar1 + 0x40);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x58);
      *(undefined2 *)(lVar2 + 0x20) = *(undefined2 *)(lVar1 + 0x60);
      lVar3 = lVar3 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14863d642 FUN_14863d642 body=59 status=ok
// SIG undefined FUN_14863d642(void)

undefined8 FUN_14863d642(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863d688 FUN_14863d688 body=43 status=ok
// SIG undefined FUN_14863d688(void)

void FUN_14863d688(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 14863d6ee FUN_14863d6ee body=88 status=ok
// SIG undefined FUN_14863d6ee(void)

longlong * FUN_14863d6ee(longlong *param_1,longlong *param_2)

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



// FUNCTION 14863d7b8 FUN_14863d7b8 body=54 status=ok
// SIG undefined FUN_14863d7b8(void)

undefined1 FUN_14863d7b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457b9864(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14863d816 FUN_14863d816 body=59 status=ok
// SIG undefined FUN_14863d816(void)

undefined8 FUN_14863d816(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863d85c FUN_14863d85c body=53 status=ok
// SIG undefined FUN_14863d85c(void)

void FUN_14863d85c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1406f0462(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14863d922 FUN_14863d922 body=114 status=ok
// SIG undefined FUN_14863d922(void)

undefined8 FUN_14863d922(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar7);
      lVar2 = param_2 + 0x20 + lVar7;
      *(undefined1 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(puVar1 + 8);
      uVar3 = *(undefined4 *)(puVar1 + 0x14);
      uVar4 = *(undefined4 *)(puVar1 + 0x18);
      uVar5 = *(undefined4 *)(puVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 0x10);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 0x20);
      uVar6 = *(undefined8 *)(puVar1 + 0x38);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x30);
      *(undefined8 *)(lVar2 + 0x18) = uVar6;
      lVar7 = lVar7 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14863d9bc FUN_14863d9bc body=59 status=ok
// SIG undefined FUN_14863d9bc(void)

undefined8 FUN_14863d9bc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863da02 FUN_14863da02 body=38 status=ok
// SIG undefined FUN_14863da02(void)

void FUN_14863da02(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14863daca FUN_14863daca body=59 status=ok
// SIG undefined FUN_14863daca(void)

undefined8 FUN_14863daca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863dbca FUN_14863dbca body=59 status=ok
// SIG undefined FUN_14863dbca(void)

undefined8 FUN_14863dbca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863dccc FUN_14863dccc body=59 status=ok
// SIG undefined FUN_14863dccc(void)

undefined8 FUN_14863dccc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863dd92 FUN_14863dd92 body=62 status=ok
// SIG undefined FUN_14863dd92(void)

undefined8 FUN_14863dd92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14123c256(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14863ddf8 FUN_14863ddf8 body=59 status=ok
// SIG undefined FUN_14863ddf8(void)

undefined8 FUN_14863ddf8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863dee0 FUN_14863dee0 body=63 status=ok
// SIG undefined FUN_14863dee0(void)

undefined1 FUN_14863dee0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863e078(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 14863df48 FUN_14863df48 body=59 status=ok
// SIG undefined FUN_14863df48(void)

undefined8 FUN_14863df48(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863df94 FUN_14863df94 body=38 status=ok
// SIG undefined FUN_14863df94(void)

void FUN_14863df94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_14863dff2(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 14863dff2 FUN_14863dff2 body=133 status=ok
// SIG undefined FUN_14863dff2(void)

void FUN_14863dff2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b04b5b0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140841fbd(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14863e078 FUN_14863e078 body=176 status=ok
// SIG undefined FUN_14863e078(void)

longlong FUN_14863e078(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_14583b696(param_1 + 0x28,param_2 + 0x28);
  FUN_14863e128(param_1 + 0x40,param_2 + 0x40);
  FUN_14863e178(param_1 + 0x50,param_2 + 0x50);
  FUN_14863e1cc(param_1 + 0x68,param_2 + 0x68);
  FUN_14863e21c(param_1 + 0x78,param_2 + 0x78);
  FUN_14863e270(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  FUN_14863e2ce(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 14863e128 FUN_14863e128 body=79 status=ok
// SIG undefined FUN_14863e128(void)

undefined8 * FUN_14863e128(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14863e326(param_1,iVar1);
      FUN_14863e388(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14863e178 FUN_14863e178 body=84 status=ok
// SIG undefined FUN_14863e178(void)

longlong * FUN_14863e178(longlong *param_1,longlong *param_2)

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



// FUNCTION 14863e1cc FUN_14863e1cc body=79 status=ok
// SIG undefined FUN_14863e1cc(void)

undefined8 * FUN_14863e1cc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14863e3c4(param_1,iVar1);
      FUN_14863e437(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14863e21c FUN_14863e21c body=84 status=ok
// SIG undefined FUN_14863e21c(void)

longlong * FUN_14863e21c(longlong *param_1,longlong *param_2)

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



// FUNCTION 14863e270 FUN_14863e270 body=93 status=ok
// SIG undefined FUN_14863e270(void)

undefined8 * FUN_14863e270(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140841fbd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14863e46c(param_1,iVar1);
      FUN_14863e4df(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14863e2ce FUN_14863e2ce body=88 status=ok
// SIG undefined FUN_14863e2ce(void)

undefined8 * FUN_14863e2ce(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14863e566(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14863e326 FUN_14863e326 body=98 status=ok
// SIG undefined FUN_14863e326(void)

void FUN_14863e326(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14863e388 FUN_14863e388 body=60 status=ok
// SIG undefined FUN_14863e388(void)

void FUN_14863e388(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141818f7a(param_1,param_2);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 14863e3c4 FUN_14863e3c4 body=115 status=ok
// SIG undefined FUN_14863e3c4(void)

void FUN_14863e3c4(longlong param_1,int param_2,int param_3)

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


