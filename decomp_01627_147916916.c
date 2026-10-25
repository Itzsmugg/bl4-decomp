// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147916916 FUN_147916916 body=54 status=ok
// SIG undefined FUN_147916916(void)

undefined1 FUN_147916916(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145860c80(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147916974 FUN_147916974 body=59 status=ok
// SIG undefined FUN_147916974(void)

undefined8 FUN_147916974(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479169ba FUN_1479169ba body=34 status=ok
// SIG undefined FUN_1479169ba(void)

void FUN_1479169ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145928e3e(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147916a60 FUN_147916a60 body=63 status=ok
// SIG undefined FUN_147916a60(void)

undefined1 FUN_147916a60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147916b8a(param_2,param_3);
    param_3 = param_3 + 0x690;
    param_2 = param_2 + 0x690;
  }
  return 1;
}



// FUNCTION 147916ac8 FUN_147916ac8 body=59 status=ok
// SIG undefined FUN_147916ac8(void)

undefined8 FUN_147916ac8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147916b14 FUN_147916b14 body=40 status=ok
// SIG undefined FUN_147916b14(void)

void FUN_147916b14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x690) == '\x01') {
    FUN_147917206(param_2);
    *(undefined1 *)(param_2 + 0x690) = 0;
  }
  return;
}



// FUNCTION 147916b8a FUN_147916b8a body=860 status=ok
// SIG undefined FUN_147916b8a(void)

longlong FUN_147916b8a(longlong param_1,longlong param_2)

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
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  lVar9 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x38);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x38) = lVar9;
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  lVar9 = *(longlong *)(param_2 + 0x48);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar9;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  FUN_1406fa324(param_1 + 0x58,param_2 + 0x58);
  FUN_1406fa324(param_1 + 0x68,param_2 + 0x68);
  FUN_140e00d48(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x95);
  uVar5 = *(undefined4 *)(param_2 + 0x99);
  uVar6 = *(undefined4 *)(param_2 + 0x9d);
  uVar7 = *(undefined4 *)(param_2 + 0xa1);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x95) = uVar4;
  *(undefined4 *)(param_1 + 0x99) = uVar5;
  *(undefined4 *)(param_1 + 0x9d) = uVar6;
  *(undefined4 *)(param_1 + 0xa1) = uVar7;
  FUN_140de4c12(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  FUN_140de4c12(param_1 + 200,param_2 + 200);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  FUN_140de4cca(param_1 + 0xe8,param_2 + 0xe8);
  FUN_147916ee6(param_1 + 0x120,param_2 + 0x120);
  FUN_147916ee6(param_1 + 0x270,param_2 + 0x270);
  FUN_140de4c6c(param_1 + 0x3c0,param_2 + 0x3c0);
  uVar1 = *(undefined4 *)(param_2 + 0x3d4);
  uVar2 = *(undefined4 *)(param_2 + 0x3d8);
  uVar3 = *(undefined4 *)(param_2 + 0x3dc);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  *(undefined4 *)(param_1 + 0x3d8) = uVar2;
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  FUN_14054c6c4(param_1 + 0x3e0,param_2 + 0x3e0);
  FUN_1405b70a4(param_1 + 0x3f0,param_2 + 0x3f0);
  FUN_140472d9a(param_1 + 0x400,param_2 + 0x400);
  FUN_14785c646(param_1 + 0x410,param_2 + 0x410);
  FUN_1405b70a4(param_1 + 0x420,param_2 + 0x420);
  FUN_140de4b5e(param_1 + 0x430,param_2 + 0x430);
  FUN_140de4b5e(param_1 + 0x440,param_2 + 0x440);
  FUN_140de4b5e(param_1 + 0x450,param_2 + 0x450);
  FUN_140de4b5e(param_1 + 0x460,param_2 + 0x460);
  FUN_140de4b5e(param_1 + 0x470,param_2 + 0x470);
  FUN_140de4b5e(param_1 + 0x480,param_2 + 0x480);
  uVar1 = *(undefined4 *)(param_2 + 0x494);
  uVar2 = *(undefined4 *)(param_2 + 0x498);
  uVar3 = *(undefined4 *)(param_2 + 0x49c);
  uVar4 = *(undefined4 *)(param_2 + 0x4a0);
  uVar5 = *(undefined4 *)(param_2 + 0x4a4);
  uVar6 = *(undefined4 *)(param_2 + 0x4a8);
  uVar7 = *(undefined4 *)(param_2 + 0x4ac);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x494) = uVar1;
  *(undefined4 *)(param_1 + 0x498) = uVar2;
  *(undefined4 *)(param_1 + 0x49c) = uVar3;
  *(undefined4 *)(param_1 + 0x4a0) = uVar4;
  *(undefined4 *)(param_1 + 0x4a4) = uVar5;
  *(undefined4 *)(param_1 + 0x4a8) = uVar6;
  *(undefined4 *)(param_1 + 0x4ac) = uVar7;
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
  FUN_147917080(param_1 + 0x4b8,param_2 + 0x4b8);
  *(undefined1 *)(param_1 + 0x588) = *(undefined1 *)(param_2 + 0x588);
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_2 + 0x590);
  FUN_140de4d94(param_1 + 0x598,param_2 + 0x598);
  *(undefined1 *)(param_1 + 0x628) = *(undefined1 *)(param_2 + 0x628);
  *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)(param_2 + 0x630);
  uVar1 = *(undefined4 *)(param_2 + 0x63c);
  uVar2 = *(undefined4 *)(param_2 + 0x640);
  uVar3 = *(undefined4 *)(param_2 + 0x644);
  *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_2 + 0x638);
  *(undefined4 *)(param_1 + 0x63c) = uVar1;
  *(undefined4 *)(param_1 + 0x640) = uVar2;
  *(undefined4 *)(param_1 + 0x644) = uVar3;
  FUN_144a67f5c(param_1 + 0x648,param_2 + 0x648);
  *(undefined1 *)(param_1 + 0x65c) = *(undefined1 *)(param_2 + 0x65c);
  *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x658);
  lVar9 = *(longlong *)(param_2 + 0x660);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x660);
    }
  }
  *(longlong *)(param_1 + 0x660) = lVar9;
  FUN_144a787a6(param_1 + 0x668,param_2 + 0x668);
  *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_2 + 0x678);
  lVar9 = *(longlong *)(param_2 + 0x680);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x680);
    }
  }
  *(longlong *)(param_1 + 0x680) = lVar9;
  return param_1;
}



// FUNCTION 147916ee6 FUN_147916ee6 body=242 status=ok
// SIG undefined FUN_147916ee6(void)

void * FUN_147916ee6(void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  memcpy(param_1,param_2,0xd0);
  FUN_14054c6c4((longlong)param_1 + 0xd0,(longlong)param_2 + 0xd0);
  FUN_1405b70a4((longlong)param_1 + 0xe0,(longlong)param_2 + 0xe0);
  FUN_140472d9a((longlong)param_1 + 0xf0,(longlong)param_2 + 0xf0);
  FUN_1405b70a4((longlong)param_1 + 0x100,(longlong)param_2 + 0x100);
  if (param_1 != param_2) {
    iVar1 = *(int *)((longlong)param_2 + 0x118);
    _Src = *(void **)((longlong)param_2 + 0x110);
    *(int *)((longlong)param_1 + 0x118) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x11c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
    }
    else {
      FUN_1447563a6((undefined8 *)((longlong)param_1 + 0x110),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)((longlong)param_1 + 0x110),_Src,(longlong)iVar1 << 4);
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x120) = *(undefined1 *)((longlong)param_2 + 0x120);
  *(undefined8 *)((longlong)param_1 + 0x140) = *(undefined8 *)((longlong)param_2 + 0x140);
  *(undefined4 *)((longlong)param_1 + 0x148) = *(undefined4 *)((longlong)param_2 + 0x148);
  return param_1;
}



// FUNCTION 147916fd8 FUN_147916fd8 body=115 status=ok
// SIG undefined FUN_147916fd8(void)

void FUN_147916fd8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791704b FUN_14791704b body=52 status=ok
// SIG undefined FUN_14791704b(void)

void FUN_14791704b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1408b97ec(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 147917080 FUN_147917080 body=123 status=ok
// SIG undefined FUN_147917080(void)

void * FUN_147917080(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0xc0);
    if (*(void **)((longlong)param_2 + 0xc0) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 200);
    *(int *)((longlong)param_1 + 200) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xcc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xcc) = 8;
    }
    else {
      FUN_1479170fc(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0xc0);
        if (*(void **)((longlong)param_1 + 0xc0) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1479170fc FUN_1479170fc body=115 status=ok
// SIG undefined FUN_1479170fc(void)

void FUN_1479170fc(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_147917170(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xcc) = param_3;
  return;
}



// FUNCTION 147917170 FUN_147917170 body=149 status=ok
// SIG undefined FUN_147917170(void)

void FUN_147917170(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147917206 FUN_147917206 body=448 status=ok
// SIG undefined FUN_147917206(void)

void FUN_147917206(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7b61d0;
  param_1[3] = &PTR_FUN_14a7b62d0;
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  FUN_14010165c(param_1[0x78],*(undefined4 *)(param_1 + 0x79));
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_1479173c6(param_1 + 0x4e);
  FUN_1479173c6(param_1 + 0x24);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479173c6 FUN_1479173c6 body=124 status=ok
// SIG undefined FUN_1479173c6(void)

void FUN_1479173c6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147917442 FUN_147917442 body=72 status=ok
// SIG undefined FUN_147917442(void)

void FUN_147917442(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 14791748a FUN_14791748a body=72 status=ok
// SIG undefined FUN_14791748a(void)

void FUN_14791748a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 1479174f0 FUN_1479174f0 body=144 status=ok
// SIG undefined FUN_1479174f0(void)

undefined8 FUN_1479174f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      puVar2 = (undefined8 *)(param_3 + -0x70);
      puVar3 = (undefined8 *)(param_2 + -0x70);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_144756208(param_2 + -0x10,param_3 + -0x10);
      FUN_1479176bc(param_2,param_3);
      FUN_14475634e(param_2 + 0x10,param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_3 + 0x48);
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
      param_3 = param_3 + 0xc0;
      param_2 = param_2 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479175a8 FUN_1479175a8 body=59 status=ok
// SIG undefined FUN_1479175a8(void)

undefined8 FUN_1479175a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479175f4 FUN_1479175f4 body=40 status=ok
// SIG undefined FUN_1479175f4(void)

void FUN_1479175f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_14791766a(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 14791766a FUN_14791766a body=82 status=ok
// SIG undefined FUN_14791766a(void)

void FUN_14791766a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479176bc FUN_1479176bc body=84 status=ok
// SIG undefined FUN_1479176bc(void)

undefined8 * FUN_1479176bc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147917710(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 147917710 FUN_147917710 body=90 status=ok
// SIG undefined FUN_147917710(void)

void FUN_147917710(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147917828 FUN_147917828 body=39 status=ok
// SIG undefined FUN_147917828(void)

undefined8 FUN_147917828(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147917878 FUN_147917878 body=59 status=ok
// SIG undefined FUN_147917878(void)

undefined8 FUN_147917878(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147917952 FUN_147917952 body=47 status=ok
// SIG undefined FUN_147917952(void)

void FUN_147917952(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147917998 FUN_147917998 body=101 status=ok
// SIG undefined FUN_147917998(void)

undefined8 FUN_147917998(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147917ac2(param_2,param_3);
    FUN_140de4bb8(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_3 + 0x30);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147917a26 FUN_147917a26 body=59 status=ok
// SIG undefined FUN_147917a26(void)

undefined8 FUN_147917a26(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147917ac2 FUN_147917ac2 body=89 status=ok
// SIG undefined FUN_147917ac2(void)

undefined8 * FUN_147917ac2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147917b1c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
      }
    }
  }
  return param_1;
}



// FUNCTION 147917b1c FUN_147917b1c body=115 status=ok
// SIG undefined FUN_147917b1c(void)

void FUN_147917b1c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147917b90 FUN_147917b90 body=115 status=ok
// SIG undefined FUN_147917b90(void)

void FUN_147917b90(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147917c04 FUN_147917c04 body=51 status=ok
// SIG undefined FUN_147917c04(void)

void FUN_147917c04(longlong *param_1)

{
  if ((char)param_1[7] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 147917c7e FUN_147917c7e body=59 status=ok
// SIG undefined FUN_147917c7e(void)

undefined8 FUN_147917c7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147917cca FUN_147917cca body=38 status=ok
// SIG undefined FUN_147917cca(void)

void FUN_147917cca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x550) == '\x01') {
    FUN_140e12a16(param_2);
    *(undefined1 *)(param_2 + 0x550) = 0;
  }
  return;
}



// FUNCTION 147917d3e FUN_147917d3e body=55 status=ok
// SIG undefined FUN_147917d3e(void)

void FUN_147917d3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbda0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbda0 = FUN_140002ddd(FUN_1463a562f,uVar1,L"AnimNode_Inertialization");
  }
  return;
}



// FUNCTION 147917d7c FUN_147917d7c body=45 status=ok
// SIG undefined FUN_147917d7c(void)

longlong FUN_147917d7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_140e12a16(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147917e9e FUN_147917e9e body=63 status=ok
// SIG undefined FUN_147917e9e(void)

undefined1 FUN_147917e9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147917fc8(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 147917f06 FUN_147917f06 body=59 status=ok
// SIG undefined FUN_147917f06(void)

undefined8 FUN_147917f06(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147917f52 FUN_147917f52 body=40 status=ok
// SIG undefined FUN_147917f52(void)

void FUN_147917f52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_14791836e(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 147917fc8 FUN_147917fc8 body=245 status=ok
// SIG undefined FUN_147917fc8(void)

longlong FUN_147917fc8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  
  FUN_145860c80();
  FUN_1404306dc(param_1 + 0x60,param_2 + 0x60);
  FUN_1406fa324(param_1 + 0x70,param_2 + 0x70);
  lVar5 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x80);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x80) = lVar5;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  lVar5 = *(longlong *)(param_2 + 0xa0);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0xa0);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0xa0) = lVar5;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  lVar5 = *(longlong *)(param_2 + 0xb0);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0xb0);
    }
  }
  *(longlong *)(param_1 + 0xb0) = lVar5;
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 1479180be FUN_1479180be body=79 status=ok
// SIG undefined FUN_1479180be(void)

void FUN_1479180be(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb8);
  param_2[0x12] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x13) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x15) = 0xbf800000;
  *param_2 = &PTR_FUN_14a7bc3c0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 14791810e FUN_14791810e body=104 status=ok
// SIG undefined FUN_14791810e(void)

void FUN_14791810e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x88);
  param_2[0x12] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x13) = 0xbf800000;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0xbf800000;
  param_2[0x16] = 0;
  *(byte *)(param_2 + 0x17) = *(byte *)(param_2 + 0x17) & 0xfc;
  *param_2 = &PTR_FUN_14a7bc3c0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 14791819a FUN_14791819a body=63 status=ok
