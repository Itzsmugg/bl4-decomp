// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f7adec FUN_146f7adec body=186 status=ok
// SIG undefined FUN_146f7adec(void)

void FUN_146f7adec(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == iVar2) {
    FUN_146f7b7b2(lVar1,iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  lVar4 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar5 + lVar4 + 0x18),(void *)(lVar5 + lVar4),
          (ulonglong)(uint)(iVar2 - param_2) * 0x18);
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined8 *)(lVar5 + lVar4) = 0;
  ((undefined8 *)(lVar5 + lVar4))[1] = 0;
  *(int *)(lVar5 + 0x10 + lVar4) = iVar2;
  iVar3 = *(int *)(param_1 + 0x10);
  FUN_146f7b152(lVar5 + lVar4,iVar2 * iVar3);
  if (iVar3 < 1) {
    return;
  }
  FUN_146f7b0f0(lVar5 + lVar4,iVar3 + -1,param_1 + 0x40);
  return;
}



// FUNCTION 146f7aea6 FUN_146f7aea6 body=33 status=ok
// SIG undefined FUN_146f7aea6(void)

void FUN_146f7aea6(longlong param_1)

{
  FUN_146f7bbb4(param_1 + 0x18);
  FUN_146f7bafa(param_1 + 0x18);
  return;
}



// FUNCTION 146f7aec8 FUN_146f7aec8 body=53 status=ok
// SIG undefined FUN_146f7aec8(void)

