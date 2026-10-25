// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1486d05dc FUN_1486d05dc body=90 status=ok
// SIG undefined FUN_1486d05dc(void)

undefined1 FUN_1486d05dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14132837e(param_2,param_3);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    FUN_144983130(param_2 + 0x20,param_3 + 0x20);
    FUN_141471d82(param_2 + 0x58,param_3 + 0x58);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 1486d065e FUN_1486d065e body=59 status=ok
// SIG undefined FUN_1486d065e(void)

undefined8 FUN_1486d065e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d06a4 FUN_1486d06a4 body=33 status=ok
// SIG undefined FUN_1486d06a4(void)

void FUN_1486d06a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_144a2da94(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1486d0716 FUN_1486d0716 body=67 status=ok
// SIG undefined FUN_1486d0716(void)

void FUN_1486d0716(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b4dc0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0x99) = 0;
  return;
}



// FUNCTION 1486d0782 FUN_1486d0782 body=208 status=ok
// SIG undefined FUN_1486d0782(void)

undefined8 FUN_1486d0782(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      lVar1 = param_3 + lVar11;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar11;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x40);
      lVar2 = param_2 + 0x48 + lVar11;
      lVar1 = param_3 + lVar11;
      FUN_144983130(lVar2,lVar1 + 0x48);
      FUN_1486d0944(param_2 + lVar11 + 0x80,param_3 + lVar11 + 0x80);
      uVar10 = *(undefined8 *)(lVar1 + 0x98);
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar1 + 0x90);
      *(undefined8 *)(lVar2 + 0x50) = uVar10;
      *(undefined1 *)(lVar2 + 0x58) = *(undefined1 *)(lVar1 + 0xa0);
      lVar11 = lVar11 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486d087a FUN_1486d087a body=59 status=ok
// SIG undefined FUN_1486d087a(void)

undefined8 FUN_1486d087a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d08c6 FUN_1486d08c6 body=40 status=ok
// SIG undefined FUN_1486d08c6(void)

void FUN_1486d08c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1458cf738(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1486d0944 FUN_1486d0944 body=93 status=ok
// SIG undefined FUN_1486d0944(void)

undefined8 * FUN_1486d0944(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1412fb0ed(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486d09a2(param_1,iVar1);
      FUN_1486d0a11(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486d09a2 FUN_1486d09a2 body=111 status=ok
// SIG undefined FUN_1486d09a2(void)

void FUN_1486d09a2(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486d0a11 FUN_1486d0a11 body=109 status=ok
// SIG undefined FUN_1486d0a11(void)

void FUN_1486d0a11(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      FUN_140862250(param_1 + lVar1,param_2 + lVar1);
      *(undefined4 *)(param_1 + lVar1 + 0x18) = *(undefined4 *)(param_2 + lVar1 + 0x18);
      FUN_14034cca6();
      FUN_14107d9f8(param_1 + lVar1 + 0x58,param_2 + lVar1 + 0x58);
      lVar1 = lVar1 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486d0b40 FUN_1486d0b40 body=81 status=ok
// SIG undefined FUN_1486d0b40(void)

undefined8 FUN_1486d0b40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    FUN_14054c6c4(param_2 + 0x78,param_3 + 0x78);
    param_2 = param_2 + 0x88;
    param_3 = param_3 + 0x88;
  }
  return 1;
}



// FUNCTION 1486d0bba FUN_1486d0bba body=59 status=ok
// SIG undefined FUN_1486d0bba(void)

undefined8 FUN_1486d0bba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d0c54 FUN_1486d0c54 body=55 status=ok
// SIG undefined FUN_1486d0c54(void)

void FUN_1486d0c54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60c78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60c78 = FUN_140002ddd(FUN_1464ef24a,uVar1,L"GbxMomentNodeState_PlayDialogLines");
  }
  return;
}



// FUNCTION 1486d0cd4 FUN_1486d0cd4 body=55 status=ok
// SIG undefined FUN_1486d0cd4(void)

void FUN_1486d0cd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60e18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60e18 = FUN_14171c317(FUN_1464f0354,uVar1,L"EGbxMomentScreenFadeDirection");
  }
  return;
}



// FUNCTION 1486d0d7c FUN_1486d0d7c body=69 status=ok
// SIG undefined FUN_1486d0d7c(void)

void FUN_1486d0d7c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1ba4e0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 1486d0dc2 FUN_1486d0dc2 body=53 status=ok
// SIG undefined FUN_1486d0dc2(void)

void FUN_1486d0dc2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1ba4e0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 1486d0e3c FUN_1486d0e3c body=63 status=ok
// SIG undefined FUN_1486d0e3c(void)

undefined1 FUN_1486d0e3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d101e(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1486d0ea4 FUN_1486d0ea4 body=59 status=ok
// SIG undefined FUN_1486d0ea4(void)

undefined8 FUN_1486d0ea4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d0ef0 FUN_1486d0ef0 body=40 status=ok
// SIG undefined FUN_1486d0ef0(void)

void FUN_1486d0ef0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1486d0fc8(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1486d0f66 FUN_1486d0f66 body=38 status=ok
// SIG undefined FUN_1486d0f66(void)

undefined8 FUN_1486d0f66(undefined8 param_1,int param_2)

{
  FUN_1486d0fc8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d0f8c FUN_1486d0f8c body=55 status=ok
// SIG undefined FUN_1486d0f8c(void)

void FUN_1486d0f8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60c90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60c90 = FUN_140002ddd(FUN_1464efcfd,uVar1,L"GbxMomentNodeSettings_PlayMoment");
  }
  return;
}



// FUNCTION 1486d0fc8 FUN_1486d0fc8 body=85 status=ok
// SIG undefined FUN_1486d0fc8(void)

void FUN_1486d0fc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1ba4e0;
  FUN_1403d8100(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486d101e FUN_1486d101e body=140 status=ok
// SIG undefined FUN_1486d101e(void)

longlong FUN_1486d101e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  lVar8 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x80);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar8;
  FUN_140b57998(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



// FUNCTION 1486d10ac FUN_1486d10ac body=97 status=ok
// SIG undefined FUN_1486d10ac(void)

void FUN_1486d10ac(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x1e0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *param_2 = &PTR_FUN_14b1ba740;
  FUN_14597dc8e(param_2 + 0xe);
  return;
}



// FUNCTION 1486d11a2 FUN_1486d11a2 body=59 status=ok
// SIG undefined FUN_1486d11a2(void)

undefined8 FUN_1486d11a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d11ee FUN_1486d11ee body=38 status=ok
// SIG undefined FUN_1486d11ee(void)

void FUN_1486d11ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x218) == '\x01') {
    FUN_143c5d0c6(param_2);
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  return;
}



// FUNCTION 1486d1262 FUN_1486d1262 body=38 status=ok
// SIG undefined FUN_1486d1262(void)

undefined8 FUN_1486d1262(undefined8 param_1,int param_2)

{
  FUN_143c5d0c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d1288 FUN_1486d1288 body=55 status=ok
// SIG undefined FUN_1486d1288(void)

void FUN_1486d1288(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60ca8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60ca8 = FUN_140002ddd(FUN_1464efd93,uVar1,L"GbxMomentNodeState_PlayMoment");
  }
  return;
}



// FUNCTION 1486d12c6 FUN_1486d12c6 body=38 status=ok
// SIG undefined FUN_1486d12c6(void)

undefined8 FUN_1486d12c6(undefined8 param_1,int param_2)

