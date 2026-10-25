// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1486673f8 FUN_1486673f8 body=73 status=ok
// SIG undefined FUN_1486673f8(void)

longlong FUN_1486673f8(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_1486666e8();
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  lVar3 = *(longlong *)(param_2 + 0x70);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(longlong *)(param_1 + 0x70) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 148667442 FUN_148667442 body=91 status=ok
// SIG undefined FUN_148667442(void)

void FUN_148667442(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b0b9210;
  param_2[0xd] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0xffffffff00000080;
  return;
}



// FUNCTION 14866753c FUN_14866753c body=113 status=ok
// SIG undefined FUN_14866753c(void)

undefined8 FUN_14866753c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144881636(param_2,param_3);
      param_3 = param_3 + 0x98;
      param_2 = param_2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486675d6 FUN_1486675d6 body=59 status=ok
// SIG undefined FUN_1486675d6(void)

undefined8 FUN_1486675d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148667622 FUN_148667622 body=40 status=ok
// SIG undefined FUN_148667622(void)

void FUN_148667622(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1486676f6(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148667698 FUN_148667698 body=38 status=ok
// SIG undefined FUN_148667698(void)

undefined8 FUN_148667698(undefined8 param_1,int param_2)

{
  FUN_1486676f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486676be FUN_1486676be body=55 status=ok
// SIG undefined FUN_1486676be(void)

void FUN_1486676be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a3c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a3c0 = FUN_140002ddd(FUN_1464c90ed,uVar1,L"GbxBodyNodeSettings_AvatarParameter");
  }
  return;
}



// FUNCTION 1486676f6 FUN_1486676f6 body=67 status=ok
// SIG undefined FUN_1486676f6(void)

void FUN_1486676f6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0b9210;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14866776e FUN_14866776e body=54 status=ok
// SIG undefined FUN_14866776e(void)

undefined1 FUN_14866776e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 1486677cc FUN_1486677cc body=59 status=ok
// SIG undefined FUN_1486677cc(void)

undefined8 FUN_1486677cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148667812 FUN_148667812 body=32 status=ok
// SIG undefined FUN_148667812(void)

void FUN_148667812(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1486678b2 FUN_1486678b2 body=114 status=ok
// SIG undefined FUN_1486678b2(void)

undefined1 FUN_1486678b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      puVar9 = (undefined8 *)(param_3 + 0x10);
      puVar10 = (undefined8 *)(param_2 + 0x10);
      for (lVar8 = 0xd; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866794c FUN_14866794c body=59 status=ok
// SIG undefined FUN_14866794c(void)

undefined8 FUN_14866794c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148667998 FUN_148667998 body=38 status=ok
// SIG undefined FUN_148667998(void)

void FUN_148667998(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148667b12 FUN_148667b12 body=97 status=ok
// SIG undefined FUN_148667b12(void)

undefined1 FUN_148667b12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_148667c78(param_2 + 0x68,param_3 + 0x68);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148667b9c FUN_148667b9c body=59 status=ok
// SIG undefined FUN_148667b9c(void)

undefined8 FUN_148667b9c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148667be8 FUN_148667be8 body=65 status=ok
// SIG undefined FUN_148667be8(void)

void FUN_148667be8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    *param_2 = &PTR_FUN_14b0bbf20;
    if (param_2[0x1d] != 0) {
      FUN_1400020a8();
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x1f) = 0;
  }
  return;
}



// FUNCTION 148667c78 FUN_148667c78 body=122 status=ok
// SIG undefined FUN_148667c78(void)

void * FUN_148667c78(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_148667cf2(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148667cf2 FUN_148667cf2 body=104 status=ok
// SIG undefined FUN_148667cf2(void)

void FUN_148667cf2(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1459a424e(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 148667dbc FUN_148667dbc body=97 status=ok
// SIG undefined FUN_148667dbc(void)

undefined1 FUN_148667dbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x38);
      uVar2 = *(undefined4 *)(param_3 + -0x34);
      uVar3 = *(undefined4 *)(param_3 + -0x30);
      uVar4 = *(undefined4 *)(param_3 + -0x2c);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x38) = uVar1;
      *(undefined4 *)(param_2 + -0x34) = uVar2;
      *(undefined4 *)(param_2 + -0x30) = uVar3;
      *(undefined4 *)(param_2 + -0x2c) = uVar4;
      FUN_1470d00c2(param_2 + -0x18,param_3 + -0x18);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_141471d82(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148667e46 FUN_148667e46 body=59 status=ok
// SIG undefined FUN_148667e46(void)

undefined8 FUN_148667e46(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148667e8c FUN_148667e8c body=32 status=ok
// SIG undefined FUN_148667e8c(void)

void FUN_148667e8c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148667f7c FUN_148667f7c body=98 status=ok
// SIG undefined FUN_148667f7c(void)

undefined1 FUN_148667f7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_141471d82(param_2 + 0x68,param_3 + 0x68);
    FUN_1486680e2(param_2 + 0x80,param_3 + 0x80);
    param_2 = param_2 + 0x110;
    param_3 = param_3 + 0x110;
  }
  return 1;
}



// FUNCTION 148668006 FUN_148668006 body=59 status=ok
// SIG undefined FUN_148668006(void)

undefined8 FUN_148668006(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148668052 FUN_148668052 body=65 status=ok
// SIG undefined FUN_148668052(void)

void FUN_148668052(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *param_2 = &PTR_FUN_14b0bc080;
    if (param_2[0x20] != 0) {
      FUN_1400020a8();
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x22) = 0;
  }
  return;
}



// FUNCTION 1486680e2 FUN_1486680e2 body=122 status=ok
// SIG undefined FUN_1486680e2(void)

void * FUN_1486680e2(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_14866815c(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14866815c FUN_14866815c body=104 status=ok
// SIG undefined FUN_14866815c(void)

void FUN_14866815c(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1486681c4(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 1486681c4 FUN_1486681c4 body=142 status=ok
// SIG undefined FUN_1486681c4(void)

void FUN_1486681c4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 1486682ea FUN_1486682ea body=54 status=ok
// SIG undefined FUN_1486682ea(void)

undefined1 FUN_1486682ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486683fc(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148668348 FUN_148668348 body=59 status=ok
// SIG undefined FUN_148668348(void)

undefined8 FUN_148668348(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866838e FUN_14866838e body=32 status=ok
// SIG undefined FUN_14866838e(void)

void FUN_14866838e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1486683fc FUN_1486683fc body=99 status=ok
// SIG undefined FUN_1486683fc(void)

longlong FUN_1486683fc(longlong param_1,longlong param_2)

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
  FUN_14184b2ce(param_1 + 0x38,param_2 + 0x38);
  lVar8 = *(longlong *)(param_2 + 0x50);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x50);
    }
  }
  *(longlong *)(param_1 + 0x50) = lVar8;
  return param_1;
}



// FUNCTION 1486684da FUN_1486684da body=97 status=ok
// SIG undefined FUN_1486684da(void)

undefined1 FUN_1486684da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_148668640(param_2 + 0x68,param_3 + 0x68);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148668564 FUN_148668564 body=59 status=ok
// SIG undefined FUN_148668564(void)

undefined8 FUN_148668564(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486685b0 FUN_1486685b0 body=65 status=ok
// SIG undefined FUN_1486685b0(void)

void FUN_1486685b0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    *param_2 = &PTR_FUN_14b0b9f10;
    if (param_2[0x1d] != 0) {
      FUN_1400020a8();
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x1f) = 0;
  }
  return;
}



// FUNCTION 148668640 FUN_148668640 body=122 status=ok
// SIG undefined FUN_148668640(void)

void * FUN_148668640(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_1486686ba(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486686ba FUN_1486686ba body=104 status=ok
// SIG undefined FUN_1486686ba(void)

void FUN_1486686ba(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148668722(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 148668722 FUN_148668722 body=142 status=ok
// SIG undefined FUN_148668722(void)

void FUN_148668722(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 1486687e2 FUN_1486687e2 body=63 status=ok
// SIG undefined FUN_1486687e2(void)

undefined1 FUN_1486687e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148668928(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 14866884a FUN_14866884a body=59 status=ok
// SIG undefined FUN_14866884a(void)

undefined8 FUN_14866884a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148668896 FUN_148668896 body=67 status=ok
// SIG undefined FUN_148668896(void)

void FUN_148668896(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x16) == '\x01') {
    *param_2 = &PTR_FUN_14b0bbfd0;
    if (param_2[0x14] != 0) {
      FUN_1400020a8();
    }
    FUN_1411203da(param_2);
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 148668928 FUN_148668928 body=136 status=ok
// SIG undefined FUN_148668928(void)

longlong FUN_148668928(longlong param_1,longlong param_2)

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
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  FUN_1406fa324(param_1 + 0x50,param_2 + 0x50);
  FUN_1486689b0(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_1447715ec(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



// FUNCTION 1486689b0 FUN_1486689b0 body=93 status=ok
// SIG undefined FUN_1486689b0(void)

undefined8 * FUN_1486689b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1408a47eb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148668a0e(param_1,iVar1);
      FUN_148668a7d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148668a0e FUN_148668a0e body=111 status=ok
// SIG undefined FUN_148668a0e(void)

void FUN_148668a0e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148668a7d FUN_148668a7d body=52 status=ok
// SIG undefined FUN_148668a7d(void)

void FUN_148668a7d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14034cca6(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 148668b42 FUN_148668b42 body=132 status=ok
// SIG undefined FUN_148668b42(void)

undefined8 FUN_148668b42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_3 + 0x68);
    FUN_148668cae(param_2 + 0x70,param_3 + 0x70);
    FUN_148668d0c(param_2 + 0x80,param_3 + 0x80);
    *(undefined1 *)(param_2 + 0x110) = *(undefined1 *)(param_3 + 0x110);
    *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_3 + 0x118);
    param_2 = param_2 + 0x120;
    param_3 = param_3 + 0x120;
  }
  return 1;
}



// FUNCTION 148668bee FUN_148668bee body=59 status=ok
// SIG undefined FUN_148668bee(void)

undefined8 FUN_148668bee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148668c3a FUN_148668c3a body=38 status=ok
// SIG undefined FUN_148668c3a(void)

void FUN_148668c3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1410a3b96(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148668cae FUN_148668cae body=93 status=ok
// SIG undefined FUN_148668cae(void)

undefined8 * FUN_148668cae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401b95a9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148668d86(param_1,iVar1);
      FUN_148668df9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148668d0c FUN_148668d0c body=122 status=ok
// SIG undefined FUN_148668d0c(void)

void * FUN_148668d0c(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_148668e8a(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148668d86 FUN_148668d86 body=115 status=ok
// SIG undefined FUN_148668d86(void)

void FUN_148668d86(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148668df9 FUN_148668df9 body=145 status=ok
// SIG undefined FUN_148668df9(void)

void FUN_148668df9(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    uVar2 = *(ushort *)(param_2 + 3);
    *(ushort *)(param_1 + 3) = uVar2;
    _Dst = param_1;
    _Src = param_2;
    if (0x18 < uVar2) {
      _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
      *param_1 = _Dst;
      _Src = (undefined8 *)*param_2;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*pcVar3)();
    }
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    param_1 = param_1 + 5;
    param_2 = param_2 + 5;
  }
  return;
}



// FUNCTION 148668e8a FUN_148668e8a body=104 status=ok
// SIG undefined FUN_148668e8a(void)

void FUN_148668e8a(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148668ef2(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 148668ef2 FUN_148668ef2 body=142 status=ok
// SIG undefined FUN_148668ef2(void)

void FUN_148668ef2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 148668f82 FUN_148668f82 body=92 status=ok
// SIG undefined FUN_148668f82(void)

void FUN_148668f82(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f8);
  FUN_141493208(param_2);
  *param_2 = &PTR_FUN_14b0ba3e0;
  *(undefined2 *)(param_2 + 0x37) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  return;
}



// FUNCTION 148668fde FUN_148668fde body=76 status=ok
// SIG undefined FUN_148668fde(void)

void FUN_148668fde(undefined8 param_1,undefined8 *param_2)

{
  FUN_141493208(param_2);
  *param_2 = &PTR_FUN_14b0ba3e0;
  *(undefined2 *)(param_2 + 0x37) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  return;
}



// FUNCTION 14866904e FUN_14866904e body=127 status=ok
// SIG undefined FUN_14866904e(void)

undefined1 FUN_14866904e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_1486692c2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1bc);
    uVar2 = *(undefined4 *)(param_3 + 0x1c0);
    uVar3 = *(undefined4 *)(param_3 + 0x1c4);
    uVar4 = *(undefined4 *)(param_3 + 0x1c8);
    uVar5 = *(undefined4 *)(param_3 + 0x1cc);
    uVar6 = *(undefined4 *)(param_3 + 0x1d0);
    uVar7 = *(undefined4 *)(param_3 + 0x1d4);
    uVar8 = *(undefined4 *)(param_3 + 0x1d8);
    uVar9 = *(undefined4 *)(param_3 + 0x1dc);
    uVar10 = *(undefined4 *)(param_3 + 0x1e0);
    uVar11 = *(undefined4 *)(param_3 + 0x1e4);
    *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(param_3 + 0x1b8);
    *(undefined4 *)(param_2 + 0x1bc) = uVar1;
    *(undefined4 *)(param_2 + 0x1c0) = uVar2;
    *(undefined4 *)(param_2 + 0x1c4) = uVar3;
    *(undefined4 *)(param_2 + 0x1c8) = uVar4;
    *(undefined4 *)(param_2 + 0x1cc) = uVar5;
    *(undefined4 *)(param_2 + 0x1d0) = uVar6;
    *(undefined4 *)(param_2 + 0x1d4) = uVar7;
    *(undefined4 *)(param_2 + 0x1d8) = uVar8;
    *(undefined4 *)(param_2 + 0x1dc) = uVar9;
    *(undefined4 *)(param_2 + 0x1e0) = uVar10;
    *(undefined4 *)(param_2 + 0x1e4) = uVar11;
    FUN_148669332(param_2 + 0x1e8,param_3 + 0x1e8);
    param_2 = param_2 + 0x1f8;
    param_3 = param_3 + 0x1f8;
  }
  return 1;
}



// FUNCTION 1486690f6 FUN_1486690f6 body=59 status=ok
// SIG undefined FUN_1486690f6(void)

undefined8 FUN_1486690f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148669142 FUN_148669142 body=65 status=ok
// SIG undefined FUN_148669142(void)

void FUN_148669142(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3f) == '\x01') {
    *param_2 = &PTR_FUN_14b0ba3e0;
    if (param_2[0x3d] != 0) {
      FUN_1400020a8();
    }
    FUN_140160e38(param_2);
    *(undefined1 *)(param_2 + 0x3f) = 0;
  }
  return;
}



// FUNCTION 1486691d2 FUN_1486691d2 body=68 status=ok
// SIG undefined FUN_1486691d2(void)

undefined8 * FUN_1486691d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0ba3e0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_140160e38(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148669216 FUN_148669216 body=55 status=ok
// SIG undefined FUN_148669216(void)

void FUN_148669216(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a4c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a4c8 = FUN_140002ddd(FUN_1464c9621,uVar1,L"GbxBodyNodeState_FirstPerson");
  }
  return;
}



// FUNCTION 148669250 FUN_148669250 body=41 status=ok
// SIG undefined FUN_148669250(void)

void FUN_148669250(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/GbxBody/GbxBodyNode_FirstPerson.h"
                ,0x1d,L"Pure virtual not implemented (%s)",L"FGbxFirstPersonState::Update");
  return;
}



// FUNCTION 148669296 FUN_148669296 body=42 status=ok
// SIG undefined FUN_148669296(void)

undefined8 FUN_148669296(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/GbxBody/GbxBodyNode_FirstPerson.h"
                ,0x25,L"Pure virtual not implemented (%s)",
                L"FGbxFirstPersonState::GetPrimarySkeletalMeshComponent");
  return 0;
}



// FUNCTION 1486692c2 FUN_1486692c2 body=111 status=ok
// SIG undefined FUN_1486692c2(void)

longlong FUN_1486692c2(longlong param_1,longlong param_2)

{
  FUN_1486666e8();
  FUN_14866938a(param_1 + 0x68,param_2 + 0x68);
  FUN_148669630(param_1 + 0x138,param_2 + 0x138);
  FUN_148669406(param_1 + 0x188,param_2 + 0x188);
  FUN_148669464(param_1 + 0x198,param_2 + 0x198);
  FUN_1486694c2(param_1 + 0x1a8,param_2 + 0x1a8);
  return param_1;
}



// FUNCTION 148669332 FUN_148669332 body=88 status=ok
// SIG undefined FUN_148669332(void)

undefined8 * FUN_148669332(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148669b60(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14866938a FUN_14866938a body=123 status=ok
// SIG undefined FUN_14866938a(void)

void * FUN_14866938a(void *param_1,void *param_2)

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
      FUN_148669520(param_1,iVar1);
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



// FUNCTION 148669406 FUN_148669406 body=93 status=ok
// SIG undefined FUN_148669406(void)

undefined8 * FUN_148669406(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401610c7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486697ac(param_1,iVar1);
      FUN_14866981b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148669464 FUN_148669464 body=93 status=ok
// SIG undefined FUN_148669464(void)

undefined8 * FUN_148669464(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140160ff5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486698f0(param_1,iVar1);
      FUN_148669963(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486694c2 FUN_1486694c2 body=93 status=ok
// SIG undefined FUN_1486694c2(void)

undefined8 * FUN_1486694c2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14016105e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148669a28(param_1,iVar1);
      FUN_148669a9b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148669520 FUN_148669520 body=121 status=ok
// SIG undefined FUN_148669520(void)

void FUN_148669520(longlong param_1,uint param_2,int param_3)

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
    FUN_14866959a(param_1,0,iVar3,0x18);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xcc) = param_3;
  return;
}



// FUNCTION 14866959a FUN_14866959a body=150 status=ok
// SIG undefined FUN_14866959a(void)

void FUN_14866959a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 148669630 FUN_148669630 body=122 status=ok
// SIG undefined FUN_148669630(void)

longlong FUN_148669630(longlong param_1,longlong param_2)

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
    FUN_1486696aa(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486696aa FUN_1486696aa body=257 status=ok
// SIG undefined FUN_1486696aa(void)

longlong * FUN_1486696aa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140161138(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar3 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          FUN_1406fa146(lVar5 + lVar3 + 8,lVar2 + 8 + lVar5);
          *(undefined8 *)(lVar3 + 0x30 + lVar5) = *(undefined8 *)(lVar2 + 0x30 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x38;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1486697ac FUN_1486697ac body=111 status=ok
// SIG undefined FUN_1486697ac(void)

void FUN_1486697ac(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14866981b FUN_14866981b body=52 status=ok
// SIG undefined FUN_14866981b(void)

void FUN_14866981b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148669850(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148669850 FUN_148669850 body=159 status=ok
// SIG undefined FUN_148669850(void)

undefined8 * FUN_148669850(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  *param_1 = *param_2;
  _Src = param_2 + 1;
  bVar1 = *(byte *)(param_2 + 5);
  uVar2 = *(ushort *)(param_2 + 4);
  *(ushort *)(param_1 + 4) = uVar2;
  _Dst = param_1 + 1;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    param_1[1] = _Dst;
    _Src = (undefined8 *)*_Src;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar3)(_Dst,_Src);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  FUN_1406fa146(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 1486698f0 FUN_1486698f0 body=115 status=ok
// SIG undefined FUN_1486698f0(void)

void FUN_1486698f0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148669963 FUN_148669963 body=52 status=ok
// SIG undefined FUN_148669963(void)

void FUN_148669963(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148669998(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148669998 FUN_148669998 body=143 status=ok
// SIG undefined FUN_148669998(void)

undefined8 * FUN_148669998(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  *param_1 = *param_2;
  _Src = param_2 + 1;
  bVar1 = *(byte *)(param_2 + 5);
  uVar2 = *(ushort *)(param_2 + 4);
  *(ushort *)(param_1 + 4) = uVar2;
  _Dst = param_1 + 1;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    param_1[1] = _Dst;
    _Src = (undefined8 *)*_Src;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar3)(_Dst,_Src);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 148669a28 FUN_148669a28 body=115 status=ok
// SIG undefined FUN_148669a28(void)

void FUN_148669a28(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148669a9b FUN_148669a9b body=52 status=ok
// SIG undefined FUN_148669a9b(void)

void FUN_148669a9b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148669ad0(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148669ad0 FUN_148669ad0 body=143 status=ok
// SIG undefined FUN_148669ad0(void)

undefined8 * FUN_148669ad0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  *param_1 = *param_2;
  _Src = param_2 + 1;
  bVar1 = *(byte *)(param_2 + 5);
  uVar2 = *(ushort *)(param_2 + 4);
  *(ushort *)(param_1 + 4) = uVar2;
  _Dst = param_1 + 1;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    param_1[1] = _Dst;
    _Src = (undefined8 *)*_Src;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar3)(_Dst,_Src);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 148669b60 FUN_148669b60 body=98 status=ok
// SIG undefined FUN_148669b60(void)

void FUN_148669b60(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148669cd0 FUN_148669cd0 body=63 status=ok
// SIG undefined FUN_148669cd0(void)

undefined1 FUN_148669cd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148669ec8(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148669d38 FUN_148669d38 body=59 status=ok
// SIG undefined FUN_148669d38(void)

undefined8 FUN_148669d38(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148669d84 FUN_148669d84 body=40 status=ok
// SIG undefined FUN_148669d84(void)

void FUN_148669d84(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_148669e58(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148669dfa FUN_148669dfa body=38 status=ok
// SIG undefined FUN_148669dfa(void)

undefined8 FUN_148669dfa(undefined8 param_1,int param_2)

{
  FUN_148669e58();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148669e20 FUN_148669e20 body=55 status=ok
// SIG undefined FUN_148669e20(void)

void FUN_148669e20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a4f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a4f8 = FUN_140002ddd(FUN_1464c9713,uVar1,L"GbxBodyNodeSettings_GbxAudioEmitter");
  }
  return;
}



// FUNCTION 148669e58 FUN_148669e58 body=111 status=ok
// SIG undefined FUN_148669e58(void)

void FUN_148669e58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0ba740;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x13] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x13] + 0x50));
  }
  if ((param_1[0xd] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xd] + 0x50));
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 148669ec8 FUN_148669ec8 body=165 status=ok
// SIG undefined FUN_148669ec8(void)

longlong FUN_148669ec8(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_144a7bb84(param_1 + 0x50,param_2 + 0x50);
  FUN_144a82394(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144a7bb84(param_1 + 0x80,param_2 + 0x80);
  FUN_144a82394(param_1 + 0x98,param_2 + 0x98);
  FUN_140d273b0(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148669fa2 FUN_148669fa2 body=63 status=ok
// SIG undefined FUN_148669fa2(void)

undefined1 FUN_148669fa2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14866a0ca(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14866a00a FUN_14866a00a body=59 status=ok
// SIG undefined FUN_14866a00a(void)

undefined8 FUN_14866a00a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866a056 FUN_14866a056 body=38 status=ok
// SIG undefined FUN_14866a056(void)

void FUN_14866a056(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14886a1c2(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14866a0ca FUN_14866a0ca body=81 status=ok
// SIG undefined FUN_14866a0ca(void)

longlong FUN_14866a0ca(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_1486666e8();
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  lVar3 = *(longlong *)(param_2 + 0x70);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(longlong *)(param_1 + 0x70) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  return param_1;
}



// FUNCTION 14866a184 FUN_14866a184 body=59 status=ok
// SIG undefined FUN_14866a184(void)

undefined8 FUN_14866a184(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866a224 FUN_14866a224 body=29 status=ok
// SIG undefined FUN_14866a224(void)

undefined8 FUN_14866a224(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866a242 FUN_14866a242 body=55 status=ok
// SIG undefined FUN_14866a242(void)

void FUN_14866a242(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a528 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a528 = FUN_140002ddd(FUN_1464c983f,uVar1,L"GbxAudioBodyAction");
  }
  return;
}



// FUNCTION 14866a27a FUN_14866a27a body=56 status=ok
// SIG undefined FUN_14866a27a(void)

void FUN_14866a27a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014866a2a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14866a308 FUN_14866a308 body=59 status=ok
// SIG undefined FUN_14866a308(void)

undefined8 FUN_14866a308(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866a354 FUN_14866a354 body=38 status=ok
// SIG undefined FUN_14866a354(void)

void FUN_14866a354(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14866a454(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 14866a454 FUN_14866a454 body=58 status=ok
// SIG undefined FUN_14866a454(void)

void FUN_14866a454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0bac30;
  FUN_144a61ac8(param_1 + 0x18);
  if (param_1[0x15] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14866a4f0 FUN_14866a4f0 body=59 status=ok
// SIG undefined FUN_14866a4f0(void)

undefined8 FUN_14866a4f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866a64a FUN_14866a64a body=59 status=ok
// SIG undefined FUN_14866a64a(void)

undefined8 FUN_14866a64a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866a696 FUN_14866a696 body=52 status=ok
// SIG undefined FUN_14866a696(void)

void FUN_14866a696(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *param_2 = &PTR_FUN_14b0baf50;
    FUN_144a61ac8(param_2 + 0x16);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14866a79e FUN_14866a79e body=59 status=ok
// SIG undefined FUN_14866a79e(void)

undefined8 FUN_14866a79e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866a83e FUN_14866a83e body=31 status=ok
// SIG undefined FUN_14866a83e(void)

undefined8 FUN_14866a83e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866a8e0 FUN_14866a8e0 body=59 status=ok
// SIG undefined FUN_14866a8e0(void)

undefined8 FUN_14866a8e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866a92c FUN_14866a92c body=38 status=ok
// SIG undefined FUN_14866a92c(void)

void FUN_14866a92c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14866a9a0(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14866a9a0 FUN_14866a9a0 body=114 status=ok
// SIG undefined FUN_14866a9a0(void)

void FUN_14866a9a0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0bb270;
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((param_1[0xc] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  if ((param_1[6] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[6] + 0x50));
    return;
  }
  return;
}



// FUNCTION 14866aa9a FUN_14866aa9a body=59 status=ok
// SIG undefined FUN_14866aa9a(void)

undefined8 FUN_14866aa9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866aae0 FUN_14866aae0 body=32 status=ok
// SIG undefined FUN_14866aae0(void)

void FUN_14866aae0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_14866ab4e(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14866ab4e FUN_14866ab4e body=107 status=ok
// SIG undefined FUN_14866ab4e(void)

void FUN_14866ab4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0bb400;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffffffffffff;
  if ((param_1[0xc] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  if ((param_1[6] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[6] + 0x50));
    return;
  }
  return;
}



// FUNCTION 14866ac20 FUN_14866ac20 body=59 status=ok
// SIG undefined FUN_14866ac20(void)

undefined8 FUN_14866ac20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866ad28 FUN_14866ad28 body=59 status=ok
// SIG undefined FUN_14866ad28(void)

undefined8 FUN_14866ad28(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866ae22 FUN_14866ae22 body=62 status=ok
// SIG undefined FUN_14866ae22(void)

undefined1 FUN_14866ae22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141818ba6(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866ae88 FUN_14866ae88 body=59 status=ok
// SIG undefined FUN_14866ae88(void)

undefined8 FUN_14866ae88(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866af28 FUN_14866af28 body=29 status=ok
// SIG undefined FUN_14866af28(void)

undefined8 FUN_14866af28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866af46 FUN_14866af46 body=55 status=ok
// SIG undefined FUN_14866af46(void)

void FUN_14866af46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a600 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a600 = FUN_140002ddd(FUN_1464c9d87,uVar1,L"GbxAudioBodyAction_RemoveInitSwitch");
  }
  return;
}



// FUNCTION 14866afda FUN_14866afda body=91 status=ok
// SIG undefined FUN_14866afda(void)

undefined1 FUN_14866afda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_1403ad5dc(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866b05e FUN_14866b05e body=59 status=ok
// SIG undefined FUN_14866b05e(void)

undefined8 FUN_14866b05e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866b0a4 FUN_14866b0a4 body=32 status=ok
// SIG undefined FUN_14866b0a4(void)

void FUN_14866b0a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14866b112(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14866b112 FUN_14866b112 body=57 status=ok
// SIG undefined FUN_14866b112(void)

void FUN_14866b112(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0bba40;
  FUN_1403ad639(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14866b1a8 FUN_14866b1a8 body=67 status=ok
// SIG undefined FUN_14866b1a8(void)

undefined1 FUN_14866b1a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_1403ad5dc(param_2 + 0x68,param_3 + 0x68);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 14866b214 FUN_14866b214 body=59 status=ok
// SIG undefined FUN_14866b214(void)

undefined8 FUN_14866b214(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866b25a FUN_14866b25a body=32 status=ok
// SIG undefined FUN_14866b25a(void)

void FUN_14866b25a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1404d473a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14866b2ca FUN_14866b2ca body=37 status=ok
// SIG undefined FUN_14866b2ca(void)

void FUN_14866b2ca(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe0);
  FUN_1458e9ade(param_2);
  return;
}



// FUNCTION 14866b33c FUN_14866b33c body=105 status=ok
// SIG undefined FUN_14866b33c(void)

undefined8 FUN_14866b33c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      memcpy((void *)(param_2 + 0x18),(void *)(param_3 + 0x18),0x98);
      param_3 = param_3 + 0xe0;
      param_2 = param_2 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866b3ce FUN_14866b3ce body=59 status=ok
// SIG undefined FUN_14866b3ce(void)

undefined8 FUN_14866b3ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866b41a FUN_14866b41a body=38 status=ok
// SIG undefined FUN_14866b41a(void)

void FUN_14866b41a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 14866b48e FUN_14866b48e body=38 status=ok
// SIG undefined FUN_14866b48e(void)

undefined8 FUN_14866b48e(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866b4b4 FUN_14866b4b4 body=55 status=ok
// SIG undefined FUN_14866b4b4(void)

void FUN_14866b4b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a648 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a648 = FUN_140002ddd(FUN_1464c9f13,uVar1,L"GbxBodyNodeSettings_GbxShapeBase");
  }
  return;
}



// FUNCTION 14866b520 FUN_14866b520 body=75 status=ok
// SIG undefined FUN_14866b520(void)

undefined1 FUN_14866b520(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_14866b670(param_2 + 0x68,param_3 + 0x68);
    param_2 = param_2 + 0xf8;
    param_3 = param_3 + 0xf8;
  }
  return 1;
}



// FUNCTION 14866b594 FUN_14866b594 body=59 status=ok
// SIG undefined FUN_14866b594(void)

undefined8 FUN_14866b594(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866b5e0 FUN_14866b5e0 body=65 status=ok
// SIG undefined FUN_14866b5e0(void)

void FUN_14866b5e0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    *param_2 = &PTR_FUN_14b0bc210;
    if (param_2[0x1d] != 0) {
      FUN_1400020a8();
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x1f) = 0;
  }
  return;
}



// FUNCTION 14866b670 FUN_14866b670 body=122 status=ok
// SIG undefined FUN_14866b670(void)

void * FUN_14866b670(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_14866b6ea(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14866b6ea FUN_14866b6ea body=104 status=ok
// SIG undefined FUN_14866b6ea(void)

void FUN_14866b6ea(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14866b752(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 14866b752 FUN_14866b752 body=142 status=ok
// SIG undefined FUN_14866b752(void)

void FUN_14866b752(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 14866b7e2 FUN_14866b7e2 body=68 status=ok
// SIG undefined FUN_14866b7e2(void)

undefined8 * FUN_14866b7e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0bc210;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1412218b2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866b826 FUN_14866b826 body=55 status=ok
// SIG undefined FUN_14866b826(void)

void FUN_14866b826(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a660 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a660 = FUN_140002ddd(FUN_1464c9fa9,uVar1,L"GbxBodyNodeState_GbxShapeBase");
  }
  return;
}



// FUNCTION 14866b912 FUN_14866b912 body=45 status=ok
// SIG undefined FUN_14866b912(void)

longlong FUN_14866b912(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866b940 FUN_14866b940 body=45 status=ok
// SIG undefined FUN_14866b940(void)

longlong FUN_14866b940(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866b96e FUN_14866b96e body=45 status=ok
// SIG undefined FUN_14866b96e(void)

longlong FUN_14866b96e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866b9c0 FUN_14866b9c0 body=48 status=ok
// SIG undefined FUN_14866b9c0(void)

longlong FUN_14866b9c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145dc7c04(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14866ba02 FUN_14866ba02 body=26 status=ok
// SIG undefined FUN_14866ba02(void)

undefined8 FUN_14866ba02(longlong param_1,undefined8 param_2)

{
  FUN_14886cefc(param_1 + -8);
  return param_2;
}



// FUNCTION 14866ba56 FUN_14866ba56 body=95 status=ok
// SIG undefined FUN_14866ba56(void)

undefined1 FUN_14866ba56(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_14689c22e();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *param_2 = lVar1;
      FUN_140c99494(param_2 + 1,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866bade FUN_14866bade body=59 status=ok
// SIG undefined FUN_14866bade(void)

undefined8 FUN_14866bade(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866bb24 FUN_14866bb24 body=38 status=ok
// SIG undefined FUN_14866bb24(void)

void FUN_14866bb24(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14866bc00 FUN_14866bc00 body=54 status=ok
// SIG undefined FUN_14866bc00(void)

undefined1 FUN_14866bc00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14866bd72(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14866bc5e FUN_14866bc5e body=59 status=ok
// SIG undefined FUN_14866bc5e(void)

undefined8 FUN_14866bc5e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866bca4 FUN_14866bca4 body=32 status=ok
// SIG undefined FUN_14866bca4(void)

void FUN_14866bca4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14866bd12(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14866bd12 FUN_14866bd12 body=96 status=ok
// SIG undefined FUN_14866bd12(void)

void FUN_14866bd12(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0c3da0;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140db5637(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14866bd72 FUN_14866bd72 body=131 status=ok
// SIG undefined FUN_14866bd72(void)

longlong FUN_14866bd72(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  uVar8 = *(undefined4 *)(param_2 + 0x14);
  uVar9 = *(undefined4 *)(param_2 + 0x1c);
  uVar10 = *(undefined4 *)(param_2 + 0x20);
  uVar11 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  *(undefined4 *)(param_1 + 0x20) = uVar10;
  *(undefined4 *)(param_1 + 0x24) = uVar11;
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_14866bdf6(param_1 + 0x38,param_2 + 0x38);
  FUN_14866be46(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  lVar3 = *(longlong *)(param_2 + 0x68);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(longlong *)(param_1 + 0x68) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 14866bdf6 FUN_14866bdf6 body=79 status=ok
// SIG undefined FUN_14866bdf6(void)

undefined8 * FUN_14866bdf6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14184be70(param_1,iVar1);
      FUN_14083266e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14866be46 FUN_14866be46 body=93 status=ok
// SIG undefined FUN_14866be46(void)

undefined8 * FUN_14866be46(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140db5637(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14866bea4(param_1,iVar1);
      FUN_14866bf17(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14866bea4 FUN_14866bea4 body=115 status=ok
// SIG undefined FUN_14866bea4(void)

void FUN_14866bea4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14866bf17 FUN_14866bf17 body=52 status=ok
// SIG undefined FUN_14866bf17(void)

void FUN_14866bf17(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14866bf4c(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14866bf4c FUN_14866bf4c body=117 status=ok
// SIG undefined FUN_14866bf4c(void)

longlong * FUN_14866bf4c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  param_1[1] = 0;
  iVar1 = (int)param_2[2];
  lVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_140c99534(param_1 + 1,iVar1,0);
    FUN_140c994e3(param_1[1],lVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14866c01a FUN_14866c01a body=54 status=ok
// SIG undefined FUN_14866c01a(void)

undefined1 FUN_14866c01a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 14866c078 FUN_14866c078 body=59 status=ok
// SIG undefined FUN_14866c078(void)

undefined8 FUN_14866c078(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866c0be FUN_14866c0be body=32 status=ok
// SIG undefined FUN_14866c0be(void)

void FUN_14866c0be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14866c190 FUN_14866c190 body=54 status=ok
// SIG undefined FUN_14866c190(void)

undefined1 FUN_14866c190(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14866c2a2(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14866c1ee FUN_14866c1ee body=59 status=ok
// SIG undefined FUN_14866c1ee(void)

undefined8 FUN_14866c1ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866c234 FUN_14866c234 body=32 status=ok
// SIG undefined FUN_14866c234(void)

void FUN_14866c234(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14866c2a2 FUN_14866c2a2 body=101 status=ok
// SIG undefined FUN_14866c2a2(void)

longlong FUN_14866c2a2(longlong param_1,longlong param_2)

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
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 14866c388 FUN_14866c388 body=89 status=ok
// SIG undefined FUN_14866c388(void)

undefined8 FUN_14866c388(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_14866c4e6(param_2 + 0x68,param_3 + 0x68);
    *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_3 + 0xf8);
    param_2 = param_2 + 0x100;
    param_3 = param_3 + 0x100;
  }
  return 1;
}



// FUNCTION 14866c40a FUN_14866c40a body=59 status=ok
// SIG undefined FUN_14866c40a(void)

undefined8 FUN_14866c40a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866c456 FUN_14866c456 body=65 status=ok
// SIG undefined FUN_14866c456(void)

void FUN_14866c456(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *param_2 = &PTR_FUN_14b0c8bd0;
    if (param_2[0x1d] != 0) {
      FUN_1400020a8();
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14866c4e6 FUN_14866c4e6 body=122 status=ok
// SIG undefined FUN_14866c4e6(void)

void * FUN_14866c4e6(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_14866c560(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14866c560 FUN_14866c560 body=104 status=ok
// SIG undefined FUN_14866c560(void)

void FUN_14866c560(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14866c5c8(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 14866c5c8 FUN_14866c5c8 body=142 status=ok
// SIG undefined FUN_14866c5c8(void)

void FUN_14866c5c8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 14866c658 FUN_14866c658 body=54 status=ok
// SIG undefined FUN_14866c658(void)

void FUN_14866c658(undefined8 param_1,undefined8 *param_2)

{
  FUN_1458e9ade(param_2);
  *param_2 = &PTR_FUN_14b0c4460;
  FUN_14126e142(param_2 + 0x1b);
  *(undefined4 *)(param_2 + 0x3f) = 2;
  return;
}



// FUNCTION 14866c6b6 FUN_14866c6b6 body=207 status=ok
// SIG undefined FUN_14866c6b6(void)

undefined8 FUN_14866c6b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  void *_Dst;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar9);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      _Dst = (void *)(param_2 + 0x40 + lVar9);
      *(undefined4 *)((longlong)_Dst + -0x28) = puVar1[4];
      *(undefined4 *)((longlong)_Dst + -0x24) = uVar6;
      *(undefined4 *)((longlong)_Dst + -0x20) = uVar7;
      *(undefined4 *)((longlong)_Dst + -0x1c) = uVar8;
      *(undefined4 *)((longlong)_Dst + -0x38) = uVar2;
      *(undefined4 *)((longlong)_Dst + -0x34) = uVar3;
      *(undefined4 *)((longlong)_Dst + -0x30) = uVar4;
      *(undefined4 *)((longlong)_Dst + -0x2c) = uVar5;
      FUN_1470d00c2(param_2 + 0x28 + lVar9,param_3 + 0x28 + lVar9);
      memcpy(_Dst,puVar1 + 0xe,0x98);
      FUN_145816fcc(param_2 + 0xd8 + lVar9,param_3 + 0xd8 + lVar9);
      *(undefined4 *)((longlong)_Dst + 0x1b8) = puVar1[0x7c];
      lVar9 = lVar9 + 0x200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866c7ae FUN_14866c7ae body=59 status=ok
// SIG undefined FUN_14866c7ae(void)

undefined8 FUN_14866c7ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866c7fa FUN_14866c7fa body=60 status=ok
// SIG undefined FUN_14866c7fa(void)

void FUN_14866c7fa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *param_2 = &PTR_FUN_14b0c4460;
    FUN_14129d1b2(param_2 + 0x1b);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14866c8b2 FUN_14866c8b2 body=98 status=ok
// SIG undefined FUN_14866c8b2(void)

undefined1 FUN_14866c8b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_14866b670(param_2 + 0x68,param_3 + 0x68);
    FUN_14866c9fe(param_2 + 0xf8,param_3 + 0xf8);
    param_2 = param_2 + 0x188;
    param_3 = param_3 + 0x188;
  }
  return 1;
}



// FUNCTION 14866c93c FUN_14866c93c body=59 status=ok
// SIG undefined FUN_14866c93c(void)

undefined8 FUN_14866c93c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866c988 FUN_14866c988 body=40 status=ok
// SIG undefined FUN_14866c988(void)

void FUN_14866c988(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_14589d2b8(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 14866c9fe FUN_14866c9fe body=122 status=ok
// SIG undefined FUN_14866c9fe(void)

void * FUN_14866c9fe(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_14866ca78(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14866ca78 FUN_14866ca78 body=104 status=ok
// SIG undefined FUN_14866ca78(void)

void FUN_14866ca78(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14866cae0(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 14866cae0 FUN_14866cae0 body=142 status=ok
// SIG undefined FUN_14866cae0(void)

void FUN_14866cae0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 14866cb70 FUN_14866cb70 body=57 status=ok
// SIG undefined FUN_14866cb70(void)

void FUN_14866cb70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a708 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a708 = FUN_140002ddd(FUN_1464ca9fe,uVar1,L"GbxBodyNodeState_MovingPlatform");
  }
  return;
}



// FUNCTION 14866cbda FUN_14866cbda body=176 status=ok
// SIG undefined FUN_14866cbda(void)

undefined8 FUN_14866cbda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar3 = *(undefined4 *)(lVar1 + 0x3c);
      uVar4 = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined4 *)(lVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x48);
      FUN_1406fa324(param_2 + lVar10 + 0x50,param_3 + lVar10 + 0x50);
      FUN_1486689b0(param_2 + lVar10 + 0x60,param_3 + lVar10 + 0x60);
      *(undefined1 *)(param_2 + lVar10 + 0x70) = *(undefined1 *)(param_3 + lVar10 + 0x70);
      lVar10 = lVar10 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866ccb2 FUN_14866ccb2 body=59 status=ok
// SIG undefined FUN_14866ccb2(void)

undefined8 FUN_14866ccb2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866ccf8 FUN_14866ccf8 body=32 status=ok
// SIG undefined FUN_14866ccf8(void)

void FUN_14866ccf8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1411203da(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14866cdbc FUN_14866cdbc body=176 status=ok
// SIG undefined FUN_14866cdbc(void)

undefined8 FUN_14866cdbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar3 = *(undefined4 *)(lVar1 + 0x3c);
      uVar4 = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined4 *)(lVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x48);
      FUN_1406fa324(param_2 + lVar10 + 0x50,param_3 + lVar10 + 0x50);
      FUN_1486689b0(param_2 + lVar10 + 0x60,param_3 + lVar10 + 0x60);
      *(undefined1 *)(param_2 + lVar10 + 0x70) = *(undefined1 *)(param_3 + lVar10 + 0x70);
      lVar10 = lVar10 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866ce94 FUN_14866ce94 body=59 status=ok
// SIG undefined FUN_14866ce94(void)

undefined8 FUN_14866ce94(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866ceda FUN_14866ceda body=32 status=ok
// SIG undefined FUN_14866ceda(void)

void FUN_14866ceda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1411203da(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14866cfac FUN_14866cfac body=91 status=ok
// SIG undefined FUN_14866cfac(void)

undefined1 FUN_14866cfac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_144983130(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866d030 FUN_14866d030 body=59 status=ok
// SIG undefined FUN_14866d030(void)

undefined8 FUN_14866d030(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866d076 FUN_14866d076 body=51 status=ok
// SIG undefined FUN_14866d076(void)

void FUN_14866d076(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b0c4b30;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 14866d16a FUN_14866d16a body=63 status=ok
// SIG undefined FUN_14866d16a(void)

undefined1 FUN_14866d16a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14866d304(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 14866d1d2 FUN_14866d1d2 body=59 status=ok
// SIG undefined FUN_14866d1d2(void)

undefined8 FUN_14866d1d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866d21e FUN_14866d21e body=38 status=ok
// SIG undefined FUN_14866d21e(void)

void FUN_14866d21e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_14866d292(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 14866d292 FUN_14866d292 body=113 status=ok
// SIG undefined FUN_14866d292(void)

void FUN_14866d292(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0c4d30;
  plVar1 = param_1 + 0xe;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x12) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x11)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x11)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1412218b2(param_1);
  return;
}



// FUNCTION 14866d304 FUN_14866d304 body=336 status=ok
// SIG undefined FUN_14866d304(void)

longlong FUN_14866d304(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *_Dst;
  undefined8 *_Src;
  
  FUN_1486666e8();
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  _Dst = (longlong *)(param_1 + 0x70);
  _Src = (undefined8 *)(param_2 + 0x70);
  bVar1 = *(byte *)(param_1 + 0x90);
  if (bVar1 == *(byte *)(param_2 + 0x90)) {
    if (0x18 < *(ushort *)(param_2 + 0x88)) {
      _Src = *(undefined8 **)(param_2 + 0x70);
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
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
      if (0x18 < *(ushort *)(param_1 + 0x88)) {
        plVar5 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar5);
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 0x90);
    uVar2 = *(ushort *)(param_2 + 0x88);
    *(ushort *)(param_1 + 0x88) = uVar2;
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
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  }
  return param_1;
}



// FUNCTION 14866d486 FUN_14866d486 body=63 status=ok
// SIG undefined FUN_14866d486(void)

undefined1 FUN_14866d486(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14866d5c6(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14866d4ee FUN_14866d4ee body=59 status=ok
// SIG undefined FUN_14866d4ee(void)

undefined8 FUN_14866d4ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866d53a FUN_14866d53a body=62 status=ok
// SIG undefined FUN_14866d53a(void)

void FUN_14866d53a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b0c8c80;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_1411203da(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 14866d5c6 FUN_14866d5c6 body=115 status=ok
// SIG undefined FUN_14866d5c6(void)

longlong FUN_14866d5c6(longlong param_1,longlong param_2)

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
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  FUN_1406fa324(param_1 + 0x50,param_2 + 0x50);
  FUN_1486689b0(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  FUN_144a67f5c(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 14866d666 FUN_14866d666 body=118 status=ok
// SIG undefined FUN_14866d666(void)

undefined8 FUN_14866d666(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_3 + 0x68);
    FUN_148668cae(param_2 + 0x70,param_3 + 0x70);
    FUN_148668d0c(param_2 + 0x80,param_3 + 0x80);
    *(undefined1 *)(param_2 + 0x110) = *(undefined1 *)(param_3 + 0x110);
    param_2 = param_2 + 0x118;
    param_3 = param_3 + 0x118;
  }
  return 1;
}



// FUNCTION 14866d704 FUN_14866d704 body=59 status=ok
// SIG undefined FUN_14866d704(void)

undefined8 FUN_14866d704(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866d750 FUN_14866d750 body=38 status=ok
// SIG undefined FUN_14866d750(void)

void FUN_14866d750(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1410a3b96(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 14866d80a FUN_14866d80a body=54 status=ok
// SIG undefined FUN_14866d80a(void)

undefined1 FUN_14866d80a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14866da7a(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 14866d840 FUN_14866d840 body=37 status=ok
// SIG undefined FUN_14866d840(void)

undefined8
FUN_14866d840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14886b314(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14866d866 FUN_14866d866 body=294 status=ok
// SIG undefined FUN_14866d866(void)

undefined4
FUN_14866d866(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [12];
  byte local_7c;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
    local_90 = param_7;
    local_98 = param_6;
    FUN_14886b57e(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined **)0x0;
  uStack_70 = 0;
  local_58 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 2) == 0) {
    uStack_60 = 0;
    local_58 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_78 = &PTR_FUN_14a544b40;
  }
  local_90 = param_7;
  local_98 = param_6;
  uVar1 = FUN_14886b57e(param_3,param_2,&local_78,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 4) != 0) {
    FUN_1448eac94(&local_78);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14866d98e FUN_14866d98e body=39 status=ok
// SIG undefined FUN_14866d98e(void)

void FUN_14866d98e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_14886b752(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14866d9c6 FUN_14866d9c6 body=59 status=ok
// SIG undefined FUN_14866d9c6(void)

undefined8 FUN_14866d9c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866da0c FUN_14866da0c body=32 status=ok
// SIG undefined FUN_14866da0c(void)

void FUN_14866da0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1448eac94(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14866da7a FUN_14866da7a body=240 status=ok
// SIG undefined FUN_14866da7a(void)

undefined8 FUN_14866da7a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (lVar1 == 0) {
LAB_14866dac9:
    FUN_144aa17a4(param_1);
  }
  else {
    lVar2 = FUN_1446f4bba();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_14866dac9;
    lVar2 = FUN_1463b3fac();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      uVar3 = 0;
      goto LAB_14866dad3;
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,lVar1);
    lVar2 = local_30;
    (**(code **)(*param_1 + 0x40))(param_1);
    param_1[1] = lVar2;
    (**(code **)*param_1)(param_1);
    uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1449b16b6(lVar1,param_1[2],uVar3,1);
  }
  uVar3 = 1;
LAB_14866dad3:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866dbdc FUN_14866dbdc body=99 status=ok
// SIG undefined FUN_14866dbdc(void)

undefined8 FUN_14866dbdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x38);
      uVar2 = *(undefined4 *)(param_3 + -0x34);
      uVar3 = *(undefined4 *)(param_3 + -0x30);
      uVar4 = *(undefined4 *)(param_3 + -0x2c);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x38) = uVar1;
      *(undefined4 *)(param_2 + -0x34) = uVar2;
      *(undefined4 *)(param_2 + -0x30) = uVar3;
      *(undefined4 *)(param_2 + -0x2c) = uVar4;
      FUN_1470d00c2(param_2 + -0x18,param_3 + -0x18);
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_14866da7a(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866dc60 FUN_14866dc60 body=59 status=ok
// SIG undefined FUN_14866dc60(void)

undefined8 FUN_14866dc60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866dca6 FUN_14866dca6 body=32 status=ok
// SIG undefined FUN_14866dca6(void)

void FUN_14866dca6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_145880d66(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14866dd40 FUN_14866dd40 body=63 status=ok
// SIG undefined FUN_14866dd40(void)

undefined1 FUN_14866dd40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486692c2(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14866dda8 FUN_14866dda8 body=59 status=ok
// SIG undefined FUN_14866dda8(void)

undefined8 FUN_14866dda8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866ddf4 FUN_14866ddf4 body=38 status=ok
// SIG undefined FUN_14866ddf4(void)

void FUN_14866ddf4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_140160e38(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 14866de9a FUN_14866de9a body=176 status=ok
// SIG undefined FUN_14866de9a(void)

undefined8 FUN_14866de9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar3 = *(undefined4 *)(lVar1 + 0x3c);
      uVar4 = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined4 *)(lVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x48);
      FUN_1406fa324(param_2 + lVar10 + 0x50,param_3 + lVar10 + 0x50);
      FUN_1486689b0(param_2 + lVar10 + 0x60,param_3 + lVar10 + 0x60);
      *(undefined1 *)(param_2 + lVar10 + 0x70) = *(undefined1 *)(param_3 + lVar10 + 0x70);
      lVar10 = lVar10 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866df72 FUN_14866df72 body=59 status=ok
// SIG undefined FUN_14866df72(void)

undefined8 FUN_14866df72(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866dfb8 FUN_14866dfb8 body=32 status=ok
// SIG undefined FUN_14866dfb8(void)

void FUN_14866dfb8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1411203da(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14866e0b2 FUN_14866e0b2 body=118 status=ok
// SIG undefined FUN_14866e0b2(void)

undefined8 FUN_14866e0b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_3 + 0x68);
    FUN_148668cae(param_2 + 0x70,param_3 + 0x70);
    FUN_148668d0c(param_2 + 0x80,param_3 + 0x80);
    *(undefined1 *)(param_2 + 0x110) = *(undefined1 *)(param_3 + 0x110);
    param_2 = param_2 + 0x118;
    param_3 = param_3 + 0x118;
  }
  return 1;
}



// FUNCTION 14866e150 FUN_14866e150 body=59 status=ok
// SIG undefined FUN_14866e150(void)

undefined8 FUN_14866e150(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866e19c FUN_14866e19c body=38 status=ok
// SIG undefined FUN_14866e19c(void)

void FUN_14866e19c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1410a3b96(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 14866e2cc FUN_14866e2cc body=92 status=ok
// SIG undefined FUN_14866e2cc(void)

undefined8 FUN_14866e2cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x17) = *(undefined4 *)(param_3 + 0x17);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866e350 FUN_14866e350 body=59 status=ok
// SIG undefined FUN_14866e350(void)

undefined8 FUN_14866e350(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866e396 FUN_14866e396 body=32 status=ok
// SIG undefined FUN_14866e396(void)

void FUN_14866e396(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14866e404 FUN_14866e404 body=43 status=ok
// SIG undefined FUN_14866e404(void)

undefined8 FUN_14866e404(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14866e430 FUN_14866e430 body=55 status=ok
// SIG undefined FUN_14866e430(void)

void FUN_14866e430(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a828 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a828 = FUN_140002ddd(FUN_1464caf8d,uVar1,L"GbxBodyNodeSettings_Target");
  }
  return;
}



// FUNCTION 14866e49c FUN_14866e49c body=89 status=ok
// SIG undefined FUN_14866e49c(void)

undefined8 FUN_14866e49c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_14866e5fa(param_2 + 0x68,param_3 + 0x68);
    *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_3 + 0xf8);
    param_2 = param_2 + 0x100;
    param_3 = param_3 + 0x100;
  }
  return 1;
}



// FUNCTION 14866e51e FUN_14866e51e body=59 status=ok
// SIG undefined FUN_14866e51e(void)

undefined8 FUN_14866e51e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866e56a FUN_14866e56a body=65 status=ok
// SIG undefined FUN_14866e56a(void)

void FUN_14866e56a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *param_2 = &PTR_FUN_14b0c8db0;
    if (param_2[0x1d] != 0) {
      FUN_1400020a8();
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14866e5fa FUN_14866e5fa body=122 status=ok
// SIG undefined FUN_14866e5fa(void)

void * FUN_14866e5fa(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_14866e674(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14866e674 FUN_14866e674 body=104 status=ok
// SIG undefined FUN_14866e674(void)

void FUN_14866e674(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14866e6dc(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 14866e6dc FUN_14866e6dc body=142 status=ok
// SIG undefined FUN_14866e6dc(void)

void FUN_14866e6dc(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 14866e76c FUN_14866e76c body=73 status=ok
// SIG undefined FUN_14866e76c(void)

undefined8 * FUN_14866e76c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0c8db0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1412218b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14866e7b6 FUN_14866e7b6 body=55 status=ok
// SIG undefined FUN_14866e7b6(void)

void FUN_14866e7b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a840 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a840 = FUN_140002ddd(FUN_1464cb023,uVar1,L"GbxBodyNodeState_Target");
  }
  return;
}



// FUNCTION 14866e846 FUN_14866e846 body=63 status=ok
// SIG undefined FUN_14866e846(void)

undefined1 FUN_14866e846(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 14866e8ae FUN_14866e8ae body=59 status=ok
// SIG undefined FUN_14866e8ae(void)

undefined8 FUN_14866e8ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866e8fa FUN_14866e8fa body=38 status=ok
// SIG undefined FUN_14866e8fa(void)

void FUN_14866e8fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 14866e978 FUN_14866e978 body=37 status=ok
// SIG undefined FUN_14866e978(void)

void FUN_14866e978(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  return;
}



// FUNCTION 14866ea00 FUN_14866ea00 body=59 status=ok
// SIG undefined FUN_14866ea00(void)

undefined8 FUN_14866ea00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866ea4c FUN_14866ea4c body=38 status=ok
// SIG undefined FUN_14866ea4c(void)

void FUN_14866ea4c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1403d7c6c(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 14866eb62 FUN_14866eb62 body=39 status=ok
// SIG undefined FUN_14866eb62(void)

undefined8 FUN_14866eb62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14866ebb2 FUN_14866ebb2 body=59 status=ok
// SIG undefined FUN_14866ebb2(void)

undefined8 FUN_14866ebb2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866ec54 FUN_14866ec54 body=99 status=ok
// SIG undefined FUN_14866ec54(void)

void FUN_14866ec54(undefined8 param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140416388(param_2 + 1,0);
  *(undefined4 *)(param_2 + 7) = 0x1010101;
  *(undefined1 *)((longlong)param_2 + 0x3c) = 1;
  param_2[8] = 0;
  param_2[9] = 0xffffffff7fffffff;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 14866ecb8 FUN_14866ecb8 body=69 status=ok
// SIG undefined FUN_14866ecb8(void)

void FUN_14866ecb8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_140416388(param_2 + 1,0);
  *(undefined4 *)(param_2 + 7) = 0x1010101;
  *(undefined1 *)((longlong)param_2 + 0x3c) = 1;
  param_2[8] = 0;
  param_2[9] = 0xffffffff7fffffff;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 14866ed22 FUN_14866ed22 body=54 status=ok
// SIG undefined FUN_14866ed22(void)

undefined1 FUN_14866ed22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1464cc3ac(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14866ed80 FUN_14866ed80 body=59 status=ok
// SIG undefined FUN_14866ed80(void)

undefined8 FUN_14866ed80(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14866edc6 FUN_14866edc6 body=38 status=ok
// SIG undefined FUN_14866edc6(void)

void FUN_14866edc6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 0x50) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14866ee4c FUN_14866ee4c body=44 status=ok
// SIG undefined FUN_14866ee4c(void)

void FUN_14866ee4c(undefined8 param_1,longlong *param_2)

{
  FUN_144909e75(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14866ee8e FUN_14866ee8e body=54 status=ok
// SIG undefined FUN_14866ee8e(void)

undefined1 FUN_14866ee8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140123c3c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14866eeec FUN_14866eeec body=59 status=ok
// SIG undefined FUN_14866eeec(void)

undefined8 FUN_14866eeec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


