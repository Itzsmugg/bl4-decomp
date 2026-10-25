// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146c41884 FUN_146c41884 body=214 status=ok
// SIG undefined FUN_146c41884(void)

void FUN_146c41884(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar3 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (((int)uVar3 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar3 = 1;
    if (1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    plVar1 = (longlong *)(param_1 + 2);
    puVar2 = (uint *)(param_1 + 4);
    iVar6 = uVar3 - *puVar2;
    if (iVar6 == 0 || (int)uVar3 < (int)*puVar2) {
      if (uVar3 < *puVar2) {
        FUN_14582f4b6(plVar1,uVar3,0);
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x400);
        memset(_Dst,0,0x400);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_141224966(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    iVar5 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    *param_1 = iVar5;
    param_1[1] = iVar6;
  }
  return;
}



// FUNCTION 146c4195a FUN_146c4195a body=95 status=ok
// SIG undefined FUN_146c4195a(void)

void FUN_146c4195a(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1 * 0x200 + param_1[1];
  uVar4 = (uint)param_3;
  if (uVar3 != uVar4) {
    if (uVar4 <= uVar3) {
      uVar2 = param_2[1];
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8) +
               (ulonglong)((uVar4 & 0x1ff) << 4));
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      return;
    }
    FUN_146c0aa40(param_1,param_3 & 0xffffffff);
  }
  FUN_146c419ba(param_1,param_2);
  return;
}



// FUNCTION 146c419ba FUN_146c419ba body=154 status=ok
// SIG undefined FUN_146c419ba(void)

void FUN_146c419ba(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  undefined8 uVar5;
  
  iVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0x200) {
    iVar2 = param_1[4];
    if (iVar3 == iVar2 + -1) {
      uVar5 = 0;
      _Dst = (void *)FUN_14001cc68(0x2000,0x10);
      memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar5 >> 8),0xff),0x2000);
      param_1[4] = iVar2 + 1U;
      if ((uint)param_1[5] < iVar2 + 1U) {
        FUN_1411b3e82(param_1 + 2,iVar2);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) = _Dst;
      iVar3 = *param_1;
    }
    iVar3 = iVar3 + 1;
    *param_1 = iVar3;
    param_1[1] = 0;
    uVar4 = 0;
  }
  uVar5 = param_2[1];
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 8) +
           (ulonglong)uVar4 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146c41a54 FUN_146c41a54 body=71 status=ok
// SIG undefined FUN_146c41a54(void)

longlong FUN_146c41a54(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146c41ad0(param_1,param_2);
  *(undefined1 *)(param_1 + 0x70) = 1;
  return param_1;
}



// FUNCTION 146c41a9c FUN_146c41a9c body=52 status=ok
// SIG undefined FUN_146c41a9c(void)

