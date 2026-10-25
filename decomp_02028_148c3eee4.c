// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c3eee4 FUN_148c3eee4 body=48 status=ok
// SIG undefined FUN_148c3eee4(void)

longlong FUN_148c3eee4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1550;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ef14 FUN_148c3ef14 body=48 status=ok
// SIG undefined FUN_148c3ef14(void)

longlong FUN_148c3ef14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1558;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3efc8 FUN_148c3efc8 body=59 status=ok
// SIG undefined FUN_148c3efc8(void)

undefined8 FUN_148c3efc8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3f10c FUN_148c3f10c body=59 status=ok
// SIG undefined FUN_148c3f10c(void)

undefined8 FUN_148c3f10c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3f1ae FUN_148c3f1ae body=32 status=ok
// SIG undefined FUN_148c3f1ae(void)

void FUN_148c3f1ae(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c15cec(param_2);
  *param_2 = &PTR_FUN_14b7db2a0;
  return;
}



// FUNCTION 148c3f1e4 FUN_148c3f1e4 body=63 status=ok
// SIG undefined FUN_148c3f1e4(void)

undefined1 FUN_148c3f1e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bae212(param_2,param_3);
    param_3 = param_3 + 0x10c8;
    param_2 = param_2 + 0x10c8;
  }
  return 1;
}



// FUNCTION 148c3f24c FUN_148c3f24c body=59 status=ok
// SIG undefined FUN_148c3f24c(void)

undefined8 FUN_148c3f24c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3f298 FUN_148c3f298 body=38 status=ok
// SIG undefined FUN_148c3f298(void)

void FUN_148c3f298(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10c8) == '\x01') {
    FUN_14096c94c(param_2);
    *(undefined1 *)(param_2 + 0x10c8) = 0;
  }
  return;
}



// FUNCTION 148c3f30a FUN_148c3f30a body=57 status=ok
// SIG undefined FUN_148c3f30a(void)

void FUN_148c3f30a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae118 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae118 = FUN_140002ddd(FUN_1465ea93d,uVar1,L"PlayerProxyDef");
  }
  return;
}



// FUNCTION 148c3f374 FUN_148c3f374 body=54 status=ok
// SIG undefined FUN_148c3f374(void)

