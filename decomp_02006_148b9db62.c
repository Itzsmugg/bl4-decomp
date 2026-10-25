// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b9db62 FUN_148b9db62 body=115 status=ok
// SIG undefined FUN_148b9db62(void)

void FUN_148b9db62(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b9dbd5 FUN_148b9dbd5 body=52 status=ok
// SIG undefined FUN_148b9dbd5(void)

void FUN_148b9dbd5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1418c4518(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148b9dc0a FUN_148b9dc0a body=115 status=ok
// SIG undefined FUN_148b9dc0a(void)

void FUN_148b9dc0a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b9dc7d FUN_148b9dc7d body=44 status=ok
// SIG undefined FUN_148b9dc7d(void)

void FUN_148b9dc7d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148b9dcaa FUN_148b9dcaa body=115 status=ok
// SIG undefined FUN_148b9dcaa(void)

void FUN_148b9dcaa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b9dd1d FUN_148b9dd1d body=52 status=ok
// SIG undefined FUN_148b9dd1d(void)

void FUN_148b9dd1d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b9dd52(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148b9dd52 FUN_148b9dd52 body=71 status=ok
// SIG undefined FUN_148b9dd52(void)

undefined8 * FUN_148b9dd52(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148b9dd9a FUN_148b9dd9a body=115 status=ok
// SIG undefined FUN_148b9dd9a(void)

void FUN_148b9dd9a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b9de0d FUN_148b9de0d body=52 status=ok
// SIG undefined FUN_148b9de0d(void)

void FUN_148b9de0d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486b967a(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148b9de42 FUN_148b9de42 body=90 status=ok
// SIG undefined FUN_148b9de42(void)

void FUN_148b9de42(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b9de9c FUN_148b9de9c body=115 status=ok
// SIG undefined FUN_148b9de9c(void)

void FUN_148b9de9c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b9df0f FUN_148b9df0f body=52 status=ok
// SIG undefined FUN_148b9df0f(void)

void FUN_148b9df0f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b9df44(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148b9df44 FUN_148b9df44 body=71 status=ok
// SIG undefined FUN_148b9df44(void)

undefined8 * FUN_148b9df44(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148b9df8c FUN_148b9df8c body=115 status=ok
// SIG undefined FUN_148b9df8c(void)

void FUN_148b9df8c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b9dfff FUN_148b9dfff body=52 status=ok
// SIG undefined FUN_148b9dfff(void)

void FUN_148b9dfff(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b9e034(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148b9e034 FUN_148b9e034 body=71 status=ok
// SIG undefined FUN_148b9e034(void)

undefined8 * FUN_148b9e034(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148b9e07c FUN_148b9e07c body=115 status=ok
// SIG undefined FUN_148b9e07c(void)

void FUN_148b9e07c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b9e0ef FUN_148b9e0ef body=87 status=ok
// SIG undefined FUN_148b9e0ef(void)

void FUN_148b9e0ef(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar7);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      lVar2 = param_1 + 0x10 + lVar7;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar4;
      *(undefined4 *)(lVar2 + -8) = uVar5;
      *(undefined4 *)(lVar2 + -4) = uVar6;
      bVar3 = *(byte *)(puVar1 + 0x12);
      *(byte *)(lVar2 + 0x38) = bVar3;
      (*(code *)(&PTR_caseD_2_14b1f3420)[bVar3])();
      lVar7 = lVar7 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148b9e1f2 FUN_148b9e1f2 body=60 status=ok
// SIG undefined FUN_148b9e1f2(void)

void FUN_148b9e1f2(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b615bd0;
  FUN_144a5dc74(param_2 + 3);
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 148b9e244 FUN_148b9e244 body=54 status=ok
// SIG undefined FUN_148b9e244(void)

undefined1 FUN_148b9e244(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9e38c(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148b9e2a2 FUN_148b9e2a2 body=59 status=ok
// SIG undefined FUN_148b9e2a2(void)

undefined8 FUN_148b9e2a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9e2e8 FUN_148b9e2e8 body=32 status=ok
// SIG undefined FUN_148b9e2e8(void)

void FUN_148b9e2e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148b9e342(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148b9e342 FUN_148b9e342 body=74 status=ok
// SIG undefined FUN_148b9e342(void)

void FUN_148b9e342(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b615bd0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148b9e38c FUN_148b9e38c body=109 status=ok
// SIG undefined FUN_148b9e38c(void)

longlong FUN_148b9e38c(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  FUN_148b9e3fa(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148b9e3fa FUN_148b9e3fa body=79 status=ok
// SIG undefined FUN_148b9e3fa(void)

undefined8 * FUN_148b9e3fa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_141240f04(param_1,iVar1);
      FUN_141240ed8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b9e44a FUN_148b9e44a body=28 status=ok
// SIG undefined FUN_148b9e44a(void)

undefined8 FUN_148b9e44a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148b9e506 FUN_148b9e506 body=59 status=ok
// SIG undefined FUN_148b9e506(void)

undefined8 FUN_148b9e506(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9e5a6 FUN_148b9e5a6 body=55 status=ok
// SIG undefined FUN_148b9e5a6(void)

void FUN_148b9e5a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba12d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba12d0 = FUN_140002ddd(FUN_1465ae6d1,uVar1,L"GbxCondition_CanReloadOakWeapon");
  }
  return;
}



// FUNCTION 148b9e65e FUN_148b9e65e body=59 status=ok
// SIG undefined FUN_148b9e65e(void)

undefined8 FUN_148b9e65e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9e6fe FUN_148b9e6fe body=55 status=ok
// SIG undefined FUN_148b9e6fe(void)

void FUN_148b9e6fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba12e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba12e8 = FUN_140002ddd(FUN_1465ae767,uVar1,L"GbxCondition_CanUseGadget");
  }
  return;
}



// FUNCTION 148b9e7dc FUN_148b9e7dc body=59 status=ok
// SIG undefined FUN_148b9e7dc(void)

undefined8 FUN_148b9e7dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9e878 FUN_148b9e878 body=55 status=ok
// SIG undefined FUN_148b9e878(void)

void FUN_148b9e878(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1318 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1318 = FUN_140002ddd(FUN_1465ae82d,uVar1,L"GbxCondition_CharacterHealthQuotient");
  }
  return;
}



// FUNCTION 148b9e93a FUN_148b9e93a body=59 status=ok
// SIG undefined FUN_148b9e93a(void)

undefined8 FUN_148b9e93a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9e9da FUN_148b9e9da body=55 status=ok
// SIG undefined FUN_148b9e9da(void)

void FUN_148b9e9da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1330 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1330 = FUN_140002ddd(FUN_1465ae8c3,uVar1,L"GbxCondition_CharacterIsAirborne");
  }
  return;
}



// FUNCTION 148b9ea92 FUN_148b9ea92 body=59 status=ok
// SIG undefined FUN_148b9ea92(void)

undefined8 FUN_148b9ea92(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9eb32 FUN_148b9eb32 body=55 status=ok
// SIG undefined FUN_148b9eb32(void)

void FUN_148b9eb32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1348 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1348 = FUN_140002ddd(FUN_1465ae959,uVar1,L"GbxCondition_CharacterIsInFFYL");
  }
  return;
}



// FUNCTION 148b9ebea FUN_148b9ebea body=59 status=ok
// SIG undefined FUN_148b9ebea(void)

undefined8 FUN_148b9ebea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9ec8a FUN_148b9ec8a body=55 status=ok
// SIG undefined FUN_148b9ec8a(void)

void FUN_148b9ec8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1360 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1360 = FUN_140002ddd(FUN_1465ae9ef,uVar1,L"GbxCondition_CharacterIsSliding");
  }
  return;
}



// FUNCTION 148b9ed2e FUN_148b9ed2e body=59 status=ok
// SIG undefined FUN_148b9ed2e(void)

undefined8 FUN_148b9ed2e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9edc2 FUN_148b9edc2 body=55 status=ok
// SIG undefined FUN_148b9edc2(void)

void FUN_148b9edc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1378 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1378 = FUN_140002ddd(FUN_1465aea85,uVar1,L"GbxCondition_CharacterIsTired");
  }
  return;
}



// FUNCTION 148b9eea0 FUN_148b9eea0 body=59 status=ok
// SIG undefined FUN_148b9eea0(void)

undefined8 FUN_148b9eea0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9ef40 FUN_148b9ef40 body=55 status=ok
// SIG undefined FUN_148b9ef40(void)

void FUN_148b9ef40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba13a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba13a8 = FUN_140002ddd(FUN_1465aeb4b,uVar1,L"GbxCondition_CharacterShieldQuotient");
  }
  return;
}



// FUNCTION 148b9eff8 FUN_148b9eff8 body=59 status=ok
// SIG undefined FUN_148b9eff8(void)

undefined8 FUN_148b9eff8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9f098 FUN_148b9f098 body=55 status=ok
// SIG undefined FUN_148b9f098(void)

void FUN_148b9f098(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba13c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba13c0 = FUN_140002ddd(FUN_1465aebe1,uVar1,L"GbxCondition_HasActiveWeapon");
  }
  return;
}



// FUNCTION 148b9f150 FUN_148b9f150 body=59 status=ok
// SIG undefined FUN_148b9f150(void)

undefined8 FUN_148b9f150(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9f1f0 FUN_148b9f1f0 body=55 status=ok
// SIG undefined FUN_148b9f1f0(void)

void FUN_148b9f1f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba13d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba13d8 = FUN_140002ddd(FUN_1465aec77,uVar1,L"GbxCondition_HasNoWeaponsEquipped");
  }
  return;
}



// FUNCTION 148b9f2a8 FUN_148b9f2a8 body=59 status=ok
// SIG undefined FUN_148b9f2a8(void)

undefined8 FUN_148b9f2a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9f348 FUN_148b9f348 body=55 status=ok
// SIG undefined FUN_148b9f348(void)

void FUN_148b9f348(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba13f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba13f0 = FUN_140002ddd(FUN_1465aed0d,uVar1,L"GbxCondition_HeavyWeaponActivated");
  }
  return;
}



// FUNCTION 148b9f3de FUN_148b9f3de body=68 status=ok
// SIG undefined FUN_148b9f3de(void)

undefined1 FUN_148b9f3de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1465b0808(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b9f44a FUN_148b9f44a body=59 status=ok
// SIG undefined FUN_148b9f44a(void)

undefined8 FUN_148b9f44a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9f4ea FUN_148b9f4ea body=29 status=ok
// SIG undefined FUN_148b9f4ea(void)

undefined8 FUN_148b9f4ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b9f508 FUN_148b9f508 body=55 status=ok
// SIG undefined FUN_148b9f508(void)

void FUN_148b9f508(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1408 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1408 = FUN_140002ddd(FUN_1465aeda3,uVar1,L"GbxCondition_IsCarryingObject");
  }
  return;
}



// FUNCTION 148b9f5ce FUN_148b9f5ce body=59 status=ok
// SIG undefined FUN_148b9f5ce(void)

undefined8 FUN_148b9f5ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9f66e FUN_148b9f66e body=29 status=ok
// SIG undefined FUN_148b9f66e(void)

undefined8 FUN_148b9f66e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b9f68c FUN_148b9f68c body=55 status=ok
// SIG undefined FUN_148b9f68c(void)

void FUN_148b9f68c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1420 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1420 = FUN_140002ddd(FUN_1465aee39,uVar1,L"GbxCondition_IsHaunted");
  }
  return;
}