// SIG undefined FUN_14791819a(void)

undefined1 FUN_14791819a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1479183aa(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 147918202 FUN_147918202 body=59 status=ok
// SIG undefined FUN_147918202(void)

undefined8 FUN_147918202(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791824e FUN_14791824e body=40 status=ok
// SIG undefined FUN_14791824e(void)

void FUN_14791824e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_14791836e(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1479182c4 FUN_1479182c4 body=38 status=ok
// SIG undefined FUN_1479182c4(void)

undefined8 FUN_1479182c4(undefined8 param_1,int param_2)

{
  FUN_14791836e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479182ea FUN_1479182ea body=55 status=ok
// SIG undefined FUN_1479182ea(void)

void FUN_1479182ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe20 = FUN_140002ddd(FUN_1463a56ee,uVar1,L"AnimNode_LinkedAnimLayer");
  }
  return;
}



// FUNCTION 147918326 FUN_147918326 body=72 status=ok
// SIG undefined FUN_147918326(void)

undefined8 FUN_147918326(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if ((((lVar1 != 0) && (lVar2 = FUN_145a6af0a(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0xc0);
  }
  return 0;
}



// FUNCTION 14791836e FUN_14791836e body=59 status=ok
// SIG undefined FUN_14791836e(void)

void FUN_14791836e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7b7180;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145928e3e(param_1);
  return;
}



// FUNCTION 1479183aa FUN_1479183aa body=85 status=ok
// SIG undefined FUN_1479183aa(void)

longlong FUN_1479183aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147917fc8();
  lVar1 = *(longlong *)(param_2 + 0xc0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0xc0);
    }
  }
  *(longlong *)(param_1 + 0xc0) = lVar1;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  return param_1;
}



// FUNCTION 147918434 FUN_147918434 body=63 status=ok
// SIG undefined FUN_147918434(void)

undefined1 FUN_147918434(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147918682(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 14791849c FUN_14791849c body=59 status=ok
// SIG undefined FUN_14791849c(void)

undefined8 FUN_14791849c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479184e8 FUN_1479184e8 body=40 status=ok
// SIG undefined FUN_1479184e8(void)

void FUN_1479184e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_14791863e(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1479185e0 FUN_1479185e0 body=38 status=ok
// SIG undefined FUN_1479185e0(void)

undefined8 FUN_1479185e0(undefined8 param_1,int param_2)

{
  FUN_14791863e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147918606 FUN_147918606 body=55 status=ok
// SIG undefined FUN_147918606(void)

void FUN_147918606(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe38 = FUN_140002ddd(FUN_1463a574e,uVar1,L"AnimNode_LinkedInputPose");
  }
  return;
}



// FUNCTION 14791863e FUN_14791863e body=67 status=ok
// SIG undefined FUN_14791863e(void)

void FUN_14791863e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7bc640;
  FUN_144a8c3de(param_1 + 0xe);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147918682 FUN_147918682 body=129 status=ok
// SIG undefined FUN_147918682(void)

longlong FUN_147918682(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  FUN_144756208(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  FUN_14475634e(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  FUN_147918704(param_1 + 0x70,param_2 + 0x70);
  uVar8 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar8;
  return param_1;
}



// FUNCTION 147918704 FUN_147918704 body=69 status=ok
// SIG undefined FUN_147918704(void)

longlong FUN_147918704(longlong param_1,longlong param_2)

{
  FUN_144aa2ab0();
  FUN_144ade160(param_1 + 0x10,param_2 + 0x10);
  FUN_140061d9c(param_1 + 0x20,param_2 + 0x20);
  FUN_144b1e478(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 1479187ee FUN_1479187ee body=59 status=ok
// SIG undefined FUN_1479187ee(void)

undefined8 FUN_1479187ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479188f2 FUN_1479188f2 body=59 status=ok
// SIG undefined FUN_1479188f2(void)

undefined8 FUN_1479188f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147918a34 FUN_147918a34 body=59 status=ok
// SIG undefined FUN_147918a34(void)

undefined8 FUN_147918a34(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147918a80 FUN_147918a80 body=38 status=ok
// SIG undefined FUN_147918a80(void)

void FUN_147918a80(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_147918ba2(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147918af4 FUN_147918af4 body=98 status=ok
// SIG undefined FUN_147918af4(void)

void FUN_147918af4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147918b56 FUN_147918b56 body=75 status=ok
// SIG undefined FUN_147918b56(void)

void FUN_147918b56(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = 0;
    do {
      uVar4 = *(undefined8 *)(param_2 + lVar9);
      uVar5 = ((undefined8 *)(param_2 + lVar9))[1];
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar9);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(param_2 + 0x20 + lVar9);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)(param_1 + 0x10 + lVar9);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(param_1 + lVar9) = uVar4;
      ((undefined8 *)(param_1 + lVar9))[1] = uVar5;
      *(undefined8 *)(param_1 + 0x30 + lVar9) = *(undefined8 *)(param_2 + 0x30 + lVar9);
      lVar3 = *(longlong *)(param_2 + 0x38 + lVar9);
      *(longlong *)(param_1 + 0x38 + lVar9) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      lVar9 = lVar9 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147918ba2 FUN_147918ba2 body=56 status=ok
// SIG undefined FUN_147918ba2(void)

void FUN_147918ba2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7b7a30;
  FUN_144728aa2(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147918bda FUN_147918bda body=360 status=ok
// SIG undefined FUN_147918bda(void)

void FUN_147918bda(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x138);
  }
  iVar6 = *(int *)(param_1 + 0x140);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0x108) - *(int *)(param_1 + 300) < iVar3 >> 2) {
    lVar2 = param_1 + 0x110;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x120) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0x120);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0x100);
        if (*(longlong *)(local_78 + 0x100) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0x3c + (longlong)iVar3 * 0x40) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x140));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147918d44 FUN_147918d44 body=314 status=ok
// SIG undefined FUN_147918d44(void)

void FUN_147918d44(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 0x110;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_144a81a4c(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < *(int *)(local_30 + 0x10)) {
    do {
      lVar1 = *(longlong *)(local_60 + 0x100);
      if (*(longlong *)(local_60 + 0x100) == 0) {
        lVar1 = local_60;
      }
      if (*(longlong *)(lVar1 + 0x28 + (longlong)iStack_44 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_144a81a4c(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) < 0) {
    FUN_144729186(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147918e80 FUN_147918e80 body=502 status=ok
// SIG undefined FUN_147918e80(void)

void FUN_147918e80(longlong param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  void *_Dst;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = *(int *)(param_1 + 0x108);
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)(param_1 + 0x10c);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144729186(param_1);
      iVar11 = *(int *)(param_1 + 0x108);
      iVar10 = *(int *)(param_1 + 0x10c);
    }
    *(uint *)(param_1 + 0x108) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1478fa918(param_1);
    }
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar3 = param_1;
    }
    if (iVar11 < (int)param_2) {
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)(param_1 + 300);
      puVar5 = (undefined4 *)(uVar9 * 0x40 + lVar3 + -0x3c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar3 + (longlong)*(int *)(param_1 + 0x128) * 0x40) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)(param_1 + 300) < 1) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x128);
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar2;
        *(int *)(param_1 + 0x128) = iVar8 + -1;
        iVar10 = *(int *)(param_1 + 300) + 1;
        *(int *)(param_1 + 300) = iVar10;
        puVar5 = puVar5 + -0x10;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x120) = uVar7;
      if (param_2 != 0) {
        pvVar6 = (void *)(param_1 + 0x110);
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)(param_1 + 0x124) + 0x1fU >> 5 < uVar12) {
          FUN_144aa70c6(pvVar6,0,uVar12,4);
          *(uint *)(param_1 + 0x124) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = *(void **)(param_1 + 0x118);
        if (*(void **)(param_1 + 0x118) == (void *)0x0) {
          _Dst = pvVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = *(int *)(param_1 + 0x120);
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if (*(void **)(param_1 + 0x118) != (void *)0x0) {
            pvVar6 = *(void **)(param_1 + 0x118);
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)pvVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar2 = FUN_14489e6aa(param_1 + 0x110,uVar7);
      FUN_1470f4066(param_1 + 0x110,uVar2,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 147919076 FUN_147919076 body=500 status=ok
// SIG undefined FUN_147919076(void)

void FUN_147919076(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1446efa72(param_1 + 0x138,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x140);
  uVar3 = local_70;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x130;
    uVar9 = 0;
    FUN_145cfbc50(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x140) + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 0x110;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_144a81a4c(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_68 = local_48;
    local_64 = local_44;
    local_70 = local_50;
    uVar3 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < *(int *)(local_58 + 0x10)) {
      iVar4 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar8 = *(longlong *)(local_88 + 0x100);
        if (*(longlong *)(local_88 + 0x100) == 0) {
          lVar8 = local_88;
        }
        lVar10 = (longlong)iVar4 * 0x40;
        iVar5 = FUN_144a78877(*(undefined4 *)(lVar8 + lVar10),*(undefined4 *)(lVar8 + 4 + lVar10));
        uVar6 = (longlong)iVar5 & (longlong)*(int *)(param_1 + 0x140) - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar8 + 0x3c + lVar10) = iVar5;
        lVar7 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar7 = lVar1;
        }
        *(undefined4 *)(lVar8 + 0x38 + lVar10) =
             *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x140) - 1U & uVar6) * 4);
        lVar8 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar8 = lVar1;
        }
        *(int *)(lVar8 + ((longlong)iVar5 & (longlong)*(int *)(param_1 + 0x140) - 1U) * 4) = iVar4;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_144a81a4c(&local_80);
        iVar4 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x10));
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14791926c FUN_14791926c body=303 status=ok
// SIG undefined FUN_14791926c(void)