undefined1 FUN_148c3f374(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c3f472(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148c3f3d2 FUN_148c3f3d2 body=59 status=ok
// SIG undefined FUN_148c3f3d2(void)

undefined8 FUN_148c3f3d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3f472 FUN_148c3f472 body=99 status=ok
// SIG undefined FUN_148c3f472(void)

longlong * FUN_148c3f472(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
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
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148c3f5bc FUN_148c3f5bc body=59 status=ok
// SIG undefined FUN_148c3f5bc(void)

undefined8 FUN_148c3f5bc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3f720 FUN_148c3f720 body=39 status=ok
// SIG undefined FUN_148c3f720(void)

undefined8 FUN_148c3f720(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c3f770 FUN_148c3f770 body=59 status=ok
// SIG undefined FUN_148c3f770(void)

undefined8 FUN_148c3f770(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3f830 FUN_148c3f830 body=63 status=ok
// SIG undefined FUN_148c3f830(void)

undefined1 FUN_148c3f830(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c3f95a(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 148c3f898 FUN_148c3f898 body=59 status=ok
// SIG undefined FUN_148c3f898(void)

undefined8 FUN_148c3f898(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3f8e4 FUN_148c3f8e4 body=40 status=ok
// SIG undefined FUN_148c3f8e4(void)

void FUN_148c3f8e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_145910dd8(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 148c3f95a FUN_148c3f95a body=387 status=ok
// SIG undefined FUN_148c3f95a(void)

longlong FUN_148c3f95a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
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
  uVar1 = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  FUN_144983130(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined4 *)(param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0xb0);
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144983130(param_1 + 200,param_2 + 200);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  if ((*(longlong *)(param_1 + 0x108) != *(longlong *)(param_2 + 0x108)) ||
     (*(int *)(param_1 + 0x110) != *(int *)(param_2 + 0x110))) {
    *(longlong *)(param_1 + 0x108) = *(longlong *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if ((*(longlong *)(param_1 + 0x120) != *(longlong *)(param_2 + 0x120)) ||
     (*(int *)(param_1 + 0x128) != *(int *)(param_2 + 0x128))) {
    *(longlong *)(param_1 + 0x120) = *(longlong *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if ((*(longlong *)(param_1 + 0x138) != *(longlong *)(param_2 + 0x138)) ||
     (*(int *)(param_1 + 0x140) != *(int *)(param_2 + 0x140))) {
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  puVar5 = (undefined8 *)(param_2 + 0x150);
  puVar6 = (undefined8 *)(param_1 + 0x150);
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return param_1;
}



// FUNCTION 148c3fade FUN_148c3fade body=57 status=ok
// SIG undefined FUN_148c3fade(void)

void FUN_148c3fade(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae1a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae1a8 = FUN_140002ddd(FUN_1465eabf5,uVar1,L"OakPlayerPuppetDef");
  }
  return;
}



// FUNCTION 148c3fb7e FUN_148c3fb7e body=59 status=ok
// SIG undefined FUN_148c3fb7e(void)

undefined8 FUN_148c3fb7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3fbc4 FUN_148c3fbc4 body=40 status=ok
// SIG undefined FUN_148c3fbc4(void)

void FUN_148c3fbc4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c3fc84 FUN_148c3fc84 body=94 status=ok
// SIG undefined FUN_148c3fc84(void)

undefined8 FUN_148c3fc84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6(lVar2,puVar1 + 1);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[3];
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c3fd0a FUN_148c3fd0a body=59 status=ok
// SIG undefined FUN_148c3fd0a(void)

undefined8 FUN_148c3fd0a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3fd50 FUN_148c3fd50 body=38 status=ok
// SIG undefined FUN_148c3fd50(void)

void FUN_148c3fd50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c3fe0c FUN_148c3fe0c body=59 status=ok
// SIG undefined FUN_148c3fe0c(void)

undefined8 FUN_148c3fe0c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3fe58 FUN_148c3fe58 body=40 status=ok
// SIG undefined FUN_148c3fe58(void)

void FUN_148c3fe58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_1457e6452(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148c3fece FUN_148c3fece body=98 status=ok
// SIG undefined FUN_148c3fece(void)

void FUN_148c3fece(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c3ff30 FUN_148c3ff30 body=52 status=ok
// SIG undefined FUN_148c3ff30(void)

void FUN_148c3ff30(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c3ff64(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c3ff64 FUN_148c3ff64 body=113 status=ok
// SIG undefined FUN_148c3ff64(void)

undefined8 * FUN_148c3ff64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 148c4001a FUN_148c4001a body=75 status=ok
// SIG undefined FUN_148c4001a(void)

undefined8 FUN_148c4001a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1447bdc4c();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c4008e FUN_148c4008e body=59 status=ok
// SIG undefined FUN_148c4008e(void)

undefined8 FUN_148c4008e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c400d4 FUN_148c400d4 body=38 status=ok
// SIG undefined FUN_148c400d4(void)

void FUN_148c400d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148c40168 FUN_148c40168 body=113 status=ok
// SIG undefined FUN_148c40168(void)

undefined8 FUN_148c40168(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486157b2(param_2,param_3);
    *(undefined2 *)(param_2 + 0x6f0) = *(undefined2 *)(param_3 + 0x6f0);
    FUN_1418c41de(param_2 + 0x6f8,param_3 + 0x6f8);
    uVar1 = *(undefined4 *)(param_3 + 0x714);
    uVar2 = *(undefined4 *)(param_3 + 0x718);
    uVar3 = *(undefined4 *)(param_3 + 0x71c);
    *(undefined4 *)(param_2 + 0x710) = *(undefined4 *)(param_3 + 0x710);
    *(undefined4 *)(param_2 + 0x714) = uVar1;
    *(undefined4 *)(param_2 + 0x718) = uVar2;
    *(undefined4 *)(param_2 + 0x71c) = uVar3;
    param_2 = param_2 + 0x720;
    param_3 = param_3 + 0x720;
  }
  return 1;
}



// FUNCTION 148c40202 FUN_148c40202 body=59 status=ok
// SIG undefined FUN_148c40202(void)

undefined8 FUN_148c40202(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4024e FUN_148c4024e body=38 status=ok
// SIG undefined FUN_148c4024e(void)

void FUN_148c4024e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x720) == '\x01') {
    FUN_140adedd4(param_2);
    *(undefined1 *)(param_2 + 0x720) = 0;
  }
  return;
}



// FUNCTION 148c402b6 FUN_148c402b6 body=89 status=ok
// SIG undefined FUN_148c402b6(void)

void FUN_148c402b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x68);
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
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c40310 FUN_148c40310 body=95 status=ok
// SIG undefined FUN_148c40310(void)

longlong FUN_148c40310(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0xc0) = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)(param_1 + 0xc9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0xc9) = 0;
  }
  FUN_14079057a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4037c FUN_148c4037c body=32 status=ok
// SIG undefined FUN_148c4037c(void)

undefined8 FUN_148c4037c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSubsystemCollection");
  return param_2;
}



// FUNCTION 148c403d0 FUN_148c403d0 body=413 status=ok
// SIG undefined FUN_148c403d0(void)

void FUN_148c403d0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_48 = local_28;
  FUN_148de206c(local_18,local_20,&local_58,local_3c);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c40576 FUN_148c40576 body=102 status=ok
// SIG undefined FUN_148c40576(void)

void FUN_148c40576(longlong param_1,undefined8 param_2)

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



// FUNCTION 148c405de FUN_148c405de body=329 status=ok
// SIG undefined FUN_148c405de(void)

void FUN_148c405de(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
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
  FUN_148de2300(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c40728 FUN_148c40728 body=155 status=ok
// SIG undefined FUN_148c40728(void)

void FUN_148c40728(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = FUN_148de23e2(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4080c FUN_148c4080c body=230 status=ok
// SIG undefined FUN_148c4080c(void)

void FUN_148c4080c(undefined8 param_1,longlong param_2)

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
  FUN_148de30a6(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c408f4 FUN_148c408f4 body=385 status=ok
// SIG undefined FUN_148c408f4(void)

void FUN_148c408f4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  puVar2 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  uVar1 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar1);
  local_48 = local_28;
  FUN_148de2c7c(local_20,&local_58,puVar2);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c40a76 FUN_148c40a76 body=230 status=ok
// SIG undefined FUN_148c40a76(void)

void FUN_148c40a76(undefined8 param_1,longlong param_2)

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
  FUN_148de2ae4(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c40b64 FUN_148c40b64 body=411 status=ok
// SIG undefined FUN_148c40b64(void)

void FUN_148c40b64(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
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
  local_38 = 0;
  local_30 = 0x3001;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 10;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_60 = local_48;
  local_58 = 0;
  local_80 = local_38;
  local_78 = local_30;
  local_70 = 0;
  FUN_144223a92(local_20);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c40d00 FUN_148c40d00 body=237 status=ok
// SIG undefined FUN_148c40d00(void)

void FUN_148c40d00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148de3310(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c40dee FUN_148c40dee body=905 status=ok
// SIG undefined FUN_148c40dee(void)

void FUN_148c40dee(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_618 [32];
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  longlong local_5e8;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  longlong lStack_5c8;
  undefined1 local_5b9;
  undefined8 local_5b8;
  undefined1 local_5b0 [712];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined4 local_1a0;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined8 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_618;
  local_5b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5b8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_29c = 0xffffffff00000080;
  local_294 = 0;
  local_288 = 0;
  local_280 = 0;
  local_258 = 0;
  local_250 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_24c = 0xffffffff00000080;
  local_244 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0xffffffff00000000;
  local_1f8 = 0;
  local_1f0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1ec = 0xffffffff00000080;
  local_1e4 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1a0 = 0;
  local_178 = 0;
  local_170 = 0x200000000;
  local_160 = 0;
  local_158 = 0;
  uStack_154 = 0x20;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  local_140 = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0x200000000;
  local_f8 = 0;
  local_f0 = 0;
  uStack_ec = 0x20;
  uStack_e8 = 0xffffffff;
  uStack_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_a0 = 0x200000000;
  local_90 = 0;
  local_88 = 0;
  uStack_84 = 0x20;
  uStack_80 = 0xffffffff;
  uStack_7c = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_30 = 0;
  uStack_29 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_31 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2e8);
  }
  local_5b9 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5b9);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_5d8 = 0xffffffffffffffff;
  uStack_5d0 = 0;
  lStack_5c8 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_5f8 = (undefined4)local_5d8;
  uStack_5f4 = local_5d8._4_4_;
  uStack_5f0 = (undefined4)uStack_5d0;
  uStack_5ec = uStack_5d0._4_4_;
  local_5e8 = lStack_5c8;
  if ((lStack_5c8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar2 = &local_5b9;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_148c41178(local_5b0,&local_2e8);
  FUN_148de2cf6(local_5b8,local_5b0,puVar2,&local_5f8);
  FUN_14076ba26(&uStack_2d0);
  if ((local_20 ^ (ulonglong)auStack_618) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c41178 FUN_148c41178 body=187 status=ok
// SIG undefined FUN_148c41178(void)

longlong * FUN_148c41178(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar3 = DAT_14c950c29;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
    bVar3 = DAT_14c950c29;
  }
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
  }
  FUN_140ff1a6a(param_1 + 3,param_2 + 3);
  FUN_141857172(param_1 + 0x52,param_2 + 0x52);
  FUN_145a25158(param_1 + 0x55,param_2 + 0x55);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x2c3);
  *(int *)(param_1 + 0x58) = (int)param_2[0x58];
  *(undefined4 *)((longlong)param_1 + 0x2c3) = uVar1;
  return param_1;
}



// FUNCTION 148c4128c FUN_148c4128c body=45 status=ok
// SIG undefined FUN_148c4128c(void)

longlong FUN_148c4128c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_1458d399e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c412ca FUN_148c412ca body=48 status=ok
// SIG undefined FUN_148c412ca(void)

longlong FUN_148c412ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145a39bd6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4130a FUN_148c4130a body=48 status=ok
// SIG undefined FUN_148c4130a(void)

longlong FUN_148c4130a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145a39bd6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41350 FUN_148c41350 body=48 status=ok
// SIG undefined FUN_148c41350(void)

longlong FUN_148c41350(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x860;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41380 FUN_148c41380 body=48 status=ok
// SIG undefined FUN_148c41380(void)

longlong FUN_148c41380(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x868;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c413b0 FUN_148c413b0 body=48 status=ok
// SIG undefined FUN_148c413b0(void)

longlong FUN_148c413b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x870;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c413e0 FUN_148c413e0 body=48 status=ok
// SIG undefined FUN_148c413e0(void)

longlong FUN_148c413e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10a0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41410 FUN_148c41410 body=48 status=ok
// SIG undefined FUN_148c41410(void)

longlong FUN_148c41410(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10a8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41440 FUN_148c41440 body=48 status=ok
// SIG undefined FUN_148c41440(void)

longlong FUN_148c41440(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10b0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41470 FUN_148c41470 body=48 status=ok
// SIG undefined FUN_148c41470(void)

longlong FUN_148c41470(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10b8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c414a0 FUN_148c414a0 body=48 status=ok
// SIG undefined FUN_148c414a0(void)

longlong FUN_148c414a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10c0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c414d0 FUN_148c414d0 body=48 status=ok
// SIG undefined FUN_148c414d0(void)

longlong FUN_148c414d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10c8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41500 FUN_148c41500 body=48 status=ok
// SIG undefined FUN_148c41500(void)

longlong FUN_148c41500(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10d0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41530 FUN_148c41530 body=48 status=ok
// SIG undefined FUN_148c41530(void)

longlong FUN_148c41530(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10d8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41560 FUN_148c41560 body=48 status=ok
// SIG undefined FUN_148c41560(void)

longlong FUN_148c41560(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10e0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41590 FUN_148c41590 body=48 status=ok
// SIG undefined FUN_148c41590(void)

longlong FUN_148c41590(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10e8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c415c0 FUN_148c415c0 body=48 status=ok
// SIG undefined FUN_148c415c0(void)

longlong FUN_148c415c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10f0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c415f0 FUN_148c415f0 body=48 status=ok
// SIG undefined FUN_148c415f0(void)

longlong FUN_148c415f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10f8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41620 FUN_148c41620 body=48 status=ok
// SIG undefined FUN_148c41620(void)

longlong FUN_148c41620(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1110;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41650 FUN_148c41650 body=48 status=ok
// SIG undefined FUN_148c41650(void)

longlong FUN_148c41650(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a80;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41680 FUN_148c41680 body=48 status=ok
// SIG undefined FUN_148c41680(void)

longlong FUN_148c41680(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a88;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c416b0 FUN_148c416b0 body=48 status=ok
// SIG undefined FUN_148c416b0(void)

longlong FUN_148c416b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a90;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c416e0 FUN_148c416e0 body=48 status=ok
// SIG undefined FUN_148c416e0(void)

longlong FUN_148c416e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ad8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41710 FUN_148c41710 body=48 status=ok
// SIG undefined FUN_148c41710(void)

longlong FUN_148c41710(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ae0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41740 FUN_148c41740 body=48 status=ok
// SIG undefined FUN_148c41740(void)

longlong FUN_148c41740(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ae8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41770 FUN_148c41770 body=48 status=ok
// SIG undefined FUN_148c41770(void)

longlong FUN_148c41770(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b08;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c417a0 FUN_148c417a0 body=48 status=ok
// SIG undefined FUN_148c417a0(void)

longlong FUN_148c417a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b20;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c417d0 FUN_148c417d0 body=48 status=ok
// SIG undefined FUN_148c417d0(void)

longlong FUN_148c417d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b28;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41800 FUN_148c41800 body=48 status=ok
// SIG undefined FUN_148c41800(void)

longlong FUN_148c41800(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b30;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41830 FUN_148c41830 body=48 status=ok
// SIG undefined FUN_148c41830(void)

longlong FUN_148c41830(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b38;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41860 FUN_148c41860 body=48 status=ok
// SIG undefined FUN_148c41860(void)

longlong FUN_148c41860(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b40;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41890 FUN_148c41890 body=48 status=ok
// SIG undefined FUN_148c41890(void)

longlong FUN_148c41890(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b48;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c418c0 FUN_148c418c0 body=48 status=ok
// SIG undefined FUN_148c418c0(void)

longlong FUN_148c418c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b50;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c418f0 FUN_148c418f0 body=48 status=ok
// SIG undefined FUN_148c418f0(void)

longlong FUN_148c418f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b58;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41920 FUN_148c41920 body=48 status=ok
// SIG undefined FUN_148c41920(void)

longlong FUN_148c41920(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b60;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41950 FUN_148c41950 body=48 status=ok
// SIG undefined FUN_148c41950(void)

longlong FUN_148c41950(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b98;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41980 FUN_148c41980 body=48 status=ok
// SIG undefined FUN_148c41980(void)

longlong FUN_148c41980(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ba0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c419b0 FUN_148c419b0 body=48 status=ok
// SIG undefined FUN_148c419b0(void)

longlong FUN_148c419b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ba8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c419e0 FUN_148c419e0 body=48 status=ok
// SIG undefined FUN_148c419e0(void)

longlong FUN_148c419e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bb0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41a10 FUN_148c41a10 body=48 status=ok
// SIG undefined FUN_148c41a10(void)

longlong FUN_148c41a10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bb8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41a40 FUN_148c41a40 body=48 status=ok
// SIG undefined FUN_148c41a40(void)

longlong FUN_148c41a40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bc0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41a70 FUN_148c41a70 body=48 status=ok
// SIG undefined FUN_148c41a70(void)

longlong FUN_148c41a70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bc8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41aa0 FUN_148c41aa0 body=48 status=ok
// SIG undefined FUN_148c41aa0(void)

longlong FUN_148c41aa0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3be0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41ad0 FUN_148c41ad0 body=48 status=ok
// SIG undefined FUN_148c41ad0(void)

longlong FUN_148c41ad0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3be8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41b00 FUN_148c41b00 body=48 status=ok
// SIG undefined FUN_148c41b00(void)

longlong FUN_148c41b00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bf0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41b30 FUN_148c41b30 body=48 status=ok
// SIG undefined FUN_148c41b30(void)

longlong FUN_148c41b30(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bf8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41b60 FUN_148c41b60 body=48 status=ok
// SIG undefined FUN_148c41b60(void)

longlong FUN_148c41b60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c00;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41b90 FUN_148c41b90 body=48 status=ok
// SIG undefined FUN_148c41b90(void)

longlong FUN_148c41b90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c08;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41bc0 FUN_148c41bc0 body=48 status=ok
// SIG undefined FUN_148c41bc0(void)

longlong FUN_148c41bc0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c10;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41bf0 FUN_148c41bf0 body=48 status=ok
// SIG undefined FUN_148c41bf0(void)

longlong FUN_148c41bf0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c18;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41c20 FUN_148c41c20 body=48 status=ok
// SIG undefined FUN_148c41c20(void)

longlong FUN_148c41c20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c20;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41c50 FUN_148c41c50 body=48 status=ok
// SIG undefined FUN_148c41c50(void)

longlong FUN_148c41c50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c28;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41c80 FUN_148c41c80 body=48 status=ok
// SIG undefined FUN_148c41c80(void)

longlong FUN_148c41c80(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c30;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41cb0 FUN_148c41cb0 body=48 status=ok
// SIG undefined FUN_148c41cb0(void)

longlong FUN_148c41cb0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c38;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41ce0 FUN_148c41ce0 body=48 status=ok
// SIG undefined FUN_148c41ce0(void)

longlong FUN_148c41ce0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c40;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41d10 FUN_148c41d10 body=48 status=ok
// SIG undefined FUN_148c41d10(void)

longlong FUN_148c41d10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c48;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41d40 FUN_148c41d40 body=48 status=ok
// SIG undefined FUN_148c41d40(void)

longlong FUN_148c41d40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c50;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41d70 FUN_148c41d70 body=48 status=ok
// SIG undefined FUN_148c41d70(void)

longlong FUN_148c41d70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c58;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41da0 FUN_148c41da0 body=48 status=ok
// SIG undefined FUN_148c41da0(void)

longlong FUN_148c41da0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c60;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41dd0 FUN_148c41dd0 body=48 status=ok
// SIG undefined FUN_148c41dd0(void)

longlong FUN_148c41dd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c68;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41e00 FUN_148c41e00 body=45 status=ok
// SIG undefined FUN_148c41e00(void)

longlong FUN_148c41e00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41e2e FUN_148c41e2e body=45 status=ok
// SIG undefined FUN_148c41e2e(void)

longlong FUN_148c41e2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41e5c FUN_148c41e5c body=45 status=ok
// SIG undefined FUN_148c41e5c(void)

longlong FUN_148c41e5c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41e94 FUN_148c41e94 body=45 status=ok
// SIG undefined FUN_148c41e94(void)

longlong FUN_148c41e94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b06f62(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41ec2 FUN_148c41ec2 body=48 status=ok
// SIG undefined FUN_148c41ec2(void)

longlong FUN_148c41ec2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41ef2 FUN_148c41ef2 body=48 status=ok
// SIG undefined FUN_148c41ef2(void)

longlong FUN_148c41ef2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41f22 FUN_148c41f22 body=48 status=ok
// SIG undefined FUN_148c41f22(void)

longlong FUN_148c41f22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41f52 FUN_148c41f52 body=48 status=ok
// SIG undefined FUN_148c41f52(void)

longlong FUN_148c41f52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41f82 FUN_148c41f82 body=48 status=ok
// SIG undefined FUN_148c41f82(void)

longlong FUN_148c41f82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41fb2 FUN_148c41fb2 body=48 status=ok
// SIG undefined FUN_148c41fb2(void)

longlong FUN_148c41fb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c41fe2 FUN_148c41fe2 body=48 status=ok
// SIG undefined FUN_148c41fe2(void)

longlong FUN_148c41fe2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42012 FUN_148c42012 body=48 status=ok
// SIG undefined FUN_148c42012(void)

longlong FUN_148c42012(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42042 FUN_148c42042 body=48 status=ok
// SIG undefined FUN_148c42042(void)

longlong FUN_148c42042(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42072 FUN_148c42072 body=48 status=ok
// SIG undefined FUN_148c42072(void)

longlong FUN_148c42072(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c420a2 FUN_148c420a2 body=48 status=ok
// SIG undefined FUN_148c420a2(void)

longlong FUN_148c420a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c420d2 FUN_148c420d2 body=48 status=ok
// SIG undefined FUN_148c420d2(void)

longlong FUN_148c420d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42102 FUN_148c42102 body=48 status=ok
// SIG undefined FUN_148c42102(void)

longlong FUN_148c42102(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42132 FUN_148c42132 body=48 status=ok
// SIG undefined FUN_148c42132(void)

longlong FUN_148c42132(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42162 FUN_148c42162 body=48 status=ok
// SIG undefined FUN_148c42162(void)

longlong FUN_148c42162(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42192 FUN_148c42192 body=48 status=ok
// SIG undefined FUN_148c42192(void)

longlong FUN_148c42192(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c421c2 FUN_148c421c2 body=48 status=ok
// SIG undefined FUN_148c421c2(void)

longlong FUN_148c421c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c421f2 FUN_148c421f2 body=48 status=ok
// SIG undefined FUN_148c421f2(void)

longlong FUN_148c421f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42222 FUN_148c42222 body=48 status=ok
// SIG undefined FUN_148c42222(void)

longlong FUN_148c42222(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42252 FUN_148c42252 body=48 status=ok
// SIG undefined FUN_148c42252(void)

longlong FUN_148c42252(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42282 FUN_148c42282 body=48 status=ok
// SIG undefined FUN_148c42282(void)

longlong FUN_148c42282(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1548;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c422b2 FUN_148c422b2 body=48 status=ok
// SIG undefined FUN_148c422b2(void)

longlong FUN_148c422b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1550;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c422e2 FUN_148c422e2 body=48 status=ok
// SIG undefined FUN_148c422e2(void)

longlong FUN_148c422e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1558;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42330 FUN_148c42330 body=63 status=ok
// SIG undefined FUN_148c42330(void)

undefined1 FUN_148c42330(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c42484(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148c42398 FUN_148c42398 body=59 status=ok
// SIG undefined FUN_148c42398(void)

undefined8 FUN_148c42398(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c423e4 FUN_148c423e4 body=38 status=ok
// SIG undefined FUN_148c423e4(void)

void FUN_148c423e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_1409e3194(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148c4244c FUN_148c4244c body=55 status=ok
// SIG undefined FUN_148c4244c(void)

void FUN_148c4244c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae6e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae6e0 = FUN_140002ddd(FUN_1465ebd59,uVar1,L"OakUIRewardDisplay");
  }
  return;
}



// FUNCTION 148c42484 FUN_148c42484 body=381 status=ok
// SIG undefined FUN_148c42484(void)

longlong FUN_148c42484(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_148c42602(param_1 + 0x10,param_2 + 0x10);
  FUN_148c42602(param_1 + 0x28,param_2 + 0x28);
  FUN_1409e3140(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  FUN_1409e3140(param_1 + 0x80,param_2 + 0x80);
  plVar1 = *(longlong **)(param_2 + 0x98);
  plVar2 = *(longlong **)(param_1 + 0x98);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x98) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  plVar1 = *(longlong **)(param_2 + 0xa8);
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xa8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  plVar1 = *(longlong **)(param_2 + 0xb8);
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  plVar1 = *(longlong **)(param_2 + 200);
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 200) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148c42602 FUN_148c42602 body=84 status=ok
// SIG undefined FUN_148c42602(void)

longlong * FUN_148c42602(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c426a8 FUN_148c426a8 body=59 status=ok
// SIG undefined FUN_148c426a8(void)

undefined8 FUN_148c426a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c426ee FUN_148c426ee body=32 status=ok
// SIG undefined FUN_148c426ee(void)

void FUN_148c426ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_148c42770(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148c42750 FUN_148c42750 body=32 status=ok
// SIG undefined FUN_148c42750(void)

undefined8 FUN_148c42750(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Reward icons for UI");
  return param_2;
}



// FUNCTION 148c42770 FUN_148c42770 body=56 status=ok
// SIG undefined FUN_148c42770(void)

void FUN_148c42770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7ee2a0;
  FUN_14087acb9(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c42814 FUN_148c42814 body=93 status=ok
// SIG undefined FUN_148c42814(void)

undefined8 FUN_148c42814(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      if (*(char *)(param_3 + -8) == '\0') {
        *(undefined1 *)(param_2 + -8) = 0;
        *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      }
      FUN_145c0fe5a(param_2,param_3);
      FUN_148c429e2(param_2 + 0x18,param_3 + 0x18);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c4289a FUN_148c4289a body=59 status=ok
// SIG undefined FUN_148c4289a(void)

undefined8 FUN_148c4289a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c428e0 FUN_148c428e0 body=34 status=ok
// SIG undefined FUN_148c428e0(void)

void FUN_148c428e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148c429a6(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148c42948 FUN_148c42948 body=38 status=ok
// SIG undefined FUN_148c42948(void)

undefined8 FUN_148c42948(undefined8 param_1,int param_2)

{
  FUN_148c429a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4296e FUN_148c4296e body=55 status=ok
// SIG undefined FUN_148c4296e(void)

void FUN_148c4296e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae810 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae810 = FUN_140002ddd(FUN_1465ebe18,uVar1,L"OakSequentialEchoLogCollectionDef");
  }
  return;
}



// FUNCTION 148c429a6 FUN_148c429a6 body=59 status=ok
// SIG undefined FUN_148c429a6(void)

void FUN_148c429a6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7ee440;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c429e2 FUN_148c429e2 body=79 status=ok
// SIG undefined FUN_148c429e2(void)

undefined8 * FUN_148c429e2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1418cfa1c(param_1,iVar1);
      FUN_1418cfb6a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c42a32 FUN_148c42a32 body=104 status=ok
// SIG undefined FUN_148c42a32(void)

undefined8 FUN_148c42a32(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_148d126b0(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c42a9c FUN_148c42a9c body=28 status=ok
// SIG undefined FUN_148c42a9c(void)

undefined8 FUN_148c42a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c42afe FUN_148c42afe body=54 status=ok
// SIG undefined FUN_148c42afe(void)

undefined1 FUN_148c42afe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c42c12(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c42b5c FUN_148c42b5c body=59 status=ok
// SIG undefined FUN_148c42b5c(void)

undefined8 FUN_148c42b5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c42ba2 FUN_148c42ba2 body=34 status=ok
// SIG undefined FUN_148c42ba2(void)

void FUN_148c42ba2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148c42c96(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c42c12 FUN_148c42c12 body=131 status=ok
// SIG undefined FUN_148c42c12(void)

longlong FUN_148c42c12(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1 + 0x28,param_2 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_148bd7112(param_1 + 0x48,param_2 + 0x48);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe | *(byte *)(param_2 + 0x58) & 1;
  return param_1;
}



// FUNCTION 148c42c96 FUN_148c42c96 body=102 status=ok
// SIG undefined FUN_148c42c96(void)

void FUN_148c42c96(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b7f22a0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b258290;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148c42cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148c42cfc FUN_148c42cfc body=38 status=ok
// SIG undefined FUN_148c42cfc(void)

undefined8 FUN_148c42cfc(undefined8 param_1,int param_2)

{
  FUN_148c42c96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c42d22 FUN_148c42d22 body=55 status=ok
// SIG undefined FUN_148c42d22(void)

void FUN_148c42d22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae858 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae858 = FUN_140002ddd(FUN_1465ebf19,uVar1,L"OakSharedSkillDelegates");
  }
  return;
}



// FUNCTION 148c42d5a FUN_148c42d5a body=53 status=ok
// SIG undefined FUN_148c42d5a(void)

void FUN_148c42d5a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b7ee740;
  FUN_144a5dc74(param_2 + 1);
  FUN_144a5dc74(param_2 + 3);
  FUN_144a5dc74(param_2 + 5);
  return;
}



// FUNCTION 148c42da6 FUN_148c42da6 body=54 status=ok
// SIG undefined FUN_148c42da6(void)

undefined1 FUN_148c42da6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c42f00(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148c42e04 FUN_148c42e04 body=59 status=ok
// SIG undefined FUN_148c42e04(void)

undefined8 FUN_148c42e04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c42e4a FUN_148c42e4a body=32 status=ok
// SIG undefined FUN_148c42e4a(void)

void FUN_148c42e4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148c42eb4(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c42eb4 FUN_148c42eb4 body=76 status=ok
// SIG undefined FUN_148c42eb4(void)

void FUN_148c42eb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7ee740;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c42ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c42f00 FUN_148c42f00 body=168 status=ok
// SIG undefined FUN_148c42f00(void)

longlong FUN_148c42f00(longlong param_1,longlong param_2)

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
  return param_1;
}



// FUNCTION 148c42ff4 FUN_148c42ff4 body=62 status=ok
// SIG undefined FUN_148c42ff4(void)

undefined1 FUN_148c42ff4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14173baee(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c4305a FUN_148c4305a body=59 status=ok
// SIG undefined FUN_148c4305a(void)

undefined8 FUN_148c4305a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c430fa FUN_148c430fa body=55 status=ok
// SIG undefined FUN_148c430fa(void)

void FUN_148c430fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae888 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae888 = FUN_140002ddd(FUN_1465ec00f,uVar1,L"OakShieldNamingStrategy");
  }
  return;
}



// FUNCTION 148c43132 FUN_148c43132 body=77 status=ok
// SIG undefined FUN_148c43132(void)

void FUN_148c43132(undefined8 param_1,undefined8 *param_2)

{
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b7f1610;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  param_2[0x6b] = 0;
  return;
}



// FUNCTION 148c431a4 FUN_148c431a4 body=63 status=ok
// SIG undefined FUN_148c431a4(void)

undefined1 FUN_148c431a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c432cc(param_2,param_3);
    param_3 = param_3 + 0x360;
    param_2 = param_2 + 0x360;
  }
  return 1;
}



// FUNCTION 148c4320c FUN_148c4320c body=59 status=ok
// SIG undefined FUN_148c4320c(void)

undefined8 FUN_148c4320c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c43258 FUN_148c43258 body=38 status=ok
// SIG undefined FUN_148c43258(void)

void FUN_148c43258(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x360) == '\x01') {
    FUN_14060fc84(param_2);
    *(undefined1 *)(param_2 + 0x360) = 0;
  }
  return;
}



// FUNCTION 148c432cc FUN_148c432cc body=98 status=ok
// SIG undefined FUN_148c432cc(void)

longlong FUN_148c432cc(longlong param_1,longlong param_2)

{
  FUN_147f74370();
  FUN_144a7bb84(param_1 + 0x300,param_2 + 0x300);
  FUN_144a7bb84(param_1 + 0x318,param_2 + 0x318);
  FUN_14123c256(param_1 + 0x330,param_2 + 0x330);
  FUN_14123c256(param_1 + 0x348,param_2 + 0x348);
  return param_1;
}



// FUNCTION 148c43330 FUN_148c43330 body=77 status=ok
// SIG undefined FUN_148c43330(void)

void FUN_148c43330(undefined8 param_1,undefined8 *param_2)

{
  FUN_141355748(param_2);
  *param_2 = &PTR_FUN_14b7eec60;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 148c43394 FUN_148c43394 body=63 status=ok
// SIG undefined FUN_148c43394(void)

undefined1 FUN_148c43394(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c434b0(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 148c433fc FUN_148c433fc body=59 status=ok
// SIG undefined FUN_148c433fc(void)

undefined8 FUN_148c433fc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c43448 FUN_148c43448 body=38 status=ok
// SIG undefined FUN_148c43448(void)

void FUN_148c43448(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_1407f61d0(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 148c434b0 FUN_148c434b0 body=98 status=ok
// SIG undefined FUN_148c434b0(void)

longlong FUN_148c434b0(longlong param_1,longlong param_2)

{
  FUN_147f75384();
  FUN_144a7bb84(param_1 + 0x148,param_2 + 0x148);
  FUN_144a7bb84(param_1 + 0x160,param_2 + 0x160);
  FUN_14123c256(param_1 + 0x178,param_2 + 0x178);
  FUN_14123c256(param_1 + 400,param_2 + 400);
  return param_1;
}



// FUNCTION 148c43514 FUN_148c43514 body=96 status=ok
// SIG undefined FUN_148c43514(void)

void FUN_148c43514(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 148c435b2 FUN_148c435b2 body=59 status=ok
// SIG undefined FUN_148c435b2(void)

undefined8 FUN_148c435b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c435fe FUN_148c435fe body=38 status=ok
// SIG undefined FUN_148c435fe(void)

void FUN_148c435fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1405c6060(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148c43692 FUN_148c43692 body=63 status=ok
// SIG undefined FUN_148c43692(void)

undefined1 FUN_148c43692(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c437ae(param_2,param_3);
    param_3 = param_3 + 0x640;
    param_2 = param_2 + 0x640;
  }
  return 1;
}



// FUNCTION 148c436fa FUN_148c436fa body=59 status=ok
// SIG undefined FUN_148c436fa(void)

undefined8 FUN_148c436fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c43746 FUN_148c43746 body=38 status=ok
// SIG undefined FUN_148c43746(void)

void FUN_148c43746(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x640) == '\x01') {
    FUN_140fa8b94(param_2);
    *(undefined1 *)(param_2 + 0x640) = 0;
  }
  return;
}



// FUNCTION 148c437ae FUN_148c437ae body=1064 status=ok
// SIG undefined FUN_148c437ae(void)

longlong FUN_148c437ae(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_140d02432(param_1 + 0x18,param_2 + 0x18);
  FUN_140d02432(param_1 + 0x68,param_2 + 0x68);
  FUN_140d02432(param_1 + 0xb8,param_2 + 0xb8);
  uVar8 = *(undefined8 *)(param_2 + 0x110);
  uVar1 = *(undefined4 *)(param_2 + 0x118);
  uVar2 = *(undefined4 *)(param_2 + 0x11c);
  uVar3 = *(undefined4 *)(param_2 + 0x120);
  uVar4 = *(undefined4 *)(param_2 + 0x124);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = uVar8;
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  *(undefined4 *)(param_1 + 0x120) = uVar3;
  *(undefined4 *)(param_1 + 0x124) = uVar4;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  uVar1 = *(undefined4 *)(param_2 + 0x134);
  uVar2 = *(undefined4 *)(param_2 + 0x138);
  uVar3 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  FUN_144a787a6(param_1 + 0x140,param_2 + 0x140);
  if ((*(longlong *)(param_1 + 0x150) != *(longlong *)(param_2 + 0x150)) ||
     (*(int *)(param_1 + 0x158) != *(int *)(param_2 + 0x158))) {
    *(longlong *)(param_1 + 0x150) = *(longlong *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar1 = *(undefined4 *)(param_2 + 0x174);
  uVar2 = *(undefined4 *)(param_2 + 0x178);
  uVar3 = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = uVar1;
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  *(undefined4 *)(param_1 + 0x17c) = uVar3;
  FUN_144a787a6(param_1 + 0x180,param_2 + 0x180);
  if ((*(longlong *)(param_1 + 400) != *(longlong *)(param_2 + 400)) ||
     (*(int *)(param_1 + 0x198) != *(int *)(param_2 + 0x198))) {
    *(longlong *)(param_1 + 400) = *(longlong *)(param_2 + 400);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  if ((*(longlong *)(param_1 + 0x1b8) != *(longlong *)(param_2 + 0x1b8)) ||
     (*(int *)(param_1 + 0x1c0) != *(int *)(param_2 + 0x1c0))) {
    *(longlong *)(param_1 + 0x1b8) = *(longlong *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  uVar8 = *(undefined8 *)(param_2 + 0x1d0);
  uVar9 = *(undefined8 *)(param_2 + 0x1d8);
  uVar10 = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  *(undefined8 *)(param_1 + 0x1d0) = uVar8;
  *(undefined8 *)(param_1 + 0x1d8) = uVar9;
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  if ((*(longlong *)(param_1 + 0x200) != *(longlong *)(param_2 + 0x200)) ||
     (*(int *)(param_1 + 0x208) != *(int *)(param_2 + 0x208))) {
    *(longlong *)(param_1 + 0x200) = *(longlong *)(param_2 + 0x200);
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x218);
  uVar2 = *(undefined4 *)(param_2 + 0x21c);
  uVar3 = *(undefined4 *)(param_2 + 0x220);
  uVar4 = *(undefined4 *)(param_2 + 0x224);
  uVar5 = *(undefined4 *)(param_2 + 0x22c);
  uVar6 = *(undefined4 *)(param_2 + 0x230);
  uVar7 = *(undefined4 *)(param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x22c) = uVar5;
  *(undefined4 *)(param_1 + 0x230) = uVar6;
  *(undefined4 *)(param_1 + 0x234) = uVar7;
  *(undefined4 *)(param_1 + 0x218) = uVar1;
  *(undefined4 *)(param_1 + 0x21c) = uVar2;
  *(undefined4 *)(param_1 + 0x220) = uVar3;
  *(undefined4 *)(param_1 + 0x224) = uVar4;
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 0x240);
  FUN_140d02432(param_1 + 0x248,param_2 + 0x248);
  FUN_140d02432(param_1 + 0x298,param_2 + 0x298);
  FUN_140d02432(param_1 + 0x2e8,param_2 + 0x2e8);
  FUN_140d02432(param_1 + 0x338,param_2 + 0x338);
  uVar1 = *(undefined4 *)(param_2 + 0x38c);
  uVar2 = *(undefined4 *)(param_2 + 0x390);
  uVar3 = *(undefined4 *)(param_2 + 0x394);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 0x388);
  *(undefined4 *)(param_1 + 0x38c) = uVar1;
  *(undefined4 *)(param_1 + 0x390) = uVar2;
  *(undefined4 *)(param_1 + 0x394) = uVar3;
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_2 + 0x398);
  FUN_140d02432(param_1 + 0x3a0,param_2 + 0x3a0);
  FUN_140d02432(param_1 + 0x3f0,param_2 + 0x3f0);
  FUN_140d02432(param_1 + 0x440,param_2 + 0x440);
  if ((*(longlong *)(param_1 + 0x490) != *(longlong *)(param_2 + 0x490)) ||
     (*(int *)(param_1 + 0x498) != *(int *)(param_2 + 0x498))) {
    *(longlong *)(param_1 + 0x490) = *(longlong *)(param_2 + 0x490);
    *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
    *(undefined8 *)(param_1 + 0x4a0) = 0;
  }
  FUN_14118c70e(param_1 + 0x4a8,param_2 + 0x4a8);
  (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x20))(param_1 + 0x4e8,0);
  *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_2 + 0x4f0);
  FUN_1406022fe(param_1 + 0x4f8,param_2 + 0x4f8);
  FUN_140d02432(param_1 + 0x508,param_2 + 0x508);
  FUN_140d02432(param_1 + 0x558,param_2 + 0x558);
  *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_2 + 0x5a8);
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
  FUN_1403de7ba(param_1 + 0x5b8,param_2 + 0x5b8);
  if ((*(longlong *)(param_1 + 0x5d8) != *(longlong *)(param_2 + 0x5d8)) ||
     (*(int *)(param_1 + 0x5e0) != *(int *)(param_2 + 0x5e0))) {
    *(longlong *)(param_1 + 0x5d8) = *(longlong *)(param_2 + 0x5d8);
    *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_2 + 0x5e0);
    *(undefined8 *)(param_1 + 0x5e8) = 0;
  }
  FUN_141848d72(param_1 + 0x5f0,param_2 + 0x5f0);
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_2 + 0x608);
  FUN_14123c256(param_1 + 0x610,param_2 + 0x610);
  uVar8 = *(undefined8 *)(param_2 + 0x630);
  *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(param_2 + 0x628);
  *(undefined8 *)(param_1 + 0x630) = uVar8;
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_2 + 0x638);
  return param_1;
}



// FUNCTION 148c43bd8 FUN_148c43bd8 body=86 status=ok
// SIG undefined FUN_148c43bd8(void)

void FUN_148c43bd8(undefined8 param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0xc] = 0;
  *param_2 = &PTR_FUN_14b7f1680;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_1448417d2(param_2 + 3);
  param_2[8] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 148c43c2e FUN_148c43c2e body=70 status=ok
// SIG undefined FUN_148c43c2e(void)

void FUN_148c43c2e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b7f1680;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_1448417d2(param_2 + 3);
  param_2[8] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 148c43c98 FUN_148c43c98 body=145 status=ok
// SIG undefined FUN_148c43c98(void)

undefined8 FUN_148c43c98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_148c43e64(param_2 + lVar10 + 8,param_3 + lVar10 + 8);
      *(undefined8 *)(param_2 + lVar10 + 0x18) = *(undefined8 *)(param_3 + lVar10 + 0x18);
      FUN_1448417d2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_14123c256(lVar1 + 0x30,lVar2 + 0x30);
      uVar3 = *(undefined4 *)(lVar2 + 0x4c);
      uVar4 = *(undefined4 *)(lVar2 + 0x50);
      uVar5 = *(undefined4 *)(lVar2 + 0x54);
      uVar6 = *(undefined4 *)(lVar2 + 0x58);
      uVar7 = *(undefined4 *)(lVar2 + 0x5c);
      uVar8 = *(undefined4 *)(lVar2 + 0x60);
      uVar9 = *(undefined4 *)(lVar2 + 100);
      *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(lVar2 + 0x48);
      *(undefined4 *)(lVar1 + 0x4c) = uVar3;
      *(undefined4 *)(lVar1 + 0x50) = uVar4;
      *(undefined4 *)(lVar1 + 0x54) = uVar5;
      *(undefined4 *)(lVar1 + 0x58) = uVar6;
      *(undefined4 *)(lVar1 + 0x5c) = uVar7;
      *(undefined4 *)(lVar1 + 0x60) = uVar8;
      *(undefined4 *)(lVar1 + 100) = uVar9;
      lVar10 = lVar10 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c43d52 FUN_148c43d52 body=59 status=ok
// SIG undefined FUN_148c43d52(void)

undefined8 FUN_148c43d52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c43d98 FUN_148c43d98 body=32 status=ok
// SIG undefined FUN_148c43d98(void)

void FUN_148c43d98(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_148cedc2c(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c43e06 FUN_148c43e06 body=38 status=ok
// SIG undefined FUN_148c43e06(void)

undefined8 FUN_148c43e06(undefined8 param_1,int param_2)

{
  FUN_148cedc2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c43e2c FUN_148c43e2c body=55 status=ok
// SIG undefined FUN_148c43e2c(void)

void FUN_148c43e2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaea08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaea08 = FUN_140002ddd(FUN_1465ec673,uVar1,L"OakSingularityEffectProvider");
  }
  return;
}



// FUNCTION 148c43e64 FUN_148c43e64 body=95 status=ok
// SIG undefined FUN_148c43e64(void)

undefined8 * FUN_148c43e64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c43ec3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c43f0c(param_1,iVar1);
      FUN_148c43f6e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c43ec3 FUN_148c43ec3 body=73 status=ok
// SIG undefined FUN_148c43ec3(void)

void FUN_148c43ec3(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148c43f0c FUN_148c43f0c body=98 status=ok
// SIG undefined FUN_148c43f0c(void)

void FUN_148c43f0c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c43f6e FUN_148c43f6e body=45 status=ok
// SIG undefined FUN_148c43f6e(void)

void FUN_148c43f6e(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148c43ff4 FUN_148c43ff4 body=63 status=ok
// SIG undefined FUN_148c43ff4(void)

undefined1 FUN_148c43ff4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148badccc(param_2,param_3);
    param_3 = param_3 + 0x298;
    param_2 = param_2 + 0x298;
  }
  return 1;
}



// FUNCTION 148c4405c FUN_148c4405c body=59 status=ok
// SIG undefined FUN_148c4405c(void)

undefined8 FUN_148c4405c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c440a8 FUN_148c440a8 body=38 status=ok
// SIG undefined FUN_148c440a8(void)

void FUN_148c440a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x298) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x298) = 0;
  }
  return;
}



// FUNCTION 148c44126 FUN_148c44126 body=48 status=ok
// SIG undefined FUN_148c44126(void)

void FUN_148c44126(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_143c9d6b0(param_2);
  *param_2 = &PTR_FUN_14b635540;
  return;
}



// FUNCTION 148c44156 FUN_148c44156 body=32 status=ok
// SIG undefined FUN_148c44156(void)

void FUN_148c44156(undefined8 param_1,undefined8 *param_2)

{
  FUN_143c9d6b0(param_2);
  *param_2 = &PTR_FUN_14b635540;
  return;
}



// FUNCTION 148c441d0 FUN_148c441d0 body=59 status=ok
// SIG undefined FUN_148c441d0(void)

undefined8 FUN_148c441d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4421c FUN_148c4421c body=63 status=ok
// SIG undefined FUN_148c4421c(void)

void FUN_148c4421c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b635540;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_1418c4aba(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 148c442ac FUN_148c442ac body=48 status=ok
// SIG undefined FUN_148c442ac(void)

void FUN_148c442ac(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x10c8);
  FUN_140c15cec(param_2);
  *param_2 = &PTR_FUN_14b7ef630;
  return;
}



// FUNCTION 148c442dc FUN_148c442dc body=32 status=ok
// SIG undefined FUN_148c442dc(void)

void FUN_148c442dc(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c15cec(param_2);
  *param_2 = &PTR_FUN_14b7ef630;
  return;
}



// FUNCTION 148c44320 FUN_148c44320 body=63 status=ok
// SIG undefined FUN_148c44320(void)

undefined1 FUN_148c44320(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bae212(param_2,param_3);
    param_3 = param_3 + 0x10c8;
    param_2 = param_2 + 0x10c8;
  }
  return 1;
}



// FUNCTION 148c44388 FUN_148c44388 body=59 status=ok
// SIG undefined FUN_148c44388(void)

undefined8 FUN_148c44388(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c443d4 FUN_148c443d4 body=38 status=ok
// SIG undefined FUN_148c443d4(void)

void FUN_148c443d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10c8) == '\x01') {
    FUN_14096c94c(param_2);
    *(undefined1 *)(param_2 + 0x10c8) = 0;
  }
  return;
}



// FUNCTION 148c4444c FUN_148c4444c body=38 status=ok
// SIG undefined FUN_148c4444c(void)

undefined8 FUN_148c4444c(undefined8 param_1,int param_2)

{
  FUN_14096c94c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c44472 FUN_148c44472 body=55 status=ok
// SIG undefined FUN_148c44472(void)

void FUN_148c44472(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaeb18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaeb18 = FUN_140002ddd(FUN_1465ec8c3,uVar1,L"OakSkillCharacterDef");
  }
  return;
}



// FUNCTION 148c444aa FUN_148c444aa body=80 status=ok
// SIG undefined FUN_148c444aa(void)

void FUN_148c444aa(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_1400d6974(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c444fc FUN_148c444fc body=28 status=ok
// SIG undefined FUN_148c444fc(void)

undefined8 FUN_148c444fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c4452a FUN_148c4452a body=37 status=ok
// SIG undefined FUN_148c4452a(void)

void FUN_148c4452a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,800);
  FUN_1418c7c70(param_2);
  return;
}



// FUNCTION 148c4457c FUN_148c4457c body=63 status=ok
// SIG undefined FUN_148c4457c(void)

undefined1 FUN_148c4457c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c446a4(param_2,param_3);
    param_3 = param_3 + 800;
    param_2 = param_2 + 800;
  }
  return 1;
}



// FUNCTION 148c445e4 FUN_148c445e4 body=59 status=ok
// SIG undefined FUN_148c445e4(void)

undefined8 FUN_148c445e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c44630 FUN_148c44630 body=38 status=ok
// SIG undefined FUN_148c44630(void)

void FUN_148c44630(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 800) == '\x01') {
    FUN_140c21e34(param_2);
    *(undefined1 *)(param_2 + 800) = 0;
  }
  return;
}



// FUNCTION 148c446a4 FUN_148c446a4 body=443 status=ok
// SIG undefined FUN_148c446a4(void)

longlong FUN_148c446a4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1487138f8();
  if (param_2 != param_1) {
    FUN_148c448be(param_1 + 0x210,param_2 + 0x210);
    FUN_148c449f0(param_1 + 0x228,param_2 + 0x228);
    FUN_148c44b22(param_1 + 0x240,param_2 + 0x240);
    FUN_1401b31d8(param_1 + 600,param_2 + 600);
    FUN_1401b31d8(param_1 + 0x270,param_2 + 0x270);
    FUN_148c44c54(param_1 + 0x288,param_2 + 0x288);
    FUN_148c44d86(param_1 + 0x2a0,param_2 + 0x2a0);
  }
  lVar5 = *(longlong *)(param_2 + 0x2b8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x2b8);
    }
  }
  *(longlong *)(param_1 + 0x2b8) = lVar5;
  uVar3 = *(undefined8 *)(param_2 + 0x2c0);
  lVar5 = *(longlong *)(param_2 + 0x2c8);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c0) = uVar3;
  *(longlong *)(param_1 + 0x2c8) = lVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x2d0);
  lVar5 = *(longlong *)(param_2 + 0x2d8);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d0) = uVar3;
  *(longlong *)(param_1 + 0x2d8) = lVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_145c56af0(param_1 + 0x2e0,param_2 + 0x2e0);
  FUN_148c44860(param_1 + 0x2f8,param_2 + 0x2f8);
  uVar3 = *(undefined8 *)(param_2 + 0x308);
  lVar5 = *(longlong *)(param_2 + 0x310);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x310);
  *(undefined8 *)(param_1 + 0x308) = uVar3;
  *(longlong *)(param_1 + 0x310) = lVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)(param_2 + 0x318);
  return param_1;
}



// FUNCTION 148c44860 FUN_148c44860 body=93 status=ok
// SIG undefined FUN_148c44860(void)

undefined8 * FUN_148c44860(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c22032(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c44eb8(param_1,iVar1);
      FUN_148c44f1a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c448be FUN_148c448be body=304 status=ok
// SIG undefined FUN_148c448be(void)

void FUN_148c448be(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c449f0 FUN_148c449f0 body=304 status=ok
// SIG undefined FUN_148c449f0(void)

void FUN_148c449f0(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c44b22 FUN_148c44b22 body=304 status=ok
// SIG undefined FUN_148c44b22(void)

void FUN_148c44b22(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c44c54 FUN_148c44c54 body=304 status=ok
// SIG undefined FUN_148c44c54(void)

void FUN_148c44c54(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c44d86 FUN_148c44d86 body=304 status=ok
// SIG undefined FUN_148c44d86(void)

void FUN_148c44d86(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c44eb8 FUN_148c44eb8 body=98 status=ok
// SIG undefined FUN_148c44eb8(void)

void FUN_148c44eb8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c44f1a FUN_148c44f1a body=45 status=ok
// SIG undefined FUN_148c44f1a(void)

void FUN_148c44f1a(longlong param_1,longlong param_2,int param_3)

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
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c44f7c FUN_148c44f7c body=54 status=ok
// SIG undefined FUN_148c44f7c(void)

undefined1 FUN_148c44f7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c45090(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c44fda FUN_148c44fda body=59 status=ok
// SIG undefined FUN_148c44fda(void)

undefined8 FUN_148c44fda(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c45020 FUN_148c45020 body=34 status=ok
// SIG undefined FUN_148c45020(void)

void FUN_148c45020(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1458b6c74(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c45090 FUN_148c45090 body=92 status=ok
// SIG undefined FUN_148c45090(void)

longlong FUN_148c45090(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  FUN_148c450ec(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 148c450ec FUN_148c450ec body=108 status=ok
// SIG undefined FUN_148c450ec(void)

undefined4 * FUN_148c450ec(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xe);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x12);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 10) = *(undefined4 *)((longlong)param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0xe) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x12) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x16) = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if (param_2 == param_1) {
    return param_1;
  }
  if (*(char *)((longlong)param_2 + 0x1b) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
    uVar8 = 1;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x1b) != '\x01') goto LAB_148c45118;
    uVar8 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x1b) = uVar8;
LAB_148c45118:
  if (*(char *)(param_2 + 10) == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 10) = 1;
  }
  else if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  FUN_1401b31d8(param_1 + 0xc,param_2 + 0xc);
  return param_1;
}



// FUNCTION 148c4515a FUN_148c4515a body=38 status=ok
// SIG undefined FUN_148c4515a(void)

undefined8 FUN_148c4515a(undefined8 param_1,int param_2)

{
  FUN_1458b6c74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c45180 FUN_148c45180 body=57 status=ok
// SIG undefined FUN_148c45180(void)

void FUN_148c45180(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaeb68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaeb68 = FUN_140002ddd(FUN_1465eca5b,uVar1,L"OakSkillDelegates");
  }
  return;
}



// FUNCTION 148c45202 FUN_148c45202 body=59 status=ok
// SIG undefined FUN_148c45202(void)

undefined8 FUN_148c45202(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c452fe FUN_148c452fe body=59 status=ok
// SIG undefined FUN_148c452fe(void)

undefined8 FUN_148c452fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4539e FUN_148c4539e body=55 status=ok
// SIG undefined FUN_148c4539e(void)

void FUN_148c4539e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaebf0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaebf0 = FUN_140002ddd(FUN_1465ecd19,uVar1,L"OakSkillEntangledCountValueResolver");
  }
  return;
}



// FUNCTION 148c4543e FUN_148c4543e body=105 status=ok
// SIG undefined FUN_148c4543e(void)

undefined8 FUN_148c4543e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      *param_2 = 0xffffffffffffffff;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
    lVar1 = param_3[2];
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = param_3[2];
      }
    }
    param_2[2] = lVar1;
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
    param_2 = param_2 + 4;
    param_3 = param_3 + 4;
  }
  return 1;
}



// FUNCTION 148c454d0 FUN_148c454d0 body=59 status=ok
// SIG undefined FUN_148c454d0(void)

undefined8 FUN_148c454d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c45572 FUN_148c45572 body=50 status=ok
// SIG undefined FUN_148c45572(void)

void FUN_148c45572(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined1 *)(param_2 + 300) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  return;
}



// FUNCTION 148c455a4 FUN_148c455a4 body=54 status=ok
// SIG undefined FUN_148c455a4(void)

void FUN_148c455a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 300) == '\x01') {
    *(undefined1 *)(param_2 + 300) = 0;
  }
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_2);
  return;
}



// FUNCTION 148c45614 FUN_148c45614 body=59 status=ok
// SIG undefined FUN_148c45614(void)

undefined8 FUN_148c45614(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c45728 FUN_148c45728 body=30 status=ok
// SIG undefined FUN_148c45728(void)

void FUN_148c45728(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 148c45746 FUN_148c45746 body=132 status=ok
// SIG undefined FUN_148c45746(void)

void FUN_148c45746(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148c457cc FUN_148c457cc body=98 status=ok
// SIG undefined FUN_148c457cc(void)

void FUN_148c457cc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c4582e FUN_148c4582e body=111 status=ok
// SIG undefined FUN_148c4582e(void)

void FUN_148c4582e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar3) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 8 + lVar3) = 0xffffffff;
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar3);
      *(longlong *)(param_1 + 0x10 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined4 *)(param_1 + 0x18 + lVar3) = *(undefined4 *)(param_2 + 0x18 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c4589e FUN_148c4589e body=71 status=ok
// SIG undefined FUN_148c4589e(void)

void FUN_148c4589e(longlong param_1)

{
  if (*(char *)(param_1 + 0x130) == '\x01') {
    if (*(char *)(param_1 + 300) == '\x01') {
      *(undefined1 *)(param_1 + 300) = 0;
    }
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_1400020a8();
    }
    FUN_1409def00(param_1);
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  return;
}



// FUNCTION 148c45952 FUN_148c45952 body=59 status=ok
// SIG undefined FUN_148c45952(void)

undefined8 FUN_148c45952(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