void FUN_146f7aec8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f7aefd(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f7aefd FUN_146f7aefd body=43 status=ok
// SIG undefined FUN_146f7aefd(void)

void FUN_146f7aefd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f7af28 FUN_146f7af28 body=86 status=ok
// SIG undefined FUN_146f7af28(void)

void FUN_146f7af28(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f7af7e(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f7afe5(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f7af7e FUN_146f7af7e body=103 status=ok
// SIG undefined FUN_146f7af7e(void)

void FUN_146f7af7e(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f7b062(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f7afe5 FUN_146f7afe5 body=125 status=ok
// SIG undefined FUN_146f7afe5(void)

void FUN_146f7afe5(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_141724ade(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f7b062 FUN_146f7b062 body=141 status=ok
// SIG undefined FUN_146f7b062(void)

void FUN_146f7b062(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f7b0f0 FUN_146f7b0f0 body=98 status=ok
// SIG undefined FUN_146f7b0f0(void)

void FUN_146f7b0f0(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = (param_2 + 1) * (int)param_1[2];
  iVar1 = (int)param_1[1];
  if (iVar1 < iVar4) {
    *(int *)(param_1 + 1) = iVar4;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(iVar4 - iVar1)) {
      FUN_1449e2712(param_1,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    iVar4 = iVar4 - iVar1;
    do {
      uVar2 = param_3[1];
      *puVar3 = *param_3;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 146f7b152 FUN_146f7b152 body=42 status=ok
// SIG undefined FUN_146f7b152(void)

void FUN_146f7b152(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_14499148c();
    return;
  }
  return;
}



// FUNCTION 146f7b17e FUN_146f7b17e body=28 status=ok
// SIG undefined FUN_146f7b17e(void)

void FUN_146f7b17e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) * param_2;
  if (iVar1 < *(int *)(param_1 + 8)) {
    FUN_14056a44c(param_1,iVar1,1);
    return;
  }
  FUN_146f7b0f0(param_1,param_2 + -1);
  return;
}



// FUNCTION 146f7b19a FUN_146f7b19a body=194 status=ok
// SIG undefined FUN_146f7b19a(void)

longlong * FUN_146f7b19a(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f7b25c(param_1,param_2 + 0x18);
  FUN_1447e46aa(param_1,param_2 + 0x40);
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f7b25c FUN_146f7b25c body=341 status=ok
// SIG undefined FUN_146f7b25c(void)

longlong * FUN_146f7b25c(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x20) * 0x18,
             (longlong)*(int *)(param_2 + 0x24) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x20);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f7b3b2(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x20) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (*(longlong *)(param_2 + 0x18) == 0) {
        lVar4 = param_2;
      }
      FUN_146f7b3ff(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f7b3b2(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f7b4c6(param_2);
        FUN_146f7b3ff(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f7b3b2 FUN_146f7b3b2 body=76 status=ok
// SIG undefined FUN_146f7b3b2(void)

void FUN_146f7b3b2(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f7aefd(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f7b512(param_1,param_2);
  return;
}



// FUNCTION 146f7b3ff FUN_146f7b3ff body=199 status=ok
// SIG undefined FUN_146f7b3ff(void)

longlong * FUN_146f7b3ff(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*(byte *)(param_1 + 5) & 1) == 0) ||
      (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 == 0x1f)) ||
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e3cc78), 3 < iVar2)) {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 1;
  }
  if (((*(byte *)(param_1 + 5) & 1) != 0) &&
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 < 0x11)) {
    FUN_146c4db8e(param_1,param_2);
    return param_1;
  }
  FUN_146f7b578(param_2,param_1,0);
  return param_1;
}



// FUNCTION 146f7b4c6 FUN_146f7b4c6 body=76 status=ok
// SIG undefined FUN_146f7b4c6(void)

longlong FUN_146f7b4c6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f7b7b2(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f7b798(lVar2,1);
  return lVar2;
}



// FUNCTION 146f7b512 FUN_146f7b512 body=102 status=ok
// SIG undefined FUN_146f7b512(void)

void FUN_146f7b512(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  FUN_146f7b062(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f7b578 FUN_146f7b578 body=543 status=ok
// SIG undefined FUN_146f7b578(void)

void FUN_146f7b578(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x10;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_146c4db8e(param_2,param_1);
    goto LAB_146f7b75d;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 4,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 4);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_146f7b75d;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_146f7b74a:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 << 4);
  }
  else {
    if (local_24 == 0x10) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x8000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_14499148c(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_1449e2712(param_1,iVar4);
        }
        goto LAB_146f7b74a;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_146f7b75d:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f7b798 FUN_146f7b798 body=26 status=ok
// SIG undefined FUN_146f7b798(void)

void FUN_146f7b798(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f7b7b2 FUN_146f7b7b2 body=145 status=ok
// SIG undefined FUN_146f7b7b2(void)

void FUN_146f7b7b2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_146f7b062(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f7b844 FUN_146f7b844 body=439 status=ok
// SIG undefined FUN_146f7b844(void)

void FUN_146f7b844(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  int local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (int)param_1[2];
  local_78 = 0;
  uStack_70 = 0;
  local_58 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_98 = local_60;
  local_90 = local_58;
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_a0 = param_2;
  if (iStack_4c < (int)local_58[3]) {
    do {
      iVar9 = iStack_84;
      iVar3 = *(int *)(*param_2 + (longlong)iStack_84 * 8);
      FUN_146f7b0f0(&local_78);
      lVar8 = param_1[2];
      if ((int)lVar8 != 0) {
        lVar4 = *param_1;
        lVar10 = 0;
        uVar11 = 0;
        do {
          puVar1 = (undefined4 *)((longlong)((int)lVar8 * iVar9) * 0x10 + lVar4 + lVar10);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined4 *)((longlong)(iVar3 * local_68) * 0x10 + local_78 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 0x10;
        } while (uVar11 < *(uint *)(param_1 + 2));
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < (int)local_90[3]);
  }
  if (&local_78 == param_1) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_78;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7b9fc FUN_146f7b9fc body=143 status=ok
// SIG undefined FUN_146f7b9fc(void)

void FUN_146f7b9fc(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f7b7b2(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f7b798(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f7ba8c(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f7bafa(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f7ba8c FUN_146f7ba8c body=109 status=ok
// SIG undefined FUN_146f7ba8c(void)

void FUN_146f7ba8c(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 0x18);
  FUN_146f7aefd(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f7bafa FUN_146f7bafa body=59 status=ok
// SIG undefined FUN_146f7bafa(void)

void FUN_146f7bafa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f7bb36(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f7b062(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f7bb36 FUN_146f7bb36 body=126 status=ok
// SIG undefined FUN_146f7bb36(void)

ulonglong FUN_146f7bb36(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f7bbb4 FUN_146f7bbb4 body=97 status=ok
// SIG undefined FUN_146f7bbb4(void)

void FUN_146f7bbb4(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  if (*(longlong *)(lVar2 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (~param_2 + iVar1 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  return;
}



// FUNCTION 146f7bc16 FUN_146f7bc16 body=42 status=ok
// SIG undefined FUN_146f7bc16(void)

longlong FUN_146f7bc16(longlong param_1,int param_2)

{
  FUN_146f7c0c8(param_1 + 0x20);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f7bc40 FUN_146f7bc40 body=110 status=ok
// SIG undefined FUN_146f7bc40(void)

undefined8 * FUN_146f7bc40(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar1;
  *(undefined4 *)(puVar5 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar3;
  *puVar5 = &PTR_FUN_149fa7660;
  puVar5[10] = 0;
  lVar6 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x50);
  }
  FUN_146f7c162(puVar5 + 4,lVar6,*(undefined4 *)(param_1 + 0x60),0);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  puVar5[0xe] = *(undefined8 *)(param_1 + 0x70);
  puVar5[0xf] = uVar4;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146f7bcae FUN_146f7bcae body=116 status=ok
// SIG undefined FUN_146f7bcae(void)

void FUN_146f7bcae(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
  }
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x60) * 0x30;
    do {
      if (*(int *)(lVar2 + 0x10) <= param_2) {
        FUN_146f7c44a(lVar2,param_2 + 1,param_1 + 0x70);
      }
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < param_2 + 1) {
    iVar1 = param_2 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}



// FUNCTION 146f7bd76 FUN_146f7bd76 body=86 status=ok
// SIG undefined FUN_146f7bd76(void)

void FUN_146f7bd76(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
  }
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x30;
    do {
      FUN_146f7cf68(lVar1,param_2,param_1 + 0x70);
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f7bdcc FUN_146f7bdcc body=86 status=ok
// SIG undefined FUN_146f7bdcc(void)

void FUN_146f7bdcc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
  }
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x30;
    do {
      FUN_146f7c44a(lVar1,param_2,param_1 + 0x70);
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f7be22 FUN_146f7be22 body=128 status=ok
// SIG undefined FUN_146f7be22(void)

ulonglong FUN_146f7be22(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x50);
  }
  if ((longlong)*(int *)(param_1 + 0x60) == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x60) * 6;
    uVar3 = 0;
    do {
      lVar2 = plVar4[1];
      if ((longlong)(int)lVar2 != 0) {
        lVar1 = *plVar4;
        lVar6 = 0;
        do {
          uVar3 = (*(code *)PTR_FUN_14c75b148)
                            (*(undefined8 *)(lVar1 + lVar6),*(int *)(lVar1 + 8 + lVar6) << 4,
                             uVar3 & 0xffffffff);
          lVar6 = lVar6 + 0xc18;
        } while ((longlong)(int)lVar2 * 0xc18 - lVar6 != 0);
      }
      plVar4 = plVar4 + 6;
    } while (plVar4 != plVar5);
  }
  return uVar3;
}



// FUNCTION 146f7beb0 FUN_146f7beb0 body=97 status=ok
// SIG undefined FUN_146f7beb0(void)

void FUN_146f7beb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
  }
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x30 + lVar1;
    do {
      FUN_146f7d82a(lVar1,param_2,param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
      lVar1 = lVar1 + 0x30;
    } while (lVar1 != lVar2);
  }
  return;
}



// FUNCTION 146f7bf22 FUN_146f7bf22 body=33 status=ok
// SIG undefined FUN_146f7bf22(void)

void FUN_146f7bf22(longlong param_1)

{
  FUN_146f7dde8(param_1 + 0x20);
  FUN_146f7dd2e(param_1 + 0x20);
  return;
}



// FUNCTION 146f7bf48 FUN_146f7bf48 body=179 status=ok
// SIG undefined FUN_146f7bf48(void)

void FUN_146f7bf48(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  lVar1 = param_1 + 0x20;
  iVar8 = *(int *)(param_1 + 0x60);
  if (iVar8 <= param_2) {
    if (iVar8 < param_2) {
      do {
        *(uint *)(param_1 + 0x60) = iVar8 + 1U;
        if (*(uint *)(param_1 + 100) < iVar8 + 1U) {
          FUN_146f7d798(lVar1,iVar8);
        }
        lVar6 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar6 = lVar1;
        }
        lVar7 = (longlong)iVar8 * 0x30;
        *(undefined8 *)(lVar6 + lVar7) = 0;
        ((undefined8 *)(lVar6 + lVar7))[1] = 0;
        *(undefined4 *)(lVar6 + 0x10 + lVar7) = 0;
        uVar3 = *(undefined4 *)(param_1 + 0x74);
        uVar4 = *(undefined4 *)(param_1 + 0x78);
        uVar5 = *(undefined4 *)(param_1 + 0x7c);
        puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
        *puVar2 = *(undefined4 *)(param_1 + 0x70);
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        FUN_146f7cf68(lVar6 + lVar7,*(undefined4 *)(param_1 + 0x10),(undefined4 *)(param_1 + 0x70));
        iVar8 = *(int *)(param_1 + 0x60);
      } while (iVar8 < param_2);
    }
    return;
  }
  FUN_146f7dc26(lVar1,param_2,1);
  return;
}



// FUNCTION 146f7bffc FUN_146f7bffc body=169 status=ok
// SIG undefined FUN_146f7bffc(void)

void FUN_146f7bffc(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  lVar1 = param_1 + 0x20;
  iVar3 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar3 + 1;
  if (*(int *)(param_1 + 100) == iVar3) {
    FUN_146f7d798(lVar1,iVar3);
  }
  lVar8 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar8 = lVar1;
  }
  lVar4 = (longlong)param_2 * 0x30;
  memmove((void *)(lVar8 + lVar4 + 0x30),(void *)(lVar8 + lVar4),
          (ulonglong)(uint)(iVar3 - param_2) * 0x30);
  lVar8 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar8 = lVar1;
  }
  *(undefined8 *)(lVar8 + lVar4) = 0;
  ((undefined8 *)(lVar8 + lVar4))[1] = 0;
  *(undefined4 *)(lVar8 + 0x10 + lVar4) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x74);
  uVar6 = *(undefined4 *)(param_1 + 0x78);
  uVar7 = *(undefined4 *)(param_1 + 0x7c);
  puVar2 = (undefined4 *)(lVar8 + 0x20 + lVar4);
  *puVar2 = *(undefined4 *)(param_1 + 0x70);
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  FUN_146f7cf68(lVar8 + lVar4,*(undefined4 *)(param_1 + 0x10),param_1 + 0x70);
  return;
}



// FUNCTION 146f7c0a6 FUN_146f7c0a6 body=33 status=ok
// SIG undefined FUN_146f7c0a6(void)

void FUN_146f7c0a6(longlong param_1)

{
  FUN_146f7dde8(param_1 + 0x20);
  FUN_146f7dd2e(param_1 + 0x20);
  return;
}



// FUNCTION 146f7c0c8 FUN_146f7c0c8 body=53 status=ok
// SIG undefined FUN_146f7c0c8(void)

void FUN_146f7c0c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
  }
  FUN_146f7c0fd(lVar1,*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f7c0fd FUN_146f7c0fd body=54 status=ok
// SIG undefined FUN_146f7c0fd(void)

void FUN_146f7c0fd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f7c133(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 146f7c133 FUN_146f7c133 body=46 status=ok
// SIG undefined FUN_146f7c133(void)

void FUN_146f7c133(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x183;
  }
  return;
}



// FUNCTION 146f7c162 FUN_146f7c162 body=86 status=ok
// SIG undefined FUN_146f7c162(void)

void FUN_146f7c162(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x40) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    return;
  }
  FUN_146f7c1b8(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
  }
  FUN_146f7c21f(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f7c1b8 FUN_146f7c1b8 body=103 status=ok
// SIG undefined FUN_146f7c1b8(void)

void FUN_146f7c1b8(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x30,0);
    uVar2 = (uint)(uVar1 / 0x30);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f7c254(param_1,0,uVar3,0x30);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x44) = param_3;
  return;
}



// FUNCTION 146f7c21f FUN_146f7c21f body=52 status=ok
// SIG undefined FUN_146f7c21f(void)

void FUN_146f7c21f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146f7c2e2(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 146f7c254 FUN_146f7c254 body=141 status=ok
// SIG undefined FUN_146f7c254(void)

void FUN_146f7c254(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f7c2e2 FUN_146f7c2e2 body=100 status=ok
// SIG undefined FUN_146f7c2e2(void)

undefined8 * FUN_146f7c2e2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146f7c346(param_1,iVar1,0);
    FUN_146f7c3b8(*param_1,uVar2,iVar1);
  }
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return param_1;
}



// FUNCTION 146f7c346 FUN_146f7c346 body=114 status=ok
// SIG undefined FUN_146f7c346(void)

void FUN_146f7c346(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    iVar2 = (int)(uVar1 / 0xc18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f7c3b8 FUN_146f7c3b8 body=146 status=ok
// SIG undefined FUN_146f7c3b8(void)

void FUN_146f7c3b8(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  void *_Src_00;
  
  if (param_3 != 0) {
    _Src_00 = (void *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)((longlong)_Src_00 + -8);
      _Src = *(void **)((longlong)_Src_00 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_141724ade(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
      memcpy(param_1 + 2,_Src_00,0xc04);
      param_1 = param_1 + 0x183;
      _Src_00 = (void *)((longlong)_Src_00 + 0xc18);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f7c44a FUN_146f7c44a body=245 status=ok
// SIG undefined FUN_146f7c44a(void)

void FUN_146f7c44a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = param_1[1];
  uVar4 = param_2 + 0xff;
  iVar3 = (int)uVar4 >> 8;
  FUN_146f7c540(param_1,iVar3,1);
  uVar6 = *(uint *)(param_1 + 2);
  if (param_2 < (int)uVar6) {
    if (iVar3 < 1) goto LAB_146f7c4a1;
    uVar4 = (uVar4 & 0xff) + 1;
  }
  else {
    if (param_2 <= (int)uVar6) goto LAB_146f7c4a1;
    uVar6 = uVar6 & 0xff;
    uVar7 = (ulonglong)uVar6;
    uVar4 = (uVar4 & 0xff) + 1;
    if (uVar7 != 0) {
      uVar5 = 0x100;
      if (iVar3 == (int)lVar1) {
        uVar5 = uVar4;
      }
      lVar2 = (longlong)(int)lVar1 * 0xc18;
      lVar1 = *param_1 + lVar2;
      iVar3 = *(int *)(lVar1 + -0x408 + (ulonglong)(uVar6 - 1) * 4) +
              *(int *)(lVar1 + -0xc08 + (ulonglong)(uVar6 - 1) * 4);
      FUN_14056a44c(lVar2 + *param_1 + -0xc18,iVar3,0);
      if (uVar6 < uVar5) {
        do {
          *(int *)(lVar1 + -0xc08 + uVar7 * 4) = iVar3;
          *(undefined4 *)(lVar1 + -0x808 + uVar7 * 4) = 0;
          *(undefined4 *)(lVar1 + -0x408 + uVar7 * 4) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
      *(uint *)(lVar1 + -8) = uVar5;
    }
  }
  *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) = uVar4;
LAB_146f7c4a1:
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f7c540 FUN_146f7c540 body=134 status=ok
// SIG undefined FUN_146f7c540(void)

void FUN_146f7c540(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f7c5f0(param_1,iVar1);
    }
    FUN_146f7c5c7((longlong)iVar1 * 0xc18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f7ce4e(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f7ceb4(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f7c5c7 FUN_146f7c5c7 body=41 status=ok
// SIG undefined FUN_146f7c5c7(void)

void FUN_146f7c5c7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f7c684(param_1);
    param_1 = param_1 + 0xc18;
  }
  return;
}



// FUNCTION 146f7c5f0 FUN_146f7c5f0 body=146 status=ok
// SIG undefined FUN_146f7c5f0(void)

void FUN_146f7c5f0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc18)) {
      uVar5 = uVar4 / 0xc18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f7c684 FUN_146f7c684 body=164 status=ok
// SIG undefined FUN_146f7c684(void)

undefined8 * FUN_146f7c684(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = 0;
  FUN_146f7c72a(param_1 + 2,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x82,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x102,0,param_3,&local_24);
  *(undefined4 *)(param_1 + 0x182) = 0x100;
  if (*(int *)((longlong)param_1 + 0xc) < 0x100) {
    FUN_14499148c(param_1,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7c72a FUN_146f7c72a body=1827 status=ok
// SIG undefined FUN_146f7c72a(void)

void FUN_146f7c72a(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = *param_4;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  uVar1 = *param_4;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  uVar1 = *param_4;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  uVar1 = *param_4;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  uVar1 = *param_4;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  uVar1 = *param_4;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  uVar1 = *param_4;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  uVar1 = *param_4;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  uVar1 = *param_4;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar1;
  uVar1 = *param_4;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar1;
  uVar1 = *param_4;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar1;
  uVar1 = *param_4;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar1;
  uVar1 = *param_4;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar1;
  uVar1 = *param_4;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar1;
  uVar1 = *param_4;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar1;
  uVar1 = *param_4;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = uVar1;
  uVar1 = *param_4;
  param_1[0x20] = uVar1;
  param_1[0x21] = uVar1;
  uVar1 = *param_4;
  param_1[0x22] = uVar1;
  param_1[0x23] = uVar1;
  uVar1 = *param_4;
  param_1[0x24] = uVar1;
  param_1[0x25] = uVar1;
  uVar1 = *param_4;
  param_1[0x26] = uVar1;
  param_1[0x27] = uVar1;
  uVar1 = *param_4;
  param_1[0x28] = uVar1;
  param_1[0x29] = uVar1;
  uVar1 = *param_4;
  param_1[0x2a] = uVar1;
  param_1[0x2b] = uVar1;
  uVar1 = *param_4;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = uVar1;
  uVar1 = *param_4;
  param_1[0x2e] = uVar1;
  param_1[0x2f] = uVar1;
  uVar1 = *param_4;
  param_1[0x30] = uVar1;
  param_1[0x31] = uVar1;
  uVar1 = *param_4;
  param_1[0x32] = uVar1;
  param_1[0x33] = uVar1;
  uVar1 = *param_4;
  param_1[0x34] = uVar1;
  param_1[0x35] = uVar1;
  uVar1 = *param_4;
  param_1[0x36] = uVar1;
  param_1[0x37] = uVar1;
  uVar1 = *param_4;
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar1;
  uVar1 = *param_4;
  param_1[0x3a] = uVar1;
  param_1[0x3b] = uVar1;
  uVar1 = *param_4;
  param_1[0x3c] = uVar1;
  param_1[0x3d] = uVar1;
  uVar1 = *param_4;
  param_1[0x3e] = uVar1;
  param_1[0x3f] = uVar1;
  uVar1 = *param_4;
  param_1[0x40] = uVar1;
  param_1[0x41] = uVar1;
  uVar1 = *param_4;
  param_1[0x42] = uVar1;
  param_1[0x43] = uVar1;
  uVar1 = *param_4;
  param_1[0x44] = uVar1;
  param_1[0x45] = uVar1;
  uVar1 = *param_4;
  param_1[0x46] = uVar1;
  param_1[0x47] = uVar1;
  uVar1 = *param_4;
  param_1[0x48] = uVar1;
  param_1[0x49] = uVar1;
  uVar1 = *param_4;
  param_1[0x4a] = uVar1;
  param_1[0x4b] = uVar1;
  uVar1 = *param_4;
  param_1[0x4c] = uVar1;
  param_1[0x4d] = uVar1;
  uVar1 = *param_4;
  param_1[0x4e] = uVar1;
  param_1[0x4f] = uVar1;
  uVar1 = *param_4;
  param_1[0x50] = uVar1;
  param_1[0x51] = uVar1;
  uVar1 = *param_4;
  param_1[0x52] = uVar1;
  param_1[0x53] = uVar1;
  uVar1 = *param_4;
  param_1[0x54] = uVar1;
  param_1[0x55] = uVar1;
  uVar1 = *param_4;
  param_1[0x56] = uVar1;
  param_1[0x57] = uVar1;
  uVar1 = *param_4;
  param_1[0x58] = uVar1;
  param_1[0x59] = uVar1;
  uVar1 = *param_4;
  param_1[0x5a] = uVar1;
  param_1[0x5b] = uVar1;
  uVar1 = *param_4;
  param_1[0x5c] = uVar1;
  param_1[0x5d] = uVar1;
  uVar1 = *param_4;
  param_1[0x5e] = uVar1;
  param_1[0x5f] = uVar1;
  uVar1 = *param_4;
  param_1[0x60] = uVar1;
  param_1[0x61] = uVar1;
  uVar1 = *param_4;
  param_1[0x62] = uVar1;
  param_1[99] = uVar1;
  uVar1 = *param_4;
  param_1[100] = uVar1;
  param_1[0x65] = uVar1;
  uVar1 = *param_4;
  param_1[0x66] = uVar1;
  param_1[0x67] = uVar1;
  uVar1 = *param_4;
  param_1[0x68] = uVar1;
  param_1[0x69] = uVar1;
  uVar1 = *param_4;
  param_1[0x6a] = uVar1;
  param_1[0x6b] = uVar1;
  uVar1 = *param_4;
  param_1[0x6c] = uVar1;
  param_1[0x6d] = uVar1;
  uVar1 = *param_4;
  param_1[0x6e] = uVar1;
  param_1[0x6f] = uVar1;
  uVar1 = *param_4;
  param_1[0x70] = uVar1;
  param_1[0x71] = uVar1;
  uVar1 = *param_4;
  param_1[0x72] = uVar1;
  param_1[0x73] = uVar1;
  uVar1 = *param_4;
  param_1[0x74] = uVar1;
  param_1[0x75] = uVar1;
  uVar1 = *param_4;
  param_1[0x76] = uVar1;
  param_1[0x77] = uVar1;
  uVar1 = *param_4;
  param_1[0x78] = uVar1;
  param_1[0x79] = uVar1;
  uVar1 = *param_4;
  param_1[0x7a] = uVar1;
  param_1[0x7b] = uVar1;
  uVar1 = *param_4;
  param_1[0x7c] = uVar1;
  param_1[0x7d] = uVar1;
  uVar1 = *param_4;
  param_1[0x7e] = uVar1;
  param_1[0x7f] = uVar1;
  uVar1 = *param_4;
  param_1[0x80] = uVar1;
  param_1[0x81] = uVar1;
  uVar1 = *param_4;
  param_1[0x82] = uVar1;
  param_1[0x83] = uVar1;
  uVar1 = *param_4;
  param_1[0x84] = uVar1;
  param_1[0x85] = uVar1;
  uVar1 = *param_4;
  param_1[0x86] = uVar1;
  param_1[0x87] = uVar1;
  uVar1 = *param_4;
  param_1[0x88] = uVar1;
  param_1[0x89] = uVar1;
  uVar1 = *param_4;
  param_1[0x8a] = uVar1;
  param_1[0x8b] = uVar1;
  uVar1 = *param_4;
  param_1[0x8c] = uVar1;
  param_1[0x8d] = uVar1;
  uVar1 = *param_4;
  param_1[0x8e] = uVar1;
  param_1[0x8f] = uVar1;
  uVar1 = *param_4;
  param_1[0x90] = uVar1;
  param_1[0x91] = uVar1;
  uVar1 = *param_4;
  param_1[0x92] = uVar1;
  param_1[0x93] = uVar1;
  uVar1 = *param_4;
  param_1[0x94] = uVar1;
  param_1[0x95] = uVar1;
  uVar1 = *param_4;
  param_1[0x96] = uVar1;
  param_1[0x97] = uVar1;
  uVar1 = *param_4;
  param_1[0x98] = uVar1;
  param_1[0x99] = uVar1;
  uVar1 = *param_4;
  param_1[0x9a] = uVar1;
  param_1[0x9b] = uVar1;
  uVar1 = *param_4;
  param_1[0x9c] = uVar1;
  param_1[0x9d] = uVar1;
  uVar1 = *param_4;
  param_1[0x9e] = uVar1;
  param_1[0x9f] = uVar1;
  uVar1 = *param_4;
  param_1[0xa0] = uVar1;
  param_1[0xa1] = uVar1;
  uVar1 = *param_4;
  param_1[0xa2] = uVar1;
  param_1[0xa3] = uVar1;
  uVar1 = *param_4;
  param_1[0xa4] = uVar1;
  param_1[0xa5] = uVar1;
  uVar1 = *param_4;
  param_1[0xa6] = uVar1;
  param_1[0xa7] = uVar1;
  uVar1 = *param_4;
  param_1[0xa8] = uVar1;
  param_1[0xa9] = uVar1;
  uVar1 = *param_4;
  param_1[0xaa] = uVar1;
  param_1[0xab] = uVar1;
  uVar1 = *param_4;
  param_1[0xac] = uVar1;
  param_1[0xad] = uVar1;
  uVar1 = *param_4;
  param_1[0xae] = uVar1;
  param_1[0xaf] = uVar1;
  uVar1 = *param_4;
  param_1[0xb0] = uVar1;
  param_1[0xb1] = uVar1;
  uVar1 = *param_4;
  param_1[0xb2] = uVar1;
  param_1[0xb3] = uVar1;
  uVar1 = *param_4;
  param_1[0xb4] = uVar1;
  param_1[0xb5] = uVar1;
  uVar1 = *param_4;
  param_1[0xb6] = uVar1;
  param_1[0xb7] = uVar1;
  uVar1 = *param_4;
  param_1[0xb8] = uVar1;
  param_1[0xb9] = uVar1;
  uVar1 = *param_4;
  param_1[0xba] = uVar1;
  param_1[0xbb] = uVar1;
  uVar1 = *param_4;
  param_1[0xbc] = uVar1;
  param_1[0xbd] = uVar1;
  uVar1 = *param_4;
  param_1[0xbe] = uVar1;
  param_1[0xbf] = uVar1;
  uVar1 = *param_4;
  param_1[0xc0] = uVar1;
  param_1[0xc1] = uVar1;
  uVar1 = *param_4;
  param_1[0xc2] = uVar1;
  param_1[0xc3] = uVar1;
  uVar1 = *param_4;
  param_1[0xc4] = uVar1;
  param_1[0xc5] = uVar1;
  uVar1 = *param_4;
  param_1[0xc6] = uVar1;
  param_1[199] = uVar1;
  uVar1 = *param_4;
  param_1[200] = uVar1;
  param_1[0xc9] = uVar1;
  uVar1 = *param_4;
  param_1[0xca] = uVar1;
  param_1[0xcb] = uVar1;
  uVar1 = *param_4;
  param_1[0xcc] = uVar1;
  param_1[0xcd] = uVar1;
  uVar1 = *param_4;
  param_1[0xce] = uVar1;
  param_1[0xcf] = uVar1;
  uVar1 = *param_4;
  param_1[0xd0] = uVar1;
  param_1[0xd1] = uVar1;
  uVar1 = *param_4;
  param_1[0xd2] = uVar1;
  param_1[0xd3] = uVar1;
  uVar1 = *param_4;
  param_1[0xd4] = uVar1;
  param_1[0xd5] = uVar1;
  uVar1 = *param_4;
  param_1[0xd6] = uVar1;
  param_1[0xd7] = uVar1;
  uVar1 = *param_4;
  param_1[0xd8] = uVar1;
  param_1[0xd9] = uVar1;
  uVar1 = *param_4;
  param_1[0xda] = uVar1;
  param_1[0xdb] = uVar1;
  uVar1 = *param_4;
  param_1[0xdc] = uVar1;
  param_1[0xdd] = uVar1;
  uVar1 = *param_4;
  param_1[0xde] = uVar1;
  param_1[0xdf] = uVar1;
  uVar1 = *param_4;
  param_1[0xe0] = uVar1;
  param_1[0xe1] = uVar1;
  uVar1 = *param_4;
  param_1[0xe2] = uVar1;
  param_1[0xe3] = uVar1;
  uVar1 = *param_4;
  param_1[0xe4] = uVar1;
  param_1[0xe5] = uVar1;
  uVar1 = *param_4;
  param_1[0xe6] = uVar1;
  param_1[0xe7] = uVar1;
  uVar1 = *param_4;
  param_1[0xe8] = uVar1;
  param_1[0xe9] = uVar1;
  uVar1 = *param_4;
  param_1[0xea] = uVar1;
  param_1[0xeb] = uVar1;
  uVar1 = *param_4;
  param_1[0xec] = uVar1;
  param_1[0xed] = uVar1;
  uVar1 = *param_4;
  param_1[0xee] = uVar1;
  param_1[0xef] = uVar1;
  uVar1 = *param_4;
  param_1[0xf0] = uVar1;
  param_1[0xf1] = uVar1;
  uVar1 = *param_4;
  param_1[0xf2] = uVar1;
  param_1[0xf3] = uVar1;
  uVar1 = *param_4;
  param_1[0xf4] = uVar1;
  param_1[0xf5] = uVar1;
  uVar1 = *param_4;
  param_1[0xf6] = uVar1;
  param_1[0xf7] = uVar1;
  uVar1 = *param_4;
  param_1[0xf8] = uVar1;
  param_1[0xf9] = uVar1;
  uVar1 = *param_4;
  param_1[0xfa] = uVar1;
  param_1[0xfb] = uVar1;
  uVar1 = *param_4;
  param_1[0xfc] = uVar1;
  param_1[0xfd] = uVar1;
  uVar1 = *param_4;
  param_1[0xfe] = uVar1;
  param_1[0xff] = uVar1;
  return;
}



// FUNCTION 146f7ce4e FUN_146f7ce4e body=101 status=ok
// SIG undefined FUN_146f7ce4e(void)

void FUN_146f7ce4e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0xc18 + *param_1);
  FUN_146f7c133(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xc18 + (longlong)_Dst),(longlong)iVar2 * 0xc18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f7ceb4 FUN_146f7ceb4 body=63 status=ok
// SIG undefined FUN_146f7ceb4(void)

void FUN_146f7ceb4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f7cef4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc18,8);
  }
  return;
}



// FUNCTION 146f7cef4 FUN_146f7cef4 body=115 status=ok
// SIG undefined FUN_146f7cef4(void)

ulonglong FUN_146f7cef4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc18,8);
      uVar1 = uVar1 / 0xc18;
    }
  }
  return uVar1;
}



// FUNCTION 146f7cf68 FUN_146f7cf68 body=91 status=ok
// SIG undefined FUN_146f7cf68(void)

void FUN_146f7cf68(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + 0xffU) >> 8;
  FUN_146f7cfc4(param_1,iVar1);
  FUN_146f7c540(param_1,iVar1,1);
  if (0 < iVar1) {
    *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) =
         (param_2 + 0xffU & 0xff) + 1;
  }
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f7cfc4 FUN_146f7cfc4 body=68 status=ok
// SIG undefined FUN_146f7cfc4(void)

void FUN_146f7cfc4(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146f7c133(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146f7d00a(param_1,param_2);
  return;
}



// FUNCTION 146f7d00a FUN_146f7d00a body=112 status=ok
// SIG undefined FUN_146f7d00a(void)

void FUN_146f7d00a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc18)) {
      uVar2 = uVar1 / 0xc18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc18,8);
  }
  return;
}



// FUNCTION 146f7d07a FUN_146f7d07a body=194 status=ok
// SIG undefined FUN_146f7d07a(void)

longlong * FUN_146f7d07a(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f7d13c(param_1,param_2 + 0x20);
  FUN_1447e46aa(param_1,param_2 + 0x70);
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f7d13c FUN_146f7d13c body=341 status=ok
// SIG undefined FUN_146f7d13c(void)

longlong * FUN_146f7d13c(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x40) * 0x30,
             (longlong)*(int *)(param_2 + 0x44) * 0x30);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x40);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f7d292(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x55555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x40) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == 0) {
        lVar4 = param_2;
      }
      FUN_146f7d2df(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x30;
    } while (lVar7 < *(int *)(param_2 + 0x40));
  }
  else {
    FUN_146f7d292(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f7d34e(param_2);
        FUN_146f7d2df(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f7d292 FUN_146f7d292 body=76 status=ok
// SIG undefined FUN_146f7d292(void)

void FUN_146f7d292(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
  }
  FUN_146f7c0fd(lVar1,*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) == param_2) {
    return;
  }
  FUN_146f7d39e(param_1,param_2);
  return;
}



// FUNCTION 146f7d2df FUN_146f7d2df body=111 status=ok
// SIG undefined FUN_146f7d2df(void)

longlong * FUN_146f7d2df(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_146f7d404();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1447e46aa(param_1,param_2 + 0x20);
  return param_1;
}



// FUNCTION 146f7d34e FUN_146f7d34e body=79 status=ok
// SIG undefined FUN_146f7d34e(void)

longlong FUN_146f7d34e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_146f7d798(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x30 + lVar2;
  FUN_146f7d763(lVar2,1);
  return lVar2;
}



// FUNCTION 146f7d39e FUN_146f7d39e body=102 status=ok
// SIG undefined FUN_146f7d39e(void)

void FUN_146f7d39e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x30,0);
    uVar2 = (uint)(uVar1 / 0x30);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x44)) {
    return;
  }
  *(uint *)(param_1 + 0x44) = uVar3;
  FUN_146f7c254(param_1,*(undefined4 *)(param_1 + 0x40),uVar3,0x30);
  return;
}



// FUNCTION 146f7d404 FUN_146f7d404 body=358 status=ok
// SIG undefined FUN_146f7d404(void)

longlong * FUN_146f7d404(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f7c133(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146f7d00a(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x152a < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146f7d56b(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146f7cfc4(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f7d720(param_2);
        FUN_146f7d56b(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f7d56b FUN_146f7d56b body=436 status=ok
// SIG undefined FUN_146f7d56b(void)

longlong * FUN_146f7d56b(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  FUN_146c4db8e();
  piVar1 = (int *)(param_2 + 0xc10);
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,piVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_1,piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (0 < *piVar1) {
    puVar4 = (undefined4 *)(param_2 + 0x10);
    lVar5 = 0;
    do {
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
        }
        else {
          thunk_FUN_14572512c(param_1,puVar4);
        }
      }
      else {
        *puVar4 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar5 < *piVar1);
    if (0 < *piVar1) {
      puVar4 = (undefined4 *)(param_2 + 0x410);
      lVar5 = 0;
      do {
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar4);
          }
        }
        else {
          *puVar4 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        lVar5 = lVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar5 < *piVar1);
      if (0 < *piVar1) {
        puVar4 = (undefined4 *)(param_2 + 0x810);
        lVar5 = 0;
        do {
          puVar3 = *(undefined4 **)param_1[1];
          if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
            }
            else {
              thunk_FUN_14572512c(param_1,puVar4);
            }
          }
          else {
            *puVar4 = *puVar3;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
          }
          lVar5 = lVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (lVar5 < *piVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 146f7d720 FUN_146f7d720 body=67 status=ok
// SIG undefined FUN_146f7d720(void)

longlong FUN_146f7d720(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f7c5f0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc18 + *param_1;
  FUN_146f7c5c7(lVar2,1);
  return lVar2;
}



// FUNCTION 146f7d763 FUN_146f7d763 body=53 status=ok
// SIG undefined FUN_146f7d763(void)

void FUN_146f7d763(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x2c;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + -0x2c) = 0;
      *(undefined8 *)(param_1 + -0x24) = 0;
      *(undefined4 *)(param_1 + -0x1c) = 0;
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f7d798 FUN_146f7d798 body=145 status=ok
// SIG undefined FUN_146f7d798(void)

void FUN_146f7d798(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x44) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x30,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
        uVar5 = uVar4 / 0x30 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x44) = (int)uVar5;
    FUN_146f7c254(param_1,param_2,uVar5,0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f7d82a FUN_146f7d82a body=514 status=ok
// SIG undefined FUN_146f7d82a(void)

void FUN_146f7d82a(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined4 *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong *local_90;
  uint local_88;
  uint uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  ulonglong uStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_90 = param_2 + 2;
  local_98 = 0x100000000;
  local_88 = 0xffffffff;
  uStack_84 = 0;
  local_80 = 0;
  local_c8 = param_3;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_98);
  }
  local_b8 = local_98;
  local_b0 = local_90;
  local_a8 = local_88;
  uStack_a4 = uStack_84;
  local_a0 = local_80;
  local_9c = local_7c;
  local_c0 = param_2;
  if ((int)uStack_84 < (int)local_90[3]) {
    do {
      uVar10 = uStack_a4;
      iVar4 = *(int *)(*param_2 + (longlong)(int)uStack_a4 * 8);
      if (local_68 <= iVar4) {
        FUN_146f7c44a(&local_78,iVar4 + 1,local_c8);
      }
      uVar12 = (ulonglong)(uVar10 & 0xff);
      lVar11 = (longlong)((int)uVar10 >> 8) * 0xc18;
      lVar1 = *param_1 + lVar11;
      iVar5 = *(int *)(lVar1 + 0x410 + uVar12 * 4);
      iVar6 = *(int *)(lVar1 + 0x10 + uVar12 * 4);
      lVar1 = *(longlong *)(*param_1 + lVar11);
      local_d0 = 0;
      local_d8 = 1;
      FUN_146f7da2e(&local_78,&local_98,iVar4,iVar5);
      if (0 < (longlong)iVar5) {
        lVar11 = 0;
        do {
          puVar2 = (undefined4 *)((longlong)iVar6 * 0x10 + lVar1 + lVar11);
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar3 = (undefined4 *)(local_98 + lVar11);
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          lVar11 = lVar11 + 0x10;
        } while ((longlong)iVar5 * 0x10 != lVar11);
      }
      local_a8 = local_a8 & ~local_b8._4_4_;
      FUN_1449c0562(&local_b8);
    } while ((int)uStack_a4 < (int)local_b0[3]);
  }
  FUN_146f7dbd6(param_1,&local_78);
  *(int *)(param_1 + 2) = local_68;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_64;
  *(undefined4 *)(param_1 + 3) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_5c;
  *(undefined4 *)(param_1 + 4) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_54;
  *(undefined4 *)(param_1 + 5) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_4c;
  FUN_146f7c133(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7da2e FUN_146f7da2e body=424 status=ok
// SIG undefined FUN_146f7da2e(void)

void FUN_146f7da2e(longlong *param_1,longlong *param_2,ulonglong param_3,int param_4,char param_5,
                  char param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Src;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar10 = param_3 & 0xff;
  lVar7 = *param_1;
  lVar9 = (longlong)((int)param_3 >> 8) * 0xc18;
  plVar1 = (longlong *)(lVar7 + lVar9);
  piVar3 = (int *)((longlong)plVar1 + uVar10 * 4 + 0x810);
  uVar8 = param_4 - *piVar3;
  if (uVar8 == 0 || param_4 < *piVar3) {
    lVar11 = *(longlong *)(lVar7 + lVar9);
  }
  else {
    lVar6 = plVar1[1];
    FUN_14056a44c(plVar1,(int)lVar6 + uVar8,CONCAT71((uint7)(uint3)(int3)(short)(param_3 >> 0x10),1)
                 );
    lVar11 = *plVar1;
    _Src = (void *)((longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x810) * 0x10 +
                   (longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) * 0x10 + lVar11);
    memmove((void *)((ulonglong)uVar8 * 0x10 + (longlong)_Src),_Src,
            ((longlong)(int)lVar6 * 0x10 + lVar11) - (longlong)_Src);
    *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810) = param_4;
    if ((int)uVar10 + 1 < (int)plVar1[0x182]) {
      uVar5 = uVar10;
      do {
        piVar3 = (int *)(lVar9 + lVar7 + 0x14 + uVar5 * 4);
        *piVar3 = *piVar3 + uVar8;
        lVar6 = uVar5 + 2;
        uVar5 = uVar5 + 1;
      } while (lVar6 < (int)plVar1[0x182]);
    }
  }
  if (param_6 != '\0') {
    iVar4 = *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410);
    lVar7 = (longlong)iVar4;
    if (iVar4 < param_4) {
      if (iVar4 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810)) {
        do {
          lVar9 = param_1[5];
          plVar2 = (longlong *)
                   (*plVar1 + (*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) + lVar7) * 0x10);
          *plVar2 = param_1[4];
          plVar2[1] = lVar9;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810));
      }
    }
    else if (param_4 < iVar4) {
      lVar7 = (longlong)param_4;
      do {
        lVar9 = param_1[5];
        plVar2 = (longlong *)
                 (*plVar1 + (*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) + lVar7) * 0x10);
        *plVar2 = param_1[4];
        plVar2[1] = lVar9;
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410));
    }
  }
  if (param_5 == '\0') {
    param_4 = *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410);
  }
  else {
    *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410) = param_4;
  }
  *param_2 = lVar11 + (longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) * 0x10;
  *(int *)(param_2 + 1) = param_4;
  return;
}



// FUNCTION 146f7dbd6 FUN_146f7dbd6 body=80 status=ok
// SIG undefined FUN_146f7dbd6(void)

longlong * FUN_146f7dbd6(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146f7c133(*param_1,(int)param_1[1]);
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



// FUNCTION 146f7dc26 FUN_146f7dc26 body=146 status=ok
// SIG undefined FUN_146f7dc26(void)

void FUN_146f7dc26(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x40) = param_2;
    if ((uint)(*(int *)(param_1 + 0x44) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f7d798(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar2 = param_1;
    }
    FUN_146f7d763((longlong)iVar1 * 0x30 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f7dcba(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f7dd2e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f7dcba FUN_146f7dcba body=115 status=ok
// SIG undefined FUN_146f7dcba(void)

void FUN_146f7dcba(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((longlong)param_2 * 0x30 + lVar2);
  FUN_146f7c0fd(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x40);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar3 * 0x30);
    iVar1 = *(int *)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x40) = iVar1 - param_3;
  return;
}



// FUNCTION 146f7dd2e FUN_146f7dd2e body=59 status=ok
// SIG undefined FUN_146f7dd2e(void)

void FUN_146f7dd2e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f7dd6a(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (iVar1 == *(int *)(param_1 + 0x44)) {
    return;
  }
  *(int *)(param_1 + 0x44) = iVar1;
  FUN_146f7c254(param_1,*(undefined4 *)(param_1 + 0x40),iVar1,0x30);
  return;
}



// FUNCTION 146f7dd6a FUN_146f7dd6a body=126 status=ok
// SIG undefined FUN_146f7dd6a(void)

ulonglong FUN_146f7dd6a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x30) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,0);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 146f7dde8 FUN_146f7dde8 body=117 status=ok
// SIG undefined FUN_146f7dde8(void)

void FUN_146f7dde8(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)(int)param_2 * 0x30;
  FUN_146f7c133(*(undefined8 *)(lVar2 + lVar3),*(undefined4 *)(lVar2 + 8 + lVar3));
  if (*(longlong *)(lVar2 + lVar3) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(lVar2 + lVar3),(void *)(lVar2 + lVar3 + 0x30),
            (longlong)(int)(~param_2 + iVar1) * 0x30);
    iVar1 = *(int *)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x40) = iVar1 + -1;
  return;
}



// FUNCTION 146f7de5e FUN_146f7de5e body=116 status=ok
// SIG undefined FUN_146f7de5e(void)

undefined8 * FUN_146f7de5e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa76f0;
  puVar4[6] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f7e242(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x38),0);
  *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(param_1 + 0x48);
  puVar4[8] = *(undefined8 *)(param_1 + 0x40);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f7ded2 FUN_146f7ded2 body=100 status=ok
// SIG undefined FUN_146f7ded2(void)

void FUN_146f7ded2(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f7e40c(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  iVar2 = param_2 + 1;
  if (param_2 + 1 <= *(int *)(param_1 + 0x10)) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 146f7df36 FUN_146f7df36 body=104 status=ok
// SIG undefined FUN_146f7df36(void)

void FUN_146f7df36(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  plVar3 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x38) * 3;
    do {
      uVar5 = *(uint *)(plVar3 + 2);
      if (uVar5 != 0) {
        uVar4 = 0;
        do {
          lVar2 = *plVar3;
          lVar6 = (longlong)(int)(uVar5 * param_2 + uVar4);
          *(undefined4 *)(lVar2 + 8 + lVar6 * 0xc) = *(undefined4 *)(param_1 + 0x48);
          *(undefined8 *)(lVar2 + lVar6 * 0xc) = *(undefined8 *)(param_1 + 0x40);
          uVar4 = uVar4 + 1;
          uVar5 = *(uint *)(plVar3 + 2);
        } while (uVar4 < uVar5);
      }
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar1);
  }
  return;
}



// FUNCTION 146f7df9e FUN_146f7df9e body=113 status=ok
// SIG undefined FUN_146f7df9e(void)

void FUN_146f7df9e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_1458c3240(lVar1,*(int *)(lVar1 + 0x10) * param_2);
      if (0 < param_2) {
        FUN_146f7e40c(lVar1,param_2 + -1,param_1 + 0x40);
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f7e010 FUN_146f7e010 body=86 status=ok
// SIG undefined FUN_146f7e010(void)

void FUN_146f7e010(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f7e476(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f7e066 FUN_146f7e066 body=87 status=ok
// SIG undefined FUN_146f7e066(void)

ulonglong FUN_146f7e066(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    do {
      uVar2 = (*(code *)PTR_FUN_14c75b148)
                        (*(undefined8 *)(lVar4 + lVar3),*(int *)(lVar4 + 8 + lVar3) * 0xc,
                         uVar2 & 0xffffffff);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  return uVar2;
}



// FUNCTION 146f7e0cc FUN_146f7e0cc body=99 status=ok
// SIG undefined FUN_146f7e0cc(void)

void FUN_146f7e0cc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f7e91c(lVar2,param_2,param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(lVar2 + 8) / *(uint *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f7e140 FUN_146f7e140 body=33 status=ok
// SIG undefined FUN_146f7e140(void)

void FUN_146f7e140(longlong param_1)

{
  FUN_146f7eca2(param_1 + 0x18);
  FUN_146f7ebe8(param_1 + 0x18);
  return;
}



// FUNCTION 146f7e166 FUN_146f7e166 body=186 status=ok
// SIG undefined FUN_146f7e166(void)

void FUN_146f7e166(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == iVar2) {
    FUN_146f7e88a(lVar1,iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  lVar4 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar5 + lVar4 + 0x18),(void *)(lVar5 + lVar4),
          (ulonglong)(uint)(iVar2 - param_2) * 0x18);
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined8 *)(lVar5 + lVar4) = 0;
  ((undefined8 *)(lVar5 + lVar4))[1] = 0;
  *(int *)(lVar5 + 0x10 + lVar4) = iVar2;
  iVar3 = *(int *)(param_1 + 0x10);
  FUN_1458c3240(lVar5 + lVar4,iVar2 * iVar3);
  if (iVar3 < 1) {
    return;
  }
  FUN_146f7e40c(lVar5 + lVar4,iVar3 + -1,param_1 + 0x40);
  return;
}



// FUNCTION 146f7e220 FUN_146f7e220 body=33 status=ok
// SIG undefined FUN_146f7e220(void)

void FUN_146f7e220(longlong param_1)

{
  FUN_146f7eca2(param_1 + 0x18);
  FUN_146f7ebe8(param_1 + 0x18);
  return;
}



// FUNCTION 146f7e242 FUN_146f7e242 body=86 status=ok
// SIG undefined FUN_146f7e242(void)

void FUN_146f7e242(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f7e298(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f7e2ff(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f7e298 FUN_146f7e298 body=103 status=ok
// SIG undefined FUN_146f7e298(void)

void FUN_146f7e298(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f7e37e(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f7e2ff FUN_146f7e2ff body=126 status=ok
// SIG undefined FUN_146f7e2ff(void)

void FUN_146f7e2ff(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_140c0b9de(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f7e37e FUN_146f7e37e body=141 status=ok
// SIG undefined FUN_146f7e37e(void)

void FUN_146f7e37e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f7e40c FUN_146f7e40c body=105 status=ok
// SIG undefined FUN_146f7e40c(void)

void FUN_146f7e40c(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = (param_2 + 1) * (int)param_1[2];
  iVar1 = (int)param_1[1];
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 1) = iVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(iVar3 - iVar1)) {
      FUN_140c0b6f2(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0xc + *param_1);
    iVar3 = iVar3 - iVar1;
    do {
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar2 = *param_3;
      puVar2 = (undefined8 *)((longlong)puVar2 + 0xc);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 146f7e476 FUN_146f7e476 body=28 status=ok
// SIG undefined FUN_146f7e476(void)

void FUN_146f7e476(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) * param_2;
  if (iVar1 < *(int *)(param_1 + 8)) {
    FUN_146bca1c8(param_1,iVar1,1);
    return;
  }
  FUN_146f7e40c(param_1,param_2 + -1);
  return;
}



// FUNCTION 146f7e492 FUN_146f7e492 body=194 status=ok
// SIG undefined FUN_146f7e492(void)

longlong * FUN_146f7e492(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f7e554(param_1,param_2 + 0x18);
  FUN_1447712aa(param_1,param_2 + 0x40);
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f7e554 FUN_146f7e554 body=341 status=ok
// SIG undefined FUN_146f7e554(void)

longlong * FUN_146f7e554(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x20) * 0x18,
             (longlong)*(int *)(param_2 + 0x24) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x20);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f7e6aa(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x20) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (*(longlong *)(param_2 + 0x18) == 0) {
        lVar4 = param_2;
      }
      FUN_146f7e6f7(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f7e6aa(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f7e7be(param_2);
        FUN_146f7e6f7(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f7e6aa FUN_146f7e6aa body=76 status=ok
// SIG undefined FUN_146f7e6aa(void)

void FUN_146f7e6aa(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_14583900c(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f7e80a(param_1,param_2);
  return;
}



// FUNCTION 146f7e6f7 FUN_146f7e6f7 body=199 status=ok
// SIG undefined FUN_146f7e6f7(void)

longlong * FUN_146f7e6f7(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*(byte *)(param_1 + 5) & 1) == 0) ||
      (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 == 0x1f)) ||
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e3cc78), 3 < iVar2)) {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 1;
  }
  if (((*(byte *)(param_1 + 5) & 1) != 0) &&
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 < 0x11)) {
    FUN_146c978d6(param_1,param_2);
    return param_1;
  }
  FUN_1406781f6(param_2,param_1,0);
  return param_1;
}



// FUNCTION 146f7e7be FUN_146f7e7be body=76 status=ok
// SIG undefined FUN_146f7e7be(void)

longlong FUN_146f7e7be(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f7e88a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f7e870(lVar2,1);
  return lVar2;
}



// FUNCTION 146f7e80a FUN_146f7e80a body=102 status=ok
// SIG undefined FUN_146f7e80a(void)

void FUN_146f7e80a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  FUN_146f7e37e(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f7e870 FUN_146f7e870 body=26 status=ok
// SIG undefined FUN_146f7e870(void)

void FUN_146f7e870(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f7e88a FUN_146f7e88a body=145 status=ok
// SIG undefined FUN_146f7e88a(void)

void FUN_146f7e88a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_146f7e37e(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f7e91c FUN_146f7e91c body=461 status=ok
// SIG undefined FUN_146f7e91c(void)

void FUN_146f7e91c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  int local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (int)param_1[2];
  local_78 = 0;
  uStack_70 = 0;
  local_58 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_98 = local_60;
  local_90 = local_58;
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_a0 = param_2;
  if (iStack_4c < (int)local_58[3]) {
    do {
      iVar2 = iStack_84;
      iVar1 = *(int *)(*param_2 + (longlong)iStack_84 * 8);
      FUN_146f7e40c(&local_78);
      if ((int)param_1[2] != 0) {
        lVar3 = (longlong)(iVar1 * local_68) * 0xc + local_78;
        lVar4 = (longlong)((int)param_1[2] * iVar2) * 0xc + *param_1;
        lVar5 = 0;
        uVar6 = 0;
        do {
          *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar4 + 8 + lVar5);
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar4 + lVar5);
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0xc;
        } while (uVar6 < *(uint *)(param_1 + 2));
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < (int)local_90[3]);
  }
  if (&local_78 == param_1) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_78;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7eaea FUN_146f7eaea body=143 status=ok
// SIG undefined FUN_146f7eaea(void)

void FUN_146f7eaea(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f7e88a(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f7e870(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f7eb7a(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f7ebe8(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f7eb7a FUN_146f7eb7a body=109 status=ok
// SIG undefined FUN_146f7eb7a(void)

void FUN_146f7eb7a(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 0x18);
  FUN_14583900c(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f7ebe8 FUN_146f7ebe8 body=59 status=ok
// SIG undefined FUN_146f7ebe8(void)

void FUN_146f7ebe8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f7ec24(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f7e37e(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f7ec24 FUN_146f7ec24 body=126 status=ok
// SIG undefined FUN_146f7ec24(void)

ulonglong FUN_146f7ec24(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f7eca2 FUN_146f7eca2 body=97 status=ok
// SIG undefined FUN_146f7eca2(void)

void FUN_146f7eca2(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  if (*(longlong *)(lVar2 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (~param_2 + iVar1 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  return;
}



// FUNCTION 146f7ed04 FUN_146f7ed04 body=42 status=ok
// SIG undefined FUN_146f7ed04(void)

longlong FUN_146f7ed04(longlong param_1,int param_2)

{
  FUN_146f7f1ac(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f7ed2e FUN_146f7ed2e body=116 status=ok
// SIG undefined FUN_146f7ed2e(void)

undefined8 * FUN_146f7ed2e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa7780;
  puVar4[7] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x38);
  }
  FUN_146f7f246(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x40),0);
  *(undefined4 *)(puVar4 + 10) = *(undefined4 *)(param_1 + 0x50);
  puVar4[9] = *(undefined8 *)(param_1 + 0x48);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f7eda2 FUN_146f7eda2 body=112 status=ok
// SIG undefined FUN_146f7eda2(void)

void FUN_146f7eda2(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x40) << 5;
    do {
      if (*(int *)(lVar2 + 0x10) <= param_2) {
        FUN_146f7f50e(lVar2,param_2 + 1,param_1 + 0x48);
      }
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < param_2 + 1) {
    iVar1 = param_2 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}



// FUNCTION 146f7ee62 FUN_146f7ee62 body=82 status=ok
// SIG undefined FUN_146f7ee62(void)

void FUN_146f7ee62(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) << 5;
    do {
      FUN_146f7f908(lVar1,param_2,param_1 + 0x48);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f7eeb4 FUN_146f7eeb4 body=82 status=ok
// SIG undefined FUN_146f7eeb4(void)

void FUN_146f7eeb4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) << 5;
    do {
      FUN_146f7f50e(lVar1,param_2,param_1 + 0x48);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f7ef06 FUN_146f7ef06 body=127 status=ok
// SIG undefined FUN_146f7ef06(void)

ulonglong FUN_146f7ef06(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x40) * 4;
    uVar3 = 0;
    do {
      lVar2 = plVar4[1];
      if ((longlong)(int)lVar2 != 0) {
        lVar1 = *plVar4;
        lVar6 = 0;
        do {
          uVar3 = (*(code *)PTR_FUN_14c75b148)
                            (*(undefined8 *)(lVar1 + lVar6),*(int *)(lVar1 + 8 + lVar6) * 0xc,
                             uVar3 & 0xffffffff);
          lVar6 = lVar6 + 0xc18;
        } while ((longlong)(int)lVar2 * 0xc18 - lVar6 != 0);
      }
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar5);
  }
  return uVar3;
}



// FUNCTION 146f7ef94 FUN_146f7ef94 body=93 status=ok
// SIG undefined FUN_146f7ef94(void)

void FUN_146f7ef94(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x20 + lVar1;
    do {
      FUN_146f8017e(lVar1,param_2,param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != lVar2);
  }
  return;
}



// FUNCTION 146f7f002 FUN_146f7f002 body=33 status=ok
// SIG undefined FUN_146f7f002(void)

void FUN_146f7f002(longlong param_1)

{
  FUN_146f80758(param_1 + 0x18);
  FUN_146f806b2(param_1 + 0x18);
  return;
}



// FUNCTION 146f7f028 FUN_146f7f028 body=183 status=ok
// SIG undefined FUN_146f7f028(void)

void FUN_146f7f028(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = param_1 + 0x18;
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 <= param_2) {
    if (iVar4 < param_2) {
      do {
        *(uint *)(param_1 + 0x40) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x44) < iVar4 + 1U) {
          FUN_146f800fa(lVar1,iVar4);
        }
        lVar2 = *(longlong *)(param_1 + 0x38);
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar2 = lVar1;
        }
        lVar3 = (longlong)iVar4 * 0x20;
        *(undefined8 *)(lVar2 + lVar3) = 0;
        ((undefined8 *)(lVar2 + lVar3))[1] = 0;
        *(undefined4 *)(lVar2 + 0x10 + lVar3) = 0;
        *(undefined8 *)(lVar2 + 0x14 + lVar3) = *(undefined8 *)(param_1 + 0x48);
        *(undefined4 *)(lVar2 + 0x1c + lVar3) = *(undefined4 *)(param_1 + 0x50);
        FUN_146f7f908(lVar2 + lVar3,*(undefined4 *)(param_1 + 0x10),(undefined8 *)(param_1 + 0x48));
        iVar4 = *(int *)(param_1 + 0x40);
      } while (iVar4 < param_2);
    }
    return;
  }
  FUN_146f805b6(lVar1,param_2,1);
  return;
}



// FUNCTION 146f7f0e0 FUN_146f7f0e0 body=169 status=ok
// SIG undefined FUN_146f7f0e0(void)

void FUN_146f7f0e0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar2 + 1;
  if (*(int *)(param_1 + 0x44) == iVar2) {
    FUN_146f800fa(lVar1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar3 = lVar1;
  }
  lVar4 = (longlong)param_2 * 0x20;
  memmove((void *)(lVar3 + lVar4 + 0x20),(void *)(lVar3 + lVar4),
          (ulonglong)(uint)(iVar2 - param_2) << 5);
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar3 = lVar1;
  }
  *(undefined8 *)(lVar3 + lVar4) = 0;
  ((undefined8 *)(lVar3 + lVar4))[1] = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 0x1c + lVar4) = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(lVar3 + 0x14 + lVar4) = *(undefined8 *)(param_1 + 0x48);
  FUN_146f7f908(lVar3 + lVar4,*(undefined4 *)(param_1 + 0x10),param_1 + 0x48);
  return;
}



// FUNCTION 146f7f18a FUN_146f7f18a body=33 status=ok
// SIG undefined FUN_146f7f18a(void)

void FUN_146f7f18a(longlong param_1)

{
  FUN_146f80758(param_1 + 0x18);
  FUN_146f806b2(param_1 + 0x18);
  return;
}



// FUNCTION 146f7f1ac FUN_146f7f1ac body=53 status=ok
// SIG undefined FUN_146f7f1ac(void)

void FUN_146f7f1ac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_146f7f1e1(lVar1,*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f7f1e1 FUN_146f7f1e1 body=54 status=ok
// SIG undefined FUN_146f7f1e1(void)

void FUN_146f7f1e1(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f7f217(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 146f7f217 FUN_146f7f217 body=46 status=ok
// SIG undefined FUN_146f7f217(void)

void FUN_146f7f217(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x183;
  }
  return;
}



// FUNCTION 146f7f246 FUN_146f7f246 body=86 status=ok
// SIG undefined FUN_146f7f246(void)

void FUN_146f7f246(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x28) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    return;
  }
  FUN_146f7f29c(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_146f7f2f2(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f7f29c FUN_146f7f29c body=86 status=ok
// SIG undefined FUN_146f7f29c(void)

void FUN_146f7f29c(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
    uVar1 = (uint)(uVar2 >> 5);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f7f326(param_1,0,uVar3,0x20);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 146f7f2f2 FUN_146f7f2f2 body=52 status=ok
// SIG undefined FUN_146f7f2f2(void)

void FUN_146f7f2f2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146f7f3ac(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 146f7f326 FUN_146f7f326 body=133 status=ok
// SIG undefined FUN_146f7f326(void)

void FUN_146f7f326(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f7f3ac FUN_146f7f3ac body=92 status=ok
// SIG undefined FUN_146f7f3ac(void)

undefined8 * FUN_146f7f3ac(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146f7f408(param_1,iVar1,0);
    FUN_146f7f47a(*param_1,uVar2,iVar1);
  }
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  return param_1;
}



// FUNCTION 146f7f408 FUN_146f7f408 body=114 status=ok
// SIG undefined FUN_146f7f408(void)

void FUN_146f7f408(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    iVar2 = (int)(uVar1 / 0xc18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f7f47a FUN_146f7f47a body=147 status=ok
// SIG undefined FUN_146f7f47a(void)

void FUN_146f7f47a(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  void *_Src_00;
  
  if (param_3 != 0) {
    _Src_00 = (void *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)((longlong)_Src_00 + -8);
      _Src = *(void **)((longlong)_Src_00 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_140c0b9de(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
      memcpy(param_1 + 2,_Src_00,0xc04);
      param_1 = param_1 + 0x183;
      _Src_00 = (void *)((longlong)_Src_00 + 0xc18);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f7f50e FUN_146f7f50e body=245 status=ok
// SIG undefined FUN_146f7f50e(void)

void FUN_146f7f50e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = param_1[1];
  uVar4 = param_2 + 0xff;
  iVar3 = (int)uVar4 >> 8;
  FUN_146f7f604(param_1,iVar3,1);
  uVar6 = *(uint *)(param_1 + 2);
  if (param_2 < (int)uVar6) {
    if (iVar3 < 1) goto LAB_146f7f565;
    uVar4 = (uVar4 & 0xff) + 1;
  }
  else {
    if (param_2 <= (int)uVar6) goto LAB_146f7f565;
    uVar6 = uVar6 & 0xff;
    uVar7 = (ulonglong)uVar6;
    uVar4 = (uVar4 & 0xff) + 1;
    if (uVar7 != 0) {
      uVar5 = 0x100;
      if (iVar3 == (int)lVar1) {
        uVar5 = uVar4;
      }
      lVar2 = (longlong)(int)lVar1 * 0xc18;
      lVar1 = *param_1 + lVar2;
      iVar3 = *(int *)(lVar1 + -0x408 + (ulonglong)(uVar6 - 1) * 4) +
              *(int *)(lVar1 + -0xc08 + (ulonglong)(uVar6 - 1) * 4);
      FUN_146bca1c8(lVar2 + *param_1 + -0xc18,iVar3,0);
      if (uVar6 < uVar5) {
        do {
          *(int *)(lVar1 + -0xc08 + uVar7 * 4) = iVar3;
          *(undefined4 *)(lVar1 + -0x808 + uVar7 * 4) = 0;
          *(undefined4 *)(lVar1 + -0x408 + uVar7 * 4) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
      *(uint *)(lVar1 + -8) = uVar5;
    }
  }
  *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) = uVar4;
LAB_146f7f565:
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f7f604 FUN_146f7f604 body=134 status=ok
// SIG undefined FUN_146f7f604(void)

void FUN_146f7f604(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f7f6b4(param_1,iVar1);
    }
    FUN_146f7f68b((longlong)iVar1 * 0xc18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f7f7ee(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f7f854(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f7f68b FUN_146f7f68b body=41 status=ok
// SIG undefined FUN_146f7f68b(void)

void FUN_146f7f68b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f7f748(param_1);
    param_1 = param_1 + 0xc18;
  }
  return;
}



// FUNCTION 146f7f6b4 FUN_146f7f6b4 body=146 status=ok
// SIG undefined FUN_146f7f6b4(void)

void FUN_146f7f6b4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc18)) {
      uVar5 = uVar4 / 0xc18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f7f748 FUN_146f7f748 body=164 status=ok
// SIG undefined FUN_146f7f748(void)

undefined8 * FUN_146f7f748(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = 0;
  FUN_146f7c72a(param_1 + 2,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x82,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x102,0,param_3,&local_24);
  *(undefined4 *)(param_1 + 0x182) = 0x100;
  if (*(int *)((longlong)param_1 + 0xc) < 0x100) {
    FUN_140678446(param_1,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7f7ee FUN_146f7f7ee body=101 status=ok
// SIG undefined FUN_146f7f7ee(void)

void FUN_146f7f7ee(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0xc18 + *param_1);
  FUN_146f7f217(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xc18 + (longlong)_Dst),(longlong)iVar2 * 0xc18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f7f854 FUN_146f7f854 body=63 status=ok
// SIG undefined FUN_146f7f854(void)

void FUN_146f7f854(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f7f894(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc18,8);
  }
  return;
}



// FUNCTION 146f7f894 FUN_146f7f894 body=115 status=ok
// SIG undefined FUN_146f7f894(void)

ulonglong FUN_146f7f894(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc18,8);
      uVar1 = uVar1 / 0xc18;
    }
  }
  return uVar1;
}



// FUNCTION 146f7f908 FUN_146f7f908 body=91 status=ok
// SIG undefined FUN_146f7f908(void)

void FUN_146f7f908(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + 0xffU) >> 8;
  FUN_146f7f964(param_1,iVar1);
  FUN_146f7f604(param_1,iVar1,1);
  if (0 < iVar1) {
    *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) =
         (param_2 + 0xffU & 0xff) + 1;
  }
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f7f964 FUN_146f7f964 body=68 status=ok
// SIG undefined FUN_146f7f964(void)

void FUN_146f7f964(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146f7f217(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146f7f9aa(param_1,param_2);
  return;
}



// FUNCTION 146f7f9aa FUN_146f7f9aa body=112 status=ok
// SIG undefined FUN_146f7f9aa(void)

void FUN_146f7f9aa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc18)) {
      uVar2 = uVar1 / 0xc18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc18,8);
  }
  return;
}



// FUNCTION 146f7fa1a FUN_146f7fa1a body=194 status=ok
// SIG undefined FUN_146f7fa1a(void)

longlong * FUN_146f7fa1a(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f7fadc(param_1,param_2 + 0x18);
  FUN_1447712aa(param_1,param_2 + 0x48);
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f7fadc FUN_146f7fadc body=333 status=ok
// SIG undefined FUN_146f7fadc(void)

longlong * FUN_146f7fadc(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x28) << 5,(longlong)*(int *)(param_2 + 0x2c) << 5
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x28);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f7fc2a(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x28) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x20);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar4 = param_2;
      }
      FUN_146f7fc77(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar7 < *(int *)(param_2 + 0x28));
  }
  else {
    FUN_146f7fc2a(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f7fce6(param_2);
        FUN_146f7fc77(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f7fc2a FUN_146f7fc2a body=76 status=ok
// SIG undefined FUN_146f7fc2a(void)

void FUN_146f7fc2a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_146f7f1e1(lVar1,*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == param_2) {
    return;
  }
  FUN_146f7fd32(param_1,param_2);
  return;
}



// FUNCTION 146f7fc77 FUN_146f7fc77 body=111 status=ok
// SIG undefined FUN_146f7fc77(void)

longlong * FUN_146f7fc77(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_146f7fd88();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1447712aa(param_1,param_2 + 0x14);
  return param_1;
}



// FUNCTION 146f7fce6 FUN_146f7fce6 body=75 status=ok
// SIG undefined FUN_146f7fce6(void)

longlong FUN_146f7fce6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_146f800fa(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x20 + lVar2;
  FUN_146f800e7(lVar2,1);
  return lVar2;
}



// FUNCTION 146f7fd32 FUN_146f7fd32 body=85 status=ok
// SIG undefined FUN_146f7fd32(void)

void FUN_146f7fd32(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
    uVar1 = (uint)(uVar2 >> 5);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x2c)) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  FUN_146f7f326(param_1,*(undefined4 *)(param_1 + 0x28),uVar3,0x20);
  return;
}



// FUNCTION 146f7fd88 FUN_146f7fd88 body=358 status=ok
// SIG undefined FUN_146f7fd88(void)

longlong * FUN_146f7fd88(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f7f217(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146f7f9aa(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x152a < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146f7feef(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146f7f964(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f800a4(param_2);
        FUN_146f7feef(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f7feef FUN_146f7feef body=436 status=ok
// SIG undefined FUN_146f7feef(void)

longlong * FUN_146f7feef(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  FUN_146c978d6();
  piVar1 = (int *)(param_2 + 0xc10);
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,piVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_1,piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (0 < *piVar1) {
    puVar4 = (undefined4 *)(param_2 + 0x10);
    lVar5 = 0;
    do {
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
        }
        else {
          thunk_FUN_14572512c(param_1,puVar4);
        }
      }
      else {
        *puVar4 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar5 < *piVar1);
    if (0 < *piVar1) {
      puVar4 = (undefined4 *)(param_2 + 0x410);
      lVar5 = 0;
      do {
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar4);
          }
        }
        else {
          *puVar4 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        lVar5 = lVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar5 < *piVar1);
      if (0 < *piVar1) {
        puVar4 = (undefined4 *)(param_2 + 0x810);
        lVar5 = 0;
        do {
          puVar3 = *(undefined4 **)param_1[1];
          if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
            }
            else {
              thunk_FUN_14572512c(param_1,puVar4);
            }
          }
          else {
            *puVar4 = *puVar3;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
          }
          lVar5 = lVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (lVar5 < *piVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 146f800a4 FUN_146f800a4 body=67 status=ok
// SIG undefined FUN_146f800a4(void)

longlong FUN_146f800a4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f7f6b4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc18 + *param_1;
  FUN_146f7f68b(lVar2,1);
  return lVar2;
}



// FUNCTION 146f800e7 FUN_146f800e7 body=19 status=ok
// SIG undefined FUN_146f800e7(void)

void FUN_146f800e7(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 5);
    return;
  }
  return;
}



// FUNCTION 146f800fa FUN_146f800fa body=130 status=ok
// SIG undefined FUN_146f800fa(void)

void FUN_146f800fa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x2c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 5)) {
        uVar5 = uVar3 >> 5 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar5;
    FUN_146f7f326(param_1,param_2,uVar5,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f8017e FUN_146f8017e body=553 status=ok
// SIG undefined FUN_146f8017e(void)

void FUN_146f8017e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  uint uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  ulonglong uStack_80;
  int local_78;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  longlong local_68;
  longlong *local_60;
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_74 = *param_3;
  uStack_6c = *(undefined4 *)(param_3 + 1);
  local_60 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  local_b8 = param_3;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_a8 = local_68;
  local_a0 = local_60;
  local_98 = local_58;
  uStack_94 = uStack_54;
  local_90 = local_50;
  local_8c = local_4c;
  local_b0 = param_2;
  if ((int)uStack_54 < (int)local_60[3]) {
    do {
      uVar3 = uStack_94;
      iVar1 = *(int *)(*param_2 + (longlong)(int)uStack_94 * 8);
      if (local_78 <= iVar1) {
        FUN_146f7f50e(&local_88,iVar1 + 1,local_b8);
      }
      uVar5 = (ulonglong)(uVar3 & 0xff);
      lVar4 = (longlong)((int)uVar3 >> 8) * 0xc18;
      lVar6 = *param_1 + lVar4;
      iVar2 = *(int *)(lVar6 + 0x410 + uVar5 * 4);
      lVar6 = (longlong)*(int *)(lVar6 + 0x10 + uVar5 * 4) * 0xc + *(longlong *)(*param_1 + lVar4);
      local_c0 = 0;
      local_c8 = 1;
      FUN_146f803a8(&local_88,&local_68,iVar1,iVar2);
      if (0 < (longlong)iVar2) {
        lVar4 = 0;
        do {
          *(undefined4 *)(local_68 + 8 + lVar4) = *(undefined4 *)(lVar6 + 8 + lVar4);
          *(undefined8 *)(local_68 + lVar4) = *(undefined8 *)(lVar6 + lVar4);
          lVar4 = lVar4 + 0xc;
        } while ((longlong)iVar2 * 0xc != lVar4);
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while ((int)uStack_94 < (int)local_a0[3]);
  }
  FUN_146f80566(param_1,&local_88);
  *(int *)(param_1 + 2) = local_78;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_74;
  *(undefined4 *)(param_1 + 3) = uStack_74._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
  FUN_146f7f217(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f803a8 FUN_146f803a8 body=446 status=ok
// SIG undefined FUN_146f803a8(void)

longlong *
FUN_146f803a8(longlong *param_1,longlong *param_2,ulonglong param_3,int param_4,char param_5,
             char param_6)

{
  longlong *plVar1;
  void *_Src;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar10 = param_3 & 0xff;
  lVar4 = *param_1;
  lVar8 = (longlong)((int)param_3 >> 8) * 0xc18;
  plVar1 = (longlong *)(lVar8 + lVar4);
  piVar2 = (int *)((longlong)plVar1 + uVar10 * 4 + 0x810);
  uVar9 = param_4 - *piVar2;
  if (uVar9 == 0 || param_4 < *piVar2) {
    lVar7 = *(longlong *)(lVar4 + lVar8);
  }
  else {
    lVar6 = plVar1[1];
    FUN_146bca1c8(plVar1,(int)lVar6 + uVar9,CONCAT71((uint7)(uint3)(int3)(short)(param_3 >> 0x10),1)
                 );
    lVar7 = *plVar1;
    _Src = (void *)(lVar7 + (longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) * 0xc +
                   (longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x810) * 0xc);
    memmove((void *)((longlong)_Src + (ulonglong)uVar9 * 0xc),_Src,
            (lVar7 + (longlong)(int)lVar6 * 0xc) - (longlong)_Src);
    *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810) = param_4;
    if ((int)uVar10 + 1 < (int)plVar1[0x182]) {
      uVar5 = uVar10;
      do {
        piVar2 = (int *)(lVar8 + lVar4 + 0x14 + uVar5 * 4);
        *piVar2 = *piVar2 + uVar9;
        lVar6 = uVar5 + 2;
        uVar5 = uVar5 + 1;
      } while (lVar6 < (int)plVar1[0x182]);
    }
  }
  if (param_6 != '\0') {
    iVar3 = *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410);
    lVar4 = (longlong)iVar3;
    if (iVar3 < param_4) {
      if (iVar3 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810)) {
        do {
          lVar8 = *plVar1;
          lVar6 = *(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) + lVar4;
          *(undefined4 *)(lVar8 + 8 + lVar6 * 0xc) = *(undefined4 *)((longlong)param_1 + 0x1c);
          *(undefined8 *)(lVar8 + lVar6 * 0xc) = *(undefined8 *)((longlong)param_1 + 0x14);
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810));
      }
    }
    else if (param_4 < iVar3) {
      lVar4 = (longlong)param_4;
      do {
        lVar8 = *plVar1;
        lVar6 = *(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) + lVar4;
        *(undefined4 *)(lVar8 + 8 + lVar6 * 0xc) = *(undefined4 *)((longlong)param_1 + 0x1c);
        *(undefined8 *)(lVar8 + lVar6 * 0xc) = *(undefined8 *)((longlong)param_1 + 0x14);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410));
    }
  }
  if (param_5 == '\0') {
    param_4 = *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410);
  }
  else {
    *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410) = param_4;
  }
  *param_2 = lVar7 + (longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) * 0xc;
  *(int *)(param_2 + 1) = param_4;
  return param_2;
}



// FUNCTION 146f80566 FUN_146f80566 body=80 status=ok
// SIG undefined FUN_146f80566(void)

longlong * FUN_146f80566(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146f7f217(*param_1,(int)param_1[1]);
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



// FUNCTION 146f805b6 FUN_146f805b6 body=145 status=ok
// SIG undefined FUN_146f805b6(void)

void FUN_146f805b6(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f800fa(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    FUN_146f800e7((longlong)iVar1 * 0x20 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f80648(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f806b2(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f80648 FUN_146f80648 body=106 status=ok
// SIG undefined FUN_146f80648(void)

void FUN_146f80648(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((longlong)param_2 * 0x20 + lVar2);
  FUN_146f7f1e1(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x28);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar3 << 5);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar1 - param_3;
  return;
}



// FUNCTION 146f806b2 FUN_146f806b2 body=59 status=ok
// SIG undefined FUN_146f806b2(void)

void FUN_146f806b2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f806ee(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_146f7f326(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,0x20);
  return;
}



// FUNCTION 146f806ee FUN_146f806ee body=105 status=ok
// SIG undefined FUN_146f806ee(void)

ulonglong FUN_146f806ee(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x7fffffffffffe00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,0);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146f80758 FUN_146f80758 body=109 status=ok
// SIG undefined FUN_146f80758(void)

void FUN_146f80758(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)(int)param_2 * 0x20;
  FUN_146f7f217(*(undefined8 *)(lVar2 + lVar3),*(undefined4 *)(lVar2 + 8 + lVar3));
  if (*(longlong *)(lVar2 + lVar3) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(lVar2 + lVar3),(void *)(lVar2 + lVar3 + 0x20),
            (longlong)(int)(~param_2 + iVar1) << 5);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar1 + -1;
  return;
}



// FUNCTION 146f807c6 FUN_146f807c6 body=110 status=ok
// SIG undefined FUN_146f807c6(void)

undefined8 * FUN_146f807c6(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa7810;
  puVar4[6] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f80b92(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x38),0);
  puVar4[8] = *(undefined8 *)(param_1 + 0x40);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f80834 FUN_146f80834 body=100 status=ok
// SIG undefined FUN_146f80834(void)

void FUN_146f80834(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f80d5a(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  iVar2 = param_2 + 1;
  if (param_2 + 1 <= *(int *)(param_1 + 0x10)) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 146f80898 FUN_146f80898 body=89 status=ok
// SIG undefined FUN_146f80898(void)

void FUN_146f80898(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  
  plVar2 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x38) * 3;
    do {
      uVar3 = *(uint *)(plVar2 + 2);
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          *(undefined8 *)(*plVar2 + (longlong)(int)(uVar3 * param_2 + uVar4) * 8) =
               *(undefined8 *)(param_1 + 0x40);
          uVar4 = uVar4 + 1;
          uVar3 = *(uint *)(plVar2 + 2);
        } while (uVar4 < uVar3);
      }
      plVar2 = plVar2 + 3;
    } while (plVar2 != plVar1);
  }
  return;
}



// FUNCTION 146f808f2 FUN_146f808f2 body=113 status=ok
// SIG undefined FUN_146f808f2(void)

void FUN_146f808f2(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_1458c35ca(lVar1,*(int *)(lVar1 + 0x10) * param_2);
      if (0 < param_2) {
        FUN_146f80d5a(lVar1,param_2 + -1,param_1 + 0x40);
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f80964 FUN_146f80964 body=86 status=ok
// SIG undefined FUN_146f80964(void)

void FUN_146f80964(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f80dbe(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f809ba FUN_146f809ba body=84 status=ok
// SIG undefined FUN_146f809ba(void)

ulonglong FUN_146f809ba(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    do {
      uVar2 = (*(code *)PTR_FUN_14c75b148)
                        (*(undefined8 *)(lVar4 + lVar3),*(int *)(lVar4 + 8 + lVar3) << 3,
                         uVar2 & 0xffffffff);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  return uVar2;
}



// FUNCTION 146f80a1c FUN_146f80a1c body=99 status=ok
// SIG undefined FUN_146f80a1c(void)

void FUN_146f80a1c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f81264(lVar2,param_2,param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(lVar2 + 8) / *(uint *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f80a90 FUN_146f80a90 body=33 status=ok
// SIG undefined FUN_146f80a90(void)

void FUN_146f80a90(longlong param_1)

{
  FUN_146f815ca(param_1 + 0x18);
  FUN_146f81510(param_1 + 0x18);
  return;
}



// FUNCTION 146f80ab6 FUN_146f80ab6 body=186 status=ok
// SIG undefined FUN_146f80ab6(void)

void FUN_146f80ab6(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == iVar2) {
    FUN_146f811d2(lVar1,iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  lVar4 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar5 + lVar4 + 0x18),(void *)(lVar5 + lVar4),
          (ulonglong)(uint)(iVar2 - param_2) * 0x18);
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined8 *)(lVar5 + lVar4) = 0;
  ((undefined8 *)(lVar5 + lVar4))[1] = 0;
  *(int *)(lVar5 + 0x10 + lVar4) = iVar2;
  iVar3 = *(int *)(param_1 + 0x10);
  FUN_1458c35ca(lVar5 + lVar4,iVar2 * iVar3);
  if (iVar3 < 1) {
    return;
  }
  FUN_146f80d5a(lVar5 + lVar4,iVar3 + -1,param_1 + 0x40);
  return;
}



// FUNCTION 146f80b70 FUN_146f80b70 body=33 status=ok
// SIG undefined FUN_146f80b70(void)

void FUN_146f80b70(longlong param_1)

{
  FUN_146f815ca(param_1 + 0x18);
  FUN_146f81510(param_1 + 0x18);
  return;
}



// FUNCTION 146f80b92 FUN_146f80b92 body=86 status=ok
// SIG undefined FUN_146f80b92(void)

void FUN_146f80b92(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f80be8(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f80c4f(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f80be8 FUN_146f80be8 body=103 status=ok
// SIG undefined FUN_146f80be8(void)

void FUN_146f80be8(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f80ccc(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f80c4f FUN_146f80c4f body=125 status=ok
// SIG undefined FUN_146f80c4f(void)

void FUN_146f80c4f(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1401f7a02(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f80ccc FUN_146f80ccc body=141 status=ok
// SIG undefined FUN_146f80ccc(void)

void FUN_146f80ccc(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f80d5a FUN_146f80d5a body=100 status=ok
// SIG undefined FUN_146f80d5a(void)

void FUN_146f80d5a(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = (param_2 + 1) * (int)param_1[2];
  iVar1 = (int)param_1[1];
  if (iVar1 < iVar4) {
    *(int *)(param_1 + 1) = iVar4;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(iVar4 - iVar1)) {
      FUN_140752556(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar3 = 0;
    do {
      *(undefined8 *)((longlong)iVar1 * 8 + lVar2 + lVar3 * 8) = *param_3;
      lVar3 = lVar3 + 1;
    } while (iVar4 - iVar1 != (int)lVar3);
  }
  return;
}



// FUNCTION 146f80dbe FUN_146f80dbe body=28 status=ok
// SIG undefined FUN_146f80dbe(void)

void FUN_146f80dbe(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) * param_2;
  if (iVar1 < *(int *)(param_1 + 8)) {
    FUN_1407524e2(param_1,iVar1,1);
    return;
  }
  FUN_146f80d5a(param_1,param_2 + -1);
  return;
}



// FUNCTION 146f80dda FUN_146f80dda body=194 status=ok
// SIG undefined FUN_146f80dda(void)

longlong * FUN_146f80dda(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f80e9c(param_1,param_2 + 0x18);
  FUN_14280e057(param_1,param_2 + 0x40);
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f80e9c FUN_146f80e9c body=341 status=ok
// SIG undefined FUN_146f80e9c(void)

longlong * FUN_146f80e9c(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x20) * 0x18,
             (longlong)*(int *)(param_2 + 0x24) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x20);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f80ff2(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x20) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (*(longlong *)(param_2 + 0x18) == 0) {
        lVar4 = param_2;
      }
      FUN_146f8103f(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f80ff2(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f81106(param_2);
        FUN_146f8103f(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f80ff2 FUN_146f80ff2 body=76 status=ok
// SIG undefined FUN_146f80ff2(void)

void FUN_146f80ff2(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_14583906e(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f81152(param_1,param_2);
  return;
}



// FUNCTION 146f8103f FUN_146f8103f body=199 status=ok
// SIG undefined FUN_146f8103f(void)

longlong * FUN_146f8103f(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*(byte *)(param_1 + 5) & 1) == 0) ||
      (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 == 0x1f)) ||
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e3cc78), 3 < iVar2)) {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 1;
  }
  if (((*(byte *)(param_1 + 5) & 1) != 0) &&
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 < 0x11)) {
    FUN_146eb5472(param_1,param_2);
    return param_1;
  }
  FUN_1410bfe3c(param_2,param_1,0);
  return param_1;
}



// FUNCTION 146f81106 FUN_146f81106 body=76 status=ok
// SIG undefined FUN_146f81106(void)

longlong FUN_146f81106(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f811d2(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f811b8(lVar2,1);
  return lVar2;
}



// FUNCTION 146f81152 FUN_146f81152 body=102 status=ok
// SIG undefined FUN_146f81152(void)

void FUN_146f81152(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  FUN_146f80ccc(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f811b8 FUN_146f811b8 body=26 status=ok
// SIG undefined FUN_146f811b8(void)

void FUN_146f811b8(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f811d2 FUN_146f811d2 body=145 status=ok
// SIG undefined FUN_146f811d2(void)

void FUN_146f811d2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_146f80ccc(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f81264 FUN_146f81264 body=428 status=ok
// SIG undefined FUN_146f81264(void)

void FUN_146f81264(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  int local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (int)param_1[2];
  local_78 = 0;
  uStack_70 = 0;
  local_58 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_98 = local_60;
  local_90 = local_58;
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_a0 = param_2;
  if (iStack_4c < (int)local_58[3]) {
    do {
      iVar4 = iStack_84;
      iVar1 = *(int *)(*param_2 + (longlong)iStack_84 * 8);
      FUN_146f80d5a(&local_78,iVar1,param_3);
      lVar3 = param_1[2];
      if ((int)lVar3 != 0) {
        lVar2 = *param_1;
        uVar5 = 0;
        do {
          *(undefined8 *)((longlong)(iVar1 * local_68) * 8 + local_78 + uVar5 * 8) =
               *(undefined8 *)((longlong)((int)lVar3 * iVar4) * 8 + lVar2 + uVar5 * 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1 + 2));
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < (int)local_90[3]);
  }
  if (&local_78 == param_1) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_78;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f81412 FUN_146f81412 body=143 status=ok
// SIG undefined FUN_146f81412(void)

void FUN_146f81412(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f811d2(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f811b8(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f814a2(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f81510(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f814a2 FUN_146f814a2 body=109 status=ok
// SIG undefined FUN_146f814a2(void)

void FUN_146f814a2(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 0x18);
  FUN_14583906e(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f81510 FUN_146f81510 body=59 status=ok
// SIG undefined FUN_146f81510(void)

void FUN_146f81510(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f8154c(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f80ccc(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f8154c FUN_146f8154c body=126 status=ok
// SIG undefined FUN_146f8154c(void)

ulonglong FUN_146f8154c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f815ca FUN_146f815ca body=97 status=ok
// SIG undefined FUN_146f815ca(void)

void FUN_146f815ca(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  if (*(longlong *)(lVar2 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (~param_2 + iVar1 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  return;
}



// FUNCTION 146f8162c FUN_146f8162c body=42 status=ok
// SIG undefined FUN_146f8162c(void)

longlong FUN_146f8162c(longlong param_1,int param_2)

{
  FUN_146f81aba(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f81656 FUN_146f81656 body=110 status=ok
// SIG undefined FUN_146f81656(void)

undefined8 * FUN_146f81656(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa78a0;
  puVar4[7] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x38);
  }
  FUN_146f81b54(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x40),0);
  puVar4[9] = *(undefined8 *)(param_1 + 0x48);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f816c4 FUN_146f816c4 body=112 status=ok
// SIG undefined FUN_146f816c4(void)

void FUN_146f816c4(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x40) << 5;
    do {
      if (*(int *)(lVar2 + 0x10) <= param_2) {
        FUN_146f81e20(lVar2,param_2 + 1,param_1 + 0x48);
      }
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < param_2 + 1) {
    iVar1 = param_2 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}



// FUNCTION 146f81784 FUN_146f81784 body=82 status=ok
// SIG undefined FUN_146f81784(void)

void FUN_146f81784(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) << 5;
    do {
      FUN_146f8221a(lVar1,param_2,param_1 + 0x48);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f817d6 FUN_146f817d6 body=82 status=ok
// SIG undefined FUN_146f817d6(void)

void FUN_146f817d6(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) << 5;
    do {
      FUN_146f81e20(lVar1,param_2,param_1 + 0x48);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f81828 FUN_146f81828 body=124 status=ok
// SIG undefined FUN_146f81828(void)

ulonglong FUN_146f81828(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x40) * 4;
    uVar3 = 0;
    do {
      lVar2 = plVar4[1];
      if ((longlong)(int)lVar2 != 0) {
        lVar1 = *plVar4;
        lVar6 = 0;
        do {
          uVar3 = (*(code *)PTR_FUN_14c75b148)
                            (*(undefined8 *)(lVar1 + lVar6),*(int *)(lVar1 + 8 + lVar6) << 3,
                             uVar3 & 0xffffffff);
          lVar6 = lVar6 + 0xc18;
        } while ((longlong)(int)lVar2 * 0xc18 - lVar6 != 0);
      }
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar5);
  }
  return uVar3;
}



// FUNCTION 146f818b2 FUN_146f818b2 body=93 status=ok
// SIG undefined FUN_146f818b2(void)

void FUN_146f818b2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x20 + lVar1;
    do {
      FUN_146f82a94(lVar1,param_2,param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != lVar2);
  }
  return;
}



// FUNCTION 146f81920 FUN_146f81920 body=33 status=ok
// SIG undefined FUN_146f81920(void)

void FUN_146f81920(longlong param_1)

{
  FUN_146f83006(param_1 + 0x18);
  FUN_146f82f60(param_1 + 0x18);
  return;
}



// FUNCTION 146f81946 FUN_146f81946 body=175 status=ok
// SIG undefined FUN_146f81946(void)

void FUN_146f81946(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = param_1 + 0x18;
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 <= param_2) {
    if (iVar4 < param_2) {
      do {
        *(uint *)(param_1 + 0x40) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x44) < iVar4 + 1U) {
          FUN_146f82a10(lVar1,iVar4);
        }
        lVar2 = *(longlong *)(param_1 + 0x38);
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar2 = lVar1;
        }
        lVar3 = (longlong)iVar4 * 0x20;
        *(undefined8 *)(lVar2 + lVar3) = 0;
        ((undefined8 *)(lVar2 + lVar3))[1] = 0;
        *(undefined4 *)(lVar2 + 0x10 + lVar3) = 0;
        *(undefined8 *)(lVar2 + 0x14 + lVar3) = *(undefined8 *)(param_1 + 0x48);
        FUN_146f8221a(lVar2 + lVar3,*(undefined4 *)(param_1 + 0x10),param_1 + 0x48);
        iVar4 = *(int *)(param_1 + 0x40);
      } while (iVar4 < param_2);
    }
    return;
  }
  FUN_146f82e64(lVar1,param_2,1);
  return;
}



// FUNCTION 146f819f6 FUN_146f819f6 body=161 status=ok
// SIG undefined FUN_146f819f6(void)

void FUN_146f819f6(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar2 + 1;
  if (*(int *)(param_1 + 0x44) == iVar2) {
    FUN_146f82a10(lVar1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar3 = lVar1;
  }
  lVar4 = (longlong)param_2 * 0x20;
  memmove((void *)(lVar3 + lVar4 + 0x20),(void *)(lVar3 + lVar4),
          (ulonglong)(uint)(iVar2 - param_2) << 5);
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar3 = lVar1;
  }
  *(undefined8 *)(lVar3 + lVar4) = 0;
  ((undefined8 *)(lVar3 + lVar4))[1] = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x14 + lVar4) = *(undefined8 *)(param_1 + 0x48);
  FUN_146f8221a(lVar3 + lVar4,*(undefined4 *)(param_1 + 0x10),param_1 + 0x48);
  return;
}



// FUNCTION 146f81a98 FUN_146f81a98 body=33 status=ok
// SIG undefined FUN_146f81a98(void)

void FUN_146f81a98(longlong param_1)

{
  FUN_146f83006(param_1 + 0x18);
  FUN_146f82f60(param_1 + 0x18);
  return;
}



// FUNCTION 146f81aba FUN_146f81aba body=53 status=ok
// SIG undefined FUN_146f81aba(void)

void FUN_146f81aba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_146f81aef(lVar1,*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f81aef FUN_146f81aef body=54 status=ok
// SIG undefined FUN_146f81aef(void)

void FUN_146f81aef(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f81b25(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 146f81b25 FUN_146f81b25 body=46 status=ok
// SIG undefined FUN_146f81b25(void)

void FUN_146f81b25(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x183;
  }
  return;
}



// FUNCTION 146f81b54 FUN_146f81b54 body=86 status=ok
// SIG undefined FUN_146f81b54(void)

void FUN_146f81b54(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x28) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    return;
  }
  FUN_146f81baa(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_146f81c00(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f81baa FUN_146f81baa body=86 status=ok
// SIG undefined FUN_146f81baa(void)

void FUN_146f81baa(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
    uVar1 = (uint)(uVar2 >> 5);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f81c34(param_1,0,uVar3,0x20);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 146f81c00 FUN_146f81c00 body=52 status=ok
// SIG undefined FUN_146f81c00(void)

void FUN_146f81c00(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146f81cba(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 146f81c34 FUN_146f81c34 body=133 status=ok
// SIG undefined FUN_146f81c34(void)

void FUN_146f81c34(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f81cba FUN_146f81cba body=98 status=ok
// SIG undefined FUN_146f81cba(void)

undefined8 * FUN_146f81cba(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146f81d1c(param_1,iVar1,0);
    FUN_146f81d8e(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 146f81d1c FUN_146f81d1c body=114 status=ok
// SIG undefined FUN_146f81d1c(void)

void FUN_146f81d1c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    iVar2 = (int)(uVar1 / 0xc18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f81d8e FUN_146f81d8e body=146 status=ok
// SIG undefined FUN_146f81d8e(void)

void FUN_146f81d8e(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  void *_Src_00;
  
  if (param_3 != 0) {
    _Src_00 = (void *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)((longlong)_Src_00 + -8);
      _Src = *(void **)((longlong)_Src_00 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1401f7a02(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
      memcpy(param_1 + 2,_Src_00,0xc04);
      param_1 = param_1 + 0x183;
      _Src_00 = (void *)((longlong)_Src_00 + 0xc18);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f81e20 FUN_146f81e20 body=245 status=ok
// SIG undefined FUN_146f81e20(void)

void FUN_146f81e20(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = param_1[1];
  uVar4 = param_2 + 0xff;
  iVar3 = (int)uVar4 >> 8;
  FUN_146f81f16(param_1,iVar3,1);
  uVar6 = *(uint *)(param_1 + 2);
  if (param_2 < (int)uVar6) {
    if (iVar3 < 1) goto LAB_146f81e77;
    uVar4 = (uVar4 & 0xff) + 1;
  }
  else {
    if (param_2 <= (int)uVar6) goto LAB_146f81e77;
    uVar6 = uVar6 & 0xff;
    uVar7 = (ulonglong)uVar6;
    uVar4 = (uVar4 & 0xff) + 1;
    if (uVar7 != 0) {
      uVar5 = 0x100;
      if (iVar3 == (int)lVar1) {
        uVar5 = uVar4;
      }
      lVar2 = (longlong)(int)lVar1 * 0xc18;
      lVar1 = *param_1 + lVar2;
      iVar3 = *(int *)(lVar1 + -0x408 + (ulonglong)(uVar6 - 1) * 4) +
              *(int *)(lVar1 + -0xc08 + (ulonglong)(uVar6 - 1) * 4);
      FUN_1407524e2(lVar2 + *param_1 + -0xc18,iVar3,0);
      if (uVar6 < uVar5) {
        do {
          *(int *)(lVar1 + -0xc08 + uVar7 * 4) = iVar3;
          *(undefined4 *)(lVar1 + -0x808 + uVar7 * 4) = 0;
          *(undefined4 *)(lVar1 + -0x408 + uVar7 * 4) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
      *(uint *)(lVar1 + -8) = uVar5;
    }
  }
  *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) = uVar4;
LAB_146f81e77:
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f81f16 FUN_146f81f16 body=134 status=ok
// SIG undefined FUN_146f81f16(void)

void FUN_146f81f16(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f81fc6(param_1,iVar1);
    }
    FUN_146f81f9d((longlong)iVar1 * 0xc18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f82100(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f82166(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f81f9d FUN_146f81f9d body=41 status=ok
// SIG undefined FUN_146f81f9d(void)

void FUN_146f81f9d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f8205a(param_1);
    param_1 = param_1 + 0xc18;
  }
  return;
}



// FUNCTION 146f81fc6 FUN_146f81fc6 body=146 status=ok
// SIG undefined FUN_146f81fc6(void)

void FUN_146f81fc6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc18)) {
      uVar5 = uVar4 / 0xc18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f8205a FUN_146f8205a body=164 status=ok
// SIG undefined FUN_146f8205a(void)

undefined8 * FUN_146f8205a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = 0;
  FUN_146f7c72a(param_1 + 2,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x82,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x102,0,param_3,&local_24);
  *(undefined4 *)(param_1 + 0x182) = 0x100;
  if (*(int *)((longlong)param_1 + 0xc) < 0x100) {
    FUN_14171ef34(param_1,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f82100 FUN_146f82100 body=101 status=ok
// SIG undefined FUN_146f82100(void)

void FUN_146f82100(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0xc18 + *param_1);
  FUN_146f81b25(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xc18 + (longlong)_Dst),(longlong)iVar2 * 0xc18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f82166 FUN_146f82166 body=63 status=ok
// SIG undefined FUN_146f82166(void)

void FUN_146f82166(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f821a6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc18,8);
  }
  return;
}



// FUNCTION 146f821a6 FUN_146f821a6 body=115 status=ok
// SIG undefined FUN_146f821a6(void)

ulonglong FUN_146f821a6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc18,8);
      uVar1 = uVar1 / 0xc18;
    }
  }
  return uVar1;
}



// FUNCTION 146f8221a FUN_146f8221a body=91 status=ok
// SIG undefined FUN_146f8221a(void)

void FUN_146f8221a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + 0xffU) >> 8;
  FUN_146f82276(param_1,iVar1);
  FUN_146f81f16(param_1,iVar1,1);
  if (0 < iVar1) {
    *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) =
         (param_2 + 0xffU & 0xff) + 1;
  }
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f82276 FUN_146f82276 body=68 status=ok
// SIG undefined FUN_146f82276(void)

void FUN_146f82276(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146f81b25(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146f822bc(param_1,param_2);
  return;
}



// FUNCTION 146f822bc FUN_146f822bc body=112 status=ok
// SIG undefined FUN_146f822bc(void)

void FUN_146f822bc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc18)) {
      uVar2 = uVar1 / 0xc18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc18,8);
  }
  return;
}



// FUNCTION 146f8232c FUN_146f8232c body=194 status=ok
// SIG undefined FUN_146f8232c(void)

longlong * FUN_146f8232c(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f823ee(param_1,param_2 + 0x18);
  FUN_14280e057(param_1,param_2 + 0x48);
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f823ee FUN_146f823ee body=333 status=ok
// SIG undefined FUN_146f823ee(void)

longlong * FUN_146f823ee(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x28) << 5,(longlong)*(int *)(param_2 + 0x2c) << 5
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x28);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f8253c(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x28) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x20);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar4 = param_2;
      }
      FUN_146f82589(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar7 < *(int *)(param_2 + 0x28));
  }
  else {
    FUN_146f8253c(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f825f8(param_2);
        FUN_146f82589(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f8253c FUN_146f8253c body=76 status=ok
// SIG undefined FUN_146f8253c(void)

void FUN_146f8253c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_146f81aef(lVar1,*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == param_2) {
    return;
  }
  FUN_146f82644(param_1,param_2);
  return;
}



// FUNCTION 146f82589 FUN_146f82589 body=111 status=ok
// SIG undefined FUN_146f82589(void)

longlong * FUN_146f82589(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_146f8269a();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14280e057(param_1,param_2 + 0x14);
  return param_1;
}



// FUNCTION 146f825f8 FUN_146f825f8 body=75 status=ok
// SIG undefined FUN_146f825f8(void)

longlong FUN_146f825f8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_146f82a10(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x20 + lVar2;
  FUN_146f829f9(lVar2,1);
  return lVar2;
}



// FUNCTION 146f82644 FUN_146f82644 body=85 status=ok
// SIG undefined FUN_146f82644(void)

void FUN_146f82644(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
    uVar1 = (uint)(uVar2 >> 5);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x2c)) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  FUN_146f81c34(param_1,*(undefined4 *)(param_1 + 0x28),uVar3,0x20);
  return;
}



// FUNCTION 146f8269a FUN_146f8269a body=358 status=ok
// SIG undefined FUN_146f8269a(void)

longlong * FUN_146f8269a(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f81b25(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146f822bc(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x152a < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146f82801(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146f82276(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f829b6(param_2);
        FUN_146f82801(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f82801 FUN_146f82801 body=436 status=ok
// SIG undefined FUN_146f82801(void)

longlong * FUN_146f82801(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  FUN_146eb5472();
  piVar1 = (int *)(param_2 + 0xc10);
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,piVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_1,piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (0 < *piVar1) {
    puVar4 = (undefined4 *)(param_2 + 0x10);
    lVar5 = 0;
    do {
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
        }
        else {
          thunk_FUN_14572512c(param_1,puVar4);
        }
      }
      else {
        *puVar4 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar5 < *piVar1);
    if (0 < *piVar1) {
      puVar4 = (undefined4 *)(param_2 + 0x410);
      lVar5 = 0;
      do {
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar4);
          }
        }
        else {
          *puVar4 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        lVar5 = lVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar5 < *piVar1);
      if (0 < *piVar1) {
        puVar4 = (undefined4 *)(param_2 + 0x810);
        lVar5 = 0;
        do {
          puVar3 = *(undefined4 **)param_1[1];
          if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
            }
            else {
              thunk_FUN_14572512c(param_1,puVar4);
            }
          }
          else {
            *puVar4 = *puVar3;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
          }
          lVar5 = lVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (lVar5 < *piVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 146f829b6 FUN_146f829b6 body=67 status=ok
// SIG undefined FUN_146f829b6(void)

longlong FUN_146f829b6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f81fc6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc18 + *param_1;
  FUN_146f81f9d(lVar2,1);
  return lVar2;
}



// FUNCTION 146f829f9 FUN_146f829f9 body=23 status=ok
// SIG undefined FUN_146f829f9(void)

void FUN_146f829f9(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 146f82a10 FUN_146f82a10 body=130 status=ok
// SIG undefined FUN_146f82a10(void)

void FUN_146f82a10(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x2c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 5)) {
        uVar5 = uVar3 >> 5 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar5;
    FUN_146f81c34(param_1,param_2,uVar5,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f82a94 FUN_146f82a94 body=521 status=ok
// SIG undefined FUN_146f82a94(void)

void FUN_146f82a94(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  uint uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  ulonglong uStack_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  longlong local_68;
  longlong *local_60;
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_74 = (undefined4)*param_3;
  uStack_70 = (undefined4)((ulonglong)*param_3 >> 0x20);
  local_60 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  local_b8 = param_3;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_a8 = local_68;
  local_a0 = local_60;
  local_98 = local_58;
  uStack_94 = uStack_54;
  local_90 = local_50;
  local_8c = local_4c;
  local_b0 = param_2;
  if ((int)uStack_54 < (int)local_60[3]) {
    do {
      uVar5 = uStack_94;
      iVar2 = *(int *)(*param_2 + (longlong)(int)uStack_94 * 8);
      if (local_78 <= iVar2) {
        FUN_146f81e20(&local_88,iVar2 + 1,local_b8);
      }
      uVar7 = (ulonglong)(uVar5 & 0xff);
      lVar6 = (longlong)((int)uVar5 >> 8) * 0xc18;
      lVar1 = *param_1 + lVar6;
      iVar3 = *(int *)(lVar1 + 0x410 + uVar7 * 4);
      iVar4 = *(int *)(lVar1 + 0x10 + uVar7 * 4);
      lVar1 = *(longlong *)(*param_1 + lVar6);
      local_c0 = 0;
      local_c8 = 1;
      FUN_146f82c9e(&local_88,&local_68,iVar2,iVar3);
      if (0 < (longlong)iVar3) {
        lVar6 = 0;
        do {
          *(undefined8 *)(local_68 + lVar6 * 8) =
               *(undefined8 *)((longlong)iVar4 * 8 + lVar1 + lVar6 * 8);
          lVar6 = lVar6 + 1;
        } while (iVar3 != lVar6);
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while ((int)uStack_94 < (int)local_a0[3]);
  }
  FUN_146f82e14(param_1,&local_88);
  param_1[2] = CONCAT44(uStack_74,local_78);
  *(undefined4 *)(param_1 + 3) = uStack_70;
  FUN_146f81b25(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f82c9e FUN_146f82c9e body=373 status=ok
// SIG undefined FUN_146f82c9e(void)

void FUN_146f82c9e(longlong *param_1,longlong *param_2,ulonglong param_3,int param_4,char param_5,
                  char param_6)

{
  longlong *plVar1;
  void *_Src;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar10 = param_3 & 0xff;
  lVar6 = *param_1;
  lVar8 = (longlong)((int)param_3 >> 8) * 0xc18;
  plVar1 = (longlong *)(lVar8 + lVar6);
  piVar2 = (int *)((longlong)plVar1 + uVar10 * 4 + 0x810);
  uVar9 = param_4 - *piVar2;
  if (uVar9 == 0 || param_4 < *piVar2) {
    lVar7 = *(longlong *)(lVar6 + lVar8);
  }
  else {
    lVar5 = plVar1[1];
    FUN_1407524e2(plVar1,(int)lVar5 + uVar9,CONCAT71((uint7)(uint3)(int3)(short)(param_3 >> 0x10),1)
                 );
    lVar7 = *plVar1;
    _Src = (void *)(lVar7 + (longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) * 8 +
                   (longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x810) * 8);
    memmove((void *)((longlong)_Src + (ulonglong)uVar9 * 8),_Src,
            (lVar7 + (longlong)(int)lVar5 * 8) - (longlong)_Src);
    *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810) = param_4;
    if ((int)uVar10 + 1 < (int)plVar1[0x182]) {
      uVar4 = uVar10;
      do {
        piVar2 = (int *)(lVar8 + lVar6 + 0x14 + uVar4 * 4);
        *piVar2 = *piVar2 + uVar9;
        lVar5 = uVar4 + 2;
        uVar4 = uVar4 + 1;
      } while (lVar5 < (int)plVar1[0x182]);
    }
  }
  if (param_6 != '\0') {
    iVar3 = *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410);
    lVar6 = (longlong)iVar3;
    if (iVar3 < param_4) {
      for (; (int)lVar6 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810); lVar6 = lVar6 + 1) {
        *(undefined8 *)(*plVar1 + (*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) + lVar6) * 8) =
             *(undefined8 *)((longlong)param_1 + 0x14);
      }
    }
    else if (param_4 < iVar3) {
      lVar6 = (longlong)param_4;
      do {
        *(undefined8 *)(*plVar1 + (*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) + lVar6) * 8) =
             *(undefined8 *)((longlong)param_1 + 0x14);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410));
    }
  }
  if (param_5 == '\0') {
    param_4 = *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410);
  }
  else {
    *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410) = param_4;
  }
  *param_2 = lVar7 + (longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) * 8;
  *(int *)(param_2 + 1) = param_4;
  return;
}



// FUNCTION 146f82e14 FUN_146f82e14 body=80 status=ok
// SIG undefined FUN_146f82e14(void)

longlong * FUN_146f82e14(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146f81b25(*param_1,(int)param_1[1]);
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



// FUNCTION 146f82e64 FUN_146f82e64 body=145 status=ok
// SIG undefined FUN_146f82e64(void)

void FUN_146f82e64(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f82a10(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    FUN_146f829f9((longlong)iVar1 * 0x20 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f82ef6(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f82f60(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f82ef6 FUN_146f82ef6 body=106 status=ok
// SIG undefined FUN_146f82ef6(void)

void FUN_146f82ef6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((longlong)param_2 * 0x20 + lVar2);
  FUN_146f81aef(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x28);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar3 << 5);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar1 - param_3;
  return;
}



// FUNCTION 146f82f60 FUN_146f82f60 body=59 status=ok
// SIG undefined FUN_146f82f60(void)

void FUN_146f82f60(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f82f9c(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_146f81c34(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,0x20);
  return;
}



// FUNCTION 146f82f9c FUN_146f82f9c body=105 status=ok
// SIG undefined FUN_146f82f9c(void)

ulonglong FUN_146f82f9c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x7fffffffffffe00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,0);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146f83006 FUN_146f83006 body=109 status=ok
// SIG undefined FUN_146f83006(void)

void FUN_146f83006(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)(int)param_2 * 0x20;
  FUN_146f81b25(*(undefined8 *)(lVar2 + lVar3),*(undefined4 *)(lVar2 + 8 + lVar3));
  if (*(longlong *)(lVar2 + lVar3) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(lVar2 + lVar3),(void *)(lVar2 + lVar3 + 0x20),
            (longlong)(int)(~param_2 + iVar1) << 5);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar1 + -1;
  return;
}



// FUNCTION 146f83074 FUN_146f83074 body=42 status=ok
// SIG undefined FUN_146f83074(void)

longlong FUN_146f83074(longlong param_1,int param_2)

{
  FUN_146f83536(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f8309e FUN_146f8309e body=112 status=ok
// SIG undefined FUN_146f8309e(void)

undefined8 * FUN_146f8309e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa7930;
  puVar4[6] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f83596(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x38),0);
  *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_1 + 0x40);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f8310e FUN_146f8310e body=100 status=ok
// SIG undefined FUN_146f8310e(void)

void FUN_146f8310e(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8375e(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  iVar2 = param_2 + 1;
  if (param_2 + 1 <= *(int *)(param_1 + 0x10)) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 146f831cc FUN_146f831cc body=113 status=ok
// SIG undefined FUN_146f831cc(void)

void FUN_146f831cc(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_14005ea14(lVar1,*(int *)(lVar1 + 0x10) * param_2);
      if (0 < param_2) {
        FUN_146f8375e(lVar1,param_2 + -1,param_1 + 0x40);
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f8323e FUN_146f8323e body=86 status=ok
// SIG undefined FUN_146f8323e(void)

void FUN_146f8323e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8389c(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f83294 FUN_146f83294 body=84 status=ok
// SIG undefined FUN_146f83294(void)

ulonglong FUN_146f83294(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    do {
      uVar2 = (*(code *)PTR_FUN_14c75b148)
                        (*(undefined8 *)(lVar4 + lVar3),*(int *)(lVar4 + 8 + lVar3) << 2,
                         uVar2 & 0xffffffff);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  return uVar2;
}



// FUNCTION 146f832f6 FUN_146f832f6 body=99 status=ok
// SIG undefined FUN_146f832f6(void)

void FUN_146f832f6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f83d7e(lVar2,param_2,param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(lVar2 + 8) / *(uint *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f8336a FUN_146f8336a body=33 status=ok
// SIG undefined FUN_146f8336a(void)

void FUN_146f8336a(longlong param_1)

{
  FUN_146f840ea(param_1 + 0x18);
  FUN_146f84030(param_1 + 0x18);
  return;
}



// FUNCTION 146f83390 FUN_146f83390 body=200 status=ok
// SIG undefined FUN_146f83390(void)

void FUN_146f83390(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = param_1 + 0x18;
  iVar5 = *(int *)(param_1 + 0x38);
  if (param_2 < iVar5) {
    FUN_146f83f32(lVar1,param_2,1);
    return;
  }
  if (iVar5 < param_2) {
    do {
      *(uint *)(param_1 + 0x38) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x3c) < iVar5 + 1U) {
        FUN_146f83cec(lVar1,iVar5);
      }
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = lVar1;
      }
      puVar2 = (undefined8 *)(lVar4 + (longlong)iVar5 * 0x18);
      iVar5 = *(int *)(param_1 + 0xc);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(int *)(puVar2 + 2) = iVar5;
      iVar3 = *(int *)(param_1 + 0x10);
      FUN_14005ea14(puVar2,iVar5 * iVar3);
      if (0 < iVar3) {
        FUN_146f8375e(puVar2,iVar3 + -1,param_1 + 0x40);
      }
      iVar5 = *(int *)(param_1 + 0x38);
    } while (iVar5 < param_2);
  }
  return;
}



// FUNCTION 146f83458 FUN_146f83458 body=188 status=ok
// SIG undefined FUN_146f83458(void)

void FUN_146f83458(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == iVar2) {
    FUN_146f83cec(lVar1,iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  lVar4 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar5 + lVar4 + 0x18),(void *)(lVar5 + lVar4),
          (ulonglong)(uint)(iVar2 - param_2) * 0x18);
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined8 *)(lVar5 + lVar4) = 0;
  ((undefined8 *)(lVar5 + lVar4))[1] = 0;
  *(int *)(lVar5 + 0x10 + lVar4) = iVar2;
  iVar3 = *(int *)(param_1 + 0x10);
  FUN_14005ea14(lVar5 + lVar4,iVar2 * iVar3);
  if (iVar3 < 1) {
    return;
  }
  FUN_146f8375e(lVar5 + lVar4,iVar3 + -1,param_1 + 0x40);
  return;
}


