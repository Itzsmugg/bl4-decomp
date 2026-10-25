// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14862c450 FUN_14862c450 body=80 status=ok
// SIG undefined FUN_14862c450(void)

undefined1 FUN_14862c450(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_14477b16e();
      lVar1 = lVar1 + 0x8d0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862c4c8 FUN_14862c4c8 body=59 status=ok
// SIG undefined FUN_14862c4c8(void)

undefined8 FUN_14862c4c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862c56c FUN_14862c56c body=64 status=ok
// SIG undefined FUN_14862c56c(void)

void FUN_14862c56c(longlong param_1)

{
  if (*(char *)(param_1 + 0x8d0) == '\x01') {
    if (*(longlong *)(param_1 + 0x8c0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x838) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x8d0) = 0;
  }
  return;
}



// FUNCTION 14862c5de FUN_14862c5de body=94 status=ok
// SIG undefined FUN_14862c5de(void)

undefined8 FUN_14862c5de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401f3db8(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    FUN_144a7bb84(param_2 + 0x28,param_3 + 0x28);
    FUN_144a82394(param_2 + 0x40,param_3 + 0x40);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 14862c664 FUN_14862c664 body=59 status=ok
// SIG undefined FUN_14862c664(void)

undefined8 FUN_14862c664(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862c6aa FUN_14862c6aa body=32 status=ok
// SIG undefined FUN_14862c6aa(void)

void FUN_14862c6aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14862c70c(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14862c70c FUN_14862c70c body=87 status=ok
// SIG undefined FUN_14862c70c(void)

void FUN_14862c70c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x40) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x50));
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014862c754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14862c796 FUN_14862c796 body=102 status=ok
// SIG undefined FUN_14862c796(void)

undefined8 FUN_14862c796(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30);
      FUN_144a7bb84(param_2 + -0x20,param_3 + -0x20);
      FUN_144a82394(param_2 + -8,param_3 + -8);
      FUN_14862c916(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862c824 FUN_14862c824 body=59 status=ok
// SIG undefined FUN_14862c824(void)

undefined8 FUN_14862c824(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862c86a FUN_14862c86a body=32 status=ok
// SIG undefined FUN_14862c86a(void)

void FUN_14862c86a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14862c8cc(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14862c8cc FUN_14862c8cc body=74 status=ok
// SIG undefined FUN_14862c8cc(void)

void FUN_14862c8cc(longlong param_1)

{
  FUN_140782dbc(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x50));
    return;
  }
  return;
}



// FUNCTION 14862c916 FUN_14862c916 body=93 status=ok
// SIG undefined FUN_14862c916(void)

undefined8 * FUN_14862c916(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140782dbc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14862c974(param_1,iVar1);
      FUN_14862c9e7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14862c974 FUN_14862c974 body=115 status=ok
// SIG undefined FUN_14862c974(void)

void FUN_14862c974(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14862c9e7 FUN_14862c9e7 body=65 status=ok
// SIG undefined FUN_14862c9e7(void)

void FUN_14862c9e7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    FUN_1412bd664(param_1 + 0x18,param_2 + 0x18);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 14862ca80 FUN_14862ca80 body=88 status=ok
// SIG undefined FUN_14862ca80(void)

undefined1 FUN_14862ca80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
    do {
      FUN_141289ada(param_2 + -0x60,param_3 + -0x60);
      FUN_14862cc66(param_2 + -0x50,param_3 + -0x50);
      FUN_14862cc08(param_2,param_3);
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862cb00 FUN_14862cb00 body=59 status=ok
// SIG undefined FUN_14862cb00(void)

undefined8 FUN_14862cb00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862cb46 FUN_14862cb46 body=32 status=ok
// SIG undefined FUN_14862cb46(void)

void FUN_14862cb46(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_14862cba0(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14862cba0 FUN_14862cba0 body=103 status=ok
// SIG undefined FUN_14862cba0(void)

void FUN_14862cba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0158e0;
  FUN_140d8c705(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c730(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14862cc08 FUN_14862cc08 body=93 status=ok
// SIG undefined FUN_14862cc08(void)

undefined8 * FUN_14862cc08(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d8c705(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14862ce6a(param_1,iVar1);
      FUN_14862cedf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14862cc66 FUN_14862cc66 body=122 status=ok
// SIG undefined FUN_14862cc66(void)

longlong FUN_14862cc66(longlong param_1,longlong param_2)

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
    FUN_14862cce0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14862cce0 FUN_14862cce0 body=225 status=ok
// SIG undefined FUN_14862cce0(void)

undefined8 * FUN_14862cce0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140d8c768(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14488f93c(param_1);
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
          FUN_14862cdc2(puVar6,puVar4);
          FUN_14862ce0a(puVar6 + 6,puVar4 + 6);
          *(undefined8 *)(puVar6 + 0x16) = *(undefined8 *)(puVar4 + 0x16);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x18;
        puVar6 = puVar6 + 0x18;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14862cdc2 FUN_14862cdc2 body=71 status=ok
// SIG undefined FUN_14862cdc2(void)

undefined8 * FUN_14862cdc2(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14862ce0a FUN_14862ce0a body=95 status=ok
// SIG undefined FUN_14862ce0a(void)

longlong FUN_14862ce0a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1412bd664();
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 0x38) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    FUN_14862c974((undefined8 *)(param_1 + 0x30),iVar1,0);
    FUN_14862c9e7(*(undefined8 *)(param_1 + 0x30),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14862ce6a FUN_14862ce6a body=117 status=ok
// SIG undefined FUN_14862ce6a(void)

void FUN_14862ce6a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    iVar2 = (int)(uVar1 / 0xb8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14862cedf FUN_14862cedf body=60 status=ok
// SIG undefined FUN_14862cedf(void)

void FUN_14862cedf(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14862cf1c(param_1,param_2);
    param_1 = param_1 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return;
}



// FUNCTION 14862cf1c FUN_14862cf1c body=100 status=ok
// SIG undefined FUN_14862cf1c(void)

undefined4 * FUN_14862cf1c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  param_1[3] = param_2[3];
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1401f3da4(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  FUN_1401f3da4(param_1 + 0x10,param_2 + 0x10);
  FUN_1412bd664(param_1 + 0x16,param_2 + 0x16);
  FUN_1412bd664(param_1 + 0x22,param_2 + 0x22);
  return param_1;
}



// FUNCTION 14862cf82 FUN_14862cf82 body=28 status=ok
// SIG undefined FUN_14862cf82(void)

undefined8 FUN_14862cf82(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14862cff6 FUN_14862cff6 body=115 status=ok
// SIG undefined FUN_14862cff6(void)

undefined8 FUN_14862cff6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar10,param_3 + 8 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x28 + lVar10);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x28 + lVar10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(undefined4 *)(param_2 + 0x38 + lVar10) = *(undefined4 *)(param_3 + 0x38 + lVar10);
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862d092 FUN_14862d092 body=59 status=ok
// SIG undefined FUN_14862d092(void)

undefined8 FUN_14862d092(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d0d8 FUN_14862d0d8 body=43 status=ok
// SIG undefined FUN_14862d0d8(void)

void FUN_14862d0d8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14862d16a FUN_14862d16a body=63 status=ok
// SIG undefined FUN_14862d16a(void)

undefined1 FUN_14862d16a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862d294(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 14862d1d2 FUN_14862d1d2 body=59 status=ok
// SIG undefined FUN_14862d1d2(void)

undefined8 FUN_14862d1d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d21e FUN_14862d21e body=40 status=ok
// SIG undefined FUN_14862d21e(void)

void FUN_14862d21e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_1457a63dc(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14862d294 FUN_14862d294 body=177 status=ok
// SIG undefined FUN_14862d294(void)

undefined4 * FUN_14862d294(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  param_1[3] = param_2[3];
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1401f3db8(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  FUN_1401f3db8(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  param_1[0x18] = param_2[0x18];
  FUN_144a7bb84(param_1 + 0x1a,param_2 + 0x1a);
  FUN_144a82394(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  param_1[0x24] = param_2[0x24];
  FUN_144a7bb84(param_1 + 0x26,param_2 + 0x26);
  FUN_144a82394(param_1 + 0x2c,param_2 + 0x2c);
  return param_1;
}



// FUNCTION 14862d394 FUN_14862d394 body=49 status=ok
// SIG undefined FUN_14862d394(void)

void FUN_14862d394(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1a58) + 0x20))(param_1 + 0x1a58);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14862d3ca FUN_14862d3ca body=170 status=ok
// SIG undefined FUN_14862d3ca(void)

void FUN_14862d3ca(longlong param_1,longlong param_2)

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
  (**(code **)(*(longlong *)(param_1 + 0x1a58) + 0x28))(param_1 + 0x1a58,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d4d0 FUN_14862d4d0 body=75 status=ok
// SIG undefined FUN_14862d4d0(void)

void FUN_14862d4d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1418738ee(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d520 FUN_14862d520 body=38 status=ok
// SIG undefined FUN_14862d520(void)

void FUN_14862d520(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x20))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14862d54a FUN_14862d54a body=159 status=ok
// SIG undefined FUN_14862d54a(void)

void FUN_14862d54a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x28))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d5f6 FUN_14862d5f6 body=49 status=ok
// SIG undefined FUN_14862d5f6(void)

void FUN_14862d5f6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x20))(param_1 + 0x3c8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14862d62c FUN_14862d62c body=170 status=ok
// SIG undefined FUN_14862d62c(void)

void FUN_14862d62c(longlong param_1,longlong param_2)

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
  (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x28))(param_1 + 0x3c8,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d6fa FUN_14862d6fa body=112 status=ok
// SIG undefined FUN_14862d6fa(void)

void FUN_14862d6fa(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_4;
  uStack_2c = param_4[1];
  uStack_28 = param_4[2];
  uStack_24 = param_4[3];
  local_20 = *(undefined8 *)(param_4 + 4);
  local_40 = param_2;
  local_38 = param_3;
  uVar1 = FUN_14477b072(local_30,DAT_14cb55f50);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d76c FUN_14862d76c body=112 status=ok
// SIG undefined FUN_14862d76c(void)

void FUN_14862d76c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_4;
  uStack_2c = param_4[1];
  uStack_28 = param_4[2];
  uStack_24 = param_4[3];
  local_20 = *(undefined8 *)(param_4 + 4);
  local_40 = param_2;
  local_38 = param_3;
  uVar1 = FUN_14477b072(local_30,DAT_14cb55f60);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d7ee FUN_14862d7ee body=103 status=ok
// SIG undefined FUN_14862d7ee(void)

void FUN_14862d7ee(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar1 = FUN_14477b072(local_38,DAT_14cb56010);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d856 FUN_14862d856 body=103 status=ok
// SIG undefined FUN_14862d856(void)

void FUN_14862d856(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar1 = FUN_14477b072(local_38,DAT_14cb56020);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d8be FUN_14862d8be body=109 status=ok
// SIG undefined FUN_14862d8be(void)

void FUN_14862d8be(longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  local_20 = *(undefined8 *)(param_3 + 4);
  local_38[0] = param_2;
  uVar1 = FUN_14477b072(local_30,DAT_14cb56030);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862d92c FUN_14862d92c body=109 status=ok
// SIG undefined FUN_14862d92c(void)

void FUN_14862d92c(longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  local_20 = *(undefined8 *)(param_3 + 4);
  local_38[0] = param_2;
  uVar1 = FUN_14477b072(local_30,DAT_14cb56040);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862db72 FUN_14862db72 body=155 status=ok
// SIG undefined FUN_14862db72(void)

void FUN_14862db72(undefined8 *param_1)

{
  param_1[0x22] = &DAT_14a176f00;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  param_1[0x22] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x23);
  param_1[0x11] = &DAT_14a176f00;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x12);
  *param_1 = &DAT_14a176f00;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  return;
}



// FUNCTION 14862dc0e FUN_14862dc0e body=45 status=ok
// SIG undefined FUN_14862dc0e(void)

longlong FUN_14862dc0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862dc3c FUN_14862dc3c body=45 status=ok
// SIG undefined FUN_14862dc3c(void)

longlong FUN_14862dc3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862dc70 FUN_14862dc70 body=45 status=ok
// SIG undefined FUN_14862dc70(void)

longlong FUN_14862dc70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862dcac FUN_14862dcac body=48 status=ok
// SIG undefined FUN_14862dcac(void)

longlong FUN_14862dcac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862dce4 FUN_14862dce4 body=48 status=ok
// SIG undefined FUN_14862dce4(void)

longlong FUN_14862dce4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862dd1c FUN_14862dd1c body=48 status=ok
// SIG undefined FUN_14862dd1c(void)

longlong FUN_14862dd1c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862dd5e FUN_14862dd5e body=26 status=ok
// SIG undefined FUN_14862dd5e(void)

undefined8 FUN_14862dd5e(longlong param_1,undefined8 param_2)

{
  FUN_1487c5e0a(param_1 + -8);
  return param_2;
}



// FUNCTION 14862dd82 FUN_14862dd82 body=48 status=ok
// SIG undefined FUN_14862dd82(void)

longlong FUN_14862dd82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862ddba FUN_14862ddba body=48 status=ok
// SIG undefined FUN_14862ddba(void)

longlong FUN_14862ddba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862de0a FUN_14862de0a body=48 status=ok
// SIG undefined FUN_14862de0a(void)

longlong FUN_14862de0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862de3a FUN_14862de3a body=48 status=ok
// SIG undefined FUN_14862de3a(void)

longlong FUN_14862de3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862de8e FUN_14862de8e body=48 status=ok
// SIG undefined FUN_14862de8e(void)

longlong FUN_14862de8e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862debe FUN_14862debe body=48 status=ok
// SIG undefined FUN_14862debe(void)

longlong FUN_14862debe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862def6 FUN_14862def6 body=48 status=ok
// SIG undefined FUN_14862def6(void)

longlong FUN_14862def6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862df36 FUN_14862df36 body=21 status=ok
// SIG undefined FUN_14862df36(void)

bool FUN_14862df36(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  return lVar1 != 0;
}



// FUNCTION 14862df6c FUN_14862df6c body=48 status=ok
// SIG undefined FUN_14862df6c(void)

longlong FUN_14862df6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862dfa4 FUN_14862dfa4 body=48 status=ok
// SIG undefined FUN_14862dfa4(void)

longlong FUN_14862dfa4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862dfe8 FUN_14862dfe8 body=48 status=ok
// SIG undefined FUN_14862dfe8(void)

longlong FUN_14862dfe8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e020 FUN_14862e020 body=48 status=ok
// SIG undefined FUN_14862e020(void)

longlong FUN_14862e020(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e058 FUN_14862e058 body=48 status=ok
// SIG undefined FUN_14862e058(void)

longlong FUN_14862e058(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e090 FUN_14862e090 body=48 status=ok
// SIG undefined FUN_14862e090(void)

longlong FUN_14862e090(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e0c8 FUN_14862e0c8 body=157 status=ok
// SIG undefined FUN_14862e0c8(void)

undefined8 FUN_14862e0c8(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406c9d00(param_1 + 0x508,&local_58);
  if (local_50 == 0) {
    local_50 = FUN_140927942();
  }
  uVar1 = FUN_14477b664(local_50);
  local_40 = local_58;
  uVar1 = FUN_14477b664(uVar1);
  local_38 = FUN_14477b664(uVar1);
  local_30 = local_48;
  FUN_1411f1bdc(param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862e166 FUN_14862e166 body=48 status=ok
// SIG undefined FUN_14862e166(void)

longlong FUN_14862e166(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e1a0 FUN_14862e1a0 body=48 status=ok
// SIG undefined FUN_14862e1a0(void)

longlong FUN_14862e1a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e1d8 FUN_14862e1d8 body=48 status=ok
// SIG undefined FUN_14862e1d8(void)

longlong FUN_14862e1d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e218 FUN_14862e218 body=48 status=ok
// SIG undefined FUN_14862e218(void)

longlong FUN_14862e218(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e258 FUN_14862e258 body=48 status=ok
// SIG undefined FUN_14862e258(void)

longlong FUN_14862e258(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e290 FUN_14862e290 body=48 status=ok
// SIG undefined FUN_14862e290(void)

longlong FUN_14862e290(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e2fe FUN_14862e2fe body=578 status=ok
// SIG undefined FUN_14862e2fe(void)

double * FUN_14862e2fe(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  double *pdVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double local_60;
  
  dVar7 = (double)(DAT_14c707940 ^ (ulonglong)auStack_b8);
  lVar1 = *(longlong *)(param_1 + -0x1890);
  local_60 = dVar7;
  if (lVar1 == 0) {
    local_68 = DAT_14c846508;
    local_78 = (undefined4)DAT_14c8464f8;
    uStack_74 = DAT_14c8464f8._4_4_;
    uStack_70 = (undefined4)DAT_14c846500;
    uStack_6c = DAT_14c846500._4_4_;
  }
  else {
    dVar10 = *(double *)(lVar1 + 0x240);
    dVar11 = *(double *)(lVar1 + 0x248);
    dVar4 = *(double *)(lVar1 + 0x250);
    dVar5 = *(double *)(lVar1 + 600);
    pdVar8 = *(double **)(lVar1 + 0x228);
    local_98 = dVar10;
    uStack_90 = dVar11;
    local_88 = dVar4;
    uStack_80 = dVar5;
    if (pdVar8 == (double *)0x0) {
      param_1 = 0x40;
      pdVar8 = (double *)FUN_14001cc68(0x40,0x10);
      dVar7 = DAT_14c8463d8;
      *pdVar8 = DAT_14c8463d0;
      pdVar8[1] = dVar7;
      dVar7 = DAT_14c8463e8;
      pdVar8[2] = DAT_14c8463e0;
      pdVar8[3] = dVar7;
      dVar7 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar8[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar8[5] = dVar7;
      dVar7 = DAT_14c846508;
      pdVar8[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar8;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar11 != pdVar8[1]);
    auVar2._0_8_ = -(ulonglong)(dVar10 != *pdVar8);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar11 != pdVar8[1]) >> 0x20);
    iVar6 = movmskpd(SUB84(dVar7,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar5 != pdVar8[3]);
    auVar3._0_8_ = -(ulonglong)(dVar4 != pdVar8[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar8[3]) >> 0x20);
    uVar9 = movmskpd((int)param_1,auVar3);
    if ((uVar9 & 0x3fffffff) != 0 || iVar6 != 0) {
      *(undefined4 *)(pdVar8 + 2) = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar8 + 0x14) = local_88._4_4_;
      *(undefined4 *)(pdVar8 + 3) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar8 + 0x1c) = uStack_80._4_4_;
      *(undefined4 *)pdVar8 = (undefined4)local_98;
      *(undefined4 *)((longlong)pdVar8 + 4) = local_98._4_4_;
      *(undefined4 *)(pdVar8 + 1) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)pdVar8 + 0xc) = uStack_90._4_4_;
      FUN_1448052ee(&local_98,&local_78);
      pdVar8[6] = local_68;
      pdVar8[4] = (double)CONCAT44(uStack_74,local_78);
      pdVar8[5] = (double)CONCAT44(uStack_6c,uStack_70);
    }
    local_68 = pdVar8[6];
    local_78 = *(undefined4 *)(pdVar8 + 4);
    uStack_74 = *(undefined4 *)((longlong)pdVar8 + 0x24);
    uStack_70 = *(undefined4 *)(pdVar8 + 5);
    uStack_6c = *(undefined4 *)((longlong)pdVar8 + 0x2c);
  }
  FUN_144a7484c(&local_78,&local_98);
  dVar10 = local_98 * 0.0 + uStack_90 * -0.0;
  dVar11 = uStack_90 - local_88 * 0.0;
  dVar7 = local_88 * 0.0 - local_98;
  dVar10 = dVar10 + dVar10;
  dVar7 = dVar7 + dVar7;
  dVar11 = dVar11 + dVar11;
  *param_2 = (uStack_90 * dVar10 - dVar7 * local_88) + dVar11 * uStack_80 + 0.0;
  param_2[1] = (local_88 * dVar11 - dVar10 * local_98) + uStack_80 * dVar7 + 0.0;
  param_2[2] = (local_98 * dVar7 - dVar11 * uStack_90) + uStack_80 * dVar10 + 1.0;
  if (((ulonglong)local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862e542 FUN_14862e542 body=321 status=ok
// SIG undefined FUN_14862e542(void)

double * FUN_14862e542(longlong *param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x30))(param_1,&local_58);
  (**(code **)(*param_1 + 0x38))(param_1,&local_70,param_3);
  dVar2 = local_70 * local_50 - local_58 * local_68;
  dVar1 = local_58 * local_60 - local_70 * local_48;
  dVar3 = local_68 * local_48 - local_50 * local_60;
  dVar4 = dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (dVar4 < 9.99999993922529e-09) {
      param_2[2] = DAT_14c8464f0;
      dVar1 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = dVar1;
      goto LAB_14862e614;
    }
    dVar4 = 1.0 / SQRT(dVar4);
    dVar2 = dVar2 * dVar4;
    dVar1 = dVar1 * dVar4;
    dVar3 = dVar3 * dVar4;
  }
  *param_2 = dVar3;
  param_2[1] = dVar1;
  param_2[2] = dVar2;
LAB_14862e614:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862e6b2 FUN_14862e6b2 body=48 status=ok
// SIG undefined FUN_14862e6b2(void)

longlong FUN_14862e6b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a60;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e780 FUN_14862e780 body=45 status=ok
// SIG undefined FUN_14862e780(void)

longlong FUN_14862e780(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14151c000(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862e7d2 FUN_14862e7d2 body=63 status=ok
// SIG undefined FUN_14862e7d2(void)

undefined1 FUN_14862e7d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862ea1c(param_2,param_3);
    param_3 = param_3 + 0x180;
    param_2 = param_2 + 0x180;
  }
  return 1;
}



// FUNCTION 14862e83a FUN_14862e83a body=59 status=ok
// SIG undefined FUN_14862e83a(void)

undefined8 FUN_14862e83a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862e886 FUN_14862e886 body=38 status=ok
// SIG undefined FUN_14862e886(void)

void FUN_14862e886(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_14862e9cc(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 14862e8ec FUN_14862e8ec body=220 status=ok
// SIG undefined FUN_14862e8ec(void)

undefined8 * FUN_14862e8ec(undefined8 *param_1)

{
  FUN_1404e2388();
  *param_1 = &PTR_FUN_14b01fe10;
  param_1[0x12] = &PTR_FUN_14b023b08;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3b9cbb9e;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x42c80000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xf00000d0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return param_1;
}



// FUNCTION 14862e9cc FUN_14862e9cc body=79 status=ok
// SIG undefined FUN_14862e9cc(void)

void FUN_14862e9cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b01fe10;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140485912(param_1 + 0x12);
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 14862ea1c FUN_14862ea1c body=140 status=ok
// SIG undefined FUN_14862ea1c(void)

longlong FUN_14862ea1c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_147e1a790();
  FUN_140e8aa92(param_1 + 0x90,param_2 + 0x90);
  FUN_140d02432(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined2 *)(param_1 + 0x148) = *(undefined2 *)(param_2 + 0x148);
  FUN_144a787a6(param_1 + 0x150,param_2 + 0x150);
  uVar1 = *(undefined8 *)(param_2 + 0x165);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x165) = uVar1;
  FUN_1406fa324(param_1 + 0x170,param_2 + 0x170);
  return param_1;
}



// FUNCTION 14862eaaa FUN_14862eaaa body=152 status=ok
// SIG undefined FUN_14862eaaa(void)

void FUN_14862eaaa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 0xd,0,0x88);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b0200d0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0x80;
  *(undefined4 *)(param_2 + 0x11) = 0xffffffff;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0xf;
  *(undefined1 *)(param_2 + 0x1b) = 1;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  return;
}



// FUNCTION 14862ebf0 FUN_14862ebf0 body=63 status=ok
// SIG undefined FUN_14862ebf0(void)

undefined1 FUN_14862ebf0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862edec(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 14862ec58 FUN_14862ec58 body=59 status=ok
// SIG undefined FUN_14862ec58(void)

undefined8 FUN_14862ec58(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862eca4 FUN_14862eca4 body=40 status=ok
// SIG undefined FUN_14862eca4(void)

void FUN_14862eca4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_14862ed78(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 14862ed1a FUN_14862ed1a body=38 status=ok
// SIG undefined FUN_14862ed1a(void)

undefined8 FUN_14862ed1a(undefined8 param_1,int param_2)

{
  FUN_14862ed78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862ed40 FUN_14862ed40 body=55 status=ok
// SIG undefined FUN_14862ed40(void)

void FUN_14862ed40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55c98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55c98 = FUN_140002ddd(FUN_1464b53ef,uVar1,L"CineInventoryActorInstanceData");
  }
  return;
}



// FUNCTION 14862ed78 FUN_14862ed78 body=115 status=ok
// SIG undefined FUN_14862ed78(void)

void FUN_14862ed78(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0200d0;
  plVar3 = (longlong *)param_1[0x1f];
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
  FUN_140368b56(param_1 + 3);
  *param_1 = &PTR_FUN_14ab50b00;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014862eddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14862edec FUN_14862edec body=175 status=ok
// SIG undefined FUN_14862edec(void)

longlong FUN_14862edec(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_1407b25f0(param_1 + 0x18,param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0xf0);
  lVar4 = *(longlong *)(param_2 + 0xf8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  *(longlong *)(param_1 + 0xf8) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  return param_1;
}



// FUNCTION 14862eec0 FUN_14862eec0 body=63 status=ok
// SIG undefined FUN_14862eec0(void)

undefined1 FUN_14862eec0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862efea(param_2,param_3);
    param_3 = param_3 + 0x370;
    param_2 = param_2 + 0x370;
  }
  return 1;
}



// FUNCTION 14862ef28 FUN_14862ef28 body=59 status=ok
// SIG undefined FUN_14862ef28(void)

undefined8 FUN_14862ef28(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862ef74 FUN_14862ef74 body=40 status=ok
// SIG undefined FUN_14862ef74(void)

void FUN_14862ef74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x370) == '\x01') {
    FUN_1458260f8(param_2);
    *(undefined1 *)(param_2 + 0x370) = 0;
  }
  return;
}



// FUNCTION 14862efea FUN_14862efea body=292 status=ok
// SIG undefined FUN_14862efea(void)

longlong FUN_14862efea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_14862f10e();
  *(byte *)(param_1 + 0x228) = *(byte *)(param_1 + 0x228) & 0xfe | *(byte *)(param_2 + 0x228) & 1;
  lVar1 = *(longlong *)(param_2 + 0x230);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x230);
    }
  }
  *(longlong *)(param_1 + 0x230) = lVar1;
  FUN_140c99494(param_1 + 0x238,param_2 + 0x238);
  lVar1 = *(longlong *)(param_2 + 0x248);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x248);
    }
  }
  *(longlong *)(param_1 + 0x248) = lVar1;
  FUN_140c9966e(param_1 + 0x250,param_2 + 0x250);
  FUN_140c99494(param_1 + 0x2a0,param_2 + 0x2a0);
  lVar1 = *(longlong *)(param_2 + 0x2b0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x2b0);
    }
  }
  *(longlong *)(param_1 + 0x2b0) = lVar1;
  FUN_140c99494(param_1 + 0x2b8,param_2 + 0x2b8);
  memcpy((void *)(param_1 + 0x2c8),(void *)(param_2 + 0x2c8),0xa4);
  return param_1;
}



// FUNCTION 14862f10e FUN_14862f10e body=257 status=ok
// SIG undefined FUN_14862f10e(void)

longlong FUN_14862f10e(longlong param_1,longlong param_2)

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
  
  FUN_1470d0d20();
  FUN_14862f210(param_1 + 0xa8,param_2 + 0xa8);
  uVar9 = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(undefined4 *)(param_2 + 200);
  uVar2 = *(undefined4 *)(param_2 + 0xcc);
  uVar3 = *(undefined4 *)(param_2 + 0xd0);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  uVar5 = *(undefined4 *)(param_2 + 0xd8);
  uVar6 = *(undefined4 *)(param_2 + 0xdc);
  uVar7 = *(undefined4 *)(param_2 + 0xe0);
  uVar8 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar9;
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  *(undefined4 *)(param_1 + 0xd8) = uVar5;
  *(undefined4 *)(param_1 + 0xdc) = uVar6;
  *(undefined4 *)(param_1 + 0xe0) = uVar7;
  *(undefined4 *)(param_1 + 0xe4) = uVar8;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  FUN_14862f260(param_1 + 0x108,param_2 + 0x108);
  lVar10 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar10 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar10;
  FUN_1402ae23a(param_1 + 0x1a0,param_2 + 0x1a0);
  uVar1 = *(undefined4 *)(param_2 + 0x1b4);
  uVar2 = *(undefined4 *)(param_2 + 0x1b8);
  uVar3 = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  FUN_141844d90(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_1406545c2(param_1 + 0x1d8,param_2 + 0x1d8);
  return param_1;
}



// FUNCTION 14862f210 FUN_14862f210 body=79 status=ok
// SIG undefined FUN_14862f210(void)

undefined8 * FUN_14862f210(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14862f2da(param_1,iVar1);
      FUN_14862f33c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14862f260 FUN_14862f260 body=122 status=ok
// SIG undefined FUN_14862f260(void)

void * FUN_14862f260(void *param_1,void *param_2)

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
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0x10;
    }
    else {
      FUN_14862f38e(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14862f2da FUN_14862f2da body=98 status=ok
// SIG undefined FUN_14862f2da(void)

void FUN_14862f2da(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14862f33c FUN_14862f33c body=82 status=ok
// SIG undefined FUN_14862f33c(void)

void FUN_14862f33c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14862f38e FUN_14862f38e body=102 status=ok
// SIG undefined FUN_14862f38e(void)

void FUN_14862f38e(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_140ff42b6(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 14862f41a FUN_14862f41a body=38 status=ok
// SIG undefined FUN_14862f41a(void)

undefined8 FUN_14862f41a(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862f44a FUN_14862f44a body=48 status=ok
// SIG undefined FUN_14862f44a(void)

void FUN_14862f44a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b023630;
  return;
}



// FUNCTION 14862f47a FUN_14862f47a body=32 status=ok
// SIG undefined FUN_14862f47a(void)

void FUN_14862f47a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b023630;
  return;
}



// FUNCTION 14862f4f4 FUN_14862f4f4 body=59 status=ok
// SIG undefined FUN_14862f4f4(void)

undefined8 FUN_14862f4f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862f540 FUN_14862f540 body=38 status=ok
// SIG undefined FUN_14862f540(void)

void FUN_14862f540(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_140fbdc96(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 14862f5b6 FUN_14862f5b6 body=43 status=ok
// SIG undefined FUN_14862f5b6(void)

void FUN_14862f5b6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1409e6bf8(param_2);
  *param_2 = &PTR_FUN_14b0205b0;
  param_2[0x69] = 0;
  return;
}



// FUNCTION 14862f5f8 FUN_14862f5f8 body=76 status=ok
// SIG undefined FUN_14862f5f8(void)

undefined8 FUN_14862f5f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f7a6(param_2,param_3);
    *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)(param_3 + 0x348);
    param_2 = param_2 + 0x350;
    param_3 = param_3 + 0x350;
  }
  return 1;
}



// FUNCTION 14862f66c FUN_14862f66c body=59 status=ok
// SIG undefined FUN_14862f66c(void)

undefined8 FUN_14862f66c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862f6b8 FUN_14862f6b8 body=38 status=ok
// SIG undefined FUN_14862f6b8(void)

void FUN_14862f6b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x350) == '\x01') {
    FUN_1407538a4(param_2);
    *(undefined1 *)(param_2 + 0x350) = 0;
  }
  return;
}



// FUNCTION 14862f73a FUN_14862f73a body=38 status=ok
// SIG undefined FUN_14862f73a(void)

undefined8 FUN_14862f73a(undefined8 param_1,int param_2)

{
  FUN_1407538a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862f76c FUN_14862f76c body=52 status=ok
// SIG undefined FUN_14862f76c(void)

undefined8 * FUN_14862f76c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862f7a6 FUN_14862f7a6 body=580 status=ok
// SIG undefined FUN_14862f7a6(void)

longlong FUN_14862f7a6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_147e1a790();
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  FUN_14862f9ea(param_1 + 0xc0,param_2 + 0xc0);
  FUN_14054d9c0(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  uVar1 = *(undefined4 *)(param_2 + 300);
  uVar2 = *(undefined4 *)(param_2 + 0x130);
  uVar3 = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  FUN_144a787a6(param_1 + 0x138,param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  FUN_148615fc0(param_1 + 0x150,param_2 + 0x150);
  FUN_1470c8d00(param_1 + 0x160,param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  FUN_14862fb42(param_1 + 0x178,param_2 + 0x178);
  FUN_14099a466(param_1 + 0x188,param_2 + 0x188);
  uVar1 = *(undefined4 *)(param_2 + 0x19c);
  uVar2 = *(undefined4 *)(param_2 + 0x1a0);
  uVar3 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  *(undefined4 *)(param_1 + 0x1a0) = uVar2;
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  FUN_14083012e(param_1 + 0x1a8,param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  if ((*(longlong *)(param_1 + 0x2c0) != *(longlong *)(param_2 + 0x2c0)) ||
     (*(int *)(param_1 + 0x2c8) != *(int *)(param_2 + 0x2c8))) {
    *(longlong *)(param_1 + 0x2c0) = *(longlong *)(param_2 + 0x2c0);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
  if ((*(longlong *)(param_1 + 0x2e0) != *(longlong *)(param_2 + 0x2e0)) ||
     (*(int *)(param_1 + 0x2e8) != *(int *)(param_2 + 0x2e8))) {
    *(longlong *)(param_1 + 0x2e0) = *(longlong *)(param_2 + 0x2e0);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
    *(undefined8 *)(param_1 + 0x2f0) = 0;
  }
  *(undefined2 *)(param_1 + 0x2f8) = *(undefined2 *)(param_2 + 0x2f8);
  if ((*(longlong *)(param_1 + 0x300) != *(longlong *)(param_2 + 0x300)) ||
     (*(int *)(param_1 + 0x308) != *(int *)(param_2 + 0x308))) {
    *(longlong *)(param_1 + 0x300) = *(longlong *)(param_2 + 0x300);
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  FUN_147f2b382(param_1 + 800,param_2 + 800);
  FUN_147f2b382(param_1 + 0x330,param_2 + 0x330);
  *(undefined2 *)(param_1 + 0x340) = *(undefined2 *)(param_2 + 0x340);
  *(undefined1 *)(param_1 + 0x342) = *(undefined1 *)(param_2 + 0x342);
  return param_1;
}



// FUNCTION 14862f9ea FUN_14862f9ea body=93 status=ok
// SIG undefined FUN_14862f9ea(void)

undefined8 * FUN_14862f9ea(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14063a2ad(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14862fa48(param_1,iVar1);
      FUN_14862fabb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14862fa48 FUN_14862fa48 body=115 status=ok
// SIG undefined FUN_14862fa48(void)

void FUN_14862fa48(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14862fabb FUN_14862fabb body=134 status=ok
// SIG undefined FUN_14862fabb(void)

void FUN_14862fabb(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 14862fb42 FUN_14862fb42 body=79 status=ok
// SIG undefined FUN_14862fb42(void)

undefined8 * FUN_14862fb42(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14862fb92(param_1,iVar1);
      FUN_14862fc05(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14862fb92 FUN_14862fb92 body=115 status=ok
// SIG undefined FUN_14862fb92(void)

void FUN_14862fb92(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14862fc05 FUN_14862fc05 body=52 status=ok
// SIG undefined FUN_14862fc05(void)

void FUN_14862fc05(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141845010(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14862fc6e FUN_14862fc6e body=63 status=ok
// SIG undefined FUN_14862fc6e(void)

undefined1 FUN_14862fc6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862fd98(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 14862fcd6 FUN_14862fcd6 body=59 status=ok
// SIG undefined FUN_14862fcd6(void)

undefined8 FUN_14862fcd6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862fd22 FUN_14862fd22 body=40 status=ok
// SIG undefined FUN_14862fd22(void)

void FUN_14862fd22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_145916156(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 14862fd98 FUN_14862fd98 body=366 status=ok
// SIG undefined FUN_14862fd98(void)

longlong FUN_14862fd98(longlong param_1,longlong param_2)

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
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x3c);
  uVar6 = *(undefined4 *)(param_2 + 0x40);
  uVar7 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  *(undefined4 *)(param_1 + 0x44) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  *(undefined8 *)(param_1 + 0x20) = uVar9;
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
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined4 *)(param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0xb0);
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  uVar1 = *(undefined4 *)(param_2 + 0xd4);
  uVar2 = *(undefined4 *)(param_2 + 0xd8);
  uVar3 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  *(undefined4 *)(param_1 + 0xdc) = uVar3;
  FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  uVar1 = *(undefined4 *)(param_2 + 0xfc);
  uVar2 = *(undefined4 *)(param_2 + 0x100);
  uVar3 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  FUN_144a787a6(param_1 + 0x108,param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  uVar1 = *(undefined4 *)(param_2 + 0x124);
  uVar2 = *(undefined4 *)(param_2 + 0x128);
  uVar3 = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  *(undefined4 *)(param_1 + 300) = uVar3;
  FUN_144a787a6(param_1 + 0x130,param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  uVar1 = *(undefined4 *)(param_2 + 0x14c);
  uVar2 = *(undefined4 *)(param_2 + 0x150);
  uVar3 = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = uVar2;
  *(undefined4 *)(param_1 + 0x154) = uVar3;
  FUN_144a787a6(param_1 + 0x158,param_2 + 0x158);
  return param_1;
}



// FUNCTION 14862ff08 FUN_14862ff08 body=38 status=ok
// SIG undefined FUN_14862ff08(void)

undefined8 FUN_14862ff08(undefined8 param_1,int param_2)

{
  FUN_145916156();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862ff2e FUN_14862ff2e body=55 status=ok
// SIG undefined FUN_14862ff2e(void)

void FUN_14862ff2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55d60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55d60 = FUN_140002ddd(FUN_1464b5731,uVar1,L"ClimbableInteractDef");
  }
  return;
}



// FUNCTION 14862ff66 FUN_14862ff66 body=38 status=ok
// SIG undefined FUN_14862ff66(void)

undefined8 FUN_14862ff66(undefined8 param_1,int param_2)

{
  FUN_140fbdc96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862ff8c FUN_14862ff8c body=55 status=ok
// SIG undefined FUN_14862ff8c(void)

void FUN_14862ff8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55cf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55cf8 = FUN_140002ddd(FUN_1464b5581,uVar1,L"ClimbableBodyState");
  }
  return;
}



// FUNCTION 14862ffc4 FUN_14862ffc4 body=66 status=ok
// SIG undefined FUN_14862ffc4(void)

undefined8 * FUN_14862ffc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0236e0;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_1403d7c6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148630012 FUN_148630012 body=38 status=ok
// SIG undefined FUN_148630012(void)

undefined8 FUN_148630012(undefined8 param_1,int param_2)

{
  FUN_1403d7c6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148630044 FUN_148630044 body=70 status=ok
// SIG undefined FUN_148630044(void)

void FUN_148630044(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446f470e(param_2 + 2,L"InputStaticMesh",1);
  FUN_1446f470e(param_2 + 3,L"InputTransformMatrix",1);
  return;
}



// FUNCTION 14863008a FUN_14863008a body=66 status=ok
// SIG undefined FUN_14863008a(void)

void FUN_14863008a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446f470e(param_2 + 2,L"InputStaticMesh",1);
  FUN_1446f470e(param_2 + 3,L"InputTransformMatrix",1);
  return;
}



// FUNCTION 1486300e4 FUN_1486300e4 body=112 status=ok
// SIG undefined FUN_1486300e4(void)

undefined1 FUN_1486300e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
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
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      plVar1[3] = *(longlong *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14863017c FUN_14863017c body=59 status=ok
// SIG undefined FUN_14863017c(void)

undefined8 FUN_14863017c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863021e FUN_14863021e body=37 status=ok
// SIG undefined FUN_14863021e(void)

void FUN_14863021e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  FUN_145acd8d2(param_2);
  return;
}



// FUNCTION 14863024c FUN_14863024c body=52 status=ok
// SIG undefined FUN_14863024c(void)

void FUN_14863024c(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x98) = 0;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140fbdbe2(param_2 + 0x50);
  return;
}



// FUNCTION 148630296 FUN_148630296 body=63 status=ok
// SIG undefined FUN_148630296(void)

undefined1 FUN_148630296(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486303da(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 1486302fe FUN_1486302fe body=59 status=ok
// SIG undefined FUN_1486302fe(void)

undefined8 FUN_1486302fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863034a FUN_14863034a body=66 status=ok
// SIG undefined FUN_14863034a(void)

void FUN_14863034a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    *(undefined4 *)(param_2 + 0x98) = 0;
    if (*(longlong *)(param_2 + 0x90) != 0) {
      FUN_1400020a8();
    }
    FUN_140fbdbe2(param_2 + 0x50);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 1486303da FUN_1486303da body=368 status=ok
// SIG undefined FUN_1486303da(void)

longlong * FUN_1486303da(longlong *param_1,longlong *param_2)

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
  lVar4 = param_2[1];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[1];
      bVar3 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar4;
  param_1[4] = param_2[4];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar4 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  lVar4 = param_2[5];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[5];
      bVar3 = DAT_14c950c29;
    }
  }
  param_1[5] = lVar4;
  lVar4 = param_2[6];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[6];
    }
  }
  param_1[6] = lVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
  lVar4 = param_2[8];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(int *)(param_1 + 8) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  param_1[9] = param_2[9];
  FUN_140c9966e(param_1 + 10,param_2 + 10);
  lVar4 = param_2[0x14];
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[0x14];
    }
  }
  bVar3 = DAT_14c950c29;
  param_1[0x14] = lVar4;
  lVar4 = param_2[0x15];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[0x15];
    }
  }
  param_1[0x15] = lVar4;
  lVar4 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = lVar4;
  param_1[0x18] = param_2[0x18];
  return param_1;
}



// FUNCTION 148630582 FUN_148630582 body=78 status=ok
// SIG undefined FUN_148630582(void)

undefined8 FUN_148630582(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_140427366();
      lVar2 = lVar2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486305f8 FUN_1486305f8 body=59 status=ok
// SIG undefined FUN_1486305f8(void)

undefined8 FUN_1486305f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863063e FUN_14863063e body=51 status=ok
// SIG undefined FUN_14863063e(void)

void FUN_14863063e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x40) == '\x01') {
    lVar1 = *(longlong *)(param_2 + 0x38);
    if (lVar1 != 0) {
      FUN_144a2da94(lVar1);
      FUN_1400020a8(lVar1);
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1486306b2 FUN_1486306b2 body=64 status=ok
// SIG undefined FUN_1486306b2(void)

void FUN_1486306b2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x198);
  FUN_14109baa4(param_2);
  FUN_14109baa4((longlong)param_2 + 0x88);
  FUN_14109baa4((longlong)param_2 + 0x110);
  return;
}



// FUNCTION 1486306f2 FUN_1486306f2 body=48 status=ok
// SIG undefined FUN_1486306f2(void)

void FUN_1486306f2(undefined8 param_1,longlong param_2)

{
  FUN_14109baa4(param_2);
  FUN_14109baa4(param_2 + 0x88);
  FUN_14109baa4(param_2 + 0x110);
  return;
}



// FUNCTION 148630740 FUN_148630740 body=108 status=ok
// SIG undefined FUN_148630740(void)

undefined1 FUN_148630740(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14115e0ba(param_2,param_3);
    FUN_14115e0ba(param_2 + 0x88,param_3 + 0x88);
    FUN_14115e0ba(param_2 + 0x110,param_3 + 0x110);
    param_2 = param_2 + 0x198;
    param_3 = param_3 + 0x198;
  }
  return 1;
}



// FUNCTION 1486307d4 FUN_1486307d4 body=59 status=ok
// SIG undefined FUN_1486307d4(void)

undefined8 FUN_1486307d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148630820 FUN_148630820 body=38 status=ok
// SIG undefined FUN_148630820(void)

void FUN_148630820(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_14862db72(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 14863089c FUN_14863089c body=155 status=ok
// SIG undefined FUN_14863089c(void)

void FUN_14863089c(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_143cebc90(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863093e FUN_14863093e body=237 status=ok
// SIG undefined FUN_14863093e(void)

void FUN_14863093e(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_143cebdfe(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148630a32 FUN_148630a32 body=846 status=ok
// SIG undefined FUN_148630a32(void)

void FUN_148630a32(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a64e42();
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = &local_78;
  local_68 = local_50;
  local_78 = local_60;
  uStack_70 = uStack_58;
  local_88 = local_48;
  local_90 = local_3c;
  local_98 = local_38;
  uVar1 = FUN_148815352(local_20,local_28,local_30,local_34);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148630d82 FUN_148630d82 body=320 status=ok
// SIG undefined FUN_148630d82(void)

void FUN_148630d82(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  FUN_148815430(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148630efa FUN_148630efa body=232 status=ok
// SIG undefined FUN_148630efa(void)

void FUN_148630efa(undefined8 param_1,longlong param_2)

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
  FUN_148816604(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148631018 FUN_148631018 body=336 status=ok
// SIG undefined FUN_148631018(void)

void FUN_148631018(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_178 [40];
  undefined1 local_150 [24];
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined4 local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  memset(local_138,0,0x100);
  local_68 = 0xffffffff;
  local_134 = 0x3f800000;
  local_94 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
  puVar3 = local_138;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_150;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,puVar3,puVar2);
  *param_3 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486311eb FUN_1486311eb body=289 status=ok
// SIG undefined FUN_1486311eb(void)

void FUN_1486311eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = 0;
  local_130 = 0x3002;
  local_128 = 0;
  local_f0 = 0;
  local_e8 = 0x200000000;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_c0 = (undefined4)DAT_14c8464e0;
  uStack_bc = DAT_14c8464e0._4_4_;
  uStack_b8 = (undefined4)DAT_14c8464e8;
  uStack_b4 = DAT_14c8464e8._4_4_;
  local_b0 = DAT_14c8464f0;
  local_a8 = (undefined4)DAT_14c8464e0;
  uStack_a4 = DAT_14c8464e0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8464e8;
  uStack_9c = DAT_14c8464e8._4_4_;
  local_98 = DAT_14c8464f0;
  local_90 = (undefined4)DAT_14c8464e0;
  uStack_8c = DAT_14c8464e0._4_4_;
  uStack_88 = (undefined4)DAT_14c8464e8;
  uStack_84 = DAT_14c8464e8._4_4_;
  local_80 = DAT_14c8464f0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1405c5fa2();
  local_58 = &DAT_14cb769e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = &PTR_FUN_14b0394b0;
  local_140 = param_2;
  FUN_141845082(&local_138,param_3);
  FUN_1447cd2ec(param_1,&local_140);
  FUN_141845be6(&local_138);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863130d FUN_14863130d body=289 status=ok
// SIG undefined FUN_14863130d(void)

void FUN_14863130d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = 0;
  local_130 = 0x3002;
  local_128 = 0;
  local_f0 = 0;
  local_e8 = 0x200000000;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_c0 = (undefined4)DAT_14c8464e0;
  uStack_bc = DAT_14c8464e0._4_4_;
  uStack_b8 = (undefined4)DAT_14c8464e8;
  uStack_b4 = DAT_14c8464e8._4_4_;
  local_b0 = DAT_14c8464f0;
  local_a8 = (undefined4)DAT_14c8464e0;
  uStack_a4 = DAT_14c8464e0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8464e8;
  uStack_9c = DAT_14c8464e8._4_4_;
  local_98 = DAT_14c8464f0;
  local_90 = (undefined4)DAT_14c8464e0;
  uStack_8c = DAT_14c8464e0._4_4_;
  uStack_88 = (undefined4)DAT_14c8464e8;
  uStack_84 = DAT_14c8464e8._4_4_;
  local_80 = DAT_14c8464f0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1405c5fa2();
  local_58 = &DAT_14cb769e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = &PTR_FUN_14b0394b0;
  local_140 = param_2;
  FUN_141845082(&local_138,param_3);
  FUN_1447cd2ec(param_1,&local_140);
  FUN_141845be6(&local_138);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148631430 FUN_148631430 body=200 status=ok
// SIG undefined FUN_148631430(void)

longlong * FUN_148631430(longlong *param_1,longlong *param_2)

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
  if ((param_1[3] != param_2[3]) || ((int)param_1[4] != (int)param_2[4])) {
    param_1[3] = param_2[3];
    *(int *)(param_1 + 4) = (int)param_2[4];
    param_1[5] = 0;
  }
  FUN_14118c70e(param_1 + 6,param_2 + 6);
  (**(code **)(param_1[0xe] + 0x20))(param_1 + 0xe,0);
  param_1[0xf] = param_2[0xf];
  FUN_1406022fe(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



// FUNCTION 1486314f8 FUN_1486314f8 body=189 status=ok
// SIG undefined FUN_1486314f8(void)

longlong * FUN_1486314f8(longlong *param_1,longlong *param_2)

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
  if ((param_1[2] != param_2[2]) || ((int)param_1[3] != (int)param_2[3])) {
    param_1[2] = param_2[2];
    *(int *)(param_1 + 3) = (int)param_2[3];
    param_1[4] = 0;
  }
  FUN_14118c70e(param_1 + 5,param_2 + 5);
  (**(code **)(param_1[0xd] + 0x20))(param_1 + 0xd,0);
  param_1[0xe] = param_2[0xe];
  FUN_1406022fe(param_1 + 0xf,param_2 + 0xf);
  return param_1;
}



// FUNCTION 148631616 FUN_148631616 body=59 status=ok
// SIG undefined FUN_148631616(void)

undefined8 FUN_148631616(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863165c FUN_14863165c body=32 status=ok
// SIG undefined FUN_14863165c(void)

void FUN_14863165c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1418451b6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1486316cc FUN_1486316cc body=43 status=ok
// SIG undefined FUN_1486316cc(void)

undefined8 FUN_1486316cc(undefined8 param_1,int param_2)

{
  FUN_1418451b6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1486316f8 FUN_1486316f8 body=55 status=ok
// SIG undefined FUN_1486316f8(void)

void FUN_1486316f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56108 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56108 = FUN_140002ddd(FUN_1464b64e2,uVar1,L"CoordinatedEffectFilterDef");
  }
  return;
}



// FUNCTION 148631778 FUN_148631778 body=59 status=ok
// SIG undefined FUN_148631778(void)

undefined8 FUN_148631778(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148631846 FUN_148631846 body=54 status=ok
// SIG undefined FUN_148631846(void)

undefined1 FUN_148631846(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863195e(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1486318a4 FUN_1486318a4 body=59 status=ok
// SIG undefined FUN_1486318a4(void)

undefined8 FUN_1486318a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486318ea FUN_1486318ea body=38 status=ok
// SIG undefined FUN_1486318ea(void)

void FUN_1486318ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14863195e FUN_14863195e body=114 status=ok
// SIG undefined FUN_14863195e(void)

longlong * FUN_14863195e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  *(char *)(param_1 + 1) = (char)param_2[1];
  FUN_1406fa324(param_1 + 2,param_2 + 2);
  lVar1 = param_2[4];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[4];
    }
  }
  param_1[4] = lVar1;
  *(int *)(param_1 + 5) = (int)param_2[5];
  return param_1;
}



// FUNCTION 148631a20 FUN_148631a20 body=54 status=ok
// SIG undefined FUN_148631a20(void)

undefined1 FUN_148631a20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148631b32(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148631a7e FUN_148631a7e body=59 status=ok
// SIG undefined FUN_148631a7e(void)

undefined8 FUN_148631a7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148631ac4 FUN_148631ac4 body=32 status=ok
// SIG undefined FUN_148631ac4(void)

void FUN_148631ac4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_141845250(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148631b32 FUN_148631b32 body=199 status=ok
// SIG undefined FUN_148631b32(void)

longlong FUN_148631b32(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar2;
  FUN_1406fa324(param_1 + 0x10,param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  FUN_148631bfa(param_1 + 0x28,param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x38);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x38) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x40);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x40);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x48);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar2;
  return param_1;
}



// FUNCTION 148631bfa FUN_148631bfa body=93 status=ok
// SIG undefined FUN_148631bfa(void)

undefined8 * FUN_148631bfa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c874be(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148631c58(param_1,iVar1);
      FUN_148631ccb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148631c58 FUN_148631c58 body=115 status=ok
// SIG undefined FUN_148631c58(void)

void FUN_148631c58(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148631ccb FUN_148631ccb body=52 status=ok
// SIG undefined FUN_148631ccb(void)

void FUN_148631ccb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148631d00(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148631d00 FUN_148631d00 body=172 status=ok
// SIG undefined FUN_148631d00(void)

longlong * FUN_148631d00(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(char *)(param_1 + 1) = (char)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 << 3);
  }
  lVar2 = param_2[4];
  param_1[4] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  return param_1;
}



// FUNCTION 148631e7e FUN_148631e7e body=63 status=ok
// SIG undefined FUN_148631e7e(void)

undefined1 FUN_148631e7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148631fb0(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 148631ee6 FUN_148631ee6 body=59 status=ok
// SIG undefined FUN_148631ee6(void)

undefined8 FUN_148631ee6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148631f32 FUN_148631f32 body=47 status=ok
// SIG undefined FUN_148631f32(void)

void FUN_148631f32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    if (*(longlong *)(param_2 + 0x88) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148631fb0 FUN_148631fb0 body=106 status=ok
// SIG undefined FUN_148631fb0(void)

longlong * FUN_148631fb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  plVar2 = param_2 + 2;
  plVar3 = param_1 + 2;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  FUN_1406fa324(param_1 + 0x11,param_2 + 0x11);
  return param_1;
}



// FUNCTION 148632088 FUN_148632088 body=170 status=ok
// SIG undefined FUN_148632088(void)

undefined8 FUN_148632088(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
    do {
      *(undefined2 *)(param_2 + -0x78) = *(undefined2 *)(param_3 + -0x78);
      *(undefined8 *)(param_2 + -0x70) = *(undefined8 *)(param_3 + -0x70);
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_144a787a6(param_2 + -0x58,param_3 + -0x58);
      puVar7 = (undefined8 *)(param_3 + -0x48);
      puVar8 = (undefined8 *)(param_2 + -0x48);
      for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_14065c7a4(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_3 + 0x30);
      param_3 = param_3 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14863215a FUN_14863215a body=59 status=ok
// SIG undefined FUN_14863215a(void)

undefined8 FUN_14863215a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148632200 FUN_148632200 body=34 status=ok
// SIG undefined FUN_148632200(void)

undefined8 FUN_148632200(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148632224 FUN_148632224 body=71 status=ok
// SIG undefined FUN_148632224(void)

void FUN_148632224(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *param_1 = &PTR_FUN_14b02bc70;
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return;
}



// FUNCTION 1486322fe FUN_1486322fe body=59 status=ok
// SIG undefined FUN_1486322fe(void)

undefined8 FUN_1486322fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148632404 FUN_148632404 body=62 status=ok
// SIG undefined FUN_148632404(void)

undefined1 FUN_148632404(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148632524(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x54);
    uVar2 = *(undefined4 *)(param_3 + 0x58);
    uVar3 = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    param_2 = param_2 + 0x60;
    param_3 = param_3 + 0x60;
  }
  return 1;
}



// FUNCTION 14863246a FUN_14863246a body=59 status=ok
// SIG undefined FUN_14863246a(void)

undefined8 FUN_14863246a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486324b0 FUN_1486324b0 body=38 status=ok
// SIG undefined FUN_1486324b0(void)

void FUN_1486324b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148632524 FUN_148632524 body=103 status=ok
// SIG undefined FUN_148632524(void)

undefined8 * FUN_148632524(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_144a67f5c(param_1 + 1,param_2 + 1);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  if ((param_1[4] != param_2[4]) || (*(int *)(param_1 + 5) != *(int *)(param_2 + 5))) {
    param_1[4] = param_2[4];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    param_1[6] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x45) = *(undefined8 *)((longlong)param_2 + 0x45);
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  return param_1;
}



// FUNCTION 1486325c0 FUN_1486325c0 body=94 status=ok
// SIG undefined FUN_1486325c0(void)

undefined8 FUN_1486325c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x28);
      uVar2 = *(undefined4 *)(param_3 + -0x24);
      uVar3 = *(undefined4 *)(param_3 + -0x20);
      uVar4 = *(undefined4 *)(param_3 + -0x1c);
      uVar5 = *(undefined4 *)(param_3 + -0x14);
      uVar6 = *(undefined4 *)(param_3 + -0x10);
      uVar7 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar5;
      *(undefined4 *)(param_2 + -0x10) = uVar6;
      *(undefined4 *)(param_2 + -0xc) = uVar7;
      *(undefined4 *)(param_2 + -0x28) = uVar1;
      *(undefined4 *)(param_2 + -0x24) = uVar2;
      *(undefined4 *)(param_2 + -0x20) = uVar3;
      *(undefined4 *)(param_2 + -0x1c) = uVar4;
      FUN_148629308(param_2,param_3);
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148632646 FUN_148632646 body=59 status=ok
// SIG undefined FUN_148632646(void)

undefined8 FUN_148632646(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863268c FUN_14863268c body=48 status=ok
// SIG undefined FUN_14863268c(void)

void FUN_14863268c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14b02e030;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 14863270c FUN_14863270c body=62 status=ok
// SIG undefined FUN_14863270c(void)

undefined8 * FUN_14863270c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02e030;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14863274a FUN_14863274a body=55 status=ok
// SIG undefined FUN_14863274a(void)

void FUN_14863274a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb562a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb562a8 = FUN_140002ddd(FUN_1464b6b55,uVar1,L"DamageArea");
  }
  return;
}



// FUNCTION 148632782 FUN_148632782 body=41 status=ok
// SIG undefined FUN_148632782(void)

void FUN_148632782(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Damage/DamageArea.h",0xe7,
                L"Pure virtual not implemented (%s)",L"FDamageArea::GenerateQueryParams");
  return;
}



// FUNCTION 1486327ac FUN_1486327ac body=43 status=ok
// SIG undefined FUN_1486327ac(void)

undefined8 FUN_1486327ac(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Damage/DamageArea.h",0xe9,
                L"Pure virtual not implemented (%s)",L"FDamageArea::GetGenericSize");
  return 0;
}



// FUNCTION 1486327e6 FUN_1486327e6 body=57 status=ok
// SIG undefined FUN_1486327e6(void)

undefined8 * FUN_1486327e6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Damage/DamageArea.h",0x100,
                L"Pure virtual not implemented (%s)",L"FDamageArea::GetScoreFunction");
  *param_2 = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 148632824 FUN_148632824 body=57 status=ok
// SIG undefined FUN_148632824(void)

undefined8 * FUN_148632824(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Damage/DamageArea.h",0x104,
                L"Pure virtual not implemented (%s)",L"FDamageArea::GetSimpleOverlapTestFunction");
  *param_2 = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 148632892 FUN_148632892 body=178 status=ok
// SIG undefined FUN_148632892(void)

undefined8 FUN_148632892(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      *(undefined8 *)(param_2 + 0x28 + lVar10) = *(undefined8 *)(param_3 + 0x28 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_148629308(param_2 + 0x30 + lVar10,param_3 + 0x30 + lVar10);
      *(undefined2 *)(param_2 + 0x40 + lVar10) = *(undefined2 *)(param_3 + 0x40 + lVar10);
      FUN_140d02432(param_2 + 0x48 + lVar10,param_3 + 0x48 + lVar10);
      *(undefined1 *)(param_2 + 0x98 + lVar10) = *(undefined1 *)(param_3 + 0x98 + lVar10);
      lVar10 = lVar10 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14863296c FUN_14863296c body=59 status=ok
// SIG undefined FUN_14863296c(void)

undefined8 FUN_14863296c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486329b8 FUN_1486329b8 body=54 status=ok
// SIG undefined FUN_1486329b8(void)

void FUN_1486329b8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14b02e030;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 148632a5c FUN_148632a5c body=178 status=ok
// SIG undefined FUN_148632a5c(void)

undefined8 FUN_148632a5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      *(undefined8 *)(param_2 + 0x28 + lVar10) = *(undefined8 *)(param_3 + 0x28 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_148629308(param_2 + 0x30 + lVar10,param_3 + 0x30 + lVar10);
      *(undefined2 *)(param_2 + 0x40 + lVar10) = *(undefined2 *)(param_3 + 0x40 + lVar10);
      FUN_140d02432(param_2 + 0x48 + lVar10,param_3 + 0x48 + lVar10);
      *(undefined1 *)(param_2 + 0x98 + lVar10) = *(undefined1 *)(param_3 + 0x98 + lVar10);
      lVar10 = lVar10 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148632b36 FUN_148632b36 body=59 status=ok
// SIG undefined FUN_148632b36(void)

undefined8 FUN_148632b36(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148632b82 FUN_148632b82 body=54 status=ok
// SIG undefined FUN_148632b82(void)

void FUN_148632b82(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14b02e030;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 148632c1a FUN_148632c1a body=63 status=ok
// SIG undefined FUN_148632c1a(void)

undefined1 FUN_148632c1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148632d46(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 148632c82 FUN_148632c82 body=59 status=ok
// SIG undefined FUN_148632c82(void)

undefined8 FUN_148632c82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148632cce FUN_148632cce body=54 status=ok
// SIG undefined FUN_148632cce(void)

void FUN_148632cce(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x29) == '\x01') {
    *param_2 = &PTR_FUN_14b02e030;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x29) = 0;
  }
  return;
}



// FUNCTION 148632d46 FUN_148632d46 body=145 status=ok
// SIG undefined FUN_148632d46(void)

longlong FUN_148632d46(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
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
  FUN_148629308(param_1 + 0x30,param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  FUN_140d02432(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  FUN_140d02432(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_140d02432(param_1 + 0xf8,param_2 + 0xf8);
  return param_1;
}



// FUNCTION 148632e04 FUN_148632e04 body=202 status=ok
// SIG undefined FUN_148632e04(void)

undefined8 FUN_148632e04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 0x30 + lVar10;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar2 + -0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0x14) = uVar7;
      *(undefined4 *)(lVar2 + -0x10) = uVar8;
      *(undefined4 *)(lVar2 + -0xc) = uVar9;
      *(undefined4 *)(lVar2 + -0x28) = uVar3;
      *(undefined4 *)(lVar2 + -0x24) = uVar4;
      *(undefined4 *)(lVar2 + -0x20) = uVar5;
      *(undefined4 *)(lVar2 + -0x1c) = uVar6;
      FUN_148629308(lVar2,lVar1 + 0x30);
      *(undefined2 *)(lVar2 + 0x10) = *(undefined2 *)(lVar1 + 0x40);
      FUN_140d02432(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      *(undefined1 *)(param_2 + lVar10 + 0x98) = *(undefined1 *)(param_3 + lVar10 + 0x98);
      FUN_140d02432(param_2 + lVar10 + 0xa0,param_3 + lVar10 + 0xa0);
      lVar10 = lVar10 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148632ef6 FUN_148632ef6 body=59 status=ok
// SIG undefined FUN_148632ef6(void)

undefined8 FUN_148632ef6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148632f42 FUN_148632f42 body=54 status=ok
// SIG undefined FUN_148632f42(void)

void FUN_148632f42(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1e) == '\x01') {
    *param_2 = &PTR_FUN_14b02e030;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x1e) = 0;
  }
  return;
}



// FUNCTION 148632fe2 FUN_148632fe2 body=183 status=ok
// SIG undefined FUN_148632fe2(void)

undefined8 FUN_148632fe2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 0x30 + lVar10;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar2 + -0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0x14) = uVar7;
      *(undefined4 *)(lVar2 + -0x10) = uVar8;
      *(undefined4 *)(lVar2 + -0xc) = uVar9;
      *(undefined4 *)(lVar2 + -0x28) = uVar3;
      *(undefined4 *)(lVar2 + -0x24) = uVar4;
      *(undefined4 *)(lVar2 + -0x20) = uVar5;
      *(undefined4 *)(lVar2 + -0x1c) = uVar6;
      FUN_148629308(lVar2,lVar1 + 0x30);
      *(undefined2 *)(lVar2 + 0x10) = *(undefined2 *)(lVar1 + 0x40);
      FUN_140d02432(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      FUN_140d02432(param_2 + lVar10 + 0x98,param_3 + lVar10 + 0x98);
      lVar10 = lVar10 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486330c2 FUN_1486330c2 body=59 status=ok
// SIG undefined FUN_1486330c2(void)

undefined8 FUN_1486330c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863310e FUN_14863310e body=54 status=ok
// SIG undefined FUN_14863310e(void)

void FUN_14863310e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    *param_2 = &PTR_FUN_14b02e030;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x1d) = 0;
  }
  return;
}



// FUNCTION 1486331a6 FUN_1486331a6 body=63 status=ok
// SIG undefined FUN_1486331a6(void)

undefined1 FUN_1486331a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486332d2(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 14863320e FUN_14863320e body=59 status=ok
// SIG undefined FUN_14863320e(void)

undefined8 FUN_14863320e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863325a FUN_14863325a body=54 status=ok
// SIG undefined FUN_14863325a(void)

void FUN_14863325a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *param_2 = &PTR_FUN_14b02e030;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486332d2 FUN_1486332d2 body=126 status=ok
// SIG undefined FUN_1486332d2(void)

longlong FUN_1486332d2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
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
  FUN_148629308(param_1 + 0x30,param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  FUN_140d02432(param_1 + 0x48,param_2 + 0x48);
  FUN_140d02432(param_1 + 0x98,param_2 + 0x98);
  FUN_140d02432(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  return param_1;
}



// FUNCTION 148633370 FUN_148633370 body=63 status=ok
// SIG undefined FUN_148633370(void)

undefined1 FUN_148633370(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863349c(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 1486333d8 FUN_1486333d8 body=59 status=ok
// SIG undefined FUN_1486333d8(void)

undefined8 FUN_1486333d8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148633424 FUN_148633424 body=54 status=ok
// SIG undefined FUN_148633424(void)

void FUN_148633424(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *param_2 = &PTR_FUN_14b02e030;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14863349c FUN_14863349c body=129 status=ok
// SIG undefined FUN_14863349c(void)

longlong FUN_14863349c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
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
  FUN_148629308(param_1 + 0x30,param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  FUN_140d02432(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  FUN_140d02432(param_1 + 0xa0,param_2 + 0xa0);
  FUN_140d02432(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 14863354a FUN_14863354a body=63 status=ok
// SIG undefined FUN_14863354a(void)

undefined1 FUN_14863354a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148633682(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 1486335b2 FUN_1486335b2 body=59 status=ok
// SIG undefined FUN_1486335b2(void)

undefined8 FUN_1486335b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486335fe FUN_1486335fe body=54 status=ok
// SIG undefined FUN_1486335fe(void)

void FUN_1486335fe(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *param_2 = &PTR_FUN_14b02e030;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148633682 FUN_148633682 body=126 status=ok
// SIG undefined FUN_148633682(void)

longlong FUN_148633682(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
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
  FUN_148629308(param_1 + 0x30,param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  FUN_140d02432(param_1 + 0x48,param_2 + 0x48);
  FUN_140d02432(param_1 + 0x98,param_2 + 0x98);
  FUN_140d02432(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  return param_1;
}



// FUNCTION 148633720 FUN_148633720 body=63 status=ok
// SIG undefined FUN_148633720(void)

undefined1 FUN_148633720(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863383c(param_2,param_3);
    param_3 = param_3 + 0x2f8;
    param_2 = param_2 + 0x2f8;
  }
  return 1;
}



// FUNCTION 148633788 FUN_148633788 body=59 status=ok
// SIG undefined FUN_148633788(void)

undefined8 FUN_148633788(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486337d4 FUN_1486337d4 body=38 status=ok
// SIG undefined FUN_1486337d4(void)

void FUN_1486337d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f8) == '\x01') {
    FUN_140e3616a(param_2);
    *(undefined1 *)(param_2 + 0x2f8) = 0;
  }
  return;
}



// FUNCTION 14863383c FUN_14863383c body=326 status=ok
// SIG undefined FUN_14863383c(void)

longlong FUN_14863383c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
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
  FUN_148629308(param_1 + 0x30,param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
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
  FUN_140d02432(param_1 + 0xa8,param_2 + 0xa8);
  FUN_140d02432(param_1 + 0xf8,param_2 + 0xf8);
  FUN_140d02432(param_1 + 0x148,param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  FUN_140d02432(param_1 + 0x1a0,param_2 + 0x1a0);
  FUN_140d02432(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_140d02432(param_1 + 0x240,param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  FUN_140d02432(param_1 + 0x298,param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  return param_1;
}



// FUNCTION 148633984 FUN_148633984 body=55 status=ok
// SIG undefined FUN_148633984(void)

void FUN_148633984(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb563e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb563e8 = FUN_140002ddd(FUN_1464b71af,uVar1,L"DamageArea_Radiate");
  }
  return;
}



// FUNCTION 1486339bc FUN_1486339bc body=37 status=ok
// SIG undefined FUN_1486339bc(void)

void FUN_1486339bc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x180);
  FUN_141845298(param_2);
  return;
}



// FUNCTION 148633a0e FUN_148633a0e body=63 status=ok
// SIG undefined FUN_148633a0e(void)

undefined1 FUN_148633a0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148633b9a(param_2,param_3);
    param_3 = param_3 + 0x180;
    param_2 = param_2 + 0x180;
  }
  return 1;
}



// FUNCTION 148633a76 FUN_148633a76 body=59 status=ok
// SIG undefined FUN_148633a76(void)

undefined8 FUN_148633a76(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148633ac2 FUN_148633ac2 body=38 status=ok
// SIG undefined FUN_148633ac2(void)

void FUN_148633ac2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_140bb739c(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 148633b36 FUN_148633b36 body=43 status=ok
// SIG undefined FUN_148633b36(void)

undefined8 FUN_148633b36(undefined8 param_1,int param_2)

{
  FUN_140bb739c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 148633b62 FUN_148633b62 body=55 status=ok
// SIG undefined FUN_148633b62(void)

void FUN_148633b62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56418 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56418 = FUN_140002ddd(FUN_1464b7241,uVar1,L"DamageBinderEventFilter");
  }
  return;
}



// FUNCTION 148633b9a FUN_148633b9a body=136 status=ok
// SIG undefined FUN_148633b9a(void)

longlong FUN_148633b9a(longlong param_1,longlong param_2)

{
  FUN_148633c22();
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  FUN_1403de7ba(param_1 + 0x120,param_2 + 0x120);
  FUN_148623ec4(param_1 + 0x140,param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  FUN_148623ec4(param_1 + 0x160,param_2 + 0x160);
  FUN_148623ec4(param_1 + 0x170,param_2 + 0x170);
  return param_1;
}



// FUNCTION 148633c22 FUN_148633c22 body=310 status=ok
// SIG undefined FUN_148633c22(void)

longlong FUN_148633c22(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_148633d58(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_145fced18(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  (**(code **)(*(longlong *)(param_1 + 0x60) + 0x20))(param_1 + 0x60,0);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  FUN_1406022fe(param_1 + 0x70,param_2 + 0x70);
  if ((*(longlong *)(param_1 + 0x80) != *(longlong *)(param_2 + 0x80)) ||
     (*(int *)(param_1 + 0x88) != *(int *)(param_2 + 0x88))) {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if ((*(longlong *)(param_1 + 0x98) != *(longlong *)(param_2 + 0x98)) ||
     (*(int *)(param_1 + 0xa0) != *(int *)(param_2 + 0xa0))) {
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  FUN_140d02432(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 148633d58 FUN_148633d58 body=79 status=ok
// SIG undefined FUN_148633d58(void)

undefined8 * FUN_148633d58(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148633da8(param_1,iVar1);
      FUN_148633e1b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148633da8 FUN_148633da8 body=115 status=ok
// SIG undefined FUN_148633da8(void)

void FUN_148633da8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148633e1b FUN_148633e1b body=44 status=ok
// SIG undefined FUN_148633e1b(void)

void FUN_148633e1b(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148633e48 FUN_148633e48 body=115 status=ok
// SIG undefined FUN_148633e48(void)

void FUN_148633e48(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148633ef0 FUN_148633ef0 body=68 status=ok
// SIG undefined FUN_148633ef0(void)

undefined1 FUN_148633ef0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148633f5c FUN_148633f5c body=59 status=ok
// SIG undefined FUN_148633f5c(void)

undefined8 FUN_148633f5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148633fa2 FUN_148633fa2 body=32 status=ok
// SIG undefined FUN_148633fa2(void)

void FUN_148633fa2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_148634054(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14863400c FUN_14863400c body=55 status=ok
// SIG undefined FUN_14863400c(void)

void FUN_14863400c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56448 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56448 = FUN_140002ddd(FUN_1464b7303,uVar1,L"DamageCauserCritValueResolver");
  }
  return;
}



// FUNCTION 148634054 FUN_148634054 body=65 status=ok
// SIG undefined FUN_148634054(void)

void FUN_148634054(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b02d490;
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000148634091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1486340ca FUN_1486340ca body=63 status=ok
// SIG undefined FUN_1486340ca(void)

undefined1 FUN_1486340ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486341f2(param_2,param_3);
    param_3 = param_3 + 0x218;
    param_2 = param_2 + 0x218;
  }
  return 1;
}