{
  FUN_14574e722();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d1322 FUN_1486d1322 body=63 status=ok
// SIG undefined FUN_1486d1322(void)

undefined1 FUN_1486d1322(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cf61c(param_2,param_3);
    param_3 = param_3 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return 1;
}



// FUNCTION 1486d138a FUN_1486d138a body=59 status=ok
// SIG undefined FUN_1486d138a(void)

undefined8 FUN_1486d138a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d13d6 FUN_1486d13d6 body=38 status=ok
// SIG undefined FUN_1486d13d6(void)

void FUN_1486d13d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_14129db98(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 1486d1478 FUN_1486d1478 body=63 status=ok
// SIG undefined FUN_1486d1478(void)

undefined1 FUN_1486d1478(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cf910(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 1486d14e0 FUN_1486d14e0 body=59 status=ok
// SIG undefined FUN_1486d14e0(void)

undefined8 FUN_1486d14e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d152c FUN_1486d152c body=38 status=ok
// SIG undefined FUN_1486d152c(void)

void FUN_1486d152c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_14129efe4(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1486d15a2 FUN_1486d15a2 body=37 status=ok
// SIG undefined FUN_1486d15a2(void)

void FUN_1486d15a2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1e0);
  FUN_1486d173e(param_2);
  return;
}



// FUNCTION 1486d1614 FUN_1486d1614 body=63 status=ok
// SIG undefined FUN_1486d1614(void)

undefined1 FUN_1486d1614(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d18f2(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 1486d167c FUN_1486d167c body=59 status=ok
// SIG undefined FUN_1486d167c(void)

undefined8 FUN_1486d167c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d16c8 FUN_1486d16c8 body=40 status=ok
// SIG undefined FUN_1486d16c8(void)

void FUN_1486d16c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_1486d188a(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 1486d173e FUN_1486d173e body=233 status=ok
// SIG undefined FUN_1486d173e(void)

undefined8 * FUN_1486d173e(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1bad60;
  FUN_14044066a(param_1 + 0x10,0x11,7);
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  FUN_14044066a(param_1 + 0x22,0x11,4);
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3ff00000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x3ff0000000000000;
  param_1[0x33] = 0x3ff0000000000000;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0;
  param_1[0x36] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  return param_1;
}



// FUNCTION 1486d1828 FUN_1486d1828 body=38 status=ok
// SIG undefined FUN_1486d1828(void)

undefined8 FUN_1486d1828(undefined8 param_1,int param_2)

{
  FUN_1486d188a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d184e FUN_1486d184e body=55 status=ok
// SIG undefined FUN_1486d184e(void)

void FUN_1486d184e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60d28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60d28 = FUN_140002ddd(FUN_1464eff47,uVar1,L"GbxMomentNodeSettings_PlaySound");
  }
  return;
}



// FUNCTION 1486d188a FUN_1486d188a body=104 status=ok
// SIG undefined FUN_1486d188a(void)

void FUN_1486d188a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1bad60;
  FUN_144a2da94(param_1 + 0x22);
  if ((param_1[0x1f] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1f] + 0x50));
  }
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486d18f2 FUN_1486d18f2 body=239 status=ok
// SIG undefined FUN_1486d18f2(void)

longlong FUN_1486d18f2(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144a7bb84(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  FUN_144a7bb84(param_1 + 0xe0,param_2 + 0xe0);
  FUN_144a82394(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  FUN_144983130(param_1 + 0x110,param_2 + 0x110);
  memcpy((void *)(param_1 + 0x148),(void *)(param_2 + 0x148),0x89);
  return param_1;
}



// FUNCTION 1486d1ab2 FUN_1486d1ab2 body=63 status=ok
// SIG undefined FUN_1486d1ab2(void)

undefined1 FUN_1486d1ab2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d1c38(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1486d1b1a FUN_1486d1b1a body=59 status=ok
// SIG undefined FUN_1486d1b1a(void)

undefined8 FUN_1486d1b1a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d1b66 FUN_1486d1b66 body=38 status=ok
// SIG undefined FUN_1486d1b66(void)

void FUN_1486d1b66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_143c5d274(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1486d1bda FUN_1486d1bda body=38 status=ok
// SIG undefined FUN_1486d1bda(void)

undefined8 FUN_1486d1bda(undefined8 param_1,int param_2)

{
  FUN_143c5d274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d1c00 FUN_1486d1c00 body=55 status=ok
// SIG undefined FUN_1486d1c00(void)

void FUN_1486d1c00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60d40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60d40 = FUN_140002ddd(FUN_1464effdd,uVar1,L"GbxMomentNodeState_PlaySound");
  }
  return;
}



// FUNCTION 1486d1c38 FUN_1486d1c38 body=336 status=ok
// SIG undefined FUN_1486d1c38(void)

longlong FUN_1486d1c38(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *_Dst;
  undefined8 *_Src;
  
  FUN_1486c86fa();
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  _Dst = (longlong *)(param_1 + 0x78);
  _Src = (undefined8 *)(param_2 + 0x78);
  bVar1 = *(byte *)(param_1 + 0x98);
  if (bVar1 == *(byte *)(param_2 + 0x98)) {
    if (0x18 < *(ushort *)(param_2 + 0x90)) {
      _Src = *(undefined8 **)(param_2 + 0x78);
    }
    if (0x18 < *(ushort *)(param_1 + 0x90)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar5 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x90)) {
        plVar5 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar5);
    }
    if (0x18 < *(ushort *)(param_1 + 0x90)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 0x98);
    uVar2 = *(ushort *)(param_2 + 0x90);
    *(ushort *)(param_1 + 0x90) = uVar2;
    plVar5 = _Dst;
    if (0x18 < uVar2) {
      plVar5 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar5;
      _Src = (undefined8 *)*_Src;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar5,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(plVar5,_Src);
    }
    *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  }
  return param_1;
}



// FUNCTION 1486d1dba FUN_1486d1dba body=63 status=ok
// SIG undefined FUN_1486d1dba(void)

undefined1 FUN_1486d1dba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d1f22(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 1486d1e22 FUN_1486d1e22 body=59 status=ok
// SIG undefined FUN_1486d1e22(void)

undefined8 FUN_1486d1e22(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d1e6e FUN_1486d1e6e body=40 status=ok
// SIG undefined FUN_1486d1e6e(void)

void FUN_1486d1e6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_1461abb50(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 1486d1ee4 FUN_1486d1ee4 body=57 status=ok
// SIG undefined FUN_1486d1ee4(void)

void FUN_1486d1ee4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60d58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60d58 = FUN_140002ddd(FUN_1464f0073,uVar1,L"GbxMomentNodeSettings_PlayTrick");
  }
  return;
}



// FUNCTION 1486d1f22 FUN_1486d1f22 body=303 status=ok
// SIG undefined FUN_1486d1f22(void)

longlong FUN_1486d1f22(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  lVar9 = *(longlong *)(param_2 + 0xc0);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0xc0);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0xc0) = lVar9;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  lVar9 = *(longlong *)(param_2 + 0xe0);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0xe0);
    }
  }
  *(longlong *)(param_1 + 0xe0) = lVar9;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_144983130(param_1 + 0xf8,param_2 + 0xf8);
  FUN_144983130(param_1 + 0x130,param_2 + 0x130);
  return param_1;
}



// FUNCTION 1486d2100 FUN_1486d2100 body=97 status=ok
// SIG undefined FUN_1486d2100(void)