void FUN_146c41a9c(longlong param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 146c41ad0 FUN_146c41ad0 body=159 status=ok
// SIG undefined FUN_146c41ad0(void)

void FUN_146c41ad0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  param_1[4] = param_2[4];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[7] = 0;
  lVar4 = param_2[7];
  if (lVar4 == 0) {
    uVar1 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = uVar1;
    lVar4 = param_2[7];
  }
  param_1[7] = lVar4;
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0x400000000;
  param_1[0xb] = 0;
  lVar4 = param_2[0xb];
  if (lVar4 == 0) {
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[10] = uVar1;
    lVar4 = param_2[0xb];
  }
  param_1[0xb] = lVar4;
  param_2[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  param_2[0xc] = 0x400000000;
  param_1[0xd] = param_2[0xd];
  return;
}



// FUNCTION 146c41b70 FUN_146c41b70 body=556 status=ok
// SIG undefined FUN_146c41b70(void)

void FUN_146c41b70(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 2 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f442(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c42878(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c4247e(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c41db4 FUN_146c41db4 body=556 status=ok
// SIG undefined FUN_146c41db4(void)

void FUN_146c41db4(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 2 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f442(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c42b6c(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c4247e(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c41ff8 FUN_146c41ff8 body=554 status=ok
// SIG undefined FUN_146c41ff8(void)

void FUN_146c41ff8(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 4 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_1411b3fe4(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c42f66(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c42e60(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4223a FUN_146c4223a body=556 status=ok
// SIG undefined FUN_146c4223a(void)

void FUN_146c4223a(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 2 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f442(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c42584(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c4247e(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4247e FUN_146c4247e body=260 status=ok
// SIG undefined FUN_146c4247e(void)

void FUN_146c4247e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_34 = (int)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_14117c696(param_1,local_34);
    if (0 < local_34) {
      iVar5 = 0;
      do {
        uVar4 = FUN_14001cc68(0x400,0x10);
        (**(code **)(*param_2 + 0x170))(param_2,uVar4,0x400);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_141224966(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c42584 FUN_146c42584 body=755 status=ok
// SIG undefined FUN_146c42584(void)

void FUN_146c42584(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint uVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  void *_Dst_00;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar10 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar5 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar5 = (uint)local_68;
    }
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar5 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          uVar9 = (uint)uVar10;
          uVar5 = 0x200;
          if (uVar9 < 0x200) {
            uVar5 = uVar9;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar5 * 2);
          uVar10 = (ulonglong)(uVar9 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
    }
    else {
      FUN_14117c696(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = FUN_14001cc68(0x400,0x10);
        uVar9 = (uint)uVar10;
        uVar5 = 0x200;
        if (uVar9 < 0x200) {
          uVar5 = uVar9;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar6,uVar5 * 2);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_141224966(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar6;
        uVar10 = (ulonglong)(uVar9 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_14008ec20(&local_68,uVar10,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_78 = param_3;
    local_70 = param_2;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 * 2);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar10 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    plVar4 = local_70;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(local_70,local_68,local_78 * 2,local_4c);
    if ((*(byte *)(plVar4 + 5) & 1) != 0) {
      FUN_14117c696(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x400,0x10);
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar10 * 2));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_141224966(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar10 * 2);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c42878 FUN_146c42878 body=755 status=ok
// SIG undefined FUN_146c42878(void)

void FUN_146c42878(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint uVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  void *_Dst_00;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar10 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)CONCAT44(local_68._4_4_,1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar5 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar5 = (uint)local_68;
    }
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar5 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          uVar9 = (uint)uVar10;
          uVar5 = 0x200;
          if (uVar9 < 0x200) {
            uVar5 = uVar9;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar5 * 2);
          uVar10 = (ulonglong)(uVar9 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
    }
    else {
      FUN_14117c696(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = FUN_14001cc68(0x400,0x10);
        uVar9 = (uint)uVar10;
        uVar5 = 0x200;
        if (uVar9 < 0x200) {
          uVar5 = uVar9;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar6,uVar5 * 2);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_141224966(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar6;
        uVar10 = (ulonglong)(uVar9 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_14008ec20(&local_68,uVar10,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_78 = param_3;
    local_70 = param_2;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 * 2);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar10 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    plVar4 = local_70;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(local_70,local_68,local_78 * 2,local_4c);
    if ((*(byte *)(plVar4 + 5) & 1) != 0) {
      FUN_14117c696(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x400,0x10);
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar10 * 2));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_141224966(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar10 * 2);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c42b6c FUN_146c42b6c body=755 status=ok
// SIG undefined FUN_146c42b6c(void)

void FUN_146c42b6c(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint uVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  void *_Dst_00;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar10 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar5 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar5 = (uint)local_68;
    }
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar5 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          uVar9 = (uint)uVar10;
          uVar5 = 0x200;
          if (uVar9 < 0x200) {
            uVar5 = uVar9;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar5 * 2);
          uVar10 = (ulonglong)(uVar9 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
    }
    else {
      FUN_14117c696(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = FUN_14001cc68(0x400,0x10);
        uVar9 = (uint)uVar10;
        uVar5 = 0x200;
        if (uVar9 < 0x200) {
          uVar5 = uVar9;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar6,uVar5 * 2);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_141224966(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar6;
        uVar10 = (ulonglong)(uVar9 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_14008ec20(&local_68,uVar10,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_78 = param_3;
    local_70 = param_2;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 * 2);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar10 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    plVar4 = local_70;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(local_70,local_68,local_78 * 2,local_4c);
    if ((*(byte *)(plVar4 + 5) & 1) != 0) {
      FUN_14117c696(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x400,0x10);
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar10 * 2));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_141224966(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar10 * 2);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c42e60 FUN_146c42e60 body=260 status=ok
// SIG undefined FUN_146c42e60(void)

void FUN_146c42e60(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_34 = (int)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_141082b5c(param_1,local_34);
    if (0 < local_34) {
      iVar5 = 0;
      do {
        uVar4 = FUN_14001cc68(0x800,0x10);
        (**(code **)(*param_2 + 0x170))(param_2,uVar4,0x800);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3bbe(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c42f66 FUN_146c42f66 body=759 status=ok
// SIG undefined FUN_146c42f66(void)

void FUN_146c42f66(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint uVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  void *_Dst_00;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar10 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar5 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar5 = (uint)local_68;
    }
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar5 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          uVar9 = (uint)uVar10;
          uVar5 = 0x200;
          if (uVar9 < 0x200) {
            uVar5 = uVar9;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar5 << 2);
          uVar10 = (ulonglong)(uVar9 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
    }
    else {
      FUN_141082b5c(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = FUN_14001cc68(0x800,0x10);
        uVar9 = (uint)uVar10;
        uVar5 = 0x200;
        if (uVar9 < 0x200) {
          uVar5 = uVar9;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar6,uVar5 << 2);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3bbe(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar6;
        uVar10 = (ulonglong)(uVar9 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_144a127d2(&local_68,uVar10,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_78 = param_3;
    local_70 = param_2;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 2);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar10 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    plVar4 = local_70;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(local_70,local_68,local_78 << 2,local_4c);
    if ((*(byte *)(plVar4 + 5) & 1) != 0) {
      FUN_141082b5c(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x800,0x10);
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar10 * 4));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3bbe(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar10 * 4);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4325e FUN_146c4325e body=57 status=ok
// SIG undefined FUN_146c4325e(void)

undefined8 * FUN_146c4325e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3b7d0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c43298 FUN_146c43298 body=365 status=ok
// SIG undefined FUN_146c43298(void)

undefined4 *
FUN_146c43298(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146c43406(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_146c434ec(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146c4362e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c43406 FUN_146c43406 body=230 status=ok
// SIG undefined FUN_146c43406(void)

int * FUN_146c43406(longlong *param_1,int *param_2)

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



// FUNCTION 146c434ec FUN_146c434ec body=183 status=ok
// SIG undefined FUN_146c434ec(void)

void FUN_146c434ec(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          puVar1 = (undefined8 *)plVar6[1];
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)*param_3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar2;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar3;
          FUN_146c435a4(param_1,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_146c4355e;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_146c4355e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 146c435a4 FUN_146c435a4 body=138 status=ok
// SIG undefined FUN_146c435a4(void)

void FUN_146c435a4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146c4362e FUN_146c4362e body=473 status=ok
// SIG undefined FUN_146c4362e(void)

void FUN_146c4362e(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146c43808 FUN_146c43808 body=123 status=ok
// SIG undefined FUN_146c43808(void)

undefined8 * FUN_146c43808(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146c43884();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146c43884 FUN_146c43884 body=390 status=ok
// SIG undefined FUN_146c43884(void)

longlong * FUN_146c43884(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar8 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar8) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        puVar7 = (undefined8 *)(*local_78 + (longlong)iVar6 * 0x18 + 8);
        FUN_146c55ce2(puVar7,*puVar7);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar8));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c43a0c FUN_146c43a0c body=123 status=ok
// SIG undefined FUN_146c43a0c(void)

undefined8 * FUN_146c43a0c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146c43a88();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146c43a88 FUN_146c43a88 body=394 status=ok
// SIG undefined FUN_146c43a88(void)

longlong * FUN_146c43a88(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar8 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar6 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar7 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar8) || (local_60 = uVar6, uStack_48 != plVar1)) {
      do {
        local_60 = uVar6;
        puVar2 = *(undefined8 **)(*local_78 + 8 + (longlong)iVar7 * 0x18);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar7 = local_60._4_4_;
        uVar6 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar8));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar5 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar5;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c43c14 FUN_146c43c14 body=38 status=ok
// SIG undefined FUN_146c43c14(void)

undefined8 FUN_146c43c14(undefined8 param_1,int param_2)

{
  FUN_14041e0ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c43c3a FUN_146c43c3a body=61 status=ok
// SIG undefined FUN_146c43c3a(void)

void FUN_146c43c3a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146c43c78 FUN_146c43c78 body=212 status=ok
// SIG undefined FUN_146c43c78(void)

void FUN_146c43c78(longlong *param_1)

{
  FUN_146c43d4c(param_1[0x1b],(int)param_1[0x1c]);
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_146c43d4c(param_1[0x19],(int)param_1[0x1a]);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_146c43d80(param_1[0x17],(int)param_1[0x18]);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_146c440a8(param_1 + 0x11);
  if ((char)param_1[0x10] == '\x01') {
    FUN_146c440e6(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  FUN_146c4414d(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_146c441db(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c43d4c FUN_146c43d4c body=52 status=ok
// SIG undefined FUN_146c43d4c(void)

void FUN_146c43d4c(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146c43d80 FUN_146c43d80 body=70 status=ok
// SIG undefined FUN_146c43d80(void)

void FUN_146c43d80(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_149f3baa0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 146c43dc6 FUN_146c43dc6 body=71 status=ok
// SIG undefined FUN_146c43dc6(void)

undefined8 * FUN_146c43dc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3baa0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c43e0e FUN_146c43e0e body=96 status=ok
// SIG undefined FUN_146c43e0e(void)

void FUN_146c43e0e(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_146c43fc2((longlong *)(param_1 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  *(uint *)(lVar2 + 4 + lVar3 * 8) = param_3;
  *(undefined4 *)(lVar2 + lVar3 * 8) =
       *(undefined4 *)
        (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(param_3 >> 9) * 8) +
        (ulonglong)(param_3 & 0x1ff) * 4);
  return;
}



// FUNCTION 146c43e70 FUN_146c43e70 body=193 status=ok
// SIG undefined FUN_146c43e70(void)

void FUN_146c43e70(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar5 = (int)param_3[1];
  iVar6 = *(int *)(param_1 + 0x20) + iVar5;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x24) < iVar6) {
    FUN_146c44048(plVar1);
    iVar5 = (int)param_3[1];
  }
  if (iVar5 != 0) {
    lVar3 = *param_3;
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + lVar7);
      iVar6 = *(int *)(param_1 + 0x20);
      lVar8 = (longlong)iVar6;
      *(uint *)(param_1 + 0x20) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar6 + 1U) {
        FUN_146c43fc2(plVar1,iVar6);
      }
      lVar4 = *plVar1;
      *(undefined8 *)(lVar4 + lVar8 * 8) = 0;
      *(uint *)(lVar4 + 4 + lVar8 * 8) = uVar2;
      *(undefined4 *)(lVar4 + lVar8 * 8) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
            (ulonglong)(uVar2 & 0x1ff) * 4);
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar5 * 4 != lVar7);
  }
  return;
}



// FUNCTION 146c43f34 FUN_146c43f34 body=141 status=ok
// SIG undefined FUN_146c43f34(void)

undefined8 FUN_146c43f34(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (ulonglong)(param_3 ^ 1) * 0x10;
  lVar3 = (longlong)*(int *)(param_1 + 0x10 + lVar5);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 8 + lVar5);
    lVar4 = lVar3 * 8;
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(lVar5 + 4 + lVar3);
      if ((-1 < (int)uVar1) &&
         (lVar2 = *(longlong *)(param_2 + 0x10),
         (int)uVar1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
           (ulonglong)(uVar1 & 0x1ff) * 4) = *(undefined4 *)(lVar5 + lVar3);
        }
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 != lVar3);
  }
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 146c43fc2 FUN_146c43fc2 body=132 status=ok
// SIG undefined FUN_146c43fc2(void)

void FUN_146c43fc2(longlong param_1,int param_2)

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



// FUNCTION 146c44048 FUN_146c44048 body=96 status=ok
// SIG undefined FUN_146c44048(void)

void FUN_146c44048(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146c440a8 FUN_146c440a8 body=62 status=ok
// SIG undefined FUN_146c440a8(void)

void FUN_146c440a8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    *param_1 = &PTR_FUN_149f3baa0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 146c440e6 FUN_146c440e6 body=103 status=ok
// SIG undefined FUN_146c440e6(void)

void FUN_146c440e6(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c4414d FUN_146c4414d body=38 status=ok
// SIG undefined FUN_146c4414d(void)

void FUN_146c4414d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146c44174(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 146c44174 FUN_146c44174 body=103 status=ok
// SIG undefined FUN_146c44174(void)

void FUN_146c44174(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c441db FUN_146c441db body=38 status=ok
// SIG undefined FUN_146c441db(void)

void FUN_146c441db(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146c44202(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 146c44202 FUN_146c44202 body=103 status=ok
// SIG undefined FUN_146c44202(void)

void FUN_146c44202(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c4426a FUN_146c4426a body=176 status=ok
// SIG undefined FUN_146c4426a(void)

longlong * FUN_146c4426a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = (ulonglong)uVar1;
    FUN_1457ed392(param_1,uVar3);
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (*(int *)((longlong)param_1 + 0xc) < (int)uVar1) {
      FUN_1457ed3fa(param_1,uVar1);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x800,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar4 * 8),0x800);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14582f07c(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 146c4431c FUN_146c4431c body=556 status=ok
// SIG undefined FUN_146c4431c(void)

void FUN_146c4431c(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 4 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c2cf40(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c448ac(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c447a4(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c44560 FUN_146c44560 body=556 status=ok
// SIG undefined FUN_146c44560(void)

void FUN_146c44560(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 4 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c2cf40(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c44ba4(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c447a4(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c447a4 FUN_146c447a4 body=262 status=ok
// SIG undefined FUN_146c447a4(void)

void FUN_146c447a4(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_34 = (int)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_1457ed392(param_1,local_34);
    if (0 < local_34) {
      iVar5 = 0;
      do {
        uVar4 = FUN_14001cc68(0x800,0x10);
        (**(code **)(*param_2 + 0x170))(param_2,uVar4,0x800);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14582f07c(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c448ac FUN_146c448ac body=758 status=ok
// SIG undefined FUN_146c448ac(void)

void FUN_146c448ac(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  void *_Dst;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst_00;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  uint local_74;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)CONCAT44(local_68._4_4_,1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar7 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar7 = (uint)local_68;
    }
  }
  else {
    uVar7 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar5 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar7 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar5 != 0) {
        uVar8 = 0;
        do {
          uVar6 = (uint)uVar9;
          uVar7 = 0x200;
          if (uVar6 < 0x200) {
            uVar7 = uVar6;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar7 << 2);
          uVar9 = (ulonglong)(uVar6 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
    }
    else {
      FUN_1457ed392(param_1,uVar5);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar4 = FUN_14001cc68(0x800,0x10);
        uVar6 = (uint)uVar9;
        uVar7 = 0x200;
        if (uVar6 < 0x200) {
          uVar7 = uVar6;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar4,uVar7 << 2);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14582f07c(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
        uVar9 = (ulonglong)(uVar6 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_144a12820(&local_68,uVar9,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_74 = uVar5;
    local_70 = param_3;
    if (uVar5 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar9 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 2);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar9 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar9 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar9;
    FUN_1416a07d6(param_2,local_68,local_70 << 2,local_4c);
    uVar7 = local_74;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_1457ed392(param_1,local_74);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x800,0x10);
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar9 * 4));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14582f07c(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar9 * 4);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c44ba4 FUN_146c44ba4 body=758 status=ok
// SIG undefined FUN_146c44ba4(void)

void FUN_146c44ba4(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  void *_Dst;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst_00;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  uint local_74;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar7 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar7 = (uint)local_68;
    }
  }
  else {
    uVar7 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar5 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar7 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar5 != 0) {
        uVar8 = 0;
        do {
          uVar6 = (uint)uVar9;
          uVar7 = 0x200;
          if (uVar6 < 0x200) {
            uVar7 = uVar6;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar7 << 2);
          uVar9 = (ulonglong)(uVar6 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
    }
    else {
      FUN_1457ed392(param_1,uVar5);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar4 = FUN_14001cc68(0x800,0x10);
        uVar6 = (uint)uVar9;
        uVar7 = 0x200;
        if (uVar6 < 0x200) {
          uVar7 = uVar6;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar4,uVar7 << 2);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14582f07c(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
        uVar9 = (ulonglong)(uVar6 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_144a12820(&local_68,uVar9,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_74 = uVar5;
    local_70 = param_3;
    if (uVar5 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar9 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 2);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar9 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar9 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar9;
    FUN_1416a07d6(param_2,local_68,local_70 << 2,local_4c);
    uVar7 = local_74;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_1457ed392(param_1,local_74);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x800,0x10);
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar9 * 4));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14582f07c(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar9 * 4);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c44e9c FUN_146c44e9c body=554 status=ok
// SIG undefined FUN_146c44e9c(void)

void FUN_146c44e9c(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 4 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_1411b3fe4(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c450de(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c42e60(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c450de FUN_146c450de body=759 status=ok
// SIG undefined FUN_146c450de(void)

void FUN_146c450de(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint uVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  void *_Dst_00;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar10 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)CONCAT44(local_68._4_4_,1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar5 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar5 = (uint)local_68;
    }
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar5 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          uVar9 = (uint)uVar10;
          uVar5 = 0x200;
          if (uVar9 < 0x200) {
            uVar5 = uVar9;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar5 << 2);
          uVar10 = (ulonglong)(uVar9 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
    }
    else {
      FUN_141082b5c(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = FUN_14001cc68(0x800,0x10);
        uVar9 = (uint)uVar10;
        uVar5 = 0x200;
        if (uVar9 < 0x200) {
          uVar5 = uVar9;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar6,uVar5 << 2);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3bbe(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar6;
        uVar10 = (ulonglong)(uVar9 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_144a127d2(&local_68,uVar10,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_78 = param_3;
    local_70 = param_2;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 2);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar10 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    plVar4 = local_70;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(local_70,local_68,local_78 << 2,local_4c);
    if ((*(byte *)(plVar4 + 5) & 1) != 0) {
      FUN_141082b5c(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x800,0x10);
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar10 * 4));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3bbe(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar10 * 4);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c453d6 FUN_146c453d6 body=176 status=ok
// SIG undefined FUN_146c453d6(void)

longlong * FUN_146c453d6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = (ulonglong)uVar1;
    FUN_146bee5d0(param_1,uVar3);
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (*(int *)((longlong)param_1 + 0xc) < (int)uVar1) {
      FUN_146bee638(param_1,uVar1);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x1000,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar4 * 8),0x1000);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146becfc2(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 146c45488 FUN_146c45488 body=58 status=ok
// SIG undefined FUN_146c45488(void)

longlong FUN_146c45488(longlong param_1,int param_2)

{
  FUN_141082b5c(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c454c2 FUN_146c454c2 body=112 status=ok
// SIG undefined FUN_146c454c2(void)

undefined8 * FUN_146c454c2(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3bae0;
  puVar1[2] = param_2;
  FUN_141040b84(puVar1 + 3);
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_146bedfa8(puVar1 + 4,param_1 + 0x20);
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_1 + 0x30);
  return puVar1;
}



// FUNCTION 146c45532 FUN_146c45532 body=80 status=ok
// SIG undefined FUN_146c45532(void)

undefined8 * FUN_146c45532(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3bae0;
  puVar1[2] = param_2;
  FUN_141040b84(puVar1 + 3);
  *(undefined1 *)(puVar1 + 6) = 0;
  FUN_146c458c6(puVar1);
  return puVar1;
}



// FUNCTION 146c45582 FUN_146c45582 body=123 status=ok
// SIG undefined FUN_146c45582(void)

void FUN_146c45582(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    uVar3 = 0;
    do {
      uVar1 = *(uint *)(*param_2 + uVar3 * 4);
      if ((longlong)(int)uVar1 <= (longlong)uVar3 && (longlong)(int)uVar1 != -1) {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
         (ulonglong)(uVar1 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar3 >> 9 & 0x7fffff) * 8) +
              (ulonglong)((uint)uVar3 & 0x1ff) * 4);
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)(int)lVar2 != uVar3);
  }
  FUN_1411b328a(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24));
  return;
}



// FUNCTION 146c45604 FUN_146c45604 body=358 status=ok
// SIG undefined FUN_146c45604(void)

undefined8 FUN_146c45604(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = (int)param_3[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar5 = 1;
  local_90 = param_3;
  if ((iStack_54 != iVar6) || (uStack_60 != plVar1)) {
    do {
      lVar3 = *local_90;
      lVar7 = (longlong)iStack_74;
      cVar4 = (**(code **)(*param_2 + 0x38))
                        (param_2,*(undefined4 *)(lVar3 + lVar7 * 0x10),&local_68,4);
      if (cVar4 == '\0') {
        uVar5 = 0;
        goto LAB_146c4569b;
      }
      uVar2 = *(uint *)(lVar3 + lVar7 * 0x10 + 4);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = (undefined4)local_68;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar6) ||
             local_90 != param_3);
    uVar5 = 1;
  }
LAB_146c4569b:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c45816 FUN_146c45816 body=66 status=ok
// SIG undefined FUN_146c45816(void)

void FUN_146c45816(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_146bedf4e(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4585a FUN_146c4585a body=66 status=ok
// SIG undefined FUN_146c4585a(void)

undefined8 * FUN_146c4585a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[4] = 0;
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_149f3bba0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined2 *)(puVar1 + 5) = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146c458c6 FUN_146c458c6 body=88 status=ok
// SIG undefined FUN_146c458c6(void)

void FUN_146c458c6(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_1411b328a(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24));
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar2 * 8) + lVar3 * 4) =
             0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 146c4591e FUN_146c4591e body=61 status=ok
// SIG undefined FUN_146c4591e(void)

longlong FUN_146c4591e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c4595c FUN_146c4595c body=29 status=ok
// SIG undefined FUN_146c4595c(void)

undefined8 FUN_146c4595c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c4597e FUN_146c4597e body=155 status=ok
// SIG undefined FUN_146c4597e(void)

undefined8 FUN_146c4597e(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_146c45a1a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146c45a1a FUN_146c45a1a body=93 status=ok
// SIG undefined FUN_146c45a1a(void)

void FUN_146c45a1a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_146c45a78(param_1,param_2,1);
  return;
}



// FUNCTION 146c45a78 FUN_146c45a78 body=92 status=ok
// SIG undefined FUN_146c45a78(void)

void FUN_146c45a78(longlong *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + (longlong)param_2 * 0x18 + 8);
    iVar2 = param_3;
    do {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar3 = plVar3 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_146c435a4(param_1,param_2,param_3);
  return;
}



// FUNCTION 146c45ad4 FUN_146c45ad4 body=554 status=ok
// SIG undefined FUN_146c45ad4(void)

void FUN_146c45ad4(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 4 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_1411b3fe4(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c45d16(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c42e60(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c45d16 FUN_146c45d16 body=759 status=ok
// SIG undefined FUN_146c45d16(void)

void FUN_146c45d16(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint uVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  void *_Dst_00;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar10 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar5 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar5 = (uint)local_68;
    }
  }
  else {
    uVar5 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar5 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          uVar9 = (uint)uVar10;
          uVar5 = 0x200;
          if (uVar9 < 0x200) {
            uVar5 = uVar9;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar5 << 2);
          uVar10 = (ulonglong)(uVar9 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
    }
    else {
      FUN_141082b5c(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = FUN_14001cc68(0x800,0x10);
        uVar9 = (uint)uVar10;
        uVar5 = 0x200;
        if (uVar9 < 0x200) {
          uVar5 = uVar9;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar6,uVar5 << 2);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3bbe(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar6;
        uVar10 = (ulonglong)(uVar9 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_144a127d2(&local_68,uVar10,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_78 = param_3;
    local_70 = param_2;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 2);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar10 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    plVar4 = local_70;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(local_70,local_68,local_78 << 2,local_4c);
    if ((*(byte *)(plVar4 + 5) & 1) != 0) {
      FUN_141082b5c(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x800,0x10);
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar10 * 4));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3bbe(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar10 * 4);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4600e FUN_146c4600e body=38 status=ok
// SIG undefined FUN_146c4600e(void)

undefined8 FUN_146c4600e(undefined8 param_1,int param_2)

{
  FUN_146c4750e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c46044 FUN_146c46044 body=76 status=ok
// SIG undefined FUN_146c46044(void)

void FUN_146c46044(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = in_stack_00000028;
  local_38 = local_20;
  (**(code **)(*param_1 + 0x30))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c46092 FUN_146c46092 body=84 status=ok
// SIG undefined FUN_146c46092(void)

undefined4 FUN_146c46092(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = local_38;
  local_40 = param_3;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18,&local_1c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c460e8 FUN_146c460e8 body=123 status=ok
// SIG undefined FUN_146c460e8(void)

undefined8 FUN_146c460e8(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (-1 < iVar1) goto LAB_146c4613f;
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_146c4613f:
    local_28 = param_4;
    FUN_146c475c2(param_1,iVar1,param_2,param_3);
    if (*(int *)(param_3 + 1) != 0) {
      FUN_146c47afa(*param_3);
      uVar2 = 1;
      goto LAB_146c46122;
    }
  }
  uVar2 = 0;
LAB_146c46122:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146c46164 FUN_146c46164 body=281 status=ok
// SIG undefined FUN_146c46164(void)

undefined4 * FUN_146c46164(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [40];
  undefined1 local_110 [8];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0 [12];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78 [4];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,local_110);
  if ((int)uVar1 < 0) {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    local_90 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    uStack_84 = param_3[3];
  }
  else {
    lVar4 = *(longlong *)param_1[1];
    lVar3 = ((longlong *)param_1[1])[2];
    uVar2 = (ulonglong)uVar1;
    lVar7 = (longlong)*(int *)(lVar3 + uVar2 * 0xc);
    lVar8 = (longlong)*(int *)(lVar3 + 4 + uVar2 * 0xc);
    lVar3 = (longlong)*(int *)(lVar3 + 8 + uVar2 * 0xc);
    local_78[2] = *(undefined8 *)(lVar4 + 0x10 + lVar7 * 0x18);
    puVar5 = (undefined8 *)(lVar4 + lVar7 * 0x18);
    local_78[0] = *puVar5;
    local_78[1] = puVar5[1];
    local_50 = *(undefined8 *)(lVar4 + 0x10 + lVar8 * 0x18);
    puVar5 = (undefined8 *)(lVar4 + lVar8 * 0x18);
    local_78[3] = *puVar5;
    uStack_58 = puVar5[1];
    puVar5 = (undefined8 *)(lVar4 + lVar3 * 0x18);
    local_48 = *puVar5;
    uStack_40 = puVar5[1];
    local_38 = *(undefined8 *)(lVar4 + 0x10 + lVar3 * 0x18);
    local_108 = *param_3;
    uStack_104 = param_3[1];
    uStack_100 = param_3[2];
    uStack_fc = param_3[3];
    local_f8 = *(undefined8 *)(param_3 + 4);
    puVar5 = local_78;
    puVar6 = local_f0;
    for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_146bd2a7a(&local_108);
    *(undefined8 *)(param_2 + 4) = local_80;
  }
  *param_2 = local_90;
  param_2[1] = uStack_8c;
  param_2[2] = uStack_88;
  param_2[3] = uStack_84;
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4627e FUN_146c4627e body=134 status=ok
// SIG undefined FUN_146c4627e(void)

bool FUN_146c4627e(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  longlong param_5)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  int *local_28;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_3;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146c462e6;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) {
LAB_146c462e6:
    bVar1 = false;
    goto LAB_146c462e8;
  }
  *param_4 = -1;
  local_20 = param_5;
  local_28 = param_4;
  FUN_146c48186(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,&local_18);
  bVar1 = *param_4 != -1;
LAB_146c462e8:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c46306 FUN_146c46306 body=171 status=ok
// SIG undefined FUN_146c46306(void)

undefined4
FUN_146c46306(longlong param_1,undefined8 param_2,ulonglong *param_3,double param_4,longlong param_5
             )

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  longlong local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    uVar1 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146c46395;
  }
  else {
    uVar1 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_146c46395;
  }
  uVar2 = (ulonglong)(param_4 * param_4) & -(ulonglong)(param_4 < 1.79769313486232e+308);
  *param_3 = ~-(ulonglong)(param_4 < 1.79769313486232e+308) & 0x7fefffffffffffff | uVar2;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_5;
  FUN_146c485d6(uVar2,*(undefined4 *)(param_1 + 0xcc),param_2);
  uVar1 = local_14;
LAB_146c46395:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c463b2 FUN_146c463b2 body=125 status=ok
// SIG undefined FUN_146c463b2(void)

undefined8 FUN_146c463b2(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double *local_20;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_3 + 10) != '\0')) {
    if (iVar1 < 0) goto LAB_146c46412;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) {
LAB_146c46412:
    uVar2 = 0;
    goto LAB_146c46414;
  }
  local_28 = *param_3;
  if (3.4028234663852886e+38 <= local_28) {
    local_28 = 3.4028234663852886e+38;
  }
  local_c = 0xffffffff;
  local_20 = param_3;
  uVar2 = FUN_146c488dc(local_28,iVar1,param_2);
LAB_146c46414:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c46430 FUN_146c46430 body=287 status=ok
// SIG undefined FUN_146c46430(void)

undefined8 *
FUN_146c46430(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             double *param_5,double *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  double *local_58;
  undefined8 *local_50;
  double *local_48;
  undefined8 local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146c46513;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) {
LAB_146c46513:
    *param_2 = 0xffffffffffffffff;
    goto LAB_146c4651a;
  }
  local_38 = 1.79769313486232e+308;
  dVar1 = *param_6;
  dVar2 = 1.79769313486232e+308;
  if (dVar1 < 1.79769313486232e+308) {
    local_38 = dVar1 * dVar1;
  }
  *param_2 = 0xffffffffffffffff;
  local_68 = *(undefined4 *)(param_3 + 0xcc);
  local_40 = param_7;
  local_48 = param_6;
  local_58 = &local_38;
  local_60 = 0;
  local_50 = param_2;
  FUN_146c48d40();
  if (local_38 < 1.79769313486232e+308) {
    if (local_38 < 0.0) {
      dVar2 = sqrt(local_38);
    }
    else {
      dVar2 = SQRT(local_38);
    }
  }
  *param_5 = dVar2;
LAB_146c4651a:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c46550 FUN_146c46550 body=395 status=ok
// SIG undefined FUN_146c46550(void)

void FUN_146c46550(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *(uint *)((longlong)param_1 + 0xcc);
  if (((int)uVar3 < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if ((int)uVar3 < 0) goto LAB_146c4669e;
  }
  else if (param_1[2] != 0) goto LAB_146c4669e;
  lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar3 >> 9) * 8);
  lVar7 = (ulonglong)((uVar3 & 0x1ff) << 3) * 3;
  lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar3 >> 9) * 8);
  local_80 = *(double *)(lVar4 + 0x10 + lVar7);
  dVar1 = *(double *)(lVar5 + 0x10 + lVar7);
  local_98 = local_80 - dVar1;
  local_88 = *(double *)(lVar4 + 8 + lVar7);
  dVar2 = *(double *)(lVar5 + 8 + lVar7);
  local_a0 = local_88 - dVar2;
  local_a8 = *(double *)(lVar4 + lVar7) - *(double *)(lVar5 + lVar7);
  local_80 = local_80 + dVar1;
  local_88 = local_88 + dVar2;
  local_90 = *(double *)(lVar4 + lVar7) + *(double *)(lVar5 + lVar7);
  local_74 = 0;
  pcVar6 = (code *)*param_2;
  plVar10 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar10 = (longlong *)param_2[2];
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  cVar8 = (*pcVar6)(uVar9,&local_a8,&local_74);
  if (cVar8 != '\0') {
    local_b8 = param_3;
    (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)((longlong)param_1 + 0xcc),0,param_2);
  }
LAB_146c4669e:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c466dc FUN_146c466dc body=1281 status=ok
// SIG undefined FUN_146c466dc(void)

void FUN_146c466dc(longlong *param_1,ulonglong param_2,int param_3,undefined8 *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_c8;
  uint local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  uint local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_84 = (uint)param_2;
  uVar14 = *(uint *)(*(longlong *)(param_1[0xe] + (param_2 >> 9 & 0x7fffff) * 8) +
                    (ulonglong)(local_84 & 0x1ff) * 4);
  if ((int)uVar14 < (int)param_1[0x19]) {
    local_b8 = (double)CONCAT44(local_b8._4_4_,param_3);
    pcVar13 = (code *)param_4[8];
    plVar10 = param_4 + 0xc;
    if ((longlong *)param_4[10] != (longlong *)0x0) {
      plVar10 = (longlong *)param_4[10];
    }
    local_c8 = param_4;
    local_bc = local_84;
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_84,&local_b8);
    iVar15 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar15) {
      plVar10 = local_c8 + 0x14;
      do {
        uVar14 = uVar14 + 1;
        uVar3 = *(undefined4 *)
                 (*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar13 = *(code **)(param_5 + 0x10);
        if (pcVar13 == (code *)0x0) {
LAB_146c4681e:
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          pcVar13 = (code *)local_c8[0x10];
          plVar9 = (longlong *)local_c8[0x12];
          if ((longlong *)local_c8[0x12] == (longlong *)0x0) {
            plVar9 = plVar10;
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          (*pcVar13)(uVar8,&local_b8);
        }
        else {
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          plVar9 = *(longlong **)(param_5 + 0x20);
          if (*(longlong **)(param_5 + 0x20) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_5 + 0x30);
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar7 = (*pcVar13)(uVar8,&local_b8);
          if (cVar7 != '\0') goto LAB_146c4681e;
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_b8 = (double)CONCAT44(local_b8._4_4_,local_bc);
    pcVar13 = (code *)local_c8[0x18];
    plVar10 = local_c8 + 0x1c;
    if ((longlong *)local_c8[0x1a] != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8[0x1a];
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_b8);
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    uVar11 = param_3 + 1;
    local_84 = uVar11;
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
    }
    else {
      uVar12 = uVar12 - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = (longlong *)param_4[2];
      if ((longlong *)param_4[2] == (longlong *)0x0) {
        plVar10 = param_4 + 4;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
      if (cVar7 != '\0') {
        local_d8 = param_5;
        (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
      }
      uVar12 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      local_84 = uVar11;
      uVar8 = (**(code **)(*plVar10 + 8))(plVar10);
    }
    cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
    if (cVar7 != '\0') {
      local_d8 = param_5;
      (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c46bde FUN_146c46bde body=191 status=ok
// SIG undefined FUN_146c46bde(void)

bool FUN_146c46bde(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  longlong local_80;
  undefined1 local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146c46c75;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) {
LAB_146c46c75:
    bVar2 = false;
    goto LAB_146c46c77;
  }
  FUN_146bda344(local_58,param_2,param_2 + 0x18,param_2 + 0x30);
  local_60 = &local_69;
  local_88 = &local_68;
  local_68 = &LAB_146c49e6c;
  local_80 = param_3;
  iVar1 = FUN_146c49ac8(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,local_58);
  bVar2 = -1 < iVar1;
LAB_146c46c77:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c46c9e FUN_146c46c9e body=164 status=ok
// SIG undefined FUN_146c46c9e(void)

undefined8
FUN_146c46c9e(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 **local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146c46d24;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) {
LAB_146c46d24:
    uVar1 = 0;
    goto LAB_146c46d26;
  }
  local_18 = &local_28;
  local_48 = &local_20;
  local_20 = &LAB_146c4a846;
  local_58 = *(undefined4 *)(param_2 + 0xcc);
  local_38 = param_5;
  local_50 = 0;
  local_40 = param_4;
  local_28 = param_1;
  uVar1 = FUN_146c49e80();
LAB_146c46d26:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c46d44 FUN_146c46d44 body=856 status=ok
// SIG undefined FUN_146c46d44(void)

uint FUN_146c46d44(longlong *param_1,longlong *param_2,double *param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_158 [36];
  uint local_134;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  ulonglong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar4 = *(int *)((longlong)param_1 + 0xcc);
  local_130 = param_1;
  if ((iVar4 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (-1 < iVar4) goto LAB_146c46da7;
  }
  else if (param_1[2] == 0) {
LAB_146c46da7:
    local_128 = param_2;
    if (((*param_3 < param_3[3] || *param_3 == param_3[3]) &&
        (param_3[1] < param_3[4] || param_3[1] == param_3[4])) &&
       (param_3[2] < param_3[5] || param_3[2] == param_3[5])) {
      if (*param_4 != 0) {
        local_78 = 0;
        local_68 = &PTR_LAB_149f3bce0;
        local_88 = FUN_146c4a85a;
        local_60 = param_4;
        FUN_146bda188(&local_d8,param_3);
        *(undefined4 *)param_3 = (undefined4)local_d8;
        *(undefined4 *)((longlong)param_3 + 4) = local_d8._4_4_;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_d0._4_4_;
        *(undefined4 *)(param_3 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)param_3 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(param_3 + 3) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_c0._4_4_;
        *(undefined4 *)(param_3 + 4) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)param_3 + 0x24) = uStack_b8._4_4_;
        *(undefined4 *)(param_3 + 5) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_b0._4_4_;
        iVar4 = *(int *)((longlong)local_130 + 0xcc);
      }
      cVar7 = FUN_146c49dac(local_130,iVar4,param_3);
      if (cVar7 == '\0') goto LAB_146c46d9c;
    }
    uVar9 = (ulonglong)(int)local_128[3];
    if ((longlong)uVar9 < 1) {
      local_134 = 0;
      uVar8 = local_134;
    }
    else {
      plVar1 = param_4 + 4;
      local_118 = uVar9 * 0xc;
      local_134 = (uint)CONCAT71((int7)((ulonglong)local_118 >> 8),1);
      uVar15 = 1;
      lVar16 = 0;
      local_120 = plVar1;
      local_110 = uVar9;
      do {
        plVar13 = local_128;
        pcVar5 = (code *)*param_4;
        lVar14 = local_128[2];
        lVar11 = (longlong)*(int *)(lVar14 + lVar16);
        lVar17 = (longlong)*(int *)(lVar14 + 4 + lVar16);
        lVar14 = (longlong)*(int *)(lVar14 + 8 + lVar16);
        if (pcVar5 == (code *)0x0) {
          lVar6 = *local_128;
          local_c8 = *(undefined8 *)(lVar6 + 0x10 + lVar11 * 0x18);
          puVar3 = (undefined8 *)(lVar6 + lVar11 * 0x18);
          local_d8 = *puVar3;
          uStack_d0 = puVar3[1];
          uStack_b0 = *(undefined8 *)(lVar6 + 0x10 + lVar17 * 0x18);
          puVar3 = (undefined8 *)(lVar6 + lVar17 * 0x18);
          uStack_c0 = *puVar3;
          uStack_b8 = puVar3[1];
          local_98 = *(undefined8 *)(lVar6 + 0x10 + lVar14 * 0x18);
          puVar2 = (undefined4 *)(lVar6 + lVar14 * 0x18);
          local_a8 = *puVar2;
          uStack_a4 = puVar2[1];
          uStack_a0 = puVar2[2];
          uStack_9c = puVar2[3];
        }
        else {
          local_f8 = *(undefined8 *)(*local_128 + 0x10 + lVar11 * 0x18);
          puVar2 = (undefined4 *)(*local_128 + lVar11 * 0x18);
          local_108 = *puVar2;
          uStack_104 = puVar2[1];
          uStack_100 = puVar2[2];
          uStack_fc = puVar2[3];
          plVar12 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar12 = plVar1;
          }
          uVar10 = (**(code **)(*plVar12 + 8))();
          (*pcVar5)(&local_f0,uVar10,&local_108);
          local_c8 = local_e0;
          local_d8 = CONCAT44(uStack_ec,local_f0);
          uStack_d0 = CONCAT44(uStack_e4,uStack_e8);
          lVar11 = *plVar13;
          local_f8 = *(undefined8 *)(lVar11 + 0x10 + lVar17 * 0x18);
          puVar2 = (undefined4 *)(lVar11 + lVar17 * 0x18);
          local_108 = *puVar2;
          uStack_104 = puVar2[1];
          uStack_100 = puVar2[2];
          uStack_fc = puVar2[3];
          pcVar5 = (code *)*param_4;
          plVar12 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar12 = plVar1;
          }
          uVar10 = (**(code **)(*plVar12 + 8))();
          (*pcVar5)(&local_f0,uVar10,&local_108);
          uStack_b0 = local_e0;
          uStack_c0 = CONCAT44(uStack_ec,local_f0);
          uStack_b8 = CONCAT44(uStack_e4,uStack_e8);
          lVar11 = *plVar13;
          local_f8 = *(undefined8 *)(lVar11 + 0x10 + lVar14 * 0x18);
          puVar2 = (undefined4 *)(lVar11 + lVar14 * 0x18);
          local_108 = *puVar2;
          uStack_104 = puVar2[1];
          uStack_100 = puVar2[2];
          uStack_fc = puVar2[3];
          pcVar5 = (code *)*param_4;
          plVar13 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar13 = plVar1;
          }
          uVar10 = (**(code **)(*plVar13 + 8))();
          (*pcVar5)(&local_f0,uVar10,&local_108);
          local_98 = local_e0;
          local_a8 = local_f0;
          uStack_a4 = uStack_ec;
          uStack_a0 = uStack_e8;
          uStack_9c = uStack_e4;
        }
        uVar10 = (**(code **)(*local_130 + 0x88))(local_130,&local_d8,param_5);
        uVar8 = local_134;
        if ((char)uVar10 != '\0') break;
        local_134 = (uint)CONCAT71((int7)((ulonglong)uVar10 >> 8),uVar15 < local_110);
        lVar16 = lVar16 + 0xc;
        uVar15 = uVar15 + 1;
        uVar8 = local_134;
      } while (local_118 != lVar16);
    }
    goto LAB_146c46fe0;
  }
LAB_146c46d9c:
  uVar8 = 0;
LAB_146c46fe0:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 146c4709e FUN_146c4709e body=528 status=ok
// SIG undefined FUN_146c4709e(void)

undefined8 *
FUN_146c4709e(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  code **local_e0;
  longlong local_d8;
  undefined8 local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_7 == 0) {
    local_b8 = *param_7;
    uStack_70 = param_7[1];
    local_a8 = (longlong *)param_7[2];
    uStack_60 = param_7[3];
    local_58 = param_7[4];
    lStack_50 = param_7[5];
    local_48 = param_7[6];
    uStack_40 = param_7[7];
    lVar4 = local_48;
    lVar5 = uStack_40;
    local_68 = local_a8;
    lVar3 = uStack_60;
    local_78 = local_b8;
    lVar2 = uStack_70;
    param_7[6] = CONCAT44(uStack_84,local_88);
    param_7[7] = CONCAT44(uStack_7c,uStack_80);
    param_7[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_7[5] = (longlong)FUN_146c4b2d4;
    param_7[2] = 0;
    param_7[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_7 = (longlong)&LAB_146bddb20;
    param_7[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar2;
    uStack_60 = lVar3;
    local_48 = lVar4;
    uStack_40 = lVar5;
    if (local_b8 != 0) {
      plVar6 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar6 = &local_98;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (iVar1 < 0) goto LAB_146c47161;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_146c47161;
  local_e0 = &local_c8;
  local_c0 = param_7;
  local_c8 = FUN_146bddd1c;
  local_f8 = *(undefined4 *)(param_3 + 0xcc);
  local_d0 = param_6;
  local_d8 = param_5;
  local_f0 = 0;
  local_e8 = param_2;
  FUN_146c4a8e0(param_1,iVar1,param_3,param_4);
LAB_146c47161:
  if (*param_7 != 0) {
    plVar6 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c472b0 FUN_146c472b0 body=454 status=ok
// SIG undefined FUN_146c472b0(void)

undefined8 *
FUN_146c472b0(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_5 == 0) {
    local_b8 = *param_5;
    uStack_70 = param_5[1];
    local_a8 = (longlong *)param_5[2];
    uStack_60 = param_5[3];
    local_58 = param_5[4];
    lStack_50 = param_5[5];
    local_48 = param_5[6];
    uStack_40 = param_5[7];
    lVar3 = local_48;
    lVar4 = uStack_40;
    local_68 = local_a8;
    lVar2 = uStack_60;
    local_78 = local_b8;
    lVar1 = uStack_70;
    param_5[6] = CONCAT44(uStack_84,local_88);
    param_5[7] = CONCAT44(uStack_7c,uStack_80);
    param_5[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_5[5] = (longlong)FUN_146c4b920;
    param_5[2] = 0;
    param_5[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_5 = (longlong)&LAB_146bddb20;
    param_5[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar1;
    uStack_60 = lVar2;
    local_48 = lVar3;
    uStack_40 = lVar4;
    if (local_b8 != 0) {
      plVar5 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar5 = &local_98;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146c47341;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_146c47341;
  local_c0 = param_5;
  local_c8 = FUN_146bddd1c;
  local_d8 = param_4;
  FUN_146c4b7b4(param_1,param_2,param_3);
LAB_146c47341:
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c47478 FUN_146c47478 body=119 status=ok
// SIG undefined FUN_146c47478(void)

undefined8 FUN_146c47478(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146c474d2;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) {
LAB_146c474d2:
    uVar1 = 0;
    goto LAB_146c474d4;
  }
  local_10 = &local_19;
  local_18 = FUN_146c4c396;
  local_28 = param_3;
  uVar1 = FUN_146c4b7b4(param_1,0,param_2);
LAB_146c474d4:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4750e FUN_146c4750e body=180 status=ok
// SIG undefined FUN_146c4750e(void)

void FUN_146c4750e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f3bc00;
  FUN_141082b5c(param_1 + 0x17,0);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x14,0);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x11,0);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0xe,0);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x000146c475b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 146c475c2 FUN_146c475c2 body=1027 status=ok
// SIG undefined FUN_146c475c2(void)

void FUN_146c475c2(longlong param_1,uint param_2,int *param_3,longlong *param_4,double *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  int *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158 [9];
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar2 = *param_5;
  uVar24 = SUB84(dVar2,0);
  uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (3.4028234663852886e+38 <= dVar2) {
    uVar24 = 0xe0000000;
    uVar25 = 0x47efffff;
  }
  uVar20 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1b8 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar20) {
    do {
      uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar20 >> 9) * 8)
                        + (ulonglong)(uVar20 & 0x1ff) * 4);
      if ((int)uVar14 < 0) {
        uVar14 = ~uVar14;
        dVar2 = (double)FUN_146c479c6(param_1,uVar14,local_1b8);
        bVar21 = (double)CONCAT44(uVar25,uVar24) + 1e-08 < dVar2;
LAB_146c47870:
        uVar17 = (ulonglong)uVar14;
        if (bVar21) goto LAB_146c4795e;
      }
      else {
        uVar14 = uVar14 - 1;
        uVar20 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                         (ulonglong)(uVar20 + 1 & 0x1ff) * 4) - 1;
        uVar17 = (ulonglong)uVar20;
        dVar22 = (double)FUN_146c479c6(param_1,uVar14,param_3);
        dVar23 = (double)FUN_146c479c6(param_1,uVar17,param_3);
        dVar2 = (double)CONCAT44(uVar25,uVar24) + 1e-08;
        if (dVar23 <= dVar22) {
          if (dVar23 <= dVar2) {
            local_1c8 = param_5;
            FUN_146c475c2(param_1,uVar20,local_1b8,param_4);
            bVar21 = dVar2 < dVar22;
            goto LAB_146c47870;
          }
          goto LAB_146c4795e;
        }
        if (dVar2 < dVar22) goto LAB_146c4795e;
        local_1c8 = param_5;
        FUN_146c475c2(param_1,uVar14,local_1b8,param_4);
        if (dVar2 < dVar23) goto LAB_146c4795e;
      }
      dVar2 = *param_5;
      uVar24 = SUB84(dVar2,0);
      uVar25 = (int)((ulonglong)dVar2 >> 0x20);
      if (3.4028234663852886e+38 <= dVar2) {
        uVar24 = 0xe0000000;
        uVar25 = 0x47efffff;
      }
      uVar20 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar17 >> 9) * 8) +
                        (ulonglong)((uint)uVar17 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar20);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar20 >> 9) * 8) +
                   (ulonglong)(uVar20 & 0x1ff) * 4);
  local_1b0 = param_4;
  if (0 < iVar13) {
    do {
      uVar20 = uVar20 + 1;
      iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar20 >> 9) * 8) +
                      (ulonglong)(uVar20 & 0x1ff) * 4);
      pcVar5 = (code *)param_5[2];
      if (pcVar5 == (code *)0x0) {
LAB_146c476ef:
        lVar9 = (longlong)iVar3;
        lVar12 = **(longlong **)(param_1 + 8);
        lVar10 = (*(longlong **)(param_1 + 8))[2];
        lVar18 = (longlong)*(int *)(lVar10 + lVar9 * 0xc);
        lVar19 = (longlong)*(int *)(lVar10 + 4 + lVar9 * 0xc);
        lVar10 = (longlong)*(int *)(lVar10 + 8 + lVar9 * 0xc);
        local_e8[2] = *(undefined8 *)(lVar12 + 0x10 + lVar18 * 0x18);
        puVar15 = (undefined8 *)(lVar12 + lVar18 * 0x18);
        local_e8[0] = *puVar15;
        local_e8[1] = puVar15[1];
        local_c0 = *(undefined8 *)(lVar12 + 0x10 + lVar19 * 0x18);
        puVar15 = (undefined8 *)(lVar12 + lVar19 * 0x18);
        local_e8[3] = *puVar15;
        uStack_c8 = puVar15[1];
        local_a8 = *(undefined8 *)(lVar12 + 0x10 + lVar10 * 0x18);
        puVar15 = (undefined8 *)(lVar12 + lVar10 * 0x18);
        local_b8 = *puVar15;
        uStack_b0 = puVar15[1];
        local_188 = *local_1b8;
        iStack_184 = local_1b8[1];
        iStack_180 = local_1b8[2];
        iStack_17c = local_1b8[3];
        local_178 = local_1b8[4];
        iStack_174 = local_1b8[5];
        iStack_170 = local_1b8[6];
        iStack_16c = local_1b8[7];
        local_168 = local_1b8[8];
        iStack_164 = local_1b8[9];
        iStack_160 = local_1b8[10];
        iStack_15c = local_1b8[0xb];
        puVar15 = local_e8;
        puVar16 = local_158;
        for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar16 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
        }
        cVar7 = FUN_146bd80f0(&local_188);
        dVar2 = local_110;
        plVar6 = local_1b0;
        if ((cVar7 != '\0') && (local_110 <= (double)CONCAT44(uVar25,uVar24) + 1e-08)) {
          local_198 = local_f8;
          local_1a8 = local_108;
          uStack_1a4 = uStack_104;
          uStack_1a0 = uStack_100;
          uStack_19c = uStack_fc;
          iVar4 = (int)local_1b0[1];
          lVar12 = (longlong)iVar4;
          *(uint *)(local_1b0 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)local_1b0 + 0xc) < iVar4 + 1U) {
            FUN_146bd88d8(local_1b0,iVar4);
          }
          lVar10 = *plVar6;
          *(int *)(lVar10 + lVar12 * 0x28) = iVar3;
          *(double *)(lVar10 + 8 + lVar12 * 0x28) = dVar2;
          puVar1 = (undefined4 *)(lVar10 + 0x10 + lVar12 * 0x28);
          *puVar1 = local_1a8;
          puVar1[1] = uStack_1a4;
          puVar1[2] = uStack_1a0;
          puVar1[3] = uStack_19c;
          *(undefined8 *)(lVar10 + 0x20 + lVar12 * 0x28) = local_198;
        }
      }
      else {
        pdVar11 = (double *)param_5[4];
        if ((double *)param_5[4] == (double *)0x0) {
          pdVar11 = param_5 + 6;
        }
        local_188 = iVar3;
        uVar8 = (**(code **)((longlong)*pdVar11 + 8))();
        cVar7 = (*pcVar5)(uVar8,&local_188);
        if (cVar7 != '\0') goto LAB_146c476ef;
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
LAB_146c4795e:
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c479c6 FUN_146c479c6 body=307 status=ok
// SIG undefined FUN_146c479c6(void)

void FUN_146c479c6(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_70 = *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(lVar2 + 0x10 + lVar3) + local_70;
  dVar7 = *(double *)(lVar2 + 8 + lVar3) + local_70;
  local_70 = local_70 + *(double *)(lVar2 + lVar3);
  local_60 = *(double *)(lVar1 + 0x10 + lVar3);
  local_48 = dVar6 + local_60;
  local_68 = *(double *)(lVar1 + 8 + lVar3);
  local_50 = dVar7 + local_68;
  local_58 = local_70 + *(double *)(lVar1 + lVar3);
  local_60 = local_60 - dVar6;
  local_68 = local_68 - dVar7;
  local_70 = *(double *)(lVar1 + lVar3) - local_70;
  local_78 = 0x7fefffffffffffff;
  cVar4 = FUN_146bd8472(param_3);
  uVar5 = local_78;
  if (cVar4 == '\0') {
    uVar5 = 0x7fefffffffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar5);
  }
  return;
}



// FUNCTION 146c47afa FUN_146c47afa body=957 status=ok
// SIG undefined FUN_146c47afa(void)

void FUN_146c47afa(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_368 = param_1;
    fVar23 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar23 + fVar23);
    plVar15 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar15;
      puVar16 = (undefined8 *)plVar15[1];
      iVar18 = (int)plVar15[2];
      uVar12 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar10) >> 3) * -0x33333333 + 1;
      puVar17 = puVar16;
      puVar19 = puVar16;
      puVar20 = puVar10;
      if (iVar18 != 0) {
LAB_146c47bcb:
        if (8 < (int)uVar12) {
          uVar13 = (ulonglong)(uVar12 >> 1);
          uVar1 = puVar10[uVar13 * 5 + 4];
          uVar2 = puVar10[uVar13 * 5];
          uVar3 = (puVar10 + uVar13 * 5)[1];
          uVar4 = puVar10[uVar13 * 5 + 2];
          uVar5 = (puVar10 + uVar13 * 5 + 2)[1];
          puVar10[uVar13 * 5 + 4] = puVar10[4];
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          uVar8 = puVar10[3];
          puVar10[uVar13 * 5 + 2] = puVar10[2];
          (puVar10 + uVar13 * 5 + 2)[1] = uVar8;
          puVar10[uVar13 * 5] = uVar6;
          (puVar10 + uVar13 * 5)[1] = uVar7;
          puVar10[4] = uVar1;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar14 = puVar16 + 5;
          puVar11 = puVar10;
          do {
            puVar17 = puVar11 + 5;
            puVar9 = puVar11 + 5;
            do {
              puVar21 = puVar9;
              puVar11 = puVar17;
              if (puVar16 < puVar11) break;
              puVar17 = puVar11 + 5;
              puVar9 = puVar21 + 5;
            } while ((double)puVar11[1] < (double)puVar10[1] ||
                     (double)puVar11[1] == (double)puVar10[1]);
            puVar9 = puVar14 + -10;
            do {
              puVar17 = puVar14;
              puVar22 = puVar9;
              puVar14 = puVar17 + -5;
              if (puVar14 <= puVar10) break;
              puVar9 = puVar22 + -5;
            } while ((double)puVar10[1] < (double)puVar17[-4] ||
                     (double)puVar10[1] == (double)puVar17[-4]);
            if (puVar14 < puVar11) goto LAB_146c47cfe;
            uVar1 = puVar11[4];
            uVar2 = *puVar11;
            uVar3 = puVar11[1];
            uVar4 = puVar11[2];
            uVar5 = puVar11[3];
            puVar11[4] = puVar17[-1];
            uVar6 = *puVar14;
            uVar7 = puVar17[-4];
            uVar8 = puVar17[-2];
            puVar11[2] = puVar17[-3];
            puVar11[3] = uVar8;
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar17[-1] = uVar1;
            puVar17[-3] = uVar4;
            puVar17[-2] = uVar5;
            *puVar14 = uVar2;
            puVar17[-4] = uVar3;
          } while( true );
        }
        for (; puVar19 = puVar10, puVar17 = puVar10, puVar10 < puVar16; puVar16 = puVar16 + -5) {
          while (puVar20 = puVar19, puVar17 = puVar17 + 5, puVar17 <= puVar16) {
            puVar19 = puVar17;
            if ((double)puVar17[1] < (double)puVar20[1] || (double)puVar17[1] == (double)puVar20[1])
            {
              puVar19 = puVar20;
            }
          }
          local_48 = puVar20[4];
          local_68 = *puVar20;
          uStack_60 = puVar20[1];
          local_58 = puVar20[2];
          uStack_50 = puVar20[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          puVar20[4] = puVar16[4];
          uVar1 = *puVar16;
          uVar2 = puVar16[1];
          uVar3 = puVar16[3];
          puVar20[2] = puVar16[2];
          puVar20[3] = uVar3;
          *puVar20 = uVar1;
          puVar20[1] = uVar2;
          puVar16[4] = local_48;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar16[2] = local_58;
          puVar16[3] = uStack_50;
          *(undefined4 *)puVar16 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar16 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_146c47e93;
      }
LAB_146c47ea8:
      FUN_146c47eb8(puVar10,uVar12,puVar17,param_4);
LAB_146c47e93:
      plVar15 = plVar15 + -3;
    } while (&local_368 <= plVar15);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146c47cfe:
  local_48 = puVar10[4];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  local_58 = puVar10[2];
  uStack_50 = puVar10[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[4] = puVar17[-1];
  uVar1 = *puVar14;
  uVar2 = puVar17[-4];
  uVar3 = puVar17[-2];
  puVar10[2] = puVar17[-3];
  puVar10[3] = uVar3;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar17[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar17[-3] = local_58;
  puVar17[-2] = uStack_50;
  *(undefined4 *)puVar14 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar17 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar17 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar17 + -0x1c) = uStack_60._4_4_;
  iVar18 = iVar18 + -1;
  puVar17 = puVar17 + -10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar22 - (longlong)puVar20 < (longlong)puVar19 - (longlong)puVar21) {
    if (puVar11 < puVar16) {
      *plVar15 = (longlong)puVar11;
      plVar15[1] = (longlong)puVar16;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    puVar21 = puVar10;
    if (puVar14 <= puVar10 + 5) goto LAB_146c47e93;
  }
  else {
    if (puVar10 + 5 < puVar14) {
      *plVar15 = (longlong)puVar10;
      plVar15[1] = (longlong)puVar17;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    puVar10 = puVar11;
    puVar17 = puVar16;
    puVar22 = puVar16;
    if (puVar16 <= puVar11) goto LAB_146c47e93;
  }
  uVar12 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar21) >> 3) * -0x33333333 + 1;
  puVar16 = puVar17;
  puVar19 = puVar22;
  puVar20 = puVar21;
  if (iVar18 == 0) goto LAB_146c47ea8;
  goto LAB_146c47bcb;
}



// FUNCTION 146c47eb8 FUN_146c47eb8 body=717 status=ok
// SIG undefined FUN_146c47eb8(void)

void FUN_146c47eb8(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar16 = iVar12;
joined_r0x000146c47eec:
    do {
      iVar14 = iVar12 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar15 = iVar12 * 2 + 2;
        if ((iVar15 < (int)param_2) &&
           ((double)param_1[(longlong)iVar14 * 5 + 1] < (double)param_1[(longlong)iVar15 * 5 + 1] ||
            (double)param_1[(longlong)iVar14 * 5 + 1] == (double)param_1[(longlong)iVar15 * 5 + 1]))
        {
          iVar14 = iVar15;
        }
        if ((double)param_1[(longlong)iVar12 * 5 + 1] <= (double)param_1[(longlong)iVar14 * 5 + 1]
            && (double)param_1[(longlong)iVar14 * 5 + 1] !=
               (double)param_1[(longlong)iVar12 * 5 + 1]) {
          puVar2 = param_1 + (longlong)iVar12 * 5;
          puVar3 = param_1 + (longlong)iVar14 * 5;
          local_18 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar10;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar3[4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar12 = iVar14;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x000146c47eec;
        }
      }
      bVar17 = iVar16 != 0;
      iVar12 = iVar16 + -1;
      iVar16 = iVar12;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar13 = (ulonglong)param_2 - 1;
      local_18 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar13 * 5 + 4];
      uVar8 = param_1[uVar13 * 5];
      uVar9 = (param_1 + uVar13 * 5)[1];
      uVar10 = (param_1 + uVar13 * 5 + 2)[1];
      param_1[2] = param_1[uVar13 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar13 * 5 + 4] = local_18;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar13 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      puVar2 = param_1 + uVar13 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar14 = 1;
          iVar16 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar15 = iVar14;
            if (((longlong)iVar12 < (longlong)uVar13) &&
               ((double)param_1[(longlong)iVar14 * 5 + 1] <
                (double)param_1[(longlong)iVar12 * 5 + 1] ||
                (double)param_1[(longlong)iVar14 * 5 + 1] ==
                (double)param_1[(longlong)iVar12 * 5 + 1])) {
              iVar15 = iVar12;
            }
            if ((double)param_1[(longlong)iVar15 * 5 + 1] <
                (double)param_1[(longlong)iVar16 * 5 + 1] ||
                (double)param_1[(longlong)iVar15 * 5 + 1] ==
                (double)param_1[(longlong)iVar16 * 5 + 1]) break;
            puVar2 = param_1 + (longlong)iVar16 * 5;
            puVar3 = param_1 + (longlong)iVar15 * 5;
            uVar4 = puVar2[4];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            uVar11 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar11;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar3[4] = uVar4;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar12 = iVar15 * 2;
            iVar14 = iVar15 * 2 + 1;
            iVar16 = iVar15;
          } while ((longlong)iVar14 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          local_18 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar17 = 2 < uVar13;
          uVar13 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c48186 FUN_146c48186 body=953 status=ok
// SIG undefined FUN_146c48186(void)

ulonglong FUN_146c48186(longlong param_1,uint param_2,int *param_3,double *param_4,int *param_5,
                       longlong param_6)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined7 uVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_188 [32];
  int *local_168;
  longlong local_160;
  int *local_158;
  double *local_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138;
  undefined8 local_130 [15];
  undefined8 local_b8 [4];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar17 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                   (ulonglong)(uVar17 & 0x1ff) * 4);
  local_158 = param_3;
  if ((int)uVar17 < *(int *)(param_1 + 200)) {
    local_150 = param_4;
    if (0 < (int)uVar8) {
      do {
        uVar17 = uVar17 + 1;
        iVar13 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                         (ulonglong)(uVar17 & 0x1ff) * 4);
        pcVar1 = *(code **)(param_6 + 0x10);
        if (pcVar1 == (code *)0x0) {
LAB_146c48283:
          lVar4 = (longlong)iVar13;
          lVar7 = **(longlong **)(param_1 + 8);
          lVar5 = (*(longlong **)(param_1 + 8))[2];
          lVar15 = (longlong)*(int *)(lVar5 + lVar4 * 0xc);
          lVar16 = (longlong)*(int *)(lVar5 + 4 + lVar4 * 0xc);
          lVar5 = (longlong)*(int *)(lVar5 + 8 + lVar4 * 0xc);
          local_b8[2] = *(undefined8 *)(lVar7 + 0x10 + lVar15 * 0x18);
          puVar10 = (undefined8 *)(lVar7 + lVar15 * 0x18);
          local_b8[0] = *puVar10;
          local_b8[1] = puVar10[1];
          local_90 = *(undefined8 *)(lVar7 + 0x10 + lVar16 * 0x18);
          puVar10 = (undefined8 *)(lVar7 + lVar16 * 0x18);
          local_b8[3] = *puVar10;
          uStack_98 = puVar10[1];
          local_78 = *(undefined8 *)(lVar7 + 0x10 + lVar5 * 0x18);
          puVar10 = (undefined8 *)(lVar7 + lVar5 * 0x18);
          local_88 = *puVar10;
          uStack_80 = puVar10[1];
          local_138 = *(undefined8 *)(local_158 + 4);
          local_148 = *local_158;
          iStack_144 = local_158[1];
          iStack_140 = local_158[2];
          iStack_13c = local_158[3];
          puVar10 = local_b8;
          puVar14 = local_130;
          for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar14 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
          }
          dVar18 = (double)FUN_146bd2a7a(&local_148);
          if (dVar18 < *local_150) {
            *local_150 = dVar18;
            *param_5 = iVar13;
            uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
            goto LAB_146c48388;
          }
        }
        else {
          plVar6 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar6 = (longlong *)(param_6 + 0x30);
          }
          local_148 = iVar13;
          uVar3 = (**(code **)(*plVar6 + 8))();
          cVar2 = (*pcVar1)(uVar3,&local_148);
          if (cVar2 != '\0') goto LAB_146c48283;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar12 = (undefined7)((ulonglong)param_4 >> 8);
    if ((int)uVar8 < 0) {
      dVar18 = (double)FUN_146c48540(param_1,~uVar8,param_3);
      if (dVar18 <= *param_4) {
        local_160 = param_6;
        local_168 = param_5;
        cVar2 = FUN_146c48186(param_1,~uVar8,local_158,param_4);
LAB_146c48533:
        uVar11 = CONCAT71(uVar12,1);
        if (cVar2 != '\0') goto LAB_146c48388;
      }
    }
    else {
      iVar9 = uVar8 - 1;
      iVar13 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                       (ulonglong)(uVar17 + 1 & 0x1ff) * 4) + -1;
      dVar18 = (double)FUN_146c48540(param_1,iVar9,param_3);
      dVar19 = (double)FUN_146c48540(param_1,iVar13,param_3);
      if (dVar19 <= dVar18) {
        if (dVar19 < *param_4) {
          local_160 = param_6;
          local_168 = param_5;
          cVar2 = FUN_146c48186(param_1,iVar13,local_158,param_4);
          uVar11 = CONCAT71(uVar12,1);
          if (cVar2 != '\0') goto LAB_146c48388;
          iVar13 = iVar9;
          if (dVar18 < *param_4) goto LAB_146c484fd;
        }
      }
      else if (dVar18 < *param_4) {
        local_160 = param_6;
        local_168 = param_5;
        cVar2 = FUN_146c48186(param_1,iVar9,local_158,param_4);
        uVar11 = CONCAT71(uVar12,1);
        if (cVar2 != '\0') goto LAB_146c48388;
        if (dVar19 < *param_4) {
LAB_146c484fd:
          local_160 = param_6;
          local_168 = param_5;
          cVar2 = FUN_146c48186(param_1,iVar13,local_158,param_4);
          goto LAB_146c48533;
        }
      }
    }
  }
  uVar11 = 0;
LAB_146c48388:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 146c48540 FUN_146c48540 body=150 status=ok
// SIG undefined FUN_146c48540(void)

double FUN_146c48540(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar5 = ABS(*param_3 - *(double *)(lVar1 + lVar3)) - *(double *)(lVar2 + lVar3);
  dVar6 = ABS(param_3[1] - *(double *)(lVar1 + 8 + lVar3)) - *(double *)(lVar2 + 8 + lVar3);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar4 = ABS(param_3[2] - *(double *)(lVar1 + 0x10 + lVar3)) - *(double *)(lVar2 + 0x10 + lVar3);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  return dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
}



// FUNCTION 146c485d6 FUN_146c485d6 body=772 status=ok
// SIG undefined FUN_146c485d6(void)

void FUN_146c485d6(longlong param_1,uint param_2,double *param_3,double *param_4,int *param_5,
                  longlong param_6)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_c8 [32];
  int *local_a8;
  longlong local_a0;
  int local_8c;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  while (*(int *)(param_1 + 200) <= (int)uVar10) {
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
    if ((int)uVar9 < 0) {
      dVar13 = (double)FUN_146c48540(param_1,~uVar9,param_3);
      uVar9 = ~uVar9;
      if (*param_4 < dVar13) goto LAB_146c488a6;
    }
    else {
      uVar9 = uVar9 - 1;
      uVar10 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4) - 1;
      dVar13 = (double)FUN_146c48540(param_1,uVar9,param_3);
      dVar14 = (double)FUN_146c48540(param_1,uVar10,param_3);
      if (dVar14 <= dVar13) {
        if (*param_4 <= dVar14) goto LAB_146c488a6;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_146c485d6(param_1,uVar10,param_3,param_4);
        if (*param_4 <= dVar13) goto LAB_146c488a6;
      }
      else {
        if (*param_4 <= dVar13) goto LAB_146c488a6;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_146c485d6(param_1,uVar9,param_3,param_4);
        uVar9 = uVar10;
        if (*param_4 <= dVar14) goto LAB_146c488a6;
      }
    }
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar9 >> 9) * 8) +
                      (ulonglong)(uVar9 & 0x1ff) * 4);
  }
  local_8c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
  if (0 < local_8c) {
    local_88 = (longlong *)(param_6 + 0x30);
    iVar11 = 1;
    do {
      iVar1 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(iVar11 + uVar10 >> 9) * 8) +
                      (ulonglong)(iVar11 + uVar10 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_6 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_146c48811:
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        local_78 = *(undefined4 *)(lVar6 + 8 + (longlong)iVar1 * 0xc);
        local_80 = *(undefined8 *)(lVar6 + (longlong)iVar1 * 0xc);
        lVar6 = 0;
        do {
          iVar1 = *(int *)((longlong)&local_80 + lVar6 * 4);
          lVar8 = (longlong)iVar1;
          lVar3 = **(longlong **)(param_1 + 8);
          dVar14 = *param_3 - *(double *)(lVar3 + lVar8 * 0x18);
          dVar15 = param_3[1] - *(double *)(lVar3 + 8 + lVar8 * 0x18);
          dVar13 = param_3[2] - *(double *)(lVar3 + 0x10 + lVar8 * 0x18);
          dVar13 = dVar13 * dVar13 + dVar14 * dVar14 + dVar15 * dVar15;
          if (dVar13 < *param_4) {
            *param_4 = dVar13;
            *param_5 = iVar1;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
      }
      else {
        local_80 = CONCAT44(local_80._4_4_,iVar1);
        plVar7 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar7 = local_88;
        }
        uVar5 = (**(code **)(*plVar7 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_80);
        if (cVar4 != '\0') goto LAB_146c48811;
      }
      bVar12 = iVar11 != local_8c;
      iVar11 = iVar11 + 1;
    } while (bVar12);
  }
LAB_146c488a6:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c488dc FUN_146c488dc body=1122 status=ok
// SIG undefined FUN_146c488dc(void)

ulonglong FUN_146c488dc(longlong param_1,uint param_2,int *param_3,undefined8 param_4,
                       undefined4 *param_5,double *param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  longlong *plVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  int iVar11;
  undefined8 unaff_RBP;
  ulonglong uVar12;
  undefined7 uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_228 [32];
  undefined4 *local_208;
  double *local_200;
  int *local_1f8;
  int *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [4];
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 local_108 [9];
  double local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1f8 = param_3;
  if ((int)uVar19 < *(int *)(param_1 + 200)) {
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                     (ulonglong)(uVar19 & 0x1ff) * 4);
    if (0 < iVar11) {
      local_1f0 = param_3 + 6;
      do {
        uVar19 = uVar19 + 1;
        iVar15 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                         (ulonglong)(uVar19 & 0x1ff) * 4);
        pcVar3 = (code *)param_6[2];
        if (pcVar3 == (code *)0x0) {
LAB_146c489f6:
          lVar8 = (longlong)iVar15;
          plVar4 = *(longlong **)(param_1 + 8);
          lVar9 = plVar4[2];
          lVar17 = (longlong)*(int *)(lVar9 + lVar8 * 0xc);
          lVar18 = (longlong)*(int *)(lVar9 + 4 + lVar8 * 0xc);
          lVar9 = (longlong)*(int *)(lVar9 + 8 + lVar8 * 0xc);
          local_198 = *(undefined8 *)(*plVar4 + 0x10 + lVar17 * 0x18);
          puVar14 = (undefined8 *)(*plVar4 + lVar17 * 0x18);
          local_1a8 = *puVar14;
          uStack_1a0 = puVar14[1];
          puVar14 = (undefined8 *)(*plVar4 + lVar18 * 0x18);
          local_1c8 = *puVar14;
          uStack_1c0 = puVar14[1];
          local_1b8 = *(undefined8 *)(*plVar4 + 0x10 + lVar18 * 0x18);
          local_1d8 = *(undefined8 *)(*plVar4 + 0x10 + lVar9 * 0x18);
          puVar1 = (undefined4 *)(*plVar4 + lVar9 * 0x18);
          local_1e8 = *puVar1;
          uStack_1e4 = puVar1[1];
          uStack_1e0 = puVar1[2];
          uStack_1dc = puVar1[3];
          local_208 = &local_1e8;
          cVar6 = FUN_146bd896c(local_1f8,local_1f0,&local_1a8,&local_1c8);
          if (cVar6 != '\0') {
            local_188[2] = local_198;
            local_188[0] = local_1a8;
            local_188[1] = uStack_1a0;
            local_188[3] = local_1c8;
            uStack_168 = uStack_1c0;
            local_160 = local_1b8;
            local_158 = CONCAT44(uStack_1e4,local_1e8);
            uStack_150 = CONCAT44(uStack_1dc,uStack_1e0);
            local_148 = local_1d8;
            local_138 = *local_1f8;
            iStack_134 = local_1f8[1];
            iStack_130 = local_1f8[2];
            iStack_12c = local_1f8[3];
            local_128 = *(undefined8 *)(local_1f8 + 4);
            uStack_120 = *(undefined8 *)(local_1f8 + 6);
            local_118 = local_1f8[8];
            iStack_114 = local_1f8[9];
            iStack_110 = local_1f8[10];
            iStack_10c = local_1f8[0xb];
            puVar14 = local_188;
            puVar16 = local_108;
            for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
              *puVar16 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            }
            cVar6 = FUN_146bd80f0(&local_138);
            if ((cVar6 != '\0') && (local_c0 < *param_6)) {
              uVar12 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
              goto LAB_146c48bb3;
            }
          }
        }
        else {
          pdVar10 = (double *)param_6[4];
          if ((double *)param_6[4] == (double *)0x0) {
            pdVar10 = param_6 + 6;
          }
          local_138 = iVar15;
          uVar7 = (**(code **)((longlong)*pdVar10 + 8))();
          cVar6 = (*pcVar3)(uVar7,&local_138);
          if (cVar6 != '\0') goto LAB_146c489f6;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                     (ulonglong)(uVar19 & 0x1ff) * 4);
    uVar13 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if ((int)uVar2 < 0) {
      dVar5 = (double)FUN_146c479c6(param_1,~uVar2,param_3);
      if (dVar5 <= (double)param_5 + 1e-08) {
        local_200 = param_6;
        local_208 = param_5;
        cVar6 = FUN_146c488dc(param_1,~uVar2,local_1f8,param_4);
LAB_146c48d32:
        uVar12 = CONCAT71(uVar13,1);
        if (cVar6 != '\0') goto LAB_146c48bb3;
      }
    }
    else {
      iVar15 = uVar2 - 1;
      iVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                       (ulonglong)(uVar19 + 1 & 0x1ff) * 4) + -1;
      dVar20 = (double)FUN_146c479c6(param_1,iVar15,param_3);
      dVar21 = (double)FUN_146c479c6(param_1,iVar11,param_3);
      dVar5 = (double)param_5 + 1e-08;
      if (dVar21 <= dVar20) {
        if (dVar21 <= dVar5) {
          local_200 = param_6;
          local_208 = param_5;
          cVar6 = FUN_146c488dc(param_1,iVar11,local_1f8,param_4);
          iVar11 = iVar15;
          dVar21 = dVar20;
          goto joined_r0x000146c48ce0;
        }
      }
      else if (dVar20 <= dVar5) {
        local_200 = param_6;
        local_208 = param_5;
        cVar6 = FUN_146c488dc(param_1,iVar15,local_1f8,param_4);
joined_r0x000146c48ce0:
        uVar12 = CONCAT71(uVar13,1);
        if (cVar6 != '\0') goto LAB_146c48bb3;
        if (dVar21 <= dVar5) {
          local_200 = param_6;
          local_208 = param_5;
          cVar6 = FUN_146c488dc(param_1,iVar11,local_1f8,param_4);
          goto LAB_146c48d32;
        }
      }
    }
  }
  uVar12 = 0;
LAB_146c48bb3:
  if ((local_90 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c48d40 FUN_146c48d40 body=2581 status=ok
// SIG undefined FUN_146c48d40(void)

void FUN_146c48d40(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,double *param_7,ulonglong *param_8,longlong param_9,longlong param_10
                  )

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  bool bVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  int local_2a0;
  double *local_298;
  ulonglong *local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  int local_26c;
  ulonglong local_268;
  ulonglong local_260;
  int local_254;
  undefined8 *local_250;
  longlong local_248;
  longlong *local_240;
  longlong *local_238;
  ulonglong local_230;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1a8 [9];
  undefined8 local_160 [9];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar20 = *(int *)(param_1 + 200);
  local_278 = param_1;
  if (((int)uVar7 < iVar20) && ((int)uVar3 < *(int *)(param_3 + 200))) {
    local_26c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8)
                        + (ulonglong)(uVar7 & 0x1ff) * 4);
    local_254 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8)
                        + (ulonglong)(uVar3 & 0x1ff) * 4);
    local_210 = -1.0;
    local_260 = (ulonglong)uVar7;
    local_250 = param_4;
    if (0 < local_254) {
      local_238 = (longlong *)(param_10 + 0x30);
      local_240 = param_4 + 4;
      local_260 = (ulonglong)(uVar7 + 1);
      iVar20 = 1;
      local_248 = param_3;
      local_230 = (ulonglong)uVar3;
      do {
        uVar7 = (int)local_230 + iVar20;
        uVar7 = *(uint *)(*(longlong *)
                           (*(longlong *)(local_248 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        local_268 = (ulonglong)uVar7;
        pcVar4 = *(code **)(param_10 + 0x10);
        if (pcVar4 == (code *)0x0) {
LAB_146c48f24:
          plVar5 = local_240;
          puVar15 = local_250;
          lVar9 = (longlong)(int)local_268;
          plVar12 = *(longlong **)(local_248 + 8);
          lVar10 = plVar12[2];
          lVar17 = (longlong)*(int *)(lVar10 + lVar9 * 0xc);
          lVar19 = (longlong)*(int *)(lVar10 + 4 + lVar9 * 0xc);
          lVar10 = (longlong)*(int *)(lVar10 + 8 + lVar9 * 0xc);
          local_108 = *(undefined8 *)(*plVar12 + 0x10 + lVar17 * 0x18);
          puVar14 = (undefined8 *)(*plVar12 + lVar17 * 0x18);
          local_118 = *puVar14;
          uStack_110 = puVar14[1];
          local_f0 = *(undefined8 *)(*plVar12 + 0x10 + lVar19 * 0x18);
          puVar14 = (undefined8 *)(*plVar12 + lVar19 * 0x18);
          local_100 = *puVar14;
          uStack_f8 = puVar14[1];
          local_d8 = *(undefined8 *)(*plVar12 + 0x10 + lVar10 * 0x18);
          puVar1 = (uint *)(*plVar12 + lVar10 * 0x18);
          local_e8 = *puVar1;
          uStack_e4 = puVar1[1];
          uStack_e0 = puVar1[2];
          uStack_dc = puVar1[3];
          pcVar4 = (code *)*local_250;
          if (pcVar4 != (code *)0x0) {
            plVar12 = (longlong *)local_250[2];
            if ((longlong *)local_250[2] == (longlong *)0x0) {
              plVar12 = local_240;
            }
            uVar8 = (**(code **)(*plVar12 + 8))();
            (*pcVar4)(&local_228,uVar8,&local_118);
            local_108 = local_218;
            local_118 = CONCAT44(uStack_224,local_228);
            uStack_110 = CONCAT44(uStack_21c,uStack_220);
            pcVar4 = (code *)*puVar15;
            plVar12 = (longlong *)puVar15[2];
            if ((longlong *)puVar15[2] == (longlong *)0x0) {
              plVar12 = plVar5;
            }
            uVar8 = (**(code **)(*plVar12 + 8))();
            (*pcVar4)(&local_228,uVar8,&local_100);
            local_f0 = local_218;
            local_100 = CONCAT44(uStack_224,local_228);
            uStack_f8 = CONCAT44(uStack_21c,uStack_220);
            pcVar4 = (code *)*puVar15;
            plVar12 = (longlong *)puVar15[2];
            if ((longlong *)puVar15[2] == (longlong *)0x0) {
              plVar12 = plVar5;
            }
            uVar8 = (**(code **)(*plVar12 + 8))();
            (*pcVar4)(&local_228,uVar8,&local_e8);
            local_d8 = local_218;
            local_e8 = local_228;
            uStack_e4 = uStack_224;
            uStack_e0 = uStack_220;
            uStack_dc = uStack_21c;
          }
          puVar14 = &local_118;
          puVar15 = local_1a8;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar15 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          }
          local_210 = -1.0;
          if (0 < local_26c) {
            local_268 = local_268 << 0x20;
            uVar11 = local_260 & 0xffffffff;
            lVar10 = local_278;
            iVar13 = local_26c;
            do {
              uVar7 = *(uint *)(*(longlong *)(*(longlong *)(lVar10 + 0xb8) + (uVar11 >> 9) * 8) +
                               (ulonglong)((uint)uVar11 & 0x1ff) * 4);
              pcVar4 = *(code **)(param_9 + 0x10);
              if (pcVar4 == (code *)0x0) {
LAB_146c49141:
                lVar9 = local_278;
                lVar19 = (longlong)(int)uVar7;
                lVar17 = **(longlong **)(lVar10 + 8);
                lVar10 = (*(longlong **)(lVar10 + 8))[2];
                lVar16 = (longlong)*(int *)(lVar10 + lVar19 * 0xc);
                lVar18 = (longlong)*(int *)(lVar10 + 4 + lVar19 * 0xc);
                lVar10 = (longlong)*(int *)(lVar10 + 8 + lVar19 * 0xc);
                local_c8[2] = *(undefined8 *)(lVar17 + 0x10 + lVar16 * 0x18);
                puVar14 = (undefined8 *)(lVar17 + lVar16 * 0x18);
                local_c8[0] = *puVar14;
                local_c8[1] = puVar14[1];
                local_a0 = *(undefined8 *)(lVar17 + 0x10 + lVar18 * 0x18);
                puVar14 = (undefined8 *)(lVar17 + lVar18 * 0x18);
                local_c8[3] = *puVar14;
                uStack_a8 = puVar14[1];
                local_88 = *(undefined8 *)(lVar17 + 0x10 + lVar10 * 0x18);
                puVar2 = (undefined4 *)(lVar17 + lVar10 * 0x18);
                local_98 = *puVar2;
                uStack_94 = puVar2[1];
                uStack_90 = puVar2[2];
                uStack_8c = puVar2[3];
                puVar14 = local_c8;
                puVar15 = local_160;
                for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
                local_210 = -1.0;
                dVar23 = (double)FUN_146bd8e44(&local_210);
                if (dVar23 < *param_7) {
                  *param_7 = dVar23;
                  *param_8 = uVar7 | local_268;
                }
              }
              else {
                plVar12 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar12 = (longlong *)(param_9 + 0x30);
                }
                local_228 = uVar7;
                uVar8 = (**(code **)(*plVar12 + 8))();
                cVar6 = (*pcVar4)(uVar8,&local_228);
                lVar9 = lVar10;
                if (cVar6 != '\0') goto LAB_146c49141;
              }
              uVar11 = (ulonglong)((uint)uVar11 + 1);
              iVar13 = iVar13 + -1;
              lVar10 = lVar9;
            } while (iVar13 != 0);
          }
        }
        else {
          plVar12 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar12 = local_238;
          }
          local_228 = uVar7;
          uVar8 = (**(code **)(*plVar12 + 8))();
          cVar6 = (*pcVar4)(uVar8,&local_228);
          if (cVar6 != '\0') goto LAB_146c48f24;
        }
        bVar21 = iVar20 != local_254;
        iVar20 = iVar20 + 1;
      } while (bVar21);
    }
    goto LAB_146c49248;
  }
  bVar21 = (param_6 & 1) == 0;
  if ((bVar21 || (int)uVar7 < iVar20) &&
      (*(int *)(param_3 + 200) <= (int)uVar3 || !bVar21 && (int)uVar7 >= iVar20)) {
    uVar11 = (ulonglong)((param_2 >> 9) << 3);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar11);
    lVar17 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar11);
    local_1e8 = *(double *)(lVar10 + 0x10 + lVar17);
    dVar23 = *(double *)(lVar9 + 0x10 + lVar17);
    local_200 = local_1e8 - dVar23;
    local_1f0 = *(double *)(lVar10 + 8 + lVar17);
    dVar24 = *(double *)(lVar9 + 8 + lVar17);
    local_208 = local_1f0 - dVar24;
    local_210 = *(double *)(lVar10 + lVar17) - *(double *)(lVar9 + lVar17);
    local_1e8 = local_1e8 + dVar23;
    local_1f0 = local_1f0 + dVar24;
    local_1f8 = *(double *)(lVar10 + lVar17) + *(double *)(lVar9 + lVar17);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      param_5 = ~param_5;
      FUN_146c49756(param_3,local_c8,param_5,param_4);
      dVar23 = (double)FUN_146bd8cba(local_c8,&local_210);
      goto LAB_146c49407;
    }
    param_5 = param_5 - 1;
    uVar7 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar3 + 1 >> 9) * 8)
                    + (ulonglong)(uVar3 + 1 & 0x1ff) * 4) - 1;
    FUN_146c49756(param_3,local_c8,param_5,param_4);
    FUN_146c49756(param_3,&local_118,uVar7,param_4);
    dVar24 = (double)FUN_146bd8cba(local_c8,&local_210);
    dVar25 = (double)FUN_146bd8cba(&local_118,&local_210);
    dVar23 = *param_7;
    uVar22 = SUB84(dVar23,0);
    uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
    if (dVar24 <= dVar25) {
      if (dVar24 < dVar23) {
        local_2a0 = param_6 + 1;
        local_280 = param_10;
        local_288 = param_9;
        local_290 = param_8;
        local_298 = param_7;
        local_2a8 = param_5;
        FUN_146c48d40(local_278,param_2,param_3,param_4);
        uVar22 = SUB84(*param_7,0);
        uVar26 = (undefined4)((ulonglong)*param_7 >> 0x20);
      }
      param_5 = uVar7;
      lVar10 = param_9;
      if ((double)CONCAT44(uVar26,uVar22) < dVar25 || (double)CONCAT44(uVar26,uVar22) == dVar25)
      goto LAB_146c49248;
    }
    else {
      if (dVar25 < dVar23) {
        local_2a0 = param_6 + 1;
        local_280 = param_10;
        local_288 = param_9;
        local_290 = param_8;
        local_298 = param_7;
        local_2a8 = uVar7;
        FUN_146c48d40(local_278,param_2,param_3,param_4);
        uVar22 = SUB84(*param_7,0);
        uVar26 = (undefined4)((ulonglong)*param_7 >> 0x20);
      }
      lVar10 = param_9;
      if ((double)CONCAT44(uVar26,uVar22) < dVar24 || (double)CONCAT44(uVar26,uVar22) == dVar24)
      goto LAB_146c49248;
    }
  }
  else {
    FUN_146c49756(param_3,&local_210,param_5,param_4);
    lVar10 = local_278;
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(local_278 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8)
                       + (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      dVar23 = (double)FUN_146c4993c(local_278,param_2,&local_210);
LAB_146c49407:
      if (*param_7 <= dVar23) goto LAB_146c49248;
    }
    else {
      param_2 = param_2 - 1;
      uVar7 = *(int *)(*(longlong *)
                        (*(longlong *)(local_278 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
      dVar24 = (double)FUN_146c4993c(local_278,param_2,&local_210);
      dVar25 = (double)FUN_146c4993c(lVar10,uVar7,&local_210);
      dVar23 = *param_7;
      uVar22 = SUB84(dVar23,0);
      uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (dVar24 <= dVar25) {
        if (dVar24 < dVar23) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = param_5;
          FUN_146c48d40(local_278,param_2,param_3,param_4);
          uVar22 = SUB84(*param_7,0);
          uVar26 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        param_2 = uVar7;
        if ((double)CONCAT44(uVar26,uVar22) < dVar25 || (double)CONCAT44(uVar26,uVar22) == dVar25)
        goto LAB_146c49248;
      }
      else {
        if (dVar25 < dVar23) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = param_5;
          FUN_146c48d40(local_278,uVar7,param_3,param_4);
          uVar22 = SUB84(*param_7,0);
          uVar26 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        if ((double)CONCAT44(uVar26,uVar22) < dVar24 || (double)CONCAT44(uVar26,uVar22) == dVar24)
        goto LAB_146c49248;
      }
    }
    local_288 = param_9;
    lVar10 = local_288;
  }
  local_288 = lVar10;
  local_280 = param_10;
  local_290 = param_8;
  local_2a0 = param_6 + 1;
  local_298 = param_7;
  local_2a8 = param_5;
  FUN_146c48d40(local_278,param_2,param_3,param_4);
LAB_146c49248:
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c49756 FUN_146c49756 body=484 status=ok
// SIG undefined FUN_146c49756(void)

double * FUN_146c49756(longlong param_1,double *param_2,uint param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 == 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    dVar1 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar2 = *(double *)(lVar8 + 0x10 + lVar9);
    dVar3 = *(double *)(lVar7 + lVar9);
    dVar4 = *(double *)(lVar7 + 8 + lVar9);
    dVar5 = *(double *)(lVar8 + lVar9);
    dVar6 = *(double *)(lVar8 + 8 + lVar9);
    *param_2 = dVar3 - dVar5;
    param_2[1] = dVar4 - dVar6;
    param_2[2] = dVar1 - dVar2;
    param_2[3] = dVar3 + dVar5;
    param_2[4] = dVar4 + dVar6;
    param_2[5] = dVar1 + dVar2;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    local_90 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar1 = *(double *)(lVar8 + 0x10 + lVar9);
    local_a8 = local_90 - dVar1;
    local_98 = *(double *)(lVar7 + 8 + lVar9);
    dVar2 = *(double *)(lVar8 + 8 + lVar9);
    local_b0 = local_98 - dVar2;
    local_b8 = *(double *)(lVar7 + lVar9) - *(double *)(lVar8 + lVar9);
    local_90 = local_90 + dVar1;
    local_98 = local_98 + dVar2;
    local_a0 = *(double *)(lVar7 + lVar9) + *(double *)(lVar8 + lVar9);
    local_78 = 0;
    local_68 = &PTR_LAB_149f3bcc0;
    local_88 = FUN_146c49a42;
    local_60 = param_4;
    FUN_146bda188(param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4993c FUN_146c4993c body=260 status=ok
// SIG undefined FUN_146c4993c(void)

void FUN_146c4993c(longlong param_1,uint param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(double *)(param_1 + 0x60);
  lVar4 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_58 = *(double *)(lVar3 + lVar4) + local_48;
  local_50 = *(double *)(lVar3 + 8 + lVar4) + local_48;
  local_48 = local_48 + *(double *)(lVar3 + 0x10 + lVar4);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4);
  local_60 = dVar1 - local_48;
  dVar2 = *(double *)(lVar3 + 8 + lVar4);
  local_68 = dVar2 - local_50;
  local_70 = *(double *)(lVar3 + lVar4) - local_58;
  local_48 = local_48 + dVar1;
  local_50 = local_50 + dVar2;
  local_58 = local_58 + *(double *)(lVar3 + lVar4);
  FUN_146bd8cba(&local_70,param_3);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c49a42 FUN_146c49a42 body=62 status=ok
// SIG undefined FUN_146c49a42(void)

undefined8 FUN_146c49a42(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 146c49aaa FUN_146c49aaa body=29 status=ok
// SIG undefined FUN_146c49aaa(void)

undefined8 FUN_146c49aaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c49ac8 FUN_146c49ac8 body=738 status=ok
// SIG undefined FUN_146c49ac8(void)

int FUN_146c49ac8(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,longlong param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_d8 = param_3;
  if ((int)uVar14 < *(int *)(param_1 + 200)) {
    iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar10) {
      do {
        uVar14 = uVar14 + 1;
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8)
                        + (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar3 = *(code **)(param_6 + 0x10);
        if (pcVar3 == (code *)0x0) {
LAB_146c49ba5:
          lVar7 = (longlong)iVar5;
          plVar9 = *(longlong **)(param_1 + 8);
          lVar8 = plVar9[2];
          lVar11 = (longlong)*(int *)(lVar8 + lVar7 * 0xc);
          lVar12 = (longlong)*(int *)(lVar8 + 4 + lVar7 * 0xc);
          lVar8 = (longlong)*(int *)(lVar8 + 8 + lVar7 * 0xc);
          local_88 = *(undefined8 *)(*plVar9 + 0x10 + lVar11 * 0x18);
          puVar1 = (undefined8 *)(*plVar9 + lVar11 * 0x18);
          local_98 = *puVar1;
          uStack_90 = puVar1[1];
          local_70 = *(undefined8 *)(*plVar9 + 0x10 + lVar12 * 0x18);
          puVar1 = (undefined8 *)(*plVar9 + lVar12 * 0x18);
          local_80 = *puVar1;
          uStack_78 = puVar1[1];
          local_58 = *(undefined8 *)(*plVar9 + 0x10 + lVar8 * 0x18);
          puVar2 = (undefined4 *)(*plVar9 + lVar8 * 0x18);
          local_68 = *puVar2;
          uStack_64 = puVar2[1];
          uStack_60 = puVar2[2];
          uStack_5c = puVar2[3];
          cVar4 = (*(code *)*param_5)(param_5[1],local_d8,&local_98);
          if (cVar4 != '\0') goto LAB_146c49c3e;
        }
        else {
          plVar9 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_6 + 0x30);
          }
          local_9c = iVar5;
          uVar6 = (**(code **)(*plVar9 + 8))();
          cVar4 = (*pcVar3)(uVar6,&local_9c);
          if (cVar4 != '\0') goto LAB_146c49ba5;
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar5 = -1;
  }
  else {
    uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    if ((int)uVar13 < 0) {
      uVar13 = ~uVar13;
      cVar4 = FUN_146c49dac(param_1,uVar13,param_4);
      iVar5 = -1;
      if (cVar4 == '\0') goto LAB_146c49c3e;
      local_b0 = *param_5;
      local_e8 = &local_b0;
      local_a8 = param_5[1];
    }
    else {
      iVar10 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
      cVar4 = FUN_146c49dac(param_1,uVar13 - 1,param_4);
      if (cVar4 != '\0') {
        local_c0 = *param_5;
        local_e8 = &local_c0;
        local_b8 = param_5[1];
        local_e0 = param_6;
        iVar5 = FUN_146c49ac8(param_1,uVar13 - 1,local_d8,param_4);
        if (iVar5 != -1) goto LAB_146c49c3e;
      }
      uVar13 = iVar10 - 1;
      cVar4 = FUN_146c49dac(param_1,uVar13,param_4);
      iVar5 = -1;
      if (cVar4 == '\0') goto LAB_146c49c3e;
      local_d0 = *param_5;
      local_e8 = &local_d0;
      local_c8 = param_5[1];
    }
    local_e0 = param_6;
    iVar5 = FUN_146c49ac8(param_1,uVar13,local_d8,param_4);
  }
LAB_146c49c3e:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c49dac FUN_146c49dac body=191 status=ok
// SIG undefined FUN_146c49dac(void)

bool FUN_146c49dac(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)(param_1 + 0x60);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar6 = *(double *)(lVar2 + lVar3) + dVar5;
  bVar4 = false;
  if ((*(double *)(lVar1 + lVar3) - dVar6 < param_3[3]) &&
     (*param_3 < dVar6 + *(double *)(lVar1 + lVar3))) {
    dVar7 = *(double *)(lVar2 + 8 + lVar3) + dVar5;
    dVar6 = *(double *)(lVar1 + 8 + lVar3);
    if ((dVar6 - dVar7 < param_3[4]) && (bVar4 = false, param_3[1] < dVar7 + dVar6)) {
      dVar5 = dVar5 + *(double *)(lVar2 + 0x10 + lVar3);
      dVar6 = *(double *)(lVar1 + 0x10 + lVar3);
      if (dVar6 - dVar5 < param_3[5]) {
        bVar4 = param_3[2] < dVar6 + dVar5;
      }
    }
  }
  return bVar4;
}



// FUNCTION 146c49e80 FUN_146c49e80 body=2501 status=ok
// SIG undefined FUN_146c49e80(void)

ulonglong FUN_146c49e80(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,
                       uint param_5,uint param_6,undefined8 *param_7,longlong param_8,
                       longlong param_9)

{
  double *pdVar1;
  int *piVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 *puVar14;
  char cVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong *plVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  bool bVar29;
  undefined1 auStack_258 [32];
  uint local_238;
  int local_230;
  undefined8 *local_228;
  longlong local_220;
  longlong local_218;
  undefined8 *local_208;
  int local_1fc;
  int local_1f8;
  uint local_1f4;
  longlong local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  ulonglong local_1c8;
  undefined8 local_1c0 [2];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170 [2];
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  int *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  int *local_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int *local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar25 = *(int *)(param_1 + 200);
  local_208 = param_4;
  if (((int)uVar16 < iVar25) && ((int)uVar8 < *(int *)(param_3 + 200))) {
    local_1f8 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 4);
    if (0 < local_1f8) {
      local_1fc = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
      local_1d8 = (longlong *)(param_9 + 0x30);
      local_1e8 = param_4 + 4;
      local_1d0 = (longlong *)(param_8 + 0x30);
      local_1e0 = (ulonglong)(uVar16 + 1);
      uVar21 = CONCAT71((uint7)(uint3)((uint)iVar25 >> 8),1);
      iVar25 = 1;
      local_1f0 = param_3;
      local_1c8 = (ulonglong)uVar8;
      do {
        local_1f4 = (uint)uVar21;
        uVar16 = iVar25 + (int)local_1c8;
        iVar28 = *(int *)(*(longlong *)
                           (*(longlong *)(local_1f0 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                         (ulonglong)(uVar16 & 0x1ff) * 4);
        pcVar10 = *(code **)(param_9 + 0x10);
        if (pcVar10 == (code *)0x0) {
LAB_146c4a045:
          plVar23 = local_1e8;
          puVar14 = local_208;
          lVar18 = (longlong)iVar28;
          plVar22 = *(longlong **)(local_1f0 + 8);
          lVar19 = plVar22[2];
          lVar26 = (longlong)*(int *)(lVar19 + lVar18 * 0xc);
          lVar27 = (longlong)*(int *)(lVar19 + 4 + lVar18 * 0xc);
          lVar19 = (longlong)*(int *)(lVar19 + 8 + lVar18 * 0xc);
          local_138 = *(int **)(*plVar22 + 0x10 + lVar26 * 0x18);
          pdVar1 = (double *)(*plVar22 + lVar26 * 0x18);
          local_148 = *pdVar1;
          uStack_140 = pdVar1[1];
          local_120 = *(int **)(*plVar22 + 0x10 + lVar27 * 0x18);
          pdVar1 = (double *)(*plVar22 + lVar27 * 0x18);
          local_130 = *pdVar1;
          uStack_128 = pdVar1[1];
          piVar20 = *(int **)(*plVar22 + 0x10 + lVar19 * 0x18);
          piVar2 = (int *)(*plVar22 + lVar19 * 0x18);
          local_118 = *piVar2;
          iStack_114 = piVar2[1];
          iStack_110 = piVar2[2];
          iStack_10c = piVar2[3];
          pcVar10 = (code *)*local_208;
          local_108 = piVar20;
          if (pcVar10 != (code *)0x0) {
            plVar22 = (longlong *)local_208[2];
            if ((longlong *)local_208[2] == (longlong *)0x0) {
              plVar22 = local_1e8;
            }
            uVar17 = (**(code **)(*plVar22 + 8))();
            (*pcVar10)(&local_160,uVar17,&local_148);
            local_138 = local_150;
            local_148 = (double)CONCAT44(iStack_15c,local_160);
            uStack_140 = (double)CONCAT44(iStack_154,iStack_158);
            pcVar10 = (code *)*puVar14;
            plVar22 = (longlong *)puVar14[2];
            if ((longlong *)puVar14[2] == (longlong *)0x0) {
              plVar22 = plVar23;
            }
            uVar17 = (**(code **)(*plVar22 + 8))();
            (*pcVar10)(&local_160,uVar17,&local_130);
            local_120 = local_150;
            local_130 = (double)CONCAT44(iStack_15c,local_160);
            uStack_128 = (double)CONCAT44(iStack_154,iStack_158);
            pcVar10 = (code *)*puVar14;
            plVar22 = (longlong *)puVar14[2];
            if ((longlong *)puVar14[2] == (longlong *)0x0) {
              plVar22 = plVar23;
            }
            piVar20 = (int *)(**(code **)(*plVar22 + 8))();
            (*pcVar10)(&local_160,piVar20,&local_118);
            local_108 = local_150;
            local_118 = local_160;
            iStack_114 = iStack_15c;
            iStack_110 = iStack_158;
            iStack_10c = iStack_154;
          }
          plVar22 = local_1d0;
          if (0 < local_1fc) {
            uVar21 = local_1e0 & 0xffffffff;
            iVar28 = local_1fc;
            do {
              iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar21 >> 9) * 8) +
                              (ulonglong)((uint)uVar21 & 0x1ff) * 4);
              pcVar10 = *(code **)(param_8 + 0x10);
              if (pcVar10 == (code *)0x0) {
LAB_146c4a225:
                lVar18 = (longlong)iVar9;
                plVar23 = *(longlong **)(param_1 + 8);
                lVar19 = plVar23[2];
                lVar26 = (longlong)*(int *)(lVar19 + lVar18 * 0xc);
                lVar27 = (longlong)*(int *)(lVar19 + 4 + lVar18 * 0xc);
                lVar19 = (longlong)*(int *)(lVar19 + 8 + lVar18 * 0xc);
                local_e8 = *(double *)(*plVar23 + 0x10 + lVar26 * 0x18);
                pdVar1 = (double *)(*plVar23 + lVar26 * 0x18);
                local_f8 = *pdVar1;
                dStack_f0 = pdVar1[1];
                local_d0 = *(double *)(*plVar23 + 0x10 + lVar27 * 0x18);
                pdVar1 = (double *)(*plVar23 + lVar27 * 0x18);
                local_e0 = *pdVar1;
                dStack_d8 = pdVar1[1];
                local_b8 = *(undefined8 *)(*plVar23 + 0x10 + lVar19 * 0x18);
                puVar3 = (undefined4 *)(*plVar23 + lVar19 * 0x18);
                local_c8 = *puVar3;
                uStack_c4 = puVar3[1];
                uStack_c0 = puVar3[2];
                uStack_bc = puVar3[3];
                piVar20 = (int *)&local_148;
                cVar15 = (*(code *)*param_7)(param_7[1],piVar20,&local_f8);
                if (cVar15 != '\0') {
                  uVar21 = (ulonglong)local_1f4;
                  goto LAB_146c4a2e9;
                }
              }
              else {
                plVar23 = *(longlong **)(param_8 + 0x20);
                if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
                  plVar23 = plVar22;
                }
                local_160 = iVar9;
                uVar17 = (**(code **)(*plVar23 + 8))();
                piVar20 = &local_160;
                cVar15 = (*pcVar10)(uVar17,piVar20);
                if (cVar15 != '\0') goto LAB_146c4a225;
              }
              uVar21 = (ulonglong)((uint)uVar21 + 1);
              iVar28 = iVar28 + -1;
            } while (iVar28 != 0);
          }
        }
        else {
          plVar22 = *(longlong **)(param_9 + 0x20);
          if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
            plVar22 = local_1d8;
          }
          local_160 = iVar28;
          uVar17 = (**(code **)(*plVar22 + 8))();
          piVar20 = &local_160;
          cVar15 = (*pcVar10)(uVar17,piVar20);
          if (cVar15 != '\0') goto LAB_146c4a045;
        }
        bVar29 = iVar25 != local_1f8;
        uVar21 = CONCAT71((int7)((ulonglong)piVar20 >> 8),iVar25 < local_1f8);
        iVar25 = iVar25 + 1;
      } while (bVar29);
      goto LAB_146c4a2e9;
    }
  }
  else {
    bVar29 = (param_6 & 1) == 0;
    if ((bVar29 || (int)uVar16 < iVar25) &&
        (*(int *)(param_3 + 200) <= (int)uVar8 || !bVar29 && (int)uVar16 >= iVar25)) {
      uVar21 = (ulonglong)((param_2 >> 9) << 3);
      lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar21);
      lVar26 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar21);
      dVar4 = *(double *)(lVar19 + 0x10 + lVar26);
      dVar5 = *(double *)(lVar18 + 0x10 + lVar26);
      dVar11 = dVar4 - dVar5;
      dVar6 = *(double *)(lVar19 + 8 + lVar26);
      dVar7 = *(double *)(lVar18 + 8 + lVar26);
      dVar12 = dVar6 - dVar7;
      dVar13 = *(double *)(lVar19 + lVar26) - *(double *)(lVar18 + lVar26);
      dVar4 = dVar4 + dVar5;
      dVar6 = dVar6 + dVar7;
      dVar5 = *(double *)(lVar19 + lVar26) + *(double *)(lVar18 + lVar26);
      uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 4);
      if (-1 < (int)uVar16) {
        iVar25 = *(int *)(*(longlong *)
                           (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                         (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
        FUN_146c49756(param_3,&local_f8,uVar16 - 1,param_4);
        if (((((local_f8 < dVar5) && (dVar13 < local_e0)) && (dStack_f0 < dVar6)) &&
            ((dVar12 < dStack_d8 && (local_e8 < dVar4)))) && (dVar11 < local_d0)) {
          local_180 = *param_7;
          local_228 = &local_180;
          local_178 = param_7[1];
          local_230 = param_6 + 1;
          local_218 = param_9;
          local_220 = param_8;
          uVar21 = (ulonglong)param_2;
          local_238 = uVar16 - 1;
          cVar15 = FUN_146c49e80(param_1,uVar21,param_3,local_208);
          uVar21 = CONCAT71((int7)(uVar21 >> 8),1);
          if (cVar15 != '\0') goto LAB_146c4a2e9;
        }
        param_4 = local_208;
        uVar16 = iVar25 - 1;
        FUN_146c49756(param_3,&local_148,uVar16,local_208);
        uVar24 = 0;
        uVar21 = 0;
        if (((dVar5 <= local_148) || (uVar21 = uVar24, local_130 <= dVar13)) ||
           ((dVar6 <= uStack_140 ||
            (((uStack_128 <= dVar12 || (dVar4 <= (double)local_138)) ||
             ((double)local_120 <= dVar11)))))) goto LAB_146c4a2e9;
        local_190 = *param_7;
        local_228 = &local_190;
        local_188 = param_7[1];
        local_238 = uVar16;
        goto LAB_146c4a545;
      }
      FUN_146c49756(param_3,&local_f8,~uVar16,param_4);
      if ((((local_f8 < dVar5) && (dVar13 < local_e0)) &&
          ((dStack_f0 < dVar6 && ((dVar12 < dStack_d8 && (local_e8 < dVar4)))))) &&
         (dVar11 < local_d0)) {
        uVar17 = *param_7;
        local_228 = local_170;
        goto LAB_146c4a508;
      }
    }
    else {
      FUN_146c49756(param_3,&local_f8,param_5,param_4);
      param_2 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                         (ulonglong)(uVar16 & 0x1ff) * 4);
      if ((int)param_2 < 0) {
        param_2 = ~param_2;
        cVar15 = FUN_146c49dac(param_1,param_2,&local_f8);
        if (cVar15 != '\0') {
          local_1a0 = *param_7;
          local_228 = &local_1a0;
          local_198 = param_7[1];
          local_238 = param_5;
LAB_146c4a545:
          local_218 = param_9;
          local_220 = param_8;
          local_230 = param_6 + 1;
          uVar16 = FUN_146c49e80(param_1,param_2,param_3,param_4);
          uVar21 = (ulonglong)uVar16;
          goto LAB_146c4a2e9;
        }
      }
      else {
        iVar25 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                         (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
        cVar15 = FUN_146c49dac(param_1,param_2 - 1,&local_f8);
        if (cVar15 != '\0') {
          local_1b0 = *param_7;
          local_228 = &local_1b0;
          local_1a8 = param_7[1];
          local_230 = param_6 + 1;
          local_218 = param_9;
          local_220 = param_8;
          local_238 = param_5;
          uVar21 = (ulonglong)(param_2 - 1);
          cVar15 = FUN_146c49e80(param_1,uVar21,param_3,param_4);
          uVar21 = CONCAT71((int7)(uVar21 >> 8),1);
          if (cVar15 != '\0') goto LAB_146c4a2e9;
        }
        param_2 = iVar25 - 1;
        cVar15 = FUN_146c49dac(param_1,param_2,&local_f8);
        if (cVar15 != '\0') {
          uVar17 = *param_7;
          local_228 = local_1c0;
LAB_146c4a508:
          *local_228 = uVar17;
          local_228[1] = param_7[1];
          local_238 = param_5;
          goto LAB_146c4a545;
        }
      }
    }
  }
  uVar21 = 0;
LAB_146c4a2e9:
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21 & 0xffffff01;
}



// FUNCTION 146c4a85a FUN_146c4a85a body=62 status=ok
// SIG undefined FUN_146c4a85a(void)

undefined8 FUN_146c4a85a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 146c4a8c2 FUN_146c4a8c2 body=29 status=ok
// SIG undefined FUN_146c4a8c2(void)

undefined8 FUN_146c4a8c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c4a8e0 FUN_146c4a8e0 body=2546 status=ok
// SIG undefined FUN_146c4a8e0(void)

void FUN_146c4a8e0(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,undefined8 param_7,undefined8 *param_8,longlong param_9,
                  longlong param_10)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *plVar14;
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  double *pdVar23;
  undefined8 *puVar24;
  double *pdVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  bool bVar30;
  undefined1 auStack_398 [32];
  uint local_378;
  int local_370;
  undefined8 local_368;
  undefined8 *local_360;
  longlong local_358;
  longlong local_350;
  int local_344;
  int local_340;
  int local_33c;
  undefined8 *local_338;
  longlong local_330;
  longlong *local_328;
  ulonglong local_320;
  longlong *local_318;
  ulonglong local_310;
  ulonglong local_308;
  undefined8 local_300 [2];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0 [2];
  undefined8 local_2d0 [2];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0 [2];
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  double local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  int local_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  double local_248;
  double local_238 [4];
  double dStack_218;
  double local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1e8 [9];
  double local_1a0 [9];
  undefined8 local_158;
  undefined1 local_150;
  ulonglong local_14c;
  undefined4 local_144;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  local_158 = 0x3e45798ee2308c3a;
  local_150 = 0;
  local_14c = 0;
  local_144 = 0;
  iVar29 = *(int *)(param_1 + 200);
  if (((int)uVar16 < iVar29) && ((int)uVar6 < *(int *)(param_3 + 200))) {
    local_33c = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8)
                        + (ulonglong)(uVar6 & 0x1ff) * 4);
    local_338 = param_4;
    if (0 < local_33c) {
      local_340 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
      local_318 = (longlong *)(param_10 + 0x30);
      local_328 = param_4 + 4;
      local_320 = (ulonglong)(uVar16 + 1);
      uVar17 = 1;
      local_330 = param_3;
      local_310 = (ulonglong)uVar6;
      do {
        uVar16 = (int)uVar17 + (int)local_310;
        local_344 = *(int *)(*(longlong *)
                              (*(longlong *)(local_330 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                            (ulonglong)(uVar16 & 0x1ff) * 4);
        pcVar8 = *(code **)(param_10 + 0x10);
        local_308 = uVar17;
        if (pcVar8 == (code *)0x0) {
LAB_146c4aae9:
          plVar14 = local_328;
          puVar22 = local_338;
          lVar19 = (longlong)local_344;
          plVar21 = *(longlong **)(local_330 + 8);
          lVar20 = plVar21[2];
          lVar26 = (longlong)*(int *)(lVar20 + lVar19 * 0xc);
          lVar28 = (longlong)*(int *)(lVar20 + 4 + lVar19 * 0xc);
          lVar20 = (longlong)*(int *)(lVar20 + 8 + lVar19 * 0xc);
          local_278 = *(double *)(*plVar21 + 0x10 + lVar26 * 0x18);
          pdVar23 = (double *)(*plVar21 + lVar26 * 0x18);
          local_288 = *pdVar23;
          uStack_280 = pdVar23[1];
          local_260 = *(double *)(*plVar21 + 0x10 + lVar28 * 0x18);
          pdVar23 = (double *)(*plVar21 + lVar28 * 0x18);
          local_270 = *pdVar23;
          uStack_268 = pdVar23[1];
          local_248 = *(double *)(*plVar21 + 0x10 + lVar20 * 0x18);
          piVar1 = (int *)(*plVar21 + lVar20 * 0x18);
          local_258 = *piVar1;
          iStack_254 = piVar1[1];
          iStack_250 = piVar1[2];
          iStack_24c = piVar1[3];
          pcVar8 = (code *)*local_338;
          if (pcVar8 != (code *)0x0) {
            plVar21 = (longlong *)local_338[2];
            if ((longlong *)local_338[2] == (longlong *)0x0) {
              plVar21 = local_328;
            }
            uVar18 = (**(code **)(*plVar21 + 8))();
            (*pcVar8)(&local_2a0,uVar18,&local_288);
            local_278 = local_290;
            local_288 = (double)CONCAT44(iStack_29c,local_2a0);
            uStack_280 = (double)CONCAT44(iStack_294,iStack_298);
            pcVar8 = (code *)*puVar22;
            plVar21 = (longlong *)puVar22[2];
            if ((longlong *)puVar22[2] == (longlong *)0x0) {
              plVar21 = plVar14;
            }
            uVar18 = (**(code **)(*plVar21 + 8))();
            (*pcVar8)(&local_2a0,uVar18,&local_270);
            local_260 = local_290;
            local_270 = (double)CONCAT44(iStack_29c,local_2a0);
            uStack_268 = (double)CONCAT44(iStack_294,iStack_298);
            pcVar8 = (code *)*puVar22;
            plVar21 = (longlong *)puVar22[2];
            if ((longlong *)puVar22[2] == (longlong *)0x0) {
              plVar21 = plVar14;
            }
            uVar18 = (**(code **)(*plVar21 + 8))();
            (*pcVar8)(&local_2a0,uVar18,&local_258);
            local_248 = local_290;
            local_258 = local_2a0;
            iStack_254 = iStack_29c;
            iStack_250 = iStack_298;
            iStack_24c = iStack_294;
          }
          local_14c = local_14c & 0xffffffff00000000;
          puVar22 = &local_288;
          puVar24 = local_1e8;
          for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar24 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar24 = puVar24 + 1;
          }
          if (0 < local_340) {
            uVar17 = local_320 & 0xffffffff;
            iVar29 = local_340;
            do {
              iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar17 >> 9) * 8) +
                              (ulonglong)((uint)uVar17 & 0x1ff) * 4);
              pcVar8 = *(code **)(param_9 + 0x10);
              if (pcVar8 == (code *)0x0) {
LAB_146c4aced:
                lVar26 = (longlong)iVar7;
                lVar20 = **(longlong **)(param_1 + 8);
                lVar19 = (*(longlong **)(param_1 + 8))[2];
                lVar28 = (longlong)*(int *)(lVar19 + lVar26 * 0xc);
                lVar27 = (longlong)*(int *)(lVar19 + 4 + lVar26 * 0xc);
                lVar19 = (longlong)*(int *)(lVar19 + 8 + lVar26 * 0xc);
                local_238[2] = *(double *)(lVar20 + 0x10 + lVar28 * 0x18);
                pdVar23 = (double *)(lVar20 + lVar28 * 0x18);
                local_238[0] = *pdVar23;
                local_238[1] = pdVar23[1];
                local_210 = *(double *)(lVar20 + 0x10 + lVar27 * 0x18);
                pdVar23 = (double *)(lVar20 + lVar27 * 0x18);
                local_238[3] = *pdVar23;
                dStack_218 = pdVar23[1];
                local_1f8 = *(undefined8 *)(lVar20 + 0x10 + lVar19 * 0x18);
                puVar2 = (undefined4 *)(lVar20 + lVar19 * 0x18);
                local_208 = *puVar2;
                uStack_204 = puVar2[1];
                uStack_200 = puVar2[2];
                uStack_1fc = puVar2[3];
                local_14c = local_14c & 0xffffffff00000000;
                pdVar23 = local_238;
                pdVar25 = local_1a0;
                for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *pdVar25 = *pdVar23;
                  pdVar23 = pdVar23 + 1;
                  pdVar25 = pdVar25 + 1;
                }
                cVar15 = (*(code *)*param_8)(param_8[1],local_1e8);
                if (cVar15 != '\0') {
                  FUN_146c4b302(local_1e8,iVar7,local_344,param_7);
                }
              }
              else {
                plVar21 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar21 = (longlong *)(param_9 + 0x30);
                }
                local_2a0 = iVar7;
                uVar18 = (**(code **)(*plVar21 + 8))();
                cVar15 = (*pcVar8)(uVar18,&local_2a0);
                if (cVar15 != '\0') goto LAB_146c4aced;
              }
              uVar17 = (ulonglong)((uint)uVar17 + 1);
              iVar29 = iVar29 + -1;
            } while (iVar29 != 0);
          }
        }
        else {
          plVar21 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar21 = local_318;
          }
          local_2a0 = local_344;
          uVar18 = (**(code **)(*plVar21 + 8))();
          cVar15 = (*pcVar8)(uVar18,&local_2a0);
          if (cVar15 != '\0') goto LAB_146c4aae9;
        }
        uVar17 = (ulonglong)((int)local_308 + 1);
      } while ((int)local_308 != local_33c);
    }
    goto LAB_146c4ade8;
  }
  bVar30 = (param_6 & 1) == 0;
  if ((bVar30 || (int)uVar16 < iVar29) &&
      (*(int *)(param_3 + 200) <= (int)uVar6 || !bVar30 && (int)uVar16 >= iVar29)) {
    dVar3 = *(double *)(param_1 + 0x60);
    uVar17 = (ulonglong)((param_2 >> 9) << 3);
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar17);
    lVar26 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar19 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar17);
    dVar12 = *(double *)(lVar19 + lVar26) + dVar3;
    dVar10 = *(double *)(lVar19 + 8 + lVar26) + dVar3;
    dVar3 = dVar3 + *(double *)(lVar19 + 0x10 + lVar26);
    dVar4 = *(double *)(lVar20 + 0x10 + lVar26);
    dVar9 = dVar4 - dVar3;
    dVar5 = *(double *)(lVar20 + 8 + lVar26);
    dVar11 = dVar5 - dVar10;
    dVar13 = *(double *)(lVar20 + lVar26) - dVar12;
    dVar3 = dVar3 + dVar4;
    dVar10 = dVar10 + dVar5;
    dVar12 = dVar12 + *(double *)(lVar20 + lVar26);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8) +
                       (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      param_5 = ~param_5;
      FUN_146c49756(param_3,local_238,param_5,param_4);
      if ((((dVar12 <= local_238[0]) || (local_238[3] <= dVar13)) ||
          ((dVar10 <= local_238[1] || ((dStack_218 <= dVar11 || (dVar3 <= local_238[2])))))) ||
         (local_210 <= dVar9)) goto LAB_146c4ade8;
      uVar18 = *param_8;
      local_360 = local_2b0;
    }
    else {
      FUN_146c49756(param_3,local_238,param_5 - 1,param_4);
      if (((((local_238[0] < dVar12) && (dVar13 < local_238[3])) && (local_238[1] < dVar10)) &&
          ((dVar11 < dStack_218 && (local_238[2] < dVar3)))) && (dVar9 < local_210)) {
        local_2c0 = *param_8;
        local_360 = &local_2c0;
        local_2b8 = param_8[1];
        local_370 = param_6 + 1;
        local_350 = param_10;
        local_358 = param_9;
        local_368 = param_7;
        local_378 = param_5 - 1;
        FUN_146c4a8e0(param_1,param_2,param_3,param_4);
      }
      param_5 = *(int *)(*(longlong *)
                          (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4) - 1;
      FUN_146c49756(param_3,&local_288,param_5,param_4);
      if (((dVar12 <= local_288) || (local_270 <= dVar13)) ||
         ((dVar10 <= uStack_280 ||
          (((uStack_268 <= dVar11 || (dVar3 <= local_278)) || (local_260 <= dVar9))))))
      goto LAB_146c4ade8;
      uVar18 = *param_8;
      local_360 = local_2d0;
    }
  }
  else {
    FUN_146c49756(param_3,local_238,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8)
                       + (ulonglong)(uVar16 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar15 = FUN_146c49dac(param_1,param_2,local_238);
      if (cVar15 == '\0') goto LAB_146c4ade8;
      uVar18 = *param_8;
      local_360 = local_2e0;
    }
    else {
      cVar15 = FUN_146c49dac(param_1,param_2 - 1,local_238);
      if (cVar15 != '\0') {
        local_2f0 = *param_8;
        local_360 = &local_2f0;
        local_2e8 = param_8[1];
        local_370 = param_6 + 1;
        local_350 = param_10;
        local_358 = param_9;
        local_368 = param_7;
        local_378 = param_5;
        FUN_146c4a8e0(param_1,param_2 - 1,param_3,param_4);
      }
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                        (ulonglong)(uVar16 + 1 & 0x1ff) * 4) - 1;
      cVar15 = FUN_146c49dac(param_1,param_2,local_238);
      if (cVar15 == '\0') goto LAB_146c4ade8;
      uVar18 = *param_8;
      local_360 = local_300;
    }
  }
  *local_360 = uVar18;
  local_360[1] = param_8[1];
  local_370 = param_6 + 1;
  local_350 = param_10;
  local_358 = param_9;
  local_368 = param_7;
  local_378 = param_5;
  FUN_146c4a8e0(param_1,param_2,param_3,param_4);
LAB_146c4ade8:
  if ((local_b0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4b2d4 FUN_146c4b2d4 body=45 status=ok
// SIG undefined FUN_146c4b2d4(void)

bool FUN_146c4b2d4(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 146c4b302 FUN_146c4b302 body=1201 status=ok
// SIG undefined FUN_146c4b302(void)

void FUN_146c4b302(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar4 = *(int *)(param_1 + 0xa4);
  if (iVar4 == 2) {
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
  }
  else {
    if (iVar4 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
        FUN_146bddb72(param_4,iVar4);
      }
      lVar6 = *param_4;
      lVar7 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      puVar2 = (undefined4 *)(lVar6 + 8 + lVar7);
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = (undefined4)uStack_50;
      puVar2[3] = uStack_50._4_4_;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      goto LAB_146c4b43f;
    }
    if (iVar4 < 3) goto LAB_146c4b43f;
    if (*(int *)(param_1 + 0xa0) != 6) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      local_68 = *(undefined8 *)(param_1 + 0xd0);
      local_78 = *(undefined8 *)(param_1 + 0xc0);
      uStack_70 = *(undefined8 *)(param_1 + 200);
      local_88 = *(undefined8 *)(param_1 + 0xe8);
      local_98 = *(undefined8 *)(param_1 + 0xd8);
      uStack_90 = *(undefined8 *)(param_1 + 0xe0);
      local_a8 = *(undefined8 *)(param_1 + 0x100);
      local_b8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_b0 = *(undefined8 *)(param_1 + 0xf8);
      local_c8 = *(undefined8 *)(param_1 + 0x118);
      local_d8 = *(undefined8 *)(param_1 + 0x108);
      uStack_d0 = *(undefined8 *)(param_1 + 0x110);
      local_e8 = *(undefined8 *)(param_1 + 0x130);
      local_f8 = *(undefined4 *)(param_1 + 0x120);
      uStack_f4 = *(undefined4 *)(param_1 + 0x124);
      uStack_f0 = *(undefined4 *)(param_1 + 0x128);
      uStack_ec = *(undefined4 *)(param_1 + 300);
      iVar5 = (int)param_4[5];
      *(uint *)(param_4 + 5) = iVar5 + 1U;
      if (*(uint *)((longlong)param_4 + 0x2c) < iVar5 + 1U) {
        FUN_146bddc88(param_4 + 4,iVar5);
      }
      lVar6 = param_4[4];
      lVar7 = (longlong)iVar5 * 0xa0;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
      puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      *puVar3 = local_78;
      puVar3[1] = uStack_70;
      *(undefined8 *)(lVar6 + 0x48 + lVar7) = local_88;
      puVar3 = (undefined8 *)(lVar6 + 0x38 + lVar7);
      *puVar3 = local_98;
      puVar3[1] = uStack_90;
      *(undefined8 *)(lVar6 + 0x60 + lVar7) = local_a8;
      puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar7);
      *puVar3 = local_b8;
      puVar3[1] = uStack_b0;
      puVar3 = (undefined8 *)(lVar6 + 0x68 + lVar7);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d0;
      *(undefined8 *)(lVar6 + 0x78 + lVar7) = local_c8;
      puVar2 = (undefined4 *)(lVar6 + 0x80 + lVar7);
      *puVar2 = local_f8;
      puVar2[1] = uStack_f4;
      puVar2[2] = uStack_f0;
      puVar2[3] = uStack_ec;
      *(undefined8 *)(lVar6 + 0x90 + lVar7) = local_e8;
      *(int *)(lVar6 + 0x98 + lVar7) = iVar4;
      goto LAB_146c4b43f;
    }
    plVar1 = param_4 + 2;
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = param_4[2];
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
    *puVar3 = local_78;
    puVar3[1] = uStack_70;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    local_48 = *(undefined8 *)(param_1 + 0xe8);
    local_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    local_78 = *(undefined8 *)(param_1 + 0xf0);
    uStack_70 = *(undefined8 *)(param_1 + 0xf8);
    local_68 = *(undefined8 *)(param_1 + 0x100);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = *plVar1;
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
    *puVar2 = (undefined4)local_78;
    puVar2[1] = local_78._4_4_;
    puVar2[2] = (undefined4)uStack_70;
    puVar2[3] = uStack_70._4_4_;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    if (*(int *)(param_1 + 0xa4) < 5) goto LAB_146c4b43f;
    local_48 = *(undefined8 *)(param_1 + 0x118);
    local_58 = *(undefined8 *)(param_1 + 0x108);
    uStack_50 = *(undefined8 *)(param_1 + 0x110);
    local_78 = *(undefined8 *)(param_1 + 0x120);
    uStack_70 = *(undefined8 *)(param_1 + 0x128);
    local_68 = *(undefined8 *)(param_1 + 0x130);
  }
  iVar4 = (int)param_4[3];
  *(uint *)(param_4 + 3) = iVar4 + 1U;
  if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
    FUN_146bddbf8(param_4 + 2,iVar4);
  }
  lVar6 = param_4[2];
  lVar7 = (longlong)iVar4 * 0x38;
  *(undefined4 *)(lVar6 + lVar7) = param_2;
  *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
  puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
  *puVar3 = local_58;
  puVar3[1] = uStack_50;
  *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
  puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = (undefined4)local_78;
  puVar2[1] = local_78._4_4_;
  puVar2[2] = (undefined4)uStack_70;
  puVar2[3] = uStack_70._4_4_;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
LAB_146c4b43f:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4b7b4 FUN_146c4b7b4 body=362 status=ok
// SIG undefined FUN_146c4b7b4(void)

ulonglong FUN_146c4b7b4(longlong param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    uVar7 = uVar9;
    uVar9 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar8 = iVar2 + uVar7 + 1;
      iVar10 = uVar7 + 2;
      while (uVar1 = iVar10 - 1, (int)uVar1 < (int)(iVar2 + uVar7)) {
        local_58 = *param_4;
        local_50 = param_4[1];
        local_70 = param_5;
        local_78 = &local_58;
        local_80 = CONCAT31(local_80._1_3_,param_3);
        local_88 = param_2;
        uVar4 = FUN_146c4b94e(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar1 >> 9) * 8) +
                                       (ulonglong)(uVar1 & 0x1ff) * 4),iVar10,uVar8);
        uVar6 = (undefined7)(uVar4 >> 8);
        bVar3 = (byte)uVar9;
        uVar9 = (uint)((byte)uVar4 & 1 | bVar3);
        iVar10 = iVar10 + 1;
        if ((param_2 == 0) && ((uVar4 & 1) != 0 || bVar3 != 0)) {
          bVar3 = 1;
          goto LAB_146c4b8f5;
        }
      }
      uVar7 = uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 200));
  }
  local_68 = *param_4;
  local_78 = &local_68;
  local_60 = param_4[1];
  local_70 = param_5;
  local_88 = CONCAT71(local_88._1_7_,param_3);
  local_80 = 0;
  uVar5 = FUN_146c4bc36(param_1,*(undefined4 *)(param_1 + 0xcc),0xffffffff,param_2);
  uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  bVar3 = (byte)uVar5 | (byte)uVar9;
LAB_146c4b8f5:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,bVar3) & 0xffffffffffffff01;
}



// FUNCTION 146c4b920 FUN_146c4b920 body=45 status=ok
// SIG undefined FUN_146c4b920(void)

bool FUN_146c4b920(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 146c4b94e FUN_146c4b94e body=742 status=ok
// SIG undefined FUN_146c4b94e(void)

ulonglong FUN_146c4b94e(longlong param_1,int param_2,uint param_3,uint param_4,longlong param_5,
                       char param_6,undefined8 *param_7,longlong param_8)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_278 [44];
  int local_24c;
  longlong *local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  int local_220 [18];
  undefined8 local_1d8 [9];
  undefined8 local_190;
  undefined1 local_188;
  ulonglong local_184;
  undefined4 local_17c;
  undefined8 local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98 [4];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  pcVar3 = *(code **)(param_8 + 0x10);
  if (pcVar3 == (code *)0x0) {
LAB_146c4b9c0:
    lVar7 = **(longlong **)(param_1 + 8);
    lVar10 = (*(longlong **)(param_1 + 8))[2];
    lVar9 = (longlong)param_2;
    lVar15 = (longlong)*(int *)(lVar10 + lVar9 * 0xc);
    lVar16 = (longlong)*(int *)(lVar10 + 4 + lVar9 * 0xc);
    lVar17 = (longlong)*(int *)(lVar10 + 8 + lVar9 * 0xc);
    local_98[2] = *(undefined8 *)(lVar7 + 0x10 + lVar15 * 0x18);
    puVar11 = (undefined8 *)(lVar7 + lVar15 * 0x18);
    local_98[0] = *puVar11;
    local_98[1] = puVar11[1];
    local_70 = *(undefined8 *)(lVar7 + 0x10 + lVar16 * 0x18);
    puVar11 = (undefined8 *)(lVar7 + lVar16 * 0x18);
    local_98[3] = *puVar11;
    uStack_78 = puVar11[1];
    puVar1 = (undefined4 *)(lVar7 + lVar17 * 0x18);
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    local_58 = *(undefined8 *)(lVar7 + 0x10 + lVar17 * 0x18);
    local_190 = 0x3e45798ee2308c3a;
    local_188 = 0;
    local_184 = 0;
    local_17c = 0;
    puVar11 = local_98;
    piVar13 = local_220;
    for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined8 *)piVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      piVar13 = piVar13 + 2;
    }
    local_228 = *(undefined4 *)(lVar10 + 8 + lVar9 * 0xc);
    local_230 = *(undefined8 *)(lVar10 + lVar9 * 0xc);
    if ((int)param_3 < (int)param_4) {
      local_248 = (longlong *)(param_8 + 0x30);
      uVar12 = 0;
      local_24c = param_2;
      do {
        iVar2 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
        pcVar3 = *(code **)(param_8 + 0x10);
        if (pcVar3 == (code *)0x0) {
LAB_146c4bae6:
          lVar10 = (longlong)iVar2;
          lVar7 = (*(longlong **)(param_1 + 8))[2];
          local_238 = *(undefined4 *)(lVar7 + 8 + lVar10 * 0xc);
          local_240 = *(undefined8 *)(lVar7 + lVar10 * 0xc);
          if (param_6 != '\0') {
            lVar9 = 0;
            do {
              lVar15 = 0;
              do {
                if (*(int *)((longlong)&local_230 + lVar9 * 4) ==
                    *(int *)((longlong)&local_240 + lVar15 * 4)) goto LAB_146c4bbee;
                lVar15 = lVar15 + 1;
              } while (lVar15 != 3);
              lVar9 = lVar9 + 1;
            } while (lVar9 != 3);
          }
          piVar13 = (int *)(lVar7 + lVar10 * 0xc);
          lVar7 = **(longlong **)(param_1 + 8);
          local_e8[2] = *(undefined8 *)(lVar7 + 0x10 + (longlong)*piVar13 * 0x18);
          puVar11 = (undefined8 *)(lVar7 + (longlong)*piVar13 * 0x18);
          local_e8[0] = *puVar11;
          local_e8[1] = puVar11[1];
          local_c0 = *(undefined8 *)(lVar7 + 0x10 + (longlong)piVar13[1] * 0x18);
          puVar11 = (undefined8 *)(lVar7 + (longlong)piVar13[1] * 0x18);
          local_e8[3] = *puVar11;
          uStack_c8 = puVar11[1];
          local_a8 = *(undefined8 *)(lVar7 + 0x10 + (longlong)piVar13[2] * 0x18);
          puVar1 = (undefined4 *)(lVar7 + (longlong)piVar13[2] * 0x18);
          local_b8 = *puVar1;
          uStack_b4 = puVar1[1];
          uStack_b0 = puVar1[2];
          uStack_ac = puVar1[3];
          local_184 = local_184 & 0xffffffff00000000;
          puVar11 = local_e8;
          puVar14 = local_1d8;
          for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          }
          uVar5 = (*(code *)*param_7)(param_7[1],local_220);
          uVar12 = (ulonglong)uVar5;
          if ((char)uVar5 != '\0') {
            if (param_5 == 0) {
              uVar12 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
              break;
            }
            FUN_146c4b302(local_220,local_24c,iVar2);
          }
        }
        else {
          local_240 = CONCAT44(local_240._4_4_,iVar2);
          plVar8 = *(longlong **)(param_8 + 0x20);
          if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
            plVar8 = local_248;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar4 = (*pcVar3)(uVar6,&local_240);
          if (cVar4 != '\0') goto LAB_146c4bae6;
        }
LAB_146c4bbee:
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
      goto LAB_146c4bbfc;
    }
  }
  else {
    plVar8 = (longlong *)(param_8 + 0x30);
    if (*(longlong **)(param_8 + 0x20) != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_8 + 0x20);
    }
    local_220[0] = param_2;
    uVar6 = (**(code **)(*plVar8 + 8))();
    cVar4 = (*pcVar3)(uVar6,local_220);
    if (cVar4 != '\0') goto LAB_146c4b9c0;
  }
  uVar12 = 0;
LAB_146c4bbfc:
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffffffffff01;
}



// FUNCTION 146c4bc36 FUN_146c4bc36 body=1887 status=ok
// SIG undefined FUN_146c4bc36(void)

ulonglong FUN_146c4bc36(longlong param_1,uint param_2,uint param_3,longlong param_4,
                       undefined1 param_5,uint param_6,undefined8 *param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined3 uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint7 uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_178 [32];
  longlong local_158;
  int local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong uVar15;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (-1 < (int)param_2) {
    uVar15 = (ulonglong)param_2;
    uVar12 = param_2 >> 9;
    uVar13 = param_2 & 0x1ff;
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar12 * 8) +
                      (ulonglong)uVar13 * 4);
    if ((int)param_3 < 0) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar21 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x70) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
    }
    iVar19 = *(int *)(param_1 + 200);
    if ((iVar19 <= (int)uVar10) || (iVar19 <= (int)uVar21)) {
      if (iVar19 <= (int)uVar10) {
        bVar22 = (param_6 & 0x80000001) == 1;
        if ((-1 < (int)param_3) || (bVar22 && iVar19 <= (int)uVar21)) {
          if (!bVar22 || iVar19 > (int)uVar21) {
            uVar15 = (ulonglong)param_3;
            uVar21 = uVar10;
          }
          uVar12 = (uint)(uVar15 >> 9);
          uVar13 = (uint)uVar15 & 0x1ff;
          goto LAB_146c4be33;
        }
        uVar12 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 4);
        uVar16 = (uint7)(uint3)(param_2 >> 8);
        if ((int)uVar12 < 0) {
          local_100 = *param_7;
          local_148 = &local_100;
          local_f8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_146c4bc36(param_1,~uVar12,0xffffffff,param_4);
joined_r0x000146c4c31f:
          uVar17 = (ulonglong)uVar10;
          if ((param_4 == 0) && (uVar15 = CONCAT71(uVar16,1), (char)uVar10 != '\0'))
          goto LAB_146c4bdcb;
        }
        else {
          iVar20 = uVar12 - 1;
          iVar19 = *(int *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                           (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
          local_110 = *param_7;
          local_148 = &local_110;
          local_108 = param_7[1];
          iVar18 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          uVar9 = FUN_146c4bc36(param_1,iVar20,0xffffffff,param_4);
          uVar15 = CONCAT71(uVar16,1);
          if ((param_4 == 0) && ((byte)uVar9 != 0)) goto LAB_146c4bdcb;
          uVar10 = iVar19 - 1;
          local_120 = *param_7;
          local_148 = &local_120;
          local_118 = param_7[1];
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          bVar14 = FUN_146c4bc36(param_1,uVar10,0xffffffff,param_4);
          uVar5 = (undefined3)((uint)uVar9 >> 8);
          bVar14 = (byte)uVar9 | bVar14;
          if ((param_4 == 0) && (bVar14 != 0)) goto LAB_146c4bdcb;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar10 >> 9) * 8);
          lVar6 = (ulonglong)((uVar10 & 0x1ff) << 3) * 3;
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar10 >> 9) * 8);
          local_98 = *(double *)(lVar3 + 0x10 + lVar6);
          dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
          local_b0 = local_98 - dVar1;
          local_a0 = *(double *)(lVar3 + 8 + lVar6);
          dVar2 = *(double *)(lVar4 + 8 + lVar6);
          local_b8 = local_a0 - dVar2;
          local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
          local_98 = local_98 + dVar1;
          local_a0 = local_a0 + dVar2;
          local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
          cVar7 = FUN_146c49dac(param_1,iVar20);
          uVar17 = (ulonglong)CONCAT31(uVar5,bVar14);
          if (cVar7 != '\0') {
            local_130 = *param_7;
            local_148 = &local_130;
            local_128 = param_7[1];
            local_140 = param_8;
            local_158 = CONCAT71(local_158._1_7_,param_5);
            local_150 = iVar18;
            bVar8 = FUN_146c4bc36(param_1,iVar20,uVar10,param_4);
            uVar10 = CONCAT31(uVar5,bVar14 | bVar8);
            goto joined_r0x000146c4c31f;
          }
        }
        goto LAB_146c4bf18;
      }
LAB_146c4be33:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar12 << 3));
      lVar6 = (ulonglong)(uVar13 << 3) * 3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar12 << 3));
      local_98 = *(double *)(lVar3 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
      local_b0 = local_98 - dVar1;
      local_a0 = *(double *)(lVar3 + 8 + lVar6);
      dVar2 = *(double *)(lVar4 + 8 + lVar6);
      local_b8 = local_a0 - dVar2;
      local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
      local_98 = local_98 + dVar1;
      local_a0 = local_a0 + dVar2;
      local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 >> 9) * 8)
                        + (ulonglong)(uVar21 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        cVar7 = FUN_146c49dac(param_1,~uVar10,&local_c0);
        if (cVar7 == '\0') {
          uVar17 = 0;
        }
        else {
          local_d0 = *param_7;
          local_148 = &local_d0;
          local_c8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_146c4bc36(param_1,~uVar10,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if (param_4 == 0) {
            bVar14 = (byte)uVar10;
joined_r0x000146c4c121:
            if (bVar14 != 0) goto LAB_146c4c076;
          }
        }
      }
      else {
        iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                         (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
        cVar7 = FUN_146c49dac(param_1,uVar10 - 1,&local_c0);
        if (cVar7 != '\0') {
          local_e0 = *param_7;
          local_148 = &local_e0;
          local_d8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_146c4bc36(param_1,uVar10 - 1,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if ((param_4 != 0) || ((char)uVar10 == '\0')) goto LAB_146c4c09b;
LAB_146c4c076:
          uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
          goto LAB_146c4bdcb;
        }
        uVar17 = 0;
LAB_146c4c09b:
        iVar19 = iVar19 + -1;
        cVar7 = FUN_146c49dac(param_1,iVar19,&local_c0);
        if (cVar7 != '\0') {
          local_f0 = *param_7;
          local_148 = &local_f0;
          local_e8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar11 = FUN_146c4bc36(param_1,iVar19,uVar15,param_4);
          bVar14 = (byte)uVar11 | (byte)uVar17;
          uVar17 = CONCAT71((int7)((ulonglong)uVar11 >> 8),bVar14) & 0xffffff01;
          if (param_4 == 0) {
            bVar14 = bVar14 & 1;
            goto joined_r0x000146c4c121;
          }
        }
      }
LAB_146c4bf18:
      uVar15 = uVar17;
      goto LAB_146c4bdcb;
    }
    if ((param_3 != 0xffffffff) &&
       (iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 4), 0 < iVar19)) {
      uVar12 = uVar10 + 1;
      uVar15 = 0;
      do {
        local_90 = *param_7;
        local_88 = param_7[1];
        local_140 = param_8;
        local_148 = &local_90;
        local_150 = CONCAT31(local_150._1_3_,param_5);
        local_158 = param_4;
        uVar9 = FUN_146c4b94e(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar12 >> 9) * 8) +
                                       (ulonglong)(uVar12 & 0x1ff) * 4),uVar21 + 1,
                              *(int *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0xb8) +
                                        (ulonglong)(uVar21 >> 9) * 8) +
                                      (ulonglong)(uVar21 & 0x1ff) * 4) + uVar21 + 1);
        bVar14 = (byte)uVar9 | (byte)uVar15;
        uVar15 = (ulonglong)CONCAT31((int3)((uint)uVar9 >> 8),bVar14);
        if ((param_4 == 0) && ((bVar14 & 1) != 0)) goto LAB_146c4c076;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(iVar19 + uVar10 + 1));
      goto LAB_146c4bdcb;
    }
  }
  uVar15 = 0;
LAB_146c4bdcb:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 146c4c396 FUN_146c4c396 body=162 status=ok
// SIG undefined FUN_146c4c396(void)

void FUN_146c4c396(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0 [9];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = param_2 + 9;
  puVar5 = local_68;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2;
  puVar5 = local_b0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  bVar1 = FUN_146bda4f4(local_b0,local_68,0x3e45798ee2308c3a);
  *(uint *)((longlong)param_2 + 0x9c) = 2 - (uint)bVar1;
  uVar3 = 7;
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4c43a FUN_146c4c43a body=729 status=ok
// SIG undefined FUN_146c4c43a(void)

void FUN_146c4c43a(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  short sVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  uStack_a0 = 0;
  iVar13 = *(int *)(*(longlong *)(param_1 + 8) + 0x18);
  if (iVar13 < 0) {
LAB_146c4c70c:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  if (iVar13 == 0) {
    local_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    FUN_14481578e(&local_a8);
    iVar13 = *(int *)(*(longlong *)(param_1 + 8) + 0x18);
    local_b8 = 0;
    uStack_b0 = 0;
    if (iVar13 < 0) goto LAB_146c4c70c;
    if (iVar13 != 0) {
      FUN_1447a8aa0(&local_b8);
      plVar11 = *(longlong **)(param_1 + 8);
      if (0 < (int)plVar11[3]) {
        lVar16 = 8;
        lVar17 = 0;
        do {
          lVar18 = *plVar11;
          lVar12 = plVar11[2];
          lVar14 = (longlong)*(int *)(lVar12 + -8 + lVar16);
          lVar15 = (longlong)*(int *)(lVar12 + -4 + lVar16);
          lVar12 = (longlong)*(int *)(lVar12 + lVar16);
          dVar7 = (*(double *)(lVar18 + 0x10 + lVar14 * 0x18) +
                   *(double *)(lVar18 + 0x10 + lVar15 * 0x18) +
                  *(double *)(lVar18 + 0x10 + lVar12 * 0x18)) * 0.3333333333333333;
          dVar20 = (*(double *)(lVar18 + 8 + lVar14 * 0x18) +
                    *(double *)(lVar18 + 8 + lVar15 * 0x18) +
                   *(double *)(lVar18 + 8 + lVar12 * 0x18)) * 0.3333333333333333;
          dVar19 = (*(double *)(lVar18 + lVar14 * 0x18) + *(double *)(lVar18 + lVar15 * 0x18) +
                   *(double *)(lVar18 + lVar12 * 0x18)) * 0.3333333333333333;
          dVar7 = dVar7 * dVar7 + dVar19 * dVar19 + dVar20 * dVar20;
          local_98 = dVar7;
          sVar9 = _dtest(&local_98);
          if ((sVar9 != 2) &&
             (local_98 = dVar7, sVar9 = _dtest(&local_98), uVar8 = uStack_a0, sVar9 < 1)) {
            lVar18 = (longlong)(int)uStack_a0;
            uVar10 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
            if (uStack_a0._4_4_ < uVar10) {
              FUN_1446f48e2(&local_a8,uVar8 & 0xffffffff);
            }
            uVar8 = uStack_b0;
            *(int *)(local_a8 + lVar18 * 4) = (int)lVar17;
            lVar18 = **(longlong **)(param_1 + 8);
            lVar12 = (*(longlong **)(param_1 + 8))[2];
            lVar14 = (longlong)*(int *)(lVar12 + -8 + lVar16);
            lVar15 = (longlong)*(int *)(lVar12 + -4 + lVar16);
            lVar12 = (longlong)*(int *)(lVar12 + lVar16);
            dVar7 = *(double *)(lVar18 + lVar14 * 0x18);
            dVar19 = *(double *)(lVar18 + 8 + lVar14 * 0x18);
            dVar20 = *(double *)(lVar18 + 0x10 + lVar14 * 0x18);
            dVar1 = *(double *)(lVar18 + 0x10 + lVar15 * 0x18);
            dVar2 = *(double *)(lVar18 + 0x10 + lVar12 * 0x18);
            dVar3 = *(double *)(lVar18 + 8 + lVar15 * 0x18);
            dVar4 = *(double *)(lVar18 + 8 + lVar12 * 0x18);
            dVar5 = *(double *)(lVar18 + lVar15 * 0x18);
            dVar6 = *(double *)(lVar18 + lVar12 * 0x18);
            lVar18 = (longlong)(int)uStack_b0;
            uVar10 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar10);
            if (uStack_b0._4_4_ < uVar10) {
              FUN_1403e3958(&local_b8,uVar8 & 0xffffffff);
            }
            *(double *)(local_b8 + lVar18 * 0x18) = (dVar7 + dVar5 + dVar6) * 0.3333333333333333;
            *(double *)(local_b8 + 8 + lVar18 * 0x18) =
                 (dVar19 + dVar3 + dVar4) * 0.3333333333333333;
            *(double *)(local_b8 + 0x10 + lVar18 * 0x18) =
                 (dVar20 + dVar1 + dVar2) * 0.3333333333333333;
          }
          lVar17 = lVar17 + 1;
          plVar11 = *(longlong **)(param_1 + 8);
          lVar16 = lVar16 + 0xc;
        } while (lVar17 < (int)plVar11[3]);
      }
    }
  }
  FUN_146c4c716(param_1,&local_a8,&local_b8,uStack_a0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4c716 FUN_146c4c716 body=773 status=ok
// SIG undefined FUN_146c4c716(void)

void FUN_146c4c716(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  undefined8 *local_1c0;
  longlong local_1b0;
  int local_1a4;
  longlong local_1a0;
  longlong local_198;
  int local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  longlong local_110;
  longlong local_f8;
  longlong local_e0;
  longlong local_c8;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_146c4ca1c(&local_b0);
  FUN_146c4ca1c(local_118);
  local_1c0 = &local_148;
  local_148 = 0x7fefffffffffffff;
  local_140 = 0x7fefffffffffffff;
  local_138 = 0x7fefffffffffffff;
  local_130 = 0xffefffffffffffff;
  local_128 = 0xffefffffffffffff;
  local_120 = 0xffefffffffffffff;
  local_1d8 = *(undefined4 *)(param_1 + 0x18);
  local_1e0 = 0;
  uVar8 = 0;
  local_1e8 = param_4;
  local_1d0 = &local_b0;
  local_1c8 = local_118;
  local_1a4 = FUN_146c4ca56(param_1,param_2,param_3,0);
  *(undefined8 *)(param_1 + 0x68) = local_b0;
  FUN_146bedfa8(param_1 + 0x70,local_a8);
  *(undefined8 *)(param_1 + 0x80) = local_98;
  FUN_146bee054(param_1 + 0x88,local_90);
  *(undefined8 *)(param_1 + 0x98) = local_80;
  FUN_146bee054(param_1 + 0xa0,local_78);
  *(undefined8 *)(param_1 + 0xb0) = local_68;
  FUN_146bedfa8(param_1 + 0xb8,local_60);
  *(int *)(param_1 + 200) = local_4c;
  local_1b0 = param_1;
  if (0 < local_b8) {
    local_198 = param_1 + 0x68;
    local_1a0 = param_1 + 0x80;
    do {
      uVar9 = (ulonglong)(uVar8 >> 9);
      lVar5 = *(longlong *)(local_f8 + uVar9 * 8);
      lVar6 = (ulonglong)((uVar8 & 0x1ff) * 8) * 3;
      piVar2 = (int *)(lVar5 + lVar6);
      local_168 = *piVar2;
      iStack_164 = piVar2[1];
      iStack_160 = piVar2[2];
      iStack_15c = piVar2[3];
      local_158 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      iVar1 = local_50 + uVar8;
      FUN_146bedee6(local_1a0,&local_168,iVar1);
      lVar5 = *(longlong *)(local_e0 + uVar9 * 8);
      puVar3 = (undefined4 *)(lVar5 + lVar6);
      local_188 = *puVar3;
      uStack_184 = puVar3[1];
      uStack_180 = puVar3[2];
      uStack_17c = puVar3[3];
      local_178 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      FUN_146bedee6(param_1 + 0x98,&local_188,iVar1);
      local_18c = *(int *)(*(longlong *)(local_110 + uVar9 * 8) + (ulonglong)(uVar8 & 0x1ff) * 4) +
                  local_4c;
      FUN_146bedf4e(local_198,&local_18c,iVar1);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b8);
  }
  if (0 < local_b4) {
    lVar5 = local_1b0 + 0xb0;
    uVar8 = 0;
    do {
      uVar4 = *(uint *)(*(longlong *)(local_c8 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
      uVar7 = ~uVar4;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4 + local_50;
      }
      local_168 = uVar7 + 1;
      FUN_146bedf4e(lVar5,&local_168,local_4c + uVar8);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b4);
  }
  *(int *)(local_1b0 + 0xcc) = local_50 + local_1a4;
  FUN_146c4d1fa(local_118);
  FUN_146c4d1fa(&local_b0);
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4ca1c FUN_146c4ca1c body=57 status=ok
// SIG undefined FUN_146c4ca1c(void)

longlong FUN_146c4ca1c(longlong param_1)

{
  FUN_141040b84();
  FUN_141040be6(param_1 + 0x18);
  FUN_141040be6(param_1 + 0x30);
  FUN_141040b84(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 146c4ca56 FUN_146c4ca56 body=1954 status=ok
// SIG undefined FUN_146c4ca56(void)

uint FUN_146c4ca56(longlong param_1,longlong *param_2,longlong *param_3,int param_4,uint param_5,
                  int param_6,int param_7,longlong param_8,longlong param_9,double *param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_138 [32];
  int local_118;
  int local_110;
  int local_108;
  longlong local_100;
  longlong local_f8;
  double *local_f0;
  int local_dc;
  ulonglong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  pdVar8 = param_10;
  lVar7 = param_8;
  uVar23 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((int)param_2[1] < 1) {
    uVar27 = SUB84(DAT_14c8464f0,0);
    uVar28 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    dVar30 = DAT_14c8464f0 + 0.0;
    dVar31 = DAT_14c8464e8 + 0.0;
    dVar25 = DAT_14c8464e0 + 0.0;
    dVar26 = DAT_14c8464e8;
    dVar29 = DAT_14c8464e0;
  }
  else {
    dVar25 = -1.79769313486232e+308;
    uVar27 = 0xffffffff;
    uVar28 = 0x7fefffff;
    dVar31 = -1.79769313486232e+308;
    dVar30 = -1.79769313486232e+308;
    dVar26 = 1.79769313486232e+308;
    dVar29 = 1.79769313486232e+308;
  }
  *param_10 = dVar29;
  param_10[1] = dVar26;
  param_10[2] = (double)CONCAT44(uVar28,uVar27);
  param_10[3] = dVar25;
  param_10[4] = dVar31;
  param_10[5] = dVar30;
  local_c8 = param_1;
  if (param_7 < (int)param_5) {
    local_98 = (double)CONCAT44(local_98._4_4_,param_6);
    pcVar3 = *(code **)(param_1 + 0x20);
    plVar12 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_1 + 0x30);
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    iVar10 = (*pcVar3)(uVar11,&local_98,pdVar8);
    lVar9 = local_c8;
    pdVar8 = param_10;
    lVar7 = param_9;
    if ((int)uVar23 < 1) {
      uVar27 = 0xffffffff;
      uVar28 = 0x7fefffff;
      dVar26 = -1.79769313486232e+308;
    }
    else {
      dVar29 = 1.79769313486232e+308;
      lVar18 = 0;
      dVar25 = -1.79769313486232e+308;
      do {
        dVar26 = *(double *)((longlong)iVar10 * 8 + *param_3 + (longlong)param_4 * 0x18 + lVar18);
        uVar27 = SUB84(dVar26,0);
        uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (dVar29 <= dVar26) {
          uVar27 = SUB84(dVar29,0);
          uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        }
        if (dVar26 <= dVar25) {
          dVar26 = dVar25;
        }
        lVar18 = lVar18 + 0x18;
        dVar29 = (double)CONCAT44(uVar28,uVar27);
        dVar25 = dVar26;
      } while ((ulonglong)uVar23 * 0x18 != lVar18);
    }
    if (dVar26 - (double)CONCAT44(uVar28,uVar27) <= 1e-08) {
      uVar22 = (ulonglong)(uint)((int)uVar23 / 2);
    }
    else {
      uVar22 = 0;
      if (1 < (int)uVar23) {
        dVar26 = (dVar26 + (double)CONCAT44(uVar28,uVar27)) * 0.5;
        iVar19 = uVar23 - 1;
        lVar13 = (longlong)param_4;
        local_c0 = lVar13 * 4;
        lVar18 = lVar13 * 0x18;
        uVar22 = 0;
        while( true ) {
          lVar15 = *param_3;
          iVar21 = (int)uVar22;
          uVar22 = (longlong)iVar21 - 1;
          puVar2 = (undefined8 *)((lVar13 + iVar21) * 0x18 + -0x18 + lVar15);
          do {
            puVar24 = puVar2;
            uVar22 = uVar22 + 1;
            puVar2 = puVar24 + 3;
          } while ((double)puVar24[(longlong)iVar10 + 3] <= dVar26);
          lVar20 = (longlong)iVar19;
          lVar17 = 0;
          lVar14 = lVar20 * 0x18;
          do {
            lVar16 = lVar14;
            lVar17 = lVar17 + -1;
            lVar14 = lVar16 + -0x18;
          } while (dVar26 < *(double *)(lVar18 + (longlong)iVar10 * 8 + lVar15 + lVar16));
          if (lVar20 + lVar17 + 1 <= (longlong)uVar22) break;
          lVar15 = lVar15 + lVar18 + lVar16 + -0x18;
          iVar19 = iVar19 + 1 + (int)lVar17;
          uVar11 = puVar24[5];
          uVar4 = *puVar2;
          uVar5 = puVar24[4];
          uVar6 = *(undefined8 *)(lVar15 + 0x20);
          *puVar2 = *(undefined8 *)(lVar15 + 0x18);
          puVar24[4] = uVar6;
          puVar24[5] = *(undefined8 *)(lVar15 + 0x28);
          lVar15 = *param_3;
          *(undefined8 *)(lVar16 + 0x10 + lVar15 + lVar18) = uVar11;
          puVar2 = (undefined8 *)(lVar16 + lVar15 + lVar18);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          lVar14 = local_c0 + *param_2;
          uVar27 = *(undefined4 *)(lVar14 + uVar22 * 4);
          lVar15 = lVar13 * 4 + 4 + lVar20 * 4;
          *(undefined4 *)(lVar14 + uVar22 * 4) = *(undefined4 *)(*param_2 + lVar15 + lVar17 * 4);
          *(undefined4 *)(lVar15 + *param_2 + lVar17 * 4) = uVar27;
        }
      }
    }
    iVar19 = (int)uVar22;
    local_d8 = (ulonglong)(uVar23 - iVar19);
    local_98 = 1.79769313486232e+308;
    dStack_90 = 1.79769313486232e+308;
    local_88 = 1.79769313486232e+308;
    local_80 = -1.79769313486232e+308;
    local_78 = -1.79769313486232e+308;
    local_70 = -1.79769313486232e+308;
    iVar10 = param_6 + 1;
    local_f0 = param_10;
    local_f8 = param_9;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = iVar19;
    local_110 = iVar10;
    local_dc = param_4;
    local_d0 = param_2;
    local_9c = FUN_146c4ca56(local_c8,param_2,param_3,param_4);
    local_f0 = &local_98;
    local_f8 = lVar7;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = (int)local_d8;
    local_110 = iVar10;
    local_a0 = FUN_146c4ca56(lVar9,param_2,param_3,iVar19 + param_4);
    dVar26 = pdVar8[1];
    uVar27 = SUB84(dVar26,0);
    uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
    dVar29 = *pdVar8;
    if (local_98 <= *pdVar8) {
      dVar29 = local_98;
    }
    *pdVar8 = dVar29;
    if (dStack_90 <= dVar26) {
      uVar27 = SUB84(dStack_90,0);
      uVar28 = (undefined4)((ulonglong)dStack_90 >> 0x20);
    }
    pdVar8[1] = (double)CONCAT44(uVar28,uVar27);
    dVar26 = pdVar8[2];
    if (local_88 <= pdVar8[2]) {
      dVar26 = local_88;
    }
    pdVar8[2] = dVar26;
    dVar26 = pdVar8[3];
    if (pdVar8[3] <= local_80) {
      dVar26 = local_80;
    }
    pdVar8[3] = dVar26;
    dVar26 = pdVar8[4];
    if (pdVar8[4] <= local_78) {
      dVar26 = local_78;
    }
    pdVar8[4] = dVar26;
    dVar26 = pdVar8[5];
    if (pdVar8[5] <= local_70) {
      dVar26 = local_70;
    }
    pdVar8[5] = dVar26;
    uVar23 = *(uint *)(lVar7 + 0x60);
    *(uint *)(lVar7 + 0x60) = uVar23 + 1;
    FUN_146bedf4e(lVar7,lVar7 + 100,uVar23);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_9c);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_a0);
    local_a8 = (pdVar8[2] + pdVar8[5]) * 0.5;
    local_b0 = (pdVar8[1] + pdVar8[4]) * 0.5;
    local_b8 = (*pdVar8 + pdVar8[3]) * 0.5;
    FUN_146bedee6(lVar7 + 0x18,&local_b8,uVar23);
    local_a8 = (pdVar8[5] - pdVar8[2]) * 0.5;
    local_b0 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_b8 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_b8,uVar23);
  }
  else {
    local_d0 = (longlong *)(ulonglong)*(uint *)(param_8 + 0x60);
    *(uint *)(param_8 + 0x60) = *(uint *)(param_8 + 0x60) + 1;
    piVar1 = (int *)(param_8 + 100);
    FUN_146bedf4e(param_8,piVar1);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&param_5);
    lVar9 = local_c8;
    if ((int)param_5 < 1) {
      dVar26 = pdVar8[2];
      dVar29 = pdVar8[5];
      dVar25 = *pdVar8;
      dVar30 = pdVar8[1];
      dVar31 = pdVar8[4];
      uVar27 = SUB84(pdVar8[3],0);
      uVar28 = (undefined4)((ulonglong)pdVar8[3] >> 0x20);
    }
    else {
      lVar13 = 0;
      lVar18 = 0;
      do {
        *piVar1 = *piVar1 + 1;
        FUN_146bedf4e(lVar7 + 0x48,*param_2 + (longlong)param_4 * 4 + lVar13);
        FUN_146c4d272(&local_98,*(undefined8 *)(lVar9 + 8),
                      *(undefined4 *)(*param_2 + (longlong)param_4 * 4 + lVar18 * 4));
        dVar25 = *pdVar8;
        if (local_98 <= *pdVar8) {
          dVar25 = local_98;
        }
        *pdVar8 = dVar25;
        dVar30 = pdVar8[1];
        if (dStack_90 <= pdVar8[1]) {
          dVar30 = dStack_90;
        }
        pdVar8[1] = dVar30;
        dVar26 = pdVar8[2];
        if (local_88 <= pdVar8[2]) {
          dVar26 = local_88;
        }
        pdVar8[2] = dVar26;
        dVar29 = pdVar8[3];
        uVar27 = SUB84(dVar29,0);
        uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        if (dVar29 <= local_80) {
          uVar27 = SUB84(local_80,0);
          uVar28 = (undefined4)((ulonglong)local_80 >> 0x20);
        }
        pdVar8[3] = (double)CONCAT44(uVar28,uVar27);
        dVar31 = pdVar8[4];
        if (pdVar8[4] <= local_78) {
          dVar31 = local_78;
        }
        pdVar8[4] = dVar31;
        dVar29 = pdVar8[5];
        if (pdVar8[5] <= local_70) {
          dVar29 = local_70;
        }
        pdVar8[5] = dVar29;
        lVar18 = lVar18 + 1;
        lVar13 = lVar13 + 4;
      } while (lVar18 < (int)param_5);
    }
    plVar12 = local_d0;
    lVar7 = param_8;
    local_88 = (dVar29 + dVar26) * 0.5;
    dStack_90 = (dVar31 + dVar30) * 0.5;
    local_98 = ((double)CONCAT44(uVar28,uVar27) + dVar25) * 0.5;
    uVar23 = (uint)local_d0;
    FUN_146bedee6(param_8 + 0x18,&local_98,(ulonglong)local_d0 & 0xffffffff);
    local_88 = (pdVar8[5] - pdVar8[2]) * 0.5;
    dStack_90 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_98 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_98,(ulonglong)plVar12 & 0xffffffff);
    uVar23 = ~uVar23;
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 146c4d1fa FUN_146c4d1fa body=120 status=ok
// SIG undefined FUN_146c4d1fa(void)

void FUN_146c4d1fa(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 8,0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c4d272 FUN_146c4d272 body=224 status=ok
// SIG undefined FUN_146c4d272(void)

void FUN_146c4d272(double *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar1 = *param_2;
  lVar2 = param_2[2];
  lVar5 = (longlong)param_3;
  lVar7 = (longlong)*(int *)(lVar2 + lVar5 * 0xc);
  dVar14 = *(double *)(lVar1 + lVar7 * 0x18);
  dVar15 = *(double *)(lVar1 + 8 + lVar7 * 0x18);
  dVar16 = *(double *)(lVar1 + 0x10 + lVar7 * 0x18);
  bVar4 = false;
  dVar8 = dVar14;
  dVar10 = dVar15;
  dVar12 = dVar16;
  iVar6 = *(int *)(lVar2 + 4 + lVar5 * 0xc);
  do {
    lVar7 = (longlong)iVar6;
    dVar11 = *(double *)(lVar1 + lVar7 * 0x18);
    dVar9 = dVar11;
    if ((dVar8 <= dVar11) && (dVar9 = dVar8, dVar14 < dVar11)) {
      dVar14 = dVar11;
    }
    dVar8 = *(double *)(lVar1 + 8 + lVar7 * 0x18);
    dVar11 = dVar8;
    if ((dVar10 <= dVar8) && (dVar11 = dVar10, dVar15 < dVar8)) {
      dVar15 = dVar8;
    }
    dVar8 = *(double *)(lVar1 + 0x10 + lVar7 * 0x18);
    dVar13 = dVar8;
    if ((dVar12 <= dVar8) && (dVar13 = dVar12, dVar16 < dVar8)) {
      dVar16 = dVar8;
    }
    bVar3 = !bVar4;
    bVar4 = true;
    dVar8 = dVar9;
    dVar10 = dVar11;
    dVar12 = dVar13;
    iVar6 = *(int *)(lVar2 + 8 + lVar5 * 0xc);
  } while (bVar3);
  *param_1 = dVar9;
  param_1[1] = dVar11;
  param_1[2] = dVar13;
  param_1[3] = dVar14;
  param_1[4] = dVar15;
  param_1[5] = dVar16;
  return;
}



// FUNCTION 146c4d352 FUN_146c4d352 body=958 status=ok
// SIG undefined FUN_146c4d352(void)

void FUN_146c4d352(longlong param_1,uint param_2,int *param_3,double *param_4,int *param_5,
                  undefined4 *param_6,longlong param_7)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_1b8 [32];
  int *local_198;
  undefined4 *local_190;
  longlong local_188;
  int *local_178;
  double *local_170;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138 [9];
  double local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_178 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar16) {
    do {
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8)
                        + (ulonglong)(uVar16 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        uVar10 = ~uVar10;
        dVar18 = (double)FUN_146c479c6(param_1,uVar10,local_178);
        bVar17 = *param_4 + 1e-08 < dVar18;
LAB_146c4d5c3:
        uVar13 = (ulonglong)uVar10;
        if (bVar17) goto LAB_146c4d6ca;
      }
      else {
        uVar10 = uVar10 - 1;
        uVar16 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                         (ulonglong)(uVar16 + 1 & 0x1ff) * 4) - 1;
        uVar13 = (ulonglong)uVar16;
        dVar18 = (double)FUN_146c479c6(param_1,uVar10,param_3);
        dVar19 = (double)FUN_146c479c6(param_1,uVar13,param_3);
        if (dVar19 <= dVar18) {
          if (dVar19 <= *param_4 + 1e-08) {
            local_188 = param_7;
            local_190 = param_6;
            local_198 = param_5;
            FUN_146c4d352(param_1,uVar16,local_178,param_4);
            bVar17 = *param_4 + 1e-08 < dVar18;
            goto LAB_146c4d5c3;
          }
          goto LAB_146c4d6ca;
        }
        if (*param_4 + 1e-08 < dVar18) goto LAB_146c4d6ca;
        local_188 = param_7;
        local_190 = param_6;
        local_198 = param_5;
        FUN_146c4d352(param_1,uVar10,local_178,param_4);
        if (*param_4 + 1e-08 < dVar19) goto LAB_146c4d6ca;
      }
      uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar13 >> 9) * 8) +
                        (ulonglong)((uint)uVar13 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar16);
  }
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                  (ulonglong)(uVar16 & 0x1ff) * 4);
  local_170 = param_4;
  if (0 < iVar9) {
    do {
      uVar16 = uVar16 + 1;
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                      (ulonglong)(uVar16 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_7 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_146c4d465:
        lVar5 = (longlong)iVar1;
        lVar8 = **(longlong **)(param_1 + 8);
        lVar6 = (*(longlong **)(param_1 + 8))[2];
        lVar14 = (longlong)*(int *)(lVar6 + lVar5 * 0xc);
        lVar15 = (longlong)*(int *)(lVar6 + 4 + lVar5 * 0xc);
        lVar6 = (longlong)*(int *)(lVar6 + 8 + lVar5 * 0xc);
        local_c8[2] = *(undefined8 *)(lVar8 + 0x10 + lVar14 * 0x18);
        puVar11 = (undefined8 *)(lVar8 + lVar14 * 0x18);
        local_c8[0] = *puVar11;
        local_c8[1] = puVar11[1];
        local_a0 = *(undefined8 *)(lVar8 + 0x10 + lVar15 * 0x18);
        puVar11 = (undefined8 *)(lVar8 + lVar15 * 0x18);
        local_c8[3] = *puVar11;
        uStack_a8 = puVar11[1];
        local_88 = *(undefined8 *)(lVar8 + 0x10 + lVar6 * 0x18);
        puVar11 = (undefined8 *)(lVar8 + lVar6 * 0x18);
        local_98 = *puVar11;
        uStack_90 = puVar11[1];
        local_168 = *local_178;
        iStack_164 = local_178[1];
        iStack_160 = local_178[2];
        iStack_15c = local_178[3];
        local_158 = *(undefined8 *)(local_178 + 4);
        uStack_150 = *(undefined8 *)(local_178 + 6);
        local_148 = local_178[8];
        iStack_144 = local_178[9];
        iStack_140 = local_178[10];
        iStack_13c = local_178[0xb];
        puVar11 = local_c8;
        puVar12 = local_138;
        for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        cVar3 = FUN_146bd80f0(&local_168);
        if ((cVar3 != '\0') && (local_f0 < *local_170)) {
          *local_170 = local_f0;
          *param_5 = iVar1;
          *(undefined8 *)(param_6 + 4) = local_d8;
          *param_6 = local_e8;
          param_6[1] = uStack_e4;
          param_6[2] = uStack_e0;
          param_6[3] = uStack_dc;
        }
      }
      else {
        plVar7 = *(longlong **)(param_7 + 0x20);
        if (*(longlong **)(param_7 + 0x20) == (longlong *)0x0) {
          plVar7 = (longlong *)(param_7 + 0x30);
        }
        local_168 = iVar1;
        uVar4 = (**(code **)(*plVar7 + 8))();
        cVar3 = (*pcVar2)(uVar4,&local_168);
        if (cVar3 != '\0') goto LAB_146c4d465;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
LAB_146c4d6ca:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4d712 FUN_146c4d712 body=894 status=ok
// SIG undefined FUN_146c4d712(void)

undefined8
FUN_146c4d712(longlong param_1,uint param_2,int *param_3,double *param_4,int *param_5,
             longlong param_6)

{
  int iVar1;
  code *pcVar2;
  double *pdVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_188 [32];
  int *local_168;
  longlong local_160;
  double *local_158;
  int *local_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138;
  undefined8 local_130 [15];
  undefined8 local_b8 [4];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_158 = param_4;
  local_150 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar16) {
    do {
      uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8)
                        + (ulonglong)(uVar16 & 0x1ff) * 4);
      if ((int)uVar11 < 0) {
        dVar17 = (double)FUN_146c48540(param_1,~uVar11,local_150);
        uVar11 = ~uVar11;
        if (*local_158 < dVar17) goto LAB_146c4da51;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar16 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                         (ulonglong)(uVar16 + 1 & 0x1ff) * 4) - 1;
        dVar17 = (double)FUN_146c48540(param_1,uVar11,param_3);
        dVar18 = (double)FUN_146c48540(param_1,uVar16,param_3);
        pdVar3 = local_158;
        if (dVar18 <= dVar17) {
          if (*local_158 <= dVar18) goto LAB_146c4da51;
          local_160 = param_6;
          local_168 = param_5;
          FUN_146c4d712(param_1,uVar16,local_150,local_158);
          if (*pdVar3 <= dVar17) goto LAB_146c4da51;
        }
        else {
          if (*local_158 <= dVar17) goto LAB_146c4da51;
          local_160 = param_6;
          local_168 = param_5;
          FUN_146c4d712(param_1,uVar11,local_150,local_158);
          uVar11 = uVar16;
          if (*pdVar3 <= dVar18) goto LAB_146c4da51;
        }
      }
      uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar11 >> 9) * 8)
                        + (ulonglong)(uVar11 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar16);
  }
  iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                   (ulonglong)(uVar16 & 0x1ff) * 4);
  if (0 < iVar10) {
    do {
      uVar16 = uVar16 + 1;
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                      (ulonglong)(uVar16 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_6 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_146c4d810:
        lVar6 = (longlong)iVar1;
        lVar9 = **(longlong **)(param_1 + 8);
        lVar7 = (*(longlong **)(param_1 + 8))[2];
        lVar14 = (longlong)*(int *)(lVar7 + lVar6 * 0xc);
        lVar15 = (longlong)*(int *)(lVar7 + 4 + lVar6 * 0xc);
        lVar7 = (longlong)*(int *)(lVar7 + 8 + lVar6 * 0xc);
        local_b8[2] = *(undefined8 *)(lVar9 + 0x10 + lVar14 * 0x18);
        puVar12 = (undefined8 *)(lVar9 + lVar14 * 0x18);
        local_b8[0] = *puVar12;
        local_b8[1] = puVar12[1];
        local_90 = *(undefined8 *)(lVar9 + 0x10 + lVar15 * 0x18);
        puVar12 = (undefined8 *)(lVar9 + lVar15 * 0x18);
        local_b8[3] = *puVar12;
        uStack_98 = puVar12[1];
        local_78 = *(undefined8 *)(lVar9 + 0x10 + lVar7 * 0x18);
        puVar12 = (undefined8 *)(lVar9 + lVar7 * 0x18);
        local_88 = *puVar12;
        uStack_80 = puVar12[1];
        local_138 = *(undefined8 *)(local_150 + 4);
        local_148 = *local_150;
        iStack_144 = local_150[1];
        iStack_140 = local_150[2];
        iStack_13c = local_150[3];
        puVar12 = local_b8;
        puVar13 = local_130;
        for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        dVar17 = (double)FUN_146bd2a7a(&local_148);
        if (dVar17 < *local_158) {
          *local_158 = dVar17;
          *param_5 = iVar1;
        }
      }
      else {
        plVar8 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar8 = (longlong *)(param_6 + 0x30);
        }
        local_148 = iVar1;
        uVar5 = (**(code **)(*plVar8 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_148);
        if (cVar4 != '\0') goto LAB_146c4d810;
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
LAB_146c4da51:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 146c4da92 FUN_146c4da92 body=63 status=ok
// SIG undefined FUN_146c4da92(void)

void FUN_146c4da92(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c4dad2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,0x10);
  }
  return;
}



// FUNCTION 146c4dad2 FUN_146c4dad2 body=97 status=ok
// SIG undefined FUN_146c4dad2(void)

ulonglong FUN_146c4dad2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,0x10);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146c4db8e FUN_146c4db8e body=290 status=ok
// SIG undefined FUN_146c4db8e(void)

longlong * FUN_146c4db8e(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 4,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 4);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14499148c(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_141724ade(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 << 4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146c4dcb2 FUN_146c4dcb2 body=209 status=ok
// SIG undefined FUN_146c4dcb2(void)

int FUN_146c4dcb2(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 146c4dd84 FUN_146c4dd84 body=132 status=ok
// SIG undefined FUN_146c4dd84(void)

void FUN_146c4dd84(longlong param_1,int param_2)

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



// FUNCTION 146c4de0a FUN_146c4de0a body=132 status=ok
// SIG undefined FUN_146c4de0a(void)

void FUN_146c4de0a(longlong param_1,int param_2)

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



// FUNCTION 146c4de90 FUN_146c4de90 body=68 status=ok
// SIG undefined FUN_146c4de90(void)

longlong FUN_146c4de90(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_146c40926(param_1 + 8,0);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146c4ded4(param_1,param_2);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 146c4ded4 FUN_146c4ded4 body=150 status=ok
// SIG undefined FUN_146c4ded4(void)

undefined8 * FUN_146c4ded4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_146c4df6a(param_1 + 1,param_2 + 1);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x1800);
  memset(_Dst,0,0x1800);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_146c4de0a(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c4df6a FUN_146c4df6a body=79 status=ok
// SIG undefined FUN_146c4df6a(void)

longlong * FUN_146c4df6a(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_146c40926(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146c4dfba FUN_146c4dfba body=132 status=ok
// SIG undefined FUN_146c4dfba(void)

void FUN_146c4dfba(longlong param_1,int param_2)

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



// FUNCTION 146c4e040 FUN_146c4e040 body=68 status=ok
// SIG undefined FUN_146c4e040(void)

longlong FUN_146c4e040(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_146c409ee(param_1 + 8,0);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146c4e084(param_1,param_2);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 146c4e084 FUN_146c4e084 body=150 status=ok
// SIG undefined FUN_146c4e084(void)

undefined8 * FUN_146c4e084(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_146c4e11a(param_1 + 1,param_2 + 1);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x1000);
  memset(_Dst,0,0x1000);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_146c4dfba(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c4e11a FUN_146c4e11a body=79 status=ok
// SIG undefined FUN_146c4e11a(void)

longlong * FUN_146c4e11a(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_146c409ee(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146c4e16a FUN_146c4e16a body=160 status=ok
// SIG undefined FUN_146c4e16a(void)

longlong * FUN_146c4e16a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  if ((int)*(uint *)(param_2 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 != 0) {
    FUN_146c4098e(param_1,uVar2);
    uVar3 = 0;
    do {
      _Dst = (void *)FUN_14001cc68(0x1800,0x10);
      memcpy(_Dst,*(void **)(*param_2 + uVar3 * 8),0x1800);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_146c4de0a(param_1,iVar1);
      }
      *(void **)(*param_1 + (longlong)iVar1 * 8) = _Dst;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return param_1;
}



// FUNCTION 146c4e20c FUN_146c4e20c body=160 status=ok
// SIG undefined FUN_146c4e20c(void)

longlong * FUN_146c4e20c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  if ((int)*(uint *)(param_2 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 != 0) {
    FUN_146c40a56(param_1,uVar2);
    uVar3 = 0;
    do {
      _Dst = (void *)FUN_14001cc68(0x1000,0x10);
      memcpy(_Dst,*(void **)(*param_2 + uVar3 * 8),0x1000);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_146c4dfba(param_1,iVar1);
      }
      *(void **)(*param_1 + (longlong)iVar1 * 8) = _Dst;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return param_1;
}



// FUNCTION 146c4e2ae FUN_146c4e2ae body=77 status=ok
// SIG undefined FUN_146c4e2ae(void)

longlong * FUN_146c4e2ae(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_141067b84(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146c4e2fc FUN_146c4e2fc body=77 status=ok
// SIG undefined FUN_146c4e2fc(void)

longlong * FUN_146c4e2fc(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_141082a16(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146c4e34a FUN_146c4e34a body=77 status=ok
// SIG undefined FUN_146c4e34a(void)

longlong * FUN_146c4e34a(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_141082c26(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146c4e398 FUN_146c4e398 body=79 status=ok
// SIG undefined FUN_146c4e398(void)

undefined8 * FUN_146c4e398(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_146c40926(param_1 + 1,0);
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = *param_2;
  FUN_146c4e16a(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



// FUNCTION 146c4e3e8 FUN_146c4e3e8 body=79 status=ok
// SIG undefined FUN_146c4e3e8(void)

undefined8 * FUN_146c4e3e8(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_146c409ee(param_1 + 1,0);
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = *param_2;
  FUN_146c4e20c(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



// FUNCTION 146c4e438 FUN_146c4e438 body=79 status=ok
// SIG undefined FUN_146c4e438(void)

undefined8 * FUN_146c4e438(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_141082b5c(param_1 + 1,0);
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = *param_2;
  FUN_146c40bf2(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



// FUNCTION 146c4e488 FUN_146c4e488 body=63 status=ok
// SIG undefined FUN_146c4e488(void)

void FUN_146c4e488(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c4e4c8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146c4e4c8 FUN_146c4e4c8 body=97 status=ok
// SIG undefined FUN_146c4e4c8(void)

ulonglong FUN_146c4e4c8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146c4e52a FUN_146c4e52a body=63 status=ok
// SIG undefined FUN_146c4e52a(void)

void FUN_146c4e52a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c4e56a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146c4e56a FUN_146c4e56a body=97 status=ok
// SIG undefined FUN_146c4e56a(void)

ulonglong FUN_146c4e56a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146c4e5cc FUN_146c4e5cc body=76 status=ok
// SIG undefined FUN_146c4e5cc(void)

void FUN_146c4e5cc(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < (int)uVar1) {
    uVar3 = (ulonglong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + uVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
      uVar1 = *(uint *)(param_1 + 1);
    } while ((longlong)uVar3 < (longlong)(int)uVar1);
  }
  if (uVar1 != param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 146c4e618 FUN_146c4e618 body=76 status=ok
// SIG undefined FUN_146c4e618(void)

void FUN_146c4e618(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < (int)uVar1) {
    uVar3 = (ulonglong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + uVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
      uVar1 = *(uint *)(param_1 + 1);
    } while ((longlong)uVar3 < (longlong)(int)uVar1);
  }
  if (uVar1 != param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 146c4e664 FUN_146c4e664 body=163 status=ok
// SIG undefined FUN_146c4e664(void)

void FUN_146c4e664(int *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  
  iVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0x200) {
    iVar1 = param_1[4];
    if (iVar3 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x1800);
      memset(_Dst,0,0x1800);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_146c4de0a(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar3 = *param_1;
    }
    iVar3 = iVar3 + 1;
    *param_1 = iVar3;
    param_1[1] = 0;
    uVar4 = 0;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 8);
  *(undefined4 *)(lVar2 + 8 + (ulonglong)uVar4 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + (ulonglong)uVar4 * 0xc) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146c4e708 FUN_146c4e708 body=152 status=ok
// SIG undefined FUN_146c4e708(void)

void FUN_146c4e708(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar3 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x1000);
      memset(_Dst,0,0x1000);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_146c4dfba(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar3 = 0;
  }
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) + (ulonglong)uVar3 * 8) =
       *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146c4e7a0 FUN_146c4e7a0 body=568 status=ok
// SIG undefined FUN_146c4e7a0(void)

void FUN_146c4e7a0(int *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar5)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar7 = (ulonglong)local_2c * 0x18 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar7,lVar7);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f63e(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c4ed5a(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar3 = param_1 + 1;
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar3);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar3);
      }
    }
    else {
      *piVar3 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c4ec40(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar3 == 0)) {
      iVar6 = *param_1 * 0x200;
      iVar5 = iVar6 + -1 >> 9;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      *param_1 = iVar5;
      param_1[1] = (uint)(iVar6 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4e9f0 FUN_146c4e9f0 body=568 status=ok
// SIG undefined FUN_146c4e9f0(void)

void FUN_146c4e9f0(int *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar5)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar7 = (ulonglong)local_2c * 0x18 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar7,lVar7);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f63e(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c4f09c(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar3 = param_1 + 1;
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar3);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar3);
      }
    }
    else {
      *piVar3 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c4ec40(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar3 == 0)) {
      iVar6 = *param_1 * 0x200;
      iVar5 = iVar6 + -1 >> 9;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      *param_1 = iVar5;
      param_1[1] = (uint)(iVar6 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4ec40 FUN_146c4ec40 body=281 status=ok
// SIG undefined FUN_146c4ec40(void)

void FUN_146c4ec40(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    pcVar6 = (code *)&LAB_146c4f058;
    if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
      pcVar6 = FUN_146c4f06c;
    }
    local_3c = (int)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_3c);
      }
    }
    else {
      local_3c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_141067b84(param_1,local_3c);
    if (0 < local_3c) {
      iVar5 = 0;
      do {
        uVar4 = FUN_14001cc68(0x3000,0x10);
        (*pcVar6)(param_2,uVar4);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_141040c48(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4ed5a FUN_146c4ed5a body=765 status=ok
// SIG undefined FUN_146c4ed5a(void)

void FUN_146c4ed5a(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  size_t _Size;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  void *_Dst_00;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar10 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_68 = (void *)CONCAT44(local_68._4_4_,1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          uVar9 = (uint)uVar10;
          uVar4 = 0x200;
          if (uVar9 < 0x200) {
            uVar4 = uVar9;
          }
          (**(code **)(*param_2 + 0x170))
                    (param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar4 * 0x18);
          uVar10 = (ulonglong)(uVar9 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
    }
    else {
      FUN_141067b84(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = FUN_14001cc68(0x3000,0x10);
        uVar9 = (uint)uVar10;
        uVar4 = 0x200;
        if (uVar9 < 0x200) {
          uVar4 = uVar9;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar6,uVar4 * 0x18);
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_141040c48(param_1,iVar5);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar5 * 8) = uVar6;
        uVar10 = (ulonglong)(uVar9 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_140b463b8(&local_68,uVar10,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_78 = param_3;
    local_70 = param_2;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        iVar5 = 0x200;
        if (param_3 < 0x200) {
          iVar5 = (int)param_3;
        }
        _Size = (ulonglong)(uint)(iVar5 << 3) * 3;
        memcpy(_Dst_00,*(void **)(*param_1 + uVar10 * 8),_Size);
        _Dst_00 = (void *)((longlong)_Dst_00 + _Size);
        param_3 = param_3 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    plVar3 = local_70;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(local_70,local_68,local_78 * 0x18,local_4c);
    if ((*(byte *)(plVar3 + 5) & 1) != 0) {
      FUN_141067b84(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x3000,0x10);
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar10 * 8) * 3);
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_141040c48(param_1,iVar5);
        }
        *(void **)(*param_1 + (longlong)iVar5 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar10 * 0x18);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4f06c FUN_146c4f06c body=48 status=ok
// SIG undefined FUN_146c4f06c(void)

void FUN_146c4f06c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_14480c34d(param_1,param_2 + lVar1);
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x3000);
  return;
}



// FUNCTION 146c4f09c FUN_146c4f09c body=765 status=ok
// SIG undefined FUN_146c4f09c(void)

void FUN_146c4f09c(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  size_t _Size;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  void *_Dst_00;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar10 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          uVar9 = (uint)uVar10;
          uVar4 = 0x200;
          if (uVar9 < 0x200) {
            uVar4 = uVar9;
          }
          (**(code **)(*param_2 + 0x170))
                    (param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar4 * 0x18);
          uVar10 = (ulonglong)(uVar9 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
    }
    else {
      FUN_141067b84(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = FUN_14001cc68(0x3000,0x10);
        uVar9 = (uint)uVar10;
        uVar4 = 0x200;
        if (uVar9 < 0x200) {
          uVar4 = uVar9;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar6,uVar4 * 0x18);
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_141040c48(param_1,iVar5);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar5 * 8) = uVar6;
        uVar10 = (ulonglong)(uVar9 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_140b463b8(&local_68,uVar10,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_78 = param_3;
    local_70 = param_2;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        iVar5 = 0x200;
        if (param_3 < 0x200) {
          iVar5 = (int)param_3;
        }
        _Size = (ulonglong)(uint)(iVar5 << 3) * 3;
        memcpy(_Dst_00,*(void **)(*param_1 + uVar10 * 8),_Size);
        _Dst_00 = (void *)((longlong)_Dst_00 + _Size);
        param_3 = param_3 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    plVar3 = local_70;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(local_70,local_68,local_78 * 0x18,local_4c);
    if ((*(byte *)(plVar3 + 5) & 1) != 0) {
      FUN_141067b84(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x3000,0x10);
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar10 * 8) * 3);
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_141040c48(param_1,iVar5);
        }
        *(void **)(*param_1 + (longlong)iVar5 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar10 * 0x18);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4f39a FUN_146c4f39a body=60 status=ok
// SIG undefined FUN_146c4f39a(void)

longlong FUN_146c4f39a(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_146c40926(param_1 + 8,0);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146bff64e(param_1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 146c4f3d6 FUN_146c4f3d6 body=565 status=ok
// SIG undefined FUN_146c4f3d6(void)

void FUN_146c4f3d6(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 0xc + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c4f972(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c4f9e6(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c4f86a(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = 0;
      if (iVar7 != 0) {
        iVar6 = iVar7 + -1 >> 9;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4f620 FUN_146c4f620 body=565 status=ok
// SIG undefined FUN_146c4f620(void)

void FUN_146c4f620(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 0xc + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c4f972(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c4fce6(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c4f86a(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = 0;
      if (iVar7 != 0) {
        iVar6 = iVar7 + -1 >> 9;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4f86a FUN_146c4f86a body=262 status=ok
// SIG undefined FUN_146c4f86a(void)

void FUN_146c4f86a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_34 = (int)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_146c40926(param_1,local_34);
    if (0 < local_34) {
      iVar5 = 0;
      do {
        uVar4 = FUN_14001cc68(0x1800,0x10);
        (**(code **)(*param_2 + 0x170))(param_2,uVar4,0x1800);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4de0a(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c4f972 FUN_146c4f972 body=115 status=ok
// SIG undefined FUN_146c4f972(void)

void FUN_146c4f972(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  puVar1 = param_1 + 1;
  FUN_146c4e5cc(puVar1,1);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    _Dst = (void *)FUN_14001cc68(0x1800);
    memset(_Dst,0,0x1800);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_146c4de0a(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 146c4f9e6 FUN_146c4f9e6 body=766 status=ok
// SIG undefined FUN_146c4f9e6(void)

void FUN_146c4f9e6(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  size_t _Size;
  uint uVar4;
  undefined8 uVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *_Dst_00;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar8 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)CONCAT44(local_68._4_4_,1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar6 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar6 != 0) {
        uVar9 = 0;
        do {
          uVar7 = (uint)uVar8;
          uVar4 = 0x200;
          if (uVar7 < 0x200) {
            uVar4 = uVar7;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar9 * 8),uVar4 * 0xc)
          ;
          uVar8 = (ulonglong)(uVar7 - 0x200);
          uVar9 = uVar9 + 1;
        } while (uVar6 != uVar9);
      }
    }
    else {
      FUN_146c40926(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar5 = FUN_14001cc68(0x1800,0x10);
        uVar7 = (uint)uVar8;
        uVar4 = 0x200;
        if (uVar7 < 0x200) {
          uVar4 = uVar7;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar5,uVar4 * 0xc);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4de0a(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar5;
        uVar8 = (ulonglong)(uVar7 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146bfab7c(&local_68,uVar8,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_70 = param_3;
    if (uVar6 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar8 = 0;
      do {
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        _Size = (ulonglong)(uint)((int)uVar9 << 2) * 3;
        memcpy(_Dst_00,*(void **)(*param_1 + uVar8 * 8),_Size);
        _Dst_00 = (void *)((longlong)_Dst_00 + _Size);
        param_3 = param_3 - 0x200;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar8 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar8;
    FUN_1416a07d6(param_2,local_68,local_70 * 0xc,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_146c40926(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        _Dst = (void *)FUN_14001cc68(0x1800,0x10);
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar8 * 4) * 3);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4de0a(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8 * 0xc);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4fce6 FUN_146c4fce6 body=766 status=ok
// SIG undefined FUN_146c4fce6(void)

void FUN_146c4fce6(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  size_t _Size;
  uint uVar4;
  undefined8 uVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *_Dst_00;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar8 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar6 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar6 != 0) {
        uVar9 = 0;
        do {
          uVar7 = (uint)uVar8;
          uVar4 = 0x200;
          if (uVar7 < 0x200) {
            uVar4 = uVar7;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar9 * 8),uVar4 * 0xc)
          ;
          uVar8 = (ulonglong)(uVar7 - 0x200);
          uVar9 = uVar9 + 1;
        } while (uVar6 != uVar9);
      }
    }
    else {
      FUN_146c40926(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar5 = FUN_14001cc68(0x1800,0x10);
        uVar7 = (uint)uVar8;
        uVar4 = 0x200;
        if (uVar7 < 0x200) {
          uVar4 = uVar7;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar5,uVar4 * 0xc);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4de0a(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar5;
        uVar8 = (ulonglong)(uVar7 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146bfab7c(&local_68,uVar8,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_70 = param_3;
    if (uVar6 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar8 = 0;
      do {
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        _Size = (ulonglong)(uint)((int)uVar9 << 2) * 3;
        memcpy(_Dst_00,*(void **)(*param_1 + uVar8 * 8),_Size);
        _Dst_00 = (void *)((longlong)_Dst_00 + _Size);
        param_3 = param_3 - 0x200;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar8 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar8;
    FUN_1416a07d6(param_2,local_68,local_70 * 0xc,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_146c40926(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        _Dst = (void *)FUN_14001cc68(0x1800,0x10);
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar8 * 4) * 3);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4de0a(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8 * 0xc);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4ffe6 FUN_146c4ffe6 body=60 status=ok
// SIG undefined FUN_146c4ffe6(void)

longlong FUN_146c4ffe6(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_146c409ee(param_1 + 8,0);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146bff6b0(param_1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 146c50022 FUN_146c50022 body=557 status=ok
// SIG undefined FUN_146c50022(void)

void FUN_146c50022(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 8 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c505ae(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c50622(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c504a6(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = 0;
      if (iVar7 != 0) {
        iVar6 = iVar7 + -1 >> 9;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c50264 FUN_146c50264 body=557 status=ok
// SIG undefined FUN_146c50264(void)

void FUN_146c50264(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 8 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c505ae(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c50960(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c504a6(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = 0;
      if (iVar7 != 0) {
        iVar6 = iVar7 + -1 >> 9;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c504a6 FUN_146c504a6 body=262 status=ok
// SIG undefined FUN_146c504a6(void)

void FUN_146c504a6(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_34 = (int)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_146c409ee(param_1,local_34);
    if (0 < local_34) {
      iVar5 = 0;
      do {
        uVar4 = FUN_14001cc68(0x1000,0x10);
        (**(code **)(*param_2 + 0x170))(param_2,uVar4,0x1000);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4dfba(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c505ae FUN_146c505ae body=115 status=ok
// SIG undefined FUN_146c505ae(void)

void FUN_146c505ae(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  puVar1 = param_1 + 1;
  FUN_146c4e618(puVar1,1);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    _Dst = (void *)FUN_14001cc68(0x1000);
    memset(_Dst,0,0x1000);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_146c4dfba(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 146c50622 FUN_146c50622 body=751 status=ok
// SIG undefined FUN_146c50622(void)

void FUN_146c50622(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined8 uVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  void *_Dst_00;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)CONCAT44(local_68._4_4_,1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar6 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar6 != 0) {
        uVar8 = 0;
        do {
          uVar7 = (uint)uVar9;
          uVar4 = 0x200;
          if (uVar7 < 0x200) {
            uVar4 = uVar7;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar4 << 3);
          uVar9 = (ulonglong)(uVar7 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar6 != uVar8);
      }
    }
    else {
      FUN_146c409ee(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar5 = FUN_14001cc68(0x1000,0x10);
        uVar7 = (uint)uVar9;
        uVar4 = 0x200;
        if (uVar7 < 0x200) {
          uVar4 = uVar7;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar5,uVar4 << 3);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4dfba(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar5;
        uVar9 = (ulonglong)(uVar7 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146c50912(&local_68,uVar9,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_70 = param_3;
    if (uVar6 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar9 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 3);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar9 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar9 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar9;
    FUN_1416a07d6(param_2,local_68,local_70 << 3,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_146c409ee(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        _Dst = (void *)FUN_14001cc68(0x1000,0x10);
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar9 * 8));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4dfba(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar9 * 8);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c50912 FUN_146c50912 body=77 status=ok
// SIG undefined FUN_146c50912(void)

void FUN_146c50912(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140752556();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146bed202();
      return;
    }
  }
  return;
}



// FUNCTION 146c50960 FUN_146c50960 body=751 status=ok
// SIG undefined FUN_146c50960(void)

void FUN_146c50960(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined8 uVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  void *_Dst_00;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar6 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar6 != 0) {
        uVar8 = 0;
        do {
          uVar7 = (uint)uVar9;
          uVar4 = 0x200;
          if (uVar7 < 0x200) {
            uVar4 = uVar7;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar4 << 3);
          uVar9 = (ulonglong)(uVar7 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar6 != uVar8);
      }
    }
    else {
      FUN_146c409ee(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar5 = FUN_14001cc68(0x1000,0x10);
        uVar7 = (uint)uVar9;
        uVar4 = 0x200;
        if (uVar7 < 0x200) {
          uVar4 = uVar7;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar5,uVar4 << 3);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4dfba(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar5;
        uVar9 = (ulonglong)(uVar7 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146c50912(&local_68,uVar9,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_70 = param_3;
    if (uVar6 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar9 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 3);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar9 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar9 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar9;
    FUN_1416a07d6(param_2,local_68,local_70 << 3,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_146c409ee(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        _Dst = (void *)FUN_14001cc68(0x1000,0x10);
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar9 * 8));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4dfba(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar9 * 8);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c50c50 FUN_146c50c50 body=564 status=ok
// SIG undefined FUN_146c50c50(void)

void FUN_146c50c50(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 0xc + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f522(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c51200(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c510e8(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c50e9c FUN_146c50e9c body=564 status=ok
// SIG undefined FUN_146c50e9c(void)

void FUN_146c50e9c(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 0xc + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f522(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c51566(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c510e8(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c510e8 FUN_146c510e8 body=279 status=ok
// SIG undefined FUN_146c510e8(void)

void FUN_146c510e8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  void *_Dst;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_34 = (int)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_141082a16(param_1,local_34);
    if (0 < local_34) {
      iVar5 = 0;
      do {
        uVar4 = 0;
        _Dst = (void *)FUN_14001cc68(0x1800,0x10);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff),0x1800);
        (**(code **)(*param_2 + 0x170))(param_2,_Dst,0x1800);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3d20(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c51200 FUN_146c51200 body=789 status=ok
// SIG undefined FUN_146c51200(void)

void FUN_146c51200(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  size_t _Size;
  uint uVar4;
  void *pvVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)CONCAT44(local_68._4_4_,1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar10 = 0;
        do {
          uVar8 = (uint)uVar9;
          uVar4 = 0x200;
          if (uVar8 < 0x200) {
            uVar4 = uVar8;
          }
          (**(code **)(*param_2 + 0x170))
                    (param_2,*(undefined8 *)(*param_1 + uVar10 * 8),uVar4 * 0xc);
          uVar9 = (ulonglong)(uVar8 - 0x200);
          uVar10 = uVar10 + 1;
        } while (uVar7 != uVar10);
      }
    }
    else {
      FUN_141082a16(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        pvVar5 = (void *)FUN_14001cc68(0x1800,0x10);
        memset(pvVar5,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x1800);
        uVar8 = (uint)uVar9;
        uVar4 = 0x200;
        if (uVar8 < 0x200) {
          uVar4 = uVar8;
        }
        (**(code **)(*param_2 + 0x170))(param_2,pvVar5,uVar4 * 0xc);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3d20(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = pvVar5;
        uVar9 = (ulonglong)(uVar8 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146c51516(&local_68,uVar9,1);
    param_3 = param_3 & 0xffffffff;
    pvVar5 = local_68;
    local_70 = param_3;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar9 = 0;
      do {
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        _Size = (ulonglong)(uint)((int)uVar10 << 2) * 3;
        memcpy(pvVar5,*(void **)(*param_1 + uVar9 * 8),_Size);
        pvVar5 = (void *)((longlong)pvVar5 + _Size);
        param_3 = param_3 - 0x200;
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar9 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar9;
    FUN_1416a07d6(param_2,local_68,local_70 * 0xc,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_141082a16(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        _Dst = (void *)FUN_14001cc68(0x1800,0x10);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x1800);
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        memcpy(_Dst,pvVar5,(ulonglong)(uint)((int)uVar9 * 4) * 3);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3d20(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        pvVar5 = (void *)((longlong)pvVar5 + uVar9 * 0xc);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c51516 FUN_146c51516 body=78 status=ok
// SIG undefined FUN_146c51516(void)

void FUN_146c51516(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bd78c8();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146bd795c();
      return;
    }
  }
  return;
}



// FUNCTION 146c51566 FUN_146c51566 body=789 status=ok
// SIG undefined FUN_146c51566(void)

void FUN_146c51566(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  size_t _Size;
  uint uVar4;
  void *pvVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar10 = 0;
        do {
          uVar8 = (uint)uVar9;
          uVar4 = 0x200;
          if (uVar8 < 0x200) {
            uVar4 = uVar8;
          }
          (**(code **)(*param_2 + 0x170))
                    (param_2,*(undefined8 *)(*param_1 + uVar10 * 8),uVar4 * 0xc);
          uVar9 = (ulonglong)(uVar8 - 0x200);
          uVar10 = uVar10 + 1;
        } while (uVar7 != uVar10);
      }
    }
    else {
      FUN_141082a16(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        pvVar5 = (void *)FUN_14001cc68(0x1800,0x10);
        memset(pvVar5,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x1800);
        uVar8 = (uint)uVar9;
        uVar4 = 0x200;
        if (uVar8 < 0x200) {
          uVar4 = uVar8;
        }
        (**(code **)(*param_2 + 0x170))(param_2,pvVar5,uVar4 * 0xc);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3d20(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = pvVar5;
        uVar9 = (ulonglong)(uVar8 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146c51516(&local_68,uVar9,1);
    param_3 = param_3 & 0xffffffff;
    pvVar5 = local_68;
    local_70 = param_3;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar9 = 0;
      do {
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        _Size = (ulonglong)(uint)((int)uVar10 << 2) * 3;
        memcpy(pvVar5,*(void **)(*param_1 + uVar9 * 8),_Size);
        pvVar5 = (void *)((longlong)pvVar5 + _Size);
        param_3 = param_3 - 0x200;
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar9 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar9;
    FUN_1416a07d6(param_2,local_68,local_70 * 0xc,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_141082a16(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        _Dst = (void *)FUN_14001cc68(0x1800,0x10);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x1800);
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        memcpy(_Dst,pvVar5,(ulonglong)(uint)((int)uVar9 * 4) * 3);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3d20(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        pvVar5 = (void *)((longlong)pvVar5 + uVar9 * 0xc);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5187c FUN_146c5187c body=568 status=ok
// SIG undefined FUN_146c5187c(void)

void FUN_146c5187c(int *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar5)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar7 = (ulonglong)local_2c * 0x18 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar7,lVar7);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f63e(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c51acc(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar3 = param_1 + 1;
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar3);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar3);
      }
    }
    else {
      *piVar3 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c4ec40(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar3 == 0)) {
      iVar6 = *param_1 * 0x200;
      iVar5 = iVar6 + -1 >> 9;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      *param_1 = iVar5;
      param_1[1] = (uint)(iVar6 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c51acc FUN_146c51acc body=765 status=ok
// SIG undefined FUN_146c51acc(void)

void FUN_146c51acc(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  size_t _Size;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  void *_Dst_00;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar10 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
          uVar9 = (uint)uVar10;
          uVar4 = 0x200;
          if (uVar9 < 0x200) {
            uVar4 = uVar9;
          }
          (**(code **)(*param_2 + 0x170))
                    (param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar4 * 0x18);
          uVar10 = (ulonglong)(uVar9 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
    }
    else {
      FUN_141067b84(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = FUN_14001cc68(0x3000,0x10);
        uVar9 = (uint)uVar10;
        uVar4 = 0x200;
        if (uVar9 < 0x200) {
          uVar4 = uVar9;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar6,uVar4 * 0x18);
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_141040c48(param_1,iVar5);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar5 * 8) = uVar6;
        uVar10 = (ulonglong)(uVar9 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_140b463b8(&local_68,uVar10,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_78 = param_3;
    local_70 = param_2;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        iVar5 = 0x200;
        if (param_3 < 0x200) {
          iVar5 = (int)param_3;
        }
        _Size = (ulonglong)(uint)(iVar5 << 3) * 3;
        memcpy(_Dst_00,*(void **)(*param_1 + uVar10 * 8),_Size);
        _Dst_00 = (void *)((longlong)_Dst_00 + _Size);
        param_3 = param_3 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    plVar3 = local_70;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(local_70,local_68,local_78 * 0x18,local_4c);
    if ((*(byte *)(plVar3 + 5) & 1) != 0) {
      FUN_141067b84(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        _Dst = (void *)FUN_14001cc68(0x3000,0x10);
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar10 * 8) * 3);
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_141040c48(param_1,iVar5);
        }
        *(void **)(*param_1 + (longlong)iVar5 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar10 * 0x18);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c51dca FUN_146c51dca body=279 status=ok
// SIG undefined FUN_146c51dca(void)

void FUN_146c51dca(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = *(byte *)(param_1 + 0x18);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)bVar2;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar5 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar5 = local_2c;
      }
    }
    else {
      uVar5 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar5 == 0) goto LAB_146c51e8a;
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar5 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar5 = local_2c;
      }
    }
    else {
      uVar5 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar5 == 0) {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        FUN_146c40926(param_1 + 8,0);
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_1400020a8();
        }
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      goto LAB_146c51e8a;
    }
    if (bVar2 == 0) {
      FUN_146c4f39a(param_1);
    }
  }
  FUN_146c51ee2(param_1,param_2);
LAB_146c51e8a:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c51ee2 FUN_146c51ee2 body=565 status=ok
// SIG undefined FUN_146c51ee2(void)

void FUN_146c51ee2(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 0xc + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c4f972(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c5212c(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c4f86a(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = 0;
      if (iVar7 != 0) {
        iVar6 = iVar7 + -1 >> 9;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c5212c FUN_146c5212c body=766 status=ok
// SIG undefined FUN_146c5212c(void)

void FUN_146c5212c(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  size_t _Size;
  uint uVar4;
  undefined8 uVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *_Dst_00;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar8 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar6 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar6 != 0) {
        uVar9 = 0;
        do {
          uVar7 = (uint)uVar8;
          uVar4 = 0x200;
          if (uVar7 < 0x200) {
            uVar4 = uVar7;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar9 * 8),uVar4 * 0xc)
          ;
          uVar8 = (ulonglong)(uVar7 - 0x200);
          uVar9 = uVar9 + 1;
        } while (uVar6 != uVar9);
      }
    }
    else {
      FUN_146c40926(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar5 = FUN_14001cc68(0x1800,0x10);
        uVar7 = (uint)uVar8;
        uVar4 = 0x200;
        if (uVar7 < 0x200) {
          uVar4 = uVar7;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar5,uVar4 * 0xc);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4de0a(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar5;
        uVar8 = (ulonglong)(uVar7 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146bfab7c(&local_68,uVar8,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_70 = param_3;
    if (uVar6 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar8 = 0;
      do {
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        _Size = (ulonglong)(uint)((int)uVar9 << 2) * 3;
        memcpy(_Dst_00,*(void **)(*param_1 + uVar8 * 8),_Size);
        _Dst_00 = (void *)((longlong)_Dst_00 + _Size);
        param_3 = param_3 - 0x200;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar8 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar8;
    FUN_1416a07d6(param_2,local_68,local_70 * 0xc,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_146c40926(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        _Dst = (void *)FUN_14001cc68(0x1800,0x10);
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar8 * 4) * 3);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4de0a(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8 * 0xc);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5242c FUN_146c5242c body=279 status=ok
// SIG undefined FUN_146c5242c(void)

void FUN_146c5242c(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = *(byte *)(param_1 + 0x18);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)bVar2;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar5 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar5 = local_2c;
      }
    }
    else {
      uVar5 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar5 == 0) goto LAB_146c524ec;
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar5 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar5 = local_2c;
      }
    }
    else {
      uVar5 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar5 == 0) {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        FUN_146c409ee(param_1 + 8,0);
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_1400020a8();
        }
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      goto LAB_146c524ec;
    }
    if (bVar2 == 0) {
      FUN_146c4ffe6(param_1);
    }
  }
  FUN_146c52544(param_1,param_2);
LAB_146c524ec:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c52544 FUN_146c52544 body=557 status=ok
// SIG undefined FUN_146c52544(void)

void FUN_146c52544(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 8 + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c505ae(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c52786(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c504a6(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = 0;
      if (iVar7 != 0) {
        iVar6 = iVar7 + -1 >> 9;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c52786 FUN_146c52786 body=751 status=ok
// SIG undefined FUN_146c52786(void)

void FUN_146c52786(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined8 uVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  void *_Dst_00;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar6 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar6 != 0) {
        uVar8 = 0;
        do {
          uVar7 = (uint)uVar9;
          uVar4 = 0x200;
          if (uVar7 < 0x200) {
            uVar4 = uVar7;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar8 * 8),uVar4 << 3);
          uVar9 = (ulonglong)(uVar7 - 0x200);
          uVar8 = uVar8 + 1;
        } while (uVar6 != uVar8);
      }
    }
    else {
      FUN_146c409ee(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar5 = FUN_14001cc68(0x1000,0x10);
        uVar7 = (uint)uVar9;
        uVar4 = 0x200;
        if (uVar7 < 0x200) {
          uVar4 = uVar7;
        }
        (**(code **)(*param_2 + 0x170))(param_2,uVar5,uVar4 << 3);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4dfba(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar5;
        uVar9 = (ulonglong)(uVar7 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146c50912(&local_68,uVar9,1);
    param_3 = param_3 & 0xffffffff;
    _Dst_00 = local_68;
    local_70 = param_3;
    if (uVar6 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar9 = 0;
      do {
        uVar8 = 0x200;
        if (param_3 < 0x200) {
          uVar8 = param_3;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 3);
        memcpy(_Dst_00,*(void **)(*param_1 + uVar9 * 8),uVar8);
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar8);
        param_3 = param_3 - 0x200;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar9 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar9;
    FUN_1416a07d6(param_2,local_68,local_70 << 3,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_146c409ee(param_1,uVar6);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        _Dst = (void *)FUN_14001cc68(0x1000,0x10);
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        memcpy(_Dst,_Dst_00,(ulonglong)(uint)((int)uVar9 * 8));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146c4dfba(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        _Dst_00 = (void *)((longlong)_Dst_00 + uVar9 * 8);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c52a76 FUN_146c52a76 body=564 status=ok
// SIG undefined FUN_146c52a76(void)

void FUN_146c52a76(int *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar6)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    lVar2 = (ulonglong)local_2c * 0xc + 4;
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f522(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c52cc2(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar4 = param_1 + 1;
    piVar5 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar4);
      }
    }
    else {
      *piVar4 = *piVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c510e8(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar4 == 0)) {
      iVar7 = *param_1 * 0x200;
      iVar6 = iVar7 + -1 >> 9;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      *param_1 = iVar6;
      param_1[1] = (uint)(iVar7 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c52cc2 FUN_146c52cc2 body=789 status=ok
// SIG undefined FUN_146c52cc2(void)

void FUN_146c52cc2(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  size_t _Size;
  uint uVar4;
  void *pvVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = (((uint)(param_3 >> 9) & 0x7fffff) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar10 = 0;
        do {
          uVar8 = (uint)uVar9;
          uVar4 = 0x200;
          if (uVar8 < 0x200) {
            uVar4 = uVar8;
          }
          (**(code **)(*param_2 + 0x170))
                    (param_2,*(undefined8 *)(*param_1 + uVar10 * 8),uVar4 * 0xc);
          uVar9 = (ulonglong)(uVar8 - 0x200);
          uVar10 = uVar10 + 1;
        } while (uVar7 != uVar10);
      }
    }
    else {
      FUN_141082a16(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        pvVar5 = (void *)FUN_14001cc68(0x1800,0x10);
        memset(pvVar5,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x1800);
        uVar8 = (uint)uVar9;
        uVar4 = 0x200;
        if (uVar8 < 0x200) {
          uVar4 = uVar8;
        }
        (**(code **)(*param_2 + 0x170))(param_2,pvVar5,uVar4 * 0xc);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3d20(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = pvVar5;
        uVar9 = (ulonglong)(uVar8 - 0x200);
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146c51516(&local_68,uVar9,1);
    param_3 = param_3 & 0xffffffff;
    pvVar5 = local_68;
    local_70 = param_3;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar9 = 0;
      do {
        uVar10 = 0x200;
        if (param_3 < 0x200) {
          uVar10 = param_3;
        }
        _Size = (ulonglong)(uint)((int)uVar10 << 2) * 3;
        memcpy(pvVar5,*(void **)(*param_1 + uVar9 * 8),_Size);
        pvVar5 = (void *)((longlong)pvVar5 + _Size);
        param_3 = param_3 - 0x200;
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar9 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar9;
    FUN_1416a07d6(param_2,local_68,local_70 * 0xc,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_141082a16(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        _Dst = (void *)FUN_14001cc68(0x1800,0x10);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x1800);
        uVar9 = 0x200;
        if (param_3 < 0x200) {
          uVar9 = param_3;
        }
        memcpy(_Dst,pvVar5,(ulonglong)(uint)((int)uVar9 * 4) * 3);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3d20(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        pvVar5 = (void *)((longlong)pvVar5 + uVar9 * 0xc);
        param_3 = param_3 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c52fd8 FUN_146c52fd8 body=277 status=ok
// SIG undefined FUN_146c52fd8(void)

void FUN_146c52fd8(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = *(byte *)(param_1 + 0x18);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)bVar2;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar5 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar5 = local_2c;
      }
    }
    else {
      uVar5 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar5 == 0) goto LAB_146c530b5;
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar5 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar5 = local_2c;
      }
    }
    else {
      uVar5 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar5 == 0) {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        FUN_141082b5c(param_1 + 8,0);
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_1400020a8();
        }
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      goto LAB_146c530b5;
    }
    if (bVar2 == 0) {
      FUN_146c061a4(param_1);
    }
  }
  FUN_146c45ad4(param_1,param_2);
LAB_146c530b5:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c530ee FUN_146c530ee body=556 status=ok
// SIG undefined FUN_146c530ee(void)

void FUN_146c530ee(int *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar5)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    uVar7 = (ulonglong)local_2c << 4 | 4;
    (**(code **)(*param_2 + 0x10))(param_2,uVar7,uVar7);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f71e(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c5344a(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar3 = param_1 + 1;
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar3);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar3);
      }
    }
    else {
      *piVar3 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c53332(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar3 == 0)) {
      iVar6 = *param_1 * 0x200;
      iVar5 = iVar6 + -1 >> 9;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      *param_1 = iVar5;
      param_1[1] = (uint)(iVar6 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c53332 FUN_146c53332 body=279 status=ok
// SIG undefined FUN_146c53332(void)

void FUN_146c53332(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  void *_Dst;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_34 = (int)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_141082c26(param_1,local_34);
    if (0 < local_34) {
      iVar5 = 0;
      do {
        uVar4 = 0;
        _Dst = (void *)FUN_14001cc68(0x2000,0x10);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff),0x2000);
        (**(code **)(*param_2 + 0x170))(param_2,_Dst,0x2000);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3e82(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c5344a FUN_146c5344a body=769 status=ok
// SIG undefined FUN_146c5344a(void)

void FUN_146c5344a(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  void *pvVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = ((param_3 >> 9) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar9 = 0;
        do {
          uVar4 = 0x200;
          if (param_3 < 0x200) {
            uVar4 = param_3;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar9 * 8),uVar4 << 4);
          param_3 = param_3 - 0x200;
          uVar9 = uVar9 + 1;
        } while (uVar7 != uVar9);
      }
    }
    else {
      FUN_141082c26(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        pvVar5 = (void *)FUN_14001cc68(0x2000,0x10);
        memset(pvVar5,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x2000);
        uVar4 = 0x200;
        if (param_3 < 0x200) {
          uVar4 = param_3;
        }
        (**(code **)(*param_2 + 0x170))(param_2,pvVar5,uVar4 << 4);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3e82(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = pvVar5;
        param_3 = param_3 - 0x200;
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146c5374c(&local_68,param_3);
    uVar9 = (ulonglong)param_3;
    pvVar5 = local_68;
    local_70 = uVar9;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        uVar8 = 0x200;
        if (uVar9 < 0x200) {
          uVar8 = uVar9;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 4);
        memcpy(pvVar5,*(void **)(*param_1 + uVar10 * 8),uVar8);
        pvVar5 = (void *)((longlong)pvVar5 + uVar8);
        uVar9 = uVar9 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(param_2,local_68,local_70 << 4,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_141082c26(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        _Dst = (void *)FUN_14001cc68(0x2000,0x10);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x2000);
        uVar10 = 0x200;
        if (uVar9 < 0x200) {
          uVar10 = uVar9;
        }
        memcpy(_Dst,pvVar5,(ulonglong)(uint)((int)uVar10 << 4));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3e82(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        pvVar5 = (void *)((longlong)pvVar5 + uVar10 * 0x10);
        uVar9 = uVar9 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c5374c FUN_146c5374c body=71 status=ok
// SIG undefined FUN_146c5374c(void)

void FUN_146c5374c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c53794();
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
      FUN_146c5381a();
      return;
    }
  }
  return;
}



// FUNCTION 146c53794 FUN_146c53794 body=132 status=ok
// SIG undefined FUN_146c53794(void)

void FUN_146c53794(longlong param_1,int param_2)

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



// FUNCTION 146c5381a FUN_146c5381a body=62 status=ok
// SIG undefined FUN_146c5381a(void)

void FUN_146c5381a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c53858(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 146c53858 FUN_146c53858 body=93 status=ok
// SIG undefined FUN_146c53858(void)

ulonglong FUN_146c53858(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146c538b6 FUN_146c538b6 body=556 status=ok
// SIG undefined FUN_146c538b6(void)

void FUN_146c538b6(int *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar5)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    uVar7 = (ulonglong)local_2c << 4 | 4;
    (**(code **)(*param_2 + 0x10))(param_2,uVar7,uVar7);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f71e(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c53d3e(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar3 = param_1 + 1;
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar3);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar3);
      }
    }
    else {
      *piVar3 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c53332(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar3 == 0)) {
      iVar6 = *param_1 * 0x200;
      iVar5 = iVar6 + -1 >> 9;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      *param_1 = iVar5;
      param_1[1] = (uint)(iVar6 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c53afa FUN_146c53afa body=556 status=ok
// SIG undefined FUN_146c53afa(void)

void FUN_146c53afa(int *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar5)) {
    local_2c = *param_1 * 0x200 + param_1[1];
    uVar7 = (ulonglong)local_2c << 4 | 4;
    (**(code **)(*param_2 + 0x10))(param_2,uVar7,uVar7);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (local_2c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_14582f71e(param_1);
      }
    }
    else {
      *param_1 = (int)(local_2c - 1) >> 9;
      param_1[1] = (local_2c - 1 & 0x1ff) + 1;
      FUN_146c54040(param_1 + 2,param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *piVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar3 = param_1 + 1;
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar3);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar3);
      }
    }
    else {
      *piVar3 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c53332(param_1 + 2,param_2);
    if ((*param_1 != 0) && (*piVar3 == 0)) {
      iVar6 = *param_1 * 0x200;
      iVar5 = iVar6 + -1 >> 9;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      *param_1 = iVar5;
      param_1[1] = (uint)(iVar6 != 0) << 9;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c53d3e FUN_146c53d3e body=769 status=ok
// SIG undefined FUN_146c53d3e(void)

void FUN_146c53d3e(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  void *pvVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)CONCAT44(local_68._4_4_,1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = ((param_3 >> 9) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar9 = 0;
        do {
          uVar4 = 0x200;
          if (param_3 < 0x200) {
            uVar4 = param_3;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar9 * 8),uVar4 << 4);
          param_3 = param_3 - 0x200;
          uVar9 = uVar9 + 1;
        } while (uVar7 != uVar9);
      }
    }
    else {
      FUN_141082c26(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        pvVar5 = (void *)FUN_14001cc68(0x2000,0x10);
        memset(pvVar5,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x2000);
        uVar4 = 0x200;
        if (param_3 < 0x200) {
          uVar4 = param_3;
        }
        (**(code **)(*param_2 + 0x170))(param_2,pvVar5,uVar4 << 4);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3e82(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = pvVar5;
        param_3 = param_3 - 0x200;
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146c5374c(&local_68,param_3);
    uVar9 = (ulonglong)param_3;
    pvVar5 = local_68;
    local_70 = uVar9;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        uVar8 = 0x200;
        if (uVar9 < 0x200) {
          uVar8 = uVar9;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 4);
        memcpy(pvVar5,*(void **)(*param_1 + uVar10 * 8),uVar8);
        pvVar5 = (void *)((longlong)pvVar5 + uVar8);
        uVar9 = uVar9 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(param_2,local_68,local_70 << 4,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_141082c26(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        _Dst = (void *)FUN_14001cc68(0x2000,0x10);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x2000);
        uVar10 = 0x200;
        if (uVar9 < 0x200) {
          uVar10 = uVar9;
        }
        memcpy(_Dst,pvVar5,(ulonglong)(uint)((int)uVar10 << 4));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3e82(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        pvVar5 = (void *)((longlong)pvVar5 + uVar10 * 0x10);
        uVar9 = uVar9 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c54040 FUN_146c54040 body=769 status=ok
// SIG undefined FUN_146c54040(void)

void FUN_146c54040(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  void *pvVar5;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  ulonglong local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    uVar4 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_68;
    }
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = ((param_3 >> 9) + 1) - (uint)((param_3 & 0x1ff) == 0);
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (uVar7 != 0) {
        uVar9 = 0;
        do {
          uVar4 = 0x200;
          if (param_3 < 0x200) {
            uVar4 = param_3;
          }
          (**(code **)(*param_2 + 0x170))(param_2,*(undefined8 *)(*param_1 + uVar9 * 8),uVar4 << 4);
          param_3 = param_3 - 0x200;
          uVar9 = uVar9 + 1;
        } while (uVar7 != uVar9);
      }
    }
    else {
      FUN_141082c26(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        pvVar5 = (void *)FUN_14001cc68(0x2000,0x10);
        memset(pvVar5,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x2000);
        uVar4 = 0x200;
        if (param_3 < 0x200) {
          uVar4 = param_3;
        }
        (**(code **)(*param_2 + 0x170))(param_2,pvVar5,uVar4 << 4);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3e82(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = pvVar5;
        param_3 = param_3 - 0x200;
      }
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_146c5374c(&local_68,param_3);
    uVar9 = (ulonglong)param_3;
    pvVar5 = local_68;
    local_70 = uVar9;
    if (uVar7 != 0 && (*(byte *)(param_2 + 5) & 1) == 0) {
      uVar10 = 0;
      do {
        uVar8 = 0x200;
        if (uVar9 < 0x200) {
          uVar8 = uVar9;
        }
        uVar8 = (ulonglong)(uint)((int)uVar8 << 4);
        memcpy(pvVar5,*(void **)(*param_1 + uVar10 * 8),uVar8);
        pvVar5 = (void *)((longlong)pvVar5 + uVar8);
        uVar9 = uVar9 - 0x200;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    FUN_1401a700c(&local_4c,0x105);
    uVar10 = (ulonglong)local_4c;
    FUN_1401a700c(&local_4c,0x105);
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = uVar10;
    FUN_1416a07d6(param_2,local_68,local_70 << 4,local_4c);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_141082c26(param_1,uVar7);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar6 = 0;
        _Dst = (void *)FUN_14001cc68(0x2000,0x10);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x2000);
        uVar10 = 0x200;
        if (uVar9 < 0x200) {
          uVar10 = uVar9;
        }
        memcpy(_Dst,pvVar5,(ulonglong)(uint)((int)uVar10 << 4));
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3e82(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        pvVar5 = (void *)((longlong)pvVar5 + uVar10 * 0x10);
        uVar9 = uVar9 - 0x200;
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c54342 FUN_146c54342 body=62 status=ok
// SIG undefined FUN_146c54342(void)

void FUN_146c54342(longlong param_1,int param_2)

{
  FUN_1457ed2a0();
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1447ab16c(param_1,param_2);
  return;
}



// FUNCTION 146c54382 FUN_146c54382 body=62 status=ok
// SIG undefined FUN_146c54382(void)

void FUN_146c54382(longlong param_1,int param_2)

{
  FUN_1457ed25e();
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1447ab16c(param_1,param_2);
  return;
}



// FUNCTION 146c543c2 FUN_146c543c2 body=100 status=ok
// SIG undefined FUN_146c543c2(void)

void FUN_146c543c2(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x78,0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0x60,0);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1457ed392(param_1 + 0x48,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14117c64e(param_1 + 8);
  return;
}



// FUNCTION 146c54426 FUN_146c54426 body=48 status=ok
// SIG undefined FUN_146c54426(void)

void FUN_146c54426(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146c54456 FUN_146c54456 body=322 status=ok
// SIG undefined FUN_146c54456(void)

void FUN_146c54456(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 146c5459a FUN_146c5459a body=286 status=ok
// SIG undefined FUN_146c5459a(void)

void FUN_146c5459a(longlong *param_1)

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
      puVar1 = (undefined8 *)(*local_60 + (longlong)iStack_44 * 0x18 + 8);
      FUN_146c55ce2(puVar1,*puVar1);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c546ba FUN_146c546ba body=322 status=ok
// SIG undefined FUN_146c546ba(void)

void FUN_146c546ba(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 146c547fe FUN_146c547fe body=290 status=ok
// SIG undefined FUN_146c547fe(void)

void FUN_146c547fe(longlong *param_1)

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
      puVar1 = *(undefined8 **)(*local_60 + 8 + (longlong)iStack_44 * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c54922 FUN_146c54922 body=132 status=ok
// SIG undefined FUN_146c54922(void)

void FUN_146c54922(longlong param_1,int param_2)

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



// FUNCTION 146c549a7 FUN_146c549a7 body=201 status=ok
// SIG undefined FUN_146c549a7(void)

ulonglong FUN_146c549a7(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_1[1];
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if ((longlong)(int)lVar2 == 0) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    lVar1 = *param_1;
    uVar4 = CONCAT71(uVar5,1);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) != 0) {
        local_68 = (undefined4)*param_2;
        uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_60 = (undefined4)param_2[1];
        uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
        bVar3 = FUN_14002f804(*(longlong *)(lVar1 + lVar6),&local_68,0);
        uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar3);
      }
      if ((param_2[1] != -1) &&
         ((param_2[1] == 0 ||
          (QueryPerformanceCounter(&local_50),
          (ulonglong)(param_2[1] + *param_2) < (ulonglong)local_50)))) {
        uVar4 = 0;
        break;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146c54a72 FUN_146c54a72 body=255 status=ok
// SIG undefined FUN_146c54a72(void)

undefined8 * FUN_146c54a72(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (0x100 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x000146c54ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0xb8,0x10);
    return puVar5;
  }
  puVar3 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
  puVar5 = (undefined8 *)puVar3[1];
  if (puVar5 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar3 + 2) + -1;
    goto LAB_146c54a9e;
  }
  puVar5 = (undefined8 *)*puVar3;
  if (puVar5 == (undefined8 *)0x0) {
    uVar2 = FUN_14470efbc(&DAT_14c896180);
    if (uVar2 == 0) {
      puVar3[1] = 0;
LAB_146c54b44:
      puVar5 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar3[1] = puVar5;
      iVar1 = 0xff;
      puVar6 = puVar5;
      do {
        puVar4 = puVar6 + 0x20;
        *puVar6 = puVar4;
        iVar1 = iVar1 + -1;
        puVar6 = puVar4;
      } while (iVar1 != 0);
      goto LAB_146c54ae3;
    }
    puVar5 = *(undefined8 **)
              (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
              (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
    puVar3[1] = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_146c54b44;
  }
  else {
    puVar3[1] = puVar5;
    puVar4 = puVar3;
LAB_146c54ae3:
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar3 + 2) = 0x100;
  iVar1 = 0xff;
LAB_146c54a9e:
  puVar3[1] = *puVar5;
  *(int *)(puVar3 + 2) = iVar1;
  return puVar5;
}



// FUNCTION 146c54b72 FUN_146c54b72 body=45 status=ok
// SIG undefined FUN_146c54b72(void)

undefined8 FUN_146c54b72(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_146c54c12(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 146c54ba0 FUN_146c54ba0 body=75 status=ok
// SIG undefined FUN_146c54ba0(void)

void FUN_146c54ba0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
  plVar3 = *(longlong **)(param_1 + 0xb0);
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
                    /* WARNING: Could not recover jumptable at 0x000146c54be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146c54bec FUN_146c54bec body=38 status=ok
// SIG undefined FUN_146c54bec(void)

undefined8 FUN_146c54bec(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c54c12 FUN_146c54c12 body=181 status=ok
// SIG undefined FUN_146c54c12(void)

void FUN_146c54c12(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 < 0x101) {
    plVar2 = (longlong *)FUN_144a23e24();
    if ((int)plVar2[2] < 0x100) {
      lVar3 = plVar2[1];
    }
    else {
      lVar3 = *plVar2;
      if (lVar3 != 0) {
        uVar1 = FUN_14493c560();
        if (uVar1 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
        }
        *(longlong *)(lVar4 + 8) = lVar3;
        FUN_144a8fde6(&DAT_14c896180,uVar1);
      }
      *plVar2 = plVar2[1];
      *(undefined4 *)(plVar2 + 2) = 0;
      lVar3 = 0;
    }
    *param_1 = lVar3;
    plVar2[1] = (longlong)param_1;
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146c54caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  return;
}



// FUNCTION 146c54cc8 FUN_146c54cc8 body=122 status=ok
// SIG undefined FUN_146c54cc8(void)

longlong * FUN_146c54cc8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar1[1] = 0;
  *plVar1 = (longlong)&PTR_FUN_149f3bf50;
  FUN_141040b84(plVar1 + 3);
  plVar1[2] = param_2;
  FUN_1411b3144(plVar1,0);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_1);
  plVar1[3] = *(longlong *)(param_1 + 0x18);
  FUN_146bedfa8(plVar1 + 4,param_1 + 0x20);
  return plVar1;
}



// FUNCTION 146c54d42 FUN_146c54d42 body=88 status=ok
// SIG undefined FUN_146c54d42(void)

undefined8 * FUN_146c54d42(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3bf50;
  FUN_141040b84(puVar1 + 3);
  puVar1[2] = param_2;
  FUN_1411b3144(puVar1,0);
  FUN_1411b3144(puVar1,0);
  return puVar1;
}



// FUNCTION 146c54d9a FUN_146c54d9a body=205 status=ok
// SIG undefined FUN_146c54d9a(void)

longlong * FUN_146c54d9a(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar3[1] = 0;
  *plVar3 = (longlong)&PTR_FUN_149f3bf50;
  FUN_141040b84(plVar3 + 3);
  plVar3[2] = param_3;
  FUN_1411b3144(plVar3,0);
  FUN_1411b3144(plVar3,0);
  (**(code **)(*plVar3 + 0xb8))(plVar3,param_1);
  iVar1 = *(int *)(param_2 + 0x18);
  if (0 < (longlong)iVar1) {
    uVar4 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_2 + 0x10) + uVar4 * 4);
      if (uVar2 != 0xffffffff) {
        *(undefined4 *)
         (*(longlong *)(plVar3[4] + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar4 >> 9 & 0x7fffff) * 8) +
              (ulonglong)((uint)uVar4 & 0x1ff) * 4);
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)iVar1 != uVar4);
  }
  return plVar3;
}



// FUNCTION 146c54e68 FUN_146c54e68 body=146 status=ok
// SIG undefined FUN_146c54e68(void)

void FUN_146c54e68(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (0 < (longlong)iVar1) {
    uVar3 = 0;
    do {
      lVar2 = (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + uVar3 * 4);
      if (lVar2 <= (longlong)uVar3 && lVar2 != -1) {
        FUN_146bedf4e(param_1 + 0x18,
                      (ulonglong)(((uint)uVar3 & 0x1ff) << 2) +
                      *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar3 >> 9 & 0x7fffff) * 8));
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)iVar1 != uVar3);
  }
  FUN_1411b328a(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x140) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x144));
  return;
}



// FUNCTION 146c54f00 FUN_146c54f00 body=362 status=ok
// SIG undefined FUN_146c54f00(void)

undefined8 FUN_146c54f00(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_3 + 0xa8);
  lVar2 = param_3 + 0xb8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_3 + 0xd0) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = *(uint *)(param_3 + 0xd0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar6 = (ulonglong)uStack_54;
  local_90 = plVar1;
  if ((uStack_54 != uVar9) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *local_90;
      lVar8 = (longlong)(int)uVar6 * 0x10;
      cVar5 = (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(lVar4 + lVar8),&local_68,4);
      if (cVar5 == '\0') {
        uVar7 = 0;
        goto LAB_146c54fa4;
      }
      uVar3 = *(uint *)(lVar4 + lVar8 + 4);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar3 >> 9) * 8) +
       (ulonglong)(uVar3 & 0x1ff) * 4) = (undefined4)local_68;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      uVar6 = (ulonglong)uStack_74;
    } while ((CONCAT44(uStack_7c,uStack_80) != lVar2 || uStack_74 != uVar9) || local_90 != plVar1);
  }
  uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
LAB_146c54fa4:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146c550c4 FUN_146c550c4 body=56 status=ok
// SIG undefined FUN_146c550c4(void)

undefined8 * FUN_146c550c4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_149f3baa0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146c550fc FUN_146c550fc body=116 status=ok
// SIG undefined FUN_146c550fc(void)

void FUN_146c550fc(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  FUN_146bedf4e(param_1 + 0x18,
                (ulonglong)((*(uint *)(param_2 + 0x14) & 0x1ff) << 2) +
                *(longlong *)
                 (*(longlong *)(param_1 + 0x20) + (ulonglong)(*(uint *)(param_2 + 0x14) >> 9) * 8),
                *(undefined4 *)(param_2 + 0x24));
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 == 0xffffffff) {
    return;
  }
  FUN_146bedf4e(param_1 + 0x18,
                (ulonglong)((uVar1 & 0x1ff) << 2) +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar1 >> 9) * 8),
                *(undefined4 *)(param_2 + 0x28));
  return;
}



// FUNCTION 146c55174 FUN_146c55174 body=95 status=ok
// SIG undefined FUN_146c55174(void)

void FUN_146c55174(longlong param_1,uint *param_2)

{
  FUN_146bedf4e(param_1 + 0x18,
                (ulonglong)((*param_2 & 0x1ff) << 2) +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(*param_2 >> 9) * 8),
                param_2[5]);
  FUN_146bedf4e(param_1 + 0x18,
                (ulonglong)((*param_2 & 0x1ff) << 2) +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(*param_2 >> 9) * 8),
                param_2[6]);
  return;
}



// FUNCTION 146c551de FUN_146c551de body=68 status=ok
// SIG undefined FUN_146c551de(void)

undefined8 * FUN_146c551de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3bf50;
  FUN_141082b5c(param_1 + 4,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c55222 FUN_146c55222 body=126 status=ok
// SIG undefined FUN_146c55222(void)

void FUN_146c55222(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((-1 < (int)param_2) &&
     ((uint)((int)param_1[3] * 0x200 + *(int *)((longlong)param_1 + 0x1c)) <= param_2)) {
    uVar3 = (**(code **)(*param_1 + 0xc0))(param_1);
    lVar2 = param_1[3];
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    FUN_1411b328a(param_1 + 3,param_2 + 1);
    for (uVar4 = (int)lVar2 * 0x200 + iVar1; uVar4 <= param_2; uVar4 = uVar4 + 1) {
      *(undefined4 *)
       (*(longlong *)(param_1[4] + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4) =
           uVar3;
    }
  }
  return;
}



// FUNCTION 146c552a0 FUN_146c552a0 body=68 status=ok
// SIG undefined FUN_146c552a0(void)

undefined8 * FUN_146c552a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3c020;
  FUN_1457ed392(param_1 + 4,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c552e4 FUN_146c552e4 body=113 status=ok
// SIG undefined FUN_146c552e4(void)

undefined8 * FUN_146c552e4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3c020;
  puVar1[2] = param_2;
  FUN_14582f01a(puVar1 + 3);
  FUN_146c19ed2(puVar1);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_146c4426a(puVar1 + 4,param_1 + 0x20);
  return puVar1;
}



// FUNCTION 146c55356 FUN_146c55356 body=84 status=ok
// SIG undefined FUN_146c55356(void)

undefined8 * FUN_146c55356(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3c020;
  puVar1[2] = param_2;
  FUN_14582f01a(puVar1 + 3);
  FUN_146c19ed2(puVar1);
  FUN_146c19ed2(puVar1);
  return puVar1;
}



// FUNCTION 146c553aa FUN_146c553aa body=197 status=ok
// SIG undefined FUN_146c553aa(void)

undefined8 * FUN_146c553aa(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_149f3c020;
  puVar3[2] = param_3;
  FUN_14582f01a(puVar3 + 3);
  FUN_146c19ed2(puVar3);
  FUN_146c19ed2();
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(*param_2 + uVar4 * 4);
      if (uVar1 != 0xffffffff) {
        *(undefined4 *)
         (*(longlong *)(puVar3[4] + (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar4 >> 9 & 0x7fffff) * 8) +
              (ulonglong)((uint)uVar4 & 0x1ff) * 4);
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)(int)lVar2 != uVar4);
  }
  return puVar3;
}



// FUNCTION 146c55470 FUN_146c55470 body=139 status=ok
// SIG undefined FUN_146c55470(void)

void FUN_146c55470(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = param_2[1];
  if (0 < (longlong)(int)lVar1) {
    uVar3 = 0;
    do {
      lVar2 = (longlong)*(int *)(*param_2 + uVar3 * 4);
      if (lVar2 <= (longlong)uVar3 && lVar2 != -1) {
        FUN_146bfd34a(param_1 + 0x18,
                      (ulonglong)(((uint)uVar3 & 0x1ff) << 2) +
                      *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar3 >> 9 & 0x7fffff) * 8));
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)(int)lVar1 != uVar3);
  }
  FUN_146bfd442(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24));
  return;
}



// FUNCTION 146c55502 FUN_146c55502 body=352 status=ok
// SIG undefined FUN_146c55502(void)

undefined8 FUN_146c55502(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_3[5] == 0) {
    uVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar7 = *(uint *)(param_3 + 5);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar5 = (ulonglong)uStack_54;
  local_90 = param_3;
  if ((uStack_54 != uVar7) || (uStack_60 != plVar1)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)(int)uVar5 * 0x10;
      cVar4 = (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(lVar3 + lVar8),&local_68,4);
      if (cVar4 == '\0') {
        uVar6 = 0;
        goto LAB_146c55596;
      }
      uVar2 = *(uint *)(lVar3 + lVar8 + 4);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = (undefined4)local_68;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      uVar5 = (ulonglong)uStack_74;
    } while (((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || uStack_74 != uVar7) ||
             local_90 != param_3);
  }
  uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_146c55596:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146c556e4 FUN_146c556e4 body=56 status=ok
// SIG undefined FUN_146c556e4(void)

undefined8 * FUN_146c556e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_149f3c100;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146c5571c FUN_146c5571c body=62 status=ok
// SIG undefined FUN_146c5571c(void)

void FUN_146c5571c(longlong *param_1,longlong param_2)

{
  FUN_146c5597c(param_1,*(undefined4 *)(param_2 + 0x20));
  (**(code **)(*param_1 + 200))
            (param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 4),
             *(undefined4 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 146c5575c FUN_146c5575c body=40 status=ok
// SIG undefined FUN_146c5575c(void)

void FUN_146c5575c(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 200))
            (*(undefined8 *)(param_2 + 0xc),*param_2,*param_2,param_2[1],
             *(undefined8 *)(param_2 + 0xc));
  return;
}



// FUNCTION 146c55784 FUN_146c55784 body=81 status=ok
// SIG undefined FUN_146c55784(void)

void FUN_146c55784(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  FUN_146c5597c(param_1,*(undefined4 *)(param_2 + 0x10));
  (**(code **)(*param_1 + 0xd0))
            (param_1,*(undefined4 *)(param_2 + 0x10),uVar1,uVar2,uVar3,param_2 + 0x28);
  return;
}



// FUNCTION 146c557d6 FUN_146c557d6 body=98 status=ok
// SIG undefined FUN_146c557d6(void)

void FUN_146c557d6(longlong *param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x10) != -1) {
    (**(code **)(*param_1 + 200))
              (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),
               *(int *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x68));
  }
  if (*(int *)(param_2 + 0x14) != -1) {
    (**(code **)(*param_1 + 200))
              (param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0xc),
               *(int *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



// FUNCTION 146c55838 FUN_146c55838 body=40 status=ok
// SIG undefined FUN_146c55838(void)

void FUN_146c55838(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 200))
            (*(undefined8 *)(param_2 + 2),*param_2,*param_2,param_2[1],*(undefined8 *)(param_2 + 2))
  ;
  return;
}



// FUNCTION 146c5597c FUN_146c5597c body=135 status=ok
// SIG undefined FUN_146c5597c(void)

void FUN_146c5597c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((-1 < (int)param_2) &&
     ((uint)((int)param_1[3] * 0x200 + *(int *)((longlong)param_1 + 0x1c)) <= param_2)) {
    uVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
    lVar2 = param_1[3];
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    FUN_146bfd442(param_1 + 3,param_2 + 1);
    for (uVar3 = (int)lVar2 * 0x200 + iVar1; uVar3 <= param_2; uVar3 = uVar3 + 1) {
      *(undefined4 *)
       (*(longlong *)(param_1[4] + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4) =
           uVar4;
    }
  }
  return;
}



// FUNCTION 146c55a04 FUN_146c55a04 body=71 status=ok
// SIG undefined FUN_146c55a04(void)

undefined8 * FUN_146c55a04(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3c100;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c55a4c FUN_146c55a4c body=100 status=ok
// SIG undefined FUN_146c55a4c(void)

void FUN_146c55a4c(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_146c55bfc((longlong *)(param_1 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  *(uint *)(lVar2 + 4 + lVar3 * 8) = param_3;
  *(undefined4 *)(lVar2 + lVar3 * 8) =
       *(undefined4 *)
        (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(param_3 >> 9) * 8) +
        (ulonglong)(param_3 & 0x1ff) * 4);
  return;
}



// FUNCTION 146c55ab0 FUN_146c55ab0 body=197 status=ok
// SIG undefined FUN_146c55ab0(void)

void FUN_146c55ab0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar5 = (int)param_3[1];
  iVar6 = *(int *)(param_1 + 0x20) + iVar5;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x24) < iVar6) {
    FUN_146c55c82(plVar1);
    iVar5 = (int)param_3[1];
  }
  if (iVar5 != 0) {
    lVar3 = *param_3;
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + lVar7);
      iVar6 = *(int *)(param_1 + 0x20);
      lVar8 = (longlong)iVar6;
      *(uint *)(param_1 + 0x20) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar6 + 1U) {
        FUN_146c55bfc(plVar1,iVar6);
      }
      lVar4 = *plVar1;
      *(undefined8 *)(lVar4 + lVar8 * 8) = 0;
      *(uint *)(lVar4 + 4 + lVar8 * 8) = uVar2;
      *(undefined4 *)(lVar4 + lVar8 * 8) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
            (ulonglong)(uVar2 & 0x1ff) * 4);
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar5 * 4 != lVar7);
  }
  return;
}



// FUNCTION 146c55bfc FUN_146c55bfc body=132 status=ok
// SIG undefined FUN_146c55bfc(void)

void FUN_146c55bfc(longlong param_1,int param_2)

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



// FUNCTION 146c55c82 FUN_146c55c82 body=95 status=ok
// SIG undefined FUN_146c55c82(void)

void FUN_146c55c82(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146c55ce2 FUN_146c55ce2 body=57 status=ok
// SIG undefined FUN_146c55ce2(void)

void FUN_146c55ce2(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_146becdc4(param_2 + 0x20,0);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 146c55d1c FUN_146c55d1c body=361 status=ok
// SIG undefined FUN_146c55d1c(void)

undefined4 *
FUN_146c55d1c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146c55e86(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  *local_48 = *(undefined8 *)*param_3;
  local_48[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = *local_48;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  local_68 = param_4;
  cVar4 = FUN_146c55f6c(param_1,uVar9,local_48,&local_54);
  uVar3 = local_54;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_48 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146c560ce(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c55e86 FUN_146c55e86 body=230 status=ok
// SIG undefined FUN_146c55e86(void)

int * FUN_146c55e86(longlong *param_1,int *param_2)

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



// FUNCTION 146c55f6c FUN_146c55f6c body=171 status=ok
// SIG undefined FUN_146c55f6c(void)

void FUN_146c55f6c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          FUN_146c55ce2(plVar5 + 1,plVar5[1]);
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar3 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)*param_3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_146c56018(param_1,*param_4);
          *param_4 = iVar6;
          uVar4 = 1;
          goto LAB_146c55fde;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  uVar4 = 0;
LAB_146c55fde:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar4;
  }
  return;
}



// FUNCTION 146c56018 FUN_146c56018 body=114 status=ok
// SIG undefined FUN_146c56018(void)

void FUN_146c56018(longlong *param_1,int param_2)

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



// FUNCTION 146c5608a FUN_146c5608a body=68 status=ok
// SIG undefined FUN_146c5608a(void)

void FUN_146c5608a(longlong param_1,uint param_2)

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
  FUN_146c560ce(param_1);
  return;
}



// FUNCTION 146c560ce FUN_146c560ce body=473 status=ok
// SIG undefined FUN_146c560ce(void)

void FUN_146c560ce(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146c562a8 FUN_146c562a8 body=155 status=ok
// SIG undefined FUN_146c562a8(void)

undefined8 FUN_146c562a8(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_146c56344(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146c56344 FUN_146c56344 body=87 status=ok
// SIG undefined FUN_146c56344(void)

void FUN_146c56344(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_146c5639c();
  return;
}



// FUNCTION 146c5639c FUN_146c5639c body=51 status=ok
// SIG undefined FUN_146c5639c(void)

void FUN_146c5639c(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*param_1 + (longlong)param_2 * 0x18 + 8);
  FUN_146c55ce2(puVar1,*puVar1);
  FUN_146c56018(param_1,param_2);
  return;
}


