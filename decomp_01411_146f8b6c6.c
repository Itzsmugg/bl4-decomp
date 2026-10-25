// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f8b6c6 FUN_146f8b6c6 body=188 status=ok
// SIG undefined FUN_146f8b6c6(void)

void FUN_146f8b6c6(longlong param_1,int param_2)

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
    FUN_146f8bec8(lVar1,iVar2);
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
  FUN_140ee6e62(lVar5 + lVar4,iVar2 * iVar3);
  if (iVar3 < 1) {
    return;
  }
  FUN_146f8b9cc(lVar5 + lVar4,iVar3 + -1,param_1 + 0x40);
  return;
}



// FUNCTION 146f8b782 FUN_146f8b782 body=33 status=ok
// SIG undefined FUN_146f8b782(void)

void FUN_146f8b782(longlong param_1)

{
  FUN_146f8c2c0(param_1 + 0x18);
  FUN_146f8c206(param_1 + 0x18);
  return;
}



// FUNCTION 146f8b7a4 FUN_146f8b7a4 body=53 status=ok
// SIG undefined FUN_146f8b7a4(void)

void FUN_146f8b7a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8b7d9(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f8b7d9 FUN_146f8b7d9 body=43 status=ok
// SIG undefined FUN_146f8b7d9(void)

void FUN_146f8b7d9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f8b804 FUN_146f8b804 body=86 status=ok
// SIG undefined FUN_146f8b804(void)

void FUN_146f8b804(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f8b85a(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8b8c1(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f8b85a FUN_146f8b85a body=103 status=ok
// SIG undefined FUN_146f8b85a(void)

void FUN_146f8b85a(longlong param_1,uint param_2,uint param_3)

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
    FUN_146f8b93e(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f8b8c1 FUN_146f8b8c1 body=125 status=ok
// SIG undefined FUN_146f8b8c1(void)

void FUN_146f8b8c1(undefined8 *param_1,longlong param_2,int param_3)

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
        FUN_1401b309e(param_1,iVar1,0);
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



// FUNCTION 146f8b93e FUN_146f8b93e body=141 status=ok
// SIG undefined FUN_146f8b93e(void)

void FUN_146f8b93e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 146f8b9cc FUN_146f8b9cc body=100 status=ok
// SIG undefined FUN_146f8b9cc(void)

void FUN_146f8b9cc(longlong *param_1,int param_2,undefined8 *param_3)

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
      FUN_1446f84a2(param_1,iVar1);
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



// FUNCTION 146f8ba30 FUN_146f8ba30 body=28 status=ok
// SIG undefined FUN_146f8ba30(void)

void FUN_146f8ba30(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) * param_2;
  if (iVar1 < *(int *)(param_1 + 8)) {
    FUN_1406089a0(param_1,iVar1,1);
    return;
  }
  FUN_146f8b9cc(param_1,param_2 + -1);
  return;
}



// FUNCTION 146f8ba4c FUN_146f8ba4c body=169 status=ok
// SIG undefined FUN_146f8ba4c(void)

undefined4 FUN_146f8ba4c(longlong *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    do {
      FUN_1400021e4(lVar3,&local_48);
      iVar2 = local_40 + -1;
      if (local_40 == 0) {
        iVar2 = 0;
      }
      puVar1 = &DAT_149dfb77a;
      if (local_40 != 0) {
        puVar1 = local_48;
      }
      param_2 = (*(code *)PTR_FUN_14c75b148)(puVar1,iVar2 * 2,param_2);
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8baf6 FUN_146f8baf6 body=198 status=ok
// SIG undefined FUN_146f8baf6(void)

longlong * FUN_146f8baf6(longlong *param_1,longlong param_2)

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
  FUN_146f8bbbc(param_1,param_2 + 0x18);
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x40);
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



// FUNCTION 146f8bbbc FUN_146f8bbbc body=341 status=ok
// SIG undefined FUN_146f8bbbc(void)

longlong * FUN_146f8bbbc(longlong *param_1,longlong param_2)

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
      FUN_146f8bd12(param_2,0);
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
      FUN_146f8bd5f(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f8bd12(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f8bdfc(param_2);
        FUN_146f8bd5f(param_1,uVar3);
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



// FUNCTION 146f8bd12 FUN_146f8bd12 body=76 status=ok
// SIG undefined FUN_146f8bd12(void)

void FUN_146f8bd12(longlong param_1,int param_2)

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
  FUN_146f8b7d9(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f8be48(param_1,param_2);
  return;
}



// FUNCTION 146f8bd5f FUN_146f8bd5f body=157 status=ok
// SIG undefined FUN_146f8bd5f(void)

longlong * FUN_146f8bd5f(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar2 = FUN_1448332aa(param_1,&DAT_149e31250);
    if (iVar2 != 0x1f) {
      iVar2 = FUN_1448332aa(param_1,&DAT_149e3cc78);
      if (iVar2 < 4) {
        *(undefined4 *)(param_2 + 0x10) = 1;
        goto LAB_146f8bddd;
      }
    }
  }
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
LAB_146f8bddd:
  FUN_140219018(param_1,param_2);
  return param_1;
}



// FUNCTION 146f8bdfc FUN_146f8bdfc body=76 status=ok
// SIG undefined FUN_146f8bdfc(void)

longlong FUN_146f8bdfc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f8bec8(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f8beae(lVar2,1);
  return lVar2;
}



// FUNCTION 146f8be48 FUN_146f8be48 body=102 status=ok
// SIG undefined FUN_146f8be48(void)

void FUN_146f8be48(longlong param_1,uint param_2)

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
  FUN_146f8b93e(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f8beae FUN_146f8beae body=26 status=ok
// SIG undefined FUN_146f8beae(void)

void FUN_146f8beae(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f8bec8 FUN_146f8bec8 body=145 status=ok
// SIG undefined FUN_146f8bec8(void)

void FUN_146f8bec8(longlong param_1,int param_2)

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
    FUN_146f8b93e(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f8bf5a FUN_146f8bf5a body=428 status=ok
// SIG undefined FUN_146f8bf5a(void)

void FUN_146f8bf5a(longlong *param_1,longlong *param_2,undefined8 param_3)

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
      FUN_146f8b9cc(&local_78,iVar1,param_3);
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



// FUNCTION 146f8c108 FUN_146f8c108 body=143 status=ok
// SIG undefined FUN_146f8c108(void)

void FUN_146f8c108(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f8bec8(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f8beae(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f8c198(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f8c206(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f8c198 FUN_146f8c198 body=109 status=ok
// SIG undefined FUN_146f8c198(void)

void FUN_146f8c198(longlong param_1,int param_2,int param_3)

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
  FUN_146f8b7d9(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f8c206 FUN_146f8c206 body=59 status=ok
// SIG undefined FUN_146f8c206(void)

void FUN_146f8c206(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f8c242(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f8b93e(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f8c242 FUN_146f8c242 body=126 status=ok
// SIG undefined FUN_146f8c242(void)

ulonglong FUN_146f8c242(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146f8c2c0 FUN_146f8c2c0 body=97 status=ok
// SIG undefined FUN_146f8c2c0(void)

void FUN_146f8c2c0(longlong param_1,uint param_2)

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



// FUNCTION 146f8c322 FUN_146f8c322 body=42 status=ok
// SIG undefined FUN_146f8c322(void)

longlong FUN_146f8c322(longlong param_1,int param_2)

{
  FUN_146f8c7b0(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f8c34c FUN_146f8c34c body=110 status=ok
// SIG undefined FUN_146f8c34c(void)

undefined8 * FUN_146f8c34c(longlong param_1,undefined8 *param_2)

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
  *puVar4 = &PTR_FUN_149fa7d20;
  puVar4[7] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x38);
  }
  FUN_146f8c84a(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x40),0);
  puVar4[9] = *(undefined8 *)(param_1 + 0x48);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f8c3ba FUN_146f8c3ba body=112 status=ok
// SIG undefined FUN_146f8c3ba(void)

void FUN_146f8c3ba(longlong param_1,int param_2)

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
        FUN_146f8cb16(lVar2,param_2 + 1,param_1 + 0x48);
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



// FUNCTION 146f8c47a FUN_146f8c47a body=82 status=ok
// SIG undefined FUN_146f8c47a(void)

void FUN_146f8c47a(longlong param_1,undefined4 param_2)

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
      FUN_146f8cf10(lVar1,param_2,param_1 + 0x48);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f8c4cc FUN_146f8c4cc body=82 status=ok
// SIG undefined FUN_146f8c4cc(void)

void FUN_146f8c4cc(longlong param_1,undefined4 param_2)

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
      FUN_146f8cb16(lVar1,param_2,param_1 + 0x48);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f8c51e FUN_146f8c51e body=124 status=ok
// SIG undefined FUN_146f8c51e(void)

ulonglong FUN_146f8c51e(longlong param_1)

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



// FUNCTION 146f8c5a8 FUN_146f8c5a8 body=93 status=ok
// SIG undefined FUN_146f8c5a8(void)

void FUN_146f8c5a8(longlong param_1,undefined8 param_2)

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
      FUN_146f8d792(lVar1,param_2,param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != lVar2);
  }
  return;
}



// FUNCTION 146f8c616 FUN_146f8c616 body=33 status=ok
// SIG undefined FUN_146f8c616(void)

void FUN_146f8c616(longlong param_1)

{
  FUN_146f8dd04(param_1 + 0x18);
  FUN_146f8dc5e(param_1 + 0x18);
  return;
}



// FUNCTION 146f8c63c FUN_146f8c63c body=175 status=ok
// SIG undefined FUN_146f8c63c(void)

void FUN_146f8c63c(longlong param_1,int param_2)

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
          FUN_146f8d70e(lVar1,iVar4);
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
        FUN_146f8cf10(lVar2 + lVar3,*(undefined4 *)(param_1 + 0x10),param_1 + 0x48);
        iVar4 = *(int *)(param_1 + 0x40);
      } while (iVar4 < param_2);
    }
    return;
  }
  FUN_146f8db62(lVar1,param_2,1);
  return;
}



// FUNCTION 146f8c6ec FUN_146f8c6ec body=161 status=ok
// SIG undefined FUN_146f8c6ec(void)

void FUN_146f8c6ec(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar2 + 1;
  if (*(int *)(param_1 + 0x44) == iVar2) {
    FUN_146f8d70e(lVar1,iVar2);
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
  FUN_146f8cf10(lVar3 + lVar4,*(undefined4 *)(param_1 + 0x10),param_1 + 0x48);
  return;
}



// FUNCTION 146f8c78e FUN_146f8c78e body=33 status=ok
// SIG undefined FUN_146f8c78e(void)

void FUN_146f8c78e(longlong param_1)

{
  FUN_146f8dd04(param_1 + 0x18);
  FUN_146f8dc5e(param_1 + 0x18);
  return;
}



// FUNCTION 146f8c7b0 FUN_146f8c7b0 body=53 status=ok
// SIG undefined FUN_146f8c7b0(void)

void FUN_146f8c7b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8c7e5(lVar1,*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f8c7e5 FUN_146f8c7e5 body=54 status=ok
// SIG undefined FUN_146f8c7e5(void)

void FUN_146f8c7e5(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f8c81b(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 146f8c81b FUN_146f8c81b body=46 status=ok
// SIG undefined FUN_146f8c81b(void)

void FUN_146f8c81b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x183;
  }
  return;
}



// FUNCTION 146f8c84a FUN_146f8c84a body=86 status=ok
// SIG undefined FUN_146f8c84a(void)

void FUN_146f8c84a(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x28) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    return;
  }
  FUN_146f8c8a0(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8c8f6(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f8c8a0 FUN_146f8c8a0 body=86 status=ok
// SIG undefined FUN_146f8c8a0(void)

void FUN_146f8c8a0(longlong param_1,uint param_2,uint param_3)

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
    FUN_146f8c92a(param_1,0,uVar3,0x20);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 146f8c8f6 FUN_146f8c8f6 body=52 status=ok
// SIG undefined FUN_146f8c8f6(void)

void FUN_146f8c8f6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146f8c9b0(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 146f8c92a FUN_146f8c92a body=133 status=ok
// SIG undefined FUN_146f8c92a(void)

void FUN_146f8c92a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 146f8c9b0 FUN_146f8c9b0 body=98 status=ok
// SIG undefined FUN_146f8c9b0(void)

undefined8 * FUN_146f8c9b0(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146f8ca12(param_1,iVar1,0);
    FUN_146f8ca84(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 146f8ca12 FUN_146f8ca12 body=114 status=ok
// SIG undefined FUN_146f8ca12(void)

void FUN_146f8ca12(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146f8ca84 FUN_146f8ca84 body=146 status=ok
// SIG undefined FUN_146f8ca84(void)

void FUN_146f8ca84(undefined8 *param_1,longlong param_2,int param_3)

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
        FUN_1401b309e(param_1,iVar1,0);
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



// FUNCTION 146f8cb16 FUN_146f8cb16 body=245 status=ok
// SIG undefined FUN_146f8cb16(void)

void FUN_146f8cb16(longlong *param_1,int param_2)

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
  FUN_146f8cc0c(param_1,iVar3,1);
  uVar6 = *(uint *)(param_1 + 2);
  if (param_2 < (int)uVar6) {
    if (iVar3 < 1) goto LAB_146f8cb6d;
    uVar4 = (uVar4 & 0xff) + 1;
  }
  else {
    if (param_2 <= (int)uVar6) goto LAB_146f8cb6d;
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
      FUN_1406089a0(lVar2 + *param_1 + -0xc18,iVar3,0);
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
LAB_146f8cb6d:
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f8cc0c FUN_146f8cc0c body=134 status=ok
// SIG undefined FUN_146f8cc0c(void)

void FUN_146f8cc0c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f8ccbc(param_1,iVar1);
    }
    FUN_146f8cc93((longlong)iVar1 * 0xc18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f8cdf6(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f8ce5c(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f8cc93 FUN_146f8cc93 body=41 status=ok
// SIG undefined FUN_146f8cc93(void)

void FUN_146f8cc93(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f8cd50(param_1);
    param_1 = param_1 + 0xc18;
  }
  return;
}



// FUNCTION 146f8ccbc FUN_146f8ccbc body=146 status=ok
// SIG undefined FUN_146f8ccbc(void)

void FUN_146f8ccbc(longlong param_1,int param_2)

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



// FUNCTION 146f8cd50 FUN_146f8cd50 body=164 status=ok
// SIG undefined FUN_146f8cd50(void)

undefined8 * FUN_146f8cd50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1402191ca(param_1,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8cdf6 FUN_146f8cdf6 body=101 status=ok
// SIG undefined FUN_146f8cdf6(void)

void FUN_146f8cdf6(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0xc18 + *param_1);
  FUN_146f8c81b(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xc18 + (longlong)_Dst),(longlong)iVar2 * 0xc18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f8ce5c FUN_146f8ce5c body=63 status=ok
// SIG undefined FUN_146f8ce5c(void)

void FUN_146f8ce5c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f8ce9c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc18,8);
  }
  return;
}



// FUNCTION 146f8ce9c FUN_146f8ce9c body=115 status=ok
// SIG undefined FUN_146f8ce9c(void)

ulonglong FUN_146f8ce9c(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146f8cf10 FUN_146f8cf10 body=91 status=ok
// SIG undefined FUN_146f8cf10(void)

void FUN_146f8cf10(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + 0xffU) >> 8;
  FUN_146f8cf6c(param_1,iVar1);
  FUN_146f8cc0c(param_1,iVar1,1);
  if (0 < iVar1) {
    *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) =
         (param_2 + 0xffU & 0xff) + 1;
  }
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f8cf6c FUN_146f8cf6c body=68 status=ok
// SIG undefined FUN_146f8cf6c(void)

void FUN_146f8cf6c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146f8c81b(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146f8cfb2(param_1,param_2);
  return;
}



// FUNCTION 146f8cfb2 FUN_146f8cfb2 body=112 status=ok
// SIG undefined FUN_146f8cfb2(void)

void FUN_146f8cfb2(longlong param_1,int param_2)

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



// FUNCTION 146f8d022 FUN_146f8d022 body=198 status=ok
// SIG undefined FUN_146f8d022(void)

longlong * FUN_146f8d022(longlong *param_1,longlong param_2)

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
  FUN_146f8d0e8(param_1,param_2 + 0x18);
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x48);
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



// FUNCTION 146f8d0e8 FUN_146f8d0e8 body=333 status=ok
// SIG undefined FUN_146f8d0e8(void)

longlong * FUN_146f8d0e8(longlong *param_1,longlong param_2)

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
      FUN_146f8d236(param_2,0);
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
      FUN_146f8d283(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar7 < *(int *)(param_2 + 0x28));
  }
  else {
    FUN_146f8d236(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f8d2f6(param_2);
        FUN_146f8d283(param_1,uVar3);
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



// FUNCTION 146f8d236 FUN_146f8d236 body=76 status=ok
// SIG undefined FUN_146f8d236(void)

void FUN_146f8d236(longlong param_1,int param_2)

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
  FUN_146f8c7e5(lVar1,*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == param_2) {
    return;
  }
  FUN_146f8d342(param_1,param_2);
  return;
}



// FUNCTION 146f8d283 FUN_146f8d283 body=115 status=ok
// SIG undefined FUN_146f8d283(void)

longlong * FUN_146f8d283(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_146f8d398();
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
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x14);
  return param_1;
}



// FUNCTION 146f8d2f6 FUN_146f8d2f6 body=75 status=ok
// SIG undefined FUN_146f8d2f6(void)

longlong FUN_146f8d2f6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_146f8d70e(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x20 + lVar2;
  FUN_146f8d6f7(lVar2,1);
  return lVar2;
}



// FUNCTION 146f8d342 FUN_146f8d342 body=85 status=ok
// SIG undefined FUN_146f8d342(void)

void FUN_146f8d342(longlong param_1,uint param_2)

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
  FUN_146f8c92a(param_1,*(undefined4 *)(param_1 + 0x28),uVar3,0x20);
  return;
}



// FUNCTION 146f8d398 FUN_146f8d398 body=358 status=ok
// SIG undefined FUN_146f8d398(void)

longlong * FUN_146f8d398(longlong *param_1,longlong *param_2)

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
      FUN_146f8c81b(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146f8cfb2(param_2,0);
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
      FUN_146f8d4ff(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146f8cf6c(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f8d6b4(param_2);
        FUN_146f8d4ff(param_1,uVar3);
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



// FUNCTION 146f8d4ff FUN_146f8d4ff body=436 status=ok
// SIG undefined FUN_146f8d4ff(void)

longlong * FUN_146f8d4ff(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  FUN_140219018();
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



// FUNCTION 146f8d6b4 FUN_146f8d6b4 body=67 status=ok
// SIG undefined FUN_146f8d6b4(void)

longlong FUN_146f8d6b4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f8ccbc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc18 + *param_1;
  FUN_146f8cc93(lVar2,1);
  return lVar2;
}



// FUNCTION 146f8d6f7 FUN_146f8d6f7 body=23 status=ok
// SIG undefined FUN_146f8d6f7(void)

void FUN_146f8d6f7(undefined8 *param_1,int param_2)

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



// FUNCTION 146f8d70e FUN_146f8d70e body=130 status=ok
// SIG undefined FUN_146f8d70e(void)

void FUN_146f8d70e(longlong param_1,int param_2)

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
    FUN_146f8c92a(param_1,param_2,uVar5,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f8d792 FUN_146f8d792 body=521 status=ok
// SIG undefined FUN_146f8d792(void)

void FUN_146f8d792(longlong *param_1,longlong *param_2,undefined8 *param_3)

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
        FUN_146f8cb16(&local_88,iVar2 + 1,local_b8);
      }
      uVar7 = (ulonglong)(uVar5 & 0xff);
      lVar6 = (longlong)((int)uVar5 >> 8) * 0xc18;
      lVar1 = *param_1 + lVar6;
      iVar3 = *(int *)(lVar1 + 0x410 + uVar7 * 4);
      iVar4 = *(int *)(lVar1 + 0x10 + uVar7 * 4);
      lVar1 = *(longlong *)(*param_1 + lVar6);
      local_c0 = 0;
      local_c8 = 1;
      FUN_146f8d99c(&local_88,&local_68,iVar2,iVar3);
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
  FUN_146f8db12(param_1,&local_88);
  param_1[2] = CONCAT44(uStack_74,local_78);
  *(undefined4 *)(param_1 + 3) = uStack_70;
  FUN_146f8c81b(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8d99c FUN_146f8d99c body=373 status=ok
// SIG undefined FUN_146f8d99c(void)

void FUN_146f8d99c(longlong *param_1,longlong *param_2,ulonglong param_3,int param_4,char param_5,
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
    FUN_1406089a0(plVar1,(int)lVar5 + uVar9,CONCAT71((uint7)(uint3)(int3)(short)(param_3 >> 0x10),1)
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



// FUNCTION 146f8db12 FUN_146f8db12 body=80 status=ok
// SIG undefined FUN_146f8db12(void)

longlong * FUN_146f8db12(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146f8c81b(*param_1,(int)param_1[1]);
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



// FUNCTION 146f8db62 FUN_146f8db62 body=145 status=ok
// SIG undefined FUN_146f8db62(void)

void FUN_146f8db62(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f8d70e(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    FUN_146f8d6f7((longlong)iVar1 * 0x20 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f8dbf4(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f8dc5e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f8dbf4 FUN_146f8dbf4 body=106 status=ok
// SIG undefined FUN_146f8dbf4(void)

void FUN_146f8dbf4(longlong param_1,int param_2,int param_3)

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
  FUN_146f8c7e5(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x28);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar3 << 5);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar1 - param_3;
  return;
}



// FUNCTION 146f8dc5e FUN_146f8dc5e body=59 status=ok
// SIG undefined FUN_146f8dc5e(void)

void FUN_146f8dc5e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f8dc9a(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_146f8c92a(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,0x20);
  return;
}



// FUNCTION 146f8dc9a FUN_146f8dc9a body=105 status=ok
// SIG undefined FUN_146f8dc9a(void)

ulonglong FUN_146f8dc9a(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146f8dd04 FUN_146f8dd04 body=109 status=ok
// SIG undefined FUN_146f8dd04(void)

void FUN_146f8dd04(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)(int)param_2 * 0x20;
  FUN_146f8c81b(*(undefined8 *)(lVar2 + lVar3),*(undefined4 *)(lVar2 + 8 + lVar3));
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



// FUNCTION 146f8dd72 FUN_146f8dd72 body=42 status=ok
// SIG undefined FUN_146f8dd72(void)

longlong FUN_146f8dd72(longlong param_1,int param_2)

{
  FUN_146f8e254(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f8dd9c FUN_146f8dd9c body=122 status=ok
// SIG undefined FUN_146f8dd9c(void)

undefined8 * FUN_146f8dd9c(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa7db0;
  puVar4[6] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f8e2b4(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x38),0);
  puVar6 = (undefined8 *)(param_1 + 0x40);
  puVar7 = puVar4 + 8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f8de16 FUN_146f8de16 body=100 status=ok
// SIG undefined FUN_146f8de16(void)

void FUN_146f8de16(longlong param_1,int param_2)

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
      FUN_146f8e47e(lVar1,param_2,param_1 + 0x40);
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



// FUNCTION 146f8de7a FUN_146f8de7a body=107 status=ok
// SIG undefined FUN_146f8de7a(void)

void FUN_146f8de7a(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  plVar6 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar1 = plVar6 + (longlong)*(int *)(param_1 + 0x38) * 3;
    do {
      uVar2 = *(uint *)(plVar6 + 2);
      if (uVar2 != 0) {
        uVar7 = 0;
        do {
          puVar4 = (undefined8 *)(param_1 + 0x40);
          puVar5 = (undefined8 *)((longlong)(int)(uVar2 * param_2 + uVar7) * 0x60 + *plVar6);
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          uVar7 = uVar7 + 1;
          uVar2 = *(uint *)(plVar6 + 2);
        } while (uVar7 < uVar2);
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar1);
  }
  return;
}



// FUNCTION 146f8dee6 FUN_146f8dee6 body=113 status=ok
// SIG undefined FUN_146f8dee6(void)

void FUN_146f8dee6(longlong param_1,int param_2)

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
      FUN_140ee6e38(lVar1,*(int *)(lVar1 + 0x10) * param_2);
      if (0 < param_2) {
        FUN_146f8e47e(lVar1,param_2 + -1,param_1 + 0x40);
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f8df58 FUN_146f8df58 body=86 status=ok
// SIG undefined FUN_146f8df58(void)

void FUN_146f8df58(longlong param_1,undefined4 param_2)

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
      FUN_146f8e4e2(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f8dfae FUN_146f8dfae body=87 status=ok
// SIG undefined FUN_146f8dfae(void)

ulonglong FUN_146f8dfae(longlong param_1)

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
                        (*(undefined8 *)(lVar4 + lVar3),*(int *)(lVar4 + 8 + lVar3) * 0x60,
                         uVar2 & 0xffffffff);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  return uVar2;
}



// FUNCTION 146f8e014 FUN_146f8e014 body=99 status=ok
// SIG undefined FUN_146f8e014(void)

void FUN_146f8e014(longlong param_1,undefined8 param_2)

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
      FUN_146f8ec54(lVar2,param_2,param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(lVar2 + 8) / *(uint *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f8e088 FUN_146f8e088 body=33 status=ok
// SIG undefined FUN_146f8e088(void)

void FUN_146f8e088(longlong param_1)

{
  FUN_146f8efd6(param_1 + 0x18);
  FUN_146f8ef1c(param_1 + 0x18);
  return;
}



// FUNCTION 146f8e0ae FUN_146f8e0ae body=200 status=ok
// SIG undefined FUN_146f8e0ae(void)

void FUN_146f8e0ae(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = param_1 + 0x18;
  iVar5 = *(int *)(param_1 + 0x38);
  if (param_2 < iVar5) {
    FUN_146f8ee1e(lVar1,param_2,1);
    return;
  }
  if (iVar5 < param_2) {
    do {
      *(uint *)(param_1 + 0x38) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x3c) < iVar5 + 1U) {
        FUN_146f8ebc2(lVar1,iVar5);
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
      FUN_140ee6e38(puVar2,iVar5 * iVar3);
      if (0 < iVar3) {
        FUN_146f8e47e(puVar2,iVar3 + -1,param_1 + 0x40);
      }
      iVar5 = *(int *)(param_1 + 0x38);
    } while (iVar5 < param_2);
  }
  return;
}



// FUNCTION 146f8e176 FUN_146f8e176 body=188 status=ok
// SIG undefined FUN_146f8e176(void)

void FUN_146f8e176(longlong param_1,int param_2)

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
    FUN_146f8ebc2(lVar1,iVar2);
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
  FUN_140ee6e38(lVar5 + lVar4,iVar2 * iVar3);
  if (iVar3 < 1) {
    return;
  }
  FUN_146f8e47e(lVar5 + lVar4,iVar3 + -1,param_1 + 0x40);
  return;
}



// FUNCTION 146f8e232 FUN_146f8e232 body=33 status=ok
// SIG undefined FUN_146f8e232(void)

void FUN_146f8e232(longlong param_1)

{
  FUN_146f8efd6(param_1 + 0x18);
  FUN_146f8ef1c(param_1 + 0x18);
  return;
}



// FUNCTION 146f8e254 FUN_146f8e254 body=53 status=ok
// SIG undefined FUN_146f8e254(void)

void FUN_146f8e254(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8e289(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f8e289 FUN_146f8e289 body=43 status=ok
// SIG undefined FUN_146f8e289(void)

void FUN_146f8e289(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f8e2b4 FUN_146f8e2b4 body=86 status=ok
// SIG undefined FUN_146f8e2b4(void)

void FUN_146f8e2b4(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f8e30a(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8e371(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f8e30a FUN_146f8e30a body=103 status=ok
// SIG undefined FUN_146f8e30a(void)

void FUN_146f8e30a(longlong param_1,uint param_2,uint param_3)

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
    FUN_146f8e3f0(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f8e371 FUN_146f8e371 body=126 status=ok
// SIG undefined FUN_146f8e371(void)

void FUN_146f8e371(undefined8 *param_1,longlong param_2,int param_3)

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
        FUN_144756262(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f8e3f0 FUN_146f8e3f0 body=141 status=ok
// SIG undefined FUN_146f8e3f0(void)

void FUN_146f8e3f0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 146f8e47e FUN_146f8e47e body=100 status=ok
// SIG undefined FUN_146f8e47e(void)

void FUN_146f8e47e(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  iVar4 = (param_2 + 1) * (int)param_1[2];
  iVar1 = (int)param_1[1];
  if (iVar1 < iVar4) {
    *(int *)(param_1 + 1) = iVar4;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(iVar4 - iVar1)) {
      FUN_144a2c682(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x60 + *param_1);
    iVar4 = iVar4 - iVar1;
    do {
      puVar5 = param_3;
      puVar6 = puVar2;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar2 = puVar2 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 146f8e4e2 FUN_146f8e4e2 body=28 status=ok
// SIG undefined FUN_146f8e4e2(void)

void FUN_146f8e4e2(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) * param_2;
  if (iVar1 < *(int *)(param_1 + 8)) {
    FUN_140ee84a4(param_1,iVar1,1);
    return;
  }
  FUN_146f8e47e(param_1,param_2 + -1);
  return;
}



// FUNCTION 146f8e4fe FUN_146f8e4fe body=243 status=ok
// SIG undefined FUN_146f8e4fe(void)

longlong * FUN_146f8e4fe(longlong *param_1,longlong param_2)

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
  FUN_146f8e5f2(param_1,param_2 + 0x18);
  FUN_1400f4f7e(param_1,param_2 + 0x40);
  FUN_14480c34d(param_1,param_2 + 0x60);
  FUN_14480c34d(param_1,param_2 + 0x80);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
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



// FUNCTION 146f8e5f2 FUN_146f8e5f2 body=341 status=ok
// SIG undefined FUN_146f8e5f2(void)

longlong * FUN_146f8e5f2(longlong *param_1,longlong param_2)

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
      FUN_146f8e748(param_2,0);
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
      FUN_146f8e795(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f8e748(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f8e8be(param_2);
        FUN_146f8e795(param_1,uVar3);
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



// FUNCTION 146f8e748 FUN_146f8e748 body=76 status=ok
// SIG undefined FUN_146f8e748(void)

void FUN_146f8e748(longlong param_1,int param_2)

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
  FUN_146f8e289(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f8e90a(param_1,param_2);
  return;
}



// FUNCTION 146f8e795 FUN_146f8e795 body=295 status=ok
// SIG undefined FUN_146f8e795(void)

longlong * FUN_146f8e795(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_146f8e7e7:
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
    iVar3 = FUN_1448332aa(param_1,&DAT_149e31250);
    if (iVar3 == 0x1f) goto LAB_146f8e7e7;
    iVar3 = FUN_1448332aa(param_1,&DAT_149e3cc78);
    if (3 < iVar3) goto LAB_146f8e7e7;
    *(undefined4 *)(param_2 + 0x10) = 1;
  }
  FUN_141156948(param_1);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
    local_28 = 0x601d1886;
    uStack_24 = 0xac644f84;
    uStack_20 = 0xaa16d3de;
    uStack_1c = 0xdeac7d6;
    lVar5 = FUN_144afef82(uVar4);
    if (lVar5 != 0) {
      cVar2 = FUN_1413e2d88(param_1,*(undefined4 *)(lVar5 + 0x10),0x85,1);
      if (cVar2 != '\0') {
        FUN_146f8e970(param_2,param_1,0);
        goto LAB_146f8e87f;
      }
    }
  }
  FUN_1400f4d04(param_1,param_2);
LAB_146f8e87f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8e8be FUN_146f8e8be body=76 status=ok
// SIG undefined FUN_146f8e8be(void)

longlong FUN_146f8e8be(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f8ebc2(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f8eba8(lVar2,1);
  return lVar2;
}



// FUNCTION 146f8e90a FUN_146f8e90a body=102 status=ok
// SIG undefined FUN_146f8e90a(void)

void FUN_146f8e90a(longlong param_1,uint param_2)

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
  FUN_146f8e3f0(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f8e970 FUN_146f8e970 body=567 status=ok
// SIG undefined FUN_146f8e970(void)

void FUN_146f8e970(undefined8 *param_1,longlong *param_2,char param_3)

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
  local_24 = 0x60;
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
    FUN_1400f4d04(param_2,param_1);
    goto LAB_146f8e9e3;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) * 0x60,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0x60);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_146f8e9e3;
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
LAB_146f8eb6d:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 * 0x60);
  }
  else {
    if (local_24 == 0x60) {
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
      if (local_28 < 0x1555556) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_1401a2688(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_144a2c682(param_1,iVar4);
        }
        goto LAB_146f8eb6d;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_146f8e9e3:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f8eba8 FUN_146f8eba8 body=26 status=ok
// SIG undefined FUN_146f8eba8(void)

void FUN_146f8eba8(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f8ebc2 FUN_146f8ebc2 body=145 status=ok
// SIG undefined FUN_146f8ebc2(void)

void FUN_146f8ebc2(longlong param_1,int param_2)

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
    FUN_146f8e3f0(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f8ec54 FUN_146f8ec54 body=456 status=ok
// SIG undefined FUN_146f8ec54(void)

void FUN_146f8ec54(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
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
      FUN_146f8e47e(&local_78,iVar1);
      lVar3 = param_1[2];
      if ((int)lVar3 != 0) {
        lVar2 = *param_1;
        lVar8 = 0;
        uVar9 = 0;
        do {
          puVar6 = (undefined8 *)((longlong)((int)lVar3 * iVar4) * 0x60 + lVar2 + lVar8);
          puVar7 = (undefined8 *)((longlong)(iVar1 * local_68) * 0x60 + local_78 + lVar8);
          for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x60;
        } while (uVar9 < *(uint *)(param_1 + 2));
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



// FUNCTION 146f8ee1e FUN_146f8ee1e body=143 status=ok
// SIG undefined FUN_146f8ee1e(void)

void FUN_146f8ee1e(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f8ebc2(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f8eba8(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f8eeae(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f8ef1c(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f8eeae FUN_146f8eeae body=109 status=ok
// SIG undefined FUN_146f8eeae(void)

void FUN_146f8eeae(longlong param_1,int param_2,int param_3)

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
  FUN_146f8e289(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f8ef1c FUN_146f8ef1c body=59 status=ok
// SIG undefined FUN_146f8ef1c(void)

void FUN_146f8ef1c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f8ef58(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f8e3f0(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f8ef58 FUN_146f8ef58 body=126 status=ok
// SIG undefined FUN_146f8ef58(void)

ulonglong FUN_146f8ef58(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146f8efd6 FUN_146f8efd6 body=97 status=ok
// SIG undefined FUN_146f8efd6(void)

void FUN_146f8efd6(longlong param_1,uint param_2)

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



// FUNCTION 146f8f038 FUN_146f8f038 body=42 status=ok
// SIG undefined FUN_146f8f038(void)

longlong FUN_146f8f038(longlong param_1,int param_2)

{
  FUN_146f8f560(param_1 + 0x20);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f8f062 FUN_146f8f062 body=135 status=ok
// SIG undefined FUN_146f8f062(void)

undefined8 * FUN_146f8f062(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x120,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa7e40;
  puVar4[0x14] = 0;
  lVar5 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xa0);
  }
  FUN_146f8f602(puVar4 + 4,lVar5,*(undefined4 *)(param_1 + 0xb0),0);
  puVar6 = (undefined8 *)(param_1 + 0xc0);
  puVar7 = puVar4 + 0x18;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f8f0ea FUN_146f8f0ea body=121 status=ok
// SIG undefined FUN_146f8f0ea(void)

void FUN_146f8f0ea(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
  }
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0xb0) << 7;
    do {
      if (*(int *)(lVar2 + 0x10) <= param_2) {
        FUN_146f8f8f0(lVar2,param_2 + 1,param_1 + 0xc0);
      }
      lVar2 = lVar2 + 0x80;
      lVar3 = lVar3 + -0x80;
    } while (lVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < param_2 + 1) {
    iVar1 = param_2 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}



// FUNCTION 146f8f1ba FUN_146f8f1ba body=91 status=ok
// SIG undefined FUN_146f8f1ba(void)

void FUN_146f8f1ba(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xb0) << 7;
    do {
      FUN_146f8fcea(lVar1,param_2,param_1 + 0xc0);
      lVar1 = lVar1 + 0x80;
      lVar2 = lVar2 + -0x80;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f8f216 FUN_146f8f216 body=91 status=ok
// SIG undefined FUN_146f8f216(void)

void FUN_146f8f216(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xb0) << 7;
    do {
      FUN_146f8f8f0(lVar1,param_2,param_1 + 0xc0);
      lVar1 = lVar1 + 0x80;
      lVar2 = lVar2 + -0x80;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f8f272 FUN_146f8f272 body=133 status=ok
// SIG undefined FUN_146f8f272(void)

ulonglong FUN_146f8f272(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0xa0);
  }
  if ((longlong)*(int *)(param_1 + 0xb0) == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0xb0) * 0x10;
    uVar3 = 0;
    do {
      lVar2 = plVar4[1];
      if ((longlong)(int)lVar2 != 0) {
        lVar1 = *plVar4;
        lVar6 = 0;
        do {
          uVar3 = (*(code *)PTR_FUN_14c75b148)
                            (*(undefined8 *)(lVar1 + lVar6),*(int *)(lVar1 + 8 + lVar6) * 0x60,
                             uVar3 & 0xffffffff);
          lVar6 = lVar6 + 0xc18;
        } while ((longlong)(int)lVar2 * 0xc18 - lVar6 != 0);
      }
      plVar4 = plVar4 + 0x10;
    } while (plVar4 != plVar5);
  }
  return uVar3;
}



// FUNCTION 146f8f306 FUN_146f8f306 body=102 status=ok
// SIG undefined FUN_146f8f306(void)

void FUN_146f8f306(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xb0) * 0x80 + lVar1;
    do {
      FUN_146f90636(lVar1,param_2,param_1 + 0xc0);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
      lVar1 = lVar1 + 0x80;
    } while (lVar1 != lVar2);
  }
  return;
}



// FUNCTION 146f8f380 FUN_146f8f380 body=33 status=ok
// SIG undefined FUN_146f8f380(void)

void FUN_146f8f380(longlong param_1)

{
  FUN_146f90c48(param_1 + 0x20);
  FUN_146f90b94(param_1 + 0x20);
  return;
}



// FUNCTION 146f8f3aa FUN_146f8f3aa body=213 status=ok
// SIG undefined FUN_146f8f3aa(void)

void FUN_146f8f3aa(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar1 = param_1 + 0x20;
  iVar4 = *(int *)(param_1 + 0xb0);
  if (iVar4 <= param_2) {
    if (iVar4 < param_2) {
      do {
        *(uint *)(param_1 + 0xb0) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0xb4) < iVar4 + 1U) {
          FUN_146f905aa(lVar1,iVar4);
        }
        lVar2 = *(longlong *)(param_1 + 0xa0);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          lVar2 = lVar1;
        }
        puVar6 = (undefined8 *)(lVar2 + (longlong)iVar4 * 0x80);
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined4 *)(puVar6 + 2) = 0;
        puVar5 = (undefined8 *)(param_1 + 0xc0);
        puVar6 = puVar6 + 4;
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_146f8fcea(lVar2 + (longlong)iVar4 * 0x80,*(undefined4 *)(param_1 + 0x10),
                      (undefined8 *)(param_1 + 0xc0));
        iVar4 = *(int *)(param_1 + 0xb0);
      } while (iVar4 < param_2);
    }
    return;
  }
  FUN_146f90a80(lVar1,param_2,1);
  return;
}



// FUNCTION 146f8f480 FUN_146f8f480 body=189 status=ok
// SIG undefined FUN_146f8f480(void)

void FUN_146f8f480(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar3 = param_1 + 0x20;
  iVar1 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar1 + 1;
  if (*(int *)(param_1 + 0xb4) == iVar1) {
    FUN_146f905aa(lVar3,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar2 = lVar3;
  }
  lVar6 = (longlong)param_2 * 0x80;
  memmove((void *)(lVar2 + lVar6 + 0x80),(void *)(lVar2 + lVar6),
          (ulonglong)(uint)(iVar1 - param_2) << 7);
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar2 = lVar3;
  }
  puVar5 = (undefined8 *)(lVar2 + 0x20 + lVar6);
  puVar5[-4] = 0;
  puVar5[-3] = 0;
  *(undefined4 *)(puVar5 + -2) = 0;
  puVar4 = (undefined8 *)(param_1 + 0xc0);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_146f8fcea(lVar2 + lVar6,*(undefined4 *)(param_1 + 0x10),(undefined8 *)(param_1 + 0xc0));
  return;
}



// FUNCTION 146f8f53e FUN_146f8f53e body=33 status=ok
// SIG undefined FUN_146f8f53e(void)

void FUN_146f8f53e(longlong param_1)

{
  FUN_146f90c48(param_1 + 0x20);
  FUN_146f90b94(param_1 + 0x20);
  return;
}



// FUNCTION 146f8f560 FUN_146f8f560 body=62 status=ok
// SIG undefined FUN_146f8f560(void)

void FUN_146f8f560(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8f59e(lVar1,*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f8f59e FUN_146f8f59e body=54 status=ok
// SIG undefined FUN_146f8f59e(void)

void FUN_146f8f59e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f8f5d4(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 146f8f5d4 FUN_146f8f5d4 body=46 status=ok
// SIG undefined FUN_146f8f5d4(void)

void FUN_146f8f5d4(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x183;
  }
  return;
}



// FUNCTION 146f8f602 FUN_146f8f602 body=95 status=ok
// SIG undefined FUN_146f8f602(void)

void FUN_146f8f602(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x90) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x94) = 1;
    return;
  }
  FUN_146f8f662(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8f6bb(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f8f662 FUN_146f8f662 body=89 status=ok
// SIG undefined FUN_146f8f662(void)

void FUN_146f8f662(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 7,0);
    uVar1 = (uint)(uVar2 >> 7);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f8f6f8(param_1,0,uVar3,0x80);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x94) = param_3;
  return;
}



// FUNCTION 146f8f6bb FUN_146f8f6bb body=60 status=ok
// SIG undefined FUN_146f8f6bb(void)

void FUN_146f8f6bb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146f8f786(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 146f8f6f8 FUN_146f8f6f8 body=142 status=ok
// SIG undefined FUN_146f8f6f8(void)

void FUN_146f8f6f8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 7);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 7);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f8f786 FUN_146f8f786 body=100 status=ok
// SIG undefined FUN_146f8f786(void)

undefined8 * FUN_146f8f786(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146f8f7ea(param_1,iVar1,0);
    FUN_146f8f85c(*param_1,uVar2,iVar1);
  }
  puVar4 = param_2 + 2;
  puVar5 = param_1 + 2;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_1;
}



// FUNCTION 146f8f7ea FUN_146f8f7ea body=114 status=ok
// SIG undefined FUN_146f8f7ea(void)

void FUN_146f8f7ea(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146f8f85c FUN_146f8f85c body=147 status=ok
// SIG undefined FUN_146f8f85c(void)

void FUN_146f8f85c(undefined8 *param_1,longlong param_2,int param_3)

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
        FUN_144756262(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
      }
      memcpy(param_1 + 2,_Src_00,0xc04);
      param_1 = param_1 + 0x183;
      _Src_00 = (void *)((longlong)_Src_00 + 0xc18);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f8f8f0 FUN_146f8f8f0 body=245 status=ok
// SIG undefined FUN_146f8f8f0(void)

void FUN_146f8f8f0(longlong *param_1,int param_2)

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
  FUN_146f8f9e6(param_1,iVar3,1);
  uVar6 = *(uint *)(param_1 + 2);
  if (param_2 < (int)uVar6) {
    if (iVar3 < 1) goto LAB_146f8f947;
    uVar4 = (uVar4 & 0xff) + 1;
  }
  else {
    if (param_2 <= (int)uVar6) goto LAB_146f8f947;
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
      FUN_140ee84a4(lVar2 + *param_1 + -0xc18,iVar3,0);
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
LAB_146f8f947:
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f8f9e6 FUN_146f8f9e6 body=134 status=ok
// SIG undefined FUN_146f8f9e6(void)

void FUN_146f8f9e6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f8fa96(param_1,iVar1);
    }
    FUN_146f8fa6d((longlong)iVar1 * 0xc18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f8fbd0(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f8fc36(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f8fa6d FUN_146f8fa6d body=41 status=ok
// SIG undefined FUN_146f8fa6d(void)

void FUN_146f8fa6d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f8fb2a(param_1);
    param_1 = param_1 + 0xc18;
  }
  return;
}



// FUNCTION 146f8fa96 FUN_146f8fa96 body=146 status=ok
// SIG undefined FUN_146f8fa96(void)

void FUN_146f8fa96(longlong param_1,int param_2)

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



// FUNCTION 146f8fb2a FUN_146f8fb2a body=164 status=ok
// SIG undefined FUN_146f8fb2a(void)

undefined8 * FUN_146f8fb2a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1401a2688(param_1,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8fbd0 FUN_146f8fbd0 body=101 status=ok
// SIG undefined FUN_146f8fbd0(void)

void FUN_146f8fbd0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0xc18 + *param_1);
  FUN_146f8f5d4(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xc18 + (longlong)_Dst),(longlong)iVar2 * 0xc18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f8fc36 FUN_146f8fc36 body=63 status=ok
// SIG undefined FUN_146f8fc36(void)

void FUN_146f8fc36(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f8fc76(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc18,8);
  }
  return;
}



// FUNCTION 146f8fc76 FUN_146f8fc76 body=115 status=ok
// SIG undefined FUN_146f8fc76(void)

ulonglong FUN_146f8fc76(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146f8fcea FUN_146f8fcea body=91 status=ok
// SIG undefined FUN_146f8fcea(void)

void FUN_146f8fcea(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + 0xffU) >> 8;
  FUN_146f8fd46(param_1,iVar1);
  FUN_146f8f9e6(param_1,iVar1,1);
  if (0 < iVar1) {
    *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) =
         (param_2 + 0xffU & 0xff) + 1;
  }
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f8fd46 FUN_146f8fd46 body=68 status=ok
// SIG undefined FUN_146f8fd46(void)

void FUN_146f8fd46(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146f8f5d4(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146f8fd8c(param_1,param_2);
  return;
}



// FUNCTION 146f8fd8c FUN_146f8fd8c body=112 status=ok
// SIG undefined FUN_146f8fd8c(void)

void FUN_146f8fd8c(longlong param_1,int param_2)

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



// FUNCTION 146f8fdfc FUN_146f8fdfc body=252 status=ok
// SIG undefined FUN_146f8fdfc(void)

longlong * FUN_146f8fdfc(longlong *param_1,longlong param_2)

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
  FUN_146f8fef8(param_1,param_2 + 0x20);
  FUN_1400f4f7e(param_1,param_2 + 0xc0);
  FUN_14480c34d(param_1,param_2 + 0xe0);
  FUN_14480c34d(param_1,param_2 + 0x100);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(undefined8 *)(param_2 + 0xf8) = 0;
    *(undefined8 *)(param_2 + 0x118) = 0;
  }
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



// FUNCTION 146f8fef8 FUN_146f8fef8 body=351 status=ok
// SIG undefined FUN_146f8fef8(void)

longlong * FUN_146f8fef8(longlong *param_1,longlong param_2)

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
            (param_1,(longlong)*(int *)(param_2 + 0x90) << 7,(longlong)*(int *)(param_2 + 0x94) << 7
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x90);
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
      FUN_146f90058(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x20000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x90) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x80);
      if (*(longlong *)(param_2 + 0x80) == 0) {
        lVar4 = param_2;
      }
      FUN_146f900b1(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x80;
    } while (lVar7 < *(int *)(param_2 + 0x90));
  }
  else {
    FUN_146f90058(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f90146(param_2);
        FUN_146f900b1(param_1,uVar3);
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



// FUNCTION 146f90058 FUN_146f90058 body=88 status=ok
// SIG undefined FUN_146f90058(void)

void FUN_146f90058(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8f59e(lVar1,*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) == param_2) {
    return;
  }
  FUN_146f9019e(param_1,param_2);
  return;
}



// FUNCTION 146f900b1 FUN_146f900b1 body=148 status=ok
// SIG undefined FUN_146f900b1(void)

longlong * FUN_146f900b1(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_146f901fc();
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
  FUN_1400f4f7e(param_1,param_2 + 0x20);
  FUN_14480c34d(param_1,param_2 + 0x40);
  FUN_14480c34d(param_1,param_2 + 0x60);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  return param_1;
}



// FUNCTION 146f90146 FUN_146f90146 body=87 status=ok
// SIG undefined FUN_146f90146(void)

longlong FUN_146f90146(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_146f905aa(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x80 + lVar2;
  FUN_146f9055b(lVar2,1);
  return lVar2;
}



// FUNCTION 146f9019e FUN_146f9019e body=94 status=ok
// SIG undefined FUN_146f9019e(void)

void FUN_146f9019e(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 7,0);
    uVar1 = (uint)(uVar2 >> 7);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x94)) {
    return;
  }
  *(uint *)(param_1 + 0x94) = uVar3;
  FUN_146f8f6f8(param_1,*(undefined4 *)(param_1 + 0x90),uVar3,0x80);
  return;
}



// FUNCTION 146f901fc FUN_146f901fc body=358 status=ok
// SIG undefined FUN_146f901fc(void)

longlong * FUN_146f901fc(longlong *param_1,longlong *param_2)

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
      FUN_146f8f5d4(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146f8fd8c(param_2,0);
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
      FUN_146f90363(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146f8fd46(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f90518(param_2);
        FUN_146f90363(param_1,uVar3);
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



// FUNCTION 146f90363 FUN_146f90363 body=436 status=ok
// SIG undefined FUN_146f90363(void)

longlong * FUN_146f90363(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  FUN_1400f4d04();
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



// FUNCTION 146f90518 FUN_146f90518 body=67 status=ok
// SIG undefined FUN_146f90518(void)

longlong FUN_146f90518(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f8fa96(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc18 + *param_1;
  FUN_146f8fa6d(lVar2,1);
  return lVar2;
}



// FUNCTION 146f9055b FUN_146f9055b body=79 status=ok
// SIG undefined FUN_146f9055b(void)

void FUN_146f9055b(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x70);
    do {
      puVar1[-10] = 0;
      puVar1[-9] = 0;
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      *(undefined4 *)(puVar1 + -0xc) = 0;
      *(undefined4 *)(puVar1 + -8) = 0;
      *(undefined4 *)((longlong)puVar1 + -0x3c) = 0;
      *(undefined4 *)(puVar1 + -7) = 0;
      *(undefined4 *)((longlong)puVar1 + -0x34) = 0x3ff00000;
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      puVar1[-2] = 0x3ff0000000000000;
      puVar1[-1] = 0x3ff0000000000000;
      *puVar1 = 0x3ff0000000000000;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f905aa FUN_146f905aa body=139 status=ok
// SIG undefined FUN_146f905aa(void)

void FUN_146f905aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x94) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 7,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 7)) {
        uVar5 = uVar3 >> 7 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x94) = (int)uVar5;
    FUN_146f8f6f8(param_1,param_2,uVar5,0x80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f90636 FUN_146f90636 body=553 status=ok
// SIG undefined FUN_146f90636(void)

void FUN_146f90636(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  uint local_f8;
  uint uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  ulonglong uStack_e0;
  longlong local_d8 [14];
  longlong local_68;
  longlong *local_60;
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_d8[0]._0_4_ = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  plVar10 = param_3;
  plVar12 = local_d8 + 2;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar12 = *plVar10;
    plVar10 = plVar10 + 1;
    plVar12 = plVar12 + 1;
  }
  local_60 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  local_118 = param_3;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_108 = local_68;
  local_100 = local_60;
  local_f8 = local_58;
  uStack_f4 = uStack_54;
  local_f0 = local_50;
  local_ec = local_4c;
  local_110 = param_2;
  if ((int)uStack_54 < (int)local_60[3]) {
    do {
      uVar4 = uStack_f4;
      iVar1 = *(int *)(*param_2 + (longlong)(int)uStack_f4 * 8);
      if ((int)local_d8[0] <= iVar1) {
        FUN_146f8f8f0(&local_e8,iVar1 + 1,local_118);
      }
      uVar7 = (ulonglong)(uVar4 & 0xff);
      lVar5 = (longlong)((int)uVar4 >> 8) * 0xc18;
      lVar6 = *param_1 + lVar5;
      iVar2 = *(int *)(lVar6 + 0x410 + uVar7 * 4);
      iVar3 = *(int *)(lVar6 + 0x10 + uVar7 * 4);
      lVar6 = *(longlong *)(*param_1 + lVar5);
      local_120 = 0;
      local_128 = 1;
      FUN_146f90860(&local_e8,&local_68,iVar1,iVar2);
      if (0 < (longlong)iVar2) {
        lVar5 = 0;
        do {
          puVar9 = (undefined8 *)((longlong)iVar3 * 0x60 + lVar6 + lVar5);
          puVar11 = (undefined8 *)(local_68 + lVar5);
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          lVar5 = lVar5 + 0x60;
        } while ((longlong)iVar2 * 0x60 != lVar5);
      }
      local_f8 = local_f8 & ~local_108._4_4_;
      FUN_1449c0562(&local_108);
    } while ((int)uStack_f4 < (int)local_100[3]);
  }
  FUN_146f90a30(param_1,&local_e8);
  plVar10 = local_d8;
  plVar12 = param_1 + 2;
  for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar12 = *plVar10;
    plVar10 = plVar10 + 1;
    plVar12 = plVar12 + 1;
  }
  FUN_146f8f5d4(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f90860 FUN_146f90860 body=464 status=ok
// SIG undefined FUN_146f90860(void)

void FUN_146f90860(longlong *param_1,longlong *param_2,ulonglong param_3,int param_4,char param_5,
                  char param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar11 = param_3 & 0xff;
  lVar6 = *param_1;
  lVar7 = (longlong)((int)param_3 >> 8) * 0xc18;
  plVar1 = (longlong *)(lVar6 + lVar7);
  piVar2 = (int *)((longlong)plVar1 + uVar11 * 4 + 0x810);
  uVar9 = param_4 - *piVar2;
  if (uVar9 == 0 || param_4 < *piVar2) {
    lVar12 = *(longlong *)(lVar6 + lVar7);
  }
  else {
    lVar5 = plVar1[1];
    FUN_140ee84a4(plVar1,uVar9 + (int)lVar5,CONCAT71((uint7)(uint3)(int3)(short)(param_3 >> 0x10),1)
                 );
    lVar12 = *plVar1;
    _Src = (void *)((longlong)*(int *)((longlong)plVar1 + uVar11 * 4 + 0x810) * 0x60 +
                   (longlong)*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) * 0x60 + lVar12);
    memmove((void *)((ulonglong)uVar9 * 0x60 + (longlong)_Src),_Src,
            ((longlong)(int)lVar5 * 0x60 + lVar12) - (longlong)_Src);
    *(int *)((longlong)plVar1 + uVar11 * 4 + 0x810) = param_4;
    if ((int)uVar11 + 1 < (int)plVar1[0x182]) {
      uVar4 = uVar11;
      do {
        piVar2 = (int *)(lVar7 + lVar6 + 0x14 + uVar4 * 4);
        *piVar2 = *piVar2 + uVar9;
        lVar5 = uVar4 + 2;
        uVar4 = uVar4 + 1;
      } while (lVar5 < (int)plVar1[0x182]);
    }
  }
  if (param_6 != '\0') {
    iVar3 = *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410);
    lVar6 = (longlong)iVar3;
    if (iVar3 < param_4) {
      if (iVar3 < *(int *)((longlong)plVar1 + uVar11 * 4 + 0x810)) {
        do {
          plVar8 = param_1 + 4;
          plVar10 = (longlong *)
                    ((*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) + lVar6) * 0x60 + *plVar1);
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *plVar10 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar10 = plVar10 + 1;
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)((longlong)plVar1 + uVar11 * 4 + 0x810));
      }
    }
    else if (param_4 < iVar3) {
      lVar6 = (longlong)param_4;
      do {
        plVar8 = param_1 + 4;
        plVar10 = (longlong *)
                  ((*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) + lVar6) * 0x60 + *plVar1);
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *plVar10 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar10 = plVar10 + 1;
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410));
    }
  }
  if (param_5 == '\0') {
    param_4 = *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410);
  }
  else {
    *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410) = param_4;
  }
  *param_2 = lVar12 + (longlong)*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) * 0x60;
  *(int *)(param_2 + 1) = param_4;
  return;
}



// FUNCTION 146f90a30 FUN_146f90a30 body=80 status=ok
// SIG undefined FUN_146f90a30(void)

longlong * FUN_146f90a30(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146f8f5d4(*param_1,(int)param_1[1]);
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



// FUNCTION 146f90a80 FUN_146f90a80 body=157 status=ok
// SIG undefined FUN_146f90a80(void)

void FUN_146f90a80(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x90) = param_2;
    if ((uint)(*(int *)(param_1 + 0x94) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f905aa(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    FUN_146f9055b((longlong)iVar1 * 0x80 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f90b1e(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f90b94(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f90b1e FUN_146f90b1e body=118 status=ok
// SIG undefined FUN_146f90b1e(void)

void FUN_146f90b1e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((longlong)param_2 * 0x80 + lVar2);
  FUN_146f8f59e(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x90);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x80 + (longlong)_Dst),(longlong)iVar3 << 7);
    iVar1 = *(int *)(param_1 + 0x90);
  }
  *(int *)(param_1 + 0x90) = iVar1 - param_3;
  return;
}



// FUNCTION 146f90b94 FUN_146f90b94 body=74 status=ok
// SIG undefined FUN_146f90b94(void)

void FUN_146f90b94(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f90bde(param_1,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  if (iVar1 == *(int *)(param_1 + 0x94)) {
    return;
  }
  *(int *)(param_1 + 0x94) = iVar1;
  FUN_146f8f6f8(param_1,*(undefined4 *)(param_1 + 0x90),iVar1,0x80);
  return;
}



// FUNCTION 146f90bde FUN_146f90bde body=105 status=ok
// SIG undefined FUN_146f90bde(void)

ulonglong FUN_146f90bde(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x1ffffffffffff80U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,0);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 146f90c48 FUN_146f90c48 body=124 status=ok
// SIG undefined FUN_146f90c48(void)

void FUN_146f90c48(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)(int)param_2 * 0x80;
  FUN_146f8f5d4(*(undefined8 *)(lVar2 + lVar3),*(undefined4 *)(lVar2 + 8 + lVar3));
  if (*(longlong *)(lVar2 + lVar3) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x90);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(lVar2 + lVar3),(void *)(lVar2 + lVar3 + 0x80),
            (longlong)(int)(~param_2 + iVar1) << 7);
    iVar1 = *(int *)(param_1 + 0x90);
  }
  *(int *)(param_1 + 0x90) = iVar1 + -1;
  return;
}



// FUNCTION 146f90cc4 FUN_146f90cc4 body=122 status=ok
// SIG undefined FUN_146f90cc4(void)

longlong FUN_146f90cc4(longlong param_1,longlong param_2)

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
    FUN_146f90d3e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146f90d3e FUN_146f90d3e body=230 status=ok
// SIG undefined FUN_146f90d3e(void)

longlong * FUN_146f90d3e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1411db320(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_2 + 8;
      lVar5 = *param_1 + 8;
      uVar4 = 0;
      do {
        plVar2 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar2 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar2 + (uVar4 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar4 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar5 + -8) = *(undefined4 *)(lVar3 + -8);
          *(undefined4 *)(lVar5 + -4) = *(undefined4 *)(lVar3 + -4);
        }
        else {
          *(undefined8 *)(lVar5 + -8) = *(undefined8 *)(lVar3 + -8);
          FUN_146f90e24(lVar5,lVar3);
          *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar3 + 8);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x18;
        lVar5 = lVar5 + 0x18;
      } while (uVar1 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 146f90e24 FUN_146f90e24 body=114 status=ok
// SIG undefined FUN_146f90e24(void)

longlong * FUN_146f90e24(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  lVar1 = *param_2;
  lVar2 = FUN_14001cc68(0x90,0x10);
  *(undefined8 *)(lVar2 + 0x80) = 0;
  lVar3 = *(longlong *)(lVar1 + 0x80);
  if (*(longlong *)(lVar1 + 0x80) == 0) {
    lVar3 = lVar1;
  }
  FUN_146f90e96(lVar2,lVar3,*(undefined4 *)(lVar1 + 0x88));
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    FUN_1411db51e(lVar1);
    FUN_1400020a8(lVar1);
  }
  return param_1;
}



// FUNCTION 146f90e96 FUN_146f90e96 body=89 status=ok
// SIG undefined FUN_146f90e96(void)

void FUN_146f90e96(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x88) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 1;
    return;
  }
  FUN_146f90ef0(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_146f90f58(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f90ef0 FUN_146f90ef0 body=104 status=ok
// SIG undefined FUN_146f90ef0(void)

void FUN_146f90ef0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = param_2;
    if (param_2 != 1) {
      uVar1 = FUN_144a3809e((longlong)param_2 << 7,0);
      iVar2 = (int)(uVar1 >> 7);
      if (iVar2 < param_2) {
        iVar2 = 0x7fffffff;
      }
      else {
        param_2 = 0;
        if (iVar2 < 1) goto LAB_146f90f29;
      }
    }
    param_2 = iVar2;
    FUN_146f90f94(param_1,0,param_2,0x80);
  }
LAB_146f90f29:
  *(int *)(param_1 + 0x8c) = param_2;
  return;
}



// FUNCTION 146f90f58 FUN_146f90f58 body=60 status=ok
// SIG undefined FUN_146f90f58(void)

void FUN_146f90f58(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146f91022(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 146f90f94 FUN_146f90f94 body=142 status=ok
// SIG undefined FUN_146f90f94(void)

void FUN_146f90f94(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 7);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 7);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f91022 FUN_146f91022 body=106 status=ok
// SIG undefined FUN_146f91022(void)

longlong FUN_146f91022(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_144a69486();
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_146f9108c(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 146f9108c FUN_146f9108c body=122 status=ok
// SIG undefined FUN_146f9108c(void)

longlong FUN_146f9108c(longlong param_1,longlong param_2)

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
    FUN_146f91106(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146f91106 FUN_146f91106 body=241 status=ok
// SIG undefined FUN_146f91106(void)

longlong * FUN_146f91106(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1411db5e4(param_1,(ulonglong)uVar1);
    lVar2 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar4 = (undefined8 *)*param_2;
      puVar6 = (undefined8 *)(*param_1 + 8);
      uVar5 = 0;
      do {
        plVar3 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(puVar6 + -1) = *(undefined4 *)puVar4;
          *(undefined4 *)((longlong)puVar6 + -4) = *(undefined4 *)((longlong)puVar4 + 4);
        }
        else {
          puVar6[-1] = *puVar4;
          plVar3 = (longlong *)puVar4[1];
          if (plVar3 == (longlong *)0x0) {
            *puVar6 = 0;
          }
          else {
            (**(code **)(*plVar3 + 8))(plVar3,puVar6);
          }
          puVar6[1] = puVar4[2];
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 3;
        puVar6 = puVar6 + 3;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 146f911f8 FUN_146f911f8 body=269 status=ok
// SIG undefined FUN_146f911f8(void)

void FUN_146f911f8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = (int)param_1[10];
  if ((int)param_1[10] < param_2 + 1) {
    iVar3 = param_2 + 1;
  }
  *(int *)(param_1 + 10) = iVar3;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      plVar2 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f91306 FUN_146f91306 body=155 status=ok
// SIG undefined FUN_146f91306(void)

undefined8 FUN_146f91306(longlong *param_1,longlong param_2)

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
          FUN_146f913a2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f913a2 FUN_146f913a2 body=93 status=ok
// SIG undefined FUN_146f913a2(void)

void FUN_146f913a2(longlong *param_1,int param_2)

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
  FUN_146f91400(param_1,param_2,1);
  return;
}



// FUNCTION 146f91400 FUN_146f91400 body=92 status=ok
// SIG undefined FUN_146f91400(void)

void FUN_146f91400(longlong *param_1,int param_2,int param_3)

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
  FUN_146f9145c(param_1,param_2,param_3);
  return;
}



// FUNCTION 146f9145c FUN_146f9145c body=138 status=ok
// SIG undefined FUN_146f9145c(void)

void FUN_146f9145c(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146f914e6 FUN_146f914e6 body=54 status=ok
// SIG undefined FUN_146f914e6(void)

void FUN_146f914e6(longlong *param_1)

{
  FUN_146f9151c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f9151c FUN_146f9151c body=355 status=ok
// SIG undefined FUN_146f9151c(void)

void FUN_146f9151c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x10) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14474875a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f91682 FUN_146f91682 body=54 status=ok
// SIG undefined FUN_146f91682(void)

void FUN_146f91682(longlong *param_1)

{
  FUN_146f916b8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f916b8 FUN_146f916b8 body=385 status=ok
// SIG undefined FUN_146f916b8(void)

void FUN_146f916b8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f9183c FUN_146f9183c body=54 status=ok
// SIG undefined FUN_146f9183c(void)

void FUN_146f9183c(longlong *param_1)

{
  FUN_146f91872(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f91872 FUN_146f91872 body=128 status=ok
// SIG undefined FUN_146f91872(void)

void FUN_146f91872(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 146f918f4 FUN_146f918f4 body=54 status=ok
// SIG undefined FUN_146f918f4(void)

void FUN_146f918f4(longlong *param_1)

{
  FUN_146f9192a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f9192a FUN_146f9192a body=356 status=ok
// SIG undefined FUN_146f9192a(void)

void FUN_146f9192a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f91a90 FUN_146f91a90 body=54 status=ok
// SIG undefined FUN_146f91a90(void)

void FUN_146f91a90(longlong *param_1)

{
  FUN_146f91ac6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f91ac6 FUN_146f91ac6 body=356 status=ok
// SIG undefined FUN_146f91ac6(void)

void FUN_146f91ac6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f91c2c FUN_146f91c2c body=54 status=ok
// SIG undefined FUN_146f91c2c(void)

void FUN_146f91c2c(longlong *param_1)

{
  FUN_146f91c62(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f91c62 FUN_146f91c62 body=385 status=ok
// SIG undefined FUN_146f91c62(void)

void FUN_146f91c62(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x10 + lVar5 * 0x20) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar5 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f91de6 FUN_146f91de6 body=92 status=ok
// SIG undefined FUN_146f91de6(void)

void FUN_146f91de6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x1c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x1c) = uVar1;
    FUN_1446efbd8(param_1,0);
  }
  FUN_146f91e42(param_1 + 0x20,0);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 146f91e42 FUN_146f91e42 body=258 status=ok
// SIG undefined FUN_146f91e42(void)

void FUN_146f91e42(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 10) = param_2;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      plVar2 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f91f46 FUN_146f91f46 body=255 status=ok
// SIG undefined FUN_146f91f46(void)

void FUN_146f91f46(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      plVar2 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f92046 FUN_146f92046 body=139 status=ok
// SIG undefined FUN_146f92046(void)

void FUN_146f92046(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x8c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 7,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 7)) {
        uVar5 = uVar3 >> 7 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar5;
    FUN_146f90f94(param_1,param_2,uVar5,0x80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f920d2 FUN_146f920d2 body=118 status=ok
// SIG undefined FUN_146f920d2(void)

void FUN_146f920d2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((longlong)param_2 * 0x80 + lVar2);
  FUN_1411db55b(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x88);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x80 + (longlong)_Dst),(longlong)iVar3 << 7);
    iVar1 = *(int *)(param_1 + 0x88);
  }
  *(int *)(param_1 + 0x88) = iVar1 - param_3;
  return;
}



// FUNCTION 146f92148 FUN_146f92148 body=74 status=ok
// SIG undefined FUN_146f92148(void)

void FUN_146f92148(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f92192(param_1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_146f90f94(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x80);
  return;
}



// FUNCTION 146f92192 FUN_146f92192 body=105 status=ok
// SIG undefined FUN_146f92192(void)

ulonglong FUN_146f92192(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x1ffffffffffff80U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,0);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 146f921fc FUN_146f921fc body=596 status=ok
// SIG undefined FUN_146f921fc(void)

void FUN_146f921fc(longlong param_1,undefined4 param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  int local_80;
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146f716d6(param_1 + 0x218,local_88,param_2,0);
  FUN_146f92452(param_3,local_80 + 2);
  FUN_146f716d6(param_1 + 0x218,&local_98,param_2,0);
  if (iStack_90 == 1) {
    uVar1 = *(uint *)CONCAT44(uStack_94,local_98);
    iVar7 = *(int *)(param_1 + 0xa8);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    if (iVar7 == 0) {
      plVar6 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar6);
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)(uVar1 & 0xff) * 4 + 0x410);
      iVar3 = *(int *)((longlong)plVar6 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
    }
    else {
      iVar3 = uVar1 * (int)plVar6[2];
    }
    lVar4 = *plVar6;
    *(int *)(param_3 + 1) = iVar7;
    if (*(int *)((longlong)param_3 + 0xc) == 0 && iVar7 == 0) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      FUN_146f92612(param_3,iVar7);
      if (iVar7 != 0) {
        memcpy((void *)*param_3,(void *)((longlong)iVar3 * 4 + lVar4),(longlong)iVar7 << 2);
      }
    }
  }
  else {
    local_48 = (undefined1 *)0x0;
    local_40 = 0x800000000;
    FUN_146f9249a(local_88,iStack_90 + 2,1);
    local_a8 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      local_a8 = local_88;
    }
    local_a0 = (int)local_40;
    local_b8 = local_98;
    uStack_b4 = uStack_94;
    iStack_b0 = iStack_90;
    uStack_ac = uStack_8c;
    FUN_146f72002(param_1);
    if (0 < (int)local_40) {
      lVar4 = 0;
      do {
        puVar5 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar5 = local_88;
        }
        uVar1 = *(uint *)(CONCAT44(uStack_94,local_98) + (longlong)*(int *)(puVar5 + lVar4 * 8) * 4)
        ;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar6 = plVar2;
        }
        if (*(int *)(param_1 + 0xa8) == 0) {
          plVar6 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar6);
          iVar7 = *(int *)((longlong)plVar6 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
        }
        else {
          iVar7 = uVar1 * (int)plVar6[2];
        }
        *(undefined4 *)(*param_3 + lVar4 * 4) =
             *(undefined4 *)
              ((longlong)iVar7 * 4 + *plVar6 + (longlong)*(int *)(puVar5 + lVar4 * 8 + 4) * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)local_40);
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f92452 FUN_146f92452 body=71 status=ok
// SIG undefined FUN_146f92452(void)

void FUN_146f92452(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f924ea();
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
      FUN_146f92570();
      return;
    }
  }
  return;
}



// FUNCTION 146f9249a FUN_146f9249a body=78 status=ok
// SIG undefined FUN_146f9249a(void)

void FUN_146f9249a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f92674();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x48) = param_2, param_3 == '\x01')) {
      FUN_146f92770();
      return;
    }
  }
  return;
}



// FUNCTION 146f924ea FUN_146f924ea body=132 status=ok
// SIG undefined FUN_146f924ea(void)

void FUN_146f924ea(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f92570 FUN_146f92570 body=63 status=ok
// SIG undefined FUN_146f92570(void)

void FUN_146f92570(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f925b0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146f925b0 FUN_146f925b0 body=97 status=ok
// SIG undefined FUN_146f925b0(void)

ulonglong FUN_146f925b0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f92612 FUN_146f92612 body=98 status=ok
// SIG undefined FUN_146f92612(void)

void FUN_146f92612(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f92674 FUN_146f92674 body=116 status=ok
// SIG undefined FUN_146f92674(void)

void FUN_146f92674(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_146f926ea(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f926ea FUN_146f926ea body=133 status=ok
// SIG undefined FUN_146f926ea(void)

void FUN_146f926ea(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f92770 FUN_146f92770 body=59 status=ok
// SIG undefined FUN_146f92770(void)

void FUN_146f92770(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f927ac(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_146f926ea(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,8);
  return;
}



// FUNCTION 146f927ac FUN_146f927ac body=105 status=ok
// SIG undefined FUN_146f927ac(void)

ulonglong FUN_146f927ac(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146f92816 FUN_146f92816 body=98 status=ok
// SIG undefined FUN_146f92816(void)

void FUN_146f92816(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f92878 FUN_146f92878 body=98 status=ok
// SIG undefined FUN_146f92878(void)

void FUN_146f92878(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f928da FUN_146f928da body=75 status=ok
// SIG undefined FUN_146f928da(void)

void FUN_146f928da(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f92926 FUN_146f92926 body=93 status=ok
// SIG undefined FUN_146f92926(void)

longlong FUN_146f92926(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146f92984(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146f92984 FUN_146f92984 body=404 status=ok
// SIG undefined FUN_146f92984(void)

longlong * FUN_146f92984(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar7 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar5 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar6 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar7) || (local_68 = uVar5, uStack_50 != plVar1)) {
      do {
        local_68 = uVar5;
        lVar2 = *(longlong *)(*local_80 + 8 + (longlong)iVar6 * 0x18);
        if (lVar2 != 0) {
          FUN_1411db51e(lVar2);
          FUN_1400020a8(lVar2);
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar6 = local_68._4_4_;
        uVar5 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar7));
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
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f92b1a FUN_146f92b1a body=78 status=ok
// SIG undefined FUN_146f92b1a(void)

longlong * FUN_146f92b1a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1412e7bc0(*param_1,(int)param_1[1]);
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



// FUNCTION 146f92b68 FUN_146f92b68 body=155 status=ok
// SIG undefined FUN_146f92b68(void)

longlong * FUN_146f92b68(longlong *param_1,longlong *param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_146f79d12(param_1,param_3,param_4);
  if (*(int *)(*param_1 + 8 + (longlong)param_4 * 0xb0) == 0) {
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    lVar5 = *(longlong *)(*param_1 + (longlong)param_4 * 0xb0);
    lVar6 = (longlong)((int)param_3 >> (*(byte *)((longlong)param_1 + 0x2c) & 0x1f)) * 0x58;
    plVar1 = (longlong *)(lVar5 + lVar6);
    plVar2 = (longlong *)plVar1[3];
    if ((longlong *)plVar1[3] == (longlong *)0x0) {
      plVar2 = plVar1 + 2;
    }
    lVar3 = (longlong)
            *(int *)((longlong)plVar2 + (longlong)(int)(*(uint *)(param_1 + 6) & param_3) * 4) * 4 +
            *plVar1;
    lVar5 = lVar5 + lVar6 + 0x28;
    if (plVar1[6] != 0) {
      lVar5 = plVar1[6];
    }
    uVar4 = *(undefined4 *)(lVar5 + (longlong)(int)(*(uint *)(param_1 + 6) & param_3) * 4);
  }
  *param_2 = lVar3;
  *(undefined4 *)(param_2 + 1) = uVar4;
  return param_2;
}



// FUNCTION 146f92c04 FUN_146f92c04 body=262 status=ok
// SIG undefined FUN_146f92c04(void)

void FUN_146f92c04(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_3 + 0x28) = 0;
  if (*(int *)(param_3 + 0x2c) < 0) {
    FUN_146f92d36(param_3,0);
  }
  FUN_146f7163e(param_1 + 0x100,&local_58,param_2,0);
  if ((longlong)local_50 != 0) {
    puVar6 = local_58;
    do {
      FUN_146f716d6(param_1 + 0x170,&local_68,*puVar6,0);
      lVar2 = local_68;
      lVar4 = (longlong)local_60;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
          if (plVar1 != (longlong *)0x0) {
            plVar3 = plVar1;
          }
          FUN_146f92e22(param_3,(longlong)((int)plVar3[2] * *(int *)(lVar2 + lVar5)) * 4 + *plVar3);
          lVar5 = lVar5 + 4;
        } while (lVar4 * 4 != lVar5);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != local_58 + local_50);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f92d0c FUN_146f92d0c body=41 status=ok
// SIG undefined FUN_146f92d0c(void)

void FUN_146f92d0c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_2 <= *(int *)(param_1 + 0x2c)) {
    return;
  }
  FUN_146f92d36();
  return;
}



// FUNCTION 146f92d36 FUN_146f92d36 body=101 status=ok
// SIG undefined FUN_146f92d36(void)

void FUN_146f92d36(longlong param_1,uint param_2)

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
    FUN_146f92d9c(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 146f92d9c FUN_146f92d9c body=133 status=ok
// SIG undefined FUN_146f92d9c(void)

void FUN_146f92d9c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f92e22 FUN_146f92e22 body=122 status=ok
// SIG undefined FUN_146f92e22(void)

ulonglong FUN_146f92e22(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar6 = uVar5 * 4;
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + uVar4 * 4) == *param_2) {
        if ((int)uVar4 != -1) {
          uVar5 = uVar4 & 0xffffffff;
          goto LAB_146f92e79;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_146f92e9c(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + uVar5 * 4) = *param_2;
LAB_146f92e79:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146f92e9c FUN_146f92e9c body=116 status=ok
// SIG undefined FUN_146f92e9c(void)

void FUN_146f92e9c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_146f92d9c(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f92f12 FUN_146f92f12 body=209 status=ok
// SIG undefined FUN_146f92f12(void)

void FUN_146f92f12(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f92b68(param_1 + 0x170,&local_40,param_2,0);
  FUN_146f92d0c(param_3,local_38);
  FUN_146f716d6(param_1 + 0x170,&local_40,param_2,0);
  if ((longlong)local_38 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      FUN_146f92e22(param_3,(longlong)((int)plVar2[2] * *(int *)(local_40 + lVar3)) * 4 + *plVar2);
      lVar3 = lVar3 + 4;
    } while ((longlong)local_38 * 4 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f92fe4 FUN_146f92fe4 body=209 status=ok
// SIG undefined FUN_146f92fe4(void)

void FUN_146f92fe4(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f92b68(param_1 + 0x1a8,&local_40,param_2,0);
  FUN_146f92d0c(param_3,local_38);
  FUN_146f716d6(param_1 + 0x1a8,&local_40,param_2,0);
  if ((longlong)local_38 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      FUN_146f92e22(param_3,(longlong)((int)plVar2[2] * *(int *)(local_40 + lVar3)) * 4 + *plVar2);
      lVar3 = lVar3 + 4;
    } while ((longlong)local_38 * 4 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f93122 FUN_146f93122 body=59 status=ok
// SIG undefined FUN_146f93122(void)

undefined8 FUN_146f93122(longlong *param_1)

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



// FUNCTION 146f93230 FUN_146f93230 body=64 status=ok
// SIG undefined FUN_146f93230(void)

undefined4 FUN_146f93230(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f93344 FUN_146f93344 body=64 status=ok
// SIG undefined FUN_146f93344(void)

undefined4 FUN_146f93344(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f93458 FUN_146f93458 body=64 status=ok
// SIG undefined FUN_146f93458(void)

undefined4 FUN_146f93458(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9356c FUN_146f9356c body=64 status=ok
// SIG undefined FUN_146f9356c(void)

undefined4 FUN_146f9356c(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f93680 FUN_146f93680 body=64 status=ok
// SIG undefined FUN_146f93680(void)

undefined4 FUN_146f93680(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f93794 FUN_146f93794 body=64 status=ok
// SIG undefined FUN_146f93794(void)

undefined4 FUN_146f93794(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f938a8 FUN_146f938a8 body=64 status=ok
// SIG undefined FUN_146f938a8(void)

undefined4 FUN_146f938a8(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f93950 FUN_146f93950 body=67 status=ok
// SIG undefined FUN_146f93950(void)

void FUN_146f93950(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1411db5e4(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1412e75ea(param_1);
    return;
  }
  FUN_146f93994(param_1);
  FUN_1411db5e4(param_1,0);
  return;
}



// FUNCTION 146f93994 FUN_146f93994 body=322 status=ok
// SIG undefined FUN_146f93994(void)

void FUN_146f93994(longlong *param_1)

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



// FUNCTION 146f93ad8 FUN_146f93ad8 body=131 status=ok
// SIG undefined FUN_146f93ad8(void)

longlong FUN_146f93ad8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146f93b5b();
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
      FUN_146f94060(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146f93b5b FUN_146f93b5b body=700 status=ok
// SIG undefined FUN_146f93b5b(void)

longlong * FUN_146f93b5b(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x70,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x70);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined8 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar7 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar8 = local_98._4_4_;
      local_98 = uVar7;
      do {
        lVar5 = *local_b0;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x70);
        FUN_146f7b19a(param_1,lVar5 + (longlong)iVar8 * 0x70 + 0x10);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar8 = local_98._4_4_;
        uVar7 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined8 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_146f93e18(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar7 = local_98;
    if (0 < (int)local_80) {
      iVar8 = 0;
      do {
        FUN_146f93f7c(param_2,&local_b0);
        *local_a8 = 0;
        puVar3 = local_a8 + 2;
        local_a8[3] = 0x100000000;
        local_a8[4] = 0;
        local_a8[2] = &PTR_FUN_149fa75d0;
        local_a8[8] = 0;
        local_a8[9] = 0x100000000;
        local_a8[10] = 0;
        local_a8[0xb] = 0x3f80000000000000;
        *(undefined4 *)(local_a8 + 0xc) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_146f7b19a(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_98;
      } while (iVar8 < (int)local_80);
    }
  }
  local_98 = uVar7;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f93e18 FUN_146f93e18 body=353 status=ok
// SIG undefined FUN_146f93e18(void)

void FUN_146f93e18(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_146f7aec8(*local_70 + (longlong)iStack_54 * 0x70 + 0x28);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_141154a24(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f93f7c FUN_146f93f7c body=228 status=ok
// SIG undefined FUN_146f93f7c(void)

int * FUN_146f93f7c(longlong *param_1,int *param_2)

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
      FUN_1457076b0(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 146f94060 FUN_146f94060 body=473 status=ok
// SIG undefined FUN_146f94060(void)

void FUN_146f94060(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x70;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 100 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar7) =
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



// FUNCTION 146f9423a FUN_146f9423a body=374 status=ok
// SIG undefined FUN_146f9423a(void)

longlong *
FUN_146f9423a(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar6 == param_3) {
          if ((plVar6 != (longlong *)0x0) && (plVar6 = plVar6 + 1, plVar6 != (longlong *)0x0)) {
            plVar1 = (longlong *)*plVar6;
            if (((int)plVar1[1] == 0) && (*(int *)((longlong)plVar1 + 0xc) == 1)) {
              (**(code **)(*plVar1 + 0x70))(plVar1,param_4);
              *(undefined4 *)(*plVar6 + 0x14) = param_6;
              goto LAB_146f94305;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 1;
  FUN_146f943b2(&local_58,param_4,param_5,param_6);
  local_48 = &local_50;
  local_40 = &local_58;
  FUN_1412e71e2(param_1,&local_34,&local_48,0);
  lVar2 = *param_1;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  plVar6 = (longlong *)(lVar2 + (longlong)local_34 * 0x18 + 8);
LAB_146f94305:
  *param_2 = *plVar6;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f943b2 FUN_146f943b2 body=258 status=ok
// SIG undefined FUN_146f943b2(void)

longlong *
FUN_146f943b2(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
             undefined4 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  if (param_6 < 1) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = param_5;
    *(undefined4 *)((longlong)puVar5 + 0x14) = param_4;
    *puVar5 = &PTR_FUN_149fa7660;
    puVar5[10] = 0;
    puVar5[0xc] = 0x100000000;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(puVar5 + 0xe) = *param_3;
    *(undefined4 *)((longlong)puVar5 + 0x74) = uVar2;
    *(undefined4 *)(puVar5 + 0xf) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x7c) = uVar4;
    FUN_146f7bf48(puVar5,param_2);
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *(undefined4 *)(puVar5 + 1) = 0;
    *(int *)((longlong)puVar5 + 0xc) = param_6;
    *(undefined4 *)(puVar5 + 2) = param_5;
    *(undefined4 *)((longlong)puVar5 + 0x14) = param_4;
    *puVar5 = &PTR_FUN_149fa75d0;
    puVar5[6] = 0;
    puVar5[7] = 0x100000000;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(puVar5 + 8) = *param_3;
    *(undefined4 *)((longlong)puVar5 + 0x44) = uVar2;
    *(undefined4 *)(puVar5 + 9) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = uVar4;
    FUN_146f7ad26(puVar5,param_2);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar5;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 146f944b4 FUN_146f944b4 body=69 status=ok
// SIG undefined FUN_146f944b4(void)

void FUN_146f944b4(longlong param_1,uint param_2)

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
    FUN_1412e75ea(param_1);
    return;
  }
  return;
}



// FUNCTION 146f944fa FUN_146f944fa body=75 status=ok
// SIG undefined FUN_146f944fa(void)

longlong FUN_146f944fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar1 = param_1;
    }
    FUN_146f7aefd(lVar1,*(undefined4 *)(param_1 + 0x20));
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      lVar1 = param_2;
    }
    FUN_146f7af28(param_1,lVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  return param_1;
}



// FUNCTION 146f94546 FUN_146f94546 body=54 status=ok
// SIG undefined FUN_146f94546(void)

void FUN_146f94546(longlong *param_1)

{
  FUN_146f93e18(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f9457c FUN_146f9457c body=131 status=ok
// SIG undefined FUN_146f9457c(void)

longlong FUN_146f9457c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146f945ff();
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
      FUN_146f94b1a(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146f945ff FUN_146f945ff body=708 status=ok
// SIG undefined FUN_146f945ff(void)

longlong * FUN_146f945ff(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined8 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar7 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar8 = local_98._4_4_;
      local_98 = uVar7;
      do {
        lVar5 = *local_b0;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x60);
        FUN_146f7e492(param_1,lVar5 + (longlong)iVar8 * 0x60 + 8);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar8 = local_98._4_4_;
        uVar7 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined8 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_146f948c4(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar7 = local_98;
    if (0 < (int)local_80) {
      iVar8 = 0;
      do {
        FUN_146f94a2c(param_2,&local_b0);
        *local_a8 = 0;
        puVar3 = local_a8 + 1;
        local_a8[2] = &DAT_100000001;
        local_a8[3] = 0;
        local_a8[1] = &PTR_FUN_149fa76f0;
        local_a8[7] = 0;
        local_a8[8] = 0x100000000;
        *(undefined4 *)(local_a8 + 0xb) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_146f7e492(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_98;
      } while (iVar8 < (int)local_80);
    }
  }
  local_98 = uVar7;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f948c4 FUN_146f948c4 body=357 status=ok
// SIG undefined FUN_146f948c4(void)

void FUN_146f948c4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_145838fd8(*local_70 + (longlong)iStack_54 * 0x60 + 0x20);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1448fc38a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f94a2c FUN_146f94a2c body=238 status=ok
// SIG undefined FUN_146f94a2c(void)

int * FUN_146f94a2c(longlong *param_1,int *param_2)

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



// FUNCTION 146f94b1a FUN_146f94b1a body=477 status=ok
// SIG undefined FUN_146f94b1a(void)

void FUN_146f94b1a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 146f94cf8 FUN_146f94cf8 body=75 status=ok
// SIG undefined FUN_146f94cf8(void)

longlong FUN_146f94cf8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar1 = param_1;
    }
    FUN_14583900c(lVar1,*(undefined4 *)(param_1 + 0x20));
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      lVar1 = param_2;
    }
    FUN_146f7e242(param_1,lVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  return param_1;
}



// FUNCTION 146f94d44 FUN_146f94d44 body=54 status=ok
// SIG undefined FUN_146f94d44(void)

void FUN_146f94d44(longlong *param_1)

{
  FUN_146f948c4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f94d7a FUN_146f94d7a body=131 status=ok
// SIG undefined FUN_146f94d7a(void)

longlong FUN_146f94d7a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146f94dfd();
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
      FUN_146f952fc(param_2);
    }
  }
  return param_1;
}


