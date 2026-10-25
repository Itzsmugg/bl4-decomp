// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c1e66e FUN_148c1e66e body=57 status=ok
// SIG undefined FUN_148c1e66e(void)

void FUN_148c1e66e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab1e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab1e8 = FUN_140002ddd(FUN_1465dbe2d,uVar1,L"OakGlobalsStatusEffects");
  }
  return;
}



// FUNCTION 148c1e6a8 FUN_148c1e6a8 body=110 status=ok
// SIG undefined FUN_148c1e6a8(void)

longlong FUN_148c1e6a8(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_1401f3db8(param_1 + 0x20,param_2 + 0x20);
  FUN_1401f3db8(param_1 + 0x38,param_2 + 0x38);
  FUN_1401f3db8(param_1 + 0x50,param_2 + 0x50);
  FUN_1401f3db8(param_1 + 0x68,param_2 + 0x68);
  FUN_148c1e342(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 148c1e736 FUN_148c1e736 body=63 status=ok
// SIG undefined FUN_148c1e736(void)

undefined1 FUN_148c1e736(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1e860(param_2,param_3);
    param_3 = param_3 + 0x180;
    param_2 = param_2 + 0x180;
  }
  return 1;
}



// FUNCTION 148c1e79e FUN_148c1e79e body=59 status=ok
// SIG undefined FUN_148c1e79e(void)

undefined8 FUN_148c1e79e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1e7ea FUN_148c1e7ea body=40 status=ok
// SIG undefined FUN_148c1e7ea(void)

void FUN_148c1e7ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_1459454d2(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 148c1e860 FUN_148c1e860 body=417 status=ok
// SIG undefined FUN_148c1e860(void)

undefined8 * FUN_148c1e860(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar4 = *(undefined4 *)(param_2 + 0x16);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xb4);
  uVar6 = *(undefined4 *)(param_2 + 0x17);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0x15) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
  *(undefined4 *)(param_1 + 0x16) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar5;
  *(undefined4 *)(param_1 + 0x17) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar7;
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  FUN_144a7bb84(param_1 + 0x1a,param_2 + 0x1a);
  FUN_144a82394(param_1 + 0x1d,param_2 + 0x1d);
  param_1[0x1e] = param_2[0x1e];
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  FUN_144a7bb84(param_1 + 0x20,param_2 + 0x20);
  FUN_144a82394(param_1 + 0x23,param_2 + 0x23);
  param_1[0x24] = param_2[0x24];
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  FUN_144a7bb84(param_1 + 0x26,param_2 + 0x26);
  FUN_144a82394(param_1 + 0x29,param_2 + 0x29);
  param_1[0x2a] = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  FUN_144a7bb84(param_1 + 0x2c,param_2 + 0x2c);
  FUN_144a82394(param_1 + 0x2f,param_2 + 0x2f);
  return param_1;
}



// FUNCTION 148c1ea02 FUN_148c1ea02 body=33 status=ok
// SIG undefined FUN_148c1ea02(void)

void FUN_148c1ea02(undefined8 param_1,longlong param_2)

{
  FUN_1458ba3ce(param_2);
  *(undefined8 *)(param_2 + 0x180) = 0;
  return;
}



// FUNCTION 148c1ea3a FUN_148c1ea3a body=92 status=ok
// SIG undefined FUN_148c1ea3a(void)

undefined8 FUN_148c1ea3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1e860(param_2,param_3);
    *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_3 + 0x180);
    param_3 = param_3 + 0x188;
    param_2 = param_2 + 0x188;
  }
  return 1;
}



// FUNCTION 148c1eabe FUN_148c1eabe body=59 status=ok
// SIG undefined FUN_148c1eabe(void)

undefined8 FUN_148c1eabe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1eb0a FUN_148c1eb0a body=40 status=ok
// SIG undefined FUN_148c1eb0a(void)

void FUN_148c1eb0a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_1459454d2(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 148c1eba0 FUN_148c1eba0 body=63 status=ok
// SIG undefined FUN_148c1eba0(void)

undefined1 FUN_148c1eba0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1ed04(param_2,param_3);
    param_3 = param_3 + 0x2f8;
    param_2 = param_2 + 0x2f8;
  }
  return 1;
}



// FUNCTION 148c1ec08 FUN_148c1ec08 body=59 status=ok
// SIG undefined FUN_148c1ec08(void)

undefined8 FUN_148c1ec08(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1ec54 FUN_148c1ec54 body=40 status=ok
// SIG undefined FUN_148c1ec54(void)

void FUN_148c1ec54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f8) == '\x01') {
    FUN_14594541a(param_2);
    *(undefined1 *)(param_2 + 0x2f8) = 0;
  }
  return;
}



// FUNCTION 148c1ecca FUN_148c1ecca body=57 status=ok
// SIG undefined FUN_148c1ecca(void)

void FUN_148c1ecca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab230 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab230 = FUN_140002ddd(FUN_1465dbff3,uVar1,L"OakGlobalsTravel");
  }
  return;
}



// FUNCTION 148c1ed04 FUN_148c1ed04 body=444 status=ok
// SIG undefined FUN_148c1ed04(void)