// FUNCTION 148b9f6f8 FUN_148b9f6f8 body=68 status=ok
// SIG undefined FUN_148b9f6f8(void)

undefined1 FUN_148b9f6f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1460d920c(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b9f764 FUN_148b9f764 body=59 status=ok
// SIG undefined FUN_148b9f764(void)

undefined8 FUN_148b9f764(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9f800 FUN_148b9f800 body=55 status=ok
// SIG undefined FUN_148b9f800(void)

void FUN_148b9f800(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1438 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1438 = FUN_140002ddd(FUN_1465aeecf,uVar1,L"GbxCondition_PersonalVehicleDef");
  }
  return;
}



// FUNCTION 148b9f8c8 FUN_148b9f8c8 body=59 status=ok
// SIG undefined FUN_148b9f8c8(void)

undefined8 FUN_148b9f8c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9f968 FUN_148b9f968 body=55 status=ok
// SIG undefined FUN_148b9f968(void)

void FUN_148b9f968(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1450 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1450 = FUN_140002ddd(FUN_1465aef65,uVar1,L"GbxCondition_PersonalVehicleSeatType");
  }
  return;
}



// FUNCTION 148b9fa20 FUN_148b9fa20 body=59 status=ok
// SIG undefined FUN_148b9fa20(void)

undefined8 FUN_148b9fa20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9fab4 FUN_148b9fab4 body=55 status=ok
// SIG undefined FUN_148b9fab4(void)

void FUN_148b9fab4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1468 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1468 = FUN_140002ddd(FUN_1465aeffb,uVar1,L"GbxCondition_WeaponPartValue");
  }
  return;
}



// FUNCTION 148b9fb76 FUN_148b9fb76 body=59 status=ok
// SIG undefined FUN_148b9fb76(void)

undefined8 FUN_148b9fb76(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9fc16 FUN_148b9fc16 body=55 status=ok
// SIG undefined FUN_148b9fc16(void)

void FUN_148b9fc16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1480 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1480 = FUN_140002ddd(FUN_1465af091,uVar1,L"GbxCondition_WeaponType");
  }
  return;
}



// FUNCTION 148b9fc4e FUN_148b9fc4e body=37 status=ok
// SIG undefined FUN_148b9fc4e(void)

void FUN_148b9fc4e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x110);
  FUN_148b9fdea(param_2);
  return;
}



// FUNCTION 148b9fcc0 FUN_148b9fcc0 body=63 status=ok
// SIG undefined FUN_148b9fcc0(void)

