// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487668da FUN_1487668da body=54 status=ok
// SIG undefined FUN_1487668da(void)

undefined1 FUN_1487668da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487669cc(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148766938 FUN_148766938 body=59 status=ok
// SIG undefined FUN_148766938(void)

undefined8 FUN_148766938(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487669cc FUN_1487669cc body=69 status=ok
// SIG undefined FUN_1487669cc(void)

longlong FUN_1487669cc(longlong param_1,longlong param_2)

{
  FUN_140d02432();
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  if ((*(longlong *)(param_1 + 0x58) != *(longlong *)(param_2 + 0x58)) ||
     (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60))) {
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return param_1;
}



// FUNCTION 148766a30 FUN_148766a30 body=63 status=ok
// SIG undefined FUN_148766a30(void)

undefined1 FUN_148766a30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148766b4c(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 148766a98 FUN_148766a98 body=59 status=ok
// SIG undefined FUN_148766a98(void)

undefined8 FUN_148766a98(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148766ae4 FUN_148766ae4 body=38 status=ok
// SIG undefined FUN_148766ae4(void)

void FUN_148766ae4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_141003128(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 148766b4c FUN_148766b4c body=94 status=ok
// SIG undefined FUN_148766b4c(void)

longlong FUN_148766b4c(longlong param_1,longlong param_2)

{
  FUN_140e8aa92();
  FUN_140d02432(param_1 + 0x68,param_2 + 0x68);
  FUN_140d02432(param_1 + 0xb8,param_2 + 0xb8);
  FUN_1403726b4(param_1 + 0x108,param_2 + 0x108);
  FUN_140372704(param_1 + 0x118,param_2 + 0x118);
  return param_1;
}



// FUNCTION 148766baa FUN_148766baa body=115 status=ok
// SIG undefined FUN_148766baa(void)

void FUN_148766baa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148766c1d FUN_148766c1d body=44 status=ok
// SIG undefined FUN_148766c1d(void)

void FUN_148766c1d(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148766c4a FUN_148766c4a body=111 status=ok
// SIG undefined FUN_148766c4a(void)

void FUN_148766c4a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148766cb9 FUN_148766cb9 body=137 status=ok
// SIG undefined FUN_148766cb9(void)

void FUN_148766cb9(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_144a7f96e(param_1,param_2);
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
      *(undefined8 *)(param_1 + 0x60) = 0;
      param_1 = param_1 + 0x70;
      param_2 = param_2 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148766dc2 FUN_148766dc2 body=133 status=ok
// SIG undefined FUN_148766dc2(void)

undefined1 FUN_148766dc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1403726b4(param_2 + lVar6 + 0x18,param_3 + lVar6 + 0x18);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_140372704(lVar1 + 0x28,lVar2 + 0x28);
      uVar3 = *(undefined4 *)(lVar2 + 0x3c);
      uVar4 = *(undefined4 *)(lVar2 + 0x40);
      uVar5 = *(undefined4 *)(lVar2 + 0x44);
      *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
      *(undefined4 *)(lVar1 + 0x3c) = uVar3;
      *(undefined4 *)(lVar1 + 0x40) = uVar4;
      *(undefined4 *)(lVar1 + 0x44) = uVar5;
      lVar6 = lVar6 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148766e70 FUN_148766e70 body=59 status=ok
// SIG undefined FUN_148766e70(void)

undefined8 FUN_148766e70(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148766eb6 FUN_148766eb6 body=32 status=ok
// SIG undefined FUN_148766eb6(void)

void FUN_148766eb6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_140485ace(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148766f24 FUN_148766f24 body=38 status=ok
// SIG undefined FUN_148766f24(void)

undefined8 FUN_148766f24(undefined8 param_1,int param_2)

{
  FUN_140485ace();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148766f4a FUN_148766f4a body=55 status=ok
// SIG undefined FUN_148766f4a(void)

void FUN_148766f4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a7b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a7b8 = FUN_140002ddd(FUN_1465271cf,uVar1,L"ItemPoolProviderDef");
  }
  return;
}



// FUNCTION 148766f82 FUN_148766f82 body=41 status=ok
// SIG undefined FUN_148766f82(void)

void FUN_148766f82(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Inventory/ItemPools/ItemPool.h"
                ,0xf6,L"Pure virtual not implemented (%s)",L"FItemPoolProviderDef::GetItemPools");
  return;
}



// FUNCTION 14876703a FUN_14876703a body=87 status=ok
// SIG undefined FUN_14876703a(void)

undefined8 FUN_14876703a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e8aa92(param_2,param_3);
    FUN_140d02432(param_2 + 0x68,param_3 + 0x68);
    *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_3 + 0xb8);
    param_2 = param_2 + 0xc0;
    param_3 = param_3 + 0xc0;
  }
  return 1;
}



// FUNCTION 1487670ba FUN_1487670ba body=59 status=ok
// SIG undefined FUN_1487670ba(void)

undefined8 FUN_1487670ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148767106 FUN_148767106 body=38 status=ok
// SIG undefined FUN_148767106(void)

void FUN_148767106(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_140485912(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 14876718e FUN_14876718e body=63 status=ok
// SIG undefined FUN_14876718e(void)

undefined1 FUN_14876718e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487672aa(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 1487671f6 FUN_1487671f6 body=59 status=ok
// SIG undefined FUN_1487671f6(void)

undefined8 FUN_1487671f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148767242 FUN_148767242 body=38 status=ok
// SIG undefined FUN_148767242(void)

void FUN_148767242(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_1487675ba(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1487672aa FUN_1487672aa body=241 status=ok
// SIG undefined FUN_1487672aa(void)

longlong FUN_1487672aa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_1403726b4(param_1 + 0x18,param_2 + 0x18);
  FUN_140372704(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_14876739c(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  FUN_140d02432(param_1 + 0x60,param_2 + 0x60);
  if ((*(longlong *)(param_1 + 0xb0) != *(longlong *)(param_2 + 0xb0)) ||
     (*(int *)(param_1 + 0xb8) != *(int *)(param_2 + 0xb8))) {
    *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if ((*(longlong *)(param_1 + 200) != *(longlong *)(param_2 + 200)) ||
     (*(int *)(param_1 + 0xd0) != *(int *)(param_2 + 0xd0))) {
    *(longlong *)(param_1 + 200) = *(longlong *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_1487673fa(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



// FUNCTION 14876739c FUN_14876739c body=93 status=ok
// SIG undefined FUN_14876739c(void)

undefined8 * FUN_14876739c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1404858e9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14876744e(param_1,iVar1);
      FUN_1487674c1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487673fa FUN_1487673fa body=84 status=ok
// SIG undefined FUN_1487673fa(void)

longlong * FUN_1487673fa(longlong *param_1,longlong *param_2)

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



// FUNCTION 14876744e FUN_14876744e body=115 status=ok
// SIG undefined FUN_14876744e(void)

void FUN_14876744e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,8);
    iVar2 = (int)(uVar1 / 0xc0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487674c1 FUN_1487674c1 body=60 status=ok
// SIG undefined FUN_1487674c1(void)

void FUN_1487674c1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487674fe(param_1,param_2);
    param_1 = param_1 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return;
}



// FUNCTION 1487674fe FUN_1487674fe body=186 status=ok
// SIG undefined FUN_1487674fe(void)

undefined8 * FUN_1487674fe(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14b023b08;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x20);
  FUN_1401f3da4(param_1 + 5,param_2 + 0x28);
  FUN_143c7bde4(param_1 + 8,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  FUN_144a7f96e(param_1 + 0xe,param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x12] = uVar1;
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 1487675ba FUN_1487675ba body=57 status=ok
// SIG undefined FUN_1487675ba(void)

void FUN_1487675ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b318510;
  FUN_1404858e9(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140485ace(param_1);
  return;
}



// FUNCTION 148767644 FUN_148767644 body=63 status=ok
// SIG undefined FUN_148767644(void)

undefined1 FUN_148767644(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487677ae(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1487676ac FUN_1487676ac body=59 status=ok
// SIG undefined FUN_1487676ac(void)

undefined8 FUN_1487676ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487676f8 FUN_1487676f8 body=38 status=ok
// SIG undefined FUN_1487676f8(void)

void FUN_1487676f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_148767764(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148767764 FUN_148767764 body=73 status=ok
// SIG undefined FUN_148767764(void)

void FUN_148767764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b316d10;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140c1e521(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140485ace(param_1);
  return;
}



// FUNCTION 1487677ae FUN_1487677ae body=111 status=ok
// SIG undefined FUN_1487677ae(void)

longlong FUN_1487677ae(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_1403726b4(param_1 + 0x18,param_2 + 0x18);
  FUN_140372704(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_14876781e(param_1 + 0x48,param_2 + 0x48);
  FUN_14876787c(param_1 + 0x58,param_2 + 0x58);
  FUN_1487673fa(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 14876781e FUN_14876781e body=93 status=ok
// SIG undefined FUN_14876781e(void)

undefined8 * FUN_14876781e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c1e521(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487678cc(param_1,iVar1);
      FUN_14876793e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14876787c FUN_14876787c body=79 status=ok
// SIG undefined FUN_14876787c(void)

undefined8 * FUN_14876787c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148767b2c(param_1,iVar1);
      FUN_148767b9f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487678cc FUN_1487678cc body=114 status=ok
// SIG undefined FUN_1487678cc(void)

void FUN_1487678cc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x128,8);
    iVar2 = (int)(uVar1 / 0x128);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x128,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14876793e FUN_14876793e body=60 status=ok
// SIG undefined FUN_14876793e(void)

void FUN_14876793e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14876797a(param_1,param_2);
    param_1 = param_1 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return;
}



// FUNCTION 14876797a FUN_14876797a body=434 status=ok
// SIG undefined FUN_14876797a(void)

undefined8 * FUN_14876797a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b023b08;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x20);
  FUN_1401f3da4(param_1 + 5,param_2 + 0x28);
  FUN_143c7bde4(param_1 + 8,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  FUN_144a7f96e(param_1 + 0xe,param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x12] = uVar2;
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  FUN_144a7f96e(param_1 + 0x18,param_2 + 0xc0);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  param_1[0x1b] = *(undefined8 *)(param_2 + 0xd8);
  param_1[0x1c] = uVar2;
  param_1[0x1d] = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0xf0);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x100);
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x110);
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  *(int *)(param_1 + 0x22) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_148766baa(param_1 + 0x21,iVar1,0);
    FUN_148766c1d(param_1[0x21],uVar2,iVar1);
  }
  param_1[0x23] = 0;
  iVar1 = *(int *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  *(int *)(param_1 + 0x24) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  else {
    FUN_148766c4a(param_1 + 0x23,iVar1,0);
    FUN_148766cb9(param_1[0x23],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148767b2c FUN_148767b2c body=115 status=ok
// SIG undefined FUN_148767b2c(void)

void FUN_148767b2c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148767b9f FUN_148767b9f body=44 status=ok
// SIG undefined FUN_148767b9f(void)

void FUN_148767b9f(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148767bcc FUN_148767bcc body=104 status=ok
// SIG undefined FUN_148767bcc(void)

undefined8 FUN_148767bcc(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14655409c(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148767c36 FUN_148767c36 body=28 status=ok
// SIG undefined FUN_148767c36(void)

undefined8 FUN_148767c36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148767cbe FUN_148767cbe body=109 status=ok
// SIG undefined FUN_148767cbe(void)

undefined8 FUN_148767cbe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_140e8aa92(param_2,piVar1 + 4);
      piVar1 = piVar1 + 0x20;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148767d54 FUN_148767d54 body=59 status=ok
// SIG undefined FUN_148767d54(void)

undefined8 FUN_148767d54(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148767da0 FUN_148767da0 body=39 status=ok
// SIG undefined FUN_148767da0(void)

void FUN_148767da0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_140485912(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148767e0c FUN_148767e0c body=473 status=ok
// SIG undefined FUN_148767e0c(void)

void FUN_148767e0c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
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
  local_38 = 0;
  local_30 = 0x1030;
  local_28 = 0;
  FUN_1446ef920();
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_38;
  local_68 = local_30;
  local_60 = 0;
  FUN_143dadb1e(local_20,&local_70,local_40,plVar1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148767fe6 FUN_148767fe6 body=633 status=ok
// SIG undefined FUN_148767fe6(void)

void FUN_148767fe6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68 [4];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
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
  local_30 = 0x1030;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_68[3] = 0;
  local_48 = 0xc000;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 3);
  }
  local_68[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
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
  local_a8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_a8 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_68[3];
  local_78 = local_48;
  local_70 = 0;
  local_98 = local_38;
  local_90 = local_30;
  local_88 = 0;
  FUN_1488cf6ce(local_20,&local_98,&local_80,local_68[2]);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148768260 FUN_148768260 body=856 status=ok
// SIG undefined FUN_148768260(void)

void FUN_148768260(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168 [12];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  longlong local_d8 [3];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_a0 = 0;
  local_98 = 0x1030;
  local_90 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_b8 = 0;
  local_b0 = 0xc000;
  local_a8 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_c0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  local_178 = local_c0;
  local_170 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_170 = local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f0 = local_b8;
  local_e8 = local_b0;
  local_e0 = 0;
  local_108 = local_a0;
  local_100 = local_98;
  local_f8 = 0;
  puVar2 = local_88;
  puVar3 = local_168;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1488cfe0e(local_28);
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487685bc FUN_1487685bc body=390 status=ok
// SIG undefined FUN_1487685bc(void)

void FUN_1487685bc(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_40 = 0xdeadbeef;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  pplVar1 = local_58;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488da818(local_30,puVar2,pplVar1);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148768744 FUN_148768744 body=366 status=ok
// SIG undefined FUN_148768744(void)

void FUN_148768744(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488da6f6(local_28,puVar1,plVar2);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487688ba FUN_1487688ba body=242 status=ok
// SIG undefined FUN_1487688ba(void)

void FUN_1487688ba(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  puVar1 = &local_1c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148840efc(local_18,puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487689ae FUN_1487689ae body=299 status=ok
// SIG undefined FUN_1487689ae(void)

void FUN_1487689ae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
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
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined7 uStack_1f;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = CONCAT71(uStack_1f,local_20);
  local_68 = local_30;
  uStack_64 = uStack_2c;
  uStack_60 = uStack_28;
  uStack_5c = uStack_24;
  local_78 = local_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  FUN_148841258(local_18);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148768ada FUN_148768ada body=390 status=ok
// SIG undefined FUN_148768ada(void)

void FUN_148768ada(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_2c;
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
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
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
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = FUN_14477b664(uStack_40);
  local_58 = FUN_14477b664(uVar2);
  local_50 = local_38;
  FUN_148840f40(local_28,puVar3,&local_60);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148768c62 FUN_148768c62 body=262 status=ok
// SIG undefined FUN_148768c62(void)

void FUN_148768c62(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
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
  FUN_148840e58(local_20,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148768d6a FUN_148768d6a body=242 status=ok
// SIG undefined FUN_148768d6a(void)

void FUN_148768d6a(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  puVar1 = &local_1c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148841212(local_18,puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148768e6c FUN_148768e6c body=159 status=ok
// SIG undefined FUN_148768e6c(void)

void FUN_148768e6c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1488df3aa(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148768f46 FUN_148768f46 body=78 status=ok
// SIG undefined FUN_148768f46(void)

void FUN_148768f46(longlong param_1,longlong param_2,longlong *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_3 + 0x20))(param_3,0);
  param_3[1] = *(longlong *)(param_1 + 0x2d0);
  FUN_1406022fe(param_3 + 2,param_1 + 0x2d8);
  return;
}



// FUNCTION 1487690bc FUN_1487690bc body=158 status=ok
// SIG undefined FUN_1487690bc(void)

void FUN_1487690bc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1488dfa02(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876915c FUN_14876915c body=584 status=ok
// SIG undefined FUN_14876915c(void)

void FUN_14876915c(longlong *param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_278 [40];
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
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
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar1 = &local_250;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c8))(param_1,pppuVar1);
  FUN_140df0e32(&local_250);
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487693a6 FUN_1487693a6 body=119 status=ok
// SIG undefined FUN_1487693a6(void)

void FUN_1487693a6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488df948(param_1,&local_30);
  if ((*param_3 != local_30) || ((int)param_3[1] != local_28)) {
    *param_3 = local_30;
    *(int *)(param_3 + 1) = local_28;
    param_3[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14876941e FUN_14876941e body=206 status=ok
// SIG undefined FUN_14876941e(void)

void FUN_14876941e(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined7 local_3f;
  undefined1 uStack_38;
  undefined8 uStack_37;
  undefined8 local_2c;
  undefined8 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3f = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_2c = 0;
  uStack_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b8))(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487694ee FUN_1487694ee body=96 status=ok
// SIG undefined FUN_1487694ee(void)

void FUN_1487694ee(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6ab18);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769556 FUN_148769556 body=245 status=ok
// SIG undefined FUN_148769556(void)

void FUN_148769556(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876964c FUN_14876964c body=97 status=ok
// SIG undefined FUN_14876964c(void)

void FUN_14876964c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6ab28);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487696ae FUN_1487696ae body=242 status=ok
// SIG undefined FUN_1487696ae(void)

void FUN_1487696ae(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487697a2 FUN_1487697a2 body=96 status=ok
// SIG undefined FUN_1487697a2(void)

void FUN_1487697a2(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6ab38);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769804 FUN_148769804 body=241 status=ok
// SIG undefined FUN_148769804(void)

void FUN_148769804(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487698f6 FUN_1487698f6 body=156 status=ok
// SIG undefined FUN_1487698f6(void)

void FUN_1487698f6(undefined8 param_1,longlong param_2)

{
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
  FUN_1488e0010(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769994 FUN_148769994 body=156 status=ok
// SIG undefined FUN_148769994(void)

void FUN_148769994(undefined8 param_1,longlong param_2)

{
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
  FUN_1488e0178(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769a36 FUN_148769a36 body=158 status=ok
// SIG undefined FUN_148769a36(void)

void FUN_148769a36(undefined8 param_1,longlong param_2)

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
  FUN_1488df9ee(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769ad6 FUN_148769ad6 body=160 status=ok
// SIG undefined FUN_148769ad6(void)

void FUN_148769ad6(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488dfafa(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769b78 FUN_148769b78 body=156 status=ok
// SIG undefined FUN_148769b78(void)

void FUN_148769b78(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1488dfac6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769c30 FUN_148769c30 body=158 status=ok
// SIG undefined FUN_148769c30(void)

void FUN_148769c30(undefined8 param_1,longlong param_2)

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
  FUN_1460773fe(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769d0e FUN_148769d0e body=154 status=ok
// SIG undefined FUN_148769d0e(void)

undefined1 FUN_148769d0e(longlong param_1,undefined8 param_2,void *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120 [256];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_20 = 0;
  local_128 = param_2;
  memcpy(local_120,param_3,0x100);
  uVar1 = FUN_14477b072(param_1 + -0xa0,DAT_14cb6ac10);
  (**(code **)(*(longlong *)(param_1 + -0xa0) + 0x248))(param_1 + -0xa0,uVar1,&local_128);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769daa FUN_148769daa body=138 status=ok
// SIG undefined FUN_148769daa(void)

void FUN_148769daa(longlong param_1,undefined8 param_2,void *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = param_2;
  memcpy(local_118,param_3,0x100);
  uVar1 = FUN_14477b072(param_1 + -0xa0,DAT_14cb6ac20);
  (**(code **)(*(longlong *)(param_1 + -0xa0) + 0x248))(param_1 + -0xa0,uVar1,&local_120);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769e36 FUN_148769e36 body=138 status=ok
// SIG undefined FUN_148769e36(void)

void FUN_148769e36(longlong param_1,undefined8 param_2,void *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = param_2;
  memcpy(local_118,param_3,0x100);
  uVar1 = FUN_14477b072(param_1 + -0xa0,DAT_14cb6ac30);
  (**(code **)(*(longlong *)(param_1 + -0xa0) + 0x248))(param_1 + -0xa0,uVar1,&local_120);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148769fac FUN_148769fac body=45 status=ok
// SIG undefined FUN_148769fac(void)

longlong FUN_148769fac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a06634(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148769fe0 FUN_148769fe0 body=45 status=ok
// SIG undefined FUN_148769fe0(void)

longlong FUN_148769fe0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876a014 FUN_14876a014 body=45 status=ok
// SIG undefined FUN_14876a014(void)

longlong FUN_14876a014(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876a048 FUN_14876a048 body=48 status=ok
// SIG undefined FUN_14876a048(void)

longlong FUN_14876a048(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876a0c8 FUN_14876a0c8 body=59 status=ok
// SIG undefined FUN_14876a0c8(void)

undefined8 FUN_14876a0c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876a19e FUN_14876a19e body=148 status=ok
// SIG undefined FUN_14876a19e(void)

undefined8 FUN_14876a19e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      *(undefined4 *)(param_2 + 0x20 + lVar2) = *(undefined4 *)(param_3 + 0x20 + lVar2);
      *(undefined8 *)(param_2 + 0x18 + lVar2) = *(undefined8 *)(param_3 + 0x18 + lVar2);
      lVar1 = *(longlong *)(param_3 + 0x28 + lVar2);
      if ((*(longlong *)(param_2 + 0x28 + lVar2) != lVar1) ||
         (*(int *)(param_2 + 0x30 + lVar2) != *(int *)(param_3 + 0x30 + lVar2))) {
        *(longlong *)(param_2 + 0x28 + lVar2) = lVar1;
        *(undefined4 *)(param_2 + 0x30 + lVar2) = *(undefined4 *)(param_3 + 0x30 + lVar2);
        *(undefined8 *)(param_2 + 0x38 + lVar2) = 0;
      }
      lVar2 = lVar2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14876a25a FUN_14876a25a body=59 status=ok
// SIG undefined FUN_14876a25a(void)

undefined8 FUN_14876a25a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876a2a0 FUN_14876a2a0 body=43 status=ok
// SIG undefined FUN_14876a2a0(void)

void FUN_14876a2a0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14876a350 FUN_14876a350 body=63 status=ok
// SIG undefined FUN_14876a350(void)

undefined1 FUN_14876a350(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14876a47e(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14876a3b8 FUN_14876a3b8 body=59 status=ok
// SIG undefined FUN_14876a3b8(void)

undefined8 FUN_14876a3b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876a404 FUN_14876a404 body=40 status=ok
// SIG undefined FUN_14876a404(void)

void FUN_14876a404(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14876a65c(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14876a47e FUN_14876a47e body=103 status=ok
// SIG undefined FUN_14876a47e(void)

longlong FUN_14876a47e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if ((*(longlong *)(param_1 + 0x28) != *(longlong *)(param_2 + 0x28)) ||
     (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30))) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_14876a4e6(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 14876a4e6 FUN_14876a4e6 body=122 status=ok
// SIG undefined FUN_14876a4e6(void)

longlong FUN_14876a4e6(longlong param_1,longlong param_2)

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
    FUN_14876a560(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14876a560 FUN_14876a560 body=121 status=ok
// SIG undefined FUN_14876a560(void)

undefined8 * FUN_14876a560(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14876a5da(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 14876a5da FUN_14876a5da body=128 status=ok
// SIG undefined FUN_14876a5da(void)

void FUN_14876a5da(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 14876a65c FUN_14876a65c body=81 status=ok
// SIG undefined FUN_14876a65c(void)

void FUN_14876a65c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b322950;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14876a70c(param_1 + 8);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14876a6ae FUN_14876a6ae body=38 status=ok
// SIG undefined FUN_14876a6ae(void)

undefined8 FUN_14876a6ae(undefined8 param_1,int param_2)

{
  FUN_14876a65c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876a6d4 FUN_14876a6d4 body=55 status=ok
// SIG undefined FUN_14876a6d4(void)

void FUN_14876a6d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a898 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a898 = FUN_140002ddd(FUN_146527c97,uVar1,L"ItemPoolSelectorDef");
  }
  return;
}



// FUNCTION 14876a70c FUN_14876a70c body=54 status=ok
// SIG undefined FUN_14876a70c(void)

void FUN_14876a70c(longlong *param_1)

{
  FUN_14876a5da(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14876a776 FUN_14876a776 body=148 status=ok
// SIG undefined FUN_14876a776(void)

undefined8 FUN_14876a776(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      *(undefined4 *)(param_2 + 0x20 + lVar2) = *(undefined4 *)(param_3 + 0x20 + lVar2);
      *(undefined8 *)(param_2 + 0x18 + lVar2) = *(undefined8 *)(param_3 + 0x18 + lVar2);
      lVar1 = *(longlong *)(param_3 + 0x28 + lVar2);
      if ((*(longlong *)(param_2 + 0x28 + lVar2) != lVar1) ||
         (*(int *)(param_2 + 0x30 + lVar2) != *(int *)(param_3 + 0x30 + lVar2))) {
        *(longlong *)(param_2 + 0x28 + lVar2) = lVar1;
        *(undefined4 *)(param_2 + 0x30 + lVar2) = *(undefined4 *)(param_3 + 0x30 + lVar2);
        *(undefined8 *)(param_2 + 0x38 + lVar2) = 0;
      }
      lVar2 = lVar2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14876a832 FUN_14876a832 body=59 status=ok
// SIG undefined FUN_14876a832(void)

undefined8 FUN_14876a832(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876a878 FUN_14876a878 body=43 status=ok
// SIG undefined FUN_14876a878(void)

void FUN_14876a878(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14876a928 FUN_14876a928 body=63 status=ok
// SIG undefined FUN_14876a928(void)

undefined1 FUN_14876a928(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14876aa56(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14876a990 FUN_14876a990 body=59 status=ok
// SIG undefined FUN_14876a990(void)

undefined8 FUN_14876a990(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876a9dc FUN_14876a9dc body=40 status=ok
// SIG undefined FUN_14876a9dc(void)

void FUN_14876a9dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14876ac34(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14876aa56 FUN_14876aa56 body=103 status=ok
// SIG undefined FUN_14876aa56(void)

longlong FUN_14876aa56(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if ((*(longlong *)(param_1 + 0x28) != *(longlong *)(param_2 + 0x28)) ||
     (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30))) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_14876aabe(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 14876aabe FUN_14876aabe body=122 status=ok
// SIG undefined FUN_14876aabe(void)

longlong FUN_14876aabe(longlong param_1,longlong param_2)

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
    FUN_14876ab38(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14876ab38 FUN_14876ab38 body=121 status=ok
// SIG undefined FUN_14876ab38(void)

undefined8 * FUN_14876ab38(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14876abb2(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 14876abb2 FUN_14876abb2 body=128 status=ok
// SIG undefined FUN_14876abb2(void)

void FUN_14876abb2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 14876ac34 FUN_14876ac34 body=81 status=ok
// SIG undefined FUN_14876ac34(void)

void FUN_14876ac34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b322990;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14876ace4(param_1 + 8);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14876ac86 FUN_14876ac86 body=38 status=ok
// SIG undefined FUN_14876ac86(void)

undefined8 FUN_14876ac86(undefined8 param_1,int param_2)

{
  FUN_14876ac34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876acac FUN_14876acac body=55 status=ok
// SIG undefined FUN_14876acac(void)

void FUN_14876acac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a8c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a8c8 = FUN_140002ddd(FUN_146527dc3,uVar1,L"ItemPoolListSelectorDef");
  }
  return;
}



// FUNCTION 14876ace4 FUN_14876ace4 body=54 status=ok
// SIG undefined FUN_14876ace4(void)

void FUN_14876ace4(longlong *param_1)

{
  FUN_14876abb2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14876ad62 FUN_14876ad62 body=64 status=ok
// SIG undefined FUN_14876ad62(void)

undefined4 FUN_14876ad62(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876ae62 FUN_14876ae62 body=88 status=ok
// SIG undefined FUN_14876ae62(void)

undefined8 FUN_14876ae62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar7);
      uVar6 = puVar1[1];
      lVar2 = param_2 + 0x28 + lVar7;
      *(undefined8 *)(lVar2 + -0x28) = *puVar1;
      *(undefined8 *)(lVar2 + -0x20) = uVar6;
      *(undefined8 *)(lVar2 + -0x18) = puVar1[2];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      uVar4 = *(undefined4 *)(puVar1 + 4);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x24);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 3);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar7 = lVar7 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14876aee2 FUN_14876aee2 body=59 status=ok
// SIG undefined FUN_14876aee2(void)

undefined8 FUN_14876aee2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876af28 FUN_14876af28 body=38 status=ok
// SIG undefined FUN_14876af28(void)

void FUN_14876af28(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14876af9e FUN_14876af9e body=50 status=ok
// SIG undefined FUN_14876af9e(void)

void FUN_14876af9e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b321ba0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 14876afe6 FUN_14876afe6 body=75 status=ok
// SIG undefined FUN_14876afe6(void)

undefined1 FUN_14876afe6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_14876b14a(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14876b05a FUN_14876b05a body=59 status=ok
// SIG undefined FUN_14876b05a(void)

undefined8 FUN_14876b05a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876b0a0 FUN_14876b0a0 body=34 status=ok
// SIG undefined FUN_14876b0a0(void)

void FUN_14876b0a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14588513e(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14876b110 FUN_14876b110 body=57 status=ok
// SIG undefined FUN_14876b110(void)

void FUN_14876b110(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a9d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a9d0 = FUN_140002ddd(FUN_146528241,uVar1,L"LandingDef");
  }
  return;
}



// FUNCTION 14876b14a FUN_14876b14a body=95 status=ok
// SIG undefined FUN_14876b14a(void)

undefined8 * FUN_14876b14a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145885185(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14876b1aa(param_1,iVar1);
      FUN_14876b219(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14876b1aa FUN_14876b1aa body=111 status=ok
// SIG undefined FUN_14876b1aa(void)

void FUN_14876b1aa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14876b219 FUN_14876b219 body=52 status=ok
// SIG undefined FUN_14876b219(void)

void FUN_14876b219(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14876b24e(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 14876b24e FUN_14876b24e body=114 status=ok
// SIG undefined FUN_14876b24e(void)

undefined8 * FUN_14876b24e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  _Src = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14876b33a FUN_14876b33a body=59 status=ok
// SIG undefined FUN_14876b33a(void)

undefined8 FUN_14876b33a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876b3d8 FUN_14876b3d8 body=46 status=ok
// SIG undefined FUN_14876b3d8(void)

void FUN_14876b3d8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x160) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_2 + 0xcc) = 0;
  *(undefined8 *)(param_2 + 0x6c) = 0;
  return;
}



// FUNCTION 14876b444 FUN_14876b444 body=59 status=ok
// SIG undefined FUN_14876b444(void)

undefined8 FUN_14876b444(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876b490 FUN_14876b490 body=62 status=ok
// SIG undefined FUN_14876b490(void)

void FUN_14876b490(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    if (*(longlong *)(param_2 + 0x160) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_2 + 0xcc) = 0;
    *(undefined8 *)(param_2 + 0x6c) = 0;
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14876b55c FUN_14876b55c body=54 status=ok
// SIG undefined FUN_14876b55c(void)

undefined1 FUN_14876b55c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14876b65a(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 14876b5ba FUN_14876b5ba body=59 status=ok
// SIG undefined FUN_14876b5ba(void)

undefined8 FUN_14876b5ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876b65a FUN_14876b65a body=105 status=ok
// SIG undefined FUN_14876b65a(void)

longlong * FUN_14876b65a(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *param_2;
    }
  }
  bVar2 = DAT_14c950c29;
  *param_1 = lVar3;
  lVar3 = param_2[1];
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_2[1];
    }
  }
  param_1[1] = lVar3;
  *(int *)(param_1 + 2) = (int)param_2[2];
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
  return param_1;
}



// FUNCTION 14876b6f8 FUN_14876b6f8 body=54 status=ok
// SIG undefined FUN_14876b6f8(void)

undefined1 FUN_14876b6f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14876b7f6(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14876b756 FUN_14876b756 body=59 status=ok
// SIG undefined FUN_14876b756(void)

undefined8 FUN_14876b756(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876b7f6 FUN_14876b7f6 body=98 status=ok
// SIG undefined FUN_14876b7f6(void)

undefined1 * FUN_14876b7f6(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x10);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  return param_1;
}



// FUNCTION 14876b85a FUN_14876b85a body=54 status=ok
// SIG undefined FUN_14876b85a(void)

void FUN_14876b85a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  *(undefined4 *)((longlong)param_2 + 0xe0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0xffffffff;
  return;
}



// FUNCTION 14876b890 FUN_14876b890 body=72 status=ok
// SIG undefined FUN_14876b890(void)

void FUN_14876b890(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x110);
  *(undefined4 *)((longlong)param_2 + 0xe0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined1 *)((longlong)param_2 + 0x118) = 0;
  return;
}



// FUNCTION 14876b8f0 FUN_14876b8f0 body=136 status=ok
// SIG undefined FUN_14876b8f0(void)

undefined8 FUN_14876b8f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      memcpy(plVar1 + 2,(void *)(param_3 + lVar4 + 0x10),0x109);
      lVar4 = lVar4 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14876b9a0 FUN_14876b9a0 body=59 status=ok
// SIG undefined FUN_14876b9a0(void)

undefined8 FUN_14876b9a0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876ba54 FUN_14876ba54 body=31 status=ok
// SIG undefined FUN_14876ba54(void)

void FUN_14876ba54(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x220,0x10);
  FUN_140f5e2a8(uVar1);
  return;
}



// FUNCTION 14876baae FUN_14876baae body=63 status=ok
// SIG undefined FUN_14876baae(void)

undefined1 FUN_14876baae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14876bbd6(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 14876bb16 FUN_14876bb16 body=59 status=ok
// SIG undefined FUN_14876bb16(void)

undefined8 FUN_14876bb16(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876bb62 FUN_14876bb62 body=38 status=ok
// SIG undefined FUN_14876bb62(void)

void FUN_14876bb62(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_140d77c16(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 14876bbd6 FUN_14876bbd6 body=855 status=ok
// SIG undefined FUN_14876bbd6(void)

longlong FUN_14876bbd6(longlong param_1,longlong param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
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
  FUN_14876bf2e(param_1 + 0x40,param_2 + 0x40);
  uVar12 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar12;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  if ((*(longlong *)(param_1 + 0x88) != *(longlong *)(param_2 + 0x88)) ||
     (*(int *)(param_1 + 0x90) != *(int *)(param_2 + 0x90))) {
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_14065c7a4(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  uVar1 = *(undefined4 *)(param_2 + 0xbc);
  uVar2 = *(undefined4 *)(param_2 + 0xc0);
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  if ((*(longlong *)(param_1 + 0xd8) != *(longlong *)(param_2 + 0xd8)) ||
     (*(int *)(param_1 + 0xe0) != *(int *)(param_2 + 0xe0))) {
    *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  FUN_14065c7a4(param_1 + 0xf0,param_2 + 0xf0);
  uVar12 = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = uVar12;
  if ((*(longlong *)(param_1 + 0x110) != *(longlong *)(param_2 + 0x110)) ||
     (*(int *)(param_1 + 0x118) != *(int *)(param_2 + 0x118))) {
    *(longlong *)(param_1 + 0x110) = *(longlong *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if ((*(longlong *)(param_1 + 0x128) != *(longlong *)(param_2 + 0x128)) ||
     (*(int *)(param_1 + 0x130) != *(int *)(param_2 + 0x130))) {
    *(longlong *)(param_1 + 0x128) = *(longlong *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  *(undefined8 *)(param_1 + 0x16d) = *(undefined8 *)(param_2 + 0x16d);
  uVar1 = *(undefined4 *)(param_2 + 0x140);
  uVar2 = *(undefined4 *)(param_2 + 0x144);
  uVar3 = *(undefined4 *)(param_2 + 0x148);
  uVar4 = *(undefined4 *)(param_2 + 0x14c);
  uVar5 = *(undefined4 *)(param_2 + 0x150);
  uVar6 = *(undefined4 *)(param_2 + 0x154);
  uVar7 = *(undefined4 *)(param_2 + 0x158);
  uVar8 = *(undefined4 *)(param_2 + 0x15c);
  uVar9 = *(undefined4 *)(param_2 + 0x164);
  uVar10 = *(undefined4 *)(param_2 + 0x168);
  uVar11 = *(undefined4 *)(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x164) = uVar9;
  *(undefined4 *)(param_1 + 0x168) = uVar10;
  *(undefined4 *)(param_1 + 0x16c) = uVar11;
  *(undefined4 *)(param_1 + 0x150) = uVar5;
  *(undefined4 *)(param_1 + 0x154) = uVar6;
  *(undefined4 *)(param_1 + 0x158) = uVar7;
  *(undefined4 *)(param_1 + 0x15c) = uVar8;
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  *(undefined4 *)(param_1 + 0x148) = uVar3;
  *(undefined4 *)(param_1 + 0x14c) = uVar4;
  if ((*(longlong *)(param_1 + 0x178) != *(longlong *)(param_2 + 0x178)) ||
     (*(int *)(param_1 + 0x180) != *(int *)(param_2 + 0x180))) {
    *(longlong *)(param_1 + 0x178) = *(longlong *)(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  FUN_14861620a(param_1 + 400,param_2 + 400);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  uVar1 = *(undefined4 *)(param_2 + 0x1bc);
  uVar2 = *(undefined4 *)(param_2 + 0x1c0);
  uVar3 = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  *(undefined4 *)(param_1 + 0x1c4) = uVar3;
  FUN_144a787a6(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  FUN_1486162fa(param_1 + 0x1e8,param_2 + 0x1e8);
  uVar12 = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x200) = uVar12;
  if ((*(longlong *)(param_1 + 0x208) != *(longlong *)(param_2 + 0x208)) ||
     (*(int *)(param_1 + 0x210) != *(int *)(param_2 + 0x210))) {
    *(longlong *)(param_1 + 0x208) = *(longlong *)(param_2 + 0x208);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  uVar1 = *(undefined4 *)(param_2 + 0x22c);
  uVar2 = *(undefined4 *)(param_2 + 0x230);
  uVar3 = *(undefined4 *)(param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  *(undefined4 *)(param_1 + 0x234) = uVar3;
  FUN_144a787a6(param_1 + 0x238,param_2 + 0x238);
  uVar12 = *(undefined8 *)(param_2 + 0x250);
  uVar13 = *(undefined8 *)(param_2 + 600);
  uVar14 = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x250) = uVar12;
  *(undefined8 *)(param_1 + 600) = uVar13;
  *(undefined8 *)(param_1 + 0x260) = uVar14;
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  return param_1;
}



// FUNCTION 14876bf2e FUN_14876bf2e body=93 status=ok
// SIG undefined FUN_14876bf2e(void)

undefined8 * FUN_14876bf2e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d77d90(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14876bf8c(param_1,iVar1);
      FUN_14876bfff(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14876bf8c FUN_14876bf8c body=115 status=ok
// SIG undefined FUN_14876bf8c(void)

void FUN_14876bf8c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14876bfff FUN_14876bfff body=134 status=ok
// SIG undefined FUN_14876bfff(void)

void FUN_14876bfff(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 14876c086 FUN_14876c086 body=38 status=ok
// SIG undefined FUN_14876c086(void)

undefined8 FUN_14876c086(undefined8 param_1,int param_2)

{
  FUN_140d77c16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876c0ac FUN_14876c0ac body=55 status=ok
// SIG undefined FUN_14876c0ac(void)

void FUN_14876c0ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6aca8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6aca8 = FUN_140002ddd(FUN_1465283fc,uVar1,L"LightBeamDef");
  }
  return;
}



// FUNCTION 14876c0e6 FUN_14876c0e6 body=92 status=ok
// SIG undefined FUN_14876c0e6(void)

void FUN_14876c0e6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6ad88);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876c144 FUN_14876c144 body=92 status=ok
// SIG undefined FUN_14876c144(void)

void FUN_14876c144(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6ad98);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876c1ab FUN_14876c1ab body=102 status=ok
// SIG undefined FUN_14876c1ab(void)

void FUN_14876c1ab(longlong param_1,undefined8 param_2)

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



// FUNCTION 14876c212 FUN_14876c212 body=662 status=ok
// SIG undefined FUN_14876c212(void)

void FUN_14876c212(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_278 [39];
  byte local_251;
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
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
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  local_251 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_251);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_251);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (pppuVar1 == (undefined ***)0x0) {
    pppuVar1 = &local_250;
  }
  *(uint *)(pppuVar1 + 0x1c) =
       *(uint *)(pppuVar1 + 0x1c) &
       (-2 << (local_251 & 0x1f) | 0xfffffffeU >> 0x20 - (local_251 & 0x1f));
  FUN_140df0e32();
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876c4b0 FUN_14876c4b0 body=191 status=ok
// SIG undefined FUN_14876c4b0(void)

void FUN_14876c4b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_48 = 3;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0x34002;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1488e1782(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876c570 FUN_14876c570 body=315 status=ok
// SIG undefined FUN_14876c570(void)

void FUN_14876c570(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 3;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x34002;
  local_30 = 0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = &local_58;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = *puVar2;
  local_70 = puVar2[1];
  FUN_1488e1882(puVar1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876c6b4 FUN_14876c6b4 body=664 status=ok
// SIG undefined FUN_14876c6b4(void)

void FUN_14876c6b4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_278 [39];
  byte local_251;
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
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
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  local_251 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_251);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_251);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (pppuVar1 == (undefined ***)0x0) {
    pppuVar1 = &local_250;
  }
  *(bool *)param_3 = (*(uint *)(pppuVar1 + 0x1c) >> (local_251 & 0x1f) & 1) != 0;
  FUN_140df0e32();
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876c94e FUN_14876c94e body=662 status=ok
// SIG undefined FUN_14876c94e(void)

void FUN_14876c94e(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_278 [39];
  byte local_251;
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
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
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  local_251 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_251);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_251);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (pppuVar1 == (undefined ***)0x0) {
    pppuVar1 = &local_250;
  }
  *(uint *)(pppuVar1 + 0x1c) = *(uint *)(pppuVar1 + 0x1c) | 1 << (local_251 & 0x1f);
  FUN_140df0e32();
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876cbec FUN_14876cbec body=407 status=ok
// SIG undefined FUN_14876cbec(void)

void FUN_14876cbec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e16ae(local_18,local_20,local_28,local_2c != 0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876cd84 FUN_14876cd84 body=404 status=ok
// SIG undefined FUN_14876cd84(void)

void FUN_14876cd84(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e1714(local_18,local_20,local_28,local_2c);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876cf34 FUN_14876cf34 body=519 status=ok
// SIG undefined FUN_14876cf34(void)

void FUN_14876cf34(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  int local_154;
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_ac;
  undefined4 local_80;
  undefined8 local_50;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  memset(local_150,0,0x100);
  local_80 = 0xffffffff;
  local_14c = 0x3f800000;
  local_ac = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_154 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_154);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_154);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = local_154 != 0;
  puVar3 = local_150;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  (**(code **)(*param_1 + 0x3f0))(param_1,puVar2,local_50,puVar3);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876d158 FUN_14876d158 body=241 status=ok
// SIG undefined FUN_14876d158(void)

void FUN_14876d158(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
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
  FUN_14163f334(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876d24a FUN_14876d24a body=159 status=ok
// SIG undefined FUN_14876d24a(void)

void FUN_14876d24a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1488e1a76(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876d306 FUN_14876d306 body=38 status=ok
// SIG undefined FUN_14876d306(void)

void FUN_14876d306(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1465558f6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14876d32c FUN_14876d32c body=96 status=ok
// SIG undefined FUN_14876d32c(void)

void FUN_14876d32c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e1fb2(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876d38e FUN_14876d38e body=163 status=ok
// SIG undefined FUN_14876d38e(void)

void FUN_14876d38e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1488e2612(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876d44e FUN_14876d44e body=78 status=ok
// SIG undefined FUN_14876d44e(void)

void FUN_14876d44e(longlong param_1,longlong param_2,longlong *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_3 + 0x20))(param_3,0);
  param_3[1] = *(longlong *)(param_1 + 0x3c8);
  FUN_1406022fe(param_3 + 2,param_1 + 0x3d0);
  return;
}



// FUNCTION 14876d49c FUN_14876d49c body=37 status=ok
// SIG undefined FUN_14876d49c(void)

void FUN_14876d49c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1488e1b36();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14876d4c2 FUN_14876d4c2 body=92 status=ok
// SIG undefined FUN_14876d4c2(void)

void FUN_14876d4c2(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e1b90(param_1 + 0x30,&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876d53c FUN_14876d53c body=39 status=ok
// SIG undefined FUN_14876d53c(void)

void FUN_14876d53c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1488e1b3e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14876d564 FUN_14876d564 body=38 status=ok
// SIG undefined FUN_14876d564(void)

void FUN_14876d564(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1488e1b2a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14876d5c8 FUN_14876d5c8 body=162 status=ok
// SIG undefined FUN_14876d5c8(void)

void FUN_14876d5c8(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(bool *)param_3 = (*(ushort *)(param_1 + 0x3a8) >> (local_21 & 0x1f) & 1) != 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876d672 FUN_14876d672 body=163 status=ok
// SIG undefined FUN_14876d672(void)

void FUN_14876d672(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1488e1b48(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876d716 FUN_14876d716 body=194 status=ok
// SIG undefined FUN_14876d716(void)

void FUN_14876d716(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [456];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_140e35e6c(local_1e8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1e8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_1e8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2d0))(param_1,puVar1);
  FUN_140bba396(local_1e8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876d7de FUN_14876d7de body=37 status=ok
// SIG undefined FUN_14876d7de(void)

void FUN_14876d7de(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143dc12da();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14876d808 FUN_14876d808 body=43 status=ok
// SIG undefined FUN_14876d808(void)

void FUN_14876d808(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x68))(param_1 + 0x30);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14876d844 FUN_14876d844 body=492 status=ok
// SIG undefined FUN_14876d844(void)

void FUN_14876d844(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  int local_13c;
  int local_138;
  undefined4 local_134;
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_134 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_134);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_134);
  }
  local_138 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  iVar2 = local_138;
  local_13c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_13c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_13c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_148 = local_13c != 0;
  puVar3 = local_130;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  (**(code **)(*param_1 + 1000))(param_1,puVar3,local_134,iVar2 != 0);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876da32 FUN_14876da32 body=119 status=ok
// SIG undefined FUN_14876da32(void)

void FUN_14876da32(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e23fc(param_1,&local_30);
  if ((*param_3 != local_30) || ((int)param_3[1] != local_28)) {
    *param_3 = local_30;
    *(int *)(param_3 + 1) = local_28;
    param_3[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14876daaa FUN_14876daaa body=264 status=ok
// SIG undefined FUN_14876daaa(void)

void FUN_14876daaa(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e218c(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876dbb4 FUN_14876dbb4 body=156 status=ok
// SIG undefined FUN_14876dbb4(void)

void FUN_14876dbb4(undefined8 param_1,longlong param_2)

{
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
  FUN_1488e214e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876dc52 FUN_14876dc52 body=156 status=ok
// SIG undefined FUN_14876dc52(void)

void FUN_14876dc52(undefined8 param_1,longlong param_2)

{
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
  FUN_1488e2184(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876dcf4 FUN_14876dcf4 body=158 status=ok
// SIG undefined FUN_14876dcf4(void)

void FUN_14876dcf4(undefined8 param_1,longlong param_2)

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
  FUN_1488e2194(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876dd98 FUN_14876dd98 body=162 status=ok
// SIG undefined FUN_14876dd98(void)

void FUN_14876dd98(longlong param_1,longlong param_2)

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
  FUN_1488e1d40(param_1 + 0x30,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876de40 FUN_14876de40 body=162 status=ok
// SIG undefined FUN_14876de40(void)

void FUN_14876de40(longlong param_1,longlong param_2)

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
  FUN_143dc13e8(param_1 + 0x30,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876dee4 FUN_14876dee4 body=441 status=ok
// SIG undefined FUN_14876dee4(void)

void FUN_14876dee4(longlong param_1,longlong param_2)

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
  FUN_143dc19e0(param_1 + 0x30,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876e09e FUN_14876e09e body=168 status=ok
// SIG undefined FUN_14876e09e(void)

void FUN_14876e09e(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_143dc1b8a(param_1 + 0x30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876e148 FUN_14876e148 body=156 status=ok
// SIG undefined FUN_14876e148(void)

void FUN_14876e148(undefined8 param_1,longlong param_2)

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
  FUN_1488e1af4(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876e1e6 FUN_14876e1e6 body=160 status=ok
// SIG undefined FUN_14876e1e6(void)

void FUN_14876e1e6(longlong param_1,longlong param_2)

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
  FUN_143dc16a8(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876e294 FUN_14876e294 body=45 status=ok
// SIG undefined FUN_14876e294(void)

longlong FUN_14876e294(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141245aa8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876e2ce FUN_14876e2ce body=45 status=ok
// SIG undefined FUN_14876e2ce(void)

longlong FUN_14876e2ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_141245aa8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876e34a FUN_14876e34a body=59 status=ok
// SIG undefined FUN_14876e34a(void)

undefined8 FUN_14876e34a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876e3ec FUN_14876e3ec body=40 status=ok
// SIG undefined FUN_14876e3ec(void)

void FUN_14876e3ec(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b32b5a0;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) | 6;
  *(undefined1 *)(param_2 + 1) = 6;
  return;
}



// FUNCTION 14876e414 FUN_14876e414 body=40 status=ok
// SIG undefined FUN_14876e414(void)

void FUN_14876e414(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b32b5a0;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) | 6;
  *(undefined1 *)(param_2 + 1) = 6;
  return;
}



// FUNCTION 14876e48c FUN_14876e48c body=59 status=ok
// SIG undefined FUN_14876e48c(void)

undefined8 FUN_14876e48c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876e4d2 FUN_14876e4d2 body=32 status=ok
// SIG undefined FUN_14876e4d2(void)

void FUN_14876e4d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14876e542 FUN_14876e542 body=61 status=ok
// SIG undefined FUN_14876e542(void)

void FUN_14876e542(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b32b5d0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) & 0xf9 | 2;
  *(undefined1 *)(param_2 + 1) = 5;
  return;
}



// FUNCTION 14876e580 FUN_14876e580 body=61 status=ok
// SIG undefined FUN_14876e580(void)

void FUN_14876e580(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b32b5d0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) & 0xf9 | 2;
  *(undefined1 *)(param_2 + 1) = 5;
  return;
}



// FUNCTION 14876e60e FUN_14876e60e body=59 status=ok
// SIG undefined FUN_14876e60e(void)

undefined8 FUN_14876e60e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876e654 FUN_14876e654 body=32 status=ok
// SIG undefined FUN_14876e654(void)

void FUN_14876e654(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14876e6c2 FUN_14876e6c2 body=38 status=ok
// SIG undefined FUN_14876e6c2(void)

undefined8 FUN_14876e6c2(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876e722 FUN_14876e722 body=104 status=ok
// SIG undefined FUN_14876e722(void)

undefined1 FUN_14876e722(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14876e7b2 FUN_14876e7b2 body=59 status=ok
// SIG undefined FUN_14876e7b2(void)

undefined8 FUN_14876e7b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876e854 FUN_14876e854 body=38 status=ok
// SIG undefined FUN_14876e854(void)

undefined8 FUN_14876e854(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876e8fa FUN_14876e8fa body=59 status=ok
// SIG undefined FUN_14876e8fa(void)

undefined8 FUN_14876e8fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876e9f6 FUN_14876e9f6 body=59 status=ok
// SIG undefined FUN_14876e9f6(void)

undefined8 FUN_14876e9f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876eae6 FUN_14876eae6 body=59 status=ok
// SIG undefined FUN_14876eae6(void)

undefined8 FUN_14876eae6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876eb32 FUN_14876eb32 body=38 status=ok
// SIG undefined FUN_14876eb32(void)

void FUN_14876eb32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_140df0e32(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 14876ebee FUN_14876ebee body=59 status=ok
// SIG undefined FUN_14876ebee(void)

undefined8 FUN_14876ebee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876ec3a FUN_14876ec3a body=47 status=ok
// SIG undefined FUN_14876ec3a(void)

void FUN_14876ec3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    if (*(longlong *)(param_2 + 0x118) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 14876ed22 FUN_14876ed22 body=59 status=ok
// SIG undefined FUN_14876ed22(void)

undefined8 FUN_14876ed22(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876ee08 FUN_14876ee08 body=59 status=ok
// SIG undefined FUN_14876ee08(void)

undefined8 FUN_14876ee08(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876eeee FUN_14876eeee body=59 status=ok
// SIG undefined FUN_14876eeee(void)

undefined8 FUN_14876eeee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f09c FUN_14876f09c body=418 status=ok
// SIG undefined FUN_14876f09c(void)

void FUN_14876f09c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined2 local_32;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
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
  local_32 = 0;
  FUN_140e98e1a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_32);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_32);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_32;
  (**(code **)(*param_1 + 0x640))(param_1,local_1c,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f240 FUN_14876f240 body=257 status=ok
// SIG undefined FUN_14876f240(void)

void FUN_14876f240(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
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
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  (**(code **)(*param_1 + 0x638))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f346 FUN_14876f346 body=96 status=ok
// SIG undefined FUN_14876f346(void)

void FUN_14876f346(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b1e8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f3a8 FUN_14876f3a8 body=92 status=ok
// SIG undefined FUN_14876f3a8(void)

void FUN_14876f3a8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b1f8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f406 FUN_14876f406 body=156 status=ok
// SIG undefined FUN_14876f406(void)

void FUN_14876f406(longlong *param_1,undefined8 param_2,void *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined1 local_138 [256];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = param_2;
  memcpy(local_138,param_3,0x100);
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_28 = *(undefined8 *)(param_4 + 4);
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b208);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_140);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f4a4 FUN_14876f4a4 body=92 status=ok
// SIG undefined FUN_14876f4a4(void)

void FUN_14876f4a4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b218);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f502 FUN_14876f502 body=141 status=ok
// SIG undefined FUN_14876f502(void)

void FUN_14876f502(longlong *param_1,undefined8 param_2,void *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined1 local_128 [256];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130 = param_2;
  memcpy(local_128,param_3,0x100);
  local_28 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b228);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_130);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f598 FUN_14876f598 body=92 status=ok
// SIG undefined FUN_14876f598(void)

void FUN_14876f598(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b238);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f5f6 FUN_14876f5f6 body=156 status=ok
// SIG undefined FUN_14876f5f6(void)

void FUN_14876f5f6(longlong *param_1,undefined8 param_2,void *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined1 local_138 [256];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = param_2;
  memcpy(local_138,param_3,0x100);
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_28 = *(undefined8 *)(param_4 + 4);
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b248);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_140);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f694 FUN_14876f694 body=96 status=ok
// SIG undefined FUN_14876f694(void)

void FUN_14876f694(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b258);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f6f6 FUN_14876f6f6 body=92 status=ok
// SIG undefined FUN_14876f6f6(void)

void FUN_14876f6f6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b268);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f754 FUN_14876f754 body=125 status=ok
// SIG undefined FUN_14876f754(void)

void FUN_14876f754(longlong *param_1,undefined8 param_2,void *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110 [256];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = param_2;
  memcpy(local_110,param_3,0x100);
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b278);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_118);
  if ((local_10 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f7d2 FUN_14876f7d2 body=125 status=ok
// SIG undefined FUN_14876f7d2(void)

void FUN_14876f7d2(longlong *param_1,undefined8 param_2,void *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110 [256];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = param_2;
  memcpy(local_110,param_3,0x100);
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b288);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_118);
  if ((local_10 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f850 FUN_14876f850 body=92 status=ok
// SIG undefined FUN_14876f850(void)

void FUN_14876f850(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b298);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f8ae FUN_14876f8ae body=156 status=ok
// SIG undefined FUN_14876f8ae(void)

void FUN_14876f8ae(longlong *param_1,undefined8 param_2,void *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined1 local_138 [256];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = param_2;
  memcpy(local_138,param_3,0x100);
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_28 = *(undefined8 *)(param_4 + 4);
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b2a8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_140);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f94c FUN_14876f94c body=125 status=ok
// SIG undefined FUN_14876f94c(void)

void FUN_14876f94c(longlong *param_1,undefined8 param_2,void *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110 [256];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = param_2;
  memcpy(local_110,param_3,0x100);
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b2b8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_118);
  if ((local_10 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876f9ca FUN_14876f9ca body=92 status=ok
// SIG undefined FUN_14876f9ca(void)

void FUN_14876f9ca(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6b2c8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876fa34 FUN_14876fa34 body=102 status=ok
// SIG undefined FUN_14876fa34(void)

void FUN_14876fa34(longlong param_1,undefined8 param_2)

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



// FUNCTION 14876fa9c FUN_14876fa9c body=266 status=ok
// SIG undefined FUN_14876fa9c(void)

void FUN_14876fa9c(undefined8 param_1,longlong param_2)

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
  FUN_1488e6914(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876fba8 FUN_14876fba8 body=274 status=ok
// SIG undefined FUN_14876fba8(void)

void FUN_14876fba8(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_218 [47];
  byte local_1e9;
  undefined1 local_1e8 [456];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_140e35e6c(local_1e8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1e8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_1e9 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e9);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_1e8;
  }
  *(uint *)(puVar1 + 0x68) =
       *(uint *)(puVar1 + 0x68) &
       (-2 << (local_1e9 & 0x1f) | 0xfffffffeU >> 0x20 - (local_1e9 & 0x1f));
  FUN_140bba396(local_1e8);
  if ((local_20 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876fcc2 FUN_14876fcc2 body=464 status=ok
// SIG undefined FUN_14876fcc2(void)

void FUN_14876fcc2(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  undefined *local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = 0;
  local_78 = 3;
  local_70 = 0;
  local_68 = 0x34001;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1405c5fa2();
  local_48 = &DAT_14cb769e8;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = &PTR_FUN_14b0394b0;
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
  local_98 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar3 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = *puVar3;
  local_a0 = puVar3[1];
  FUN_1488e62de(puVar2);
  local_50 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_38 >> 0x20;
  uStack_38 = uStack_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_40,0);
  }
  local_48 = (undefined *)0x0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876fe9c FUN_14876fe9c body=282 status=ok
// SIG undefined FUN_14876fe9c(void)

void FUN_14876fe9c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_218 [39];
  byte local_1f1;
  undefined1 local_1f0 [456];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_140e35e6c(local_1f0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1f0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_1f1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1f1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1f1);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_1f0;
  }
  *(bool *)param_3 = (*(uint *)(puVar1 + 0x68) >> (local_1f1 & 0x1f) & 1) != 0;
  FUN_140bba396(local_1f0);
  if ((local_28 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876ffb8 FUN_14876ffb8 body=308 status=ok
// SIG undefined FUN_14876ffb8(void)

void FUN_14876ffb8(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  undefined *local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  local_78 = 3;
  local_70 = 0;
  local_68 = 0x34001;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1405c5fa2();
  local_48 = &DAT_14cb769e8;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = &PTR_FUN_14b0394b0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_80;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143dd04a6(puVar2);
  local_50 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_38 >> 0x20;
  uStack_38 = uStack_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_40,0);
  }
  local_48 = (undefined *)0x0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487700f4 FUN_1487700f4 body=406 status=ok
// SIG undefined FUN_1487700f4(void)

void FUN_1487700f4(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [36];
  int local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  undefined *local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  local_78 = 3;
  local_70 = 0;
  local_68 = 0x34001;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1405c5fa2();
  local_48 = &DAT_14cb769e8;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = &PTR_FUN_14b0394b0;
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
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e64aa(puVar2,local_84 != 0);
  local_50 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_38 >> 0x20;
  uStack_38 = uStack_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_40,0);
  }
  local_48 = (undefined *)0x0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877028c FUN_14877028c body=274 status=ok
// SIG undefined FUN_14877028c(void)

void FUN_14877028c(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_218 [47];
  byte local_1e9;
  undefined1 local_1e8 [456];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_140e35e6c(local_1e8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1e8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_1e9 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e9);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_1e8;
  }
  *(uint *)(puVar1 + 0x68) = *(uint *)(puVar1 + 0x68) | 1 << (local_1e9 & 0x1f);
  FUN_140bba396(local_1e8);
  if ((local_20 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487703a0 FUN_1487703a0 body=767 status=ok
// SIG undefined FUN_1487703a0(void)

void FUN_1487703a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_548 [32];
  undefined8 local_528 [12];
  int local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_470;
  undefined7 uStack_46f;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 uStack_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 uStack_438;
  undefined4 local_430;
  undefined8 uStack_42c;
  undefined4 uStack_424;
  undefined1 local_420 [16];
  undefined2 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined4 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined1 local_3c0 [456];
  undefined1 local_1f8 [456];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_548;
  FUN_140e35e6c(local_1f8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1f8);
  }
  local_420[0] = 0;
  local_420._4_8_ = 0;
  local_410 = 0;
  local_408 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_400 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_3f8 = DAT_14c846508;
  local_3f0 = 0;
  local_3ec = 0;
  local_3e0 = 0;
  local_3d8 = (undefined4)DAT_14c8464e0;
  uStack_3d4 = DAT_14c8464e0._4_4_;
  uStack_3d0 = (undefined4)DAT_14c8464e8;
  uStack_3cc = DAT_14c8464e8._4_4_;
  local_3c8 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_420);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_420);
  }
  local_450 = (uint)local_450._2_2_ << 0x10;
  uStack_448 = (undefined4)DAT_14c8464f8;
  uStack_444 = DAT_14c8464f8._4_4_;
  uStack_440 = (undefined4)DAT_14c846500;
  uStack_43c = DAT_14c846500._4_4_;
  uStack_438 = DAT_14c846508;
  local_430 = 0;
  uStack_42c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_450);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_450);
  }
  local_470 = 0;
  uStack_468 = (undefined4)DAT_14c8464e0;
  uStack_464 = DAT_14c8464e0._4_4_;
  uStack_460 = (undefined4)DAT_14c8464e8;
  uStack_45c = DAT_14c8464e8._4_4_;
  uStack_458 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_470);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_470);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_498 = CONCAT71(uStack_46f,local_470);
  uStack_490 = CONCAT44(uStack_464,uStack_468);
  local_488 = CONCAT44(uStack_45c,uStack_460);
  uStack_480 = uStack_458;
  local_4c8 = local_450;
  uStack_4c4 = uStack_44c;
  uStack_4c0 = uStack_448;
  uStack_4bc = uStack_444;
  local_4b8 = uStack_440;
  uStack_4b4 = uStack_43c;
  uStack_4b0 = (undefined4)uStack_438;
  uStack_4ac = uStack_438._4_4_;
  local_4a8 = local_430;
  uStack_4a4 = (undefined4)uStack_42c;
  uStack_4a0 = uStack_42c._4_4_;
  uStack_49c = uStack_424;
  puVar2 = (undefined8 *)local_420;
  puVar3 = local_528;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_14185d8e6(local_3c0,local_1f8);
  FUN_143dd052e(local_3c0,local_528,&local_4c8,&local_498);
  FUN_140bba396(local_1f8);
  if ((local_30 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487706b0 FUN_1487706b0 body=1081 status=ok
// SIG undefined FUN_1487706b0(void)

void FUN_1487706b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_598 [32];
  undefined4 local_578;
  undefined1 local_570;
  undefined1 *local_568;
  undefined8 local_560 [12];
  undefined8 local_500 [9];
  undefined1 local_4b8 [8];
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  int local_498;
  undefined4 local_494;
  undefined8 local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined1 local_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined1 local_448 [16];
  undefined2 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_414;
  undefined4 local_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0 [456];
  undefined1 local_218 [456];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_598;
  FUN_140e35e6c(local_218);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_218);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_218);
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
  local_448[0] = 0;
  local_448._4_8_ = 0;
  local_438 = 0;
  local_430 = DAT_14c8464f8;
  uStack_428 = DAT_14c846500;
  local_420 = DAT_14c846508;
  local_418 = 0;
  local_414 = 0;
  local_408 = 0;
  local_400 = (undefined4)DAT_14c8464e0;
  uStack_3fc = DAT_14c8464e0._4_4_;
  uStack_3f8 = (undefined4)DAT_14c8464e8;
  uStack_3f4 = DAT_14c8464e8._4_4_;
  local_3f0 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_448);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_448);
  }
  local_490._0_4_ = 0;
  local_490._4_1_ = 0;
  local_488 = 0xbf80000000000000;
  local_480 = 0xc4750000;
  local_47c = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_490);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_490);
  }
  local_494 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_494);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_494);
  }
  local_498 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_498);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_498);
  }
  iVar1 = local_498;
  local_4b8[0] = 0;
  local_4a0 = DAT_14c8464f0;
  local_4b0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_4a8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_4b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_4b8);
  }
  uVar2 = local_494;
  puVar7 = local_4b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = &local_490;
  puVar6 = local_500;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined8 *)local_448;
  puVar6 = local_560;
  for (lVar4 = 0xc; uVar3 = local_3e8, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_14185d8e6(local_3e0,local_218);
  local_570 = iVar1 != 0;
  local_578 = uVar2;
  local_568 = puVar7;
  FUN_143dd0662(local_3e0,uVar3,local_560,local_500);
  FUN_140bba396(local_218);
  if ((local_50 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148770af2 FUN_148770af2 body=1586 status=ok
// SIG undefined FUN_148770af2(void)

void FUN_148770af2(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_758 [32];
  undefined8 local_738;
  undefined8 *local_730;
  int *local_728;
  undefined4 local_720;
  undefined4 local_718;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  longlong local_6f8;
  int local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 local_6b8;
  undefined4 local_6b4;
  undefined4 local_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined8 uStack_698;
  undefined4 local_690;
  undefined8 uStack_68c;
  undefined4 uStack_684;
  undefined8 local_680;
  undefined1 local_671;
  undefined8 local_670;
  undefined8 uStack_668;
  longlong lStack_660;
  undefined8 local_658;
  undefined1 local_650 [456];
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 local_460;
  undefined4 local_458;
  undefined8 local_454;
  undefined4 local_44c;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_404;
  undefined4 local_3fc;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a4;
  undefined4 local_39c;
  undefined8 local_390;
  undefined4 local_388;
  undefined1 local_380;
  undefined4 local_358;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined1 local_208 [456];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_758;
  local_658 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_658);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_658);
  }
  local_670 = 0xffffffffffffffff;
  uStack_668 = 0;
  lStack_660 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_670);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_670);
  }
  local_671 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_671);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_671);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  FUN_140e35e6c(local_208);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_208);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_208);
  }
  local_680 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_680);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_680);
  }
  local_460 = 0;
  local_458 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_478 = 0;
  local_454 = 0xffffffff00000080;
  local_44c = 0;
  local_440 = 0;
  local_438 = 0;
  local_410 = 0;
  local_408 = 0;
  local_430 = 0;
  uStack_428 = 0;
  local_404 = 0xffffffff00000080;
  local_3fc = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0xffffffff00000000;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3a4 = 0xffffffff00000080;
  local_39c = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_358 = 0;
  local_330 = 0;
  local_328 = 0x200000000;
  local_318 = 0;
  local_310 = 0;
  uStack_30c = 0x20;
  uStack_308 = 0xffffffff;
  uStack_304 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2c8 = 0;
  local_2c0 = 0x200000000;
  local_2b0 = 0;
  local_2a8 = 0;
  uStack_2a4 = 0x20;
  uStack_2a0 = 0xffffffff;
  uStack_29c = 0;
  local_290 = 0;
  local_288 = 0;
  local_260 = 0;
  local_258 = 0x200000000;
  local_248 = 0;
  local_240 = 0;
  uStack_23c = 0x20;
  uStack_238 = 0xffffffff;
  uStack_234 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_488);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_488);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_6b0 = (uint)local_6b0._2_2_ << 0x10;
  uStack_6a8 = (undefined4)DAT_14c8464f8;
  uStack_6a4 = DAT_14c8464f8._4_4_;
  uStack_6a0 = (undefined4)DAT_14c846500;
  uStack_69c = DAT_14c846500._4_4_;
  uStack_698 = DAT_14c846508;
  local_690 = 0;
  uStack_68c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6b0);
  }
  local_6b4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6b4);
  }
  local_6b8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6b8);
  }
  uVar5 = local_680;
  uVar4 = local_6b4;
  uVar3 = local_6b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_6e8 = local_6b0;
  uStack_6e4 = uStack_6ac;
  uStack_6e0 = uStack_6a8;
  uStack_6dc = uStack_6a4;
  local_6d8 = uStack_6a0;
  uStack_6d4 = uStack_69c;
  uStack_6d0 = (undefined4)uStack_698;
  uStack_6cc = uStack_698._4_4_;
  local_6c8 = local_690;
  uStack_6c4 = (undefined4)uStack_68c;
  uStack_6c0 = uStack_68c._4_4_;
  uStack_6bc = uStack_684;
  FUN_14185d8e6(local_650,local_208);
  local_708 = (undefined4)local_670;
  uStack_704 = local_670._4_4_;
  uStack_700 = (undefined4)uStack_668;
  uStack_6fc = uStack_668._4_4_;
  local_6f8 = lStack_660;
  if ((lStack_660 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_730 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    local_730 = &local_488;
  }
  puVar6 = &local_671;
  if (puVar1 != (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  local_718 = uVar3;
  local_720 = uVar4;
  local_728 = &local_6e8;
  local_738 = uVar5;
  FUN_1488e666c(local_658,&local_708,puVar6,local_650);
  FUN_14076ba26(&local_488);
  FUN_140bba396(local_208);
  if ((local_40 ^ (ulonglong)auStack_758) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148771126 FUN_148771126 body=1174 status=ok
// SIG undefined FUN_148771126(void)

void FUN_148771126(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_708 [32];
  undefined4 local_6e8;
  undefined4 local_6e0;
  int local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined8 uStack_680;
  undefined4 local_678;
  undefined8 uStack_674;
  undefined4 uStack_66c;
  undefined8 local_668;
  undefined1 local_660 [456];
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_414;
  undefined4 local_40c;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b4;
  undefined4 local_3ac;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined1 local_390;
  undefined4 local_368;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined1 local_218 [456];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_708;
  FUN_140e35e6c(local_218);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_218);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_218);
  }
  local_668 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_668);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_668);
  }
  local_470 = 0;
  local_468 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  local_464 = 0xffffffff00000080;
  local_45c = 0;
  local_450 = 0;
  local_448 = 0;
  local_420 = 0;
  local_418 = 0;
  local_440 = 0;
  uStack_438 = 0;
  local_414 = 0xffffffff00000080;
  local_40c = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e8 = 0xffffffff00000000;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  local_3b4 = 0xffffffff00000080;
  local_3ac = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_368 = 0;
  local_340 = 0;
  local_338 = 0x200000000;
  local_328 = 0;
  local_320 = 0;
  uStack_31c = 0x20;
  uStack_318 = 0xffffffff;
  uStack_314 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2d8 = 0;
  local_2d0 = 0x200000000;
  local_2c0 = 0;
  local_2b8 = 0;
  uStack_2b4 = 0x20;
  uStack_2b0 = 0xffffffff;
  uStack_2ac = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_270 = 0;
  local_268 = 0x200000000;
  local_258 = 0;
  local_250 = 0;
  uStack_24c = 0x20;
  uStack_248 = 0xffffffff;
  uStack_244 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_498);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_498);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_698 = (uint)local_698._2_2_ << 0x10;
  uStack_690 = (undefined4)DAT_14c8464f8;
  uStack_68c = DAT_14c8464f8._4_4_;
  uStack_688 = (undefined4)DAT_14c846500;
  uStack_684 = DAT_14c846500._4_4_;
  uStack_680 = DAT_14c846508;
  local_678 = 0;
  uStack_674 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_698);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_698);
  }
  local_69c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69c);
  }
  local_6a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6a0);
  }
  uVar3 = local_668;
  uVar2 = local_69c;
  uVar1 = local_6a0;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = &local_498;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_6d8 = local_698;
  uStack_6d4 = uStack_694;
  uStack_6d0 = uStack_690;
  uStack_6cc = uStack_68c;
  local_6c8 = uStack_688;
  uStack_6c4 = uStack_684;
  uStack_6c0 = (undefined4)uStack_680;
  uStack_6bc = uStack_680._4_4_;
  local_6b8 = local_678;
  uStack_6b4 = (undefined4)uStack_674;
  uStack_6b0 = uStack_674._4_4_;
  uStack_6ac = uStack_66c;
  FUN_14185d8e6(local_660,local_218);
  local_6e0 = uVar1;
  local_6e8 = uVar2;
  FUN_1488e6850(local_660,uVar3,puVar4,&local_6d8);
  FUN_14076ba26(&local_498);
  FUN_140bba396(local_218);
  if ((local_50 ^ (ulonglong)auStack_708) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487715be FUN_1487715be body=148 status=ok
// SIG undefined FUN_1487715be(void)

void FUN_1487715be(undefined8 param_1,longlong param_2)

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
  FUN_1488e696a(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877166a FUN_14877166a body=48 status=ok
// SIG undefined FUN_14877166a(void)

longlong FUN_14877166a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1414a7654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148771714 FUN_148771714 body=59 status=ok
// SIG undefined FUN_148771714(void)

undefined8 FUN_148771714(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487717de FUN_1487717de body=63 status=ok
// SIG undefined FUN_1487717de(void)

undefined1 FUN_1487717de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877190a(param_2,param_3);
    param_3 = param_3 + 2000;
    param_2 = param_2 + 2000;
  }
  return 1;
}



// FUNCTION 148771846 FUN_148771846 body=59 status=ok
// SIG undefined FUN_148771846(void)

undefined8 FUN_148771846(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148771892 FUN_148771892 body=38 status=ok
// SIG undefined FUN_148771892(void)

void FUN_148771892(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 2000) == '\x01') {
    FUN_140adfc44(param_2);
    *(undefined1 *)(param_2 + 2000) = 0;
  }
  return;
}



// FUNCTION 14877190a FUN_14877190a body=1292 status=ok
// SIG undefined FUN_14877190a(void)

longlong FUN_14877190a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
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
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_148771e16(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x55);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x55) = uVar1;
  FUN_148771e74(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined4 *)(param_2 + 0x7c);
  uVar3 = *(undefined4 *)(param_2 + 0x80);
  uVar4 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  puVar14 = (undefined8 *)(param_2 + 0xa0);
  puVar15 = (undefined8 *)(param_1 + 0xa0);
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  uVar2 = *(undefined4 *)(param_2 + 0x114);
  uVar3 = *(undefined4 *)(param_2 + 0x118);
  uVar4 = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = uVar3;
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  FUN_144a787a6(param_1 + 0x120,param_2 + 0x120);
  FUN_14065c7a4(param_1 + 0x130,param_2 + 0x130);
  if ((*(longlong *)(param_1 + 0x140) != *(longlong *)(param_2 + 0x140)) ||
     (*(int *)(param_1 + 0x148) != *(int *)(param_2 + 0x148))) {
    *(longlong *)(param_1 + 0x140) = *(longlong *)(param_2 + 0x140);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  puVar14 = (undefined8 *)(param_2 + 0x158);
  puVar15 = (undefined8 *)(param_1 + 0x158);
  for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  if ((*(longlong *)(param_1 + 0x1c0) != *(longlong *)(param_2 + 0x1c0)) ||
     (*(int *)(param_1 + 0x1c8) != *(int *)(param_2 + 0x1c8))) {
    *(longlong *)(param_1 + 0x1c0) = *(longlong *)(param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  if ((*(longlong *)(param_1 + 0x1d8) != *(longlong *)(param_2 + 0x1d8)) ||
     (*(int *)(param_1 + 0x1e0) != *(int *)(param_2 + 0x1e0))) {
    *(longlong *)(param_1 + 0x1d8) = *(longlong *)(param_2 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  if ((*(longlong *)(param_1 + 0x1f0) != *(longlong *)(param_2 + 0x1f0)) ||
     (*(int *)(param_1 + 0x1f8) != *(int *)(param_2 + 0x1f8))) {
    *(longlong *)(param_1 + 0x1f0) = *(longlong *)(param_2 + 0x1f0);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  uVar2 = *(undefined4 *)(param_2 + 0x21c);
  uVar3 = *(undefined4 *)(param_2 + 0x220);
  uVar4 = *(undefined4 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x21c) = uVar2;
  *(undefined4 *)(param_1 + 0x220) = uVar3;
  *(undefined4 *)(param_1 + 0x224) = uVar4;
  FUN_144a787a6(param_1 + 0x228,param_2 + 0x228);
  FUN_14065c7a4(param_1 + 0x238,param_2 + 0x238);
  if ((*(longlong *)(param_1 + 0x248) != *(longlong *)(param_2 + 0x248)) ||
     (*(int *)(param_1 + 0x250) != *(int *)(param_2 + 0x250))) {
    *(longlong *)(param_1 + 0x248) = *(longlong *)(param_2 + 0x248);
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
    *(undefined8 *)(param_1 + 600) = 0;
  }
  memcpy((void *)(param_1 + 0x260),(void *)(param_2 + 0x260),0x119);
  FUN_14118c70e(param_1 + 0x380,param_2 + 0x380);
  if ((*(longlong *)(param_1 + 0x3c0) != *(longlong *)(param_2 + 0x3c0)) ||
     (*(int *)(param_1 + 0x3c8) != *(int *)(param_2 + 0x3c8))) {
    *(longlong *)(param_1 + 0x3c0) = *(longlong *)(param_2 + 0x3c0);
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
    *(undefined8 *)(param_1 + 0x3d0) = 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x3d8) + 0x20))(param_1 + 0x3d8,0);
  *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(param_2 + 0x3e0);
  FUN_1406022fe(param_1 + 1000,param_2 + 1000);
  if ((*(longlong *)(param_1 + 0x3f8) != *(longlong *)(param_2 + 0x3f8)) ||
     (*(int *)(param_1 + 0x400) != *(int *)(param_2 + 0x400))) {
    *(longlong *)(param_1 + 0x3f8) = *(longlong *)(param_2 + 0x3f8);
    *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  FUN_140d02432(param_1 + 0x410,param_2 + 0x410);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  FUN_140d02432(param_1 + 0x468,param_2 + 0x468);
  FUN_140d02432(param_1 + 0x4b8,param_2 + 0x4b8);
  FUN_14861620a(param_1 + 0x508,param_2 + 0x508);
  *(undefined2 *)(param_1 + 0x518) = *(undefined2 *)(param_2 + 0x518);
  FUN_148771ece(param_1 + 0x520,param_2 + 0x520);
  uVar2 = *(undefined4 *)(param_2 + 0x5bc);
  uVar3 = *(undefined4 *)(param_2 + 0x5c0);
  uVar4 = *(undefined4 *)(param_2 + 0x5c4);
  uVar5 = *(undefined4 *)(param_2 + 0x5c8);
  uVar6 = *(undefined4 *)(param_2 + 0x5cc);
  uVar7 = *(undefined4 *)(param_2 + 0x5d0);
  uVar8 = *(undefined4 *)(param_2 + 0x5d4);
  uVar9 = *(undefined4 *)(param_2 + 0x5d1);
  uVar10 = *(undefined4 *)(param_2 + 0x5d5);
  uVar11 = *(undefined4 *)(param_2 + 0x5d9);
  uVar12 = *(undefined4 *)(param_2 + 0x5dd);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined4 *)(param_1 + 0x5bc) = uVar2;
  *(undefined4 *)(param_1 + 0x5c0) = uVar3;
  *(undefined4 *)(param_1 + 0x5c4) = uVar4;
  *(undefined4 *)(param_1 + 0x5c8) = uVar5;
  *(undefined4 *)(param_1 + 0x5cc) = uVar6;
  *(undefined4 *)(param_1 + 0x5d0) = uVar7;
  *(undefined4 *)(param_1 + 0x5d4) = uVar8;
  *(undefined4 *)(param_1 + 0x5d1) = uVar9;
  *(undefined4 *)(param_1 + 0x5d5) = uVar10;
  *(undefined4 *)(param_1 + 0x5d9) = uVar11;
  *(undefined4 *)(param_1 + 0x5dd) = uVar12;
  FUN_144983130(param_1 + 0x5e8,param_2 + 0x5e8);
  puVar14 = (undefined8 *)(param_2 + 0x628);
  puVar15 = (undefined8 *)(param_1 + 0x628);
  for (lVar13 = 0xf; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  *(undefined1 *)(param_1 + 0x6a0) = *(undefined1 *)(param_2 + 0x6a0);
  *(undefined8 *)(param_1 + 0x6a8) = *(undefined8 *)(param_2 + 0x6a8);
  uVar2 = *(undefined4 *)(param_2 + 0x6b4);
  uVar3 = *(undefined4 *)(param_2 + 0x6b8);
  uVar4 = *(undefined4 *)(param_2 + 0x6bc);
  *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_2 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b4) = uVar2;
  *(undefined4 *)(param_1 + 0x6b8) = uVar3;
  *(undefined4 *)(param_1 + 0x6bc) = uVar4;
  FUN_144a787a6(param_1 + 0x6c0,param_2 + 0x6c0);
  *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_2 + 0x6d0);
  *(undefined1 *)(param_1 + 0x6d4) = *(undefined1 *)(param_2 + 0x6d4);
  FUN_144983130(param_1 + 0x6d8,param_2 + 0x6d8);
  uVar2 = *(undefined4 *)(param_2 + 0x71c);
  uVar3 = *(undefined4 *)(param_2 + 0x720);
  uVar4 = *(undefined4 *)(param_2 + 0x724);
  uVar5 = *(undefined4 *)(param_2 + 0x728);
  uVar6 = *(undefined4 *)(param_2 + 0x72c);
  uVar7 = *(undefined4 *)(param_2 + 0x730);
  uVar8 = *(undefined4 *)(param_2 + 0x734);
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(param_2 + 0x718);
  *(undefined4 *)(param_1 + 0x71c) = uVar2;
  *(undefined4 *)(param_1 + 0x720) = uVar3;
  *(undefined4 *)(param_1 + 0x724) = uVar4;
  *(undefined4 *)(param_1 + 0x728) = uVar5;
  *(undefined4 *)(param_1 + 0x72c) = uVar6;
  *(undefined4 *)(param_1 + 0x730) = uVar7;
  *(undefined4 *)(param_1 + 0x734) = uVar8;
  FUN_1486162fa(param_1 + 0x738,param_2 + 0x738);
  *(undefined8 *)(param_1 + 0x748) = *(undefined8 *)(param_2 + 0x748);
  FUN_148615f62(param_1 + 0x750,param_2 + 0x750);
  uVar1 = *(undefined8 *)(param_2 + 0x768);
  *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)(param_2 + 0x760);
  *(undefined8 *)(param_1 + 0x768) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0x770);
  uVar3 = *(undefined4 *)(param_2 + 0x774);
  uVar4 = *(undefined4 *)(param_2 + 0x778);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_2 + 0x76c);
  *(undefined4 *)(param_1 + 0x770) = uVar2;
  *(undefined4 *)(param_1 + 0x774) = uVar3;
  *(undefined4 *)(param_1 + 0x778) = uVar4;
  FUN_1487720a8(param_1 + 0x780,param_2 + 0x780);
  return param_1;
}



// FUNCTION 148771e16 FUN_148771e16 body=93 status=ok
// SIG undefined FUN_148771e16(void)

undefined8 * FUN_148771e16(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140adffa4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148771f3a(param_1,iVar1);
      FUN_148771fad(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148771e74 FUN_148771e74 body=89 status=ok
// SIG undefined FUN_148771e74(void)

undefined8 * FUN_148771e74(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148772034(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 148771ece FUN_148771ece body=108 status=ok
// SIG undefined FUN_148771ece(void)

longlong FUN_148771ece(longlong param_1,longlong param_2)

{
  FUN_144a7bb84();
  FUN_144a7bb84(param_1 + 0x18,param_2 + 0x18);
  FUN_144a7bb84(param_1 + 0x30,param_2 + 0x30);
  FUN_144a7bb84(param_1 + 0x48,param_2 + 0x48);
  FUN_144a7bb84(param_1 + 0x60,param_2 + 0x60);
  FUN_14123c256(param_1 + 0x78,param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 148771f3a FUN_148771f3a body=115 status=ok
// SIG undefined FUN_148771f3a(void)

void FUN_148771f3a(longlong param_1,int param_2,int param_3)

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