undefined1 FUN_1486d2100(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    FUN_1486d2224(param_2 + 0x70,param_3 + 0x70);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1486d218a FUN_1486d218a body=59 status=ok
// SIG undefined FUN_1486d218a(void)

undefined8 FUN_1486d218a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d2224 FUN_1486d2224 body=89 status=ok
// SIG undefined FUN_1486d2224(void)

undefined8 * FUN_1486d2224(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486d227e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486d227e FUN_1486d227e body=115 status=ok
// SIG undefined FUN_1486d227e(void)

void FUN_1486d227e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486d22f2 FUN_1486d22f2 body=42 status=ok
// SIG undefined FUN_1486d22f2(void)

void FUN_1486d22f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bb640;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  return;
}



// FUNCTION 1486d2344 FUN_1486d2344 body=181 status=ok
// SIG undefined FUN_1486d2344(void)

undefined8 FUN_1486d2344(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x40);
      FUN_144983130(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      FUN_144a67f5c(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486d2422 FUN_1486d2422 body=59 status=ok
// SIG undefined FUN_1486d2422(void)

undefined8 FUN_1486d2422(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d246e FUN_1486d246e body=40 status=ok
// SIG undefined FUN_1486d246e(void)

void FUN_1486d246e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14586b856(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1486d258c FUN_1486d258c body=54 status=ok
// SIG undefined FUN_1486d258c(void)

undefined1 FUN_1486d258c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486d25ea FUN_1486d25ea body=59 status=ok
// SIG undefined FUN_1486d25ea(void)

undefined8 FUN_1486d25ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d2680 FUN_1486d2680 body=64 status=ok
// SIG undefined FUN_1486d2680(void)

void FUN_1486d2680(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bbe30;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  return;
}



// FUNCTION 1486d26c0 FUN_1486d26c0 body=48 status=ok
// SIG undefined FUN_1486d26c0(void)

void FUN_1486d26c0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bbe30;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  return;
}



// FUNCTION 1486d2734 FUN_1486d2734 body=181 status=ok
// SIG undefined FUN_1486d2734(void)

undefined8 FUN_1486d2734(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x40);
      FUN_144983130(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486d2812 FUN_1486d2812 body=59 status=ok
// SIG undefined FUN_1486d2812(void)

undefined8 FUN_1486d2812(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d28b4 FUN_1486d28b4 body=82 status=ok
// SIG undefined FUN_1486d28b4(void)

undefined8 * FUN_1486d28b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1bbe30;
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d2906 FUN_1486d2906 body=55 status=ok
// SIG undefined FUN_1486d2906(void)

void FUN_1486d2906(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60de8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60de8 = FUN_140002ddd(FUN_1464f025f,uVar1,L"GbxMomentNodeSettings_RevertToMainTask");
  }
  return;
}



// FUNCTION 1486d293e FUN_1486d293e body=79 status=ok
// SIG undefined FUN_1486d293e(void)

void FUN_1486d293e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *param_1 = &PTR_FUN_14b1bbe30;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return;
}



// FUNCTION 1486d2a38 FUN_1486d2a38 body=62 status=ok
// SIG undefined FUN_1486d2a38(void)

undefined8 FUN_1486d2a38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1486d2a9e FUN_1486d2a9e body=59 status=ok
// SIG undefined FUN_1486d2a9e(void)

undefined8 FUN_1486d2a9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d2b32 FUN_1486d2b32 body=55 status=ok
// SIG undefined FUN_1486d2b32(void)

void FUN_1486d2b32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60e00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60e00 = FUN_140002ddd(FUN_1464f02f5,uVar1,L"GbxMomentNodeState_RevertToMainTask");
  }
  return;
}



// FUNCTION 1486d2b9a FUN_1486d2b9a body=63 status=ok
// SIG undefined FUN_1486d2b9a(void)

undefined1 FUN_1486d2b9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d2ca4(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 1486d2c02 FUN_1486d2c02 body=59 status=ok
// SIG undefined FUN_1486d2c02(void)

undefined8 FUN_1486d2c02(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d2ca4 FUN_1486d2ca4 body=119 status=ok
// SIG undefined FUN_1486d2ca4(void)

longlong FUN_1486d2ca4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  uVar8 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = uVar8;
  return param_1;
}



// FUNCTION 1486d2d1c FUN_1486d2d1c body=79 status=ok
// SIG undefined FUN_1486d2d1c(void)

void FUN_1486d2d1c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    *param_1 = &PTR_FUN_14b1c14b0;
    FUN_144a2da94(param_1 + 0x11);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  return;
}



// FUNCTION 1486d2d6c FUN_1486d2d6c body=57 status=ok
// SIG undefined FUN_1486d2d6c(void)

void FUN_1486d2d6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60e30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60e30 = FUN_140002ddd(FUN_1464f03bb,uVar1,L"GbxMomentNodeSettings_ScreenFade");
  }
  return;
}



// FUNCTION 1486d2e62 FUN_1486d2e62 body=64 status=ok
// SIG undefined FUN_1486d2e62(void)

undefined1 FUN_1486d2e62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1486d2eca FUN_1486d2eca body=59 status=ok
// SIG undefined FUN_1486d2eca(void)

undefined8 FUN_1486d2eca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d2f90 FUN_1486d2f90 body=63 status=ok
// SIG undefined FUN_1486d2f90(void)

undefined1 FUN_1486d2f90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d30ba(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 1486d2ff8 FUN_1486d2ff8 body=59 status=ok
// SIG undefined FUN_1486d2ff8(void)

undefined8 FUN_1486d2ff8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d3044 FUN_1486d3044 body=40 status=ok
// SIG undefined FUN_1486d3044(void)

void FUN_1486d3044(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_145853158(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1486d30ba FUN_1486d30ba body=139 status=ok
// SIG undefined FUN_1486d30ba(void)

longlong FUN_1486d30ba(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  FUN_140427366(param_2 + 200,param_1 + 200);
  return param_1;
}



// FUNCTION 1486d31ec FUN_1486d31ec body=54 status=ok
// SIG undefined FUN_1486d31ec(void)

undefined1 FUN_1486d31ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486d324a FUN_1486d324a body=59 status=ok
// SIG undefined FUN_1486d324a(void)

undefined8 FUN_1486d324a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d32de FUN_1486d32de body=57 status=ok
// SIG undefined FUN_1486d32de(void)

void FUN_1486d32de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60e78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60e78 = FUN_140002ddd(FUN_1464f0510,uVar1,L"GbxMomentNodeState_SetActorFactValue");
  }
  return;
}



// FUNCTION 1486d3318 FUN_1486d3318 body=123 status=ok
// SIG undefined FUN_1486d3318(void)

void FUN_1486d3318(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x108);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bcb40;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  param_2[0x19] = 0;
  *(undefined2 *)(param_2 + 0x1d) = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}



// FUNCTION 1486d3394 FUN_1486d3394 body=103 status=ok
// SIG undefined FUN_1486d3394(void)

void FUN_1486d3394(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bcb40;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  param_2[0x19] = 0;
  *(undefined2 *)(param_2 + 0x1d) = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}



// FUNCTION 1486d3440 FUN_1486d3440 body=63 status=ok
// SIG undefined FUN_1486d3440(void)

