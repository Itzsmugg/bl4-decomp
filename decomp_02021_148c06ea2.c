// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c06ea2 FUN_148c06ea2 body=59 status=ok
// SIG undefined FUN_148c06ea2(void)

undefined8 FUN_148c06ea2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c06fb0 FUN_148c06fb0 body=131 status=ok
// SIG undefined FUN_148c06fb0(void)

undefined8 FUN_148c06fb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar7);
      lVar3 = param_2 + 0x18 + lVar7;
      *(undefined8 *)(lVar3 + -0x18) = *puVar1;
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar5 = *(undefined4 *)(puVar1 + 2);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar3 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar3 + -0xc) = uVar4;
      *(undefined4 *)(lVar3 + -8) = uVar5;
      *(undefined4 *)(lVar3 + -4) = uVar6;
      FUN_144a787a6();
      lVar3 = param_3 + lVar7;
      lVar2 = param_2 + lVar7;
      FUN_148c07116(lVar2 + 0x28,lVar3 + 0x28);
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar3 + 0x40);
      *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar3 + 0x48);
      lVar7 = lVar7 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c0705c FUN_148c0705c body=59 status=ok
// SIG undefined FUN_148c0705c(void)

undefined8 FUN_148c0705c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c070a2 FUN_148c070a2 body=38 status=ok
// SIG undefined FUN_148c070a2(void)

void FUN_148c070a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c07116 FUN_148c07116 body=84 status=ok
// SIG undefined FUN_148c07116(void)