undefined1 FUN_148b9fcc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9ff68(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 148b9fd28 FUN_148b9fd28 body=59 status=ok
// SIG undefined FUN_148b9fd28(void)

undefined8 FUN_148b9fd28(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9fd74 FUN_148b9fd74 body=40 status=ok
// SIG undefined FUN_148b9fd74(void)

void FUN_148b9fd74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_148b9fedc(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 148b9fdea FUN_148b9fdea body=147 status=ok
// SIG undefined FUN_148b9fdea(void)

undefined8 * FUN_148b9fdea(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b6185c0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x7020;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x7021;
  param_1[0x16] = 0;
  FUN_14044066a(param_1 + 0x17,0x11,7);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0x101;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 148b9fe7e FUN_148b9fe7e body=38 status=ok
// SIG undefined FUN_148b9fe7e(void)

undefined8 FUN_148b9fe7e(undefined8 param_1,int param_2)

{
  FUN_148b9fedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b9fea4 FUN_148b9fea4 body=55 status=ok
// SIG undefined FUN_148b9fea4(void)

void FUN_148b9fea4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba16c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba16c0 =
         FUN_140002ddd(FUN_1465af7cb,uVar1,L"GbxMomentNodeSettings_CinematicMissionGrant");
  }
  return;
}



// FUNCTION 148b9fedc FUN_148b9fedc body=97 status=ok
// SIG undefined FUN_148b9fedc(void)

void FUN_148b9fedc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6185c0;
  FUN_148b9ff3d(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_144a2da94(param_1 + 0x17);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 148b9ff3d FUN_148b9ff3d body=42 status=ok
// SIG undefined FUN_148b9ff3d(void)

void FUN_148b9ff3d(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_144a2da94(param_1);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148b9ff68 FUN_148b9ff68 body=273 status=ok
// SIG undefined FUN_148b9ff68(void)

longlong FUN_148b9ff68(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  if ((*(longlong *)(param_1 + 0x88) != *(longlong *)(param_2 + 0x88)) ||
     (*(int *)(param_1 + 0x90) != *(int *)(param_2 + 0x90))) {
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if ((*(longlong *)(param_1 + 0xa0) != *(longlong *)(param_2 + 0xa0)) ||
     (*(int *)(param_1 + 0xa8) != *(int *)(param_2 + 0xa8))) {
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  uVar1 = *(undefined8 *)(param_2 + 0xf6);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf6) = uVar1;
  FUN_148ba007a(param_1 + 0x100,param_2 + 0x100);
  return param_1;
}



// FUNCTION 148ba007a FUN_148ba007a body=95 status=ok
// SIG undefined FUN_148ba007a(void)

undefined8 * FUN_148ba007a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148b9ff3d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ba00da(param_1,iVar1);
      FUN_148ba014d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ba00da FUN_148ba00da body=115 status=ok
// SIG undefined FUN_148ba00da(void)

void FUN_148ba00da(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148ba014d FUN_148ba014d body=76 status=ok
// SIG undefined FUN_148ba014d(void)

void FUN_148ba014d(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_14034cca6(param_1,param_2);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148ba01ce FUN_148ba01ce body=100 status=ok
// SIG undefined FUN_148ba01ce(void)

undefined8 FUN_148ba01ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x70);
    puVar3 = (undefined8 *)(param_2 + 0x70);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_3 + 0xb8);
    param_2 = param_2 + 0xc0;
    param_3 = param_3 + 0xc0;
  }
  return 1;
}



// FUNCTION 148ba025a FUN_148ba025a body=59 status=ok
// SIG undefined FUN_148ba025a(void)

undefined8 FUN_148ba025a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba02f6 FUN_148ba02f6 body=86 status=ok
// SIG undefined FUN_148ba02f6(void)

void FUN_148ba02f6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b618970;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  return;
}



// FUNCTION 148ba034c FUN_148ba034c body=70 status=ok
// SIG undefined FUN_148ba034c(void)

void FUN_148ba034c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b618970;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  return;
}



// FUNCTION 148ba03d6 FUN_148ba03d6 body=206 status=ok
// SIG undefined FUN_148ba03d6(void)

undefined8 FUN_148ba03d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 0x48 + lVar10;
      lVar1 = param_3 + lVar10;
      FUN_144983130(lVar2,lVar1 + 0x48);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar1 + 0xb8);
      *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(lVar1 + 0xc0);
      lVar10 = lVar10 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ba04cc FUN_148ba04cc body=59 status=ok
// SIG undefined FUN_148ba04cc(void)

undefined8 FUN_148ba04cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba056e FUN_148ba056e body=82 status=ok
// SIG undefined FUN_148ba056e(void)

undefined8 * FUN_148ba056e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b618970;
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba05c0 FUN_148ba05c0 body=55 status=ok
// SIG undefined FUN_148ba05c0(void)

void FUN_148ba05c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba16f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba16f0 = FUN_140002ddd(FUN_1465af8f7,uVar1,L"GbxMomentNodeSettings_DeployEcho4");
  }
  return;
}



// FUNCTION 148ba05f8 FUN_148ba05f8 body=79 status=ok
// SIG undefined FUN_148ba05f8(void)

void FUN_148ba05f8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *param_1 = &PTR_FUN_14b618970;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148ba070c FUN_148ba070c body=84 status=ok
// SIG undefined FUN_148ba070c(void)

undefined1 FUN_148ba070c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
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
    param_2 = param_2 + 0x90;
    param_3 = param_3 + 0x90;
  }
  return 1;
}



// FUNCTION 148ba0788 FUN_148ba0788 body=59 status=ok
// SIG undefined FUN_148ba0788(void)

undefined8 FUN_148ba0788(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba0822 FUN_148ba0822 body=55 status=ok
// SIG undefined FUN_148ba0822(void)

void FUN_148ba0822(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1708 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1708 = FUN_140002ddd(FUN_1465af98d,uVar1,L"GbxMomentNodeState_DeployEcho4");
  }
  return;
}



// FUNCTION 148ba085a FUN_148ba085a body=93 status=ok
// SIG undefined FUN_148ba085a(void)

void FUN_148ba085a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b618de0;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  *(undefined1 *)(param_2 + 0x17) = 2;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  return;
}



// FUNCTION 148ba08b8 FUN_148ba08b8 body=77 status=ok
// SIG undefined FUN_148ba08b8(void)

void FUN_148ba08b8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b618de0;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  *(undefined1 *)(param_2 + 0x17) = 2;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  return;
}



// FUNCTION 148ba094a FUN_148ba094a body=199 status=ok
// SIG undefined FUN_148ba094a(void)

undefined8 FUN_148ba094a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar11 = lVar11 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ba0a3a FUN_148ba0a3a body=59 status=ok
// SIG undefined FUN_148ba0a3a(void)

undefined8 FUN_148ba0a3a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba0adc FUN_148ba0adc body=82 status=ok
// SIG undefined FUN_148ba0adc(void)

undefined8 * FUN_148ba0adc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b618de0;
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba0b2e FUN_148ba0b2e body=55 status=ok
// SIG undefined FUN_148ba0b2e(void)

void FUN_148ba0b2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1720 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1720 = FUN_140002ddd(FUN_1465afa23,uVar1,L"GbxMomentNodeSettings_Die");
  }
  return;
}



// FUNCTION 148ba0b6a FUN_148ba0b6a body=79 status=ok
// SIG undefined FUN_148ba0b6a(void)

void FUN_148ba0b6a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *param_1 = &PTR_FUN_14b618de0;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148ba0c64 FUN_148ba0c64 body=62 status=ok
// SIG undefined FUN_148ba0c64(void)

undefined8 FUN_148ba0c64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 148ba0cca FUN_148ba0cca body=59 status=ok
// SIG undefined FUN_148ba0cca(void)

undefined8 FUN_148ba0cca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba0d5e FUN_148ba0d5e body=55 status=ok
// SIG undefined FUN_148ba0d5e(void)

void FUN_148ba0d5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1738 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1738 = FUN_140002ddd(FUN_1465afab9,uVar1,L"GbxMomentNodeState_Die");
  }
  return;
}



// FUNCTION 148ba0d96 FUN_148ba0d96 body=82 status=ok
// SIG undefined FUN_148ba0d96(void)

void FUN_148ba0d96(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b619250;
  *(undefined1 *)(param_2 + 0x10) = 0;
  FUN_14044066a(param_2 + 0x11,0x11,7);
  *(undefined4 *)(param_2 + 0x18) = 0x447a0000;
  return;
}



// FUNCTION 148ba0de8 FUN_148ba0de8 body=66 status=ok
// SIG undefined FUN_148ba0de8(void)

void FUN_148ba0de8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b619250;
  *(undefined1 *)(param_2 + 0x10) = 0;
  FUN_14044066a(param_2 + 0x11,0x11,7);
  *(undefined4 *)(param_2 + 0x18) = 0x447a0000;
  return;
}



// FUNCTION 148ba0e6e FUN_148ba0e6e body=63 status=ok
// SIG undefined FUN_148ba0e6e(void)