undefined4 * FUN_14791926c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14791939c(param_1,local_48);
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  local_40[5] = 0;
  local_40[6] = 0x400000000;
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  local_4c = local_48[0];
  iVar3 = FUN_144a78877(uVar4,uVar4 >> 0x20);
  cVar2 = FUN_1479194c2(param_1,iVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    cVar2 = FUN_147919666(param_1,*(int *)(param_1 + 0x108) - *(int *)(param_1 + 300));
    if (cVar2 == '\0') {
      uVar4 = (longlong)iVar3 & (longlong)*(int *)(param_1 + 0x140) - 1U;
      iVar3 = (int)uVar4;
      *(int *)((longlong)local_40 + 0x3c) = iVar3;
      lVar5 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar5 = param_1 + 0x130;
      }
      *(undefined4 *)(local_40 + 7) =
           *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x140) - 1U & uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar5 = param_1 + 0x130;
      }
      *(undefined4 *)(lVar5 + ((longlong)iVar3 & (longlong)*(int *)(param_1 + 0x140) - 1U) * 4) =
           uVar1;
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791939c FUN_14791939c body=293 status=ok
// SIG undefined FUN_14791939c(void)

int * FUN_14791939c(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 300) == 0) {
    iVar6 = *(int *)(param_1 + 0x108);
    *(int *)(param_1 + 0x108) = iVar6 + 1;
    if (*(int *)(param_1 + 0x10c) == iVar6) {
      FUN_1478fa918(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0x110,1);
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar4 = param_1 + 0x110;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar4 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x128);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar4 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 0x128) = iVar3;
    iVar5 = *(int *)(param_1 + 300) + -1;
    *(int *)(param_1 + 300) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x40) = 0xffffffff;
    }
  }
  lVar4 = param_1 + 0x110;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar4 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar4 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + lVar4;
  return param_2;
}



// FUNCTION 1479194c2 FUN_1479194c2 body=150 status=ok
// SIG undefined FUN_1479194c2(void)

undefined8 FUN_1479194c2(longlong param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  longlong lVar15;
  
  if ((*(int *)(param_1 + 0x108) - *(int *)(param_1 + 300) != 1) &&
     (iVar14 = FUN_147919558(), iVar14 != -1)) {
    lVar15 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar15 = param_1;
    }
    puVar1 = (undefined4 *)(lVar15 + (longlong)iVar14 * 0x40);
    if (*(longlong *)(lVar15 + 0x28 + (longlong)iVar14 * 0x40) != 0) {
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
    FUN_1479195d0(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 147919558 FUN_147919558 body=119 status=ok
// SIG undefined FUN_147919558(void)

int FUN_147919558(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 300)) {
    lVar2 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x138);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar2 = param_1;
      }
      do {
        lVar3 = (longlong)iVar1 * 0x40;
        if ((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1479195d0 FUN_1479195d0 body=150 status=ok
// SIG undefined FUN_1479195d0(void)

void FUN_1479195d0(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 300) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x128) * 0x40) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)(param_1 + 300) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x128);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x40 + 4) = uVar5;
  *(int *)(param_1 + 0x128) = param_2;
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
  lVar4 = param_1 + 0x110;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 147919666 FUN_147919666 body=104 status=ok
// SIG undefined FUN_147919666(void)

undefined8 FUN_147919666(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if (lVar2 == 0) {
    iVar4 = 2;
  }
  if (param_2 < 4) {
    iVar4 = 2;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x140))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x140) = iVar4;
    FUN_147919076(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1479196ce FUN_1479196ce body=110 status=ok
// SIG undefined FUN_1479196ce(void)

void FUN_1479196ce(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_14791973e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14791973e FUN_14791973e body=132 status=ok
// SIG undefined FUN_14791973e(void)

void FUN_14791973e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1479198ce FUN_1479198ce body=59 status=ok
// SIG undefined FUN_1479198ce(void)

undefined8 FUN_1479198ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791996e FUN_14791996e body=29 status=ok
// SIG undefined FUN_14791996e(void)

undefined8 FUN_14791996e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14791998c FUN_14791998c body=55 status=ok
// SIG undefined FUN_14791998c(void)

void FUN_14791998c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbea0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbea0 = FUN_140002ddd(FUN_1463a5943,uVar1,L"AnimNode_SequencePlayerBase");
  }
  return;
}



// FUNCTION 1479199e4 FUN_1479199e4 body=145 status=ok
// SIG undefined FUN_1479199e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1479199e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacc090) {
    FUN_144b3d300(&DAT_14cacc090);
    if (DAT_14cacc090 == -1) {
      _DAT_14cacc064 = 0;
      DAT_14cacc066 = 0;
      _DAT_14cacc068 = 0x3f80000000000000;
      uRam000000014cacc070 = 0x3f80000000000000;
      _DAT_14cacc078 = 0x3f800000;
      uRam000000014cacc07c = 0;
      uRam000000014cacc080 = 0;
      uRam000000014cacc084 = 0x3f800000;
      _DAT_14cacc088 = 0x4120000041200000;
      _Init_thread_footer(&DAT_14cacc090);
    }
  }
  return &DAT_14cacc064;
}



// FUNCTION 147919b26 FUN_147919b26 body=163 status=ok
// SIG undefined FUN_147919b26(void)

undefined1 FUN_147919b26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + -0x20 + lVar12);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + -0x30 + lVar12);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + -0x20 + lVar12);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(undefined8 *)(param_2 + -0x13 + lVar12) = *(undefined8 *)(param_3 + -0x13 + lVar12);
      *(undefined8 *)(param_2 + -8 + lVar12) = *(undefined8 *)(param_3 + -8 + lVar12);
      lVar11 = *(longlong *)(param_3 + lVar12);
      if ((bVar10 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar11 = *(longlong *)(param_3 + lVar12);
          bVar10 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar12) = lVar11;
      lVar12 = lVar12 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147919bf2 FUN_147919bf2 body=59 status=ok
// SIG undefined FUN_147919bf2(void)

undefined8 FUN_147919bf2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147919c92 FUN_147919c92 body=29 status=ok
// SIG undefined FUN_147919c92(void)

undefined8 FUN_147919c92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147919cb0 FUN_147919cb0 body=55 status=ok
// SIG undefined FUN_147919cb0(void)

void FUN_147919cb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbeb8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar1,L"AnimNode_SequencePlayer");
  }
  return;
}



// FUNCTION 147919ce8 FUN_147919ce8 body=37 status=ok
// SIG undefined FUN_147919ce8(void)

void FUN_147919ce8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  FUN_141315e2a(param_2);
  return;
}



// FUNCTION 147919d3a FUN_147919d3a body=239 status=ok
// SIG undefined FUN_147919d3a(void)

undefined1 FUN_147919d3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
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
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0x60;
    bVar15 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -0x50 + lVar17) = *(undefined2 *)(param_3 + -0x50 + lVar17);
      *(undefined8 *)(param_2 + -0x58 + lVar17) = *(undefined8 *)(param_3 + -0x58 + lVar17);
      puVar1 = (undefined4 *)(param_3 + -0x48 + lVar17);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + -0x38 + lVar17);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + -0x48 + lVar17);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar1 = (undefined4 *)(param_2 + -0x38 + lVar17);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      *(undefined8 *)(param_2 + -0x2b + lVar17) = *(undefined8 *)(param_3 + -0x2b + lVar17);
      *(undefined8 *)(param_2 + -0x20 + lVar17) = *(undefined8 *)(param_3 + -0x20 + lVar17);
      *(undefined4 *)(param_2 + -0x10 + lVar17) = *(undefined4 *)(param_3 + -0x10 + lVar17);
      *(undefined8 *)(param_2 + -0x18 + lVar17) = *(undefined8 *)(param_3 + -0x18 + lVar17);
      lVar16 = *(longlong *)(param_3 + -8 + lVar17);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + -8 + lVar17);
          bVar15 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -8 + lVar17) = lVar16;
      uVar12 = ((undefined8 *)(param_3 + lVar17))[1];
      puVar3 = (undefined8 *)(param_3 + 0x10 + lVar17);
      uVar13 = *puVar3;
      uVar14 = puVar3[1];
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar17);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x2a + lVar17);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      *(undefined8 *)(param_2 + lVar17) = *(undefined8 *)(param_3 + lVar17);
      ((undefined8 *)(param_2 + lVar17))[1] = uVar12;
      puVar3 = (undefined8 *)(param_2 + 0x10 + lVar17);
      *puVar3 = uVar13;
      puVar3[1] = uVar14;
      puVar1 = (undefined4 *)(param_2 + 0x20 + lVar17);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      puVar1 = (undefined4 *)(param_2 + 0x2a + lVar17);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      lVar17 = lVar17 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147919e52 FUN_147919e52 body=59 status=ok
// SIG undefined FUN_147919e52(void)

undefined8 FUN_147919e52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147919efe FUN_147919efe body=29 status=ok
// SIG undefined FUN_147919efe(void)

undefined8 FUN_147919efe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147919f4a FUN_147919f4a body=63 status=ok
// SIG undefined FUN_147919f4a(void)

undefined1 FUN_147919f4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14791a0d0(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 147919fb2 FUN_147919fb2 body=59 status=ok
// SIG undefined FUN_147919fb2(void)

undefined8 FUN_147919fb2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147919ffe FUN_147919ffe body=38 status=ok
// SIG undefined FUN_147919ffe(void)

void FUN_147919ffe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_14791a072(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 14791a072 FUN_14791a072 body=93 status=ok
// SIG undefined FUN_14791a072(void)

void FUN_14791a072(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1448d844e(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14791a0d0 FUN_14791a0d0 body=250 status=ok
// SIG undefined FUN_14791a0d0(void)

undefined8 * FUN_14791a0d0(undefined8 *param_1,undefined8 *param_2)

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
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144756208(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 6);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 7);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 7) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_14791a1ca(param_1 + 9,param_2 + 9);
  FUN_140472cde(param_1 + 0xb,param_2 + 0xb);
  FUN_1408b89b0(param_1 + 0xd,param_2 + 0xd);
  lVar9 = param_2[0x11];
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = param_2[0x11];
    }
  }
  bVar8 = DAT_14c950c29;
  param_1[0x11] = lVar9;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  uVar1 = *(undefined4 *)(param_2 + 0x12);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x13);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x9c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar6 = *(undefined4 *)(param_2 + 0x15);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar5;
  *(undefined4 *)(param_1 + 0x15) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar7;
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x13) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  lVar9 = param_2[0x17];
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = param_2[0x17];
    }
  }
  param_1[0x17] = lVar9;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 14791a1ca FUN_14791a1ca body=88 status=ok
// SIG undefined FUN_14791a1ca(void)