undefined1 FUN_1486d3440(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d35c8(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 1486d34a8 FUN_1486d34a8 body=59 status=ok
// SIG undefined FUN_1486d34a8(void)

undefined8 FUN_1486d34a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d34f4 FUN_1486d34f4 body=40 status=ok
// SIG undefined FUN_1486d34f4(void)

void FUN_1486d34f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_1486d3cbe(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 1486d356a FUN_1486d356a body=38 status=ok
// SIG undefined FUN_1486d356a(void)

undefined8 FUN_1486d356a(undefined8 param_1,int param_2)

{
  FUN_1486d3cbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d3590 FUN_1486d3590 body=55 status=ok
// SIG undefined FUN_1486d3590(void)

void FUN_1486d3590(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60e90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60e90 = FUN_140002ddd(FUN_1464f05a7,uVar1,L"GbxMomentNodeSettings_SetBlackboardValue");
  }
  return;
}



// FUNCTION 1486d35c8 FUN_1486d35c8 body=139 status=ok
// SIG undefined FUN_1486d35c8(void)

longlong FUN_1486d35c8(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_14087f5e2(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144983130(param_1 + 200,param_2 + 200);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  return param_1;
}



// FUNCTION 1486d3716 FUN_1486d3716 body=63 status=ok
// SIG undefined FUN_1486d3716(void)

undefined1 FUN_1486d3716(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d38f2(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1486d377e FUN_1486d377e body=59 status=ok
// SIG undefined FUN_1486d377e(void)

undefined8 FUN_1486d377e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d37ca FUN_1486d37ca body=38 status=ok
// SIG undefined FUN_1486d37ca(void)

void FUN_1486d37ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_143c5e0b8(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1486d383e FUN_1486d383e body=38 status=ok
// SIG undefined FUN_1486d383e(void)

undefined8 FUN_1486d383e(undefined8 param_1,int param_2)

{
  FUN_143c5e0b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d3864 FUN_1486d3864 body=55 status=ok
// SIG undefined FUN_1486d3864(void)

void FUN_1486d3864(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60ea8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60ea8 = FUN_140002ddd(FUN_1464f063d,uVar1,L"GbxMomentNodeState_SetBlackboardValue");
  }
  return;
}



// FUNCTION 1486d389c FUN_1486d389c body=85 status=ok
// SIG undefined FUN_1486d389c(void)

void FUN_1486d389c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1486d38f2 FUN_1486d38f2 body=74 status=ok
// SIG undefined FUN_1486d38f2(void)

longlong FUN_1486d38f2(longlong param_1,longlong param_2)

{
  FUN_1486c86fa();
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0xa0) == '\x01') {
      FUN_1486d393c(param_1 + 0x78,param_2 + 0x78);
    }
    else {
      FUN_1486d389c(param_1 + 0x78);
    }
  }
  return param_1;
}



// FUNCTION 1486d393c FUN_1486d393c body=188 status=ok
// SIG undefined FUN_1486d393c(void)

undefined8 * FUN_1486d393c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar3 != (code *)0x0) {
      puVar4 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar4 = (undefined8 *)*param_1;
      }
      (*pcVar3)(puVar4);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
  }
  bVar1 = *(byte *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 3) = uVar2;
  _Dst = param_1;
  puVar4 = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    *param_1 = _Dst;
    puVar4 = (undefined8 *)*param_2;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,puVar4,
           (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
  }
  else {
    (*pcVar3)();
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 1486d39fa FUN_1486d39fa body=133 status=ok
// SIG undefined FUN_1486d39fa(void)

void FUN_1486d39fa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x108);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bcb40;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  param_2[0x19] = 0;
  *(undefined2 *)(param_2 + 0x1d) = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 0x20) = 1;
  *param_2 = &PTR_FUN_14b1bcfb0;
  return;
}



// FUNCTION 1486d3a80 FUN_1486d3a80 body=113 status=ok
// SIG undefined FUN_1486d3a80(void)

void FUN_1486d3a80(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bcb40;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  param_2[0x19] = 0;
  *(undefined2 *)(param_2 + 0x1d) = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 0x20) = 1;
  *param_2 = &PTR_FUN_14b1bcfb0;
  return;
}



// FUNCTION 1486d3b36 FUN_1486d3b36 body=63 status=ok
// SIG undefined FUN_1486d3b36(void)

undefined1 FUN_1486d3b36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d35c8(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 1486d3b9e FUN_1486d3b9e body=59 status=ok
// SIG undefined FUN_1486d3b9e(void)

undefined8 FUN_1486d3b9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d3bea FUN_1486d3bea body=40 status=ok
// SIG undefined FUN_1486d3bea(void)

void FUN_1486d3bea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_1486d3cbe(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 1486d3c60 FUN_1486d3c60 body=38 status=ok
// SIG undefined FUN_1486d3c60(void)

undefined8 FUN_1486d3c60(undefined8 param_1,int param_2)

{
  FUN_1486d3cbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d3c86 FUN_1486d3c86 body=55 status=ok
// SIG undefined FUN_1486d3c86(void)

void FUN_1486d3c86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60ec0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60ec0 =
         FUN_140002ddd(FUN_1464f06d3,uVar1,L"GbxMomentNodeSettings_SetBlackboardValue_NPC");
  }
  return;
}



// FUNCTION 1486d3cbe FUN_1486d3cbe body=74 status=ok
// SIG undefined FUN_1486d3cbe(void)

void FUN_1486d3cbe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1bcb40;
  FUN_144a2da94(param_1 + 0x19);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486d3dd4 FUN_1486d3dd4 body=63 status=ok
// SIG undefined FUN_1486d3dd4(void)

undefined1 FUN_1486d3dd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d38f2(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1486d3e3c FUN_1486d3e3c body=59 status=ok
// SIG undefined FUN_1486d3e3c(void)

undefined8 FUN_1486d3e3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d3e88 FUN_1486d3e88 body=38 status=ok
// SIG undefined FUN_1486d3e88(void)

void FUN_1486d3e88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_143c5e0b8(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1486d3efc FUN_1486d3efc body=38 status=ok
// SIG undefined FUN_1486d3efc(void)

undefined8 FUN_1486d3efc(undefined8 param_1,int param_2)

{
  FUN_143c5e0b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d3f22 FUN_1486d3f22 body=55 status=ok
// SIG undefined FUN_1486d3f22(void)

void FUN_1486d3f22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60ed8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60ed8 = FUN_140002ddd(FUN_1464f0769,uVar1,L"GbxMomentNodeState_SetBlackboardValue_NPC");
  }
  return;
}



// FUNCTION 1486d3f5a FUN_1486d3f5a body=112 status=ok
// SIG undefined FUN_1486d3f5a(void)

void FUN_1486d3f5a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bd420;
  *(undefined2 *)(param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 1486d3ff2 FUN_1486d3ff2 body=63 status=ok
// SIG undefined FUN_1486d3ff2(void)

undefined1 FUN_1486d3ff2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d4136(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1486d405a FUN_1486d405a body=59 status=ok
// SIG undefined FUN_1486d405a(void)

undefined8 FUN_1486d405a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d40fc FUN_1486d40fc body=57 status=ok
// SIG undefined FUN_1486d40fc(void)

void FUN_1486d40fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60ef0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60ef0 = FUN_140002ddd(FUN_1464f07ff,uVar1,L"GbxMomentNodeSettings_SetFactValue");
  }
  return;
}



// FUNCTION 1486d4136 FUN_1486d4136 body=151 status=ok
// SIG undefined FUN_1486d4136(void)

longlong FUN_1486d4136(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_1447715ec(param_1 + 0x90,param_2 + 0x90);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  FUN_140427366(param_2 + 0xc0,param_1 + 0xc0);
  return param_1;
}



// FUNCTION 1486d41ce FUN_1486d41ce body=79 status=ok
// SIG undefined FUN_1486d41ce(void)

void FUN_1486d41ce(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    *param_1 = &PTR_FUN_14b1bd420;
    FUN_141638c42(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  return;
}



// FUNCTION 1486d42c4 FUN_1486d42c4 body=54 status=ok
// SIG undefined FUN_1486d42c4(void)

undefined1 FUN_1486d42c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486d4322 FUN_1486d4322 body=59 status=ok
// SIG undefined FUN_1486d4322(void)

undefined8 FUN_1486d4322(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d43b6 FUN_1486d43b6 body=55 status=ok
// SIG undefined FUN_1486d43b6(void)

void FUN_1486d43b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60f08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60f08 = FUN_140002ddd(FUN_1464f085e,uVar1,L"GbxMomentNodeState_SetFactValue");
  }
  return;
}



// FUNCTION 1486d43ee FUN_1486d43ee body=99 status=ok
// SIG undefined FUN_1486d43ee(void)

void FUN_1486d43ee(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bd890;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  param_2[0x18] = DAT_14cb81078;
  *(undefined2 *)(param_2 + 0x19) = 0x101;
  return;
}



// FUNCTION 1486d4452 FUN_1486d4452 body=83 status=ok
// SIG undefined FUN_1486d4452(void)

void FUN_1486d4452(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bd890;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  param_2[0x18] = DAT_14cb81078;
  *(undefined2 *)(param_2 + 0x19) = 0x101;
  return;
}



// FUNCTION 1486d44ea FUN_1486d44ea body=216 status=ok
// SIG undefined FUN_1486d44ea(void)

undefined8 FUN_1486d44ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      lVar1 = param_3 + lVar11;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar11;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x40);
      lVar2 = param_2 + 0x48 + lVar11;
      lVar1 = param_3 + lVar11;
      FUN_144983130(lVar2,lVar1 + 0x48);
      FUN_144983130(param_2 + lVar11 + 0x80,param_3 + lVar11 + 0x80);
      uVar10 = *(undefined8 *)(lVar1 + 0xc0);
      *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar1 + 0xb8);
      *(undefined8 *)(lVar2 + 0x78) = uVar10;
      *(undefined2 *)(lVar2 + 0x80) = *(undefined2 *)(lVar1 + 200);
      lVar11 = lVar11 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486d45ea FUN_1486d45ea body=59 status=ok
