// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146fc0242 FUN_146fc0242 body=40 status=ok
// SIG undefined FUN_146fc0242(void)

void FUN_146fc0242(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 146fc02b8 FUN_146fc02b8 body=290 status=ok
// SIG undefined FUN_146fc02b8(void)

undefined8 * FUN_146fc02b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_149fb9cf0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1446ddc76(param_1 + 3,"Invalid",1);
  uVar1 = DAT_14c99d1d8;
  param_1[4] = DAT_14c99d1d8;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0x101;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = uVar1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 2;
  return param_1;
}



// FUNCTION 146fc03da FUN_146fc03da body=38 status=ok
// SIG undefined FUN_146fc03da(void)

undefined8 FUN_146fc03da(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc0402 FUN_146fc0402 body=54 status=ok
// SIG undefined FUN_146fc0402(void)

void FUN_146fc0402(longlong *param_1)

{
  FUN_146fc0438(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fc0438 FUN_146fc0438 body=128 status=ok
// SIG undefined FUN_146fc0438(void)

void FUN_146fc0438(longlong param_1,int param_2)

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



// FUNCTION 146fc04ba FUN_146fc04ba body=54 status=ok
// SIG undefined FUN_146fc04ba(void)

void FUN_146fc04ba(longlong *param_1)

{
  FUN_146fc04f0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fc04f0 FUN_146fc04f0 body=128 status=ok
// SIG undefined FUN_146fc04f0(void)

void FUN_146fc04f0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 146fc0572 FUN_146fc0572 body=54 status=ok
// SIG undefined FUN_146fc0572(void)

void FUN_146fc0572(longlong *param_1)

{
  FUN_146fc05a8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fc05a8 FUN_146fc05a8 body=128 status=ok
// SIG undefined FUN_146fc05a8(void)

void FUN_146fc05a8(longlong param_1,int param_2)

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



// FUNCTION 146fc062a FUN_146fc062a body=54 status=ok
// SIG undefined FUN_146fc062a(void)

void FUN_146fc062a(longlong *param_1)

{
  FUN_146fc0660(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fc0660 FUN_146fc0660 body=128 status=ok
// SIG undefined FUN_146fc0660(void)

void FUN_146fc0660(longlong param_1,int param_2)

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



// FUNCTION 146fc06e2 FUN_146fc06e2 body=153 status=ok
// SIG undefined FUN_146fc06e2(void)

longlong FUN_146fc06e2(longlong param_1,longlong param_2)

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
  FUN_146fc077c(param_1 + 0x28,param_2 + 0x28);
  FUN_146fc0870(param_1 + 0x78,param_2 + 0x78);
  *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_2 + 200);
  FUN_146fc0964(param_1 + 0xd0,param_2 + 0xd0);
  FUN_146fc0a54(param_1 + 0x120,param_2 + 0x120);
  uVar1 = *(undefined4 *)(param_2 + 0x174);
  uVar2 = *(undefined4 *)(param_2 + 0x178);
  uVar3 = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = uVar1;
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  *(undefined4 *)(param_1 + 0x17c) = uVar3;
  if (param_2 != param_1) {
    FUN_146fc0b48(param_1 + 0x180,param_2 + 0x180);
  }
  return param_1;
}



// FUNCTION 146fc077c FUN_146fc077c body=122 status=ok
// SIG undefined FUN_146fc077c(void)

longlong FUN_146fc077c(longlong param_1,longlong param_2)

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
    FUN_146fc07f6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146fc07f6 FUN_146fc07f6 body=121 status=ok
// SIG undefined FUN_146fc07f6(void)

undefined8 * FUN_146fc07f6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146fc0660(param_1,uVar1);
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



// FUNCTION 146fc0870 FUN_146fc0870 body=122 status=ok
// SIG undefined FUN_146fc0870(void)

longlong FUN_146fc0870(longlong param_1,longlong param_2)

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
    FUN_146fc08ea(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146fc08ea FUN_146fc08ea body=121 status=ok
// SIG undefined FUN_146fc08ea(void)

undefined8 * FUN_146fc08ea(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146fc05a8(param_1,uVar1);
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



// FUNCTION 146fc0964 FUN_146fc0964 body=122 status=ok
// SIG undefined FUN_146fc0964(void)

longlong FUN_146fc0964(longlong param_1,longlong param_2)

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
    FUN_146fc09de(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146fc09de FUN_146fc09de body=117 status=ok
// SIG undefined FUN_146fc09de(void)

undefined8 * FUN_146fc09de(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146fc04f0(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 146fc0a54 FUN_146fc0a54 body=122 status=ok
// SIG undefined FUN_146fc0a54(void)

longlong FUN_146fc0a54(longlong param_1,longlong param_2)

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
    FUN_146fc0ace(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146fc0ace FUN_146fc0ace body=121 status=ok
// SIG undefined FUN_146fc0ace(void)

undefined8 * FUN_146fc0ace(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146fc0438(param_1,uVar1);
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



// FUNCTION 146fc0b48 FUN_146fc0b48 body=304 status=ok
// SIG undefined FUN_146fc0b48(void)

void FUN_146fc0b48(undefined8 param_1,longlong *param_2)

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



// FUNCTION 146fc0c7a FUN_146fc0c7a body=39 status=ok
// SIG undefined FUN_146fc0c7a(void)

void FUN_146fc0c7a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149faf330;
  *(undefined1 *)((longlong)param_2 + 0x19a) = 1;
  return;
}



// FUNCTION 146fc0ca2 FUN_146fc0ca2 body=39 status=ok
// SIG undefined FUN_146fc0ca2(void)

void FUN_146fc0ca2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149faf330;
  *(undefined1 *)((longlong)param_2 + 0x19a) = 1;
  return;
}



// FUNCTION 146fc0cee FUN_146fc0cee body=74 status=ok
// SIG undefined FUN_146fc0cee(void)

undefined1 FUN_146fc0cee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined1 *)(param_2 + 0x19a) = *(undefined1 *)(param_3 + 0x19a);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 146fc0d60 FUN_146fc0d60 body=59 status=ok
// SIG undefined FUN_146fc0d60(void)

undefined8 FUN_146fc0d60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc0dac FUN_146fc0dac body=40 status=ok
// SIG undefined FUN_146fc0dac(void)

void FUN_146fc0dac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 146fc0e24 FUN_146fc0e24 body=52 status=ok
// SIG undefined FUN_146fc0e24(void)

void FUN_146fc0e24(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149faf440;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 146fc0e58 FUN_146fc0e58 body=52 status=ok
// SIG undefined FUN_146fc0e58(void)

void FUN_146fc0e58(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149faf440;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 146fc0eb0 FUN_146fc0eb0 body=97 status=ok
// SIG undefined FUN_146fc0eb0(void)

undefined8 FUN_146fc0eb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146fc1018(param_2 + 0x198,param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc0f3a FUN_146fc0f3a body=59 status=ok
// SIG undefined FUN_146fc0f3a(void)

undefined8 FUN_146fc0f3a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc0f86 FUN_146fc0f86 body=67 status=ok
// SIG undefined FUN_146fc0f86(void)

void FUN_146fc0f86(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *param_2 = &PTR_FUN_149faf440;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  return;
}



// FUNCTION 146fc1018 FUN_146fc1018 body=84 status=ok
// SIG undefined FUN_146fc1018(void)

undefined8 * FUN_146fc1018(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146fc106c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 146fc106c FUN_146fc106c body=90 status=ok
// SIG undefined FUN_146fc106c(void)

void FUN_146fc106c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146fc10c8 FUN_146fc10c8 body=42 status=ok
// SIG undefined FUN_146fc10c8(void)

void FUN_146fc10c8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149faf550;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 146fc10f2 FUN_146fc10f2 body=42 status=ok
// SIG undefined FUN_146fc10f2(void)

void FUN_146fc10f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149faf550;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 146fc1140 FUN_146fc1140 body=85 status=ok
// SIG undefined FUN_146fc1140(void)

undefined1 FUN_146fc1140(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_144a787a6(param_2 + 0x198,param_3 + 0x198);
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc11be FUN_146fc11be body=59 status=ok
// SIG undefined FUN_146fc11be(void)

undefined8 FUN_146fc11be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc120a FUN_146fc120a body=67 status=ok
// SIG undefined FUN_146fc120a(void)

void FUN_146fc120a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x35) == '\x01') {
    *param_2 = &PTR_FUN_149faf550;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x35) = 0;
  }
  return;
}



// FUNCTION 146fc129e FUN_146fc129e body=42 status=ok
// SIG undefined FUN_146fc129e(void)

void FUN_146fc129e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149faf960;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 146fc12c8 FUN_146fc12c8 body=42 status=ok
// SIG undefined FUN_146fc12c8(void)

void FUN_146fc12c8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149faf960;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 146fc1316 FUN_146fc1316 body=76 status=ok
// SIG undefined FUN_146fc1316(void)

undefined1 FUN_146fc1316(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc138a FUN_146fc138a body=59 status=ok
// SIG undefined FUN_146fc138a(void)

undefined8 FUN_146fc138a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc13d6 FUN_146fc13d6 body=40 status=ok
// SIG undefined FUN_146fc13d6(void)

void FUN_146fc13d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc144e FUN_146fc144e body=53 status=ok
// SIG undefined FUN_146fc144e(void)

void FUN_146fc144e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fafa80;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc1484 FUN_146fc1484 body=53 status=ok
// SIG undefined FUN_146fc1484(void)

void FUN_146fc1484(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fafa80;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc14de FUN_146fc14de body=90 status=ok
// SIG undefined FUN_146fc14de(void)

undefined8 FUN_146fc14de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc1560 FUN_146fc1560 body=59 status=ok
// SIG undefined FUN_146fc1560(void)

undefined8 FUN_146fc1560(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc15ac FUN_146fc15ac body=40 status=ok
// SIG undefined FUN_146fc15ac(void)

void FUN_146fc15ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc1624 FUN_146fc1624 body=53 status=ok
// SIG undefined FUN_146fc1624(void)

void FUN_146fc1624(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fafba0;
  return;
}



// FUNCTION 146fc165a FUN_146fc165a body=53 status=ok
// SIG undefined FUN_146fc165a(void)

void FUN_146fc165a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fafba0;
  return;
}



// FUNCTION 146fc16b4 FUN_146fc16b4 body=90 status=ok
// SIG undefined FUN_146fc16b4(void)

undefined8 FUN_146fc16b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc1736 FUN_146fc1736 body=59 status=ok
// SIG undefined FUN_146fc1736(void)

undefined8 FUN_146fc1736(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc1782 FUN_146fc1782 body=40 status=ok
// SIG undefined FUN_146fc1782(void)

void FUN_146fc1782(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc17fa FUN_146fc17fa body=53 status=ok
// SIG undefined FUN_146fc17fa(void)

void FUN_146fc17fa(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fafcc0;
  return;
}



// FUNCTION 146fc1830 FUN_146fc1830 body=53 status=ok
// SIG undefined FUN_146fc1830(void)

void FUN_146fc1830(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fafcc0;
  return;
}



// FUNCTION 146fc188a FUN_146fc188a body=90 status=ok
// SIG undefined FUN_146fc188a(void)

undefined8 FUN_146fc188a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc190c FUN_146fc190c body=59 status=ok
// SIG undefined FUN_146fc190c(void)

undefined8 FUN_146fc190c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc1958 FUN_146fc1958 body=40 status=ok
// SIG undefined FUN_146fc1958(void)

void FUN_146fc1958(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc19d0 FUN_146fc19d0 body=53 status=ok
// SIG undefined FUN_146fc19d0(void)

void FUN_146fc19d0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fafde0;
  return;
}



// FUNCTION 146fc1a06 FUN_146fc1a06 body=53 status=ok
// SIG undefined FUN_146fc1a06(void)

void FUN_146fc1a06(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fafde0;
  return;
}



// FUNCTION 146fc1a60 FUN_146fc1a60 body=90 status=ok
// SIG undefined FUN_146fc1a60(void)

undefined8 FUN_146fc1a60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc1ae2 FUN_146fc1ae2 body=59 status=ok
// SIG undefined FUN_146fc1ae2(void)

undefined8 FUN_146fc1ae2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc1b2e FUN_146fc1b2e body=40 status=ok
// SIG undefined FUN_146fc1b2e(void)

void FUN_146fc1b2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc1ba6 FUN_146fc1ba6 body=49 status=ok
// SIG undefined FUN_146fc1ba6(void)

void FUN_146fc1ba6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *param_2 = &PTR_FUN_149faff00;
  return;
}



// FUNCTION 146fc1bd8 FUN_146fc1bd8 body=49 status=ok
// SIG undefined FUN_146fc1bd8(void)

void FUN_146fc1bd8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *param_2 = &PTR_FUN_149faff00;
  return;
}



// FUNCTION 146fc1c2e FUN_146fc1c2e body=104 status=ok
// SIG undefined FUN_146fc1c2e(void)

undefined8 FUN_146fc1c2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    *(undefined8 *)(param_2 + 0x1b0) = *(undefined8 *)(param_3 + 0x1b0);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 146fc1cbe FUN_146fc1cbe body=59 status=ok
// SIG undefined FUN_146fc1cbe(void)

undefined8 FUN_146fc1cbe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc1d0a FUN_146fc1d0a body=40 status=ok
// SIG undefined FUN_146fc1d0a(void)

void FUN_146fc1d0a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 146fc1d82 FUN_146fc1d82 body=53 status=ok
// SIG undefined FUN_146fc1d82(void)

void FUN_146fc1d82(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fb0020;
  return;
}



// FUNCTION 146fc1db8 FUN_146fc1db8 body=53 status=ok
// SIG undefined FUN_146fc1db8(void)

void FUN_146fc1db8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fb0020;
  return;
}



// FUNCTION 146fc1e12 FUN_146fc1e12 body=90 status=ok
// SIG undefined FUN_146fc1e12(void)

undefined8 FUN_146fc1e12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc1e94 FUN_146fc1e94 body=59 status=ok
// SIG undefined FUN_146fc1e94(void)

undefined8 FUN_146fc1e94(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc1ee0 FUN_146fc1ee0 body=40 status=ok
// SIG undefined FUN_146fc1ee0(void)

void FUN_146fc1ee0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc1f58 FUN_146fc1f58 body=53 status=ok
// SIG undefined FUN_146fc1f58(void)

void FUN_146fc1f58(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fb0140;
  return;
}



// FUNCTION 146fc1f8e FUN_146fc1f8e body=53 status=ok
// SIG undefined FUN_146fc1f8e(void)

void FUN_146fc1f8e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fb0140;
  return;
}



// FUNCTION 146fc1fe8 FUN_146fc1fe8 body=90 status=ok
// SIG undefined FUN_146fc1fe8(void)

undefined8 FUN_146fc1fe8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc206a FUN_146fc206a body=59 status=ok
// SIG undefined FUN_146fc206a(void)

undefined8 FUN_146fc206a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc20b6 FUN_146fc20b6 body=40 status=ok
// SIG undefined FUN_146fc20b6(void)

void FUN_146fc20b6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc212e FUN_146fc212e body=53 status=ok
// SIG undefined FUN_146fc212e(void)

void FUN_146fc212e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0260;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc2164 FUN_146fc2164 body=53 status=ok
// SIG undefined FUN_146fc2164(void)

void FUN_146fc2164(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0260;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc21be FUN_146fc21be body=90 status=ok
// SIG undefined FUN_146fc21be(void)

undefined8 FUN_146fc21be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc2240 FUN_146fc2240 body=59 status=ok
// SIG undefined FUN_146fc2240(void)

undefined8 FUN_146fc2240(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc228c FUN_146fc228c body=40 status=ok
// SIG undefined FUN_146fc228c(void)

void FUN_146fc228c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc2304 FUN_146fc2304 body=42 status=ok
// SIG undefined FUN_146fc2304(void)

void FUN_146fc2304(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0380;
  return;
}



// FUNCTION 146fc232e FUN_146fc232e body=42 status=ok
// SIG undefined FUN_146fc232e(void)

void FUN_146fc232e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0380;
  return;
}



// FUNCTION 146fc237c FUN_146fc237c body=76 status=ok
// SIG undefined FUN_146fc237c(void)

undefined1 FUN_146fc237c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc23f0 FUN_146fc23f0 body=59 status=ok
// SIG undefined FUN_146fc23f0(void)

undefined8 FUN_146fc23f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc243c FUN_146fc243c body=40 status=ok
// SIG undefined FUN_146fc243c(void)

void FUN_146fc243c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc24b4 FUN_146fc24b4 body=42 status=ok
// SIG undefined FUN_146fc24b4(void)

void FUN_146fc24b4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb04a0;
  return;
}



// FUNCTION 146fc24de FUN_146fc24de body=42 status=ok
// SIG undefined FUN_146fc24de(void)

void FUN_146fc24de(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb04a0;
  return;
}



// FUNCTION 146fc252c FUN_146fc252c body=76 status=ok
// SIG undefined FUN_146fc252c(void)

undefined1 FUN_146fc252c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc25a0 FUN_146fc25a0 body=59 status=ok
// SIG undefined FUN_146fc25a0(void)

undefined8 FUN_146fc25a0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc25ec FUN_146fc25ec body=40 status=ok
// SIG undefined FUN_146fc25ec(void)

void FUN_146fc25ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc2664 FUN_146fc2664 body=42 status=ok
// SIG undefined FUN_146fc2664(void)

void FUN_146fc2664(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb05c0;
  return;
}



// FUNCTION 146fc268e FUN_146fc268e body=42 status=ok
// SIG undefined FUN_146fc268e(void)

void FUN_146fc268e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb05c0;
  return;
}



// FUNCTION 146fc26dc FUN_146fc26dc body=76 status=ok
// SIG undefined FUN_146fc26dc(void)

undefined1 FUN_146fc26dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc2750 FUN_146fc2750 body=59 status=ok
// SIG undefined FUN_146fc2750(void)

undefined8 FUN_146fc2750(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc279c FUN_146fc279c body=40 status=ok
// SIG undefined FUN_146fc279c(void)

void FUN_146fc279c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc2814 FUN_146fc2814 body=53 status=ok
// SIG undefined FUN_146fc2814(void)

void FUN_146fc2814(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb06e0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc284a FUN_146fc284a body=53 status=ok
// SIG undefined FUN_146fc284a(void)

void FUN_146fc284a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb06e0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc28a4 FUN_146fc28a4 body=90 status=ok
// SIG undefined FUN_146fc28a4(void)

undefined8 FUN_146fc28a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc2926 FUN_146fc2926 body=59 status=ok
// SIG undefined FUN_146fc2926(void)

undefined8 FUN_146fc2926(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc2972 FUN_146fc2972 body=40 status=ok
// SIG undefined FUN_146fc2972(void)

void FUN_146fc2972(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc29ea FUN_146fc29ea body=53 status=ok
// SIG undefined FUN_146fc29ea(void)

void FUN_146fc29ea(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0800;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc2a20 FUN_146fc2a20 body=53 status=ok
// SIG undefined FUN_146fc2a20(void)

void FUN_146fc2a20(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0800;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc2a7a FUN_146fc2a7a body=90 status=ok
// SIG undefined FUN_146fc2a7a(void)

undefined8 FUN_146fc2a7a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc2afc FUN_146fc2afc body=59 status=ok
// SIG undefined FUN_146fc2afc(void)

undefined8 FUN_146fc2afc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc2b48 FUN_146fc2b48 body=40 status=ok
// SIG undefined FUN_146fc2b48(void)

void FUN_146fc2b48(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc2bc0 FUN_146fc2bc0 body=53 status=ok
// SIG undefined FUN_146fc2bc0(void)

void FUN_146fc2bc0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0920;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc2bf6 FUN_146fc2bf6 body=53 status=ok
// SIG undefined FUN_146fc2bf6(void)

void FUN_146fc2bf6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0920;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc2c50 FUN_146fc2c50 body=90 status=ok
// SIG undefined FUN_146fc2c50(void)

undefined8 FUN_146fc2c50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc2cd2 FUN_146fc2cd2 body=59 status=ok
// SIG undefined FUN_146fc2cd2(void)

undefined8 FUN_146fc2cd2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc2d1e FUN_146fc2d1e body=40 status=ok
// SIG undefined FUN_146fc2d1e(void)

void FUN_146fc2d1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc2d96 FUN_146fc2d96 body=42 status=ok
// SIG undefined FUN_146fc2d96(void)

void FUN_146fc2d96(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0a40;
  return;
}



// FUNCTION 146fc2dc0 FUN_146fc2dc0 body=42 status=ok
// SIG undefined FUN_146fc2dc0(void)

void FUN_146fc2dc0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0a40;
  return;
}



// FUNCTION 146fc2e0e FUN_146fc2e0e body=76 status=ok
// SIG undefined FUN_146fc2e0e(void)

undefined1 FUN_146fc2e0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc2e82 FUN_146fc2e82 body=59 status=ok
// SIG undefined FUN_146fc2e82(void)

undefined8 FUN_146fc2e82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc2ece FUN_146fc2ece body=40 status=ok
// SIG undefined FUN_146fc2ece(void)

void FUN_146fc2ece(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc2f46 FUN_146fc2f46 body=42 status=ok
// SIG undefined FUN_146fc2f46(void)

void FUN_146fc2f46(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0b60;
  return;
}



// FUNCTION 146fc2f70 FUN_146fc2f70 body=42 status=ok
// SIG undefined FUN_146fc2f70(void)

void FUN_146fc2f70(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0b60;
  return;
}



// FUNCTION 146fc2fbe FUN_146fc2fbe body=76 status=ok
// SIG undefined FUN_146fc2fbe(void)

undefined1 FUN_146fc2fbe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc3032 FUN_146fc3032 body=59 status=ok
// SIG undefined FUN_146fc3032(void)

undefined8 FUN_146fc3032(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc307e FUN_146fc307e body=40 status=ok
// SIG undefined FUN_146fc307e(void)

void FUN_146fc307e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc30f6 FUN_146fc30f6 body=42 status=ok
// SIG undefined FUN_146fc30f6(void)

void FUN_146fc30f6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0c80;
  return;
}



// FUNCTION 146fc3120 FUN_146fc3120 body=42 status=ok
// SIG undefined FUN_146fc3120(void)

void FUN_146fc3120(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0c80;
  return;
}



// FUNCTION 146fc316e FUN_146fc316e body=76 status=ok
// SIG undefined FUN_146fc316e(void)

undefined1 FUN_146fc316e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc31e2 FUN_146fc31e2 body=59 status=ok
// SIG undefined FUN_146fc31e2(void)

undefined8 FUN_146fc31e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc322e FUN_146fc322e body=40 status=ok
// SIG undefined FUN_146fc322e(void)

void FUN_146fc322e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc32a6 FUN_146fc32a6 body=42 status=ok
// SIG undefined FUN_146fc32a6(void)

void FUN_146fc32a6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0da0;
  return;
}



// FUNCTION 146fc32d0 FUN_146fc32d0 body=42 status=ok
// SIG undefined FUN_146fc32d0(void)

void FUN_146fc32d0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0da0;
  return;
}



// FUNCTION 146fc331e FUN_146fc331e body=76 status=ok
// SIG undefined FUN_146fc331e(void)

undefined1 FUN_146fc331e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc3392 FUN_146fc3392 body=59 status=ok
// SIG undefined FUN_146fc3392(void)

undefined8 FUN_146fc3392(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc33de FUN_146fc33de body=40 status=ok
// SIG undefined FUN_146fc33de(void)

void FUN_146fc33de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc3456 FUN_146fc3456 body=42 status=ok
// SIG undefined FUN_146fc3456(void)

void FUN_146fc3456(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0ec0;
  return;
}



// FUNCTION 146fc3480 FUN_146fc3480 body=42 status=ok
// SIG undefined FUN_146fc3480(void)

void FUN_146fc3480(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb0ec0;
  return;
}



// FUNCTION 146fc34ce FUN_146fc34ce body=76 status=ok
// SIG undefined FUN_146fc34ce(void)

undefined1 FUN_146fc34ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc3542 FUN_146fc3542 body=59 status=ok
// SIG undefined FUN_146fc3542(void)

undefined8 FUN_146fc3542(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc358e FUN_146fc358e body=40 status=ok
// SIG undefined FUN_146fc358e(void)

void FUN_146fc358e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc3606 FUN_146fc3606 body=53 status=ok
// SIG undefined FUN_146fc3606(void)

void FUN_146fc3606(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fb0fe0;
  return;
}



// FUNCTION 146fc363c FUN_146fc363c body=53 status=ok
// SIG undefined FUN_146fc363c(void)

void FUN_146fc363c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fb0fe0;
  return;
}



// FUNCTION 146fc3696 FUN_146fc3696 body=90 status=ok
// SIG undefined FUN_146fc3696(void)

undefined8 FUN_146fc3696(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc3718 FUN_146fc3718 body=59 status=ok
// SIG undefined FUN_146fc3718(void)

undefined8 FUN_146fc3718(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc3764 FUN_146fc3764 body=40 status=ok
// SIG undefined FUN_146fc3764(void)

void FUN_146fc3764(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc37dc FUN_146fc37dc body=53 status=ok
// SIG undefined FUN_146fc37dc(void)

void FUN_146fc37dc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1100;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc3812 FUN_146fc3812 body=53 status=ok
// SIG undefined FUN_146fc3812(void)

void FUN_146fc3812(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1100;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 146fc386c FUN_146fc386c body=90 status=ok
// SIG undefined FUN_146fc386c(void)

undefined8 FUN_146fc386c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc38ee FUN_146fc38ee body=59 status=ok
// SIG undefined FUN_146fc38ee(void)

undefined8 FUN_146fc38ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc393a FUN_146fc393a body=40 status=ok
// SIG undefined FUN_146fc393a(void)

void FUN_146fc393a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc39b2 FUN_146fc39b2 body=42 status=ok
// SIG undefined FUN_146fc39b2(void)

void FUN_146fc39b2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1220;
  return;
}



// FUNCTION 146fc39dc FUN_146fc39dc body=42 status=ok
// SIG undefined FUN_146fc39dc(void)

void FUN_146fc39dc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1220;
  return;
}



// FUNCTION 146fc3a2a FUN_146fc3a2a body=76 status=ok
// SIG undefined FUN_146fc3a2a(void)

undefined1 FUN_146fc3a2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc3a9e FUN_146fc3a9e body=59 status=ok
// SIG undefined FUN_146fc3a9e(void)

undefined8 FUN_146fc3a9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc3aea FUN_146fc3aea body=40 status=ok
// SIG undefined FUN_146fc3aea(void)

void FUN_146fc3aea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc3b62 FUN_146fc3b62 body=42 status=ok
// SIG undefined FUN_146fc3b62(void)

void FUN_146fc3b62(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1340;
  return;
}



// FUNCTION 146fc3b8c FUN_146fc3b8c body=42 status=ok
// SIG undefined FUN_146fc3b8c(void)

void FUN_146fc3b8c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1340;
  return;
}



// FUNCTION 146fc3bda FUN_146fc3bda body=76 status=ok
// SIG undefined FUN_146fc3bda(void)

undefined1 FUN_146fc3bda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc3c4e FUN_146fc3c4e body=59 status=ok
// SIG undefined FUN_146fc3c4e(void)

undefined8 FUN_146fc3c4e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc3c9a FUN_146fc3c9a body=40 status=ok
// SIG undefined FUN_146fc3c9a(void)

void FUN_146fc3c9a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc3d12 FUN_146fc3d12 body=42 status=ok
// SIG undefined FUN_146fc3d12(void)

void FUN_146fc3d12(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1460;
  return;
}



// FUNCTION 146fc3d3c FUN_146fc3d3c body=42 status=ok
// SIG undefined FUN_146fc3d3c(void)

void FUN_146fc3d3c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1460;
  return;
}



// FUNCTION 146fc3d8a FUN_146fc3d8a body=76 status=ok
// SIG undefined FUN_146fc3d8a(void)

undefined1 FUN_146fc3d8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc3dfe FUN_146fc3dfe body=59 status=ok
// SIG undefined FUN_146fc3dfe(void)

undefined8 FUN_146fc3dfe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc3e4a FUN_146fc3e4a body=40 status=ok
// SIG undefined FUN_146fc3e4a(void)

void FUN_146fc3e4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc3ec2 FUN_146fc3ec2 body=42 status=ok
// SIG undefined FUN_146fc3ec2(void)

void FUN_146fc3ec2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1580;
  return;
}



// FUNCTION 146fc3eec FUN_146fc3eec body=42 status=ok
// SIG undefined FUN_146fc3eec(void)

void FUN_146fc3eec(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1580;
  return;
}



// FUNCTION 146fc3f3a FUN_146fc3f3a body=76 status=ok
// SIG undefined FUN_146fc3f3a(void)

undefined1 FUN_146fc3f3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc3fae FUN_146fc3fae body=59 status=ok
// SIG undefined FUN_146fc3fae(void)

undefined8 FUN_146fc3fae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc3ffa FUN_146fc3ffa body=40 status=ok
// SIG undefined FUN_146fc3ffa(void)

void FUN_146fc3ffa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc4072 FUN_146fc4072 body=50 status=ok
// SIG undefined FUN_146fc4072(void)

void FUN_146fc4072(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb16a0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 146fc40a4 FUN_146fc40a4 body=50 status=ok
// SIG undefined FUN_146fc40a4(void)

void FUN_146fc40a4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb16a0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 146fc40fa FUN_146fc40fa body=76 status=ok
// SIG undefined FUN_146fc40fa(void)

undefined1 FUN_146fc40fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc416e FUN_146fc416e body=59 status=ok
// SIG undefined FUN_146fc416e(void)

undefined8 FUN_146fc416e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc41ba FUN_146fc41ba body=40 status=ok
// SIG undefined FUN_146fc41ba(void)

void FUN_146fc41ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc4232 FUN_146fc4232 body=42 status=ok
// SIG undefined FUN_146fc4232(void)

void FUN_146fc4232(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb17b0;
  return;
}



// FUNCTION 146fc425c FUN_146fc425c body=42 status=ok
// SIG undefined FUN_146fc425c(void)

void FUN_146fc425c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb17b0;
  return;
}



// FUNCTION 146fc42aa FUN_146fc42aa body=76 status=ok
// SIG undefined FUN_146fc42aa(void)

undefined1 FUN_146fc42aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc431e FUN_146fc431e body=59 status=ok
// SIG undefined FUN_146fc431e(void)

undefined8 FUN_146fc431e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc436a FUN_146fc436a body=40 status=ok
// SIG undefined FUN_146fc436a(void)

void FUN_146fc436a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc43e2 FUN_146fc43e2 body=42 status=ok
// SIG undefined FUN_146fc43e2(void)

void FUN_146fc43e2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb18d0;
  return;
}



// FUNCTION 146fc440c FUN_146fc440c body=42 status=ok
// SIG undefined FUN_146fc440c(void)

void FUN_146fc440c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb18d0;
  return;
}



// FUNCTION 146fc445a FUN_146fc445a body=76 status=ok
// SIG undefined FUN_146fc445a(void)

undefined1 FUN_146fc445a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc44ce FUN_146fc44ce body=59 status=ok
// SIG undefined FUN_146fc44ce(void)

undefined8 FUN_146fc44ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc451a FUN_146fc451a body=40 status=ok
// SIG undefined FUN_146fc451a(void)

void FUN_146fc451a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc4592 FUN_146fc4592 body=42 status=ok
// SIG undefined FUN_146fc4592(void)

void FUN_146fc4592(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb19f0;
  return;
}



// FUNCTION 146fc45bc FUN_146fc45bc body=42 status=ok
// SIG undefined FUN_146fc45bc(void)

void FUN_146fc45bc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb19f0;
  return;
}



// FUNCTION 146fc460a FUN_146fc460a body=76 status=ok
// SIG undefined FUN_146fc460a(void)

undefined1 FUN_146fc460a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc467e FUN_146fc467e body=59 status=ok
// SIG undefined FUN_146fc467e(void)

undefined8 FUN_146fc467e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc46ca FUN_146fc46ca body=40 status=ok
// SIG undefined FUN_146fc46ca(void)

void FUN_146fc46ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc4742 FUN_146fc4742 body=42 status=ok
// SIG undefined FUN_146fc4742(void)

void FUN_146fc4742(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1b10;
  return;
}



// FUNCTION 146fc476c FUN_146fc476c body=42 status=ok
// SIG undefined FUN_146fc476c(void)

void FUN_146fc476c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1b10;
  return;
}



// FUNCTION 146fc47ba FUN_146fc47ba body=76 status=ok
// SIG undefined FUN_146fc47ba(void)

undefined1 FUN_146fc47ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc482e FUN_146fc482e body=59 status=ok
// SIG undefined FUN_146fc482e(void)

undefined8 FUN_146fc482e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc487a FUN_146fc487a body=40 status=ok
// SIG undefined FUN_146fc487a(void)

void FUN_146fc487a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc48f2 FUN_146fc48f2 body=42 status=ok
// SIG undefined FUN_146fc48f2(void)

void FUN_146fc48f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1c30;
  return;
}



// FUNCTION 146fc491c FUN_146fc491c body=42 status=ok
// SIG undefined FUN_146fc491c(void)

void FUN_146fc491c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1c30;
  return;
}



// FUNCTION 146fc496a FUN_146fc496a body=76 status=ok
// SIG undefined FUN_146fc496a(void)

undefined1 FUN_146fc496a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc49de FUN_146fc49de body=59 status=ok
// SIG undefined FUN_146fc49de(void)

undefined8 FUN_146fc49de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc4a2a FUN_146fc4a2a body=40 status=ok
// SIG undefined FUN_146fc4a2a(void)

void FUN_146fc4a2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc4aa2 FUN_146fc4aa2 body=42 status=ok
// SIG undefined FUN_146fc4aa2(void)

void FUN_146fc4aa2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1d50;
  return;
}



// FUNCTION 146fc4acc FUN_146fc4acc body=42 status=ok
// SIG undefined FUN_146fc4acc(void)

void FUN_146fc4acc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1d50;
  return;
}



// FUNCTION 146fc4b1a FUN_146fc4b1a body=76 status=ok
// SIG undefined FUN_146fc4b1a(void)

undefined1 FUN_146fc4b1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc4b8e FUN_146fc4b8e body=59 status=ok
// SIG undefined FUN_146fc4b8e(void)

undefined8 FUN_146fc4b8e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc4bda FUN_146fc4bda body=40 status=ok
// SIG undefined FUN_146fc4bda(void)

void FUN_146fc4bda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc4c52 FUN_146fc4c52 body=53 status=ok
// SIG undefined FUN_146fc4c52(void)

void FUN_146fc4c52(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fb1e70;
  return;
}



// FUNCTION 146fc4c88 FUN_146fc4c88 body=53 status=ok
// SIG undefined FUN_146fc4c88(void)

void FUN_146fc4c88(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *param_2 = &PTR_FUN_149fb1e70;
  return;
}



// FUNCTION 146fc4ce2 FUN_146fc4ce2 body=90 status=ok
// SIG undefined FUN_146fc4ce2(void)

undefined8 FUN_146fc4ce2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 146fc4d64 FUN_146fc4d64 body=59 status=ok
// SIG undefined FUN_146fc4d64(void)

undefined8 FUN_146fc4d64(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc4db0 FUN_146fc4db0 body=40 status=ok
// SIG undefined FUN_146fc4db0(void)

void FUN_146fc4db0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 146fc4e28 FUN_146fc4e28 body=42 status=ok
// SIG undefined FUN_146fc4e28(void)

void FUN_146fc4e28(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1f90;
  return;
}



// FUNCTION 146fc4e52 FUN_146fc4e52 body=42 status=ok
// SIG undefined FUN_146fc4e52(void)

void FUN_146fc4e52(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb1f90;
  return;
}



// FUNCTION 146fc4ea0 FUN_146fc4ea0 body=76 status=ok
// SIG undefined FUN_146fc4ea0(void)

undefined1 FUN_146fc4ea0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc4f14 FUN_146fc4f14 body=59 status=ok
// SIG undefined FUN_146fc4f14(void)

undefined8 FUN_146fc4f14(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc4f60 FUN_146fc4f60 body=40 status=ok
// SIG undefined FUN_146fc4f60(void)

void FUN_146fc4f60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc4fd8 FUN_146fc4fd8 body=42 status=ok
// SIG undefined FUN_146fc4fd8(void)

void FUN_146fc4fd8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb20b0;
  return;
}



// FUNCTION 146fc5002 FUN_146fc5002 body=42 status=ok
// SIG undefined FUN_146fc5002(void)

void FUN_146fc5002(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *param_2 = &PTR_FUN_149fb20b0;
  return;
}



// FUNCTION 146fc5050 FUN_146fc5050 body=76 status=ok
// SIG undefined FUN_146fc5050(void)

undefined1 FUN_146fc5050(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 146fc50c4 FUN_146fc50c4 body=59 status=ok
// SIG undefined FUN_146fc50c4(void)

undefined8 FUN_146fc50c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc5110 FUN_146fc5110 body=40 status=ok
// SIG undefined FUN_146fc5110(void)

void FUN_146fc5110(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 146fc5188 FUN_146fc5188 body=56 status=ok
// SIG undefined FUN_146fc5188(void)

void FUN_146fc5188(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb8f20;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 146fc51c0 FUN_146fc51c0 body=56 status=ok
// SIG undefined FUN_146fc51c0(void)

void FUN_146fc51c0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb8f20;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 146fc521c FUN_146fc521c body=118 status=ok
// SIG undefined FUN_146fc521c(void)

undefined8 FUN_146fc521c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    uVar8 = *(undefined4 *)(param_3 + 0x1b8);
    uVar9 = *(undefined4 *)(param_3 + 0x1bc);
    uVar10 = *(undefined4 *)(param_3 + 0x1c0);
    uVar11 = *(undefined4 *)(param_3 + 0x1c4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    *(undefined4 *)(param_2 + 0x1b8) = uVar8;
    *(undefined4 *)(param_2 + 0x1bc) = uVar9;
    *(undefined4 *)(param_2 + 0x1c0) = uVar10;
    *(undefined4 *)(param_2 + 0x1c4) = uVar11;
    *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_3 + 0x1c8);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 146fc52ba FUN_146fc52ba body=59 status=ok
// SIG undefined FUN_146fc52ba(void)

undefined8 FUN_146fc52ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc5306 FUN_146fc5306 body=40 status=ok
// SIG undefined FUN_146fc5306(void)

void FUN_146fc5306(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 146fc537c FUN_146fc537c body=38 status=ok
// SIG undefined FUN_146fc537c(void)

undefined8 FUN_146fc537c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc53a2 FUN_146fc53a2 body=38 status=ok
// SIG undefined FUN_146fc53a2(void)

undefined8 FUN_146fc53a2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorMakeVec2Node",1);
  return param_2;
}



// FUNCTION 146fc53c8 FUN_146fc53c8 body=38 status=ok
// SIG undefined FUN_146fc53c8(void)

undefined8 FUN_146fc53c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeVector2",1);
  return param_2;
}



// FUNCTION 146fc53ee FUN_146fc53ee body=38 status=ok
// SIG undefined FUN_146fc53ee(void)

undefined8 FUN_146fc53ee(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc5414 FUN_146fc5414 body=32 status=ok
// SIG undefined FUN_146fc5414(void)

undefined8 FUN_146fc5414(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc5434 FUN_146fc5434 body=123 status=ok
// SIG undefined FUN_146fc5434(void)

void FUN_146fc5434(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc70 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc70 = FUN_140002ddd(FUN_14629199e,uVar1,L"DataflowVectorMakeVec2Node");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cc70,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc54ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc54b0 FUN_146fc54b0 body=93 status=ok
// SIG undefined FUN_146fc54b0(void)

void FUN_146fc54b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cc70 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cc70 = FUN_140002ddd(FUN_14629199e,uVar2,L"DataflowVectorMakeVec2Node");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cc70,param_1);
  return;
}



// FUNCTION 146fc550e FUN_146fc550e body=55 status=ok
// SIG undefined FUN_146fc550e(void)

void FUN_146fc550e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc70 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc70 = FUN_140002ddd(FUN_14629199e,uVar1,L"DataflowVectorMakeVec2Node");
  }
  return;
}



// FUNCTION 146fc5546 FUN_146fc5546 body=233 status=ok
// SIG undefined FUN_146fc5546(void)

ulonglong FUN_146fc5546(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowVectorMakeVec2Node",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc55e0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc55e0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc55e0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc55e0:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fc5632 FUN_146fc5632 body=67 status=ok
// SIG undefined FUN_146fc5632(void)

void FUN_146fc5632(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9030;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 146fc5676 FUN_146fc5676 body=67 status=ok
// SIG undefined FUN_146fc5676(void)

void FUN_146fc5676(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9030;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 146fc56de FUN_146fc56de body=118 status=ok
// SIG undefined FUN_146fc56de(void)

undefined8 FUN_146fc56de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    uVar8 = *(undefined4 *)(param_3 + 0x1b8);
    uVar9 = *(undefined4 *)(param_3 + 0x1bc);
    uVar10 = *(undefined4 *)(param_3 + 0x1c0);
    uVar11 = *(undefined4 *)(param_3 + 0x1c4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    *(undefined4 *)(param_2 + 0x1b8) = uVar8;
    *(undefined4 *)(param_2 + 0x1bc) = uVar9;
    *(undefined4 *)(param_2 + 0x1c0) = uVar10;
    *(undefined4 *)(param_2 + 0x1c4) = uVar11;
    *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_3 + 0x1c8);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 146fc577c FUN_146fc577c body=59 status=ok
// SIG undefined FUN_146fc577c(void)

undefined8 FUN_146fc577c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc57c8 FUN_146fc57c8 body=40 status=ok
// SIG undefined FUN_146fc57c8(void)

void FUN_146fc57c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 146fc583e FUN_146fc583e body=38 status=ok
// SIG undefined FUN_146fc583e(void)

undefined8 FUN_146fc583e(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc5864 FUN_146fc5864 body=38 status=ok
// SIG undefined FUN_146fc5864(void)

undefined8 FUN_146fc5864(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorMakeVec3Node",1);
  return param_2;
}



// FUNCTION 146fc588a FUN_146fc588a body=38 status=ok
// SIG undefined FUN_146fc588a(void)

undefined8 FUN_146fc588a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeVector3",1);
  return param_2;
}



// FUNCTION 146fc58b0 FUN_146fc58b0 body=38 status=ok
// SIG undefined FUN_146fc58b0(void)

undefined8 FUN_146fc58b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc58d6 FUN_146fc58d6 body=32 status=ok
// SIG undefined FUN_146fc58d6(void)

undefined8 FUN_146fc58d6(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc58f6 FUN_146fc58f6 body=123 status=ok
// SIG undefined FUN_146fc58f6(void)

void FUN_146fc58f6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc88 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc88 = FUN_140002ddd(FUN_1462919fe,uVar1,L"DataflowVectorMakeVec3Node");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cc88,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc596e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc5972 FUN_146fc5972 body=93 status=ok
// SIG undefined FUN_146fc5972(void)

void FUN_146fc5972(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cc88 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cc88 = FUN_140002ddd(FUN_1462919fe,uVar2,L"DataflowVectorMakeVec3Node");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cc88,param_1);
  return;
}



// FUNCTION 146fc59d0 FUN_146fc59d0 body=55 status=ok
// SIG undefined FUN_146fc59d0(void)

void FUN_146fc59d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cc88 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cc88 = FUN_140002ddd(FUN_1462919fe,uVar1,L"DataflowVectorMakeVec3Node");
  }
  return;
}



// FUNCTION 146fc5a08 FUN_146fc5a08 body=233 status=ok
// SIG undefined FUN_146fc5a08(void)

ulonglong FUN_146fc5a08(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowVectorMakeVec3Node",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc5aa2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc5aa2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc5aa2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc5aa2:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fc5af4 FUN_146fc5af4 body=63 status=ok
// SIG undefined FUN_146fc5af4(void)

void FUN_146fc5af4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9140;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 146fc5b34 FUN_146fc5b34 body=63 status=ok
// SIG undefined FUN_146fc5b34(void)

void FUN_146fc5b34(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9140;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 146fc5b98 FUN_146fc5b98 body=96 status=ok
// SIG undefined FUN_146fc5b98(void)

undefined1 FUN_146fc5b98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x198);
    puVar3 = (undefined8 *)(param_2 + 0x198);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x1e0;
    param_3 = param_3 + 0x1e0;
  }
  return 1;
}



// FUNCTION 146fc5c20 FUN_146fc5c20 body=59 status=ok
// SIG undefined FUN_146fc5c20(void)

undefined8 FUN_146fc5c20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