undefined1 FUN_148ba0e6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba1006(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148ba0ed6 FUN_148ba0ed6 body=59 status=ok
// SIG undefined FUN_148ba0ed6(void)

undefined8 FUN_148ba0ed6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba0f78 FUN_148ba0f78 body=82 status=ok
// SIG undefined FUN_148ba0f78(void)

undefined8 * FUN_148ba0f78(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b619250;
  FUN_144a2da94(param_1 + 0x11);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba0fca FUN_148ba0fca body=55 status=ok
// SIG undefined FUN_148ba0fca(void)

void FUN_148ba0fca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1750 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1750 = FUN_140002ddd(FUN_1465afb4f,uVar1,L"GbxMomentNodeSettings_EjectDrivers");
  }
  return;
}



// FUNCTION 148ba1006 FUN_148ba1006 body=121 status=ok
// SIG undefined FUN_148ba1006(void)

longlong FUN_148ba1006(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 148ba1080 FUN_148ba1080 body=79 status=ok
// SIG undefined FUN_148ba1080(void)

void FUN_148ba1080(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *param_1 = &PTR_FUN_14b619250;
    FUN_144a2da94(param_1 + 0x11);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148ba1176 FUN_148ba1176 body=54 status=ok
// SIG undefined FUN_148ba1176(void)

undefined1 FUN_148ba1176(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148ba11d4 FUN_148ba11d4 body=59 status=ok
// SIG undefined FUN_148ba11d4(void)

undefined8 FUN_148ba11d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba1268 FUN_148ba1268 body=55 status=ok
// SIG undefined FUN_148ba1268(void)

void FUN_148ba1268(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1768 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1768 = FUN_140002ddd(FUN_1465afbe5,uVar1,L"GbxMomentNodeState_EjectDrivers");
  }
  return;
}



// FUNCTION 148ba12a0 FUN_148ba12a0 body=55 status=ok
// SIG undefined FUN_148ba12a0(void)

void FUN_148ba12a0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b6196c0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 148ba12d8 FUN_148ba12d8 body=39 status=ok
// SIG undefined FUN_148ba12d8(void)

void FUN_148ba12d8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b6196c0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 148ba1344 FUN_148ba1344 body=117 status=ok
// SIG undefined FUN_148ba1344(void)

undefined8 FUN_148ba1344(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_3 + 0x38);
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ba13e2 FUN_148ba13e2 body=59 status=ok
// SIG undefined FUN_148ba13e2(void)

undefined8 FUN_148ba13e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba142e FUN_148ba142e body=57 status=ok
// SIG undefined FUN_148ba142e(void)

void FUN_148ba142e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 148ba14b6 FUN_148ba14b6 body=60 status=ok
// SIG undefined FUN_148ba14b6(void)

undefined8 * FUN_148ba14b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba14f2 FUN_148ba14f2 body=55 status=ok
// SIG undefined FUN_148ba14f2(void)

void FUN_148ba14f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1780 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1780 =
         FUN_140002ddd(FUN_1465afc7b,uVar1,L"GbxMomentNodeSettings_LoadingScreenExtender");
  }
  return;
}



// FUNCTION 148ba15d0 FUN_148ba15d0 body=54 status=ok
// SIG undefined FUN_148ba15d0(void)

undefined1 FUN_148ba15d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148ba162e FUN_148ba162e body=59 status=ok
// SIG undefined FUN_148ba162e(void)

undefined8 FUN_148ba162e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba16c2 FUN_148ba16c2 body=55 status=ok
// SIG undefined FUN_148ba16c2(void)

void FUN_148ba16c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1798 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1798 = FUN_140002ddd(FUN_1465afd11,uVar1,L"GbxMomentNodeState_LoadingScreenExtender");
  }
  return;
}



// FUNCTION 148ba16fa FUN_148ba16fa body=37 status=ok
// SIG undefined FUN_148ba16fa(void)

void FUN_148ba16fa(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf0);
  FUN_148ba1896(param_2);
  return;
}



// FUNCTION 148ba176c FUN_148ba176c body=63 status=ok
// SIG undefined FUN_148ba176c(void)

undefined1 FUN_148ba176c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba1960(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148ba17d4 FUN_148ba17d4 body=59 status=ok
// SIG undefined FUN_148ba17d4(void)

undefined8 FUN_148ba17d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba1820 FUN_148ba1820 body=40 status=ok
// SIG undefined FUN_148ba1820(void)

void FUN_148ba1820(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_148ba2692(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148ba1896 FUN_148ba1896 body=107 status=ok
// SIG undefined FUN_148ba1896(void)

undefined8 * FUN_148ba1896(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b619fa0;
  FUN_14044066a(param_1 + 0x10,0x11,7);
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 3;
  *(char *)(param_1 + 0x1d) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  return param_1;
}



// FUNCTION 148ba1902 FUN_148ba1902 body=38 status=ok
// SIG undefined FUN_148ba1902(void)

undefined8 FUN_148ba1902(undefined8 param_1,int param_2)

{
  FUN_148ba2692();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba1928 FUN_148ba1928 body=55 status=ok
// SIG undefined FUN_148ba1928(void)

void FUN_148ba1928(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba17e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba17e0 = FUN_140002ddd(FUN_1465afda7,uVar1,L"GbxMomentNodeSettings_OakCMG_NodeBase");
  }
  return;
}



// FUNCTION 148ba1960 FUN_148ba1960 body=113 status=ok
// SIG undefined FUN_148ba1960(void)

longlong FUN_148ba1960(longlong param_1,longlong param_2)

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



// FUNCTION 148ba1a7e FUN_148ba1a7e body=76 status=ok
// SIG undefined FUN_148ba1a7e(void)

undefined8 FUN_148ba1a7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0x78);
    param_2 = param_2 + 0x80;
    param_3 = param_3 + 0x80;
  }
  return 1;
}



// FUNCTION 148ba1af2 FUN_148ba1af2 body=59 status=ok
// SIG undefined FUN_148ba1af2(void)

undefined8 FUN_148ba1af2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba1b8c FUN_148ba1b8c body=55 status=ok
// SIG undefined FUN_148ba1b8c(void)

void FUN_148ba1b8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba17f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba17f8 = FUN_140002ddd(FUN_1465afe3f,uVar1,L"GbxMomentNodeState_OakCMG_NodeBase");
  }
  return;
}



// FUNCTION 148ba1bc4 FUN_148ba1bc4 body=58 status=ok
// SIG undefined FUN_148ba1bc4(void)

void FUN_148ba1bc4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf8);
  FUN_148ba1896(param_2);
  *param_2 = &PTR_FUN_14b61a410;
  *(undefined4 *)(param_2 + 0x1e) = 0xffffffff;
  return;
}



// FUNCTION 148ba1bfe FUN_148ba1bfe body=42 status=ok
// SIG undefined FUN_148ba1bfe(void)

void FUN_148ba1bfe(undefined8 param_1,undefined8 *param_2)

{
  FUN_148ba1896(param_2);
  *param_2 = &PTR_FUN_14b61a410;
  *(undefined4 *)(param_2 + 0x1e) = 0xffffffff;
  return;
}



// FUNCTION 148ba1c6c FUN_148ba1c6c body=90 status=ok
// SIG undefined FUN_148ba1c6c(void)

undefined8 FUN_148ba1c6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba1960(param_2,param_3);
    *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(param_3 + 0xf0);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148ba1cee FUN_148ba1cee body=59 status=ok
// SIG undefined FUN_148ba1cee(void)

undefined8 FUN_148ba1cee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba1d3a FUN_148ba1d3a body=40 status=ok
// SIG undefined FUN_148ba1d3a(void)