undefined8 * FUN_14791a1ca(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14791a222(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14791a222 FUN_14791a222 body=98 status=ok
// SIG undefined FUN_14791a222(void)

void FUN_14791a222(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791a2ee FUN_14791a2ee body=70 status=ok
// SIG undefined FUN_14791a2ee(void)

undefined1 FUN_14791a2ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1408b89b0(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14791a35c FUN_14791a35c body=59 status=ok
// SIG undefined FUN_14791a35c(void)

undefined8 FUN_14791a35c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791a3a2 FUN_14791a3a2 body=38 status=ok
// SIG undefined FUN_14791a3a2(void)

void FUN_14791a3a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14791a45e FUN_14791a45e body=59 status=ok
// SIG undefined FUN_14791a45e(void)

undefined8 FUN_14791a45e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791a4aa FUN_14791a4aa body=38 status=ok
// SIG undefined FUN_14791a4aa(void)

void FUN_14791a4aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_1407c49c8(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 14791a51e FUN_14791a51e body=55 status=ok
// SIG undefined FUN_14791a51e(void)

void FUN_14791a51e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbf18 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbf18 = FUN_140002ddd(FUN_1463a5bfa,uVar1,L"AnimNode_StateMachine");
  }
  return;
}



// FUNCTION 14791a556 FUN_14791a556 body=118 status=ok
// SIG undefined FUN_14791a556(void)

void FUN_14791a556(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    iVar2 = (int)(uVar1 / 200);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,200,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14791a5cc FUN_14791a5cc body=60 status=ok
// SIG undefined FUN_14791a5cc(void)

void FUN_14791a5cc(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14791a608(param_1,param_2);
    param_1 = param_1 + 200;
    param_2 = param_2 + 200;
  }
  return;
}



// FUNCTION 14791a608 FUN_14791a608 body=533 status=ok
// SIG undefined FUN_14791a608(void)

undefined8 * FUN_14791a608(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined8 *_Src;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144756262(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x60);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 5);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar10 = *(undefined4 *)(param_2 + 7);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 7) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar11;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 5) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_14791a222(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  uVar3 = param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_140276ede(param_1 + 0xb,iVar1,0);
    FUN_1448d848f(param_1[0xb],uVar3,iVar1);
  }
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  puVar13 = (undefined8 *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 3;
  }
  else {
    _Src = param_2 + 0xd;
    if (puVar13 != (undefined8 *)0x0) {
      _Src = puVar13;
    }
    FUN_1408b8a18(param_1 + 0xd,iVar1,0);
    puVar13 = (undefined8 *)param_1[0xf];
    if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) {
      puVar13 = param_1 + 0xd;
    }
    memcpy(puVar13,_Src,(longlong)iVar1 << 2);
  }
  lVar4 = param_2[0x11];
  param_1[0x11] = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar12 = DAT_14c950c29;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  uVar5 = *(undefined4 *)(param_2 + 0x12);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar7 = *(undefined4 *)(param_2 + 0x13);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x9c);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar10 = *(undefined4 *)(param_2 + 0x15);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar9;
  *(undefined4 *)(param_1 + 0x15) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar11;
  *(undefined4 *)(param_1 + 0x12) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar6;
  *(undefined4 *)(param_1 + 0x13) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar8;
  lVar4 = param_2[0x17];
  param_1[0x17] = lVar4;
  if ((lVar4 != 0 & bVar12) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 14791a81e FUN_14791a81e body=133 status=ok
// SIG undefined FUN_14791a81e(void)

void FUN_14791a81e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 14791a8a4 FUN_14791a8a4 body=98 status=ok
// SIG undefined FUN_14791a8a4(void)

void FUN_14791a8a4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791a906 FUN_14791a906 body=66 status=ok
// SIG undefined FUN_14791a906(void)

void FUN_14791a906(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_14791467e(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 14791a948 FUN_14791a948 body=115 status=ok
// SIG undefined FUN_14791a948(void)

void FUN_14791a948(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791a9bb FUN_14791a9bb body=52 status=ok
// SIG undefined FUN_14791a9bb(void)

void FUN_14791a9bb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147902516(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 14791a9f0 FUN_14791a9f0 body=98 status=ok
// SIG undefined FUN_14791a9f0(void)

void FUN_14791a9f0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791aa54 FUN_14791aa54 body=104 status=ok
// SIG undefined FUN_14791aa54(void)

void * FUN_14791aa54(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x28);
    *(int *)((longlong)param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
    }
    else {
      FUN_146ec8ea8(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x20);
        if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 14791ab22 FUN_14791ab22 body=59 status=ok
// SIG undefined FUN_14791ab22(void)

undefined8 FUN_14791ab22(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791abc2 FUN_14791abc2 body=55 status=ok
// SIG undefined FUN_14791abc2(void)

void FUN_14791abc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbf50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbf50 = FUN_140002ddd(FUN_1463a5c91,uVar1,L"AnimNode_StateResult");
  }
  return;
}



// FUNCTION 14791acfa FUN_14791acfa body=63 status=ok
// SIG undefined FUN_14791acfa(void)

undefined1 FUN_14791acfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14791ae24(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 14791ad62 FUN_14791ad62 body=59 status=ok
// SIG undefined FUN_14791ad62(void)

undefined8 FUN_14791ad62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791adae FUN_14791adae body=40 status=ok
// SIG undefined FUN_14791adae(void)

void FUN_14791adae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14791aea4(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 14791ae24 FUN_14791ae24 body=127 status=ok
// SIG undefined FUN_14791ae24(void)

longlong FUN_14791ae24(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_144756208(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  FUN_14475634e(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  FUN_147918704(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  return param_1;
}



// FUNCTION 14791aea4 FUN_14791aea4 body=67 status=ok
// SIG undefined FUN_14791aea4(void)

void FUN_14791aea4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7b8bd0;
  FUN_144a8c3de(param_1 + 10);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14791af4c FUN_14791af4c body=59 status=ok
// SIG undefined FUN_14791af4c(void)

undefined8 FUN_14791af4c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791af92 FUN_14791af92 body=43 status=ok
// SIG undefined FUN_14791af92(void)

void FUN_14791af92(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a7b8e20;
    FUN_1449db362(param_2 + 4);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 14791b074 FUN_14791b074 body=59 status=ok
// SIG undefined FUN_14791b074(void)

undefined8 FUN_14791b074(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791b116 FUN_14791b116 body=317 status=ok
// SIG undefined FUN_14791b116(void)

int FUN_14791b116(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar12 = 0;
    iVar9 = 0;
    bVar3 = *plVar1 == lVar5;
    do {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar5 = lVar6;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar7) {
        iVar4 = iVar7;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar11 = iVar4;
        if (lVar8 <= lVar5) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar3 == (plVar1[lVar5] == lVar2));
      if (bVar3 == false) {
        if (iVar12 != iVar9) {
          memmove(plVar1 + iVar12,plVar1 + lVar6,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar12 = iVar12 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar3 = (bool)(bVar3 ^ 1);
    } while (lVar5 < lVar8);
    *(int *)(param_1 + 1) = iVar12;
    iVar7 = iVar7 - iVar12;
  }
  return iVar7;
}



// FUNCTION 14791b254 FUN_14791b254 body=162 status=ok
// SIG undefined FUN_14791b254(void)

undefined8 FUN_14791b254(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x360;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e36];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x360,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar4 = 0x7fffffff;
  if (0xb < (int)(uVar3 / 0x48)) {
    uVar4 = uVar3 / 0x48 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x48,8);
  }
  return uVar2;
}



// FUNCTION 14791b2f6 FUN_14791b2f6 body=115 status=ok
// SIG undefined FUN_14791b2f6(void)

void FUN_14791b2f6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791b36a FUN_14791b36a body=115 status=ok
// SIG undefined FUN_14791b36a(void)

void FUN_14791b36a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791b3de FUN_14791b3de body=111 status=ok
// SIG undefined FUN_14791b3de(void)

void FUN_14791b3de(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791b44d FUN_14791b44d body=140 status=ok
// SIG undefined FUN_14791b44d(void)

void FUN_14791b44d(longlong param_1,longlong param_2,int param_3)

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
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  longlong lVar14;
  
  if (param_3 != 0) {
    lVar14 = 0;
    bVar13 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar14) = *(undefined8 *)(param_2 + lVar14);
      lVar2 = *(longlong *)(param_2 + 8 + lVar14);
      *(longlong *)(param_1 + 8 + lVar14) = lVar2;
      if (((bVar13 & 1) != 0) && (lVar2 != 0)) {
        FUN_1456cec3c();
        bVar13 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar14;
      lVar1 = param_2 + lVar14;
      *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar1 + 0x30);
      uVar10 = *(undefined8 *)(lVar1 + 0x10);
      uVar11 = *(undefined8 *)(lVar1 + 0x18);
      uVar12 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = uVar12;
      *(undefined8 *)(lVar2 + 0x10) = uVar10;
      *(undefined8 *)(lVar2 + 0x18) = uVar11;
      uVar3 = *(undefined4 *)(lVar1 + 0x3c);
      uVar4 = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined4 *)(lVar1 + 0x44);
      uVar6 = *(undefined4 *)(lVar1 + 0x46);
      uVar7 = *(undefined4 *)(lVar1 + 0x4a);
      uVar8 = *(undefined4 *)(lVar1 + 0x4e);
      uVar9 = *(undefined4 *)(lVar1 + 0x52);
      *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x3c) = uVar3;
      *(undefined4 *)(lVar2 + 0x40) = uVar4;
      *(undefined4 *)(lVar2 + 0x44) = uVar5;
      *(undefined4 *)(lVar2 + 0x46) = uVar6;
      *(undefined4 *)(lVar2 + 0x4a) = uVar7;
      *(undefined4 *)(lVar2 + 0x4e) = uVar8;
      *(undefined4 *)(lVar2 + 0x52) = uVar9;
      lVar14 = lVar14 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14791b4da FUN_14791b4da body=115 status=ok
// SIG undefined FUN_14791b4da(void)

void FUN_14791b4da(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791b54d FUN_14791b54d body=92 status=ok
// SIG undefined FUN_14791b54d(void)

void FUN_14791b54d(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar6);
      puVar2 = (undefined8 *)(param_1 + 0x18 + lVar6);
      puVar2[-1] = *(undefined8 *)(puVar1 + 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(puVar2 + -3) = *puVar1;
      *(undefined4 *)((longlong)puVar2 + -0x14) = uVar3;
      *(undefined4 *)(puVar2 + -2) = uVar4;
      *(undefined4 *)((longlong)puVar2 + -0xc) = uVar5;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      FUN_14096c7c0();
      lVar6 = lVar6 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14791b5aa FUN_14791b5aa body=98 status=ok
// SIG undefined FUN_14791b5aa(void)

void FUN_14791b5aa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791b60c FUN_14791b60c body=84 status=ok
// SIG undefined FUN_14791b60c(void)

void FUN_14791b60c(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar6);
      *(undefined4 *)(puVar2 + -2) = *puVar1;
      *(undefined4 *)((longlong)puVar2 + -0xc) = uVar3;
      *(undefined4 *)(puVar2 + -1) = uVar4;
      *(undefined4 *)((longlong)puVar2 + -4) = uVar5;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      FUN_14791467e();
      lVar6 = lVar6 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14791b660 FUN_14791b660 body=111 status=ok
// SIG undefined FUN_14791b660(void)

void FUN_14791b660(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791b6cf FUN_14791b6cf body=52 status=ok
// SIG undefined FUN_14791b6cf(void)

void FUN_14791b6cf(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14791b704(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 14791b704 FUN_14791b704 body=179 status=ok
// SIG undefined FUN_14791b704(void)

undefined8 * FUN_14791b704(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144756262(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 14791b7b8 FUN_14791b7b8 body=111 status=ok
// SIG undefined FUN_14791b7b8(void)

void FUN_14791b7b8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14791b827 FUN_14791b827 body=105 status=ok
// SIG undefined FUN_14791b827(void)

void FUN_14791b827(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      uVar2 = *(undefined4 *)(param_2 + -0x14);
      uVar3 = *(undefined4 *)(param_2 + -0x10);
      uVar4 = *(undefined4 *)(param_2 + -0xc);
      *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_2 + -0x18);
      *(undefined4 *)(param_1 + -0x14) = uVar2;
      *(undefined4 *)(param_1 + -0x10) = uVar3;
      *(undefined4 *)(param_1 + -0xc) = uVar4;
      FUN_1433e36f6(param_1,param_2);
      lVar1 = *(longlong *)(param_2 + 0x48);
      *(longlong *)(param_1 + 0x48) = lVar1;
      if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
        FUN_1456cec3c();
      }
      param_1 = param_1 + 0x68;
      param_2 = param_2 + 0x68;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14791b890 FUN_14791b890 body=115 status=ok
// SIG undefined FUN_14791b890(void)

void FUN_14791b890(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14791b903 FUN_14791b903 body=52 status=ok
// SIG undefined FUN_14791b903(void)

void FUN_14791b903(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14791b938(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 14791b938 FUN_14791b938 body=99 status=ok
// SIG undefined FUN_14791b938(void)

undefined4 * FUN_14791b938(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  param_1[4] = param_2[4];
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  uVar2 = *(undefined8 *)(param_2 + 6);
  param_1[8] = iVar1;
  if (iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_140276ede(param_1 + 6,iVar1,0);
    FUN_1448d848f(*(undefined8 *)(param_1 + 6),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14791b99c FUN_14791b99c body=114 status=ok
// SIG undefined FUN_14791b99c(void)

void FUN_14791b99c(longlong *param_1,int param_2)

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



// FUNCTION 14791ba0e FUN_14791ba0e body=113 status=ok
// SIG undefined FUN_14791ba0e(void)

void FUN_14791ba0e(longlong param_1,int param_2)

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



// FUNCTION 14791ba80 FUN_14791ba80 body=74 status=ok
// SIG undefined FUN_14791ba80(void)

undefined8 * FUN_14791ba80(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7be078;
  puVar1 = TlsGetValue(DAT_14c7612d4);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7612d4,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14791baca FUN_14791baca body=48 status=ok
// SIG undefined FUN_14791baca(void)

void FUN_14791baca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,8);
  }
  return;
}



// FUNCTION 14791bafa FUN_14791bafa body=70 status=ok
// SIG undefined FUN_14791bafa(void)

void FUN_14791bafa(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 8),(longlong)*(int *)((longlong)param_1 + 0x10)
             );
      FUN_1446efa72((longlong)param_1 + 8,0,0,1);
      return;
    }
  }
  return;
}



// FUNCTION 14791bb40 FUN_14791bb40 body=101 status=ok
// SIG undefined FUN_14791bb40(void)

void FUN_14791bb40(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    FUN_14032077c(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 14791bba6 FUN_14791bba6 body=75 status=ok
// SIG undefined FUN_14791bba6(void)

void FUN_14791bba6(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x40),
              (longlong)*(int *)((longlong)param_1 + 0x48) << 3);
      FUN_1446efa72((longlong)param_1 + 0x40,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14791bbf2 FUN_14791bbf2 body=132 status=ok
// SIG undefined FUN_14791bbf2(void)

void FUN_14791bbf2(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14791bc76 FUN_14791bc76 body=75 status=ok
// SIG undefined FUN_14791bc76(void)

void FUN_14791bc76(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x40),
              (longlong)*(int *)((longlong)param_1 + 0x48) << 3);
      FUN_1446efa72((longlong)param_1 + 0x40,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14791bcc2 FUN_14791bcc2 body=132 status=ok
// SIG undefined FUN_14791bcc2(void)

void FUN_14791bcc2(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14791bd46 FUN_14791bd46 body=75 status=ok
// SIG undefined FUN_14791bd46(void)

void FUN_14791bd46(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x40),
              (longlong)*(int *)((longlong)param_1 + 0x48) << 3);
      FUN_1446efa72((longlong)param_1 + 0x40,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14791bd92 FUN_14791bd92 body=132 status=ok
// SIG undefined FUN_14791bd92(void)

void FUN_14791bd92(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14791be16 FUN_14791be16 body=110 status=ok
// SIG undefined FUN_14791be16(void)

void FUN_14791be16(longlong param_1,int param_2)

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
    FUN_14791bbf2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14791be86 FUN_14791be86 body=110 status=ok
// SIG undefined FUN_14791be86(void)

void FUN_14791be86(longlong param_1,int param_2)

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
    FUN_14791bcc2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14791bef6 FUN_14791bef6 body=110 status=ok
// SIG undefined FUN_14791bef6(void)

void FUN_14791bef6(longlong param_1,int param_2)

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
    FUN_14791bd92(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14791bf66 FUN_14791bf66 body=132 status=ok
// SIG undefined FUN_14791bf66(void)

void FUN_14791bf66(longlong param_1,int param_2)

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



// FUNCTION 14791bfec FUN_14791bfec body=148 status=ok
// SIG undefined FUN_14791bfec(void)

void FUN_14791bfec(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_14791c082(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 < iVar1) {
    FUN_14791c108(param_1,param_2,iVar1 - param_2);
    FUN_14791c162(param_1);
    return;
  }
  return;
}



// FUNCTION 14791c082 FUN_14791c082 body=132 status=ok
// SIG undefined FUN_14791c082(void)

void FUN_14791c082(longlong param_1,int param_2)

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



// FUNCTION 14791c108 FUN_14791c108 body=89 status=ok
// SIG undefined FUN_14791c108(void)

void FUN_14791c108(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1407c4ab5(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14791c162 FUN_14791c162 body=62 status=ok
// SIG undefined FUN_14791c162(void)

void FUN_14791c162(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14791c1a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14791c1a0 FUN_14791c1a0 body=93 status=ok
// SIG undefined FUN_14791c1a0(void)

ulonglong FUN_14791c1a0(uint param_1,uint param_2)

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



// FUNCTION 14791c1fe FUN_14791c1fe body=132 status=ok
// SIG undefined FUN_14791c1fe(void)

void FUN_14791c1fe(longlong param_1,int param_2)

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



// FUNCTION 14791c284 FUN_14791c284 body=132 status=ok
// SIG undefined FUN_14791c284(void)

void FUN_14791c284(longlong param_1,int param_2)

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



// FUNCTION 14791c30a FUN_14791c30a body=120 status=ok
// SIG undefined FUN_14791c30a(void)

void FUN_14791c30a(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (longlong *)(lVar1 + (longlong)(int)param_2 * 0x38);
  if (*(longlong *)(lVar1 + 0x10 + (longlong)(int)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x38),(longlong)iVar3 * 0x38);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14791c382 FUN_14791c382 body=62 status=ok
// SIG undefined FUN_14791c382(void)

void FUN_14791c382(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14791c3c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 14791c3c0 FUN_14791c3c0 body=104 status=ok
// SIG undefined FUN_14791c3c0(void)

ulonglong FUN_14791c3c0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14791c3f6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_14791c3f6:
  return param_2 & 0xffffffff;
}



// FUNCTION 14791c428 FUN_14791c428 body=619 status=ok
// SIG undefined FUN_14791c428(void)

void FUN_14791c428(undefined8 *param_1,uint param_2)

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
joined_r0x00014791c45d:
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
          goto joined_r0x00014791c45d;
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



// FUNCTION 14791c694 FUN_14791c694 body=114 status=ok
// SIG undefined FUN_14791c694(void)

void FUN_14791c694(longlong *param_1,int param_2)

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



// FUNCTION 14791c706 FUN_14791c706 body=48 status=ok
// SIG undefined FUN_14791c706(void)

void FUN_14791c706(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 14791c736 FUN_14791c736 body=147 status=ok
// SIG undefined FUN_14791c736(void)

void FUN_14791c736(longlong param_1,int param_2)

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



// FUNCTION 14791c7ca FUN_14791c7ca body=295 status=ok
// SIG undefined FUN_14791c7ca(void)

undefined4 * FUN_14791c7ca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_14791c8f2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_14791c9d8(param_1,uVar5,local_40,&local_4c);
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
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14791cad0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791c8f2 FUN_14791c8f2 body=230 status=ok
// SIG undefined FUN_14791c8f2(void)

int * FUN_14791c8f2(longlong *param_1,int *param_2)

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



// FUNCTION 14791c9d8 FUN_14791c9d8 body=134 status=ok
// SIG undefined FUN_14791c9d8(void)

undefined8 FUN_14791c9d8(longlong *param_1,uint param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  float fVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    fVar7 = *(float *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (fVar7 != -NAN) {
      do {
        pfVar1 = (float *)(*param_1 + (longlong)(int)fVar7 * 0x18);
        if ((*pfVar1 == *param_3) && (!NAN(*pfVar1) && !NAN(*param_3))) {
          fVar2 = *param_3;
          fVar3 = param_3[1];
          fVar4 = param_3[2];
          fVar5 = param_3[3];
          *pfVar1 = fVar2;
          pfVar1[1] = fVar3;
          pfVar1[2] = fVar4;
          pfVar1[3] = fVar5;
          FUN_14791ca5e(fVar2,*param_4);
          *param_4 = fVar7;
          return 1;
        }
        fVar7 = pfVar1[4];
      } while (fVar7 != -NAN);
    }
  }
  return 0;
}



// FUNCTION 14791ca5e FUN_14791ca5e body=114 status=ok
// SIG undefined FUN_14791ca5e(void)

void FUN_14791ca5e(longlong *param_1,int param_2)

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



// FUNCTION 14791cad0 FUN_14791cad0 body=419 status=ok
// SIG undefined FUN_14791cad0(void)

void FUN_14791cad0(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 14791cc74 FUN_14791cc74 body=48 status=ok
// SIG undefined FUN_14791cc74(void)

void FUN_14791cc74(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 14791cca4 FUN_14791cca4 body=147 status=ok
// SIG undefined FUN_14791cca4(void)

void FUN_14791cca4(longlong param_1,int param_2)

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



// FUNCTION 14791cd38 FUN_14791cd38 body=107 status=ok
// SIG undefined FUN_14791cd38(void)

void FUN_14791cd38(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478fd2d8(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 14791cda4 FUN_14791cda4 body=181 status=ok
// SIG undefined FUN_14791cda4(void)

longlong FUN_14791cda4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_14791ce3c;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14791ce5a(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_14791ce3c:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14791ce5a FUN_14791ce5a body=286 status=ok
// SIG undefined FUN_14791ce5a(void)

undefined4 * FUN_14791ce5a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_14791cf7a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_1448262fc(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_14791d060(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_14791d180(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791cf7a FUN_14791cf7a body=229 status=ok
// SIG undefined FUN_14791cf7a(void)

int * FUN_14791cf7a(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14791d060 FUN_14791d060 body=174 status=ok
// SIG undefined FUN_14791d060(void)

undefined8 FUN_14791d060(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1448262fc(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14791d10e(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14791d10e FUN_14791d10e body=114 status=ok
// SIG undefined FUN_14791d10e(void)

void FUN_14791d10e(longlong *param_1,int param_2)

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



// FUNCTION 14791d180 FUN_14791d180 body=476 status=ok
// SIG undefined FUN_14791d180(void)

void FUN_14791d180(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 14791d35e FUN_14791d35e body=119 status=ok
// SIG undefined FUN_14791d35e(void)

void FUN_14791d35e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0xb8 + lVar1);
  FUN_14499183d(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0xb8),(longlong)iVar3 * 0xb8);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14791d3d6 FUN_14791d3d6 body=132 status=ok
// SIG undefined FUN_14791d3d6(void)

void FUN_14791d3d6(longlong param_1,int param_2)

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



// FUNCTION 14791d45c FUN_14791d45c body=113 status=ok
// SIG undefined FUN_14791d45c(void)

undefined8 * FUN_14791d45c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_147915658();
  *param_1 = &PTR_FUN_14a7b9fd0;
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_147914aca(param_1 + 8,iVar1,0);
    FUN_147914b2c(param_1[8],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14791d4ce FUN_14791d4ce body=147 status=ok
// SIG undefined FUN_14791d4ce(void)

void FUN_14791d4ce(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14791d562 FUN_14791d562 body=147 status=ok
// SIG undefined FUN_14791d562(void)

void FUN_14791d562(longlong param_1,int param_2)

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



// FUNCTION 14791d5f6 FUN_14791d5f6 body=147 status=ok
// SIG undefined FUN_14791d5f6(void)

void FUN_14791d5f6(longlong param_1,int param_2)

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



// FUNCTION 14791d68a FUN_14791d68a body=162 status=ok
// SIG undefined FUN_14791d68a(void)

undefined8 FUN_14791d68a(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 2000;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e7d];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,2000,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if (0x31 < (int)(uVar3 / 0x28)) {
    uVar4 = uVar3 / 0x28 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x28,8);
  }
  return uVar2;
}



// FUNCTION 14791d72c FUN_14791d72c body=136 status=ok
// SIG undefined FUN_14791d72c(void)

void FUN_14791d72c(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x908);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x90c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x120,0);
      iVar4 = (int)(uVar3 / 0x120);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x90c) = iVar5;
    FUN_1479145ea(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14791d7b6 FUN_14791d7b6 body=158 status=ok
// SIG undefined FUN_14791d7b6(void)

void FUN_14791d7b6(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x900);
  if (*(longlong *)(param_1 + 0x900) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x92c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x928) * 0x120) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x120) = 0xffffffff;
  if (*(int *)(param_1 + 0x92c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x928);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x120 + 4) = uVar5;
  *(int *)(param_1 + 0x928) = param_2;
  *(int *)(param_1 + 0x92c) = *(int *)(param_1 + 0x92c) + 1;
  lVar4 = param_1 + 0x910;
  if (*(longlong *)(param_1 + 0x918) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x918);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 14791d854 FUN_14791d854 body=119 status=ok
// SIG undefined FUN_14791d854(void)

void FUN_14791d854(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_14791d8cc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14791d8cc FUN_14791d8cc body=141 status=ok
// SIG undefined FUN_14791d8cc(void)

void FUN_14791d8cc(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x20);
  return;
}



// FUNCTION 14791d95a FUN_14791d95a body=302 status=ok
// SIG undefined FUN_14791d95a(void)

int * FUN_14791d95a(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x1ac) == 0) {
    iVar6 = *(int *)(param_1 + 0x188);
    *(int *)(param_1 + 0x188) = iVar6 + 1;
    if (*(int *)(param_1 + 0x18c) == iVar6) {
      FUN_1478c8f84(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 400,1);
    lVar4 = *(longlong *)(param_1 + 0x198);
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar4 = param_1 + 400;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar4 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x1a8);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar4 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 0x1a8) = iVar3;
    iVar5 = *(int *)(param_1 + 0x1ac) + -1;
    *(int *)(param_1 + 0x1ac) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  lVar4 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x198);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar4 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar4 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + lVar4;
  return param_2;
}



// FUNCTION 14791da88 FUN_14791da88 body=193 status=ok
// SIG undefined FUN_14791da88(void)

undefined8 FUN_14791da88(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac) != 1) &&
     (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1ac))) {
    lVar1 = param_1 + 0x1b0;
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x1b8);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x1c0) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar1 = param_1;
      }
      do {
        _Dst = (void *)(lVar1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x60) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x58);
          FUN_14791db4a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14791db4a FUN_14791db4a body=158 status=ok
// SIG undefined FUN_14791db4a(void)

void FUN_14791db4a(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x1a8) * 0x60) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)(param_1 + 0x1ac) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x1a8);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x60 + 4) = uVar5;
  *(int *)(param_1 + 0x1a8) = param_2;
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
  lVar4 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x198);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 14791dbe8 FUN_14791dbe8 body=104 status=ok
// SIG undefined FUN_14791dbe8(void)

undefined8 FUN_14791dbe8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if (lVar2 == 0) {
    iVar4 = 2;
  }
  if (param_2 < 4) {
    iVar4 = 2;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x1c0))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x1c0) = iVar4;
    FUN_14791dc50(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14791dc50 FUN_14791dc50 body=528 status=ok
// SIG undefined FUN_14791dc50(void)

void FUN_14791dc50(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1446efa72(param_1 + 0x1b8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x1c0);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x1b0;
    uVar7 = 0;
    FUN_145cfbc50(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x1b8);
        if (*(longlong *)(param_1 + 0x1b8) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1c0) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 400;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x1a0) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_50 = local_30;
    local_4c = local_2c;
    local_58 = local_38;
    uVar3 = local_58;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar5 = *(longlong *)(local_70 + 0x180);
        if (*(longlong *)(local_70 + 0x180) == 0) {
          lVar5 = local_70;
        }
        lVar6 = (longlong)iVar4 * 0x60;
        uVar3 = *(undefined8 *)(lVar5 + lVar6);
        uVar2 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) &
                (longlong)*(int *)(param_1 + 0x1c0) - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar5 + 0x5c + lVar6) = iVar8;
        lVar10 = *(longlong *)(param_1 + 0x1b8);
        if (*(longlong *)(param_1 + 0x1b8) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(lVar5 + 0x58 + lVar6) =
             *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x1c0) - 1U & uVar9) * 4);
        lVar5 = *(longlong *)(param_1 + 0x1b8);
        if (*(longlong *)(param_1 + 0x1b8) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x1c0) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14791de62 FUN_14791de62 body=110 status=ok
// SIG undefined FUN_14791de62(void)

void FUN_14791de62(longlong param_1,int param_2)

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
    FUN_14791ded2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14791ded2 FUN_14791ded2 body=132 status=ok
// SIG undefined FUN_14791ded2(void)

void FUN_14791ded2(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14791df56 FUN_14791df56 body=367 status=ok
// SIG undefined FUN_14791df56(void)

void FUN_14791df56(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0x930;
  if (*(longlong *)(param_1 + 0x940) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x940);
  }
  iVar6 = *(int *)(param_1 + 0x948);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0x908) - *(int *)(param_1 + 0x92c) < iVar3 >> 2) {
    lVar2 = param_1 + 0x910;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x920) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0x920);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0x900);
        if (*(longlong *)(local_78 + 0x900) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0x11c + (longlong)iVar3 * 0x120) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x948));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14791e0c6 FUN_14791e0c6 body=316 status=ok
// SIG undefined FUN_14791e0c6(void)

void FUN_14791e0c6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 0x910;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x920) != 0) {
    FUN_144a81a4c(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < *(int *)(local_30 + 0x10)) {
    do {
      lVar1 = *(longlong *)(local_60 + 0x900);
      if (*(longlong *)(local_60 + 0x900) == 0) {
        lVar1 = local_60;
      }
      FUN_1479145ac(lVar1 + (longlong)iStack_44 * 0x120 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_144a81a4c(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x908) = 0;
  if (*(int *)(param_1 + 0x90c) < 0) {
    FUN_14472925c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x928) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x920) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791e204 FUN_14791e204 body=364 status=ok
// SIG undefined FUN_14791e204(void)

void FUN_14791e204(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0x1b0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1b8);
  }
  iVar6 = *(int *)(param_1 + 0x1c0);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac) < iVar3 >> 2) {
    lVar2 = param_1 + 400;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x1a0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0x1a0);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0x180);
        if (*(longlong *)(local_78 + 0x180) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0x5c + (longlong)iVar3 * 0x60) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x1c0));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14791e372 FUN_14791e372 body=318 status=ok
// SIG undefined FUN_14791e372(void)

void FUN_14791e372(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 400;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    FUN_144a81a4c(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < *(int *)(local_30 + 0x10)) {
    do {
      lVar1 = *(longlong *)(local_60 + 0x180);
      if (*(longlong *)(local_60 + 0x180) == 0) {
        lVar1 = local_60;
      }
      if (*(longlong *)(lVar1 + 0x48 + (longlong)iStack_44 * 0x60) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_144a81a4c(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) < 0) {
    FUN_144729344(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791e4b2 FUN_14791e4b2 body=507 status=ok
// SIG undefined FUN_14791e4b2(void)

void FUN_14791e4b2(longlong param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  void *_Dst;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = *(int *)(param_1 + 0x188);
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)(param_1 + 0x18c);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144729344(param_1);
      iVar11 = *(int *)(param_1 + 0x188);
      iVar10 = *(int *)(param_1 + 0x18c);
    }
    *(uint *)(param_1 + 0x188) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1478c8f84(param_1);
    }
    lVar3 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar3 = param_1;
    }
    if (iVar11 < (int)param_2) {
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)(param_1 + 0x1ac);
      puVar5 = (undefined4 *)(uVar9 * 0x60 + lVar3 + -0x5c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar3 + (longlong)*(int *)(param_1 + 0x1a8) * 0x60) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)(param_1 + 0x1ac) < 1) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x1a8);
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar2;
        *(int *)(param_1 + 0x1a8) = iVar8 + -1;
        iVar10 = *(int *)(param_1 + 0x1ac) + 1;
        *(int *)(param_1 + 0x1ac) = iVar10;
        puVar5 = puVar5 + -0x18;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x1a0) = uVar7;
      if (param_2 != 0) {
        pvVar6 = (void *)(param_1 + 400);
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)(param_1 + 0x1a4) + 0x1fU >> 5 < uVar12) {
          FUN_144aa70c6(pvVar6,0,uVar12,4);
          *(uint *)(param_1 + 0x1a4) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = *(void **)(param_1 + 0x198);
        if (*(void **)(param_1 + 0x198) == (void *)0x0) {
          _Dst = pvVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = *(int *)(param_1 + 0x1a0);
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if (*(void **)(param_1 + 0x198) != (void *)0x0) {
            pvVar6 = *(void **)(param_1 + 0x198);
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)pvVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar2 = FUN_14489e6aa(param_1 + 400,uVar7);
      FUN_1470f4066(param_1 + 400,uVar2,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14791e6ae FUN_14791e6ae body=334 status=ok
// SIG undefined FUN_14791e6ae(void)

undefined4 * FUN_14791e6ae(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14791d95a(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[9] = 0;
  local_40[10] = 0x400000000;
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar6 = (uint)uVar1 & 0xffff;
  iVar8 = ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4);
  cVar4 = FUN_14791da88(param_1,iVar8,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    cVar4 = FUN_14791dbe8(param_1,*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac));
    if (cVar4 == '\0') {
      uVar5 = (longlong)iVar8 & (longlong)*(int *)(param_1 + 0x1c0) - 1U;
      iVar8 = (int)uVar5;
      *(int *)((longlong)local_40 + 0x5c) = iVar8;
      lVar7 = *(longlong *)(param_1 + 0x1b8);
      if (*(longlong *)(param_1 + 0x1b8) == 0) {
        lVar7 = param_1 + 0x1b0;
      }
      *(undefined4 *)(local_40 + 0xb) =
           *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x1c0) - 1U & uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x1b8);
      if (*(longlong *)(param_1 + 0x1b8) == 0) {
        lVar7 = param_1 + 0x1b0;
      }
      *(undefined4 *)(lVar7 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x1c0) - 1U) * 4) =
           uVar3;
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791e7fe FUN_14791e7fe body=112 status=ok
// SIG undefined FUN_14791e7fe(void)

void FUN_14791e7fe(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 14791e86e FUN_14791e86e body=508 status=ok
// SIG undefined FUN_14791e86e(void)

void FUN_14791e86e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  uVar8 = *(uint *)(param_1 + 200);
  if (*(char *)(param_1 + 0xd0) == '\0') {
    lVar10 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar10 = param_1;
    }
    FUN_14791ebc2(lVar10,uVar8);
    *(undefined1 *)(param_1 + 0xd0) = 1;
  }
  if ((char)param_2[2] == '\0') {
    FUN_140102786(*param_2,(int)param_2[1]);
    *(undefined1 *)(param_2 + 2) = 1;
  }
  uVar11 = uVar8;
  if ((int)uVar8 < (int)uVar1) {
    uVar11 = uVar1;
  }
  iVar7 = (int)uVar11 / 2 + uVar11;
  if (-1 < iVar7) {
    if (*(int *)(param_1 + 0xcc) < iVar7) {
      FUN_14791ea6c(param_1);
    }
    uVar11 = 0;
    if (uVar8 != 0 || (int)uVar1 < 1) {
      uVar9 = 0;
      lVar10 = 0xc;
      uVar11 = 0;
      do {
        if ((uVar11 == uVar1) && ((longlong)uVar9 <= (longlong)(int)uVar8)) {
          return;
        }
        lVar5 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar5 = param_1;
        }
        puVar4 = (undefined8 *)(*param_2 + (longlong)(int)uVar11 * 0x10);
        lVar2 = *(longlong *)(*param_2 + (longlong)(int)uVar11 * 0x10);
        lVar3 = *(longlong *)(lVar5 + -0xc + lVar10);
        if (lVar3 == lVar2) {
          *(undefined4 *)(lVar5 + -4 + lVar10) = *(undefined4 *)(puVar4 + 1);
          *(undefined1 *)(lVar5 + lVar10) = *(undefined1 *)((longlong)puVar4 + 0xc);
LAB_14791e9b0:
          uVar11 = uVar11 + 1;
        }
        else {
          iVar7 = (int)lVar3 - (int)lVar2;
          if (iVar7 == 0) {
            iVar7 = (int)((ulonglong)lVar3 >> 0x20) - (int)((ulonglong)lVar2 >> 0x20);
          }
          if (-1 < iVar7) {
            puVar6 = (undefined8 *)FUN_14791eb38(param_1,uVar9 & 0xffffffff);
            uVar8 = *(uint *)(param_1 + 200);
            *puVar6 = *puVar4;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
            *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)puVar4 + 0xc);
            goto LAB_14791e9b0;
          }
          *(undefined4 *)(lVar5 + -4 + lVar10) = 0;
          *(undefined1 *)(lVar5 + lVar10) = 0;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x18;
      } while (uVar9 != uVar8 || (int)uVar1 <= (int)uVar11);
    }
    iVar7 = (uVar1 - uVar11) + *(int *)(param_1 + 200);
    if (-1 < iVar7) {
      if (*(int *)(param_1 + 0xcc) < iVar7) {
        FUN_14791ea6c(param_1);
      }
      iVar7 = uVar1 - uVar11;
      if (iVar7 == 0 || (int)uVar1 < (int)uVar11) {
        return;
      }
      uVar9 = (longlong)(int)uVar11 << 4 | 0xc;
      do {
        lVar10 = *param_2;
        puVar4 = (undefined8 *)FUN_14791eae4(param_1);
        *puVar4 = *(undefined8 *)(lVar10 + -0xc + uVar9);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar10 + -4 + uVar9);
        *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)(lVar10 + uVar9);
        uVar9 = uVar9 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 14791ea6c FUN_14791ea6c body=120 status=ok
// SIG undefined FUN_14791ea6c(void)

void FUN_14791ea6c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = iVar3;
    FUN_147917170(param_1,*(undefined4 *)(param_1 + 200));
    return;
  }
  return;
}



// FUNCTION 14791eae4 FUN_14791eae4 body=83 status=ok
// SIG undefined FUN_14791eae4(void)

longlong FUN_14791eae4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 200);
  *(uint *)(param_1 + 200) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar1 + 1U) {
    FUN_14791f1a2(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_14791f18d(lVar2);
  return lVar2;
}



// FUNCTION 14791eb38 FUN_14791eb38 body=138 status=ok
// SIG undefined FUN_14791eb38(void)

longlong FUN_14791eb38(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 200);
  *(int *)(param_1 + 200) = iVar1 + 1;
  if (*(int *)(param_1 + 0xcc) == iVar1) {
    FUN_14791f1a2(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar3 = param_1;
  }
  lVar2 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar3 + lVar2 + 0x18),(void *)(lVar3 + lVar2),
          (ulonglong)(uint)(iVar1 - param_2) * 0x18);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar3 = param_1;
  }
  FUN_14791f18d(lVar3 + lVar2);
  return lVar3 + lVar2;
}