// SIG undefined FUN_1486d45ea(void)

undefined8 FUN_1486d45ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d468c FUN_1486d468c body=82 status=ok
// SIG undefined FUN_1486d468c(void)

undefined8 * FUN_1486d468c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1bd890;
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d46de FUN_1486d46de body=55 status=ok
// SIG undefined FUN_1486d46de(void)

void FUN_1486d46de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60f20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60f20 = FUN_140002ddd(FUN_1464f08f5,uVar1,L"GbxMomentNodeSettings_SetStance");
  }
  return;
}



// FUNCTION 1486d4716 FUN_1486d4716 body=79 status=ok
// SIG undefined FUN_1486d4716(void)

void FUN_1486d4716(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    *param_1 = &PTR_FUN_14b1bd890;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  return;
}



// FUNCTION 1486d4814 FUN_1486d4814 body=70 status=ok
// SIG undefined FUN_1486d4814(void)

undefined1 FUN_1486d4814(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x74);
    uVar2 = *(undefined4 *)(param_3 + 0x78);
    uVar3 = *(undefined4 *)(param_3 + 0x7c);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x74) = uVar1;
    *(undefined4 *)(param_2 + 0x78) = uVar2;
    *(undefined4 *)(param_2 + 0x7c) = uVar3;
    param_2 = param_2 + 0x80;
    param_3 = param_3 + 0x80;
  }
  return 1;
}



// FUNCTION 1486d4882 FUN_1486d4882 body=59 status=ok
// SIG undefined FUN_1486d4882(void)

undefined8 FUN_1486d4882(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d491c FUN_1486d491c body=55 status=ok
// SIG undefined FUN_1486d491c(void)

void FUN_1486d491c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60f38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60f38 = FUN_140002ddd(FUN_1464f098b,uVar1,L"GbxMomentNodeState_SetStance");
  }
  return;
}



// FUNCTION 1486d4954 FUN_1486d4954 body=100 status=ok
// SIG undefined FUN_1486d4954(void)

void FUN_1486d4954(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bdd00;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xf;
  param_2[0x19] = 0;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  return;
}



// FUNCTION 1486d49b8 FUN_1486d49b8 body=82 status=ok
// SIG undefined FUN_1486d49b8(void)

void FUN_1486d49b8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bdd00;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xf;
  param_2[0x19] = 0;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  return;
}



// FUNCTION 1486d4a4e FUN_1486d4a4e body=63 status=ok
// SIG undefined FUN_1486d4a4e(void)

undefined1 FUN_1486d4a4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d4be2(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 1486d4ab6 FUN_1486d4ab6 body=59 status=ok
// SIG undefined FUN_1486d4ab6(void)

undefined8 FUN_1486d4ab6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d4b58 FUN_1486d4b58 body=82 status=ok
// SIG undefined FUN_1486d4b58(void)

undefined8 * FUN_1486d4b58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1bdd00;
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d4baa FUN_1486d4baa body=55 status=ok
// SIG undefined FUN_1486d4baa(void)

void FUN_1486d4baa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60f50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60f50 = FUN_140002ddd(FUN_1464f0a21,uVar1,L"GbxMomentNodeSettings_SetTeam");
  }
  return;
}



// FUNCTION 1486d4be2 FUN_1486d4be2 body=165 status=ok
// SIG undefined FUN_1486d4be2(void)

longlong FUN_1486d4be2(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  if ((*(longlong *)(param_1 + 0xb8) != *(longlong *)(param_2 + 0xb8)) ||
     (*(int *)(param_1 + 0xc0) != *(int *)(param_2 + 0xc0))) {
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 1486d4c88 FUN_1486d4c88 body=79 status=ok
// SIG undefined FUN_1486d4c88(void)

void FUN_1486d4c88(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    *param_1 = &PTR_FUN_14b1bdd00;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  return;
}



// FUNCTION 1486d4d82 FUN_1486d4d82 body=62 status=ok
// SIG undefined FUN_1486d4d82(void)

undefined8 FUN_1486d4d82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1486d4de8 FUN_1486d4de8 body=59 status=ok
// SIG undefined FUN_1486d4de8(void)

undefined8 FUN_1486d4de8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d4e7c FUN_1486d4e7c body=55 status=ok
// SIG undefined FUN_1486d4e7c(void)

void FUN_1486d4e7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60f68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60f68 = FUN_140002ddd(FUN_1464f0ab7,uVar1,L"GbxMomentNodeState_SetTeam");
  }
  return;
}



// FUNCTION 1486d4eb4 FUN_1486d4eb4 body=37 status=ok
// SIG undefined FUN_1486d4eb4(void)

void FUN_1486d4eb4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x158);
  FUN_1486d5050(param_2);
  return;
}



// FUNCTION 1486d4f26 FUN_1486d4f26 body=63 status=ok
// SIG undefined FUN_1486d4f26(void)

undefined1 FUN_1486d4f26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d51e4(param_2,param_3);
    param_3 = param_3 + 0x158;
    param_2 = param_2 + 0x158;
  }
  return 1;
}



// FUNCTION 1486d4f8e FUN_1486d4f8e body=59 status=ok
// SIG undefined FUN_1486d4f8e(void)

undefined8 FUN_1486d4f8e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d4fda FUN_1486d4fda body=40 status=ok
// SIG undefined FUN_1486d4fda(void)

void FUN_1486d4fda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x158) == '\x01') {
    FUN_1486d5188(param_2);
    *(undefined1 *)(param_2 + 0x158) = 0;
  }
  return;
}



// FUNCTION 1486d5050 FUN_1486d5050 body=218 status=ok
// SIG undefined FUN_1486d5050(void)

undefined8 * FUN_1486d5050(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1be170;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x15) = 4;
  *(undefined4 *)(param_1 + 0x12) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x16) = 3;
  *(char *)(param_1 + 0x17) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_14044066a(param_1 + 0x18,0x11,7);
  param_1[0x1f] = 0;
  param_1[0x22] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x20] = DAT_14c8464e0;
  param_1[0x21] = uVar1;
  uVar1 = DAT_14c846500;
  param_1[0x23] = DAT_14c8464f8;
  param_1[0x24] = uVar1;
  param_1[0x25] = DAT_14c846508;
  param_1[0x28] = DAT_14c846520;
  uVar1 = DAT_14c846518;
  param_1[0x26] = DAT_14c846510;
  param_1[0x27] = uVar1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}



// FUNCTION 1486d512a FUN_1486d512a body=38 status=ok
// SIG undefined FUN_1486d512a(void)

undefined8 FUN_1486d512a(undefined8 param_1,int param_2)

{
  FUN_1486d5188();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d5150 FUN_1486d5150 body=55 status=ok
// SIG undefined FUN_1486d5150(void)

void FUN_1486d5150(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60f80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60f80 = FUN_140002ddd(FUN_1464f0b4d,uVar1,L"GbxMomentNodeSettings_SpawnParticle");
  }
  return;
}