void FUN_148ba1d3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_148ba2692(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148ba1db0 FUN_148ba1db0 body=38 status=ok
// SIG undefined FUN_148ba1db0(void)

undefined8 FUN_148ba1db0(undefined8 param_1,int param_2)

{
  FUN_148ba2692();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba1dd6 FUN_148ba1dd6 body=55 status=ok
// SIG undefined FUN_148ba1dd6(void)

void FUN_148ba1dd6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1810 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1810 =
         FUN_140002ddd(FUN_1465afed7,uVar1,L"GbxMomentNodeSettings_OakCMG_SetCameraByIndex");
  }
  return;
}



// FUNCTION 148ba1eba FUN_148ba1eba body=76 status=ok
// SIG undefined FUN_148ba1eba(void)

undefined8 FUN_148ba1eba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0x78);
    param_2 = param_2 + 0x80;
    param_3 = param_3 + 0x80;
  }
  return 1;
}



// FUNCTION 148ba1f2e FUN_148ba1f2e body=59 status=ok
// SIG undefined FUN_148ba1f2e(void)

undefined8 FUN_148ba1f2e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba1fc8 FUN_148ba1fc8 body=55 status=ok
// SIG undefined FUN_148ba1fc8(void)

void FUN_148ba1fc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1828 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1828 = FUN_140002ddd(FUN_1465aff6d,uVar1,L"GbxMomentNodeState_OakCMG_SetCameraByIndex")
    ;
  }
  return;
}



// FUNCTION 148ba2000 FUN_148ba2000 body=59 status=ok
// SIG undefined FUN_148ba2000(void)

void FUN_148ba2000(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf8);
  FUN_148ba1896(param_2);
  *param_2 = &PTR_FUN_14b61a880;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 148ba203c FUN_148ba203c body=43 status=ok
// SIG undefined FUN_148ba203c(void)

void FUN_148ba203c(undefined8 param_1,undefined8 *param_2)

{
  FUN_148ba1896(param_2);
  *param_2 = &PTR_FUN_14b61a880;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 148ba20ac FUN_148ba20ac body=92 status=ok
// SIG undefined FUN_148ba20ac(void)

undefined8 FUN_148ba20ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba1960(param_2,param_3);
    *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_3 + 0xf0);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148ba2130 FUN_148ba2130 body=59 status=ok
// SIG undefined FUN_148ba2130(void)

undefined8 FUN_148ba2130(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba217c FUN_148ba217c body=40 status=ok
// SIG undefined FUN_148ba217c(void)

void FUN_148ba217c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_148ba2692(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148ba21f2 FUN_148ba21f2 body=38 status=ok
// SIG undefined FUN_148ba21f2(void)

undefined8 FUN_148ba21f2(undefined8 param_1,int param_2)

{
  FUN_148ba2692();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba2218 FUN_148ba2218 body=55 status=ok
// SIG undefined FUN_148ba2218(void)

void FUN_148ba2218(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1840 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1840 =
         FUN_140002ddd(FUN_1465b0003,uVar1,L"GbxMomentNodeSettings_OakCMG_SetCameraByName");
  }
  return;
}



// FUNCTION 148ba22fc FUN_148ba22fc body=76 status=ok
// SIG undefined FUN_148ba22fc(void)

undefined8 FUN_148ba22fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0x78);
    param_2 = param_2 + 0x80;
    param_3 = param_3 + 0x80;
  }
  return 1;
}



// FUNCTION 148ba2370 FUN_148ba2370 body=59 status=ok
// SIG undefined FUN_148ba2370(void)

undefined8 FUN_148ba2370(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba240a FUN_148ba240a body=55 status=ok
// SIG undefined FUN_148ba240a(void)

void FUN_148ba240a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1858 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1858 = FUN_140002ddd(FUN_1465b0099,uVar1,L"GbxMomentNodeState_OakCMG_SetCameraByName");
  }
  return;
}



// FUNCTION 148ba2442 FUN_148ba2442 body=59 status=ok
// SIG undefined FUN_148ba2442(void)

void FUN_148ba2442(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf8);
  FUN_148ba1896(param_2);
  *param_2 = &PTR_FUN_14b61acf0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 148ba247e FUN_148ba247e body=43 status=ok
// SIG undefined FUN_148ba247e(void)

void FUN_148ba247e(undefined8 param_1,undefined8 *param_2)

{
  FUN_148ba1896(param_2);
  *param_2 = &PTR_FUN_14b61acf0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 148ba24ee FUN_148ba24ee body=92 status=ok
// SIG undefined FUN_148ba24ee(void)

undefined8 FUN_148ba24ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba1960(param_2,param_3);
    *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_3 + 0xf0);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148ba2572 FUN_148ba2572 body=59 status=ok
// SIG undefined FUN_148ba2572(void)

undefined8 FUN_148ba2572(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba25be FUN_148ba25be body=40 status=ok
// SIG undefined FUN_148ba25be(void)

void FUN_148ba25be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_148ba2692(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148ba2634 FUN_148ba2634 body=38 status=ok
// SIG undefined FUN_148ba2634(void)

undefined8 FUN_148ba2634(undefined8 param_1,int param_2)

{
  FUN_148ba2692();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba265a FUN_148ba265a body=55 status=ok
// SIG undefined FUN_148ba265a(void)

void FUN_148ba265a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1870 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1870 = FUN_140002ddd(FUN_1465b012f,uVar1,L"GbxMomentNodeSettings_OakCMG_CallEvent");
  }
  return;
}



// FUNCTION 148ba2692 FUN_148ba2692 body=74 status=ok
// SIG undefined FUN_148ba2692(void)

void FUN_148ba2692(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b619fa0;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 148ba278a FUN_148ba278a body=76 status=ok
// SIG undefined FUN_148ba278a(void)

undefined8 FUN_148ba278a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0x78);
    param_2 = param_2 + 0x80;
    param_3 = param_3 + 0x80;
  }
  return 1;
}



// FUNCTION 148ba27fe FUN_148ba27fe body=59 status=ok
// SIG undefined FUN_148ba27fe(void)

undefined8 FUN_148ba27fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba2898 FUN_148ba2898 body=55 status=ok
// SIG undefined FUN_148ba2898(void)

void FUN_148ba2898(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1888 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1888 = FUN_140002ddd(FUN_1465b01c5,uVar1,L"GbxMomentNodeState_OakCMGCallEvent");
  }
  return;
}



// FUNCTION 148ba28d0 FUN_148ba28d0 body=99 status=ok
// SIG undefined FUN_148ba28d0(void)

void FUN_148ba28d0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b3350;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  *param_2 = &PTR_FUN_14b61b160;
  *(undefined1 *)(param_2 + 0x1e) = 1;
  return;
}



// FUNCTION 148ba2934 FUN_148ba2934 body=83 status=ok
// SIG undefined FUN_148ba2934(void)

void FUN_148ba2934(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b3350;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  *param_2 = &PTR_FUN_14b61b160;
  *(undefined1 *)(param_2 + 0x1e) = 1;
  return;
}



// FUNCTION 148ba29cc FUN_148ba29cc body=74 status=ok
// SIG undefined FUN_148ba29cc(void)

undefined1 FUN_148ba29cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ce5e0(param_2,param_3);
    *(undefined1 *)(param_2 + 0xf0) = *(undefined1 *)(param_3 + 0xf0);
    param_2 = param_2 + 0xf8;
    param_3 = param_3 + 0xf8;
  }
  return 1;
}



// FUNCTION 148ba2a3e FUN_148ba2a3e body=59 status=ok
// SIG undefined FUN_148ba2a3e(void)