longlong * FUN_148c07116(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c071d0 FUN_148c071d0 body=63 status=ok
// SIG undefined FUN_148c071d0(void)

undefined1 FUN_148c071d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c072e2(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148c07238 FUN_148c07238 body=59 status=ok
// SIG undefined FUN_148c07238(void)

undefined8 FUN_148c07238(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c07284 FUN_148c07284 body=38 status=ok
// SIG undefined FUN_148c07284(void)

void FUN_148c07284(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_148c07512(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148c072e2 FUN_148c072e2 body=155 status=ok
// SIG undefined FUN_148c072e2(void)

longlong FUN_148c072e2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148c0737e(param_1 + 0x18,param_2 + 0x18);
  FUN_148bc38f0(param_1 + 0x28,param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148c0737e FUN_148c0737e body=93 status=ok
// SIG undefined FUN_148c0737e(void)

undefined8 * FUN_148c0737e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e426bc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c073dc(param_1,iVar1);
      FUN_148c0744f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c073dc FUN_148c073dc body=115 status=ok
// SIG undefined FUN_148c073dc(void)

void FUN_148c073dc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c0744f FUN_148c0744f body=52 status=ok
// SIG undefined FUN_148c0744f(void)

void FUN_148c0744f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c07484(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148c07484 FUN_148c07484 body=140 status=ok
// SIG undefined FUN_148c07484(void)

undefined8 * FUN_148c07484(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  FUN_148bc39e8(param_1 + 5,param_2 + 5);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  return param_1;
}



// FUNCTION 148c07512 FUN_148c07512 body=122 status=ok
// SIG undefined FUN_148c07512(void)

void FUN_148c07512(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b72c590;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140e426bc(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c07612 FUN_148c07612 body=152 status=ok
// SIG undefined FUN_148c07612(void)

undefined8 FUN_148c07612(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_141289ada(param_2 + lVar6 + 8,param_3 + lVar6 + 8);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_148c07832(lVar1 + 0x18,lVar2 + 0x18);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      uVar3 = *(undefined4 *)(lVar2 + 0x34);
      uVar4 = *(undefined4 *)(lVar2 + 0x38);
      uVar5 = *(undefined4 *)(lVar2 + 0x3c);
      *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
      *(undefined4 *)(lVar1 + 0x34) = uVar3;
      *(undefined4 *)(lVar1 + 0x38) = uVar4;
      *(undefined4 *)(lVar1 + 0x3c) = uVar5;
      lVar1 = param_2 + 0x40 + lVar6;
      FUN_144a787a6(lVar1,param_3 + lVar6 + 0x40);
      *(undefined1 *)(lVar1 + 0x10) = *(undefined1 *)(param_3 + lVar6 + 0x50);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c076d2 FUN_148c076d2 body=59 status=ok
// SIG undefined FUN_148c076d2(void)

undefined8 FUN_148c076d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c07718 FUN_148c07718 body=32 status=ok
// SIG undefined FUN_148c07718(void)

void FUN_148c07718(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148c077e6(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c0777e FUN_148c0777e body=38 status=ok
// SIG undefined FUN_148c0777e(void)

undefined8 FUN_148c0777e(undefined8 param_1,int param_2)

{
  FUN_148c077e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c077a4 FUN_148c077a4 body=55 status=ok
// SIG undefined FUN_148c077a4(void)

void FUN_148c077a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9440 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9440 = FUN_140002ddd(FUN_1465d39b4,uVar1,L"OakCritterDef");
  }
  return;
}



// FUNCTION 148c077e6 FUN_148c077e6 body=75 status=ok
// SIG undefined FUN_148c077e6(void)

void FUN_148c077e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b72e020;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c07832 FUN_148c07832 body=79 status=ok
// SIG undefined FUN_148c07832(void)

undefined8 * FUN_148c07832(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c07882(param_1,iVar1);
      FUN_148c078f5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c07882 FUN_148c07882 body=115 status=ok
// SIG undefined FUN_148c07882(void)

void FUN_148c07882(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c078f5 FUN_148c078f5 body=52 status=ok
// SIG undefined FUN_148c078f5(void)

void FUN_148c078f5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c0792a(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148c0792a FUN_148c0792a body=71 status=ok
// SIG undefined FUN_148c0792a(void)

undefined8 * FUN_148c0792a(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c079a2 FUN_148c079a2 body=63 status=ok
// SIG undefined FUN_148c079a2(void)

undefined1 FUN_148c079a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c07ab6(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148c07a0a FUN_148c07a0a body=59 status=ok
// SIG undefined FUN_148c07a0a(void)

undefined8 FUN_148c07a0a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c07a56 FUN_148c07a56 body=38 status=ok
// SIG undefined FUN_148c07a56(void)

void FUN_148c07a56(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_140c68d1c(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148c07ab6 FUN_148c07ab6 body=163 status=ok
// SIG undefined FUN_148c07ab6(void)

longlong FUN_148c07ab6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148c07832(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  FUN_14054d9c0(param_1 + 0x88,param_2 + 0x88);
  FUN_14867c50e(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148c07bf4 FUN_148c07bf4 body=59 status=ok
// SIG undefined FUN_148c07bf4(void)

undefined8 FUN_148c07bf4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c07ca8 FUN_148c07ca8 body=63 status=ok
// SIG undefined FUN_148c07ca8(void)

undefined1 FUN_148c07ca8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c07dba(param_2,param_3);
    param_3 = param_3 + 0x2f8;
    param_2 = param_2 + 0x2f8;
  }
  return 1;
}



// FUNCTION 148c07d10 FUN_148c07d10 body=59 status=ok
// SIG undefined FUN_148c07d10(void)

undefined8 FUN_148c07d10(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c07d5c FUN_148c07d5c body=38 status=ok
// SIG undefined FUN_148c07d5c(void)

void FUN_148c07d5c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f8) == '\x01') {
    FUN_140c69a22(param_2);
    *(undefined1 *)(param_2 + 0x2f8) = 0;
  }
  return;
}



// FUNCTION 148c07dba FUN_148c07dba body=634 status=ok
// SIG undefined FUN_148c07dba(void)

longlong FUN_148c07dba(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148c07832(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  memcpy((void *)(param_1 + 0x58),(void *)(param_2 + 0x58),0x81);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  FUN_144a7bb84(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144a82394(param_1 + 0x108,param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  FUN_144a7bb84(param_1 + 0x120,param_2 + 0x120);
  FUN_144a82394(param_1 + 0x138,param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  FUN_144a7bb84(param_1 + 0x150,param_2 + 0x150);
  FUN_144a82394(param_1 + 0x168,param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  FUN_144a7bb84(param_1 + 0x180,param_2 + 0x180);
  FUN_144a82394(param_1 + 0x198,param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  FUN_144a7bb84(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_144a82394(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  uVar1 = *(undefined4 *)(param_2 + 0x1e4);
  uVar2 = *(undefined4 *)(param_2 + 0x1e8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = uVar1;
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  FUN_144a787a6(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_14054d9c0(param_1 + 0x200,param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  uVar1 = *(undefined4 *)(param_2 + 0x25c);
  uVar2 = *(undefined4 *)(param_2 + 0x260);
  uVar3 = *(undefined4 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x25c) = uVar1;
  *(undefined4 *)(param_1 + 0x260) = uVar2;
  *(undefined4 *)(param_1 + 0x264) = uVar3;
  FUN_144a787a6(param_1 + 0x268,param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  uVar1 = *(undefined4 *)(param_2 + 0x284);
  uVar2 = *(undefined4 *)(param_2 + 0x288);
  uVar3 = *(undefined4 *)(param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = uVar1;
  *(undefined4 *)(param_1 + 0x288) = uVar2;
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  FUN_144a787a6(param_1 + 0x290,param_2 + 0x290);
  FUN_14867c50e(param_1 + 0x2a0,param_2 + 0x2a0);
  puVar5 = (undefined8 *)(param_2 + 0x2b0);
  puVar6 = (undefined8 *)(param_1 + 0x2b0);
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  return param_1;
}



// FUNCTION 148c08100 FUN_148c08100 body=63 status=ok
// SIG undefined FUN_148c08100(void)

undefined1 FUN_148c08100(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c08264(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 148c08168 FUN_148c08168 body=59 status=ok
// SIG undefined FUN_148c08168(void)

undefined8 FUN_148c08168(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c081b4 FUN_148c081b4 body=40 status=ok
// SIG undefined FUN_148c081b4(void)

void FUN_148c081b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_1459cd796(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148c0822a FUN_148c0822a body=57 status=ok
// SIG undefined FUN_148c0822a(void)

void FUN_148c0822a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9518 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9518 = FUN_140002ddd(FUN_1465d3d93,uVar1,L"OakCritterGlobals");
  }
  return;
}



// FUNCTION 148c08264 FUN_148c08264 body=119 status=ok
// SIG undefined FUN_148c08264(void)

longlong FUN_148c08264(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 148c0832e FUN_148c0832e body=63 status=ok
// SIG undefined FUN_148c0832e(void)

undefined1 FUN_148c0832e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867f270(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 148c08396 FUN_148c08396 body=59 status=ok
// SIG undefined FUN_148c08396(void)

undefined8 FUN_148c08396(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c083e2 FUN_148c083e2 body=38 status=ok
// SIG undefined FUN_148c083e2(void)

void FUN_148c083e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_140af8b9e(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148c0848a FUN_148c0848a body=88 status=ok
// SIG undefined FUN_148c0848a(void)

undefined1 FUN_148c0848a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_141289ada(param_2 + -0x20,param_3 + -0x20);
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_148bb1c82(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c0850a FUN_148c0850a body=59 status=ok
// SIG undefined FUN_148c0850a(void)

undefined8 FUN_148c0850a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c08550 FUN_148c08550 body=32 status=ok
// SIG undefined FUN_148c08550(void)

void FUN_148c08550(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_140f48e2c(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148c085b4 FUN_148c085b4 body=75 status=ok
// SIG undefined FUN_148c085b4(void)

void FUN_148c085b4(undefined8 param_1,undefined8 *param_2)

{
  FUN_141845298(param_2);
  *param_2 = &PTR_FUN_14b729490;
  param_2[0x31] = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined1 *)((longlong)param_2 + 0x184) = 0;
  *(undefined4 *)(param_2 + 0x32) = 0x1001;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 148c08616 FUN_148c08616 body=144 status=ok
// SIG undefined FUN_148c08616(void)

undefined8 FUN_148c08616(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148633b9a(param_2,param_3);
    *(undefined1 *)(param_2 + 0x184) = *(undefined1 *)(param_3 + 0x184);
    *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)(param_3 + 0x180);
    if ((*(longlong *)(param_2 + 0x188) != *(longlong *)(param_3 + 0x188)) ||
       (*(int *)(param_2 + 400) != *(int *)(param_3 + 400))) {
      *(longlong *)(param_2 + 0x188) = *(longlong *)(param_3 + 0x188);
      *(undefined4 *)(param_2 + 400) = *(undefined4 *)(param_3 + 400);
      *(undefined8 *)(param_2 + 0x198) = 0;
    }
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 148c086ce FUN_148c086ce body=59 status=ok
// SIG undefined FUN_148c086ce(void)

undefined8 FUN_148c086ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0871a FUN_148c0871a body=38 status=ok
// SIG undefined FUN_148c0871a(void)

void FUN_148c0871a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_140bb739c(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 148c08782 FUN_148c08782 body=55 status=ok
// SIG undefined FUN_148c08782(void)

void FUN_148c08782(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba95a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba95a0 = FUN_140002ddd(FUN_1465d3f4f,uVar1,L"OakDamageBinderEventFilter");
  }
  return;
}



// FUNCTION 148c0883e FUN_148c0883e body=59 status=ok
// SIG undefined FUN_148c0883e(void)

undefined8 FUN_148c0883e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c08914 FUN_148c08914 body=63 status=ok
// SIG undefined FUN_148c08914(void)

undefined1 FUN_148c08914(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c08a3c(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 148c0897c FUN_148c0897c body=59 status=ok
// SIG undefined FUN_148c0897c(void)

undefined8 FUN_148c0897c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c089c8 FUN_148c089c8 body=38 status=ok
// SIG undefined FUN_148c089c8(void)

void FUN_148c089c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_140ead410(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 148c08a3c FUN_148c08a3c body=163 status=ok
// SIG undefined FUN_148c08a3c(void)

longlong FUN_148c08a3c(longlong param_1,longlong param_2)

{
  FUN_1486341f2();
  if (param_2 == param_1) {
    FUN_140311eb6(param_1 + 0x230,param_2 + 0x230);
    *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 0x240);
  }
  else {
    FUN_140b17902(param_1 + 0x218,param_2 + 0x218);
    FUN_140311eb6(param_1 + 0x230,param_2 + 0x230);
    *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 0x240);
    FUN_1401b31d8(param_1 + 0x248,param_2 + 0x248);
  }
  FUN_140311eb6(param_1 + 0x260,param_2 + 0x260);
  FUN_148c08ae0(param_1 + 0x270,param_2 + 0x270);
  return param_1;
}



// FUNCTION 148c08ae0 FUN_148c08ae0 body=93 status=ok
// SIG undefined FUN_148c08ae0(void)

undefined8 * FUN_148c08ae0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ead4c4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c08b3e(param_1,iVar1);
      FUN_148c08bb1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c08b3e FUN_148c08b3e body=115 status=ok
// SIG undefined FUN_148c08b3e(void)

void FUN_148c08b3e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c08bb1 FUN_148c08bb1 body=71 status=ok
// SIG undefined FUN_148c08bb1(void)

void FUN_148c08bb1(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
      lVar2 = *(longlong *)(param_2 + 8 + lVar4);
      *(longlong *)(param_1 + 8 + lVar4) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      lVar2 = param_1 + lVar4;
      lVar1 = param_2 + lVar4;
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
      lVar4 = lVar4 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c08c86 FUN_148c08c86 body=59 status=ok
// SIG undefined FUN_148c08c86(void)

undefined8 FUN_148c08c86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c08d2c FUN_148c08d2c body=7 status=ok
// SIG undefined FUN_148c08d2c(void)

void FUN_148c08d2c(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 148c08d33 FUN_148c08d33 body=60 status=ok
// SIG undefined FUN_148c08d33(void)

void FUN_148c08d33(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c08d70 FUN_148c08d70 body=230 status=ok
// SIG undefined FUN_148c08d70(void)

void FUN_148c08d70(undefined8 param_1,longlong param_2)

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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d0e004(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c08e58 FUN_148c08e58 body=273 status=ok
// SIG undefined FUN_148c08e58(void)

void FUN_148c08e58(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
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
  local_30 = 0x25ed75a7;
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
  FUN_148d0df84(local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c08f6a FUN_148c08f6a body=219 status=ok
// SIG undefined FUN_148c08f6a(void)

void FUN_148c08f6a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
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
  FUN_14069c588(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c09046 FUN_148c09046 body=352 status=ok
// SIG undefined FUN_148c09046(void)

void FUN_148c09046(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined4 local_30;
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
  local_30 = 0x25ed75a7;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  FUN_148d0def8(local_20,&local_58,local_39);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c091ae FUN_148c091ae body=398 status=ok
// SIG undefined FUN_148c091ae(void)

void FUN_148c091ae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined1 local_1a;
  undefined1 local_19;
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
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1410900b6(local_18,local_19,local_1a,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0933e FUN_148c0933e body=148 status=ok
// SIG undefined FUN_148c0933e(void)

void FUN_148c0933e(undefined8 param_1,longlong param_2)

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
  FUN_148d0e0a6(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c093d4 FUN_148c093d4 body=475 status=ok
// SIG undefined FUN_148c093d4(void)

void FUN_148c093d4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  local_58 = 0;
  local_50 = 0x3005;
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
  local_88 = local_38;
  uStack_84 = uStack_34;
  uStack_80 = uStack_30;
  uStack_7c = uStack_2c;
  local_78 = local_28;
  FUN_148d0e156(local_20,&local_88,local_3c);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c095b0 FUN_148c095b0 body=237 status=ok
// SIG undefined FUN_148c095b0(void)

void FUN_148c095b0(undefined8 param_1,longlong param_2)

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
  FUN_148d0e42e(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0969e FUN_148c0969e body=148 status=ok
// SIG undefined FUN_148c0969e(void)

void FUN_148c0969e(undefined8 param_1,longlong param_2)

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
  FUN_148d0e0fe(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c09734 FUN_148c09734 body=237 status=ok
// SIG undefined FUN_148c09734(void)

void FUN_148c09734(undefined8 param_1,longlong param_2)

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
  FUN_148d0e4be(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c098ee FUN_148c098ee body=48 status=ok
// SIG undefined FUN_148c098ee(void)

longlong FUN_148c098ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09926 FUN_148c09926 body=48 status=ok
// SIG undefined FUN_148c09926(void)

longlong FUN_148c09926(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0995e FUN_148c0995e body=48 status=ok
// SIG undefined FUN_148c0995e(void)

longlong FUN_148c0995e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09996 FUN_148c09996 body=48 status=ok
// SIG undefined FUN_148c09996(void)

longlong FUN_148c09996(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c099ce FUN_148c099ce body=48 status=ok
// SIG undefined FUN_148c099ce(void)

longlong FUN_148c099ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09a06 FUN_148c09a06 body=48 status=ok
// SIG undefined FUN_148c09a06(void)

longlong FUN_148c09a06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09a3e FUN_148c09a3e body=48 status=ok
// SIG undefined FUN_148c09a3e(void)

longlong FUN_148c09a3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09a6e FUN_148c09a6e body=48 status=ok
// SIG undefined FUN_148c09a6e(void)

longlong FUN_148c09a6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09a9e FUN_148c09a9e body=48 status=ok
// SIG undefined FUN_148c09a9e(void)

longlong FUN_148c09a9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09ad6 FUN_148c09ad6 body=48 status=ok
// SIG undefined FUN_148c09ad6(void)

longlong FUN_148c09ad6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09b1e FUN_148c09b1e body=48 status=ok
// SIG undefined FUN_148c09b1e(void)

longlong FUN_148c09b1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09b56 FUN_148c09b56 body=48 status=ok
// SIG undefined FUN_148c09b56(void)

longlong FUN_148c09b56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09b8e FUN_148c09b8e body=48 status=ok
// SIG undefined FUN_148c09b8e(void)

longlong FUN_148c09b8e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09bc6 FUN_148c09bc6 body=48 status=ok
// SIG undefined FUN_148c09bc6(void)

longlong FUN_148c09bc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09bfe FUN_148c09bfe body=48 status=ok
// SIG undefined FUN_148c09bfe(void)

longlong FUN_148c09bfe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09c36 FUN_148c09c36 body=48 status=ok
// SIG undefined FUN_148c09c36(void)

longlong FUN_148c09c36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09c6e FUN_148c09c6e body=48 status=ok
// SIG undefined FUN_148c09c6e(void)

longlong FUN_148c09c6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09ca6 FUN_148c09ca6 body=48 status=ok
// SIG undefined FUN_148c09ca6(void)

longlong FUN_148c09ca6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09cde FUN_148c09cde body=48 status=ok
// SIG undefined FUN_148c09cde(void)

longlong FUN_148c09cde(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09d16 FUN_148c09d16 body=48 status=ok
// SIG undefined FUN_148c09d16(void)

longlong FUN_148c09d16(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09d4e FUN_148c09d4e body=48 status=ok
// SIG undefined FUN_148c09d4e(void)

longlong FUN_148c09d4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09d86 FUN_148c09d86 body=48 status=ok
// SIG undefined FUN_148c09d86(void)

longlong FUN_148c09d86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09dc6 FUN_148c09dc6 body=48 status=ok
// SIG undefined FUN_148c09dc6(void)

longlong FUN_148c09dc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a60;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09dfe FUN_148c09dfe body=48 status=ok
// SIG undefined FUN_148c09dfe(void)

longlong FUN_148c09dfe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a68;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09e36 FUN_148c09e36 body=48 status=ok
// SIG undefined FUN_148c09e36(void)

longlong FUN_148c09e36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a88;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09e6e FUN_148c09e6e body=48 status=ok
// SIG undefined FUN_148c09e6e(void)

longlong FUN_148c09e6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1c68;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09e9e FUN_148c09e9e body=45 status=ok
// SIG undefined FUN_148c09e9e(void)

longlong FUN_148c09e9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09ecc FUN_148c09ecc body=45 status=ok
// SIG undefined FUN_148c09ecc(void)

longlong FUN_148c09ecc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09efa FUN_148c09efa body=45 status=ok
// SIG undefined FUN_148c09efa(void)

longlong FUN_148c09efa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09f28 FUN_148c09f28 body=45 status=ok
// SIG undefined FUN_148c09f28(void)

longlong FUN_148c09f28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145afc8a2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09f56 FUN_148c09f56 body=45 status=ok
// SIG undefined FUN_148c09f56(void)

longlong FUN_148c09f56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140fa4316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09f84 FUN_148c09f84 body=45 status=ok
// SIG undefined FUN_148c09f84(void)

longlong FUN_148c09f84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140feed48(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09fb2 FUN_148c09fb2 body=48 status=ok
// SIG undefined FUN_148c09fb2(void)

longlong FUN_148c09fb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_140feed48(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c09fe2 FUN_148c09fe2 body=81 status=ok
// SIG undefined FUN_148c09fe2(void)

void FUN_148c09fe2(undefined8 param_1,undefined8 *param_2)

{
  FUN_143c3ca42(param_2);
  *param_2 = &PTR_FUN_14b735d00;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  return;
}



// FUNCTION 148c0a04a FUN_148c0a04a body=63 status=ok
// SIG undefined FUN_148c0a04a(void)

undefined1 FUN_148c0a04a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0a15e(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 148c0a0b2 FUN_148c0a0b2 body=59 status=ok
// SIG undefined FUN_148c0a0b2(void)

undefined8 FUN_148c0a0b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0a0fe FUN_148c0a0fe body=38 status=ok
// SIG undefined FUN_148c0a0fe(void)

void FUN_148c0a0fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_140c1d2c4(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148c0a15e FUN_148c0a15e body=93 status=ok
// SIG undefined FUN_148c0a15e(void)

longlong FUN_148c0a15e(longlong param_1,longlong param_2)

{
  FUN_14863c2e6();
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  FUN_14150acc4(param_1 + 0xf0,param_2 + 0xf0);
  FUN_14150acc4(param_1 + 0x108,param_2 + 0x108);
  FUN_14150acc4(param_1 + 0x120,param_2 + 0x120);
  return param_1;
}



// FUNCTION 148c0a1e8 FUN_148c0a1e8 body=63 status=ok
// SIG undefined FUN_148c0a1e8(void)

undefined1 FUN_148c0a1e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0a310(param_2,param_3);
    param_3 = param_3 + 0x658;
    param_2 = param_2 + 0x658;
  }
  return 1;
}



// FUNCTION 148c0a250 FUN_148c0a250 body=59 status=ok
// SIG undefined FUN_148c0a250(void)

undefined8 FUN_148c0a250(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0a29c FUN_148c0a29c body=38 status=ok
// SIG undefined FUN_148c0a29c(void)

void FUN_148c0a29c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x658) == '\x01') {
    FUN_140d97df4(param_2);
    *(undefined1 *)(param_2 + 0x658) = 0;
  }
  return;
}



// FUNCTION 148c0a310 FUN_148c0a310 body=459 status=ok
// SIG undefined FUN_148c0a310(void)

longlong FUN_148c0a310(longlong param_1,longlong param_2)

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
  longlong lVar10;
  
  FUN_143c4ef8a();
  FUN_140311eb6(param_1 + 0x548,param_2 + 0x548);
  FUN_140311eb6(param_1 + 0x558,param_2 + 0x558);
  if (param_2 != param_1) {
    FUN_148634470(param_1 + 0x568,param_2 + 0x568);
  }
  lVar10 = *(longlong *)(param_2 + 0x580);
  if (DAT_14c950c29 == '\x01') {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar10 = *(longlong *)(param_2 + 0x580);
    }
  }
  *(longlong *)(param_1 + 0x580) = lVar10;
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_2 + 0x588);
  FUN_148c0a4dc(param_1 + 0x590,param_2 + 0x590);
  FUN_148c0a53a(param_1 + 0x5a0,param_2 + 0x5a0);
  FUN_148c0a598(param_1 + 0x5b0,param_2 + 0x5b0);
  uVar9 = *(undefined8 *)(param_2 + 0x5c8);
  uVar1 = *(undefined4 *)(param_2 + 0x5d0);
  uVar2 = *(undefined4 *)(param_2 + 0x5d4);
  uVar3 = *(undefined4 *)(param_2 + 0x5d8);
  uVar4 = *(undefined4 *)(param_2 + 0x5dc);
  uVar5 = *(undefined4 *)(param_2 + 0x5d9);
  uVar6 = *(undefined4 *)(param_2 + 0x5dd);
  uVar7 = *(undefined4 *)(param_2 + 0x5e1);
  uVar8 = *(undefined4 *)(param_2 + 0x5e5);
  *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_2 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5c8) = uVar9;
  *(undefined4 *)(param_1 + 0x5d0) = uVar1;
  *(undefined4 *)(param_1 + 0x5d4) = uVar2;
  *(undefined4 *)(param_1 + 0x5d8) = uVar3;
  *(undefined4 *)(param_1 + 0x5dc) = uVar4;
  *(undefined4 *)(param_1 + 0x5d9) = uVar5;
  *(undefined4 *)(param_1 + 0x5dd) = uVar6;
  *(undefined4 *)(param_1 + 0x5e1) = uVar7;
  *(undefined4 *)(param_1 + 0x5e5) = uVar8;
  *(undefined4 *)(param_1 + 0x5f4) = *(undefined4 *)(param_2 + 0x5f0);
  FUN_14020a6cc(param_1 + 0x5ec,1);
  *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_2 + 0x5fc);
  FUN_14020a6cc(param_1 + 0x5f8,1);
  *(undefined4 *)(param_1 + 0x60c) = *(undefined4 *)(param_2 + 0x608);
  FUN_14020a6cc(param_1 + 0x604,1);
  *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_2 + 0x614);
  FUN_14020a6cc(param_1 + 0x610,1);
  *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_2 + 0x620);
  FUN_14020a6cc(param_1 + 0x61c,1);
  *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(param_2 + 0x62c);
  FUN_14020a6cc(param_1 + 0x628,1);
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_2 + 0x638);
  FUN_148c0a824(param_1 + 0x640,param_2 + 0x640);
  *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)(param_2 + 0x650);
  return param_1;
}



// FUNCTION 148c0a4dc FUN_148c0a4dc body=93 status=ok
// SIG undefined FUN_148c0a4dc(void)

undefined8 * FUN_148c0a4dc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d982d0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c0a5e8(param_1,iVar1);
      FUN_148c0a65b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c0a53a FUN_148c0a53a body=93 status=ok
// SIG undefined FUN_148c0a53a(void)

undefined8 * FUN_148c0a53a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d98294(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c0a6ba(param_1,iVar1);
      FUN_148c0a72d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c0a598 FUN_148c0a598 body=79 status=ok
// SIG undefined FUN_148c0a598(void)

undefined8 * FUN_148c0a598(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c0a78c(param_1,iVar1);
      FUN_148c0a7ee(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c0a5e8 FUN_148c0a5e8 body=115 status=ok
// SIG undefined FUN_148c0a5e8(void)

void FUN_148c0a5e8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,0x10);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c0a65b FUN_148c0a65b body=94 status=ok
// SIG undefined FUN_148c0a65b(void)

void FUN_148c0a65b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    puVar4 = (undefined8 *)(param_2 + 0x30);
    do {
      *(undefined1 *)(puVar3 + -4) = *(undefined1 *)(puVar4 + -6);
      lVar1 = puVar4[-4];
      puVar3[-2] = lVar1;
      *puVar3 = 0;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)puVar4[-2];
        if ((undefined8 *)puVar4[-2] == (undefined8 *)0x0) {
          puVar2 = puVar4;
        }
        (**(code **)*puVar2)(puVar2,puVar3);
      }
      puVar3 = puVar3 + 10;
      puVar4 = puVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c0a6ba FUN_148c0a6ba body=115 status=ok
// SIG undefined FUN_148c0a6ba(void)

void FUN_148c0a6ba(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,0x10);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c0a72d FUN_148c0a72d body=94 status=ok
// SIG undefined FUN_148c0a72d(void)

void FUN_148c0a72d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    puVar4 = (undefined8 *)(param_2 + 0x30);
    do {
      *(undefined1 *)(puVar3 + -4) = *(undefined1 *)(puVar4 + -6);
      lVar1 = puVar4[-4];
      puVar3[-2] = lVar1;
      *puVar3 = 0;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)puVar4[-2];
        if ((undefined8 *)puVar4[-2] == (undefined8 *)0x0) {
          puVar2 = puVar4;
        }
        (**(code **)*puVar2)(puVar2,puVar3);
      }
      puVar3 = puVar3 + 10;
      puVar4 = puVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c0a78c FUN_148c0a78c body=98 status=ok
// SIG undefined FUN_148c0a78c(void)

void FUN_148c0a78c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c0a7ee FUN_148c0a7ee body=54 status=ok
// SIG undefined FUN_148c0a7ee(void)

void FUN_148c0a7ee(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      *(undefined1 *)(param_1 + 0x18 + lVar1) = *(undefined1 *)(param_2 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c0a824 FUN_148c0a824 body=88 status=ok
// SIG undefined FUN_148c0a824(void)

undefined8 * FUN_148c0a824(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c0a87c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c0a87c FUN_148c0a87c body=98 status=ok
// SIG undefined FUN_148c0a87c(void)

void FUN_148c0a87c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c0a8e0 FUN_148c0a8e0 body=48 status=ok
// SIG undefined FUN_148c0a8e0(void)

void FUN_148c0a8e0(undefined8 param_1,undefined8 *param_2)

{
  FUN_141526730(param_2);
  *param_2 = &PTR_FUN_14b736140;
  *(undefined2 *)(param_2 + 0x24) = 1;
  *(undefined1 *)((longlong)param_2 + 0x122) = 0;
  return;
}



// FUNCTION 148c0a926 FUN_148c0a926 body=88 status=ok
// SIG undefined FUN_148c0a926(void)

undefined8 FUN_148c0a926(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863cd84(param_2,param_3);
    *(undefined2 *)(param_2 + 0x120) = *(undefined2 *)(param_3 + 0x120);
    *(undefined1 *)(param_2 + 0x122) = *(undefined1 *)(param_3 + 0x122);
    param_2 = param_2 + 0x128;
    param_3 = param_3 + 0x128;
  }
  return 1;
}



// FUNCTION 148c0a9a6 FUN_148c0a9a6 body=59 status=ok
// SIG undefined FUN_148c0a9a6(void)

undefined8 FUN_148c0a9a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0a9f2 FUN_148c0a9f2 body=38 status=ok
// SIG undefined FUN_148c0a9f2(void)

void FUN_148c0a9f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_1410265d4(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 148c0aa5c FUN_148c0aa5c body=66 status=ok
// SIG undefined FUN_148c0aa5c(void)

undefined8 * FUN_148c0aa5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b738fe0;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_1458e0104(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0aa9e FUN_148c0aa9e body=55 status=ok
// SIG undefined FUN_148c0aa9e(void)

void FUN_148c0aa9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9838 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9838 = FUN_140002ddd(FUN_1465d4c3d,uVar1,L"OakDecoCharacterBodyState");
  }
  return;
}



// FUNCTION 148c0aad6 FUN_148c0aad6 body=57 status=ok
// SIG undefined FUN_148c0aad6(void)

void FUN_148c0aad6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9808 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9808 = FUN_140002ddd(FUN_1465d4b77,uVar1,L"OakDecoCharacterBodySettings");
  }
  return;
}



// FUNCTION 148c0ab5e FUN_148c0ab5e body=104 status=ok
// SIG undefined FUN_148c0ab5e(void)

undefined1 FUN_148c0ab5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0x228);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_3 + 0x228);
      }
    }
    param_3 = param_3 + 0x230;
    *(longlong *)(param_2 + 0x228) = lVar1;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 148c0abee FUN_148c0abee body=59 status=ok
// SIG undefined FUN_148c0abee(void)

undefined8 FUN_148c0abee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0ac3a FUN_148c0ac3a body=38 status=ok
// SIG undefined FUN_148c0ac3a(void)

void FUN_148c0ac3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 148c0acb8 FUN_148c0acb8 body=48 status=ok
// SIG undefined FUN_148c0acb8(void)

void FUN_148c0acb8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b738fe0;
  return;
}



// FUNCTION 148c0ace8 FUN_148c0ace8 body=32 status=ok
// SIG undefined FUN_148c0ace8(void)

void FUN_148c0ace8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b738fe0;
  return;
}



// FUNCTION 148c0ad62 FUN_148c0ad62 body=59 status=ok
// SIG undefined FUN_148c0ad62(void)

undefined8 FUN_148c0ad62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0adae FUN_148c0adae body=65 status=ok
// SIG undefined FUN_148c0adae(void)

void FUN_148c0adae(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b738fe0;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_1458e0104(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 148c0ae40 FUN_148c0ae40 body=69 status=ok
// SIG undefined FUN_148c0ae40(void)

void FUN_148c0ae40(undefined8 param_1,undefined8 *param_2)

{
  FUN_140db8f50(param_2);
  *param_2 = &PTR_FUN_14b95cec0;
  param_2[0x92] = 0;
  param_2[0x93] = 0;
  *(undefined8 *)((longlong)param_2 + 0x499) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4a1) = 0;
  param_2[0x96] = 0;
  param_2[0x97] = 0;
  *(undefined8 *)((longlong)param_2 + 0x4ba) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c2) = 0;
  *(undefined2 *)((longlong)param_2 + 0x24) = 0x201;
  return;
}



// FUNCTION 148c0ae9c FUN_148c0ae9c body=134 status=ok
// SIG undefined FUN_148c0ae9c(void)

undefined8 FUN_148c0ae9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14868e672(param_2,param_3);
    FUN_147e37066(param_2 + 0x490,param_3 + 0x490);
    *(undefined1 *)(param_2 + 0x4a8) = *(undefined1 *)(param_3 + 0x4a8);
    FUN_148b975c6(param_2 + 0x4b0,param_3 + 0x4b0);
    *(undefined2 *)(param_2 + 0x4c8) = *(undefined2 *)(param_3 + 0x4c8);
    param_2 = param_2 + 0x4d0;
    param_3 = param_3 + 0x4d0;
  }
  return 1;
}



// FUNCTION 148c0af4a FUN_148c0af4a body=59 status=ok
// SIG undefined FUN_148c0af4a(void)

undefined8 FUN_148c0af4a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0af96 FUN_148c0af96 body=38 status=ok
// SIG undefined FUN_148c0af96(void)

void FUN_148c0af96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4d0) == '\x01') {
    FUN_140d1f6d0(param_2);
    *(undefined1 *)(param_2 + 0x4d0) = 0;
  }
  return;
}



// FUNCTION 148c0b06e FUN_148c0b06e body=59 status=ok
// SIG undefined FUN_148c0b06e(void)

undefined8 FUN_148c0b06e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0b12e FUN_148c0b12e body=63 status=ok
// SIG undefined FUN_148c0b12e(void)

undefined1 FUN_148c0b12e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0b292(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 148c0b196 FUN_148c0b196 body=59 status=ok
// SIG undefined FUN_148c0b196(void)

undefined8 FUN_148c0b196(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0b1e2 FUN_148c0b1e2 body=40 status=ok
// SIG undefined FUN_148c0b1e2(void)

void FUN_148c0b1e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_145a29480(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 148c0b258 FUN_148c0b258 body=57 status=ok
// SIG undefined FUN_148c0b258(void)

void FUN_148c0b258(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9928 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9928 = FUN_140002ddd(FUN_1465d4f13,uVar1,L"OakDialogGlobals");
  }
  return;
}



// FUNCTION 148c0b292 FUN_148c0b292 body=202 status=ok
// SIG undefined FUN_148c0b292(void)

longlong FUN_148c0b292(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_148c0b35c(param_1 + 0x20,param_2 + 0x20);
  FUN_148c0b450(param_1 + 0x70,param_2 + 0x70);
  FUN_148c0b544(param_1 + 0xc0,param_2 + 0xc0);
  FUN_148c0b638(param_1 + 0x110,param_2 + 0x110);
  FUN_148c0b72c(param_1 + 0x160,param_2 + 0x160);
  FUN_148c0b820(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_148c0b976(param_1 + 0x200,param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  FUN_140e7790a(param_1 + 600,param_2 + 600);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  return param_1;
}



// FUNCTION 148c0b35c FUN_148c0b35c body=122 status=ok
// SIG undefined FUN_148c0b35c(void)

longlong FUN_148c0b35c(longlong param_1,longlong param_2)

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
    FUN_148c0b3d6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c0b3d6 FUN_148c0b3d6 body=121 status=ok
// SIG undefined FUN_148c0b3d6(void)

undefined8 * FUN_148c0b3d6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a29a34(param_1,uVar1);
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



// FUNCTION 148c0b450 FUN_148c0b450 body=122 status=ok
// SIG undefined FUN_148c0b450(void)

longlong FUN_148c0b450(longlong param_1,longlong param_2)

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
    FUN_148c0b4ca(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c0b4ca FUN_148c0b4ca body=121 status=ok
// SIG undefined FUN_148c0b4ca(void)

undefined8 * FUN_148c0b4ca(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a299ba(param_1,uVar1);
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



// FUNCTION 148c0b544 FUN_148c0b544 body=122 status=ok
// SIG undefined FUN_148c0b544(void)

longlong FUN_148c0b544(longlong param_1,longlong param_2)

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
    FUN_148c0b5be(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c0b5be FUN_148c0b5be body=121 status=ok
// SIG undefined FUN_148c0b5be(void)

undefined8 * FUN_148c0b5be(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a29940(param_1,uVar1);
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



// FUNCTION 148c0b638 FUN_148c0b638 body=122 status=ok
// SIG undefined FUN_148c0b638(void)

longlong FUN_148c0b638(longlong param_1,longlong param_2)

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
    FUN_148c0b6b2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c0b6b2 FUN_148c0b6b2 body=121 status=ok
// SIG undefined FUN_148c0b6b2(void)

undefined8 * FUN_148c0b6b2(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a298c6(param_1,uVar1);
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



// FUNCTION 148c0b72c FUN_148c0b72c body=122 status=ok
// SIG undefined FUN_148c0b72c(void)

longlong FUN_148c0b72c(longlong param_1,longlong param_2)

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
    FUN_148c0b7a6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c0b7a6 FUN_148c0b7a6 body=121 status=ok
// SIG undefined FUN_148c0b7a6(void)

undefined8 * FUN_148c0b7a6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a2984c(param_1,uVar1);
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



// FUNCTION 148c0b820 FUN_148c0b820 body=122 status=ok
// SIG undefined FUN_148c0b820(void)

longlong FUN_148c0b820(longlong param_1,longlong param_2)

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
    FUN_148c0b89a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c0b89a FUN_148c0b89a body=219 status=ok
// SIG undefined FUN_148c0b89a(void)

undefined8 * FUN_148c0b89a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a297d2(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
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
          FUN_1486b96c2(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar4 + 6);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c0b976 FUN_148c0b976 body=122 status=ok
// SIG undefined FUN_148c0b976(void)

longlong FUN_148c0b976(longlong param_1,longlong param_2)

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
    FUN_148c0b9f0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c0b9f0 FUN_148c0b9f0 body=219 status=ok
// SIG undefined FUN_148c0b9f0(void)

undefined8 * FUN_148c0b9f0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a29758(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
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
          FUN_148c0bacc(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar4 + 6);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c0bacc FUN_148c0bacc body=71 status=ok
// SIG undefined FUN_148c0bacc(void)

undefined8 * FUN_148c0bacc(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c0bb88 FUN_148c0bb88 body=54 status=ok
// SIG undefined FUN_148c0bb88(void)

undefined1 FUN_148c0bb88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0bc94(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c0bbe6 FUN_148c0bbe6 body=59 status=ok
// SIG undefined FUN_148c0bbe6(void)

undefined8 FUN_148c0bbe6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0bc2c FUN_148c0bc2c body=34 status=ok
// SIG undefined FUN_148c0bc2c(void)

void FUN_148c0bc2c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1457efc14(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c0bc94 FUN_148c0bc94 body=98 status=ok
// SIG undefined FUN_148c0bc94(void)

longlong FUN_148c0bc94(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_1486934d2(param_1 + 0x18,param_2 + 0x18);
  FUN_148c0bcf6(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148c0bcf6 FUN_148c0bcf6 body=84 status=ok
// SIG undefined FUN_148c0bcf6(void)

longlong * FUN_148c0bcf6(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c0bd84 FUN_148c0bd84 body=63 status=ok
// SIG undefined FUN_148c0bd84(void)

undefined1 FUN_148c0bd84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0be98(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148c0bdec FUN_148c0bdec body=59 status=ok
// SIG undefined FUN_148c0bdec(void)

undefined8 FUN_148c0bdec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0be98 FUN_148c0be98 body=163 status=ok
// SIG undefined FUN_148c0be98(void)

longlong FUN_148c0be98(longlong param_1,longlong param_2)

{
  FUN_148c0bf3c();
  FUN_148c0bf3c(param_1 + 0x18,param_2 + 0x18);
  FUN_148c0bf3c(param_1 + 0x30,param_2 + 0x30);
  FUN_148c0bf3c(param_1 + 0x48,param_2 + 0x48);
  FUN_148c0bf3c(param_1 + 0x60,param_2 + 0x60);
  FUN_148c0bf3c(param_1 + 0x78,param_2 + 0x78);
  FUN_148c0bf3c(param_1 + 0x90,param_2 + 0x90);
  FUN_148c0bf3c(param_1 + 0xa8,param_2 + 0xa8);
  FUN_148c0bf3c(param_1 + 0xc0,param_2 + 0xc0);
  FUN_148c0bf3c(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148c0bf3c FUN_148c0bf3c body=84 status=ok
// SIG undefined FUN_148c0bf3c(void)

longlong * FUN_148c0bf3c(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c0bfb0 FUN_148c0bfb0 body=63 status=ok
// SIG undefined FUN_148c0bfb0(void)

undefined1 FUN_148c0bfb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0c112(param_2,param_3);
    param_3 = param_3 + 0x648;
    param_2 = param_2 + 0x648;
  }
  return 1;
}



// FUNCTION 148c0c018 FUN_148c0c018 body=59 status=ok
// SIG undefined FUN_148c0c018(void)

undefined8 FUN_148c0c018(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0c064 FUN_148c0c064 body=38 status=ok
// SIG undefined FUN_148c0c064(void)

void FUN_148c0c064(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x648) == '\x01') {
    FUN_141526302(param_2);
    *(undefined1 *)(param_2 + 0x648) = 0;
  }
  return;
}



// FUNCTION 148c0c0d8 FUN_148c0c0d8 body=57 status=ok
// SIG undefined FUN_148c0c0d8(void)

void FUN_148c0c0d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9988 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9988 = FUN_140002ddd(FUN_1465d50f1,uVar1,L"OakDiscoveryGlobals");
  }
  return;
}



// FUNCTION 148c0c112 FUN_148c0c112 body=557 status=ok
// SIG undefined FUN_148c0c112(void)

longlong FUN_148c0c112(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1486942a6();
  FUN_14184b2ce(param_1 + 0x230,param_2 + 0x230);
  FUN_14184b2ce(param_1 + 0x248,param_2 + 0x248);
  FUN_14184b2ce(param_1 + 0x260,param_2 + 0x260);
  FUN_14184b2ce(param_1 + 0x278,param_2 + 0x278);
  FUN_148c0c394(param_1 + 0x290,param_2 + 0x290);
  FUN_14184b2ce(param_1 + 0x2e0,param_2 + 0x2e0);
  FUN_148c0c394(param_1 + 0x2f8,param_2 + 0x2f8);
  FUN_14184b2ce(param_1 + 0x348,param_2 + 0x348);
  FUN_148c0c394(param_1 + 0x360,param_2 + 0x360);
  FUN_14184b2ce(param_1 + 0x3b0,param_2 + 0x3b0);
  FUN_148c0c394(param_1 + 0x3c8,param_2 + 0x3c8);
  (**(code **)(*(longlong *)(param_1 + 0x418) + 0x20))(param_1 + 0x418,0);
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_2 + 0x420);
  FUN_1406022fe(param_1 + 0x428,param_2 + 0x428);
  FUN_14184b2ce(param_1 + 0x438,param_2 + 0x438);
  FUN_14184b2ce(param_1 + 0x450,param_2 + 0x450);
  FUN_14184b2ce(param_1 + 0x468,param_2 + 0x468);
  FUN_14184b2ce(param_1 + 0x480,param_2 + 0x480);
  FUN_14184b2ce(param_1 + 0x498,param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
  FUN_148c0c340(param_1 + 0x4b8,param_2 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_2 + 0x4e0);
  uVar1 = *(undefined4 *)(param_2 + 0x4ec);
  uVar2 = *(undefined4 *)(param_2 + 0x4f0);
  uVar3 = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = uVar1;
  *(undefined4 *)(param_1 + 0x4f0) = uVar2;
  *(undefined4 *)(param_1 + 0x4f4) = uVar3;
  FUN_144a787a6(param_1 + 0x4f8,param_2 + 0x4f8);
  FUN_148694be2(param_1 + 0x508,param_2 + 0x508);
  FUN_1486977ec(param_1 + 0x518,param_2 + 0x518);
  FUN_1486977ec(param_1 + 0x530,param_2 + 0x530);
  *(undefined1 *)(param_1 + 0x548) = *(undefined1 *)(param_2 + 0x548);
  FUN_148c0be98(param_1 + 0x550,param_2 + 0x550);
  *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_2 + 0x640);
  *(undefined1 *)(param_1 + 0x644) = *(undefined1 *)(param_2 + 0x644);
  return param_1;
}



// FUNCTION 148c0c340 FUN_148c0c340 body=84 status=ok
// SIG undefined FUN_148c0c340(void)

longlong * FUN_148c0c340(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c0c394 FUN_148c0c394 body=122 status=ok
// SIG undefined FUN_148c0c394(void)

longlong FUN_148c0c394(longlong param_1,longlong param_2)

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
    FUN_148c0c40e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c0c40e FUN_148c0c40e body=250 status=ok
// SIG undefined FUN_148c0c40e(void)

longlong * FUN_148c0c40e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1458c6a22(param_1,(ulonglong)uVar1);
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
          FUN_14185130a(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c0c50a FUN_148c0c50a body=104 status=ok
// SIG undefined FUN_148c0c50a(void)

undefined8 * FUN_148c0c50a(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b739090;
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b127600;
  lVar1 = 0x268;
  do {
    FUN_14494dff0((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x120;
  } while (lVar1 != -0xf8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0c572 FUN_148c0c572 body=128 status=ok
// SIG undefined FUN_148c0c572(void)

void FUN_148c0c572(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x480);
  FUN_1406516ce(param_2);
  *param_2 = &PTR_FUN_14b739090;
  *(undefined8 *)((longlong)param_2 + 0x444) = 0;
  param_2[0x8a] = 0;
  param_2[0x8b] = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0;
  param_2[0x82] = 0;
  param_2[0x83] = 0;
  param_2[0x84] = 0;
  param_2[0x85] = 0;
  param_2[0x86] = 0;
  *(undefined8 *)((longlong)param_2 + 0x432) = 0;
  *(undefined8 *)((longlong)param_2 + 0x43a) = 0;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x475) = 0;
  return;
}



// FUNCTION 148c0c5f2 FUN_148c0c5f2 body=110 status=ok
// SIG undefined FUN_148c0c5f2(void)

void FUN_148c0c5f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406516ce(param_2);
  *param_2 = &PTR_FUN_14b739090;
  *(undefined8 *)((longlong)param_2 + 0x444) = 0;
  param_2[0x8a] = 0;
  param_2[0x8b] = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0;
  param_2[0x82] = 0;
  param_2[0x83] = 0;
  param_2[0x84] = 0;
  param_2[0x85] = 0;
  param_2[0x86] = 0;
  *(undefined8 *)((longlong)param_2 + 0x432) = 0;
  *(undefined8 *)((longlong)param_2 + 0x43a) = 0;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x475) = 0;
  return;
}



// FUNCTION 148c0c684 FUN_148c0c684 body=63 status=ok
// SIG undefined FUN_148c0c684(void)

undefined1 FUN_148c0c684(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0c78e(param_2,param_3);
    param_3 = param_3 + 0x480;
    param_2 = param_2 + 0x480;
  }
  return 1;
}



// FUNCTION 148c0c6ec FUN_148c0c6ec body=59 status=ok
// SIG undefined FUN_148c0c6ec(void)

undefined8 FUN_148c0c6ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0c78e FUN_148c0c78e body=145 status=ok
// SIG undefined FUN_148c0c78e(void)

longlong FUN_148c0c78e(longlong param_1,longlong param_2)

{
  FUN_148694eee();
  FUN_14124fed2(param_1 + 0x3f8,param_2 + 0x3f8);
  FUN_145c0fe5a(param_1 + 0x410,param_2 + 0x410);
  FUN_1457b9446(param_1 + 0x428,param_2 + 0x428);
  *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(param_2 + 0x440);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_2 + 0x448);
  FUN_1447715ec(param_1 + 0x450,param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
  *(undefined1 *)(param_1 + 0x47c) = *(undefined1 *)(param_2 + 0x47c);
  return param_1;
}



// FUNCTION 148c0c820 FUN_148c0c820 body=101 status=ok
// SIG undefined FUN_148c0c820(void)

void FUN_148c0c820(undefined8 *param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *param_1 = &PTR_FUN_14b739090;
    if (param_1[0x8d] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14b127600;
    lVar1 = 0x268;
    do {
      FUN_14494dff0((longlong)param_1 + lVar1);
      lVar1 = lVar1 + -0x120;
    } while (lVar1 != -0xf8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148c0c8a4 FUN_148c0c8a4 body=63 status=ok
// SIG undefined FUN_148c0c8a4(void)

undefined1 FUN_148c0c8a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0ca82(param_2,param_3);
    param_3 = param_3 + 0x2f0;
    param_2 = param_2 + 0x2f0;
  }
  return 1;
}



// FUNCTION 148c0c90c FUN_148c0c90c body=59 status=ok
// SIG undefined FUN_148c0c90c(void)

undefined8 FUN_148c0c90c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0c958 FUN_148c0c958 body=38 status=ok
// SIG undefined FUN_148c0c958(void)

void FUN_148c0c958(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    FUN_140c233ac(param_2);
    *(undefined1 *)(param_2 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 148c0c9b8 FUN_148c0c9b8 body=201 status=ok
// SIG undefined FUN_148c0c9b8(void)

undefined8 * FUN_148c0c9b8(undefined8 *param_1)

{
  FUN_140f68fa4();
  *param_1 = &PTR_FUN_14b738060;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x247) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x259) = 0;
  *(undefined8 *)((longlong)param_1 + 0x261) = 0;
  param_1[0x5d] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  return param_1;
}



// FUNCTION 148c0ca82 FUN_148c0ca82 body=293 status=ok
// SIG undefined FUN_148c0ca82(void)

longlong FUN_148c0ca82(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  FUN_1486957a2();
  FUN_148c0cba8(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined2 *)(param_1 + 0x1e0) = *(undefined2 *)(param_2 + 0x1e0);
  *(undefined1 *)(param_1 + 0x1e2) = *(undefined1 *)(param_2 + 0x1e2);
  FUN_1486934d2(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_1486934d2(param_1 + 0x200,param_2 + 0x200);
  FUN_1486934d2(param_1 + 0x218,param_2 + 0x218);
  FUN_1486934d2(param_1 + 0x230,param_2 + 0x230);
  uVar1 = *(undefined4 *)(param_2 + 0x24b);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24b) = uVar1;
  FUN_14184b2ce(param_1 + 0x250,param_2 + 0x250);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x270);
  FUN_1486934d2(param_1 + 0x278,param_2 + 0x278);
  FUN_1486934d2(param_1 + 0x290,param_2 + 0x290);
  FUN_14124fed2(param_1 + 0x2a8,param_2 + 0x2a8);
  FUN_1486934d2(param_1 + 0x2c0,param_2 + 0x2c0);
  FUN_1486934d2(param_1 + 0x2d8,param_2 + 0x2d8);
  return param_1;
}



// FUNCTION 148c0cba8 FUN_148c0cba8 body=84 status=ok
// SIG undefined FUN_148c0cba8(void)

longlong * FUN_148c0cba8(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c0cc9c FUN_148c0cc9c body=155 status=ok
// SIG undefined FUN_148c0cc9c(void)

void FUN_148c0cc9c(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_148cd4aba(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0cd3e FUN_148c0cd3e body=889 status=ok
// SIG undefined FUN_148c0cd3e(void)

void FUN_148c0cd3e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 local_100;
  undefined8 *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
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
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  plVar2 = &local_50;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0;
  lStack_58 = 0;
  FUN_1446dcc8c();
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
  iVar1 = local_6c;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_78;
  local_a8 = local_88;
  uStack_a0 = uStack_80;
  local_c8 = (undefined4)local_68;
  uStack_c4 = local_68._4_4_;
  uStack_c0 = (undefined4)uStack_60;
  uStack_bc = uStack_60._4_4_;
  local_b8 = lStack_58;
  if ((lStack_58 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_e8 = local_38;
  uStack_e4 = uStack_34;
  uStack_e0 = uStack_30;
  uStack_dc = uStack_2c;
  local_d8 = local_28;
  local_100 = iVar1 != 0;
  local_f8 = &local_a8;
  local_108 = &local_c8;
  FUN_148cd5370(&local_e8,local_3c,local_48,plVar2);
  if ((DAT_14c950c29 == 1) && (*plVar2 != 0)) {
    FUN_14689c22e();
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0d0c8 FUN_148c0d0c8 body=1298 status=ok
// SIG undefined FUN_148c0d0c8(void)

void FUN_148c0d0c8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined4 *local_1f0;
  undefined1 local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8 [12];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  int local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_c8[0] = 0;
  local_c8._4_8_ = 0;
  local_b8 = 0;
  local_b0 = DAT_14c8464f8;
  uStack_a8 = DAT_14c846500;
  local_a0 = DAT_14c846508;
  local_98 = 0;
  local_94 = 0;
  local_88 = 0;
  local_80 = (undefined4)DAT_14c8464e0;
  uStack_7c = DAT_14c8464e0._4_4_;
  uStack_78 = (undefined4)DAT_14c8464e8;
  uStack_74 = DAT_14c8464e8._4_4_;
  local_70 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  local_cc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  local_d8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_e0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  plVar9 = &local_e0;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  local_f8 = 0xffffffffffffffff;
  uStack_f0 = 0;
  lStack_e8 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_fc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  iVar2 = local_fc;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  local_120 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  uVar1 = local_120;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_138 = local_118;
  uStack_130 = uStack_110;
  local_128 = local_108;
  local_158 = (undefined4)local_f8;
  uStack_154 = local_f8._4_4_;
  uStack_150 = (undefined4)uStack_f0;
  uStack_14c = uStack_f0._4_4_;
  local_148 = lStack_e8;
  if ((lStack_e8 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  uVar4 = local_cc;
  uVar3 = local_d8;
  puVar7 = (undefined8 *)local_c8;
  puVar8 = local_1b8;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_1d0 = local_68;
  uVar5 = FUN_14477b664(uStack_60);
  local_1c8 = FUN_14477b664(uVar5);
  local_1c0 = local_58;
  local_1e8 = iVar2 != 0;
  local_1d8 = uVar1;
  local_1e0 = &local_138;
  local_1f0 = &local_158;
  local_1f8 = plVar9;
  FUN_148cd511c(&local_1d0,local_1b8,uVar4,uVar3);
  if ((DAT_14c950c29 == 1) && (*plVar9 != 0)) {
    FUN_14689c22e();
  }
  if ((local_50 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0d5dc FUN_148c0d5dc body=156 status=ok
// SIG undefined FUN_148c0d5dc(void)

void FUN_148c0d5dc(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_148cd5674(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0d686 FUN_148c0d686 body=232 status=ok
// SIG undefined FUN_148c0d686(void)

void FUN_148c0d686(undefined8 param_1,longlong param_2)

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
  FUN_148cd55b0(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0d776 FUN_148c0d776 body=155 status=ok
// SIG undefined FUN_148c0d776(void)

void FUN_148c0d776(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_148cd55bc(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0d84c FUN_148c0d84c body=48 status=ok
// SIG undefined FUN_148c0d84c(void)

longlong FUN_148c0d84c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0d884 FUN_148c0d884 body=48 status=ok
// SIG undefined FUN_148c0d884(void)

longlong FUN_148c0d884(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0d8b4 FUN_148c0d8b4 body=48 status=ok
// SIG undefined FUN_148c0d8b4(void)

longlong FUN_148c0d8b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0d8e4 FUN_148c0d8e4 body=48 status=ok
// SIG undefined FUN_148c0d8e4(void)

longlong FUN_148c0d8e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0d91c FUN_148c0d91c body=48 status=ok
// SIG undefined FUN_148c0d91c(void)

longlong FUN_148c0d91c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0d954 FUN_148c0d954 body=48 status=ok
// SIG undefined FUN_148c0d954(void)

longlong FUN_148c0d954(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0d98c FUN_148c0d98c body=48 status=ok
// SIG undefined FUN_148c0d98c(void)

longlong FUN_148c0d98c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0d9c4 FUN_148c0d9c4 body=48 status=ok
// SIG undefined FUN_148c0d9c4(void)

longlong FUN_148c0d9c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0d9f4 FUN_148c0d9f4 body=48 status=ok
// SIG undefined FUN_148c0d9f4(void)

longlong FUN_148c0d9f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0da24 FUN_148c0da24 body=48 status=ok
// SIG undefined FUN_148c0da24(void)

longlong FUN_148c0da24(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0da54 FUN_148c0da54 body=48 status=ok
// SIG undefined FUN_148c0da54(void)

longlong FUN_148c0da54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0da84 FUN_148c0da84 body=48 status=ok
// SIG undefined FUN_148c0da84(void)

longlong FUN_148c0da84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dab4 FUN_148c0dab4 body=48 status=ok
// SIG undefined FUN_148c0dab4(void)

longlong FUN_148c0dab4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0daec FUN_148c0daec body=48 status=ok
// SIG undefined FUN_148c0daec(void)

longlong FUN_148c0daec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0db24 FUN_148c0db24 body=48 status=ok
// SIG undefined FUN_148c0db24(void)

longlong FUN_148c0db24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0db5c FUN_148c0db5c body=48 status=ok
// SIG undefined FUN_148c0db5c(void)

longlong FUN_148c0db5c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0db94 FUN_148c0db94 body=48 status=ok
// SIG undefined FUN_148c0db94(void)

longlong FUN_148c0db94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dbc4 FUN_148c0dbc4 body=48 status=ok
// SIG undefined FUN_148c0dbc4(void)

longlong FUN_148c0dbc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dbfc FUN_148c0dbfc body=48 status=ok
// SIG undefined FUN_148c0dbfc(void)

longlong FUN_148c0dbfc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dc34 FUN_148c0dc34 body=48 status=ok
// SIG undefined FUN_148c0dc34(void)

longlong FUN_148c0dc34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dc6c FUN_148c0dc6c body=48 status=ok
// SIG undefined FUN_148c0dc6c(void)

longlong FUN_148c0dc6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1548;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dca4 FUN_148c0dca4 body=48 status=ok
// SIG undefined FUN_148c0dca4(void)

longlong FUN_148c0dca4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1550;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dcd4 FUN_148c0dcd4 body=48 status=ok
// SIG undefined FUN_148c0dcd4(void)

longlong FUN_148c0dcd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1558;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dd0c FUN_148c0dd0c body=48 status=ok
// SIG undefined FUN_148c0dd0c(void)

longlong FUN_148c0dd0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1560;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dd4c FUN_148c0dd4c body=48 status=ok
// SIG undefined FUN_148c0dd4c(void)

longlong FUN_148c0dd4c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dd7c FUN_148c0dd7c body=48 status=ok
// SIG undefined FUN_148c0dd7c(void)

longlong FUN_148c0dd7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0ddac FUN_148c0ddac body=48 status=ok
// SIG undefined FUN_148c0ddac(void)

longlong FUN_148c0ddac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dddc FUN_148c0dddc body=48 status=ok
// SIG undefined FUN_148c0dddc(void)

longlong FUN_148c0dddc(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0de0c FUN_148c0de0c body=48 status=ok
// SIG undefined FUN_148c0de0c(void)

longlong FUN_148c0de0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0de3c FUN_148c0de3c body=48 status=ok
// SIG undefined FUN_148c0de3c(void)

longlong FUN_148c0de3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0de6c FUN_148c0de6c body=45 status=ok
// SIG undefined FUN_148c0de6c(void)

longlong FUN_148c0de6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0de9a FUN_148c0de9a body=45 status=ok
// SIG undefined FUN_148c0de9a(void)

longlong FUN_148c0de9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dec8 FUN_148c0dec8 body=48 status=ok
// SIG undefined FUN_148c0dec8(void)

longlong FUN_148c0dec8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0def8 FUN_148c0def8 body=48 status=ok
// SIG undefined FUN_148c0def8(void)

longlong FUN_148c0def8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0df28 FUN_148c0df28 body=48 status=ok
// SIG undefined FUN_148c0df28(void)

longlong FUN_148c0df28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0df58 FUN_148c0df58 body=48 status=ok
// SIG undefined FUN_148c0df58(void)

longlong FUN_148c0df58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0df88 FUN_148c0df88 body=48 status=ok
// SIG undefined FUN_148c0df88(void)

longlong FUN_148c0df88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dfb8 FUN_148c0dfb8 body=48 status=ok
// SIG undefined FUN_148c0dfb8(void)

longlong FUN_148c0dfb8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0dfe8 FUN_148c0dfe8 body=48 status=ok
// SIG undefined FUN_148c0dfe8(void)

longlong FUN_148c0dfe8(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e018 FUN_148c0e018 body=48 status=ok
// SIG undefined FUN_148c0e018(void)

longlong FUN_148c0e018(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e048 FUN_148c0e048 body=48 status=ok
// SIG undefined FUN_148c0e048(void)

longlong FUN_148c0e048(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e078 FUN_148c0e078 body=45 status=ok
// SIG undefined FUN_148c0e078(void)

longlong FUN_148c0e078(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e0a6 FUN_148c0e0a6 body=48 status=ok
// SIG undefined FUN_148c0e0a6(void)

longlong FUN_148c0e0a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e0d6 FUN_148c0e0d6 body=48 status=ok
// SIG undefined FUN_148c0e0d6(void)

longlong FUN_148c0e0d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e106 FUN_148c0e106 body=48 status=ok
// SIG undefined FUN_148c0e106(void)

longlong FUN_148c0e106(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e136 FUN_148c0e136 body=48 status=ok
// SIG undefined FUN_148c0e136(void)

longlong FUN_148c0e136(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e166 FUN_148c0e166 body=48 status=ok
// SIG undefined FUN_148c0e166(void)

longlong FUN_148c0e166(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e196 FUN_148c0e196 body=48 status=ok
// SIG undefined FUN_148c0e196(void)

longlong FUN_148c0e196(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e1c6 FUN_148c0e1c6 body=48 status=ok
// SIG undefined FUN_148c0e1c6(void)

longlong FUN_148c0e1c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e1f6 FUN_148c0e1f6 body=48 status=ok
// SIG undefined FUN_148c0e1f6(void)

longlong FUN_148c0e1f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e226 FUN_148c0e226 body=48 status=ok
// SIG undefined FUN_148c0e226(void)

longlong FUN_148c0e226(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e256 FUN_148c0e256 body=48 status=ok
// SIG undefined FUN_148c0e256(void)

longlong FUN_148c0e256(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