// FUNCTION 1486d5188 FUN_1486d5188 body=91 status=ok
// SIG undefined FUN_1486d5188(void)

void FUN_1486d5188(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1be170;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_144a2da94(param_1 + 0x18);
  FUN_144a2da94(param_1 + 0x11);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486d51e4 FUN_1486d51e4 body=202 status=ok
// SIG undefined FUN_1486d51e4(void)

longlong FUN_1486d51e4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  lVar8 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x80);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar8;
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  FUN_144983130(param_1 + 0xc0,param_2 + 0xc0);
  puVar9 = (undefined8 *)(param_2 + 0xf8);
  puVar10 = (undefined8 *)(param_1 + 0xf8);
  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_14065c7a4(param_1 + 0x148,param_2 + 0x148);
  return param_1;
}



// FUNCTION 1486d5378 FUN_1486d5378 body=82 status=ok
// SIG undefined FUN_1486d5378(void)

undefined8 FUN_1486d5378(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x74);
    uVar2 = *(undefined4 *)(param_3 + 0x78);
    uVar3 = *(undefined4 *)(param_3 + 0x7c);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x74) = uVar1;
    *(undefined4 *)(param_2 + 0x78) = uVar2;
    *(undefined4 *)(param_2 + 0x7c) = uVar3;
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_3 + 0x80);
    param_2 = param_2 + 0x88;
    param_3 = param_3 + 0x88;
  }
  return 1;
}



// FUNCTION 1486d53f2 FUN_1486d53f2 body=59 status=ok
// SIG undefined FUN_1486d53f2(void)

undefined8 FUN_1486d53f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d548c FUN_1486d548c body=55 status=ok
// SIG undefined FUN_1486d548c(void)

void FUN_1486d548c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60f98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60f98 = FUN_140002ddd(FUN_1464f0be3,uVar1,L"GbxMomentNodeState_SpawnParticle");
  }
  return;
}



// FUNCTION 1486d54c4 FUN_1486d54c4 body=32 status=ok
// SIG undefined FUN_1486d54c4(void)

void FUN_1486d54c4(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1be5e0;
  return;
}



// FUNCTION 1486d550c FUN_1486d550c body=111 status=ok
// SIG undefined FUN_1486d550c(void)

undefined8 FUN_1486d550c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486d55a4 FUN_1486d55a4 body=59 status=ok
// SIG undefined FUN_1486d55a4(void)

undefined8 FUN_1486d55a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d55f0 FUN_1486d55f0 body=57 status=ok
// SIG undefined FUN_1486d55f0(void)

void FUN_1486d55f0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1486d5720 FUN_1486d5720 body=54 status=ok
// SIG undefined FUN_1486d5720(void)

undefined1 FUN_1486d5720(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486d577e FUN_1486d577e body=59 status=ok
// SIG undefined FUN_1486d577e(void)

undefined8 FUN_1486d577e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d5814 FUN_1486d5814 body=106 status=ok
// SIG undefined FUN_1486d5814(void)

void FUN_1486d5814(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bea50;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined2 *)(param_2 + 0x16) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0xb2) = 1;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 1486d587e FUN_1486d587e body=90 status=ok
// SIG undefined FUN_1486d587e(void)

void FUN_1486d587e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bea50;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined2 *)(param_2 + 0x16) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0xb2) = 1;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 1486d591c FUN_1486d591c body=63 status=ok
// SIG undefined FUN_1486d591c(void)

undefined1 FUN_1486d591c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d5ad4(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 1486d5984 FUN_1486d5984 body=59 status=ok
// SIG undefined FUN_1486d5984(void)

undefined8 FUN_1486d5984(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d59d0 FUN_1486d59d0 body=57 status=ok
// SIG undefined FUN_1486d59d0(void)

void FUN_1486d59d0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1a) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x1a) = 0;
  }
  return;
}



// FUNCTION 1486d5a58 FUN_1486d5a58 body=60 status=ok
// SIG undefined FUN_1486d5a58(void)

undefined8 * FUN_1486d5a58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d5a94 FUN_1486d5a94 body=55 status=ok
// SIG undefined FUN_1486d5a94(void)

void FUN_1486d5a94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60fe0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60fe0 = FUN_140002ddd(FUN_1464f0d6f,uVar1,L"GbxMomentNodeSettings_StartDialogLoop");
  }
  return;
}



// FUNCTION 1486d5ad4 FUN_1486d5ad4 body=153 status=ok
// SIG undefined FUN_1486d5ad4(void)

longlong FUN_1486d5ad4(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  FUN_14132837e(param_1 + 0x88,param_2 + 0x88);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined4 *)(param_1 + 0xaf) = *(undefined4 *)(param_2 + 0xaf);
  FUN_1457b9446(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 1486d5c14 FUN_1486d5c14 body=54 status=ok
// SIG undefined FUN_1486d5c14(void)

undefined1 FUN_1486d5c14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486d5c72 FUN_1486d5c72 body=59 status=ok
// SIG undefined FUN_1486d5c72(void)

undefined8 FUN_1486d5c72(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d5d06 FUN_1486d5d06 body=55 status=ok
// SIG undefined FUN_1486d5d06(void)

void FUN_1486d5d06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60ff8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60ff8 = FUN_140002ddd(FUN_1464f0e05,uVar1,L"GbxMomentNodeState_StartDialogLoop");
  }
  return;
}



// FUNCTION 1486d5d3e FUN_1486d5d3e body=59 status=ok
// SIG undefined FUN_1486d5d3e(void)

void FUN_1486d5d3e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1beec0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 1486d5d7a FUN_1486d5d7a body=43 status=ok
// SIG undefined FUN_1486d5d7a(void)

void FUN_1486d5d7a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1beec0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 1486d5dea FUN_1486d5dea body=119 status=ok
// SIG undefined FUN_1486d5dea(void)

undefined8 FUN_1486d5dea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486d5e8a FUN_1486d5e8a body=59 status=ok
// SIG undefined FUN_1486d5e8a(void)

undefined8 FUN_1486d5e8a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d5ed6 FUN_1486d5ed6 body=57 status=ok
// SIG undefined FUN_1486d5ed6(void)

void FUN_1486d5ed6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1486d5f5e FUN_1486d5f5e body=60 status=ok
// SIG undefined FUN_1486d5f5e(void)

undefined8 * FUN_1486d5f5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d5f9a FUN_1486d5f9a body=55 status=ok
// SIG undefined FUN_1486d5f9a(void)

void FUN_1486d5f9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61010 = FUN_140002ddd(FUN_1464f0e9b,uVar1,L"GbxMomentNodeSettings_StopDialogLoop");
  }
  return;
}



// FUNCTION 1486d607c FUN_1486d607c body=54 status=ok
// SIG undefined FUN_1486d607c(void)

undefined1 FUN_1486d607c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486d60da FUN_1486d60da body=59 status=ok
// SIG undefined FUN_1486d60da(void)

undefined8 FUN_1486d60da(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d616e FUN_1486d616e body=55 status=ok
// SIG undefined FUN_1486d616e(void)

void FUN_1486d616e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61028 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61028 = FUN_140002ddd(FUN_1464f0f31,uVar1,L"GbxMomentNodeState_StopDialogLoop");
  }
  return;
}



// FUNCTION 1486d61a6 FUN_1486d61a6 body=101 status=ok
// SIG undefined FUN_1486d61a6(void)

void FUN_1486d61a6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bf330;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined2 *)(param_2 + 0x1a) = 1;
  *(undefined1 *)((longlong)param_2 + 0xd2) = 1;
  return;
}



// FUNCTION 1486d620c FUN_1486d620c body=85 status=ok
// SIG undefined FUN_1486d620c(void)

void FUN_1486d620c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bf330;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined2 *)(param_2 + 0x1a) = 1;
  *(undefined1 *)((longlong)param_2 + 0xd2) = 1;
  return;
}