// FUNCTION 14791ebc2 FUN_14791ebc2 body=850 status=ok
// SIG undefined FUN_14791ebc2(void)

void FUN_14791ebc2(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  longlong *plVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  float fVar21;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_358 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar21 + fVar21);
    plVar15 = &local_358;
    do {
      piVar7 = (int *)*plVar15;
      piVar16 = (int *)plVar15[1];
      iVar18 = (int)plVar15[2];
      iVar14 = (int)((ulonglong)((longlong)piVar16 - (longlong)piVar7) >> 3);
      piVar19 = piVar16;
      piVar12 = piVar7;
      if (iVar18 != 0) {
LAB_14791ec8d:
        uVar9 = iVar14 * -0x55555555 + 1;
        if (8 < (int)uVar9) {
          uVar10 = (ulonglong)(uVar9 >> 1);
          uVar1 = *(undefined8 *)(piVar7 + uVar10 * 6 + 4);
          uVar2 = *(undefined8 *)(piVar7 + uVar10 * 6);
          uVar3 = *(undefined8 *)(piVar7 + uVar10 * 6 + 2);
          *(undefined8 *)(piVar7 + uVar10 * 6 + 4) = *(undefined8 *)(piVar7 + 4);
          uVar4 = *(undefined8 *)(piVar7 + 2);
          *(undefined8 *)(piVar7 + uVar10 * 6) = *(undefined8 *)piVar7;
          *(undefined8 *)(piVar7 + uVar10 * 6 + 2) = uVar4;
          *(undefined8 *)(piVar7 + 4) = uVar1;
          *(undefined8 *)piVar7 = uVar2;
          *(undefined8 *)(piVar7 + 2) = uVar3;
          piVar11 = piVar16 + 6;
          piVar8 = piVar7;
          do {
            piVar5 = piVar8 + 6;
            piVar17 = piVar8 + 6;
            do {
              piVar8 = piVar17;
              piVar13 = piVar5;
              if (piVar16 < piVar8) break;
              iVar14 = *piVar7 - *piVar8;
              if (*piVar7 - *piVar8 == 0) {
                iVar14 = piVar7[1] - piVar8[1];
              }
              piVar5 = piVar13 + 6;
              piVar17 = piVar8 + 6;
            } while (-1 < iVar14);
            piVar5 = piVar11 + -0xc;
            do {
              piVar17 = piVar11;
              piVar20 = piVar5;
              piVar11 = piVar17 + -6;
              if (piVar11 <= piVar7) break;
              iVar14 = *piVar11 - *piVar7;
              if (*piVar11 - *piVar7 == 0) {
                iVar14 = piVar17[-5] - piVar7[1];
              }
              piVar5 = piVar20 + -6;
            } while (-1 < iVar14);
            if (piVar11 < piVar8) goto LAB_14791ed8c;
            uVar1 = *(undefined8 *)(piVar8 + 4);
            uVar2 = *(undefined8 *)piVar8;
            uVar3 = *(undefined8 *)(piVar8 + 2);
            *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar17 + -2);
            uVar4 = *(undefined8 *)(piVar17 + -4);
            *(undefined8 *)piVar8 = *(undefined8 *)piVar11;
            *(undefined8 *)(piVar8 + 2) = uVar4;
            *(undefined8 *)(piVar17 + -2) = uVar1;
            *(undefined8 *)piVar11 = uVar2;
            *(undefined8 *)(piVar17 + -4) = uVar3;
          } while( true );
        }
        if (piVar7 < piVar16) {
          do {
            piVar19 = piVar7;
            if (piVar7 + 6 <= piVar16) {
              iVar18 = *piVar7;
              piVar12 = piVar7 + 6;
              piVar11 = piVar7;
              do {
                iVar14 = iVar18 - *piVar12;
                if (iVar14 == 0) {
                  iVar14 = piVar11[1] - piVar12[1];
                }
                piVar19 = piVar12;
                iVar6 = *piVar12;
                if (-1 < iVar14) {
                  piVar19 = piVar11;
                  iVar6 = iVar18;
                }
                iVar18 = iVar6;
                piVar12 = piVar12 + 6;
                piVar11 = piVar19;
              } while (piVar12 <= piVar16);
            }
            local_48 = *(undefined8 *)(piVar19 + 4);
            local_58 = *(undefined8 *)piVar19;
            uStack_50 = *(undefined8 *)(piVar19 + 2);
            uVar2 = local_58;
            uVar3 = uStack_50;
            *(undefined8 *)(piVar19 + 4) = *(undefined8 *)(piVar16 + 4);
            uVar1 = *(undefined8 *)(piVar16 + 2);
            *(undefined8 *)piVar19 = *(undefined8 *)piVar16;
            *(undefined8 *)(piVar19 + 2) = uVar1;
            *(undefined8 *)(piVar16 + 4) = local_48;
            local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
            *piVar16 = (int)local_58;
            piVar16[1] = local_58._4_4_;
            piVar16[2] = (int)uStack_50;
            piVar16[3] = uStack_50._4_4_;
            piVar16 = piVar16 + -6;
            local_58 = uVar2;
            uStack_50 = uVar3;
          } while (piVar7 < piVar16);
        }
        goto LAB_14791eef3;
      }
