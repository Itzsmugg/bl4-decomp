// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f6ac32 FUN_147f6ac32 body=38 status=ok
// SIG undefined FUN_147f6ac32(void)

undefined8 FUN_147f6ac32(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6ac58 FUN_147f6ac58 body=55 status=ok
// SIG undefined FUN_147f6ac58(void)

void FUN_147f6ac58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24de0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24de0 = FUN_140002ddd(FUN_146444377,uVar1,L"GbxAudioNodeAspectState_Action");
  }
  return;
}



// FUNCTION 147f6ac90 FUN_147f6ac90 body=56 status=ok
// SIG undefined FUN_147f6ac90(void)

void FUN_147f6ac90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147f6acbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f6acca FUN_147f6acca body=150 status=ok
// SIG undefined FUN_147f6acca(void)

void FUN_147f6acca(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xd8);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14aca0940;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  *(undefined4 *)((longlong)param_2 + 0x6c) = 0x3ff00000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0x3ff0000000000000;
  param_2[0x13] = 0x3ff0000000000000;
  param_2[0x14] = 0x3ff0000000000000;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  return;
}



// FUNCTION 147f6ae38 FUN_147f6ae38 body=105 status=ok
// SIG undefined FUN_147f6ae38(void)

undefined8 FUN_147f6ae38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      memcpy((void *)(param_2 + 0x10),(void *)(param_3 + 0x10),0x99);
      param_3 = param_3 + 0xe0;
      param_2 = param_2 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6aeca FUN_147f6aeca body=59 status=ok
// SIG undefined FUN_147f6aeca(void)

undefined8 FUN_147f6aeca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6af16 FUN_147f6af16 body=38 status=ok
// SIG undefined FUN_147f6af16(void)

void FUN_147f6af16(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 147f6af8a FUN_147f6af8a body=38 status=ok
// SIG undefined FUN_147f6af8a(void)

undefined8 FUN_147f6af8a(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6afb0 FUN_147f6afb0 body=55 status=ok
// SIG undefined FUN_147f6afb0(void)

void FUN_147f6afb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e10 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e10 = FUN_140002ddd(FUN_14644443f,uVar1,L"GbxAudioNodeAspectSettings_SpawnEmitter");
  }
  return;
}



// FUNCTION 147f6b080 FUN_147f6b080 body=54 status=ok
// SIG undefined FUN_147f6b080(void)