// FUNCTION 1486d62a6 FUN_1486d62a6 body=63 status=ok
// SIG undefined FUN_1486d62a6(void)

undefined1 FUN_1486d62a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d643e(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 1486d630e FUN_1486d630e body=59 status=ok
// SIG undefined FUN_1486d630e(void)

undefined8 FUN_1486d630e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d63b0 FUN_1486d63b0 body=82 status=ok
// SIG undefined FUN_1486d63b0(void)

undefined8 * FUN_1486d63b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1bf330;
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d6402 FUN_1486d6402 body=55 status=ok
// SIG undefined FUN_1486d6402(void)

void FUN_1486d6402(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61040 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61040 = FUN_140002ddd(FUN_1464f0fc7,uVar1,L"GbxMomentNodeSettings_StopTrick");
  }
  return;
}



// FUNCTION 1486d643e FUN_1486d643e body=189 status=ok
// SIG undefined FUN_1486d643e(void)

longlong FUN_1486d643e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  lVar8 = *(longlong *)(param_2 + 0xb8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0xb8);
    }
  }
  *(longlong *)(param_1 + 0xb8) = lVar8;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(param_2 + 0xd2);
  return param_1;
}



// FUNCTION 1486d64fc FUN_1486d64fc body=79 status=ok
// SIG undefined FUN_1486d64fc(void)

void FUN_1486d64fc(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    *param_1 = &PTR_FUN_14b1bf330;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  return;
}



// FUNCTION 1486d65f6 FUN_1486d65f6 body=62 status=ok
// SIG undefined FUN_1486d65f6(void)

undefined8 FUN_1486d65f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1486d665c FUN_1486d665c body=59 status=ok
// SIG undefined FUN_1486d665c(void)

undefined8 FUN_1486d665c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d66f0 FUN_1486d66f0 body=55 status=ok
// SIG undefined FUN_1486d66f0(void)

void FUN_1486d66f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61058 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61058 = FUN_140002ddd(FUN_1464f105d,uVar1,L"GbxMomentNodeState_StopTrick");
  }
  return;
}



// FUNCTION 1486d6728 FUN_1486d6728 body=84 status=ok
// SIG undefined FUN_1486d6728(void)

void FUN_1486d6728(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bf7a0;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  return;
}



// FUNCTION 1486d677c FUN_1486d677c body=68 status=ok
// SIG undefined FUN_1486d677c(void)

void FUN_1486d677c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bf7a0;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  return;
}



// FUNCTION 1486d6804 FUN_1486d6804 body=63 status=ok
// SIG undefined FUN_1486d6804(void)

undefined1 FUN_1486d6804(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d6994(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1486d686c FUN_1486d686c body=59 status=ok
// SIG undefined FUN_1486d686c(void)

undefined8 FUN_1486d686c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d68b8 FUN_1486d68b8 body=40 status=ok
// SIG undefined FUN_1486d68b8(void)

void FUN_1486d68b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_145c15f92(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1486d692e FUN_1486d692e body=38 status=ok
// SIG undefined FUN_1486d692e(void)

undefined8 FUN_1486d692e(undefined8 param_1,int param_2)

{
  FUN_145c15f92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d6954 FUN_1486d6954 body=55 status=ok
// SIG undefined FUN_1486d6954(void)

void FUN_1486d6954(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb610b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb610b0 = FUN_140002ddd(FUN_1464f10f3,uVar1,L"GbxMomentNodeSettings_TravelToAINode");
  }
  return;
}



// FUNCTION 1486d6994 FUN_1486d6994 body=113 status=ok
// SIG undefined FUN_1486d6994(void)

longlong FUN_1486d6994(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 1486d6a06 FUN_1486d6a06 body=130 status=ok
// SIG undefined FUN_1486d6a06(void)

void FUN_1486d6a06(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *param_2 = &PTR_FUN_14b1bf9f0;
  *(undefined1 *)((longlong)param_2 + 0x71) = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 1486d6b0c FUN_1486d6b0c body=125 status=ok
// SIG undefined FUN_1486d6b0c(void)

undefined8 FUN_1486d6b0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0x78);
    FUN_1447715ec(param_2 + 0x80,param_3 + 0x80);
    uVar1 = *(undefined4 *)(param_3 + 0xac);
    uVar2 = *(undefined4 *)(param_3 + 0xb0);
    uVar3 = *(undefined4 *)(param_3 + 0xb4);
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_3 + 0xa8);
    *(undefined4 *)(param_2 + 0xac) = uVar1;
    *(undefined4 *)(param_2 + 0xb0) = uVar2;
    *(undefined4 *)(param_2 + 0xb4) = uVar3;
    *(undefined1 *)(param_2 + 0xb8) = *(undefined1 *)(param_3 + 0xb8);
    param_2 = param_2 + 0xc0;
    param_3 = param_3 + 0xc0;
  }
  return 1;
}



// FUNCTION 1486d6bb2 FUN_1486d6bb2 body=59 status=ok
// SIG undefined FUN_1486d6bb2(void)

undefined8 FUN_1486d6bb2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d6bfe FUN_1486d6bfe body=38 status=ok
// SIG undefined FUN_1486d6bfe(void)

void FUN_1486d6bfe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1415314e4(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1486d6c72 FUN_1486d6c72 body=38 status=ok
// SIG undefined FUN_1486d6c72(void)

undefined8 FUN_1486d6c72(undefined8 param_1,int param_2)

{
  FUN_1415314e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d6c98 FUN_1486d6c98 body=55 status=ok
// SIG undefined FUN_1486d6c98(void)

void FUN_1486d6c98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb610c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb610c8 = FUN_140002ddd(FUN_1464f1189,uVar1,L"GbxMomentNodeState_TravelToAINode");
  }
  return;
}



// FUNCTION 1486d6cd0 FUN_1486d6cd0 body=37 status=ok
// SIG undefined FUN_1486d6cd0(void)

void FUN_1486d6cd0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1c0);
  FUN_1486d6e6c(param_2);
  return;
}



// FUNCTION 1486d6d42 FUN_1486d6d42 body=63 status=ok
// SIG undefined FUN_1486d6d42(void)

undefined1 FUN_1486d6d42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d70f2(param_2,param_3);
    param_3 = param_3 + 0x1c0;
    param_2 = param_2 + 0x1c0;
  }
  return 1;
}



// FUNCTION 1486d6daa FUN_1486d6daa body=59 status=ok
// SIG undefined FUN_1486d6daa(void)

undefined8 FUN_1486d6daa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d6df6 FUN_1486d6df6 body=40 status=ok
// SIG undefined FUN_1486d6df6(void)

void FUN_1486d6df6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c0) == '\x01') {
    FUN_1486d6fb4(param_2);
    *(undefined1 *)(param_2 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 1486d6e6c FUN_1486d6e6c body=234 status=ok
// SIG undefined FUN_1486d6e6c(void)

undefined8 * FUN_1486d6e6c(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1bfc10;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)((longlong)param_1 + 0x116) = 1;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x117) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  return param_1;
}



// FUNCTION 1486d6f56 FUN_1486d6f56 body=38 status=ok
// SIG undefined FUN_1486d6f56(void)

undefined8 FUN_1486d6f56(undefined8 param_1,int param_2)

{
  FUN_1486d6fb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d6f7c FUN_1486d6f7c body=55 status=ok
// SIG undefined FUN_1486d6f7c(void)

void FUN_1486d6f7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb610e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb610e0 = FUN_140002ddd(FUN_1464f121f,uVar1,L"GbxMomentNodeSettings_TriggerDialogEvent");
  }
  return;
}



// FUNCTION 1486d6fb4 FUN_1486d6fb4 body=133 status=ok
// SIG undefined FUN_1486d6fb4(void)