LAB_14791ef08:
      FUN_14791ef15(piVar7);
LAB_14791eef3:
      plVar15 = plVar15 + -3;
    } while (&local_358 <= plVar15);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14791ed8c:
  local_48 = *(undefined8 *)(piVar7 + 4);
  local_58 = *(undefined8 *)piVar7;
  uStack_50 = *(undefined8 *)(piVar7 + 2);
  uVar2 = local_58;
  uVar3 = uStack_50;
  *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(piVar17 + -2);
  uVar1 = *(undefined8 *)(piVar17 + -4);
  *(undefined8 *)piVar7 = *(undefined8 *)piVar11;
  *(undefined8 *)(piVar7 + 2) = uVar1;
  *(undefined8 *)(piVar17 + -2) = local_48;
  local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
  *piVar11 = (int)local_58;
  piVar17[-5] = local_58._4_4_;
  piVar17[-4] = (int)uStack_50;
  piVar17[-3] = uStack_50._4_4_;
  iVar18 = iVar18 + -1;
  piVar17 = piVar17 + -0xc;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)piVar20 - (longlong)piVar12 < (longlong)piVar19 - (longlong)piVar13) {
    if (piVar8 < piVar16) {
      *plVar15 = (longlong)piVar8;
      plVar15[1] = (longlong)piVar16;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    piVar13 = piVar7;
    if (piVar11 <= piVar7 + 6) goto LAB_14791eef3;
  }
  else {
    if (piVar7 + 6 < piVar11) {
      *plVar15 = (longlong)piVar7;
      plVar15[1] = (longlong)piVar17;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    piVar7 = piVar8;
    piVar17 = piVar16;
    piVar20 = piVar16;
    if (piVar16 <= piVar8) goto LAB_14791eef3;
  }
  iVar14 = (int)((ulonglong)((longlong)piVar20 - (longlong)piVar13) >> 3);
  piVar16 = piVar17;
  piVar19 = piVar20;
  piVar12 = piVar13;
  if (iVar18 == 0) goto LAB_14791ef08;
  goto LAB_14791ec8d;
}



// FUNCTION 14791ef15 FUN_14791ef15 body=631 status=ok
// SIG undefined FUN_14791ef15(void)

void FUN_14791ef15(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar8;
joined_r0x00014791ef4a:
    do {
      iVar12 = iVar8 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar8 * 2 + 2;
        if (iVar13 < (int)param_2) {
          iVar10 = *(int *)(param_1 + (longlong)iVar13 * 3) -
                   *(int *)(param_1 + (longlong)iVar12 * 3);
          if (*(int *)(param_1 + (longlong)iVar13 * 3) - *(int *)(param_1 + (longlong)iVar12 * 3) ==
              0) {
            iVar10 = *(int *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 4) -
                     *(int *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 4);
          }
          if (-1 < iVar10) {
            iVar12 = iVar13;
          }
        }
        lVar11 = (longlong)iVar8;
        lVar15 = (longlong)iVar12;
        iVar8 = *(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3);
        if (*(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3) == 0) {
          iVar8 = *(int *)((longlong)param_1 + lVar11 * 0x18 + 4) -
                  *(int *)((longlong)param_1 + lVar15 * 0x18 + 4);
        }
        if (iVar8 < 0) {
          puVar2 = param_1 + lVar11 * 3;
          puVar3 = param_1 + lVar15 * 3;
          local_28 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_28;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar8 = iVar12;
          local_38 = uVar4;
          uStack_30 = uVar5;
          goto joined_r0x00014791ef4a;
        }
      }
      bVar16 = iVar14 != 0;
      iVar8 = iVar14 + -1;
      iVar14 = iVar8;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_28 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_28;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            lVar11 = (longlong)(iVar8 + 2);
            iVar13 = iVar12;
            if (lVar11 < (longlong)uVar9) {
              iVar10 = *(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + (longlong)iVar12 * 3);
              if (*(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + (longlong)iVar12 * 3) == 0) {
                iVar10 = *(int *)((longlong)param_1 + lVar11 * 0x18 + 4) -
                         *(int *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 4);
              }
              if (-1 < iVar10) {
                iVar13 = iVar8 + 2;
              }
            }
            lVar11 = (longlong)iVar14;
            lVar15 = (longlong)iVar13;
            iVar8 = *(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3);
            if (*(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3) == 0) {
              iVar8 = *(int *)((longlong)param_1 + lVar11 * 0x18 + 4) -
                      *(int *)((longlong)param_1 + lVar15 * 0x18 + 4);
            }
            if (-1 < iVar8) break;
            puVar2 = param_1 + lVar11 * 3;
            puVar3 = param_1 + lVar15 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_28 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_28;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar16 = 2 < uVar9;
          uVar9 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
        } while (bVar16);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14791f18d FUN_14791f18d body=21 status=ok
// SIG undefined FUN_14791f18d(void)

void FUN_14791f18d(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14791f1a2 FUN_14791f1a2 body=136 status=ok
// SIG undefined FUN_14791f1a2(void)

void FUN_14791f1a2(longlong param_1,int param_2)

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
    FUN_147917170(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14791f22b FUN_14791f22b body=524 status=ok
// SIG undefined FUN_14791f22b(void)

void FUN_14791f22b(undefined8 *param_1,uint param_2)

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
joined_r0x00014791f260:
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
          goto joined_r0x00014791f260;
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



// FUNCTION 14791f438 FUN_14791f438 body=110 status=ok
// SIG undefined FUN_14791f438(void)

void FUN_14791f438(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_140900e70(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14791f4a8 FUN_14791f4a8 body=1 status=ok
// SIG undefined FUN_14791f4a8(void)

void FUN_14791f4a8(void)

{
  return;
}



// FUNCTION 14791f4aa FUN_14791f4aa body=29 status=ok
// SIG undefined FUN_14791f4aa(void)

undefined8 FUN_14791f4aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14791f4c8 FUN_14791f4c8 body=29 status=ok
// SIG undefined FUN_14791f4c8(void)

undefined8 FUN_14791f4c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14791f4f8 FUN_14791f4f8 body=112 status=ok
// SIG undefined FUN_14791f4f8(void)

void FUN_14791f4f8(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  longlong *local_48;
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_1407b161a(local_68);
  (**(code **)(*plVar1 + 0xf0))(plVar1,local_68);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791f56c FUN_14791f56c body=29 status=ok
// SIG undefined FUN_14791f56c(void)

undefined8 FUN_14791f56c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14791f5a6 FUN_14791f5a6 body=71 status=ok
// SIG undefined FUN_14791f5a6(void)

undefined8 * FUN_14791f5a6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a7be1a0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14791f5ed FUN_14791f5ed body=631 status=ok
// SIG undefined FUN_14791f5ed(void)

void FUN_14791f5ed(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar8;
joined_r0x00014791f622:
    do {
      iVar12 = iVar8 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar8 * 2 + 2;
        if (iVar13 < (int)param_2) {
          iVar10 = *(int *)(param_1 + (longlong)iVar13 * 3) -
                   *(int *)(param_1 + (longlong)iVar12 * 3);
          if (*(int *)(param_1 + (longlong)iVar13 * 3) - *(int *)(param_1 + (longlong)iVar12 * 3) ==
              0) {
            iVar10 = *(int *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 4) -
                     *(int *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 4);
          }
          if (-1 < iVar10) {
            iVar12 = iVar13;
          }
        }
        lVar11 = (longlong)iVar8;
        lVar15 = (longlong)iVar12;
        iVar8 = *(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3);
        if (*(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3) == 0) {
          iVar8 = *(int *)((longlong)param_1 + lVar11 * 0x18 + 4) -
                  *(int *)((longlong)param_1 + lVar15 * 0x18 + 4);
        }
        if (iVar8 < 0) {
          puVar2 = param_1 + lVar11 * 3;
          puVar3 = param_1 + lVar15 * 3;
          local_28 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_28;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar8 = iVar12;
          local_38 = uVar4;
          uStack_30 = uVar5;
          goto joined_r0x00014791f622;
        }
      }
      bVar16 = iVar14 != 0;
      iVar8 = iVar14 + -1;
      iVar14 = iVar8;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_28 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_28;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            lVar11 = (longlong)(iVar8 + 2);
            iVar13 = iVar12;
            if (lVar11 < (longlong)uVar9) {
              iVar10 = *(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + (longlong)iVar12 * 3);
              if (*(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + (longlong)iVar12 * 3) == 0) {
                iVar10 = *(int *)((longlong)param_1 + lVar11 * 0x18 + 4) -
                         *(int *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 4);
              }
              if (-1 < iVar10) {
                iVar13 = iVar8 + 2;
              }
            }
            lVar11 = (longlong)iVar14;
            lVar15 = (longlong)iVar13;
            iVar8 = *(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3);
            if (*(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3) == 0) {
              iVar8 = *(int *)((longlong)param_1 + lVar11 * 0x18 + 4) -
                      *(int *)((longlong)param_1 + lVar15 * 0x18 + 4);
            }
            if (-1 < iVar8) break;
            puVar2 = param_1 + lVar11 * 3;
            puVar3 = param_1 + lVar15 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_28 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_28;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar16 = 2 < uVar9;
          uVar9 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
        } while (bVar16);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14791f866 FUN_14791f866 body=147 status=ok
// SIG undefined FUN_14791f866(void)

void FUN_14791f866(longlong param_1,int param_2)

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



// FUNCTION 14791f8fa FUN_14791f8fa body=147 status=ok
// SIG undefined FUN_14791f8fa(void)

void FUN_14791f8fa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14791f98e FUN_14791f98e body=81 status=ok
// SIG undefined FUN_14791f98e(void)

undefined8 * FUN_14791f98e(undefined8 *param_1,longlong *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    FUN_14791fb4c(param_1,-*(int *)((longlong)param_2 + 0x5c) &
                          ((int)param_2[0xb] + *(int *)((longlong)param_2 + 0x5c)) - 1U,1);
    (**(code **)(*param_2 + 0x2e8))(param_2,*param_1,1);
  }
  return param_1;
}



// FUNCTION 14791f9e0 FUN_14791f9e0 body=96 status=ok
// SIG undefined FUN_14791f9e0(void)

void FUN_14791f9e0(longlong param_1,int param_2)

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



// FUNCTION 14791fa40 FUN_14791fa40 body=132 status=ok
// SIG undefined FUN_14791fa40(void)

void FUN_14791fa40(longlong param_1,int param_2)

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



// FUNCTION 14791fac6 FUN_14791fac6 body=132 status=ok
// SIG undefined FUN_14791fac6(void)

void FUN_14791fac6(longlong param_1,int param_2)

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



// FUNCTION 14791fb4c FUN_14791fb4c body=189 status=ok
// SIG undefined FUN_14791fb4c(void)

void FUN_14791fb4c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1400c29fa(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if ((iVar1 <= param_2) || (*(int *)(param_1 + 1) = param_2, param_3 != '\x01')) {
      return;
    }
    iVar1 = (int)param_1[1];
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((0x3fff < (uint)(iVar2 - iVar1)) || (iVar1 * 3 < iVar2 * 2)) {
      if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
        *(int *)((longlong)param_1 + 0xc) = iVar1;
        FUN_144aa3680(param_1,iVar1,iVar1,1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14791fc0c FUN_14791fc0c body=74 status=ok
// SIG undefined FUN_14791fc0c(void)

undefined8 * FUN_14791fc0c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7be1c8;
  puVar1 = TlsGetValue(DAT_14c7612d8);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7612d8,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14791fc56 FUN_14791fc56 body=147 status=ok
// SIG undefined FUN_14791fc56(void)

void FUN_14791fc56(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x1188);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x118c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x1180,0);
      iVar5 = (int)(uVar4 / 0x1180);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x118c) = iVar6;
    FUN_14791fcea(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14791fcea FUN_14791fcea body=147 status=ok
// SIG undefined FUN_14791fcea(void)

void FUN_14791fcea(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1180);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x1180);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1180,0,param_3,0x1180);
    memmove(*(void **)((longlong)param_1 + 0x1180),param_1,(longlong)param_2 * 0x1180);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1180,param_2,param_3,0x1180);
  return;
}



// FUNCTION 14791fd7e FUN_14791fd7e body=29 status=ok
// SIG undefined FUN_14791fd7e(void)

undefined8 FUN_14791fd7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14791fd9b FUN_14791fd9b body=41 status=ok
// SIG undefined FUN_14791fd9b(void)

void FUN_14791fd9b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147914154(param_1);
    param_1 = param_1 + 0xb18;
  }
  return;
}



// FUNCTION 14791fdc4 FUN_14791fdc4 body=135 status=ok
// SIG undefined FUN_14791fdc4(void)

void FUN_14791fdc4(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2c68);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c6c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xb18,0);
      iVar4 = (int)(uVar3 / 0xb18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x2c6c) = iVar5;
    FUN_14791fe4c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14791fe4c FUN_14791fe4c body=147 status=ok
