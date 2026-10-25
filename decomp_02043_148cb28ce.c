// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148cb28ce FUN_148cb28ce body=59 status=ok
// SIG undefined FUN_148cb28ce(void)

undefined8 FUN_148cb28ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb291a FUN_148cb291a body=38 status=ok
// SIG undefined FUN_148cb291a(void)

void FUN_148cb291a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_148cb2a4c(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 148cb2a4c FUN_148cb2a4c body=129 status=ok
// SIG undefined FUN_148cb2a4c(void)

void FUN_148cb2a4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b91a3d0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1410dc21a(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1410dc252(param_1 + 0xd);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148cb2ace FUN_148cb2ace body=138 status=ok
// SIG undefined FUN_148cb2ace(void)

longlong FUN_148cb2ace(longlong param_1,longlong param_2)

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
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) ||
     (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  uVar5 = *(undefined4 *)(param_2 + 0x40);
  uVar6 = *(undefined4 *)(param_2 + 0x44);
  uVar7 = *(undefined4 *)(param_2 + 0x48);
  uVar8 = *(undefined4 *)(param_2 + 0x4c);
  uVar9 = *(undefined4 *)(param_2 + 0x54);
  uVar10 = *(undefined4 *)(param_2 + 0x58);
  uVar11 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar9;
  *(undefined4 *)(param_1 + 0x58) = uVar10;
  *(undefined4 *)(param_1 + 0x5c) = uVar11;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  *(undefined4 *)(param_1 + 0x48) = uVar7;
  *(undefined4 *)(param_1 + 0x4c) = uVar8;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  FUN_148cb2b58(param_1 + 0x68,param_2 + 0x68);
  FUN_148cb2d36(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 148cb2b58 FUN_148cb2b58 body=122 status=ok
// SIG undefined FUN_148cb2b58(void)

longlong FUN_148cb2b58(longlong param_1,longlong param_2)

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
    FUN_148cb2bd2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148cb2bd2 FUN_148cb2bd2 body=255 status=ok
// SIG undefined FUN_148cb2bd2(void)

longlong * FUN_148cb2bd2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1410dc28a(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140044672(param_1);
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
          FUN_148cb2cd2(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x28 + lVar6) = *(undefined8 *)(lVar2 + 0x28 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x30;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148cb2cd2 FUN_148cb2cd2 body=99 status=ok
// SIG undefined FUN_148cb2cd2(void)

undefined8 * FUN_148cb2cd2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)((longlong)param_1 + 7) = *(undefined4 *)((longlong)param_2 + 7);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_148cb245e(param_1 + 2,iVar1,0);
    FUN_148cb24d1(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148cb2d36 FUN_148cb2d36 body=122 status=ok
// SIG undefined FUN_148cb2d36(void)

longlong FUN_148cb2d36(longlong param_1,longlong param_2)

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
    FUN_148cb2db0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148cb2db0 FUN_148cb2db0 body=202 status=ok
// SIG undefined FUN_148cb2db0(void)

undefined8 * FUN_148cb2db0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1410dc418(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
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
          FUN_148cb2e7a(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148cb2e7a FUN_148cb2e7a body=117 status=ok
// SIG undefined FUN_148cb2e7a(void)

undefined8 * FUN_148cb2e7a(undefined8 *param_1,undefined8 *param_2)

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
    FUN_148cb27d4(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 0x18);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 148cb2f80 FUN_148cb2f80 body=59 status=ok
// SIG undefined FUN_148cb2f80(void)

undefined8 FUN_148cb2f80(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb2fc6 FUN_148cb2fc6 body=43 status=ok
// SIG undefined FUN_148cb2fc6(void)

void FUN_148cb2fc6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148cb3040 FUN_148cb3040 body=57 status=ok
// SIG undefined FUN_148cb3040(void)

void FUN_148cb3040(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfbe8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfbe8 = FUN_140002ddd(FUN_146614047,uVar1,L"RarityGlobalsDef");
  }
  return;
}



// FUNCTION 148cb30c4 FUN_148cb30c4 body=62 status=ok
// SIG undefined FUN_148cb30c4(void)

undefined1 FUN_148cb30c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14185ca5c(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cb312a FUN_148cb312a body=59 status=ok
// SIG undefined FUN_148cb312a(void)

undefined8 FUN_148cb312a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb31ca FUN_148cb31ca body=55 status=ok
// SIG undefined FUN_148cb31ca(void)

void FUN_148cb31ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfc00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfc00 = FUN_140002ddd(FUN_1466140dd,uVar1,L"RarityWeightValueResolver");
  }
  return;
}



// FUNCTION 148cb3216 FUN_148cb3216 body=48 status=ok
// SIG undefined FUN_148cb3216(void)

void FUN_148cb3216(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b91a930;
  param_2[5] = 0;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) | 6;
  *(undefined1 *)(param_2 + 1) = 5;
  return;
}



// FUNCTION 148cb3246 FUN_148cb3246 body=48 status=ok
// SIG undefined FUN_148cb3246(void)

void FUN_148cb3246(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b91a930;
  param_2[5] = 0;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) | 6;
  *(undefined1 *)(param_2 + 1) = 5;
  return;
}



// FUNCTION 148cb32c6 FUN_148cb32c6 body=59 status=ok
// SIG undefined FUN_148cb32c6(void)

undefined8 FUN_148cb32c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb330c FUN_148cb330c body=32 status=ok
// SIG undefined FUN_148cb330c(void)

void FUN_148cb330c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148cb337a FUN_148cb337a body=38 status=ok
// SIG undefined FUN_148cb337a(void)

undefined8 FUN_148cb337a(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb340e FUN_148cb340e body=59 status=ok
// SIG undefined FUN_148cb340e(void)

undefined8 FUN_148cb340e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb34b0 FUN_148cb34b0 body=59 status=ok
// SIG undefined FUN_148cb34b0(void)

void FUN_148cb34b0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined4 *)((longlong)param_2 + 8) = 0x3002;
  *(undefined4 *)((longlong)param_2 + 0x54) = 2;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x7f) = 0;
  return;
}



// FUNCTION 148cb352e FUN_148cb352e body=34 status=ok
// SIG undefined FUN_148cb352e(void)

undefined1
FUN_148cb352e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_148dc594a(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 148cb356c FUN_148cb356c body=59 status=ok
// SIG undefined FUN_148cb356c(void)

undefined8 FUN_148cb356c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb35b8 FUN_148cb35b8 body=44 status=ok
// SIG undefined FUN_148cb35b8(void)

void FUN_148cb35b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148cb3684 FUN_148cb3684 body=39 status=ok
// SIG undefined FUN_148cb3684(void)

undefined8 FUN_148cb3684(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148cb36d4 FUN_148cb36d4 body=59 status=ok
// SIG undefined FUN_148cb36d4(void)

undefined8 FUN_148cb36d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb3862 FUN_148cb3862 body=59 status=ok
// SIG undefined FUN_148cb3862(void)

undefined8 FUN_148cb3862(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb3922 FUN_148cb3922 body=63 status=ok
// SIG undefined FUN_148cb3922(void)

undefined1 FUN_148cb3922(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1aaf0(param_2,param_3);
    param_3 = param_3 + 0x380;
    param_2 = param_2 + 0x380;
  }
  return 1;
}



// FUNCTION 148cb398a FUN_148cb398a body=59 status=ok
// SIG undefined FUN_148cb398a(void)

undefined8 FUN_148cb398a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb39d6 FUN_148cb39d6 body=40 status=ok
// SIG undefined FUN_148cb39d6(void)

void FUN_148cb39d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x380) == '\x01') {
    FUN_145afe462(param_2);
    *(undefined1 *)(param_2 + 0x380) = 0;
  }
  return;
}



// FUNCTION 148cb3ad8 FUN_148cb3ad8 body=59 status=ok
// SIG undefined FUN_148cb3ad8(void)

undefined8 FUN_148cb3ad8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb3bd2 FUN_148cb3bd2 body=139 status=ok
// SIG undefined FUN_148cb3bd2(void)

undefined8 FUN_148cb3bd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      lVar2 = param_2 + 0x30 + lVar10;
      *(undefined4 *)(lVar2 + -0x24) = puVar1[3];
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(puVar1 + 8);
      *(undefined4 *)(lVar2 + -8) = puVar1[10];
      FUN_144a7bb84();
      FUN_144a82394(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      *(undefined2 *)(param_2 + lVar10 + 0x50) = *(undefined2 *)(param_3 + lVar10 + 0x50);
      lVar10 = lVar10 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cb3c86 FUN_148cb3c86 body=59 status=ok
// SIG undefined FUN_148cb3c86(void)

undefined8 FUN_148cb3c86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb3ccc FUN_148cb3ccc body=51 status=ok
// SIG undefined FUN_148cb3ccc(void)

void FUN_148cb3ccc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if ((*(longlong *)(param_2 + 0x48) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x50));
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148cb3db0 FUN_148cb3db0 body=63 status=ok
// SIG undefined FUN_148cb3db0(void)

undefined1 FUN_148cb3db0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cb3ed4(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 148cb3e18 FUN_148cb3e18 body=59 status=ok
// SIG undefined FUN_148cb3e18(void)

undefined8 FUN_148cb3e18(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb3e64 FUN_148cb3e64 body=38 status=ok
// SIG undefined FUN_148cb3e64(void)

void FUN_148cb3e64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_145828e64(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148cb3ed4 FUN_148cb3ed4 body=197 status=ok
// SIG undefined FUN_148cb3ed4(void)

undefined4 * FUN_148cb3ed4(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[4] = param_2[4];
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  FUN_144a7bb84(param_1 + 10,param_2 + 10);
  FUN_144a82394(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  FUN_144a7bb84(param_1 + 0x16,param_2 + 0x16);
  FUN_144a82394(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x1e);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x22);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(longlong *)(param_1 + 0x22) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar2;
  return param_1;
}



// FUNCTION 148cb402c FUN_148cb402c body=63 status=ok
// SIG undefined FUN_148cb402c(void)

undefined1 FUN_148cb402c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cb4148(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148cb4094 FUN_148cb4094 body=59 status=ok
// SIG undefined FUN_148cb4094(void)

undefined8 FUN_148cb4094(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb40e0 FUN_148cb40e0 body=38 status=ok
// SIG undefined FUN_148cb40e0(void)

void FUN_148cb40e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_140f0e8d8(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148cb4148 FUN_148cb4148 body=91 status=ok
// SIG undefined FUN_148cb4148(void)

longlong FUN_148cb4148(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  FUN_148cb41a4(param_1 + 0x30,param_2 + 0x30);
  FUN_148cb41a4(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  FUN_148cb3ed4(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 148cb41a4 FUN_148cb41a4 body=93 status=ok
// SIG undefined FUN_148cb41a4(void)

undefined8 * FUN_148cb41a4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f0e98b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148cb4202(param_1,iVar1);
      FUN_148cb4271(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148cb4202 FUN_148cb4202 body=111 status=ok
// SIG undefined FUN_148cb4202(void)

void FUN_148cb4202(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148cb4271 FUN_148cb4271 body=84 status=ok
// SIG undefined FUN_148cb4271(void)

void FUN_148cb4271(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      uVar1 = *(undefined4 *)(param_2 + -0x20);
      uVar2 = *(undefined4 *)(param_2 + -0x1c);
      uVar3 = *(undefined4 *)(param_2 + -0x18);
      uVar4 = *(undefined4 *)(param_2 + -0x14);
      uVar5 = *(undefined4 *)(param_2 + -0x10);
      uVar6 = *(undefined4 *)(param_2 + -0xc);
      uVar7 = *(undefined4 *)(param_2 + -8);
      *(undefined4 *)(param_1 + -0x14) = *(undefined4 *)(param_2 + -0x14);
      *(undefined4 *)(param_1 + -0x10) = uVar5;
      *(undefined4 *)(param_1 + -0xc) = uVar6;
      *(undefined4 *)(param_1 + -8) = uVar7;
      *(undefined4 *)(param_1 + -0x20) = uVar1;
      *(undefined4 *)(param_1 + -0x1c) = uVar2;
      *(undefined4 *)(param_1 + -0x18) = uVar3;
      *(undefined4 *)(param_1 + -0x14) = uVar4;
      FUN_1412bd664(param_1,param_2);
      *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 0x30);
      param_1 = param_1 + 0x58;
      param_2 = param_2 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148cb4314 FUN_148cb4314 body=59 status=ok
// SIG undefined FUN_148cb4314(void)

undefined8 FUN_148cb4314(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb43b0 FUN_148cb43b0 body=55 status=ok
// SIG undefined FUN_148cb43b0(void)

void FUN_148cb43b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfd90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfd90 = FUN_140002ddd(FUN_14661492b,uVar1,L"RepairKitContextResolver");
  }
  return;
}



// FUNCTION 148cb444c FUN_148cb444c body=70 status=ok
// SIG undefined FUN_148cb444c(void)

undefined1 FUN_148cb444c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1418443e8(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cb44ba FUN_148cb44ba body=59 status=ok
// SIG undefined FUN_148cb44ba(void)

undefined8 FUN_148cb44ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb455a FUN_148cb455a body=29 status=ok
// SIG undefined FUN_148cb455a(void)

undefined8 FUN_148cb455a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4578 FUN_148cb4578 body=55 status=ok
// SIG undefined FUN_148cb4578(void)

void FUN_148cb4578(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfda8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfda8 = FUN_140002ddd(FUN_1466149c1,uVar1,L"RepairKitCurativeAspect");
  }
  return;
}



// FUNCTION 148cb45b0 FUN_148cb45b0 body=52 status=ok
// SIG undefined FUN_148cb45b0(void)

void FUN_148cb45b0(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b91bdf0;
  FUN_144a7a8f6(param_2 + 2);
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 148cb45e4 FUN_148cb45e4 body=45 status=ok
// SIG undefined FUN_148cb45e4(void)

void FUN_148cb45e4(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = &PTR_FUN_14b91bdf0;
  FUN_144a7a8f6(param_2 + 2);
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 148cb4690 FUN_148cb4690 body=59 status=ok
// SIG undefined FUN_148cb4690(void)

undefined8 FUN_148cb4690(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb4730 FUN_148cb4730 body=29 status=ok
// SIG undefined FUN_148cb4730(void)

undefined8 FUN_148cb4730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb474e FUN_148cb474e body=55 status=ok
// SIG undefined FUN_148cb474e(void)

void FUN_148cb474e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfdc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfdc0 = FUN_140002ddd(FUN_146614a20,uVar1,L"ReplicatedTraitMissionAvailableChange");
  }
  return;
}



// FUNCTION 148cb4792 FUN_148cb4792 body=39 status=ok
// SIG undefined FUN_148cb4792(void)

void FUN_148cb4792(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148d64574();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148cb47ba FUN_148cb47ba body=37 status=ok
// SIG undefined FUN_148cb47ba(void)

void FUN_148cb47ba(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1418ea068();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148cb47e0 FUN_148cb47e0 body=39 status=ok
// SIG undefined FUN_148cb47e0(void)

void FUN_148cb47e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148d6460a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148cb4808 FUN_148cb4808 body=39 status=ok
// SIG undefined FUN_148cb4808(void)

void FUN_148cb4808(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148d645ca();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148cb4830 FUN_148cb4830 body=119 status=ok
// SIG undefined FUN_148cb4830(void)

void FUN_148cb4830(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d65186(param_1,&local_30);
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



// FUNCTION 148cb48a8 FUN_148cb48a8 body=37 status=ok
// SIG undefined FUN_148cb48a8(void)

void FUN_148cb48a8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148d64bcc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148cb48d4 FUN_148cb48d4 body=304 status=ok
// SIG undefined FUN_148cb48d4(void)

void FUN_148cb48d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc0070) {
    FUN_144b3d300(&DAT_14cbc0070);
    if (DAT_14cbc0070 == -1) {
      FUN_1446f470e(&DAT_14cbc0068,L"FireRate",1);
      _Init_thread_footer(&DAT_14cbc0070);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc007c) {
    FUN_144b3d300(&DAT_14cbc007c);
    if (DAT_14cbc007c == -1) {
      FUN_1446f470e(&DAT_14cbc0074,L"MaxLoadedAmmo",1);
      _Init_thread_footer(&DAT_14cbc007c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc0088) {
    FUN_144b3d300(&DAT_14cbc0088);
    if (DAT_14cbc0088 == -1) {
      FUN_1446f470e(&DAT_14cbc0080,L"ShotCost",1);
      _Init_thread_footer(&DAT_14cbc0088);
      return;
    }
  }
  return;
}



// FUNCTION 148cb4a04 FUN_148cb4a04 body=133 status=ok
// SIG undefined FUN_148cb4a04(void)

void FUN_148cb4a04(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 *param_7)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_5;
  local_38 = *param_6;
  uStack_30 = param_6[1];
  local_28 = param_6[2];
  local_20 = *param_7;
  uStack_1c = param_7[1];
  uStack_18 = param_7[2];
  uStack_14 = param_7[3];
  local_10 = *(undefined8 *)(param_7 + 4);
  local_50 = param_2;
  local_48 = param_3;
  local_44 = param_4;
  FUN_1447cd2ec(local_20,&local_50);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb4af6 FUN_148cb4af6 body=104 status=ok
// SIG undefined FUN_148cb4af6(void)

void FUN_148cb4af6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc0128) {
    FUN_144b3d300(&DAT_14cbc0128);
    if (DAT_14cbc0128 == -1) {
      FUN_1446f470e(&DAT_14cbc0120,L"AssociatedSiloBase",1);
      _Init_thread_footer(&DAT_14cbc0128);
      return;
    }
  }
  return;
}



// FUNCTION 148cb4b5e FUN_148cb4b5e body=156 status=ok
// SIG undefined FUN_148cb4b5e(void)

void FUN_148cb4b5e(undefined8 param_1,longlong param_2)

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
  FUN_14423eda6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb4c42 FUN_148cb4c42 body=321 status=ok
// SIG undefined FUN_148cb4c42(void)

void FUN_148cb4c42(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_144a63fc8();
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
  FUN_148e04d3e(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cb4d88 FUN_148cb4d88 body=48 status=ok
// SIG undefined FUN_148cb4d88(void)

longlong FUN_148cb4d88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4db8 FUN_148cb4db8 body=48 status=ok
// SIG undefined FUN_148cb4db8(void)

longlong FUN_148cb4db8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4de8 FUN_148cb4de8 body=48 status=ok
// SIG undefined FUN_148cb4de8(void)

longlong FUN_148cb4de8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4e18 FUN_148cb4e18 body=48 status=ok
// SIG undefined FUN_148cb4e18(void)

longlong FUN_148cb4e18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4e48 FUN_148cb4e48 body=48 status=ok
// SIG undefined FUN_148cb4e48(void)

longlong FUN_148cb4e48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4e78 FUN_148cb4e78 body=48 status=ok
// SIG undefined FUN_148cb4e78(void)

longlong FUN_148cb4e78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4ea8 FUN_148cb4ea8 body=48 status=ok
// SIG undefined FUN_148cb4ea8(void)

longlong FUN_148cb4ea8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4ed8 FUN_148cb4ed8 body=48 status=ok
// SIG undefined FUN_148cb4ed8(void)

longlong FUN_148cb4ed8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4f08 FUN_148cb4f08 body=48 status=ok
// SIG undefined FUN_148cb4f08(void)

longlong FUN_148cb4f08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4f38 FUN_148cb4f38 body=48 status=ok
// SIG undefined FUN_148cb4f38(void)

longlong FUN_148cb4f38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4f68 FUN_148cb4f68 body=48 status=ok
// SIG undefined FUN_148cb4f68(void)

longlong FUN_148cb4f68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4f98 FUN_148cb4f98 body=48 status=ok
// SIG undefined FUN_148cb4f98(void)

longlong FUN_148cb4f98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4fc8 FUN_148cb4fc8 body=48 status=ok
// SIG undefined FUN_148cb4fc8(void)

longlong FUN_148cb4fc8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb4ff8 FUN_148cb4ff8 body=48 status=ok
// SIG undefined FUN_148cb4ff8(void)

longlong FUN_148cb4ff8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5028 FUN_148cb5028 body=48 status=ok
// SIG undefined FUN_148cb5028(void)

longlong FUN_148cb5028(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5058 FUN_148cb5058 body=48 status=ok
// SIG undefined FUN_148cb5058(void)

longlong FUN_148cb5058(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5088 FUN_148cb5088 body=48 status=ok
// SIG undefined FUN_148cb5088(void)

longlong FUN_148cb5088(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb50b8 FUN_148cb50b8 body=48 status=ok
// SIG undefined FUN_148cb50b8(void)

longlong FUN_148cb50b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb50e8 FUN_148cb50e8 body=48 status=ok
// SIG undefined FUN_148cb50e8(void)

longlong FUN_148cb50e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5118 FUN_148cb5118 body=48 status=ok
// SIG undefined FUN_148cb5118(void)

longlong FUN_148cb5118(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5148 FUN_148cb5148 body=48 status=ok
// SIG undefined FUN_148cb5148(void)

longlong FUN_148cb5148(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5178 FUN_148cb5178 body=48 status=ok
// SIG undefined FUN_148cb5178(void)

longlong FUN_148cb5178(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb51a8 FUN_148cb51a8 body=48 status=ok
// SIG undefined FUN_148cb51a8(void)

longlong FUN_148cb51a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb51d8 FUN_148cb51d8 body=48 status=ok
// SIG undefined FUN_148cb51d8(void)

longlong FUN_148cb51d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5208 FUN_148cb5208 body=48 status=ok
// SIG undefined FUN_148cb5208(void)

longlong FUN_148cb5208(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5238 FUN_148cb5238 body=48 status=ok
// SIG undefined FUN_148cb5238(void)

longlong FUN_148cb5238(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5268 FUN_148cb5268 body=48 status=ok
// SIG undefined FUN_148cb5268(void)

longlong FUN_148cb5268(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5298 FUN_148cb5298 body=48 status=ok
// SIG undefined FUN_148cb5298(void)

longlong FUN_148cb5298(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb52c8 FUN_148cb52c8 body=48 status=ok
// SIG undefined FUN_148cb52c8(void)

longlong FUN_148cb52c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb52f8 FUN_148cb52f8 body=48 status=ok
// SIG undefined FUN_148cb52f8(void)

longlong FUN_148cb52f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x25f8;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5328 FUN_148cb5328 body=45 status=ok
// SIG undefined FUN_148cb5328(void)

longlong FUN_148cb5328(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5356 FUN_148cb5356 body=45 status=ok
// SIG undefined FUN_148cb5356(void)

longlong FUN_148cb5356(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5384 FUN_148cb5384 body=45 status=ok
// SIG undefined FUN_148cb5384(void)

longlong FUN_148cb5384(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb53ce FUN_148cb53ce body=48 status=ok
// SIG undefined FUN_148cb53ce(void)

longlong FUN_148cb53ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5406 FUN_148cb5406 body=48 status=ok
// SIG undefined FUN_148cb5406(void)

longlong FUN_148cb5406(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb543e FUN_148cb543e body=48 status=ok
// SIG undefined FUN_148cb543e(void)

longlong FUN_148cb543e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5486 FUN_148cb5486 body=48 status=ok
// SIG undefined FUN_148cb5486(void)

longlong FUN_148cb5486(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb54be FUN_148cb54be body=48 status=ok
// SIG undefined FUN_148cb54be(void)

longlong FUN_148cb54be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb54f6 FUN_148cb54f6 body=48 status=ok
// SIG undefined FUN_148cb54f6(void)

longlong FUN_148cb54f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb552e FUN_148cb552e body=48 status=ok
// SIG undefined FUN_148cb552e(void)

longlong FUN_148cb552e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c0;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb556e FUN_148cb556e body=48 status=ok
// SIG undefined FUN_148cb556e(void)

longlong FUN_148cb556e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c8;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb55ae FUN_148cb55ae body=48 status=ok
// SIG undefined FUN_148cb55ae(void)

longlong FUN_148cb55ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d0;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb55e6 FUN_148cb55e6 body=48 status=ok
// SIG undefined FUN_148cb55e6(void)

longlong FUN_148cb55e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d8;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5664 FUN_148cb5664 body=48 status=ok
// SIG undefined FUN_148cb5664(void)

longlong FUN_148cb5664(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb569c FUN_148cb569c body=48 status=ok
// SIG undefined FUN_148cb569c(void)

longlong FUN_148cb569c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb56d4 FUN_148cb56d4 body=48 status=ok
// SIG undefined FUN_148cb56d4(void)

longlong FUN_148cb56d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb570c FUN_148cb570c body=48 status=ok
// SIG undefined FUN_148cb570c(void)

longlong FUN_148cb570c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5744 FUN_148cb5744 body=48 status=ok
// SIG undefined FUN_148cb5744(void)

longlong FUN_148cb5744(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb577c FUN_148cb577c body=48 status=ok
// SIG undefined FUN_148cb577c(void)

longlong FUN_148cb577c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb57b4 FUN_148cb57b4 body=48 status=ok
// SIG undefined FUN_148cb57b4(void)

longlong FUN_148cb57b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb57ec FUN_148cb57ec body=48 status=ok
// SIG undefined FUN_148cb57ec(void)

longlong FUN_148cb57ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5824 FUN_148cb5824 body=48 status=ok
// SIG undefined FUN_148cb5824(void)

longlong FUN_148cb5824(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb585c FUN_148cb585c body=48 status=ok
// SIG undefined FUN_148cb585c(void)

longlong FUN_148cb585c(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5894 FUN_148cb5894 body=48 status=ok
// SIG undefined FUN_148cb5894(void)

longlong FUN_148cb5894(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb58cc FUN_148cb58cc body=48 status=ok
// SIG undefined FUN_148cb58cc(void)

longlong FUN_148cb58cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5904 FUN_148cb5904 body=48 status=ok
// SIG undefined FUN_148cb5904(void)

longlong FUN_148cb5904(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb593c FUN_148cb593c body=48 status=ok
// SIG undefined FUN_148cb593c(void)

longlong FUN_148cb593c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5974 FUN_148cb5974 body=48 status=ok
// SIG undefined FUN_148cb5974(void)

longlong FUN_148cb5974(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb59ac FUN_148cb59ac body=48 status=ok
// SIG undefined FUN_148cb59ac(void)

longlong FUN_148cb59ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb59e4 FUN_148cb59e4 body=48 status=ok
// SIG undefined FUN_148cb59e4(void)

longlong FUN_148cb59e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5a1c FUN_148cb5a1c body=48 status=ok
// SIG undefined FUN_148cb5a1c(void)

longlong FUN_148cb5a1c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5a54 FUN_148cb5a54 body=48 status=ok
// SIG undefined FUN_148cb5a54(void)

longlong FUN_148cb5a54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5a8c FUN_148cb5a8c body=48 status=ok
// SIG undefined FUN_148cb5a8c(void)

longlong FUN_148cb5a8c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5ad4 FUN_148cb5ad4 body=48 status=ok
// SIG undefined FUN_148cb5ad4(void)

longlong FUN_148cb5ad4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1548;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5b0c FUN_148cb5b0c body=48 status=ok
// SIG undefined FUN_148cb5b0c(void)

longlong FUN_148cb5b0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1550;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5b44 FUN_148cb5b44 body=48 status=ok
// SIG undefined FUN_148cb5b44(void)

longlong FUN_148cb5b44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1558;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5b74 FUN_148cb5b74 body=48 status=ok
// SIG undefined FUN_148cb5b74(void)

longlong FUN_148cb5b74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1d08;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5c04 FUN_148cb5c04 body=48 status=ok
// SIG undefined FUN_148cb5c04(void)

longlong FUN_148cb5c04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5c34 FUN_148cb5c34 body=48 status=ok
// SIG undefined FUN_148cb5c34(void)

longlong FUN_148cb5c34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5c64 FUN_148cb5c64 body=48 status=ok
// SIG undefined FUN_148cb5c64(void)

longlong FUN_148cb5c64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5c94 FUN_148cb5c94 body=48 status=ok
// SIG undefined FUN_148cb5c94(void)

longlong FUN_148cb5c94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5cc4 FUN_148cb5cc4 body=48 status=ok
// SIG undefined FUN_148cb5cc4(void)

longlong FUN_148cb5cc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5cf4 FUN_148cb5cf4 body=48 status=ok
// SIG undefined FUN_148cb5cf4(void)

longlong FUN_148cb5cf4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5d24 FUN_148cb5d24 body=48 status=ok
// SIG undefined FUN_148cb5d24(void)

longlong FUN_148cb5d24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5d54 FUN_148cb5d54 body=48 status=ok
// SIG undefined FUN_148cb5d54(void)

longlong FUN_148cb5d54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5d84 FUN_148cb5d84 body=48 status=ok
// SIG undefined FUN_148cb5d84(void)

longlong FUN_148cb5d84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5db4 FUN_148cb5db4 body=48 status=ok
// SIG undefined FUN_148cb5db4(void)

longlong FUN_148cb5db4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5de4 FUN_148cb5de4 body=48 status=ok
// SIG undefined FUN_148cb5de4(void)

longlong FUN_148cb5de4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5e14 FUN_148cb5e14 body=48 status=ok
// SIG undefined FUN_148cb5e14(void)

longlong FUN_148cb5e14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5e44 FUN_148cb5e44 body=48 status=ok
// SIG undefined FUN_148cb5e44(void)

longlong FUN_148cb5e44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5e74 FUN_148cb5e74 body=48 status=ok
// SIG undefined FUN_148cb5e74(void)

longlong FUN_148cb5e74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5ea4 FUN_148cb5ea4 body=48 status=ok
// SIG undefined FUN_148cb5ea4(void)

longlong FUN_148cb5ea4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5ed4 FUN_148cb5ed4 body=48 status=ok
// SIG undefined FUN_148cb5ed4(void)

longlong FUN_148cb5ed4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5f04 FUN_148cb5f04 body=48 status=ok
// SIG undefined FUN_148cb5f04(void)

longlong FUN_148cb5f04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5f34 FUN_148cb5f34 body=48 status=ok
// SIG undefined FUN_148cb5f34(void)

longlong FUN_148cb5f34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5f64 FUN_148cb5f64 body=48 status=ok
// SIG undefined FUN_148cb5f64(void)

longlong FUN_148cb5f64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5f94 FUN_148cb5f94 body=48 status=ok
// SIG undefined FUN_148cb5f94(void)

longlong FUN_148cb5f94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5fc4 FUN_148cb5fc4 body=48 status=ok
// SIG undefined FUN_148cb5fc4(void)

longlong FUN_148cb5fc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb5ff4 FUN_148cb5ff4 body=48 status=ok
// SIG undefined FUN_148cb5ff4(void)

longlong FUN_148cb5ff4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6024 FUN_148cb6024 body=48 status=ok
// SIG undefined FUN_148cb6024(void)

longlong FUN_148cb6024(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6054 FUN_148cb6054 body=48 status=ok
// SIG undefined FUN_148cb6054(void)

longlong FUN_148cb6054(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6084 FUN_148cb6084 body=48 status=ok
// SIG undefined FUN_148cb6084(void)

longlong FUN_148cb6084(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb60b4 FUN_148cb60b4 body=48 status=ok
// SIG undefined FUN_148cb60b4(void)

longlong FUN_148cb60b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb60e4 FUN_148cb60e4 body=48 status=ok
// SIG undefined FUN_148cb60e4(void)

longlong FUN_148cb60e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6114 FUN_148cb6114 body=48 status=ok
// SIG undefined FUN_148cb6114(void)

longlong FUN_148cb6114(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6144 FUN_148cb6144 body=48 status=ok
// SIG undefined FUN_148cb6144(void)

longlong FUN_148cb6144(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6174 FUN_148cb6174 body=45 status=ok
// SIG undefined FUN_148cb6174(void)

longlong FUN_148cb6174(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb61a2 FUN_148cb61a2 body=48 status=ok
// SIG undefined FUN_148cb61a2(void)

longlong FUN_148cb61a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb61d2 FUN_148cb61d2 body=48 status=ok
// SIG undefined FUN_148cb61d2(void)

longlong FUN_148cb61d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6202 FUN_148cb6202 body=48 status=ok
// SIG undefined FUN_148cb6202(void)

longlong FUN_148cb6202(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb623a FUN_148cb623a body=48 status=ok
// SIG undefined FUN_148cb623a(void)

longlong FUN_148cb623a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb626a FUN_148cb626a body=48 status=ok
// SIG undefined FUN_148cb626a(void)

longlong FUN_148cb626a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb629a FUN_148cb629a body=48 status=ok
// SIG undefined FUN_148cb629a(void)

longlong FUN_148cb629a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb62ca FUN_148cb62ca body=48 status=ok
// SIG undefined FUN_148cb62ca(void)

longlong FUN_148cb62ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb62fa FUN_148cb62fa body=48 status=ok
// SIG undefined FUN_148cb62fa(void)

longlong FUN_148cb62fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb632a FUN_148cb632a body=48 status=ok
// SIG undefined FUN_148cb632a(void)

longlong FUN_148cb632a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb635a FUN_148cb635a body=48 status=ok
// SIG undefined FUN_148cb635a(void)

longlong FUN_148cb635a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb638a FUN_148cb638a body=48 status=ok
// SIG undefined FUN_148cb638a(void)

longlong FUN_148cb638a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb63ba FUN_148cb63ba body=48 status=ok
// SIG undefined FUN_148cb63ba(void)

longlong FUN_148cb63ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb63ea FUN_148cb63ea body=48 status=ok
// SIG undefined FUN_148cb63ea(void)

longlong FUN_148cb63ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb641a FUN_148cb641a body=48 status=ok
// SIG undefined FUN_148cb641a(void)

longlong FUN_148cb641a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb644a FUN_148cb644a body=48 status=ok
// SIG undefined FUN_148cb644a(void)

longlong FUN_148cb644a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb647a FUN_148cb647a body=48 status=ok
// SIG undefined FUN_148cb647a(void)

longlong FUN_148cb647a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb64aa FUN_148cb64aa body=48 status=ok
// SIG undefined FUN_148cb64aa(void)

longlong FUN_148cb64aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb64da FUN_148cb64da body=48 status=ok
// SIG undefined FUN_148cb64da(void)

longlong FUN_148cb64da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb650a FUN_148cb650a body=48 status=ok
// SIG undefined FUN_148cb650a(void)

longlong FUN_148cb650a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb653a FUN_148cb653a body=48 status=ok
// SIG undefined FUN_148cb653a(void)

longlong FUN_148cb653a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb656a FUN_148cb656a body=48 status=ok
// SIG undefined FUN_148cb656a(void)

longlong FUN_148cb656a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb659a FUN_148cb659a body=48 status=ok
// SIG undefined FUN_148cb659a(void)

longlong FUN_148cb659a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb65ca FUN_148cb65ca body=48 status=ok
// SIG undefined FUN_148cb65ca(void)

longlong FUN_148cb65ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb65fa FUN_148cb65fa body=48 status=ok
// SIG undefined FUN_148cb65fa(void)

longlong FUN_148cb65fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb662a FUN_148cb662a body=48 status=ok
// SIG undefined FUN_148cb662a(void)

longlong FUN_148cb662a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb665a FUN_148cb665a body=48 status=ok
// SIG undefined FUN_148cb665a(void)

longlong FUN_148cb665a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb668a FUN_148cb668a body=48 status=ok
// SIG undefined FUN_148cb668a(void)

longlong FUN_148cb668a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb66ba FUN_148cb66ba body=48 status=ok
// SIG undefined FUN_148cb66ba(void)

longlong FUN_148cb66ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb66ea FUN_148cb66ea body=48 status=ok
// SIG undefined FUN_148cb66ea(void)

longlong FUN_148cb66ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb671a FUN_148cb671a body=48 status=ok
// SIG undefined FUN_148cb671a(void)

longlong FUN_148cb671a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb674a FUN_148cb674a body=48 status=ok
// SIG undefined FUN_148cb674a(void)

longlong FUN_148cb674a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb677a FUN_148cb677a body=48 status=ok
// SIG undefined FUN_148cb677a(void)

longlong FUN_148cb677a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb67aa FUN_148cb67aa body=48 status=ok
// SIG undefined FUN_148cb67aa(void)

longlong FUN_148cb67aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb67da FUN_148cb67da body=48 status=ok
// SIG undefined FUN_148cb67da(void)

longlong FUN_148cb67da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb680a FUN_148cb680a body=48 status=ok
// SIG undefined FUN_148cb680a(void)

longlong FUN_148cb680a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb683a FUN_148cb683a body=48 status=ok
// SIG undefined FUN_148cb683a(void)

longlong FUN_148cb683a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb686a FUN_148cb686a body=48 status=ok
// SIG undefined FUN_148cb686a(void)

longlong FUN_148cb686a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb689a FUN_148cb689a body=48 status=ok
// SIG undefined FUN_148cb689a(void)

longlong FUN_148cb689a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb68ca FUN_148cb68ca body=48 status=ok
// SIG undefined FUN_148cb68ca(void)

longlong FUN_148cb68ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb68fa FUN_148cb68fa body=48 status=ok
// SIG undefined FUN_148cb68fa(void)

longlong FUN_148cb68fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb692a FUN_148cb692a body=48 status=ok
// SIG undefined FUN_148cb692a(void)

longlong FUN_148cb692a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb695a FUN_148cb695a body=48 status=ok
// SIG undefined FUN_148cb695a(void)

longlong FUN_148cb695a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb698a FUN_148cb698a body=48 status=ok
// SIG undefined FUN_148cb698a(void)

longlong FUN_148cb698a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb69ba FUN_148cb69ba body=48 status=ok
// SIG undefined FUN_148cb69ba(void)

longlong FUN_148cb69ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb69ea FUN_148cb69ea body=48 status=ok
// SIG undefined FUN_148cb69ea(void)

longlong FUN_148cb69ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6a1a FUN_148cb6a1a body=48 status=ok
// SIG undefined FUN_148cb6a1a(void)

longlong FUN_148cb6a1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6a4a FUN_148cb6a4a body=48 status=ok
// SIG undefined FUN_148cb6a4a(void)

longlong FUN_148cb6a4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6a7a FUN_148cb6a7a body=48 status=ok
// SIG undefined FUN_148cb6a7a(void)

longlong FUN_148cb6a7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6aaa FUN_148cb6aaa body=48 status=ok
// SIG undefined FUN_148cb6aaa(void)

longlong FUN_148cb6aaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6ada FUN_148cb6ada body=48 status=ok
// SIG undefined FUN_148cb6ada(void)

longlong FUN_148cb6ada(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6b0a FUN_148cb6b0a body=48 status=ok
// SIG undefined FUN_148cb6b0a(void)

longlong FUN_148cb6b0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6b3a FUN_148cb6b3a body=48 status=ok
// SIG undefined FUN_148cb6b3a(void)

longlong FUN_148cb6b3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6b6a FUN_148cb6b6a body=48 status=ok
// SIG undefined FUN_148cb6b6a(void)

longlong FUN_148cb6b6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6b9a FUN_148cb6b9a body=48 status=ok
// SIG undefined FUN_148cb6b9a(void)

longlong FUN_148cb6b9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6bca FUN_148cb6bca body=48 status=ok
// SIG undefined FUN_148cb6bca(void)

longlong FUN_148cb6bca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6bfa FUN_148cb6bfa body=48 status=ok
// SIG undefined FUN_148cb6bfa(void)

longlong FUN_148cb6bfa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6c2a FUN_148cb6c2a body=48 status=ok
// SIG undefined FUN_148cb6c2a(void)

longlong FUN_148cb6c2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6c5a FUN_148cb6c5a body=48 status=ok
// SIG undefined FUN_148cb6c5a(void)

longlong FUN_148cb6c5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6c8a FUN_148cb6c8a body=48 status=ok
// SIG undefined FUN_148cb6c8a(void)

longlong FUN_148cb6c8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6cba FUN_148cb6cba body=48 status=ok
// SIG undefined FUN_148cb6cba(void)

longlong FUN_148cb6cba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6cea FUN_148cb6cea body=48 status=ok
// SIG undefined FUN_148cb6cea(void)

longlong FUN_148cb6cea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6d1a FUN_148cb6d1a body=48 status=ok
// SIG undefined FUN_148cb6d1a(void)

longlong FUN_148cb6d1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x25f8;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6d4a FUN_148cb6d4a body=45 status=ok
// SIG undefined FUN_148cb6d4a(void)

longlong FUN_148cb6d4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6d78 FUN_148cb6d78 body=45 status=ok
// SIG undefined FUN_148cb6d78(void)

longlong FUN_148cb6d78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6da6 FUN_148cb6da6 body=45 status=ok
// SIG undefined FUN_148cb6da6(void)

longlong FUN_148cb6da6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6dd4 FUN_148cb6dd4 body=48 status=ok
// SIG undefined FUN_148cb6dd4(void)

longlong FUN_148cb6dd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1458ecc12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6e04 FUN_148cb6e04 body=48 status=ok
// SIG undefined FUN_148cb6e04(void)

longlong FUN_148cb6e04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1458ecc12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6e34 FUN_148cb6e34 body=48 status=ok
// SIG undefined FUN_148cb6e34(void)

longlong FUN_148cb6e34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6e64 FUN_148cb6e64 body=48 status=ok
// SIG undefined FUN_148cb6e64(void)

longlong FUN_148cb6e64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6e94 FUN_148cb6e94 body=48 status=ok
// SIG undefined FUN_148cb6e94(void)

longlong FUN_148cb6e94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6ec4 FUN_148cb6ec4 body=48 status=ok
// SIG undefined FUN_148cb6ec4(void)

longlong FUN_148cb6ec4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6ef4 FUN_148cb6ef4 body=48 status=ok
// SIG undefined FUN_148cb6ef4(void)

longlong FUN_148cb6ef4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6f24 FUN_148cb6f24 body=48 status=ok
// SIG undefined FUN_148cb6f24(void)

longlong FUN_148cb6f24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6f54 FUN_148cb6f54 body=48 status=ok
// SIG undefined FUN_148cb6f54(void)

longlong FUN_148cb6f54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6f84 FUN_148cb6f84 body=48 status=ok
// SIG undefined FUN_148cb6f84(void)

longlong FUN_148cb6f84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6fb4 FUN_148cb6fb4 body=48 status=ok
// SIG undefined FUN_148cb6fb4(void)

longlong FUN_148cb6fb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb6fe4 FUN_148cb6fe4 body=48 status=ok
// SIG undefined FUN_148cb6fe4(void)

longlong FUN_148cb6fe4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb7014 FUN_148cb7014 body=48 status=ok
// SIG undefined FUN_148cb7014(void)

longlong FUN_148cb7014(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb7044 FUN_148cb7044 body=48 status=ok
// SIG undefined FUN_148cb7044(void)

longlong FUN_148cb7044(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb7074 FUN_148cb7074 body=48 status=ok
// SIG undefined FUN_148cb7074(void)

longlong FUN_148cb7074(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb70a4 FUN_148cb70a4 body=48 status=ok
// SIG undefined FUN_148cb70a4(void)

longlong FUN_148cb70a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb70d4 FUN_148cb70d4 body=48 status=ok
// SIG undefined FUN_148cb70d4(void)

longlong FUN_148cb70d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb7104 FUN_148cb7104 body=48 status=ok
// SIG undefined FUN_148cb7104(void)

longlong FUN_148cb7104(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cb7134 FUN_148cb7134 body=48 status=ok
// SIG undefined FUN_148cb7134(void)

longlong FUN_148cb7134(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