undefined1 FUN_147f6b080(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6b21a(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147f6b0de FUN_147f6b0de body=59 status=ok
// SIG undefined FUN_147f6b0de(void)

undefined8 FUN_147f6b0de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6b124 FUN_147f6b124 body=51 status=ok
// SIG undefined FUN_147f6b124(void)

void FUN_147f6b124(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14aca0b30;
    FUN_144a61ac8(param_2 + 10);
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 147f6b1a6 FUN_147f6b1a6 body=60 status=ok
// SIG undefined FUN_147f6b1a6(void)

undefined8 * FUN_147f6b1a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aca0b30;
  FUN_144a61ac8(param_1 + 10);
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6b1e2 FUN_147f6b1e2 body=55 status=ok
// SIG undefined FUN_147f6b1e2(void)

void FUN_147f6b1e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e28 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e28 = FUN_140002ddd(FUN_1464444d5,uVar1,L"GbxAudioNodeAspectState_SpawnEmitter");
  }
  return;
}



// FUNCTION 147f6b21a FUN_147f6b21a body=87 status=ok
// SIG undefined FUN_147f6b21a(void)

longlong FUN_147f6b21a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_140d27362(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 147f6b312 FUN_147f6b312 body=86 status=ok
// SIG undefined FUN_147f6b312(void)

undefined8 FUN_147f6b312(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6b390 FUN_147f6b390 body=59 status=ok
// SIG undefined FUN_147f6b390(void)

undefined8 FUN_147f6b390(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6b3d6 FUN_147f6b3d6 body=32 status=ok
// SIG undefined FUN_147f6b3d6(void)

void FUN_147f6b3d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f6b444 FUN_147f6b444 body=38 status=ok
// SIG undefined FUN_147f6b444(void)

undefined8 FUN_147f6b444(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6b46a FUN_147f6b46a body=55 status=ok
// SIG undefined FUN_147f6b46a(void)

void FUN_147f6b46a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e40 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e40 = FUN_140002ddd(FUN_14644456b,uVar1,L"GbxAudioNodeAspectSettings_GetEmitter");
  }
  return;
}



// FUNCTION 147f6b53a FUN_147f6b53a body=54 status=ok
// SIG undefined FUN_147f6b53a(void)

undefined1 FUN_147f6b53a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6b6d4(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147f6b598 FUN_147f6b598 body=59 status=ok
// SIG undefined FUN_147f6b598(void)

undefined8 FUN_147f6b598(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6b5de FUN_147f6b5de body=51 status=ok
// SIG undefined FUN_147f6b5de(void)

void FUN_147f6b5de(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14aca0f10;
    FUN_144a61ac8(param_2 + 10);
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 147f6b660 FUN_147f6b660 body=60 status=ok
// SIG undefined FUN_147f6b660(void)

undefined8 * FUN_147f6b660(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aca0f10;
  FUN_144a61ac8(param_1 + 10);
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6b69c FUN_147f6b69c body=55 status=ok
// SIG undefined FUN_147f6b69c(void)

void FUN_147f6b69c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e58 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e58 = FUN_140002ddd(FUN_146444601,uVar1,L"GbxAudioNodeAspectState_GetEmitter");
  }
  return;
}



// FUNCTION 147f6b6d4 FUN_147f6b6d4 body=87 status=ok
// SIG undefined FUN_147f6b6d4(void)

longlong FUN_147f6b6d4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_140d27362(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 147f6b72c FUN_147f6b72c body=113 status=ok
// SIG undefined FUN_147f6b72c(void)

void FUN_147f6b72c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa0);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14aca1100;
  *(undefined1 *)(param_2 + 0xe) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 147f6b824 FUN_147f6b824 body=63 status=ok
// SIG undefined FUN_147f6b824(void)

undefined1 FUN_147f6b824(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6b94e(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 147f6b88c FUN_147f6b88c body=59 status=ok
// SIG undefined FUN_147f6b88c(void)

undefined8 FUN_147f6b88c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6b8d8 FUN_147f6b8d8 body=40 status=ok
// SIG undefined FUN_147f6b8d8(void)

void FUN_147f6b8d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_14597ef46(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 147f6b94e FUN_147f6b94e body=157 status=ok
// SIG undefined FUN_147f6b94e(void)

longlong FUN_147f6b94e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144a7bb84(param_1 + 0x48,param_2 + 0x48);
  FUN_144a82394(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_144a7bb84(param_1 + 0x80,param_2 + 0x80);
  FUN_144a82394(param_1 + 0x98,param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 147f6ba7c FUN_147f6ba7c body=54 status=ok
// SIG undefined FUN_147f6ba7c(void)

undefined1 FUN_147f6ba7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6bc4a(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147f6bada FUN_147f6bada body=59 status=ok
// SIG undefined FUN_147f6bada(void)

undefined8 FUN_147f6bada(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6bb20 FUN_147f6bb20 body=34 status=ok
// SIG undefined FUN_147f6bb20(void)

void FUN_147f6bb20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_147f6bbee(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147f6bb90 FUN_147f6bb90 body=38 status=ok
// SIG undefined FUN_147f6bb90(void)

undefined8 FUN_147f6bb90(undefined8 param_1,int param_2)

{
  FUN_147f6bbee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6bbb6 FUN_147f6bbb6 body=55 status=ok
// SIG undefined FUN_147f6bbb6(void)

void FUN_147f6bbb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e88 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e88 = FUN_140002ddd(FUN_1464446f6,uVar1,L"GbxAudioNodeAspectState_PostEvent");
  }
  return;
}



// FUNCTION 147f6bbee FUN_147f6bbee body=91 status=ok
// SIG undefined FUN_147f6bbee(void)

void FUN_147f6bbee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aca12f0;
  if ((param_1[0xb] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xb] + 0x50));
  }
  if ((param_1[10] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[10] + 0x50));
  }
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f6bc4a FUN_147f6bc4a body=100 status=ok
// SIG undefined FUN_147f6bc4a(void)

longlong FUN_147f6bc4a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a82394(param_1 + 0x50,param_2 + 0x50);
  FUN_144a82394(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 147f6bd7a FUN_147f6bd7a body=174 status=ok
// SIG undefined FUN_147f6bd7a(void)

undefined8 FUN_147f6bd7a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x40);
      FUN_144a7bb84(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      FUN_144a82394(param_2 + lVar10 + 0x60,param_3 + lVar10 + 0x60);
      *(undefined1 *)(param_2 + lVar10 + 0x68) = *(undefined1 *)(param_3 + lVar10 + 0x68);
      lVar10 = lVar10 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6be50 FUN_147f6be50 body=59 status=ok
// SIG undefined FUN_147f6be50(void)

undefined8 FUN_147f6be50(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6be96 FUN_147f6be96 body=34 status=ok
// SIG undefined FUN_147f6be96(void)

void FUN_147f6be96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_147f6bf64(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f6bf06 FUN_147f6bf06 body=38 status=ok
// SIG undefined FUN_147f6bf06(void)

undefined8 FUN_147f6bf06(undefined8 param_1,int param_2)

{
  FUN_147f6bf64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6bf2c FUN_147f6bf2c body=55 status=ok
// SIG undefined FUN_147f6bf2c(void)

void FUN_147f6bf2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24ea0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24ea0 = FUN_140002ddd(FUN_14644478d,uVar1,L"GbxAudioNodeAspectSettings_MidiNote");
  }
  return;
}



// FUNCTION 147f6bf64 FUN_147f6bf64 body=58 status=ok
// SIG undefined FUN_147f6bf64(void)

void FUN_147f6bf64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aca14e0;
  if ((param_1[0xc] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 147f6c038 FUN_147f6c038 body=54 status=ok
// SIG undefined FUN_147f6c038(void)

undefined1 FUN_147f6c038(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6c20c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f6c096 FUN_147f6c096 body=59 status=ok
// SIG undefined FUN_147f6c096(void)

undefined8 FUN_147f6c096(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6c0dc FUN_147f6c0dc body=34 status=ok
// SIG undefined FUN_147f6c0dc(void)

void FUN_147f6c0dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_147f6c1aa(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f6c14c FUN_147f6c14c body=38 status=ok
// SIG undefined FUN_147f6c14c(void)

undefined8 FUN_147f6c14c(undefined8 param_1,int param_2)

{
  FUN_147f6c1aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6c172 FUN_147f6c172 body=55 status=ok
// SIG undefined FUN_147f6c172(void)

void FUN_147f6c172(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24eb8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24eb8 = FUN_140002ddd(FUN_146444823,uVar1,L"GbxAudioNodeAspectState_MidiNote");
  }
  return;
}



// FUNCTION 147f6c1aa FUN_147f6c1aa body=98 status=ok
// SIG undefined FUN_147f6c1aa(void)

void FUN_147f6c1aa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aca16d0;
  plVar3 = (longlong *)param_1[0xd];
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
  if ((param_1[10] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[10] + 0x50));
  }
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f6c20c FUN_147f6c20c body=158 status=ok
// SIG undefined FUN_147f6c20c(void)

longlong FUN_147f6c20c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  uVar8 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  FUN_144a82394(param_1 + 0x50,param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  lVar4 = *(longlong *)(param_2 + 0x68);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(longlong *)(param_1 + 0x68) = lVar4;
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



// FUNCTION 147f6c35c FUN_147f6c35c body=91 status=ok
// SIG undefined FUN_147f6c35c(void)

undefined1 FUN_147f6c35c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      FUN_14123c256(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6c3e0 FUN_147f6c3e0 body=59 status=ok
// SIG undefined FUN_147f6c3e0(void)

undefined8 FUN_147f6c3e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6c426 FUN_147f6c426 body=32 status=ok
// SIG undefined FUN_147f6c426(void)

void FUN_147f6c426(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f6c494 FUN_147f6c494 body=38 status=ok
// SIG undefined FUN_147f6c494(void)

undefined8 FUN_147f6c494(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6c4ba FUN_147f6c4ba body=55 status=ok
// SIG undefined FUN_147f6c4ba(void)

void FUN_147f6c4ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24ed0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24ed0 = FUN_140002ddd(FUN_1464448b9,uVar1,L"GbxAudioNodeAspectSettings_Rtpc");
  }
  return;
}



// FUNCTION 147f6c57a FUN_147f6c57a body=94 status=ok
// SIG undefined FUN_147f6c57a(void)

undefined8 FUN_147f6c57a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f6c600 FUN_147f6c600 body=59 status=ok
// SIG undefined FUN_147f6c600(void)

undefined8 FUN_147f6c600(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6c646 FUN_147f6c646 body=32 status=ok
// SIG undefined FUN_147f6c646(void)

void FUN_147f6c646(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f6c6b4 FUN_147f6c6b4 body=38 status=ok
// SIG undefined FUN_147f6c6b4(void)

undefined8 FUN_147f6c6b4(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6c6da FUN_147f6c6da body=55 status=ok
// SIG undefined FUN_147f6c6da(void)

void FUN_147f6c6da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24ee8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24ee8 = FUN_140002ddd(FUN_14644494f,uVar1,L"GbxAudioNodeAspectState_Rtpc");
  }
  return;
}



// FUNCTION 147f6c7c2 FUN_147f6c7c2 body=91 status=ok
// SIG undefined FUN_147f6c7c2(void)

undefined1 FUN_147f6c7c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      FUN_141818ba6(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6c846 FUN_147f6c846 body=59 status=ok
// SIG undefined FUN_147f6c846(void)

undefined8 FUN_147f6c846(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6c88c FUN_147f6c88c body=32 status=ok
// SIG undefined FUN_147f6c88c(void)

void FUN_147f6c88c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f6c8fa FUN_147f6c8fa body=38 status=ok
// SIG undefined FUN_147f6c8fa(void)

undefined8 FUN_147f6c8fa(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6c920 FUN_147f6c920 body=55 status=ok
// SIG undefined FUN_147f6c920(void)

void FUN_147f6c920(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24f00 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24f00 = FUN_140002ddd(FUN_1464449e5,uVar1,L"GbxAudioNodeAspectSettings_SetSwitch");
  }
  return;
}



// FUNCTION 147f6c9e4 FUN_147f6c9e4 body=54 status=ok
// SIG undefined FUN_147f6c9e4(void)

undefined1 FUN_147f6c9e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6cb90(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147f6ca42 FUN_147f6ca42 body=59 status=ok
// SIG undefined FUN_147f6ca42(void)

undefined8 FUN_147f6ca42(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6ca88 FUN_147f6ca88 body=34 status=ok
// SIG undefined FUN_147f6ca88(void)

void FUN_147f6ca88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_147f6cb56(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147f6caf8 FUN_147f6caf8 body=38 status=ok
// SIG undefined FUN_147f6caf8(void)

undefined8 FUN_147f6caf8(undefined8 param_1,int param_2)

{
  FUN_147f6cb56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6cb1e FUN_147f6cb1e body=55 status=ok
// SIG undefined FUN_147f6cb1e(void)

void FUN_147f6cb1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24f18 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24f18 = FUN_140002ddd(FUN_146444a7b,uVar1,L"GbxAudioNodeAspectState_SetSwitch");
  }
  return;
}



// FUNCTION 147f6cb56 FUN_147f6cb56 body=58 status=ok
// SIG undefined FUN_147f6cb56(void)

void FUN_147f6cb56(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aca1e90;
  if ((param_1[10] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[10] + 0x50));
  }
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f6cb90 FUN_147f6cb90 body=87 status=ok
// SIG undefined FUN_147f6cb90(void)

longlong FUN_147f6cb90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a82394(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 147f6cc98 FUN_147f6cc98 body=91 status=ok
// SIG undefined FUN_147f6cc98(void)

undefined1 FUN_147f6cc98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      FUN_147f6ce2e(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6cd1c FUN_147f6cd1c body=59 status=ok
// SIG undefined FUN_147f6cd1c(void)

undefined8 FUN_147f6cd1c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6cd62 FUN_147f6cd62 body=32 status=ok
// SIG undefined FUN_147f6cd62(void)

void FUN_147f6cd62(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f6cdd0 FUN_147f6cdd0 body=38 status=ok
// SIG undefined FUN_147f6cdd0(void)

undefined8 FUN_147f6cdd0(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6cdf6 FUN_147f6cdf6 body=55 status=ok
// SIG undefined FUN_147f6cdf6(void)

void FUN_147f6cdf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24f30 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24f30 = FUN_140002ddd(FUN_146444b11,uVar1,L"GbxAudioNodeAspectSettings_SetState");
  }
  return;
}



// FUNCTION 147f6ce2e FUN_147f6ce2e body=84 status=ok
// SIG undefined FUN_147f6ce2e(void)

longlong * FUN_147f6ce2e(longlong *param_1,longlong *param_2)

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



// FUNCTION 147f6cf10 FUN_147f6cf10 body=54 status=ok
// SIG undefined FUN_147f6cf10(void)

undefined1 FUN_147f6cf10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6d0bc(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147f6cf6e FUN_147f6cf6e body=59 status=ok
// SIG undefined FUN_147f6cf6e(void)

undefined8 FUN_147f6cf6e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6cfb4 FUN_147f6cfb4 body=34 status=ok
// SIG undefined FUN_147f6cfb4(void)

void FUN_147f6cfb4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_147f6d082(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147f6d024 FUN_147f6d024 body=38 status=ok
// SIG undefined FUN_147f6d024(void)

undefined8 FUN_147f6d024(undefined8 param_1,int param_2)

{
  FUN_147f6d082();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6d04a FUN_147f6d04a body=55 status=ok
// SIG undefined FUN_147f6d04a(void)

void FUN_147f6d04a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24f48 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24f48 = FUN_140002ddd(FUN_146444ba7,uVar1,L"GbxAudioNodeAspectState_SetState");
  }
  return;
}



// FUNCTION 147f6d082 FUN_147f6d082 body=58 status=ok
// SIG undefined FUN_147f6d082(void)

void FUN_147f6d082(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aca2270;
  if ((param_1[10] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[10] + 0x50));
  }
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f6d0bc FUN_147f6d0bc body=87 status=ok
// SIG undefined FUN_147f6d0bc(void)

longlong FUN_147f6d0bc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a82394(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 147f6d1b6 FUN_147f6d1b6 body=78 status=ok
// SIG undefined FUN_147f6d1b6(void)

undefined1 FUN_147f6d1b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6d22c FUN_147f6d22c body=59 status=ok
// SIG undefined FUN_147f6d22c(void)

undefined8 FUN_147f6d22c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6d272 FUN_147f6d272 body=32 status=ok
// SIG undefined FUN_147f6d272(void)

void FUN_147f6d272(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f6d2e0 FUN_147f6d2e0 body=38 status=ok
// SIG undefined FUN_147f6d2e0(void)

undefined8 FUN_147f6d2e0(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6d306 FUN_147f6d306 body=55 status=ok
// SIG undefined FUN_147f6d306(void)

void FUN_147f6d306(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24f60 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24f60 = FUN_140002ddd(FUN_146444c3d,uVar1,L"GbxAudioNodeAspectSettings_Print");
  }
  return;
}



// FUNCTION 147f6d3c6 FUN_147f6d3c6 body=94 status=ok
// SIG undefined FUN_147f6d3c6(void)

undefined8 FUN_147f6d3c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f6d44c FUN_147f6d44c body=59 status=ok
// SIG undefined FUN_147f6d44c(void)

undefined8 FUN_147f6d44c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6d492 FUN_147f6d492 body=32 status=ok
// SIG undefined FUN_147f6d492(void)

void FUN_147f6d492(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f6d500 FUN_147f6d500 body=38 status=ok
// SIG undefined FUN_147f6d500(void)

undefined8 FUN_147f6d500(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6d526 FUN_147f6d526 body=55 status=ok
// SIG undefined FUN_147f6d526(void)

void FUN_147f6d526(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24f78 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24f78 = FUN_140002ddd(FUN_146444cd3,uVar1,L"GbxAudioNodeAspectState_Print");
  }
  return;
}



// FUNCTION 147f6d600 FUN_147f6d600 body=78 status=ok
// SIG undefined FUN_147f6d600(void)

undefined1 FUN_147f6d600(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6d676 FUN_147f6d676 body=59 status=ok
// SIG undefined FUN_147f6d676(void)

undefined8 FUN_147f6d676(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6d6bc FUN_147f6d6bc body=32 status=ok
// SIG undefined FUN_147f6d6bc(void)

void FUN_147f6d6bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f6d72a FUN_147f6d72a body=38 status=ok
// SIG undefined FUN_147f6d72a(void)

undefined8 FUN_147f6d72a(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6d750 FUN_147f6d750 body=55 status=ok
// SIG undefined FUN_147f6d750(void)

void FUN_147f6d750(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24f90 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24f90 = FUN_140002ddd(FUN_146444d69,uVar1,L"GbxAudioNodeAspectSettings_GraphStop");
  }
  return;
}



// FUNCTION 147f6d810 FUN_147f6d810 body=94 status=ok
// SIG undefined FUN_147f6d810(void)

undefined8 FUN_147f6d810(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f6d896 FUN_147f6d896 body=59 status=ok
// SIG undefined FUN_147f6d896(void)

undefined8 FUN_147f6d896(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6d8dc FUN_147f6d8dc body=32 status=ok
// SIG undefined FUN_147f6d8dc(void)

void FUN_147f6d8dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f6d94a FUN_147f6d94a body=38 status=ok
// SIG undefined FUN_147f6d94a(void)

undefined8 FUN_147f6d94a(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6d970 FUN_147f6d970 body=55 status=ok
// SIG undefined FUN_147f6d970(void)

void FUN_147f6d970(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24fa8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24fa8 = FUN_140002ddd(FUN_146444dff,uVar1,L"GbxAudioNodeAspectState_GraphStop");
  }
  return;
}



// FUNCTION 147f6da66 FUN_147f6da66 body=97 status=ok
// SIG undefined FUN_147f6da66(void)

undefined8 FUN_147f6da66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x38);
      uVar2 = *(undefined4 *)(param_3 + -0x34);
      uVar3 = *(undefined4 *)(param_3 + -0x30);
      uVar4 = *(undefined4 *)(param_3 + -0x2c);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x38) = uVar1;
      *(undefined4 *)(param_2 + -0x34) = uVar2;
      *(undefined4 *)(param_2 + -0x30) = uVar3;
      *(undefined4 *)(param_2 + -0x2c) = uVar4;
      FUN_1470d00c2(param_2 + -0x18,param_3 + -0x18);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6daf0 FUN_147f6daf0 body=59 status=ok
// SIG undefined FUN_147f6daf0(void)

undefined8 FUN_147f6daf0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6db36 FUN_147f6db36 body=56 status=ok
// SIG undefined FUN_147f6db36(void)

void FUN_147f6db36(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14aca2c20;
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 147f6dbbc FUN_147f6dbbc body=65 status=ok
// SIG undefined FUN_147f6dbbc(void)

undefined8 * FUN_147f6dbbc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aca2c20;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6dbfe FUN_147f6dbfe body=55 status=ok
// SIG undefined FUN_147f6dbfe(void)

void FUN_147f6dbfe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24fc0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24fc0 = FUN_140002ddd(FUN_146444e95,uVar1,L"GbxAudioNodeAspectSettings_Expression");
  }
  return;
}



// FUNCTION 147f6dc36 FUN_147f6dc36 body=155 status=ok
// SIG undefined FUN_147f6dc36(void)

void FUN_147f6dc36(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,200);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *param_2 = &PTR_FUN_14aca2e10;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined2 *)(param_2 + 0x1c) = 0xffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 147f6dd80 FUN_147f6dd80 body=63 status=ok
// SIG undefined FUN_147f6dd80(void)

undefined1 FUN_147f6dd80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6df42(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 147f6dde8 FUN_147f6dde8 body=59 status=ok
// SIG undefined FUN_147f6dde8(void)

undefined8 FUN_147f6dde8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6de34 FUN_147f6de34 body=40 status=ok
// SIG undefined FUN_147f6de34(void)

void FUN_147f6de34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_147f6df08(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 147f6deaa FUN_147f6deaa body=38 status=ok
// SIG undefined FUN_147f6deaa(void)

undefined8 FUN_147f6deaa(undefined8 param_1,int param_2)

{
  FUN_147f6df08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6ded0 FUN_147f6ded0 body=55 status=ok
// SIG undefined FUN_147f6ded0(void)

void FUN_147f6ded0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24fd8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24fd8 = FUN_140002ddd(FUN_146444f2b,uVar1,L"GbxAudioNodeAspectState_Expression");
  }
  return;
}



// FUNCTION 147f6df08 FUN_147f6df08 body=57 status=ok
// SIG undefined FUN_147f6df08(void)

void FUN_147f6df08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aca2e10;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_141818bfa(param_1 + 10);
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f6df42 FUN_147f6df42 body=111 status=ok
// SIG undefined FUN_147f6df42(void)

longlong FUN_147f6df42(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_147f6dfb2(param_1 + 0x50,param_2 + 0x50);
  FUN_147f6e046(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 147f6dfb2 FUN_147f6dfb2 body=147 status=ok
// SIG undefined FUN_147f6dfb2(void)

longlong FUN_147f6dfb2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_147f6e0a0();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_147f6e0f8(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_147f6e150(param_1 + 0x30,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_147f6e1aa(param_1 + 0x48,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_147f6e33a(param_1 + 0x78,param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 147f6e046 FUN_147f6e046 body=89 status=ok
// SIG undefined FUN_147f6e046(void)

undefined8 * FUN_147f6e046(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f6e3f4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f6e0a0 FUN_147f6e0a0 body=87 status=ok
// SIG undefined FUN_147f6e0a0(void)

undefined8 * FUN_147f6e0a0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14004d600(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f6e0f8 FUN_147f6e0f8 body=88 status=ok
// SIG undefined FUN_147f6e0f8(void)

undefined8 * FUN_147f6e0f8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f6e202(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f6e150 FUN_147f6e150 body=89 status=ok
// SIG undefined FUN_147f6e150(void)

undefined8 * FUN_147f6e150(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f6e264(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f6e1aa FUN_147f6e1aa body=88 status=ok
// SIG undefined FUN_147f6e1aa(void)

undefined8 * FUN_147f6e1aa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f6e2d8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f6e202 FUN_147f6e202 body=98 status=ok
// SIG undefined FUN_147f6e202(void)

void FUN_147f6e202(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f6e264 FUN_147f6e264 body=115 status=ok
// SIG undefined FUN_147f6e264(void)

void FUN_147f6e264(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f6e2d8 FUN_147f6e2d8 body=98 status=ok
// SIG undefined FUN_147f6e2d8(void)

void FUN_147f6e2d8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f6e33a FUN_147f6e33a body=88 status=ok
// SIG undefined FUN_147f6e33a(void)

undefined8 * FUN_147f6e33a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f6e392(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f6e392 FUN_147f6e392 body=98 status=ok
// SIG undefined FUN_147f6e392(void)

void FUN_147f6e392(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f6e3f4 FUN_147f6e3f4 body=115 status=ok
// SIG undefined FUN_147f6e3f4(void)

void FUN_147f6e3f4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f6e526 FUN_147f6e526 body=99 status=ok
// SIG undefined FUN_147f6e526(void)

undefined1 FUN_147f6e526(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x40);
      uVar2 = *(undefined4 *)(param_3 + -0x3c);
      uVar3 = *(undefined4 *)(param_3 + -0x38);
      uVar4 = *(undefined4 *)(param_3 + -0x34);
      uVar5 = *(undefined4 *)(param_3 + -0x2c);
      uVar6 = *(undefined4 *)(param_3 + -0x28);
      uVar7 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar5;
      *(undefined4 *)(param_2 + -0x28) = uVar6;
      *(undefined4 *)(param_2 + -0x24) = uVar7;
      *(undefined4 *)(param_2 + -0x40) = uVar1;
      *(undefined4 *)(param_2 + -0x3c) = uVar2;
      *(undefined4 *)(param_2 + -0x38) = uVar3;
      *(undefined4 *)(param_2 + -0x34) = uVar4;
      FUN_1470d00c2(param_2 + -0x20,param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6e5b2 FUN_147f6e5b2 body=59 status=ok
// SIG undefined FUN_147f6e5b2(void)

undefined8 FUN_147f6e5b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6e5f8 FUN_147f6e5f8 body=56 status=ok
// SIG undefined FUN_147f6e5f8(void)

void FUN_147f6e5f8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14aca30c0;
    if (param_2[9] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 147f6e67e FUN_147f6e67e body=65 status=ok
// SIG undefined FUN_147f6e67e(void)

undefined8 * FUN_147f6e67e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aca30c0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6e6c0 FUN_147f6e6c0 body=55 status=ok
// SIG undefined FUN_147f6e6c0(void)

void FUN_147f6e6c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25008 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25008 = FUN_140002ddd(FUN_146444ff1,uVar1,L"GbxAudioNodeAspectSettings_TableRead");
  }
  return;
}



// FUNCTION 147f6e6f8 FUN_147f6e6f8 body=155 status=ok
// SIG undefined FUN_147f6e6f8(void)

void FUN_147f6e6f8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,200);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *param_2 = &PTR_FUN_14aca32b0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined2 *)(param_2 + 0x1c) = 0xffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 147f6e842 FUN_147f6e842 body=63 status=ok
// SIG undefined FUN_147f6e842(void)

undefined1 FUN_147f6e842(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6ea04(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 147f6e8aa FUN_147f6e8aa body=59 status=ok
// SIG undefined FUN_147f6e8aa(void)

undefined8 FUN_147f6e8aa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6e8f6 FUN_147f6e8f6 body=40 status=ok
// SIG undefined FUN_147f6e8f6(void)

void FUN_147f6e8f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_147f6e9ca(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 147f6e96c FUN_147f6e96c body=38 status=ok
// SIG undefined FUN_147f6e96c(void)

undefined8 FUN_147f6e96c(undefined8 param_1,int param_2)

{
  FUN_147f6e9ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6e992 FUN_147f6e992 body=55 status=ok
// SIG undefined FUN_147f6e992(void)

void FUN_147f6e992(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25020 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25020 = FUN_140002ddd(FUN_146445087,uVar1,L"GbxAudioNodeAspectState_TableRead");
  }
  return;
}



// FUNCTION 147f6e9ca FUN_147f6e9ca body=57 status=ok
// SIG undefined FUN_147f6e9ca(void)

void FUN_147f6e9ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aca32b0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_141818bfa(param_1 + 10);
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f6ea04 FUN_147f6ea04 body=111 status=ok
// SIG undefined FUN_147f6ea04(void)

longlong FUN_147f6ea04(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_147f6dfb2(param_1 + 0x50,param_2 + 0x50);
  FUN_147f6e046(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 147f6eb24 FUN_147f6eb24 body=99 status=ok
// SIG undefined FUN_147f6eb24(void)

undefined8 FUN_147f6eb24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x38);
      uVar2 = *(undefined4 *)(param_3 + -0x34);
      uVar3 = *(undefined4 *)(param_3 + -0x30);
      uVar4 = *(undefined4 *)(param_3 + -0x2c);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x38) = uVar1;
      *(undefined4 *)(param_2 + -0x34) = uVar2;
      *(undefined4 *)(param_2 + -0x30) = uVar3;
      *(undefined4 *)(param_2 + -0x2c) = uVar4;
      FUN_1470d00c2(param_2 + -0x18,param_3 + -0x18);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6ebb0 FUN_147f6ebb0 body=59 status=ok
// SIG undefined FUN_147f6ebb0(void)

undefined8 FUN_147f6ebb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6ebf6 FUN_147f6ebf6 body=56 status=ok
// SIG undefined FUN_147f6ebf6(void)

void FUN_147f6ebf6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14aca34b0;
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 147f6ec7c FUN_147f6ec7c body=65 status=ok
// SIG undefined FUN_147f6ec7c(void)

undefined8 * FUN_147f6ec7c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aca34b0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6ecbe FUN_147f6ecbe body=55 status=ok
// SIG undefined FUN_147f6ecbe(void)

void FUN_147f6ecbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25038 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25038 = FUN_140002ddd(FUN_14644511d,uVar1,L"GbxAudioNodeAspectSettings_SetParam");
  }
  return;
}



// FUNCTION 147f6ecf6 FUN_147f6ecf6 body=155 status=ok
// SIG undefined FUN_147f6ecf6(void)

void FUN_147f6ecf6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,200);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *param_2 = &PTR_FUN_14aca36b0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined2 *)(param_2 + 0x1c) = 0xffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 147f6ee40 FUN_147f6ee40 body=63 status=ok
// SIG undefined FUN_147f6ee40(void)

undefined1 FUN_147f6ee40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f002(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 147f6eea8 FUN_147f6eea8 body=59 status=ok
// SIG undefined FUN_147f6eea8(void)

undefined8 FUN_147f6eea8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6eef4 FUN_147f6eef4 body=40 status=ok
// SIG undefined FUN_147f6eef4(void)

void FUN_147f6eef4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_147f6efc8(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 147f6ef6a FUN_147f6ef6a body=38 status=ok
// SIG undefined FUN_147f6ef6a(void)

undefined8 FUN_147f6ef6a(undefined8 param_1,int param_2)

{
  FUN_147f6efc8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6ef90 FUN_147f6ef90 body=55 status=ok
// SIG undefined FUN_147f6ef90(void)

void FUN_147f6ef90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25050 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25050 = FUN_140002ddd(FUN_1464451b3,uVar1,L"GbxAudioNodeAspectState_SetParam");
  }
  return;
}



// FUNCTION 147f6efc8 FUN_147f6efc8 body=57 status=ok
// SIG undefined FUN_147f6efc8(void)

void FUN_147f6efc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aca36b0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_141818bfa(param_1 + 10);
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f6f002 FUN_147f6f002 body=111 status=ok
// SIG undefined FUN_147f6f002(void)

longlong FUN_147f6f002(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_147f6dfb2(param_1 + 0x50,param_2 + 0x50);
  FUN_147f6e046(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 147f6f100 FUN_147f6f100 body=139 status=ok
// SIG undefined FUN_147f6f100(void)

void FUN_147f6f100(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147f81c00(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6f192 FUN_147f6f192 body=426 status=ok
// SIG undefined FUN_147f6f192(void)

void FUN_147f6f192(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  bool bVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [52];
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60[0] = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  local_68 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  uVar1 = local_68;
  bVar2 = local_6c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412bd664(local_a0,local_60);
  FUN_1438ab17c(param_1,local_a0,uVar1,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff);
  if ((lStack_38 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_38 + 0x50));
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6f368 FUN_147f6f368 body=45 status=ok
// SIG undefined FUN_147f6f368(void)

longlong FUN_147f6f368(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d3ce76(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6f39c FUN_147f6f39c body=48 status=ok
// SIG undefined FUN_147f6f39c(void)

longlong FUN_147f6f39c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145d3ce76(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6f3d4 FUN_147f6f3d4 body=45 status=ok
// SIG undefined FUN_147f6f3d4(void)

longlong FUN_147f6f3d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cbb56e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6f448 FUN_147f6f448 body=131 status=ok
// SIG undefined FUN_147f6f448(void)

void FUN_147f6f448(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 147f6f504 FUN_147f6f504 body=106 status=ok
// SIG undefined FUN_147f6f504(void)

void FUN_147f6f504(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6f570 FUN_147f6f570 body=95 status=ok
// SIG undefined FUN_147f6f570(void)

void FUN_147f6f570(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 147f6f5d0 FUN_147f6f5d0 body=48 status=ok
// SIG undefined FUN_147f6f5d0(void)

longlong FUN_147f6f5d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_140ac1038(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6f608 FUN_147f6f608 body=109 status=ok
// SIG undefined FUN_147f6f608(void)

void FUN_147f6f608(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x120);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *param_2 = &PTR_FUN_14acabc20;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  return;
}



// FUNCTION 147f6f6ee FUN_147f6f6ee body=63 status=ok
// SIG undefined FUN_147f6f6ee(void)

undefined1 FUN_147f6f6ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 147f6f756 FUN_147f6f756 body=59 status=ok
// SIG undefined FUN_147f6f756(void)

undefined8 FUN_147f6f756(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6f7a2 FUN_147f6f7a2 body=59 status=ok
// SIG undefined FUN_147f6f7a2(void)

void FUN_147f6f7a2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *param_2 = &PTR_FUN_14acabc20;
    FUN_147f6f94a(param_2 + 0xb);
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x2f) = 0;
  }
  return;
}



// FUNCTION 147f6f82c FUN_147f6f82c body=60 status=ok
// SIG undefined FUN_147f6f82c(void)

undefined8 * FUN_147f6f82c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6f868 FUN_147f6f868 body=55 status=ok
// SIG undefined FUN_147f6f868(void)

void FUN_147f6f868(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb250a0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb250a0 = FUN_140002ddd(FUN_1464458a3,uVar1,L"GbxAudioNodeState");
  }
  return;
}



// FUNCTION 147f6f8c2 FUN_147f6f8c2 body=135 status=ok
// SIG undefined FUN_147f6f8c2(void)

undefined8 * FUN_147f6f8c2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1438a38f2(param_1 + 0x58,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6f94a FUN_147f6f94a body=81 status=ok
// SIG undefined FUN_147f6f94a(void)

void FUN_147f6f94a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x118);
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
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f6f99c FUN_147f6f99c body=91 status=ok
// SIG undefined FUN_147f6f99c(void)

longlong FUN_147f6f99c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  FUN_147f6f9f8(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 147f6f9f8 FUN_147f6f9f8 body=105 status=ok
// SIG undefined FUN_147f6f9f8(void)

longlong FUN_147f6f9f8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_147f6fa62();
  uVar3 = *(undefined8 *)(param_2 + 0x110);
  lVar4 = *(longlong *)(param_2 + 0x118);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = uVar3;
  *(longlong *)(param_1 + 0x118) = lVar4;
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



// FUNCTION 147f6fa62 FUN_147f6fa62 body=122 status=ok
// SIG undefined FUN_147f6fa62(void)

void * FUN_147f6fa62(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x100);
    if (*(void **)((longlong)param_2 + 0x100) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x108);
    *(int *)((longlong)param_1 + 0x108) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x10c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x10c) = 8;
    }
    else {
      FUN_147f6fadc(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x100);
        if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f6fadc FUN_147f6fadc body=104 status=ok
// SIG undefined FUN_147f6fadc(void)

void FUN_147f6fadc(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_147f6fb44(param_1,0,iVar3,0x20);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x10c) = param_3;
  return;
}



// FUNCTION 147f6fb44 FUN_147f6fb44 body=142 status=ok
// SIG undefined FUN_147f6fb44(void)

void FUN_147f6fb44(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 147f6fc76 FUN_147f6fc76 body=78 status=ok
// SIG undefined FUN_147f6fc76(void)

undefined1 FUN_147f6fc76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6fcec FUN_147f6fcec body=59 status=ok
// SIG undefined FUN_147f6fcec(void)

undefined8 FUN_147f6fcec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6fd32 FUN_147f6fd32 body=32 status=ok
// SIG undefined FUN_147f6fd32(void)

void FUN_147f6fd32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f6fda0 FUN_147f6fda0 body=38 status=ok
// SIG undefined FUN_147f6fda0(void)

undefined8 FUN_147f6fda0(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f6fdc6 FUN_147f6fdc6 body=55 status=ok
// SIG undefined FUN_147f6fdc6(void)

void FUN_147f6fdc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb250b8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb250b8 = FUN_140002ddd(FUN_14644593b,uVar1,L"GbxAudioNodeSettings");
  }
  return;
}



// FUNCTION 147f6fec6 FUN_147f6fec6 body=125 status=ok
// SIG undefined FUN_147f6fec6(void)

undefined1 FUN_147f6fec6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      FUN_147f69ad4(param_2 + lVar10 + 0x38,param_3 + lVar10 + 0x38);
      FUN_140b57998(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      lVar10 = lVar10 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f6ff6c FUN_147f6ff6c body=59 status=ok
// SIG undefined FUN_147f6ff6c(void)

undefined8 FUN_147f6ff6c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f6ffb2 FUN_147f6ffb2 body=34 status=ok
// SIG undefined FUN_147f6ffb2(void)

void FUN_147f6ffb2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_147f7008e(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147f70022 FUN_147f70022 body=38 status=ok
// SIG undefined FUN_147f70022(void)

undefined8 FUN_147f70022(undefined8 param_1,int param_2)

{
  FUN_147f7008e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f70048 FUN_147f70048 body=55 status=ok
// SIG undefined FUN_147f70048(void)

void FUN_147f70048(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb250d0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb250d0 = FUN_140002ddd(FUN_1464459d3,uVar1,L"GbxAudioGraphSettings_Data");
  }
  return;
}



// FUNCTION 147f7008e FUN_147f7008e body=83 status=ok
// SIG undefined FUN_147f7008e(void)

void FUN_147f7008e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acac080;
  FUN_1403d8100(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14588aaf6(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 147f700e2 FUN_147f700e2 body=116 status=ok
// SIG undefined FUN_147f700e2(void)

void FUN_147f700e2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x120);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14acac2b0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  return;
}



// FUNCTION 147f701d4 FUN_147f701d4 body=85 status=ok
// SIG undefined FUN_147f701d4(void)

undefined1 FUN_147f701d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    FUN_140b57998(param_2 + 0x178,param_3 + 0x178);
    param_2 = param_2 + 0x188;
    param_3 = param_3 + 0x188;
  }
  return 1;
}



// FUNCTION 147f70252 FUN_147f70252 body=59 status=ok
// SIG undefined FUN_147f70252(void)

undefined8 FUN_147f70252(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7029e FUN_147f7029e body=40 status=ok
// SIG undefined FUN_147f7029e(void)

void FUN_147f7029e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_147f71386(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 147f70314 FUN_147f70314 body=38 status=ok
// SIG undefined FUN_147f70314(void)

undefined8 FUN_147f70314(undefined8 param_1,int param_2)

{
  FUN_147f71386();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7033a FUN_147f7033a body=55 status=ok
// SIG undefined FUN_147f7033a(void)

void FUN_147f7033a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb250e8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb250e8 = FUN_140002ddd(FUN_146445a69,uVar1,L"GbxAudioGraphState_Data");
  }
  return;
}



// FUNCTION 147f70414 FUN_147f70414 body=78 status=ok
// SIG undefined FUN_147f70414(void)

undefined1 FUN_147f70414(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f7048a FUN_147f7048a body=59 status=ok
// SIG undefined FUN_147f7048a(void)

undefined8 FUN_147f7048a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f704d0 FUN_147f704d0 body=32 status=ok
// SIG undefined FUN_147f704d0(void)

void FUN_147f704d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f7053e FUN_147f7053e body=38 status=ok
// SIG undefined FUN_147f7053e(void)

undefined8 FUN_147f7053e(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f70564 FUN_147f70564 body=55 status=ok
// SIG undefined FUN_147f70564(void)

void FUN_147f70564(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25100 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25100 = FUN_140002ddd(FUN_146445aff,uVar1,L"GbxAudioGraphSettings_Sequencer");
  }
  return;
}



// FUNCTION 147f705b2 FUN_147f705b2 body=109 status=ok
// SIG undefined FUN_147f705b2(void)

void FUN_147f705b2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x120);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14acac720;
  return;
}



// FUNCTION 147f70698 FUN_147f70698 body=63 status=ok
// SIG undefined FUN_147f70698(void)

undefined1 FUN_147f70698(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 147f70700 FUN_147f70700 body=59 status=ok
// SIG undefined FUN_147f70700(void)

undefined8 FUN_147f70700(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7074c FUN_147f7074c body=59 status=ok
// SIG undefined FUN_147f7074c(void)

void FUN_147f7074c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *param_2 = &PTR_FUN_14acabc20;
    FUN_147f6f94a(param_2 + 0xb);
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x2f) = 0;
  }
  return;
}



// FUNCTION 147f707d6 FUN_147f707d6 body=60 status=ok
// SIG undefined FUN_147f707d6(void)

undefined8 * FUN_147f707d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f70812 FUN_147f70812 body=55 status=ok
// SIG undefined FUN_147f70812(void)

void FUN_147f70812(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25118 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25118 = FUN_140002ddd(FUN_146445b97,uVar1,L"GbxAudioGraphState_Sequencer");
  }
  return;
}



// FUNCTION 147f708ce FUN_147f708ce body=86 status=ok
// SIG undefined FUN_147f708ce(void)

undefined8 FUN_147f708ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f7094c FUN_147f7094c body=59 status=ok
// SIG undefined FUN_147f7094c(void)

undefined8 FUN_147f7094c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f70992 FUN_147f70992 body=32 status=ok
// SIG undefined FUN_147f70992(void)

void FUN_147f70992(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f70a12 FUN_147f70a12 body=122 status=ok
// SIG undefined FUN_147f70a12(void)

void FUN_147f70a12(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x150);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14acacb80;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  return;
}



// FUNCTION 147f70b10 FUN_147f70b10 body=108 status=ok
// SIG undefined FUN_147f70b10(void)

undefined1 FUN_147f70b10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    FUN_140d27362(param_2 + 0x178,param_3 + 0x178);
    FUN_147f70d52(param_2 + 0x180,param_3 + 0x180);
    param_2 = param_2 + 400;
    param_3 = param_3 + 400;
  }
  return 1;
}



// FUNCTION 147f70ba4 FUN_147f70ba4 body=59 status=ok
// SIG undefined FUN_147f70ba4(void)

undefined8 FUN_147f70ba4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f70c46 FUN_147f70c46 body=82 status=ok
// SIG undefined FUN_147f70c46(void)

undefined8 * FUN_147f70c46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acacb80;
  FUN_147f70cd0(param_1 + 0x2f);
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f70c98 FUN_147f70c98 body=55 status=ok
// SIG undefined FUN_147f70c98(void)

void FUN_147f70c98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25148 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25148 = FUN_140002ddd(FUN_146445c8e,uVar1,L"GbxAudioGraphState_Action");
  }
  return;
}



// FUNCTION 147f70cd0 FUN_147f70cd0 body=47 status=ok
// SIG undefined FUN_147f70cd0(void)

void FUN_147f70cd0(longlong param_1)

{
  FUN_147f70cff(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a61ac8(param_1);
  return;
}



// FUNCTION 147f70cff FUN_147f70cff body=83 status=ok
// SIG undefined FUN_147f70cff(void)

void FUN_147f70cff(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x38);
    bVar1 = DAT_14cb26569;
    do {
      if ((*plVar2 != 0) && ((bVar1 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(*plVar2 + 0x50));
        bVar1 = DAT_14cb26569;
      }
      plVar2[-3] = 0;
      plVar2[-2] = -1;
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147f70d52 FUN_147f70d52 body=95 status=ok
// SIG undefined FUN_147f70d52(void)

undefined8 * FUN_147f70d52(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147f70cff(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f70db2(param_1,iVar1);
      FUN_147f70e14(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f70db2 FUN_147f70db2 body=98 status=ok
// SIG undefined FUN_147f70db2(void)

void FUN_147f70db2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f70e14 FUN_147f70e14 body=52 status=ok
// SIG undefined FUN_147f70e14(void)

void FUN_147f70e14(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147f70e48(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 147f70e48 FUN_147f70e48 body=102 status=ok
// SIG undefined FUN_147f70e48(void)

undefined4 * FUN_147f70e48(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  lVar1 = *(longlong *)(param_2 + 0xe);
  *(longlong *)(param_1 + 0xe) = lVar1;
  if ((lVar1 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lVar1 + 0x50));
  }
  return param_1;
}



// FUNCTION 147f70eb0 FUN_147f70eb0 body=81 status=ok
// SIG undefined FUN_147f70eb0(void)

void FUN_147f70eb0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x32) == '\x01') {
    *param_1 = &PTR_FUN_14acacb80;
    FUN_147f70cd0(param_1 + 0x2f);
    *param_1 = &PTR_FUN_14acabc20;
    FUN_147f6f94a(param_1 + 0xb);
    FUN_140f9d4d6(param_1);
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  return;
}



// FUNCTION 147f70fc0 FUN_147f70fc0 body=86 status=ok
// SIG undefined FUN_147f70fc0(void)

undefined1 FUN_147f70fc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
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
      FUN_1470d00c2(param_2,param_3);
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f7103e FUN_147f7103e body=59 status=ok
// SIG undefined FUN_147f7103e(void)

undefined8 FUN_147f7103e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f71084 FUN_147f71084 body=32 status=ok
// SIG undefined FUN_147f71084(void)

void FUN_147f71084(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147f710f6 FUN_147f710f6 body=116 status=ok
// SIG undefined FUN_147f710f6(void)

void FUN_147f710f6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x120);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  *param_2 = &PTR_FUN_14acacff0;
  return;
}



// FUNCTION 147f711e8 FUN_147f711e8 body=85 status=ok
// SIG undefined FUN_147f711e8(void)

undefined1 FUN_147f711e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    FUN_140b57998(param_2 + 0x178,param_3 + 0x178);
    param_2 = param_2 + 0x188;
    param_3 = param_3 + 0x188;
  }
  return 1;
}



// FUNCTION 147f71266 FUN_147f71266 body=59 status=ok
// SIG undefined FUN_147f71266(void)

undefined8 FUN_147f71266(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f712b2 FUN_147f712b2 body=40 status=ok
// SIG undefined FUN_147f712b2(void)

void FUN_147f712b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_147f71386(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 147f71328 FUN_147f71328 body=38 status=ok
// SIG undefined FUN_147f71328(void)

undefined8 FUN_147f71328(undefined8 param_1,int param_2)

{
  FUN_147f71386();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7134e FUN_147f7134e body=55 status=ok
// SIG undefined FUN_147f7134e(void)

void FUN_147f7134e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25178 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25178 = FUN_140002ddd(FUN_146445d84,uVar1,L"GbxAudioGraphState_Start");
  }
  return;
}



// FUNCTION 147f71386 FUN_147f71386 body=85 status=ok
// SIG undefined FUN_147f71386(void)

void FUN_147f71386(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acac2b0;
  FUN_1403d8100(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f71462 FUN_147f71462 body=78 status=ok
// SIG undefined FUN_147f71462(void)

undefined1 FUN_147f71462(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f714d8 FUN_147f714d8 body=59 status=ok
// SIG undefined FUN_147f714d8(void)

undefined8 FUN_147f714d8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7151e FUN_147f7151e body=32 status=ok
// SIG undefined FUN_147f7151e(void)

void FUN_147f7151e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f71596 FUN_147f71596 body=109 status=ok
// SIG undefined FUN_147f71596(void)

void FUN_147f71596(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x120);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14acad460;
  return;
}



// FUNCTION 147f7167c FUN_147f7167c body=63 status=ok
// SIG undefined FUN_147f7167c(void)

undefined1 FUN_147f7167c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 147f716e4 FUN_147f716e4 body=59 status=ok
// SIG undefined FUN_147f716e4(void)

undefined8 FUN_147f716e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f71730 FUN_147f71730 body=59 status=ok
// SIG undefined FUN_147f71730(void)

void FUN_147f71730(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *param_2 = &PTR_FUN_14acabc20;
    FUN_147f6f94a(param_2 + 0xb);
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x2f) = 0;
  }
  return;
}



// FUNCTION 147f717ba FUN_147f717ba body=60 status=ok
// SIG undefined FUN_147f717ba(void)

undefined8 * FUN_147f717ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f717f6 FUN_147f717f6 body=55 status=ok
// SIG undefined FUN_147f717f6(void)

void FUN_147f717f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb251a8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb251a8 = FUN_140002ddd(FUN_146445e7a,uVar1,L"GbxAudioGraphState_Parallel");
  }
  return;
}



// FUNCTION 147f718d0 FUN_147f718d0 body=78 status=ok
// SIG undefined FUN_147f718d0(void)

undefined1 FUN_147f718d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f71946 FUN_147f71946 body=59 status=ok
// SIG undefined FUN_147f71946(void)

undefined8 FUN_147f71946(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7198c FUN_147f7198c body=32 status=ok
// SIG undefined FUN_147f7198c(void)

void FUN_147f7198c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f719fa FUN_147f719fa body=38 status=ok
// SIG undefined FUN_147f719fa(void)

undefined8 FUN_147f719fa(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f71a20 FUN_147f71a20 body=55 status=ok
// SIG undefined FUN_147f71a20(void)

void FUN_147f71a20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb251c0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb251c0 = FUN_140002ddd(FUN_146445f11,uVar1,L"GbxAudioGraphSettings_Merge");
  }
  return;
}



// FUNCTION 147f71a5c FUN_147f71a5c body=109 status=ok
// SIG undefined FUN_147f71a5c(void)

void FUN_147f71a5c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x120);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14acad8d0;
  return;
}



// FUNCTION 147f71b42 FUN_147f71b42 body=63 status=ok
// SIG undefined FUN_147f71b42(void)

undefined1 FUN_147f71b42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 147f71baa FUN_147f71baa body=59 status=ok
// SIG undefined FUN_147f71baa(void)

undefined8 FUN_147f71baa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f71bf6 FUN_147f71bf6 body=59 status=ok
// SIG undefined FUN_147f71bf6(void)

void FUN_147f71bf6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *param_2 = &PTR_FUN_14acabc20;
    FUN_147f6f94a(param_2 + 0xb);
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x2f) = 0;
  }
  return;
}