undefined8 FUN_148ba2a3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba2a8a FUN_148ba2a8a body=40 status=ok
// SIG undefined FUN_148ba2a8a(void)

void FUN_148ba2a8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_1486ce596(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148ba2b00 FUN_148ba2b00 body=38 status=ok
// SIG undefined FUN_148ba2b00(void)

undefined8 FUN_148ba2b00(undefined8 param_1,int param_2)

{
  FUN_1486ce596();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba2b26 FUN_148ba2b26 body=55 status=ok
// SIG undefined FUN_148ba2b26(void)

void FUN_148ba2b26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba18a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba18a0 = FUN_140002ddd(FUN_1465b025b,uVar1,L"GbxMomentNodeSettings_OakMoveTo");
  }
  return;
}



// FUNCTION 148ba2b5e FUN_148ba2b5e body=102 status=ok
// SIG undefined FUN_148ba2b5e(void)

void FUN_148ba2b5e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xc0);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *param_2 = &PTR_FUN_14b61b3b0;
  return;
}



// FUNCTION 148ba2c46 FUN_148ba2c46 body=63 status=ok
// SIG undefined FUN_148ba2c46(void)

undefined1 FUN_148ba2c46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ce8c6(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148ba2cae FUN_148ba2cae body=59 status=ok
// SIG undefined FUN_148ba2cae(void)

undefined8 FUN_148ba2cae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba2cfa FUN_148ba2cfa body=38 status=ok
// SIG undefined FUN_148ba2cfa(void)

void FUN_148ba2cfa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_143c5c33e(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148ba2d6e FUN_148ba2d6e body=38 status=ok
// SIG undefined FUN_148ba2d6e(void)

undefined8 FUN_148ba2d6e(undefined8 param_1,int param_2)

{
  FUN_143c5c33e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba2d94 FUN_148ba2d94 body=55 status=ok
// SIG undefined FUN_148ba2d94(void)

void FUN_148ba2d94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba18b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba18b8 = FUN_140002ddd(FUN_1465b02f1,uVar1,L"GbxMomentNodeState_OakMoveTo");
  }
  return;
}



// FUNCTION 148ba2dcc FUN_148ba2dcc body=87 status=ok
// SIG undefined FUN_148ba2dcc(void)

void FUN_148ba2dcc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146221950(param_2);
  *param_2 = &PTR_FUN_14b61b5e0;
  param_2[0x6d] = 0;
  param_2[0x6e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x371) = 0;
  *(undefined8 *)((longlong)param_2 + 0x379) = 0;
  *(undefined2 *)((longlong)param_2 + 0x381) = 0x101;
  *(undefined4 *)((longlong)param_2 + 900) = 0x3f800000;
  FUN_14044066a(param_2 + 0x71,0x11,7);
  return;
}



// FUNCTION 148ba2e4c FUN_148ba2e4c body=122 status=ok
// SIG undefined FUN_148ba2e4c(void)

undefined8 FUN_148ba2e4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cf4fa(param_2,param_3);
    FUN_1418c3a72(param_2 + 0x368,param_3 + 0x368);
    *(undefined8 *)(param_2 + 0x380) = *(undefined8 *)(param_3 + 0x380);
    FUN_144983130(param_2 + 0x388,param_3 + 0x388);
    param_2 = param_2 + 0x3c0;
    param_3 = param_3 + 0x3c0;
  }
  return 1;
}



// FUNCTION 148ba2eee FUN_148ba2eee body=59 status=ok
// SIG undefined FUN_148ba2eee(void)

undefined8 FUN_148ba2eee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba2f3a FUN_148ba2f3a body=62 status=ok
// SIG undefined FUN_148ba2f3a(void)

void FUN_148ba2f3a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    *param_2 = &PTR_FUN_14b61b5e0;
    FUN_144a2da94(param_2 + 0x71);
    FUN_1460b39ba(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148ba2fc6 FUN_148ba2fc6 body=57 status=ok
// SIG undefined FUN_148ba2fc6(void)

void FUN_148ba2fc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba18d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba18d0 = FUN_140002ddd(FUN_1465b0387,uVar1,L"GbxMomentNodeSettings_OakPlayCutscene");
  }
  return;
}



// FUNCTION 148ba302c FUN_148ba302c body=212 status=ok
// SIG undefined FUN_148ba302c(void)

undefined8 FUN_148ba302c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cf910(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1a4);
    uVar2 = *(undefined4 *)(param_3 + 0x1a8);
    uVar3 = *(undefined4 *)(param_3 + 0x1ac);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a4) = uVar1;
    *(undefined4 *)(param_2 + 0x1a8) = uVar2;
    *(undefined4 *)(param_2 + 0x1ac) = uVar3;
    *(undefined1 *)(param_2 + 0x1b0) = *(undefined1 *)(param_3 + 0x1b0);
    FUN_148ba31ca(param_2 + 0x1c0,param_3 + 0x1c0);
    *(undefined4 *)(param_2 + 0x2c0) = *(undefined4 *)(param_3 + 0x2c0);
    uVar1 = *(undefined4 *)(param_3 + 0x2c8);
    uVar2 = *(undefined4 *)(param_3 + 0x2cc);
    uVar3 = *(undefined4 *)(param_3 + 0x2d0);
    uVar4 = *(undefined4 *)(param_3 + 0x2d4);
    uVar5 = *(undefined4 *)(param_3 + 0x2dc);
    uVar6 = *(undefined4 *)(param_3 + 0x2e0);
    uVar7 = *(undefined4 *)(param_3 + 0x2e4);
    *(undefined4 *)(param_2 + 0x2d8) = *(undefined4 *)(param_3 + 0x2d8);
    *(undefined4 *)(param_2 + 0x2dc) = uVar5;
    *(undefined4 *)(param_2 + 0x2e0) = uVar6;
    *(undefined4 *)(param_2 + 0x2e4) = uVar7;
    *(undefined4 *)(param_2 + 0x2c8) = uVar1;
    *(undefined4 *)(param_2 + 0x2cc) = uVar2;
    *(undefined4 *)(param_2 + 0x2d0) = uVar3;
    *(undefined4 *)(param_2 + 0x2d4) = uVar4;
    *(undefined8 *)(param_2 + 0x2e8) = *(undefined8 *)(param_3 + 0x2e8);
    *(undefined4 *)(param_2 + 0x2f0) = *(undefined4 *)(param_3 + 0x2f0);
    FUN_1447715ec(param_2 + 0x2f8,param_3 + 0x2f8);
    param_2 = param_2 + 800;
    param_3 = param_3 + 800;
  }
  return 1;
}



// FUNCTION 148ba3128 FUN_148ba3128 body=59 status=ok
// SIG undefined FUN_148ba3128(void)

