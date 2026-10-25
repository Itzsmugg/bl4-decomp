// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1474d3b92 FUN_1474d3b92 body=74 status=ok
// SIG undefined FUN_1474d3b92(void)

longlong FUN_1474d3b92(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1474d1d98();
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  return param_1;
}



// FUNCTION 1474d3bde FUN_1474d3bde body=65 status=ok
// SIG undefined FUN_1474d3bde(void)

void FUN_1474d3bde(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_141315ec0(param_2);
  *param_2 = &PTR_FUN_14a41fd10;
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined1 *)((longlong)param_2 + 0x9c) = 1;
  return;
}



// FUNCTION 1474d3c20 FUN_1474d3c20 body=65 status=ok
// SIG undefined FUN_1474d3c20(void)

void FUN_1474d3c20(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_141315ec0(param_2);
  *param_2 = &PTR_FUN_14a41fd10;
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined1 *)((longlong)param_2 + 0x9c) = 1;
  return;
}



// FUNCTION 1474d3c86 FUN_1474d3c86 body=86 status=ok
// SIG undefined FUN_1474d3c86(void)

undefined8 FUN_1474d3c86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14179807a(param_2,param_3);
    *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_3 + 0x98);
    *(undefined1 *)(param_2 + 0x9c) = *(undefined1 *)(param_3 + 0x9c);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 1474d3d04 FUN_1474d3d04 body=59 status=ok
// SIG undefined FUN_1474d3d04(void)

undefined8 FUN_1474d3d04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d3d50 FUN_1474d3d50 body=38 status=ok
// SIG undefined FUN_1474d3d50(void)

void FUN_1474d3d50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1474d3dc6 FUN_1474d3dc6 body=38 status=ok
// SIG undefined FUN_1474d3dc6(void)

undefined8 FUN_1474d3dc6(undefined8 param_1,int param_2)

{
  FUN_140f5e6f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d3dec FUN_1474d3dec body=55 status=ok
// SIG undefined FUN_1474d3dec(void)

void FUN_1474d3dec(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa1b0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa1b0 = FUN_140002ddd(FUN_14633093a,uVar1,L"AnimNode_BlendSpacePlayer_Standalone");
  }
  return;
}



// FUNCTION 1474d3eca FUN_1474d3eca body=54 status=ok
// SIG undefined FUN_1474d3eca(void)