// SIG undefined FUN_14791fe4c(void)

void FUN_14791fe4c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x2c60);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xb18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x2c60,0,param_3,0xb18);
    memmove(*(void **)((longlong)param_1 + 0x2c60),param_1,(longlong)param_2 * 0xb18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x2c60,param_2,param_3,0xb18);
  return;
}



// FUNCTION 14791fee0 FUN_14791fee0 body=180 status=ok
// SIG undefined FUN_14791fee0(void)

longlong FUN_14791fee0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 0x900) = 0;
  *(undefined8 *)(param_1 + 0x908) = 0x800000000;
  *(undefined8 *)(param_1 + 0x918) = 0;
  *(undefined4 *)(param_1 + 0x920) = 0;
  *(undefined4 *)(param_1 + 0x924) = 0x20;
  *(undefined4 *)(param_1 + 0x928) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x92c) = 0;
  *(undefined8 *)(param_1 + 0x940) = 0;
  *(undefined4 *)(param_1 + 0x948) = 0;
  FUN_14791ff94();
  if (*(longlong *)(param_2 + 0x940) == 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x934);
    uVar2 = *(undefined4 *)(param_2 + 0x938);
    uVar3 = *(undefined4 *)(param_2 + 0x93c);
    *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_2 + 0x930);
    *(undefined4 *)(param_1 + 0x934) = uVar1;
    *(undefined4 *)(param_1 + 0x938) = uVar2;
    *(undefined4 *)(param_1 + 0x93c) = uVar3;
  }
  if (*(longlong *)(param_1 + 0x940) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x940) = *(undefined8 *)(param_2 + 0x940);
  *(undefined8 *)(param_2 + 0x940) = 0;
  *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(param_2 + 0x948);
  *(undefined4 *)(param_2 + 0x948) = 0;
  return param_1;
}