undefined8 FUN_148ba3128(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba31ca FUN_148ba31ca body=96 status=ok
// SIG undefined FUN_148ba31ca(void)

undefined8 * FUN_148ba31ca(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_1462592f8(param_1 + 2,param_2 + 2);
  FUN_148ba322a(param_1 + 0x1e,param_2 + 0x1e);
  return param_1;
}



// FUNCTION 148ba322a FUN_148ba322a body=88 status=ok
// SIG undefined FUN_148ba322a(void)

undefined8 * FUN_148ba322a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148ba3282(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ba3282 FUN_148ba3282 body=98 status=ok
// SIG undefined FUN_148ba3282(void)

void FUN_148ba3282(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148ba32e6 FUN_148ba32e6 body=81 status=ok
// SIG undefined FUN_148ba32e6(void)

void FUN_148ba32e6(undefined8 *param_1)

{
  if (*(char *)(param_1 + 100) == '\x01') {
    *param_1 = &PTR_FUN_14b61b850;
    if (param_1[0x62] != 0) {
      FUN_1400020a8();
    }
    FUN_1461fcfc0(param_1 + 0x38);
    FUN_14129efe4(param_1);
    *(undefined1 *)(param_1 + 100) = 0;
  }
  return;
}



// FUNCTION 148ba335c FUN_148ba335c body=55 status=ok
// SIG undefined FUN_148ba335c(void)

void FUN_148ba335c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1bb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1bb8 = FUN_14171c317(FUN_1465b15b1,uVar1,L"EGbxRewardExperienceOp");
  }
  return;
}



// FUNCTION 148ba3394 FUN_148ba3394 body=230 status=ok
// SIG undefined FUN_148ba3394(void)

void FUN_148ba3394(undefined8 param_1,longlong param_2)

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
  FUN_148dcfd72(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba347c FUN_148ba347c body=308 status=ok
// SIG undefined FUN_148ba347c(void)

void FUN_148ba347c(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
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
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uStack_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  FUN_148dd01ec(&local_58,uVar1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba35b2 FUN_148ba35b2 body=157 status=ok
// SIG undefined FUN_148ba35b2(void)

void FUN_148ba35b2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148dcfcfe(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba3650 FUN_148ba3650 body=157 status=ok
// SIG undefined FUN_148ba3650(void)

void FUN_148ba3650(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148dcfc8a(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba36ee FUN_148ba36ee body=207 status=ok
// SIG undefined FUN_148ba36ee(void)

void FUN_148ba36ee(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
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
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uVar1 = FUN_148dd0170();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba37be FUN_148ba37be body=207 status=ok
// SIG undefined FUN_148ba37be(void)

void FUN_148ba37be(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
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
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uVar1 = FUN_148dd00f4();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba388e FUN_148ba388e body=157 status=ok
// SIG undefined FUN_148ba388e(void)

void FUN_148ba388e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148dcfe3a(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba392c FUN_148ba392c body=157 status=ok
// SIG undefined FUN_148ba392c(void)

void FUN_148ba392c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148dcfeae(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba39ca FUN_148ba39ca body=207 status=ok
// SIG undefined FUN_148ba39ca(void)

void FUN_148ba39ca(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
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
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uVar1 = FUN_148dd03a6();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba3a9a FUN_148ba3a9a body=207 status=ok
// SIG undefined FUN_148ba3a9a(void)

void FUN_148ba3a9a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
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
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uVar1 = FUN_148dd032a();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba3b6a FUN_148ba3b6a body=198 status=ok
// SIG undefined FUN_148ba3b6a(void)

void FUN_148ba3b6a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
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
  local_40 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = (undefined4)uStack_20;
  uStack_34 = uStack_20._4_4_;
  uStack_30 = (undefined4)local_18;
  uStack_2c = local_18._4_4_;
  FUN_148dd0422();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba3c32 FUN_148ba3c32 body=230 status=ok
// SIG undefined FUN_148ba3c32(void)

void FUN_148ba3c32(undefined8 param_1,longlong param_2)

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
  FUN_148dcfc26(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba3d1a FUN_148ba3d1a body=308 status=ok
// SIG undefined FUN_148ba3d1a(void)

void FUN_148ba3d1a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
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
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uStack_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  FUN_148dd005a(&local_58,uVar1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba3e50 FUN_148ba3e50 body=391 status=ok
// SIG undefined FUN_148ba3e50(void)

void FUN_148ba3e50(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4d;
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  uVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_4d);
  local_68 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  uStack_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  FUN_148dcff22(&local_68,uVar1,uVar2 & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba3fd8 FUN_148ba3fd8 body=317 status=ok
// SIG undefined FUN_148ba3fd8(void)

void FUN_148ba3fd8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [43];
  undefined1 local_1d;
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
  local_1d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148dcfdd6(local_18,local_1c,local_1d);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba4116 FUN_148ba4116 body=391 status=ok
// SIG undefined FUN_148ba4116(void)

void FUN_148ba4116(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4d;
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  uVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_4d);
  local_68 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  uStack_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  FUN_148dd0286(&local_68,uVar1,uVar2 & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba42aa FUN_148ba42aa body=814 status=ok
// SIG undefined FUN_148ba42aa(void)

void FUN_148ba42aa(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 local_269;
  longlong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined **local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined8 uStack_18f;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_268);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_268);
  }
  local_250 = &PTR_FUN_14b322ee0;
  local_248 = 0;
  local_240 = 0x34002;
  local_170 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  uStack_1dc = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_197 = 0;
  uStack_190 = 0;
  uStack_18f = 0;
  local_184 = 0;
  uStack_17c = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0x3002;
  local_140 = 0;
  local_108 = 0;
  local_100 = 0x200000000;
  local_f8 = 0;
  local_f0 = 0x3f800000;
  local_e8 = 0;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0xf00000d0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7c = 0xbf800000;
  FUN_1405c5fa2();
  local_70 = &DAT_14cb769e8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = &PTR_FUN_14b0394b0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_250);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_250);
  }
  pppuVar2 = *(undefined ****)(param_2 + 0x38);
  local_269 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_269);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_269);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_269);
  local_288 = local_268;
  if ((local_268 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if (pppuVar2 == (undefined ***)0x0) {
    pppuVar2 = &local_250;
  }
  local_280 = (undefined4)uStack_260;
  uStack_27c = uStack_260._4_4_;
  uStack_278 = (undefined4)local_258;
  uStack_274 = local_258._4_4_;
  FUN_148dcc0d8(&local_288,pppuVar2,uVar1 & 0xffffffff);
  FUN_140df0e32(&local_250);
  if ((local_30 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba45dc FUN_148ba45dc body=83 status=ok
// SIG undefined FUN_148ba45dc(void)

void FUN_148ba45dc(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1bf7a0;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  *param_2 = &PTR_FUN_14b6221b0;
  *(undefined1 *)(param_2 + 0x1e) = 1;
  return;
}



// FUNCTION 148ba4658 FUN_148ba4658 body=74 status=ok
// SIG undefined FUN_148ba4658(void)

undefined1 FUN_148ba4658(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d6994(param_2,param_3);
    *(undefined1 *)(param_2 + 0xf0) = *(undefined1 *)(param_3 + 0xf0);
    param_2 = param_2 + 0xf8;
    param_3 = param_3 + 0xf8;
  }
  return 1;
}



// FUNCTION 148ba46ca FUN_148ba46ca body=59 status=ok
// SIG undefined FUN_148ba46ca(void)

undefined8 FUN_148ba46ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba4716 FUN_148ba4716 body=40 status=ok
// SIG undefined FUN_148ba4716(void)

void FUN_148ba4716(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_145c15f92(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148ba478c FUN_148ba478c body=57 status=ok
// SIG undefined FUN_148ba478c(void)

void FUN_148ba478c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1940 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1940 = FUN_140002ddd(FUN_1465b0bcf,uVar1,L"GbxMomentNodeSettings_OakTravelToAINode");
  }
  return;
}



// FUNCTION 148ba47c6 FUN_148ba47c6 body=32 status=ok
// SIG undefined FUN_148ba47c6(void)

void FUN_148ba47c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c9fb20(param_2);
  *param_2 = &PTR_FUN_14b622400;
  return;
}



// FUNCTION 148ba480a FUN_148ba480a body=125 status=ok
// SIG undefined FUN_148ba480a(void)

undefined8 FUN_148ba480a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148ba48b0 FUN_148ba48b0 body=59 status=ok
// SIG undefined FUN_148ba48b0(void)

undefined8 FUN_148ba48b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba48fc FUN_148ba48fc body=38 status=ok
// SIG undefined FUN_148ba48fc(void)

void FUN_148ba48fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1415314e4(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148ba4972 FUN_148ba4972 body=62 status=ok
// SIG undefined FUN_148ba4972(void)

void FUN_148ba4972(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b622620;
  param_2[0x10] = DAT_14caa8578;
  return;
}



// FUNCTION 148ba49b0 FUN_148ba49b0 body=46 status=ok
// SIG undefined FUN_148ba49b0(void)

void FUN_148ba49b0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b622620;
  param_2[0x10] = DAT_14caa8578;
  return;
}



// FUNCTION 148ba4a22 FUN_148ba4a22 body=119 status=ok
// SIG undefined FUN_148ba4a22(void)

undefined8 FUN_148ba4a22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148ba4ac2 FUN_148ba4ac2 body=59 status=ok
// SIG undefined FUN_148ba4ac2(void)

undefined8 FUN_148ba4ac2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba4b0e FUN_148ba4b0e body=57 status=ok
// SIG undefined FUN_148ba4b0e(void)

void FUN_148ba4b0e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 148ba4b96 FUN_148ba4b96 body=60 status=ok
// SIG undefined FUN_148ba4b96(void)

undefined8 * FUN_148ba4b96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba4bd2 FUN_148ba4bd2 body=55 status=ok
// SIG undefined FUN_148ba4bd2(void)

void FUN_148ba4bd2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1970 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1970 = FUN_140002ddd(FUN_1465b0cc5,uVar1,L"GbxMomentNodeSettings_PlayCredits");
  }
  return;
}



// FUNCTION 148ba4cbc FUN_148ba4cbc body=62 status=ok
// SIG undefined FUN_148ba4cbc(void)

undefined8 FUN_148ba4cbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 148ba4d22 FUN_148ba4d22 body=59 status=ok
// SIG undefined FUN_148ba4d22(void)

undefined8 FUN_148ba4d22(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba4db6 FUN_148ba4db6 body=55 status=ok
// SIG undefined FUN_148ba4db6(void)

void FUN_148ba4db6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1988 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1988 = FUN_140002ddd(FUN_1465b0d5b,uVar1,L"GbxMomentNodeState_PlayCredits");
  }
  return;
}



// FUNCTION 148ba4dee FUN_148ba4dee body=72 status=ok
// SIG undefined FUN_148ba4dee(void)

void FUN_148ba4dee(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xa8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b622a90;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 148ba4e36 FUN_148ba4e36 body=56 status=ok
// SIG undefined FUN_148ba4e36(void)

void FUN_148ba4e36(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b622a90;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 148ba4eb2 FUN_148ba4eb2 body=63 status=ok
// SIG undefined FUN_148ba4eb2(void)

undefined1 FUN_148ba4eb2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba5096(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148ba4f1a FUN_148ba4f1a body=59 status=ok
// SIG undefined FUN_148ba4f1a(void)

undefined8 FUN_148ba4f1a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba4f66 FUN_148ba4f66 body=40 status=ok
// SIG undefined FUN_148ba4f66(void)

void FUN_148ba4f66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_148ba5042(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148ba4fdc FUN_148ba4fdc body=38 status=ok
// SIG undefined FUN_148ba4fdc(void)

undefined8 FUN_148ba4fdc(undefined8 param_1,int param_2)

{
  FUN_148ba5042();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba5002 FUN_148ba5002 body=55 status=ok
// SIG undefined FUN_148ba5002(void)

void FUN_148ba5002(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba19a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba19a0 = FUN_140002ddd(FUN_1465b0df1,uVar1,L"GbxMomentNodeSettings_PlayMovie");
  }
  return;
}



// FUNCTION 148ba5042 FUN_148ba5042 body=84 status=ok
// SIG undefined FUN_148ba5042(void)

void FUN_148ba5042(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b622a90;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 148ba5096 FUN_148ba5096 body=125 status=ok
// SIG undefined FUN_148ba5096(void)

longlong FUN_148ba5096(longlong param_1,longlong param_2)

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
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  FUN_144a787a6(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 148ba5148 FUN_148ba5148 body=60 status=ok
// SIG undefined FUN_148ba5148(void)

undefined8 FUN_148ba5148(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 148ba51ac FUN_148ba51ac body=59 status=ok
// SIG undefined FUN_148ba51ac(void)

undefined8 FUN_148ba51ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba5242 FUN_148ba5242 body=84 status=ok
// SIG undefined FUN_148ba5242(void)

void FUN_148ba5242(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b622e40;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  return;
}



// FUNCTION 148ba5296 FUN_148ba5296 body=68 status=ok
// SIG undefined FUN_148ba5296(void)

void FUN_148ba5296(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b622e40;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  return;
}



// FUNCTION 148ba531e FUN_148ba531e body=63 status=ok
// SIG undefined FUN_148ba531e(void)

undefined1 FUN_148ba531e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba54f0(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148ba5386 FUN_148ba5386 body=59 status=ok
// SIG undefined FUN_148ba5386(void)

undefined8 FUN_148ba5386(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba53d2 FUN_148ba53d2 body=40 status=ok
// SIG undefined FUN_148ba53d2(void)

void FUN_148ba53d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_148ba54a6(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148ba5448 FUN_148ba5448 body=38 status=ok
// SIG undefined FUN_148ba5448(void)

undefined8 FUN_148ba5448(undefined8 param_1,int param_2)

{
  FUN_148ba54a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba546e FUN_148ba546e body=55 status=ok
// SIG undefined FUN_148ba546e(void)

void FUN_148ba546e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba19d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba19d0 = FUN_140002ddd(FUN_1465b0f1d,uVar1,L"GbxMomentNodeSettings_ReviveAlly");
  }
  return;
}



// FUNCTION 148ba54a6 FUN_148ba54a6 body=74 status=ok
// SIG undefined FUN_148ba54a6(void)

void FUN_148ba54a6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b622e40;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 148ba54f0 FUN_148ba54f0 body=113 status=ok
// SIG undefined FUN_148ba54f0(void)

longlong FUN_148ba54f0(longlong param_1,longlong param_2)

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



// FUNCTION 148ba562c FUN_148ba562c body=96 status=ok
// SIG undefined FUN_148ba562c(void)

undefined1 FUN_148ba562c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
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
    *(undefined1 *)(param_2 + 0x90) = *(undefined1 *)(param_3 + 0x90);
    param_2 = param_2 + 0x98;
    param_3 = param_3 + 0x98;
  }
  return 1;
}



// FUNCTION 148ba56b4 FUN_148ba56b4 body=59 status=ok
// SIG undefined FUN_148ba56b4(void)

undefined8 FUN_148ba56b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba574e FUN_148ba574e body=55 status=ok
// SIG undefined FUN_148ba574e(void)

void FUN_148ba574e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba19e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba19e8 = FUN_140002ddd(FUN_1465b0fb3,uVar1,L"GbxMomentNodeState_ReviveAlly");
  }
  return;
}



// FUNCTION 148ba5786 FUN_148ba5786 body=76 status=ok
// SIG undefined FUN_148ba5786(void)

void FUN_148ba5786(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b6232b0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0x6000;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148ba57d2 FUN_148ba57d2 body=58 status=ok
// SIG undefined FUN_148ba57d2(void)

void FUN_148ba57d2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b6232b0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0x6000;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148ba5850 FUN_148ba5850 body=63 status=ok
// SIG undefined FUN_148ba5850(void)

undefined1 FUN_148ba5850(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba5a00(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148ba58b8 FUN_148ba58b8 body=59 status=ok
// SIG undefined FUN_148ba58b8(void)

undefined8 FUN_148ba58b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