undefined1 FUN_1474d3eca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d0b7a(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1474d3f28 FUN_1474d3f28 body=59 status=ok
// SIG undefined FUN_1474d3f28(void)

undefined8 FUN_1474d3f28(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d3f6e FUN_1474d3f6e body=32 status=ok
// SIG undefined FUN_1474d3f6e(void)

void FUN_1474d3f6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1474d7d72(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1474d4092 FUN_1474d4092 body=54 status=ok
// SIG undefined FUN_1474d4092(void)

undefined1 FUN_1474d4092(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d1d98(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1474d40f0 FUN_1474d40f0 body=59 status=ok
// SIG undefined FUN_1474d40f0(void)

undefined8 FUN_1474d40f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d4136 FUN_1474d4136 body=32 status=ok
// SIG undefined FUN_1474d4136(void)

void FUN_1474d4136(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1474d425a FUN_1474d425a body=91 status=ok
// SIG undefined FUN_1474d425a(void)

undefined1 FUN_1474d425a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d1d98(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0x70);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_3 + 0x70);
      }
    }
    param_3 = param_3 + 0x78;
    *(longlong *)(param_2 + 0x70) = lVar1;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1474d42de FUN_1474d42de body=59 status=ok
// SIG undefined FUN_1474d42de(void)

undefined8 FUN_1474d42de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d4324 FUN_1474d4324 body=32 status=ok
// SIG undefined FUN_1474d4324(void)

void FUN_1474d4324(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1474d4394 FUN_1474d4394 body=37 status=ok
// SIG undefined FUN_1474d4394(void)

void FUN_1474d4394(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  FUN_141315ec0(param_2);
  return;
}



// FUNCTION 1474d43e6 FUN_1474d43e6 body=63 status=ok
// SIG undefined FUN_1474d43e6(void)

undefined1 FUN_1474d43e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14179807a(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1474d444e FUN_1474d444e body=59 status=ok
// SIG undefined FUN_1474d444e(void)

undefined8 FUN_1474d444e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d449a FUN_1474d449a body=38 status=ok
// SIG undefined FUN_1474d449a(void)

void FUN_1474d449a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1474d4626 FUN_1474d4626 body=59 status=ok
// SIG undefined FUN_1474d4626(void)

undefined8 FUN_1474d4626(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d46c6 FUN_1474d46c6 body=29 status=ok
// SIG undefined FUN_1474d46c6(void)

undefined8 FUN_1474d46c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d46e4 FUN_1474d46e4 body=55 status=ok
// SIG undefined FUN_1474d46e4(void)

void FUN_1474d46e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa1e0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa1e0 = FUN_140002ddd(FUN_146330bcf,uVar1,L"AnimNode_CallFunction");
  }
  return;
}



// FUNCTION 1474d4754 FUN_1474d4754 body=63 status=ok
// SIG undefined FUN_1474d4754(void)

undefined1 FUN_1474d4754(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1456bf186(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 1474d47bc FUN_1474d47bc body=59 status=ok
// SIG undefined FUN_1474d47bc(void)

undefined8 FUN_1474d47bc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d4808 FUN_1474d4808 body=40 status=ok
// SIG undefined FUN_1474d4808(void)

void FUN_1474d4808(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_145956d70(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 1474d487e FUN_1474d487e body=98 status=ok
// SIG undefined FUN_1474d487e(void)

void FUN_1474d487e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474d48e0 FUN_1474d48e0 body=120 status=ok
// SIG undefined FUN_1474d48e0(void)

void FUN_1474d48e0(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1474d4958(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1474d4958 FUN_1474d4958 body=115 status=ok
// SIG undefined FUN_1474d4958(void)

void FUN_1474d4958(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d49cb FUN_1474d49cb body=43 status=ok
// SIG undefined FUN_1474d49cb(void)

void FUN_1474d49cb(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1474d49f6 FUN_1474d49f6 body=98 status=ok
// SIG undefined FUN_1474d49f6(void)

void FUN_1474d49f6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474d4a58 FUN_1474d4a58 body=109 status=ok
// SIG undefined FUN_1474d4a58(void)

void FUN_1474d4a58(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar3;
      uVar2 = *(undefined8 *)(piVar3 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1474d4ac6(param_1,iVar1,0);
        FUN_1474d4b28(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1474d4ac6 FUN_1474d4ac6 body=98 status=ok
// SIG undefined FUN_1474d4ac6(void)

void FUN_1474d4ac6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474d4b28 FUN_1474d4b28 body=115 status=ok
// SIG undefined FUN_1474d4b28(void)

void FUN_1474d4b28(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447a127e(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1474d4b9c FUN_1474d4b9c body=98 status=ok
// SIG undefined FUN_1474d4b9c(void)

void FUN_1474d4b9c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d4cac FUN_1474d4cac body=164 status=ok
// SIG undefined FUN_1474d4cac(void)

undefined1 FUN_1474d4cac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0x48;
    bVar10 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -0x38 + lVar12) = *(undefined2 *)(param_3 + -0x38 + lVar12);
      *(undefined8 *)(param_2 + -0x40 + lVar12) = *(undefined8 *)(param_3 + -0x40 + lVar12);
      puVar1 = (undefined4 *)(param_3 + -0x30 + lVar12);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + -0x24 + lVar12);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + -0x24 + lVar12);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + -0x30 + lVar12);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar11 = *(longlong *)(param_3 + -0x10 + lVar12);
      if ((bVar10 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar11 = *(longlong *)(param_3 + -0x10 + lVar12);
          bVar10 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -0x10 + lVar12) = lVar11;
      *(undefined8 *)(param_2 + -8 + lVar12) = *(undefined8 *)(param_3 + -8 + lVar12);
      *(undefined8 *)(param_2 + lVar12) = *(undefined8 *)(param_3 + lVar12);
      lVar12 = lVar12 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d4d78 FUN_1474d4d78 body=59 status=ok
// SIG undefined FUN_1474d4d78(void)

undefined8 FUN_1474d4d78(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d4e1a FUN_1474d4e1a body=208 status=ok
// SIG undefined FUN_1474d4e1a(void)

undefined8 FUN_1474d4e1a(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_140002f2a();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d4fa8 FUN_1474d4fa8 body=59 status=ok
// SIG undefined FUN_1474d4fa8(void)

undefined8 FUN_1474d4fa8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d4ff4 FUN_1474d4ff4 body=38 status=ok
// SIG undefined FUN_1474d4ff4(void)

void FUN_1474d4ff4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1404eeab8(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1474d506e FUN_1474d506e body=115 status=ok
// SIG undefined FUN_1474d506e(void)

void FUN_1474d506e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d5152 FUN_1474d5152 body=59 status=ok
// SIG undefined FUN_1474d5152(void)

undefined8 FUN_1474d5152(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d5284 FUN_1474d5284 body=107 status=ok
// SIG undefined FUN_1474d5284(void)

undefined8 FUN_1474d5284(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined2 *)(param_2 + -0x20) = *(undefined2 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_140472df2(param_2,param_3);
      FUN_140472d9a(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d5318 FUN_1474d5318 body=59 status=ok
// SIG undefined FUN_1474d5318(void)

undefined8 FUN_1474d5318(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d535e FUN_1474d535e body=32 status=ok
// SIG undefined FUN_1474d535e(void)

void FUN_1474d535e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140280aac(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1474d5478 FUN_1474d5478 body=59 status=ok
// SIG undefined FUN_1474d5478(void)

undefined8 FUN_1474d5478(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d54be FUN_1474d54be body=32 status=ok
// SIG undefined FUN_1474d54be(void)

void FUN_1474d54be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140280aac(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1474d55ea FUN_1474d55ea body=54 status=ok
// SIG undefined FUN_1474d55ea(void)

undefined1 FUN_1474d55ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d1d14(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 1474d5648 FUN_1474d5648 body=59 status=ok
// SIG undefined FUN_1474d5648(void)

undefined8 FUN_1474d5648(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d568e FUN_1474d568e body=32 status=ok
// SIG undefined FUN_1474d568e(void)

void FUN_1474d568e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140280aac(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1474d5732 FUN_1474d5732 body=63 status=ok
// SIG undefined FUN_1474d5732(void)

undefined1 FUN_1474d5732(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d585c(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 1474d579a FUN_1474d579a body=59 status=ok
// SIG undefined FUN_1474d579a(void)

undefined8 FUN_1474d579a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d57e6 FUN_1474d57e6 body=40 status=ok
// SIG undefined FUN_1474d57e6(void)

void FUN_1474d57e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x130) == '\x01') {
    FUN_1474d592a(param_2);
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 1474d585c FUN_1474d585c body=204 status=ok
// SIG undefined FUN_1474d585c(void)

longlong FUN_1474d585c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_140d188f2(param_1 + 0x28,param_2 + 0x28);
  FUN_144a67f5c(param_1 + 0x78,param_2 + 0x78);
  FUN_1406fa324(param_1 + 0x88,param_2 + 0x88);
  FUN_144a67f5c(param_1 + 0x98,param_2 + 0x98);
  FUN_140d188f2(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  FUN_14475634e(param_1 + 0x100,param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  return param_1;
}



// FUNCTION 1474d592a FUN_1474d592a body=165 status=ok
// SIG undefined FUN_1474d592a(void)

void FUN_1474d592a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a422be0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x15);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 5);
  return;
}



// FUNCTION 1474d59d0 FUN_1474d59d0 body=98 status=ok
// SIG undefined FUN_1474d59d0(void)

void FUN_1474d59d0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474d5a32 FUN_1474d5a32 body=115 status=ok
// SIG undefined FUN_1474d5a32(void)

void FUN_1474d5a32(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1474d5aa6(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1474d5aa6 FUN_1474d5aa6 body=49 status=ok
// SIG undefined FUN_1474d5aa6(void)

void FUN_1474d5aa6(longlong param_1,int param_2,int param_3)

{
  if (param_3 < param_2) {
    FUN_144aa3680(param_1,0,param_2,1);
    param_3 = param_2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d5ad8 FUN_1474d5ad8 body=147 status=ok
// SIG undefined FUN_1474d5ad8(void)

void FUN_1474d5ad8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474d5c00 FUN_1474d5c00 body=154 status=ok
// SIG undefined FUN_1474d5c00(void)

undefined8 FUN_1474d5c00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar2 = param_2 + 0x18 + lVar3;
      *(undefined2 *)(lVar2 + -8) = *(undefined2 *)(param_3 + lVar3 + 0x10);
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(param_3 + lVar3 + 8);
      FUN_1404306dc();
      FUN_144a67f5c(param_2 + lVar3 + 0x28,param_3 + lVar3 + 0x28);
      lVar2 = param_2 + lVar3;
      lVar1 = param_3 + lVar3;
      FUN_144a67f5c(lVar2 + 0x38,lVar1 + 0x38);
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar1 + 0x48);
      *(undefined2 *)(lVar2 + 0x50) = *(undefined2 *)(lVar1 + 0x50);
      lVar3 = lVar3 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d5cc2 FUN_1474d5cc2 body=59 status=ok
// SIG undefined FUN_1474d5cc2(void)

undefined8 FUN_1474d5cc2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d5d08 FUN_1474d5d08 body=32 status=ok
// SIG undefined FUN_1474d5d08(void)

void FUN_1474d5d08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14179840a(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1474d5d76 FUN_1474d5d76 body=38 status=ok
// SIG undefined FUN_1474d5d76(void)

undefined8 FUN_1474d5d76(undefined8 param_1,int param_2)

{
  FUN_14179840a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d5d9c FUN_1474d5d9c body=55 status=ok
// SIG undefined FUN_1474d5d9c(void)

void FUN_1474d5d9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa2e8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa2e8 = FUN_140002ddd(FUN_146331163,uVar1,L"AnimNode_MultiWayBlend");
  }
  return;
}



// FUNCTION 1474d5ef4 FUN_1474d5ef4 body=63 status=ok
// SIG undefined FUN_1474d5ef4(void)

undefined1 FUN_1474d5ef4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d6038(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 1474d5f5c FUN_1474d5f5c body=59 status=ok
// SIG undefined FUN_1474d5f5c(void)

undefined8 FUN_1474d5f5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d5fa8 FUN_1474d5fa8 body=65 status=ok
// SIG undefined FUN_1474d5fa8(void)

void FUN_1474d5fa8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    *param_2 = &PTR_FUN_14a423190;
    if (param_2[0x19] != 0) {
      FUN_1400020a8();
    }
    FUN_1474d64f6(param_2);
    *(undefined1 *)(param_2 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 1474d6038 FUN_1474d6038 body=126 status=ok
// SIG undefined FUN_1474d6038(void)

longlong FUN_1474d6038(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_140e0115a();
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  uVar1 = *(undefined4 *)(param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0xb0);
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  lVar4 = *(longlong *)(param_2 + 0xc0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0xc0);
    }
  }
  *(longlong *)(param_1 + 0xc0) = lVar4;
  FUN_1474d6118(param_1 + 200,param_2 + 200);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  return param_1;
}



// FUNCTION 1474d60b6 FUN_1474d60b6 body=98 status=ok
// SIG undefined FUN_1474d60b6(void)

void FUN_1474d60b6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474d6118 FUN_1474d6118 body=89 status=ok
// SIG undefined FUN_1474d6118(void)

undefined8 * FUN_1474d6118(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474d6172(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474d6172 FUN_1474d6172 body=115 status=ok
// SIG undefined FUN_1474d6172(void)

void FUN_1474d6172(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474d61e6 FUN_1474d61e6 body=38 status=ok
// SIG undefined FUN_1474d61e6(void)

undefined8 FUN_1474d61e6(undefined8 param_1,int param_2)

{
  FUN_1474d64f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d620c FUN_1474d620c body=55 status=ok
// SIG undefined FUN_1474d620c(void)

void FUN_1474d620c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa3c0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa3c0 = FUN_140002ddd(FUN_146331228,uVar1,L"AnimNode_PoseHandler");
  }
  return;
}



// FUNCTION 1474d6348 FUN_1474d6348 body=104 status=ok
// SIG undefined FUN_1474d6348(void)

undefined8 FUN_1474d6348(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e0115a(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xac);
    uVar2 = *(undefined4 *)(param_3 + 0xb0);
    uVar3 = *(undefined4 *)(param_3 + 0xb4);
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_3 + 0xa8);
    *(undefined4 *)(param_2 + 0xac) = uVar1;
    *(undefined4 *)(param_2 + 0xb0) = uVar2;
    *(undefined4 *)(param_2 + 0xb4) = uVar3;
    *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_3 + 0xb8);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 1474d63d8 FUN_1474d63d8 body=59 status=ok
// SIG undefined FUN_1474d63d8(void)

undefined8 FUN_1474d63d8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d6424 FUN_1474d6424 body=38 status=ok
// SIG undefined FUN_1474d6424(void)

void FUN_1474d6424(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1474d64f6(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1474d6498 FUN_1474d6498 body=38 status=ok
// SIG undefined FUN_1474d6498(void)

undefined8 FUN_1474d6498(undefined8 param_1,int param_2)

{
  FUN_1474d64f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d64be FUN_1474d64be body=55 status=ok
// SIG undefined FUN_1474d64be(void)

void FUN_1474d64be(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa318 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa318 = FUN_140002ddd(FUN_1463312c1,uVar1,L"AnimNode_PoseByName");
  }
  return;
}



// FUNCTION 1474d64f6 FUN_1474d64f6 body=97 status=ok
// SIG undefined FUN_1474d64f6(void)

void FUN_1474d64f6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a42b090;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x91) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x91) = 0;
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1474d65f6 FUN_1474d65f6 body=59 status=ok
// SIG undefined FUN_1474d65f6(void)

undefined8 FUN_1474d65f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d66be FUN_1474d66be body=153 status=ok
// SIG undefined FUN_1474d66be(void)

undefined8 FUN_1474d66be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
    do {
      FUN_1474d6892(param_2 + -0xa0,param_3 + -0xa0);
      uVar1 = *(undefined4 *)(param_3 + -0x8c);
      uVar2 = *(undefined4 *)(param_3 + -0x88);
      uVar3 = *(undefined4 *)(param_3 + -0x84);
      uVar4 = *(undefined4 *)(param_3 + -0x81);
      uVar5 = *(undefined4 *)(param_3 + -0x7d);
      uVar6 = *(undefined4 *)(param_3 + -0x79);
      uVar7 = *(undefined4 *)(param_3 + -0x75);
      *(undefined4 *)(param_2 + -0x90) = *(undefined4 *)(param_3 + -0x90);
      *(undefined4 *)(param_2 + -0x8c) = uVar1;
      *(undefined4 *)(param_2 + -0x88) = uVar2;
      *(undefined4 *)(param_2 + -0x84) = uVar3;
      *(undefined4 *)(param_2 + -0x81) = uVar4;
      *(undefined4 *)(param_2 + -0x7d) = uVar5;
      *(undefined4 *)(param_2 + -0x79) = uVar6;
      *(undefined4 *)(param_2 + -0x75) = uVar7;
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined2 *)(param_2 + -4) = *(undefined2 *)(param_3 + -4);
      FUN_14093c00e(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
      param_3 = param_3 + 200;
      param_2 = param_2 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d6780 FUN_1474d6780 body=59 status=ok
// SIG undefined FUN_1474d6780(void)

undefined8 FUN_1474d6780(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d67cc FUN_1474d67cc body=38 status=ok
// SIG undefined FUN_1474d67cc(void)

void FUN_1474d67cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_1474d6840(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 1474d6840 FUN_1474d6840 body=82 status=ok
// SIG undefined FUN_1474d6840(void)

void FUN_1474d6840(longlong *param_1)

{
  param_1[6] = (longlong)&DAT_14a176f00;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = (longlong)&PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 7);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474d6892 FUN_1474d6892 body=89 status=ok
// SIG undefined FUN_1474d6892(void)

undefined8 * FUN_1474d6892(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140e01070(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474d6932 FUN_1474d6932 body=59 status=ok
// SIG undefined FUN_1474d6932(void)

undefined8 FUN_1474d6932(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d697e FUN_1474d697e body=38 status=ok
// SIG undefined FUN_1474d697e(void)

void FUN_1474d697e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_140d46c7a(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 1474d69f2 FUN_1474d69f2 body=98 status=ok
// SIG undefined FUN_1474d69f2(void)

void FUN_1474d69f2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d6a54 FUN_1474d6a54 body=115 status=ok
// SIG undefined FUN_1474d6a54(void)

void FUN_1474d6a54(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d6ac7 FUN_1474d6ac7 body=60 status=ok
// SIG undefined FUN_1474d6ac7(void)

void FUN_1474d6ac7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1474d6b04(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 1474d6b04 FUN_1474d6b04 body=129 status=ok
// SIG undefined FUN_1474d6b04(void)

undefined8 * FUN_1474d6b04(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1447c510a(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_140501b78(param_1 + 3,param_2 + 3);
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_2 + 0x13);
  return param_1;
}



// FUNCTION 1474d6c5a FUN_1474d6c5a body=63 status=ok
// SIG undefined FUN_1474d6c5a(void)

undefined1 FUN_1474d6c5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e0115a(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1474d6cc2 FUN_1474d6cc2 body=59 status=ok
// SIG undefined FUN_1474d6cc2(void)

undefined8 FUN_1474d6cc2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d6d0e FUN_1474d6d0e body=38 status=ok
// SIG undefined FUN_1474d6d0e(void)

void FUN_1474d6d0e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1474d64f6(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1474d6e30 FUN_1474d6e30 body=63 status=ok
// SIG undefined FUN_1474d6e30(void)

undefined1 FUN_1474d6e30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d6f58(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1474d6e98 FUN_1474d6e98 body=59 status=ok
// SIG undefined FUN_1474d6e98(void)

undefined8 FUN_1474d6e98(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d6ee4 FUN_1474d6ee4 body=38 status=ok
// SIG undefined FUN_1474d6ee4(void)

void FUN_1474d6ee4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_14328827e(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1474d6f58 FUN_1474d6f58 body=146 status=ok
// SIG undefined FUN_1474d6f58(void)

longlong FUN_1474d6f58(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_144756208(param_1 + 0x20,param_2 + 0x20);
  FUN_1406fa324(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  FUN_14054c6c4(param_1 + 0x60,param_2 + 0x60);
  FUN_1406fa324(param_1 + 0x70,param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 1474d7094 FUN_1474d7094 body=54 status=ok
// SIG undefined FUN_1474d7094(void)

undefined1 FUN_1474d7094(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d7192(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1474d70f2 FUN_1474d70f2 body=59 status=ok
// SIG undefined FUN_1474d70f2(void)

undefined8 FUN_1474d70f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d7192 FUN_1474d7192 body=127 status=ok
// SIG undefined FUN_1474d7192(void)

longlong * FUN_1474d7192(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar6 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *param_2;
    }
  }
  bVar5 = DAT_14c950c29;
  *param_1 = lVar6;
  *(int *)(param_1 + 3) = (int)param_2[3];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar6 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  lVar6 = param_2[4];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[4];
    }
  }
  param_1[4] = lVar6;
  lVar6 = param_2[6];
  lVar3 = param_2[7];
  lVar4 = param_2[8];
  param_1[5] = param_2[5];
  param_1[6] = lVar6;
  param_1[7] = lVar3;
  param_1[8] = lVar4;
  *(int *)(param_1 + 9) = (int)param_2[9];
  return param_1;
}



// FUNCTION 1474d72b2 FUN_1474d72b2 body=63 status=ok
// SIG undefined FUN_1474d72b2(void)

undefined1 FUN_1474d72b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d73dc(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1474d731a FUN_1474d731a body=59 status=ok
// SIG undefined FUN_1474d731a(void)

undefined8 FUN_1474d731a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d7366 FUN_1474d7366 body=40 status=ok
// SIG undefined FUN_1474d7366(void)

void FUN_1474d7366(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1474d774e(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1474d73dc FUN_1474d73dc body=125 status=ok
// SIG undefined FUN_1474d73dc(void)

longlong FUN_1474d73dc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_1474d745a(param_1 + 0x18,param_2 + 0x18);
  FUN_1474d74aa(param_1 + 0x28,param_2 + 0x28);
  FUN_144a67f5c(param_1 + 0x38,param_2 + 0x38);
  FUN_1474d7502(param_1 + 0x48,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_14054c6c4(param_1 + 0x60,param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x75);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x75) = uVar1;
  return param_1;
}



// FUNCTION 1474d745a FUN_1474d745a body=79 status=ok
// SIG undefined FUN_1474d745a(void)

undefined8 * FUN_1474d745a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474d7558(param_1,iVar1);
      FUN_1474d75cb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1474d74aa FUN_1474d74aa body=88 status=ok
// SIG undefined FUN_1474d74aa(void)

undefined8 * FUN_1474d74aa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474d767c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474d7502 FUN_1474d7502 body=85 status=ok
// SIG undefined FUN_1474d7502(void)

undefined8 * FUN_1474d7502(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474d76de(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474d7558 FUN_1474d7558 body=115 status=ok
// SIG undefined FUN_1474d7558(void)

void FUN_1474d7558(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d75cb FUN_1474d75cb body=52 status=ok
// SIG undefined FUN_1474d75cb(void)

void FUN_1474d75cb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1474d7600(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 1474d7600 FUN_1474d7600 body=124 status=ok
// SIG undefined FUN_1474d7600(void)

longlong * FUN_1474d7600(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar6 = DAT_14c950c29;
  *(int *)(param_1 + 3) = (int)param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar1 = param_2[2];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(int *)(param_1 + 2) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  if ((lVar1 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 9) = (int)param_2[9];
  lVar1 = param_2[5];
  lVar4 = param_2[6];
  lVar5 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = lVar5;
  param_1[5] = lVar1;
  param_1[6] = lVar4;
  return param_1;
}



// FUNCTION 1474d767c FUN_1474d767c body=98 status=ok
// SIG undefined FUN_1474d767c(void)

void FUN_1474d767c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474d76de FUN_1474d76de body=111 status=ok
// SIG undefined FUN_1474d76de(void)

void FUN_1474d76de(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d774e FUN_1474d774e body=100 status=ok
// SIG undefined FUN_1474d774e(void)

void FUN_1474d774e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a424ab0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
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
    return;
  }
  return;
}



// FUNCTION 1474d77e6 FUN_1474d77e6 body=93 status=ok
// SIG undefined FUN_1474d77e6(void)

undefined8 FUN_1474d77e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x18;
    do {
      *(undefined2 *)(param_2 + -8 + lVar1) = *(undefined2 *)(param_3 + -8 + lVar1);
      *(undefined8 *)(param_2 + -0x10 + lVar1) = *(undefined8 *)(param_3 + -0x10 + lVar1);
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x9c);
      lVar1 = lVar1 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d786c FUN_1474d786c body=59 status=ok
// SIG undefined FUN_1474d786c(void)

undefined8 FUN_1474d786c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d7960 FUN_1474d7960 body=59 status=ok
// SIG undefined FUN_1474d7960(void)

undefined8 FUN_1474d7960(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d79ac FUN_1474d79ac body=38 status=ok
// SIG undefined FUN_1474d79ac(void)

void FUN_1474d79ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 1474d7a22 FUN_1474d7a22 body=37 status=ok
// SIG undefined FUN_1474d7a22(void)

void FUN_1474d7a22(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x118);
  FUN_1474d7c14(param_2);
  return;
}



// FUNCTION 1474d7a74 FUN_1474d7a74 body=183 status=ok
// SIG undefined FUN_1474d7a74(void)

undefined1 FUN_1474d7a74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d0b7a(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x74);
    uVar2 = *(undefined4 *)(param_3 + 0x78);
    uVar3 = *(undefined4 *)(param_3 + 0x7c);
    uVar4 = *(undefined4 *)(param_3 + 0x80);
    uVar5 = *(undefined4 *)(param_3 + 0x84);
    uVar6 = *(undefined4 *)(param_3 + 0x88);
    uVar7 = *(undefined4 *)(param_3 + 0x8c);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x74) = uVar1;
    *(undefined4 *)(param_2 + 0x78) = uVar2;
    *(undefined4 *)(param_2 + 0x7c) = uVar3;
    *(undefined4 *)(param_2 + 0x80) = uVar4;
    *(undefined4 *)(param_2 + 0x84) = uVar5;
    *(undefined4 *)(param_2 + 0x88) = uVar6;
    *(undefined4 *)(param_2 + 0x8c) = uVar7;
    FUN_14123bd80(param_2 + 0x90,param_3 + 0x90);
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
    uVar12 = *(undefined4 *)(param_3 + 0x107);
    uVar13 = *(undefined4 *)(param_3 + 0x10b);
    uVar14 = *(undefined4 *)(param_3 + 0x10f);
    uVar15 = *(undefined4 *)(param_3 + 0x113);
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
    *(undefined4 *)(param_2 + 0x107) = uVar12;
    *(undefined4 *)(param_2 + 0x10b) = uVar13;
    *(undefined4 *)(param_2 + 0x10f) = uVar14;
    *(undefined4 *)(param_2 + 0x113) = uVar15;
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 1474d7b54 FUN_1474d7b54 body=59 status=ok
// SIG undefined FUN_1474d7b54(void)

undefined8 FUN_1474d7b54(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d7ba0 FUN_1474d7ba0 body=38 status=ok
// SIG undefined FUN_1474d7ba0(void)

void FUN_1474d7ba0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1474d7d72(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 1474d7c14 FUN_1474d7c14 body=247 status=ok
// SIG undefined FUN_1474d7c14(void)

undefined8 * FUN_1474d7c14(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *param_1 = &PTR_FUN_14a42c4d0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined1 **)((longlong)param_1 + 0x84) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x92) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  FUN_1404163bc(param_1 + 0x15);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1e] = &DAT_3f8000003f800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x412000003f800000;
  *(undefined4 *)(param_1 + 0x21) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x113) = 0;
  return param_1;
}



// FUNCTION 1474d7d0c FUN_1474d7d0c body=38 status=ok
// SIG undefined FUN_1474d7d0c(void)

undefined8 FUN_1474d7d0c(undefined8 param_1,int param_2)

{
  FUN_1474d7d72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d7d32 FUN_1474d7d32 body=55 status=ok
// SIG undefined FUN_1474d7d32(void)

void FUN_1474d7d32(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa468 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa468 = FUN_140002ddd(FUN_14633192d,uVar1,L"AnimNode_RotationOffsetBlendSpaceGraph");
  }
  return;
}



// FUNCTION 1474d7d72 FUN_1474d7d72 body=99 status=ok
// SIG undefined FUN_1474d7d72(void)

void FUN_1474d7d72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a426730;
  FUN_1448d844e(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140280a77(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474d7eda FUN_1474d7eda body=59 status=ok
// SIG undefined FUN_1474d7eda(void)

undefined8 FUN_1474d7eda(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d7f7a FUN_1474d7f7a body=29 status=ok
// SIG undefined FUN_1474d7f7a(void)

undefined8 FUN_1474d7f7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d7f98 FUN_1474d7f98 body=55 status=ok
// SIG undefined FUN_1474d7f98(void)

void FUN_1474d7f98(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa498 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa498 = FUN_140002ddd(FUN_1463319f3,uVar1,L"AnimNode_SequenceEvaluatorBase");
  }
  return;
}



// FUNCTION 1474d812c FUN_1474d812c body=59 status=ok
// SIG undefined FUN_1474d812c(void)

undefined8 FUN_1474d812c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d81cc FUN_1474d81cc body=29 status=ok
// SIG undefined FUN_1474d81cc(void)

undefined8 FUN_1474d81cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d81ea FUN_1474d81ea body=55 status=ok
// SIG undefined FUN_1474d81ea(void)

void FUN_1474d81ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa4b0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar1,L"AnimNode_SequenceEvaluator");
  }
  return;
}



// FUNCTION 1474d827c FUN_1474d827c body=210 status=ok
// SIG undefined FUN_1474d827c(void)

undefined1 FUN_1474d827c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0x60;
    bVar11 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -0x50 + lVar13) = *(undefined2 *)(param_3 + -0x50 + lVar13);
      *(undefined8 *)(param_2 + -0x58 + lVar13) = *(undefined8 *)(param_3 + -0x58 + lVar13);
      puVar1 = (undefined4 *)(param_3 + -0x48 + lVar13);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + -0x38 + lVar13);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + -0x48 + lVar13);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + -0x38 + lVar13);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(undefined8 *)(param_2 + -0x2b + lVar13) = *(undefined8 *)(param_3 + -0x2b + lVar13);
      *(undefined1 *)(param_2 + -0x20 + lVar13) = *(undefined1 *)(param_3 + -0x20 + lVar13);
      *(undefined4 *)(param_2 + -0x11 + lVar13) = *(undefined4 *)(param_3 + -0x11 + lVar13);
      *(undefined8 *)(param_2 + -0x18 + lVar13) = *(undefined8 *)(param_3 + -0x18 + lVar13);
      lVar12 = *(longlong *)(param_3 + -8 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + -8 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -8 + lVar13) = lVar12;
      uVar10 = ((undefined8 *)(param_3 + lVar13))[1];
      *(undefined8 *)(param_2 + lVar13) = *(undefined8 *)(param_3 + lVar13);
      ((undefined8 *)(param_2 + lVar13))[1] = uVar10;
      *(undefined4 *)(param_2 + 0x10 + lVar13) = *(undefined4 *)(param_3 + 0x10 + lVar13);
      lVar13 = lVar13 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d8376 FUN_1474d8376 body=59 status=ok
// SIG undefined FUN_1474d8376(void)

undefined8 FUN_1474d8376(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d8416 FUN_1474d8416 body=29 status=ok
// SIG undefined FUN_1474d8416(void)

undefined8 FUN_1474d8416(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d8434 FUN_1474d8434 body=55 status=ok
// SIG undefined FUN_1474d8434(void)

void FUN_1474d8434(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa4c8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa4c8 = FUN_140002ddd(FUN_146331ae8,uVar1,L"AnimNode_SequenceEvaluator_Standalone");
  }
  return;
}



// FUNCTION 1474d852c FUN_1474d852c body=59 status=ok
// SIG undefined FUN_1474d852c(void)

undefined8 FUN_1474d852c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d8578 FUN_1474d8578 body=49 status=ok
// SIG undefined FUN_1474d8578(void)

void FUN_1474d8578(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1cf) == '\x01') {
    *param_2 = &PTR_FUN_14a4263e0;
    FUN_140280878(param_2 + 10);
    *(undefined1 *)(param_2 + 0x1cf) = 0;
  }
  return;
}



// FUNCTION 1474d85fa FUN_1474d85fa body=29 status=ok
// SIG undefined FUN_1474d85fa(void)

undefined8 FUN_1474d85fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d8648 FUN_1474d8648 body=79 status=ok
// SIG undefined FUN_1474d8648(void)

undefined8 * FUN_1474d8648(undefined8 *param_1,longlong *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    FUN_144a5eaa2(param_1,-*(int *)((longlong)param_2 + 0x5c) &
                          ((int)param_2[0xb] + *(int *)((longlong)param_2 + 0x5c)) - 1U,1);
    (**(code **)(*param_2 + 0x2e8))(param_2,*param_1,1);
  }
  return param_1;
}



// FUNCTION 1474d8698 FUN_1474d8698 body=96 status=ok
// SIG undefined FUN_1474d8698(void)

void FUN_1474d8698(longlong param_1,int param_2)

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



// FUNCTION 1474d86f8 FUN_1474d86f8 body=132 status=ok
// SIG undefined FUN_1474d86f8(void)

void FUN_1474d86f8(longlong param_1,int param_2)

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



// FUNCTION 1474d877e FUN_1474d877e body=132 status=ok
// SIG undefined FUN_1474d877e(void)

void FUN_1474d877e(longlong param_1,int param_2)

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



// FUNCTION 1474d8804 FUN_1474d8804 body=71 status=ok
// SIG undefined FUN_1474d8804(void)

longlong FUN_1474d8804(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_1463a5c5a(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 1474d884c FUN_1474d884c body=71 status=ok
// SIG undefined FUN_1474d884c(void)

longlong FUN_1474d884c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
      (lVar2 = FUN_1417b4e5c(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return *param_1;
  }
  return 0;
}



// FUNCTION 1474d8894 FUN_1474d8894 body=107 status=ok
// SIG undefined FUN_1474d8894(void)

longlong * FUN_1474d8894(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1402e44f4();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1474d8900 FUN_1474d8900 body=312 status=ok
// SIG undefined FUN_1474d8900(void)

undefined4 * FUN_1474d8900(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474d8a3a(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1474d8b20(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1474d8c0e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d8a3a FUN_1474d8a3a body=229 status=ok
// SIG undefined FUN_1474d8a3a(void)

int * FUN_1474d8a3a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1474d8b20 FUN_1474d8b20 body=124 status=ok
// SIG undefined FUN_1474d8b20(void)

undefined8 FUN_1474d8b20(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_1474d8b9c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1474d8b9c FUN_1474d8b9c body=114 status=ok
// SIG undefined FUN_1474d8b9c(void)

void FUN_1474d8b9c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1474d8c0e FUN_1474d8c0e body=477 status=ok
// SIG undefined FUN_1474d8c0e(void)

void FUN_1474d8c0e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474d8dec FUN_1474d8dec body=326 status=ok
// SIG undefined FUN_1474d8dec(void)

undefined4 * FUN_1474d8dec(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474d8f34(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1474d901a(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1474d910c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d8f34 FUN_1474d8f34 body=230 status=ok
// SIG undefined FUN_1474d8f34(void)

int * FUN_1474d8f34(longlong *param_1,int *param_2)

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



// FUNCTION 1474d901a FUN_1474d901a body=128 status=ok
// SIG undefined FUN_1474d901a(void)

undefined8 FUN_1474d901a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1474d909a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1474d909a FUN_1474d909a body=114 status=ok
// SIG undefined FUN_1474d909a(void)

void FUN_1474d909a(longlong *param_1,int param_2)

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



// FUNCTION 1474d910c FUN_1474d910c body=474 status=ok
// SIG undefined FUN_1474d910c(void)

void FUN_1474d910c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474d92e8 FUN_1474d92e8 body=95 status=ok
// SIG undefined FUN_1474d92e8(void)

void FUN_1474d92e8(longlong param_1,uint param_2)

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



// FUNCTION 1474d9348 FUN_1474d9348 body=132 status=ok
// SIG undefined FUN_1474d9348(void)

void FUN_1474d9348(longlong param_1,int param_2)

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



// FUNCTION 1474d93ce FUN_1474d93ce body=52 status=ok
// SIG undefined FUN_1474d93ce(void)

void FUN_1474d93ce(longlong *param_1)

{
  FUN_1474d9402();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474d9402 FUN_1474d9402 body=89 status=ok
// SIG undefined FUN_1474d9402(void)

void FUN_1474d9402(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 1474d945c FUN_1474d945c body=52 status=ok
// SIG undefined FUN_1474d945c(void)

void FUN_1474d945c(longlong *param_1)

{
  FUN_1474d9490();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474d9490 FUN_1474d9490 body=89 status=ok
// SIG undefined FUN_1474d9490(void)

void FUN_1474d9490(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1474d94ea FUN_1474d94ea body=31 status=ok
// SIG undefined FUN_1474d94ea(void)

undefined8 FUN_1474d94ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d9526 FUN_1474d9526 body=93 status=ok
// SIG undefined FUN_1474d9526(void)

void FUN_1474d9526(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a42d250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1474d9584 FUN_1474d9584 body=126 status=ok
// SIG undefined FUN_1474d9584(void)

void FUN_1474d9584(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a42d250;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474d95f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1474d9602 FUN_1474d9602 body=21 status=ok
// SIG undefined FUN_1474d9602(void)

undefined8 FUN_1474d9602(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1474d961c FUN_1474d961c body=48 status=ok
// SIG undefined FUN_1474d961c(void)

void FUN_1474d961c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x24,4);
  }
  return;
}



// FUNCTION 1474d964c FUN_1474d964c body=147 status=ok
// SIG undefined FUN_1474d964c(void)

void FUN_1474d964c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474d96e0 FUN_1474d96e0 body=132 status=ok
// SIG undefined FUN_1474d96e0(void)

void FUN_1474d96e0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474d9766 FUN_1474d9766 body=29 status=ok
// SIG undefined FUN_1474d9766(void)

undefined8 FUN_1474d9766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d9796 FUN_1474d9796 body=293 status=ok
// SIG undefined FUN_1474d9796(void)

undefined4 * FUN_1474d9796(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405dc782(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_140263f5a(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140264164(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474d98bc FUN_1474d98bc body=71 status=ok
// SIG undefined FUN_1474d98bc(void)

undefined8 * FUN_1474d98bc(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_14a42d300;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return puVar2;
}



// FUNCTION 1474d9904 FUN_1474d9904 body=38 status=ok
// SIG undefined FUN_1474d9904(void)

undefined8 FUN_1474d9904(undefined8 param_1,int param_2)

{
  FUN_1474d9974();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d992a FUN_1474d992a body=74 status=ok
// SIG undefined FUN_1474d992a(void)

undefined8 * FUN_1474d992a(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a42d308;
  puVar1 = TlsGetValue(DAT_14c760f80);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c760f80,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d9974 FUN_1474d9974 body=85 status=ok
// SIG undefined FUN_1474d9974(void)

void FUN_1474d9974(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a42d300;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42d308;
  puVar1 = TlsGetValue(DAT_14c760f80);
  if (puVar1 != param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001474d99c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_14c760f80,(LPVOID)0x0);
  return;
}



// FUNCTION 1474d99ca FUN_1474d99ca body=48 status=ok
// SIG undefined FUN_1474d99ca(void)

void FUN_1474d99ca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 1474d99fa FUN_1474d99fa body=619 status=ok
// SIG undefined FUN_1474d99fa(void)

void FUN_1474d99fa(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar6;
joined_r0x0001474d9a2f:
    do {
      iVar10 = iVar6 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar6 * 2 + 2;
        if (iVar11 < (int)param_2) {
          iVar8 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0xc) -
                  *(int *)((longlong)param_1 + (longlong)iVar10 * 0xc);
          if (iVar8 == 0) {
            iVar8 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0xc + 4) -
                    *(int *)((longlong)param_1 + (longlong)iVar10 * 0xc + 4);
          }
          if (-1 < iVar8) {
            iVar10 = iVar11;
          }
        }
        lVar9 = (longlong)iVar6;
        lVar13 = (longlong)iVar10;
        iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc) -
                *(int *)((longlong)param_1 + lVar13 * 0xc);
        if (iVar6 == 0) {
          iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc + 4) -
                  *(int *)((longlong)param_1 + lVar13 * 0xc + 4);
        }
        if (iVar6 < 0) {
          puVar2 = (undefined8 *)((longlong)param_1 + lVar9 * 0xc);
          puVar3 = (undefined8 *)((longlong)param_1 + lVar13 * 0xc);
          local_20 = *(undefined4 *)(puVar2 + 1);
          local_28 = *puVar2;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar3 + 1) = local_20;
          *puVar3 = local_28;
          iVar6 = iVar10;
          goto joined_r0x0001474d9a2f;
        }
      }
      bVar14 = iVar12 != 0;
      iVar6 = iVar12 + -1;
      iVar12 = iVar6;
    } while (bVar14);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2 - 1;
      local_20 = *(undefined4 *)(param_1 + 1);
      local_28 = *param_1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar7 * 0xc + 8);
      *param_1 = *(undefined8 *)((longlong)param_1 + uVar7 * 0xc);
      *(undefined4 *)((longlong)param_1 + uVar7 * 0xc + 8) = local_20;
      *(undefined8 *)((longlong)param_1 + uVar7 * 0xc) = local_28;
      if (param_2 != 2) {
        do {
          iVar6 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            lVar9 = (longlong)(iVar6 + 2);
            iVar11 = iVar10;
            if (lVar9 < (longlong)uVar7) {
              iVar8 = *(int *)((longlong)param_1 + lVar9 * 0xc) -
                      *(int *)((longlong)param_1 + (longlong)iVar10 * 0xc);
              if (iVar8 == 0) {
                iVar8 = *(int *)((longlong)param_1 + lVar9 * 0xc + 4) -
                        *(int *)((longlong)param_1 + (longlong)iVar10 * 0xc + 4);
              }
              if (-1 < iVar8) {
                iVar11 = iVar6 + 2;
              }
            }
            lVar9 = (longlong)iVar12;
            lVar13 = (longlong)iVar11;
            iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc) -
                    *(int *)((longlong)param_1 + lVar13 * 0xc);
            if (iVar6 == 0) {
              iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc + 4) -
                      *(int *)((longlong)param_1 + lVar13 * 0xc + 4);
            }
            if (-1 < iVar6) break;
            puVar2 = (undefined8 *)((longlong)param_1 + lVar9 * 0xc);
            puVar3 = (undefined8 *)((longlong)param_1 + lVar13 * 0xc);
            uVar4 = *(undefined4 *)(puVar2 + 1);
            uVar5 = *puVar2;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
            *puVar2 = *puVar3;
            *(undefined4 *)(puVar3 + 1) = uVar4;
            *puVar3 = uVar5;
            iVar6 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar7);
          uVar1 = uVar7 - 1;
          local_20 = *(undefined4 *)(param_1 + 1);
          local_28 = *param_1;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8);
          *param_1 = *(undefined8 *)((longlong)param_1 + uVar1 * 0xc);
          *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8) = local_20;
          *(undefined8 *)((longlong)param_1 + uVar1 * 0xc) = local_28;
          bVar14 = 2 < uVar7;
          uVar7 = uVar1;
        } while (bVar14);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474d9c66 FUN_1474d9c66 body=453 status=ok
// SIG undefined FUN_1474d9c66(void)

void FUN_1474d9c66(longlong *param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 == 0) {
    return;
  }
  uVar10 = *(uint *)(param_1 + 1);
  if ((char)param_1[2] == '\0') {
    FUN_144716af1(*param_1,uVar10);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  if ((char)param_2[2] == '\0') {
    FUN_144716af1(*param_2,(int)param_2[1]);
    *(undefined1 *)(param_2 + 2) = 1;
  }
  uVar11 = uVar10;
  if ((int)uVar10 < (int)uVar2) {
    uVar11 = uVar2;
  }
  iVar8 = (int)uVar11 / 2 + uVar11;
  if (-1 < iVar8) {
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      FUN_14480ffb8(param_1);
    }
    uVar11 = 0;
    if (uVar10 != 0 || (int)uVar2 < 1) {
      uVar9 = 0;
      lVar12 = 0xc;
      uVar11 = 0;
      do {
        if ((uVar11 == uVar2) && ((longlong)uVar9 <= (longlong)(int)uVar10)) {
          return;
        }
        lVar3 = *param_1;
        puVar6 = (undefined8 *)(*param_2 + (longlong)(int)uVar11 * 0x10);
        lVar4 = *(longlong *)(*param_2 + (longlong)(int)uVar11 * 0x10);
        lVar5 = *(longlong *)(lVar3 + -0xc + lVar12);
        if (lVar5 == lVar4) {
          fVar1 = *(float *)(lVar3 + -4 + lVar12);
          *(float *)(lVar3 + -4 + lVar12) = (*(float *)(puVar6 + 1) - fVar1) * *param_3 + fVar1;
          *(byte *)(lVar3 + lVar12) = *(byte *)(lVar3 + lVar12) | *(byte *)((longlong)puVar6 + 0xc);
LAB_1474d9dc2:
          uVar11 = uVar11 + 1;
        }
        else {
          iVar8 = (int)lVar5 - (int)lVar4;
          if (iVar8 == 0) {
            iVar8 = (int)((ulonglong)lVar5 >> 0x20) - (int)((ulonglong)lVar4 >> 0x20);
          }
          if (-1 < iVar8) {
            puVar7 = (undefined8 *)FUN_144a1cc74(param_1,uVar9 & 0xffffffff);
            uVar10 = *(uint *)(param_1 + 1);
            *puVar7 = *puVar6;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
            *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)puVar6 + 0xc);
            goto LAB_1474d9dc2;
          }
        }
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 0x10;
      } while (uVar9 != uVar10 || (int)uVar2 <= (int)uVar11);
    }
    iVar8 = (uVar2 - uVar11) + (int)param_1[1];
    if (-1 < iVar8) {
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        FUN_14480ffb8(param_1);
      }
      iVar8 = uVar2 - uVar11;
      if (iVar8 == 0 || (int)uVar2 < (int)uVar11) {
        return;
      }
      uVar9 = (longlong)(int)uVar11 << 4 | 0xc;
      do {
        lVar12 = *param_2;
        puVar6 = (undefined8 *)FUN_14470c6b2(param_1);
        *puVar6 = *(undefined8 *)(lVar12 + -0xc + uVar9);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(lVar12 + -4 + uVar9);
        *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)(lVar12 + uVar9);
        uVar9 = uVar9 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar8);
}



// FUNCTION 1474d9e2c FUN_1474d9e2c body=524 status=ok
// SIG undefined FUN_1474d9e2c(void)

void FUN_1474d9e2c(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar5;
joined_r0x0001474d9e61:
    do {
      iVar8 = iVar5 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar11 = iVar5 * 2 + 2;
        if (iVar11 < (int)param_2) {
          iVar7 = *(int *)(param_1 + (longlong)iVar11 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2)
          ;
          if (*(int *)(param_1 + (longlong)iVar11 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2) ==
              0) {
            iVar7 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0x10 + 4) -
                    *(int *)((longlong)param_1 + (longlong)iVar8 * 0x10 + 4);
          }
          if (-1 < iVar7) {
            iVar8 = iVar11;
          }
        }
        lVar9 = (longlong)iVar5;
        lVar13 = (longlong)iVar8;
        iVar5 = *(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2);
        if (*(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2) == 0) {
          iVar5 = *(int *)((longlong)param_1 + lVar9 * 0x10 + 4) -
                  *(int *)((longlong)param_1 + lVar13 * 0x10 + 4);
        }
        if (iVar5 < 0) {
          puVar10 = param_1 + lVar9 * 2;
          puVar14 = param_1 + lVar13 * 2;
          uVar2 = *puVar10;
          uVar3 = puVar10[1];
          uVar4 = puVar14[1];
          *puVar10 = *puVar14;
          puVar10[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar14 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_20._4_4_;
          iVar5 = iVar8;
          local_28 = uVar2;
          uStack_20 = uVar3;
          goto joined_r0x0001474d9e61;
        }
      }
      bVar15 = iVar12 != 0;
      iVar5 = iVar12 + -1;
      iVar12 = iVar5;
    } while (bVar15);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar6 * 2)[1];
      *param_1 = param_1[uVar6 * 2];
      param_1[1] = uVar4;
      local_28._0_4_ = (undefined4)uVar2;
      local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar3;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar10 = param_1 + uVar6 * 2;
      *(undefined4 *)puVar10 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar10 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_20._4_4_;
      local_28 = uVar2;
      uStack_20 = uVar3;
      if (param_2 != 2) {
        do {
          iVar5 = 0;
          iVar8 = 1;
          iVar12 = 0;
          do {
            lVar9 = (longlong)(iVar5 + 2);
            iVar11 = iVar8;
            if (lVar9 < (longlong)uVar6) {
              iVar7 = *(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2);
              if (*(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2) == 0) {
                iVar7 = *(int *)((longlong)param_1 + lVar9 * 0x10 + 4) -
                        *(int *)((longlong)param_1 + (longlong)iVar8 * 0x10 + 4);
              }
              if (-1 < iVar7) {
                iVar11 = iVar5 + 2;
              }
            }
            lVar9 = (longlong)iVar12;
            lVar13 = (longlong)iVar11;
            iVar5 = *(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2);
            if (*(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2) == 0) {
              iVar5 = *(int *)((longlong)param_1 + lVar9 * 0x10 + 4) -
                      *(int *)((longlong)param_1 + lVar13 * 0x10 + 4);
            }
            if (-1 < iVar5) break;
            puVar10 = param_1 + lVar9 * 2;
            puVar14 = param_1 + lVar13 * 2;
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar14[1];
            *puVar10 = *puVar14;
            puVar10[1] = uVar4;
            *puVar14 = uVar2;
            puVar14[1] = uVar3;
            iVar5 = iVar11 * 2;
            iVar8 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar8 < (longlong)uVar6);
          uVar1 = uVar6 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar10 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar10 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar10 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_20._4_4_;
          bVar15 = 2 < uVar6;
          uVar6 = uVar1;
          local_28 = uVar2;
          uStack_20 = uVar3;
        } while (bVar15);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474da03a FUN_1474da03a body=147 status=ok
// SIG undefined FUN_1474da03a(void)

void FUN_1474da03a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474da0ce FUN_1474da0ce body=102 status=ok
// SIG undefined FUN_1474da0ce(void)

void FUN_1474da0ce(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406600da(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x60 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x60)
    ;
    return;
  }
  return;
}



// FUNCTION 1474da134 FUN_1474da134 body=86 status=ok
// SIG undefined FUN_1474da134(void)

void FUN_1474da134(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((0x3fff < (ulonglong)((longlong)(iVar2 - iVar1) * 0x60)) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1417982a8(param_1,iVar1,iVar1,0x60);
      return;
    }
  }
  return;
}



// FUNCTION 1474da18a FUN_1474da18a body=631 status=ok
// SIG undefined FUN_1474da18a(void)

void FUN_1474da18a(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar15 = iVar9;
joined_r0x0001474da1bf:
    do {
      iVar13 = iVar9 * 2 + 1;
      if (iVar13 < (int)param_2) {
        iVar14 = iVar9 * 2 + 2;
        if (iVar14 < (int)param_2) {
          iVar11 = *(int *)((longlong)param_1 + (longlong)iVar14 * 0x14) -
                   *(int *)((longlong)param_1 + (longlong)iVar13 * 0x14);
          if (iVar11 == 0) {
            iVar11 = *(int *)((longlong)param_1 + (longlong)iVar14 * 0x14 + 4) -
                     *(int *)((longlong)param_1 + (longlong)iVar13 * 0x14 + 4);
          }
          if (-1 < iVar11) {
            iVar13 = iVar14;
          }
        }
        lVar12 = (longlong)iVar9;
        lVar16 = (longlong)iVar13;
        iVar9 = *(int *)((longlong)param_1 + lVar12 * 0x14) -
                *(int *)((longlong)param_1 + lVar16 * 0x14);
        if (iVar9 == 0) {
          iVar9 = *(int *)((longlong)param_1 + lVar12 * 0x14 + 4) -
                  *(int *)((longlong)param_1 + lVar16 * 0x14 + 4);
        }
        if (iVar9 < 0) {
          puVar2 = (undefined8 *)((longlong)param_1 + lVar12 * 0x14);
          puVar3 = (undefined8 *)((longlong)param_1 + lVar16 * 0x14);
          local_28 = *(undefined4 *)(puVar2 + 2);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
          uVar8 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar8;
          *(undefined4 *)(puVar3 + 2) = local_28;
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar9 = iVar13;
          local_38 = uVar6;
          uStack_30 = uVar7;
          goto joined_r0x0001474da1bf;
        }
      }
      bVar17 = iVar15 != 0;
      iVar9 = iVar15 + -1;
      iVar15 = iVar9;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar10 = (ulonglong)param_2 - 1;
      local_28 = *(undefined4 *)(param_1 + 2);
      uVar6 = *param_1;
      uVar7 = param_1[1];
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + uVar10 * 0x14 + 0x10);
      puVar2 = (undefined8 *)((longlong)param_1 + uVar10 * 0x14);
      uVar8 = puVar2[1];
      *param_1 = *puVar2;
      param_1[1] = uVar8;
      *(undefined4 *)((longlong)param_1 + uVar10 * 0x14 + 0x10) = local_28;
      local_38._0_4_ = (undefined4)uVar6;
      local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar7;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar4 = (undefined4 *)((longlong)param_1 + uVar10 * 0x14);
      *puVar4 = (undefined4)local_38;
      puVar4[1] = local_38._4_4_;
      puVar4[2] = (undefined4)uStack_30;
      puVar4[3] = uStack_30._4_4_;
      local_38 = uVar6;
      uStack_30 = uVar7;
      if (param_2 != 2) {
        do {
          iVar9 = 0;
          iVar13 = 1;
          iVar15 = 0;
          do {
            lVar12 = (longlong)(iVar9 + 2);
            iVar14 = iVar13;
            if (lVar12 < (longlong)uVar10) {
              iVar11 = *(int *)((longlong)param_1 + lVar12 * 0x14) -
                       *(int *)((longlong)param_1 + (longlong)iVar13 * 0x14);
              if (iVar11 == 0) {
                iVar11 = *(int *)((longlong)param_1 + lVar12 * 0x14 + 4) -
                         *(int *)((longlong)param_1 + (longlong)iVar13 * 0x14 + 4);
              }
              if (-1 < iVar11) {
                iVar14 = iVar9 + 2;
              }
            }
            lVar12 = (longlong)iVar15;
            lVar16 = (longlong)iVar14;
            iVar9 = *(int *)((longlong)param_1 + lVar12 * 0x14) -
                    *(int *)((longlong)param_1 + lVar16 * 0x14);
            if (iVar9 == 0) {
              iVar9 = *(int *)((longlong)param_1 + lVar12 * 0x14 + 4) -
                      *(int *)((longlong)param_1 + lVar16 * 0x14 + 4);
            }
            if (-1 < iVar9) break;
            puVar2 = (undefined8 *)((longlong)param_1 + lVar12 * 0x14);
            puVar3 = (undefined8 *)((longlong)param_1 + lVar16 * 0x14);
            uVar5 = *(undefined4 *)(puVar2 + 2);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            uVar8 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar8;
            *(undefined4 *)(puVar3 + 2) = uVar5;
            *puVar3 = uVar6;
            puVar3[1] = uVar7;
            iVar9 = iVar14 * 2;
            iVar13 = iVar14 * 2 + 1;
            iVar15 = iVar14;
          } while ((longlong)iVar13 < (longlong)uVar10);
          uVar1 = uVar10 - 1;
          local_28 = *(undefined4 *)(param_1 + 2);
          uVar6 = *param_1;
          uVar7 = param_1[1];
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + uVar1 * 0x14 + 0x10);
          puVar2 = (undefined8 *)((longlong)param_1 + uVar1 * 0x14);
          uVar8 = puVar2[1];
          *param_1 = *puVar2;
          param_1[1] = uVar8;
          *(undefined4 *)((longlong)param_1 + uVar1 * 0x14 + 0x10) = local_28;
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar4 = (undefined4 *)((longlong)param_1 + uVar1 * 0x14);
          *puVar4 = (undefined4)local_38;
          puVar4[1] = local_38._4_4_;
          puVar4[2] = (undefined4)uStack_30;
          puVar4[3] = uStack_30._4_4_;
          bVar17 = 2 < uVar10;
          uVar10 = uVar1;
          local_38 = uVar6;
          uStack_30 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474da402 FUN_1474da402 body=113 status=ok
// SIG undefined FUN_1474da402(void)

void FUN_1474da402(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1474da474 FUN_1474da474 body=63 status=ok
// SIG undefined FUN_1474da474(void)

longlong FUN_1474da474(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1474d5ad8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_1474da51c(lVar2);
  return lVar2;
}



// FUNCTION 1474da4b4 FUN_1474da4b4 body=104 status=ok
// SIG undefined FUN_1474da4b4(void)

longlong FUN_1474da4b4(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_1474d5ad8(param_1,iVar1);
  }
  lVar3 = (longlong)param_2 * 0xc;
  memmove((void *)(*param_1 + lVar3 + 0xc),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_2) * 0xc);
  lVar2 = *param_1;
  FUN_1474da51c(lVar3 + lVar2);
  return lVar3 + lVar2;
}



// FUNCTION 1474da51c FUN_1474da51c body=12 status=ok
// SIG undefined FUN_1474da51c(void)

void FUN_1474da51c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1474da528 FUN_1474da528 body=524 status=ok
// SIG undefined FUN_1474da528(void)

void FUN_1474da528(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar5;
joined_r0x0001474da55d:
    do {
      iVar8 = iVar5 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar11 = iVar5 * 2 + 2;
        if (iVar11 < (int)param_2) {
          iVar7 = *(int *)(param_1 + (longlong)iVar11 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2)
          ;
          if (*(int *)(param_1 + (longlong)iVar11 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2) ==
              0) {
            iVar7 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0x10 + 4) -
                    *(int *)((longlong)param_1 + (longlong)iVar8 * 0x10 + 4);
          }
          if (-1 < iVar7) {
            iVar8 = iVar11;
          }
        }
        lVar9 = (longlong)iVar5;
        lVar13 = (longlong)iVar8;
        iVar5 = *(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2);
        if (*(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2) == 0) {
          iVar5 = *(int *)((longlong)param_1 + lVar9 * 0x10 + 4) -
                  *(int *)((longlong)param_1 + lVar13 * 0x10 + 4);
        }
        if (iVar5 < 0) {
          puVar10 = param_1 + lVar9 * 2;
          puVar14 = param_1 + lVar13 * 2;
          uVar2 = *puVar10;
          uVar3 = puVar10[1];
          uVar4 = puVar14[1];
          *puVar10 = *puVar14;
          puVar10[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar14 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_20._4_4_;
          iVar5 = iVar8;
          local_28 = uVar2;
          uStack_20 = uVar3;
          goto joined_r0x0001474da55d;
        }
      }
      bVar15 = iVar12 != 0;
      iVar5 = iVar12 + -1;
      iVar12 = iVar5;
    } while (bVar15);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar6 * 2)[1];
      *param_1 = param_1[uVar6 * 2];
      param_1[1] = uVar4;
      local_28._0_4_ = (undefined4)uVar2;
      local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar3;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar10 = param_1 + uVar6 * 2;
      *(undefined4 *)puVar10 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar10 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_20._4_4_;
      local_28 = uVar2;
      uStack_20 = uVar3;
      if (param_2 != 2) {
        do {
          iVar5 = 0;
          iVar8 = 1;
          iVar12 = 0;
          do {
            lVar9 = (longlong)(iVar5 + 2);
            iVar11 = iVar8;
            if (lVar9 < (longlong)uVar6) {
              iVar7 = *(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2);
              if (*(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2) == 0) {
                iVar7 = *(int *)((longlong)param_1 + lVar9 * 0x10 + 4) -
                        *(int *)((longlong)param_1 + (longlong)iVar8 * 0x10 + 4);
              }
              if (-1 < iVar7) {
                iVar11 = iVar5 + 2;
              }
            }
            lVar9 = (longlong)iVar12;
            lVar13 = (longlong)iVar11;
            iVar5 = *(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2);
            if (*(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2) == 0) {
              iVar5 = *(int *)((longlong)param_1 + lVar9 * 0x10 + 4) -
                      *(int *)((longlong)param_1 + lVar13 * 0x10 + 4);
            }
            if (-1 < iVar5) break;
            puVar10 = param_1 + lVar9 * 2;
            puVar14 = param_1 + lVar13 * 2;
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar14[1];
            *puVar10 = *puVar14;
            puVar10[1] = uVar4;
            *puVar14 = uVar2;
            puVar14[1] = uVar3;
            iVar5 = iVar11 * 2;
            iVar8 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar8 < (longlong)uVar6);
          uVar1 = uVar6 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar10 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar10 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar10 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_20._4_4_;
          bVar15 = 2 < uVar6;
          uVar6 = uVar1;
          local_28 = uVar2;
          uStack_20 = uVar3;
        } while (bVar15);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474da736 FUN_1474da736 body=74 status=ok
// SIG undefined FUN_1474da736(void)

undefined8 * FUN_1474da736(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a42d330;
  puVar1 = TlsGetValue(DAT_14c760f84);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c760f84,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474da780 FUN_1474da780 body=826 status=ok
// SIG undefined FUN_1474da780(void)

void FUN_1474da780(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  float fVar18;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [190];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0xc + -0xc;
    local_358 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar18 + fVar18);
    plVar12 = &local_358;
    do {
      piVar4 = (int *)*plVar12;
      piVar13 = (int *)plVar12[1];
      iVar15 = (int)plVar12[2];
      iVar11 = (int)((ulonglong)((longlong)piVar13 - (longlong)piVar4) >> 2);
      piVar16 = piVar13;
      piVar9 = piVar4;
      if (iVar15 != 0) {
LAB_1474da84b:
        uVar6 = iVar11 * -0x55555555 + 1;
        if (8 < (int)uVar6) {
          uVar7 = (ulonglong)(uVar6 >> 1);
          iVar11 = piVar4[uVar7 * 3 + 2];
          uVar1 = *(undefined8 *)(piVar4 + uVar7 * 3);
          piVar4[uVar7 * 3 + 2] = piVar4[2];
          *(undefined8 *)(piVar4 + uVar7 * 3) = *(undefined8 *)piVar4;
          piVar4[2] = iVar11;
          *(undefined8 *)piVar4 = uVar1;
          piVar8 = piVar13 + 3;
          piVar5 = piVar4;
          do {
            piVar2 = piVar5 + 3;
            piVar14 = piVar5 + 3;
            do {
              piVar5 = piVar14;
              piVar10 = piVar2;
              if (piVar13 < piVar5) break;
              iVar11 = *piVar4 - *piVar5;
              if (*piVar4 - *piVar5 == 0) {
                iVar11 = piVar4[1] - piVar5[1];
              }
              piVar2 = piVar10 + 3;
              piVar14 = piVar5 + 3;
            } while (-1 < iVar11);
            piVar2 = piVar8 + -6;
            do {
              piVar14 = piVar8;
              piVar17 = piVar2;
              piVar8 = piVar14 + -3;
              if (piVar8 <= piVar4) break;
              iVar11 = *piVar8 - *piVar4;
              if (*piVar8 - *piVar4 == 0) {
                iVar11 = piVar14[-2] - piVar4[1];
              }
              piVar2 = piVar17 + -3;
            } while (-1 < iVar11);
            if (piVar8 < piVar5) goto LAB_1474da93e;
            iVar11 = piVar5[2];
            uVar1 = *(undefined8 *)piVar5;
            piVar5[2] = piVar14[-1];
            *(undefined8 *)piVar5 = *(undefined8 *)piVar8;
            piVar14[-1] = iVar11;
            *(undefined8 *)piVar8 = uVar1;
          } while( true );
        }
        if (piVar4 < piVar13) {
          do {
            piVar16 = piVar4;
            if (piVar4 + 3 <= piVar13) {
              iVar15 = *piVar4;
              piVar9 = piVar4 + 3;
              piVar8 = piVar4;
              do {
                iVar11 = iVar15 - *piVar9;
                if (iVar11 == 0) {
                  iVar11 = piVar8[1] - piVar9[1];
                }
                piVar16 = piVar9;
                iVar3 = *piVar9;
                if (-1 < iVar11) {
                  piVar16 = piVar8;
                  iVar3 = iVar15;
                }
                iVar15 = iVar3;
                piVar9 = piVar9 + 3;
                piVar8 = piVar16;
              } while (piVar9 <= piVar13);
            }
            local_48 = piVar16[2];
            local_50 = *(undefined8 *)piVar16;
            piVar16[2] = piVar13[2];
            *(undefined8 *)piVar16 = *(undefined8 *)piVar13;
            piVar13[2] = local_48;
            *(undefined8 *)piVar13 = local_50;
            piVar13 = piVar13 + -3;
          } while (piVar4 < piVar13);
        }
        goto LAB_1474daa99;
      }
LAB_1474daaae:
      FUN_1474daabb(piVar4);
LAB_1474daa99:
      plVar12 = plVar12 + -3;
    } while (&local_358 <= plVar12);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1474da93e:
  local_48 = piVar4[2];
  local_50 = *(undefined8 *)piVar4;
  piVar4[2] = piVar14[-1];
  *(undefined8 *)piVar4 = *(undefined8 *)piVar8;
  piVar14[-1] = local_48;
  *(undefined8 *)piVar8 = local_50;
  iVar15 = iVar15 + -1;
  piVar14 = piVar14 + -6;
  if ((longlong)piVar17 - (longlong)piVar9 < (longlong)piVar16 - (longlong)piVar10) {
    if (piVar5 < piVar13) {
      *plVar12 = (longlong)piVar5;
      plVar12[1] = (longlong)piVar13;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    piVar10 = piVar4;
    if (piVar8 <= piVar4 + 3) goto LAB_1474daa99;
  }
  else {
    if (piVar4 + 3 < piVar8) {
      *plVar12 = (longlong)piVar4;
      plVar12[1] = (longlong)piVar14;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    piVar4 = piVar5;
    piVar14 = piVar13;
    piVar17 = piVar13;
    if (piVar13 <= piVar5) goto LAB_1474daa99;
  }
  iVar11 = (int)((ulonglong)((longlong)piVar17 - (longlong)piVar10) >> 2);
  piVar13 = piVar14;
  piVar16 = piVar17;
  piVar9 = piVar10;
  if (iVar15 == 0) goto LAB_1474daaae;
  goto LAB_1474da84b;
}



// FUNCTION 1474daabb FUN_1474daabb body=619 status=ok
// SIG undefined FUN_1474daabb(void)

void FUN_1474daabb(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar6;
joined_r0x0001474daaf0:
    do {
      iVar10 = iVar6 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar6 * 2 + 2;
        if (iVar11 < (int)param_2) {
          iVar8 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0xc) -
                  *(int *)((longlong)param_1 + (longlong)iVar10 * 0xc);
          if (iVar8 == 0) {
            iVar8 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0xc + 4) -
                    *(int *)((longlong)param_1 + (longlong)iVar10 * 0xc + 4);
          }
          if (-1 < iVar8) {
            iVar10 = iVar11;
          }
        }
        lVar9 = (longlong)iVar6;
        lVar13 = (longlong)iVar10;
        iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc) -
                *(int *)((longlong)param_1 + lVar13 * 0xc);
        if (iVar6 == 0) {
          iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc + 4) -
                  *(int *)((longlong)param_1 + lVar13 * 0xc + 4);
        }
        if (iVar6 < 0) {
          puVar2 = (undefined8 *)((longlong)param_1 + lVar9 * 0xc);
          puVar3 = (undefined8 *)((longlong)param_1 + lVar13 * 0xc);
          local_20 = *(undefined4 *)(puVar2 + 1);
          local_28 = *puVar2;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar3 + 1) = local_20;
          *puVar3 = local_28;
          iVar6 = iVar10;
          goto joined_r0x0001474daaf0;
        }
      }
      bVar14 = iVar12 != 0;
      iVar6 = iVar12 + -1;
      iVar12 = iVar6;
    } while (bVar14);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2 - 1;
      local_20 = *(undefined4 *)(param_1 + 1);
      local_28 = *param_1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar7 * 0xc + 8);
      *param_1 = *(undefined8 *)((longlong)param_1 + uVar7 * 0xc);
      *(undefined4 *)((longlong)param_1 + uVar7 * 0xc + 8) = local_20;
      *(undefined8 *)((longlong)param_1 + uVar7 * 0xc) = local_28;
      if (param_2 != 2) {
        do {
          iVar6 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            lVar9 = (longlong)(iVar6 + 2);
            iVar11 = iVar10;
            if (lVar9 < (longlong)uVar7) {
              iVar8 = *(int *)((longlong)param_1 + lVar9 * 0xc) -
                      *(int *)((longlong)param_1 + (longlong)iVar10 * 0xc);
              if (iVar8 == 0) {
                iVar8 = *(int *)((longlong)param_1 + lVar9 * 0xc + 4) -
                        *(int *)((longlong)param_1 + (longlong)iVar10 * 0xc + 4);
              }
              if (-1 < iVar8) {
                iVar11 = iVar6 + 2;
              }
            }
            lVar9 = (longlong)iVar12;
            lVar13 = (longlong)iVar11;
            iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc) -
                    *(int *)((longlong)param_1 + lVar13 * 0xc);
            if (iVar6 == 0) {
              iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc + 4) -
                      *(int *)((longlong)param_1 + lVar13 * 0xc + 4);
            }
            if (-1 < iVar6) break;
            puVar2 = (undefined8 *)((longlong)param_1 + lVar9 * 0xc);
            puVar3 = (undefined8 *)((longlong)param_1 + lVar13 * 0xc);
            uVar4 = *(undefined4 *)(puVar2 + 1);
            uVar5 = *puVar2;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
            *puVar2 = *puVar3;
            *(undefined4 *)(puVar3 + 1) = uVar4;
            *puVar3 = uVar5;
            iVar6 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar7);
          uVar1 = uVar7 - 1;
          local_20 = *(undefined4 *)(param_1 + 1);
          local_28 = *param_1;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8);
          *param_1 = *(undefined8 *)((longlong)param_1 + uVar1 * 0xc);
          *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8) = local_20;
          *(undefined8 *)((longlong)param_1 + uVar1 * 0xc) = local_28;
          bVar14 = 2 < uVar7;
          uVar7 = uVar1;
        } while (bVar14);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474dad28 FUN_1474dad28 body=48 status=ok
// SIG undefined FUN_1474dad28(void)

void FUN_1474dad28(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 1474dad58 FUN_1474dad58 body=147 status=ok
// SIG undefined FUN_1474dad58(void)

void FUN_1474dad58(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474dadec FUN_1474dadec body=48 status=ok
// SIG undefined FUN_1474dadec(void)

void FUN_1474dadec(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 1474dae1c FUN_1474dae1c body=48 status=ok
// SIG undefined FUN_1474dae1c(void)

void FUN_1474dae1c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xa0,8);
  }
  return;
}



// FUNCTION 1474dae4c FUN_1474dae4c body=48 status=ok
// SIG undefined FUN_1474dae4c(void)

void FUN_1474dae4c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1474dae7c FUN_1474dae7c body=95 status=ok
// SIG undefined FUN_1474dae7c(void)

void FUN_1474dae7c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1474daedc FUN_1474daedc body=132 status=ok
// SIG undefined FUN_1474daedc(void)

void FUN_1474daedc(longlong param_1,int param_2)

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



// FUNCTION 1474daf62 FUN_1474daf62 body=162 status=ok
// SIG undefined FUN_1474daf62(void)

undefined8 FUN_1474daf62(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x70;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e07];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x70,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3 >> 3;
  uVar2 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if (1 < iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x38,8);
  }
  return uVar2;
}



// FUNCTION 1474db004 FUN_1474db004 body=48 status=ok
// SIG undefined FUN_1474db004(void)

void FUN_1474db004(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x1c + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0xfffffffe00000000;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 9 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(param_1 + 0x30 + lVar2) = 0xfffffffe;
    lVar2 = lVar2 + 0x38;
  } while ((int)lVar2 != 0x70);
  return;
}



// FUNCTION 1474db034 FUN_1474db034 body=143 status=ok
// SIG undefined FUN_1474db034(void)

void FUN_1474db034(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474db0ce FUN_1474db0ce body=134 status=ok
// SIG undefined FUN_1474db0ce(void)

void FUN_1474db0ce(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [16];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1 + 0x28;
  local_40 = param_1 + 0x30;
  FUN_1401e06ce(local_38,*(longlong *)(param_1 + 0x28) != 0,param_2,param_2);
  FUN_14474897c(param_1 + 0x18,param_2);
  if (local_28 == '\x01') {
    FUN_1417b4fba(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474db174 FUN_1474db174 body=103 status=ok
// SIG undefined FUN_1474db174(void)

void FUN_1474db174(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1474db1dc(param_2,local_30);
  FUN_147906d4c(param_2,local_30,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474db1dc FUN_1474db1dc body=256 status=ok
// SIG undefined FUN_1474db1dc(void)

undefined8 FUN_1474db1dc(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caaad78 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaad78 = FUN_140002ddd(FUN_146332443,uVar2,L"AnimNode_Sync");
  }
  local_48 = *(undefined8 *)(DAT_14caaad78 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474db2f8 FUN_1474db2f8 body=389 status=ok
// SIG undefined FUN_1474db2f8(void)

void FUN_1474db2f8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1474db47e(param_2,&local_50);
  FUN_140002266(&local_60,L"(Alpha: %.1f%%)",(double)(*(float *)(param_1 + 200) * 100.0));
  iVar1 = local_58 + -1;
  if (local_58 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_50,local_60,iVar1);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_70 = (void *)0x0;
  local_68 = local_48;
  if ((longlong)local_48 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_48,0);
    memcpy(local_70,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  local_88 = 0;
  uStack_80 = 0;
  uVar2 = FUN_147906f5e(param_2,1.0 - *(float *)(param_1 + 200));
  FUN_147906d38(param_1 + 0x18,uVar2);
  local_98 = 0;
  uStack_90 = 0;
  uVar2 = FUN_147906f5e(param_2,*(undefined4 *)(param_1 + 200));
  FUN_147906d38(param_1 + 0x28,uVar2);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474db47e FUN_1474db47e body=256 status=ok
// SIG undefined FUN_1474db47e(void)

undefined8 FUN_1474db47e(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caaada0 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaada0 = FUN_140002ddd(FUN_1463324d9,uVar2,L"AnimNode_TwoWayBlend");
  }
  local_48 = *(undefined8 *)(DAT_14caaada0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474db588 FUN_1474db588 body=70 status=ok
// SIG undefined FUN_1474db588(void)

void FUN_1474db588(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  switchD_143c3d4dc::caseD_5e();
  if (*param_2 != 0) {
    lVar1 = FUN_144a7a45a();
    if (lVar1 != 0) {
      FUN_1478ed22f(lVar1 + 1000,*(undefined8 *)(param_1 + 0x38),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1474db5ce FUN_1474db5ce body=26 status=ok
// SIG undefined FUN_1474db5ce(void)

undefined8 FUN_1474db5ce(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x38);
  return param_2;
}



// FUNCTION 1474db5e8 FUN_1474db5e8 body=70 status=ok
// SIG undefined FUN_1474db5e8(void)

void FUN_1474db5e8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_14792188c();
  if (*param_2 != 0) {
    lVar1 = FUN_144a7a45a();
    if (lVar1 != 0) {
      FUN_1478ed22f(lVar1 + 1000,*(undefined8 *)(param_1 + 0x30),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1474db62e FUN_1474db62e body=70 status=ok
// SIG undefined FUN_1474db62e(void)

void FUN_1474db62e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_1479219e4();
  if (*param_2 != 0) {
    lVar1 = FUN_144a7a45a();
    if (lVar1 != 0) {
      FUN_1478ed22f(lVar1 + 0x3f8,*(undefined8 *)(param_1 + 0x30),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1474db674 FUN_1474db674 body=26 status=ok
// SIG undefined FUN_1474db674(void)

undefined8 FUN_1474db674(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x30);
  return param_2;
}



// FUNCTION 1474db692 FUN_1474db692 body=308 status=ok
// SIG undefined FUN_1474db692(void)

void FUN_1474db692(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140 [4];
  undefined1 local_13c;
  undefined1 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_1 + -0x438 == 0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
    if (cVar1 != '\0') {
      FUN_14036294a(*(undefined8 *)(param_1 + -0x418),1,1);
    }
    lVar2 = *(longlong *)(param_1 + -0x58);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(param_1 + -0x438);
      *(longlong *)(param_1 + -0x58) = lVar2;
    }
  }
  local_168 = local_140;
  local_13c = 0;
  local_68 = 0;
  local_150 = param_6;
  local_158 = param_5;
  local_148 = 0;
  local_160 = param_4;
  FUN_140738264(lVar2,param_2,param_3);
  *(undefined8 *)(param_1 + 8) = DAT_14c872be0;
  if (*(longlong **)(param_1 + -0x418) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + -0x418) + 0xcf0))();
  }
  if ((local_50 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474db7c8 FUN_1474db7c8 body=341 status=ok
// SIG undefined FUN_1474db7c8(void)

void FUN_1474db7c8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_1 + -0x438 == 0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
    if (cVar1 != '\0') {
      FUN_14036294a(*(undefined8 *)(param_1 + -0x418),1,1);
    }
    lVar2 = *(longlong *)(param_1 + -0x58);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(param_1 + -0x438);
      *(longlong *)(param_1 + -0x58) = lVar2;
    }
  }
  local_178 = &local_150;
  local_14c = 1;
  local_78 = 0;
  local_160 = param_7;
  local_168 = param_6;
  local_170 = param_5;
  local_158 = 0;
  local_150 = param_4;
  FUN_140738264(lVar2,param_2,param_3);
  *(undefined8 *)(param_1 + 8) = DAT_14c872be0;
  if (*(longlong **)(param_1 + -0x418) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + -0x418) + 0xcf0))();
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474db91e FUN_1474db91e body=270 status=ok
// SIG undefined FUN_1474db91e(void)

void FUN_1474db91e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474dba30(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dba30 FUN_1474dba30 body=102 status=ok
// SIG undefined FUN_1474dba30(void)

undefined8 * FUN_1474dba30(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_1463305e4(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1474dba96 FUN_1474dba96 body=22 status=ok
// SIG undefined FUN_1474dba96(void)

undefined8 FUN_1474dba96(undefined8 param_1)

{
  FUN_1474dbaac();
  return param_1;
}



// FUNCTION 1474dbaac FUN_1474dbaac body=102 status=ok
// SIG undefined FUN_1474dbaac(void)

undefined8 * FUN_1474dbaac(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_14632f238(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1474dbb12 FUN_1474dbb12 body=270 status=ok
// SIG undefined FUN_1474dbb12(void)

void FUN_1474dbb12(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474dc1a4(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dbc28 FUN_1474dbc28 body=337 status=ok
// SIG undefined FUN_1474dbc28(void)

void FUN_1474dbc28(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474dbd7a(puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dbd7a FUN_1474dbd7a body=97 status=ok
// SIG undefined FUN_1474dbd7a(void)

void FUN_1474dbd7a(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar3 = FUN_146330a98();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar2 = 1;
      goto LAB_1474dbdbd;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_1474dbdbd:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  *param_3 = uVar2;
  return;
}



// FUNCTION 1474dbddc FUN_1474dbddc body=186 status=ok
// SIG undefined FUN_1474dbddc(void)

void FUN_1474dbddc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_1474fe14a(puVar3);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x198))(plVar1);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dbe9e FUN_1474dbe9e body=185 status=ok
// SIG undefined FUN_1474dbe9e(void)

void FUN_1474dbe9e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_1474fe14a(puVar3);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x120))(plVar2);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dbf58 FUN_1474dbf58 body=188 status=ok
// SIG undefined FUN_1474dbf58(void)

void FUN_1474dbf58(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_1474fe14a(puVar2);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x1b0))(plVar1);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dc016 FUN_1474dc016 body=188 status=ok
// SIG undefined FUN_1474dc016(void)

void FUN_1474dc016(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_1474fe14a(puVar2);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dc0e6 FUN_1474dc0e6 body=185 status=ok
// SIG undefined FUN_1474dc0e6(void)

void FUN_1474dc0e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_1474fe14a(puVar3);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x1c0))(plVar2);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dc1a4 FUN_1474dc1a4 body=102 status=ok
// SIG undefined FUN_1474dc1a4(void)

undefined8 * FUN_1474dc1a4(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  if ((((lVar1 != 0) && (lVar2 = FUN_146330a98(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_3 = 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1474dc20a FUN_1474dc20a body=91 status=ok
// SIG undefined FUN_1474dc20a(void)

undefined8 * FUN_1474dc20a(undefined8 *param_1)

{
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14a431870;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xffffffff7fffffff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xffffffff7fffffff;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  return param_1;
}



// FUNCTION 1474dc266 FUN_1474dc266 body=452 status=ok
// SIG undefined FUN_1474dc266(void)

void FUN_1474dc266(longlong param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  void *_Src;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  double local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  longlong local_70;
  int local_68;
  void *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1474dc42c(param_2,&local_60);
  thunk_FUN_14047a987(&local_60,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_60);
  fVar1 = *(float *)(param_1 + 0xf8);
  FUN_1400021e4(param_1 + 0xd8,&local_80);
  puVar3 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar3 = local_80;
  }
  FUN_1400021e4(param_1 + 0xe8,&local_90);
  puVar4 = &DAT_149dfb77a;
  if (local_88 != 0) {
    puVar4 = local_90;
  }
  local_a8 = (double)fVar1;
  FUN_140002266(&local_70,L" Src: %s Dst: %s Multiplier: %.2f)",puVar4,puVar3);
  iVar2 = local_68 + -1;
  if (local_68 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(&local_60,local_70,iVar2);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_60;
  local_a0 = (void *)0x0;
  local_98 = local_58;
  if ((longlong)local_58 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,local_58,0);
    memcpy(local_a0,_Src,(longlong)local_58 * 2);
  }
  FUN_147906d4c(param_2,&local_a0,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dc42c FUN_1474dc42c body=208 status=ok
// SIG undefined FUN_1474dc42c(void)

undefined8 FUN_1474dc42c(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_14632f71c();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dc4fe FUN_1474dc4fe body=133 status=ok
// SIG undefined FUN_1474dc4fe(void)

void FUN_1474dc4fe(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"Alpha: %.1f%%",(double)(*(float *)(param_1 + 0x2c) * 100.0));
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_28,iVar1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dc584 FUN_1474dc584 body=1060 status=ok
// SIG undefined FUN_1474dc584(void)

double * FUN_1474dc584(double *param_1,double *param_2,double *param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar7 = *param_2;
  dVar8 = param_2[1];
  dVar2 = param_2[2];
  dVar3 = param_2[3];
  if (param_4 == 2) {
    dVar12 = 1.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
  }
  else {
    if (param_4 == 1) {
      dVar10 = 1.0;
      dVar9 = 0.0;
    }
    else {
      dVar10 = 0.0;
      dVar9 = 1.0;
    }
    dVar12 = 0.0;
  }
  dVar1 = param_3[2];
  dVar13 = *param_3;
  dVar14 = param_3[1];
  dVar4 = dVar13 * dVar10 - dVar9 * dVar14;
  dVar5 = dVar1 * dVar9 - dVar12 * dVar13;
  dVar6 = dVar14 * dVar12 - dVar10 * dVar1;
  dVar4 = dVar4 + dVar4;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  dVar11 = param_3[3];
  local_b8 = (dVar13 * dVar5 - dVar6 * dVar14) + dVar11 * dVar4 + dVar12;
  local_c0 = (dVar1 * dVar6 - dVar4 * dVar13) + dVar11 * dVar5 + dVar10;
  local_c8 = (dVar14 * dVar4 - dVar5 * dVar1) + dVar11 * dVar6 + dVar9;
  dVar13 = dVar7 * dVar10 - dVar9 * dVar8;
  dVar14 = dVar2 * dVar9 - dVar12 * dVar7;
  dVar1 = dVar8 * dVar12 - dVar10 * dVar2;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar1 = dVar1 + dVar1;
  local_d0 = (dVar7 * dVar14 - dVar1 * dVar8) + dVar3 * dVar13 + dVar12;
  local_d8 = (dVar2 * dVar1 - dVar13 * dVar7) + dVar3 * dVar14 + dVar10;
  local_e0 = (dVar8 * dVar13 - dVar14 * dVar2) + dVar3 * dVar1 + dVar9;
  FUN_144a9d448(&local_108);
  dVar9 = *param_3;
  dVar10 = param_3[1];
  dVar12 = param_3[2];
  dVar1 = param_3[3];
  dVar13 = dVar10 * local_f8 * -1.0 +
           dVar12 * local_100 + dVar1 * local_108 * 1.0 + dVar9 * local_f0;
  dVar14 = dVar9 * local_f8 * 1.0 +
           dVar1 * local_100 + dVar12 * local_108 * -1.0 + dVar10 * local_f0;
  dVar11 = dVar1 * local_f8 * 1.0 +
           ((local_108 * dVar10 * 1.0 + local_f0 * dVar12) - dVar9 * local_100);
  dVar9 = dVar12 * local_f8 * -1.0 +
          ((local_108 * dVar9 * -1.0 + local_f0 * dVar1) - dVar10 * local_100);
  dVar2 = dVar2 * -1.0;
  dVar3 = dVar3 * 1.0;
  *param_1 = dVar14 * dVar2 * -1.0 + ((dVar3 * dVar13 - dVar7 * dVar9 * 1.0) - dVar8 * dVar11);
  param_1[1] = dVar13 * dVar2 * 1.0 + ((dVar3 * dVar14 - dVar7 * dVar11 * -1.0) - dVar8 * dVar9);
  param_1[2] = dVar9 * dVar2 * 1.0 + dVar13 * dVar8 + (dVar3 * dVar11 - dVar7 * dVar14 * 1.0);
  param_1[3] = dVar11 * dVar2 * -1.0 + dVar14 * dVar8 + (dVar3 * dVar9 - dVar7 * dVar13 * -1.0);
  if ((local_b0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dc9aa FUN_1474dc9aa body=845 status=ok
// SIG undefined FUN_1474dc9aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1474dc9aa(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,int param_4,
             float param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  double dVar3;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1474dc584(&local_a8);
  uVar19 = 0x3ff00000;
  dVar14 = dStack_90;
  if (1.0 <= dStack_90) {
    dVar14 = 1.0;
  }
  dVar9 = acos((double)(-(ulonglong)(dStack_90 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dStack_90 < -1.0) & (ulonglong)dVar14));
  auVar12 = _DAT_149934d80;
  dVar14 = local_98 * local_98 + local_a8 * local_a8;
  dVar17 = dStack_a0 * dStack_a0 + 0.0;
  auVar15._0_8_ = dVar14 + dVar17;
  auVar15._8_8_ = dVar14 + dVar17;
  auVar23._8_8_ = -(ulonglong)(1e-08 <= auVar15._8_8_);
  auVar23._0_8_ = -(ulonglong)(1e-08 <= auVar15._0_8_);
  auVar18 = sqrtpd(in_XMM4,auVar15);
  auVar16 = divpd(_DAT_149934d80,auVar18);
  auVar18._0_8_ = local_a8 * auVar16._0_8_;
  auVar18._8_8_ = dStack_a0 * auVar16._8_8_;
  auVar22 = blendvpd(ZEXT816(0x3ff0000000000000),auVar18,auVar23);
  dVar14 = 0.0;
  if ((-(ulonglong)(1e-08 <= auVar15._0_8_) & 1) == 0) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = local_98 * auVar16._0_8_;
  }
  if (param_4 == 2) {
    dVar13 = 1.0;
    dVar14 = 0.0;
  }
  else {
    dVar13 = 0.0;
    if (param_4 != 1) goto LAB_1474dcad5;
    dVar14 = 1.0;
    dVar13 = 0.0;
  }
  uVar19 = 0;
LAB_1474dcad5:
  fVar8 = (float)(dVar9 + dVar9);
  if (dVar13 * dVar17 + (double)((ulonglong)uVar19 << 0x20) * auVar22._0_8_ + auVar22._8_8_ * dVar14
      < 0.0) {
    dVar17 = -dVar17;
    auVar23 = blendpd(auVar22,auVar22,2);
    auVar22._0_8_ = auVar23._0_8_ ^ 0x8000000000000000;
    auVar22._8_8_ = auVar23._8_8_ ^ 0x8000000000000000;
    fVar8 = -fVar8;
  }
  for (; 3.1415927 < fVar8; fVar8 = fVar8 + -6.2831855) {
  }
  for (; fVar8 < -3.1415927; fVar8 = fVar8 + 6.2831855) {
  }
  dVar14 = (double)(fVar8 * param_5) * 0.5;
  dVar9 = sin(dVar14);
  dVar10 = cos(dVar14);
  dVar21 = auVar22._0_8_ * dVar9;
  dVar4 = auVar22._8_8_ * dVar9;
  dVar17 = dVar17 * dVar9;
  dVar9 = param_6[3];
  dVar14 = param_6[3];
  dVar1 = param_6[1];
  dVar13 = param_6[1];
  dVar2 = param_6[2];
  dVar3 = param_6[2];
  dVar5 = dVar4 * dVar2 * -1.0 + dVar17 * dVar1 + *param_6 * dVar10 * 1.0 + dVar21 * dVar9;
  dVar6 = dVar21 * dVar3 * 1.0 + dVar10 * dVar13 + *param_6 * dVar17 * -1.0 + dVar4 * dVar14;
  dVar9 = dVar10 * dVar2 * 1.0 + ((*param_6 * dVar4 * 1.0 + dVar9 * dVar17) - dVar21 * dVar1);
  dVar14 = dVar17 * dVar3 * -1.0 + ((*param_6 * dVar21 * -1.0 + dVar14 * dVar10) - dVar4 * dVar13);
  dVar17 = dVar9 * dVar9 + dVar5 * dVar5;
  dVar13 = dVar14 * dVar14 + dVar6 * dVar6;
  auVar11._0_8_ = dVar17 + dVar13;
  auVar11._8_8_ = dVar17 + dVar13;
  auVar23 = sqrtpd(auVar11,auVar11);
  auVar23 = divpd(auVar12,auVar23);
  auVar20._0_8_ = auVar23._0_8_ * dVar9;
  auVar20._8_8_ = auVar23._8_8_ * dVar14;
  uVar7 = (ulonglong)(dVar6 * auVar23._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
  auVar12._8_4_ = (int)uVar7;
  auVar12._0_8_ =
       (ulonglong)(dVar5 * auVar23._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
  auVar12._12_4_ = (int)(uVar7 >> 0x20);
  *param_1 = auVar12;
  auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
  auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
  auVar12 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar16);
  param_1[1] = auVar12;
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1474dccf8 FUN_1474dccf8 body=2621 status=ok
// SIG undefined FUN_1474dccf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474dccf8(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  double *pdVar16;
  undefined4 *puVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  double dVar22;
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auStack_378 [32];
  float local_358;
  undefined8 *local_350;
  int local_344;
  longlong local_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  fVar2 = *(float *)(param_1 + 0xf8);
  if ((fVar2 == 0.0) && (!NAN(fVar2))) goto LAB_1474dcd98;
  plVar5 = *(longlong **)(param_2 + 0x30);
  uVar15 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar15 < 0) {
    if (((~uVar15 & 0x7fffffff) == 0) || (uVar15 = (int)(uVar15 * 2) >> 1, (int)uVar15 < 0)) {
      local_344 = -1;
    }
    else {
      local_344 = -1;
      if ((int)uVar15 < (int)plVar5[0x11]) {
        piVar14 = (int *)((ulonglong)uVar15 * 4 + plVar5[0x10]);
        goto LAB_1474dce40;
      }
    }
  }
  else {
    piVar14 = (int *)(param_1 + 0xe4);
LAB_1474dce40:
    local_344 = *piVar14;
  }
  uVar15 = *(uint *)(param_1 + 0xf0);
  if ((int)uVar15 < 0) {
    iVar18 = -1;
    if ((((~uVar15 & 0x7fffffff) != 0) && (uVar15 = (int)(uVar15 * 2) >> 1, -1 < (int)uVar15)) &&
       ((int)uVar15 < (int)plVar5[0x11])) {
      piVar14 = (int *)((ulonglong)uVar15 * 4 + plVar5[0x10]);
      goto LAB_1474dce57;
    }
  }
  else {
    piVar14 = (int *)(param_1 + 0xf4);
LAB_1474dce57:
    iVar18 = *piVar14;
  }
  plVar1 = (longlong *)(param_2 + 0x20);
  local_340 = (longlong)local_344;
  if (plVar5[0x1d] == 0) {
    puVar11 = (undefined8 *)
              ((ulonglong)((uint)*(ushort *)(*plVar5 + local_340 * 2) * 0x60) +
              *(longlong *)(plVar5[9] + 0x30));
    lVar19 = (ulonglong)((uint)*(ushort *)(*plVar5 + (longlong)iVar18 * 2) * 0x60) +
             *(longlong *)(plVar5[9] + 0x30);
  }
  else {
    lVar19 = *(longlong *)(plVar5[0x1d] + 0x10);
    puVar11 = (undefined8 *)(local_340 * 0x60 + lVar19);
    lVar19 = (longlong)iVar18 * 0x60 + lVar19;
  }
  local_2b8 = *puVar11;
  uStack_2b0 = puVar11[1];
  local_2a8 = puVar11[2];
  uStack_2a0 = puVar11[3];
  uVar4 = *(undefined1 *)(param_1 + 0xfc);
  FUN_144ade54e(plVar1,&local_178);
  local_358 = fVar2;
  local_350 = &local_2b8;
  FUN_1474dc9aa(&local_2d8,lVar19,&local_178,uVar4);
  iVar18 = local_344;
  FUN_144ade54e(plVar1,&local_338,local_344);
  if (*(char *)(param_1 + 0xfd) != '\0') {
    dVar31 = dStack_2d0 * local_338;
    dVar33 = local_2d8 * local_338;
    dVar23 = local_2d8 * dStack_330;
    dVar24 = dStack_2d0 * dStack_330;
    dVar29 = local_2d8 * local_328;
    dVar22 = local_2c8 * local_328;
    local_2d8 = dStack_2d0 * local_328 * -1.0 +
                local_2c8 * dStack_330 + local_338 * dStack_2c0 * 1.0 + local_2d8 * dStack_320;
    dStack_2d0 = dVar29 * 1.0 +
                 dStack_2c0 * dStack_330 + local_338 * local_2c8 * -1.0 + dStack_2d0 * dStack_320;
    local_2c8 = dStack_2c0 * local_328 * 1.0 + ((dVar31 * 1.0 + dStack_320 * local_2c8) - dVar23);
    dStack_2c0 = dVar22 * -1.0 + ((dVar33 * -1.0 + dStack_320 * dStack_2c0) - dVar24);
  }
  local_338 = local_2d8;
  dStack_330 = dStack_2d0;
  local_328 = local_2c8;
  dStack_320 = dStack_2c0;
  iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x90) + local_340 * 4);
  lVar19 = (longlong)iVar12;
  if (lVar19 == -1) {
    pdVar16 = &local_338;
    puVar17 = (undefined4 *)((longlong)&local_170 + 4);
    for (lVar19 = 0x18; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar17 = *(undefined4 *)pdVar16;
      pdVar16 = (double *)((longlong)pdVar16 + 4);
      puVar17 = puVar17 + 1;
    }
    iVar12 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar12 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
      FUN_1400c28ea(param_3,iVar12);
    }
    piVar14 = (int *)(*param_3 + (longlong)iVar12 * 0x70);
    *piVar14 = iVar18;
    pdVar16 = &local_178;
    for (lVar19 = 0x1b; piVar14 = piVar14 + 1, lVar19 != 0; lVar19 = lVar19 + -1) {
      *piVar14 = *(int *)pdVar16;
      pdVar16 = (double *)((longlong)pdVar16 + 4);
    }
  }
  else {
    if (*(char *)(*(longlong *)(param_2 + 0x38) + lVar19) == '\0') {
      FUN_1447d5d8e(plVar1,iVar12);
    }
    auVar40 = _DAT_149934d80;
    lVar13 = *plVar1;
    lVar19 = lVar19 * 0x60;
    pdVar16 = (double *)(lVar13 + lVar19);
    auVar27 = *(undefined1 (*) [16])(lVar13 + 0x40 + lVar19);
    dVar22 = auVar27._0_8_;
    dVar31 = auVar27._8_8_;
    auVar3 = *(undefined1 (*) [16])(lVar13 + 0x50 + lVar19);
    dVar23 = auVar3._0_8_;
    dVar24 = local_2f8._0_8_;
    dVar33 = local_2f8._8_8_;
    dVar29 = local_2e8._0_8_;
    auVar27 = minpd(local_2f8,auVar27);
    auVar32 = minpd(local_2e8,auVar3);
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    iVar12 = movmskpd((int)lVar13,auVar28);
    auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    uVar15 = movmskpd((int)lVar19,auVar27);
    if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
      dVar36 = *pdVar16;
      dVar38 = pdVar16[1];
      dVar9 = pdVar16[2];
      dVar10 = pdVar16[3];
      dVar26 = pdVar16[3];
      dVar34 = pdVar16[3];
      dVar39 = pdVar16[1];
      dVar37 = pdVar16[1];
      dVar43 = pdVar16[2];
      dVar41 = pdVar16[2];
      dVar30 = dStack_330 * dVar43 * -1.0 +
               local_328 * dVar39 + dStack_320 * *pdVar16 * 1.0 + local_338 * dVar26;
      dVar35 = local_338 * dVar41 * 1.0 +
               dStack_320 * dVar37 + local_328 * *pdVar16 * -1.0 + dStack_330 * dVar34;
      auVar40._0_8_ =
           dStack_320 * dVar43 * 1.0 +
           ((*pdVar16 * dStack_330 * 1.0 + local_328 * dVar26) - local_338 * dVar39);
      auVar40._8_8_ =
           local_328 * dVar41 * -1.0 +
           ((*pdVar16 * local_338 * -1.0 + dStack_320 * dVar34) - dStack_330 * dVar37);
      local_318 = local_318 * dVar22;
      dStack_310 = dStack_310 * dVar31;
      local_308 = local_308 * dVar23;
      dStack_300 = dStack_300 * auVar3._8_8_;
      dVar41 = dStack_310 * dVar36 - dVar38 * local_318;
      dVar43 = local_308 * dVar38 - dVar9 * dStack_310;
      dVar37 = local_318 * dVar9 - dVar36 * local_308;
      dVar39 = dStack_300 * dVar10 - dVar10 * dStack_300;
      dVar43 = dVar43 + dVar43;
      dVar37 = dVar37 + dVar37;
      dVar41 = dVar41 + dVar41;
      dVar39 = dVar39 + dVar39;
      local_118 = (dVar41 * dVar38 - dVar9 * dVar37) + dVar26 * dVar43 + local_318 + pdVar16[4];
      dStack_110 = (dVar43 * dVar9 - dVar41 * dVar36) + dVar34 * dVar37 + dStack_310 + pdVar16[5];
      local_108 = (dVar37 * dVar36 - dVar38 * dVar43) + dVar26 * dVar41 + local_308 + pdVar16[6];
      dVar26 = (dVar39 * dVar10 - dVar39 * dVar10) + dVar34 * dVar39 + dStack_300 + pdVar16[7];
    }
    else {
      dVar39 = *pdVar16;
      dVar41 = pdVar16[1];
      dVar43 = pdVar16[2];
      dVar30 = dVar41 + dVar41;
      dVar35 = dVar43 + dVar43;
      dVar34 = dVar39 * (dVar39 + dVar39);
      local_1a8 = (1.0 - (dVar34 + dVar41 * dVar30)) * dVar23;
      dVar26 = pdVar16[3];
      dVar36 = dVar35 * dVar26;
      dVar38 = (dVar39 + dVar39) * pdVar16[3];
      dVar26 = dVar30 * dVar26;
      local_1b8 = (dVar26 + *pdVar16 * dVar35) * dVar23;
      dVar34 = (DAT_149934d80._8_8_ - (dVar43 * dVar35 + dVar34)) * dVar31;
      dVar37 = (dVar30 * dVar39 + dVar36) * dVar22;
      local_1c8 = (dVar35 * dVar41 + dVar38) * dVar31;
      dStack_1b0 = (dVar35 * dVar41 - dVar38) * dVar23;
      local_1e8 = (*pdVar16 * dVar35 - dVar26) * dVar22;
      local_1f8._8_4_ = SUB84(dVar37,0);
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar43 * dVar35 + dVar41 * dVar30)) * dVar22;
      local_1f8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar34,0);
      local_1d8._0_8_ = (dVar30 * dVar39 - dVar36) * dVar31;
      local_1d8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = pdVar16[4];
      dStack_190 = pdVar16[5];
      local_188 = pdVar16[6];
      uStack_180 = 0x3ff0000000000000;
      dVar34 = dStack_330 + dStack_330;
      dVar37 = local_328 + local_328;
      dVar26 = local_338 * (local_338 + local_338);
      local_228 = (1.0 - (dVar26 + dStack_330 * dVar34)) * dVar29;
      dVar39 = (local_338 + local_338) * dStack_320;
      local_238 = (dVar34 * dStack_320 + local_338 * dVar37) * dVar29;
      dStack_230 = (dVar37 * dStack_330 - dVar39) * dVar29;
      local_278 = ((double)DAT_149934d80 - (local_328 * dVar37 + dStack_330 * dVar34)) * dVar24;
      dVar26 = (DAT_149934d80._8_8_ - (local_328 * dVar37 + dVar26)) * dVar33;
      dStack_270 = (dVar34 * local_338 + dVar37 * dStack_320) * dVar24;
      local_248 = (dVar37 * dStack_330 + dVar39) * dVar33;
      local_268 = (local_338 * dVar37 - dVar34 * dStack_320) * dVar24;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar26,0);
      local_258._0_8_ = (dVar34 * local_338 - dVar37 * dStack_320) * dVar33;
      local_258._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_318;
      dStack_210 = dStack_310;
      local_208 = local_308;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar32._8_8_ = -(ulonglong)(0.0 <= dVar31 * dVar33);
      auVar32._0_8_ = -(ulonglong)(0.0 <= dVar22 * dVar24);
      auVar27 = blendvpd(_DAT_149936790,auVar40,auVar32);
      uVar20 = -(ulonglong)(0.0 <= dVar23 * dVar29);
      dVar26 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar34 = auVar27._0_8_;
      local_168 = local_168 * dVar34;
      local_170 = local_170 * dVar34;
      local_178 = local_178 * dVar34;
      dVar34 = auVar27._8_8_;
      local_148 = local_148 * dVar34;
      local_150 = local_150 * dVar34;
      local_158 = dVar34 * local_158;
      local_128 = local_128 * dVar26;
      local_130 = local_130 * dVar26;
      local_138 = dVar26 * local_138;
      FUN_14481fd10(&local_298,&local_178);
      dVar26 = local_288 * local_288 + local_298 * local_298;
      dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar25._0_8_ = dVar26 + dVar34;
      auVar25._8_8_ = dVar26 + dVar34;
      auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
      auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
      auVar27 = sqrtpd(auVar25,auVar25);
      auVar27 = divpd(auVar40,auVar27);
      auVar42._0_8_ = auVar27._0_8_ * local_288;
      auVar42._8_8_ = auVar27._8_8_ * dStack_280;
      dVar30 = (double)((ulonglong)(local_298 * auVar27._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
      dVar35 = (double)((ulonglong)(dStack_290 * auVar27._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
      auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar21);
      dVar26 = 0.0;
    }
    dVar34 = auVar3._8_8_ * local_2e8._8_8_;
    iVar12 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar12 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
      FUN_1400c28ea(param_3,iVar12);
    }
    lVar19 = *param_3;
    lVar13 = (longlong)iVar12 * 0x70;
    *(int *)(lVar19 + lVar13) = iVar18;
    auVar7._8_4_ = SUB84(dVar35,0);
    auVar7._0_8_ = dVar30;
    auVar7._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    *(undefined1 (*) [16])(lVar19 + 0x10 + lVar13) = auVar7;
    *(undefined1 (*) [16])(lVar19 + 0x20 + lVar13) = auVar40;
    pdVar16 = (double *)(lVar19 + 0x30 + lVar13);
    *pdVar16 = local_118;
    pdVar16[1] = dStack_110;
    auVar6._8_4_ = SUB84(dVar26,0);
    auVar6._0_8_ = local_108;
    auVar6._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    *(undefined1 (*) [16])(lVar19 + 0x40 + lVar13) = auVar6;
    auVar8._8_4_ = SUB84(dVar31 * dVar33,0);
    auVar8._0_8_ = dVar22 * dVar24;
    auVar8._12_4_ = (int)((ulonglong)(dVar31 * dVar33) >> 0x20);
    *(undefined1 (*) [16])(lVar19 + 0x50 + lVar13) = auVar8;
    auVar3._8_4_ = SUB84(dVar34,0);
    auVar3._0_8_ = dVar23 * dVar29;
    auVar3._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    *(undefined1 (*) [16])(lVar19 + 0x60 + lVar13) = auVar3;
  }
LAB_1474dcd98:
  if ((local_f0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474dd7aa FUN_1474dd7aa body=48 status=ok
// SIG undefined FUN_1474dd7aa(void)

void FUN_1474dd7aa(longlong param_1,undefined8 param_2)

{
  FUN_14019c9f2(param_1 + 0xe8);
  FUN_14019c9f2(param_1 + 0xd8,param_2);
  return;
}



// FUNCTION 1474dd842 FUN_1474dd842 body=856 status=ok
// SIG undefined FUN_1474dd842(void)

undefined8 * FUN_1474dd842(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14a434030;
  param_1[0x1b] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x1c;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x28;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0xffffffff7fffffff;
  param_1[0x36] = 0;
  param_1[0x37] = 0xffffffff7fffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0xffffffff7fffffff;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  param_1[0x4b] = 0x400000000;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x293) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a3) = 0xe;
  *(byte *)((longlong)param_1 + 0x2a4) = *(byte *)((longlong)param_1 + 0x2a4) & 0xc0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x58;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 100;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x70) = 4;
  param_1[0x71] = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0x42340000;
  *(undefined4 *)(param_1 + 0x76) = 0x42340000;
  *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x424) = 0x404;
  param_1[0x77] = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_1 + 0x431) = 0;
  *(undefined8 *)((longlong)param_1 + 0x439) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x89) = 0;
  memset(param_1 + 0x8d,0,0x90);
  param_1[0x44] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x42] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x43] = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x45] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x46] = uVar1;
  param_1[0x47] = DAT_14c8464f0;
  param_1[0x48] = 0x40f86a0000000000;
  param_1[0x49] = 0x40f86a0000000000;
  param_1[0x4a] = 0x40f86a0000000000;
  param_1[0xa4] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xa2] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xa3] = uVar1;
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  *(undefined4 *)(param_1 + 0x3b) = 1;
  FUN_1474fe1ce(param_1 + 0x3a,0);
  puVar3 = (undefined8 *)param_1[0x3a];
  *puVar3 = 0;
  puVar3[1] = 0xffffffff7fffffff;
  puVar3[2] = 0x4024000000000000;
  puVar3[3] = 0x4024000000000000;
  puVar3[4] = 0x4024000000000000;
  *(undefined4 *)(puVar3 + 5) = local_68;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_64;
  *(undefined4 *)(puVar3 + 6) = uStack_60;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_5c;
  puVar3[7] = local_58;
  *(undefined4 *)(puVar3 + 8) = 0x10101;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x77) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x94) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xac) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xb4) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xb9) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xc1) = 0;
  *(undefined4 *)((longlong)puVar3 + 0xcc) = 0x41200000;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ddb9c FUN_1474ddb9c body=205 status=ok
// SIG undefined FUN_1474ddb9c(void)

void FUN_1474ddb9c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  FUN_140320438(param_1 + 3);
  *(undefined1 *)((longlong)param_1 + 0x49) = 0;
  *(undefined1 *)((longlong)param_1 + 0x93) = 0;
  lVar3 = *(longlong *)(*param_2 + 0x6a0);
  (**(code **)(*param_1 + 0x120))(param_1,lVar3);
  uVar1 = *(uint *)(param_1 + 0x37);
  if ((~uVar1 & 0x7fffffff) != 0) {
    lVar4 = lVar3 + 0x10;
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x20);
    }
    if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 3 & 0x1ffc)) >> (uVar1 & 0x1f) & 1) != 0) {
      bVar2 = 2;
      if (2 < *(byte *)((longlong)param_1 + 0x2a2)) {
        bVar2 = *(byte *)((longlong)param_1 + 0x2a2);
      }
      *(byte *)((longlong)param_1 + 0x2a2) = bVar2;
    }
  }
  plVar5 = (longlong *)(*param_2 + 0x10);
  plVar6 = param_1 + 0x1c;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar5 = (longlong *)(*param_2 + 0xd0);
  plVar6 = param_1 + 0x28;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  param_1[0x8a] = 0;
  return;
}



// FUNCTION 1474ddc78 FUN_1474ddc78 body=139 status=ok
// SIG undefined FUN_1474ddc78(void)

bool FUN_1474ddc78(int param_1)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  piVar2 = DAT_14caaaff8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    iVar5 = *DAT_14caaaff8;
  }
  else {
    bVar3 = FUN_144a61b4f();
    lVar6 = DAT_14caab028;
    iVar5 = piVar2[bVar3 ^ 1];
    if (*(int *)(lVar1 + 0xc60) != 0x40000002) {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
      goto LAB_1474ddcb4;
    }
  }
  uVar4 = 0;
  lVar6 = DAT_14caab028;
LAB_1474ddcb4:
  return *(int *)(lVar6 + uVar4 * 4) == 1 && (iVar5 == param_1 || iVar5 < 0);
}



// FUNCTION 1474ddd04 FUN_1474ddd04 body=456 status=ok
// SIG undefined FUN_1474ddd04(void)

void FUN_1474ddd04(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138 [12];
  undefined8 local_d8 [4];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_140 = param_2;
  if ((longlong)*(int *)(param_1 + 0x490) != 0) {
    local_150 = *(longlong *)(param_1 + 0x488);
    local_148 = (longlong)*(int *)(param_1 + 0x490) << 3;
    lVar3 = 0;
    do {
      puVar1 = *(undefined4 **)(local_150 + lVar3);
      if (puVar1 == (undefined4 *)0x0) break;
      local_d8[0] = *(undefined8 *)(puVar1 + 8);
      local_d8[1] = *(undefined8 *)(puVar1 + 10);
      local_d8[2] = *(undefined8 *)(puVar1 + 0xc);
      local_d8[3] = *(undefined8 *)(puVar1 + 0xe);
      local_b8 = *puVar1;
      uStack_b4 = puVar1[1];
      uStack_b0 = puVar1[2];
      uStack_ac = puVar1[3];
      local_a8 = *(undefined8 *)(puVar1 + 4);
      uStack_a0 = 0;
      local_98 = 0x3ff0000000000000;
      uStack_90 = 0x3ff0000000000000;
      local_88 = 0x3ff0000000000000;
      uStack_80 = 0;
      local_158 = *param_2 + 0xd0;
      local_160 = *param_2 + 0x10;
      local_168 = local_d8;
      FUN_1474e14a6(param_1,local_138,*(undefined1 *)(param_1 + 0x2a1),param_2);
      puVar4 = local_138;
      puVar5 = local_d8;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_168 = local_d8;
      FUN_1474e2ab6(param_1,local_138,*(undefined1 *)(param_1 + 0x2a0),param_2);
      puVar4 = local_138;
      puVar5 = local_d8;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined8 *)(puVar1 + 8) = local_d8[0];
      *(undefined8 *)(puVar1 + 10) = local_d8[1];
      *(undefined8 *)(puVar1 + 0xc) = local_d8[2];
      *(undefined8 *)(puVar1 + 0xe) = local_d8[3];
      *puVar1 = local_b8;
      puVar1[1] = uStack_b4;
      puVar1[2] = uStack_b0;
      puVar1[3] = uStack_ac;
      *(undefined8 *)(puVar1 + 4) = local_a8;
      lVar3 = lVar3 + 8;
    } while (local_148 != lVar3);
  }
  if ((local_70 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ddece FUN_1474ddece body=4609 status=ok
// SIG undefined FUN_1474ddece(void)

/* WARNING: Removing unreachable block (ram,0x0001474de6b0) */
/* WARNING: Removing unreachable block (ram,0x0001474de6c2) */

void FUN_1474ddece(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  byte bVar23;
  longlong lVar24;
  longlong lVar25;
  byte bVar26;
  int iVar27;
  longlong lVar28;
  undefined8 *puVar29;
  double *pdVar30;
  undefined8 *puVar31;
  double *pdVar32;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_588 [32];
  double *local_568;
  double local_560;
  longlong local_558;
  longlong *local_548;
  longlong local_540;
  longlong *local_538;
  longlong *local_530;
  longlong *local_528;
  double local_520;
  longlong local_518;
  longlong local_510;
  undefined1 local_508 [16];
  double local_4f8;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined1 local_4c8 [12];
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  longlong local_488;
  undefined8 uStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double local_458;
  undefined8 uStack_450;
  double local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_278;
  double dStack_270;
  double local_268;
  byte local_218;
  undefined1 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0;
  undefined4 local_1dc;
  float local_1d8;
  byte local_1d4;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  char local_130;
  float local_12c;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_588;
  local_538 = param_2;
  if (*(char *)(param_1 + 0x2a2) == '\x01') {
    *(double *)(param_1 + 0x288) = DAT_14c8464f0;
    uVar15 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x278) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x280) = uVar15;
    if ((longlong)*(int *)(param_1 + 0x4f0) != 0) {
      local_530 = *(longlong **)(param_1 + 0x4e8);
      local_540 = param_1 + 0x140;
      local_520 = (double)(param_1 + 0xe0);
      local_528 = (longlong *)((longlong)*(int *)(param_1 + 0x4f0) << 2);
      plVar21 = (longlong *)0x0;
      do {
        lVar24 = *(longlong *)(param_1 + 0x468);
        lVar33 = (longlong)*(int *)((longlong)local_530 + (longlong)plVar21) * 0x360;
        lVar28 = *(longlong *)(param_1 + 0x1d0);
        lVar25 = (longlong)*(int *)((longlong)local_530 + (longlong)plVar21) * 0xd0;
        dVar1 = *(double *)(lVar28 + 0x28 + lVar25);
        dVar2 = *(double *)(lVar28 + 0x30 + lVar25);
        dVar3 = *(double *)(lVar28 + 0x38 + lVar25);
        dVar8 = *(double *)(lVar24 + 0x30 + lVar33);
        dVar12 = *(double *)(lVar24 + 0x28 + lVar33);
        dVar35 = *(double *)(lVar24 + 0x20 + lVar33);
        dVar10 = dVar12 * dVar3 - dVar2 * dVar8;
        dVar10 = dVar10 + dVar10;
        dVar34 = *(double *)(lVar24 + 0x38 + lVar33);
        dVar11 = dVar35 * dVar2 - dVar1 * dVar12;
        dVar11 = dVar11 + dVar11;
        dVar9 = dVar8 * dVar1 - dVar3 * dVar35;
        dVar9 = dVar9 + dVar9;
        local_428 = *(double *)(lVar24 + 0x10 + lVar33) -
                    ((dVar35 * dVar9 - dVar10 * dVar12) + dVar34 * dVar11 + dVar3);
        dVar2 = *(double *)(lVar24 + 8 + lVar33) -
                ((dVar8 * dVar10 - dVar11 * dVar35) + dVar34 * dVar9 + dVar2);
        pdVar30 = (double *)(lVar24 + 0x20 + lVar33);
        local_458 = *pdVar30;
        uStack_450 = pdVar30[1];
        pdVar30 = (double *)(lVar24 + 0x30 + lVar33);
        local_448 = *pdVar30;
        uStack_440 = pdVar30[1];
        local_438._8_4_ = SUB84(dVar2,0);
        local_438._0_8_ =
             *(double *)(lVar24 + lVar33) -
             ((dVar12 * dVar11 - dVar9 * dVar8) + dVar10 * dVar34 + dVar1);
        local_438._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        uStack_420 = 0.0;
        local_418 = 0x3ff0000000000000;
        uStack_410 = 0x3ff0000000000000;
        local_408 = 0x3ff0000000000000;
        uStack_400 = 0;
        local_558 = local_540;
        local_560 = local_520;
        local_568 = &local_458;
        local_548 = plVar21;
        FUN_1474e14a6(param_1,&local_4e8,*(undefined1 *)(param_1 + 0x2a0),param_2);
        pdVar30 = (double *)&local_4e8;
        pdVar32 = &local_458;
        for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
          *pdVar32 = *pdVar30;
          pdVar30 = pdVar30 + 1;
          pdVar32 = pdVar32 + 1;
        }
        local_568 = &local_458;
        FUN_1474e2ab6(param_1,&local_4e8,*(undefined1 *)(param_1 + 0x2a0),param_2);
        pdVar30 = (double *)&local_4e8;
        pdVar32 = &local_458;
        for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
          *pdVar32 = *pdVar30;
          pdVar30 = pdVar30 + 1;
          pdVar32 = pdVar32 + 1;
        }
        pdVar30 = (double *)(lVar24 + 0x20 + lVar33);
        *pdVar30 = local_458;
        pdVar30[1] = uStack_450;
        pdVar30 = (double *)(lVar24 + 0x30 + lVar33);
        *pdVar30 = local_448;
        pdVar30[1] = uStack_440;
        puVar29 = (undefined8 *)(lVar24 + 0x20 + lVar33);
        uVar15 = *puVar29;
        uVar16 = puVar29[1];
        puVar29 = (undefined8 *)(lVar24 + 0x1e0 + lVar33);
        *puVar29 = uVar15;
        puVar29[1] = uVar16;
        puVar29 = (undefined8 *)(lVar24 + 0x30 + lVar33);
        uVar17 = *puVar29;
        uVar18 = puVar29[1];
        puVar29 = (undefined8 *)(lVar24 + 0x1f0 + lVar33);
        *puVar29 = uVar17;
        puVar29[1] = uVar18;
        puVar29 = (undefined8 *)(lVar24 + 0x1a0 + lVar33);
        *puVar29 = uVar15;
        puVar29[1] = uVar16;
        puVar29 = (undefined8 *)(lVar24 + 0x1b0 + lVar33);
        *puVar29 = uVar17;
        puVar29[1] = uVar18;
        lVar28 = *(longlong *)(param_1 + 0x1d0);
        lVar25 = (longlong)*(int *)((longlong)local_530 + (longlong)local_548) * 0xd0;
        dVar1 = *(double *)(lVar28 + 0x30 + lVar25);
        dVar2 = *(double *)(lVar28 + 0x38 + lVar25);
        dVar12 = uStack_450 * dVar2 - dVar1 * local_448;
        dVar3 = *(double *)(lVar28 + 0x28 + lVar25);
        dVar12 = dVar12 + dVar12;
        dVar35 = local_458 * dVar1 - dVar3 * uStack_450;
        dVar35 = dVar35 + dVar35;
        dVar8 = local_448 * dVar3 - dVar2 * local_458;
        dVar8 = dVar8 + dVar8;
        *(double *)(lVar24 + lVar33) =
             (uStack_450 * dVar35 - dVar8 * local_448) + uStack_440 * dVar12 + dVar3 +
             (double)local_438._0_8_;
        *(double *)(lVar24 + 8 + lVar33) =
             (local_448 * dVar12 - dVar35 * local_458) + uStack_440 * dVar8 + dVar1 +
             (double)local_438._8_8_;
        *(double *)(lVar24 + 0x10 + lVar33) =
             (local_458 * dVar8 - dVar12 * uStack_450) + uStack_440 * dVar35 + dVar2 + local_428;
        plVar21 = (longlong *)((longlong)local_548 + 4);
      } while (local_528 != plVar21);
    }
    goto LAB_1474ddf76;
  }
  if (*(char *)(param_1 + 0x2a2) != '\x02') goto LAB_1474ddf76;
  FUN_1474e128c(param_1);
  local_540 = local_538[6];
  if ((*(int *)(param_1 + 0x1d8) != 0) &&
     ((**(longlong **)(param_1 + 0x1d0) != *(longlong *)(param_1 + 0x1b0) ||
      ((*(longlong **)(param_1 + 0x1d0))[(longlong)(*(int *)(param_1 + 0x1d8) + -1) * 0x1a] !=
       *(longlong *)(param_1 + 0x1c0))))) {
    FUN_1474e041a(param_1,*(undefined8 *)(local_540 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x2a4) & 6) == 2) {
    FUN_1474df174(param_1,&local_478,local_538);
  }
  else {
    local_468 = *(double *)(param_1 + 0x1f8);
    local_478 = *(double *)(param_1 + 0x1e8);
    dStack_470 = *(double *)(param_1 + 0x1f0);
  }
  lVar24 = DAT_14caab0a0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar20 = 0;
  }
  else {
    bVar23 = FUN_144a61b4f();
    uVar20 = (ulonglong)(bVar23 ^ 1);
  }
  local_528 = (longlong *)CONCAT44(local_528._4_4_,*(undefined4 *)(lVar24 + uVar20 * 4));
  iVar27 = *(int *)(param_1 + 0x1d8);
  if (0 < iVar27) {
    if (*(int *)(param_1 + 0x474) < iVar27) {
      FUN_1474fe54c(param_1 + 0x468);
    }
    puVar29 = *(undefined8 **)(param_1 + 0x1d0);
    uVar15 = *(undefined8 *)(param_1 + 0x1b8);
    *puVar29 = *(undefined8 *)(param_1 + 0x1b0);
    puVar29[1] = uVar15;
    iVar27 = *(int *)(param_1 + 0x1d8);
  }
  local_548 = (longlong *)(param_1 + 0x4d8);
  FUN_1474e147c(local_548,iVar27);
  local_530 = (longlong *)(param_1 + 0x4c8);
  FUN_1417247dc(local_530,*(undefined4 *)(param_1 + 0x1d8));
  if ((longlong)*(int *)(param_1 + 0x1d8) != 0) {
    puVar29 = *(undefined8 **)(param_1 + 0x1d0);
    local_520 = (double)local_528._0_4_;
    local_510 = param_1 + 0x468;
    local_518 = param_1 + 0x4e8;
    uVar45 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0x3ff00000;
    lVar24 = (longlong)*(int *)(param_1 + 0x1d8) * 0xd0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    do {
      local_488 = 0;
      uStack_480 = 0;
      FUN_147923334(&local_458,puVar29 + 2);
      uVar20 = uStack_480;
      lVar28 = (longlong)(int)uStack_480;
      uVar19 = (int)uStack_480 + 1;
      uStack_480 = CONCAT44(uStack_480._4_4_,uVar19);
      if (uStack_480._4_4_ < uVar19) {
        FUN_1474fe62c(&local_488,uVar20 & 0xffffffff);
      }
      lVar28 = lVar28 * 0x40;
      *(undefined8 *)(local_488 + lVar28) = 0;
      *(double *)(local_488 + lVar28) = local_458;
      *(undefined4 *)(local_488 + 8 + lVar28) = (undefined4)uStack_450;
      *(undefined4 *)(local_488 + 0xc + lVar28) = uStack_450._4_4_;
      *(undefined8 *)(local_488 + 0x10 + lVar28) = 0;
      *(double *)(local_488 + 0x10 + lVar28) = local_448;
      *(undefined4 *)(local_488 + 0x18 + lVar28) = (undefined4)uStack_440;
      *(undefined4 *)(local_488 + 0x1c + lVar28) = uStack_440._4_4_;
      puVar22 = (undefined4 *)(local_488 + 0x30 + lVar28);
      *puVar22 = (undefined4)local_428;
      puVar22[1] = local_428._4_4_;
      puVar22[2] = (undefined4)uStack_420;
      puVar22[3] = uStack_420._4_4_;
      puVar31 = (undefined8 *)(local_488 + 0x20 + lVar28);
      *puVar31 = local_438._0_8_;
      puVar31[1] = local_438._8_8_;
      uStack_440 = 0.0;
      local_448 = 0.0;
      uStack_450 = 0.0;
      local_458 = 0.0;
      FUN_14019c9f2(puVar29,local_540);
      uVar19 = *(uint *)(puVar29 + 1);
      if ((int)uVar19 < 0) {
        uVar37 = 0xffffffff;
        if ((((~uVar19 & 0x7fffffff) != 0) && (uVar19 = (int)(uVar19 * 2) >> 1, -1 < (int)uVar19))
           && ((int)uVar19 < *(int *)(local_540 + 0x88))) {
          puVar22 = (undefined4 *)((ulonglong)uVar19 * 4 + *(longlong *)(local_540 + 0x80));
          goto LAB_1474de6e6;
        }
      }
      else {
        puVar22 = (undefined4 *)((longlong)puVar29 + 0xc);
LAB_1474de6e6:
        uVar37 = *puVar22;
      }
      local_458 = (double)CONCAT44(local_458._4_4_,uVar37);
      FUN_1474df0d0(param_1,&local_4e8,local_538,&local_458);
      dVar1 = (double)puVar29[5];
      dVar2 = (double)puVar29[6];
      dVar3 = (double)puVar29[7];
      dVar12 = uStack_4e0 * dVar3 - dVar2 * local_4d8;
      dVar12 = dVar12 + dVar12;
      dVar35 = (double)CONCAT44(uStack_4cc,uStack_4d0);
      dVar34 = local_4e8 * dVar2 - dVar1 * uStack_4e0;
      dVar34 = dVar34 + dVar34;
      dVar8 = local_4d8 * dVar1 - dVar3 * local_4e8;
      dVar8 = dVar8 + dVar8;
      local_4f8 = (local_4e8 * dVar8 - dVar12 * uStack_4e0) + dVar35 * dVar34 + dVar3 + local_4b8;
      dVar2 = (local_4d8 * dVar12 - dVar34 * local_4e8) + dVar35 * dVar8 + dVar2 +
              stack0xfffffffffffffb40;
      uVar37 = SUB84(dVar2,0);
      uVar38 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar1 = (uStack_4e0 * dVar34 - dVar8 * local_4d8) + dVar35 * dVar12 + dVar1 +
              (double)local_4c8._0_8_;
      local_4c8._8_4_ = uVar37;
      local_4c8._0_8_ = dVar1;
      uStack_4bc = uVar38;
      uStack_4b0 = 0;
      local_508._8_4_ = uVar37;
      local_508._0_8_ = dVar1;
      local_508._12_4_ = uVar38;
      local_4b8 = local_4f8;
      FUN_147923966(&local_458,&local_488,local_508);
      dVar12 = local_4b8;
      dVar8 = local_4d8;
      dVar3 = uStack_4e0;
      dVar2 = local_4e8;
      local_118 = *puVar29;
      uStack_110 = puVar29[1];
      local_108 = 0;
      dVar1 = (double)CONCAT44(uStack_4cc,uStack_4d0);
      local_438._8_8_ = uStack_4e0;
      local_438._0_8_ = local_4e8;
      local_428 = local_4d8;
      local_268 = local_4d8;
      local_278 = local_4e8;
      dStack_270 = uStack_4e0;
      local_2b8 = local_4e8;
      dStack_2b0 = uStack_4e0;
      local_2a8 = local_4d8;
      local_130 = *(char *)(puVar29 + 0x19);
      if (local_130 == '\x03') {
        dVar35 = ABS((double)puVar29[2]);
        if (ABS((double)puVar29[2]) <= ABS((double)puVar29[3])) {
          dVar35 = ABS((double)puVar29[3]);
        }
        if (dVar35 <= ABS((double)puVar29[4])) {
          dVar35 = ABS((double)puVar29[4]);
        }
LAB_1474de94d:
        local_12c = (float)(dVar35 * 0.5);
      }
      else {
        if (local_130 == '\x02') {
          dVar35 = ABS((double)puVar29[2]);
          if (ABS((double)puVar29[3]) <= ABS((double)puVar29[2])) {
            dVar35 = ABS((double)puVar29[3]);
          }
          if (ABS((double)puVar29[4]) <= dVar35) {
            dVar35 = ABS((double)puVar29[4]);
          }
          goto LAB_1474de94d;
        }
        if (local_130 == '\x01') {
          local_12c = *(float *)((longlong)puVar29 + 0xcc);
        }
      }
      if ((*(byte *)(param_1 + 0x2a3) & 0x10) != 0) {
        local_1e0 = 1;
        local_1dc = *(undefined4 *)(param_1 + 0xd8);
      }
      if ((*(byte *)(param_1 + 0x2a3) & 0x40) != 0) {
        local_1e8 = 1;
        local_1e4 = *(undefined4 *)(param_1 + 0xdc);
      }
      local_1d8 = *(float *)(param_1 + 0x1e0) * local_528._0_4_;
      local_1d4 = *(byte *)(param_1 + 0x2a4) >> 1 & 1;
      local_1c0 = local_468 * local_520;
      local_1c8 = dStack_470 * local_520;
      local_1d0 = local_478 * local_520;
      local_218 = *(byte *)(param_1 + 0x2a4) & 1;
      uStack_420 = dVar1;
      if ((longlong)*(int *)(param_1 + 0x470) < 1) {
        uVar20 = puVar29[5];
        uVar4 = puVar29[6];
        uVar5 = puVar29[7];
        local_4f8 = DAT_14c8464f0;
        local_508._8_8_ = DAT_14c8464e8;
        local_508._0_8_ = DAT_14c8464e0;
        iVar27 = *(int *)(param_1 + 0x4e0);
        *(uint *)(param_1 + 0x4e0) = iVar27 + 1U;
        if (*(uint *)(param_1 + 0x4e4) < iVar27 + 1U) {
          FUN_1474fe6b2(local_548,iVar27);
        }
        lVar28 = *local_548;
        lVar25 = (longlong)iVar27 * 0x30;
        *(double *)(lVar28 + 0x10 + lVar25) = local_4f8;
        *(undefined8 *)(lVar28 + lVar25) = local_508._0_8_;
        ((undefined8 *)(lVar28 + lVar25))[1] = local_508._8_8_;
        *(ulonglong *)(lVar28 + 0x18 + lVar25) = uVar20 ^ 0x8000000000000000;
        *(ulonglong *)(lVar28 + 0x20 + lVar25) = uVar4 ^ 0x8000000000000000;
        *(ulonglong *)(lVar28 + 0x28 + lVar25) = uVar5 ^ 0x8000000000000000;
      }
      else {
        local_108 = (longlong)*(int *)(param_1 + 0x470) * 0x360 + *(longlong *)(param_1 + 0x468) +
                    -0x360;
        uVar15 = local_4c8._0_8_;
        dVar35 = stack0xfffffffffffffb40;
        iVar27 = *(int *)(param_1 + 0x4e0);
        uVar19 = iVar27 + 1;
        *(uint *)(param_1 + 0x4e0) = uVar19;
        if (*(uint *)(param_1 + 0x4e4) < uVar19) {
          FUN_1474fe6b2(local_548);
        }
        dVar13 = (dVar12 - (double)CONCAT44(uVar40,uVar39)) * 0.5;
        dVar12 = (dVar35 - (double)CONCAT44(uVar44,uVar43)) * 0.5;
        dVar14 = ((double)uVar15 - (double)CONCAT44(uVar42,uVar41)) * 0.5;
        dVar35 = dVar2 * dVar12 - dVar3 * dVar14;
        dVar36 = dVar8 * dVar14 - dVar2 * dVar13;
        dVar9 = dVar3 * dVar13 - dVar8 * dVar12;
        dVar35 = dVar35 + dVar35;
        dVar36 = dVar36 + dVar36;
        dVar9 = dVar9 + dVar9;
        dVar10 = (double)CONCAT44(uVar52,uVar51) * dVar14 - (double)CONCAT44(uVar50,uVar49) * dVar12
        ;
        dVar34 = (double)CONCAT44(uVar50,uVar49) * dVar13 - (double)CONCAT44(uVar46,uVar45) * dVar14
        ;
        dVar11 = (double)CONCAT44(uVar46,uVar45) * dVar12 - (double)CONCAT44(uVar52,uVar51) * dVar13
        ;
        dVar10 = dVar10 + dVar10;
        dVar34 = dVar34 + dVar34;
        dVar11 = dVar11 + dVar11;
        lVar28 = *local_548;
        lVar25 = (longlong)iVar27 * 0x30;
        *(double *)(lVar28 + lVar25) =
             (dVar34 * (double)CONCAT44(uVar46,uVar45) - dVar10 * (double)CONCAT44(uVar52,uVar51)) +
             (double)CONCAT44(uVar48,uVar47) * dVar11 + dVar14;
        *(double *)(lVar28 + 8 + lVar25) =
             ((double)CONCAT44(uVar50,uVar49) * dVar10 - dVar11 * (double)CONCAT44(uVar46,uVar45)) +
             (double)CONCAT44(uVar48,uVar47) * dVar34 + dVar12;
        *(double *)(lVar28 + 0x10 + lVar25) =
             ((double)CONCAT44(uVar52,uVar51) * dVar11 - (double)CONCAT44(uVar50,uVar49) * dVar34) +
             (double)CONCAT44(uVar48,uVar47) * dVar10 + dVar13;
        *(double *)(lVar28 + 0x18 + lVar25) =
             (dVar36 * dVar8 - dVar35 * dVar3) + (dVar1 * dVar9 - dVar14);
        *(double *)(lVar28 + 0x20 + lVar25) =
             (dVar2 * dVar35 - dVar9 * dVar8) + (dVar1 * dVar36 - dVar12);
        *(double *)(lVar28 + 0x28 + lVar25) =
             (dVar3 * dVar9 - dVar2 * dVar36) + (dVar1 * dVar35 - dVar13);
      }
      if (*(char *)(puVar29 + 8) == '\0') {
        bVar7 = false;
      }
      else {
        bVar7 = (double)puVar29[9] - (double)puVar29[0xc] == 0.0;
      }
      if (*(char *)((longlong)puVar29 + 0x41) == '\0') {
        bVar23 = 0;
      }
      else {
        bVar23 = -((double)puVar29[10] - (double)puVar29[0xd] == 0.0) & 1;
      }
      if (*(char *)((longlong)puVar29 + 0x42) == '\0') {
        bVar26 = 0;
      }
      else {
        bVar26 = -((double)puVar29[0xb] - (double)puVar29[0xe] == 0.0) & 1;
      }
      if (bVar7) {
        bVar23 = bVar23 & bVar26;
      }
      else {
        bVar23 = 0;
      }
      *(byte *)((longlong)puVar29 + 0x43) = bVar23;
      iVar27 = *(int *)(param_1 + 0x470);
      *(uint *)(param_1 + 0x470) = iVar27 + 1U;
      if (*(uint *)(param_1 + 0x474) < iVar27 + 1U) {
        FUN_1474fe746(local_510,iVar27);
      }
      lVar28 = *(longlong *)(param_1 + 0x468);
      lVar25 = (longlong)iVar27 * 0x360;
      FUN_1474f8418(lVar28 + lVar25,&local_458);
      puVar31 = (undefined8 *)(lVar28 + 0x340 + lVar25);
      *puVar31 = local_118;
      puVar31[1] = uStack_110;
      *(longlong *)(lVar28 + 0x350 + lVar25) = local_108;
      iVar27 = *(int *)(param_1 + 0x470);
      iVar6 = *(int *)(param_1 + 0x4f0);
      *(uint *)(param_1 + 0x4f0) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x4f4) < iVar6 + 1U) {
        FUN_1446f48e2(local_518,iVar6);
      }
      *(int *)(*(longlong *)(param_1 + 0x4e8) + (longlong)iVar6 * 4) = iVar27 + -1;
      iVar27 = *(int *)(param_1 + 0x4d0);
      *(uint *)(param_1 + 0x4d0) = iVar27 + 1U;
      if (*(uint *)(param_1 + 0x4d4) < iVar27 + 1U) {
        FUN_1403e3958(local_530,iVar27);
      }
      uVar48 = uStack_4cc;
      uVar47 = uStack_4d0;
      lVar28 = *local_530;
      *(undefined8 *)(lVar28 + 0x10 + (longlong)iVar27 * 0x18) = puVar29[7];
      uVar15 = puVar29[6];
      puVar31 = (undefined8 *)(lVar28 + (longlong)iVar27 * 0x18);
      *puVar31 = puVar29[5];
      puVar31[1] = uVar15;
      uVar49 = (undefined4)local_4e8;
      uVar50 = local_4e8._4_4_;
      uVar51 = (undefined4)uStack_4e0;
      uVar52 = uStack_4e0._4_4_;
      uVar45 = (undefined4)local_4d8;
      uVar46 = local_4d8._4_4_;
      uVar41 = local_4c8._0_4_;
      uVar42 = local_4c8._4_4_;
      uVar43 = local_4c8._8_4_;
      uVar44 = uStack_4bc;
      uVar39 = (undefined4)local_4b8;
      uVar40 = local_4b8._4_4_;
      FUN_1474fe191(local_128,local_120);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      FUN_1474fe191(local_488,uStack_480 & 0xffffffff);
      if (local_488 != 0) {
        FUN_1400020a8();
      }
      puVar29 = puVar29 + 0x1a;
      lVar24 = lVar24 + -0xd0;
    } while (lVar24 != 0);
  }
  plVar21 = (longlong *)(param_1 + 0x488);
  *(undefined4 *)(param_1 + 0x490) = 0;
  if (*(int *)(param_1 + 0x494) < 0) {
    FUN_1474fe370(plVar21,0);
  }
  if ((longlong)*(int *)(param_1 + 0x470) != 0) {
    lVar24 = *(longlong *)(param_1 + 0x468);
    lVar28 = (longlong)*(int *)(param_1 + 0x470) * 0x360;
    do {
      iVar27 = *(int *)(param_1 + 0x490);
      *(uint *)(param_1 + 0x490) = iVar27 + 1U;
      if (*(uint *)(param_1 + 0x494) < iVar27 + 1U) {
        FUN_1474fe3d0(plVar21,iVar27);
      }
      *(longlong *)(*plVar21 + (longlong)iVar27 * 8) = lVar24;
      lVar24 = lVar24 + 0x360;
      lVar28 = lVar28 + -0x360;
    } while (lVar28 != 0);
  }
  plVar21 = (longlong *)FUN_144800528();
  lVar24 = plVar21[0x22];
  if (lVar24 == 0) {
    (**(code **)(*plVar21 + 1000))(plVar21);
    lVar24 = plVar21[0x22];
    if (lVar24 != 0) goto LAB_1474defae;
    *(undefined8 *)(param_1 + 0x458) = 0x3d08888900000000;
    *(undefined4 *)(param_1 + 0x460) = 0x3c888889;
    uVar49 = 4;
  }
  else {
LAB_1474defae:
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(lVar24 + 0x154);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(lVar24 + 0x160);
    *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(lVar24 + 0x16c);
    uVar49 = *(undefined4 *)(lVar24 + 0x170);
  }
  *(undefined4 *)(param_1 + 0x464) = uVar49;
  local_4e8 = 0.0;
  uStack_4e0 = 0.0;
  local_4d8 = -1.0;
  FUN_1474df174(param_1,&local_458,local_538);
  *(double *)(param_1 + 0x508) = local_448;
  *(double *)(param_1 + 0x4f8) = local_458;
  *(double *)(param_1 + 0x500) = uStack_450;
LAB_1474ddf76:
  *(undefined1 *)(param_1 + 0x2a2) = 0;
  puVar29 = (undefined8 *)(*local_538 + 0x10);
  puVar31 = (undefined8 *)(param_1 + 0xe0);
  for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar31 = *puVar29;
    puVar29 = puVar29 + 1;
    puVar31 = puVar31 + 1;
  }
  puVar29 = (undefined8 *)(*local_538 + 0xd0);
  puVar31 = (undefined8 *)(param_1 + 0x140);
  for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar31 = *puVar29;
    puVar29 = puVar29 + 1;
    puVar31 = puVar31 + 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474df0d0 FUN_1474df0d0 body=162 status=ok
// SIG undefined FUN_1474df0d0(void)

undefined8 FUN_1474df0d0(longlong param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *param_4;
  if (*(char *)(*(longlong *)(param_3 + 0x38) + (longlong)iVar1) == '\0') {
    FUN_1447d5d8e(param_3 + 0x20,iVar1);
  }
  local_a8 = local_98;
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x60 + *(longlong *)(param_3 + 0x20));
  puVar4 = local_a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1474e2ab6(param_1,param_2,*(undefined1 *)(param_1 + 0x2a0),param_3);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474df174 FUN_1474df174 body=2223 status=ok
// SIG undefined FUN_1474df174(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1474df174(longlong param_1,double *param_2,longlong *param_3,double *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  double *pdVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  double dVar13;
  undefined1 auVar12 [16];
  double dVar14;
  double dVar15;
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  double dVar19;
  double dVar21;
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  undefined1 auStack_278 [32];
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  param_2[2] = param_4[2];
  dVar19 = param_4[1];
  *param_2 = *param_4;
  param_2[1] = dVar19;
  uVar34 = 0x4a4429b8;
  switch(*(undefined1 *)(param_1 + 0x2a0)) {
  case 0:
    lVar8 = *param_3;
    dVar36 = *param_2;
    dVar37 = param_2[1];
    dVar13 = param_2[2];
    uVar34 = SUB84(param_2[2],0);
    uVar35 = (undefined4)((ulonglong)param_2[2] >> 0x20);
    dVar19 = *(double *)(lVar8 + 0x10);
    dVar21 = *(double *)(lVar8 + 0x18);
    dVar22 = *(double *)(lVar8 + 0x20);
    dVar28 = *(double *)(lVar8 + 0x28);
    break;
  case 1:
    lVar8 = *param_3;
    dVar36 = *param_2;
    dVar37 = param_2[1];
    dVar13 = param_2[2];
    uVar34 = SUB84(param_2[2],0);
    uVar35 = (undefined4)((ulonglong)param_2[2] >> 0x20);
    dVar19 = *(double *)(lVar8 + 0xd0);
    dVar21 = *(double *)(lVar8 + 0xd8);
    dVar22 = *(double *)(lVar8 + 0xe0);
    dVar28 = *(double *)(lVar8 + 0xe8);
    break;
  default:
    goto switchD_1474df21e_caseD_2;
  case 3:
    plVar7 = param_3;
    if (*(char *)param_3[7] == '\0') {
      uVar34 = 0;
      FUN_1447d5d8e(param_3 + 4);
    }
    lVar2 = *param_3;
    pdVar4 = (double *)param_3[4];
    dVar22 = *pdVar4;
    dVar36 = pdVar4[1];
    dVar37 = pdVar4[2];
    dVar15 = pdVar4[3];
    auVar16 = *(undefined1 (*) [16])(pdVar4 + 8);
    dVar19 = SUB168(*(undefined1 (*) [16])(pdVar4 + 10),0);
    auVar23 = *(undefined1 (*) [16])(lVar2 + 0x50);
    dVar21 = auVar23._0_8_;
    dVar13 = auVar23._8_8_;
    auVar24 = *(undefined1 (*) [16])(lVar2 + 0x60);
    uVar35 = auVar24._0_4_;
    uVar38 = auVar24._4_4_;
    auVar23 = minpd(auVar23,auVar16);
    auVar24 = minpd(auVar24,*(undefined1 (*) [16])(pdVar4 + 10));
    auVar30._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
    auVar30._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
    iVar6 = movmskpd(uVar34,auVar30);
    auVar29._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar29._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    uVar10 = movmskpd((int)plVar7,auVar29);
    if ((uVar10 & 0x3fffffff) == 0 && iVar6 == 0) goto LAB_1474df961;
LAB_1474df2b1:
    auVar23 = _DAT_149934d80;
    local_158 = pdVar4[4];
    dStack_150 = pdVar4[5];
    dVar25 = dVar36 + dVar36;
    dVar26 = dVar37 + dVar37;
    dVar28 = dVar22 * (dVar22 + dVar22);
    dVar14 = auVar16._0_8_;
    dVar17 = auVar16._8_8_;
    dStack_190 = (DAT_149934d80._8_8_ - (dVar37 * dVar26 + dVar28)) * dVar17;
    dVar27 = (dVar22 + dVar22) * dVar15;
    local_198 = (dVar25 * dVar22 - dVar26 * dVar15) * dVar17;
    dVar31 = (dVar26 * dVar36 - dVar27) * dVar19;
    local_148 = *(undefined4 *)(pdVar4 + 6);
    uStack_144 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    dVar18 = (dVar25 * dVar22 + dVar26 * dVar15) * dVar14;
    local_188 = (dVar26 * dVar36 + dVar27) * dVar17;
    local_1b8._8_4_ = SUB84(dVar18,0);
    local_1b8._0_8_ = ((double)DAT_149934d80 - (dVar37 * dVar26 + dVar36 * dVar25)) * dVar14;
    local_1b8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    local_168 = (1.0 - (dVar28 + dVar36 * dVar25)) * dVar19;
    local_1a8 = (dVar22 * dVar26 - dVar25 * dVar15) * dVar14;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178._8_4_ = SUB84(dVar31,0);
    local_178._0_8_ = (dVar25 * dVar15 + dVar22 * dVar26) * dVar19;
    local_178._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    uStack_160 = 0;
    uStack_140 = 0;
    uStack_13c = 0x3ff00000;
    dVar15 = *(double *)(lVar2 + 0x10);
    dVar28 = *(double *)(lVar2 + 0x18);
    dVar31 = *(double *)(lVar2 + 0x20);
    dVar25 = dVar28 + dVar28;
    dVar26 = dVar31 + dVar31;
    dVar36 = dVar15 * (dVar15 + dVar15);
    dVar37 = *(double *)(lVar2 + 0x10) * dVar26;
    dVar22 = *(double *)(lVar2 + 0x28);
    dVar27 = dVar26 * dVar22;
    dVar18 = (dVar15 + dVar15) * *(double *)(lVar2 + 0x28);
    dVar22 = dVar25 * dVar22;
    local_218 = (dVar25 * dVar15 - dVar27) * dVar13;
    dStack_1f0 = (dVar26 * dVar28 - dVar18) * (double)CONCAT44(uVar38,uVar35);
    local_238 = ((double)DAT_149934d80 - (dVar31 * dVar26 + dVar28 * dVar25)) * dVar21;
    dStack_210 = (DAT_149934d80._8_8_ - (dVar31 * dVar26 + dVar36)) * dVar13;
    dStack_230 = (dVar25 * dVar15 + dVar27) * dVar21;
    local_208 = (dVar26 * dVar28 + dVar18) * dVar13;
    local_1f8 = (dVar22 + dVar37) * (double)CONCAT44(uVar38,uVar35);
    local_228 = (dVar37 - dVar22) * dVar21;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1e8 = (1.0 - (dVar36 + dVar28 * dVar25)) * (double)CONCAT44(uVar38,uVar35);
    uStack_1e0 = 0;
    local_1d8 = *(undefined8 *)(lVar2 + 0x30);
    uStack_1d0 = *(undefined8 *)(lVar2 + 0x38);
    local_1c8 = *(undefined8 *)(lVar2 + 0x40);
    uStack_1c0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_138);
    FUN_144a1c686(&local_138,0x3e45798ee0000000);
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar17 * dVar13);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar14 * dVar21);
    auVar16 = blendvpd(_DAT_149936790,auVar23,auVar16);
    uVar11 = -(ulonglong)(0.0 <= dVar19 * (double)CONCAT44(uVar38,uVar35));
    dVar19 = (double)(~uVar11 & 0xbff0000000000000 | uVar11 & 0x3ff0000000000000);
    dVar21 = auVar16._0_8_;
    local_128 = local_128 * dVar21;
    local_130 = local_130 * dVar21;
    local_138 = local_138 * dVar21;
    dVar21 = auVar16._8_8_;
    local_108 = local_108 * dVar21;
    local_110 = local_110 * dVar21;
    local_118 = dVar21 * local_118;
    local_e8 = local_e8 * dVar19;
    local_f0 = local_f0 * dVar19;
    local_f8 = dVar19 * local_f8;
    FUN_14481fd10(&local_258,&local_138);
    dVar19 = local_248 * local_248 + local_258 * local_258;
    dVar21 = dStack_240 * dStack_240 + dStack_250 * dStack_250;
    auVar20._0_8_ = dVar19 + dVar21;
    auVar20._8_8_ = dVar19 + dVar21;
    auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
    auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
    auVar16 = sqrtpd(auVar20,auVar20);
    auVar16 = divpd(auVar23,auVar16);
    auVar33._0_8_ = auVar16._0_8_ * local_248;
    auVar33._8_8_ = auVar16._8_8_ * dStack_240;
    dVar19 = (double)((ulonglong)(local_258 * auVar16._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
    dVar21 = (double)((ulonglong)(dStack_250 * auVar16._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
    auVar32 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar12);
    goto LAB_1474df65a;
  case 4:
    uVar10 = *(uint *)(param_1 + 0x1a8);
    if ((~uVar10 & 0x7fffffff) == 0) goto switchD_1474df21e_caseD_2;
    lVar8 = param_3[6];
    lVar2 = lVar8 + 0x10;
    if (*(longlong *)(lVar8 + 0x20) != 0) {
      lVar2 = *(longlong *)(lVar8 + 0x20);
    }
    uVar9 = uVar10 >> 3 & 0x1ffc;
    if ((*(uint *)(lVar2 + (ulonglong)uVar9) >> (uVar10 & 0x1f) & 1) == 0)
    goto switchD_1474df21e_caseD_2;
    if ((int)uVar10 < 0) {
      uVar10 = (int)(uVar10 * 2) >> 1;
      iVar6 = -1;
      if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(lVar8 + 0x88))) {
        piVar3 = (int *)((ulonglong)uVar10 * 4 + *(longlong *)(lVar8 + 0x80));
        goto LAB_1474df8dc;
      }
    }
    else {
      piVar3 = (int *)(param_1 + 0x1ac);
LAB_1474df8dc:
      iVar6 = *piVar3;
    }
    if (*(char *)(param_3[7] + (longlong)iVar6) == '\0') {
      FUN_1447d5d8e(param_3 + 4);
    }
    lVar2 = *param_3;
    lVar1 = param_3[4];
    lVar5 = (longlong)iVar6 * 0x60;
    dVar22 = *(double *)(lVar1 + lVar5);
    dVar36 = ((double *)(lVar1 + lVar5))[1];
    pdVar4 = (double *)(lVar1 + 0x10 + lVar5);
    dVar37 = *pdVar4;
    dVar15 = pdVar4[1];
    auVar16 = *(undefined1 (*) [16])(lVar1 + 0x40 + lVar5);
    auVar23 = *(undefined1 (*) [16])(lVar1 + 0x50 + lVar5);
    dVar19 = auVar23._0_8_;
    auVar24 = *(undefined1 (*) [16])(lVar2 + 0x50);
    dVar21 = auVar24._0_8_;
    dVar13 = auVar24._8_8_;
    auVar30 = *(undefined1 (*) [16])(lVar2 + 0x60);
    uVar35 = auVar30._0_4_;
    uVar38 = auVar30._4_4_;
    auVar24 = minpd(auVar24,auVar16);
    auVar30 = minpd(auVar30,auVar23);
    auVar23._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    iVar6 = movmskpd((int)lVar8,auVar23);
    auVar24._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
    auVar24._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
    uVar10 = movmskpd(uVar9,auVar24);
    if ((uVar10 & 0x3fffffff) != 0 || iVar6 != 0) {
      pdVar4 = (double *)(lVar1 + lVar5);
      goto LAB_1474df2b1;
    }
LAB_1474df961:
    dVar13 = *(double *)(lVar2 + 0x10);
    dVar28 = *(double *)(lVar2 + 0x18);
    dVar31 = *(double *)(lVar2 + 0x20);
    dVar25 = *(double *)(lVar2 + 0x28);
    dVar19 = dVar28 * dVar37 * -1.0 + dVar31 * dVar36 + dVar22 * dVar25 * 1.0 + dVar15 * dVar13;
    dVar21 = dVar13 * dVar37 * 1.0 + dVar25 * dVar36 + dVar22 * dVar31 * -1.0 + dVar15 * dVar28;
    auVar32._0_8_ =
         dVar25 * dVar37 * 1.0 + ((dVar22 * dVar28 * 1.0 + dVar15 * dVar31) - dVar36 * dVar13);
    auVar32._8_8_ =
         dVar31 * dVar37 * -1.0 + ((dVar22 * dVar13 * -1.0 + dVar15 * dVar25) - dVar36 * dVar28);
LAB_1474df65a:
    dVar36 = *param_2;
    dVar37 = param_2[1];
    dVar13 = param_2[2];
    dVar28 = -dVar19;
    dVar21 = -dVar21;
    dVar26 = auVar32._0_8_ * -1.0;
    dVar27 = auVar32._8_8_ * 1.0;
    dVar22 = dVar37 * dVar28 - dVar21 * dVar36;
    dVar31 = param_2[2] * dVar21 - dVar26 * dVar37;
    dVar25 = dVar36 * dVar26 - dVar28 * param_2[2];
    dVar31 = dVar31 + dVar31;
    dVar25 = dVar25 + dVar25;
    dVar22 = dVar22 + dVar22;
    dVar15 = dVar27 * dVar22;
    dVar36 = dVar27 * dVar31 + dVar36;
    dVar37 = dVar27 * dVar25 + dVar37;
    dVar28 = dVar25 * dVar28 - dVar31 * dVar21;
    dVar21 = dVar22 * dVar21 - dVar25 * dVar26;
    dVar19 = dVar22 * dVar19 + dVar26 * dVar31;
    goto LAB_1474df7f2;
  }
  dVar25 = -dVar19;
  dVar21 = -dVar21;
  dVar22 = dVar22 * -1.0;
  dVar28 = dVar28 * 1.0;
  dVar31 = dVar37 * dVar25 - dVar36 * dVar21;
  dVar26 = (double)CONCAT44(uVar35,uVar34) * dVar21 - dVar37 * dVar22;
  dVar27 = dVar36 * dVar22 - dVar25 * (double)CONCAT44(uVar35,uVar34);
  dVar26 = dVar26 + dVar26;
  dVar27 = dVar27 + dVar27;
  dVar31 = dVar31 + dVar31;
  dVar15 = dVar28 * dVar31;
  dVar36 = dVar28 * dVar26 + dVar36;
  dVar37 = dVar28 * dVar27 + dVar37;
  dVar28 = dVar27 * dVar25 - dVar26 * dVar21;
  dVar21 = dVar31 * dVar21 - dVar27 * dVar22;
  dVar19 = dVar31 * dVar19 + dVar22 * dVar26;
LAB_1474df7f2:
  *param_2 = dVar21 + dVar36;
  param_2[1] = dVar19 + dVar37;
  param_2[2] = dVar15 + dVar13 + dVar28;
switchD_1474df21e_caseD_2:
  if ((local_b0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474dfa24 FUN_1474dfa24 body=2548 status=ok
// SIG undefined FUN_1474dfa24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1474dfa24(double *param_1,double *param_2,double *param_3,double *param_4,
                      undefined8 param_5,char param_6,undefined1 param_7,undefined4 param_8,
                      char param_9,double *param_10,char param_11,float param_12,float param_13,
                      float param_14,float param_15)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar9;
  double dVar10;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar19 [16];
  double dVar21;
  double dVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  float fVar30;
  uint uVar31;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_108 = *param_2;
  dStack_100 = param_2[1];
  local_f8 = param_2[2];
  dStack_f0 = param_2[3];
  if ((ABS(param_13 - param_12) <= 1e-08) || (ABS(param_15 - param_14) <= 1e-08)) {
    dVar21 = *param_2;
    dVar25 = param_2[1];
    dVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = dVar3;
    *param_1 = dVar21;
    param_1[1] = dVar25;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_1b8);
  }
  dVar2 = param_3[2] * -1.0;
  dVar9 = param_3[3] * 1.0;
  dVar25 = param_3[1];
  dVar21 = param_3[1];
  auVar23._0_8_ = local_f8 * dVar25;
  auVar23._8_8_ = dStack_f0 * dVar21;
  dVar25 = dVar25 * local_108;
  dVar21 = dVar21 * dStack_100;
  dVar3 = *param_3 * dStack_100;
  dVar26 = *param_3 * local_108;
  dVar28 = local_108 * dVar2;
  dVar10 = local_f8 * dVar2;
  local_108 = dStack_100 * dVar2 * -1.0 +
              ((local_108 * dVar9 - *param_3 * dStack_f0 * 1.0) - auVar23._0_8_);
  dStack_100 = dVar28 * 1.0 + ((dStack_100 * dVar9 - *param_3 * local_f8 * -1.0) - auVar23._8_8_);
  local_f8 = dStack_f0 * dVar2 * 1.0 + dVar25 + (dVar9 * local_f8 - dVar3 * 1.0);
  dStack_f0 = dVar10 * -1.0 + dVar21 + (dVar9 * dStack_f0 - dVar26 * -1.0);
  switch(param_9) {
  case '\0':
    FUN_1449413b4(&local_108,&local_160);
    auVar29 = ZEXT416((uint)(float)local_160);
    break;
  case '\x01':
    FUN_1449413b4(&local_108,&local_160);
    auVar29 = ZEXT416((uint)(float)local_158);
    break;
  case '\x02':
    FUN_1449413b4(&local_108,&local_160);
    auVar29 = ZEXT416((uint)(float)local_150);
    break;
  case '\x03':
    dVar21 = dStack_f0;
    if (1.0 <= dStack_f0) {
      dVar21 = 1.0;
    }
    dVar21 = acos((double)(~-(ulonglong)(dStack_f0 < -1.0) & (ulonglong)dVar21 |
                          -(ulonglong)(dStack_f0 < -1.0) & 0xbff0000000000000));
    auVar29 = ZEXT416((uint)(float)((dVar21 + dVar21) * 57.29577951308232));
    break;
  case '\x04':
  case '\x05':
    dVar21 = *param_10;
    dVar25 = param_10[1];
    dVar3 = param_10[2];
    auVar23._8_8_ = 0.0;
    auVar23._0_8_ = dVar3;
    dVar26 = dVar3 * dVar3 + dVar21 * dVar21 + dVar25 * dVar25;
    if (ABS((float)dVar26) <= 1e-08) {
      *param_10 = 1.0;
      param_10[1] = 0.0;
      param_10[2] = 0.0;
    }
    else if (9.99999993922529e-09 < dVar26) {
      dVar26 = 1.0 / SQRT(dVar26);
      *param_10 = dVar21 * dVar26;
      param_10[1] = dVar25 * dVar26;
      auVar23._0_8_ = dVar3 * dVar26;
      auVar23._8_8_ = 0.0;
      param_10[2] = auVar23._0_8_;
    }
    FUN_144afe582(&local_108,param_10,&local_128,&local_148);
    dVar21 = dStack_130;
    if (param_9 == '\x04') {
      dVar21 = dStack_110;
    }
    dVar25 = dVar21;
    if (1.0 <= dVar21) {
      dVar25 = 1.0;
    }
    dVar21 = acos((double)(~-(ulonglong)(dVar21 < -1.0) & (ulonglong)dVar25 |
                          -(ulonglong)(dVar21 < -1.0) & 0xbff0000000000000));
    auVar29 = ZEXT416((uint)((float)(dVar21 + dVar21) * 57.295776));
    break;
  default:
    auVar29 = ZEXT816(0);
  }
  fVar30 = auVar29._0_4_;
  uVar1 = auVar29._8_4_;
  uVar31 = auVar29._12_4_;
  if (param_11 != '\0') {
    auVar29._0_4_ = ABS(fVar30);
    auVar29._4_4_ = 0;
    auVar29._8_4_ = uVar1 & 0x7fffffff;
    auVar29._12_4_ = uVar31 & 0x7fffffff;
  }
  auVar4._4_12_ = auVar29._4_12_;
  auVar4._0_4_ = (auVar29._0_4_ - param_12) / (param_13 - param_12);
  if (param_6 != '\0') {
    local_198 = param_8;
    auVar4._0_4_ = (float)FUN_1474f59af(auVar4._0_8_,param_5,param_6,param_7);
  }
  param_14 = auVar4._0_4_ * (param_15 - param_14) + param_14;
  if (param_11 != '\0') {
    uVar1 = -(uint)(fVar30 < 0.0);
    param_14 = (float)(uVar1 & (uint)-param_14 | ~uVar1 & (uint)param_14);
  }
  switch(param_9) {
  case '\0':
    local_160 = (double)param_14;
    goto LAB_1474dffd0;
  case '\x01':
    local_158 = (double)param_14;
    goto LAB_1474dffd0;
  case '\x02':
    local_150 = (double)param_14;
LAB_1474dffd0:
    FUN_144afe3ce(&local_188);
    local_f8 = local_178;
    dStack_f0 = dStack_170;
    local_108 = local_188;
    dStack_100 = dStack_180;
    break;
  case '\x03':
    dVar21 = local_f8 * local_f8 + local_108 * local_108;
    dVar25 = dStack_100 * dStack_100 + 0.0;
    auVar13._0_8_ = dVar21 + dVar25;
    auVar13._8_8_ = dVar21 + dVar25;
    auVar6._8_8_ = -(ulonglong)(1e-08 <= auVar13._8_8_);
    auVar6._0_8_ = -(ulonglong)(1e-08 <= auVar13._0_8_);
    auVar23 = sqrtpd(auVar23,auVar13);
    auVar23 = divpd(_DAT_149934d80,auVar23);
    auVar18._0_8_ = local_108 * auVar23._0_8_;
    auVar18._8_8_ = dStack_100 * auVar23._8_8_;
    auVar29 = blendvpd(ZEXT816(0x3ff0000000000000),auVar18,auVar6);
    if ((-(ulonglong)(1e-08 <= auVar13._0_8_) & 1) == 0) {
      dVar21 = 0.0;
    }
    else {
      dVar21 = local_f8 * auVar23._0_8_;
    }
    dVar25 = (double)(param_14 * 0.017453292) * 0.5;
    dVar3 = sin(dVar25);
    dStack_f0 = cos(dVar25);
    local_108 = dVar3 * auVar29._0_8_;
    dStack_100 = auVar29._8_8_ * dVar3;
    local_f8 = dVar21 * dVar3;
    break;
  case '\x04':
    dVar21 = local_118 * local_118 + local_128 * local_128;
    dVar25 = dStack_120 * dStack_120 + 0.0;
    auVar12._0_8_ = dVar21 + dVar25;
    auVar12._8_8_ = dVar21 + dVar25;
    auVar5._8_8_ = -(ulonglong)(1e-08 <= auVar12._8_8_);
    auVar5._0_8_ = -(ulonglong)(1e-08 <= auVar12._0_8_);
    auVar23 = sqrtpd(auVar23,auVar12);
    auVar23 = divpd(_DAT_149934d80,auVar23);
    auVar17._0_8_ = local_128 * auVar23._0_8_;
    auVar17._8_8_ = dStack_120 * auVar23._8_8_;
    auVar29 = blendvpd(ZEXT816(0x3ff0000000000000),auVar17,auVar5);
    if ((-(ulonglong)(1e-08 <= auVar12._0_8_) & 1) == 0) {
      dVar21 = 0.0;
    }
    else {
      dVar21 = local_118 * auVar23._0_8_;
    }
    dVar25 = (double)(param_14 * 0.017453292) * 0.5;
    dVar3 = sin(dVar25);
    dVar25 = cos(dVar25);
    dVar26 = dVar3 * auVar29._0_8_;
    dVar2 = auVar29._8_8_ * dVar3;
    dVar21 = dVar21 * dVar3;
    local_108 = dVar2 * local_138 * -1.0 +
                dVar21 * dStack_140 + local_148 * dVar25 * 1.0 + dStack_130 * dVar26;
    dStack_100 = dVar26 * local_138 * 1.0 +
                 dVar25 * dStack_140 + local_148 * dVar21 * -1.0 + dStack_130 * dVar2;
    local_f8 = dVar25 * local_138 * 1.0 +
               ((local_148 * dVar2 * 1.0 + dStack_130 * dVar21) - dVar26 * dStack_140);
    dStack_f0 = dVar21 * local_138 * -1.0 +
                ((local_148 * dVar26 * -1.0 + dStack_130 * dVar25) - dVar2 * dStack_140);
    break;
  case '\x05':
    dVar21 = local_138 * local_138 + local_148 * local_148;
    dVar25 = dStack_140 * dStack_140 + 0.0;
    auVar14._0_8_ = dVar21 + dVar25;
    auVar14._8_8_ = dVar21 + dVar25;
    auVar8._8_8_ = -(ulonglong)(1e-08 <= auVar14._8_8_);
    auVar8._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
    auVar23 = sqrtpd(auVar23,auVar14);
    auVar23 = divpd(_DAT_149934d80,auVar23);
    auVar19._0_8_ = local_148 * auVar23._0_8_;
    auVar19._8_8_ = dStack_140 * auVar23._8_8_;
    auVar29 = blendvpd(ZEXT816(0x3ff0000000000000),auVar19,auVar8);
    if ((-(ulonglong)(1e-08 <= auVar14._0_8_) & 1) == 0) {
      dVar21 = 0.0;
    }
    else {
      dVar21 = local_138 * auVar23._0_8_;
    }
    dVar25 = (double)(param_14 * 0.017453292) * 0.5;
    dVar3 = sin(dVar25);
    dVar25 = cos(dVar25);
    dVar26 = dVar3 * auVar29._0_8_;
    dVar2 = auVar29._8_8_ * dVar3;
    dVar21 = dVar21 * dVar3;
    local_108 = dStack_120 * dVar21 * -1.0 +
                local_118 * dVar2 + dStack_110 * dVar26 * 1.0 + local_128 * dVar25;
    dStack_100 = local_128 * dVar21 * 1.0 +
                 dStack_110 * dVar2 + local_118 * dVar26 * -1.0 + dStack_120 * dVar25;
    local_f8 = dStack_110 * dVar21 * 1.0 +
               ((dVar26 * dStack_120 * 1.0 + dVar25 * local_118) - local_128 * dVar2);
    dStack_f0 = local_118 * dVar21 * -1.0 +
                ((dVar26 * local_128 * -1.0 + dVar25 * dStack_110) - dStack_120 * dVar2);
  }
  dVar21 = local_f8 * local_f8 + local_108 * local_108;
  dVar25 = dStack_f0 * dStack_f0 + dStack_100 * dStack_100;
  auVar22._0_8_ = dVar21 + dVar25;
  auVar22._8_8_ = dVar21 + dVar25;
  auVar7._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
  auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
  auVar23 = sqrtpd(auVar22,auVar22);
  auVar23 = divpd(_DAT_149934d80,auVar23);
  auVar27._0_8_ = auVar23._0_8_ * local_f8;
  auVar27._8_8_ = auVar23._8_8_ * dStack_f0;
  dVar11 = (double)((ulonglong)(local_108 * auVar23._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
  dVar15 = (double)((ulonglong)(dStack_100 * auVar23._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
  auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar7);
  dVar25 = param_4[3];
  dVar21 = param_4[3];
  dVar16 = auVar23._0_8_;
  dVar20 = auVar23._8_8_;
  auVar24._8_4_ = SUB84(dVar11,0);
  auVar24._0_8_ = dVar15;
  auVar24._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar26 = *param_4;
  dVar3 = *param_4;
  dVar9 = param_4[1];
  dVar2 = param_4[1];
  dVar28 = param_4[2];
  dVar10 = param_4[2];
  *param_1 = dVar15 * dVar28 * -1.0 + dVar16 * dVar9 + dVar26 * dVar20 * 1.0 + dVar25 * dVar11;
  param_1[1] = auVar24._8_8_ * dVar10 * 1.0 +
               dVar20 * dVar2 + dVar3 * dVar16 * -1.0 + dVar21 * dVar15;
  param_1[2] = dVar20 * dVar28 * 1.0 + ((dVar26 * dVar15 * 1.0 + dVar25 * dVar16) - dVar11 * dVar9);
  param_1[3] = dVar16 * dVar10 * -1.0 +
               ((dVar3 * auVar24._8_8_ * -1.0 + dVar21 * dVar20) - dVar15 * dVar2);
  if ((local_e0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e041a FUN_1474e041a body=2225 status=ok
// SIG undefined FUN_1474e041a(void)

void FUN_1474e041a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined3 uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_1d8 [40];
  undefined1 local_1b0;
  undefined1 local_1af;
  undefined1 local_1ae;
  undefined1 local_1ad;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_134;
  longlong local_130;
  undefined1 *local_128;
  undefined8 *puStack_120;
  longlong local_118;
  longlong *local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_108 = (longlong *)0x0;
  uStack_100 = 0;
  puStack_120 = &local_f8;
  local_128 = &LAB_1432ab5f8;
  local_f8 = param_2;
  FUN_14328f16e(*(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1c0));
  local_118 = DAT_14c8464f0;
  local_128 = (undefined1 *)DAT_14c8464e0;
  puStack_120 = (undefined8 *)DAT_14c8464e8;
  local_188 = (longlong *)(param_1 + 0x1d0);
  uVar1 = *(uint *)(param_1 + 0x1d8);
  if ((ulonglong)uVar1 == 0) {
    local_198 = 0;
    local_194 = 0;
    local_150 = 0;
    local_1ae = 1;
    local_18c = 0xffffffff;
    local_190 = 0x7fffffff;
    local_19c = 0x41200000;
    local_158 = 0x4024000000000000;
    local_140 = 0x4024000000000000;
    local_160 = 0x4024000000000000;
    local_1af = 1;
    local_1b0 = 1;
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    uVar20 = 0;
    uVar21 = 0;
    local_1a0 = 0;
    local_1a4 = 0;
    local_1a8 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    local_1ac = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    local_148 = 0;
  }
  else {
    if (uVar1 == 1) {
      plVar17 = (longlong *)*local_188;
      local_148 = *plVar17;
      local_190 = (undefined4)plVar17[1];
      local_18c = *(undefined4 *)((longlong)plVar17 + 0xc);
      local_140 = plVar17[2];
      local_158 = plVar17[3];
      local_160 = plVar17[4];
      local_118 = plVar17[7];
      local_128 = (undefined1 *)plVar17[5];
      puStack_120 = (undefined8 *)plVar17[6];
      local_1ae = (undefined1)plVar17[8];
      local_1af = *(undefined1 *)((longlong)plVar17 + 0x41);
      local_1b0 = *(undefined1 *)((longlong)plVar17 + 0x42);
      local_198 = (undefined4)
                  CONCAT71((int7)((ulonglong)local_118 >> 8),
                           *(undefined1 *)((longlong)plVar17 + 0x43));
      local_134 = *(undefined4 *)((longlong)plVar17 + 0x44);
      local_150 = plVar17[9];
      local_168 = plVar17[10];
      local_170 = plVar17[0xb];
      local_178 = plVar17[0xc];
      local_180 = plVar17[0xd];
      uVar20 = (undefined4)plVar17[0xe];
      uVar21 = (undefined4)((ulonglong)plVar17[0xe] >> 0x20);
      uVar5 = (undefined3)((uint)local_134 >> 8);
      local_1a0 = CONCAT31(uVar5,(char)plVar17[0xf]);
      local_1a4 = CONCAT31(uVar5,*(undefined1 *)((longlong)plVar17 + 0x79));
      local_1a8 = CONCAT31(uVar5,*(undefined1 *)((longlong)plVar17 + 0x7a));
      local_1ad = *(undefined1 *)((longlong)plVar17 + 0x7b);
      local_194 = *(undefined4 *)((longlong)plVar17 + 0x7c);
      uVar22 = (undefined4)plVar17[0x10];
      uVar23 = (undefined4)((ulonglong)plVar17[0x10] >> 0x20);
      uVar24 = (undefined4)plVar17[0x11];
      uVar25 = (undefined4)((ulonglong)plVar17[0x11] >> 0x20);
      uVar26 = (undefined4)plVar17[0x12];
      uVar27 = (undefined4)((ulonglong)plVar17[0x12] >> 0x20);
      uVar28 = (undefined4)plVar17[0x13];
      uVar29 = (undefined4)((ulonglong)plVar17[0x13] >> 0x20);
      uVar30 = (undefined4)plVar17[0x14];
      uVar31 = (undefined4)((ulonglong)plVar17[0x14] >> 0x20);
      uVar18 = (undefined4)plVar17[0x15];
      uVar19 = (undefined4)((ulonglong)plVar17[0x15] >> 0x20);
      local_1ac = CONCAT31(uVar5,(char)plVar17[0x19]);
      uVar32 = (undefined4)plVar17[0x16];
      uVar33 = (undefined4)((ulonglong)plVar17[0x16] >> 0x20);
      uVar34 = (undefined4)plVar17[0x17];
      uVar35 = (undefined4)((ulonglong)plVar17[0x17] >> 0x20);
      uVar36 = (undefined4)plVar17[0x18];
      uVar37 = (undefined4)((ulonglong)plVar17[0x18] >> 0x20);
      local_f8 = CONCAT62(CONCAT51(local_f8._3_5_,*(undefined1 *)((longlong)plVar17 + 0xcb)),
                          *(undefined2 *)((longlong)plVar17 + 0xc9));
      local_19c = *(undefined4 *)((longlong)plVar17 + 0xcc);
    }
    else {
      plVar17 = (longlong *)*local_188;
      local_194 = 0;
      local_150 = 0;
      local_1ae = 1;
      local_18c = 0xffffffff;
      local_190 = 0x7fffffff;
      local_19c = 0x41200000;
      local_148 = 0;
      local_158 = 0x4024000000000000;
      local_140 = 0x4024000000000000;
      local_160 = 0x4024000000000000;
      local_1af = 1;
      local_1b0 = 1;
      local_198 = 0;
      local_168 = 0;
      local_170 = 0;
      local_178 = 0;
      local_180 = 0;
      uVar20 = 0;
      uVar21 = 0;
      local_1a0 = 0;
      local_1a4 = 0;
      local_1a8 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      local_1ac = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
      uVar37 = 0;
    }
    bVar7 = true;
    if ((longlong)(int)uStack_100 != 0) {
      uVar14 = 0;
      do {
        if (*(longlong *)((longlong)local_108 + uVar14) == *plVar17) {
          bVar7 = (~uVar14 & 0x7fffffff8) == 0;
          break;
        }
        uVar14 = uVar14 + 8;
      } while ((longlong)(int)uStack_100 * 8 != uVar14);
    }
    iVar12 = 0;
    uVar14 = 0;
    local_130 = param_1;
    do {
      while( true ) {
        iVar2 = (int)uVar14;
        uVar14 = (ulonglong)(iVar2 + 1U);
        if ((int)uVar1 <= (int)(iVar2 + 1U)) break;
        bVar4 = true;
        uVar15 = (longlong)iVar2 + 1;
        do {
          uVar14 = uVar15;
          if ((int)uStack_100 != 0) {
            uVar15 = 0;
            do {
              if (*(longlong *)((longlong)local_108 + uVar15) == plVar17[uVar14 * 0x1a]) {
                if (((~uVar15 & 0x7fffffff8) == 0) != bVar7) goto LAB_1474e0936;
                goto LAB_1474e090a;
              }
              uVar15 = uVar15 + 8;
            } while ((longlong)(int)uStack_100 << 3 != uVar15);
          }
          if (bVar7 == false) goto LAB_1474e094c;
LAB_1474e090a:
          uVar15 = uVar14 + 1;
          bVar4 = (longlong)uVar15 < (longlong)(int)uVar1;
          uVar14 = (ulonglong)uVar1;
        } while (uVar15 != (longlong)(int)uVar1);
LAB_1474e0936:
        if (bVar7 == false) goto LAB_1474e094c;
        bVar7 = false;
        if (!bVar4) goto LAB_1474e098e;
      }
      if (bVar7 != false) break;
      bVar4 = false;
LAB_1474e094c:
      iVar16 = (int)uVar14 - iVar2;
      if (iVar12 != iVar2) {
        memmove(plVar17 + (longlong)iVar12 * 0x1a,plVar17 + (longlong)iVar2 * 0x1a,
                (longlong)iVar16 * 0xd0);
      }
      iVar12 = iVar12 + iVar16;
      bVar7 = true;
    } while (bVar4);
LAB_1474e098e:
    *(int *)(local_130 + 0x1d8) = iVar12;
    param_1 = local_130;
  }
  if ((int)uStack_100 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_100 & 0xffffffff);
  }
  if (*(int *)(param_1 + 0x1dc) < (int)uStack_100) {
    FUN_1474fe456(local_188);
  }
  if ((int)uStack_100 != 0) {
    plVar17 = local_108 + (int)uStack_100;
    iVar12 = 0;
    plVar11 = local_108;
    do {
      plVar6 = local_188;
      lVar3 = *plVar11;
      plVar10 = *(longlong **)(param_1 + 0x1d0);
      iVar2 = *(int *)(param_1 + 0x1d8);
      if ((longlong)iVar2 != 0) {
        lVar8 = (longlong)iVar2 * 0xd0;
        plVar9 = plVar10;
        do {
          if (*plVar9 == lVar3) {
            if (plVar9 != (longlong *)0x0) goto LAB_1474e0be0;
            break;
          }
          plVar9 = plVar9 + 0x1a;
          lVar8 = lVar8 + -0xd0;
        } while (lVar8 != 0);
      }
      *(uint *)(param_1 + 0x1d8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x1dc) < iVar2 + 1U) {
        FUN_1474fe1ce(local_188,iVar2);
        plVar10 = (longlong *)*plVar6;
      }
      lVar13 = (longlong)iVar12 * 0xd0;
      memmove(plVar10 + (longlong)iVar12 * 0x1a + 0x1a,plVar10 + (longlong)iVar12 * 0x1a,
              (ulonglong)(uint)(iVar2 - iVar12) * 0xd0);
      lVar8 = *local_188;
      *(longlong *)(lVar8 + lVar13) = local_148;
      *(undefined4 *)(lVar8 + 8 + lVar13) = local_190;
      *(undefined4 *)(lVar8 + 0xc + lVar13) = local_18c;
      *(longlong *)(lVar8 + 0x10 + lVar13) = local_140;
      *(longlong *)(lVar8 + 0x18 + lVar13) = local_158;
      *(longlong *)(lVar8 + 0x20 + lVar13) = local_160;
      *(longlong *)(lVar8 + 0x38 + lVar13) = local_118;
      plVar10 = (longlong *)(lVar8 + 0x28 + lVar13);
      *plVar10 = (longlong)local_128;
      plVar10[1] = (longlong)puStack_120;
      *(undefined1 *)(lVar8 + 0x40 + lVar13) = local_1ae;
      *(undefined1 *)(lVar8 + 0x41 + lVar13) = local_1af;
      *(undefined1 *)(lVar8 + 0x42 + lVar13) = local_1b0;
      *(char *)(lVar8 + 0x43 + lVar13) = (char)local_198;
      *(undefined4 *)(lVar8 + 0x44 + lVar13) = local_134;
      *(longlong *)(lVar8 + 0x48 + lVar13) = local_150;
      *(longlong *)(lVar8 + 0x50 + lVar13) = local_168;
      *(longlong *)(lVar8 + 0x58 + lVar13) = local_170;
      *(longlong *)(lVar8 + 0x60 + lVar13) = local_178;
      *(longlong *)(lVar8 + 0x68 + lVar13) = local_180;
      *(ulonglong *)(lVar8 + 0x70 + lVar13) = CONCAT44(uVar21,uVar20);
      *(char *)(lVar8 + 0x78 + lVar13) = (char)local_1a0;
      *(char *)(lVar8 + 0x79 + lVar13) = (char)local_1a4;
      *(char *)(lVar8 + 0x7a + lVar13) = (char)local_1a8;
      *(undefined1 *)(lVar8 + 0x7b + lVar13) = local_1ad;
      *(undefined4 *)(lVar8 + 0x7c + lVar13) = local_194;
      *(ulonglong *)(lVar8 + 0x80 + lVar13) = CONCAT44(uVar23,uVar22);
      *(ulonglong *)(lVar8 + 0x88 + lVar13) = CONCAT44(uVar25,uVar24);
      *(ulonglong *)(lVar8 + 0x90 + lVar13) = CONCAT44(uVar27,uVar26);
      *(ulonglong *)(lVar8 + 0x98 + lVar13) = CONCAT44(uVar29,uVar28);
      *(ulonglong *)(lVar8 + 0xa0 + lVar13) = CONCAT44(uVar31,uVar30);
      *(ulonglong *)(lVar8 + 0xa8 + lVar13) = CONCAT44(uVar19,uVar18);
      *(ulonglong *)(lVar8 + 0xb0 + lVar13) = CONCAT44(uVar33,uVar32);
      *(ulonglong *)(lVar8 + 0xb8 + lVar13) = CONCAT44(uVar35,uVar34);
      *(ulonglong *)(lVar8 + 0xc0 + lVar13) = CONCAT44(uVar37,uVar36);
      *(char *)(lVar8 + 200 + lVar13) = (char)local_1ac;
      *(undefined1 *)(lVar8 + 0xcb + lVar13) = local_f8._2_1_;
      *(undefined2 *)(lVar8 + 0xc9 + lVar13) = (undefined2)local_f8;
      *(undefined4 *)(lVar8 + 0xcc + lVar13) = local_19c;
      *(longlong *)(*local_188 + lVar13) = lVar3;
LAB_1474e0be0:
      iVar12 = iVar12 + 1;
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar17);
  }
  if (local_108 != (longlong *)0x0) {
    FUN_1400020a8(local_108);
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474e0cce FUN_1474e0cce body=638 status=ok
// SIG undefined FUN_1474e0cce(void)

void FUN_1474e0cce(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  FUN_14019c9f2(param_1 + 0x1b0);
  if ((*(byte *)(param_1 + 0x2a4) & 0x20) != 0) {
    FUN_14019c9f2(param_1 + 0x1c0,param_2);
  }
  if ((longlong)*(int *)(param_1 + 0x298) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x290);
    lVar9 = (longlong)*(int *)(param_1 + 0x298) * 0x70;
    do {
      FUN_14019c9f2(lVar7,param_2);
      lVar7 = lVar7 + 0x70;
      lVar9 = lVar9 + -0x70;
    } while (lVar9 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x270) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x268);
    lVar9 = (longlong)*(int *)(param_1 + 0x270) * 0x30;
    do {
      FUN_14019c9f2(lVar7,param_2);
      lVar7 = lVar7 + 0x30;
      lVar9 = lVar9 + -0x30;
    } while (lVar9 != 0);
  }
  if (*(char *)(param_1 + 0x2a0) == '\x04') {
    FUN_14019c9f2(param_1 + 0x1a0,param_2);
  }
  iVar6 = *(int *)(param_1 + 0x4f0);
  iVar2 = *(int *)(param_1 + 0x1d8);
  if (0 < (longlong)iVar2) {
    uVar8 = 0;
    do {
      lVar7 = uVar8 * 0xd0 + *(longlong *)(param_1 + 0x1d0);
      FUN_14019c9f2(lVar7,param_2);
      if ((0 < iVar6) && (uVar3 = *(uint *)(lVar7 + 8), (~uVar3 & 0x7fffffff) != 0)) {
        lVar7 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar7 = param_2 + 0x10;
        }
        if ((*(uint *)(lVar7 + (ulonglong)(uVar3 >> 3 & 0x1ffc)) >> (uVar3 & 0x1f) & 1) != 0) {
          if ((longlong)*(int *)(param_1 + 0x4f0) != 0) {
            lVar7 = 0;
            do {
              if (uVar8 == *(uint *)(*(longlong *)(param_1 + 0x4e8) + lVar7)) goto LAB_1474e0e51;
              lVar7 = lVar7 + 4;
            } while ((longlong)*(int *)(param_1 + 0x4f0) * 4 != lVar7);
          }
          lVar7 = *(longlong *)(param_1 + 0x468);
          iVar4 = *(int *)(param_1 + 0x480);
          *(uint *)(param_1 + 0x480) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x484) < iVar4 + 1U) {
            FUN_1474fe4c6((longlong *)(param_1 + 0x478),iVar4);
          }
          *(ulonglong *)(*(longlong *)(param_1 + 0x478) + (longlong)iVar4 * 8) =
               uVar8 * 0x360 + lVar7;
        }
      }
LAB_1474e0e51:
      uVar8 = uVar8 + 1;
    } while (uVar8 != (longlong)iVar2);
    iVar6 = *(int *)(param_1 + 0x4f0);
  }
  if (-1 < iVar6) {
    plVar1 = (longlong *)(param_1 + 0x4e8);
    *(undefined4 *)(param_1 + 0x4f0) = 0;
    if (*(int *)(param_1 + 0x4f4) != iVar6) {
      FUN_14481578e(plVar1,iVar6);
    }
    iVar6 = *(int *)(param_1 + 0x470);
    if (0 < (longlong)iVar6) {
      lVar9 = 0x340;
      lVar7 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0x468);
        FUN_14019c9f2(lVar5 + lVar9,param_2);
        uVar3 = *(uint *)(lVar5 + 8 + lVar9);
        if ((~uVar3 & 0x7fffffff) != 0) {
          lVar5 = *(longlong *)(param_2 + 0x20);
          if (*(longlong *)(param_2 + 0x20) == 0) {
            lVar5 = param_2 + 0x10;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar3 >> 3 & 0x1ffc)) >> (uVar3 & 0x1f) & 1) != 0) {
            iVar2 = *(int *)(param_1 + 0x4f0);
            *(uint *)(param_1 + 0x4f0) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x4f4) < iVar2 + 1U) {
              FUN_1446f48e2(plVar1,iVar2);
            }
            *(int *)(*plVar1 + (longlong)iVar2 * 4) = (int)lVar7;
          }
        }
        lVar7 = lVar7 + 1;
        lVar9 = lVar9 + 0x360;
      } while (iVar6 != lVar7);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar6);
}



// FUNCTION 1474e0f4e FUN_1474e0f4e body=316 status=ok
// SIG undefined FUN_1474e0f4e(void)

void FUN_1474e0f4e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  float fVar2;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar2 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x3c);
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  FUN_1474e108c(param_2,&local_50);
  FUN_140002266(&local_60,L"(Alpha: %.1f%%)",(double)(fVar2 * 100.0));
  iVar1 = local_58 + -1;
  if (local_58 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_50,local_60,iVar1);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_70 = (void *)0x0;
  local_68 = local_48;
  if ((longlong)local_48 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_48,0);
    memcpy(local_70,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e108c FUN_1474e108c body=256 status=ok
// SIG undefined FUN_1474e108c(void)

undefined8 FUN_1474e108c(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caaafd8 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaafd8 = FUN_140002ddd(FUN_146332f1d,uVar2,L"AnimNode_AnimDynamics");
  }
  local_48 = *(undefined8 *)(DAT_14caaafd8 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474e128c FUN_1474e128c body=496 status=ok
// SIG undefined FUN_1474e128c(void)

void FUN_1474e128c(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x474);
  FUN_1474f830d(*(undefined8 *)(param_1 + 0x468));
  *(undefined4 *)(param_1 + 0x470) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x474) != 0)) {
    FUN_1474fe54c(param_1 + 0x468);
  }
  if (*(int *)(param_1 + 0x4a4) < 0) {
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    FUN_1474fe80a(param_1 + 0x498);
  }
  else {
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  if (*(int *)(param_1 + 0x4b4) < 0) {
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    FUN_1474fe87a(param_1 + 0x4a8);
  }
  else {
    *(undefined4 *)(param_1 + 0x4b0) = 0;
  }
  if (*(int *)(param_1 + 0x4c4) < 0) {
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    FUN_1474fe8da(param_1 + 0x4b8);
  }
  else {
    *(undefined4 *)(param_1 + 0x4c0) = 0;
  }
  if (*(int *)(param_1 + 0x4f4) < 0) {
    *(undefined4 *)(param_1 + 0x4f0) = 0;
    FUN_14481578e(param_1 + 0x4e8);
  }
  else {
    *(undefined4 *)(param_1 + 0x4f0) = 0;
  }
  if (*(int *)(param_1 + 0x4d4) < 0) {
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    FUN_1447a8aa0(param_1 + 0x4c8);
  }
  else {
    *(undefined4 *)(param_1 + 0x4d0) = 0;
  }
  if (*(int *)(param_1 + 0x4e4) < 0) {
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    FUN_1474fe5bc(param_1 + 0x4d8);
  }
  else {
    *(undefined4 *)(param_1 + 0x4e0) = 0;
  }
  if (*(int *)(param_1 + 0x484) < 0) {
    *(undefined4 *)(param_1 + 0x480) = 0;
    FUN_1474fe7da(param_1 + 0x478);
  }
  else {
    *(undefined4 *)(param_1 + 0x480) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1d8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1d0);
    lVar4 = 0;
    do {
      puVar1 = (uint *)(lVar3 + 8 + lVar4);
      *puVar1 = *puVar1 | 0x7fffffff;
      lVar4 = lVar4 + 0xd0;
    } while ((longlong)iVar2 * 0xd0 - lVar4 != 0);
  }
  return;
}



// FUNCTION 1474e147c FUN_1474e147c body=41 status=ok
// SIG undefined FUN_1474e147c(void)

void FUN_1474e147c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1474fe5bc();
  return;
}



// FUNCTION 1474e14a6 FUN_1474e14a6 body=5646 status=ok
// SIG undefined FUN_1474e14a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1474e14a6(longlong param_1,undefined1 (*param_2) [16],uint param_3,longlong param_4,
             undefined8 *param_5,double *param_6,double *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  double *pdVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar47;
  double dVar48;
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8 [2];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
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
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  pauVar18 = param_2;
  for (lVar15 = 0xc; auVar30 = _DAT_149934d80, lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined8 *)*pauVar18 = *param_5;
    param_5 = param_5 + 1;
    pauVar18 = (undefined1 (*) [16])(*pauVar18 + 8);
  }
  uVar12 = (param_3 & 0xff) - 1;
  if (3 < uVar12) goto switchD_1474e1567_default;
  iVar13 = (int)&switchD_1474e1567::switchdataD_14a4429fc +
           (&switchD_1474e1567::switchdataD_14a4429fc)[uVar12];
  dVar31 = (double)DAT_149934d80;
  dVar40 = DAT_149934d80._8_8_;
  switch(param_3 & 0xff) {
  case 1:
    local_2a8 = 0.0;
    dStack_2a0 = 0.0;
    local_2b8 = 0.0;
    dStack_2b0 = 0.0;
    auVar43 = *(undefined1 (*) [16])(param_7 + 8);
    dVar32 = auVar43._0_8_;
    dVar48 = auVar43._8_8_;
    auVar57 = *(undefined1 (*) [16])(param_7 + 10);
    dVar36 = auVar57._0_8_;
    auVar29 = param_2[4];
    dVar53 = auVar29._0_8_;
    dVar52 = auVar29._8_8_;
    auVar54 = param_2[5];
    dVar55 = auVar54._0_8_;
    auVar43 = minpd(auVar29,auVar43);
    auVar29 = minpd(auVar54,auVar57);
    auVar37._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
    auVar37._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
    iVar13 = movmskpd(iVar13,auVar37);
    auVar42._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar42._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    uVar12 = movmskpd(0x4a4429fc,auVar42);
    if ((uVar12 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar59 = *(double *)*param_2;
      dVar61 = *(double *)(*param_2 + 8);
      dVar62 = *(double *)param_2[1];
      dVar67 = *(double *)(param_2[1] + 8);
      dVar69 = *param_7;
      dVar63 = param_7[1];
      dVar3 = param_7[2];
      dVar4 = param_7[3];
      dVar31 = param_7[3];
      dVar40 = param_7[3];
      dVar41 = param_7[1];
      dVar46 = param_7[1];
      dVar28 = param_7[2];
      dVar45 = param_7[2];
      local_2d8[0] = dVar61 * dVar28 * -1.0 +
                     dVar62 * dVar41 + dVar67 * *param_7 * 1.0 + dVar59 * dVar31;
      local_2d8[1] = dVar59 * dVar45 * 1.0 +
                     dVar67 * dVar46 + dVar62 * *param_7 * -1.0 + dVar61 * dVar40;
      dVar64 = *(double *)param_2[2] * dVar32;
      dVar66 = *(double *)(param_2[2] + 8) * dVar48;
      dVar27 = *(double *)param_2[3] * dVar36;
      dVar65 = *(double *)(param_2[3] + 8) * auVar57._8_8_;
      dVar47 = dVar66 * dVar69 - dVar63 * dVar64;
      dVar58 = dVar27 * dVar63 - dVar3 * dVar66;
      dVar68 = dVar64 * dVar3 - dVar69 * dVar27;
      dVar51 = dVar65 * dVar4 - dVar4 * dVar65;
      dVar58 = dVar58 + dVar58;
      dVar68 = dVar68 + dVar68;
      dVar47 = dVar47 + dVar47;
      dVar51 = dVar51 + dVar51;
      local_2b8 = (dVar47 * dVar63 - dVar3 * dVar68) + dVar31 * dVar58 + dVar64 + param_7[4];
      dStack_2b0 = (dVar58 * dVar3 - dVar47 * dVar69) + dVar40 * dVar68 + dVar66 + param_7[5];
      local_2a8 = (dVar68 * dVar69 - dVar63 * dVar58) + dVar31 * dVar47 + dVar27 + param_7[6];
      dStack_2a0 = (dVar51 * dVar4 - dVar51 * dVar4) + dVar40 * dVar51 + dVar65 + param_7[7];
      local_2c8._8_8_ =
           dVar62 * dVar45 * -1.0 + ((*param_7 * dVar59 * -1.0 + dVar67 * dVar40) - dVar61 * dVar46)
      ;
      local_2c8._0_8_ =
           dVar67 * dVar28 * 1.0 + ((*param_7 * dVar61 * 1.0 + dVar62 * dVar31) - dVar59 * dVar41);
    }
    else {
      dVar41 = *param_7;
      dVar45 = param_7[1];
      dVar28 = param_7[2];
      dVar27 = dVar45 + dVar45;
      dVar65 = dVar28 + dVar28;
      dVar59 = dVar41 * (dVar41 + dVar41);
      local_188 = (1.0 - (dVar59 + dVar45 * dVar27)) * dVar36;
      dVar46 = param_7[3];
      dVar47 = dVar65 * dVar46;
      dVar51 = (dVar41 + dVar41) * param_7[3];
      dVar46 = dVar27 * dVar46;
      local_1d8 = (dVar31 - (dVar28 * dVar65 + dVar45 * dVar27)) * dVar32;
      dStack_1b0 = (dVar40 - (dVar28 * dVar65 + dVar59)) * dVar48;
      dStack_1d0 = (dVar27 * dVar41 + dVar47) * dVar32;
      local_1a8 = (dVar65 * dVar45 + dVar51) * dVar48;
      local_1b8 = (dVar27 * dVar41 - dVar47) * dVar48;
      local_1c8 = (*param_7 * dVar65 - dVar46) * dVar32;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198._8_8_ = (dVar65 * dVar45 - dVar51) * dVar36;
      local_198._0_8_ = (dVar46 + *param_7 * dVar65) * dVar36;
      uStack_180 = 0;
      local_178 = param_7[4];
      dStack_170 = param_7[5];
      local_168 = param_7[6];
      uStack_160 = 0x3ff0000000000000;
      dVar28 = *(double *)*param_2;
      dVar27 = *(double *)(*param_2 + 8);
      dVar65 = *(double *)param_2[1];
      dVar47 = dVar27 + dVar27;
      dVar51 = dVar65 + dVar65;
      dVar41 = dVar28 * (dVar28 + dVar28);
      local_208 = (1.0 - (dVar41 + dVar27 * dVar47)) * dVar55;
      dVar45 = *(double *)*param_2 * dVar51;
      dVar46 = *(double *)(param_2[1] + 8);
      dVar59 = dVar51 * dVar46;
      dVar61 = (dVar28 + dVar28) * *(double *)(param_2[1] + 8);
      dVar46 = dVar47 * dVar46;
      local_218 = (dVar46 + dVar45) * dVar55;
      local_238 = (dVar47 * dVar28 - dVar59) * dVar52;
      dStack_210 = (dVar51 * dVar27 - dVar61) * dVar55;
      local_258 = (dVar31 - (dVar65 * dVar51 + dVar27 * dVar47)) * dVar53;
      dStack_230 = (dVar40 - (dVar65 * dVar51 + dVar41)) * dVar52;
      dStack_250 = (dVar47 * dVar28 + dVar59) * dVar53;
      local_228 = (dVar51 * dVar27 + dVar61) * dVar52;
      local_248 = (dVar45 - dVar46) * dVar53;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = *(undefined8 *)param_2[2];
      uStack_1f0 = *(undefined8 *)(param_2[2] + 8);
      local_1e8 = *(undefined8 *)param_2[3];
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar21._8_8_ = -(ulonglong)(0.0 <= dVar48 * dVar52);
      auVar21._0_8_ = -(ulonglong)(0.0 <= dVar32 * dVar53);
      auVar43 = blendvpd(_DAT_149936790,auVar30,auVar21);
      uVar20 = -(ulonglong)(0.0 <= dVar36 * dVar55);
      dVar31 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar40 = auVar43._0_8_;
      local_148 = local_148 * dVar40;
      local_150 = local_150 * dVar40;
      local_158 = local_158 * dVar40;
      dVar40 = auVar43._8_8_;
      local_128 = local_128 * dVar40;
      local_130 = local_130 * dVar40;
      local_138 = dVar40 * local_138;
      local_108 = local_108 * dVar31;
      local_110 = local_110 * dVar31;
      local_118 = dVar31 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar31 = local_268 * local_268 + local_278 * local_278;
      dVar40 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar38._0_8_ = dVar31 + dVar40;
      auVar38._8_8_ = dVar31 + dVar40;
      auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
      auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
      auVar43 = sqrtpd(auVar38,auVar38);
      auVar30 = divpd(auVar30,auVar43);
      auVar56._0_8_ = auVar30._0_8_ * local_268;
      auVar56._8_8_ = auVar30._8_8_ * dStack_260;
      local_2d8[0] = (double)((ulonglong)(local_278 * auVar30._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
      local_2d8[1] = (double)((ulonglong)(dStack_270 * auVar30._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
      local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar56,auVar22);
      local_2b8 = local_f8;
      dStack_2b0 = dStack_f0;
      local_2a8 = local_e8;
      dStack_2a0 = 0.0;
    }
    dStack_290 = dVar48 * dVar52;
    local_298 = dVar32 * dVar53;
    dStack_280 = auVar57._8_8_ * auVar54._8_8_;
    local_288 = dVar36 * dVar55;
    FUN_1447d58ca(local_2d8,param_6);
    pdVar10 = local_2d8;
    pauVar18 = param_2;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *(double *)*pauVar18 = *pdVar10;
      pdVar10 = pdVar10 + 1;
      pauVar18 = (undefined1 (*) [16])(*pauVar18 + 8);
    }
    goto switchD_1474e1567_default;
  case 2:
    auVar43 = *(undefined1 (*) [16])(param_6 + 8);
    auVar57 = *(undefined1 (*) [16])(param_6 + 10);
    auVar49._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar43._8_8_));
    auVar49._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar43._0_8_));
    uVar12 = movmskpd((int)param_1,auVar49);
    auVar50._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar57._8_8_));
    auVar50._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar57._0_8_));
    iVar13 = movmskpd(iVar13,auVar50);
    uVar14 = iVar13 << 2 | uVar12;
    auVar24 = _DAT_14c8464c0;
    local_2f8 = _DAT_14c8464d0;
    dVar32 = DAT_14c846480;
    dVar36 = DAT_14c846488;
    dVar53 = DAT_14c846490;
    dVar55 = DAT_14c846498;
    dVar48 = DAT_14c8464a0;
    dVar52 = DAT_14c8464a8;
    dVar46 = DAT_14c8464b0;
    dVar41 = DAT_14c8464b8;
    if (uVar14 != 0) {
      auVar54 = divpd(_DAT_149934d80,auVar43);
      auVar29 = divpd(ZEXT816(0x3ff0000000000000),auVar57);
      auVar24._0_8_ =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar43._0_8_)) & auVar54._0_8_);
      auVar24._8_8_ =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar43._8_8_)) & auVar54._8_8_);
      dVar28 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar57._0_8_)) & auVar29._0_8_);
      local_2f8._8_8_ = 0;
      local_2f8._0_8_ = dVar28;
      dVar53 = param_6[2] * -1.0;
      dVar55 = param_6[3] * 1.0;
      dVar32 = -*param_6;
      dVar36 = -param_6[1];
      dVar48 = param_6[4] * auVar24._0_8_;
      dVar52 = param_6[5] * auVar24._8_8_;
      dVar28 = param_6[6] * dVar28;
      dVar41 = dVar52 * dVar32 - dVar36 * dVar48;
      dVar45 = dVar28 * dVar36 - dVar53 * dVar52;
      dVar46 = dVar48 * dVar53 - dVar32 * dVar28;
      dVar45 = dVar45 + dVar45;
      dVar46 = dVar46 + dVar46;
      dVar41 = dVar41 + dVar41;
      dVar48 = 0.0 - ((dVar41 * dVar36 - dVar46 * dVar53) + dVar55 * dVar45 + dVar48);
      dVar52 = 0.0 - (dVar41 * *param_6 + dVar53 * dVar45 + dVar55 * dVar46 + dVar52);
      dVar46 = 0.0 - (dVar55 * dVar41 + dVar28 + (dVar46 * dVar32 - dVar45 * dVar36));
      dVar41 = 0.0;
    }
    auVar43 = param_2[4];
    dVar45 = auVar43._0_8_;
    dVar27 = auVar43._8_8_;
    auVar57 = param_2[5];
    dVar28 = auVar57._0_8_;
    auVar43 = minpd(auVar43,auVar24);
    auVar29 = minpd(auVar57,local_2f8);
    auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
    auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
    iVar13 = movmskpd(uVar12,auVar44);
    auVar43._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar43._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    uVar12 = movmskpd(uVar14,auVar43);
    dVar65 = auVar24._0_8_;
    dVar47 = auVar24._8_8_;
    if ((uVar12 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar40 = *(double *)*param_2;
      dVar51 = *(double *)(*param_2 + 8);
      dVar59 = *(double *)param_2[1];
      dVar61 = *(double *)(param_2[1] + 8);
      dVar31 = dVar40 * dVar53 * 1.0 + dVar61 * dVar36 + dVar32 * dVar59 * -1.0 + dVar55 * dVar51;
      auVar2._8_4_ = SUB84(dVar31,0);
      auVar2._0_8_ = dVar51 * dVar53 * -1.0 +
                     dVar59 * dVar36 + dVar32 * dVar61 * 1.0 + dVar55 * dVar40;
      auVar2._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      *param_2 = auVar2;
      *(double *)param_2[1] =
           dVar61 * dVar53 * 1.0 + ((dVar32 * dVar51 * 1.0 + dVar55 * dVar59) - dVar36 * dVar40);
      *(double *)(param_2[1] + 8) =
           dVar59 * dVar53 * -1.0 + ((dVar32 * dVar40 * -1.0 + dVar55 * dVar61) - dVar36 * dVar51);
      dVar31 = *(double *)param_2[2] * dVar65;
      dVar40 = *(double *)(param_2[2] + 8) * dVar47;
      dVar67 = *(double *)param_2[3] * (double)local_2f8._0_8_;
      dVar69 = *(double *)(param_2[3] + 8) * (double)local_2f8._8_8_;
      dVar51 = dVar40 * dVar32 - dVar36 * dVar31;
      dVar59 = dVar67 * dVar36 - dVar53 * dVar40;
      dVar61 = dVar31 * dVar53 - dVar32 * dVar67;
      dVar62 = dVar69 * dVar55 - dVar55 * dVar69;
      dVar59 = dVar59 + dVar59;
      dVar61 = dVar61 + dVar61;
      dVar51 = dVar51 + dVar51;
      dVar62 = dVar62 + dVar62;
      *(double *)param_2[2] =
           dVar48 + (dVar51 * dVar36 - dVar53 * dVar61) + dVar55 * dVar59 + dVar31;
      *(double *)(param_2[2] + 8) =
           dVar52 + (dVar59 * dVar53 - dVar51 * dVar32) + dVar55 * dVar61 + dVar40;
      *(double *)param_2[3] =
           dVar46 + (dVar61 * dVar32 - dVar36 * dVar59) + dVar55 * dVar51 + dVar67;
      *(double *)(param_2[3] + 8) =
           dVar41 + (dVar62 * dVar55 - dVar62 * dVar55) + dVar55 * dVar62 + dVar69;
      *(double *)param_2[4] = dVar45 * dVar65;
      *(double *)(param_2[4] + 8) = dVar27 * dVar47;
      *(double *)param_2[5] = dVar28 * (double)local_2f8._0_8_;
      *(double *)(param_2[5] + 8) = auVar57._8_8_ * (double)local_2f8._8_8_;
    }
    else {
      dVar41 = dVar36 + dVar36;
      dVar59 = dVar53 + dVar53;
      dVar51 = dVar32 * (dVar32 + dVar32);
      local_1d8 = (dVar31 - (dVar53 * dVar59 + dVar36 * dVar41)) * dVar65;
      dStack_1b0 = (dVar40 - (dVar53 * dVar59 + dVar51)) * dVar47;
      dVar61 = (dVar32 + dVar32) * dVar55;
      local_1b8 = (dVar41 * dVar32 - dVar59 * dVar55) * dVar47;
      local_188 = (1.0 - (dVar51 + dVar36 * dVar41)) * (double)local_2f8._0_8_;
      dVar53 = (double)local_2f8._0_8_ * dVar28;
      dVar51 = (double)local_2f8._8_8_ * auVar57._8_8_;
      dStack_1d0 = (dVar41 * dVar32 + dVar59 * dVar55) * dVar65;
      local_1a8 = (dVar59 * dVar36 + dVar61) * dVar47;
      local_1c8 = (dVar32 * dVar59 - dVar41 * dVar55) * dVar65;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198._8_8_ = (dVar59 * dVar36 - dVar61) * (double)local_2f8._0_8_;
      local_198._0_8_ = (dVar32 * dVar59 + dVar41 * dVar55) * (double)local_2f8._0_8_;
      uStack_180 = 0;
      uStack_160 = 0x3ff0000000000000;
      dVar36 = *(double *)*param_2;
      dVar55 = *(double *)(*param_2 + 8);
      dVar41 = *(double *)param_2[1];
      dVar59 = dVar55 + dVar55;
      dVar61 = dVar41 + dVar41;
      dVar69 = dVar36 * (dVar36 + dVar36);
      local_208 = (1.0 - (dVar69 + dVar55 * dVar59)) * dVar28;
      dVar63 = *(double *)*param_2 * dVar61;
      dVar32 = *(double *)(param_2[1] + 8);
      dVar62 = dVar61 * dVar32;
      dVar67 = (dVar36 + dVar36) * *(double *)(param_2[1] + 8);
      dVar32 = dVar59 * dVar32;
      local_218 = (dVar32 + dVar63) * dVar28;
      local_238 = (dVar59 * dVar36 - dVar62) * dVar27;
      dStack_210 = (dVar61 * dVar55 - dVar67) * dVar28;
      local_258 = (dVar31 - (dVar41 * dVar61 + dVar55 * dVar59)) * dVar45;
      dStack_230 = (dVar40 - (dVar41 * dVar61 + dVar69)) * dVar27;
      dStack_250 = (dVar59 * dVar36 + dVar62) * dVar45;
      local_228 = (dVar61 * dVar55 + dVar67) * dVar27;
      local_248 = (dVar63 - dVar32) * dVar45;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = *(undefined8 *)param_2[2];
      uStack_1f0 = *(undefined8 *)(param_2[2] + 8);
      local_1e8 = *(undefined8 *)param_2[3];
      uStack_1e0 = 0x3ff0000000000000;
      local_178 = dVar48;
      dStack_170 = dVar52;
      local_168 = dVar46;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar25._8_8_ = -(ulonglong)(0.0 <= dVar47 * dVar27);
      auVar25._0_8_ = -(ulonglong)(0.0 <= dVar65 * dVar45);
      auVar43 = blendvpd(_DAT_149936790,auVar30,auVar25);
      uVar20 = -(ulonglong)(0.0 <= dVar53);
      dVar31 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar40 = auVar43._0_8_;
      local_148 = local_148 * dVar40;
      local_150 = local_150 * dVar40;
      local_158 = local_158 * dVar40;
      dVar40 = auVar43._8_8_;
      local_128 = local_128 * dVar40;
      local_130 = local_130 * dVar40;
      local_138 = dVar40 * local_138;
      local_108 = local_108 * dVar31;
      local_110 = local_110 * dVar31;
      local_118 = dVar31 * local_118;
      FUN_14481fd10(local_2d8,&local_158);
      auVar35._0_8_ = local_2d8[0] * local_2d8[0];
      auVar35._8_8_ = local_2d8[1] * local_2d8[1];
      dVar31 = (double)local_2c8._0_8_ * (double)local_2c8._0_8_ + auVar35._0_8_;
      dVar40 = (double)local_2c8._8_8_ * (double)local_2c8._8_8_ + auVar35._8_8_;
      auVar39._0_8_ = dVar31 + dVar40;
      auVar39._8_8_ = dVar31 + dVar40;
      auVar43 = sqrtpd(auVar35,auVar39);
      auVar43 = divpd(auVar30,auVar43);
      auVar60._0_8_ = auVar43._0_8_ * (double)local_2c8._0_8_;
      auVar60._8_8_ = auVar43._8_8_ * (double)local_2c8._8_8_;
      auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
      auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
      auVar30 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar60,auVar26);
      *(double *)param_2[4] = dVar65 * dVar45;
      *(double *)(param_2[4] + 8) = dVar47 * dVar27;
      auVar1._8_4_ = SUB84(dVar51,0);
      auVar1._0_8_ = dVar53;
      auVar1._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      param_2[5] = auVar1;
      *(ulonglong *)*param_2 =
           (ulonglong)(local_2d8[0] * auVar43._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
      *(ulonglong *)(*param_2 + 8) =
           (ulonglong)(local_2d8[1] * auVar43._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
      param_2[1] = auVar30;
      *(double *)param_2[2] = local_f8;
      *(double *)(param_2[2] + 8) = dStack_f0;
      *(double *)param_2[3] = local_e8;
      *(undefined8 *)(param_2[3] + 8) = 0;
    }
    goto switchD_1474e1567_default;
  case 3:
    plVar19 = (longlong *)(param_4 + 0x20);
    if (**(char **)(param_4 + 0x38) == '\0') {
      plVar16 = plVar19;
      FUN_1447d5d8e(plVar19,0);
      iVar13 = (int)plVar16;
    }
    pdVar10 = (double *)*plVar19;
    dVar48 = *pdVar10;
    dVar52 = pdVar10[1];
    dVar53 = pdVar10[2];
    dVar55 = pdVar10[3];
    dVar32 = pdVar10[4];
    dVar36 = pdVar10[5];
    dVar31 = pdVar10[6];
    dVar40 = pdVar10[7];
    auVar30 = *(undefined1 (*) [16])(pdVar10 + 8);
    auVar43 = *(undefined1 (*) [16])(pdVar10 + 10);
    break;
  case 4:
    uVar12 = *(uint *)(param_1 + 0x1a8);
    if ((~uVar12 & 0x7fffffff) == 0) goto switchD_1474e1567_default;
    lVar15 = *(longlong *)(param_4 + 0x30);
    lVar17 = lVar15 + 0x10;
    if (*(longlong *)(lVar15 + 0x20) != 0) {
      lVar17 = *(longlong *)(lVar15 + 0x20);
    }
    if ((*(uint *)(lVar17 + (ulonglong)(uVar12 >> 3 & 0x1ffc)) >> (uVar12 & 0x1f) & 1) == 0)
    goto switchD_1474e1567_default;
    if ((int)uVar12 < 0) {
      uVar12 = (int)(uVar12 * 2) >> 1;
      iVar13 = -1;
      if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(lVar15 + 0x88))) {
        piVar11 = (int *)((ulonglong)uVar12 * 4 + *(longlong *)(lVar15 + 0x80));
        goto LAB_1474e1eff;
      }
    }
    else {
      piVar11 = (int *)(param_1 + 0x1ac);
LAB_1474e1eff:
      iVar13 = *piVar11;
    }
    lVar15 = (longlong)iVar13;
    if (*(char *)(*(longlong *)(param_4 + 0x38) + lVar15) == '\0') {
      FUN_1447d5d8e((longlong *)(param_4 + 0x20));
    }
    pdVar10 = *(double **)(param_4 + 0x20);
    iVar13 = iVar13 * 0x60;
    dVar48 = pdVar10[lVar15 * 0xc];
    dVar52 = (pdVar10 + lVar15 * 0xc)[1];
    dVar53 = (pdVar10 + 2)[lVar15 * 0xc];
    dVar55 = (pdVar10 + 2 + lVar15 * 0xc)[1];
    dVar32 = (pdVar10 + 4)[lVar15 * 0xc];
    dVar36 = (pdVar10 + 4 + lVar15 * 0xc)[1];
    dVar31 = (pdVar10 + 6)[lVar15 * 0xc];
    dVar40 = (pdVar10 + 6 + lVar15 * 0xc)[1];
    auVar30 = *(undefined1 (*) [16])(pdVar10 + 8 + lVar15 * 0xc);
    auVar43 = *(undefined1 (*) [16])(pdVar10 + 10 + lVar15 * 0xc);
  }
  auVar57 = _DAT_149934d80;
  local_2f8 = param_2[4];
  local_2e8 = param_2[5];
  auVar29 = minpd(local_2f8,auVar30);
  auVar33 = minpd(local_2e8,auVar43);
  auVar54._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
  auVar54._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
  iVar9 = movmskpd((int)pdVar10,auVar54);
  auVar29._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
  auVar29._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
  uVar12 = movmskpd(iVar13,auVar29);
  dVar41 = auVar30._8_8_;
  dVar46 = auVar30._0_8_;
  dVar45 = auVar43._0_8_;
  uVar7 = local_2e8._0_8_;
  uVar8 = local_2e8._8_8_;
  uVar5 = local_2f8._0_8_;
  uVar6 = local_2f8._8_8_;
  if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar28 = *(double *)*param_2;
    dVar27 = *(double *)(*param_2 + 8);
    dVar65 = *(double *)param_2[1];
    dVar47 = *(double *)(param_2[1] + 8);
    dVar61 = dVar27 * dVar53 * -1.0 + dVar65 * dVar52 + dVar48 * dVar47 * 1.0 + dVar55 * dVar28;
    dVar62 = dVar28 * dVar53 * 1.0 + dVar47 * dVar52 + dVar48 * dVar65 * -1.0 + dVar55 * dVar27;
    auVar30._0_8_ =
         dVar47 * dVar53 * 1.0 + ((dVar48 * dVar27 * 1.0 + dVar55 * dVar65) - dVar52 * dVar28);
    auVar30._8_8_ =
         dVar65 * dVar53 * -1.0 + ((dVar48 * dVar28 * -1.0 + dVar55 * dVar47) - dVar52 * dVar27);
    dVar28 = *(double *)param_2[2] * dVar46;
    dVar27 = *(double *)(param_2[2] + 8) * dVar41;
    dVar67 = *(double *)param_2[3] * dVar45;
    dVar69 = *(double *)(param_2[3] + 8) * auVar43._8_8_;
    dVar65 = dVar27 * dVar48 - dVar52 * dVar28;
    dVar59 = dVar67 * dVar52 - dVar53 * dVar27;
    dVar51 = dVar28 * dVar53 - dVar48 * dVar67;
    dVar47 = dVar69 * dVar55 - dVar55 * dVar69;
    dVar59 = dVar59 + dVar59;
    dVar51 = dVar51 + dVar51;
    dVar65 = dVar65 + dVar65;
    dVar47 = dVar47 + dVar47;
    local_f8 = dVar32 + (dVar65 * dVar52 - dVar53 * dVar51) + dVar55 * dVar59 + dVar28;
    dStack_f0 = dVar36 + (dVar59 * dVar53 - dVar65 * dVar48) + dVar55 * dVar51 + dVar27;
    local_e8 = dVar31 + (dVar51 * dVar48 - dVar52 * dVar59) + dVar55 * dVar65 + dVar67;
    dVar40 = dVar40 + (dVar47 * dVar55 - dVar47 * dVar55) + dVar55 * dVar47 + dVar69;
  }
  else {
    dVar65 = dVar52 + dVar52;
    dVar28 = dVar53 + dVar53;
    dVar27 = dVar48 * (dVar48 + dVar48);
    local_1d8 = ((double)DAT_149934d80 - (dVar53 * dVar28 + dVar52 * dVar65)) * dVar46;
    dStack_1b0 = (DAT_149934d80._8_8_ - (dVar53 * dVar28 + dVar27)) * dVar41;
    dVar53 = (dVar48 + dVar48) * dVar55;
    local_1b8 = (dVar65 * dVar48 - dVar28 * dVar55) * dVar41;
    dVar40 = (dVar28 * dVar52 - dVar53) * dVar45;
    local_188 = (1.0 - (dVar27 + dVar52 * dVar65)) * dVar45;
    dVar59 = dVar45 * (double)local_2e8._0_8_;
    dStack_1d0 = (dVar65 * dVar48 + dVar28 * dVar55) * dVar46;
    local_1a8 = (dVar28 * dVar52 + dVar53) * dVar41;
    local_1c8 = (dVar48 * dVar28 - dVar65 * dVar55) * dVar46;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198._8_4_ = SUB84(dVar40,0);
    local_198._0_8_ = (dVar65 * dVar55 + dVar48 * dVar28) * dVar45;
    local_198._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    uStack_180 = 0;
    uStack_160 = 0x3ff0000000000000;
    dVar55 = *(double *)*param_2;
    dVar48 = *(double *)(*param_2 + 8);
    dVar52 = *(double *)param_2[1];
    dVar27 = dVar48 + dVar48;
    dVar65 = dVar52 + dVar52;
    dVar28 = dVar55 * (dVar55 + dVar55);
    local_208 = (1.0 - (dVar28 + dVar48 * dVar27)) * (double)local_2e8._0_8_;
    dVar53 = *(double *)*param_2 * dVar65;
    dVar40 = *(double *)(param_2[1] + 8);
    dVar47 = dVar65 * dVar40;
    dVar51 = (dVar55 + dVar55) * *(double *)(param_2[1] + 8);
    dVar40 = dVar27 * dVar40;
    local_218 = (dVar40 + dVar53) * (double)local_2e8._0_8_;
    local_238 = (dVar27 * dVar55 - dVar47) * (double)local_2f8._8_8_;
    dStack_210 = (dVar65 * dVar48 - dVar51) * (double)local_2e8._0_8_;
    dVar61 = dVar46 * (double)local_2f8._0_8_;
    dVar62 = dVar41 * (double)local_2f8._8_8_;
    local_258 = ((double)DAT_149934d80 - (dVar52 * dVar65 + dVar48 * dVar27)) *
                (double)local_2f8._0_8_;
    dStack_230 = (DAT_149934d80._8_8_ - (dVar52 * dVar65 + dVar28)) * (double)local_2f8._8_8_;
    dStack_250 = (dVar27 * dVar55 + dVar47) * (double)local_2f8._0_8_;
    local_228 = (dVar65 * dVar48 + dVar51) * (double)local_2f8._8_8_;
    local_248 = (dVar53 - dVar40) * (double)local_2f8._0_8_;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = *(undefined8 *)param_2[2];
    uStack_1f0 = *(undefined8 *)(param_2[2] + 8);
    local_1e8 = *(undefined8 *)param_2[3];
    uStack_1e0 = 0x3ff0000000000000;
    local_178 = dVar32;
    dStack_170 = dVar36;
    local_168 = dVar31;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar33._8_8_ = -(ulonglong)(0.0 <= dVar62);
    auVar33._0_8_ = -(ulonglong)(0.0 <= dVar61);
    auVar30 = blendvpd(_DAT_149936790,auVar57,auVar33);
    uVar20 = -(ulonglong)(0.0 <= dVar59);
    dVar31 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
    dVar40 = auVar30._0_8_;
    local_148 = local_148 * dVar40;
    local_150 = local_150 * dVar40;
    local_158 = local_158 * dVar40;
    dVar40 = auVar30._8_8_;
    local_128 = local_128 * dVar40;
    local_130 = local_130 * dVar40;
    local_138 = dVar40 * local_138;
    local_108 = local_108 * dVar31;
    local_110 = local_110 * dVar31;
    local_118 = dVar31 * local_118;
    FUN_14481fd10(local_2d8,&local_158);
    dVar31 = (double)local_2c8._0_8_ * (double)local_2c8._0_8_ + local_2d8[0] * local_2d8[0];
    dVar40 = (double)local_2c8._8_8_ * (double)local_2c8._8_8_ + local_2d8[1] * local_2d8[1];
    auVar34._0_8_ = dVar31 + dVar40;
    auVar34._8_8_ = dVar31 + dVar40;
    auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
    auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
    auVar30 = sqrtpd(auVar34,auVar34);
    auVar30 = divpd(auVar57,auVar30);
    auVar57._0_8_ = auVar30._0_8_ * (double)local_2c8._0_8_;
    auVar57._8_8_ = auVar30._8_8_ * (double)local_2c8._8_8_;
    dVar61 = (double)((ulonglong)(local_2d8[0] * auVar30._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
    dVar62 = (double)((ulonglong)(local_2d8[1] * auVar30._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
    auVar30 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar23);
    dVar40 = 0.0;
  }
  *(double *)*param_2 = dVar61;
  *(double *)(*param_2 + 8) = dVar62;
  param_2[1] = auVar30;
  *(double *)param_2[2] = local_f8;
  *(double *)(param_2[2] + 8) = dStack_f0;
  *(double *)param_2[3] = local_e8;
  *(double *)(param_2[3] + 8) = dVar40;
  *(double *)param_2[4] = dVar46 * (double)uVar5;
  *(double *)(param_2[4] + 8) = dVar41 * (double)uVar6;
  *(double *)param_2[5] = dVar45 * (double)uVar7;
  *(double *)(param_2[5] + 8) = auVar43._8_8_ * (double)uVar8;
switchD_1474e1567_default:
  if ((local_d0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


