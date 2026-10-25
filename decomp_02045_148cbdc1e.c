// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148cbdc1e FUN_148cbdc1e body=59 status=ok
// SIG undefined FUN_148cbdc1e(void)

undefined8 FUN_148cbdc1e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbdc64 FUN_148cbdc64 body=34 status=ok
// SIG undefined FUN_148cbdc64(void)

void FUN_148cbdc64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1457ff3de(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148cbdcd4 FUN_148cbdcd4 body=55 status=ok
// SIG undefined FUN_148cbdcd4(void)

void FUN_148cbdcd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0628 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0628 = FUN_140002ddd(FUN_1466174ad,uVar1,L"TurretWeaponAspect");
  }
  return;
}



// FUNCTION 148cbdd14 FUN_148cbdd14 body=49 status=ok
// SIG undefined FUN_148cbdd14(void)

void FUN_148cbdd14(undefined8 param_1,undefined8 *param_2)

{
  FUN_141433862(param_2);
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *param_2 = &PTR_FUN_14b939300;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  return;
}



// FUNCTION 148cbdd5c FUN_148cbdd5c body=74 status=ok
// SIG undefined FUN_148cbdd5c(void)

undefined1 FUN_148cbdd5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0fdb0(param_2,param_3);
    *(undefined1 *)(param_2 + 0xd0) = *(undefined1 *)(param_3 + 0xd0);
    param_2 = param_2 + 0xd8;
    param_3 = param_3 + 0xd8;
  }
  return 1;
}



// FUNCTION 148cbddce FUN_148cbddce body=59 status=ok
// SIG undefined FUN_148cbddce(void)

undefined8 FUN_148cbddce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbde1a FUN_148cbde1a body=38 status=ok
// SIG undefined FUN_148cbde1a(void)

void FUN_148cbde1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_1458dc9ea(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148cbde96 FUN_148cbde96 body=55 status=ok
// SIG undefined FUN_148cbde96(void)

void FUN_148cbde96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0640 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0640 = FUN_140002ddd(FUN_146617543,uVar1,L"TurretWeaponAttributeEffectAspect");
  }
  return;
}



// FUNCTION 148cbdf42 FUN_148cbdf42 body=67 status=ok
// SIG undefined FUN_148cbdf42(void)

undefined1 FUN_148cbdf42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    FUN_145c3f772(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x60;
    param_3 = param_3 + 0x60;
  }
  return 1;
}



// FUNCTION 148cbdfae FUN_148cbdfae body=59 status=ok
// SIG undefined FUN_148cbdfae(void)

undefined8 FUN_148cbdfae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbdff4 FUN_148cbdff4 body=34 status=ok
// SIG undefined FUN_148cbdff4(void)

