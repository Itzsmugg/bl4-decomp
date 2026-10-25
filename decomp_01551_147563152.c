// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147563152 FUN_147563152 body=59 status=ok
// SIG undefined FUN_147563152(void)

undefined8 FUN_147563152(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756319e FUN_14756319e body=38 status=ok
// SIG undefined FUN_14756319e(void)

void FUN_14756319e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_140a31f9c(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 147563250 FUN_147563250 body=60 status=ok
// SIG undefined FUN_147563250(void)

undefined1 FUN_147563250(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447bdca4(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 1475632b4 FUN_1475632b4 body=59 status=ok
// SIG undefined FUN_1475632b4(void)

undefined8 FUN_1475632b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475632fa FUN_1475632fa body=37 status=ok
// SIG undefined FUN_1475632fa(void)

void FUN_1475632fa(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147563390 FUN_147563390 body=47 status=ok
// SIG undefined FUN_147563390(void)

void FUN_147563390(undefined8 param_1,longlong *param_2)

{
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475633d6 FUN_1475633d6 body=73 status=ok
// SIG undefined FUN_1475633d6(void)

undefined1 FUN_1475633d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447bdca4(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    FUN_1447bdc4c(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 147563448 FUN_147563448 body=59 status=ok
// SIG undefined FUN_147563448(void)

undefined8 FUN_147563448(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475634e6 FUN_1475634e6 body=51 status=ok
// SIG undefined FUN_1475634e6(void)

void FUN_1475634e6(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 14756351a FUN_14756351a body=38 status=ok
// SIG undefined FUN_14756351a(void)

void FUN_14756351a(undefined8 param_1,longlong param_2)

{
  FUN_1432e0f1a(param_2,0x3ff0000000000000);
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 147563540 FUN_147563540 body=38 status=ok
// SIG undefined FUN_147563540(void)

void FUN_147563540(undefined8 param_1,longlong param_2)

{
  FUN_1432e0f1a(param_2,0x3ff0000000000000);
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 14756357e FUN_14756357e body=116 status=ok
// SIG undefined FUN_14756357e(void)

undefined8 FUN_14756357e(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  uVar1 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = uVar1;
  if (param_4 != 0) {
    do {
      FUN_14141a0f6(param_3,&local_30);
      *param_2 = local_30;
      uVar1 = *(ulonglong *)(param_3 + 8);
      param_2[1] = uVar1;
      param_3 = param_3 + 0x10;
      param_2 = param_2 + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756361c FUN_14756361c body=59 status=ok
// SIG undefined FUN_14756361c(void)

undefined8 FUN_14756361c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475636be FUN_1475636be body=37 status=ok
// SIG undefined FUN_1475636be(void)

void FUN_1475636be(undefined8 param_1,longlong param_2)

{
  FUN_1432e0f1a(param_2,0x3ff0000000000000);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 1475636e4 FUN_1475636e4 body=37 status=ok
// SIG undefined FUN_1475636e4(void)

void FUN_1475636e4(undefined8 param_1,longlong param_2)

{
  FUN_1432e0f1a(param_2,0x3ff0000000000000);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 147563722 FUN_147563722 body=116 status=ok
// SIG undefined FUN_147563722(void)

undefined8 FUN_147563722(undefined8 param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 != 0) {
    do {
      FUN_14141a0f6(param_3,&local_30);
      *param_2 = local_30;
      uVar1 = *(undefined4 *)(param_3 + 0xc);
      uVar2 = *(undefined4 *)(param_3 + 0x10);
      uVar3 = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
      *(undefined4 *)(param_2 + 2) = uVar2;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475637c0 FUN_1475637c0 body=59 status=ok
// SIG undefined FUN_1475637c0(void)

undefined8 FUN_1475637c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756388e FUN_14756388e body=46 status=ok
// SIG undefined FUN_14756388e(void)

void FUN_14756388e(undefined8 param_1,longlong param_2)

{
  FUN_1447bda9c(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475638d2 FUN_1475638d2 body=78 status=ok
// SIG undefined FUN_1475638d2(void)

undefined8 FUN_1475638d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1447bdcfc();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147563948 FUN_147563948 body=59 status=ok
// SIG undefined FUN_147563948(void)

undefined8 FUN_147563948(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475639e6 FUN_1475639e6 body=50 status=ok
// SIG undefined FUN_1475639e6(void)

void FUN_1475639e6(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1447bda9c(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147563a6a FUN_147563a6a body=76 status=ok
// SIG undefined FUN_147563a6a(void)

undefined8 FUN_147563a6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_147563b98(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147563ade FUN_147563ade body=59 status=ok
// SIG undefined FUN_147563ade(void)

undefined8 FUN_147563ade(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147563b24 FUN_147563b24 body=38 status=ok
// SIG undefined FUN_147563b24(void)

void FUN_147563b24(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147563b98 FUN_147563b98 body=79 status=ok
// SIG undefined FUN_147563b98(void)

undefined8 * FUN_147563b98(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147563be8(param_1,iVar1);
      FUN_147563c4a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147563be8 FUN_147563be8 body=98 status=ok
// SIG undefined FUN_147563be8(void)

void FUN_147563be8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147563c4a FUN_147563c4a body=60 status=ok
// SIG undefined FUN_147563c4a(void)

void FUN_147563c4a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14141a0f6(param_2,param_1);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 147563c88 FUN_147563c88 body=132 status=ok
// SIG undefined FUN_147563c88(void)

void FUN_147563c88(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147563d0e FUN_147563d0e body=79 status=ok
// SIG undefined FUN_147563d0e(void)

undefined8 * FUN_147563d0e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a480810;
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xe) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147563d5e FUN_147563d5e body=78 status=ok
// SIG undefined FUN_147563d5e(void)

undefined8 FUN_147563d5e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14755b336();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147563dae FUN_147563dae body=82 status=ok
// SIG undefined FUN_147563dae(void)

void FUN_147563dae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147563e5a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147563e02 FUN_147563e02 body=86 status=ok
// SIG undefined FUN_147563e02(void)

void FUN_147563e02(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147563ea8(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147563e5a FUN_147563e5a body=77 status=ok
// SIG undefined FUN_147563e5a(void)

void FUN_147563e5a(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x18]);
  FUN_140dba9e6(*param_1,param_2[0x24]);
  return;
}



// FUNCTION 147563ea8 FUN_147563ea8 body=84 status=ok
// SIG undefined FUN_147563ea8(void)

void FUN_147563ea8(undefined8 *param_1,longlong param_2)

{
  FUN_147563efc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_145d6dcd4(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_147563f92(param_2 + 0x30,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147563efc FUN_147563efc body=149 status=ok
// SIG undefined FUN_147563efc(void)

void FUN_147563efc(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_147563f2f;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_147563f2f:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined4 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined4 *)(param_1 + 1);
  if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147563f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147563f92 FUN_147563f92 body=153 status=ok
// SIG undefined FUN_147563f92(void)

void FUN_147563f92(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_147563fc5;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_147563fc5:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 4);
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014756401a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147564098 FUN_147564098 body=59 status=ok
// SIG undefined FUN_147564098(void)

undefined8 FUN_147564098(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475641c4 FUN_1475641c4 body=59 status=ok
// SIG undefined FUN_1475641c4(void)

undefined8 FUN_1475641c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147564264 FUN_147564264 body=29 status=ok
// SIG undefined FUN_147564264(void)

undefined8 FUN_147564264(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475642bc FUN_1475642bc body=54 status=ok
// SIG undefined FUN_1475642bc(void)

undefined1 FUN_1475642bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753d678(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 14756431a FUN_14756431a body=59 status=ok
// SIG undefined FUN_14756431a(void)

undefined8 FUN_14756431a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147564360 FUN_147564360 body=32 status=ok
// SIG undefined FUN_147564360(void)

void FUN_147564360(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_140a31f5e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1475643d0 FUN_1475643d0 body=52 status=ok
// SIG undefined FUN_1475643d0(void)

void FUN_1475643d0(longlong *param_1)

{
  FUN_147564404();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147564404 FUN_147564404 body=313 status=ok
// SIG undefined FUN_147564404(void)

void FUN_147564404(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x20 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756453e FUN_14756453e body=52 status=ok
// SIG undefined FUN_14756453e(void)

void FUN_14756453e(longlong *param_1)

{
  FUN_147564572();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147564572 FUN_147564572 body=313 status=ok
// SIG undefined FUN_147564572(void)

void FUN_147564572(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475646ac FUN_1475646ac body=116 status=ok
// SIG undefined FUN_1475646ac(void)

void FUN_1475646ac(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_14754fd60(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147564722 FUN_147564722 body=322 status=ok
// SIG undefined FUN_147564722(void)

void FUN_147564722(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147564866 FUN_147564866 body=147 status=ok
// SIG undefined FUN_147564866(void)

void FUN_147564866(longlong param_1,int param_2)

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



// FUNCTION 1475648fa FUN_1475648fa body=886 status=ok
// SIG undefined FUN_1475648fa(void)

void FUN_1475648fa(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0xc + -0xc;
    local_358 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar19 + fVar19);
    plVar11 = &local_358;
    do {
      puVar4 = (undefined8 *)*plVar11;
      puVar12 = (undefined8 *)plVar11[1];
      iVar14 = (int)plVar11[2];
      iVar5 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar4) >> 2);
      puVar15 = puVar12;
      puVar16 = puVar4;
      if (iVar14 != 0) {
LAB_1475649c9:
        uVar7 = iVar5 * -0x55555555 + 1;
        if (8 < (int)uVar7) {
          uVar8 = (ulonglong)(uVar7 >> 1);
          uVar1 = *(undefined4 *)((longlong)puVar4 + uVar8 * 0xc + 8);
          uVar2 = *(undefined8 *)((longlong)puVar4 + uVar8 * 0xc);
          *(undefined4 *)((longlong)puVar4 + uVar8 * 0xc + 8) = *(undefined4 *)(puVar4 + 1);
          *(undefined8 *)((longlong)puVar4 + uVar8 * 0xc) = *puVar4;
          *(undefined4 *)(puVar4 + 1) = uVar1;
          *puVar4 = uVar2;
          puVar9 = (undefined8 *)((longlong)puVar12 + 0xc);
          puVar6 = puVar4;
          do {
            puVar13 = (undefined8 *)((longlong)puVar6 + 0xc);
            puVar3 = (undefined8 *)((longlong)puVar6 + 0xc);
            do {
              puVar6 = puVar3;
              puVar10 = puVar13;
              if (puVar12 < puVar6) break;
              iVar5 = (int)*puVar4;
              iVar17 = (int)*puVar6;
              if (iVar5 < iVar17) break;
              puVar13 = (undefined8 *)((longlong)puVar10 + 0xc);
              puVar3 = (undefined8 *)((longlong)puVar6 + 0xc);
            } while ((iVar5 != iVar17) ||
                    ((float)((ulonglong)*puVar6 >> 0x20) <= (float)((ulonglong)*puVar4 >> 0x20)));
            puVar13 = puVar9 + -3;
            puVar3 = (undefined8 *)((longlong)puVar9 + -0xc);
            do {
              puVar9 = puVar3;
              puVar18 = puVar13;
              if (puVar9 <= puVar4) break;
              iVar17 = (int)*puVar9;
              iVar5 = (int)*puVar4;
              if (iVar17 < iVar5) break;
              puVar13 = (undefined8 *)((longlong)puVar18 + -0xc);
              puVar3 = (undefined8 *)((longlong)puVar9 + -0xc);
            } while ((iVar17 != iVar5) ||
                    ((float)((ulonglong)*puVar4 >> 0x20) <= (float)((ulonglong)*puVar9 >> 0x20)));
            if (puVar9 < puVar6) goto LAB_147564ae1;
            uVar1 = *(undefined4 *)(puVar6 + 1);
            uVar2 = *puVar6;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar9 + 1);
            *puVar6 = *puVar9;
            *(undefined4 *)(puVar9 + 1) = uVar1;
            *puVar9 = uVar2;
          } while( true );
        }
        for (; puVar16 = puVar4, puVar15 = puVar4, puVar4 < puVar12;
            puVar12 = (undefined8 *)((longlong)puVar12 + -0xc)) {
          while (puVar15 = (undefined8 *)((longlong)puVar15 + 0xc), puVar15 <= puVar12) {
            iVar5 = (int)*puVar16;
            iVar14 = (int)*puVar15;
            if ((iVar5 < iVar14) ||
               ((float)((ulonglong)*puVar16 >> 0x20) < (float)((ulonglong)*puVar15 >> 0x20) &&
                iVar5 == iVar14)) {
              puVar16 = puVar15;
            }
          }
          local_50 = *(undefined4 *)(puVar16 + 1);
          local_58 = *puVar16;
          *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar12 + 1);
          *puVar16 = *puVar12;
          *(undefined4 *)(puVar12 + 1) = local_50;
          *puVar12 = local_58;
        }
        goto LAB_147564c4f;
      }
LAB_147564c64:
      FUN_147564c71(puVar4);
LAB_147564c4f:
      plVar11 = plVar11 + -3;
    } while (&local_358 <= plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147564ae1:
  local_50 = *(undefined4 *)(puVar4 + 1);
  local_58 = *puVar4;
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar9 + 1);
  *puVar4 = *puVar9;
  *(undefined4 *)(puVar9 + 1) = local_50;
  *puVar9 = local_58;
  iVar14 = iVar14 + -1;
  puVar13 = (undefined8 *)((longlong)puVar9 + -0xc);
  if ((longlong)puVar18 - (longlong)puVar16 < (longlong)puVar15 - (longlong)puVar10) {
    if (puVar6 < puVar12) {
      *plVar11 = (longlong)puVar6;
      plVar11[1] = (longlong)puVar12;
      *(int *)(plVar11 + 2) = iVar14;
      plVar11 = plVar11 + 3;
    }
    puVar10 = puVar4;
    if (puVar9 <= (undefined8 *)((longlong)puVar4 + 0xcU)) goto LAB_147564c4f;
  }
  else {
    if ((undefined8 *)((longlong)puVar4 + 0xcU) < puVar9) {
      *plVar11 = (longlong)puVar4;
      plVar11[1] = (longlong)puVar13;
      *(int *)(plVar11 + 2) = iVar14;
      plVar11 = plVar11 + 3;
    }
    puVar4 = puVar6;
    puVar13 = puVar12;
    puVar18 = puVar12;
    if (puVar12 <= puVar6) goto LAB_147564c4f;
  }
  iVar5 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar10) >> 2);
  puVar12 = puVar13;
  puVar15 = puVar18;
  puVar16 = puVar10;
  if (iVar14 == 0) goto LAB_147564c64;
  goto LAB_1475649c9;
}



// FUNCTION 147564c71 FUN_147564c71 body=719 status=ok
// SIG undefined FUN_147564c71(void)

void FUN_147564c71(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar7 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar13 = iVar7;
joined_r0x000147564ca9:
    do {
      iVar10 = iVar7 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar12 = iVar7 * 2 + 2;
        if (iVar12 < (int)param_2) {
          lVar14 = (longlong)iVar12;
          uVar5 = *(undefined8 *)((longlong)param_1 + (longlong)iVar10 * 0xc);
          uVar6 = *(undefined8 *)((longlong)param_1 + lVar14 * 0xc);
          iVar9 = (int)uVar6;
          iVar11 = (int)uVar5;
          if ((iVar9 < iVar11) ||
             ((float)((ulonglong)uVar6 >> 0x20) < (float)((ulonglong)uVar5 >> 0x20) &&
              iVar9 == iVar11)) goto LAB_147564d11;
        }
        else {
LAB_147564d11:
          lVar14 = (longlong)iVar10;
          iVar12 = iVar10;
        }
        uVar5 = *(undefined8 *)((longlong)param_1 + lVar14 * 0xc);
        uVar6 = *(undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0xc);
        iVar9 = (int)uVar6;
        iVar10 = (int)uVar5;
        if ((iVar9 < iVar10) ||
           ((iVar9 == iVar10 &&
            ((float)((ulonglong)uVar6 >> 0x20) < (float)((ulonglong)uVar5 >> 0x20))))) {
          puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0xc);
          puVar3 = (undefined8 *)((longlong)param_1 + lVar14 * 0xc);
          local_30 = *(undefined4 *)(puVar2 + 1);
          local_38 = *puVar2;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar3 + 1) = local_30;
          *puVar3 = local_38;
          iVar7 = iVar12;
          goto joined_r0x000147564ca9;
        }
      }
      bVar15 = iVar13 != 0;
      iVar7 = iVar13 + -1;
      iVar13 = iVar7;
    } while (bVar15);
    if (1 < (int)param_2) {
      uVar8 = (ulonglong)param_2 - 1;
      local_30 = *(undefined4 *)(param_1 + 1);
      local_38 = *param_1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar8 * 0xc + 8);
      *param_1 = *(undefined8 *)((longlong)param_1 + uVar8 * 0xc);
      *(undefined4 *)((longlong)param_1 + uVar8 * 0xc + 8) = local_30;
      *(undefined8 *)((longlong)param_1 + uVar8 * 0xc) = local_38;
      if (param_2 != 2) {
        do {
          iVar13 = 0;
          iVar7 = 1;
          iVar10 = 0;
          do {
            lVar14 = (longlong)(iVar13 + 2);
            if (lVar14 < (longlong)uVar8) {
              uVar5 = *(undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0xc);
              uVar6 = *(undefined8 *)((longlong)param_1 + lVar14 * 0xc);
              iVar9 = (int)uVar6;
              iVar12 = (int)uVar5;
              if ((iVar9 < iVar12) ||
                 (iVar11 = iVar13 + 2,
                 (float)((ulonglong)uVar6 >> 0x20) < (float)((ulonglong)uVar5 >> 0x20) &&
                 iVar9 == iVar12)) goto LAB_147564e50;
            }
            else {
LAB_147564e50:
              lVar14 = (longlong)iVar7;
              iVar11 = iVar7;
            }
            uVar5 = *(undefined8 *)((longlong)param_1 + lVar14 * 0xc);
            uVar6 = *(undefined8 *)((longlong)param_1 + (longlong)iVar10 * 0xc);
            iVar7 = (int)uVar6;
            iVar13 = (int)uVar5;
            if ((iVar13 <= iVar7) &&
               ((iVar7 != iVar13 ||
                ((float)((ulonglong)uVar5 >> 0x20) <= (float)((ulonglong)uVar6 >> 0x20))))) break;
            puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar10 * 0xc);
            puVar3 = (undefined8 *)((longlong)param_1 + lVar14 * 0xc);
            uVar4 = *(undefined4 *)(puVar2 + 1);
            uVar5 = *puVar2;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
            *puVar2 = *puVar3;
            *(undefined4 *)(puVar3 + 1) = uVar4;
            *puVar3 = uVar5;
            iVar13 = iVar11 * 2;
            iVar7 = iVar11 * 2 + 1;
            iVar10 = iVar11;
          } while ((longlong)iVar7 < (longlong)uVar8);
          uVar1 = uVar8 - 1;
          local_30 = *(undefined4 *)(param_1 + 1);
          local_38 = *param_1;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8);
          *param_1 = *(undefined8 *)((longlong)param_1 + uVar1 * 0xc);
          *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8) = local_30;
          *(undefined8 *)((longlong)param_1 + uVar1 * 0xc) = local_38;
          bVar15 = 2 < uVar8;
          uVar8 = uVar1;
        } while (bVar15);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147564f41 FUN_147564f41 body=20 status=ok
// SIG undefined FUN_147564f41(void)

void FUN_147564f41(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = (undefined8 *)((longlong)param_1 + 0xc);
  }
  return;
}



// FUNCTION 147564f56 FUN_147564f56 body=62 status=ok
// SIG undefined FUN_147564f56(void)

void FUN_147564f56(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147564f94(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 147564f94 FUN_147564f94 body=112 status=ok
// SIG undefined FUN_147564f94(void)

ulonglong FUN_147564f94(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147564fce;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_147564fce:
  return param_2 & 0xffffffff;
}



// FUNCTION 147565004 FUN_147565004 body=136 status=ok
// SIG undefined FUN_147565004(void)

void FUN_147565004(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_14756508e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14756508e FUN_14756508e body=149 status=ok
// SIG undefined FUN_14756508e(void)

void FUN_14756508e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0x18);
  return;
}



// FUNCTION 147565124 FUN_147565124 body=110 status=ok
// SIG undefined FUN_147565124(void)

void FUN_147565124(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147565194(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147565194 FUN_147565194 body=132 status=ok
// SIG undefined FUN_147565194(void)

void FUN_147565194(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,4);
  return;
}



// FUNCTION 147565218 FUN_147565218 body=122 status=ok
// SIG undefined FUN_147565218(void)

void FUN_147565218(longlong *param_1,int param_2)

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



// FUNCTION 147565292 FUN_147565292 body=29 status=ok
// SIG undefined FUN_147565292(void)

undefined8 FUN_147565292(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475652d8 FUN_1475652d8 body=264 status=ok
// SIG undefined FUN_1475652d8(void)

void FUN_1475652d8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14625d148(param_3,&local_40);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  if (local_40 != 0) {
    plVar3 = (longlong *)FUN_1400a16d0(local_40 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      local_58 = *(undefined4 *)(param_1 + 0x1c);
      local_50 = local_40;
      local_48 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      cVar2 = FUN_141654ac4(plVar3,param_1 + 8,param_1 + 0x18,&local_50);
      if (cVar2 == '\0') {
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2,0);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475653e1 FUN_1475653e1 body=47 status=ok
// SIG undefined FUN_1475653e1(void)

void FUN_1475653e1(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + lVar2);
      *(longlong *)(param_1 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *(undefined2 *)(param_1 + 8 + lVar2) = *(undefined2 *)(param_2 + 8 + lVar2);
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147565410 FUN_147565410 body=114 status=ok
// SIG undefined FUN_147565410(void)

void FUN_147565410(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147565482 FUN_147565482 body=122 status=ok
// SIG undefined FUN_147565482(void)

void FUN_147565482(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1475654fc FUN_1475654fc body=99 status=ok
// SIG undefined FUN_1475654fc(void)

void FUN_1475654fc(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) - uVar1 < param_3) {
    FUN_1406ade00(param_1,uVar1);
  }
  memmove((void *)((longlong)(int)param_3 * 0x20 + (longlong)*param_1),(void *)*param_1,
          (ulonglong)uVar1 << 5);
  FUN_1405c40d3(*param_1,param_2,param_3);
  return;
}



// FUNCTION 147565560 FUN_147565560 body=114 status=ok
// SIG undefined FUN_147565560(void)

int FUN_147565560(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406ade00(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x20;
  memmove((void *)(*param_1 + lVar2 + 0x20),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) << 5);
  FUN_1475655d2(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 1475655d2 FUN_1475655d2 body=101 status=ok
// SIG undefined FUN_1475655d2(void)

undefined8 * FUN_1475655d2(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140817052(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 147565637 FUN_147565637 body=753 status=ok
// SIG undefined FUN_147565637(void)

void FUN_147565637(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong *puVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar10 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    bVar5 = DAT_14c950c29;
    iVar8 = iVar10;
joined_r0x00014756567f:
    do {
      iVar11 = iVar10 * 2 + 1;
      if (iVar11 < (int)param_2) {
        iVar9 = iVar10 * 2 + 2;
        if (iVar9 < (int)param_2) {
          uVar1 = param_1[(longlong)iVar11 * 2];
          if (((bVar5 & 1) != 0) && (uVar1 != 0)) {
            FUN_1456cec3c(uVar1);
          }
          uVar2 = param_1[(longlong)iVar9 * 2];
          if (uVar2 == uVar1) {
            bVar13 = (ushort)(param_1 + (longlong)iVar9 * 2)[1] <
                     (ushort)(param_1 + (longlong)iVar11 * 2)[1];
          }
          else {
            bVar13 = uVar2 < param_1[(longlong)iVar11 * 2];
          }
          bVar5 = DAT_14c950c29;
          if (!bVar13) {
            iVar11 = iVar9;
          }
        }
        uVar1 = param_1[(longlong)iVar11 * 2];
        if (((bVar5 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar5 = DAT_14c950c29;
        }
        puVar6 = param_1 + (longlong)iVar10 * 2;
        puVar12 = param_1 + (longlong)iVar11 * 2;
        if (*puVar6 == uVar1) {
          if ((ushort)puVar6[1] < (ushort)puVar12[1]) goto LAB_147565722;
        }
        else if (*puVar6 < *puVar12) {
LAB_147565722:
          uVar1 = *puVar6;
          uVar2 = puVar6[1];
          uVar3 = puVar12[1];
          *puVar6 = *puVar12;
          puVar6[1] = uVar3;
          local_58._0_4_ = (undefined4)uVar1;
          local_58._4_4_ = (undefined4)(uVar1 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar2;
          uStack_50._4_4_ = (undefined4)(uVar2 >> 0x20);
          *(undefined4 *)puVar12 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar12 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_50._4_4_;
          iVar10 = iVar11;
          local_58 = uVar1;
          uStack_50 = uVar2;
          goto joined_r0x00014756567f;
        }
      }
      bVar13 = iVar8 != 0;
      iVar10 = iVar8 + -1;
      bVar5 = DAT_14c950c29;
      iVar8 = iVar10;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2 - 1;
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = (param_1 + uVar7 * 2)[1];
      *param_1 = param_1[uVar7 * 2];
      param_1[1] = uVar3;
      local_58._0_4_ = (undefined4)uVar1;
      local_58._4_4_ = (undefined4)(uVar1 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar2;
      uStack_50._4_4_ = (undefined4)(uVar2 >> 0x20);
      puVar6 = param_1 + uVar7 * 2;
      *(undefined4 *)puVar6 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar6 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar6 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_50._4_4_;
      bVar5 = DAT_14c950c29;
      local_58 = uVar1;
      uStack_50 = uVar2;
      if (param_2 != 2) {
        do {
          iVar10 = 0;
          iVar11 = 1;
          iVar8 = 0;
          do {
            iVar10 = iVar10 + 2;
            iVar9 = iVar11;
            if ((longlong)iVar10 < (longlong)uVar7) {
              uVar1 = param_1[(longlong)iVar11 * 2];
              if (((bVar5 & 1) != 0) && (uVar1 != 0)) {
                FUN_1456cec3c(uVar1);
              }
              uVar2 = param_1[(longlong)iVar10 * 2];
              if (uVar2 == uVar1) {
                bVar13 = (ushort)(param_1 + (longlong)iVar10 * 2)[1] <
                         (ushort)(param_1 + (longlong)iVar11 * 2)[1];
              }
              else {
                bVar13 = uVar2 < param_1[(longlong)iVar11 * 2];
              }
              bVar5 = DAT_14c950c29;
              if (!bVar13) {
                iVar9 = iVar10;
              }
            }
            uVar1 = param_1[(longlong)iVar9 * 2];
            if (((bVar5 & 1) != 0) && (uVar1 != 0)) {
              FUN_1456cec3c(uVar1);
              bVar5 = DAT_14c950c29;
            }
            puVar6 = param_1 + (longlong)iVar8 * 2;
            puVar12 = param_1 + (longlong)iVar9 * 2;
            if (*puVar6 == uVar1) {
              if ((ushort)puVar12[1] <= (ushort)puVar6[1]) break;
            }
            else if (*puVar12 <= *puVar6) break;
            uVar1 = *puVar6;
            uVar2 = puVar6[1];
            uVar3 = puVar12[1];
            *puVar6 = *puVar12;
            puVar6[1] = uVar3;
            local_58._0_4_ = (undefined4)uVar1;
            local_58._4_4_ = (undefined4)(uVar1 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar2;
            uStack_50._4_4_ = (undefined4)(uVar2 >> 0x20);
            *(undefined4 *)puVar12 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar12 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_50._4_4_;
            iVar10 = iVar9 * 2;
            iVar11 = iVar9 * 2 + 1;
            local_58 = uVar1;
            uStack_50 = uVar2;
            iVar8 = iVar9;
          } while ((longlong)iVar11 < (longlong)uVar7);
          uVar1 = uVar7 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)(uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)(uVar3 >> 0x20);
          puVar6 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar6 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar6 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar6 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_50._4_4_;
          bVar13 = 2 < uVar7;
          uVar7 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
        } while (bVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756592a FUN_14756592a body=131 status=ok
// SIG undefined FUN_14756592a(void)

longlong FUN_14756592a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1475659ad();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_146254e2c(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1475659ad FUN_1475659ad body=770 status=ok
// SIG undefined FUN_1475659ad(void)

longlong * FUN_1475659ad(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_50._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_54 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_54,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_48 = param_2 + 2;
    local_50 = (undefined8 *)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_50;
    local_70 = local_48;
    local_68 = local_40;
    uVar7 = local_68;
    local_60 = local_38;
    local_5c = local_34;
    local_68._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_80 = param_2;
    if (local_68._4_4_ < (int)local_48[3]) {
      iVar9 = local_68._4_4_;
      local_68 = uVar7;
      do {
        lVar4 = *local_80;
        (**(code **)(*param_1 + 0x138))(param_1,lVar4 + (longlong)iVar9 * 0x18);
        puVar8 = (undefined4 *)(lVar4 + (longlong)iVar9 * 0x18 + 8);
        puVar5 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar8,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          *puVar8 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar7 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  else {
    local_50 = (undefined8 *)((ulonglong)local_50._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar5 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar5) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_50);
      }
    }
    else {
      local_50 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar5;
    }
    FUN_140c3ba72(param_2,(ulonglong)local_50 & 0xffffffff);
    uVar7 = local_68;
    if (0 < (int)local_50) {
      iVar9 = 0;
      do {
        FUN_146254d44(param_2,&local_80);
        *local_78 = 0;
        puVar2 = local_78 + 1;
        *(undefined4 *)(local_78 + 1) = 0;
        *(undefined4 *)(local_78 + 2) = 0xffffffff;
        (**(code **)(*param_1 + 0x138))(param_1);
        puVar5 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar2);
          }
        }
        else {
          *(undefined4 *)puVar2 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar9 = iVar9 + 1;
        uVar7 = local_68;
      } while (iVar9 < (int)local_50);
    }
  }
  local_68 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147565cb0 FUN_147565cb0 body=88 status=ok
// SIG undefined FUN_147565cb0(void)

longlong * FUN_147565cb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147565d08 FUN_147565d08 body=1 status=ok
// SIG undefined FUN_147565d08(void)

void FUN_147565d08(void)

{
  return;
}



// FUNCTION 147565d0a FUN_147565d0a body=29 status=ok
// SIG undefined FUN_147565d0a(void)

undefined8 FUN_147565d0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147565d28 FUN_147565d28 body=124 status=ok
// SIG undefined FUN_147565d28(void)

longlong FUN_147565d28(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147565da6();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_147565e04(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x60 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 147565da6 FUN_147565da6 body=93 status=ok
// SIG undefined FUN_147565da6(void)

longlong FUN_147565da6(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x60;
        if ((*(longlong *)(lVar1 + lVar4) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147565e04 FUN_147565e04 body=282 status=ok
// SIG undefined FUN_147565e04(void)

undefined4 * FUN_147565e04(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147565f20(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  *(byte *)(local_40 + 0x14) = *(byte *)(local_40 + 0x14) & 0xfc | 2;
  FUN_14755f6a2(local_40 + 4);
  local_40[0x16] = 0xffffffff;
  cVar5 = FUN_14756600e(param_1,param_3,local_40,local_48);
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[0x17] = param_3;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[0x16] =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1449109ae(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147565f20 FUN_147565f20 body=238 status=ok
// SIG undefined FUN_147565f20(void)

int * FUN_147565f20(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14756600e FUN_14756600e body=170 status=ok
// SIG undefined FUN_14756600e(void)

undefined8 FUN_14756600e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x60;
        _Dst = (void *)(lVar1 + lVar4);
        if ((*(longlong *)(lVar1 + lVar4) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar4) == param_3[1])) {
          FUN_14755f6a2((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0x58);
          FUN_1475660b8(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1475660b8 FUN_1475660b8 body=122 status=ok
// SIG undefined FUN_1475660b8(void)

void FUN_1475660b8(longlong *param_1,int param_2)

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



// FUNCTION 147566132 FUN_147566132 body=132 status=ok
// SIG undefined FUN_147566132(void)

void FUN_147566132(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475661b7 FUN_1475661b7 body=61 status=ok
// SIG undefined FUN_1475661b7(void)

void FUN_1475661b7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1475661f4 FUN_1475661f4 body=110 status=ok
// SIG undefined FUN_1475661f4(void)

void FUN_1475661f4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147566264(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147566264 FUN_147566264 body=132 status=ok
// SIG undefined FUN_147566264(void)

void FUN_147566264(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 1475662e8 FUN_1475662e8 body=148 status=ok
// SIG undefined FUN_1475662e8(void)

void FUN_1475662e8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x9c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x48,0);
      iVar5 = (int)(uVar4 / 0x48);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x9c) = iVar6;
    FUN_14756637e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14756637e FUN_14756637e body=149 status=ok
// SIG undefined FUN_14756637e(void)

void FUN_14756637e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x90);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x90,0,param_3,0x48);
    memmove(*(void **)((longlong)param_1 + 0x90),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x90,param_2,param_3,0x48);
  return;
}



// FUNCTION 147566414 FUN_147566414 body=29 status=ok
// SIG undefined FUN_147566414(void)

undefined8 FUN_147566414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147566432 FUN_147566432 body=187 status=ok
// SIG undefined FUN_147566432(void)

void FUN_147566432(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *(int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x1c) == -1) {
    FUN_1475664ee(*(longlong *)(param_1 + 8) + 0x40,&local_28);
    *(int *)(param_2 + 0x1c) = (int)local_28;
    iVar2 = (int)local_28;
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar5 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x40) + 4 + (longlong)iVar2 * 0xc);
  if (lVar5 != 0) {
    piVar4 = (int *)((longlong)*(int *)(*(longlong *)(lVar3 + 0x40) + (longlong)iVar2 * 0xc) * 8 +
                    *(longlong *)(lVar3 + 0x50));
    piVar1 = piVar4 + lVar5 * 2;
    do {
      if ((*piVar4 == *(int *)(param_1 + 0x10)) && (piVar4[1] == *(int *)(param_1 + 0x14)))
      goto LAB_1475664b0;
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar1);
  }
  local_28 = *(undefined8 *)(param_1 + 0x10);
  FUN_14756654e(lVar3 + 0x40);
LAB_1475664b0:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475664ee FUN_1475664ee body=95 status=ok
// SIG undefined FUN_1475664ee(void)

int * FUN_1475664ee(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *param_2 = iVar1;
  lVar3 = param_1[3];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1475605dc(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(int *)(lVar2 + (longlong)iVar1 * 0xc) = (int)lVar3;
  *(undefined8 *)(lVar2 + 4 + (longlong)iVar1 * 0xc) = 0x100000000;
  FUN_1475665da(param_1 + 2,(int)param_1[3] + 1);
  return param_2;
}



// FUNCTION 14756654e FUN_14756654e body=139 status=ok
// SIG undefined FUN_14756654e(void)

void FUN_14756654e(longlong *param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(*param_1 + (longlong)param_2 * 0xc);
  iVar2 = piVar1[1];
  if (iVar2 < piVar1[2]) {
    iVar4 = *piVar1;
  }
  else {
    iVar2 = piVar1[2] * 2;
    iVar3 = 2;
    if (2 < iVar2) {
      iVar3 = iVar2;
    }
    piVar1[2] = iVar3;
    iVar4 = (int)param_1[3];
    FUN_1475665da(param_1 + 2,iVar3 + iVar4);
    memmove((void *)(param_1[2] + (longlong)iVar4 * 8),(void *)(param_1[2] + (longlong)*piVar1 * 8),
            (longlong)piVar1[1] << 3);
    iVar2 = piVar1[1];
    *piVar1 = iVar4;
  }
  *(undefined8 *)(param_1[2] + (longlong)(iVar2 + iVar4) * 8) = *param_3;
  piVar1[1] = piVar1[1] + 1;
  return;
}



// FUNCTION 1475665da FUN_1475665da body=71 status=ok
// SIG undefined FUN_1475665da(void)

void FUN_1475665da(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147560556();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_147566622();
      return;
    }
  }
  return;
}



// FUNCTION 147566622 FUN_147566622 body=62 status=ok
// SIG undefined FUN_147566622(void)

void FUN_147566622(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147566660(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147566660 FUN_147566660 body=93 status=ok
// SIG undefined FUN_147566660(void)

ulonglong FUN_147566660(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1475666be FUN_1475666be body=132 status=ok
// SIG undefined FUN_1475666be(void)

void FUN_1475666be(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147566744 FUN_147566744 body=132 status=ok
// SIG undefined FUN_147566744(void)

void FUN_147566744(longlong param_1,int param_2)

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



// FUNCTION 1475667ca FUN_1475667ca body=132 status=ok
// SIG undefined FUN_1475667ca(void)

void FUN_1475667ca(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147566850 FUN_147566850 body=132 status=ok
// SIG undefined FUN_147566850(void)

void FUN_147566850(longlong param_1,int param_2)

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



// FUNCTION 1475668d6 FUN_1475668d6 body=147 status=ok
// SIG undefined FUN_1475668d6(void)

void FUN_1475668d6(longlong param_1,int param_2)

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



// FUNCTION 14756696a FUN_14756696a body=468 status=ok
// SIG undefined FUN_14756696a(void)

void FUN_14756696a(undefined8 *param_1,uint param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    param_3 = param_3 & 0xffffffff;
    iVar10 = iVar5;
joined_r0x0001475669ab:
    do {
      iVar7 = iVar5 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar9 = iVar5 * 2 + 2;
        if ((iVar9 < (int)param_2) &&
           (*(ushort *)((longlong)param_1 + (longlong)iVar7 * 0x10 + param_3) <=
            *(ushort *)((longlong)param_1 + (longlong)iVar9 * 0x10 + param_3))) {
          iVar7 = iVar9;
        }
        puVar8 = param_1 + (longlong)iVar5 * 2;
        puVar11 = param_1 + (longlong)iVar7 * 2;
        if (*(ushort *)(param_3 + (longlong)puVar8) < *(ushort *)(param_3 + (longlong)puVar11)) {
          uVar2 = *puVar8;
          uVar3 = puVar8[1];
          uVar4 = puVar11[1];
          *puVar8 = *puVar11;
          puVar8[1] = uVar4;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          local_38 = uVar2;
          uStack_30 = uVar3;
          iVar5 = iVar7;
          goto joined_r0x0001475669ab;
        }
      }
      bVar12 = iVar10 != 0;
      iVar5 = iVar10 + -1;
      iVar10 = iVar5;
    } while (bVar12);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar6 * 2)[1];
      *param_1 = param_1[uVar6 * 2];
      param_1[1] = uVar4;
      local_38._0_4_ = (undefined4)uVar2;
      local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar3;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar8 = param_1 + uVar6 * 2;
      *(undefined4 *)puVar8 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar8 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_30._4_4_;
      local_38 = uVar2;
      uStack_30 = uVar3;
      if (param_2 != 2) {
        do {
          iVar5 = 0;
          iVar7 = 1;
          iVar10 = 0;
          do {
            iVar5 = iVar5 + 2;
            iVar9 = iVar7;
            if (((longlong)iVar5 < (longlong)uVar6) &&
               (*(ushort *)((longlong)param_1 + (longlong)iVar7 * 0x10 + param_3) <=
                *(ushort *)((longlong)param_1 + (longlong)iVar5 * 0x10 + param_3))) {
              iVar9 = iVar5;
            }
            puVar8 = param_1 + (longlong)iVar10 * 2;
            puVar11 = param_1 + (longlong)iVar9 * 2;
            if (*(ushort *)(param_3 + (longlong)puVar11) <= *(ushort *)(param_3 + (longlong)puVar8))
            break;
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            uVar4 = puVar11[1];
            *puVar8 = *puVar11;
            puVar8[1] = uVar4;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar5 = iVar9 * 2;
            iVar7 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar7 < (longlong)uVar6);
          uVar1 = uVar6 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar8 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar8 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar8 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_30._4_4_;
          bVar12 = 2 < uVar6;
          uVar6 = uVar1;
          local_38 = uVar2;
          uStack_30 = uVar3;
        } while (bVar12);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147566b40 FUN_147566b40 body=147 status=ok
// SIG undefined FUN_147566b40(void)

void FUN_147566b40(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147566bd4 FUN_147566bd4 body=119 status=ok
// SIG undefined FUN_147566bd4(void)

void FUN_147566bd4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_147566c4c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147566c4c FUN_147566c4c body=141 status=ok
// SIG undefined FUN_147566c4c(void)

void FUN_147566c4c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 147566cda FUN_147566cda body=116 status=ok
// SIG undefined FUN_147566cda(void)

void FUN_147566cda(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147566d4e FUN_147566d4e body=75 status=ok
// SIG undefined FUN_147566d4e(void)

void FUN_147566d4e(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 8),
              (longlong)*(int *)((longlong)param_1 + 0x10) << 3);
      FUN_1446efa72((longlong)param_1 + 8,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147566db4 FUN_147566db4 body=29 status=ok
// SIG undefined FUN_147566db4(void)

bool FUN_147566db4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147566dd2 FUN_147566dd2 body=93 status=ok
// SIG undefined FUN_147566dd2(void)

void FUN_147566dd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a480df0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a480d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147566e30 FUN_147566e30 body=93 status=ok
// SIG undefined FUN_147566e30(void)

void FUN_147566e30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a480df0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a480d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147566e8e FUN_147566e8e body=126 status=ok
// SIG undefined FUN_147566e8e(void)

void FUN_147566e8e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a480df0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14a480d80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147566efd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147566f0c FUN_147566f0c body=44 status=ok
// SIG undefined FUN_147566f0c(void)

void FUN_147566f0c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147566f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (uVar1,param_2,*(undefined4 *)(param_1 + 8),*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147566f3a FUN_147566f3a body=123 status=ok
// SIG undefined FUN_147566f3a(void)

int FUN_147566f3a(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if ((((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar3) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar3) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + lVar2 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147566fb6 FUN_147566fb6 body=303 status=ok
// SIG undefined FUN_147566fb6(void)

undefined4 * FUN_147566fb6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1475670e6(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[4] = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_1475671e2(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[6] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1475672c4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475670e6 FUN_1475670e6 body=251 status=ok
// SIG undefined FUN_1475670e6(void)

int * FUN_1475670e6(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1475671e2 FUN_1475671e2 body=98 status=ok
// SIG undefined FUN_1475671e2(void)

undefined8 FUN_1475671e2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147566f3a(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147567244(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147567244 FUN_147567244 body=128 status=ok
// SIG undefined FUN_147567244(void)

void FUN_147567244(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 1475672c4 FUN_1475672c4 body=453 status=ok
// SIG undefined FUN_1475672c4(void)

void FUN_1475672c4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
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
  uVar5 = local_70;
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar7 = FUN_1447addd0(lVar3 + lVar4,0x10);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756748a FUN_14756748a body=368 status=ok
// SIG undefined FUN_14756748a(void)

undefined4 * FUN_14756748a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1475675fc(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  *local_40 = *(uint *)*param_3;
  uVar10 = puVar1[1];
  uVar9 = puVar1[2];
  uVar2 = puVar1[3];
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  uVar5 = puVar1[5];
  uVar6 = puVar1[6];
  local_40[2] = *puVar1;
  local_40[3] = uVar10;
  local_40[4] = uVar9;
  local_40[5] = uVar2;
  local_40[5] = uVar3;
  local_40[6] = uVar4;
  local_40[7] = uVar5;
  local_40[8] = uVar6;
  *(undefined8 *)(local_40 + 10) = *(undefined8 *)(puVar1 + 8);
  puVar1[8] = 0;
  puVar1[9] = 0;
  local_40[0xc] = puVar1[10];
  local_40[0xd] = puVar1[0xb];
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  FUN_14756779c(local_40 + 0xe,puVar1 + 0xc);
  *(undefined8 *)(local_40 + 0x1c) = *(undefined8 *)(puVar1 + 0x1a);
  *(char *)(local_40 + 0x1e) = (char)puVar1[0x1c];
  local_40[0x20] = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = *local_40;
  cVar8 = FUN_1475676f8(param_1,uVar10,local_40,&local_4c);
  uVar7 = local_4c;
  if (cVar8 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar9) {
      uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      local_40[0x21] = uVar10;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      local_40[0x20] =
           *(uint *)(lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
      ;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar12;
      FUN_14756787a(param_1);
    }
  }
  *param_2 = uVar7;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475675fc FUN_1475675fc body=251 status=ok
// SIG undefined FUN_1475675fc(void)

int * FUN_1475675fc(longlong *param_1,int *param_2)

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
      FUN_1401600aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x88);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x88) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x88 + *param_1;
  return param_2;
}



// FUNCTION 1475676f8 FUN_1475676f8 body=164 status=ok
// SIG undefined FUN_1475676f8(void)

undefined8 FUN_1475676f8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x88);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x88) == *param_3) {
          FUN_1475338cc((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x80);
          FUN_1475677fa(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x80);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14756779c FUN_14756779c body=93 status=ok
// SIG undefined FUN_14756779c(void)

undefined8 * FUN_14756779c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc | 2;
  FUN_140a31f5e();
  if ((*(byte *)(param_2 + 6) & 1) != 0) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
    bVar1 = *(byte *)(param_2 + 6);
    *(byte *)(param_2 + 6) = bVar1 & 0xfe;
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd | bVar1 & 2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
  }
  return param_1;
}



// FUNCTION 1475677fa FUN_1475677fa body=128 status=ok
// SIG undefined FUN_1475677fa(void)

void FUN_1475677fa(longlong *param_1,int param_2)

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



// FUNCTION 14756787a FUN_14756787a body=436 status=ok
// SIG undefined FUN_14756787a(void)

void FUN_14756787a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar5 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar6 = local_58._4_4_;
      local_58 = uVar5;
      do {
        lVar3 = *local_70;
        lVar4 = (longlong)iVar6 * 0x88;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar4);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x84 + lVar4) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x80 + lVar4) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
        uVar5 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147567a30 FUN_147567a30 body=89 status=ok
// SIG undefined FUN_147567a30(void)

void FUN_147567a30(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x88) == *param_2) {
          FUN_147567a8a();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x88 + *param_1 + 0x80);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147567a8a FUN_147567a8a body=146 status=ok
// SIG undefined FUN_147567a8a(void)

void FUN_147567a8a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x88;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x84 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x80 + lVar6 * 0x88);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x88 + 0x80);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x80);
  FUN_1475338cc(*param_1 + lVar2 + 8);
  FUN_1475677fa(param_1,param_2);
  return;
}



// FUNCTION 147567b1c FUN_147567b1c body=159 status=ok
// SIG undefined FUN_147567b1c(void)

void FUN_147567b1c(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_1447addd0(param_2,0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar2 = (longlong)iVar3 * 0x1c;
        if ((((*(int *)(lVar1 + lVar2) == *param_2) && (*(int *)(lVar1 + 4 + lVar2) == param_2[1]))
            && (*(int *)(lVar1 + 8 + lVar2) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar2) == param_2[3])) {
          FUN_147567bbc(param_1);
          return;
        }
        iVar3 = *(int *)(lVar2 + lVar1 + 0x14);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 147567bbc FUN_147567bbc body=101 status=ok
// SIG undefined FUN_147567bbc(void)

void FUN_147567bbc(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x18 + (longlong)param_2 * 0x1c);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x14 + lVar5 * 0x1c);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x1c + 0x14);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x1c + 0x14);
  FUN_147567244();
  return;
}



// FUNCTION 147567c22 FUN_147567c22 body=132 status=ok
// SIG undefined FUN_147567c22(void)

void FUN_147567c22(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147567ca8 FUN_147567ca8 body=152 status=ok
// SIG undefined FUN_147567ca8(void)

void FUN_147567ca8(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((*(int *)(lVar1 + lVar4 * 0x28) == *param_2) &&
             (*(int *)(lVar1 + 4 + lVar4 * 0x28) == param_2[1])) &&
            (*(int *)(lVar1 + 8 + lVar4 * 0x28) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4 * 0x28) == param_2[3])) {
          FUN_147567d40(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147567d40 FUN_147567d40 body=201 status=ok
// SIG undefined FUN_147567d40(void)

void FUN_147567d40(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x28;
  lVar9 = (longlong)*(int *)(lVar1 + 0x24);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x20 + lVar9 * 0x28);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x28 + 0x20);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x20);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147567e0a FUN_147567e0a body=322 status=ok
// SIG undefined FUN_147567e0a(void)

void FUN_147567e0a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147567f4e FUN_147567f4e body=290 status=ok
// SIG undefined FUN_147567f4e(void)

void FUN_147567f4e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      puVar1 = *(undefined8 **)(*local_60 + 0x18 + (longlong)iStack_44 * 0x28);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147568072 FUN_147568072 body=150 status=ok
// SIG undefined FUN_147568072(void)

void FUN_147568072(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14756810a FUN_14756810a body=108 status=ok
// SIG undefined FUN_14756810a(void)

undefined8 * FUN_14756810a(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfc | 2;
  FUN_140a31f1a();
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
    bVar1 = *(byte *)(param_2 + 0x10);
    *(byte *)(param_2 + 0x10) = bVar1 & 0xfe;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd | bVar1 & 2;
    puVar3 = param_1;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return param_1;
}



// FUNCTION 147568176 FUN_147568176 body=111 status=ok
// SIG undefined FUN_147568176(void)

void FUN_147568176(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1475607b2(param_1,iVar1);
    }
    FUN_140a9c5ba((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1475681e6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1475681e6 FUN_1475681e6 body=62 status=ok
// SIG undefined FUN_1475681e6(void)

void FUN_1475681e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147568224(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,4);
  }
  return;
}



// FUNCTION 147568224 FUN_147568224 body=93 status=ok
// SIG undefined FUN_147568224(void)

ulonglong FUN_147568224(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,4);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147568282 FUN_147568282 body=117 status=ok
// SIG undefined FUN_147568282(void)

void FUN_147568282(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2;
  *(int *)(lVar2 + 8 + lVar3 * 0xc) = param_3;
  iVar1 = (int)param_1[3];
  FUN_147568176(param_1 + 2,param_3 + iVar1);
  _Src = (void *)((longlong)*(int *)(lVar2 + lVar3 * 0xc) * 0x20 + param_1[2]);
  memmove((void *)((longlong)iVar1 * 0x20 + param_1[2]),_Src,
          (longlong)*(int *)(lVar2 + 4 + lVar3 * 0xc) << 5);
  FUN_140a9c5ba(_Src,*(undefined4 *)(lVar2 + 4 + lVar3 * 0xc));
  *(int *)(lVar2 + lVar3 * 0xc) = iVar1;
  return;
}



// FUNCTION 1475682f8 FUN_1475682f8 body=112 status=ok
// SIG undefined FUN_1475682f8(void)

void FUN_1475682f8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147568368 FUN_147568368 body=85 status=ok
// SIG undefined FUN_147568368(void)

undefined8 * FUN_147568368(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc | 2;
  FUN_14755f982();
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    bVar1 = *(byte *)(param_2 + 4);
    *(byte *)(param_2 + 4) = bVar1 & 0xfe;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd | bVar1 & 2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  return param_1;
}



// FUNCTION 1475683be FUN_1475683be body=147 status=ok
// SIG undefined FUN_1475683be(void)

void FUN_1475683be(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147568452 FUN_147568452 body=814 status=ok
// SIG undefined FUN_147568452(void)

void FUN_147568452(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar11 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar19 = iVar11;
joined_r0x000147568487:
    do {
      iVar16 = iVar11 * 2 + 1;
      if (iVar16 < (int)param_2) {
        iVar18 = iVar11 * 2 + 2;
        if (iVar18 < (int)param_2) {
          lVar17 = (longlong)iVar18;
          if ((*(byte *)(param_1 + lVar17 * 5 + 4) & 2) == 0) {
            puVar13 = (undefined8 *)param_1[lVar17 * 5];
          }
          else {
            puVar13 = param_1 + lVar17 * 5;
          }
          lVar17 = (longlong)iVar16;
          if ((*(byte *)(param_1 + lVar17 * 5 + 4) & 2) == 0) {
            puVar14 = (undefined8 *)param_1[lVar17 * 5];
          }
          else {
            puVar14 = param_1 + lVar17 * 5;
          }
          if (*(int *)(puVar14 + 1) <= *(int *)(puVar13 + 1)) {
            iVar16 = iVar18;
          }
        }
        puVar13 = param_1 + (longlong)iVar11 * 5;
        puVar14 = puVar13;
        if ((*(byte *)(puVar13 + 4) & 2) == 0) {
          puVar14 = (undefined8 *)param_1[(longlong)iVar11 * 5];
        }
        puVar2 = param_1 + (longlong)iVar16 * 5;
        puVar15 = puVar2;
        if ((*(byte *)(puVar2 + 4) & 2) == 0) {
          puVar15 = (undefined8 *)param_1[(longlong)iVar16 * 5];
        }
        if (*(int *)(puVar14 + 1) < *(int *)(puVar15 + 1)) {
          local_28 = puVar13[4];
          uVar3 = *puVar13;
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          puVar13[4] = puVar2[4];
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[3];
          puVar13[2] = puVar2[2];
          puVar13[3] = uVar9;
          *puVar13 = uVar7;
          puVar13[1] = uVar8;
          puVar2[4] = local_28;
          local_48._0_4_ = (undefined4)uVar3;
          local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar4;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          local_38._0_4_ = (undefined4)uVar5;
          local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar6;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          *(undefined4 *)(puVar2 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 0x14) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 3) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_30._4_4_;
          *(undefined4 *)puVar2 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar2 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_40._4_4_;
          iVar11 = iVar16;
          local_48 = uVar3;
          uStack_40 = uVar4;
          local_38 = uVar5;
          uStack_30 = uVar6;
          goto joined_r0x000147568487;
        }
      }
      bVar20 = iVar19 != 0;
      iVar11 = iVar19 + -1;
      iVar19 = iVar11;
    } while (bVar20);
    if (1 < (int)param_2) {
      uVar12 = (ulonglong)param_2 - 1;
      local_28 = param_1[4];
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar5 = param_1[2];
      uVar6 = param_1[3];
      param_1[4] = param_1[uVar12 * 5 + 4];
      uVar7 = param_1[uVar12 * 5];
      uVar8 = (param_1 + uVar12 * 5)[1];
      uVar9 = (param_1 + uVar12 * 5 + 2)[1];
      param_1[2] = param_1[uVar12 * 5 + 2];
      param_1[3] = uVar9;
      *param_1 = uVar7;
      param_1[1] = uVar8;
      param_1[uVar12 * 5 + 4] = local_28;
      local_48._0_4_ = (undefined4)uVar3;
      local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar4;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_38._0_4_ = (undefined4)uVar5;
      local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar6;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar13 = param_1 + uVar12 * 5 + 2;
      *(undefined4 *)puVar13 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar13 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_30._4_4_;
      puVar13 = param_1 + uVar12 * 5;
      *(undefined4 *)puVar13 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar13 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_40._4_4_;
      local_48 = uVar3;
      uStack_40 = uVar4;
      local_38 = uVar5;
      uStack_30 = uVar6;
      if (param_2 != 2) {
        do {
          iVar11 = 0;
          iVar16 = 1;
          iVar19 = 0;
          do {
            lVar17 = (longlong)(iVar11 + 2);
            iVar18 = iVar16;
            if (lVar17 < (longlong)uVar12) {
              if ((*(byte *)(param_1 + lVar17 * 5 + 4) & 2) == 0) {
                puVar13 = (undefined8 *)param_1[lVar17 * 5];
              }
              else {
                puVar13 = param_1 + lVar17 * 5;
              }
              lVar17 = (longlong)iVar16;
              if ((*(byte *)(param_1 + lVar17 * 5 + 4) & 2) == 0) {
                puVar14 = (undefined8 *)param_1[lVar17 * 5];
              }
              else {
                puVar14 = param_1 + lVar17 * 5;
              }
              if (*(int *)(puVar14 + 1) <= *(int *)(puVar13 + 1)) {
                iVar18 = iVar11 + 2;
              }
            }
            puVar13 = param_1 + (longlong)iVar19 * 5;
            puVar14 = puVar13;
            if ((*(byte *)(puVar13 + 4) & 2) == 0) {
              puVar14 = (undefined8 *)param_1[(longlong)iVar19 * 5];
            }
            puVar2 = param_1 + (longlong)iVar18 * 5;
            puVar15 = puVar2;
            if ((*(byte *)(puVar2 + 4) & 2) == 0) {
              puVar15 = (undefined8 *)param_1[(longlong)iVar18 * 5];
            }
            if (*(int *)(puVar15 + 1) <= *(int *)(puVar14 + 1)) break;
            uVar3 = puVar13[4];
            uVar4 = *puVar13;
            uVar5 = puVar13[1];
            uVar6 = puVar13[2];
            uVar7 = puVar13[3];
            puVar13[4] = puVar2[4];
            uVar8 = *puVar2;
            uVar9 = puVar2[1];
            uVar10 = puVar2[3];
            puVar13[2] = puVar2[2];
            puVar13[3] = uVar10;
            *puVar13 = uVar8;
            puVar13[1] = uVar9;
            puVar2[4] = uVar3;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
            iVar11 = iVar18 * 2;
            iVar16 = iVar18 * 2 + 1;
            iVar19 = iVar18;
          } while ((longlong)iVar16 < (longlong)uVar12);
          uVar1 = uVar12 - 1;
          local_28 = param_1[4];
          uVar3 = *param_1;
          uVar4 = param_1[1];
          uVar5 = param_1[2];
          uVar6 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar7 = param_1[uVar1 * 5];
          uVar8 = (param_1 + uVar1 * 5)[1];
          uVar9 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar9;
          *param_1 = uVar7;
          param_1[1] = uVar8;
          param_1[uVar1 * 5 + 4] = local_28;
          local_48._0_4_ = (undefined4)uVar3;
          local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar4;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          local_38._0_4_ = (undefined4)uVar5;
          local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar6;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          puVar13 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar13 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar13 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_30._4_4_;
          puVar13 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar13 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar13 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_40._4_4_;
          bVar20 = 2 < uVar12;
          uVar12 = uVar1;
          local_48 = uVar3;
          uStack_40 = uVar4;
          local_38 = uVar5;
          uStack_30 = uVar6;
        } while (bVar20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147568782 FUN_147568782 body=48 status=ok
// SIG undefined FUN_147568782(void)

void FUN_147568782(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xf0,8);
  }
  return;
}



// FUNCTION 1475687b2 FUN_1475687b2 body=322 status=ok
// SIG undefined FUN_1475687b2(void)

void FUN_1475687b2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475688f6 FUN_1475688f6 body=282 status=ok
// SIG undefined FUN_1475688f6(void)

void FUN_1475688f6(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_14755f982(*local_60 + (longlong)iStack_44 * 0x38 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147568a12 FUN_147568a12 body=95 status=ok
// SIG undefined FUN_147568a12(void)

void FUN_147568a12(longlong param_1,uint param_2)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar3;
    FUN_147568a72(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 147568a72 FUN_147568a72 body=132 status=ok
// SIG undefined FUN_147568a72(void)

void FUN_147568a72(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147568af6 FUN_147568af6 body=110 status=ok
// SIG undefined FUN_147568af6(void)

void FUN_147568af6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147568a72(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147568b66 FUN_147568b66 body=300 status=ok
// SIG undefined FUN_147568b66(void)

undefined4 * FUN_147568b66(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147568c94(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_147557c1e(local_40 + 2,uVar1);
  local_40[0x3e] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_147568d7a(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0x3f] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x3e] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147568e8a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147568c94 FUN_147568c94 body=229 status=ok
// SIG undefined FUN_147568c94(void)

int * FUN_147568c94(longlong *param_1,int *param_2)

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
      FUN_1406c169c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x100);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x100) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x100 + *param_1;
  return param_2;
}



// FUNCTION 147568d7a FUN_147568d7a body=157 status=ok
// SIG undefined FUN_147568d7a(void)

undefined8 FUN_147568d7a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x100);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x100) == *param_3) {
          FUN_145765194((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xf8);
          FUN_147568e18(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xf8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147568e18 FUN_147568e18 body=114 status=ok
// SIG undefined FUN_147568e18(void)

void FUN_147568e18(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x100) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x100) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x100 + 4) = uVar4;
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



// FUNCTION 147568e8a FUN_147568e8a body=432 status=ok
// SIG undefined FUN_147568e8a(void)

void FUN_147568e8a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x100;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xfc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xf8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756903c FUN_14756903c body=282 status=ok
// SIG undefined FUN_14756903c(void)

undefined4 * FUN_14756903c(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147569158(param_1,local_48);
  FUN_1475692dc(param_3,local_40);
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_14756923e(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[9] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1475693be(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147569158 FUN_147569158 body=230 status=ok
// SIG undefined FUN_147569158(void)

int * FUN_147569158(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14756923e FUN_14756923e body=158 status=ok
// SIG undefined FUN_14756923e(void)

undefined8 FUN_14756923e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_3) {
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14756934c(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1475692dc FUN_1475692dc body=112 status=ok
// SIG undefined FUN_1475692dc(void)

undefined4 * FUN_1475692dc(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  
  puVar2 = (undefined4 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  param_2[2] = *puVar2;
  *(undefined8 *)(param_2 + 4) = 0;
  iVar1 = puVar2[4];
  _Src = *(void **)(puVar2 + 2);
  param_2[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[7] = 0;
  }
  else {
    FUN_1400a3390(param_2 + 4,iVar1,0);
    memcpy(*(void **)(param_2 + 4),_Src,(longlong)iVar1 << 2);
  }
  return param_2;
}



// FUNCTION 14756934c FUN_14756934c body=114 status=ok
// SIG undefined FUN_14756934c(void)

void FUN_14756934c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1475693be FUN_1475693be body=419 status=ok
// SIG undefined FUN_1475693be(void)

void FUN_1475693be(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147569562 FUN_147569562 body=200 status=ok
// SIG undefined FUN_147569562(void)

void FUN_147569562(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = *(int *)(param_1 + 1);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    piVar2 = (int *)*param_1;
    iVar5 = 0;
    bVar10 = *piVar2 == *(int *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (piVar2[lVar6] == *(int *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(piVar2 + iVar5,piVar2 + iVar7,(longlong)(iVar9 - iVar7) << 2);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 14756962a FUN_14756962a body=71 status=ok
// SIG undefined FUN_14756962a(void)

undefined8 * FUN_14756962a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a480e78;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147569672 FUN_147569672 body=262 status=ok
// SIG undefined FUN_147569672(void)

void FUN_147569672(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  int local_50;
  undefined1 local_4c;
  longlong local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x1c) == -1) {
    FUN_14756977a(*(longlong *)(param_1 + 8) + 0x40,&local_50);
    *(int *)(param_2 + 0x1c) = local_50;
    iVar2 = local_50;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x40) + 4 + (longlong)iVar2 * 0xc);
  if (lVar4 != 0) {
    piVar3 = (int *)((longlong)*(int *)(*(longlong *)(lVar1 + 0x40) + (longlong)iVar2 * 0xc) * 0x30
                    + *(longlong *)(lVar1 + 0x50));
    piVar5 = piVar3 + lVar4 * 0xc;
    do {
      if ((*piVar3 == *(int *)(param_1 + 0x10)) && ((char)piVar3[1] == *(char *)(param_1 + 0x14)))
      goto LAB_14756973b;
      piVar3 = piVar3 + 0xc;
    } while (piVar3 != piVar5);
  }
  local_4c = *(undefined1 *)(param_1 + 0x14);
  local_50 = *(int *)(param_1 + 0x10);
  FUN_144b1f2a6(local_48,param_1 + 0x18);
  FUN_1475697da(lVar1 + 0x40,*(undefined4 *)(param_2 + 0x1c),&local_50);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_14756973b:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756977a FUN_14756977a body=95 status=ok
// SIG undefined FUN_14756977a(void)

int * FUN_14756977a(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *param_2 = iVar1;
  lVar3 = param_1[3];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147562f14(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(int *)(lVar2 + (longlong)iVar1 * 0xc) = (int)lVar3;
  *(undefined8 *)(lVar2 + 4 + (longlong)iVar1 * 0xc) = 0x100000000;
  FUN_14756985a(param_1 + 2,(int)param_1[3] + 1);
  return param_2;
}



// FUNCTION 1475697da FUN_1475697da body=127 status=ok
// SIG undefined FUN_1475697da(void)

void FUN_1475697da(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = (int *)(*param_1 + (longlong)(int)param_2 * 0xc);
  iVar2 = piVar1[1];
  if (piVar1[2] <= iVar2) {
    iVar2 = piVar1[2] * 2;
    iVar4 = 2;
    if (2 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_1475699ea(param_1,param_2,iVar4);
    iVar2 = piVar1[1];
  }
  puVar3 = (undefined4 *)(((longlong)iVar2 + (longlong)*piVar1) * 0x30 + param_1[2]);
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_3 + 1);
  *puVar3 = *param_3;
  FUN_1456c55fa(puVar3 + 2,param_3 + 2);
  piVar1[1] = piVar1[1] + 1;
  return;
}



// FUNCTION 14756985a FUN_14756985a body=122 status=ok
// SIG undefined FUN_14756985a(void)

void FUN_14756985a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147562e80(param_1,iVar1);
    }
    FUN_145bcd498((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1475698d6(param_1,param_2,iVar1 - param_2);
    FUN_14756993c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1475698d6 FUN_1475698d6 body=101 status=ok
// SIG undefined FUN_1475698d6(void)

void FUN_1475698d6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x30 + *param_1);
  FUN_140a32090(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14756993c FUN_14756993c body=62 status=ok
// SIG undefined FUN_14756993c(void)

void FUN_14756993c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14756997a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14756997a FUN_14756997a body=112 status=ok
// SIG undefined FUN_14756997a(void)

ulonglong FUN_14756997a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1475699b4;
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
LAB_1475699b4:
  return param_2 & 0xffffffff;
}



// FUNCTION 1475699ea FUN_1475699ea body=121 status=ok
// SIG undefined FUN_1475699ea(void)

void FUN_1475699ea(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2;
  *(int *)(lVar2 + 8 + lVar3 * 0xc) = param_3;
  iVar1 = (int)param_1[3];
  FUN_14756985a(param_1 + 2,param_3 + iVar1);
  _Src = (void *)((longlong)*(int *)(lVar2 + lVar3 * 0xc) * 0x30 + param_1[2]);
  memmove((void *)((longlong)iVar1 * 0x30 + param_1[2]),_Src,
          (longlong)*(int *)(lVar2 + 4 + lVar3 * 0xc) * 0x30);
  FUN_145bcd498(_Src,*(undefined4 *)(lVar2 + 4 + lVar3 * 0xc));
  *(int *)(lVar2 + lVar3 * 0xc) = iVar1;
  return;
}



// FUNCTION 147569a63 FUN_147569a63 body=680 status=ok
// SIG undefined FUN_147569a63(void)

void FUN_147569a63(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar9 = &local_348;
    do {
      puVar3 = (undefined8 *)*plVar9;
      puVar10 = (undefined8 *)plVar9[1];
      iVar12 = (int)plVar9[2];
      iVar5 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar3) >> 3);
      puVar8 = puVar3;
      puVar13 = puVar10;
      if (iVar12 != 0) {
LAB_147569b28:
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = iVar5 + 1U >> 1;
          uVar1 = puVar3[uVar6];
          puVar3[uVar6] = *puVar3;
          *puVar3 = uVar1;
          puVar7 = puVar10 + 1;
          puVar4 = puVar3;
          do {
            puVar11 = puVar4 + 1;
            puVar2 = puVar4 + 1;
            do {
              puVar4 = puVar2;
              puVar14 = puVar11;
              if (puVar10 < puVar4) break;
              iVar5 = (int)*puVar3;
              iVar15 = (int)*puVar4;
              if (iVar5 < iVar15) break;
              puVar11 = puVar14 + 1;
              puVar2 = puVar4 + 1;
            } while ((iVar5 != iVar15) ||
                    ((float)((ulonglong)*puVar4 >> 0x20) <= (float)((ulonglong)*puVar3 >> 0x20)));
            puVar11 = puVar7 + -2;
            puVar2 = puVar7 + -1;
            do {
              puVar7 = puVar2;
              puVar16 = puVar11;
              if (puVar7 <= puVar3) break;
              iVar15 = (int)*puVar7;
              iVar5 = (int)*puVar3;
              if (iVar15 < iVar5) break;
              puVar11 = puVar16 + -1;
              puVar2 = puVar7 + -1;
            } while ((iVar15 != iVar5) ||
                    ((float)((ulonglong)*puVar3 >> 0x20) <= (float)((ulonglong)*puVar7 >> 0x20)));
            if (puVar7 < puVar4) goto LAB_147569be6;
            uVar1 = *puVar4;
            *puVar4 = *puVar7;
            *puVar7 = uVar1;
          } while( true );
        }
        for (; puVar13 = puVar3, puVar8 = puVar3, puVar3 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar8 = puVar8 + 1, puVar8 <= puVar10) {
            iVar5 = (int)*puVar13;
            iVar12 = (int)*puVar8;
            if ((iVar5 < iVar12) ||
               ((float)((ulonglong)*puVar13 >> 0x20) < (float)((ulonglong)*puVar8 >> 0x20) &&
                iVar5 == iVar12)) {
              puVar13 = puVar8;
            }
          }
          uVar1 = *puVar13;
          *puVar13 = *puVar10;
          *puVar10 = uVar1;
        }
        goto LAB_147569cea;
      }
LAB_147569cff:
      FUN_147569d0c(puVar3);
LAB_147569cea:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147569be6:
  uVar1 = *puVar3;
  *puVar3 = *puVar7;
  *puVar7 = uVar1;
  iVar12 = iVar12 + -1;
  puVar11 = puVar7 + -1;
  if ((longlong)puVar16 - (longlong)puVar8 < (longlong)puVar13 - (longlong)puVar14) {
    if (puVar4 < puVar10) {
      *plVar9 = (longlong)puVar4;
      plVar9[1] = (longlong)puVar10;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    puVar14 = puVar3;
    if (puVar7 <= puVar3 + 1) goto LAB_147569cea;
  }
  else {
    if (puVar3 + 1 < puVar7) {
      *plVar9 = (longlong)puVar3;
      plVar9[1] = (longlong)puVar11;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    puVar3 = puVar4;
    puVar11 = puVar10;
    puVar16 = puVar10;
    if (puVar10 <= puVar4) goto LAB_147569cea;
  }
  iVar5 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar14) >> 3);
  puVar8 = puVar14;
  puVar10 = puVar11;
  puVar13 = puVar16;
  if (iVar12 == 0) goto LAB_147569cff;
  goto LAB_147569b28;
}



// FUNCTION 147569d0c FUN_147569d0c body=472 status=ok
// SIG undefined FUN_147569d0c(void)

void FUN_147569d0c(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar3;
joined_r0x000147569d31:
    do {
      iVar11 = iVar3 * 2 + 1;
      if (iVar11 < (int)param_2) {
        iVar8 = iVar3 * 2 + 2;
        if (iVar8 < (int)param_2) {
          lVar10 = (longlong)iVar8;
          iVar6 = (int)param_1[lVar10];
          iVar7 = (int)param_1[iVar11];
          if ((iVar6 < iVar7) ||
             ((float)((ulonglong)param_1[lVar10] >> 0x20) <
              (float)((ulonglong)param_1[iVar11] >> 0x20) && iVar6 == iVar7)) goto LAB_147569d91;
        }
        else {
LAB_147569d91:
          lVar10 = (longlong)iVar11;
          iVar8 = iVar11;
        }
        uVar1 = param_1[lVar10];
        uVar2 = param_1[iVar3];
        if (((int)uVar2 < (int)uVar1) ||
           (((int)uVar2 == (int)uVar1 &&
            ((float)((ulonglong)uVar2 >> 0x20) < (float)((ulonglong)uVar1 >> 0x20))))) {
          param_1[iVar3] = uVar1;
          param_1[lVar10] = uVar2;
          iVar3 = iVar8;
          goto joined_r0x000147569d31;
        }
      }
      bVar12 = iVar9 != 0;
      iVar3 = iVar9 + -1;
      iVar9 = iVar3;
    } while (bVar12);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar9 = 0;
          iVar3 = 1;
          iVar11 = 0;
          do {
            lVar10 = (longlong)(iVar9 + 2);
            if (lVar10 < (longlong)uVar5) {
              iVar6 = (int)param_1[lVar10];
              iVar8 = (int)param_1[iVar3];
              if ((iVar6 < iVar8) ||
                 (iVar7 = iVar9 + 2,
                 (float)((ulonglong)param_1[lVar10] >> 0x20) <
                 (float)((ulonglong)param_1[iVar3] >> 0x20) && iVar6 == iVar8)) goto LAB_147569e6a;
            }
            else {
LAB_147569e6a:
              lVar10 = (longlong)iVar3;
              iVar7 = iVar3;
            }
            uVar1 = param_1[lVar10];
            uVar2 = param_1[iVar11];
            if (((int)uVar1 <= (int)uVar2) &&
               (((int)uVar2 != (int)uVar1 ||
                ((float)((ulonglong)uVar1 >> 0x20) <= (float)((ulonglong)uVar2 >> 0x20))))) break;
            param_1[iVar11] = uVar1;
            param_1[lVar10] = uVar2;
            iVar9 = iVar7 * 2;
            iVar3 = iVar7 * 2 + 1;
            iVar11 = iVar7;
          } while ((longlong)iVar3 < (longlong)uVar5);
          uVar1 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar1;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147569ee4 FUN_147569ee4 body=76 status=ok
// SIG undefined FUN_147569ee4(void)

void FUN_147569ee4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1432e0f1a(param_1,0);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 147569f30 FUN_147569f30 body=98 status=ok
// SIG undefined FUN_147569f30(void)

void FUN_147569f30(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1447bda9c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147569f92 FUN_147569f92 body=62 status=ok
// SIG undefined FUN_147569f92(void)

void FUN_147569f92(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147569fd0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147569fd0 FUN_147569fd0 body=112 status=ok
// SIG undefined FUN_147569fd0(void)

ulonglong FUN_147569fd0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14756a00a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_14756a00a:
  return param_2 & 0xffffffff;
}



// FUNCTION 14756a040 FUN_14756a040 body=86 status=ok
// SIG undefined FUN_14756a040(void)

void FUN_14756a040(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14756a096 FUN_14756a096 body=132 status=ok
// SIG undefined FUN_14756a096(void)

void FUN_14756a096(longlong param_1,int param_2)

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



// FUNCTION 14756a11c FUN_14756a11c body=79 status=ok
// SIG undefined FUN_14756a11c(void)

undefined8 * FUN_14756a11c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a480810;
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xe) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14756a16c FUN_14756a16c body=196 status=ok
// SIG undefined FUN_14756a16c(void)

void FUN_14756a16c(longlong *param_1,uint *param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar5 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(uint *)(lVar4 + (ulonglong)uVar1 * 8) < uVar5) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(uint *)(lVar4 + (ulonglong)uVar7 * 8) <= uVar5)) {
      puVar9 = (uint *)(lVar4 + (ulonglong)uVar7 * 8);
      goto LAB_14756a205;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14756a230(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  puVar9 = (uint *)(uVar8 * 8 + *param_1);
  uVar5 = *param_2;
LAB_14756a205:
  *puVar9 = uVar5;
  *(undefined2 *)(puVar9 + 1) = *param_3;
  return;
}



// FUNCTION 14756a230 FUN_14756a230 body=132 status=ok
// SIG undefined FUN_14756a230(void)

void FUN_14756a230(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14756a2b6 FUN_14756a2b6 body=219 status=ok
// SIG undefined FUN_14756a2b6(void)

undefined8 *
FUN_14756a2b6(undefined8 *param_1,longlong *param_2,int param_3,ulonglong param_4,int param_5)

{
  ulonglong uVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  if (param_2 != (longlong *)0x0) {
    local_40 = param_2;
    local_38 = param_4;
    local_30 = param_3;
    if (param_3 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    FUN_1475493a6(param_1,&local_40);
    if (local_40 != (longlong *)0x0) {
      uVar1 = local_40[2];
      if ((ulonglong)local_40[2] < local_38) {
        uVar1 = local_38;
      }
      local_40[2] = uVar1;
      LOCK();
      *(int *)(local_40 + 3) = (int)local_40[3] + -1;
      UNLOCK();
      if (local_30 == 1) {
        ReleaseSRWLockExclusive((PSRWLOCK)(local_40 + 1));
      }
    }
    param_1[3] = (longlong)param_5 * 8 + *param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756a392 FUN_14756a392 body=62 status=ok
// SIG undefined FUN_14756a392(void)

void FUN_14756a392(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14756a3d0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14756a3d0 FUN_14756a3d0 body=93 status=ok
// SIG undefined FUN_14756a3d0(void)

ulonglong FUN_14756a3d0(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14756a42e FUN_14756a42e body=120 status=ok
// SIG undefined FUN_14756a42e(void)

longlong FUN_14756a42e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14756a4a8();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_14756a502(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x38 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 14756a4a8 FUN_14756a4a8 body=89 status=ok
// SIG undefined FUN_14756a4a8(void)

longlong FUN_14756a4a8(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x38;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x30);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14756a502 FUN_14756a502 body=292 status=ok
// SIG undefined FUN_14756a502(void)

undefined4 * FUN_14756a502(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14756a628(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[4] = 0;
  local_40[5] = 0x100000000;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  cVar1 = FUN_14756a70a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14756a876(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756a628 FUN_14756a628 body=226 status=ok
// SIG undefined FUN_14756a628(void)

int * FUN_14756a628(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14756a70a FUN_14756a70a body=179 status=ok
// SIG undefined FUN_14756a70a(void)

undefined8 FUN_14756a70a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      lVar2 = *param_1;
      do {
        lVar16 = (longlong)iVar15 * 0x38;
        piVar1 = (int *)(lVar2 + lVar16);
        if ((*(int *)(lVar2 + lVar16) == *param_3) && (*(int *)(lVar2 + 4 + lVar16) == param_3[1]))
        {
          if (*(longlong *)(piVar1 + 8) != 0) {
            FUN_1400020a8();
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          iVar7 = param_3[4];
          iVar8 = param_3[5];
          iVar9 = param_3[6];
          iVar10 = param_3[7];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar7;
          piVar1[5] = iVar8;
          piVar1[6] = iVar9;
          piVar1[7] = iVar10;
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_14756a7be(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xc];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 14756a7be FUN_14756a7be body=116 status=ok
// SIG undefined FUN_14756a7be(void)

void FUN_14756a7be(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14756a832 FUN_14756a832 body=68 status=ok
// SIG undefined FUN_14756a832(void)

void FUN_14756a832(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14756a876(param_1);
  return;
}



// FUNCTION 14756a876 FUN_14756a876 body=446 status=ok
// SIG undefined FUN_14756a876(void)

void FUN_14756a876(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
        lVar10 = (longlong)iVar5 * 0x38;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14756aa36 FUN_14756aa36 body=127 status=ok
// SIG undefined FUN_14756aa36(void)

void FUN_14756aa36(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x38;
        if ((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1])) {
          FUN_14756aab6(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x30);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14756aab6 FUN_14756aab6 body=87 status=ok
// SIG undefined FUN_14756aab6(void)

void FUN_14756aab6(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_14756ab0e();
  return;
}



// FUNCTION 14756ab0e FUN_14756ab0e body=52 status=ok
// SIG undefined FUN_14756ab0e(void)

void FUN_14756ab0e(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x20 + (longlong)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_14756a7be(param_1,param_2);
  return;
}



// FUNCTION 14756ab42 FUN_14756ab42 body=63 status=ok
// SIG undefined FUN_14756ab42(void)

void FUN_14756ab42(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_147564404(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14756a876(param_1);
    return;
  }
  FUN_14756ab82(param_1);
  FUN_147564404(param_1);
  return;
}



// FUNCTION 14756ab82 FUN_14756ab82 body=322 status=ok
// SIG undefined FUN_14756ab82(void)

void FUN_14756ab82(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756acc6 FUN_14756acc6 body=69 status=ok
// SIG undefined FUN_14756acc6(void)

void FUN_14756acc6(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140275fb8(param_1);
    return;
  }
  return;
}



// FUNCTION 14756ad0c FUN_14756ad0c body=63 status=ok
// SIG undefined FUN_14756ad0c(void)

void FUN_14756ad0c(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14095755a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140275fb8(param_1);
    return;
  }
  FUN_14756ad4c(param_1);
  FUN_14095755a(param_1);
  return;
}



// FUNCTION 14756ad4c FUN_14756ad4c body=322 status=ok
// SIG undefined FUN_14756ad4c(void)

void FUN_14756ad4c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756ae90 FUN_14756ae90 body=133 status=ok
// SIG undefined FUN_14756ae90(void)

longlong FUN_14756ae90(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14756af16();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x40;
    if (lVar3 + lVar2 != 0) goto LAB_14756aec9;
  }
  local_30 = param_3;
  FUN_14756af88(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 6;
LAB_14756aec9:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756af16 FUN_14756af16 body=114 status=ok
// SIG undefined FUN_14756af16(void)

int FUN_14756af16(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x40;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) &&
           (*(int *)(lVar2 + lVar4 + 0xc) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x38 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14756af88 FUN_14756af88 body=292 status=ok
// SIG undefined FUN_14756af88(void)

undefined4 * FUN_14756af88(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14756b0ae(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  *(undefined8 *)(local_40 + 10) = 0;
  *(undefined8 *)(local_40 + 0xc) = 0x100000000;
  local_40[0xe] = 0xffffffff;
  cVar5 = FUN_14756b194(param_1,param_3,local_40,local_48);
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[0xf] = param_3;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14756b2d0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756b0ae FUN_14756b0ae body=229 status=ok
// SIG undefined FUN_14756b0ae(void)

int * FUN_14756b0ae(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14756b194 FUN_14756b194 body=133 status=ok
// SIG undefined FUN_14756b194(void)

undefined8 FUN_14756b194(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
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
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_14756af16(), iVar14 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x40);
    if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar14 * 0x40) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14756b21a(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 14756b21a FUN_14756b21a body=114 status=ok
// SIG undefined FUN_14756b21a(void)

void FUN_14756b21a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14756b28c FUN_14756b28c body=68 status=ok
// SIG undefined FUN_14756b28c(void)

void FUN_14756b28c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14756b2d0(param_1);
  return;
}



// FUNCTION 14756b2d0 FUN_14756b2d0 body=464 status=ok
// SIG undefined FUN_14756b2d0(void)

void FUN_14756b2d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
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
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar4 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        lVar10 = (longlong)iVar4 * 0x40;
        uVar5 = FUN_144a78877(*(undefined4 *)(lVar2 + lVar10),*(undefined4 *)(lVar2 + 4 + lVar10));
        uVar8 = (longlong)
                (int)(*(ushort *)(lVar2 + 8 + lVar10) ^ uVar5 ^ *(uint *)(lVar2 + 0xc + lVar10)) &
                (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar2 + 0x3c + lVar10) = iVar7;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x38 + lVar10) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar4 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756b4a2 FUN_14756b4a2 body=157 status=ok
// SIG undefined FUN_14756b4a2(void)

void FUN_14756b4a2(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = FUN_144a78877(*param_2,param_2[1]);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)(param_2[2] & 0xffffU ^ uVar4 ^ param_2[3]) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar6 = (longlong)iVar2 * 0x40;
        lVar1 = lVar3 + lVar6;
        if ((((*(int *)(lVar3 + lVar6) == *param_2) && (*(int *)(lVar3 + 4 + lVar6) == param_2[1]))
            && (*(uint *)(lVar1 + 8) == param_2[2])) && (*(uint *)(lVar1 + 0xc) == param_2[3])) {
          FUN_14756b540(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x38);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14756b540 FUN_14756b540 body=90 status=ok
// SIG undefined FUN_14756b540(void)

void FUN_14756b540(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x38 + lVar5 * 0x40);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x40 + 0x38);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_14756b59a();
  return;
}



// FUNCTION 14756b59a FUN_14756b59a body=52 status=ok
// SIG undefined FUN_14756b59a(void)

void FUN_14756b59a(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x28 + (longlong)param_2 * 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14756b21a(param_1,param_2);
  return;
}



// FUNCTION 14756b5ce FUN_14756b5ce body=63 status=ok
// SIG undefined FUN_14756b5ce(void)

void FUN_14756b5ce(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_147564572(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14756b2d0(param_1);
    return;
  }
  FUN_14756b60e(param_1);
  FUN_147564572(param_1);
  return;
}



// FUNCTION 14756b60e FUN_14756b60e body=322 status=ok
// SIG undefined FUN_14756b60e(void)

void FUN_14756b60e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756b752 FUN_14756b752 body=69 status=ok
// SIG undefined FUN_14756b752(void)

void FUN_14756b752(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14052d6c2(param_1);
    return;
  }
  return;
}



// FUNCTION 14756b798 FUN_14756b798 body=63 status=ok
// SIG undefined FUN_14756b798(void)

void FUN_14756b798(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14095770c(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14052d6c2(param_1);
    return;
  }
  FUN_14756b7d8(param_1);
  FUN_14095770c(param_1);
  return;
}



// FUNCTION 14756b7d8 FUN_14756b7d8 body=322 status=ok
// SIG undefined FUN_14756b7d8(void)

void FUN_14756b7d8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756b91c FUN_14756b91c body=68 status=ok
// SIG undefined FUN_14756b91c(void)

void FUN_14756b91c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1456eb756(param_1);
  return;
}



// FUNCTION 14756b960 FUN_14756b960 body=63 status=ok
// SIG undefined FUN_14756b960(void)

void FUN_14756b960(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145759ee2(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1456eb756(param_1);
    return;
  }
  FUN_14756b9a0(param_1);
  FUN_145759ee2(param_1);
  return;
}



// FUNCTION 14756b9a0 FUN_14756b9a0 body=322 status=ok
// SIG undefined FUN_14756b9a0(void)

void FUN_14756b9a0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14756bae4 FUN_14756bae4 body=38 status=ok
// SIG undefined FUN_14756bae4(void)

undefined8 FUN_14756bae4(undefined8 param_1,int param_2)

{
  FUN_14756bb32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14756bb0a FUN_14756bb0a body=38 status=ok
// SIG undefined FUN_14756bb0a(void)

undefined8 FUN_14756bb0a(undefined8 param_1,int param_2)

{
  FUN_14756bb32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14756bb32 FUN_14756bb32 body=130 status=ok
// SIG undefined FUN_14756bb32(void)

void FUN_14756bb32(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a480ef0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140d0bf3e(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140d0bf06(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014756bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14756bbb4 FUN_14756bbb4 body=226 status=ok
// SIG undefined FUN_14756bbb4(void)

int * FUN_14756bbb4(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14756bc96 FUN_14756bc96 body=85 status=ok
// SIG undefined FUN_14756bc96(void)

undefined8 * FUN_14756bc96(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc | 2;
  FUN_14756bcec();
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    bVar1 = *(byte *)(param_2 + 4);
    *(byte *)(param_2 + 4) = bVar1 & 0xfe;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd | bVar1 & 2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  return param_1;
}



// FUNCTION 14756bcec FUN_14756bcec body=60 status=ok
// SIG undefined FUN_14756bcec(void)

void FUN_14756bcec(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 4) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14756bd38 FUN_14756bd38 body=93 status=ok
// SIG undefined FUN_14756bd38(void)

void FUN_14756bd38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a481140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a480f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14756bd96 FUN_14756bd96 body=93 status=ok
// SIG undefined FUN_14756bd96(void)

void FUN_14756bd96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a481140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a480f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14756bdf4 FUN_14756bdf4 body=126 status=ok
// SIG undefined FUN_14756bdf4(void)

void FUN_14756bdf4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a481140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a480f10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014756be63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14756be82 FUN_14756be82 body=68 status=ok
// SIG undefined FUN_14756be82(void)

void FUN_14756be82(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14576da26(param_1);
  return;
}



// FUNCTION 14756bec6 FUN_14756bec6 body=113 status=ok
// SIG undefined FUN_14756bec6(void)

void FUN_14756bec6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_140956ac7(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14756bf38 FUN_14756bf38 body=62 status=ok
// SIG undefined FUN_14756bf38(void)

void FUN_14756bf38(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14756bf76(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14756bf76 FUN_14756bf76 body=93 status=ok
// SIG undefined FUN_14756bf76(void)

ulonglong FUN_14756bf76(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14756bfd4 FUN_14756bfd4 body=38 status=ok
// SIG undefined FUN_14756bfd4(void)

undefined8 FUN_14756bfd4(undefined8 param_1,int param_2)

{
  FUN_140d0bb26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14756c006 FUN_14756c006 body=85 status=ok
// SIG undefined FUN_14756c006(void)

void FUN_14756c006(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_14756c086();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756c060 FUN_14756c060 body=38 status=ok
// SIG undefined FUN_14756c060(void)

undefined8 FUN_14756c060(undefined8 param_1,int param_2)

{
  FUN_140d0bb26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14756c086 FUN_14756c086 body=133 status=ok
// SIG undefined FUN_14756c086(void)

void FUN_14756c086(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_140cc16f8(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_1402767de(param_1 + 0x18,local_24);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756c10c FUN_14756c10c body=100 status=ok
// SIG undefined FUN_14756c10c(void)

void FUN_14756c10c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_140275104(lVar1 + (ulonglong)param_2 * 0x30 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x30);
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar2) * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_14756c170(param_1);
  return;
}



// FUNCTION 14756c170 FUN_14756c170 body=62 status=ok
// SIG undefined FUN_14756c170(void)

void FUN_14756c170(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14756c1ae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14756c1ae FUN_14756c1ae body=112 status=ok
// SIG undefined FUN_14756c1ae(void)

ulonglong FUN_14756c1ae(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14756c1e8;
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
LAB_14756c1e8:
  return param_2 & 0xffffffff;
}



// FUNCTION 14756c21e FUN_14756c21e body=242 status=ok
// SIG undefined FUN_14756c21e(void)

void FUN_14756c21e(longlong *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  if ((int)uVar2 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar6;
      if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x30) < *param_2) {
        uVar6 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar6 < (int)uVar2) && (*(int *)(lVar8 + (ulonglong)uVar6 * 0x30) <= *param_2)) {
      piVar7 = (int *)(lVar8 + (ulonglong)uVar6 * 0x30);
      FUN_140d0be55(piVar7,1);
      goto LAB_14756c2dc;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14756c310(param_1,uVar2);
    lVar8 = *param_1;
  }
  lVar4 = (ulonglong)uVar6 * 0x30;
  memmove((void *)(lVar8 + lVar4 + 0x30),(void *)(lVar8 + lVar4),(ulonglong)(uVar2 - uVar6) * 0x30);
  piVar7 = (int *)(lVar4 + *param_1);
LAB_14756c2dc:
  *piVar7 = *param_2;
  FUN_140cc163e(piVar7 + 2,param_3);
  return;
}



// FUNCTION 14756c310 FUN_14756c310 body=147 status=ok
// SIG undefined FUN_14756c310(void)

void FUN_14756c310(longlong param_1,int param_2)

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



// FUNCTION 14756c3a4 FUN_14756c3a4 body=476 status=ok
// SIG undefined FUN_14756c3a4(void)

longlong * FUN_14756c3a4(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14756c582();
  if (*param_2 != 0) goto LAB_14756c3d2;
  plVar3 = (longlong *)FUN_14001cc68(0xd8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a481040;
  plVar4 = plVar3 + 2;
  memset(plVar3 + 3,0,0xc0);
  *(undefined8 *)((longlong)plVar3 + 0x54) = 0xffffffff00000080;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  *(undefined8 *)((longlong)plVar3 + 0xa4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)plVar3 + 0xac) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xb4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xbc) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xc4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xcc) = 0xffffffff00000000;
  plVar3[2] = (longlong)&PTR_FUN_14a481060;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_14756d1d8(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_14756c546:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014756c536:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x00014756c536;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14756c546;
    }
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_14756c636(param_1,param_3,&local_50);
LAB_14756c3d2:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756c582 FUN_14756c582 body=179 status=ok
// SIG undefined FUN_14756c582(void)

undefined8 * FUN_14756c582(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_14756c5dc;
    }
  }
  uVar6 = 0;
LAB_14756c5dc:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14756c636 FUN_14756c636 body=184 status=ok
// SIG undefined FUN_14756c636(void)

void FUN_14756c636(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756c6f0 FUN_14756c6f0 body=9 status=ok
// SIG undefined FUN_14756c6f0(void)

void FUN_14756c6f0(longlong param_1)

{
  FUN_14756cf46(param_1 + 0x10);
  return;
}



// FUNCTION 14756c6fa FUN_14756c6fa body=29 status=ok
// SIG undefined FUN_14756c6fa(void)

undefined8 FUN_14756c6fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14756c718 FUN_14756c718 body=38 status=ok
// SIG undefined FUN_14756c718(void)

undefined8 FUN_14756c718(undefined8 param_1,int param_2)

{
  FUN_14756cf46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14756c74a FUN_14756c74a body=74 status=ok
// SIG undefined FUN_14756c74a(void)

void FUN_14756c74a(longlong param_1,int param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  FUN_14756cfca();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756c796 FUN_14756c796 body=1103 status=ok
// SIG undefined FUN_14756c796(void)

ulonglong FUN_14756c796(longlong param_1,int param_2,char param_3,char param_4,undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  longlong ***ppplVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong ****pppplVar9;
  ulonglong uVar10;
  ulonglong unaff_RBP;
  undefined7 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong ***local_78 [4];
  byte local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_14756c8e2;
  }
  uVar11 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      local_80 = *puVar15;
      FUN_14756bc96(local_78,puVar15 + 1);
      local_50 = *(byte *)(puVar15 + 6);
      FUN_14621f65a(param_1 + 0x18,&local_80);
      FUN_14756bcec(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38 + 8);
      FUN_14756d052(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar10 = 0;
      if (0 < (int)uVar3) {
        uVar12 = (ulonglong)uVar3;
        uVar13 = uVar3;
        do {
          uVar12 = uVar12 >> 1;
          uVar14 = (uint)uVar12 + (int)uVar10;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 0x30) < param_2) {
            uVar10 = (ulonglong)(uVar14 + (uVar13 & 1));
          }
          bVar4 = 1 < uVar13;
          uVar13 = (uint)uVar12;
        } while (bVar4);
      }
      if (((int)uVar10 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar10 * 0x30) <= param_2)) {
        FUN_14756d0c6(param_1 + 0xa0);
      }
      if ((local_50 & 1) != 0) {
        pppplVar9 = local_78;
        if ((local_58 & 2) == 0) {
          pppplVar9 = (longlong ****)local_78[0];
        }
        (*(code *)(*pppplVar9)[1])(pppplVar9,param_5);
      }
      if ((local_58 & 1) != 0) {
        pppplVar9 = local_78;
        if ((local_58 & 2) == 0) {
          pppplVar9 = (longlong ****)local_78[0];
        }
        local_58 = local_58 & 0xfe;
        ppplVar6 = *pppplVar9;
LAB_14756cac1:
        (*(code *)*ppplVar6)(pppplVar9,0);
        if ((local_58 & 2) == 0) {
          FUN_1400020a8(local_78[0]);
        }
      }
LAB_14756cad6:
      unaff_RBP = 0;
      goto LAB_14756c8e2;
    }
    unaff_RBP = CONCAT71(uVar11,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38) & 1) == 0)
    goto LAB_14756c8e2;
    lVar7 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38;
LAB_14756c81b:
    if ((*(byte *)(lVar7 + 0x28) & 2) == 0) {
      plVar8 = *(longlong **)(lVar7 + 8);
    }
    else {
      plVar8 = (longlong *)(lVar7 + 8);
    }
    lVar7 = *plVar8;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar7 = *(longlong *)(param_1 + 0xa0);
    uVar14 = 0;
    uVar13 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar13 >> 1) + uVar14;
        if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x30) < param_2) {
          uVar14 = uVar1 + (uVar13 & 1);
        }
        bVar4 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar4);
    }
    if (((int)uVar14 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar14 * 0x30) <= param_2)) {
      lVar7 = lVar7 + (ulonglong)uVar14 * 0x30;
      plVar8 = (longlong *)(lVar7 + 8);
      if (plVar8 != (longlong *)0x0) {
        if ((*(byte *)(lVar7 + 0x28) & 2) == 0) {
          plVar8 = (longlong *)*plVar8;
        }
        (**(code **)(*plVar8 + 8))();
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar10 = 0;
        if (0 < (int)uVar3) {
          uVar12 = (ulonglong)uVar3;
          uVar13 = uVar3;
          do {
            uVar12 = uVar12 >> 1;
            uVar14 = (uint)uVar12 + (int)uVar10;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 0x30) < param_2) {
              uVar10 = (ulonglong)(uVar14 + (uVar13 & 1));
            }
            bVar4 = 1 < uVar13;
            uVar13 = (uint)uVar12;
          } while (bVar4);
        }
        unaff_RBP = CONCAT71(uVar11,1);
        if (((int)uVar10 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar10 * 0x30) <= param_2)) {
          FUN_14756d0c6(param_1 + 0xa0);
        }
        goto LAB_14756c8e2;
      }
    }
    unaff_RBP = CONCAT71(uVar11,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      if ((bVar2 & 1) == 0) goto LAB_14756c8e2;
      lVar7 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38;
      *(byte *)(lVar7 + 0x30) = bVar2 | 2;
      goto LAB_14756c81b;
    }
    if (param_4 != '\0') goto LAB_14756c8e2;
    lVar7 = (longlong)param_2 * 0x38;
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + lVar7);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar7);
    if ((bVar2 & 2) == 0) {
      local_80 = *puVar15;
      FUN_14756bc96(local_78,puVar15 + 1);
      local_50 = *(byte *)(puVar15 + 6);
      FUN_14621f65a(param_1 + 0x18,&local_80);
      FUN_14756bcec(*(longlong *)(param_1 + 0x68) + lVar7 + 8);
      FUN_14756d052(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar10 = 0;
      if (0 < (int)uVar3) {
        uVar12 = (ulonglong)uVar3;
        uVar13 = uVar3;
        do {
          uVar12 = uVar12 >> 1;
          uVar14 = (uint)uVar12 + (int)uVar10;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 0x30) < param_2) {
            uVar10 = (ulonglong)(uVar14 + (uVar13 & 1));
          }
          bVar4 = 1 < uVar13;
          uVar13 = (uint)uVar12;
        } while (bVar4);
      }
      if (((int)uVar10 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar10 * 0x30) <= param_2)) {
        FUN_14756d0c6(param_1 + 0xa0);
      }
      if ((local_50 & 1) != 0) {
        pppplVar9 = local_78;
        if ((local_58 & 2) == 0) {
          pppplVar9 = (longlong ****)local_78[0];
        }
        (*(code *)(*pppplVar9)[1])(pppplVar9,param_5);
      }
      if ((local_58 & 1) != 0) {
        pppplVar9 = local_78;
        if ((local_58 & 2) == 0) {
          pppplVar9 = (longlong ****)local_78[0];
        }
        local_58 = local_58 & 0xfe;
        ppplVar6 = *pppplVar9;
        goto LAB_14756cac1;
      }
      goto LAB_14756cad6;
    }
    if ((bVar2 & 1) == 0) goto LAB_14756c8e2;
    if ((*(byte *)(puVar15 + 5) & 2) == 0) {
      plVar8 = (longlong *)puVar15[1];
    }
    else {
      plVar8 = puVar15 + 1;
    }
    lVar7 = *plVar8;
  }
  (**(code **)(lVar7 + 8))(plVar8,param_5);
LAB_14756c8e2:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14756cbe6 FUN_14756cbe6 body=405 status=ok
// SIG undefined FUN_14756cbe6(void)

undefined8 FUN_14756cbe6(longlong param_1,int param_2,char param_3)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar5 = 3;
    if (cVar4 == '\0') goto LAB_14756cc9d;
  }
  if (param_3 == '\x01') {
    lVar10 = (longlong)param_2 * 0x38;
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar10);
    FUN_14621f65a(param_1 + 0x18);
    FUN_14756bcec(*(longlong *)(param_1 + 0x68) + lVar10 + 8);
    FUN_14756d052(param_1 + 0x68);
    uVar2 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar7 = (ulonglong)uVar2;
      uVar8 = uVar2;
      do {
        uVar7 = uVar7 >> 1;
        uVar9 = (uint)uVar7 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar9 * 0x30) < param_2) {
          uVar6 = (ulonglong)(uVar9 + (uVar8 & 1));
        }
        bVar3 = 1 < uVar8;
        uVar8 = (uint)uVar7;
      } while (bVar3);
    }
    if (((int)uVar6 < (int)uVar2) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x30) <= param_2)) {
      FUN_14756d0c6(param_1 + 0xa0);
    }
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar7 = (ulonglong)uVar2;
      uVar8 = uVar2;
      do {
        uVar7 = uVar7 >> 1;
        uVar9 = (uint)uVar7 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar9 * 0x30) < param_2) {
          uVar6 = (ulonglong)(uVar9 + (uVar8 & 1));
        }
        bVar3 = 1 < uVar8;
        uVar8 = (uint)uVar7;
      } while (bVar3);
    }
    if (((int)uVar6 < (int)uVar2) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x30) <= param_2)) {
      FUN_14756d0c6(param_1 + 0xa0);
    }
    else {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      *pbVar1 = *pbVar1 | 2;
    }
    uVar5 = 1;
  }
LAB_14756cc9d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14756cd7e FUN_14756cd7e body=38 status=ok
// SIG undefined FUN_14756cd7e(void)

undefined8 FUN_14756cd7e(undefined8 param_1,int param_2)

{
  FUN_14756cf46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14756cdb0 FUN_14756cdb0 body=52 status=ok
// SIG undefined FUN_14756cdb0(void)

void FUN_14756cdb0(longlong *param_1)

{
  FUN_14756ce0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14756cde4 FUN_14756cde4 body=42 status=ok
// SIG undefined FUN_14756cde4(void)

void FUN_14756cde4(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_14756bcec(param_1);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14756ce0e FUN_14756ce0e body=310 status=ok
// SIG undefined FUN_14756ce0e(void)

void FUN_14756ce0e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_14756bcec(*local_68 + (longlong)iStack_4c * 0x38 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