void FUN_1486d6fb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1bfc10;
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_1486d703a(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x24);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486d703a FUN_1486d703a body=54 status=ok
// SIG undefined FUN_1486d703a(void)

void FUN_1486d703a(longlong *param_1)

{
  FUN_1486d7070(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486d7070 FUN_1486d7070 body=128 status=ok
// SIG undefined FUN_1486d7070(void)

void FUN_1486d7070(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1486d70f2 FUN_1486d70f2 body=147 status=ok
// SIG undefined FUN_1486d70f2(void)

longlong FUN_1486d70f2(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_140e7790a(param_1 + 0x80,param_2 + 0x80);
  FUN_1408d8320(param_1 + 0x98,param_2 + 0x98);
  FUN_14054d9c0(param_1 + 0x120,param_2 + 0x120);
  FUN_1486d7186(param_1 + 0x170,param_2 + 0x170);
  return param_1;
}



// FUNCTION 1486d7186 FUN_1486d7186 body=122 status=ok
// SIG undefined FUN_1486d7186(void)

longlong FUN_1486d7186(longlong param_1,longlong param_2)

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
    FUN_1486d7200(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486d7200 FUN_1486d7200 body=250 status=ok
// SIG undefined FUN_1486d7200(void)

longlong * FUN_1486d7200(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1486d7070(param_1,(ulonglong)uVar1);
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
          FUN_141847482(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486d73a2 FUN_1486d73a2 body=54 status=ok
// SIG undefined FUN_1486d73a2(void)

undefined1 FUN_1486d73a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486d7400 FUN_1486d7400 body=59 status=ok
// SIG undefined FUN_1486d7400(void)

undefined8 FUN_1486d7400(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d7494 FUN_1486d7494 body=55 status=ok
// SIG undefined FUN_1486d7494(void)

void FUN_1486d7494(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb610f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb610f8 = FUN_140002ddd(FUN_1464f12b5,uVar1,L"GbxMomentNodeState_TriggerDialogEvent");
  }
  return;
}



// FUNCTION 1486d74cc FUN_1486d74cc body=37 status=ok
// SIG undefined FUN_1486d74cc(void)

void FUN_1486d74cc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x160);
  FUN_1486d7668(param_2);
  return;
}



// FUNCTION 1486d753e FUN_1486d753e body=63 status=ok
// SIG undefined FUN_1486d753e(void)

undefined1 FUN_1486d753e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d77ce(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 1486d75a6 FUN_1486d75a6 body=59 status=ok
// SIG undefined FUN_1486d75a6(void)

undefined8 FUN_1486d75a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d75f2 FUN_1486d75f2 body=40 status=ok
// SIG undefined FUN_1486d75f2(void)

void FUN_1486d75f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_1486d776c(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 1486d7668 FUN_1486d7668 body=162 status=ok
// SIG undefined FUN_1486d7668(void)

undefined8 * FUN_1486d7668(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1c0080;
  FUN_14044066a(param_1 + 0x10,0x11,7);
  FUN_14044066a(param_1 + 0x17,0x11,7);
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x22) = 4;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(bool *)(param_1 + 0x24) = (DAT_14c9a8634 & 0x20) == 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x29) = 4;
  *(undefined4 *)(param_1 + 0x26) = 1;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(bool *)(param_1 + 0x2b) = (DAT_14c9a8634 & 0x20) == 0;
  return param_1;
}



// FUNCTION 1486d770a FUN_1486d770a body=38 status=ok
// SIG undefined FUN_1486d770a(void)

undefined8 FUN_1486d770a(undefined8 param_1,int param_2)

{
  FUN_1486d776c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d7730 FUN_1486d7730 body=55 status=ok
// SIG undefined FUN_1486d7730(void)

void FUN_1486d7730(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61110 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61110 = FUN_140002ddd(FUN_1464f134b,uVar1,L"GbxMomentNodeSettings_UseCover");
  }
  return;
}



// FUNCTION 1486d776c FUN_1486d776c body=98 status=ok
// SIG undefined FUN_1486d776c(void)

void FUN_1486d776c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1c0080;
  FUN_144a2da94(param_1 + 0x25);
  FUN_144a2da94(param_1 + 0x1e);
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486d77ce FUN_1486d77ce body=147 status=ok
// SIG undefined FUN_1486d77ce(void)

longlong FUN_1486d77ce(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144983130(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144983130(param_1 + 0x128,param_2 + 0x128);
  return param_1;
}



// FUNCTION 1486d7862 FUN_1486d7862 body=106 status=ok
// SIG undefined FUN_1486d7862(void)

void FUN_1486d7862(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb0);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *param_2 = &PTR_FUN_14b1c02d0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 1486d7946 FUN_1486d7946 body=100 status=ok
// SIG undefined FUN_1486d7946(void)

undefined1 FUN_1486d7946(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x70);
    puVar3 = (undefined8 *)(param_2 + 0x70);
    for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_3 + 0xb0);
    param_2 = param_2 + 0xb8;
    param_3 = param_3 + 0xb8;
  }
  return 1;
}



// FUNCTION 1486d79d2 FUN_1486d79d2 body=59 status=ok
// SIG undefined FUN_1486d79d2(void)

undefined8 FUN_1486d79d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d7a6c FUN_1486d7a6c body=55 status=ok
// SIG undefined FUN_1486d7a6c(void)

void FUN_1486d7a6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61128 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61128 = FUN_140002ddd(FUN_1464f13e1,uVar1,L"GbxMomentNodeState_UseCover");
  }
  return;
}



// FUNCTION 1486d7aa4 FUN_1486d7aa4 body=37 status=ok
// SIG undefined FUN_1486d7aa4(void)

void FUN_1486d7aa4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x130);
  FUN_1486d7c40(param_2);
  return;
}



// FUNCTION 1486d7b16 FUN_1486d7b16 body=63 status=ok
// SIG undefined FUN_1486d7b16(void)

undefined1 FUN_1486d7b16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d7d58(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 1486d7b7e FUN_1486d7b7e body=59 status=ok
// SIG undefined FUN_1486d7b7e(void)

undefined8 FUN_1486d7b7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d7bca FUN_1486d7bca body=40 status=ok
// SIG undefined FUN_1486d7bca(void)

void FUN_1486d7bca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x130) == '\x01') {
    FUN_1486d7d02(param_2);
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 1486d7c40 FUN_1486d7c40 body=92 status=ok
// SIG undefined FUN_1486d7c40(void)

undefined8 * FUN_1486d7c40(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1c04f0;
  FUN_14044066a(param_1 + 0x10,0x11,7);
  FUN_14044066a(param_1 + 0x17,0x11,7);
  FUN_14044066a(param_1 + 0x1e,0x14,1);
  *(undefined2 *)(param_1 + 0x25) = 0x100;
  return param_1;
}



// FUNCTION 1486d7c9c FUN_1486d7c9c body=38 status=ok
// SIG undefined FUN_1486d7c9c(void)

undefined8 FUN_1486d7c9c(undefined8 param_1,int param_2)

{
  FUN_1486d7d02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d7cc2 FUN_1486d7cc2 body=55 status=ok
// SIG undefined FUN_1486d7cc2(void)

void FUN_1486d7cc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61140 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61140 = FUN_140002ddd(FUN_1464f1477,uVar1,L"GbxMomentNodeSettings_UsePerch");
  }
  return;
}



// FUNCTION 1486d7d02 FUN_1486d7d02 body=86 status=ok
// SIG undefined FUN_1486d7d02(void)

void FUN_1486d7d02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1c04f0;
  FUN_144a2da94(param_1 + 0x1e);
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486d7d58 FUN_1486d7d58 body=141 status=ok
// SIG undefined FUN_1486d7d58(void)

longlong FUN_1486d7d58(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144983130(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined2 *)(param_1 + 0x128) = *(undefined2 *)(param_2 + 0x128);
  return param_1;
}