// FUNCTION 14791ff94 FUN_14791ff94 body=448 status=ok
// SIG undefined FUN_14791ff94(void)

longlong FUN_14791ff94(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x910);
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar5 = 0;
    local_48 = puVar1;
    if (*(int *)(param_1 + 0x920) != 0) {
      FUN_144a81a4c(&local_50);
      iVar5 = *(int *)(param_1 + 0x920);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar2 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar5) || (local_60 = uVar2, local_48 != puVar1)) {
      do {
        local_60 = uVar2;
        lVar4 = *(longlong *)(local_78 + 0x900);
        if (*(longlong *)(local_78 + 0x900) == 0) {
          lVar4 = local_78;
        }
        FUN_1479145ac(lVar4 + (longlong)iVar3 * 0x120 + 8);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 || (local_68 != puVar1 || local_60._4_4_ != iVar5));
    }
    FUN_147920156(param_1,param_2);
    if (*(longlong *)(param_2 + 0x918) == 0) {
      *puVar1 = *(undefined4 *)(param_2 + 0x910);
    }
    if (*(longlong *)(param_1 + 0x918) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x918) = *(undefined8 *)(param_2 + 0x918);
    *(undefined8 *)(param_2 + 0x918) = 0;
    *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_2 + 0x920);
    *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(param_2 + 0x924);
    *(undefined8 *)(param_2 + 0x920) = 0;
    *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(param_2 + 0x928);
    *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(param_2 + 0x92c);
    *(undefined8 *)(param_2 + 0x928) = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147920156 FUN_147920156 body=137 status=ok
// SIG undefined FUN_147920156(void)

void * FUN_147920156(void *param_1,void *param_2)

{
  if (param_1 != param_2) {
    if (*(longlong *)((longlong)param_2 + 0x900) == 0) {
      memmove(param_1,param_2,0x900);
    }
    if (*(longlong *)((longlong)param_1 + 0x900) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x900) = *(undefined8 *)((longlong)param_2 + 0x900);
    *(undefined8 *)((longlong)param_2 + 0x900) = 0;
    *(undefined4 *)((longlong)param_1 + 0x908) = *(undefined4 *)((longlong)param_2 + 0x908);
    *(undefined4 *)((longlong)param_1 + 0x90c) = *(undefined4 *)((longlong)param_2 + 0x90c);
    *(undefined8 *)((longlong)param_2 + 0x908) = 0x800000000;
  }
  return param_1;
}



// FUNCTION 1479201e0 FUN_1479201e0 body=180 status=ok
// SIG undefined FUN_1479201e0(void)

longlong FUN_1479201e0(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0x400000000;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0x20;
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  FUN_147920294();
  if (*(longlong *)(param_2 + 0x1b8) == 0) {
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_2 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_2 + 0x1c0) = 0;
  return param_1;
}



// FUNCTION 147920294 FUN_147920294 body=450 status=ok
// SIG undefined FUN_147920294(void)

longlong FUN_147920294(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)(param_1 + 400);
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar5 = 0;
    local_48 = puVar1;
    if (*(int *)(param_1 + 0x1a0) != 0) {
      FUN_144a81a4c(&local_50);
      iVar5 = *(int *)(param_1 + 0x1a0);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar2 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar5) || (local_60 = uVar2, local_48 != puVar1)) {
      do {
        local_60 = uVar2;
        lVar4 = *(longlong *)(local_78 + 0x180);
        if (*(longlong *)(local_78 + 0x180) == 0) {
          lVar4 = local_78;
        }
        if (*(longlong *)(lVar4 + 0x48 + (longlong)iVar3 * 0x60) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 || (local_68 != puVar1 || local_60._4_4_ != iVar5));
    }
    FUN_147920458(param_1,param_2);
    if (*(longlong *)(param_2 + 0x198) == 0) {
      *puVar1 = *(undefined4 *)(param_2 + 400);
    }
    if (*(longlong *)(param_1 + 0x198) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
    *(undefined8 *)(param_2 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
    *(undefined8 *)(param_2 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
    *(undefined8 *)(param_2 + 0x1a8) = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147920458 FUN_147920458 body=137 status=ok
// SIG undefined FUN_147920458(void)

void * FUN_147920458(void *param_1,void *param_2)

{
  if (param_1 != param_2) {
    if (*(longlong *)((longlong)param_2 + 0x180) == 0) {
      memmove(param_1,param_2,0x180);
    }
    if (*(longlong *)((longlong)param_1 + 0x180) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x180) = *(undefined8 *)((longlong)param_2 + 0x180);
    *(undefined8 *)((longlong)param_2 + 0x180) = 0;
    *(undefined4 *)((longlong)param_1 + 0x188) = *(undefined4 *)((longlong)param_2 + 0x188);
    *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
    *(undefined8 *)((longlong)param_2 + 0x188) = 0x400000000;
  }
  return param_1;
}



// FUNCTION 1479204f0 FUN_1479204f0 body=48 status=ok
// SIG undefined FUN_1479204f0(void)

void FUN_1479204f0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 147920520 FUN_147920520 body=132 status=ok
// SIG undefined FUN_147920520(void)

void FUN_147920520(longlong param_1,int param_2)

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



// FUNCTION 1479205a6 FUN_1479205a6 body=75 status=ok
// SIG undefined FUN_1479205a6(void)

void FUN_1479205a6(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 2);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 1479205f2 FUN_1479205f2 body=48 status=ok
// SIG undefined FUN_1479205f2(void)

void FUN_1479205f2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,200,8);
  }
  return;
}