void FUN_148cbdff4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145821382(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148cbe0ea FUN_148cbe0ea body=59 status=ok
// SIG undefined FUN_148cbe0ea(void)

undefined8 FUN_148cbe0ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbe1aa FUN_148cbe1aa body=63 status=ok
// SIG undefined FUN_148cbe1aa(void)

undefined1 FUN_148cbe1aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cbe2d4(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148cbe212 FUN_148cbe212 body=59 status=ok
// SIG undefined FUN_148cbe212(void)

undefined8 FUN_148cbe212(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbe25e FUN_148cbe25e body=40 status=ok
// SIG undefined FUN_148cbe25e(void)

void FUN_148cbe25e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14582134a(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148cbe2d4 FUN_148cbe2d4 body=103 status=ok
// SIG undefined FUN_148cbe2d4(void)

longlong FUN_148cbe2d4(longlong param_1,longlong param_2)

{
  FUN_14596e4d8();
  FUN_148cbe33c(param_1 + 0x18,param_2 + 0x18);
  FUN_14054c6c4(param_1 + 0x28,param_2 + 0x28);
  FUN_145c3f772(param_1 + 0x38,param_2 + 0x38);
  FUN_14054c6c4(param_1 + 0x88,param_2 + 0x88);
  FUN_145c3f772(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 148cbe33c FUN_148cbe33c body=89 status=ok
// SIG undefined FUN_148cbe33c(void)

undefined8 * FUN_148cbe33c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148cbe396(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 148cbe396 FUN_148cbe396 body=115 status=ok
// SIG undefined FUN_148cbe396(void)

void FUN_148cbe396(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148cbe476 FUN_148cbe476 body=59 status=ok
// SIG undefined FUN_148cbe476(void)

undefined8 FUN_148cbe476(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbe518 FUN_148cbe518 body=147 status=ok
// SIG undefined FUN_148cbe518(void)

void FUN_148cbe518(undefined8 param_1,undefined4 *param_2)

{
  memset(param_2,0,0xd0);
  *param_2 = 3;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined ***)(param_2 + 2) = &PTR_FUN_14b1f9580;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined2 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b1f93b0;
  *(undefined ***)(param_2 + 0x18) = &PTR_FUN_14b023b08;
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  param_2[0x2a] = 0x3b9cbb9e;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_2 + 0xba) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc2) = 0;
  return;
}



// FUNCTION 148cbe644 FUN_148cbe644 body=63 status=ok
// SIG undefined FUN_148cbe644(void)

undefined1 FUN_148cbe644(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cbe76e(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 148cbe6ac FUN_148cbe6ac body=59 status=ok
// SIG undefined FUN_148cbe6ac(void)

undefined8 FUN_148cbe6ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbe6f8 FUN_148cbe6f8 body=40 status=ok
// SIG undefined FUN_148cbe6f8(void)

void FUN_148cbe6f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1457f572e(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148cbe76e FUN_148cbe76e body=100 status=ok
// SIG undefined FUN_148cbe76e(void)

undefined4 * FUN_148cbe76e(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_14124fed2(param_1 + 4,param_2 + 4);
  FUN_144a787a6(param_1 + 10,param_2 + 10);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  FUN_14124fed2(param_1 + 0x12,param_2 + 0x12);
  FUN_140e8aa92(param_1 + 0x18,param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_2 + 0x32);
  return param_1;
}



// FUNCTION 148cbe800 FUN_148cbe800 body=73 status=ok
// SIG undefined FUN_148cbe800(void)

undefined8 FUN_148cbe800(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_145bfea70();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cbe872 FUN_148cbe872 body=59 status=ok
// SIG undefined FUN_148cbe872(void)

undefined8 FUN_148cbe872(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbe908 FUN_148cbe908 body=138 status=ok
// SIG undefined FUN_148cbe908(void)

void FUN_148cbe908(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xc0);
  *param_2 = &PTR_FUN_14b939d20;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0xffffffff00000080;
  param_2[0x17] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  return;
}



// FUNCTION 148cbea2a FUN_148cbea2a body=63 status=ok
// SIG undefined FUN_148cbea2a(void)

undefined1 FUN_148cbea2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cbeb86(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 148cbea92 FUN_148cbea92 body=59 status=ok
// SIG undefined FUN_148cbea92(void)

undefined8 FUN_148cbea92(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbeade FUN_148cbeade body=40 status=ok
// SIG undefined FUN_148cbeade(void)

void FUN_148cbeade(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_1459a7180(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 148cbeb4c FUN_148cbeb4c body=57 status=ok
// SIG undefined FUN_148cbeb4c(void)

void FUN_148cbeb4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0810 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0810 = FUN_140002ddd(FUN_146617770,uVar1,L"VaultCardDef");
  }
  return;
}



// FUNCTION 148cbeb86 FUN_148cbeb86 body=159 status=ok
// SIG undefined FUN_148cbeb86(void)

longlong FUN_148cbeb86(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_148c4ecf0(param_1 + 0x18,param_2 + 0x18);
  FUN_141855c14(param_1 + 0x30,param_2 + 0x30);
  FUN_1418c418a(param_1 + 0x48,param_2 + 0x48);
  FUN_148b9d72c(param_1 + 0x60,param_2 + 0x60);
  FUN_148cbecca(param_1 + 0x78,param_2 + 0x78);
  FUN_148cbec26(param_1 + 200,param_2 + 200);
  FUN_148cbec76(param_1 + 0xd8,param_2 + 0xd8);
  FUN_148cbec76(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 148cbec26 FUN_148cbec26 body=79 status=ok
// SIG undefined FUN_148cbec26(void)

undefined8 * FUN_148cbec26(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148cbef60(param_1,iVar1);
      FUN_148cbefc2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148cbec76 FUN_148cbec76 body=84 status=ok
// SIG undefined FUN_148cbec76(void)

longlong * FUN_148cbec76(longlong *param_1,longlong *param_2)

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



// FUNCTION 148cbecca FUN_148cbecca body=122 status=ok
// SIG undefined FUN_148cbecca(void)

longlong FUN_148cbecca(longlong param_1,longlong param_2)

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
    FUN_148cbed44(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148cbed44 FUN_148cbed44 body=254 status=ok
// SIG undefined FUN_148cbed44(void)

undefined8 * FUN_148cbed44(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1459a721a(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14041fbf2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined8 *)*param_1;
      puVar4 = (undefined8 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar4;
          *(undefined4 *)((longlong)puVar6 + 4) = *(undefined4 *)((longlong)puVar4 + 4);
        }
        else {
          *puVar6 = *puVar4;
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
          FUN_148cbee42(puVar6 + 2,puVar4 + 2);
          FUN_148cbeece(puVar6 + 9,puVar4 + 9);
          puVar6[0x1b] = puVar4[0x1b];
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x1c;
        puVar6 = puVar6 + 0x1c;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148cbee42 FUN_148cbee42 body=140 status=ok
// SIG undefined FUN_148cbee42(void)

undefined8 * FUN_148cbee42(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14b1f11c0;
  FUN_1486e1ef6(param_1 + 1,param_2 + 8);
  *param_1 = &PTR_FUN_14b1f9580;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 148cbeece FUN_148cbeece body=145 status=ok
// SIG undefined FUN_148cbeece(void)

undefined8 * FUN_148cbeece(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_14b1f11c0;
  FUN_1486e1ef6(param_1 + 1,param_2 + 8);
  *param_1 = &PTR_FUN_14b1f93b0;
  param_1[4] = &PTR_FUN_14b023b08;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 0x40);
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1401f3db8(param_1 + 9,param_2 + 0x48);
  FUN_143c7bde4(param_1 + 0xc,param_2 + 0x60);
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x88);
  return param_1;
}



// FUNCTION 148cbef60 FUN_148cbef60 body=98 status=ok
// SIG undefined FUN_148cbef60(void)

void FUN_148cbef60(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148cbefc2 FUN_148cbefc2 body=66 status=ok
// SIG undefined FUN_148cbefc2(void)

void FUN_148cbefc2(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_141431b9c(param_1,param_2);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148cbf012 FUN_148cbf012 body=94 status=ok
// SIG undefined FUN_148cbf012(void)

void FUN_148cbf012(undefined8 param_1,undefined8 *param_2)

{
  FUN_145891dec(param_2);
  *param_2 = &PTR_FUN_14b939ed0;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0xf00000d0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0x3f800000;
  return;
}



// FUNCTION 148cbf086 FUN_148cbf086 body=63 status=ok
// SIG undefined FUN_148cbf086(void)

undefined1 FUN_148cbf086(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cbf1c4(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148cbf0ee FUN_148cbf0ee body=59 status=ok
// SIG undefined FUN_148cbf0ee(void)

undefined8 FUN_148cbf0ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbf13a FUN_148cbf13a body=67 status=ok
// SIG undefined FUN_148cbf13a(void)

void FUN_148cbf13a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1e) == '\x01') {
    *param_2 = &PTR_FUN_14b1412c0;
    if (param_2[0x12] != 0) {
      FUN_1400020a8();
    }
    FUN_1411f306c(param_2);
    *(undefined1 *)(param_2 + 0x1e) = 0;
  }
  return;
}



// FUNCTION 148cbf1c4 FUN_148cbf1c4 body=90 status=ok
// SIG undefined FUN_148cbf1c4(void)

longlong FUN_148cbf1c4(longlong param_1,longlong param_2)

{
  FUN_14867a274();
  FUN_14869d972(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  FUN_1447715ec(param_1 + 0x78,param_2 + 0x78);
  FUN_140d02432(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148cbf230 FUN_148cbf230 body=65 status=ok
// SIG undefined FUN_148cbf230(void)

void FUN_148cbf230(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14[0] = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,local_14);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbf28e FUN_148cbf28e body=55 status=ok
// SIG undefined FUN_148cbf28e(void)

void FUN_148cbf28e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0bb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0bb8 = FUN_14171c317(FUN_146618bfc,uVar1,L"EAtt_WeaponBehaviorAtlasLock");
  }
  return;
}



// FUNCTION 148cbf384 FUN_148cbf384 body=149 status=ok
// SIG undefined FUN_148cbf384(void)

undefined8 FUN_148cbf384(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_141289ada(lVar1 + 8,lVar2 + 8);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      FUN_14596e4d8(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      FUN_14409d1b4(param_2 + lVar6 + 0x50,param_3 + lVar6 + 0x50);
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cbf442 FUN_148cbf442 body=59 status=ok
// SIG undefined FUN_148cbf442(void)

undefined8 FUN_148cbf442(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbf488 FUN_148cbf488 body=32 status=ok
// SIG undefined FUN_148cbf488(void)

void FUN_148cbf488(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14149872c(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148cbf4f6 FUN_148cbf4f6 body=57 status=ok
// SIG undefined FUN_148cbf4f6(void)

void FUN_148cbf4f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc09d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc09d0 = FUN_140002ddd(FUN_146618289,uVar1,L"VaultCards_GlobalsDef");
  }
  return;
}



// FUNCTION 148cbf55e FUN_148cbf55e body=63 status=ok
// SIG undefined FUN_148cbf55e(void)

undefined1 FUN_148cbf55e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cbf686(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148cbf5c6 FUN_148cbf5c6 body=59 status=ok
// SIG undefined FUN_148cbf5c6(void)

undefined8 FUN_148cbf5c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbf612 FUN_148cbf612 body=38 status=ok
// SIG undefined FUN_148cbf612(void)

void FUN_148cbf612(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_140da7f48(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148cbf686 FUN_148cbf686 body=114 status=ok
// SIG undefined FUN_148cbf686(void)

longlong FUN_148cbf686(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_14009d848();
  FUN_140311eb6(param_1 + 0x10,param_2 + 0x10);
  FUN_14009d848(param_1 + 0x20,param_2 + 0x20);
  FUN_140311eb6(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_140d188f2(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 148cbf738 FUN_148cbf738 body=80 status=ok
// SIG undefined FUN_148cbf738(void)

undefined1 FUN_148cbf738(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140311eb6(param_2,param_3);
    FUN_140311eb6(param_2 + 0x10,param_3 + 0x10);
    FUN_140311eb6(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148cbf7b0 FUN_148cbf7b0 body=59 status=ok
// SIG undefined FUN_148cbf7b0(void)

undefined8 FUN_148cbf7b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbf7f6 FUN_148cbf7f6 body=32 status=ok
// SIG undefined FUN_148cbf7f6(void)

void FUN_148cbf7f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1418d3cda(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148cbf866 FUN_148cbf866 body=80 status=ok
// SIG undefined FUN_148cbf866(void)

void FUN_148cbf866(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 2;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x21) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0xbf80000000000002;
  FUN_1457e22c0(param_2 + 0xb);
  param_2[0x2a] = 0;
  return;
}



// FUNCTION 148cbf8f4 FUN_148cbf8f4 body=59 status=ok
// SIG undefined FUN_148cbf8f4(void)

undefined8 FUN_148cbf8f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbf940 FUN_148cbf940 body=40 status=ok
// SIG undefined FUN_148cbf940(void)

void FUN_148cbf940(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x158) == '\x01') {
    FUN_145722792(param_2);
    *(undefined1 *)(param_2 + 0x158) = 0;
  }
  return;
}



// FUNCTION 148cbf9fe FUN_148cbf9fe body=59 status=ok
// SIG undefined FUN_148cbf9fe(void)

undefined8 FUN_148cbf9fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbfa4a FUN_148cbfa4a body=40 status=ok
// SIG undefined FUN_148cbfa4a(void)

void FUN_148cbfa4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x114) == '\x01') {
    FUN_145722844(param_2);
    *(undefined1 *)(param_2 + 0x114) = 0;
  }
  return;
}



// FUNCTION 148cbfac2 FUN_148cbfac2 body=115 status=ok
// SIG undefined FUN_148cbfac2(void)

void FUN_148cbfac2(undefined8 param_1,undefined8 *param_2)

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
  FUN_145a5e442(param_2);
  *param_2 = &PTR_FUN_14b942af0;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  param_2[9] = 0;
  FUN_144a7a8f6(param_2 + 10);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 148cbfb36 FUN_148cbfb36 body=73 status=ok
// SIG undefined FUN_148cbfb36(void)

void FUN_148cbfb36(undefined8 param_1,undefined8 *param_2)

{
  FUN_145a5e442(param_2);
  *param_2 = &PTR_FUN_14b942af0;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  param_2[9] = 0;
  FUN_144a7a8f6(param_2 + 10);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 148cbfba4 FUN_148cbfba4 body=54 status=ok
// SIG undefined FUN_148cbfba4(void)

undefined1 FUN_148cbfba4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cbfd16(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148cbfc02 FUN_148cbfc02 body=59 status=ok
// SIG undefined FUN_148cbfc02(void)

undefined8 FUN_148cbfc02(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cbfc48 FUN_148cbfc48 body=34 status=ok
// SIG undefined FUN_148cbfc48(void)

void FUN_148cbfc48(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1458e21d4(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148cbfcb8 FUN_148cbfcb8 body=38 status=ok
// SIG undefined FUN_148cbfcb8(void)

undefined8 FUN_148cbfcb8(undefined8 param_1,int param_2)

{
  FUN_1458e21d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cbfcde FUN_148cbfcde body=55 status=ok
// SIG undefined FUN_148cbfcde(void)

void FUN_148cbfcde(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0af8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0af8 = FUN_140002ddd(FUN_14661881f,uVar1,L"WaypointAttachmentStrategyState_Carryable");
  }
  return;
}



// FUNCTION 148cbfd16 FUN_148cbfd16 body=107 status=ok
// SIG undefined FUN_148cbfd16(void)

longlong FUN_148cbfd16(longlong param_1,longlong param_2)

{
  FUN_1487ac53e();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_148cbfd82(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148cbfd82 FUN_148cbfd82 body=95 status=ok
// SIG undefined FUN_148cbfd82(void)

undefined8 * FUN_148cbfd82(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14597589f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148cbfde2(param_1,iVar1);
      FUN_148cbfe44(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148cbfde2 FUN_148cbfde2 body=98 status=ok
// SIG undefined FUN_148cbfde2(void)

void FUN_148cbfde2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148cbfe44 FUN_148cbfe44 body=45 status=ok
// SIG undefined FUN_148cbfe44(void)

void FUN_148cbfe44(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148cbff70 FUN_148cbff70 body=59 status=ok
// SIG undefined FUN_148cbff70(void)

undefined8 FUN_148cbff70(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc0010 FUN_148cc0010 body=29 status=ok
// SIG undefined FUN_148cc0010(void)

undefined8 FUN_148cc0010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc002e FUN_148cc002e body=55 status=ok
// SIG undefined FUN_148cc002e(void)

void FUN_148cc002e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0b10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0b10 = FUN_140002ddd(FUN_1466188b5,uVar1,L"WaypointAttachmentStrategy_Carryable");
  }
  return;
}



// FUNCTION 148cc00ca FUN_148cc00ca body=59 status=ok
// SIG undefined FUN_148cc00ca(void)

undefined8 FUN_148cc00ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc0168 FUN_148cc0168 body=113 status=ok
// SIG undefined FUN_148cc0168(void)

void FUN_148cc0168(undefined8 param_1,undefined8 *param_2)

{
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
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_145a5e442(param_2);
  *param_2 = &PTR_FUN_14b3e38b0;
  FUN_144928b90(param_2 + 5,0);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14b942fe0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  return;
}



// FUNCTION 148cc01da FUN_148cc01da body=72 status=ok
// SIG undefined FUN_148cc01da(void)

void FUN_148cc01da(undefined8 param_1,undefined8 *param_2)

{
  FUN_145a5e442(param_2);
  *param_2 = &PTR_FUN_14b3e38b0;
  FUN_144928b90(param_2 + 5,0);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14b942fe0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  return;
}



// FUNCTION 148cc0246 FUN_148cc0246 body=116 status=ok
// SIG undefined FUN_148cc0246(void)

undefined8 FUN_148cc0246(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487ac53e(param_2,param_3);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    FUN_1447715ec(param_2 + 0x38,param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
    FUN_1487ac954(param_2 + 0x68,param_3 + 0x68);
    *(undefined1 *)(param_2 + 0x78) = *(undefined1 *)(param_3 + 0x78);
    param_2 = param_2 + 0x80;
    param_3 = param_3 + 0x80;
  }
  return 1;
}



// FUNCTION 148cc02e2 FUN_148cc02e2 body=59 status=ok
// SIG undefined FUN_148cc02e2(void)

undefined8 FUN_148cc02e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc032e FUN_148cc032e body=38 status=ok
// SIG undefined FUN_148cc032e(void)

void FUN_148cc032e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_140c71ff0(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148cc03a2 FUN_148cc03a2 body=38 status=ok
// SIG undefined FUN_148cc03a2(void)

undefined8 FUN_148cc03a2(undefined8 param_1,int param_2)

{
  FUN_140c71ff0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc03c8 FUN_148cc03c8 body=55 status=ok
// SIG undefined FUN_148cc03c8(void)

void FUN_148cc03c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0b58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0b58 = FUN_140002ddd(FUN_146618a11,uVar1,L"WaypointAttachmentStrategyState_Migration");
  }
  return;
}



// FUNCTION 148cc0400 FUN_148cc0400 body=68 status=ok
// SIG undefined FUN_148cc0400(void)

void FUN_148cc0400(undefined8 param_1,undefined8 *param_2)

{
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b3e4b50;
  FUN_144928b90(param_2 + 1,0);
  *param_2 = &PTR_FUN_14b945d20;
  *(undefined1 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 148cc0444 FUN_148cc0444 body=49 status=ok
// SIG undefined FUN_148cc0444(void)

void FUN_148cc0444(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b3e4b50;
  FUN_144928b90(param_2 + 1,0);
  *param_2 = &PTR_FUN_14b945d20;
  *(undefined1 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 148cc049a FUN_148cc049a body=111 status=ok
// SIG undefined FUN_148cc049a(void)

undefined8 FUN_148cc049a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + 0x10 + lVar1) = *(undefined4 *)(param_3 + 0x10 + lVar1);
      *(undefined8 *)(param_2 + 8 + lVar1) = *(undefined8 *)(param_3 + 8 + lVar1);
      FUN_1447715ec(param_2 + 0x18 + lVar1,param_3 + 0x18 + lVar1);
      *(undefined1 *)(param_2 + 0x40 + lVar1) = *(undefined1 *)(param_3 + 0x40 + lVar1);
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cc0532 FUN_148cc0532 body=59 status=ok
// SIG undefined FUN_148cc0532(void)

undefined8 FUN_148cc0532(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc0578 FUN_148cc0578 body=50 status=ok
// SIG undefined FUN_148cc0578(void)

void FUN_148cc0578(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14b3e4b50;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 148cc05f8 FUN_148cc05f8 body=59 status=ok
// SIG undefined FUN_148cc05f8(void)

undefined8 * FUN_148cc05f8(undefined8 *param_1,int param_2)

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



// FUNCTION 148cc0634 FUN_148cc0634 body=55 status=ok
// SIG undefined FUN_148cc0634(void)

void FUN_148cc0634(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0b70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0b70 = FUN_140002ddd(FUN_146618aa7,uVar1,L"WaypointAttachmentStrategy_Migration");
  }
  return;
}



// FUNCTION 148cc06d4 FUN_148cc06d4 body=83 status=ok
// SIG undefined FUN_148cc06d4(void)

undefined1 FUN_148cc06d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1418443e8(param_2,param_3);
      FUN_148baede8(param_2 + 0x18,param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cc0750 FUN_148cc0750 body=59 status=ok
// SIG undefined FUN_148cc0750(void)

undefined8 FUN_148cc0750(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc0810 FUN_148cc0810 body=122 status=ok
// SIG undefined FUN_148cc0810(void)

undefined8 FUN_148cc0810(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a12064(param_2,param_3);
    FUN_140d02432(param_2 + 0xe0,param_3 + 0xe0);
    FUN_140d02432(param_2 + 0x130,param_3 + 0x130);
    *(undefined2 *)(param_2 + 0x180) = *(undefined2 *)(param_3 + 0x180);
    param_2 = param_2 + 0x188;
    param_3 = param_3 + 0x188;
  }
  return 1;
}



// FUNCTION 148cc08b2 FUN_148cc08b2 body=59 status=ok
// SIG undefined FUN_148cc08b2(void)

undefined8 FUN_148cc08b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc08fe FUN_148cc08fe body=54 status=ok
// SIG undefined FUN_148cc08fe(void)

void FUN_148cc08fe(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *param_2 = &PTR_FUN_14b49d1f0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x31) = 0;
  }
  return;
}



// FUNCTION 148cc0996 FUN_148cc0996 body=63 status=ok
// SIG undefined FUN_148cc0996(void)

undefined1 FUN_148cc0996(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc0abc(param_2,param_3);
    param_3 = param_3 + 0x3a0;
    param_2 = param_2 + 0x3a0;
  }
  return 1;
}



// FUNCTION 148cc09fe FUN_148cc09fe body=59 status=ok
// SIG undefined FUN_148cc09fe(void)

undefined8 FUN_148cc09fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc0a4a FUN_148cc0a4a body=40 status=ok
// SIG undefined FUN_148cc0a4a(void)

void FUN_148cc0a4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3a0) == '\x01') {
    FUN_14598cc7c(param_2);
    *(undefined1 *)(param_2 + 0x3a0) = 0;
  }
  return;
}



// FUNCTION 148cc0abc FUN_148cc0abc body=456 status=ok
// SIG undefined FUN_148cc0abc(void)

longlong FUN_148cc0abc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148a1386e();
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  uVar1 = *(undefined4 *)(param_2 + 0xe4);
  uVar2 = *(undefined4 *)(param_2 + 0xe8);
  uVar3 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  FUN_144a787a6(param_1 + 0xf0,param_2 + 0xf0);
  FUN_140d02432(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  FUN_140d02432(param_1 + 0x158,param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_2 + 0x1b0);
  FUN_140d02432(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_140d02432(param_1 + 0x208,param_2 + 0x208);
  FUN_140d02432(param_1 + 600,param_2 + 600);
  FUN_140d02432(param_1 + 0x2a8,param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  FUN_144a7bb84(param_1 + 0x308,param_2 + 0x308);
  FUN_144a82394(param_1 + 800,param_2 + 800);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  FUN_144a7bb84(param_1 + 0x338,param_2 + 0x338);
  FUN_144a82394(param_1 + 0x350,param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 0x358);
  if ((*(longlong *)(param_1 + 0x360) != *(longlong *)(param_2 + 0x360)) ||
     (*(int *)(param_1 + 0x368) != *(int *)(param_2 + 0x368))) {
    *(longlong *)(param_1 + 0x360) = *(longlong *)(param_2 + 0x360);
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x378);
  uVar1 = *(undefined4 *)(param_2 + 900);
  uVar2 = *(undefined4 *)(param_2 + 0x388);
  uVar3 = *(undefined4 *)(param_2 + 0x38c);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x380);
  *(undefined4 *)(param_1 + 900) = uVar1;
  *(undefined4 *)(param_1 + 0x388) = uVar2;
  *(undefined4 *)(param_1 + 0x38c) = uVar3;
  FUN_144a787a6(param_1 + 0x390,param_2 + 0x390);
  return param_1;
}



// FUNCTION 148cc0c86 FUN_148cc0c86 body=57 status=ok
// SIG undefined FUN_148cc0c86(void)

void FUN_148cc0c86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0bd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0bd0 = FUN_140002ddd(FUN_146618c63,uVar1,L"WeaponBehaviorDef_AtlasLock");
  }
  return;
}



// FUNCTION 148cc0cde FUN_148cc0cde body=63 status=ok
// SIG undefined FUN_148cc0cde(void)

undefined1 FUN_148cc0cde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc0e08(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148cc0d46 FUN_148cc0d46 body=59 status=ok
// SIG undefined FUN_148cc0d46(void)

undefined8 FUN_148cc0d46(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc0d92 FUN_148cc0d92 body=40 status=ok
// SIG undefined FUN_148cc0d92(void)

void FUN_148cc0d92(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1459df2b8(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148cc0e08 FUN_148cc0e08 body=152 status=ok
// SIG undefined FUN_148cc0e08(void)

longlong FUN_148cc0e08(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_1459a0a08(param_1 + 0x30,param_2 + 0x30);
  FUN_140d02432(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  FUN_145fced18(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 148cc0ea2 FUN_148cc0ea2 body=57 status=ok
// SIG undefined FUN_148cc0ea2(void)

void FUN_148cc0ea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0be8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0be8 = FUN_140002ddd(FUN_146618cf9,uVar1,L"WeaponBehaviorDef_Borg");
  }
  return;
}



// FUNCTION 148cc0f6a FUN_148cc0f6a body=76 status=ok
// SIG undefined FUN_148cc0f6a(void)

undefined8 FUN_148cc0f6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 8 + lVar2;
      *(undefined1 *)(lVar1 + -4) = *(undefined1 *)((undefined4 *)(param_3 + lVar2) + 1);
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_3 + lVar2);
      FUN_1470c5506();
      lVar2 = lVar2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cc0fde FUN_148cc0fde body=59 status=ok
// SIG undefined FUN_148cc0fde(void)

undefined8 FUN_148cc0fde(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc1108 FUN_148cc1108 body=59 status=ok
// SIG undefined FUN_148cc1108(void)

undefined8 FUN_148cc1108(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc11c8 FUN_148cc11c8 body=63 status=ok
// SIG undefined FUN_148cc11c8(void)

undefined1 FUN_148cc11c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc12e4(param_2,param_3);
    param_3 = param_3 + 0x2c8;
    param_2 = param_2 + 0x2c8;
  }
  return 1;
}



// FUNCTION 148cc1230 FUN_148cc1230 body=59 status=ok
// SIG undefined FUN_148cc1230(void)

undefined8 FUN_148cc1230(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc127c FUN_148cc127c body=38 status=ok
// SIG undefined FUN_148cc127c(void)

void FUN_148cc127c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c8) == '\x01') {
    FUN_140b4c5f8(param_2);
    *(undefined1 *)(param_2 + 0x2c8) = 0;
  }
  return;
}



// FUNCTION 148cc12e4 FUN_148cc12e4 body=448 status=ok
// SIG undefined FUN_148cc12e4(void)

longlong FUN_148cc12e4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_140d02432(param_1 + 0x30,param_2 + 0x30);
  FUN_140d02432(param_1 + 0x80,param_2 + 0x80);
  FUN_140d02432(param_1 + 0xd0,param_2 + 0xd0);
  FUN_140d02432(param_1 + 0x120,param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  FUN_140d02432(param_1 + 0x178,param_2 + 0x178);
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_2 + 0x1c8);
  FUN_140d02432(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  FUN_148cc14a4(param_1 + 0x230,param_2 + 0x230);
  FUN_148cc14f4(param_1 + 0x240,param_2 + 0x240);
  FUN_148cc14f4(param_1 + 0x250,param_2 + 0x250);
  if ((*(longlong *)(param_1 + 0x260) != *(longlong *)(param_2 + 0x260)) ||
     (*(int *)(param_1 + 0x268) != *(int *)(param_2 + 0x268))) {
    *(longlong *)(param_1 + 0x260) = *(longlong *)(param_2 + 0x260);
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  if ((*(longlong *)(param_1 + 0x278) != *(longlong *)(param_2 + 0x278)) ||
     (*(int *)(param_1 + 0x280) != *(int *)(param_2 + 0x280))) {
    *(longlong *)(param_1 + 0x278) = *(longlong *)(param_2 + 0x278);
    *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x295) = *(undefined8 *)(param_2 + 0x295);
  *(undefined8 *)(param_1 + 0x290) = uVar1;
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x2a0);
  uVar2 = *(undefined4 *)(param_2 + 0x2ac);
  uVar3 = *(undefined4 *)(param_2 + 0x2b0);
  uVar4 = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2ac) = uVar2;
  *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  *(undefined4 *)(param_1 + 0x2b4) = uVar4;
  FUN_144a787a6(param_1 + 0x2b8,param_2 + 0x2b8);
  return param_1;
}



// FUNCTION 148cc14a4 FUN_148cc14a4 body=79 status=ok
// SIG undefined FUN_148cc14a4(void)

undefined8 * FUN_148cc14a4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148cc154c(param_1,iVar1);
      FUN_148cc15bb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148cc14f4 FUN_148cc14f4 body=88 status=ok
// SIG undefined FUN_148cc14f4(void)

undefined8 * FUN_148cc14f4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148cc1650(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148cc154c FUN_148cc154c body=111 status=ok
// SIG undefined FUN_148cc154c(void)

void FUN_148cc154c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148cc15bb FUN_148cc15bb body=149 status=ok
// SIG undefined FUN_148cc15bb(void)

void FUN_148cc15bb(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined1 *)(param_1 + -0x2c) = *(undefined1 *)(param_2 + -0x2c);
      *(undefined4 *)(param_1 + -0x30) = *(undefined4 *)(param_2 + -0x30);
      *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(param_2 + -0x28);
      *(undefined4 *)(param_1 + -0x20) = *(undefined4 *)(param_2 + -0x20);
      *(undefined8 *)(param_1 + -0x18) = 0;
      *(undefined1 *)(param_1 + -0x10) = *(undefined1 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_144a7f96e(param_1,param_2);
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      param_1 = param_1 + 0x78;
      param_2 = param_2 + 0x78;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148cc1650 FUN_148cc1650 body=98 status=ok
// SIG undefined FUN_148cc1650(void)

void FUN_148cc1650(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148cc16d2 FUN_148cc16d2 body=63 status=ok
// SIG undefined FUN_148cc16d2(void)

undefined1 FUN_148cc16d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc1812(param_2,param_3);
    param_3 = param_3 + 0x340;
    param_2 = param_2 + 0x340;
  }
  return 1;
}



// FUNCTION 148cc173a FUN_148cc173a body=59 status=ok
// SIG undefined FUN_148cc173a(void)

undefined8 FUN_148cc173a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc1786 FUN_148cc1786 body=65 status=ok
// SIG undefined FUN_148cc1786(void)

void FUN_148cc1786(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *param_2 = &PTR_FUN_14b945cf0;
    if (param_2[0x65] != 0) {
      FUN_1400020a8();
    }
    FUN_140ad8262(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148cc1812 FUN_148cc1812 body=200 status=ok
// SIG undefined FUN_148cc1812(void)

longlong FUN_148cc1812(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_148a123ca();
  *(undefined2 *)(param_1 + 0x2dc) = *(undefined2 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  if ((*(longlong *)(param_1 + 0x2e0) != *(longlong *)(param_2 + 0x2e0)) ||
     (*(int *)(param_1 + 0x2e8) != *(int *)(param_2 + 0x2e8))) {
    *(longlong *)(param_1 + 0x2e0) = *(longlong *)(param_2 + 0x2e0);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
    *(undefined8 *)(param_1 + 0x2f0) = 0;
  }
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  uVar4 = *(undefined8 *)(param_2 + 0x300);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined8 *)(param_1 + 0x300) = uVar4;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  uVar1 = *(undefined4 *)(param_2 + 0x31c);
  uVar2 = *(undefined4 *)(param_2 + 800);
  uVar3 = *(undefined4 *)(param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)(param_1 + 0x31c) = uVar1;
  *(undefined4 *)(param_1 + 800) = uVar2;
  *(undefined4 *)(param_1 + 0x324) = uVar3;
  FUN_144a787a6(param_1 + 0x328,param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  return param_1;
}



// FUNCTION 148cc18dc FUN_148cc18dc body=57 status=ok
// SIG undefined FUN_148cc18dc(void)

void FUN_148cc18dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0ca8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0ca8 = FUN_140002ddd(FUN_146619011,uVar1,L"WeaponBehaviorDef_FireBeam");
  }
  return;
}



// FUNCTION 148cc1934 FUN_148cc1934 body=63 status=ok
// SIG undefined FUN_148cc1934(void)

undefined1 FUN_148cc1934(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc1bf2(param_2,param_3);
    param_3 = param_3 + 0x3f0;
    param_2 = param_2 + 0x3f0;
  }
  return 1;
}



// FUNCTION 148cc199c FUN_148cc199c body=59 status=ok
// SIG undefined FUN_148cc199c(void)

undefined8 FUN_148cc199c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc19e8 FUN_148cc19e8 body=65 status=ok
// SIG undefined FUN_148cc19e8(void)

void FUN_148cc19e8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x7e) == '\x01') {
    *param_2 = &PTR_FUN_14b9444d0;
    if (param_2[0x69] != 0) {
      FUN_1400020a8();
    }
    FUN_140ad8262(param_2);
    *(undefined1 *)(param_2 + 0x7e) = 0;
  }
  return;
}



// FUNCTION 148cc1a6c FUN_148cc1a6c body=296 status=ok
// SIG undefined FUN_148cc1a6c(void)

undefined8 * FUN_148cc1a6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140d75f9e();
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2dc) = 1;
  *param_1 = &PTR_FUN_14b9444d0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0x34001;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x4000;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x3f800000;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x359) = 1;
  *(undefined2 *)((longlong)param_1 + 0x35c) = 1;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  param_1[0x71] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x6f] = DAT_14c8464f8;
  param_1[0x70] = uVar1;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x75] = DAT_14c8464e0;
  param_1[0x76] = uVar1;
  param_1[0x77] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  param_1[0x7b] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x79] = DAT_14c8464f8;
  param_1[0x7a] = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  return param_1;
}



// FUNCTION 148cc1b94 FUN_148cc1b94 body=38 status=ok
// SIG undefined FUN_148cc1b94(void)

undefined8 FUN_148cc1b94(undefined8 param_1,int param_2)

{
  FUN_140ad8262();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc1bba FUN_148cc1bba body=55 status=ok
// SIG undefined FUN_148cc1bba(void)

void FUN_148cc1bba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0d08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0d08 = FUN_140002ddd(FUN_146619040,uVar1,L"WeaponBehaviorDef_OakFire");
  }
  return;
}



// FUNCTION 148cc1bf2 FUN_148cc1bf2 body=277 status=ok
// SIG undefined FUN_148cc1bf2(void)

longlong FUN_148cc1bf2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148a123ca();
  *(undefined2 *)(param_1 + 0x2dc) = *(undefined2 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  if ((*(longlong *)(param_1 + 0x2e0) != *(longlong *)(param_2 + 0x2e0)) ||
     (*(int *)(param_1 + 0x2e8) != *(int *)(param_2 + 0x2e8))) {
    *(longlong *)(param_1 + 0x2e0) = *(longlong *)(param_2 + 0x2e0);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
    *(undefined8 *)(param_1 + 0x2f0) = 0;
  }
  if ((*(longlong *)(param_1 + 0x2f8) != *(longlong *)(param_2 + 0x2f8)) ||
     (*(int *)(param_1 + 0x300) != *(int *)(param_2 + 0x300))) {
    *(longlong *)(param_1 + 0x2f8) = *(longlong *)(param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  FUN_148cc1d08(param_1 + 0x318,param_2 + 0x318);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x330);
  uVar1 = *(undefined4 *)(param_2 + 0x33c);
  uVar2 = *(undefined4 *)(param_2 + 0x340);
  uVar3 = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = uVar1;
  *(undefined4 *)(param_1 + 0x340) = uVar2;
  *(undefined4 *)(param_1 + 0x344) = uVar3;
  FUN_144a787a6(param_1 + 0x348,param_2 + 0x348);
  memcpy((void *)(param_1 + 0x358),(void *)(param_2 + 0x358),0x98);
  return param_1;
}



// FUNCTION 148cc1d08 FUN_148cc1d08 body=84 status=ok
// SIG undefined FUN_148cc1d08(void)

longlong * FUN_148cc1d08(longlong *param_1,longlong *param_2)

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



// FUNCTION 148cc1d5e FUN_148cc1d5e body=67 status=ok
// SIG undefined FUN_148cc1d5e(void)

void FUN_148cc1d5e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x2e0);
  FUN_140d75f9e(param_2);
  *param_2 = &PTR_FUN_14b944500;
  *(undefined4 *)(param_2 + 0x5b) = 0;
  *(undefined2 *)((longlong)param_2 + 0x2dc) = 1;
  return;
}



// FUNCTION 148cc1da2 FUN_148cc1da2 body=51 status=ok
// SIG undefined FUN_148cc1da2(void)

void FUN_148cc1da2(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d75f9e(param_2);
  *param_2 = &PTR_FUN_14b944500;
  *(undefined4 *)(param_2 + 0x5b) = 0;
  *(undefined2 *)((longlong)param_2 + 0x2dc) = 1;
  return;
}



// FUNCTION 148cc1dfa FUN_148cc1dfa body=88 status=ok
// SIG undefined FUN_148cc1dfa(void)

undefined8 FUN_148cc1dfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a123ca(param_2,param_3);
    *(undefined4 *)(param_2 + 0x2d8) = *(undefined4 *)(param_3 + 0x2d8);
    *(undefined2 *)(param_2 + 0x2dc) = *(undefined2 *)(param_3 + 0x2dc);
    param_2 = param_2 + 0x2e0;
    param_3 = param_3 + 0x2e0;
  }
  return 1;
}



// FUNCTION 148cc1e7a FUN_148cc1e7a body=59 status=ok
// SIG undefined FUN_148cc1e7a(void)

undefined8 FUN_148cc1e7a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc1ec6 FUN_148cc1ec6 body=38 status=ok
// SIG undefined FUN_148cc1ec6(void)

void FUN_148cc1ec6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    FUN_140ad8262(param_2);
    *(undefined1 *)(param_2 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 148cc1f68 FUN_148cc1f68 body=63 status=ok
// SIG undefined FUN_148cc1f68(void)

undefined1 FUN_148cc1f68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc20a0(param_2,param_3);
    param_3 = param_3 + 0x2c0;
    param_2 = param_2 + 0x2c0;
  }
  return 1;
}



// FUNCTION 148cc1fd0 FUN_148cc1fd0 body=59 status=ok
// SIG undefined FUN_148cc1fd0(void)

undefined8 FUN_148cc1fd0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc201c FUN_148cc201c body=54 status=ok
// SIG undefined FUN_148cc201c(void)

void FUN_148cc201c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *param_2 = &PTR_FUN_14b49d1f0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148cc20a0 FUN_148cc20a0 body=313 status=ok
// SIG undefined FUN_148cc20a0(void)

longlong FUN_148cc20a0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  FUN_140d02432(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  FUN_140d02432(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  FUN_140d02432(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
  FUN_140d02432(param_1 + 0x160,param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_2 + 0x1b8);
  FUN_140d02432(param_1 + 0x1c0,param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_2 + 0x218);
  FUN_140d02432(param_1 + 0x220,param_2 + 0x220);
  FUN_140d02432(param_1 + 0x270,param_2 + 0x270);
  return param_1;
}



// FUNCTION 148cc220e FUN_148cc220e body=104 status=ok
// SIG undefined FUN_148cc220e(void)

undefined1 FUN_148cc220e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_148a1386e(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    uVar4 = *(undefined4 *)(param_3 + 0xe8);
    uVar5 = *(undefined4 *)(param_3 + 0xec);
    uVar6 = *(undefined4 *)(param_3 + 0xf0);
    uVar7 = *(undefined4 *)(param_3 + 0xf4);
    uVar8 = *(undefined4 *)(param_3 + 0xf8);
    uVar9 = *(undefined4 *)(param_3 + 0xfc);
    uVar10 = *(undefined4 *)(param_3 + 0x100);
    uVar11 = *(undefined4 *)(param_3 + 0x104);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    *(undefined4 *)(param_2 + 0xe8) = uVar4;
    *(undefined4 *)(param_2 + 0xec) = uVar5;
    *(undefined4 *)(param_2 + 0xf0) = uVar6;
    *(undefined4 *)(param_2 + 0xf4) = uVar7;
    *(undefined4 *)(param_2 + 0xf8) = uVar8;
    *(undefined4 *)(param_2 + 0xfc) = uVar9;
    *(undefined4 *)(param_2 + 0x100) = uVar10;
    *(undefined4 *)(param_2 + 0x104) = uVar11;
    param_2 = param_2 + 0x108;
    param_3 = param_3 + 0x108;
  }
  return 1;
}



// FUNCTION 148cc229e FUN_148cc229e body=59 status=ok
// SIG undefined FUN_148cc229e(void)

undefined8 FUN_148cc229e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc22ea FUN_148cc22ea body=38 status=ok
// SIG undefined FUN_148cc22ea(void)

void FUN_148cc22ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_140cf001e(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 148cc239c FUN_148cc239c body=54 status=ok
// SIG undefined FUN_148cc239c(void)

undefined1 FUN_148cc239c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc248e(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148cc23fa FUN_148cc23fa body=59 status=ok
// SIG undefined FUN_148cc23fa(void)

undefined8 FUN_148cc23fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc248e FUN_148cc248e body=87 status=ok
// SIG undefined FUN_148cc248e(void)

void FUN_148cc248e(longlong *param_1,longlong *param_2)

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
  *(int *)(param_1 + 6) = (int)param_2[6];
  return;
}



// FUNCTION 148cc2504 FUN_148cc2504 body=63 status=ok
// SIG undefined FUN_148cc2504(void)

undefined1 FUN_148cc2504(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc2802(param_2,param_3);
    param_3 = param_3 + 0x480;
    param_2 = param_2 + 0x480;
  }
  return 1;
}



// FUNCTION 148cc256c FUN_148cc256c body=59 status=ok
// SIG undefined FUN_148cc256c(void)

undefined8 FUN_148cc256c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc25b8 FUN_148cc25b8 body=38 status=ok
// SIG undefined FUN_148cc25b8(void)

void FUN_148cc25b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x480) == '\x01') {
    FUN_140f1e924(param_2);
    *(undefined1 *)(param_2 + 0x480) = 0;
  }
  return;
}



// FUNCTION 148cc2620 FUN_148cc2620 body=481 status=ok
// SIG undefined FUN_148cc2620(void)

undefined8 * FUN_148cc2620(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_140d75f9e();
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2dc) = 1;
  *param_1 = &PTR_FUN_14b9444d0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0x34001;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x4000;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x3f800000;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x359) = 1;
  *(undefined2 *)((longlong)param_1 + 0x35c) = 1;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  param_1[0x71] = DAT_14c846508;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  param_1[0x6f] = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  param_1[0x70] = uVar1;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x75] = DAT_14c8464e0;
  param_1[0x76] = uVar1;
  param_1[0x77] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  param_1[0x7b] = DAT_14c846508;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x79) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = uVar2;
  *(undefined4 *)(param_1 + 0x7a) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = uVar4;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *param_1 = &PTR_FUN_14b945360;
  *(undefined2 *)(param_1 + 0x7e) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x3f2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x402) = 1;
  *(undefined2 *)((longlong)param_1 + 0x406) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0x34001;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0x4000;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0x3f800000;
  FUN_1405c5fa2();
  param_1[0x89] = &DAT_14cb769e8;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = &PTR_FUN_14b0394b0;
  FUN_1405c5fa2();
  param_1[0x8d] = &DAT_14cb769e8;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x8c] = &PTR_FUN_14b0394b0;
  return param_1;
}



// FUNCTION 148cc2802 FUN_148cc2802 body=109 status=ok
// SIG undefined FUN_148cc2802(void)

longlong FUN_148cc2802(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148cc1bf2();
  uVar1 = *(undefined4 *)(param_2 + 0x3f4);
  uVar2 = *(undefined4 *)(param_2 + 0x3f8);
  uVar3 = *(undefined4 *)(param_2 + 0x3fc);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f4) = uVar1;
  *(undefined4 *)(param_1 + 0x3f8) = uVar2;
  *(undefined4 *)(param_1 + 0x3fc) = uVar3;
  *(undefined8 *)(param_1 + 0x400) = *(undefined8 *)(param_2 + 0x400);
  FUN_148cc248e(param_1 + 0x408,param_2 + 0x408);
  FUN_140115bdc(param_1 + 0x440,param_2 + 0x440);
  FUN_140115bdc(param_1 + 0x460,param_2 + 0x460);
  return param_1;
}



// FUNCTION 148cc288e FUN_148cc288e body=63 status=ok
// SIG undefined FUN_148cc288e(void)

undefined1 FUN_148cc288e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc2b18(param_2,param_3);
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
  }
  return 1;
}



// FUNCTION 148cc28f6 FUN_148cc28f6 body=59 status=ok
// SIG undefined FUN_148cc28f6(void)

undefined8 FUN_148cc28f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc2942 FUN_148cc2942 body=38 status=ok
// SIG undefined FUN_148cc2942(void)

void FUN_148cc2942(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_148cc2ad0(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 148cc2ad0 FUN_148cc2ad0 body=72 status=ok
// SIG undefined FUN_148cc2ad0(void)

void FUN_148cc2ad0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9456c0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148cc2b18 FUN_148cc2b18 body=192 status=ok
// SIG undefined FUN_148cc2b18(void)

longlong FUN_148cc2b18(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_140d02432(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  FUN_140d02432(param_1 + 0x88,param_2 + 0x88);
  FUN_140d02432(param_1 + 0xd8,param_2 + 0xd8);
  FUN_140d02432(param_1 + 0x128,param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(param_2 + 0x178);
  FUN_140d02432(param_1 + 0x180,param_2 + 0x180);
  uVar1 = *(undefined4 *)(param_2 + 0x1d4);
  uVar2 = *(undefined4 *)(param_2 + 0x1d8);
  uVar3 = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
  *(undefined4 *)(param_1 + 0x1d8) = uVar2;
  *(undefined4 *)(param_1 + 0x1dc) = uVar3;
  FUN_1406fa324(param_1 + 0x1e0,param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 148cc2bf4 FUN_148cc2bf4 body=238 status=ok
// SIG undefined FUN_148cc2bf4(void)

void FUN_148cc2bf4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145bfcfd4(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc2d6e FUN_148cc2d6e body=197 status=ok
// SIG undefined FUN_148cc2d6e(void)

void FUN_148cc2d6e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc0fd8) {
    FUN_144b3d300(&DAT_14cbc0fd8);
    if (DAT_14cbc0fd8 == -1) {
      FUN_1446f470e(&DAT_14cbc0fd0,L"Energy",1);
      _Init_thread_footer(&DAT_14cbc0fd8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc0fe4) {
    FUN_144b3d300(&DAT_14cbc0fe4);
    if (DAT_14cbc0fe4 == -1) {
      FUN_1446f470e(&DAT_14cbc0fdc,L"Kills",1);
      _Init_thread_footer(&DAT_14cbc0fe4);
      return;
    }
  }
  return;
}



// FUNCTION 148cc2e52 FUN_148cc2e52 body=238 status=ok
// SIG undefined FUN_148cc2e52(void)

void FUN_148cc2e52(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_141131d4c(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc2f42 FUN_148cc2f42 body=238 status=ok
// SIG undefined FUN_148cc2f42(void)

void FUN_148cc2f42(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_141131d4c(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc3056 FUN_148cc3056 body=151 status=ok
// SIG undefined FUN_148cc3056(void)

void FUN_148cc3056(undefined8 param_1,longlong param_2)

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
  FUN_148f15236(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc315a FUN_148cc315a body=45 status=ok
// SIG undefined FUN_148cc315a(void)

longlong FUN_148cc315a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14587f9ac(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc31ca FUN_148cc31ca body=54 status=ok
// SIG undefined FUN_148cc31ca(void)

undefined1 FUN_148cc31ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc32b8(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148cc3228 FUN_148cc3228 body=59 status=ok
// SIG undefined FUN_148cc3228(void)

undefined8 FUN_148cc3228(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc32b8 FUN_148cc32b8 body=107 status=ok
// SIG undefined FUN_148cc32b8(void)

undefined1 * FUN_148cc32b8(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  if ((*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  FUN_14065c7a4(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 148cc3324 FUN_148cc3324 body=52 status=ok
// SIG undefined FUN_148cc3324(void)

void FUN_148cc3324(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148cc338a FUN_148cc338a body=113 status=ok
// SIG undefined FUN_148cc338a(void)

undefined8 FUN_148cc338a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 0x20 + lVar3;
      *(undefined4 *)(lVar2 + -0x18) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x10) = puVar1[2];
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 3);
      FUN_144a7bb84();
      FUN_144a82394(param_2 + lVar3 + 0x38,param_3 + lVar3 + 0x38);
      lVar3 = lVar3 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cc3424 FUN_148cc3424 body=59 status=ok
// SIG undefined FUN_148cc3424(void)

undefined8 FUN_148cc3424(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc346a FUN_148cc346a body=51 status=ok
// SIG undefined FUN_148cc346a(void)

void FUN_148cc346a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if ((*(longlong *)(param_2 + 0x38) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x50));
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148cc3500 FUN_148cc3500 body=63 status=ok
// SIG undefined FUN_148cc3500(void)

undefined1 FUN_148cc3500(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc361c(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 148cc3568 FUN_148cc3568 body=59 status=ok
// SIG undefined FUN_148cc3568(void)

undefined8 FUN_148cc3568(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc35b4 FUN_148cc35b4 body=38 status=ok
// SIG undefined FUN_148cc35b4(void)

void FUN_148cc35b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_140d72f0e(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 148cc361c FUN_148cc361c body=368 status=ok
// SIG undefined FUN_148cc361c(void)

longlong FUN_148cc361c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  if ((*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  FUN_140d02432(param_1 + 0x48,param_2 + 0x48);
  FUN_140d02432(param_1 + 0x98,param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  FUN_1459a0a08(param_1 + 0xf0,param_2 + 0xf0);
  if ((*(longlong *)(param_1 + 0x100) != *(longlong *)(param_2 + 0x100)) ||
     (*(int *)(param_1 + 0x108) != *(int *)(param_2 + 0x108))) {
    *(longlong *)(param_1 + 0x100) = *(longlong *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  uVar2 = *(undefined4 *)(param_2 + 0x124);
  uVar3 = *(undefined4 *)(param_2 + 0x128);
  uVar4 = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  *(undefined4 *)(param_1 + 0x128) = uVar3;
  *(undefined4 *)(param_1 + 300) = uVar4;
  FUN_144a787a6(param_1 + 0x130,param_2 + 0x130);
  uVar1 = *(undefined8 *)(param_2 + 0x147);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x147) = uVar1;
  FUN_14065c7a4(param_1 + 0x150,param_2 + 0x150);
  FUN_148cc378c(param_1 + 0x160,param_2 + 0x160);
  FUN_148cc378c(param_1 + 0x170,param_2 + 0x170);
  uVar2 = *(undefined4 *)(param_2 + 0x184);
  uVar3 = *(undefined4 *)(param_2 + 0x188);
  uVar4 = *(undefined4 *)(param_2 + 0x18c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x188) = uVar3;
  *(undefined4 *)(param_1 + 0x18c) = uVar4;
  FUN_148cc394e(param_1 + 400,param_2 + 400);
  return param_1;
}



// FUNCTION 148cc378c FUN_148cc378c body=93 status=ok
// SIG undefined FUN_148cc378c(void)

undefined8 * FUN_148cc378c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d72feb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148cc37ea(param_1,iVar1);
      FUN_148cc3859(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148cc37ea FUN_148cc37ea body=111 status=ok
// SIG undefined FUN_148cc37ea(void)

void FUN_148cc37ea(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148cc3859 FUN_148cc3859 body=52 status=ok
// SIG undefined FUN_148cc3859(void)

void FUN_148cc3859(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148cc388e(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148cc388e FUN_148cc388e body=192 status=ok
// SIG undefined FUN_148cc388e(void)

undefined1 * FUN_148cc388e(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    FUN_1405bd402(param_1 + 0x48,iVar1,0);
    FUN_1405bd2e2(*(undefined8 *)(param_1 + 0x48),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148cc394e FUN_148cc394e body=122 status=ok
// SIG undefined FUN_148cc394e(void)

longlong FUN_148cc394e(longlong param_1,longlong param_2)

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
    FUN_148cc39c8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148cc39c8 FUN_148cc39c8 body=289 status=ok
// SIG undefined FUN_148cc39c8(void)

longlong * FUN_148cc39c8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140d73064(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1406fba42(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar3 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined1 *)(lVar3 + lVar5) = *(undefined1 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar3 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          *(undefined4 *)(lVar3 + 0x10 + lVar5) = *(undefined4 *)(lVar2 + 0x10 + lVar5);
          FUN_1412bd664(lVar3 + 0x18 + lVar5,lVar2 + 0x18 + lVar5);
          *(undefined8 *)(lVar3 + 0x48 + lVar5) = *(undefined8 *)(lVar2 + 0x48 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x50;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148cc3b08 FUN_148cc3b08 body=63 status=ok
// SIG undefined FUN_148cc3b08(void)

undefined1 FUN_148cc3b08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc3c24(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 148cc3b70 FUN_148cc3b70 body=59 status=ok
// SIG undefined FUN_148cc3b70(void)

undefined8 FUN_148cc3b70(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc3bbc FUN_148cc3bbc body=38 status=ok
// SIG undefined FUN_148cc3bbc(void)

void FUN_148cc3bbc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_140cefe9a(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 148cc3c24 FUN_148cc3c24 body=359 status=ok
// SIG undefined FUN_148cc3c24(void)

longlong FUN_148cc3c24(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  FUN_148a1386e();
  uVar9 = *(undefined8 *)(param_2 + 0xe0);
  uVar1 = *(undefined4 *)(param_2 + 0xe8);
  uVar2 = *(undefined4 *)(param_2 + 0xec);
  uVar3 = *(undefined4 *)(param_2 + 0xf0);
  uVar4 = *(undefined4 *)(param_2 + 0xf4);
  uVar5 = *(undefined4 *)(param_2 + 0xf8);
  uVar6 = *(undefined4 *)(param_2 + 0xfc);
  uVar7 = *(undefined4 *)(param_2 + 0x100);
  uVar8 = *(undefined4 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar9;
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  *(undefined4 *)(param_1 + 0xf0) = uVar3;
  *(undefined4 *)(param_1 + 0xf4) = uVar4;
  *(undefined4 *)(param_1 + 0xf8) = uVar5;
  *(undefined4 *)(param_1 + 0xfc) = uVar6;
  *(undefined4 *)(param_1 + 0x100) = uVar7;
  *(undefined4 *)(param_1 + 0x104) = uVar8;
  *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) & 0xfe | *(byte *)(param_2 + 0x108) & 1;
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  uVar1 = *(undefined4 *)(param_2 + 0x11c);
  uVar2 = *(undefined4 *)(param_2 + 0x120);
  uVar3 = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  FUN_144a787a6(param_1 + 0x128,param_2 + 0x128);
  uVar9 = *(undefined8 *)(param_2 + 0x140);
  uVar1 = *(undefined4 *)(param_2 + 0x148);
  uVar2 = *(undefined4 *)(param_2 + 0x14c);
  uVar3 = *(undefined4 *)(param_2 + 0x150);
  uVar4 = *(undefined4 *)(param_2 + 0x154);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = uVar9;
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  *(undefined4 *)(param_1 + 0x150) = uVar3;
  *(undefined4 *)(param_1 + 0x154) = uVar4;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  uVar1 = *(undefined4 *)(param_2 + 0x16c);
  uVar2 = *(undefined4 *)(param_2 + 0x170);
  uVar3 = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  *(undefined4 *)(param_1 + 0x174) = uVar3;
  FUN_144a787a6(param_1 + 0x178,param_2 + 0x178);
  uVar9 = *(undefined8 *)(param_2 + 400);
  uVar1 = *(undefined4 *)(param_2 + 0x198);
  uVar2 = *(undefined4 *)(param_2 + 0x19c);
  uVar3 = *(undefined4 *)(param_2 + 0x1a0);
  uVar4 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 400) = uVar9;
  *(undefined4 *)(param_1 + 0x198) = uVar1;
  *(undefined4 *)(param_1 + 0x19c) = uVar2;
  *(undefined4 *)(param_1 + 0x1a0) = uVar3;
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  uVar1 = *(undefined4 *)(param_2 + 0x1bc);
  uVar2 = *(undefined4 *)(param_2 + 0x1c0);
  uVar3 = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  *(undefined4 *)(param_1 + 0x1c4) = uVar3;
  FUN_144a787a6(param_1 + 0x1c8,param_2 + 0x1c8);
  uVar1 = *(undefined4 *)(param_2 + 0x1dc);
  uVar2 = *(undefined4 *)(param_2 + 0x1e0);
  uVar3 = *(undefined4 *)(param_2 + 0x1e4);
  uVar4 = *(undefined4 *)(param_2 + 0x1e4);
  uVar5 = *(undefined4 *)(param_2 + 0x1e8);
  uVar6 = *(undefined4 *)(param_2 + 0x1ec);
  uVar7 = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1dc) = uVar1;
  *(undefined4 *)(param_1 + 0x1e0) = uVar2;
  *(undefined4 *)(param_1 + 0x1e4) = uVar3;
  *(undefined4 *)(param_1 + 0x1e4) = uVar4;
  *(undefined4 *)(param_1 + 0x1e8) = uVar5;
  *(undefined4 *)(param_1 + 0x1ec) = uVar6;
  *(undefined4 *)(param_1 + 0x1f0) = uVar7;
  FUN_14115e0ba(param_1 + 0x1f8,param_2 + 0x1f8);
  return param_1;
}



// FUNCTION 148cc3dde FUN_148cc3dde body=94 status=ok
// SIG undefined FUN_148cc3dde(void)

undefined8 FUN_148cc3dde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x19);
      uVar2 = *(undefined4 *)(param_3 + 0x1d);
      uVar3 = *(undefined4 *)(param_3 + 0x21);
      uVar4 = *(undefined4 *)(param_3 + 0x25);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x19) = uVar1;
      *(undefined4 *)(param_2 + 0x1d) = uVar2;
      *(undefined4 *)(param_2 + 0x21) = uVar3;
      *(undefined4 *)(param_2 + 0x25) = uVar4;
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cc3e64 FUN_148cc3e64 body=59 status=ok
// SIG undefined FUN_148cc3e64(void)

undefined8 FUN_148cc3e64(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc3eaa FUN_148cc3eaa body=48 status=ok
// SIG undefined FUN_148cc3eaa(void)

void FUN_148cc3eaa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b49d1f0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 148cc3f94 FUN_148cc3f94 body=83 status=ok
// SIG undefined FUN_148cc3f94(void)

undefined1 FUN_148cc3f94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1418443e8(param_2,param_3);
      FUN_1401f3db8(param_2 + 0x18,param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cc4010 FUN_148cc4010 body=59 status=ok
// SIG undefined FUN_148cc4010(void)

undefined8 FUN_148cc4010(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc4056 FUN_148cc4056 body=34 status=ok
// SIG undefined FUN_148cc4056(void)

void FUN_148cc4056(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_148cc4130(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148cc40c6 FUN_148cc40c6 body=38 status=ok
// SIG undefined FUN_148cc40c6(void)

undefined8 FUN_148cc40c6(undefined8 param_1,int param_2)

{
  FUN_148cc4130();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc40ec FUN_148cc40ec body=55 status=ok
// SIG undefined FUN_148cc40ec(void)

void FUN_148cc40ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1250 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1250 = FUN_140002ddd(FUN_14661ad49,uVar1,L"WeaponBorgAugmentAspect");
  }
  return;
}



// FUNCTION 148cc4130 FUN_148cc4130 body=66 status=ok
// SIG undefined FUN_148cc4130(void)

void FUN_148cc4130(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b94d420;
  plVar3 = (longlong *)param_1[7];
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
                    /* WARNING: Could not recover jumptable at 0x000148cc4167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cc41ce FUN_148cc41ce body=59 status=ok
// SIG undefined FUN_148cc41ce(void)

undefined8 FUN_148cc41ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc426e FUN_148cc426e body=55 status=ok
// SIG undefined FUN_148cc426e(void)

void FUN_148cc426e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1268 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1268 = FUN_140002ddd(FUN_14661addf,uVar1,L"WeaponChargePercentValueResolver");
  }
  return;
}



// FUNCTION 148cc4344 FUN_148cc4344 body=59 status=ok
// SIG undefined FUN_148cc4344(void)

undefined8 FUN_148cc4344(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc43e4 FUN_148cc43e4 body=55 status=ok
// SIG undefined FUN_148cc43e4(void)

void FUN_148cc43e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1280 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1280 = FUN_140002ddd(FUN_14661ae75,uVar1,L"WeaponChargeStateValueResolver");
  }
  return;
}



// FUNCTION 148cc4434 FUN_148cc4434 body=81 status=ok
// SIG undefined FUN_148cc4434(void)

void FUN_148cc4434(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b9510b0;
  param_2[3] = 0x3e4ccccd00000000;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0x4fc71eb4;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



// FUNCTION 148cc449c FUN_148cc449c body=54 status=ok
// SIG undefined FUN_148cc449c(void)

undefined1 FUN_148cc449c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc45b2(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148cc44fa FUN_148cc44fa body=59 status=ok
// SIG undefined FUN_148cc44fa(void)

undefined8 FUN_148cc44fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc4540 FUN_148cc4540 body=32 status=ok
// SIG undefined FUN_148cc4540(void)

void FUN_148cc4540(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_141108dd0(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148cc45b2 FUN_148cc45b2 body=95 status=ok
// SIG undefined FUN_148cc45b2(void)

longlong FUN_148cc45b2(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_14065c7a4(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 148cc4630 FUN_148cc4630 body=63 status=ok
// SIG undefined FUN_148cc4630(void)

undefined1 FUN_148cc4630(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc475a(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148cc4698 FUN_148cc4698 body=59 status=ok
// SIG undefined FUN_148cc4698(void)

undefined8 FUN_148cc4698(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc46e4 FUN_148cc46e4 body=40 status=ok
// SIG undefined FUN_148cc46e4(void)

void FUN_148cc46e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_1459d0be2(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148cc475a FUN_148cc475a body=200 status=ok
// SIG undefined FUN_148cc475a(void)

longlong FUN_148cc475a(longlong param_1,longlong param_2)

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
  
  FUN_148cc45b2();
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  uVar2 = *(undefined4 *)(param_2 + 0x74);
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  uVar5 = *(undefined4 *)(param_2 + 0x80);
  uVar6 = *(undefined4 *)(param_2 + 0x84);
  uVar7 = *(undefined4 *)(param_2 + 0x88);
  uVar8 = *(undefined4 *)(param_2 + 0x8c);
  uVar9 = *(undefined4 *)(param_2 + 0x94);
  uVar10 = *(undefined4 *)(param_2 + 0x98);
  uVar11 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar9;
  *(undefined4 *)(param_1 + 0x98) = uVar10;
  *(undefined4 *)(param_1 + 0x9c) = uVar11;
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  *(undefined4 *)(param_1 + 0x84) = uVar6;
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  *(undefined4 *)(param_1 + 0x8c) = uVar8;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  if ((*(longlong *)(param_1 + 0xa8) != *(longlong *)(param_2 + 0xa8)) ||
     (*(int *)(param_1 + 0xb0) != *(int *)(param_2 + 0xb0))) {
    *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  FUN_140115bdc(param_1 + 200,param_2 + 200);
  return param_1;
}



// FUNCTION 148cc4842 FUN_148cc4842 body=63 status=ok
// SIG undefined FUN_148cc4842(void)

undefined1 FUN_148cc4842(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc496c(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 148cc48aa FUN_148cc48aa body=59 status=ok
// SIG undefined FUN_148cc48aa(void)

undefined8 FUN_148cc48aa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc48f6 FUN_148cc48f6 body=40 status=ok
// SIG undefined FUN_148cc48f6(void)

void FUN_148cc48f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_14595f710(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 148cc496c FUN_148cc496c body=183 status=ok
// SIG undefined FUN_148cc496c(void)

longlong FUN_148cc496c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_148cc45b2();
  puVar5 = (undefined8 *)(param_2 + 0x50);
  puVar6 = (undefined8 *)(param_1 + 0x50);
  for (lVar4 = 0xf; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  uVar2 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  uVar1 = *(undefined4 *)(param_2 + 0x10c);
  uVar2 = *(undefined4 *)(param_2 + 0x110);
  uVar3 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
  return param_1;
}



// FUNCTION 148cc4a24 FUN_148cc4a24 body=57 status=ok
// SIG undefined FUN_148cc4a24(void)

void FUN_148cc4a24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc12f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc12f8 = FUN_140002ddd(FUN_14661aff0,uVar1,L"AtlasTrackerModDef");
  }
  return;
}



// FUNCTION 148cc4ada FUN_148cc4ada body=83 status=ok
// SIG undefined FUN_148cc4ada(void)

undefined1 FUN_148cc4ada(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1418443e8(param_2,param_3);
      FUN_148cc4c4c(param_2 + 0x18,param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cc4b56 FUN_148cc4b56 body=59 status=ok
// SIG undefined FUN_148cc4b56(void)

undefined8 FUN_148cc4b56(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc4bf6 FUN_148cc4bf6 body=29 status=ok
// SIG undefined FUN_148cc4bf6(void)

undefined8 FUN_148cc4bf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc4c14 FUN_148cc4c14 body=55 status=ok
// SIG undefined FUN_148cc4c14(void)

void FUN_148cc4c14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1328 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1328 = FUN_140002ddd(FUN_14661b0e3,uVar1,L"WeaponMeleeAspect");
  }
  return;
}



// FUNCTION 148cc4c4c FUN_148cc4c4c body=84 status=ok
// SIG undefined FUN_148cc4c4c(void)

longlong * FUN_148cc4c4c(longlong *param_1,longlong *param_2)

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



// FUNCTION 148cc4cf6 FUN_148cc4cf6 body=54 status=ok
// SIG undefined FUN_148cc4cf6(void)

undefined1 FUN_148cc4cf6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc4de8(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148cc4d54 FUN_148cc4d54 body=59 status=ok
// SIG undefined FUN_148cc4d54(void)

undefined8 FUN_148cc4d54(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc4de8 FUN_148cc4de8 body=101 status=ok
// SIG undefined FUN_148cc4de8(void)

longlong FUN_148cc4de8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  if ((*(longlong *)(param_1 + 0x40) != *(longlong *)(param_2 + 0x40)) ||
     (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 148cc4eba FUN_148cc4eba body=59 status=ok
// SIG undefined FUN_148cc4eba(void)

undefined8 FUN_148cc4eba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc4f9a FUN_148cc4f9a body=315 status=ok
// SIG undefined FUN_148cc4f9a(void)

void FUN_148cc4f9a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  iVar2 = (int)param_2[1];
  lVar8 = (longlong)iVar2;
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1487b58a2(param_2,iVar2);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + lVar8 * 0x28) = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  puVar1 = (undefined4 *)(lVar3 + 8 + lVar8 * 0x28);
  *puVar1 = *(undefined4 *)(param_1 + 0x38);
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(undefined8 *)(lVar3 + 0x18 + lVar8 * 0x28) = 0;
  iVar2 = *(int *)(param_1 + 0x50);
  pvVar4 = *(void **)(param_1 + 0x48);
  *(int *)(lVar3 + 0x20 + lVar8 * 0x28) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar3 + lVar8 * 0x28 + 0x24) = 0;
  }
  else {
    puVar9 = (undefined8 *)(lVar3 + lVar8 * 0x28 + 0x18);
    FUN_1446dd670(puVar9,iVar2,0);
    memcpy((void *)*puVar9,pvVar4,(longlong)iVar2 * 2);
  }
  iVar2 = (int)param_2[1];
  lVar8 = (longlong)iVar2;
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1487b58a2(param_2,iVar2);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + lVar8 * 0x28) = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  puVar1 = (undefined4 *)(lVar3 + 8 + lVar8 * 0x28);
  *puVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(undefined8 *)(lVar3 + 0x18 + lVar8 * 0x28) = 0;
  iVar2 = *(int *)(param_1 + 0x28);
  pvVar4 = *(void **)(param_1 + 0x20);
  *(int *)(lVar3 + 0x20 + lVar8 * 0x28) = iVar2;
  if ((longlong)iVar2 != 0) {
    puVar9 = (undefined8 *)(lVar3 + lVar8 * 0x28 + 0x18);
    FUN_1446dd670(puVar9,iVar2,0);
    memcpy((void *)*puVar9,pvVar4,(longlong)iVar2 * 2);
    return;
  }
  *(undefined4 *)(lVar3 + lVar8 * 0x28 + 0x24) = 0;
  return;
}



// FUNCTION 148cc50d6 FUN_148cc50d6 body=68 status=ok
// SIG undefined FUN_148cc50d6(void)

longlong FUN_148cc50d6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_144a2383e();
  if (lVar2 == 0) {
    lVar2 = 0x30;
  }
  else {
    cVar1 = FUN_145cc8dbe(lVar2,&DAT_14cbca8a0);
    lVar2 = 0x30;
    if (cVar1 != '\0') {
      lVar2 = 8;
    }
  }
  return param_1 + lVar2;
}



// FUNCTION 148cc511a FUN_148cc511a body=80 status=ok
// SIG undefined FUN_148cc511a(void)

longlong * FUN_148cc511a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1487aefca();
  if (plVar1 == (longlong *)0x0) {
    lVar2 = FUN_1447210f0(param_3);
    plVar1 = param_1 + 6;
    if (lVar2 != 0) {
      plVar1 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,lVar2);
    }
  }
  return plVar1;
}



// FUNCTION 148cc516a FUN_148cc516a body=40 status=ok
// SIG undefined FUN_148cc516a(void)

undefined8 FUN_148cc516a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144a2383e();
  if (lVar1 != 0) {
    uVar2 = FUN_145cc8dbe(lVar1,&DAT_14cbca8a0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148cc5192 FUN_148cc5192 body=747 status=ok
// SIG undefined FUN_148cc5192(void)

void FUN_148cc5192(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_78 [32];
  char *local_58;
  int local_50;
  char *local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14094f6bc();
  cVar2 = FUN_1487b942c(param_2);
  if (cVar2 != '\0') {
    local_40 = 0;
    uStack_38 = 0;
    uVar4 = FUN_140c1c194();
    lVar5 = FUN_14477b664(uVar4);
    lVar6 = FUN_1465abf1a();
    uVar4 = FUN_1465abf1a();
    FUN_1402d1bfa(&local_58,uVar4,param_1);
    pcVar8 = local_58;
    if (local_58 != (char *)0x0) {
      uStack_38 = 0;
    }
    local_48 = local_58;
    lVar7 = FUN_140c1c194();
    if (lVar6 == 0) {
LAB_148cc5243:
      lVar7 = lVar6;
    }
    else if (lVar7 == 0) {
      lVar7 = 0;
    }
    else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)) goto LAB_148cc5243;
    if (lVar5 != lVar7) {
      uStack_38 = 0;
    }
    uVar4 = FUN_14477b664(lVar7);
    local_40 = FUN_14477b664(uVar4);
    if (local_40 != 0 && pcVar8 != (char *)0x0) {
      uStack_38 = param_1;
    }
    FUN_14095186a(param_2,&local_48);
  }
  local_40 = 0;
  uStack_38 = 0;
  uVar4 = FUN_140c1c194();
  lVar5 = FUN_14477b664(uVar4);
  lVar6 = FUN_1465abf1a();
  uVar4 = FUN_1465abf1a();
  FUN_1402d1bfa(&local_58,uVar4,param_1);
  pcVar8 = local_58;
  if (local_58 != (char *)0x0) {
    uStack_38 = 0;
  }
  local_48 = local_58;
  lVar7 = FUN_140c1c194();
  if (lVar6 == 0) {
LAB_148cc5307:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_148cc5307;
  if (lVar5 != lVar7) {
    uStack_38 = 0;
  }
  uVar4 = FUN_14477b664(lVar7);
  local_40 = FUN_14477b664(uVar4);
  if (local_40 != 0 && pcVar8 != (char *)0x0) {
    uStack_38 = param_1;
  }
  FUN_1487b9436(param_2,&local_58,&local_48);
  bVar3 = FUN_1487b9468(param_2);
  pcVar8 = local_58;
  if ((local_50 == 1 & bVar3) == 1) {
    if (*local_58 == '\0') {
      FUN_14409f7ec(param_1,&local_48,param_2);
      FUN_145856b94(pcVar8 + 8,&local_48);
      pcVar8 = local_58;
      goto LAB_148cc53a8;
    }
    pcVar9 = local_58 + 0x58;
  }
  else {
LAB_148cc53a8:
    if (local_50 == 0) goto LAB_148cc5440;
    pcVar9 = pcVar8 + (longlong)local_50 * 0x58;
  }
  do {
    lVar5 = *(longlong *)(pcVar8 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_140c1c194();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(pcVar8 + 0x10) = lVar5;
    }
    lVar6 = *(longlong *)(pcVar8 + 0x18);
    if (lVar6 == 0) {
      if ((lVar5 != 0) && (*(longlong *)(pcVar8 + 8) != 0)) {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          pcVar8[0x18] = '\0';
          pcVar8[0x19] = '\0';
          pcVar8[0x1a] = '\0';
          pcVar8[0x1b] = '\0';
          pcVar8[0x1c] = '\0';
          pcVar8[0x1d] = '\0';
          pcVar8[0x1e] = '\0';
          pcVar8[0x1f] = '\0';
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar6 = FUN_144aff482(uVar4,pcVar8 + 8);
          *(longlong *)(pcVar8 + 0x18) = lVar6;
          if (lVar6 != 0) goto LAB_148cc53dd;
        }
      }
    }
    else {
LAB_148cc53dd:
      FUN_14094eece(param_2,lVar6);
    }
    pcVar8 = pcVar8 + 0x58;
  } while (pcVar8 != pcVar9);
LAB_148cc5440:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cc547e FUN_148cc547e body=677 status=ok
// SIG undefined FUN_148cc547e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148cc547e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  void *_Dst;
  int iVar8;
  char *pcVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8 [15];
  
  local_a8[0xb] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2[1] == 0) {
    uVar4 = FUN_140c1c194();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  lVar5 = FUN_1465abf1a();
  uVar4 = FUN_1465abf1a();
  FUN_1402d1bfa(local_a8,uVar4,param_1);
  if (*param_2 != local_a8[0]) {
    param_2[2] = 0;
  }
  *param_2 = local_a8[0];
  lVar6 = FUN_140c1c194();
  if (lVar5 == 0) {
LAB_148cc5522:
    lVar6 = lVar5;
  }
  else if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) goto LAB_148cc5522;
  if (param_2[1] != lVar6) {
    param_2[2] = 0;
  }
  uVar4 = FUN_14477b664(lVar6);
  lVar5 = FUN_14477b664(uVar4);
  param_2[1] = lVar5;
  if ((lVar5 != 0) && (*param_2 != 0)) {
    param_2[2] = param_1;
  }
  plVar2 = param_2 + 3;
  iVar8 = (int)param_2[4];
  if (iVar8 == 0) {
    FUN_1487b9960(local_a8,0);
    iVar8 = (int)param_2[4];
    *(uint *)(param_2 + 4) = iVar8 + 1U;
    if (*(uint *)((longlong)param_2 + 0x24) < iVar8 + 1U) {
      FUN_14095139e(plVar2,iVar8);
    }
    lVar5 = *plVar2;
    *(undefined1 *)(lVar5 + (longlong)iVar8 * 0x58) = (undefined1)local_a8[0];
    FUN_145d1462c();
    FUN_140382e86(lVar5 + (longlong)iVar8 * 0x58 + 0x20,local_a8 + 4);
    FUN_144a2da94(local_a8 + 4);
  }
  else {
    if (iVar8 < 2) goto LAB_148cc5571;
    uVar1 = iVar8 - 1;
    _Dst = (void *)(param_2[3] + 0x58);
    FUN_14028f43e(_Dst,uVar1);
    iVar3 = (int)param_2[4] - iVar8;
    if (iVar3 != 0) {
      memmove(_Dst,(void *)((ulonglong)uVar1 * 0x58 + (longlong)_Dst),(longlong)iVar3 * 0x58);
      iVar8 = (int)param_2[4];
    }
    *(uint *)(param_2 + 4) = iVar8 - uVar1;
    FUN_1487be82c(plVar2);
  }
  iVar8 = (int)param_2[4];
LAB_148cc5571:
  if (iVar8 != 0) {
    pcVar7 = (char *)*plVar2;
    pcVar9 = pcVar7 + (longlong)iVar8 * 0x58;
    do {
      if ((*pcVar7 != '\0') && (lVar5 = *(longlong *)(pcVar7 + 8), lVar5 != 0)) {
        if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18 + lVar6) == lVar5)
            goto LAB_148cc562b;
            lVar6 = lVar6 + 0x30;
          } while ((longlong)*(int *)(param_1 + 0xa8) * 0x30 != lVar6);
        }
        if (lVar5 != *(longlong *)(param_1 + 0x88)) {
          local_a8[8] = 0;
          local_a8[9] = 0;
          local_a8[6] = 0;
          local_a8[7] = 0;
          local_a8[4] = 0;
          local_a8[5] = 0;
          local_a8[2] = 0;
          local_a8[3] = 0;
          local_a8[0] = 0;
          local_a8[1] = 0;
          local_a8[10] = 0;
          *pcVar7 = '\0';
          FUN_145856b94(pcVar7 + 8,local_a8 + 1);
          FUN_1403719a4(pcVar7 + 0x20,local_a8 + 4);
          FUN_144a2da94(local_a8 + 4);
        }
      }
LAB_148cc562b:
      pcVar7 = pcVar7 + 0x58;
    } while (pcVar7 != pcVar9);
  }
  if ((local_a8[0xb] ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc5724 FUN_148cc5724 body=32 status=ok
// SIG undefined FUN_148cc5724(void)

undefined8 FUN_148cc5724(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Region");
  return param_2;
}



// FUNCTION 148cc5744 FUN_148cc5744 body=809 status=ok
// SIG undefined FUN_148cc5744(void)

void FUN_148cc5744(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_f8 [36];
  int local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [24];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1487b9474(local_a0,param_1 + 0x88);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14095139e(param_2,iVar2);
  }
  lVar7 = *param_2;
  *(undefined1 *)(lVar7 + (longlong)iVar2 * 0x58) = local_a0[0];
  FUN_145d1462c();
  FUN_140382e86(lVar7 + (longlong)iVar2 * 0x58 + 0x20,local_80);
  FUN_144a2da94(local_80);
  iVar2 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar2 != 0) {
    lVar7 = *(longlong *)(param_1 + 0xa0);
    lVar13 = 0;
    do {
      local_b0 = 0;
      local_b8 = *(undefined8 *)(lVar7 + 0x18 + lVar13);
      local_a8 = 0;
      uVar5 = FUN_14477b664(*(undefined8 *)(lVar7 + 0x20 + lVar13));
      local_b0 = FUN_14477b664(uVar5);
      local_a8 = *(undefined8 *)(lVar7 + 0x28 + lVar13);
      FUN_1487b9474(local_a0,&local_b8);
      iVar8 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
        FUN_14095139e(param_2,iVar8);
      }
      lVar6 = *param_2;
      puVar1 = (undefined1 *)(lVar6 + (longlong)iVar8 * 0x58);
      *puVar1 = local_a0[0];
      FUN_145d1462c(puVar1 + 8,local_98);
      FUN_140382e86(lVar6 + (longlong)iVar8 * 0x58 + 0x20,local_80);
      FUN_144a2da94(local_80);
      lVar13 = lVar13 + 0x30;
    } while ((longlong)iVar2 * 0x30 != lVar13);
  }
  uVar3 = *(uint *)(param_2 + 1);
  lVar7 = (longlong)(int)uVar3;
  if (lVar7 != 0) {
    local_d0 = *param_2;
    bVar14 = *(longlong *)(local_d0 + 8) == 0;
    local_d4 = 0;
    local_c0 = -lVar7;
    local_c8 = local_d0 + 0x68;
    uVar11 = 0;
    do {
      uVar12 = (ulonglong)uVar11;
LAB_148cc590d:
      iVar2 = (int)uVar12;
      if ((int)(iVar2 + 1U) < (int)uVar3) {
        lVar13 = (longlong)iVar2;
        lVar6 = lVar13 + 2;
        plVar10 = (longlong *)(local_c8 + lVar13 * 0x58);
        bVar4 = true;
        lVar9 = -1;
        do {
          if (*plVar10 == 0 && plVar10[-1] != 0) {
            if (bVar14) {
              FUN_14028f43e(lVar13 * 0x58 + local_d0,-(int)lVar9);
              if (!bVar4) goto LAB_148cc5a39;
              uVar12 = (uVar12 & 0xffffffff) - lVar9;
              bVar14 = false;
              goto LAB_148cc590d;
            }
          }
          else if (bVar14 != (plVar10[-1] == 0 || *plVar10 == 0)) {
            uVar11 = iVar2 - (int)lVar9;
            break;
          }
          bVar4 = lVar6 < lVar7;
          lVar9 = lVar9 + -1;
          lVar6 = lVar6 + 1;
          plVar10 = plVar10 + 0xb;
          uVar11 = uVar3;
        } while (local_c0 + lVar13 != lVar9);
      }
      else {
        bVar4 = false;
        uVar11 = iVar2 + 1U;
      }
      iVar8 = uVar11 - iVar2;
      if (bVar14 != false) {
        FUN_14028f43e((longlong)iVar2 * 0x58 + local_d0,iVar8);
        bVar14 = false;
        uVar12 = (ulonglong)uVar11;
        if (!bVar4) break;
        goto LAB_148cc590d;
      }
      if (local_d4 != iVar2) {
        memmove((void *)((longlong)local_d4 * 0x58 + local_d0),
                (void *)((longlong)iVar2 * 0x58 + local_d0),(longlong)iVar8 * 0x58);
      }
      local_d4 = local_d4 + iVar8;
      bVar14 = true;
    } while (bVar4);
LAB_148cc5a39:
    *(int *)(param_2 + 1) = local_d4;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc5a6e FUN_148cc5a6e body=88 status=ok
// SIG undefined FUN_148cc5a6e(void)

void FUN_148cc5a6e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x2b8) = lVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar3 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 0x2c0) = (int)param_2[1];
  *(undefined4 *)(param_1 + 0x2c4) = uVar1;
  *(int *)(param_1 + 0x2c8) = (int)lVar3;
  *(undefined4 *)(param_1 + 0x2cc) = uVar2;
  FUN_148cc5ac6(param_1,0);
  FUN_148cc5d56(param_1,1,0);
  return;
}



// FUNCTION 148cc5ac6 FUN_148cc5ac6 body=655 status=ok
// SIG undefined FUN_148cc5ac6(void)

void FUN_148cc5ac6(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  int local_b0;
  undefined8 *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined2 *local_88;
  int local_80 [2];
  undefined8 local_78;
  undefined8 local_70 [4];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148cc600c();
  if (*(longlong *)(param_1 + 0x2b8) == 0) goto LAB_148cc5afa;
  if (param_1 == 0) {
    FUN_140056680(&local_b8,&DAT_149e01fe8);
  }
  else {
    local_70[0] = *(undefined8 *)(param_1 + 0x18);
    FUN_1400021e4(local_70,&local_b8);
  }
  puVar3 = &DAT_149dfb77a;
  if (local_b0 != 0) {
    puVar3 = local_b8;
  }
  FUN_140230a18(local_70,puVar3);
  FUN_140230a18(local_50,L"EridiumEncasing");
  local_a0 = &local_30;
  local_a8 = local_70;
  FUN_1407adb6e(&local_98);
  FUN_140230a2e(&local_88,L"{0}_{1}",&local_98);
  puVar3 = &DAT_149dfb77a;
  if (local_80[0] != 0) {
    puVar3 = local_88;
  }
  FUN_1446f470e(&local_78,puVar3,1);
  lVar2 = FUN_148cc60c1(*(undefined8 *)(param_1 + 0xa8),local_78);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x2d8) = lVar2;
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407adb3e(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar2 = 0x40;
  do {
    if (*(longlong *)((longlong)local_80 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0);
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2d8) == 0) goto LAB_148cc5afa;
  FUN_140b361ee(*(longlong *)(param_1 + 0x2d8),0);
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0xaf0) + 0x58))
            (*(longlong *)(param_1 + 0x2d8) + 0xaf0,param_2);
  cVar1 = (char)param_2;
  *(char *)(*(longlong *)(param_1 + 0x2d8) + 0x67a) = cVar1 * '\x02' + '\x02';
  puVar4 = &DAT_14cbc1710;
  if (cVar1 != '\0') {
    puVar4 = &DAT_14cbc1718;
  }
  (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x728))(*(longlong **)(param_1 + 0x2d8),*puVar4,1)
  ;
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0xaf0) + 0x48))
            (*(longlong *)(param_1 + 0x2d8) + 0xaf0,*(undefined8 *)(param_1 + 0x2b8));
  FUN_140486fc4(*(undefined8 *)(param_1 + 0x2d8),param_1,0);
  lVar2 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar2 + 0xb0) == 0) {
    lVar2 = FUN_1448abda6();
    if (lVar2 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x2d8);
      goto LAB_148cc5d12;
    }
  }
  else {
LAB_148cc5d12:
    if ((*(byte *)(lVar2 + 0x9c) & 1) == 0) {
      FUN_140b506a4();
    }
  }
  if (cVar1 != '\0') {
    FUN_148cc617a(param_1);
  }
LAB_148cc5afa:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc5d56 FUN_148cc5d56 body=500 status=ok
// SIG undefined FUN_148cc5d56(void)

void FUN_148cc5d56(longlong param_1,byte param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    *(uint *)(param_1 + 0x2d0) = (uint)(param_2 ^ 1);
    FUN_148cc63a8();
    plVar4 = *(longlong **)(param_1 + 0xa8);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_140437988();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = FUN_140437988();
        plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
        if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
          uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
          local_58 = DAT_14cbc1a18;
          local_50 = 0xffffffff;
          cVar2 = FUN_144a7a548(uVar3);
          if (cVar2 != '\0') {
            uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
            local_44 = 0;
            local_58 = DAT_14cbc1a18;
            local_50 = 0xffffffff;
            FUN_1413630d6(uVar3,&local_58,*(undefined4 *)(param_1 + 0x2d0));
          }
        }
      }
    }
    if (((*(char *)(param_1 + 0x2c4) == '\x01') && (*(longlong *)(param_1 + 0x2c8) != 0)) &&
       (plVar4 = *(longlong **)(param_1 + 0xa8), plVar4 != (longlong *)0x0)) {
      uVar3 = FUN_144a800f8();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = FUN_144a800f8();
        plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
        if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
          iVar1 = *(int *)(param_1 + 0x2d0);
          uVar3 = FUN_143e5654a(plVar5);
          cVar2 = FUN_14136dfde(uVar3,(undefined8 *)(param_1 + 0x2c8));
          if ((iVar1 == 0) != (bool)cVar2) {
            (**(code **)(*plVar5 + 0x98))(plVar5,iVar1 == 0,*(undefined8 *)(param_1 + 0x2c8));
          }
        }
      }
    }
    if (param_3 != 0 && param_2 == 0) {
      FUN_148b8ffbc(param_1 + 0x2a8,*(undefined8 *)(param_1 + 0xa8),param_3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc5f4c FUN_148cc5f4c body=140 status=ok
// SIG undefined FUN_148cc5f4c(void)

void FUN_148cc5f4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412aa84a();
  FUN_1446f470e(&local_38,L"EridiumEncasingState",1);
  uVar1 = FUN_1412c35d0();
  FUN_1412c35d0();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc5fec FUN_148cc5fec body=32 status=ok
// SIG undefined FUN_148cc5fec(void)

void FUN_148cc5fec(undefined8 param_1,undefined4 param_2)

{
  FUN_148cc600c();
  FUN_14067484e(param_1,param_2);
  return;
}



// FUNCTION 148cc600c FUN_148cc600c body=181 status=ok
// SIG undefined FUN_148cc600c(void)

void FUN_148cc600c(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x2d8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x420))(plVar2,0);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x2e0);
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
    if (lVar4 == 0) goto LAB_148cc6085;
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
    }
  }
  if (*(longlong *)(lVar4 + 0x1f0) == 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x458);
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
  }
  uVar3 = *puVar5;
  lVar4 = FUN_144a61814(uVar3,puVar1);
  if (lVar4 != 0) {
    FUN_1405a424c(uVar3,*puVar1);
  }
LAB_148cc6085:
  *puVar1 = 0;
  return;
}



// FUNCTION 148cc60c1 FUN_148cc60c1 body=183 status=ok
// SIG undefined FUN_148cc60c1(void)

undefined8 FUN_148cc60c1(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_140a6d95c();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x900040;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc617a FUN_148cc617a body=513 status=ok
// SIG undefined FUN_148cc617a(void)

void FUN_148cc617a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *(longlong *)(param_1 + 0x2d8);
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(lVar3 + 0xaf0) + 0x30))(lVar3 + 0xaf0);
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 0x2e0) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
      }
      lVar3 = *(longlong *)(param_1 + 0xb0);
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6(param_1);
      }
    }
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar4 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_b0[2] = lVar5;
    *local_b0 = &PTR_FUN_14b9582c0;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    *(undefined4 *)(puVar4 + 5) = 0;
    puVar4[4] = &LAB_148cc6398;
    uVar1 = *(undefined4 *)(param_1 + 0x2c0);
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar2,param_1 + 0x2e0,&local_98,uVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc63a8 FUN_148cc63a8 body=82 status=ok
// SIG undefined FUN_148cc63a8(void)

void FUN_148cc63a8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x2d8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x2d0);
    cVar3 = (**(code **)(*(longlong *)(lVar2 + 0xaf0) + 0x60))(lVar2 + 0xaf0);
    if ((iVar1 != 0) != (bool)cVar3) {
      FUN_148cc5ac6(param_1,iVar1 != 0);
      return;
    }
  }
  return;
}



// FUNCTION 148cc63fa FUN_148cc63fa body=41 status=ok
// SIG undefined FUN_148cc63fa(void)

void FUN_148cc63fa(longlong param_1,undefined8 param_2)

{
  if (((*(longlong *)(param_1 + 0xa8) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) &&
     (*(int *)(param_1 + 0x2d0) == 0)) {
    FUN_148cc5d56(param_1,0,param_2);
    return;
  }
  return;
}



// FUNCTION 148cc6424 FUN_148cc6424 body=11 status=ok
// SIG undefined FUN_148cc6424(void)

bool FUN_148cc6424(longlong param_1)

{
  return *(int *)(param_1 + 0x2d0) == 0;
}



// FUNCTION 148cc6430 FUN_148cc6430 body=55 status=ok
// SIG undefined FUN_148cc6430(void)

byte FUN_148cc6430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar2 = FUN_1400e8a68(param_3);
  bVar3 = (byte)param_3;
  if (lVar2 != 0) {
    cVar1 = FUN_1403adf14(lVar2,0,0);
    bVar3 = cVar1 != '\0';
  }
  return lVar2 != 0 & bVar3;
}



// FUNCTION 148cc6468 FUN_148cc6468 body=47 status=ok
// SIG undefined FUN_148cc6468(void)

ulonglong FUN_148cc6468(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1400e8a68(param_3);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_3 = lVar2;
    bVar1 = FUN_143c98922(lVar2);
  }
  return CONCAT71((int7)((ulonglong)param_3 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 148cc6498 FUN_148cc6498 body=49 status=ok
// SIG undefined FUN_148cc6498(void)

ulonglong FUN_148cc6498(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1400e8a68(param_3);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_3 = lVar2;
    bVar1 = FUN_1459b764e(lVar2);
    bVar1 = bVar1 ^ 1;
  }
  return CONCAT71((int7)((ulonglong)param_3 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 148cc64ca FUN_148cc64ca body=1129 status=ok
// SIG undefined FUN_148cc64ca(void)

undefined8 FUN_148cc64ca(undefined2 *param_1,longlong *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_128 [40];
  uint local_100 [2];
  undefined1 local_f8 [48];
  undefined8 local_c8 [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    memset(local_100,0,0xb8);
    local_c8[0]._0_4_ = 0xffffffff;
    local_c8[1] = DAT_14c8464e0;
    local_c8[2] = DAT_14c8464e8;
    local_c8[3] = DAT_14c8464f0;
    local_a8 = DAT_14c8464f8;
    uStack_a0 = DAT_14c846500;
    local_98 = DAT_14c846508;
    local_90 = DAT_14c8464f8;
    uStack_88 = DAT_14c846500;
    local_80 = DAT_14c846508;
    local_6c = 0x3f800000;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_58 = 0;
    uStack_57 = 0;
    *param_1 = 0;
    FUN_148ccacfe(param_1 + 4,local_f8);
    puVar7 = local_c8;
    puVar8 = (undefined8 *)(param_1 + 0x1c);
    for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined1 *)(param_1 + 0x44) = local_78;
    FUN_148be68bc(param_1 + 0x48,auStack_70);
    FUN_145c25522(local_f8);
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *(undefined1 *)param_1 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  pcVar1 = (char *)((longlong)param_1 + 1);
  pcVar3 = *(char **)param_2[1];
  if ((char *)((undefined8 *)param_2[1])[1] < pcVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,pcVar1,1);
  }
  else {
    *pcVar1 = *pcVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if (*pcVar1 == '\x02') {
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      local_100[0] = (uint)*(byte *)(param_1 + 0x44);
      (**(code **)(*param_2 + 0x170))(param_2,local_100,4);
      if (1 < local_100[0]) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x44) = local_100[0] != 0;
    }
    else {
      *(bool *)(param_1 + 0x44) = *piVar4 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar5 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x1c,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_14480c34d(param_2,param_1 + 0x20);
    FUN_1401fb57a(param_2,param_1 + 0x2c);
    FUN_1401fb57a(param_2,param_1 + 0x38);
    puVar2 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x48,1);
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar5 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x4a,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4a) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar5 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x4c,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar5 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x4e,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4e) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x50);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x54);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      local_100[0] = (uint)*(byte *)(param_1 + 0x58);
      (**(code **)(*param_2 + 0x170))(param_2,local_100,4);
      if (1 < local_100[0]) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x58) = local_100[0] != 0;
    }
    else {
      *(bool *)(param_1 + 0x58) = *piVar4 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else if (*pcVar1 == '\x01') {
    FUN_148ccb1b6(param_2,param_1 + 4);
    FUN_1436364e8(param_2,param_1 + 0xc);
    FUN_1436364e8(param_2,param_1 + 0x14);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc6934 FUN_148cc6934 body=8 status=ok
// SIG undefined FUN_148cc6934(void)

bool FUN_148cc6934(char *param_1,char *param_2)

{
  return *param_2 == *param_1;
}



// FUNCTION 148cc693c FUN_148cc693c body=140 status=ok
// SIG undefined FUN_148cc693c(void)

void FUN_148cc693c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_38,L"RepData",1);
  uVar1 = FUN_145a89df0();
  FUN_145a89df0();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc69ca FUN_148cc69ca body=117 status=ok
// SIG undefined FUN_148cc69ca(void)

longlong * FUN_148cc69ca(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xc0);
    lVar4 = (longlong)*(int *)(param_1 + 200) << 3;
    do {
      uVar2 = FUN_14479d2ce(lVar3);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_148ccb356(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return param_2;
}



// FUNCTION 148cc6a40 FUN_148cc6a40 body=592 status=ok
// SIG undefined FUN_148cc6a40(void)

void FUN_148cc6a40(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  longlong local_e8 [7];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar3 = FUN_141864c04();
  if (cVar3 != '\0') {
    local_f0 = param_2;
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2c0))(plVar4,0);
      (**(code **)(*plVar4 + 0x578))(plVar4);
    }
    *(char *)(param_1 + 0x17) = (char)param_1[0x17] + '\x01';
    plVar4 = param_1 + 0x18;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    FUN_148ccacfe(plVar4,local_e8);
    FUN_145c25522(local_e8);
    uStack_6f = 0;
    local_98 = 0;
    local_e8[0] = 0xffffffff;
    local_e8[1] = DAT_14c8464e0;
    local_e8[2] = DAT_14c8464e8;
    local_e8[3] = DAT_14c8464f0;
    local_e8[4] = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
    local_e8[5] = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
    local_e8[6] = DAT_14c846508;
    _uStack_b0 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
    _local_a8 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
    uStack_a0 = DAT_14c846508;
    uStack_90 = 0x3f80000000000000;
    local_78 = 0;
    uStack_77 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_7f = 0;
    plVar6 = local_e8;
    plVar7 = param_1 + 0x1e;
    for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar7 = *plVar6;
      plVar6 = plVar6 + 1;
      plVar7 = plVar7 + 1;
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    FUN_148be68bc(param_1 + 0x29);
    *(undefined1 *)((longlong)param_1 + 0xb9) = 1;
    *(undefined4 *)(param_1 + 0x19) = 0;
    if (*(int *)((longlong)param_1 + 0xcc) != 0) {
      FUN_148ccb3dc(plVar4,0);
    }
    lVar5 = param_4[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar2 = *param_4;
      lVar8 = 0;
      do {
        local_e8[0] = 0;
        FUN_14485c47a(local_e8,*(undefined8 *)(lVar2 + lVar8));
        iVar1 = (int)param_1[0x19];
        *(uint *)(param_1 + 0x19) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xcc) < iVar1 + 1U) {
          FUN_145cb4378(plVar4,iVar1);
        }
        *(longlong *)(*plVar4 + (longlong)iVar1 * 8) = local_e8[0];
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar8);
    }
    FUN_1405b70a4(param_1 + 0x1c,param_3);
    FUN_1405b70a4(param_1 + 0x1a,local_f0);
    FUN_1487bbc9e(param_1);
    FUN_148be6c7c(param_1);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cc6c92 FUN_148cc6c92 body=48 status=ok
// SIG undefined FUN_148cc6c92(void)

void FUN_148cc6c92(longlong param_1)

{
  FUN_1408c7d08();
  if (*(char *)(param_1 + 0x170) != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x170) = 0;
  FUN_148cc6cc2(param_1);
  return;
}



// FUNCTION 148cc6cc2 FUN_148cc6cc2 body=169 status=ok
// SIG undefined FUN_148cc6cc2(void)

void FUN_148cc6cc2(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x69) == '\0') {
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xb8);
    if (*(uint *)(param_1 + 0x174) != (uint)bVar1) {
      if ((longlong)*(int *)(param_1 + 0x98) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x90);
        lVar3 = (longlong)*(int *)(param_1 + 0x98) << 3;
        do {
          lVar2 = FUN_14479d2ce(lVar4);
          if (lVar2 != 0) {
            FUN_147d737fe(lVar2);
          }
          lVar4 = lVar4 + 8;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
        bVar1 = *(byte *)(param_1 + 0xb8);
      }
      *(uint *)(param_1 + 0x174) = (uint)bVar1;
      if (*(char *)(param_1 + 0x140) != '\0') {
        if (*(char *)(param_1 + 0xb9) == '\x02') {
          FUN_148be6c20(param_1);
          return;
        }
        if (*(char *)(param_1 + 0xb9) == '\x01') {
          FUN_148be6c7c(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148cc6d6c FUN_148cc6d6c body=479 status=ok
// SIG undefined FUN_148cc6d6c(void)

void FUN_148cc6d6c(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_141864c04();
  if ((cVar1 != '\0') && (*(uint *)(param_1 + 0x1e) != param_2)) {
    *(char *)(param_1 + 0x17) = (char)param_1[0x17] + '\x01';
    local_a8 = 0;
    uStack_a7 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b7 = 0;
    uStack_b0 = 0;
    uStack_af = 0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    FUN_148ccacfe(param_1 + 0x18,local_c8);
    FUN_145c25522(local_c8);
    uStack_4f = 0;
    local_78 = 0;
    local_c8[0] = 0xffffffff;
    local_c8[1] = DAT_14c8464e0;
    local_b8 = (undefined1)DAT_14c8464e8;
    uStack_b7 = (undefined7)((ulonglong)DAT_14c8464e8 >> 8);
    uStack_b0 = (undefined1)DAT_14c8464f0;
    uStack_af = (undefined7)((ulonglong)DAT_14c8464f0 >> 8);
    local_a8 = (undefined1)(undefined4)DAT_14c8464f8;
    uStack_a7 = (undefined7)(CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8) >> 8);
    uStack_a0 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
    local_98 = DAT_14c846508;
    _uStack_90 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
    _local_88 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
    uStack_80 = DAT_14c846508;
    uStack_70 = 0x3f80000000000000;
    local_58 = 0;
    uStack_57 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    plVar2 = local_c8;
    plVar4 = param_1 + 0x1e;
    for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar4 = *plVar2;
      plVar2 = plVar2 + 1;
      plVar4 = plVar4 + 1;
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    plVar2 = param_1 + 0x29;
    FUN_148be68bc(plVar2);
    *(undefined1 *)((longlong)param_1 + 0xb9) = 2;
    *(uint *)(param_1 + 0x1e) = param_2;
    if (((int)param_2 < 0) || ((int)param_1[0x16] <= (int)param_2)) {
      uStack_a7 = 0;
      local_c8[0] = 0x3f80000000000000;
      local_c8[1] = 0;
      local_b8 = 0;
      uStack_b7 = 0;
      uStack_b0 = 0;
      uStack_af = 0;
      local_a8 = 0;
      FUN_148be68bc(plVar2);
    }
    else {
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_148beac48(plVar2,(ulonglong)param_2 * 0x28 + param_1[0x15]);
    }
    FUN_1487bbc9e(param_1);
    FUN_148be6c20(param_1);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x578))(plVar2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