longlong FUN_148c1ed04(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FUN_14123c256(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  FUN_148c1e860(param_1 + 0x88,param_2 + 0x88);
  FUN_148b7dfa2(param_1 + 0x208,param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  uVar1 = *(undefined4 *)(param_2 + 0x224);
  uVar2 = *(undefined4 *)(param_2 + 0x228);
  uVar3 = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = uVar1;
  *(undefined4 *)(param_1 + 0x228) = uVar2;
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  FUN_144a787a6(param_1 + 0x230,param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  uVar1 = *(undefined4 *)(param_2 + 0x24c);
  uVar2 = *(undefined4 *)(param_2 + 0x250);
  uVar3 = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  *(undefined4 *)(param_1 + 0x254) = uVar3;
  FUN_144a787a6(param_1 + 600,param_2 + 600);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  uVar1 = *(undefined4 *)(param_2 + 0x274);
  uVar2 = *(undefined4 *)(param_2 + 0x278);
  uVar3 = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x274) = uVar1;
  *(undefined4 *)(param_1 + 0x278) = uVar2;
  *(undefined4 *)(param_1 + 0x27c) = uVar3;
  FUN_144a787a6(param_1 + 0x280,param_2 + 0x280);
  FUN_148c1eec0(param_1 + 0x290,param_2 + 0x290);
  *(undefined1 *)(param_1 + 0x2a8) = *(undefined1 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  uVar1 = *(undefined4 *)(param_2 + 700);
  uVar2 = *(undefined4 *)(param_2 + 0x2c0);
  uVar3 = *(undefined4 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 700) = uVar1;
  *(undefined4 *)(param_1 + 0x2c0) = uVar2;
  *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  FUN_144a787a6(param_1 + 0x2c8,param_2 + 0x2c8);
  if ((*(longlong *)(param_1 + 0x2d8) != *(longlong *)(param_2 + 0x2d8)) ||
     (*(int *)(param_1 + 0x2e0) != *(int *)(param_2 + 0x2e0))) {
    *(longlong *)(param_1 + 0x2d8) = *(longlong *)(param_2 + 0x2d8);
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  return param_1;
}



// FUNCTION 148c1eec0 FUN_148c1eec0 body=84 status=ok
// SIG undefined FUN_148c1eec0(void)

longlong * FUN_148c1eec0(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c1ef70 FUN_148c1ef70 body=149 status=ok
// SIG undefined FUN_148c1ef70(void)

undefined8 FUN_148c1ef70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      lVar1 = param_2 + 0x60 + lVar7;
      *(undefined4 *)(lVar1 + -0x10) = *(undefined4 *)(param_3 + 0x50 + lVar7);
      puVar5 = (undefined8 *)(param_3 + lVar7);
      puVar6 = (undefined8 *)(lVar1 + -0x60);
      for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      plVar2 = *(longlong **)(param_3 + 0x58 + lVar7);
      plVar3 = *(longlong **)(lVar1 + -8);
      if (plVar3 != plVar2) {
        *(longlong **)(param_2 + 0x58 + lVar7) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(undefined4 *)(param_2 + 0x60 + lVar7) =
           *(undefined4 *)((undefined8 *)(param_3 + lVar7) + 0xc);
      lVar7 = lVar7 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c1f02e FUN_148c1f02e body=59 status=ok
// SIG undefined FUN_148c1f02e(void)

undefined8 FUN_148c1f02e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1f074 FUN_148c1f074 body=39 status=ok
// SIG undefined FUN_148c1f074(void)

void FUN_148c1f074(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    if (*(longlong **)(param_2 + 0x58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x58) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c1f150 FUN_148c1f150 body=59 status=ok
// SIG undefined FUN_148c1f150(void)

undefined8 FUN_148c1f150(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1f23a FUN_148c1f23a body=76 status=ok
// SIG undefined FUN_148c1f23a(void)

undefined8 FUN_148c1f23a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_148c1f368(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c1f2ae FUN_148c1f2ae body=59 status=ok
// SIG undefined FUN_148c1f2ae(void)

undefined8 FUN_148c1f2ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1f2f4 FUN_148c1f2f4 body=38 status=ok
// SIG undefined FUN_148c1f2f4(void)

void FUN_148c1f2f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c1f368 FUN_148c1f368 body=88 status=ok
// SIG undefined FUN_148c1f368(void)

undefined8 * FUN_148c1f368(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c1f3c0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c1f3c0 FUN_148c1f3c0 body=98 status=ok
// SIG undefined FUN_148c1f3c0(void)

void FUN_148c1f3c0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c1f4de FUN_148c1f4de body=59 status=ok
// SIG undefined FUN_148c1f4de(void)

undefined8 FUN_148c1f4de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1f5f8 FUN_148c1f5f8 body=59 status=ok
// SIG undefined FUN_148c1f5f8(void)

undefined8 FUN_148c1f5f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1f6ca FUN_148c1f6ca body=75 status=ok
// SIG undefined FUN_148c1f6ca(void)

undefined8 FUN_148c1f6ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a7bb84();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c1f73e FUN_148c1f73e body=59 status=ok
// SIG undefined FUN_148c1f73e(void)

undefined8 FUN_148c1f73e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1f84c FUN_148c1f84c body=59 status=ok
// SIG undefined FUN_148c1f84c(void)

undefined8 FUN_148c1f84c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1f952 FUN_148c1f952 body=54 status=ok
// SIG undefined FUN_148c1f952(void)

undefined1 FUN_148c1f952(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1fa7c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148c1f9b0 FUN_148c1f9b0 body=59 status=ok
// SIG undefined FUN_148c1f9b0(void)

undefined8 FUN_148c1f9b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1f9f6 FUN_148c1f9f6 body=55 status=ok
// SIG undefined FUN_148c1f9f6(void)

void FUN_148c1f9f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1459c441c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c1fa7c FUN_148c1fa7c body=122 status=ok
// SIG undefined FUN_148c1fa7c(void)

longlong FUN_148c1fa7c(longlong param_1,longlong param_2)

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
    FUN_148c1faf6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c1faf6 FUN_148c1faf6 body=202 status=ok
// SIG undefined FUN_148c1faf6(void)

undefined8 * FUN_148c1faf6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14142e0d8(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
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
          FUN_148c1fbc0(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c1fbc0 FUN_148c1fbc0 body=103 status=ok
// SIG undefined FUN_148c1fbc0(void)

undefined8 * FUN_148c1fbc0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 148c1fc28 FUN_148c1fc28 body=63 status=ok
// SIG undefined FUN_148c1fc28(void)

void FUN_148c1fc28(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  return;
}



// FUNCTION 148c1fcc8 FUN_148c1fcc8 body=75 status=ok
// SIG undefined FUN_148c1fcc8(void)

undefined1 FUN_148c1fcc8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1fa7c(param_2,param_3);
    FUN_14058acb2(param_2 + 0x50,param_3 + 0x50);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 148c1fd3c FUN_148c1fd3c body=59 status=ok
// SIG undefined FUN_148c1fd3c(void)

undefined8 FUN_148c1fd3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1fd88 FUN_148c1fd88 body=40 status=ok
// SIG undefined FUN_148c1fd88(void)

void FUN_148c1fd88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1459c43c6(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148c1fe1e FUN_148c1fe1e body=54 status=ok
// SIG undefined FUN_148c1fe1e(void)

undefined1 FUN_148c1fe1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1ff32(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c1fe7c FUN_148c1fe7c body=59 status=ok
// SIG undefined FUN_148c1fe7c(void)

undefined8 FUN_148c1fe7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1fec2 FUN_148c1fec2 body=34 status=ok
// SIG undefined FUN_148c1fec2(void)

void FUN_148c1fec2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145ca2032(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c1ff32 FUN_148c1ff32 body=309 status=ok
// SIG undefined FUN_148c1ff32(void)

longlong * FUN_148c1ff32(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  plVar1 = (longlong *)param_2[6];
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != plVar1) {
    param_1[6] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 7) = (int)param_2[7];
  plVar1 = (longlong *)param_2[8];
  plVar2 = (longlong *)param_1[8];
  if (plVar2 != plVar1) {
    param_1[8] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 9) = (int)param_2[9];
  plVar1 = (longlong *)param_2[10];
  plVar2 = (longlong *)param_1[10];
  if (plVar2 != plVar1) {
    param_1[10] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  return param_1;
}



// FUNCTION 148c20068 FUN_148c20068 body=33 status=ok
// SIG undefined FUN_148c20068(void)

void FUN_148c20068(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined1 **)(param_2 + 0x10) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_2 + 0x18) = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 148c200b0 FUN_148c200b0 body=114 status=ok
// SIG undefined FUN_148c200b0(void)

undefined8 FUN_148c200b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      plVar3 = *(longlong **)(param_3 + lVar8);
      plVar4 = *(longlong **)(param_2 + lVar8);
      if (plVar4 != plVar3) {
        *(longlong **)(param_2 + lVar8) = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      lVar1 = param_3 + lVar8;
      *(undefined4 *)(param_2 + 8 + lVar8) = *(undefined4 *)(lVar1 + 8);
      uVar5 = *(undefined4 *)(lVar1 + 0x14);
      uVar6 = *(undefined4 *)(lVar1 + 0x18);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar8);
      *puVar2 = *(undefined4 *)(lVar1 + 0x10);
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c2014a FUN_148c2014a body=59 status=ok
// SIG undefined FUN_148c2014a(void)

undefined8 FUN_148c2014a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c20190 FUN_148c20190 body=38 status=ok
// SIG undefined FUN_148c20190(void)

void FUN_148c20190(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148c2022c FUN_148c2022c body=54 status=ok
// SIG undefined FUN_148c2022c(void)

undefined1 FUN_148c2022c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c20326(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c2028a FUN_148c2028a body=59 status=ok
// SIG undefined FUN_148c2028a(void)

undefined8 FUN_148c2028a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c20326 FUN_148c20326 body=95 status=ok
// SIG undefined FUN_148c20326(void)

undefined8 * FUN_148c20326(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c04fa9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c20386(param_1,iVar1);
      FUN_148c203e8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c20386 FUN_148c20386 body=98 status=ok
// SIG undefined FUN_148c20386(void)

void FUN_148c20386(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c203e8 FUN_148c203e8 body=85 status=ok
// SIG undefined FUN_148c203e8(void)

void FUN_148c203e8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(param_2 + lVar7);
      *(longlong **)(param_1 + lVar7) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      lVar1 = param_1 + lVar7;
      lVar2 = param_2 + lVar7;
      *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(lVar2 + 8);
      uVar4 = *(undefined4 *)(lVar2 + 0x14);
      uVar5 = *(undefined4 *)(lVar2 + 0x18);
      uVar6 = *(undefined4 *)(lVar2 + 0x1c);
      *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
      *(undefined4 *)(lVar1 + 0x14) = uVar4;
      *(undefined4 *)(lVar1 + 0x18) = uVar5;
      *(undefined4 *)(lVar1 + 0x1c) = uVar6;
      lVar7 = lVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c2043e FUN_148c2043e body=50 status=ok
// SIG undefined FUN_148c2043e(void)

void FUN_148c2043e(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_145c04fa9(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148c204dc FUN_148c204dc body=117 status=ok
// SIG undefined FUN_148c204dc(void)

undefined8 FUN_148c204dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_140e7790a();
      FUN_140e7790a(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_140e7790a(param_2 + lVar1 + 0x38,param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c2057a FUN_148c2057a body=59 status=ok
// SIG undefined FUN_148c2057a(void)

undefined8 FUN_148c2057a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c20644 FUN_148c20644 body=67 status=ok
// SIG undefined FUN_148c20644(void)

undefined1 FUN_148c20644(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9d72c(param_2,param_3);
    FUN_148b9d72c(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148c206b0 FUN_148c206b0 body=59 status=ok
// SIG undefined FUN_148c206b0(void)

undefined8 FUN_148c206b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c207c6 FUN_148c207c6 body=59 status=ok
// SIG undefined FUN_148c207c6(void)

undefined8 FUN_148c207c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c20886 FUN_148c20886 body=63 status=ok
// SIG undefined FUN_148c20886(void)

undefined1 FUN_148c20886(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c209ec(param_2,param_3);
    param_3 = param_3 + 0xde0;
    param_2 = param_2 + 0xde0;
  }
  return 1;
}



// FUNCTION 148c208ee FUN_148c208ee body=59 status=ok
// SIG undefined FUN_148c208ee(void)

undefined8 FUN_148c208ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c2093a FUN_148c2093a body=38 status=ok
// SIG undefined FUN_148c2093a(void)

void FUN_148c2093a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xde0) == '\x01') {
    FUN_1415eb8d6(param_2);
    *(undefined1 *)(param_2 + 0xde0) = 0;
  }
  return;
}



// FUNCTION 148c209b2 FUN_148c209b2 body=57 status=ok
// SIG undefined FUN_148c209b2(void)

void FUN_148c209b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab460 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab460 = FUN_140002ddd(FUN_1465dc987,uVar1,L"OakGlobalsUI");
  }
  return;
}



// FUNCTION 148c209ec FUN_148c209ec body=1841 status=ok
// SIG undefined FUN_148c209ec(void)

longlong FUN_148c209ec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  FUN_1489f5246();
  FUN_144a787a6(param_1 + 0x110,param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  FUN_148c1f368(param_1 + 0x128,param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  uVar3 = *(undefined4 *)(param_2 + 0x144);
  uVar4 = *(undefined4 *)(param_2 + 0x148);
  uVar5 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  *(undefined4 *)(param_1 + 0x148) = uVar4;
  *(undefined4 *)(param_1 + 0x14c) = uVar5;
  puVar13 = (undefined8 *)(param_2 + 0x150);
  puVar14 = (undefined8 *)(param_1 + 0x150);
  for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  plVar1 = *(longlong **)(param_2 + 0x1a8);
  plVar2 = *(longlong **)(param_1 + 0x1a8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x1a8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  FUN_148c2111e(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_148c211e6(param_1 + 0x398,param_2 + 0x398);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  FUN_145bd473e(param_1 + 0x418,param_2 + 0x418);
  *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_2 + 0x508);
  *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(param_2 + 0x510);
  FUN_140e7790a(param_1 + 0x518,param_2 + 0x518);
  FUN_140e7790a(param_1 + 0x530,param_2 + 0x530);
  FUN_140e7790a(param_1 + 0x548,param_2 + 0x548);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_2 + 0x560);
  *(undefined1 *)(param_1 + 0x564) = *(undefined1 *)(param_2 + 0x564);
  *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_2 + 0x568);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x570);
  FUN_1447715ec(param_1 + 0x578,param_2 + 0x578);
  FUN_148c216ee(param_1 + 0x5a0,param_2 + 0x5a0);
  if ((*(longlong *)(param_1 + 0x5f0) != *(longlong *)(param_2 + 0x5f0)) ||
     (*(int *)(param_1 + 0x5f8) != *(int *)(param_2 + 0x5f8))) {
    *(longlong *)(param_1 + 0x5f0) = *(longlong *)(param_2 + 0x5f0);
    *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_2 + 0x5f8);
    *(undefined8 *)(param_1 + 0x600) = 0;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x608);
  uVar11 = *(undefined8 *)(param_2 + 0x610);
  uVar3 = *(undefined4 *)(param_2 + 0x618);
  uVar4 = *(undefined4 *)(param_2 + 0x61c);
  uVar5 = *(undefined4 *)(param_2 + 0x620);
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_2 + 0x614);
  *(undefined4 *)(param_1 + 0x618) = uVar3;
  *(undefined4 *)(param_1 + 0x61c) = uVar4;
  *(undefined4 *)(param_1 + 0x620) = uVar5;
  *(undefined8 *)(param_1 + 0x608) = uVar10;
  *(undefined8 *)(param_1 + 0x610) = uVar11;
  *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(param_2 + 0x628);
  uVar3 = *(undefined4 *)(param_2 + 0x634);
  uVar4 = *(undefined4 *)(param_2 + 0x638);
  uVar5 = *(undefined4 *)(param_2 + 0x63c);
  *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(param_2 + 0x630);
  *(undefined4 *)(param_1 + 0x634) = uVar3;
  *(undefined4 *)(param_1 + 0x638) = uVar4;
  *(undefined4 *)(param_1 + 0x63c) = uVar5;
  FUN_144a787a6(param_1 + 0x640,param_2 + 0x640);
  *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)(param_2 + 0x650);
  uVar3 = *(undefined4 *)(param_2 + 0x65c);
  uVar4 = *(undefined4 *)(param_2 + 0x660);
  uVar5 = *(undefined4 *)(param_2 + 0x664);
  *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x658);
  *(undefined4 *)(param_1 + 0x65c) = uVar3;
  *(undefined4 *)(param_1 + 0x660) = uVar4;
  *(undefined4 *)(param_1 + 0x664) = uVar5;
  FUN_144a787a6(param_1 + 0x668,param_2 + 0x668);
  *(undefined8 *)(param_1 + 0x6a8) = *(undefined8 *)(param_2 + 0x6a8);
  uVar10 = *(undefined8 *)(param_2 + 0x678);
  uVar11 = *(undefined8 *)(param_2 + 0x680);
  uVar3 = *(undefined4 *)(param_2 + 0x688);
  uVar4 = *(undefined4 *)(param_2 + 0x68c);
  uVar5 = *(undefined4 *)(param_2 + 0x690);
  uVar6 = *(undefined4 *)(param_2 + 0x694);
  uVar7 = *(undefined4 *)(param_2 + 0x69c);
  uVar8 = *(undefined4 *)(param_2 + 0x6a0);
  uVar9 = *(undefined4 *)(param_2 + 0x6a4);
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_2 + 0x698);
  *(undefined4 *)(param_1 + 0x69c) = uVar7;
  *(undefined4 *)(param_1 + 0x6a0) = uVar8;
  *(undefined4 *)(param_1 + 0x6a4) = uVar9;
  *(undefined4 *)(param_1 + 0x688) = uVar3;
  *(undefined4 *)(param_1 + 0x68c) = uVar4;
  *(undefined4 *)(param_1 + 0x690) = uVar5;
  *(undefined4 *)(param_1 + 0x694) = uVar6;
  *(undefined8 *)(param_1 + 0x678) = uVar10;
  *(undefined8 *)(param_1 + 0x680) = uVar11;
  if ((*(longlong *)(param_1 + 0x6b0) != *(longlong *)(param_2 + 0x6b0)) ||
     (*(int *)(param_1 + 0x6b8) != *(int *)(param_2 + 0x6b8))) {
    *(longlong *)(param_1 + 0x6b0) = *(longlong *)(param_2 + 0x6b0);
    *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
    *(undefined8 *)(param_1 + 0x6c0) = 0;
  }
  *(undefined8 *)(param_1 + 0x6c8) = *(undefined8 *)(param_2 + 0x6c8);
  uVar3 = *(undefined4 *)(param_2 + 0x6d4);
  uVar4 = *(undefined4 *)(param_2 + 0x6d8);
  uVar5 = *(undefined4 *)(param_2 + 0x6dc);
  *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_2 + 0x6d0);
  *(undefined4 *)(param_1 + 0x6d4) = uVar3;
  *(undefined4 *)(param_1 + 0x6d8) = uVar4;
  *(undefined4 *)(param_1 + 0x6dc) = uVar5;
  FUN_144a787a6(param_1 + 0x6e0,param_2 + 0x6e0);
  *(undefined8 *)(param_1 + 0x6f0) = *(undefined8 *)(param_2 + 0x6f0);
  uVar3 = *(undefined4 *)(param_2 + 0x6fc);
  uVar4 = *(undefined4 *)(param_2 + 0x700);
  uVar5 = *(undefined4 *)(param_2 + 0x704);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
  *(undefined4 *)(param_1 + 0x6fc) = uVar3;
  *(undefined4 *)(param_1 + 0x700) = uVar4;
  *(undefined4 *)(param_1 + 0x704) = uVar5;
  FUN_144a787a6(param_1 + 0x708,param_2 + 0x708);
  *(undefined8 *)(param_1 + 0x718) = *(undefined8 *)(param_2 + 0x718);
  FUN_148c21864(param_1 + 0x720,param_2 + 0x720);
  FUN_1410d4484(param_1 + 0x770,param_2 + 0x770);
  FUN_148c21d0e(param_1 + 0x780,param_2 + 0x780);
  FUN_148c1fa7c(param_1 + 2000,param_2 + 2000);
  FUN_14058acb2(param_1 + 0x820,param_2 + 0x820);
  FUN_148c1fa7c(param_1 + 0x870,param_2 + 0x870);
  FUN_148c21f24(param_1 + 0x8c0,param_2 + 0x8c0);
  FUN_148c21254(param_1 + 0x910,param_2 + 0x910);
  FUN_148c21254(param_1 + 0x920,param_2 + 0x920);
  FUN_148c21254(param_1 + 0x930,param_2 + 0x930);
  FUN_148c21254(param_1 + 0x940,param_2 + 0x940);
  FUN_148c1ff32(param_1 + 0x950,param_2 + 0x950);
  FUN_148c20326(param_1 + 0x9b0,param_2 + 0x9b0);
  *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)(param_2 + 0x9c0);
  uVar3 = *(undefined4 *)(param_2 + 0x9cc);
  uVar4 = *(undefined4 *)(param_2 + 0x9d0);
  uVar5 = *(undefined4 *)(param_2 + 0x9d4);
  *(undefined4 *)(param_1 + 0x9c8) = *(undefined4 *)(param_2 + 0x9c8);
  *(undefined4 *)(param_1 + 0x9cc) = uVar3;
  *(undefined4 *)(param_1 + 0x9d0) = uVar4;
  *(undefined4 *)(param_1 + 0x9d4) = uVar5;
  FUN_144a787a6(param_1 + 0x9d8,param_2 + 0x9d8);
  *(undefined4 *)(param_1 + 0x9e8) = *(undefined4 *)(param_2 + 0x9e8);
  *(undefined8 *)(param_1 + 0x9f0) = *(undefined8 *)(param_2 + 0x9f0);
  uVar3 = *(undefined4 *)(param_2 + 0x9fc);
  uVar4 = *(undefined4 *)(param_2 + 0xa00);
  uVar5 = *(undefined4 *)(param_2 + 0xa04);
  *(undefined4 *)(param_1 + 0x9f8) = *(undefined4 *)(param_2 + 0x9f8);
  *(undefined4 *)(param_1 + 0x9fc) = uVar3;
  *(undefined4 *)(param_1 + 0xa00) = uVar4;
  *(undefined4 *)(param_1 + 0xa04) = uVar5;
  FUN_144a787a6(param_1 + 0xa08,param_2 + 0xa08);
  *(undefined8 *)(param_1 + 0xa18) = *(undefined8 *)(param_2 + 0xa18);
  FUN_140bb2e20(param_1 + 0xa20,param_2 + 0xa20);
  plVar1 = *(longlong **)(param_2 + 0xa70);
  plVar2 = *(longlong **)(param_1 + 0xa70);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xa70) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xa78) = *(undefined4 *)(param_2 + 0xa78);
  plVar1 = *(longlong **)(param_2 + 0xa80);
  plVar2 = *(longlong **)(param_1 + 0xa80);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xa80) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xa88) = *(undefined4 *)(param_2 + 0xa88);
  plVar1 = *(longlong **)(param_2 + 0xa90);
  plVar2 = *(longlong **)(param_1 + 0xa90);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xa90) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)(param_2 + 0xa98);
  plVar1 = *(longlong **)(param_2 + 0xaa0);
  plVar2 = *(longlong **)(param_1 + 0xaa0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xaa0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xaa8) = *(undefined4 *)(param_2 + 0xaa8);
  uVar3 = *(undefined4 *)(param_2 + 0xab4);
  uVar4 = *(undefined4 *)(param_2 + 0xab8);
  uVar5 = *(undefined4 *)(param_2 + 0xabc);
  *(undefined4 *)(param_1 + 0xab0) = *(undefined4 *)(param_2 + 0xab0);
  *(undefined4 *)(param_1 + 0xab4) = uVar3;
  *(undefined4 *)(param_1 + 0xab8) = uVar4;
  *(undefined4 *)(param_1 + 0xabc) = uVar5;
  FUN_148c221dc(param_1 + 0xac0,param_2 + 0xac0);
  *(undefined8 *)(param_1 + 0xb10) = *(undefined8 *)(param_2 + 0xb10);
  uVar3 = *(undefined4 *)(param_2 + 0xb1c);
  uVar4 = *(undefined4 *)(param_2 + 0xb20);
  uVar5 = *(undefined4 *)(param_2 + 0xb24);
  *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_2 + 0xb18);
  *(undefined4 *)(param_1 + 0xb1c) = uVar3;
  *(undefined4 *)(param_1 + 0xb20) = uVar4;
  *(undefined4 *)(param_1 + 0xb24) = uVar5;
  FUN_144a787a6(param_1 + 0xb28,param_2 + 0xb28);
  FUN_1406fa324(param_1 + 0xb38,param_2 + 0xb38);
  FUN_144047d6c(param_1 + 0xb48,param_2 + 0xb48);
  FUN_144047d6c(param_1 + 0xb98,param_2 + 0xb98);
  FUN_148b9d72c(param_1 + 0xbe8,param_2 + 0xbe8);
  FUN_148b9d72c(param_1 + 0xc00,param_2 + 0xc00);
  FUN_144047f92(param_1 + 0xc18,param_2 + 0xc18);
  FUN_144047f92(param_1 + 0xc68,param_2 + 0xc68);
  FUN_148c21d0e(param_1 + 0xcb8,param_2 + 0xcb8);
  uVar10 = *(undefined8 *)(param_2 + 0xd10);
  *(undefined8 *)(param_1 + 0xd08) = *(undefined8 *)(param_2 + 0xd08);
  *(undefined8 *)(param_1 + 0xd10) = uVar10;
  *(undefined8 *)(param_1 + 0xd18) = *(undefined8 *)(param_2 + 0xd18);
  uVar3 = *(undefined4 *)(param_2 + 0xd24);
  uVar4 = *(undefined4 *)(param_2 + 0xd28);
  uVar5 = *(undefined4 *)(param_2 + 0xd2c);
  *(undefined4 *)(param_1 + 0xd20) = *(undefined4 *)(param_2 + 0xd20);
  *(undefined4 *)(param_1 + 0xd24) = uVar3;
  *(undefined4 *)(param_1 + 0xd28) = uVar4;
  *(undefined4 *)(param_1 + 0xd2c) = uVar5;
  FUN_144a787a6(param_1 + 0xd30,param_2 + 0xd30);
  FUN_148c2238a(param_1 + 0xd40,param_2 + 0xd40);
  FUN_148c22546(param_1 + 0xd90,param_2 + 0xd90);
  return param_1;
}



// FUNCTION 148c2111e FUN_148c2111e body=199 status=ok
// SIG undefined FUN_148c2111e(void)

longlong FUN_148c2111e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_148c213ce();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_14874af6e(param_1 + 0x18,param_2 + 0x18);
  FUN_14874af6e(param_1 + 0x30,param_2 + 0x30);
  FUN_148c212b2(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  uVar3 = *(undefined4 *)(param_2 + 0x16c);
  uVar4 = *(undefined4 *)(param_2 + 0x170);
  uVar5 = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = uVar3;
  *(undefined4 *)(param_1 + 0x170) = uVar4;
  *(undefined4 *)(param_1 + 0x174) = uVar5;
  FUN_144a787a6(param_1 + 0x178,param_2 + 0x178);
  FUN_148c214f6(param_1 + 0x188,param_2 + 0x188);
  lVar1 = *(longlong *)(param_2 + 0x1d8);
  lVar2 = *(longlong *)(param_1 + 0x1d8);
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      return param_1;
    }
    FUN_140113f3a();
  }
  else {
    if (lVar2 == lVar1) {
      return param_1;
    }
    if (lVar2 != 0) {
      FUN_140113f3a();
    }
    FUN_1401924dc(lVar1);
  }
  *(longlong *)(param_1 + 0x1d8) = lVar1;
  return param_1;
}



// FUNCTION 148c211e6 FUN_148c211e6 body=110 status=ok
// SIG undefined FUN_148c211e6(void)

undefined8 * FUN_148c211e6(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 148c21254 FUN_148c21254 body=93 status=ok
// SIG undefined FUN_148c21254(void)

undefined8 * FUN_148c21254(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459cb2f2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c220e2(param_1,iVar1);
      FUN_148c22155(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c212b2 FUN_148c212b2 body=284 status=ok
// SIG undefined FUN_148c212b2(void)

undefined8 * FUN_148c212b2(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 148c213ce FUN_148c213ce body=93 status=ok
// SIG undefined FUN_148c213ce(void)

undefined8 * FUN_148c213ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1414938c5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c2142c(param_1,iVar1);
      FUN_148c2148e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c2142c FUN_148c2142c body=98 status=ok
// SIG undefined FUN_148c2142c(void)

void FUN_148c2142c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c2148e FUN_148c2148e body=104 status=ok
// SIG undefined FUN_148c2148e(void)

void FUN_148c2148e(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + lVar2);
      *(longlong **)(param_1 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      plVar1 = *(longlong **)(param_2 + 0x10 + lVar2);
      *(longlong **)(param_1 + 0x10 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x18 + lVar2) = *(undefined4 *)(param_2 + 0x18 + lVar2);
      lVar2 = lVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c214f6 FUN_148c214f6 body=122 status=ok
// SIG undefined FUN_148c214f6(void)

longlong FUN_148c214f6(longlong param_1,longlong param_2)

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
    FUN_148c21570(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c21570 FUN_148c21570 body=210 status=ok
// SIG undefined FUN_148c21570(void)

undefined8 * FUN_148c21570(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145ab958e(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406cd6a8(param_1);
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
          FUN_148c21642(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(puVar4 + 0xe);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x10;
        puVar6 = puVar6 + 0x10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c21642 FUN_148c21642 body=172 status=ok
// SIG undefined FUN_148c21642(void)

undefined8 * FUN_148c21642(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
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
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c216ee FUN_148c216ee body=122 status=ok
// SIG undefined FUN_148c216ee(void)

longlong FUN_148c216ee(longlong param_1,longlong param_2)

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
    FUN_148c21768(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c21768 FUN_148c21768 body=252 status=ok
// SIG undefined FUN_148c21768(void)

longlong * FUN_148c21768(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c0a138(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
        if ((uVar2 >> ((uint)uVar6 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar3 + 8 + lVar7);
          FUN_1415c5ebe(lVar4 + 0x10 + lVar7,lVar3 + 0x10 + lVar7);
          *(undefined8 *)(lVar4 + 0x28 + lVar7) = *(undefined8 *)(lVar3 + 0x28 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x30;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148c21864 FUN_148c21864 body=122 status=ok
// SIG undefined FUN_148c21864(void)

longlong FUN_148c21864(longlong param_1,longlong param_2)

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
    FUN_148c218de(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c218de FUN_148c218de body=425 status=ok
// SIG undefined FUN_148c218de(void)

longlong * FUN_148c218de(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_1415ad620(param_1,(ulonglong)uVar3);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar3) {
      FUN_148c21a88(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar3) {
      lVar5 = *param_1;
      lVar4 = *param_2;
      lVar9 = 0;
      uVar10 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (ulonglong)(uVar10 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0
           ) {
          *(undefined4 *)(lVar5 + lVar9) = *(undefined4 *)(lVar4 + lVar9);
          *(undefined4 *)(lVar5 + 4 + lVar9) = *(undefined4 *)(lVar4 + 4 + lVar9);
        }
        else {
          puVar8 = (undefined8 *)(lVar5 + lVar9);
          puVar1 = (undefined8 *)(lVar4 + lVar9);
          puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar9);
          *(undefined2 *)(puVar2 + -2) = 0;
          *(undefined8 *)((longlong)puVar2 + -0xc) = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 2) = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar1 + 1);
          *puVar8 = *puVar1;
          FUN_1447715ec(puVar2,lVar4 + lVar9 + 0x10);
          lVar7 = lVar9 + 0x38 + lVar5;
          FUN_148c21b20();
          FUN_148c21b20(puVar8 + 0x26,puVar1 + 0x26);
          *(undefined1 *)(lVar7 + 0x1f0) = *(undefined1 *)(lVar4 + lVar9 + 0x228);
          *(undefined8 *)(lVar7 + 0x1f8) = *(undefined8 *)(lVar4 + lVar9 + 0x230);
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x238;
      } while ((ulonglong)uVar3 * 0x238 - lVar9 != 0);
    }
  }
  return param_1;
}



// FUNCTION 148c21a88 FUN_148c21a88 body=150 status=ok
// SIG undefined FUN_148c21a88(void)

void FUN_148c21a88(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x238,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x238)) {
      uVar5 = uVar4 / 0x238 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x238,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148c21b20 FUN_148c21b20 body=493 status=ok
// SIG undefined FUN_148c21b20(void)

undefined8 * FUN_148c21b20(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_148be8b0e();
  *param_1 = &PTR_FUN_14b6bfaf0;
  plVar2 = *(longlong **)(param_2 + 0x38);
  param_1[7] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  pvVar3 = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  uVar5 = *(undefined4 *)(param_2 + 0x80);
  uVar6 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar6;
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x90);
  pvVar3 = *(void **)(param_2 + 0x88);
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  FUN_14593ec7a(param_1 + 0x14,param_2 + 0xa0);
  param_1[0x17] = 0;
  iVar1 = *(int *)(param_2 + 0xc0);
  pvVar3 = *(void **)(param_2 + 0xb8);
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x17,iVar1,0);
    memcpy((void *)param_1[0x17],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0x19] = 0;
  iVar1 = *(int *)(param_2 + 0xd0);
  pvVar3 = *(void **)(param_2 + 200);
  *(int *)(param_1 + 0x1a) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x19,iVar1,0);
    memcpy((void *)param_1[0x19],pvVar3,(longlong)iVar1 * 2);
  }
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  uVar8 = *(undefined8 *)(param_2 + 0xe0);
  uVar9 = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xec) = uVar9;
  param_1[0x1b] = uVar7;
  param_1[0x1c] = uVar8;
  return param_1;
}



// FUNCTION 148c21d0e FUN_148c21d0e body=122 status=ok
// SIG undefined FUN_148c21d0e(void)

longlong FUN_148c21d0e(longlong param_1,longlong param_2)

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
    FUN_148c21d88(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c21d88 FUN_148c21d88 body=339 status=ok
// SIG undefined FUN_148c21d88(void)

longlong * FUN_148c21d88(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_145ecffe6(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_1403e7a24(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0)
        {
          *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          puVar1 = (undefined2 *)(lVar4 + lVar6);
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          *(undefined8 *)(puVar1 + 8) = 0;
          *(undefined8 *)(puVar1 + 0xc) = 0;
          *(undefined4 *)(puVar1 + 0x10) = 0;
          *(undefined8 *)(puVar1 + 0x14) = 0;
          *(undefined8 *)(puVar1 + 0x18) = 0;
          *(undefined4 *)((undefined8 *)(lVar4 + lVar6) + 1) =
               *(undefined4 *)((undefined8 *)(lVar6 + lVar3) + 1);
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar6 + lVar3);
          FUN_1447715ec(puVar1 + 8,lVar6 + lVar3 + 0x10);
          FUN_148c21edc();
          *(undefined8 *)(lVar4 + lVar6 + 0x50) = *(undefined8 *)(lVar6 + lVar3 + 0x50);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x58;
      } while ((ulonglong)uVar2 * 0x58 - lVar6 != 0);
    }
  }
  return param_1;
}



// FUNCTION 148c21edc FUN_148c21edc body=71 status=ok
// SIG undefined FUN_148c21edc(void)

undefined8 * FUN_148c21edc(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c21f24 FUN_148c21f24 body=122 status=ok
// SIG undefined FUN_148c21f24(void)

longlong FUN_148c21f24(longlong param_1,longlong param_2)

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
    FUN_148c21f9e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c21f9e FUN_148c21f9e body=210 status=ok
// SIG undefined FUN_148c21f9e(void)

undefined8 * FUN_148c21f9e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145eeb3e6(param_1,(ulonglong)uVar1);
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
          FUN_148c22070(puVar6,puVar4);
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



// FUNCTION 148c22070 FUN_148c22070 body=114 status=ok
// SIG undefined FUN_148c22070(void)

undefined8 * FUN_148c22070(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c220e2 FUN_148c220e2 body=115 status=ok
// SIG undefined FUN_148c220e2(void)

void FUN_148c220e2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c22155 FUN_148c22155 body=134 status=ok
// SIG undefined FUN_148c22155(void)

void FUN_148c22155(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 148c221dc FUN_148c221dc body=122 status=ok
// SIG undefined FUN_148c221dc(void)

longlong FUN_148c221dc(longlong param_1,longlong param_2)

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
    FUN_148c22256(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c22256 FUN_148c22256 body=202 status=ok
// SIG undefined FUN_148c22256(void)

undefined8 * FUN_148c22256(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_141493ef2(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
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
          FUN_148c22320(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c22320 FUN_148c22320 body=105 status=ok
// SIG undefined FUN_148c22320(void)

undefined8 * FUN_148c22320(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 148c2238a FUN_148c2238a body=122 status=ok
// SIG undefined FUN_148c2238a(void)

longlong FUN_148c2238a(longlong param_1,longlong param_2)

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
    FUN_148c22404(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c22404 FUN_148c22404 body=250 status=ok
// SIG undefined FUN_148c22404(void)

longlong * FUN_148c22404(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c0a086(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_148c224fe(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c224fe FUN_148c224fe body=71 status=ok
// SIG undefined FUN_148c224fe(void)

undefined8 * FUN_148c224fe(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c22546 FUN_148c22546 body=122 status=ok
// SIG undefined FUN_148c22546(void)

longlong FUN_148c22546(longlong param_1,longlong param_2)

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
    FUN_148c225c0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c225c0 FUN_148c225c0 body=250 status=ok
// SIG undefined FUN_148c225c0(void)

longlong * FUN_148c225c0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c09fd4(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_1418ca9d0(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c226cc FUN_148c226cc body=664 status=ok
// SIG undefined FUN_148c226cc(void)

void FUN_148c226cc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_6a;
  undefined1 local_69;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_68 = local_68 & 0xffffff00;
  uStack_64 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf00000d0;
  local_48 = 0;
  local_40 = 0;
  uStack_3c = uStack_3c & 0xffffff00;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_69 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  local_6a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6a);
  }
  local_70 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = CONCAT44(uStack_64,local_68);
  local_b0 = uStack_60;
  local_a8 = local_58;
  local_a0 = local_50;
  local_98 = 0;
  local_90 = local_40;
  uStack_8c = uStack_3c;
  uStack_88 = (undefined4)uStack_38;
  uStack_84 = uStack_38._4_4_;
  local_80 = (undefined4)uStack_30;
  uStack_7c = uStack_30._4_4_;
  uStack_78 = (undefined4)uStack_28;
  uStack_74 = uStack_28._4_4_;
  local_c8 = local_70;
  FUN_148d484b0(local_20,&local_b8,local_69,local_6a);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c22978 FUN_148c22978 body=1015 status=ok
// SIG undefined FUN_148c22978(void)

void FUN_148c22978(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_80 = local_80 & 0xffffff00;
  uStack_7c = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf00000d0;
  local_60 = 0;
  local_58 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_88 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  iVar1 = local_88;
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d8 = CONCAT44(uStack_7c,local_80);
  local_d0 = uStack_78;
  local_c8 = local_70;
  local_c0 = local_68;
  local_b8 = 0;
  local_b0 = local_58;
  uStack_ac = uStack_54;
  uStack_a8 = (undefined4)uStack_50;
  uStack_a4 = uStack_50._4_4_;
  local_a0 = (undefined4)uStack_48;
  uStack_9c = uStack_48._4_4_;
  uStack_98 = (undefined4)uStack_40;
  uStack_94 = uStack_40._4_4_;
  local_e0 = local_90 != 0;
  local_f0 = iVar1 != 0;
  local_e8 = local_8c;
  local_f8 = local_84;
  FUN_144167dc0(local_28,local_30,local_38);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c22e06 FUN_148c22e06 body=62 status=ok
// SIG undefined FUN_148c22e06(void)

void FUN_148c22e06(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 148c22e4a FUN_148c22e4a body=41 status=ok
// SIG undefined FUN_148c22e4a(void)

void FUN_148c22e4a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x660))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148c22e8e FUN_148c22e8e body=158 status=ok
// SIG undefined FUN_148c22e8e(void)

void FUN_148c22e8e(undefined8 param_1,longlong param_2)

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
  FUN_148cd5d2c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c22f2e FUN_148c22f2e body=238 status=ok
// SIG undefined FUN_148c22f2e(void)

void FUN_148c22f2e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cd5d66(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c2301e FUN_148c2301e body=238 status=ok
// SIG undefined FUN_148c2301e(void)

void FUN_148c2301e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cd5d54(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c23120 FUN_148c23120 body=75 status=ok
// SIG undefined FUN_148c23120(void)

void FUN_148c23120(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_140975a5e(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c2316c FUN_148c2316c body=45 status=ok
// SIG undefined FUN_148c2316c(void)

longlong FUN_148c2316c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c2319a FUN_148c2319a body=48 status=ok
// SIG undefined FUN_148c2319a(void)

longlong FUN_148c2319a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c231ca FUN_148c231ca body=48 status=ok
// SIG undefined FUN_148c231ca(void)

longlong FUN_148c231ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c231fa FUN_148c231fa body=48 status=ok
// SIG undefined FUN_148c231fa(void)

longlong FUN_148c231fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c2322a FUN_148c2322a body=45 status=ok
// SIG undefined FUN_148c2322a(void)

longlong FUN_148c2322a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c23258 FUN_148c23258 body=48 status=ok
// SIG undefined FUN_148c23258(void)

longlong FUN_148c23258(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c23288 FUN_148c23288 body=48 status=ok
// SIG undefined FUN_148c23288(void)

longlong FUN_148c23288(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c232b8 FUN_148c232b8 body=48 status=ok
// SIG undefined FUN_148c232b8(void)

longlong FUN_148c232b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c232e8 FUN_148c232e8 body=48 status=ok
// SIG undefined FUN_148c232e8(void)

longlong FUN_148c232e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c23318 FUN_148c23318 body=48 status=ok
// SIG undefined FUN_148c23318(void)

longlong FUN_148c23318(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c23348 FUN_148c23348 body=48 status=ok
// SIG undefined FUN_148c23348(void)

longlong FUN_148c23348(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c23378 FUN_148c23378 body=48 status=ok
// SIG undefined FUN_148c23378(void)

longlong FUN_148c23378(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c233a8 FUN_148c233a8 body=48 status=ok
// SIG undefined FUN_148c233a8(void)

longlong FUN_148c233a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c233d8 FUN_148c233d8 body=48 status=ok
// SIG undefined FUN_148c233d8(void)

longlong FUN_148c233d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c23426 FUN_148c23426 body=63 status=ok
// SIG undefined FUN_148c23426(void)

undefined1 FUN_148c23426(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c2358a(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 148c2348e FUN_148c2348e body=59 status=ok
// SIG undefined FUN_148c2348e(void)

undefined8 FUN_148c2348e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c234da FUN_148c234da body=40 status=ok
// SIG undefined FUN_148c234da(void)

void FUN_148c234da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1459dc5ac(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148c23550 FUN_148c23550 body=57 status=ok
// SIG undefined FUN_148c23550(void)

void FUN_148c23550(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab480 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab480 = FUN_140002ddd(FUN_1465dd0a7,uVar1,L"OakGlobalsVehicles");
  }
  return;
}



// FUNCTION 148c2358a FUN_148c2358a body=249 status=ok
// SIG undefined FUN_148c2358a(void)

longlong FUN_148c2358a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_1460d920c(param_1 + 0x20,param_2 + 0x20);
  FUN_14597db2c(param_1 + 0x38,param_2 + 0x38);
  FUN_1460d920c(param_1 + 0x50,param_2 + 0x50);
  FUN_14597db2c(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_1447715ec(param_1 + 0x90,param_2 + 0x90);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  uVar2 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  uVar4 = *(undefined8 *)(param_2 + 0x100);
  uVar5 = *(undefined8 *)(param_2 + 0x108);
  uVar6 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  *(undefined8 *)(param_1 + 0x110) = uVar6;
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  return param_1;
}



// FUNCTION 148c23684 FUN_148c23684 body=32 status=ok
// SIG undefined FUN_148c23684(void)

void FUN_148c23684(undefined8 param_1,undefined8 *param_2)

{
  FUN_140cc2f8a(param_2);
  *param_2 = &PTR_FUN_14b973bb0;
  return;
}



// FUNCTION 148c236e2 FUN_148c236e2 body=59 status=ok
// SIG undefined FUN_148c236e2(void)

undefined8 FUN_148c236e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c2372e FUN_148c2372e body=38 status=ok
// SIG undefined FUN_148c2372e(void)

void FUN_148c2372e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x498) == '\x01') {
    thunk_FUN_140893974(param_2);
    *(undefined1 *)(param_2 + 0x498) = 0;
  }
  return;
}



// FUNCTION 148c237ec FUN_148c237ec body=59 status=ok
// SIG undefined FUN_148c237ec(void)

undefined8 FUN_148c237ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c238ac FUN_148c238ac body=54 status=ok
// SIG undefined FUN_148c238ac(void)

undefined1 FUN_148c238ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c23a6c(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148c2390a FUN_148c2390a body=59 status=ok
// SIG undefined FUN_148c2390a(void)

undefined8 FUN_148c2390a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c23950 FUN_148c23950 body=32 status=ok
// SIG undefined FUN_148c23950(void)

void FUN_148c23950(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148c23a02(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c239ba FUN_148c239ba body=72 status=ok
// SIG undefined FUN_148c239ba(void)

undefined8 * FUN_148c239ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b77f5a0;
  FUN_144a5dc74(param_1 + 1);
  FUN_144a5dc74(param_1 + 3);
  FUN_144a5dc74(param_1 + 5);
  FUN_144a5dc74(param_1 + 7);
  FUN_144a5dc74(param_1 + 9);
  return param_1;
}



// FUNCTION 148c23a02 FUN_148c23a02 body=106 status=ok
// SIG undefined FUN_148c23a02(void)

void FUN_148c23a02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b77f5a0;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c23a61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c23a6c FUN_148c23a6c body=264 status=ok
// SIG undefined FUN_148c23a6c(void)

longlong FUN_148c23a6c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
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
  plVar1 = *(longlong **)(param_2 + 0x48);
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x48) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 148c23bd8 FUN_148c23bd8 body=88 status=ok
// SIG undefined FUN_148c23bd8(void)

undefined1 FUN_148c23bd8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      FUN_14173baee(param_2 + -0x30,param_3 + -0x30);
      FUN_14173baee(param_2 + -0x18,param_3 + -0x18);
      FUN_14173baee(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c23c58 FUN_148c23c58 body=59 status=ok
// SIG undefined FUN_148c23c58(void)

undefined8 FUN_148c23c58(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c23cf8 FUN_148c23cf8 body=55 status=ok
// SIG undefined FUN_148c23cf8(void)

void FUN_148c23cf8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab578 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab578 = FUN_140002ddd(FUN_1465dd327,uVar1,L"OakHeavyWeaponNamingStrategy");
  }
  return;
}



// FUNCTION 148c23d4e FUN_148c23d4e body=63 status=ok
// SIG undefined FUN_148c23d4e(void)

undefined1 FUN_148c23d4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c23e62(param_2,param_3);
    param_3 = param_3 + 0x6a8;
    param_2 = param_2 + 0x6a8;
  }
  return 1;
}



// FUNCTION 148c23db6 FUN_148c23db6 body=59 status=ok
// SIG undefined FUN_148c23db6(void)

undefined8 FUN_148c23db6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c23e02 FUN_148c23e02 body=38 status=ok
// SIG undefined FUN_148c23e02(void)

void FUN_148c23e02(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x6a8) == '\x01') {
    FUN_140dcf26a(param_2);
    *(undefined1 *)(param_2 + 0x6a8) = 0;
  }
  return;
}



// FUNCTION 148c23e62 FUN_148c23e62 body=554 status=ok
// SIG undefined FUN_148c23e62(void)

longlong FUN_148c23e62(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  lVar7 = param_2 + 0x30;
  lVar8 = param_1 + 0x30;
  lVar9 = 6;
  do {
    *(undefined8 *)(lVar8 + -0x18) = *(undefined8 *)(lVar7 + -0x18);
    uVar1 = *(undefined4 *)(lVar7 + -0xc);
    uVar2 = *(undefined4 *)(lVar7 + -8);
    uVar3 = *(undefined4 *)(lVar7 + -4);
    *(undefined4 *)(lVar8 + -0x10) = *(undefined4 *)(lVar7 + -0x10);
    *(undefined4 *)(lVar8 + -0xc) = uVar1;
    *(undefined4 *)(lVar8 + -8) = uVar2;
    *(undefined4 *)(lVar8 + -4) = uVar3;
    FUN_144a787a6(lVar8,lVar7);
    lVar7 = lVar7 + 0x28;
    lVar8 = lVar8 + 0x28;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lVar7 = param_2 + 0x120;
  lVar8 = param_1 + 0x120;
  lVar9 = 4;
  do {
    *(undefined8 *)(lVar8 + -0x18) = *(undefined8 *)(lVar7 + -0x18);
    uVar1 = *(undefined4 *)(lVar7 + -0xc);
    uVar2 = *(undefined4 *)(lVar7 + -8);
    uVar3 = *(undefined4 *)(lVar7 + -4);
    *(undefined4 *)(lVar8 + -0x10) = *(undefined4 *)(lVar7 + -0x10);
    *(undefined4 *)(lVar8 + -0xc) = uVar1;
    *(undefined4 *)(lVar8 + -8) = uVar2;
    *(undefined4 *)(lVar8 + -4) = uVar3;
    FUN_144a787a6(lVar8,lVar7);
    lVar7 = lVar7 + 0x28;
    lVar8 = lVar8 + 0x28;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar4 = *(undefined8 *)(param_2 + 0x1a8);
  uVar5 = *(undefined8 *)(param_2 + 0x1b0);
  uVar6 = *(undefined8 *)(param_2 + 0x1b9);
  *(undefined8 *)(param_1 + 0x1b1) = *(undefined8 *)(param_2 + 0x1b1);
  *(undefined8 *)(param_1 + 0x1b9) = uVar6;
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined8 *)(param_1 + 0x1b0) = uVar5;
  lVar7 = param_2 + 0x1e0;
  lVar8 = param_1 + 0x1e0;
  lVar9 = 7;
  do {
    *(undefined8 *)(lVar8 + -0x18) = *(undefined8 *)(lVar7 + -0x18);
    uVar1 = *(undefined4 *)(lVar7 + -0xc);
    uVar2 = *(undefined4 *)(lVar7 + -8);
    uVar3 = *(undefined4 *)(lVar7 + -4);
    *(undefined4 *)(lVar8 + -0x10) = *(undefined4 *)(lVar7 + -0x10);
    *(undefined4 *)(lVar8 + -0xc) = uVar1;
    *(undefined4 *)(lVar8 + -8) = uVar2;
    *(undefined4 *)(lVar8 + -4) = uVar3;
    FUN_144a787a6(lVar8,lVar7);
    lVar7 = lVar7 + 0x28;
    lVar8 = lVar8 + 0x28;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lVar7 = param_2 + 0x2f8;
  lVar8 = param_1 + 0x2f8;
  lVar9 = 6;
  do {
    *(undefined8 *)(lVar8 + -0x18) = *(undefined8 *)(lVar7 + -0x18);
    uVar1 = *(undefined4 *)(lVar7 + -0xc);
    uVar2 = *(undefined4 *)(lVar7 + -8);
    uVar3 = *(undefined4 *)(lVar7 + -4);
    *(undefined4 *)(lVar8 + -0x10) = *(undefined4 *)(lVar7 + -0x10);
    *(undefined4 *)(lVar8 + -0xc) = uVar1;
    *(undefined4 *)(lVar8 + -8) = uVar2;
    *(undefined4 *)(lVar8 + -4) = uVar3;
    FUN_144a787a6(lVar8,lVar7);
    lVar7 = lVar7 + 0x28;
    lVar8 = lVar8 + 0x28;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FUN_148729378(param_1 + 0x3d0,param_2 + 0x3d0);
  lVar7 = param_2 + 0x438;
  lVar8 = param_1 + 0x438;
  lVar9 = 7;
  do {
    *(undefined8 *)(lVar8 + -0x18) = *(undefined8 *)(lVar7 + -0x18);
    uVar1 = *(undefined4 *)(lVar7 + -0xc);
    uVar2 = *(undefined4 *)(lVar7 + -8);
    uVar3 = *(undefined4 *)(lVar7 + -4);
    *(undefined4 *)(lVar8 + -0x10) = *(undefined4 *)(lVar7 + -0x10);
    *(undefined4 *)(lVar8 + -0xc) = uVar1;
    *(undefined4 *)(lVar8 + -8) = uVar2;
    *(undefined4 *)(lVar8 + -4) = uVar3;
    FUN_144a787a6(lVar8,lVar7);
    lVar7 = lVar7 + 0x28;
    lVar8 = lVar8 + 0x28;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lVar7 = param_2 + 0x550;
  lVar8 = param_1 + 0x550;
  lVar9 = 6;
  do {
    *(undefined8 *)(lVar8 + -0x18) = *(undefined8 *)(lVar7 + -0x18);
    uVar1 = *(undefined4 *)(lVar7 + -0xc);
    uVar2 = *(undefined4 *)(lVar7 + -8);
    uVar3 = *(undefined4 *)(lVar7 + -4);
    *(undefined4 *)(lVar8 + -0x10) = *(undefined4 *)(lVar7 + -0x10);
    *(undefined4 *)(lVar8 + -0xc) = uVar1;
    *(undefined4 *)(lVar8 + -8) = uVar2;
    *(undefined4 *)(lVar8 + -4) = uVar3;
    FUN_144a787a6(lVar8,lVar7);
    lVar7 = lVar7 + 0x28;
    lVar8 = lVar8 + 0x28;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(undefined1 *)(param_1 + 0x62a) = *(undefined1 *)(param_2 + 0x62a);
  *(undefined2 *)(param_1 + 0x628) = *(undefined2 *)(param_2 + 0x628);
  FUN_140e7790a(param_1 + 0x630,param_2 + 0x630);
  FUN_140e7790a(param_1 + 0x648,param_2 + 0x648);
  FUN_140e7790a(param_1 + 0x660,param_2 + 0x660);
  FUN_140e7790a(param_1 + 0x678,param_2 + 0x678);
  FUN_140e7790a(param_1 + 0x690,param_2 + 0x690);
  return param_1;
}



// FUNCTION 148c2408e FUN_148c2408e body=28 status=ok
// SIG undefined FUN_148c2408e(void)

undefined8 FUN_148c2408e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c240ea FUN_148c240ea body=62 status=ok
// SIG undefined FUN_148c240ea(void)

undefined1 FUN_148c240ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c24150 FUN_148c24150 body=59 status=ok
// SIG undefined FUN_148c24150(void)

undefined8 FUN_148c24150(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c24196 FUN_148c24196 body=37 status=ok
// SIG undefined FUN_148c24196(void)

void FUN_148c24196(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148c24284 FUN_148c24284 body=59 status=ok
// SIG undefined FUN_148c24284(void)

undefined8 FUN_148c24284(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c243b6 FUN_148c243b6 body=59 status=ok
// SIG undefined FUN_148c243b6(void)

undefined8 FUN_148c243b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c24402 FUN_148c24402 body=47 status=ok
// SIG undefined FUN_148c24402(void)

void FUN_148c24402(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    if (*(longlong *)(param_2 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148c244f6 FUN_148c244f6 body=59 status=ok
// SIG undefined FUN_148c244f6(void)

undefined8 FUN_148c244f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c24598 FUN_148c24598 body=37 status=ok
// SIG undefined FUN_148c24598(void)

void FUN_148c24598(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x250);
  FUN_144038e5e(param_2);
  return;
}



// FUNCTION 148c245e4 FUN_148c245e4 body=63 status=ok
// SIG undefined FUN_148c245e4(void)

undefined1 FUN_148c245e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c2470c(param_2,param_3);
    param_3 = param_3 + 0x250;
    param_2 = param_2 + 0x250;
  }
  return 1;
}



// FUNCTION 148c2464c FUN_148c2464c body=59 status=ok
// SIG undefined FUN_148c2464c(void)

undefined8 FUN_148c2464c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c24698 FUN_148c24698 body=38 status=ok
// SIG undefined FUN_148c24698(void)

void FUN_148c24698(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x250) == '\x01') {
    FUN_140e10b24(param_2);
    *(undefined1 *)(param_2 + 0x250) = 0;
  }
  return;
}



// FUNCTION 148c2470c FUN_148c2470c body=698 status=ok
// SIG undefined FUN_148c2470c(void)

undefined1 * FUN_148c2470c(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  
  *param_1 = *param_2;
  FUN_140b177d4(param_1 + 8,param_2 + 8);
  puVar9 = param_2 + 0x30;
  puVar10 = param_1 + 0x30;
  lVar11 = 6;
  do {
    puVar10[-8] = puVar9[-8];
    FUN_140b177d4(puVar10,puVar9);
    puVar9 = puVar9 + 0x28;
    puVar10 = puVar10 + 0x28;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if (param_2 != param_1) {
    FUN_148c24a82(param_1 + 0x118,param_2 + 0x118);
  }
  FUN_140311eb6(param_1 + 0x130,param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  lVar11 = *(longlong *)(param_2 + 0x148);
  if (DAT_14c950c29 == 1) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x148);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x148) = lVar11;
  lVar11 = *(longlong *)(param_2 + 0x150);
  if ((bVar8 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x150);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x150) = lVar11;
  lVar11 = *(longlong *)(param_2 + 0x158);
  if ((bVar8 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x158);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x158) = lVar11;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  lVar11 = *(longlong *)(param_2 + 0x168);
  if ((bVar8 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x168);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x168) = lVar11;
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  lVar11 = *(longlong *)(param_2 + 0x178);
  if ((bVar8 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x178);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x178) = lVar11;
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  lVar11 = *(longlong *)(param_2 + 0x188);
  if ((bVar8 & 1) != 0) {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x188);
    }
  }
  *(longlong *)(param_1 + 0x188) = lVar11;
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined2 *)(param_1 + 0x198) = *(undefined2 *)(param_2 + 0x198);
  FUN_148c249c6(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined2 *)(param_1 + 0x1b8) = *(undefined2 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  uVar3 = *(undefined8 *)(param_2 + 0x1c0);
  lVar11 = *(longlong *)(param_2 + 0x1c8);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar3;
  *(longlong *)(param_1 + 0x1c8) = lVar11;
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
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  uVar5 = *(undefined4 *)(param_2 + 0x1d4);
  uVar6 = *(undefined4 *)(param_2 + 0x1d8);
  uVar7 = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = uVar5;
  *(undefined4 *)(param_1 + 0x1d8) = uVar6;
  *(undefined4 *)(param_1 + 0x1dc) = uVar7;
  param_1[0x1e8] = param_2[0x1e8];
  FUN_148c24c86(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_148c24a24(param_1 + 0x230,param_2 + 0x230);
  uVar3 = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x248) = uVar3;
  return param_1;
}



// FUNCTION 148c249c6 FUN_148c249c6 body=93 status=ok
// SIG undefined FUN_148c249c6(void)

undefined8 * FUN_148c249c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c4e387(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c24bb4(param_1,iVar1);
      FUN_148c24c2a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c24a24 FUN_148c24a24 body=93 status=ok
// SIG undefined FUN_148c24a24(void)

undefined8 * FUN_148c24a24(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e10c43(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c24df4(param_1,iVar1);
      FUN_148c24e63(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c24a82 FUN_148c24a82 body=304 status=ok
// SIG undefined FUN_148c24a82(void)

void FUN_148c24a82(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c24bb4 FUN_148c24bb4 body=118 status=ok
// SIG undefined FUN_148c24bb4(void)

void FUN_148c24bb4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c24c2a FUN_148c24c2a body=92 status=ok
// SIG undefined FUN_148c24c2a(void)

void FUN_148c24c2a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      puVar2 = (undefined8 *)(param_2 + -0x48);
      puVar3 = (undefined8 *)(param_1 + -0x48);
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_1400709a4(param_1,param_2);
      param_1 = param_1 + 0x88;
      param_2 = param_2 + 0x88;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c24c86 FUN_148c24c86 body=105 status=ok
// SIG undefined FUN_148c24c86(void)

void * FUN_148c24c86(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x30);
    if (*(void **)((longlong)param_2 + 0x30) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x38);
    *(int *)((longlong)param_1 + 0x38) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 4;
    }
    else {
      FUN_148c24cf0(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x30);
        if (*(void **)((longlong)param_1 + 0x30) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c24cf0 FUN_148c24cf0 body=118 status=ok
// SIG undefined FUN_148c24cf0(void)

void FUN_148c24cf0(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148c24d66(param_1,0,iVar3,0xc);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x3c) = param_3;
  return;
}



// FUNCTION 148c24d66 FUN_148c24d66 body=141 status=ok
// SIG undefined FUN_148c24d66(void)

void FUN_148c24d66(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 148c24df4 FUN_148c24df4 body=111 status=ok
// SIG undefined FUN_148c24df4(void)

void FUN_148c24df4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c24e63 FUN_148c24e63 body=131 status=ok
// SIG undefined FUN_148c24e63(void)

void FUN_148c24e63(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + 8 + lVar2);
      puVar1[-1] = *(undefined8 *)(param_2 + lVar2);
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar1 + 0x2c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0;
      FUN_1458e30fe();
      lVar2 = lVar2 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c24f56 FUN_148c24f56 body=62 status=ok
// SIG undefined FUN_148c24f56(void)

undefined1 FUN_148c24f56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141332d0e(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c24fbc FUN_148c24fbc body=59 status=ok
// SIG undefined FUN_148c24fbc(void)

undefined8 FUN_148c24fbc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c25058 FUN_148c25058 body=73 status=ok
// SIG undefined FUN_148c25058(void)

undefined8 * FUN_148c25058(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7808a0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c250a2 FUN_148c250a2 body=58 status=ok
// SIG undefined FUN_148c250a2(void)

void FUN_148c250a2(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_1 = &PTR_FUN_14b7808a0;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_1 + 2) == '\x01') {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 148c25128 FUN_148c25128 body=106 status=ok
// SIG undefined FUN_148c25128(void)

void FUN_148c25128(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1400796d0(param_1[2],DAT_14cbab908,1);
  if (lVar1 != 0) {
    local_19 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c25194 FUN_148c25194 body=152 status=ok
// SIG undefined FUN_148c25194(void)

void FUN_148c25194(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c2525a FUN_148c2525a body=190 status=ok
// SIG undefined FUN_148c2525a(void)

void FUN_148c2525a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  local_30 = 0x3002;
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
  uVar1 = FUN_148d0ea92();
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c2531a FUN_148c2531a body=196 status=ok
// SIG undefined FUN_148c2531a(void)

void FUN_148c2531a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d0ea54(&local_38,local_19);
  if ((*param_3 != local_38) || ((int)param_3[1] != local_30)) {
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    param_3[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148c253f8 FUN_148c253f8 body=232 status=ok
// SIG undefined FUN_148c253f8(void)

void FUN_148c253f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1441025a0(local_20,local_21);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c25516 FUN_148c25516 body=230 status=ok
// SIG undefined FUN_148c25516(void)

void FUN_148c25516(undefined8 param_1,longlong param_2)

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
  FUN_148d625ce(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c255fe FUN_148c255fe body=230 status=ok
// SIG undefined FUN_148c255fe(void)

void FUN_148c255fe(undefined8 param_1,longlong param_2)

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
  FUN_148d633b0(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c256e6 FUN_148c256e6 body=766 status=ok
// SIG undefined FUN_148c256e6(void)

void FUN_148c256e6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined1 *local_1d0;
  undefined1 local_1c8 [40];
  undefined1 local_1a0 [40];
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  longlong lStack_160;
  ulonglong local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  longlong lStack_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined1 local_110 [216];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_118 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  local_140 = 0;
  local_138 = 0x3b9cbb9e;
  local_130 = 0;
  lStack_128 = 0;
  local_120 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_140);
  }
  local_148 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_148);
  }
  local_14c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14c);
  }
  local_178 = 0;
  local_170 = 0x3b9cbb9e;
  local_168 = 0;
  lStack_160 = 0;
  local_158 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c7bde4(local_1a0,&local_178);
  uVar2 = local_148;
  uVar1 = local_14c;
  FUN_143c7bde4(local_1c8,&local_140);
  local_1d8 = uVar1;
  local_1d0 = local_1a0;
  FUN_148d63578(local_110,local_118,local_1c8,uVar2);
  FUN_140a6a9d4(param_3,local_110);
  FUN_140368b56(local_110);
  FUN_140485972(lStack_160,local_158 & 0xffffffff);
  if (lStack_160 != 0) {
    FUN_1400020a8();
  }
  FUN_140485972(lStack_128,local_120 & 0xffffffff);
  if (lStack_128 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c259e6 FUN_148c259e6 body=404 status=ok
// SIG undefined FUN_148c259e6(void)

void FUN_148c259e6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
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
  FUN_144a63fc8();
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
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d62000(local_18,local_20,local_24,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c25b88 FUN_148c25b88 body=498 status=ok
// SIG undefined FUN_148c25b88(void)

void FUN_148c25b88(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  iVar1 = local_28;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30 != 0;
  FUN_148d62324(local_20,local_24,iVar1 != 0,local_2c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c25d7c FUN_148c25d7c body=288 status=ok
// SIG undefined FUN_148c25d7c(void)

void FUN_148c25d7c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
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
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_148d63132(local_18,&local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c25e9e FUN_148c25e9e body=328 status=ok
// SIG undefined FUN_148c25e9e(void)

void FUN_148c25e9e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
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
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148d62fea(local_20,local_28,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c25fe8 FUN_148c25fe8 body=156 status=ok
// SIG undefined FUN_148c25fe8(void)

void FUN_148c25fe8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_148d634d6(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c26086 FUN_148c26086 body=296 status=ok
// SIG undefined FUN_148c26086(void)

void FUN_148c26086(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
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
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
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
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  uVar1 = FUN_148d630aa(local_20,&local_50);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c261b0 FUN_148c261b0 body=793 status=ok
// SIG undefined FUN_148c261b0(void)

void FUN_148c261b0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 *local_90;
  undefined4 *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
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
  local_41 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_60 = 0xffffffffffffffff;
  uStack_58 = 0;
  lStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (undefined4)local_60;
  uStack_74 = local_60._4_4_;
  uStack_70 = (undefined4)uStack_58;
  uStack_6c = uStack_58._4_4_;
  local_68 = lStack_50;
  if ((lStack_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_90 = &local_41;
  if (puVar1 != (undefined1 *)0x0) {
    local_90 = puVar1;
  }
  local_88 = &local_78;
  local_98 = local_40;
  FUN_148d62864(local_20,local_28,local_30,local_31);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c264ca FUN_148c264ca body=488 status=ok
// SIG undefined FUN_148c264ca(void)

void FUN_148c264ca(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
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
  local_20 = 0;
  FUN_144a63fc8();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  FUN_148d62c52(local_18,local_20,local_28,local_29);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c266b4 FUN_148c266b4 body=400 status=ok
// SIG undefined FUN_148c266b4(void)

void FUN_148c266b4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20;
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
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d62624(local_18,local_20,local_21,local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c2684c FUN_148c2684c body=230 status=ok
// SIG undefined FUN_148c2684c(void)

void FUN_148c2684c(undefined8 param_1,longlong param_2)

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
  FUN_148d6213a(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c26934 FUN_148c26934 body=148 status=ok
// SIG undefined FUN_148c26934(void)

void FUN_148c26934(undefined8 param_1,longlong param_2)

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
  FUN_148d63366(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c269ca FUN_148c269ca body=148 status=ok
// SIG undefined FUN_148c269ca(void)

void FUN_148c269ca(undefined8 param_1,longlong param_2)

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
  FUN_148d633a6(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c26a66 FUN_148c26a66 body=232 status=ok
// SIG undefined FUN_148c26a66(void)

void FUN_148c26a66(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
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
  FUN_148d62428(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c26b50 FUN_148c26b50 body=230 status=ok
// SIG undefined FUN_148c26b50(void)

void FUN_148c26b50(undefined8 param_1,longlong param_2)

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
  FUN_148d63306(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c26c38 FUN_148c26c38 body=230 status=ok
// SIG undefined FUN_148c26c38(void)

void FUN_148c26c38(undefined8 param_1,longlong param_2)

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
  FUN_148d6335c(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c26d26 FUN_148c26d26 body=540 status=ok
// SIG undefined FUN_148c26d26(void)

void FUN_148c26d26(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  local_40 = 0xc000;
  local_38 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_60 = local_40;
  local_58 = 0;
  local_78 = local_50;
  FUN_148d62d0c(local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c26f44 FUN_148c26f44 body=148 status=ok
// SIG undefined FUN_148c26f44(void)

void FUN_148c26f44(undefined8 param_1,longlong param_2)

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
  FUN_148d6345e(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c26fdc FUN_148c26fdc body=45 status=ok
// SIG undefined FUN_148c26fdc(void)

longlong FUN_148c26fdc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c2700a FUN_148c2700a body=45 status=ok
// SIG undefined FUN_148c2700a(void)

longlong FUN_148c2700a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c27038 FUN_148c27038 body=45 status=ok
// SIG undefined FUN_148c27038(void)

longlong FUN_148c27038(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c27066 FUN_148c27066 body=45 status=ok
// SIG undefined FUN_148c27066(void)

longlong FUN_148c27066(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c00242(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c27094 FUN_148c27094 body=40 status=ok
// SIG undefined FUN_148c27094(void)

void FUN_148c27094(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140aed286();
  FUN_140aed22a(param_2,uVar1);
  *param_2 = &PTR_FUN_14b95e170;
  return;
}



// FUNCTION 148c270d6 FUN_148c270d6 body=63 status=ok
// SIG undefined FUN_148c270d6(void)

undefined1 FUN_148c270d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148c2713e FUN_148c2713e body=59 status=ok
// SIG undefined FUN_148c2713e(void)

undefined8 FUN_148c2713e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c2718a FUN_148c2718a body=38 status=ok
// SIG undefined FUN_148c2718a(void)

void FUN_148c2718a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148c27208 FUN_148c27208 body=48 status=ok
// SIG undefined FUN_148c27208(void)

void FUN_148c27208(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b5d0e90;
  return;
}



// FUNCTION 148c27238 FUN_148c27238 body=32 status=ok
// SIG undefined FUN_148c27238(void)

void FUN_148c27238(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b5d0e90;
  return;
}



// FUNCTION 148c272a4 FUN_148c272a4 body=59 status=ok
// SIG undefined FUN_148c272a4(void)

undefined8 FUN_148c272a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c272f0 FUN_148c272f0 body=38 status=ok
// SIG undefined FUN_148c272f0(void)

void FUN_148c272f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_140639928(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 148c27384 FUN_148c27384 body=63 status=ok
// SIG undefined FUN_148c27384(void)

undefined1 FUN_148c27384(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    param_3 = param_3 + 0x458;
    param_2 = param_2 + 0x458;
  }
  return 1;
}



// FUNCTION 148c273ec FUN_148c273ec body=59 status=ok
// SIG undefined FUN_148c273ec(void)

undefined8 FUN_148c273ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c27438 FUN_148c27438 body=38 status=ok
// SIG undefined FUN_148c27438(void)

void FUN_148c27438(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x458) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x458) = 0;
  }
  return;
}



// FUNCTION 148c27522 FUN_148c27522 body=54 status=ok
// SIG undefined FUN_148c27522(void)

undefined1 FUN_148c27522(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c27634(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c27580 FUN_148c27580 body=59 status=ok
// SIG undefined FUN_148c27580(void)

undefined8 FUN_148c27580(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c275c6 FUN_148c275c6 body=32 status=ok
// SIG undefined FUN_148c275c6(void)

void FUN_148c275c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1418caf58(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c27634 FUN_148c27634 body=135 status=ok
// SIG undefined FUN_148c27634(void)

longlong FUN_148c27634(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_140311eb6();
  if (param_2 == param_1) {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  else {
    FUN_148c276bc(param_1 + 0x10,param_2 + 0x10);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    if (*(char *)(param_2 + 0x50) == '\x01') {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    else if (*(char *)(param_1 + 0x50) == '\x01') {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  return param_1;
}



// FUNCTION 148c276bc FUN_148c276bc body=304 status=ok
// SIG undefined FUN_148c276bc(void)

void FUN_148c276bc(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c27918 FUN_148c27918 body=59 status=ok
// SIG undefined FUN_148c27918(void)

undefined8 FUN_148c27918(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c27a86 FUN_148c27a86 body=59 status=ok
// SIG undefined FUN_148c27a86(void)

undefined8 FUN_148c27a86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c27b86 FUN_148c27b86 body=59 status=ok
// SIG undefined FUN_148c27b86(void)

undefined8 FUN_148c27b86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c27cb4 FUN_148c27cb4 body=105 status=ok
// SIG undefined FUN_148c27cb4(void)

undefined1 FUN_148c27cb4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14875fa14(param_2,param_3);
    FUN_148c27e42(param_2 + 0x80,param_3 + 0x80);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 148c27d46 FUN_148c27d46 body=59 status=ok
// SIG undefined FUN_148c27d46(void)

undefined8 FUN_148c27d46(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c27d92 FUN_148c27d92 body=38 status=ok
// SIG undefined FUN_148c27d92(void)

void FUN_148c27d92(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_148c27e02(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148c27e02 FUN_148c27e02 body=64 status=ok
// SIG undefined FUN_148c27e02(void)

void FUN_148c27e02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b78a7f0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14110becc(param_1 + 0x10);
  return;
}



// FUNCTION 148c27e42 FUN_148c27e42 body=122 status=ok
// SIG undefined FUN_148c27e42(void)

longlong FUN_148c27e42(longlong param_1,longlong param_2)

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
    FUN_148c27ebc(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c27ebc FUN_148c27ebc body=249 status=ok
// SIG undefined FUN_148c27ebc(void)

longlong * FUN_148c27ebc(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14110bf04(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
        if ((uVar2 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          FUN_140f746b6(lVar6 + lVar4 + 8,lVar3 + 8 + lVar6);
          *(undefined8 *)(lVar4 + 0x20 + lVar6) = *(undefined8 *)(lVar3 + 0x20 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 148c2805a FUN_148c2805a body=60 status=ok
// SIG undefined FUN_148c2805a(void)

undefined1 FUN_148c2805a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e8aa92(param_2,param_3);
    *(undefined1 *)(param_2 + 0x68) = *(undefined1 *)(param_3 + 0x68);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 148c280be FUN_148c280be body=59 status=ok
// SIG undefined FUN_148c280be(void)

undefined8 FUN_148c280be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c28104 FUN_148c28104 body=32 status=ok
// SIG undefined FUN_148c28104(void)

void FUN_148c28104(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140485912(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c281b8 FUN_148c281b8 body=63 status=ok
// SIG undefined FUN_148c281b8(void)

undefined1 FUN_148c281b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c282e2(param_2,param_3);
    param_3 = param_3 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return 1;
}



// FUNCTION 148c28220 FUN_148c28220 body=59 status=ok
// SIG undefined FUN_148c28220(void)

undefined8 FUN_148c28220(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c2826c FUN_148c2826c body=39 status=ok
// SIG undefined FUN_148c2826c(void)

void FUN_148c2826c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_141003128(param_2 + 0x48);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 148c282e2 FUN_148c282e2 body=120 status=ok
// SIG undefined FUN_148c282e2(void)

undefined8 * FUN_148c282e2(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  if ((param_1[2] != param_2[2]) || (*(int *)(param_1 + 3) != *(int *)(param_2 + 3))) {
    param_1[2] = param_2[2];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    param_1[4] = 0;
  }
  if ((param_1[5] != param_2[5]) || (*(int *)(param_1 + 6) != *(int *)(param_2 + 6))) {
    param_1[5] = param_2[5];
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    param_1[7] = 0;
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  FUN_148766b4c(param_1 + 9,param_2 + 9);
  return param_1;
}



// FUNCTION 148c2837a FUN_148c2837a body=63 status=ok
// SIG undefined FUN_148c2837a(void)

undefined1 FUN_148c2837a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c2849c(param_2,param_3);
    param_3 = param_3 + 0x238;
    param_2 = param_2 + 0x238;
  }
  return 1;
}



// FUNCTION 148c283e2 FUN_148c283e2 body=59 status=ok
// SIG undefined FUN_148c283e2(void)

undefined8 FUN_148c283e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c2842e FUN_148c2842e body=40 status=ok
// SIG undefined FUN_148c2842e(void)

void FUN_148c2842e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    FUN_1457dfd28(param_2);
    *(undefined1 *)(param_2 + 0x238) = 0;
  }
  return;
}



// FUNCTION 148c2849c FUN_148c2849c body=171 status=ok
// SIG undefined FUN_148c2849c(void)

longlong FUN_148c2849c(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_148c28548(param_1 + 0x20,param_2 + 0x20);
  FUN_148766b4c(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  FUN_148c285a6(param_1 + 0x160,param_2 + 0x160);
  FUN_148c285a6(param_1 + 0x178,param_2 + 0x178);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  FUN_140d02432(param_1 + 0x198,param_2 + 0x198);
  FUN_140d02432(param_1 + 0x1e8,param_2 + 0x1e8);
  return param_1;
}



// FUNCTION 148c28548 FUN_148c28548 body=93 status=ok
// SIG undefined FUN_148c28548(void)

undefined8 * FUN_148c28548(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457dfd7a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c285fa(param_1,iVar1);
      FUN_148c2866f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c285a6 FUN_148c285a6 body=84 status=ok
// SIG undefined FUN_148c285a6(void)

longlong * FUN_148c285a6(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c285fa FUN_148c285fa body=117 status=ok
// SIG undefined FUN_148c285fa(void)

void FUN_148c285fa(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x170,8);
    iVar2 = (int)(uVar1 / 0x170);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x170,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c2866f FUN_148c2866f body=131 status=ok
// SIG undefined FUN_148c2866f(void)

void FUN_148c2866f(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      *(undefined4 *)(param_1 + -0x40) = *(undefined4 *)(param_2 + -0x40);
      *(undefined8 *)(param_1 + -0x48) = *(undefined8 *)(param_2 + -0x48);
      *(undefined8 *)(param_1 + -0x38) = *(undefined8 *)(param_2 + -0x38);
      *(undefined4 *)(param_1 + -0x30) = *(undefined4 *)(param_2 + -0x30);
      *(undefined8 *)(param_1 + -0x28) = 0;
      *(undefined8 *)(param_1 + -0x20) = *(undefined8 *)(param_2 + -0x20);
      *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_2 + -0x18);
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined1 *)(param_1 + -8) = *(undefined1 *)(param_2 + -8);
      FUN_14876797a(param_1,param_2);
      param_1 = param_1 + 0x170;
      param_2 = param_2 + 0x170;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c286f4 FUN_148c286f4 body=28 status=ok
// SIG undefined FUN_148c286f4(void)

undefined8 FUN_148c286f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c287b6 FUN_148c287b6 body=199 status=ok
// SIG undefined FUN_148c287b6(void)

void FUN_148c287b6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a63cba(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar2 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_141538ec6(param_1,puVar2);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c28884 FUN_148c28884 body=176 status=ok
// SIG undefined FUN_148c28884(void)

void FUN_148c28884(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1441dfe42(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c28942 FUN_148c28942 body=37 status=ok
// SIG undefined FUN_148c28942(void)

void FUN_148c28942(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148dad6ec();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148c28984 FUN_148c28984 body=37 status=ok
// SIG undefined FUN_148c28984(void)

void FUN_148c28984(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145960908();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148c289aa FUN_148c289aa body=117 status=ok
// SIG undefined FUN_148c289aa(void)

void FUN_148c289aa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148dae006(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c28a38 FUN_148c28a38 body=214 status=ok
// SIG undefined FUN_148c28a38(void)

void FUN_148c28a38(longlong param_1,longlong param_2,void **param_3)

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
  local_30 = *(int *)(param_1 + 0x468);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x460);
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



// FUNCTION 148c28b18 FUN_148c28b18 body=37 status=ok
// SIG undefined FUN_148c28b18(void)

void FUN_148c28b18(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148dade04();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148c28b4a FUN_148c28b4a body=88 status=ok
// SIG undefined FUN_148c28b4a(void)

void FUN_148c28b4a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148dad41c(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c28bb0 FUN_148c28bb0 body=39 status=ok
// SIG undefined FUN_148c28bb0(void)

void FUN_148c28bb0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148dad2ea();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148c28bf4 FUN_148c28bf4 body=214 status=ok
// SIG undefined FUN_148c28bf4(void)

void FUN_148c28bf4(longlong param_1,longlong param_2,void **param_3)

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
  local_30 = *(int *)(param_1 + 0x478);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x470);
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



// FUNCTION 148c28cfc FUN_148c28cfc body=260 status=ok
// SIG undefined FUN_148c28cfc(void)

void FUN_148c28cfc(longlong param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
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
  ppvVar1 = (void **)(param_1 + 0x4c8);
  if (ppvVar1 != &local_38) {
    iVar2 = (int)uStack_30;
    lVar3 = (longlong)(int)uStack_30;
    *(int *)(param_1 + 0x4d0) = (int)uStack_30;
    if ((int)uStack_30 == 0 && *(int *)(param_1 + 0x4d4) == 0) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_30 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c28e02 FUN_148c28e02 body=151 status=ok
// SIG undefined FUN_148c28e02(void)

void FUN_148c28e02(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145f88712(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c28e9a FUN_148c28e9a body=156 status=ok
// SIG undefined FUN_148c28e9a(void)

void FUN_148c28e9a(undefined8 param_1,longlong param_2)

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
  FUN_145f8854a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


