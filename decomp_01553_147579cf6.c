// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147579cf6 FUN_147579cf6 body=122 status=ok
// SIG undefined FUN_147579cf6(void)

undefined8 FUN_147579cf6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 0x30 + lVar7;
      *(undefined8 *)(lVar2 + -0x20) = puVar1[2];
      uVar6 = puVar1[1];
      *(undefined8 *)(lVar2 + -0x30) = *puVar1;
      *(undefined8 *)(lVar2 + -0x28) = uVar6;
      *(undefined8 *)(lVar2 + -0x18) = puVar1[3];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
      uVar4 = *(undefined4 *)(puVar1 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 6);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 8);
      lVar7 = lVar7 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147579d98 FUN_147579d98 body=59 status=ok
// SIG undefined FUN_147579d98(void)

undefined8 FUN_147579d98(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147579dde FUN_147579dde body=38 status=ok
// SIG undefined FUN_147579dde(void)

void FUN_147579dde(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147579e8c FUN_147579e8c body=109 status=ok
// SIG undefined FUN_147579e8c(void)

undefined1 FUN_147579e8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x10) = lVar7;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147579f22 FUN_147579f22 body=127 status=ok
// SIG undefined FUN_147579f22(void)

void FUN_147579f22(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = ((uint)(*(ulonglong *)(param_2 + 0x10) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)(param_2 + 0x10) >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = FUN_1447addd0(param_2,0x10);
  FUN_144a78877(uVar2,uVar1 >> 0x10 ^ uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757a020 FUN_14757a020 body=46 status=ok
// SIG undefined FUN_14757a020(void)

void FUN_14757a020(undefined8 param_1,longlong param_2)

{
  FUN_140843826(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14757a064 FUN_14757a064 body=54 status=ok
// SIG undefined FUN_14757a064(void)

undefined1 FUN_14757a064(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14757a15e(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 14757a0c2 FUN_14757a0c2 body=59 status=ok
// SIG undefined FUN_14757a0c2(void)

undefined8 FUN_14757a0c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757a15e FUN_14757a15e body=82 status=ok
// SIG undefined FUN_14757a15e(void)

undefined4 * FUN_14757a15e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_14702887a(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 10);
    }
  }
  *(longlong *)(param_1 + 10) = lVar4;
  return param_1;
}



// FUNCTION 14757a1b2 FUN_14757a1b2 body=52 status=ok
// SIG undefined FUN_14757a1b2(void)

void FUN_14757a1b2(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_140843826(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14757a230 FUN_14757a230 body=54 status=ok
// SIG undefined FUN_14757a230(void)

undefined1 FUN_14757a230(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14757a32e(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 14757a28e FUN_14757a28e body=59 status=ok
// SIG undefined FUN_14757a28e(void)

undefined8 FUN_14757a28e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757a32e FUN_14757a32e body=105 status=ok
// SIG undefined FUN_14757a32e(void)

longlong * FUN_14757a32e(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *param_2;
    }
  }
  bVar3 = DAT_14c950c29;
  *param_1 = lVar4;
  *(int *)(param_1 + 3) = (int)param_2[3];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar4 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  lVar4 = param_2[4];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[4];
    }
  }
  param_1[4] = lVar4;
  return param_1;
}



// FUNCTION 14757a3a8 FUN_14757a3a8 body=44 status=ok
// SIG undefined FUN_14757a3a8(void)

void FUN_14757a3a8(undefined8 param_1,longlong *param_2)

{
  FUN_1408437ec(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14757a3ea FUN_14757a3ea body=54 status=ok
// SIG undefined FUN_14757a3ea(void)

undefined1 FUN_14757a3ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14757a4e4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14757a448 FUN_14757a448 body=59 status=ok
// SIG undefined FUN_14757a448(void)

undefined8 FUN_14757a448(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757a4e4 FUN_14757a4e4 body=93 status=ok
// SIG undefined FUN_14757a4e4(void)

undefined8 * FUN_14757a4e4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1408437ec(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14757a542(param_1,iVar1);
      FUN_14757a5b5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14757a542 FUN_14757a542 body=115 status=ok
// SIG undefined FUN_14757a542(void)

void FUN_14757a542(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14757a5b5 FUN_14757a5b5 body=52 status=ok
// SIG undefined FUN_14757a5b5(void)

void FUN_14757a5b5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14757a5ea(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 14757a5ea FUN_14757a5ea body=78 status=ok
// SIG undefined FUN_14757a5ea(void)

undefined4 * FUN_14757a5ea(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_14757a638(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 10);
  *(longlong *)(param_1 + 10) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14757a638 FUN_14757a638 body=77 status=ok
// SIG undefined FUN_14757a638(void)

undefined8 * FUN_14757a638(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1470288d8(param_1,iVar1,0);
    FUN_14702893a(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14757a686 FUN_14757a686 body=48 status=ok
// SIG undefined FUN_14757a686(void)

void FUN_14757a686(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1408437ec(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14757a6b6 FUN_14757a6b6 body=132 status=ok
// SIG undefined FUN_14757a6b6(void)

void FUN_14757a6b6(longlong param_1,int param_2)

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



// FUNCTION 14757a75c FUN_14757a75c body=48 status=ok
// SIG undefined FUN_14757a75c(void)

void FUN_14757a75c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14757a7a2 FUN_14757a7a2 body=96 status=ok
// SIG undefined FUN_14757a7a2(void)

undefined1 FUN_14757a7a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar6 + 0x20,param_3 + lVar6 + 0x20);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14757a82a FUN_14757a82a body=59 status=ok
// SIG undefined FUN_14757a82a(void)

undefined8 FUN_14757a82a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757a8c8 FUN_14757a8c8 body=52 status=ok
// SIG undefined FUN_14757a8c8(void)

void FUN_14757a8c8(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14757a948 FUN_14757a948 body=54 status=ok
// SIG undefined FUN_14757a948(void)

undefined1 FUN_14757a948(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475798da(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 14757a9a6 FUN_14757a9a6 body=59 status=ok
// SIG undefined FUN_14757a9a6(void)

undefined8 FUN_14757a9a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757a9ec FUN_14757a9ec body=38 status=ok
// SIG undefined FUN_14757a9ec(void)

void FUN_14757a9ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14757aa92 FUN_14757aa92 body=54 status=ok
// SIG undefined FUN_14757aa92(void)

undefined1 FUN_14757aa92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14757ab90(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14757aaf0 FUN_14757aaf0 body=59 status=ok
// SIG undefined FUN_14757aaf0(void)

undefined8 FUN_14757aaf0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757ab90 FUN_14757ab90 body=99 status=ok
// SIG undefined FUN_14757ab90(void)

longlong * FUN_14757ab90(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *param_2;
    }
  }
  bVar3 = DAT_14c950c29;
  *param_1 = lVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar4 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  lVar4 = param_2[3];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[3];
    }
  }
  param_1[3] = lVar4;
  return param_1;
}



// FUNCTION 14757ac24 FUN_14757ac24 body=100 status=ok
// SIG undefined FUN_14757ac24(void)

undefined1 FUN_14757ac24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(param_2 + 8 + lVar3) = *(undefined1 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14757acb0 FUN_14757acb0 body=59 status=ok
// SIG undefined FUN_14757acb0(void)

undefined8 FUN_14757acb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757ad9e FUN_14757ad9e body=54 status=ok
// SIG undefined FUN_14757ad9e(void)

undefined1 FUN_14757ad9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475798da(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 14757adfc FUN_14757adfc body=59 status=ok
// SIG undefined FUN_14757adfc(void)

undefined8 FUN_14757adfc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757ae42 FUN_14757ae42 body=38 status=ok
// SIG undefined FUN_14757ae42(void)

void FUN_14757ae42(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14757aef0 FUN_14757aef0 body=31 status=ok
// SIG undefined FUN_14757aef0(void)

undefined1
FUN_14757aef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147522e5c(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14757af10 FUN_14757af10 body=117 status=ok
// SIG undefined FUN_14757af10(void)

undefined8 FUN_14757af10(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 0) {
    (**(code **)(*param_1 + 8))(param_1,local_30);
    FUN_147573190(param_3,param_2);
    (**(code **)(*param_1 + 8))(param_1,local_30);
  }
  else {
    FUN_147573190(param_3,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757afa6 FUN_14757afa6 body=59 status=ok
// SIG undefined FUN_14757afa6(void)

undefined8 FUN_14757afa6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757b048 FUN_14757b048 body=31 status=ok
// SIG undefined FUN_14757b048(void)

undefined8 FUN_14757b048(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757b084 FUN_14757b084 body=93 status=ok
// SIG undefined FUN_14757b084(void)

void FUN_14757b084(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4901f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14757b0e2 FUN_14757b0e2 body=126 status=ok
// SIG undefined FUN_14757b0e2(void)

void FUN_14757b0e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4901f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014757b151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14757b202 FUN_14757b202 body=78 status=ok
// SIG undefined FUN_14757b202(void)

uint FUN_14757b202(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = FUN_1447addd0(param_2,0x10);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1 ^ *(uint *)(param_2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757b2b8 FUN_14757b2b8 body=38 status=ok
// SIG undefined FUN_14757b2b8(void)

undefined8 FUN_14757b2b8(undefined8 param_1,int param_2)

{
  FUN_14757433c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757b2de FUN_14757b2de body=38 status=ok
// SIG undefined FUN_14757b2de(void)

undefined8 FUN_14757b2de(undefined8 param_1,int param_2)

{
  FUN_1409f5ace();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757b304 FUN_14757b304 body=51 status=ok
// SIG undefined FUN_14757b304(void)

undefined8 FUN_14757b304(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 8);
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
  return 0;
}



// FUNCTION 14757b338 FUN_14757b338 body=152 status=ok
// SIG undefined FUN_14757b338(void)

undefined8 FUN_14757b338(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *in_stack_00000028;
  local_20 = in_stack_00000028[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_38 = &local_28;
  local_30 = 0;
  uVar4 = (**(code **)(*param_1 + 0x18))();
  plVar3 = (longlong *)in_stack_00000028[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757b3d2 FUN_14757b3d2 body=67 status=ok
// SIG undefined FUN_14757b3d2(void)

void FUN_14757b3d2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000030;
  
  (**(code **)(*param_1 + 0x28))();
  plVar3 = *(longlong **)(in_stack_00000030 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014757b40a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14757b470 FUN_14757b470 body=120 status=ok
// SIG undefined FUN_14757b470(void)

undefined8 FUN_14757b470(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    FUN_1475798da(param_2 + 0x10,param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    FUN_144a787a6(param_2 + 0x48,param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x5c);
    uVar2 = *(undefined4 *)(param_3 + 0x60);
    uVar3 = *(undefined4 *)(param_3 + 100);
    uVar4 = *(undefined4 *)(param_3 + 0x68);
    uVar5 = *(undefined4 *)(param_3 + 0x6c);
    uVar6 = *(undefined4 *)(param_3 + 0x70);
    uVar7 = *(undefined4 *)(param_3 + 0x74);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_2 + 0x5c) = uVar1;
    *(undefined4 *)(param_2 + 0x60) = uVar2;
    *(undefined4 *)(param_2 + 100) = uVar3;
    *(undefined4 *)(param_2 + 0x68) = uVar4;
    *(undefined4 *)(param_2 + 0x6c) = uVar5;
    *(undefined4 *)(param_2 + 0x70) = uVar6;
    *(undefined4 *)(param_2 + 0x74) = uVar7;
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_3 + 0x78);
    param_2 = param_2 + 0x80;
    param_3 = param_3 + 0x80;
  }
  return 1;
}



// FUNCTION 14757b510 FUN_14757b510 body=59 status=ok
// SIG undefined FUN_14757b510(void)

undefined8 FUN_14757b510(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757b55c FUN_14757b55c body=38 status=ok
// SIG undefined FUN_14757b55c(void)

void FUN_14757b55c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_14756d9f6(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14757b61e FUN_14757b61e body=59 status=ok
// SIG undefined FUN_14757b61e(void)

undefined8 FUN_14757b61e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757b714 FUN_14757b714 body=54 status=ok
// SIG undefined FUN_14757b714(void)

undefined1 FUN_14757b714(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14757b812(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 14757b772 FUN_14757b772 body=59 status=ok
// SIG undefined FUN_14757b772(void)

undefined8 FUN_14757b772(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757b812 FUN_14757b812 body=132 status=ok
// SIG undefined FUN_14757b812(void)

undefined8 * FUN_14757b812(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  lVar2 = param_2[4];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[4];
    }
  }
  param_1[4] = lVar2;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 14757b91e FUN_14757b91e body=59 status=ok
// SIG undefined FUN_14757b91e(void)

undefined8 FUN_14757b91e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757b9c0 FUN_14757b9c0 body=38 status=ok
// SIG undefined FUN_14757b9c0(void)

undefined8 FUN_14757b9c0(undefined8 param_1,int param_2)

{
  FUN_1475755ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757b9e6 FUN_14757b9e6 body=78 status=ok
// SIG undefined FUN_14757b9e6(void)

undefined8 FUN_14757b9e6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14757ba36();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757ba36 FUN_14757ba36 body=366 status=ok
// SIG undefined FUN_14757ba36(void)

undefined2 * FUN_14757ba36(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60 [2];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_140b4685a(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0xa8);
  local_50 = (undefined8 *)0x0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_80,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1406cab40(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  puVar2 = local_60;
  if (local_50 != (undefined8 *)0x0) {
    puVar2 = local_50;
  }
  lVar4 = (longlong)(int)local_48;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)((longlong)puVar2 + lVar3) + 8))
                (*(longlong **)((longlong)puVar2 + lVar3),&local_78,local_80);
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  *param_2 = local_88;
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14757bba6 FUN_14757bba6 body=49 status=ok
// SIG undefined FUN_14757bba6(void)

undefined8 * FUN_14757bba6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a490a90;
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757bbd8 FUN_14757bbd8 body=78 status=ok
// SIG undefined FUN_14757bbd8(void)

undefined8 FUN_14757bbd8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14757bc66();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757bc28 FUN_14757bc28 body=40 status=ok
// SIG undefined FUN_14757bc28(void)

void FUN_14757bc28(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14757bc66 FUN_14757bc66 body=338 status=ok
// SIG undefined FUN_14757bc66(void)

undefined2 * FUN_14757bc66(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  cVar1 = *(char *)(param_1 + 0x18);
  local_50 = (undefined1 *)0x0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_68,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    FUN_14757bdba(param_1 + 8,local_80,local_78);
  }
  local_88 = local_78;
  local_84 = 1;
  puVar2 = local_60;
  if (local_50 != (undefined1 *)0x0) {
    puVar2 = local_50;
  }
  lVar4 = (longlong)(int)local_48;
  local_90 = local_80;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(puVar2 + lVar3) + 8))
                (*(longlong **)(puVar2 + lVar3),&local_90,local_68);
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  *param_2 = local_70;
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14757bdba FUN_14757bdba body=151 status=ok
// SIG undefined FUN_14757bdba(void)

void FUN_14757bdba(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_14757bded;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_14757bded:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 2);
  if ((char)param_1[6] == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014757be40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14757beba FUN_14757beba body=59 status=ok
// SIG undefined FUN_14757beba(void)

undefined8 FUN_14757beba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757bf5a FUN_14757bf5a body=29 status=ok
// SIG undefined FUN_14757bf5a(void)

undefined8 FUN_14757bf5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757bf78 FUN_14757bf78 body=55 status=ok
// SIG undefined FUN_14757bf78(void)

void FUN_14757bf78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab3818 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab3818 = FUN_140002ddd(FUN_146340edd,uVar1,L"MovieSceneSequenceInstanceData");
  }
  return;
}



// FUNCTION 14757bfe2 FUN_14757bfe2 body=54 status=ok
// SIG undefined FUN_14757bfe2(void)

undefined1 FUN_14757bfe2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475765f0(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14757c040 FUN_14757c040 body=59 status=ok
// SIG undefined FUN_14757c040(void)

undefined8 FUN_14757c040(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757c086 FUN_14757c086 body=34 status=ok
// SIG undefined FUN_14757c086(void)

void FUN_14757c086(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1457651fa(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14757c146 FUN_14757c146 body=59 status=ok
// SIG undefined FUN_14757c146(void)

undefined8 FUN_14757c146(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757c254 FUN_14757c254 body=114 status=ok
// SIG undefined FUN_14757c254(void)

undefined8 FUN_14757c254(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
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
      puVar1 = (undefined8 *)(param_3 + lVar10);
      lVar2 = param_2 + 0x10 + lVar10;
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 2);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
      uVar4 = *(undefined4 *)(puVar1 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar7 = *(undefined4 *)(puVar1 + 6);
      uVar8 = *(undefined4 *)((longlong)puVar1 + 0x34);
      uVar9 = *(undefined4 *)(puVar1 + 7);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined4 *)(lVar2 + 0x1c) = uVar6;
      *(undefined4 *)(lVar2 + 0x20) = uVar7;
      *(undefined4 *)(lVar2 + 0x24) = uVar8;
      *(undefined4 *)(lVar2 + 0x28) = uVar9;
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14757c2ee FUN_14757c2ee body=59 status=ok
// SIG undefined FUN_14757c2ee(void)

undefined8 FUN_14757c2ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757c334 FUN_14757c334 body=38 status=ok
// SIG undefined FUN_14757c334(void)

void FUN_14757c334(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14757c40e FUN_14757c40e body=59 status=ok
// SIG undefined FUN_14757c40e(void)

undefined8 FUN_14757c40e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757c536 FUN_14757c536 body=59 status=ok
// SIG undefined FUN_14757c536(void)

undefined8 FUN_14757c536(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757c5d8 FUN_14757c5d8 body=48 status=ok
// SIG undefined FUN_14757c5d8(void)

void FUN_14757c5d8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14757c608 FUN_14757c608 body=340 status=ok
// SIG undefined FUN_14757c608(void)

int FUN_14757c608(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  
  iVar9 = *(int *)(param_1 + 1);
  lVar10 = (longlong)iVar9;
  if (lVar10 == 0) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*param_1;
    piVar6 = (int *)*param_2;
    iVar8 = 0;
    bVar17 = piVar5[3] == piVar6[3] &&
             (piVar5[2] == piVar6[2] && (piVar5[1] == piVar6[1] && *piVar5 == *piVar6));
    iVar14 = 0;
    do {
      piVar6 = (int *)*param_2;
      lVar11 = (longlong)iVar14;
      iVar7 = iVar14 + 1;
      if (iVar14 + 1 < iVar9) {
        iVar7 = iVar9;
      }
      piVar13 = piVar5 + lVar11 * 4 + 7;
      iVar15 = iVar14;
      lVar12 = lVar11;
      do {
        lVar12 = lVar12 + 1;
        iVar16 = iVar7;
        if (lVar10 <= lVar12) break;
        piVar1 = piVar13 + -3;
        piVar2 = piVar13 + -2;
        piVar3 = piVar13 + -1;
        iVar4 = *piVar13;
        iVar15 = iVar15 + 1;
        piVar13 = piVar13 + 4;
        iVar16 = iVar15;
      } while (bVar17 == (iVar4 == piVar6[3] &&
                         (*piVar3 == piVar6[2] && (*piVar2 == piVar6[1] && *piVar1 == *piVar6))));
      if (bVar17 == false) {
        if (iVar8 != iVar14) {
          memmove(piVar5 + (longlong)iVar8 * 4,piVar5 + lVar11 * 4,(longlong)(iVar16 - iVar14) << 4)
          ;
        }
        iVar8 = iVar8 + (iVar16 - iVar14);
      }
      bVar17 = (bool)(bVar17 ^ 1);
      iVar14 = iVar16;
    } while (lVar12 < lVar10);
    *(int *)(param_1 + 1) = iVar8;
    iVar9 = iVar9 - iVar8;
  }
  return iVar9;
}



// FUNCTION 14757c75c FUN_14757c75c body=888 status=ok
// SIG undefined FUN_14757c75c(void)

void FUN_14757c75c(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  longlong local_3b0;
  undefined4 local_3a8 [188];
  undefined8 local_b8 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (1 < (int)param_2) {
    memset(local_3a8,0,0x2f0);
    local_3b0 = (ulonglong)param_2 * 0x80 + param_1 + -0x80;
    local_3b8 = param_1;
    fVar13 = logf((float)(int)param_2);
    local_3a8[0] = (int)(longlong)(fVar13 + fVar13);
    plVar12 = &local_3b8;
    do {
      puVar3 = (undefined8 *)*plVar12;
      puVar11 = (undefined8 *)plVar12[1];
      iVar10 = (int)plVar12[2];
      uVar9 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar3) >> 7) + 1;
      if (iVar10 != 0) {
LAB_14757c802:
        if (8 < (int)uVar9) {
          puVar1 = puVar3 + (ulonglong)(uVar9 >> 1) * 0x10;
          puVar7 = local_b8;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar7 = *puVar1;
            puVar1 = puVar1 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar1 = puVar3;
          puVar7 = puVar3 + (ulonglong)(uVar9 >> 1) * 0x10;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar7 = *puVar1;
            puVar1 = puVar1 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar1 = local_b8;
          puVar7 = puVar3;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar7 = *puVar1;
            puVar1 = puVar1 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar7 = puVar3;
          puVar1 = puVar11 + 0x10;
          do {
            puVar7 = puVar7 + 0x10;
            if (puVar7 <= puVar11) {
              while (*(uint *)(puVar7 + 7) <= *(uint *)(puVar3 + 7)) {
                if (((*(uint *)(puVar3 + 7) <= *(uint *)(puVar7 + 7)) &&
                    ((*(uint *)((longlong)puVar3 + 0x3c) < *(uint *)((longlong)puVar7 + 0x3c) ||
                     ((*(uint *)((longlong)puVar3 + 0x3c) == *(uint *)((longlong)puVar7 + 0x3c) &&
                      ((*(uint *)(puVar3 + 8) < *(uint *)(puVar7 + 8) ||
                       ((*(uint *)(puVar3 + 8) == *(uint *)(puVar7 + 8) &&
                        (*(uint *)((longlong)puVar3 + 0x44) < *(uint *)((longlong)puVar7 + 0x44)))))
                      )))))) || (puVar7 = puVar7 + 0x10, puVar11 < puVar7)) break;
              }
            }
            puVar6 = puVar1 + -0x10;
            if (puVar3 < puVar6) {
              puVar5 = puVar1;
              do {
                puVar1 = puVar5;
                puVar4 = puVar6;
                puVar6 = puVar4;
                if (*(uint *)(puVar1 + -9) < *(uint *)(puVar3 + 7)) goto LAB_14757c90e;
                if (*(uint *)(puVar1 + -9) <= *(uint *)(puVar3 + 7)) {
                  if (*(uint *)((longlong)puVar1 - 0x44) < *(uint *)((longlong)puVar3 + 0x3c))
                  goto LAB_14757c90e;
                  if (*(uint *)((longlong)puVar1 - 0x44) == *(uint *)((longlong)puVar3 + 0x3c)) {
                    if (*(uint *)(puVar1 + -8) < *(uint *)(puVar3 + 8)) goto LAB_14757c90e;
                    if ((*(uint *)(puVar1 + -8) == *(uint *)(puVar3 + 8)) &&
                       (*(uint *)((longlong)puVar1 - 0x3c) < *(uint *)((longlong)puVar3 + 0x44))) {
                      puVar6 = puVar1 + -0x10;
                      goto LAB_14757c90e;
                    }
                  }
                }
                puVar6 = puVar4 + -0x10;
                puVar5 = puVar1 + -0x10;
              } while (puVar3 < puVar1 + -0x20);
              puVar6 = puVar1 + -0x20;
              puVar1 = puVar4;
            }
LAB_14757c90e:
            lVar2 = 0x10;
            puVar5 = puVar3;
            puVar4 = puVar7;
            puVar8 = local_b8;
            if (puVar6 < puVar7) goto code_r0x00014757c953;
            for (; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar8 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar8 = puVar8 + 1;
            }
            puVar1 = puVar6;
            puVar5 = puVar7;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar5 = *puVar1;
              puVar1 = puVar1 + 1;
              puVar5 = puVar5 + 1;
            }
            puVar5 = local_b8;
            puVar4 = puVar6;
            for (lVar2 = 0x10; puVar1 = puVar6, lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar4 = puVar4 + 1;
            }
          } while( true );
        }
        while (puVar7 = puVar3, puVar1 = puVar3, puVar3 < puVar11) {
          while (puVar6 = puVar1, puVar1 = puVar6 + 0x10, puVar1 <= puVar11) {
            if ((*(uint *)(puVar7 + 7) < *(uint *)(puVar1 + 7)) ||
               ((*(uint *)(puVar7 + 7) <= *(uint *)(puVar1 + 7) &&
                ((*(uint *)((longlong)puVar7 + 0x3c) < *(uint *)((longlong)puVar6 + 0xbc) ||
                 ((*(uint *)((longlong)puVar7 + 0x3c) == *(uint *)((longlong)puVar6 + 0xbc) &&
                  ((*(uint *)(puVar7 + 8) < *(uint *)(puVar1 + 8) ||
                   ((*(uint *)(puVar7 + 8) == *(uint *)(puVar1 + 8) &&
                    (*(uint *)((longlong)puVar7 + 0x44) < *(uint *)((longlong)puVar6 + 0xc4)))))))))
                )))) {
              puVar7 = puVar1;
            }
          }
          puVar1 = puVar11 + -0x10;
          puVar6 = puVar7;
          puVar5 = local_b8;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar6 = puVar11;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar7 = local_b8;
          puVar6 = puVar11;
          for (lVar2 = 0x10; puVar11 = puVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        goto LAB_14757ca9d;
      }
LAB_14757c9f9:
      FUN_14757cad5(puVar3,uVar9);
LAB_14757ca9d:
      plVar12 = plVar12 + -3;
    } while (&local_3b8 <= plVar12);
  }
  if ((local_38 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014757c953:
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar5 = puVar6;
  puVar4 = puVar3;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar5 = local_b8;
  puVar4 = puVar6;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar10 = iVar10 + -1;
  puVar1 = puVar1 + -0x20;
  if ((longlong)puVar1 - (longlong)puVar3 < (longlong)puVar11 - (longlong)puVar7) {
    if (puVar7 < puVar11) {
      *plVar12 = (longlong)puVar7;
      plVar12[1] = (longlong)puVar11;
      *(int *)(plVar12 + 2) = iVar10;
      plVar12 = plVar12 + 3;
    }
    if (puVar6 <= puVar3 + 0x10) goto LAB_14757ca9d;
  }
  else {
    if (puVar3 + 0x10 < puVar6) {
      *plVar12 = (longlong)puVar3;
      plVar12[1] = (longlong)puVar1;
      *(int *)(plVar12 + 2) = iVar10;
      plVar12 = plVar12 + 3;
    }
    puVar1 = puVar11;
    puVar3 = puVar7;
    if (puVar11 <= puVar7) goto LAB_14757ca9d;
  }
  uVar9 = (int)((ulonglong)((longlong)puVar1 - (longlong)puVar3) >> 7) + 1;
  puVar11 = puVar1;
  if (iVar10 == 0) goto LAB_14757c9f9;
  goto LAB_14757c802;
}



// FUNCTION 14757cad5 FUN_14757cad5 body=834 status=ok
// SIG undefined FUN_14757cad5(void)

void FUN_14757cad5(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_e8 [40];
  undefined8 local_c0 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar12;
joined_r0x00014757cb23:
    do {
      iVar13 = iVar9 * 2 + 1;
      if (iVar13 < (int)param_2) {
        iVar3 = iVar9 * 2 + 2;
        if (iVar3 < (int)param_2) {
          lVar4 = (longlong)iVar3;
          lVar10 = (longlong)iVar13;
          if ((*(uint *)(param_1 + lVar4 * 0x10 + 7) < *(uint *)(param_1 + lVar10 * 0x10 + 7)) ||
             ((*(uint *)(param_1 + lVar4 * 0x10 + 7) <= *(uint *)(param_1 + lVar10 * 0x10 + 7) &&
              ((uVar1 = *(uint *)((longlong)param_1 + lVar10 * 0x80 + 0x3c),
               uVar2 = *(uint *)((longlong)param_1 + lVar4 * 0x80 + 0x3c), uVar2 < uVar1 ||
               ((uVar2 == uVar1 &&
                ((*(uint *)(param_1 + lVar4 * 0x10 + 8) < *(uint *)(param_1 + lVar10 * 0x10 + 8) ||
                 ((*(uint *)(param_1 + lVar4 * 0x10 + 8) == *(uint *)(param_1 + lVar10 * 0x10 + 8)
                  && (*(uint *)((longlong)param_1 + lVar4 * 0x80 + 0x44) <
                      *(uint *)((longlong)param_1 + lVar10 * 0x80 + 0x44)))))))))))))
          goto LAB_14757cb71;
        }
        else {
LAB_14757cb71:
          lVar4 = (longlong)iVar13;
          iVar3 = iVar13;
        }
        puVar6 = param_1 + (longlong)iVar9 * 0x10;
        puVar8 = param_1 + lVar4 * 0x10;
        if ((*(uint *)(param_1 + (longlong)iVar9 * 0x10 + 7) < *(uint *)(param_1 + lVar4 * 0x10 + 7)
            ) || ((*(uint *)(param_1 + (longlong)iVar9 * 0x10 + 7) <=
                   *(uint *)(param_1 + lVar4 * 0x10 + 7) &&
                  ((*(uint *)((longlong)puVar6 + 0x3c) < *(uint *)((longlong)puVar8 + 0x3c) ||
                   ((*(uint *)((longlong)puVar6 + 0x3c) == *(uint *)((longlong)puVar8 + 0x3c) &&
                    ((*(uint *)(puVar6 + 8) < *(uint *)(puVar8 + 8) ||
                     ((*(uint *)(puVar6 + 8) == *(uint *)(puVar8 + 8) &&
                      (*(uint *)((longlong)puVar6 + 0x44) < *(uint *)((longlong)puVar8 + 0x44)))))))
                   )))))) {
          puVar5 = puVar6;
          puVar7 = local_c0;
          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar5 = puVar8;
          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar6 = local_c0;
          for (lVar4 = 0x10; iVar9 = iVar3, lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          goto joined_r0x00014757cb23;
        }
      }
      bVar14 = iVar12 != 0;
      iVar12 = iVar12 + -1;
      iVar9 = iVar12;
    } while (bVar14);
    if (1 < (int)param_2) {
      puVar6 = param_1;
      puVar8 = local_c0;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar6 = param_1 + ((ulonglong)param_2 - 1) * 0x10;
      puVar8 = param_1;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar6 = local_c0;
      puVar8 = param_1 + ((ulonglong)param_2 - 1) * 0x10;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      if (param_2 != 2) {
        uVar11 = (ulonglong)param_2 - 1;
        do {
          iVar12 = 0;
          iVar9 = 1;
          iVar13 = 0;
          do {
            iVar3 = iVar12 + 2;
            lVar4 = (longlong)iVar3;
            if (lVar4 < (longlong)uVar11) {
              lVar10 = (longlong)iVar9;
              if ((*(uint *)(param_1 + lVar4 * 0x10 + 7) < *(uint *)(param_1 + lVar10 * 0x10 + 7))
                 || ((*(uint *)(param_1 + lVar4 * 0x10 + 7) <=
                      *(uint *)(param_1 + lVar10 * 0x10 + 7) &&
                     ((uVar1 = *(uint *)((longlong)param_1 + lVar10 * 0x80 + 0x3c),
                      uVar2 = *(uint *)((longlong)param_1 + lVar4 * 0x80 + 0x3c), uVar2 < uVar1 ||
                      ((uVar2 == uVar1 &&
                       ((*(uint *)(param_1 + lVar4 * 0x10 + 8) <
                         *(uint *)(param_1 + lVar10 * 0x10 + 8) ||
                        ((*(uint *)(param_1 + lVar4 * 0x10 + 8) ==
                          *(uint *)(param_1 + lVar10 * 0x10 + 8) &&
                         (*(uint *)((longlong)param_1 + lVar4 * 0x80 + 0x44) <
                          *(uint *)((longlong)param_1 + lVar10 * 0x80 + 0x44)))))))))))))
              goto LAB_14757cce2;
            }
            else {
LAB_14757cce2:
              lVar4 = (longlong)iVar9;
              iVar3 = iVar9;
            }
            puVar6 = param_1 + (longlong)iVar13 * 0x10;
            puVar8 = param_1 + lVar4 * 0x10;
            if ((*(uint *)(param_1 + lVar4 * 0x10 + 7) <=
                 *(uint *)(param_1 + (longlong)iVar13 * 0x10 + 7)) &&
               ((*(uint *)(param_1 + lVar4 * 0x10 + 7) <
                 *(uint *)(param_1 + (longlong)iVar13 * 0x10 + 7) ||
                ((*(uint *)((longlong)puVar8 + 0x3c) <= *(uint *)((longlong)puVar6 + 0x3c) &&
                 ((*(uint *)((longlong)puVar6 + 0x3c) != *(uint *)((longlong)puVar8 + 0x3c) ||
                  ((*(uint *)(puVar8 + 8) <= *(uint *)(puVar6 + 8) &&
                   ((*(uint *)(puVar6 + 8) != *(uint *)(puVar8 + 8) ||
                    (*(uint *)((longlong)puVar8 + 0x44) <= *(uint *)((longlong)puVar6 + 0x44))))))))
                 ))))) break;
            puVar5 = puVar6;
            puVar7 = local_c0;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            puVar5 = puVar8;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar6 = local_c0;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar12 = iVar3 * 2;
            iVar9 = iVar3 * 2 + 1;
            iVar13 = iVar3;
          } while ((longlong)iVar9 < (longlong)uVar11);
          puVar6 = param_1;
          puVar8 = local_c0;
          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar6 = param_1 + (uVar11 - 1) * 0x10;
          puVar8 = param_1;
          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar6 = local_c0;
          puVar8 = param_1 + (uVar11 - 1) * 0x10;
          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          bVar14 = 2 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar14);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14757ce18 FUN_14757ce18 body=1072 status=ok
// SIG undefined FUN_14757ce18(void)

void FUN_14757ce18(longlong param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  void *pvVar5;
  void *_Src;
  void *_Src_00;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  float fVar10;
  undefined1 auStack_468 [32];
  longlong *local_448;
  int local_43c;
  longlong local_438;
  longlong local_430;
  undefined4 local_428 [188];
  undefined1 local_138 [240];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if (1 < (int)param_2) {
    memset(local_428,0,0x2f0);
    local_430 = (ulonglong)param_2 * 0xf0 + param_1 + -0xf0;
    local_438 = param_1;
    fVar10 = logf((float)(int)param_2);
    local_428[0] = (int)(longlong)(fVar10 + fVar10);
    plVar3 = &local_438;
    do {
      _Src = (void *)*plVar3;
      _Src_00 = (void *)plVar3[1];
      iVar6 = (int)plVar3[2];
      iVar2 = (int)((ulonglong)((longlong)_Src_00 - (longlong)_Src) >> 4);
      local_448 = plVar3;
      if (iVar6 != 0) {
LAB_14757ced4:
        uVar4 = iVar2 * -0x11111111 + 1;
        plVar3 = local_448;
        if (8 < (int)uVar4) {
          pvVar8 = (void *)((ulonglong)(uVar4 >> 1) * 0xf0 + (longlong)_Src);
          local_43c = iVar6;
          memcpy(local_138,pvVar8,0xf0);
          memcpy(pvVar8,_Src,0xf0);
          memcpy(_Src,local_138,0xf0);
          pvVar8 = (void *)((longlong)_Src_00 + 0xf0);
          pvVar9 = _Src;
          do {
            pvVar9 = (void *)((longlong)pvVar9 + 0xf0);
            if (pvVar9 <= _Src_00) {
              while (*(uint *)((longlong)pvVar9 + 0xa0) <= *(uint *)((longlong)_Src + 0xa0)) {
                if (((*(uint *)((longlong)_Src + 0xa0) <= *(uint *)((longlong)pvVar9 + 0xa0)) &&
                    ((*(uint *)((longlong)_Src + 0xa4) < *(uint *)((longlong)pvVar9 + 0xa4) ||
                     ((*(uint *)((longlong)_Src + 0xa4) == *(uint *)((longlong)pvVar9 + 0xa4) &&
                      ((*(uint *)((longlong)_Src + 0xa8) < *(uint *)((longlong)pvVar9 + 0xa8) ||
                       ((*(uint *)((longlong)_Src + 0xa8) == *(uint *)((longlong)pvVar9 + 0xa8) &&
                        (*(uint *)((longlong)_Src + 0xac) < *(uint *)((longlong)pvVar9 + 0xac)))))))
                     )))) || (pvVar9 = (void *)((longlong)pvVar9 + 0xf0), _Src_00 < pvVar9)) break;
              }
            }
            pvVar7 = (void *)((longlong)pvVar8 - 0xf0);
            if (_Src < pvVar7) {
              pvVar1 = pvVar8;
              do {
                pvVar8 = pvVar1;
                pvVar5 = pvVar7;
                pvVar7 = pvVar5;
                if (*(uint *)((longlong)pvVar8 - 0x50) < *(uint *)((longlong)_Src + 0xa0))
                goto LAB_14757d01d;
                if (*(uint *)((longlong)pvVar8 - 0x50) <= *(uint *)((longlong)_Src + 0xa0)) {
                  if (*(uint *)((longlong)pvVar8 - 0x4c) < *(uint *)((longlong)_Src + 0xa4))
                  goto LAB_14757d01d;
                  if (*(uint *)((longlong)pvVar8 - 0x4c) == *(uint *)((longlong)_Src + 0xa4)) {
                    if (*(uint *)((longlong)pvVar8 - 0x48) < *(uint *)((longlong)_Src + 0xa8))
                    goto LAB_14757d01d;
                    if ((*(uint *)((longlong)pvVar8 - 0x48) == *(uint *)((longlong)_Src + 0xa8)) &&
                       (*(uint *)((longlong)pvVar8 - 0x44) < *(uint *)((longlong)_Src + 0xac))) {
                      pvVar7 = (void *)((longlong)pvVar8 - 0xf0);
                      goto LAB_14757d01d;
                    }
                  }
                }
                pvVar7 = (void *)((longlong)pvVar5 - 0xf0);
                pvVar1 = (void *)((longlong)pvVar8 - 0xf0);
              } while (_Src < (void *)((longlong)pvVar8 - 0x1e0U));
              pvVar7 = (void *)((longlong)pvVar8 - 0x1e0);
              pvVar8 = pvVar5;
            }
LAB_14757d01d:
            if (pvVar7 < pvVar9) goto LAB_14757d06b;
            memcpy(local_138,pvVar9,0xf0);
            memcpy(pvVar9,pvVar7,0xf0);
            memcpy(pvVar7,local_138,0xf0);
            pvVar8 = pvVar7;
          } while( true );
        }
        for (; local_448 = plVar3, pvVar9 = _Src, pvVar8 = _Src, _Src < _Src_00;
            _Src_00 = (void *)((longlong)_Src_00 + -0xf0)) {
          while (pvVar7 = pvVar8, pvVar8 = (void *)((longlong)pvVar7 + 0xf0), pvVar8 <= _Src_00) {
            if ((*(uint *)((longlong)pvVar9 + 0xa0) < *(uint *)((longlong)pvVar7 + 400)) ||
               ((*(uint *)((longlong)pvVar9 + 0xa0) <= *(uint *)((longlong)pvVar7 + 400) &&
                ((*(uint *)((longlong)pvVar9 + 0xa4) < *(uint *)((longlong)pvVar7 + 0x194) ||
                 ((*(uint *)((longlong)pvVar9 + 0xa4) == *(uint *)((longlong)pvVar7 + 0x194) &&
                  ((*(uint *)((longlong)pvVar9 + 0xa8) < *(uint *)((longlong)pvVar7 + 0x198) ||
                   ((*(uint *)((longlong)pvVar9 + 0xa8) == *(uint *)((longlong)pvVar7 + 0x198) &&
                    (*(uint *)((longlong)pvVar9 + 0xac) < *(uint *)((longlong)pvVar7 + 0x19c))))))))
                 ))))) {
              pvVar9 = pvVar8;
            }
          }
          memcpy(local_138,pvVar9,0xf0);
          memcpy(pvVar9,_Src_00,0xf0);
          memcpy(_Src_00,local_138,0xf0);
          plVar3 = local_448;
        }
        goto LAB_14757d209;
      }
LAB_14757d141:
      FUN_14757d249(_Src);
      plVar3 = local_448;
LAB_14757d209:
      plVar3 = plVar3 + -3;
    } while (&local_438 <= plVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14757d06b:
  memcpy(local_138,_Src,0xf0);
  memcpy(_Src,pvVar7,0xf0);
  memcpy(pvVar7,local_138,0xf0);
  iVar6 = local_43c + -1;
  pvVar8 = (void *)((longlong)pvVar8 - 0x1e0);
  if ((longlong)pvVar8 - (longlong)_Src < (longlong)_Src_00 - (longlong)pvVar9) {
    if (pvVar9 < _Src_00) {
      *local_448 = (longlong)pvVar9;
      local_448[1] = (longlong)_Src_00;
      *(int *)(local_448 + 2) = iVar6;
      local_448 = local_448 + 3;
    }
    plVar3 = local_448;
    if (pvVar7 <= (void *)((longlong)_Src + 0xf0U)) goto LAB_14757d209;
  }
  else {
    plVar3 = local_448;
    if ((void *)((longlong)_Src + 0xf0U) < pvVar7) {
      *local_448 = (longlong)_Src;
      local_448[1] = (longlong)pvVar8;
      *(int *)(local_448 + 2) = iVar6;
      plVar3 = local_448 + 3;
    }
    pvVar8 = _Src_00;
    _Src = pvVar9;
    if (_Src_00 <= pvVar9) goto LAB_14757d209;
  }
  local_448 = plVar3;
  iVar2 = (int)((ulonglong)((longlong)pvVar8 - (longlong)_Src) >> 4);
  _Src_00 = pvVar8;
  if (iVar6 == 0) goto LAB_14757d141;
  goto LAB_14757ced4;
}



// FUNCTION 14757d249 FUN_14757d249 body=1016 status=ok
// SIG undefined FUN_14757d249(void)

void FUN_14757d249(void *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_158 [32];
  undefined1 local_138 [240];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar4 = iVar8;
joined_r0x00014757d29b:
    do {
      iVar9 = iVar8 * 2 + 1;
      if (iVar9 < (int)param_2) {
        iVar10 = iVar8 * 2 + 2;
        if (iVar10 < (int)param_2) {
          lVar5 = (longlong)iVar10;
          lVar7 = lVar5 * 0xf0;
          lVar11 = (longlong)iVar9 * 0xf0;
          uVar2 = *(uint *)((longlong)param_1 + lVar11 + 0xa0);
          uVar3 = *(uint *)((longlong)param_1 + lVar7 + 0xa0);
          if ((uVar3 < uVar2) ||
             ((uVar3 <= uVar2 &&
              ((uVar2 = *(uint *)((longlong)param_1 + lVar11 + 0xa4),
               uVar3 = *(uint *)((longlong)param_1 + lVar7 + 0xa4), uVar3 < uVar2 ||
               ((uVar3 == uVar2 &&
                ((uVar2 = *(uint *)((longlong)param_1 + lVar11 + 0xa8),
                 uVar3 = *(uint *)((longlong)param_1 + lVar7 + 0xa8), uVar3 < uVar2 ||
                 ((uVar3 == uVar2 &&
                  (*(uint *)((longlong)param_1 + lVar7 + 0xac) <
                   *(uint *)((longlong)param_1 + lVar11 + 0xac))))))))))))) goto LAB_14757d2f1;
        }
        else {
LAB_14757d2f1:
          lVar5 = (longlong)iVar9;
          iVar10 = iVar9;
        }
        pvVar6 = (void *)((longlong)param_1 + (longlong)iVar8 * 0xf0);
        pvVar1 = (void *)((longlong)param_1 + lVar5 * 0xf0);
        uVar2 = *(uint *)((longlong)param_1 + lVar5 * 0xf0 + 0xa0);
        uVar3 = *(uint *)((longlong)param_1 + (longlong)iVar8 * 0xf0 + 0xa0);
        if ((uVar3 < uVar2) ||
           ((uVar3 <= uVar2 &&
            ((*(uint *)((longlong)pvVar6 + 0xa4) < *(uint *)((longlong)pvVar1 + 0xa4) ||
             ((*(uint *)((longlong)pvVar6 + 0xa4) == *(uint *)((longlong)pvVar1 + 0xa4) &&
              ((*(uint *)((longlong)pvVar6 + 0xa8) < *(uint *)((longlong)pvVar1 + 0xa8) ||
               ((*(uint *)((longlong)pvVar6 + 0xa8) == *(uint *)((longlong)pvVar1 + 0xa8) &&
                (*(uint *)((longlong)pvVar6 + 0xac) < *(uint *)((longlong)pvVar1 + 0xac)))))))))))))
        {
          memcpy(local_138,pvVar6,0xf0);
          memcpy(pvVar6,pvVar1,0xf0);
          memcpy(pvVar1,local_138,0xf0);
          iVar8 = iVar10;
          goto joined_r0x00014757d29b;
        }
      }
      bVar13 = iVar4 != 0;
      iVar8 = iVar4 + -1;
      iVar4 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      pvVar6 = (void *)(((ulonglong)param_2 - 1) * 0xf0 + (longlong)param_1);
      memcpy(local_138,param_1,0xf0);
      memcpy(param_1,pvVar6,0xf0);
      memcpy(pvVar6,local_138,0xf0);
      if (param_2 != 2) {
        uVar12 = (ulonglong)param_2 - 1;
        do {
          iVar4 = 0;
          iVar8 = 1;
          iVar9 = 0;
          do {
            iVar10 = iVar4 + 2;
            lVar5 = (longlong)iVar10;
            if (lVar5 < (longlong)uVar12) {
              lVar11 = lVar5 * 0xf0;
              lVar7 = (longlong)iVar8 * 0xf0;
              uVar2 = *(uint *)((longlong)param_1 + lVar7 + 0xa0);
              uVar3 = *(uint *)((longlong)param_1 + lVar11 + 0xa0);
              if ((uVar3 < uVar2) ||
                 ((uVar3 <= uVar2 &&
                  ((uVar2 = *(uint *)((longlong)param_1 + lVar7 + 0xa4),
                   uVar3 = *(uint *)((longlong)param_1 + lVar11 + 0xa4), uVar3 < uVar2 ||
                   ((uVar3 == uVar2 &&
                    ((uVar2 = *(uint *)((longlong)param_1 + lVar7 + 0xa8),
                     uVar3 = *(uint *)((longlong)param_1 + lVar11 + 0xa8), uVar3 < uVar2 ||
                     ((uVar3 == uVar2 &&
                      (*(uint *)((longlong)param_1 + lVar11 + 0xac) <
                       *(uint *)((longlong)param_1 + lVar7 + 0xac))))))))))))) goto LAB_14757d4bb;
            }
            else {
LAB_14757d4bb:
              lVar5 = (longlong)iVar8;
              iVar10 = iVar8;
            }
            pvVar6 = (void *)((longlong)param_1 + (longlong)iVar9 * 0xf0);
            pvVar1 = (void *)((longlong)param_1 + lVar5 * 0xf0);
            uVar2 = *(uint *)((longlong)param_1 + lVar5 * 0xf0 + 0xa0);
            uVar3 = *(uint *)((longlong)param_1 + (longlong)iVar9 * 0xf0 + 0xa0);
            if ((uVar2 <= uVar3) &&
               ((uVar2 < uVar3 ||
                ((*(uint *)((longlong)pvVar1 + 0xa4) <= *(uint *)((longlong)pvVar6 + 0xa4) &&
                 ((*(uint *)((longlong)pvVar6 + 0xa4) != *(uint *)((longlong)pvVar1 + 0xa4) ||
                  ((*(uint *)((longlong)pvVar1 + 0xa8) <= *(uint *)((longlong)pvVar6 + 0xa8) &&
                   ((*(uint *)((longlong)pvVar6 + 0xa8) != *(uint *)((longlong)pvVar1 + 0xa8) ||
                    (*(uint *)((longlong)pvVar1 + 0xac) <= *(uint *)((longlong)pvVar6 + 0xac))))))))
                 ))))) break;
            memcpy(local_138,pvVar6,0xf0);
            memcpy(pvVar6,pvVar1,0xf0);
            memcpy(pvVar1,local_138,0xf0);
            iVar4 = iVar10 * 2;
            iVar8 = iVar10 * 2 + 1;
            iVar9 = iVar10;
          } while ((longlong)iVar8 < (longlong)uVar12);
          pvVar6 = (void *)((uVar12 - 1) * 0xf0 + (longlong)param_1);
          memcpy(local_138,param_1,0xf0);
          memcpy(param_1,pvVar6,0xf0);
          memcpy(pvVar6,local_138,0xf0);
          bVar13 = 2 < uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14757d642 FUN_14757d642 body=1042 status=ok
// SIG undefined FUN_14757d642(void)

void FUN_14757d642(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint *puVar20;
  longlong *plVar21;
  int iVar22;
  uint *puVar23;
  float fVar24;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x30 + param_1 + -0x30;
    local_358 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar24 + fVar24);
    plVar21 = &local_358;
    do {
      puVar15 = (uint *)*plVar21;
      puVar23 = (uint *)plVar21[1];
      iVar22 = (int)plVar21[2];
      iVar16 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar15) >> 4);
      if (iVar22 != 0) {
LAB_14757d6e4:
        uVar17 = iVar16 * -0x55555555 + 1;
        if (8 < (int)uVar17) {
          uVar18 = (ulonglong)(uVar17 >> 1);
          uVar1 = *(undefined8 *)(puVar15 + uVar18 * 0xc);
          uVar2 = *(undefined8 *)(puVar15 + uVar18 * 0xc + 2);
          uVar3 = *(undefined8 *)(puVar15 + uVar18 * 0xc + 4);
          uVar4 = *(undefined8 *)(puVar15 + uVar18 * 0xc + 4 + 2);
          uVar5 = *(undefined8 *)(puVar15 + uVar18 * 0xc + 8);
          uVar6 = *(undefined8 *)(puVar15 + uVar18 * 0xc + 8 + 2);
          uVar7 = *(undefined8 *)puVar15;
          uVar8 = *(undefined8 *)(puVar15 + 2);
          uVar9 = *(undefined8 *)(puVar15 + 4);
          uVar10 = *(undefined8 *)(puVar15 + 6);
          uVar11 = *(undefined8 *)(puVar15 + 10);
          *(undefined8 *)(puVar15 + uVar18 * 0xc + 8) = *(undefined8 *)(puVar15 + 8);
          *(undefined8 *)(puVar15 + uVar18 * 0xc + 8 + 2) = uVar11;
          *(undefined8 *)(puVar15 + uVar18 * 0xc + 4) = uVar9;
          *(undefined8 *)(puVar15 + uVar18 * 0xc + 4 + 2) = uVar10;
          *(undefined8 *)(puVar15 + uVar18 * 0xc) = uVar7;
          *(undefined8 *)(puVar15 + uVar18 * 0xc + 2) = uVar8;
          *(undefined8 *)(puVar15 + 8) = uVar5;
          *(undefined8 *)(puVar15 + 10) = uVar6;
          *(undefined8 *)(puVar15 + 4) = uVar3;
          *(undefined8 *)(puVar15 + 6) = uVar4;
          *(undefined8 *)puVar15 = uVar1;
          *(undefined8 *)(puVar15 + 2) = uVar2;
          puVar19 = puVar23 + 0xc;
          puVar14 = puVar15;
          do {
            puVar14 = puVar14 + 0xc;
            if (puVar14 <= puVar23) {
              while (*puVar14 <= *puVar15) {
                if (((*puVar15 <= *puVar14) &&
                    ((puVar15[1] < puVar14[1] ||
                     ((puVar15[1] == puVar14[1] &&
                      ((puVar15[2] < puVar14[2] ||
                       ((puVar15[2] == puVar14[2] && (puVar15[3] < puVar14[3])))))))))) ||
                   (puVar14 = puVar14 + 0xc, puVar23 < puVar14)) break;
              }
            }
            puVar12 = puVar19 + -0xc;
            puVar13 = puVar19;
            if (puVar15 < puVar12) {
              do {
                puVar20 = puVar12;
                puVar12 = puVar20;
                puVar13 = puVar19;
                if (puVar19[-0xc] < *puVar15) break;
                if (puVar19[-0xc] <= *puVar15) {
                  if (puVar20[1] < puVar15[1]) break;
                  if (puVar20[1] == puVar15[1]) {
                    if (puVar20[2] < puVar15[2]) break;
                    if ((puVar20[2] == puVar15[2]) && (puVar20[3] < puVar15[3])) {
                      puVar13 = puVar20 + 0xc;
                      break;
                    }
                  }
                }
                puVar12 = puVar20 + -0xc;
                puVar19 = puVar20;
                puVar13 = puVar20;
              } while (puVar15 < puVar12);
            }
            puVar19 = puVar12;
            if (puVar19 < puVar14) goto LAB_14757d86f;
            uVar1 = *(undefined8 *)puVar14;
            uVar2 = *(undefined8 *)(puVar14 + 2);
            uVar3 = *(undefined8 *)(puVar14 + 4);
            uVar4 = *(undefined8 *)(puVar14 + 6);
            uVar5 = *(undefined8 *)(puVar14 + 8);
            uVar6 = *(undefined8 *)(puVar14 + 10);
            uVar7 = *(undefined8 *)puVar19;
            uVar8 = *(undefined8 *)(puVar19 + 2);
            uVar9 = *(undefined8 *)(puVar19 + 4);
            uVar10 = *(undefined8 *)(puVar19 + 6);
            uVar11 = *(undefined8 *)(puVar19 + 10);
            *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar19 + 8);
            *(undefined8 *)(puVar14 + 10) = uVar11;
            *(undefined8 *)(puVar14 + 4) = uVar9;
            *(undefined8 *)(puVar14 + 6) = uVar10;
            *(undefined8 *)puVar14 = uVar7;
            *(undefined8 *)(puVar14 + 2) = uVar8;
            *(undefined8 *)(puVar19 + 8) = uVar5;
            *(undefined8 *)(puVar19 + 10) = uVar6;
            *(undefined8 *)(puVar19 + 4) = uVar3;
            *(undefined8 *)(puVar19 + 6) = uVar4;
            *(undefined8 *)puVar19 = uVar1;
            *(undefined8 *)(puVar19 + 2) = uVar2;
          } while( true );
        }
        for (; puVar14 = puVar15, puVar19 = puVar15, puVar15 < puVar23; puVar23 = puVar23 + -0xc) {
          while (puVar19 = puVar19 + 0xc, puVar19 <= puVar23) {
            if ((*puVar14 < *puVar19) ||
               ((*puVar14 <= *puVar19 &&
                ((puVar14[1] < puVar19[1] ||
                 ((puVar14[1] == puVar19[1] &&
                  ((puVar14[2] < puVar19[2] ||
                   ((puVar14[2] == puVar19[2] && (puVar14[3] < puVar19[3])))))))))))) {
              puVar14 = puVar19;
            }
          }
          local_58 = *(undefined8 *)puVar14;
          uStack_50 = *(undefined8 *)(puVar14 + 2);
          local_48 = *(undefined8 *)(puVar14 + 4);
          uStack_40 = *(undefined8 *)(puVar14 + 6);
          local_38 = *(undefined8 *)(puVar14 + 8);
          uStack_30 = *(undefined8 *)(puVar14 + 10);
          uVar6 = local_58;
          uVar7 = uStack_50;
          uVar1 = *(undefined8 *)puVar23;
          uVar2 = *(undefined8 *)(puVar23 + 2);
          uVar3 = *(undefined8 *)(puVar23 + 4);
          uVar4 = *(undefined8 *)(puVar23 + 6);
          uVar5 = *(undefined8 *)(puVar23 + 10);
          *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar23 + 8);
          *(undefined8 *)(puVar14 + 10) = uVar5;
          *(undefined8 *)(puVar14 + 4) = uVar3;
          *(undefined8 *)(puVar14 + 6) = uVar4;
          *(undefined8 *)puVar14 = uVar1;
          *(undefined8 *)(puVar14 + 2) = uVar2;
          local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
          *(undefined8 *)(puVar23 + 8) = local_38;
          *(undefined8 *)(puVar23 + 10) = uStack_30;
          *(undefined8 *)(puVar23 + 4) = local_48;
          *(undefined8 *)(puVar23 + 6) = uStack_40;
          *puVar23 = (uint)local_58;
          puVar23[1] = local_58._4_4_;
          puVar23[2] = (uint)uStack_50;
          puVar23[3] = uStack_50._4_4_;
          local_58 = uVar6;
          uStack_50 = uVar7;
        }
        goto LAB_14757da22;
      }
LAB_14757d954:
      FUN_14757da55(puVar15);
LAB_14757da22:
      plVar21 = plVar21 + -3;
    } while (&local_358 <= plVar21);
  }
  if ((local_28 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14757d86f:
  local_58 = *(undefined8 *)puVar15;
  uStack_50 = *(undefined8 *)(puVar15 + 2);
  local_48 = *(undefined8 *)(puVar15 + 4);
  uStack_40 = *(undefined8 *)(puVar15 + 6);
  local_38 = *(undefined8 *)(puVar15 + 8);
  uStack_30 = *(undefined8 *)(puVar15 + 10);
  uVar6 = local_58;
  uVar7 = uStack_50;
  uVar1 = *(undefined8 *)puVar19;
  uVar2 = *(undefined8 *)(puVar19 + 2);
  uVar3 = *(undefined8 *)(puVar19 + 4);
  uVar4 = *(undefined8 *)(puVar19 + 6);
  uVar5 = *(undefined8 *)(puVar19 + 10);
  *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(puVar19 + 8);
  *(undefined8 *)(puVar15 + 10) = uVar5;
  *(undefined8 *)(puVar15 + 4) = uVar3;
  *(undefined8 *)(puVar15 + 6) = uVar4;
  *(undefined8 *)puVar15 = uVar1;
  *(undefined8 *)(puVar15 + 2) = uVar2;
  local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
  *(undefined8 *)(puVar19 + 8) = local_38;
  *(undefined8 *)(puVar19 + 10) = uStack_30;
  *(undefined8 *)(puVar19 + 4) = local_48;
  *(undefined8 *)(puVar19 + 6) = uStack_40;
  *puVar19 = (uint)local_58;
  puVar19[1] = local_58._4_4_;
  puVar19[2] = (uint)uStack_50;
  puVar19[3] = uStack_50._4_4_;
  iVar22 = iVar22 + -1;
  puVar13 = puVar13 + -0x18;
  local_58 = uVar6;
  uStack_50 = uVar7;
  if ((longlong)puVar13 - (longlong)puVar15 < (longlong)puVar23 - (longlong)puVar14) {
    if (puVar14 < puVar23) {
      *plVar21 = (longlong)puVar14;
      plVar21[1] = (longlong)puVar23;
      *(int *)(plVar21 + 2) = iVar22;
      plVar21 = plVar21 + 3;
    }
    if (puVar19 <= puVar15 + 0xc) goto LAB_14757da22;
  }
  else {
    if (puVar15 + 0xc < puVar19) {
      *plVar21 = (longlong)puVar15;
      plVar21[1] = (longlong)puVar13;
      *(int *)(plVar21 + 2) = iVar22;
      plVar21 = plVar21 + 3;
    }
    puVar13 = puVar23;
    puVar15 = puVar14;
    if (puVar23 <= puVar14) goto LAB_14757da22;
  }
  iVar16 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar15) >> 4);
  puVar23 = puVar13;
  if (iVar22 == 0) goto LAB_14757d954;
  goto LAB_14757d6e4;
}



// FUNCTION 14757da55 FUN_14757da55 body=998 status=ok
// SIG undefined FUN_14757da55(void)

void FUN_14757da55(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    iVar17 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar22 = iVar17;
joined_r0x00014757da90:
    do {
      iVar19 = iVar17 * 2 + 1;
      if (iVar19 < (int)param_2) {
        iVar21 = iVar17 * 2 + 2;
        if (iVar21 < (int)param_2) {
          lVar23 = (longlong)iVar21;
          lVar20 = (longlong)iVar19;
          if ((*(uint *)(param_1 + lVar23 * 6) < *(uint *)(param_1 + lVar20 * 6)) ||
             ((*(uint *)(param_1 + lVar23 * 6) <= *(uint *)(param_1 + lVar20 * 6) &&
              ((uVar4 = *(uint *)((longlong)param_1 + lVar20 * 0x30 + 4),
               uVar5 = *(uint *)((longlong)param_1 + lVar23 * 0x30 + 4), uVar5 < uVar4 ||
               ((uVar5 == uVar4 &&
                ((*(uint *)(param_1 + lVar23 * 6 + 1) < *(uint *)(param_1 + lVar20 * 6 + 1) ||
                 ((*(uint *)(param_1 + lVar23 * 6 + 1) == *(uint *)(param_1 + lVar20 * 6 + 1) &&
                  (*(uint *)((longlong)param_1 + lVar23 * 0x30 + 0xc) <
                   *(uint *)((longlong)param_1 + lVar20 * 0x30 + 0xc)))))))))))))
          goto LAB_14757dae0;
        }
        else {
LAB_14757dae0:
          lVar23 = (longlong)iVar19;
          iVar21 = iVar19;
        }
        puVar2 = param_1 + (longlong)iVar17 * 6;
        puVar3 = param_1 + lVar23 * 6;
        if ((*(uint *)(param_1 + (longlong)iVar17 * 6) < *(uint *)(param_1 + lVar23 * 6)) ||
           ((*(uint *)(param_1 + (longlong)iVar17 * 6) <= *(uint *)(param_1 + lVar23 * 6) &&
            ((*(uint *)((longlong)puVar2 + 4) < *(uint *)((longlong)puVar3 + 4) ||
             ((*(uint *)((longlong)puVar2 + 4) == *(uint *)((longlong)puVar3 + 4) &&
              ((*(uint *)(puVar2 + 1) < *(uint *)(puVar3 + 1) ||
               ((*(uint *)(puVar2 + 1) == *(uint *)(puVar3 + 1) &&
                (*(uint *)((longlong)puVar2 + 0xc) < *(uint *)((longlong)puVar3 + 0xc))))))))))))) {
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          uVar10 = puVar2[4];
          uVar11 = puVar2[5];
          uVar12 = *puVar3;
          uVar13 = puVar3[1];
          uVar14 = puVar3[2];
          uVar15 = puVar3[3];
          uVar16 = puVar3[5];
          puVar2[4] = puVar3[4];
          puVar2[5] = uVar16;
          puVar2[2] = uVar14;
          puVar2[3] = uVar15;
          *puVar2 = uVar12;
          puVar2[1] = uVar13;
          local_68._0_4_ = (undefined4)uVar6;
          local_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar7;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_58._0_4_ = (undefined4)uVar8;
          local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar9;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          local_48._0_4_ = (undefined4)uVar10;
          local_48._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar11;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
          *(undefined4 *)(puVar3 + 4) = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar3 + 0x24) = local_48._4_4_;
          *(undefined4 *)(puVar3 + 5) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_40._4_4_;
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_58._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_50._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
          iVar17 = iVar21;
          local_68 = uVar6;
          uStack_60 = uVar7;
          local_58 = uVar8;
          uStack_50 = uVar9;
          local_48 = uVar10;
          uStack_40 = uVar11;
          goto joined_r0x00014757da90;
        }
      }
      bVar24 = iVar22 != 0;
      iVar17 = iVar22 + -1;
      iVar22 = iVar17;
    } while (bVar24);
    if (1 < (int)param_2) {
      uVar18 = (ulonglong)param_2 - 1;
      uVar6 = *param_1;
      uVar7 = param_1[1];
      uVar8 = param_1[2];
      uVar9 = param_1[3];
      uVar10 = param_1[4];
      uVar11 = param_1[5];
      uVar12 = param_1[uVar18 * 6];
      uVar13 = (param_1 + uVar18 * 6)[1];
      uVar14 = param_1[uVar18 * 6 + 2];
      uVar15 = (param_1 + uVar18 * 6 + 2)[1];
      uVar16 = (param_1 + uVar18 * 6 + 4)[1];
      param_1[4] = param_1[uVar18 * 6 + 4];
      param_1[5] = uVar16;
      param_1[2] = uVar14;
      param_1[3] = uVar15;
      *param_1 = uVar12;
      param_1[1] = uVar13;
      local_68._0_4_ = (undefined4)uVar6;
      local_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar7;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_58._0_4_ = (undefined4)uVar8;
      local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar9;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_48._0_4_ = (undefined4)uVar10;
      local_48._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar11;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
      puVar2 = param_1 + uVar18 * 6 + 4;
      *(undefined4 *)puVar2 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar2 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_40._4_4_;
      puVar2 = param_1 + uVar18 * 6 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
      puVar2 = param_1 + uVar18 * 6;
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      local_68 = uVar6;
      uStack_60 = uVar7;
      local_58 = uVar8;
      uStack_50 = uVar9;
      local_48 = uVar10;
      uStack_40 = uVar11;
      if (param_2 != 2) {
        do {
          iVar22 = 0;
          iVar17 = 1;
          iVar19 = 0;
          do {
            iVar21 = iVar22 + 2;
            lVar20 = (longlong)iVar21;
            if (lVar20 < (longlong)uVar18) {
              lVar23 = (longlong)iVar17;
              if ((*(uint *)(param_1 + lVar20 * 6) < *(uint *)(param_1 + lVar23 * 6)) ||
                 ((*(uint *)(param_1 + lVar20 * 6) <= *(uint *)(param_1 + lVar23 * 6) &&
                  ((uVar4 = *(uint *)((longlong)param_1 + lVar23 * 0x30 + 4),
                   uVar5 = *(uint *)((longlong)param_1 + lVar20 * 0x30 + 4), uVar5 < uVar4 ||
                   ((uVar5 == uVar4 &&
                    ((*(uint *)(param_1 + lVar20 * 6 + 1) < *(uint *)(param_1 + lVar23 * 6 + 1) ||
                     ((*(uint *)(param_1 + lVar20 * 6 + 1) == *(uint *)(param_1 + lVar23 * 6 + 1) &&
                      (*(uint *)((longlong)param_1 + lVar20 * 0x30 + 0xc) <
                       *(uint *)((longlong)param_1 + lVar23 * 0x30 + 0xc)))))))))))))
              goto LAB_14757dca8;
            }
            else {
LAB_14757dca8:
              lVar20 = (longlong)iVar17;
              iVar21 = iVar17;
            }
            puVar2 = param_1 + (longlong)iVar19 * 6;
            puVar3 = param_1 + lVar20 * 6;
            if (*(uint *)(param_1 + lVar20 * 6) <= *(uint *)(param_1 + (longlong)iVar19 * 6)) {
              if (*(uint *)(param_1 + lVar20 * 6) < *(uint *)(param_1 + (longlong)iVar19 * 6))
              break;
              if (*(uint *)((longlong)puVar3 + 4) <= *(uint *)((longlong)puVar2 + 4)) {
                if (*(uint *)((longlong)puVar3 + 4) < *(uint *)((longlong)puVar2 + 4)) break;
                if ((*(uint *)(puVar3 + 1) <= *(uint *)(puVar2 + 1)) &&
                   ((*(uint *)(puVar3 + 1) < *(uint *)(puVar2 + 1) ||
                    (*(uint *)((longlong)puVar3 + 0xc) <= *(uint *)((longlong)puVar2 + 0xc)))))
                break;
              }
            }
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            uVar10 = puVar2[4];
            uVar11 = puVar2[5];
            uVar12 = *puVar3;
            uVar13 = puVar3[1];
            uVar14 = puVar3[2];
            uVar15 = puVar3[3];
            uVar16 = puVar3[5];
            puVar2[4] = puVar3[4];
            puVar2[5] = uVar16;
            puVar2[2] = uVar14;
            puVar2[3] = uVar15;
            *puVar2 = uVar12;
            puVar2[1] = uVar13;
            puVar3[4] = uVar10;
            puVar3[5] = uVar11;
            puVar3[2] = uVar8;
            puVar3[3] = uVar9;
            *puVar3 = uVar6;
            puVar3[1] = uVar7;
            iVar22 = iVar21 * 2;
            iVar17 = iVar21 * 2 + 1;
            iVar19 = iVar21;
          } while ((longlong)iVar17 < (longlong)uVar18);
          uVar1 = uVar18 - 1;
          uVar6 = *param_1;
          uVar7 = param_1[1];
          uVar8 = param_1[2];
          uVar9 = param_1[3];
          uVar10 = param_1[4];
          uVar11 = param_1[5];
          uVar12 = param_1[uVar1 * 6];
          uVar13 = (param_1 + uVar1 * 6)[1];
          uVar14 = param_1[uVar1 * 6 + 2];
          uVar15 = (param_1 + uVar1 * 6 + 2)[1];
          uVar16 = (param_1 + uVar1 * 6 + 4)[1];
          param_1[4] = param_1[uVar1 * 6 + 4];
          param_1[5] = uVar16;
          param_1[2] = uVar14;
          param_1[3] = uVar15;
          *param_1 = uVar12;
          param_1[1] = uVar13;
          local_68._0_4_ = (undefined4)uVar6;
          local_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar7;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_58._0_4_ = (undefined4)uVar8;
          local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar9;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          local_48._0_4_ = (undefined4)uVar10;
          local_48._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar11;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
          puVar2 = param_1 + uVar1 * 6 + 4;
          *(undefined4 *)puVar2 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar2 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_40._4_4_;
          puVar2 = param_1 + uVar1 * 6 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
          puVar2 = param_1 + uVar1 * 6;
          *(undefined4 *)puVar2 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
          bVar24 = 2 < uVar18;
          uVar18 = uVar1;
          local_68 = uVar6;
          uStack_60 = uVar7;
          local_58 = uVar8;
          uStack_50 = uVar9;
          local_48 = uVar10;
          uStack_40 = uVar11;
        } while (bVar24);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14757de3c FUN_14757de3c body=119 status=ok
// SIG undefined FUN_14757de3c(void)

int FUN_14757de3c(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14757deb4(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x30;
  memmove((void *)(*param_1 + lVar2 + 0x30),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x30);
  FUN_14756d630(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 14757deb4 FUN_14757deb4 body=147 status=ok
// SIG undefined FUN_14757deb4(void)

void FUN_14757deb4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14757df48 FUN_14757df48 body=62 status=ok
// SIG undefined FUN_14757df48(void)

void FUN_14757df48(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14757df86(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xf0,0x10);
  }
  return;
}



// FUNCTION 14757df86 FUN_14757df86 body=110 status=ok
// SIG undefined FUN_14757df86(void)

ulonglong FUN_14757df86(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xf0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14757dfbf;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xf0,0x10);
      param_2 = param_2 / 0xf0;
    }
  }
LAB_14757dfbf:
  return param_2 & 0xffffffff;
}



// FUNCTION 14757dff4 FUN_14757dff4 body=117 status=ok
// SIG undefined FUN_14757dff4(void)

int FUN_14757dff4(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140b2f284(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x80;
  memmove((void *)(*param_1 + lVar2 + 0x80),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) << 7);
  FUN_140c13d1a(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 14757e06a FUN_14757e06a body=62 status=ok
// SIG undefined FUN_14757e06a(void)

void FUN_14757e06a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14757e0a8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,8);
  }
  return;
}



// FUNCTION 14757e0a8 FUN_14757e0a8 body=93 status=ok
// SIG undefined FUN_14757e0a8(void)

ulonglong FUN_14757e0a8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 7,8);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 14757e106 FUN_14757e106 body=132 status=ok
// SIG undefined FUN_14757e106(void)

void FUN_14757e106(longlong param_1,int param_2)

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



// FUNCTION 14757e18c FUN_14757e18c body=107 status=ok
// SIG undefined FUN_14757e18c(void)

void FUN_14757e18c(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x30);
  if (*(longlong *)(*param_1 + 0x20 + (longlong)(int)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar1) * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 14757e1f8 FUN_14757e1f8 body=62 status=ok
// SIG undefined FUN_14757e1f8(void)

void FUN_14757e1f8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14757e236(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14757e236 FUN_14757e236 body=112 status=ok
// SIG undefined FUN_14757e236(void)

ulonglong FUN_14757e236(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14757e270;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_14757e270:
  return param_2 & 0xffffffff;
}



// FUNCTION 14757e2a6 FUN_14757e2a6 body=148 status=ok
// SIG undefined FUN_14757e2a6(void)

undefined8 * FUN_14757e2a6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a4914a0;
  local_30 = 0;
  FUN_14485c47a(&local_30,*param_2);
  FUN_147553d90(puVar1 + 2,param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757e33c FUN_14757e33c body=60 status=ok
// SIG undefined FUN_14757e33c(void)

void FUN_14757e33c(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a4811d0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14a481200;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14757e378 FUN_14757e378 body=29 status=ok
// SIG undefined FUN_14757e378(void)

undefined8 FUN_14757e378(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757e396 FUN_14757e396 body=111 status=ok
// SIG undefined FUN_14757e396(void)

undefined4 * FUN_14757e396(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 14757e406 FUN_14757e406 body=132 status=ok
// SIG undefined FUN_14757e406(void)

void FUN_14757e406(longlong param_1,int param_2)

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



// FUNCTION 14757e48c FUN_14757e48c body=88 status=ok
// SIG undefined FUN_14757e48c(void)

void FUN_14757e48c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar2) << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14757e4e4 FUN_14757e4e4 body=62 status=ok
// SIG undefined FUN_14757e4e4(void)

void FUN_14757e4e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14757e522(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 14757e522 FUN_14757e522 body=93 status=ok
// SIG undefined FUN_14757e522(void)

ulonglong FUN_14757e522(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 14757e580 FUN_14757e580 body=48 status=ok
// SIG undefined FUN_14757e580(void)

void FUN_14757e580(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14757e5b0 FUN_14757e5b0 body=98 status=ok
// SIG undefined FUN_14757e5b0(void)

void FUN_14757e5b0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14757e612 FUN_14757e612 body=52 status=ok
// SIG undefined FUN_14757e612(void)

void FUN_14757e612(longlong *param_1)

{
  FUN_14757e646();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14757e646 FUN_14757e646 body=89 status=ok
// SIG undefined FUN_14757e646(void)

void FUN_14757e646(longlong param_1)

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



// FUNCTION 14757e6a0 FUN_14757e6a0 body=312 status=ok
// SIG undefined FUN_14757e6a0(void)

undefined4 * FUN_14757e6a0(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_14757e7da(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14757e8c0(param_1,uVar3,local_40,&local_4c);
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
      FUN_14757e9ae(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757e7da FUN_14757e7da body=229 status=ok
// SIG undefined FUN_14757e7da(void)

int * FUN_14757e7da(longlong *param_1,int *param_2)

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



// FUNCTION 14757e8c0 FUN_14757e8c0 body=124 status=ok
// SIG undefined FUN_14757e8c0(void)

undefined8 FUN_14757e8c0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14757e93c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14757e93c FUN_14757e93c body=114 status=ok
// SIG undefined FUN_14757e93c(void)

void FUN_14757e93c(longlong *param_1,int param_2)

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



// FUNCTION 14757e9ae FUN_14757e9ae body=477 status=ok
// SIG undefined FUN_14757e9ae(void)

void FUN_14757e9ae(longlong *param_1)

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



// FUNCTION 14757eb8c FUN_14757eb8c body=90 status=ok
// SIG undefined FUN_14757eb8c(void)

void FUN_14757eb8c(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14757e93c();
  return;
}



// FUNCTION 14757ebe6 FUN_14757ebe6 body=96 status=ok
// SIG undefined FUN_14757ebe6(void)

void FUN_14757ebe6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14757ec46 FUN_14757ec46 body=113 status=ok
// SIG undefined FUN_14757ec46(void)

void FUN_14757ec46(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 14757ecb8 FUN_14757ecb8 body=94 status=ok
// SIG undefined FUN_14757ecb8(void)

undefined4 * FUN_14757ecb8(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 10);
  *(longlong *)(param_1 + 10) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14757ed16 FUN_14757ed16 body=147 status=ok
// SIG undefined FUN_14757ed16(void)

void FUN_14757ed16(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14757edaa FUN_14757edaa body=104 status=ok
// SIG undefined FUN_14757edaa(void)

void FUN_14757edaa(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x30 + *param_1);
  FUN_1408437ec(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14757ee12 FUN_14757ee12 body=62 status=ok
// SIG undefined FUN_14757ee12(void)

void FUN_14757ee12(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14757ee50(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14757ee50 FUN_14757ee50 body=112 status=ok
// SIG undefined FUN_14757ee50(void)

ulonglong FUN_14757ee50(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14757ee8a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_14757ee8a:
  return param_2 & 0xffffffff;
}



// FUNCTION 14757eec0 FUN_14757eec0 body=111 status=ok
// SIG undefined FUN_14757eec0(void)

void FUN_14757eec0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x30;
  FUN_140843826(*(undefined8 *)(lVar1 + 0x10 + lVar3),*(undefined4 *)(lVar1 + 0x18 + lVar3));
  if (*(longlong *)(lVar1 + 0x10 + lVar3) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + lVar3 + 0x30),
            (longlong)(int)(~param_2 + iVar2) * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14757ef30 FUN_14757ef30 body=209 status=ok
// SIG undefined FUN_14757ef30(void)

int FUN_14757ef30(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 14757f002 FUN_14757f002 body=132 status=ok
// SIG undefined FUN_14757f002(void)

void FUN_14757f002(longlong param_1,int param_2)

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



// FUNCTION 14757f088 FUN_14757f088 body=96 status=ok
// SIG undefined FUN_14757f088(void)

void FUN_14757f088(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14757f0e8 FUN_14757f0e8 body=614 status=ok
// SIG undefined FUN_14757f0e8(void)

void FUN_14757f0e8(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_14117a046(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14757f0e8(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14757f350 FUN_14757f350 body=308 status=ok
// SIG undefined FUN_14757f350(void)

void FUN_14757f350(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_14117a046(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757f486 FUN_14757f486 body=739 status=ok
// SIG undefined FUN_14757f486(void)

void FUN_14757f486(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_14757f5aa:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_14757f5be;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_14757f5aa;
LAB_14757f5be:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_14117a046(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14757f486(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14757f76a FUN_14757f76a body=48 status=ok
// SIG undefined FUN_14757f76a(void)

void FUN_14757f76a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14757f79a FUN_14757f79a body=132 status=ok
// SIG undefined FUN_14757f79a(void)

void FUN_14757f79a(longlong param_1,int param_2)

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



// FUNCTION 14757f820 FUN_14757f820 body=9 status=ok
// SIG undefined FUN_14757f820(void)

void FUN_14757f820(longlong param_1)

{
  FUN_14757433c(param_1 + 0x10);
  return;
}



// FUNCTION 14757f82a FUN_14757f82a body=29 status=ok
// SIG undefined FUN_14757f82a(void)

undefined8 FUN_14757f82a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14757f848 FUN_14757f848 body=222 status=ok
// SIG undefined FUN_14757f848(void)

undefined8 ** FUN_14757f848(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  longlong *plVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 **local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  local_38 = (longlong *)param_2[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FUN_14757f928(param_1,&local_30,1 << (DAT_14cab3294 & 0x1f),&local_40);
  plVar4 = local_38;
  if ((local_28 == '\x02') || (pppuVar5 = &local_30, local_28 == '\x01')) {
    pppuVar5 = (undefined8 ***)local_30;
  }
  ppuVar3 = *pppuVar5;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return ppuVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14757f928 FUN_14757f928 body=1296 status=ok
// SIG undefined FUN_14757f928(void)

longlong * FUN_14757f928(ulonglong *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  ushort *puVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  ushort uVar9;
  byte *pbVar10;
  void *pvVar11;
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ushort uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_c8 [47];
  byte local_99;
  ulonglong local_98;
  undefined8 *local_90;
  ulonglong local_88;
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar3;
  uVar3 = param_3 - 1 & uVar3;
  uVar13 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
  uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
  uVar18 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar19 = uVar18 >> 0x38;
  uVar13 = *param_1;
  bVar6 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar6 == 0) {
    uVar16 = 8;
  }
  else {
    uVar16 = 8;
    lVar8 = 0;
    do {
      uVar9 = (ushort)*(byte *)(uVar13 + 3 + lVar8);
      if (uVar16 < uVar9) {
        uVar16 = uVar9;
      }
      lVar8 = lVar8 + 6;
    } while ((ulonglong)((uint)bVar6 + (uint)bVar6) * 3 != lVar8);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  local_90 = param_4;
  FUN_14086fe48(local_78,bVar6 + 1);
  lVar8 = (ulonglong)((uint)bVar6 * 2 + 2) * 3;
  uVar4 = 0;
  if (uVar19 != 0) {
    uVar3 = (uint)(byte)(uVar18 >> 0x38);
    uVar4 = (ulonglong)(uVar3 + (uVar3 == 0));
    pbVar10 = (byte *)(uVar13 + 3);
    uVar18 = 0;
    do {
      uVar14 = -(ulonglong)*pbVar10 & (lVar8 + (ulonglong)*pbVar10) - 1;
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(short *)(puVar5 + uVar18 * 2) = (short)uVar14;
      lVar8 = pbVar10[-1] + uVar14;
      uVar18 = uVar18 + 1;
      pbVar10 = pbVar10 + 6;
    } while (uVar4 != uVar18);
  }
  uVar18 = lVar8 + 7U & 0xfffffffffffffff8;
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  *(short *)(puVar5 + uVar4 * 2) = (short)uVar18;
  uVar18 = uVar18 + 0x10;
  if ((uint)uVar4 < (uint)bVar6) {
    pbVar10 = (byte *)(uVar4 * 6 + 3 + uVar13);
    do {
      uVar18 = -(ulonglong)*pbVar10 & (uVar18 + *pbVar10) - 1;
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(short *)(puVar5 + uVar4 * 2 + 2) = (short)uVar18;
      uVar4 = uVar4 + 1;
      uVar18 = pbVar10[-1] + uVar18;
      pbVar10 = pbVar10 + 6;
    } while (bVar6 != uVar4);
  }
  uVar9 = *(ushort *)((longlong)param_1 + 10);
  uVar4 = *param_1;
  bVar12 = uVar9 < uVar18 || (ushort)param_1[1] < uVar16;
  uVar14 = uVar4;
  local_98 = uVar19;
  local_80 = param_2;
  if (uVar9 < uVar18 || (ushort)param_1[1] < uVar16) {
    if (uVar18 < (uint)uVar9 * 2) {
      uVar18 = (ulonglong)((uint)uVar9 * 2);
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar18;
    uVar14 = FUN_14001cc68(uVar18 & 0xffff,uVar16);
    *param_1 = uVar14;
  }
  uVar18 = local_98;
  bVar6 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar6;
  uVar19 = (ulonglong)bVar6;
  iVar7 = bVar6 - 1;
  local_99 = bVar12;
  if ((int)local_98 < iVar7) {
    pbVar10 = (byte *)((ulonglong)bVar6 * 6 + -10 + uVar13);
    uVar14 = (ulonglong)bVar6;
    local_88 = uVar13;
    do {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      pvVar11 = (void *)(*(ushort *)(pbVar10 + -2) + uVar4);
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar11 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar5 + uVar14 * 2 + -2) + *param_1),pvVar11,
              (ulonglong)*pbVar10);
      uVar19 = uVar14 - 1;
      pbVar10 = pbVar10 + -6;
      lVar8 = uVar14 - 2;
      uVar14 = uVar19;
    } while ((longlong)uVar18 < lVar8);
    iVar7 = (int)uVar19 + -1;
    uVar14 = *param_1;
    uVar13 = local_88;
  }
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  uVar16 = *(ushort *)(puVar5 + (longlong)iVar7 * 2);
  *(undefined8 *)(uVar14 + uVar16) = *local_90;
  lVar8 = local_90[1];
  *(longlong *)(uVar14 + 8 + (ulonglong)uVar16) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  if (1 < (int)uVar19) {
    uVar18 = (ulonglong)((int)uVar19 - 2);
    pbVar10 = (byte *)(uVar18 * 6 + 2 + uVar13);
    do {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      pvVar11 = (void *)(uVar4 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar11 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar5 + uVar18 * 2) + *param_1),pvVar11,
              (ulonglong)*pbVar10);
      pbVar10 = pbVar10 + -6;
      bVar12 = uVar18 != 0;
      uVar18 = uVar18 - 1;
    } while (bVar12);
  }
  uVar18 = *param_1;
  bVar6 = *(byte *)((longlong)param_1 + 0xc);
  uVar3 = (uint)bVar6;
  iVar7 = bVar6 - 1;
  iVar17 = (int)local_98;
  uVar19 = uVar18;
  if (iVar17 < iVar7) {
    lVar8 = (ulonglong)((uint)bVar6 + (uint)bVar6) * 3;
    uVar19 = (ulonglong)(uint)bVar6;
    do {
      *(undefined2 *)((uVar18 - 2) + lVar8) = *(undefined2 *)((uVar13 - 8) + lVar8);
      *(undefined4 *)((uVar18 - 6) + lVar8) = *(undefined4 *)((uVar13 - 0xc) + lVar8);
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(undefined2 *)((uVar18 - 6) + lVar8) = *(undefined2 *)(puVar5 + uVar19 * 2 + -2);
      uVar14 = uVar19 - 1;
      lVar8 = lVar8 + -6;
      lVar15 = uVar19 - 2;
      uVar19 = uVar14;
    } while ((longlong)local_98 < lVar15);
    uVar3 = (uint)uVar14;
    iVar7 = uVar3 - 1;
    uVar19 = *param_1;
  }
  puVar1 = (ushort *)(uVar18 + (longlong)iVar7 * 6);
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  uVar16 = *(ushort *)(puVar5 + (longlong)iVar7 * 2);
  *puVar1 = 0xffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (*param_1 <= uVar16 + uVar19) {
    *puVar1 = (short)(uVar16 + uVar19) - (short)*param_1;
  }
  puVar1[1] = 0x810;
  puVar1[2] = 0x200;
  if (1 < (int)uVar3) {
    uVar19 = (ulonglong)(uVar3 - 2);
    lVar8 = uVar19 * 6;
    do {
      *(undefined2 *)(uVar18 + 4 + lVar8) = *(undefined2 *)(uVar13 + 4 + lVar8);
      *(undefined4 *)(uVar18 + lVar8) = *(undefined4 *)(uVar13 + lVar8);
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(undefined2 *)(uVar18 + lVar8) = *(undefined2 *)(puVar5 + uVar19 * 2);
      lVar8 = lVar8 + -6;
      bVar12 = uVar19 != 0;
      uVar19 = uVar19 - 1;
    } while (bVar12);
  }
  if ((local_99 & uVar4 != 0) == 1) {
    FUN_1400020a8(uVar4);
  }
  iVar7 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar7 + 1U) {
    FUN_14086feca(param_1 + 3,iVar7);
  }
  uVar18 = (ulonglong)(uint)(iVar17 << 4);
  memmove((void *)(param_1[3] + uVar18 + 0x10),(void *)(param_1[3] + uVar18),
          (ulonglong)(uint)(iVar7 - iVar17) << 4);
  plVar2 = local_80;
  uVar13 = param_1[3];
  *(undefined1 **)(uVar13 + uVar18) = &LAB_14757fe3a;
  *(code **)(uVar13 + 8 + uVar18) = FUN_14757fe3e;
  lVar8 = 0;
  if ((ulonglong)*puVar1 != 0xffff) {
    lVar8 = *param_1 + (ulonglong)*puVar1;
  }
  *local_80 = (ulonglong)(byte)puVar1[2] + lVar8;
  *(undefined1 *)(local_80 + 1) = *(undefined1 *)((longlong)puVar1 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2;
}



// FUNCTION 14757fe3e FUN_14757fe3e body=56 status=ok
// SIG undefined FUN_14757fe3e(void)

void FUN_14757fe3e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014757fe6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14757fe76 FUN_14757fe76 body=124 status=ok
// SIG undefined FUN_14757fe76(void)

void FUN_14757fe76(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_14757fef4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14757fef4 FUN_14757fef4 body=132 status=ok
// SIG undefined FUN_14757fef4(void)

void FUN_14757fef4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 14757ff78 FUN_14757ff78 body=8 status=ok
// SIG undefined FUN_14757ff78(void)

void FUN_14757ff78(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 14757ff80 FUN_14757ff80 body=132 status=ok
// SIG undefined FUN_14757ff80(void)

void FUN_14757ff80(longlong param_1,int param_2)

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



// FUNCTION 147580006 FUN_147580006 body=122 status=ok
// SIG undefined FUN_147580006(void)

void FUN_147580006(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 147580084 FUN_147580084 body=132 status=ok
// SIG undefined FUN_147580084(void)

void FUN_147580084(longlong param_1,int param_2)

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



// FUNCTION 14758010a FUN_14758010a body=303 status=ok
// SIG undefined FUN_14758010a(void)

void FUN_14758010a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 14758023a FUN_14758023a body=303 status=ok
// SIG undefined FUN_14758023a(void)

void FUN_14758023a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 14758036a FUN_14758036a body=62 status=ok
// SIG undefined FUN_14758036a(void)

void FUN_14758036a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1475803a8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1475803a8 FUN_1475803a8 body=93 status=ok
// SIG undefined FUN_1475803a8(void)

ulonglong FUN_1475803a8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147580406 FUN_147580406 body=147 status=ok
// SIG undefined FUN_147580406(void)

void FUN_147580406(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14758049a FUN_14758049a body=101 status=ok
// SIG undefined FUN_14758049a(void)

undefined8 * FUN_14758049a(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc | 2;
  FUN_147521aa8();
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
    bVar1 = *(byte *)(param_2 + 8);
    *(byte *)(param_2 + 8) = bVar1 & 0xfe;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd | bVar1 & 2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
  }
  return param_1;
}



// FUNCTION 147580500 FUN_147580500 body=31 status=ok
// SIG undefined FUN_147580500(void)

undefined8 FUN_147580500(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758053c FUN_14758053c body=93 status=ok
// SIG undefined FUN_14758053c(void)

void FUN_14758053c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a4914e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14758059a FUN_14758059a body=126 status=ok
// SIG undefined FUN_14758059a(void)

void FUN_14758059a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a4914e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147580609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147580618 FUN_147580618 body=21 status=ok
// SIG undefined FUN_147580618(void)

undefined8 FUN_147580618(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14758062e FUN_14758062e body=178 status=ok
// SIG undefined FUN_14758062e(void)

void FUN_14758062e(longlong param_1,undefined2 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  uVar2 = 0xff;
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    uVar3 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar5 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xb8);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xc0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x14);
        if (*plVar1 == param_3) {
          if (plVar1 != (longlong *)0x0) {
            uVar2 = (undefined2)plVar1[1];
          }
          break;
        }
        iVar4 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 1475806fe FUN_1475806fe body=114 status=ok
// SIG undefined FUN_1475806fe(void)

void FUN_1475806fe(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 147580770 FUN_147580770 body=124 status=ok
// SIG undefined FUN_147580770(void)

void FUN_147580770(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1475807ee(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475807ee FUN_1475807ee body=132 status=ok
// SIG undefined FUN_1475807ee(void)

void FUN_1475807ee(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 147580872 FUN_147580872 body=95 status=ok
// SIG undefined FUN_147580872(void)

void FUN_147580872(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar3;
    FUN_1475807ee(param_1,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 1475808d2 FUN_1475808d2 body=122 status=ok
// SIG undefined FUN_1475808d2(void)

void FUN_1475808d2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 14758094c FUN_14758094c body=128 status=ok
// SIG undefined FUN_14758094c(void)

void FUN_14758094c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x88) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88 + 4) = uVar4;
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



// FUNCTION 1475809cc FUN_1475809cc body=114 status=ok
// SIG undefined FUN_1475809cc(void)

void FUN_1475809cc(longlong *param_1,int param_2)

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



// FUNCTION 147580a3e FUN_147580a3e body=48 status=ok
// SIG undefined FUN_147580a3e(void)

void FUN_147580a3e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147580a6e FUN_147580a6e body=116 status=ok
// SIG undefined FUN_147580a6e(void)

undefined8 * FUN_147580a6e(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a923ba(param_1,&local_20,1 << (DAT_14cab3284 & 0x1f));
  if (local_20 != (undefined8 *)0x0) {
    if (local_18 == '\0') goto LAB_147580ac6;
    if ((local_18 == '\x02') || (local_18 == '\x01')) {
      local_20 = (undefined8 *)*local_20;
      goto LAB_147580ac6;
    }
  }
  local_20 = (undefined8 *)0x0;
LAB_147580ac6:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147580ae4 FUN_147580ae4 body=49 status=ok
// SIG undefined FUN_147580ae4(void)

undefined8 * FUN_147580ae4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a490a90;
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147580b16 FUN_147580b16 body=115 status=ok
// SIG undefined FUN_147580b16(void)

void FUN_147580b16(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147580b8a FUN_147580b8a body=31 status=ok
// SIG undefined FUN_147580b8a(void)

undefined8 FUN_147580b8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147580bba FUN_147580bba body=29 status=ok
// SIG undefined FUN_147580bba(void)

bool FUN_147580bba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147580bd8 FUN_147580bd8 body=26 status=ok
// SIG undefined FUN_147580bd8(void)

bool FUN_147580bd8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147580bf2 FUN_147580bf2 body=101 status=ok
// SIG undefined FUN_147580bf2(void)

void FUN_147580bf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a491670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147580c58 FUN_147580c58 body=134 status=ok
// SIG undefined FUN_147580c58(void)

void FUN_147580c58(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a491670;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147580ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147580cde FUN_147580cde body=39 status=ok
// SIG undefined FUN_147580cde(void)

void FUN_147580cde(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147580d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147580d06 FUN_147580d06 body=29 status=ok
// SIG undefined FUN_147580d06(void)

undefined8 FUN_147580d06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147580d3e FUN_147580d3e body=29 status=ok
// SIG undefined FUN_147580d3e(void)

bool FUN_147580d3e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147580d5c FUN_147580d5c body=26 status=ok
// SIG undefined FUN_147580d5c(void)

bool FUN_147580d5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147580d76 FUN_147580d76 body=24 status=ok
// SIG undefined FUN_147580d76(void)

bool FUN_147580d76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147580d9a FUN_147580d9a body=101 status=ok
// SIG undefined FUN_147580d9a(void)

void FUN_147580d9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a491750;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a4916e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147580e00 FUN_147580e00 body=101 status=ok
// SIG undefined FUN_147580e00(void)

void FUN_147580e00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a491750;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a4916e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147580e66 FUN_147580e66 body=134 status=ok
// SIG undefined FUN_147580e66(void)

void FUN_147580e66(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a491750;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14a4916e0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147580edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147580eec FUN_147580eec body=39 status=ok
// SIG undefined FUN_147580eec(void)

void FUN_147580eec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147580f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined4 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147580f14 FUN_147580f14 body=149 status=ok
// SIG undefined FUN_147580f14(void)

bool FUN_147580f14(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined4 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147580fac FUN_147580fac body=29 status=ok
// SIG undefined FUN_147580fac(void)

undefined8 FUN_147580fac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147580fe4 FUN_147580fe4 body=29 status=ok
// SIG undefined FUN_147580fe4(void)

bool FUN_147580fe4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147581002 FUN_147581002 body=26 status=ok
// SIG undefined FUN_147581002(void)

bool FUN_147581002(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14758101c FUN_14758101c body=24 status=ok
// SIG undefined FUN_14758101c(void)

bool FUN_14758101c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147581040 FUN_147581040 body=101 status=ok
// SIG undefined FUN_147581040(void)

void FUN_147581040(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4918a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a491830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1475810a6 FUN_1475810a6 body=101 status=ok
// SIG undefined FUN_1475810a6(void)

void FUN_1475810a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4918a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a491830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14758110c FUN_14758110c body=134 status=ok
// SIG undefined FUN_14758110c(void)

void FUN_14758110c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a4918a0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14a491830;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147581183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147581192 FUN_147581192 body=40 status=ok
// SIG undefined FUN_147581192(void)

void FUN_147581192(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001475811b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1475811ba FUN_1475811ba body=150 status=ok
// SIG undefined FUN_1475811ba(void)

bool FUN_1475811ba(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined8 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147581254 FUN_147581254 body=183 status=ok
// SIG undefined FUN_147581254(void)

undefined8 * FUN_147581254(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = &PTR_LAB_14a4919f0;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x2c);
  *(undefined8 *)((longlong)param_1 + 0x3c) = uVar4;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  param_1[9] = lVar6;
  return param_1;
}



// FUNCTION 14758130c FUN_14758130c body=57 status=ok
// SIG undefined FUN_14758130c(void)

undefined8 * FUN_14758130c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4919f0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147581360 FUN_147581360 body=29 status=ok
// SIG undefined FUN_147581360(void)

bool FUN_147581360(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x50);
  return lVar1 == param_2;
}



// FUNCTION 14758137e FUN_14758137e body=26 status=ok
// SIG undefined FUN_14758137e(void)

bool FUN_14758137e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x50,1);
  return lVar1 == 0;
}



// FUNCTION 147581398 FUN_147581398 body=24 status=ok
// SIG undefined FUN_147581398(void)

bool FUN_147581398(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x50);
  return lVar1 != 0;
}



// FUNCTION 1475813bc FUN_1475813bc body=94 status=ok
// SIG undefined FUN_1475813bc(void)

void FUN_1475813bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  FUN_1475815f6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a491980;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1[10] = *(undefined8 *)(param_1 + 0x50);
  puVar1[0xb] = uVar2;
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 14758141a FUN_14758141a body=94 status=ok
// SIG undefined FUN_14758141a(void)

void FUN_14758141a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  FUN_1475815f6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a491980;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1[10] = *(undefined8 *)(param_1 + 0x50);
  puVar1[0xb] = uVar2;
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  return;
}



// FUNCTION 147581478 FUN_147581478 body=130 status=ok
// SIG undefined FUN_147581478(void)

void FUN_147581478(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  FUN_1475815f6(p_Var1,param_1);
  *(undefined ***)p_Var1 = &PTR_FUN_14a491980;
  DVar3 = *(DWORD *)(param_1 + 0x54);
  DVar4 = *(DWORD *)(param_1 + 0x58);
  uVar5 = *(undefined4 *)(param_1 + 0x5c);
  p_Var1[1].EntryCount = *(DWORD *)(param_1 + 0x50);
  p_Var1[1].ContentionCount = DVar3;
  p_Var1[1].Flags = DVar4;
  p_Var1[1].CreatorBackTraceIndexHigh = (short)uVar5;
  p_Var1[1].SpareWORD = (short)((uint)uVar5 >> 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  p_Var1[2].Type = (short)uVar2;
  p_Var1[2].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[2].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475814ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1475814fa FUN_1475814fa body=84 status=ok
// SIG undefined FUN_1475814fa(void)

void FUN_1475814fa(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14479d2ce(param_1 + 0x50);
  FUN_14758168a(param_1 + 8,param_1 + 0x58);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147581550 FUN_147581550 body=162 status=ok
// SIG undefined FUN_147581550(void)

bool FUN_147581550(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x50,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x50);
  if (lVar2 != 0) {
    local_28 = lVar2;
    FUN_14758168a(param_1 + 8,param_1 + 0x58);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475815f6 FUN_1475815f6 body=147 status=ok
// SIG undefined FUN_1475815f6(void)

undefined8 * FUN_1475815f6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a4919f0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x3c) = uVar4;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 14758168a FUN_14758168a body=197 status=ok
// SIG undefined FUN_14758168a(void)

void FUN_14758168a(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_2 + 1);
  pcVar2 = (code *)*param_2;
  lVar3 = *param_3;
  local_78 = *(undefined4 *)(param_1 + 1);
  local_80 = *param_1;
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_1 + 3);
  lVar4 = (longlong)local_68;
  _Src = (void *)param_1[2];
  if (lVar4 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar4 * 2);
  }
  uStack_60 = *(undefined4 *)(param_1 + 4);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_58 = *(undefined4 *)(param_1 + 5);
  local_54 = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_50 = *(undefined4 *)(param_1 + 6);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_48 = *(undefined4 *)(param_1 + 7);
  (*pcVar2)(lVar3 + iVar1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758177a FUN_14758177a body=29 status=ok
// SIG undefined FUN_14758177a(void)

undefined8 FUN_14758177a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147581798 FUN_147581798 body=69 status=ok
// SIG undefined FUN_147581798(void)

undefined8 * FUN_147581798(undefined8 *param_1,int param_2)

{
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  *param_1 = &PTR_LAB_14a481200;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147581808 FUN_147581808 body=29 status=ok
// SIG undefined FUN_147581808(void)

undefined8 FUN_147581808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147581826 FUN_147581826 body=69 status=ok
// SIG undefined FUN_147581826(void)

undefined8 * FUN_147581826(undefined8 *param_1,int param_2)

{
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  *param_1 = &PTR_LAB_14a481200;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475818aa FUN_1475818aa body=29 status=ok
// SIG undefined FUN_1475818aa(void)

undefined8 FUN_1475818aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475818c8 FUN_1475818c8 body=89 status=ok
// SIG undefined FUN_1475818c8(void)

undefined8 * FUN_1475818c8(undefined8 *param_1,int param_2)

{
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  *param_1 = &PTR_LAB_14a481200;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147581938 FUN_147581938 body=29 status=ok
// SIG undefined FUN_147581938(void)

undefined8 FUN_147581938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147581956 FUN_147581956 body=49 status=ok
// SIG undefined FUN_147581956(void)

undefined8 * FUN_147581956(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a481200;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147581988 FUN_147581988 body=22 status=ok
// SIG undefined FUN_147581988(void)

void FUN_147581988(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14a481200;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14758199e FUN_14758199e body=29 status=ok
// SIG undefined FUN_14758199e(void)

undefined8 FUN_14758199e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475819bc FUN_1475819bc body=49 status=ok
// SIG undefined FUN_1475819bc(void)

undefined8 * FUN_1475819bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a481200;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475819ee FUN_1475819ee body=49 status=ok
// SIG undefined FUN_1475819ee(void)

undefined8 * FUN_1475819ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a481200;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147581a3a FUN_147581a3a body=29 status=ok
// SIG undefined FUN_147581a3a(void)

bool FUN_147581a3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147581a58 FUN_147581a58 body=26 status=ok
// SIG undefined FUN_147581a58(void)

bool FUN_147581a58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147581a72 FUN_147581a72 body=24 status=ok
// SIG undefined FUN_147581a72(void)

bool FUN_147581a72(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147581a8a FUN_147581a8a body=101 status=ok
// SIG undefined FUN_147581a8a(void)

void FUN_147581a8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a491a60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147581af0 FUN_147581af0 body=101 status=ok
// SIG undefined FUN_147581af0(void)

void FUN_147581af0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a491a60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147581b56 FUN_147581b56 body=134 status=ok
// SIG undefined FUN_147581b56(void)

void FUN_147581b56(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a491a60;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147581bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147581bdc FUN_147581bdc body=39 status=ok
// SIG undefined FUN_147581bdc(void)

void FUN_147581bdc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147581bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147581c86 FUN_147581c86 body=215 status=ok
// SIG undefined FUN_147581c86(void)

void FUN_147581c86(longlong *param_1,uint param_2)

{
  ushort *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  if ((*(uint *)(param_1 + 2) & param_2) != 0) {
    uVar3 = *(uint *)(param_1 + 2) & param_2 - 1;
    uVar4 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    uVar5 = uVar4 >> 0x38;
    lVar2 = *param_1;
    if (((*(char *)(lVar2 + 5 + uVar5 * 6) == '\0') &&
        (puVar1 = (ushort *)(lVar2 + uVar5 * 6), (char)puVar1[1] == '\f')) &&
       (*(char *)((longlong)puVar1 + 3) == '\x04')) {
      puVar7 = (undefined8 *)0x0;
      if ((ulonglong)*puVar1 != 0xffff) {
        puVar7 = (undefined8 *)(lVar2 + (ulonglong)*puVar1);
      }
      lVar6 = (uVar4 >> 0x38) * 0x10;
      (**(code **)(param_1[3] + 8 + lVar6))(puVar7);
      *(undefined4 *)(puVar7 + 1) = 0;
      *puVar7 = 0;
      lVar2 = param_1[3];
      *(undefined1 **)(lVar2 + lVar6) = &LAB_147581d5e;
      *(undefined1 **)(lVar2 + 8 + lVar6) = &LAB_147581d62;
    }
  }
  return;
}



// FUNCTION 147581d6e FUN_147581d6e body=31 status=ok
// SIG undefined FUN_147581d6e(void)

undefined8 FUN_147581d6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147581da8 FUN_147581da8 body=29 status=ok
// SIG undefined FUN_147581da8(void)

bool FUN_147581da8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147581dc6 FUN_147581dc6 body=26 status=ok
// SIG undefined FUN_147581dc6(void)

bool FUN_147581dc6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147581de0 FUN_147581de0 body=93 status=ok
// SIG undefined FUN_147581de0(void)

void FUN_147581de0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a491ad0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147581e3e FUN_147581e3e body=126 status=ok
// SIG undefined FUN_147581e3e(void)

void FUN_147581e3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a491ad0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147581ead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147581ebc FUN_147581ebc body=48 status=ok
// SIG undefined FUN_147581ebc(void)

void FUN_147581ebc(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147581ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 147581eec FUN_147581eec body=96 status=ok
// SIG undefined FUN_147581eec(void)

void FUN_147581eec(longlong param_1,int param_2)

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



// FUNCTION 147581f4c FUN_147581f4c body=349 status=ok
// SIG undefined FUN_147581f4c(void)

undefined4 *
FUN_147581f4c(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1475820aa(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_48 + 2) = *(undefined4 *)(puVar1 + 2);
  uVar5 = puVar1[1];
  *local_48 = *puVar1;
  local_48[1] = uVar5;
  *(undefined4 *)((longlong)local_48 + 0x24) = puVar2[4];
  uVar7 = puVar2[1];
  uVar3 = puVar2[2];
  uVar4 = puVar2[3];
  *(undefined4 *)((longlong)local_48 + 0x14) = *puVar2;
  *(undefined4 *)(local_48 + 3) = uVar7;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uVar3;
  *(undefined4 *)(local_48 + 4) = uVar4;
  *(undefined4 *)(local_48 + 5) = 0xffffffff;
  local_54 = local_50[0];
  uVar7 = FUN_1447addd0(local_48,0x10);
  uVar8 = FUN_144a78877(*(undefined4 *)(local_48 + 2),uVar7);
  local_68 = param_4;
  cVar6 = FUN_14758219a(param_1,uVar8,local_48,&local_54);
  if (cVar6 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar10) {
      uVar9 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x2c) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 5) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1475822b2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475820aa FUN_1475820aa body=240 status=ok
// SIG undefined FUN_1475820aa(void)

int * FUN_1475820aa(longlong *param_1,int *param_2)

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
      FUN_145faae12(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 14758219a FUN_14758219a body=129 status=ok
// SIG undefined FUN_14758219a(void)

void FUN_14758219a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  int iVar12;
  longlong lVar13;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar12 = FUN_14041fdda();
    if (iVar12 != -1) {
      lVar2 = *param_1;
      lVar13 = (longlong)iVar12 * 0x30;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      uVar9 = param_3[6];
      uVar10 = param_3[7];
      *(undefined8 *)(lVar2 + 0x20 + lVar13) = *(undefined8 *)(param_3 + 8);
      puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar13);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(lVar2 + lVar13);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_14758221c(param_1,*param_4,1);
      *param_4 = iVar12;
      uVar11 = 1;
      goto LAB_1475821c9;
    }
  }
  uVar11 = 0;
LAB_1475821c9:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar11;
  }
  return;
}



// FUNCTION 14758221c FUN_14758221c body=150 status=ok
// SIG undefined FUN_14758221c(void)

void FUN_14758221c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475822b2 FUN_1475822b2 body=462 status=ok
// SIG undefined FUN_1475822b2(void)

void FUN_1475822b2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar5 * 0x30;
        uVar6 = FUN_1447addd0(lVar3 + lVar11,0x10);
        iVar7 = FUN_144a78877(*(undefined4 *)(lVar3 + 0x10 + lVar11),uVar6);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x2c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147582482 FUN_147582482 body=188 status=ok
// SIG undefined FUN_147582482(void)

undefined8 FUN_147582482(longlong *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = FUN_1447addd0(param_2,0x10);
    iVar3 = FUN_144a78877(param_2[4],uVar2);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar3 * 0x30);
        if ((((*(int *)(*param_1 + 0x10 + (longlong)iVar3 * 0x30) == param_2[4]) &&
             (*piVar1 == *param_2)) && (piVar1[1] == param_2[1])) &&
           ((piVar1[2] == param_2[2] && (piVar1[3] == param_2[3])))) {
          FUN_14758253e(param_1);
          return 1;
        }
        iVar3 = piVar1[10];
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14758253e FUN_14758253e body=101 status=ok
// SIG undefined FUN_14758253e(void)

void FUN_14758253e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_14758221c(param_1,param_2,1);
  return;
}



// FUNCTION 1475825a8 FUN_1475825a8 body=557 status=ok
// SIG undefined FUN_1475825a8(void)

void FUN_1475825a8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 *local_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8 [2];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong *local_80;
  undefined8 local_78;
  uint uStack_74;
  undefined1 *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = 0;
  local_b0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  plVar5 = local_d8;
  pplVar6 = &local_80;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pplVar6 = (longlong *)*plVar5;
    plVar5 = plVar5 + 1;
    pplVar6 = pplVar6 + 1;
  }
  plVar5 = &DAT_14cab3ba0;
  plVar7 = local_d8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar7 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar7 = plVar7 + 1;
  }
  pplVar6 = &local_80;
  plVar5 = &DAT_14cab3ba0;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar5 = (longlong)*pplVar6;
    pplVar6 = pplVar6 + 1;
    plVar5 = plVar5 + 1;
  }
  local_f8 = 0x100000000;
  local_e8 = 0xffffffff;
  iStack_e4 = 0;
  local_e0 = 0;
  iVar8 = 0;
  local_f0 = local_c8;
  if (local_b0 != 0) {
    FUN_1449c0562(&local_f8);
    iVar8 = local_b0;
  }
  local_68 = local_e8;
  iStack_64 = iStack_e4;
  local_60 = local_e0;
  local_5c = local_dc;
  local_78 = local_f8;
  local_70 = local_f0;
  local_80 = local_d8;
  if ((iStack_e4 != iVar8) || (local_f0 != local_c8)) {
    do {
      plVar5 = *(longlong **)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      if (plVar5 != (longlong *)0x0) {
        plVar7 = *(longlong **)(*local_80 + (longlong)iStack_64 * 0x18);
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        iVar3 = (int)plVar5[1];
        do {
          if (iVar3 == 0) goto LAB_14758272c;
          LOCK();
          iVar2 = (int)plVar5[1];
          bVar9 = iVar3 == iVar2;
          if (bVar9) {
            *(int *)(plVar5 + 1) = iVar3 + 1;
            iVar2 = iVar3;
          }
          iVar3 = iVar2;
          UNLOCK();
        } while (!bVar9);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
LAB_14758272c:
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&stack0xffffffffffffff88);
    } while (local_80 != local_d8 || (local_70 != local_c8 || iStack_64 != iVar8));
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_146155fde(local_d8);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475827d6 FUN_1475827d6 body=295 status=ok
// SIG undefined FUN_1475827d6(void)

void FUN_1475827d6(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  GUID local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58.Data1 = 0;
  local_58.Data2 = 0;
  local_58.Data3 = 0;
  local_58.Data4[0] = '\0';
  local_58.Data4[1] = '\0';
  local_58.Data4[2] = '\0';
  local_58.Data4[3] = '\0';
  local_58.Data4[4] = '\0';
  local_58.Data4[5] = '\0';
  local_58.Data4[6] = '\0';
  local_58.Data4[7] = '\0';
  CoCreateGuid(&local_58);
  *(ulong *)(param_1 + 0x2c) = local_58.Data1;
  *(undefined4 *)(param_1 + 0x30) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x34) = local_58.Data4._0_4_;
  *(undefined4 *)(param_1 + 0x38) = local_58.Data4._4_4_;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 != 0) {
    do {
      lVar4 = FUN_140894a5a();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        local_58.Data1 = 0;
        local_58.Data2 = 0;
        local_58.Data3 = 0;
        local_58.Data4[0] = '\0';
        local_58.Data4[1] = '\0';
        local_58.Data4[2] = '\0';
        local_58.Data4[3] = '\0';
        local_58.Data4[4] = '\0';
        local_58.Data4[5] = '\0';
        local_58.Data4[6] = '\0';
        local_58.Data4[7] = '\0';
        CoCreateGuid(&local_58);
        *(ulong *)(lVar6 + 0x2c) = local_58.Data1;
        *(undefined4 *)(lVar6 + 0x30) = local_58._4_4_;
        *(undefined4 *)(lVar6 + 0x34) = local_58.Data4._0_4_;
        *(undefined4 *)(lVar6 + 0x38) = local_58.Data4._4_4_;
      }
      lVar6 = *(longlong *)(lVar6 + 0x20);
    } while (lVar6 != 0);
  }
  plVar7 = DAT_14cab3bf8;
  if (((DAT_14cab3bf0 != (longlong *)0x0) && (DAT_14cab3bf8 != (longlong *)0x0)) &&
     (0 < (int)DAT_14cab3bf8[1])) {
    iVar3 = (int)DAT_14cab3bf8[1];
    do {
      if (iVar3 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)plVar7[1];
      bVar8 = iVar3 == iVar2;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar8);
    plVar5 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      plVar5 = DAT_14cab3bf0;
    }
    (**(code **)(*plVar5 + 0x18))();
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  FUN_1475828fe(param_1);
  FUN_1475825a8();
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475828fe FUN_1475828fe body=70 status=ok
// SIG undefined FUN_1475828fe(void)

void FUN_1475828fe(longlong param_1)

{
  longlong lVar1;
  
  do {
    FUN_1447f69b6(param_1 + 0x40);
    do {
      param_1 = *(longlong *)(param_1 + 0x20);
      if (param_1 == 0) {
        return;
      }
      lVar1 = FUN_140894a5a();
    } while ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30));
  } while( true );
}



// FUNCTION 147582950 FUN_147582950 body=59 status=ok
// SIG undefined FUN_147582950(void)

void FUN_147582950(void)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 1;
  FUN_14758fc52();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758298c FUN_14758298c body=150 status=ok
// SIG undefined FUN_14758298c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14758298c(void)

{
  _DAT_14cab3cc0 = &PTR_FUN_14a4993b0;
  DAT_14cab3ce8 = 0;
  DAT_14cab3cf0 = 0;
  DAT_14cab3cc8 = 0;
  _DAT_14cab3cd0 = 0;
  _DAT_14cab3cf4 = 0xffffffff00000080;
  DAT_14cab3cfc = 0;
  DAT_14cab3d08 = 0;
  DAT_14cab3d10 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cab3d18);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cab3d18,4000);
  DAT_14cab3d40 = 0;
  _DAT_14cab3d48 = 0;
  _DAT_14cab3d50 = 0;
  DAT_14cab3d58 = 0;
  DAT_14cab3d60 = 0xffffffff;
  return;
}



// FUNCTION 147582a22 FUN_147582a22 body=423 status=ok
// SIG undefined FUN_147582a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_147582a22(int *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cab3d18);
  if (DAT_14cab3d40 != param_2) {
    DAT_14cab3d40 = param_2;
    if (DAT_14cab3cd0 != DAT_14cab3cfc) {
      uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      puVar7 = &DAT_14cab3d00;
      if (DAT_14cab3d08 != (undefined *)0x0) {
        puVar7 = DAT_14cab3d08;
      }
      iVar2 = *(int *)(puVar7 + (ulonglong)(DAT_14cab3d10 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      while (iVar2 != -1) {
        lVar1 = DAT_14cab3cc8 + (longlong)iVar2 * 0x30;
        if (*(ulonglong *)(DAT_14cab3cc8 + (longlong)iVar2 * 0x30) == param_2) {
          if ((undefined8 *)(lVar1 + 8) != (undefined8 *)0x0 && lVar1 != 0) {
            _DAT_14cab3d48 = *(undefined8 *)(lVar1 + 8);
            DAT_14cab3d50 = *(int *)(lVar1 + 0x10);
            DAT_14cab3d54 = *(int *)(lVar1 + 0x14);
            DAT_14cab3d58._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x14) >> 0x20);
            DAT_14cab3d58._4_4_ = (undefined4)*(undefined8 *)(lVar1 + 0x1c);
            DAT_14cab3d60 = (int)((ulonglong)*(undefined8 *)(lVar1 + 0x1c) >> 0x20);
            goto LAB_147582a8f;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x28);
      }
    }
    _DAT_14cab3d48 = 0;
    DAT_14cab3d50 = 0;
    DAT_14cab3d54 = 0;
    DAT_14cab3d58._0_4_ = 0;
    DAT_14cab3d58._4_4_ = 0;
    DAT_14cab3d60 = -1;
  }
LAB_147582a8f:
  iVar5 = DAT_14cab3d54;
  iVar4 = DAT_14cab3d50;
  iVar2 = DAT_14cab3d48;
  iVar3 = DAT_14cab3d4c;
  local_40 = CONCAT44(DAT_14cab3d58._4_4_,(undefined4)DAT_14cab3d58);
  local_38 = DAT_14cab3d60;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cab3d18);
  *(undefined1 *)(param_1 + 7) = 0;
  if (((iVar3 != 0 || iVar2 != 0) || iVar4 != 0) || iVar5 != 0) {
    *param_1 = iVar2;
    param_1[1] = iVar3;
    param_1[2] = iVar4;
    param_1[3] = iVar5;
    *(undefined8 *)(param_1 + 4) = local_40;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147582bca FUN_147582bca body=24 status=ok
// SIG undefined FUN_147582bca(void)

void FUN_147582bca(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  return;
}



// FUNCTION 147582be2 FUN_147582be2 body=195 status=ok
// SIG undefined FUN_147582be2(void)

undefined8 FUN_147582be2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_147582bf3;
  plVar3 = (longlong *)FUN_147590321();
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x18);
    if (plVar4 == (longlong *)0x0) goto LAB_147582bf3;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_147582c2a:
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
    if (plVar3 == (longlong *)0x0) goto LAB_147582bf3;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x10) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x18);
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x18) = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_147582c2a;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_147582bf3:
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 147582ca6 FUN_147582ca6 body=38 status=ok
// SIG undefined FUN_147582ca6(void)

void FUN_147582ca6(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x28))();
  param_1[8] = lVar1;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[6] = lVar1;
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}



// FUNCTION 147582cea FUN_147582cea body=82 status=ok
// SIG undefined FUN_147582cea(void)

void FUN_147582cea(void)

{
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryPerformanceCounter(&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((double)local_18.QuadPart * DAT_14c83f420 + 16777216.0);
}



// FUNCTION 147582d3e FUN_147582d3e body=147 status=ok
// SIG undefined FUN_147582d3e(void)

void FUN_147582d3e(void)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != 0) {
    FUN_1415a83ee(DAT_14cb0d2b0,local_30);
    plVar1 = (longlong *)FUN_1479735a4(local_30);
    FUN_14051bf10(local_30);
    if (plVar1 != (longlong *)0x0) {
      dVar2 = (double)(**(code **)(*plVar1 + 0x238))(plVar1);
      goto LAB_147582db4;
    }
  }
  QueryPerformanceCounter(local_30);
  dVar2 = (double)local_30[0].QuadPart * DAT_14c83f420 + 16777216.0;
LAB_147582db4:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar2);
}



// FUNCTION 147582e06 FUN_147582e06 body=170 status=ok
// SIG undefined FUN_147582e06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_147582e06(longlong param_1)

{
  double dVar1;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c846568 == '\x01') {
    dVar1 = ((double)((DAT_14c846560 >> 0x20) * (longlong)(int)_DAT_14c846558) +
            (double)(int)((ulonglong)DAT_14c846560 >> 0x20) *
            (double)(float)((ulonglong)_DAT_14c846558 >> 0x20)) / (double)(int)DAT_14c846560 +
            *(double *)(param_1 + 0x70);
  }
  else {
    QueryPerformanceCounter(&local_18);
    dVar1 = (double)local_18.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147582eb2 FUN_147582eb2 body=329 status=ok
// SIG undefined FUN_147582eb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147582eb2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  cVar2 = DAT_14c846568;
  uVar1 = _DAT_14c846558;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x70) = 0;
  iVar3 = (**(code **)(*DAT_14cab3d70 + 0xb0))();
  if (iVar3 != 0) {
    if (cVar2 != '\0') {
      if ((((*(char *)(param_1 + 0x58) != '\x01') || (*(int *)(param_1 + 0x50) != (int)uVar1)) ||
          (fVar4 = (float)((ulonglong)uVar1 >> 0x20), *(float *)(param_1 + 0x54) != fVar4)) ||
         ((NAN(*(float *)(param_1 + 0x54)) || NAN(fVar4) || (*(char *)(param_1 + 0x68) != '\x01'))))
      {
        QueryPerformanceCounter(&local_58);
        *(double *)(param_1 + 0x60) = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
        *(undefined1 *)(param_1 + 0x68) = 1;
      }
      else {
        QueryPerformanceCounter(&local_58);
        *(double *)(param_1 + 0x70) =
             ((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x60);
      }
      *(undefined8 *)(param_1 + 0x50) = uVar1;
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
    FUN_1432e0c0a(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_78);
  }
  FUN_1432e0c0a(param_1,param_2,param_3,param_4);
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147582ffc FUN_147582ffc body=179 status=ok
// SIG undefined FUN_147582ffc(void)

undefined8 * FUN_147582ffc(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((DAT_14cb0d2b0 != 0) && (*(longlong **)(DAT_14cb0d2b0 + 0xca8) != (longlong *)0x0)) {
    iVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xca8) + 0x2b8))();
    if (iVar1 == 2) {
      FUN_1468001f0(local_48);
      FUN_1468002e8(&local_50);
      FUN_147516d62(local_48,&local_54,&local_50);
      FUN_144a808d5(param_2,local_54,local_50,*(undefined8 *)(param_3 + 8));
      goto LAB_147583049;
    }
  }
  *param_2 = 0;
LAB_147583049:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475830b0 FUN_1475830b0 body=104 status=ok
// SIG undefined FUN_1475830b0(void)

void FUN_1475830b0(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  *(double *)(param_1 + 0x28) = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758311a FUN_14758311a body=509 status=ok
// SIG undefined FUN_14758311a(void)

undefined8 * FUN_14758311a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined1 auStack_a8 [40];
  int local_80;
  float local_7c;
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  QueryPerformanceCounter(&local_78);
  dVar6 = (double)local_78.QuadPart * DAT_14c83f420;
  dVar5 = *(double *)(param_1 + 0x28);
  fVar3 = (float)(**(code **)(*DAT_14cab3d88 + 0xb8))();
  if ((double)fVar3 < (dVar6 + 16777216.0) - dVar5) {
    uVar1 = *(undefined8 *)(param_1 + 0x1c);
    dVar5 = (double)(int)((ulonglong)uVar1 >> 0x20);
    dVar5 = ((dVar5 / (double)(int)uVar1) * (double)(int)uVar1) / dVar5;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar5;
    auVar7 = roundpd(auVar7,auVar7,1);
    dVar6 = auVar7._0_8_;
    dVar5 = dVar5 - dVar6;
    if (2147483647.0 <= dVar6) {
      dVar6 = 2147483647.0;
    }
    if (dVar6 <= -2147483648.0) {
      dVar6 = -2147483648.0;
    }
    iVar2 = (int)dVar5;
    fVar4 = (float)dVar5 - (float)iVar2;
    fVar3 = fVar4;
    if (0.99999994 <= fVar4) {
      fVar3 = 0.99999994;
    }
    fVar3 = (float)(~-(uint)(0.0 < fVar4) & (uint)fVar4 | (uint)fVar3 & -(uint)(0.0 < fVar4)) + 0.5
            + -0.5;
    if (0.99999994 <= fVar3) {
      fVar3 = 0.99999994;
    }
    uVar8 = (ulonglong)(uint)fVar3;
    if (fVar3 <= 0.0) {
      uVar8 = 0;
    }
    FUN_144a808d5(&local_80,(ulonglong)(uint)((int)dVar6 + iVar2) | uVar8 << 0x20,uVar1,
                  *(undefined8 *)(param_3 + 8));
    local_7c = *(float *)(param_1 + 0x34) + local_7c;
    auVar7 = roundss(ZEXT416(0),ZEXT416((uint)local_7c),9);
    fVar3 = (local_7c - auVar7._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar3) {
      fVar3 = 0.99999994;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(int *)(param_1 + 0x30) =
         ((int)ROUND(local_7c + local_7c + -0.5) >> 1) + local_80 + *(int *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = fVar3;
    QueryPerformanceCounter(&local_78);
    *(double *)(param_1 + 0x28) = (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


