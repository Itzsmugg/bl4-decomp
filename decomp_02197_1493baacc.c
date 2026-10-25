// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1493baacc FUN_1493baacc body=54 status=ok
// SIG undefined FUN_1493baacc(void)

undefined1 FUN_1493baacc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1493bac98(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1493bab2a FUN_1493bab2a body=59 status=ok
// SIG undefined FUN_1493bab2a(void)

undefined8 FUN_1493bab2a(longlong *param_1)

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



// FUNCTION 1493bab70 FUN_1493bab70 body=34 status=ok
// SIG undefined FUN_1493bab70(void)

void FUN_1493bab70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1493babe0(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1493babe0 FUN_1493babe0 body=183 status=ok
// SIG undefined FUN_1493babe0(void)

void FUN_1493babe0(longlong *param_1)

{
  FUN_1463cb886(param_1 + 10);
  if (*(int *)((longlong)param_1 + 0x4c) != -1) {
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = 0;
    param_1[9] = -0x100000000;
  }
  if (*(int *)((longlong)param_1 + 0x3c) != -1) {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = 0;
    param_1[7] = -0x100000000;
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = 0;
    param_1[5] = -0x100000000;
  }
  if (*(int *)((longlong)param_1 + 0x1c) != -1) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = 0;
    param_1[3] = -0x100000000;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493bac98 FUN_1493bac98 body=115 status=ok
// SIG undefined FUN_1493bac98(void)

longlong FUN_1493bac98(longlong param_1,longlong param_2)

{
  FUN_144a67f5c();
  FUN_1493bad0c(param_1 + 0x10,param_2 + 0x10);
  FUN_1493bad5a(param_1 + 0x20,param_2 + 0x20);
  FUN_1493bada8(param_1 + 0x30,param_2 + 0x30);
  FUN_148342ad4(param_1 + 0x40,param_2 + 0x40);
  if (param_2 != param_1) {
    if (*(int *)(param_2 + 0x5c) == -1) {
      FUN_1463cb886();
    }
    else {
      FUN_1493baf1a(param_1 + 0x50,param_2 + 0x50);
    }
  }
  return param_1;
}



// FUNCTION 1493bad0c FUN_1493bad0c body=78 status=ok
// SIG undefined FUN_1493bad0c(void)

longlong * FUN_1493bad0c(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    if (*(int *)((longlong)param_2 + 0xc) == -1) {
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = 0;
        param_1[1] = -0x100000000;
      }
    }
    else {
      FUN_1493badf6(param_1);
    }
  }
  return param_1;
}



// FUNCTION 1493bad5a FUN_1493bad5a body=78 status=ok
// SIG undefined FUN_1493bad5a(void)

longlong * FUN_1493bad5a(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    if (*(int *)((longlong)param_2 + 0xc) == -1) {
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = 0;
        param_1[1] = -0x100000000;
      }
    }
    else {
      FUN_1493bae5a(param_1);
    }
  }
  return param_1;
}



// FUNCTION 1493bada8 FUN_1493bada8 body=78 status=ok
// SIG undefined FUN_1493bada8(void)

longlong * FUN_1493bada8(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    if (*(int *)((longlong)param_2 + 0xc) == -1) {
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = 0;
        param_1[1] = -0x100000000;
      }
    }
    else {
      FUN_1493baeba(param_1);
    }
  }
  return param_1;
}



// FUNCTION 1493badf6 FUN_1493badf6 body=99 status=ok
// SIG undefined FUN_1493badf6(void)

longlong * FUN_1493badf6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1447c510a(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1493bae5a FUN_1493bae5a body=95 status=ok
// SIG undefined FUN_1493bae5a(void)

longlong * FUN_1493bae5a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1447cd5fa(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 1493baeba FUN_1493baeba body=95 status=ok
// SIG undefined FUN_1493baeba(void)

longlong * FUN_1493baeba(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1447a127e(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 1493baf1a FUN_1493baf1a body=104 status=ok
// SIG undefined FUN_1493baf1a(void)

longlong * FUN_1493baf1a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_1,iVar1,0);
    FUN_140b8566a(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1493baf84 FUN_1493baf84 body=113 status=ok
// SIG undefined FUN_1493baf84(void)

void FUN_1493baf84(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 1493baff5 FUN_1493baff5 body=74 status=ok
// SIG undefined FUN_1493baff5(void)

void FUN_1493baff5(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
    param_1[4] = 0;
    param_1[5] = 0xffffffff00000000;
    param_1[6] = 0;
    param_1[7] = 0xffffffff00000000;
    param_1[8] = 0;
    param_1[9] = 0xffffffff00000000;
    param_1[10] = 0;
    param_1[0xb] = 0xffffffff00000000;
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 1493bb040 FUN_1493bb040 body=147 status=ok
// SIG undefined FUN_1493bb040(void)

void FUN_1493bb040(longlong param_1,int param_2)

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



// FUNCTION 1493bb0d4 FUN_1493bb0d4 body=113 status=ok
// SIG undefined FUN_1493bb0d4(void)

void FUN_1493bb0d4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 1493bb146 FUN_1493bb146 body=202 status=ok
// SIG undefined FUN_1493bb146(void)

undefined8 * FUN_1493bb146(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 6);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  param_1[7] = param_2[7];
  FUN_141121e90(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 1493bb210 FUN_1493bb210 body=147 status=ok
// SIG undefined FUN_1493bb210(void)

void FUN_1493bb210(longlong param_1,int param_2)

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



// FUNCTION 1493bb2a4 FUN_1493bb2a4 body=379 status=ok
// SIG undefined FUN_1493bb2a4(void)

longlong * FUN_1493bb2a4(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x1c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1c);
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
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1493bb464(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x92492 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1493ba30a(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x1c;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1493bb464(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1493bb420(param_2);
        FUN_1493ba30a(uVar3,param_1);
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



// FUNCTION 1493bb420 FUN_1493bb420 body=68 status=ok
// SIG undefined FUN_1493bb420(void)

longlong FUN_1493bb420(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1493bb4f4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x1c + *param_1;
  FUN_1493bb4da(lVar2);
  return lVar2;
}



// FUNCTION 1493bb464 FUN_1493bb464 body=118 status=ok
// SIG undefined FUN_1493bb464(void)

void FUN_1493bb464(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x1c,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x1c)) {
      uVar2 = uVar1 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1c,4);
  }
  return;
}



// FUNCTION 1493bb4da FUN_1493bb4da body=25 status=ok
// SIG undefined FUN_1493bb4da(void)

void FUN_1493bb4da(undefined2 *param_1)

{
  *param_1 = 0x303;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}



// FUNCTION 1493bb4f4 FUN_1493bb4f4 body=157 status=ok
// SIG undefined FUN_1493bb4f4(void)

void FUN_1493bb4f4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493bb592 FUN_1493bb592 body=301 status=ok
// SIG undefined FUN_1493bb592(void)

void FUN_1493bb592(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)(iVar2 != -1);
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
    if (uVar5 == 0) goto LAB_1493bb67b;
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
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = 0;
        param_1[1] = -0x100000000;
      }
      goto LAB_1493bb67b;
    }
    if (iVar2 == -1) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  FUN_146db24e8(param_2,param_1);
LAB_1493bb67b:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493bb6c0 FUN_1493bb6c0 body=303 status=ok
// SIG undefined FUN_1493bb6c0(void)

void FUN_1493bb6c0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)(iVar2 != -1);
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
    if (uVar5 == 0) goto LAB_1493bb791;
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
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = 0;
        param_1[1] = -0x100000000;
      }
      goto LAB_1493bb791;
    }
    if (iVar2 == -1) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  FUN_140077068(param_2,param_1);
LAB_1493bb791:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493bb7f0 FUN_1493bb7f0 body=301 status=ok
// SIG undefined FUN_1493bb7f0(void)

void FUN_1493bb7f0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)(iVar2 != -1);
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
    if (uVar5 == 0) goto LAB_1493bb8d9;
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
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = 0;
        param_1[1] = -0x100000000;
      }
      goto LAB_1493bb8d9;
    }
    if (iVar2 == -1) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  FUN_146e9d99c(param_2,param_1);
LAB_1493bb8d9:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493bb91e FUN_1493bb91e body=303 status=ok
// SIG undefined FUN_1493bb91e(void)

void FUN_1493bb91e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)(iVar2 != -1);
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
    if (uVar5 == 0) goto LAB_1493bb9ef;
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
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = 0;
        param_1[1] = -0x100000000;
      }
      goto LAB_1493bb9ef;
    }
    if (iVar2 == -1) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  FUN_1403b0476(param_2,param_1);
LAB_1493bb9ef:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493bba4e FUN_1493bba4e body=260 status=ok
// SIG undefined FUN_1493bba4e(void)

void FUN_1493bba4e(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 0xc);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)(iVar2 != -1);
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
    if (uVar5 == 0) goto LAB_1493bbb1f;
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
      FUN_1463cb886(param_1);
      goto LAB_1493bbb1f;
    }
    if (iVar2 == -1) {
      FUN_1493bbb54(param_1);
    }
  }
  FUN_1405d0c38(param_2,param_1);
LAB_1493bbb1f:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493bbb54 FUN_1493bbb54 body=47 status=ok
// SIG undefined FUN_1493bbb54(void)

longlong * FUN_1493bbb54(longlong *param_1)

{
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1493bbb84 FUN_1493bbb84 body=31 status=ok
// SIG undefined FUN_1493bbb84(void)

undefined8 FUN_1493bbb84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493bbbc0 FUN_1493bbbc0 body=93 status=ok
// SIG undefined FUN_1493bbbc0(void)

void FUN_1493bbbc0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bca0000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493bbc1e FUN_1493bbc1e body=123 status=ok
// SIG undefined FUN_1493bbc1e(void)

void FUN_1493bbc1e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bca0000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493bbc9a FUN_1493bbc9a body=21 status=ok
// SIG undefined FUN_1493bbc9a(void)

undefined8 FUN_1493bbc9a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1493bbcb0 FUN_1493bbcb0 body=213 status=ok
// SIG undefined FUN_1493bbcb0(void)

undefined8 * FUN_1493bbcb0(undefined8 *param_1,void *param_2,uint param_3)

{
  size_t _Size;
  undefined1 auStack_78 [32];
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0x7f7fffff00000000;
  *(undefined4 *)(param_1 + 7) = 1;
  FUN_140056680(param_1 + 8,L"No data loaded");
  _Size = 0x7ffffffe;
  if (param_3 < 0x7ffffffe) {
    _Size = (size_t)param_3;
  }
  local_58 = (void *)0x0;
  uStack_50 = (ulonglong)((int)_Size + 1);
  FUN_1447403be(&local_58,0);
  memcpy(local_58,param_2,_Size);
  *(undefined1 *)((longlong)local_58 + _Size) = 0;
  FUN_1493bbd86(param_1,local_58);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bbd86 FUN_1493bbd86 body=1507 status=ok
// SIG undefined FUN_1493bbd86(void)

void FUN_1493bbd86(longlong *param_1,byte *param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined1 auStack_1c8 [40];
  int local_1a0;
  int local_19c;
  longlong *local_198;
  byte *local_190;
  int local_188;
  undefined4 uStack_184;
  short local_180;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar6 = param_1 + 8;
  local_190 = param_2;
  FUN_14020fad6(plVar6,L"VersionError");
  FUN_1444e1d00(&local_190,&local_188,0);
  iVar3 = FUN_144afd37c(&local_188,"IESNA:LM-63-1995");
  if (((iVar3 != 0) && (iVar3 = FUN_144afd37c(&local_188,"IESNA91"), iVar3 != 0)) &&
     (iVar3 = FUN_144afd37c(&local_188,"IESNA:LM-63-2002"), iVar3 != 0)) {
    local_190 = param_2;
  }
  FUN_14020fad6(plVar6,L"HeaderError");
  do {
    if ((*local_190 == 0) ||
       (FUN_1444e1d00(&local_190,&local_188,0),
       local_180 == 0x45 && CONCAT44(uStack_184,local_188) == 0x4e4f4e3d544c4954)) {
      FUN_14020fad6(plVar6,L"HeaderParameterError");
      FUN_1444e1d00(&local_190,&local_188,1);
      iVar3 = atoi((char *)&local_188);
      if (iVar3 < 1) {
        pwVar8 = L"Light count needs to be positive.";
        goto LAB_1493bbf28;
      }
      FUN_1444e1d00(&local_190,&local_188,1);
      FUN_1444e1d00(&local_190,&local_188,1);
      dVar10 = atof((char *)&local_188);
      if ((float)dVar10 < 0.0) {
        pwVar8 = L"CandelaMult is negative";
        goto LAB_1493bbf28;
      }
      FUN_1444e1d00(&local_190,&local_188,1);
      iVar3 = atoi((char *)&local_188);
      FUN_1444e1d00(&local_190,&local_188,1);
      iVar4 = atoi((char *)&local_188);
      if (iVar3 < 0) {
        pwVar8 = L"VAnglesNum is not valid";
        goto LAB_1493bbf28;
      }
      if (iVar4 < 0) {
        pwVar8 = L"HAnglesNum is not valid";
        goto LAB_1493bbf28;
      }
      FUN_1444e1d00(&local_190,&local_188,1);
      iVar5 = atoi((char *)&local_188);
      if (iVar5 - 1U < 3) {
        *(int *)(param_1 + 7) = iVar5;
      }
      FUN_1444e1d00(&local_190,&local_188,1);
      FUN_1444e1d00(&local_190,&local_188,1);
      FUN_1444e1d00(&local_190,&local_188,1);
      FUN_1444e1d00(&local_190,&local_188,1);
      FUN_1444e1d00(&local_190,&local_188,1);
      FUN_1444e1d00(&local_190,&local_188,1);
      FUN_1444e1d00(&local_190,&local_188,1);
      local_198 = plVar6;
      FUN_14020fad6(plVar6,L"ContentError");
      plVar6 = param_1 + 2;
      *(undefined4 *)(param_1 + 3) = 0;
      if (*(int *)((longlong)param_1 + 0x1c) != iVar3) {
        FUN_14482f6fa(plVar6,iVar3);
      }
      local_1a0 = iVar3;
      if (iVar3 == 0) goto LAB_1493bc105;
      fVar9 = -3.4028235e+38;
      goto LAB_1493bc0b5;
    }
  } while ((char)uStack_184 != '=' || local_188 != 0x544c4954);
  goto LAB_1493bbf2d;
  while( true ) {
    iVar5 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
      FUN_14475e4ac(plVar6,iVar5);
    }
    *(float *)(*plVar6 + (longlong)iVar5 * 4) = fVar12;
    iVar3 = iVar3 + -1;
    fVar9 = fVar12;
    if (iVar3 == 0) break;
LAB_1493bc0b5:
    FUN_1444e1d00(&local_190,&local_188,1);
    dVar11 = atof((char *)&local_188);
    fVar12 = (float)dVar11;
    if (fVar12 < fVar9) {
      pwVar8 = L"V Values are not in increasing order";
      plVar6 = local_198;
      goto LAB_1493bbf28;
    }
  }
LAB_1493bc105:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != iVar4) {
    FUN_14482f6fa(param_1,iVar4);
  }
  local_19c = iVar4;
  if (iVar4 != 0) {
    fVar9 = -3.4028235e+38;
    do {
      plVar6 = local_198;
      FUN_1444e1d00(&local_190,&local_188,1);
      dVar11 = atof((char *)&local_188);
      fVar12 = (float)dVar11;
      if (fVar12 < fVar9) {
        pwVar8 = L"H Values are not in increasing order";
        goto LAB_1493bbf28;
      }
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_14475e4ac(param_1,iVar3);
      }
      *(float *)(*param_1 + (longlong)iVar3 * 4) = fVar12;
      iVar4 = iVar4 + -1;
      fVar9 = fVar12;
    } while (iVar4 != 0);
  }
  iVar3 = local_19c;
  plVar1 = param_1 + 4;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != local_19c * local_1a0) {
    FUN_14482f6fa(plVar1);
  }
  if (iVar3 != 0) {
    iVar4 = 0;
    iVar3 = local_1a0;
    do {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_1444e1d00(&local_190,&local_188,1);
        dVar11 = atof((char *)&local_188);
        iVar5 = (int)param_1[5];
        *(uint *)(param_1 + 5) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2c) < iVar5 + 1U) {
          FUN_14475e4ac(plVar1,iVar5);
        }
        *(float *)(*plVar1 + (longlong)iVar5 * 4) = (float)dVar11 * (float)dVar10;
      }
      iVar4 = iVar4 + 1;
      iVar3 = local_1a0;
    } while (iVar4 != local_19c);
  }
  plVar6 = local_198;
  FUN_14020fad6(local_198,L"Unexpected content after candela values.");
  do {
    bVar2 = *local_190;
    if (bVar2 == 0xd) {
      lVar7 = (ulonglong)(local_190[1] == 10) + 1;
    }
    else {
      if (bVar2 == 0) goto LAB_1493bc2a4;
      lVar7 = 1;
      if (0x20 < bVar2) break;
    }
    local_190 = local_190 + lVar7;
  } while( true );
  FUN_1444e1d00(&local_190,&local_188,1);
  if (local_188 == 0x444e45) {
    do {
      bVar2 = *local_190;
      if (bVar2 == 0xd) {
        lVar7 = (ulonglong)(local_190[1] == 10) + 1;
      }
      else if ((bVar2 == 0) || (lVar7 = 1, 0x20 < bVar2)) break;
      local_190 = local_190 + lVar7;
    } while( true );
  }
  if (*local_190 == 0) {
LAB_1493bc2a4:
    iVar3 = 0;
    FUN_14020fad6(plVar6,0);
    fVar9 = 0.0;
    if ((int)param_1[5] != 0) {
      do {
        fVar12 = *(float *)(*plVar1 + (longlong)iVar3 * 4);
        if (fVar9 <= fVar12) {
          fVar9 = fVar12;
        }
        iVar3 = iVar3 + 1;
      } while ((int)param_1[5] != iVar3);
    }
    *(uint *)(param_1 + 6) = ~-(uint)(0.0 < fVar9) & 0x447a0000 | (uint)fVar9 & -(uint)(0.0 < fVar9)
    ;
  }
  else {
    pwVar8 = L"Unexpected content after END.";
LAB_1493bbf28:
    FUN_14020fad6(plVar6,pwVar8);
  }
LAB_1493bbf2d:
  if ((local_80 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493bc36a FUN_1493bc36a body=455 status=ok
// SIG undefined FUN_1493bc36a(void)

void FUN_1493bc36a(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar12;
  
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 0x80000;
  if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar7) < 0x80000) {
    FUN_1447403be(param_2);
  }
  iVar8 = 0;
  memset((void *)((longlong)iVar7 + *param_2),0,0x80000);
  if (*(int *)(param_1 + 0x28) == 0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = 0.0;
    do {
      fVar12 = *(float *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 4);
      if (fVar9 <= fVar12) {
        fVar9 = fVar12;
      }
      iVar8 = iVar8 + 1;
    } while (*(int *)(param_1 + 0x28) != iVar8);
  }
  puVar3 = (ushort *)*param_2;
  iVar7 = 0;
  do {
    iVar8 = 0;
    puVar4 = puVar3;
    do {
      uVar11 = FUN_1493bc532(param_1,(float)iVar7 * 0.00390625 * 360.0,
                             (float)iVar8 * 0.00390625 * 180.0);
      fVar10 = (float)uVar11 * (1.0 / fVar9);
      fVar12 = ABS(fVar10);
      if ((uint)fVar12 < 0x47800000) {
        if ((uint)fVar12 < 0x38800000) {
          fVar2 = fVar12 + 0.5;
        }
        else {
          fVar12 = (float)((int)fVar12 + 0x8000fff + (uint)(((uint)fVar12 >> 0xd & 1) != 0) >> 0xd);
          fVar2 = fVar12;
        }
      }
      else {
        fVar2 = (float)((0x7f800000 < (uint)fVar12 | 0x3e) << 9);
      }
      auVar1._4_4_ = (int)((ulonglong)uVar11 >> 0x20);
      auVar1._0_4_ = fVar10;
      auVar1._8_4_ = extraout_XMM0_Dc;
      auVar1._12_4_ = extraout_XMM0_Dd;
      iVar6 = movmskps(fVar12,auVar1);
      uVar5 = (ushort)(iVar6 << 0xf) | SUB42(fVar2,0);
      puVar3 = puVar4 + 4;
      *puVar4 = uVar5;
      puVar4[1] = uVar5;
      puVar4[2] = uVar5;
      puVar4[3] = uVar5;
      iVar8 = iVar8 + 1;
      puVar4 = puVar3;
    } while (iVar8 != 0x100);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x100);
  return;
}



// FUNCTION 1493bc532 FUN_1493bc532 body=408 status=ok
// SIG undefined FUN_1493bc532(void)

void FUN_1493bc532(longlong *param_1,float param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_1[7] == 3) {
    param_3 = param_3 * 0.017453292;
    cosf(param_3);
    sinf(param_3);
    sinf(param_2 * 0.017453292);
    fVar2 = sinf(param_3);
    fVar3 = cosf(param_2 * 0.017453292);
    fVar3 = fVar3 * fVar2;
    fVar2 = fVar3;
    if (1.0 <= fVar3) {
      fVar2 = 1.0;
    }
    asinf((float)(-(uint)(fVar3 < -1.0) & 0xbf800000 | ~-(uint)(fVar3 < -1.0) & (uint)fVar2));
    FUN_144a7ed88();
  }
  else {
    lVar1 = (longlong)(int)param_1[1];
    if (((0 < lVar1) && (fVar2 = *(float *)(*param_1 + (lVar1 + -1) * 4), 0.0 < fVar2)) &&
       (fVar2 < param_2)) {
      FUN_1447c7e44(lVar1,fVar2);
    }
  }
  uVar4 = FUN_1493bc6ca();
  uVar5 = FUN_1493bc6ca();
  FUN_1493bc768(param_1,uVar4,uVar5);
  return;
}



// FUNCTION 1493bc6ca FUN_1493bc6ca body=158 status=ok
// SIG undefined FUN_1493bc6ca(void)

float FUN_1493bc6ca(float param_1,undefined8 *param_2)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  pfVar2 = (float *)*param_2;
  fVar6 = 0.0;
  if (*pfVar2 <= param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar4 = uVar1 - 1;
    if (param_1 < pfVar2[(longlong)(int)uVar1 + -1] || param_1 == pfVar2[(longlong)(int)uVar1 + -1])
    {
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          uVar5 = uVar3 + uVar4 + 1 >> 1;
          if (param_1 < pfVar2[uVar5]) {
            uVar4 = uVar5 - 1;
            uVar5 = uVar3;
          }
          uVar3 = uVar5;
        } while (uVar3 < uVar4);
      }
      fVar6 = 0.0;
      if (uVar3 + 1 < uVar1) {
        fVar6 = pfVar2[(int)(uVar3 + 1)] - pfVar2[uVar3];
        fVar6 = (float)(-(uint)(0.0001 < fVar6) & (uint)((param_1 - pfVar2[uVar3]) / fVar6));
      }
      fVar6 = (float)uVar3 + fVar6;
    }
    else {
      fVar6 = (float)uVar4;
    }
  }
  return fVar6;
}



// FUNCTION 1493bc768 FUN_1493bc768 body=177 status=ok
// SIG undefined FUN_1493bc768(void)

float FUN_1493bc768(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar3 = (uint)(int)param_3 % uVar5;
  iVar6 = ((uint)(int)param_2 % *(uint *)(param_1 + 8)) * uVar5;
  lVar2 = *(longlong *)(param_1 + 0x20);
  fVar7 = *(float *)(lVar2 + (longlong)(int)(uVar3 + iVar6) * 4);
  iVar4 = (((int)param_2 + 1U) % *(uint *)(param_1 + 8)) * uVar5;
  fVar1 = *(float *)(lVar2 + (longlong)(int)(uVar3 + iVar4) * 4);
  uVar5 = ((int)param_3 + 1U) % uVar5;
  fVar7 = (*(float *)(lVar2 + (longlong)(int)(iVar6 + uVar5) * 4) - fVar7) *
          (param_3 - (float)(int)param_3) + fVar7;
  return (((*(float *)(lVar2 + (longlong)(int)(iVar4 + uVar5) * 4) - fVar1) *
           (param_3 - (float)(int)param_3) + fVar1) - fVar7) * (param_2 - (float)(int)param_2) +
         fVar7;
}



// FUNCTION 1493bc81a FUN_1493bc81a body=280 status=ok
// SIG undefined FUN_1493bc81a(void)

undefined8 * FUN_1493bc81a(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar3 = (longlong *)FUN_14494321d(0x60);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bca0380;
  FUN_1493bbcb0(plVar3 + 2,param_2,param_3);
  if (plVar3 == (longlong *)0x0) {
    param_1[3] = 0x10;
    plVar4 = (longlong *)param_1[4];
    if (plVar4 == (longlong *)0x0) goto LAB_1493bc8d2;
    param_1[4] = 0;
LAB_1493bc893:
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
    if (plVar3 == (longlong *)0x0) goto LAB_1493bc8d2;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[3] = plVar3 + 2;
    plVar4 = (longlong *)param_1[4];
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
      param_1[4] = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1493bc893;
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
LAB_1493bc8d2:
  if (*(int *)(param_1[3] + 0x48) < 2) {
    FUN_1493bc36a(param_1[3],param_1);
    *(undefined4 *)(param_1 + 2) = 0x3f800000;
  }
  return param_1;
}



// FUNCTION 1493bc932 FUN_1493bc932 body=12 status=ok
// SIG undefined FUN_1493bc932(void)

undefined8 FUN_1493bc932(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x18) >> 8),
                  *(int *)(*(longlong *)(param_1 + 0x18) + 0x48) < 2);
}



// FUNCTION 1493bc93e FUN_1493bc93e body=18 status=ok
// SIG undefined FUN_1493bc93e(void)

undefined8 FUN_1493bc93e(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x48) < 2) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40);
}



// FUNCTION 1493bc950 FUN_1493bc950 body=6 status=ok
// SIG undefined FUN_1493bc950(void)

undefined8 FUN_1493bc950(void)

{
  return 0x100;
}



// FUNCTION 1493bc956 FUN_1493bc956 body=6 status=ok
// SIG undefined FUN_1493bc956(void)

undefined8 FUN_1493bc956(void)

{
  return 0x100;
}



// FUNCTION 1493bc95c FUN_1493bc95c body=10 status=ok
// SIG undefined FUN_1493bc95c(void)

undefined4 FUN_1493bc95c(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x30);
}



// FUNCTION 1493bc966 FUN_1493bc966 body=9 status=ok
// SIG undefined FUN_1493bc966(void)

void FUN_1493bc966(longlong param_1)

{
  FUN_1493bc992(param_1 + 0x10);
  return;
}



// FUNCTION 1493bc970 FUN_1493bc970 body=34 status=ok
// SIG undefined FUN_1493bc970(void)

undefined8 FUN_1493bc970(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1493bc992 FUN_1493bc992 body=75 status=ok
// SIG undefined FUN_1493bc992(void)

void FUN_1493bc992(longlong *param_1)

{
  if (param_1[8] != 0) {
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



// FUNCTION 1493bca1e FUN_1493bca1e body=264 status=ok
// SIG undefined FUN_1493bca1e(void)

undefined8 *
FUN_1493bca1e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 2);
  param_1[5] = param_4;
  param_1[6] = param_5;
  param_1[7] = param_6;
  param_1[8] = 0;
  param_1[9] = 0xffffffff00000000;
  return param_1;
}



// FUNCTION 1493bcb26 FUN_1493bcb26 body=235 status=ok
// SIG undefined FUN_1493bcb26(void)

undefined8 * FUN_1493bcb26(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0x403e000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3fa1111111111111;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_3 + 2);
  *(undefined1 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1493bcc12 FUN_1493bcc12 body=153 status=ok
// SIG undefined FUN_1493bcc12(void)

void FUN_1493bcc12(longlong *param_1)

{
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1493c1276(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1493c129c(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493bccfe FUN_1493bccfe body=246 status=ok
// SIG undefined FUN_1493bccfe(void)

longlong FUN_1493bccfe(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14936b1b4();
    local_38 = (void *)0x0;
    local_30 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x30);
    lVar2 = (longlong)local_30;
    _Src = *(void **)(*(longlong *)(param_1 + 0x30) + 0x28);
    if (lVar2 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar2 * 2);
    }
    if ((void **)(lVar1 + 0x28) == &local_38) {
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar1 + 0x28) = local_38;
      *(int *)(lVar1 + 0x30) = local_30;
      *(undefined4 *)(lVar1 + 0x34) = local_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bcdf6 FUN_1493bcdf6 body=230 status=ok
// SIG undefined FUN_1493bcdf6(void)

undefined8
FUN_1493bcdf6(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  longlong local_88 [2];
  undefined **local_78 [2];
  longlong local_68;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(local_88,&DAT_14bca4fe6);
  local_98 = param_6;
  local_a0 = param_5;
  local_a8 = param_4;
  FUN_1493bdf1e(local_78,local_88,param_2,param_3);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1493b5570(local_78,param_1);
  local_78[0] = &PTR_FUN_14bca7d90;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bcede FUN_1493bcede body=124 status=ok
// SIG undefined FUN_1493bcede(void)

void FUN_1493bcede(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    uVar2 = FUN_144a61b4f();
    FUN_1493b4c7e(lVar1,uVar2 ^ 1);
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    plVar3 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_1 + 0x70) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = *(undefined2 **)(param_1 + 0x68);
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0,1);
  }
  FUN_144a7e010(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14472eae2(*(longlong *)(param_1 + 0x58),2);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1493bcf68 FUN_1493bcf68 body=223 status=ok
// SIG undefined FUN_1493bcf68(void)

longlong FUN_1493bcf68(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (lVar5 == 0) {
    uVar2 = FUN_1409ffe1d();
    lVar3 = FUN_1459f6a4a();
    lVar5 = *(longlong *)(lVar3 + 0x110);
    if (lVar5 == 0) {
      FUN_140aa6c08(lVar3);
      lVar5 = *(longlong *)(lVar3 + 0x110);
    }
    uVar4 = FUN_1459f6a4a();
    lVar5 = FUN_14092e757(uVar4,lVar5,uVar2,0);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar5);
    }
    *(longlong *)(param_1 + 0x58) = lVar5;
    FUN_1444b9cd0(lVar5);
    FUN_14472eae2(*(undefined8 *)(param_1 + 0x58),0x20);
    FUN_144757f48(*(undefined8 *)(param_1 + 0x58),2);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x58) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    FUN_14482b126(lVar5,0x4000000);
    lVar5 = *(longlong *)(param_1 + 0x58);
  }
  return lVar5;
}



// FUNCTION 1493bd048 FUN_1493bd048 body=267 status=ok
// SIG undefined FUN_1493bd048(void)

void FUN_1493bd048(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14472eae2(*(longlong *)(param_1 + 0x58),2);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x58) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    FUN_14482b126(lVar4,0x4000000);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (param_2 != 0) {
    lVar4 = FUN_1459f6a4a();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      uVar2 = FUN_1409ffe1d();
      uVar3 = FUN_1459f6a4a();
      lVar4 = FUN_14092e757(uVar3,param_2,uVar2,0);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar4);
      }
      *(longlong *)(param_1 + 0x58) = lVar4;
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_14482b126(lVar4,0x4000000);
      FUN_144757f48(*(undefined8 *)(param_1 + 0x58),2);
      return;
    }
  }
  return;
}



// FUNCTION 1493bd154 FUN_1493bd154 body=167 status=ok
// SIG undefined FUN_1493bd154(void)

longlong FUN_1493bd154(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_3 + 8) < 2) {
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  else {
    FUN_1493cc9d6(local_38,param_3,*(undefined8 *)(param_1 + -0x10));
    plVar1 = (longlong *)FUN_1493bd1fc(local_38);
    if (plVar1 == (longlong *)0x0) {
      *(undefined1 *)(param_2 + 0x38) = 0;
    }
    else {
      if (param_3 != param_4) {
        FUN_14034a368(param_4,param_3);
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,param_4);
    }
    FUN_1493ccaec(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bd1fc FUN_1493bd1fc body=54 status=ok
// SIG undefined FUN_1493bd1fc(void)

undefined8 FUN_1493bd1fc(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_1493cd980();
  if ((cVar2 != '\0') && (lVar1 = *param_1, lVar1 != 0)) {
    uVar3 = FUN_14588b4b2();
    uVar3 = FUN_144718840(lVar1,uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1493bd232 FUN_1493bd232 body=1275 status=ok
// SIG undefined FUN_1493bd232(void)

longlong FUN_1493bd232(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *plStack_e8;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *plStack_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_88 [2];
  longlong local_78;
  longlong *local_70;
  longlong *plStack_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar11 = param_1 + -0x40;
  local_108 = param_4;
  plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14bca7f70;
  plVar5 = plVar8 + 2;
  FUN_1493c6e84(plVar5);
  *(undefined1 *)(plVar8 + 4) = 0;
  if (plVar8 == (longlong *)0x0) {
    plStack_68 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plStack_68 = plVar8;
  }
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_3 + 1);
  lVar10 = (longlong)local_58;
  pvVar4 = (void *)*param_3;
  local_78 = lVar11;
  local_70 = plVar5;
  if (lVar10 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,pvVar4,lVar10 * 2);
  }
  local_50 = *(undefined1 *)(param_3 + 2);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      *(undefined1 *)(param_2 + 0x360) = 0;
      goto LAB_1493bd361;
    }
    FUN_1493bd72e(local_88,param_3,local_108);
    local_100 = *(undefined8 *)(param_1 + 0x10);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_e0 = (void *)0x0;
    local_d8 = *(int *)(param_3 + 1);
    lVar10 = (longlong)local_d8;
    pvVar4 = (void *)*param_3;
    local_108 = param_2;
    local_f8 = lVar11;
    local_f0 = plVar5;
    plStack_e8 = plVar8;
    if (lVar10 == 0) {
      local_d4 = 0;
    }
    else {
      FUN_1446dd670(&local_e0,local_d8,0);
      memcpy(local_e0,pvVar4,lVar10 * 2);
    }
    pvVar4 = local_60;
    local_d0 = *(undefined1 *)(param_3 + 2);
    local_c8 = local_78;
    local_c0 = local_70;
    plStack_b8 = plStack_68;
    local_70 = (longlong *)0x0;
    plStack_68 = (longlong *)0x0;
    local_b0 = (void *)0x0;
    lVar11 = (longlong)local_58;
    local_a8 = local_58;
    if (lVar11 == 0) {
      local_a4 = 0;
    }
    else {
      FUN_1446dd670(&local_b0,local_58,0);
      memcpy(local_b0,pvVar4,lVar11 * 2);
    }
    local_a0 = local_50;
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,8,0x10);
    puVar6 = local_98;
    local_90 = 8;
    *local_98 = &PTR_LAB_149e35290;
    uVar9 = FUN_144a3f946();
    pvVar4 = local_e0;
    puVar6[2] = uVar9;
    *puVar6 = &PTR_FUN_14bca7fb0;
    puVar6[3] = local_f8;
    puVar6[4] = local_f0;
    puVar6[5] = plStack_e8;
    local_f0 = (longlong *)0x0;
    plStack_e8 = (longlong *)0x0;
    puVar6[6] = 0;
    lVar11 = (longlong)local_d8;
    *(int *)(puVar6 + 7) = local_d8;
    if (lVar11 == 0) {
      *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(puVar6 + 6,local_d8,0);
      memcpy((void *)puVar6[6],pvVar4,lVar11 * 2);
    }
    pvVar4 = local_b0;
    *(undefined1 *)(puVar6 + 8) = local_d0;
    puVar6[9] = local_c8;
    puVar6[10] = local_c0;
    puVar6[0xb] = plStack_b8;
    local_c0 = (longlong *)0x0;
    plStack_b8 = (longlong *)0x0;
    puVar6[0xc] = 0;
    lVar11 = (longlong)local_a8;
    *(int *)(puVar6 + 0xd) = local_a8;
    if (lVar11 == 0) {
      *(undefined4 *)((longlong)puVar6 + 0x6c) = 0;
    }
    else {
      FUN_1446dd670(puVar6 + 0xc,local_a8,0);
      memcpy((void *)puVar6[0xc],pvVar4,lVar11 * 2);
    }
    *(undefined1 *)(puVar6 + 0xe) = local_a0;
    iVar7 = FUN_1493b4934(local_100,local_88,&local_98);
    FUN_1444e2f7e(&local_f8);
    if (iVar7 == -1) {
      *(undefined1 *)(*plVar5 + 0x3e0) = 0;
      FUN_140b576f0();
    }
    param_2 = local_108;
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(plVar8 + 4) = 1;
  lVar11 = plVar8[2];
  plVar5 = (longlong *)plVar8[3];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  while ((*(byte *)(lVar11 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar11 + 0x70) + 0x20))(*(longlong **)(lVar11 + 0x70),0xffffffff,0)
    ;
  }
  cVar3 = *(char *)(lVar11 + 0x3e0);
  *(char *)(param_2 + 0x360) = cVar3;
  if (cVar3 == '\x01') {
    FUN_1493c70d2(param_2,lVar11 + 0x80);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_1493bd361:
  FUN_1444e2ffe(&local_78);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bd72e FUN_1493bd72e body=214 status=ok
// SIG undefined FUN_1493bd72e(void)

undefined8 FUN_1493bd72e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  undefined **local_c8 [2];
  longlong local_b8;
  longlong local_a8;
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140056680(local_d8,&DAT_14bca4fe6);
  FUN_1493be014(local_c8,local_d8,param_2);
  local_c8[0] = &PTR_FUN_14bca7e00;
  puVar2 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1493b6f42(local_c8,param_1);
  local_c8[0] = &PTR_FUN_14bca7dd0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bd806 FUN_1493bd806 body=1476 status=ok
// SIG undefined FUN_1493bd806(void)

longlong * FUN_1493bd806(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_178 [47];
  char local_149;
  longlong local_148;
  longlong *local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined4 local_120;
  longlong local_118 [2];
  longlong local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong local_e0;
  int local_d8;
  undefined4 local_d4;
  longlong *local_c8;
  longlong local_88;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = (int)param_3[1];
  if (((iVar3 == 0) || (*(char *)(param_1 + 0x18) != '\x01')) || (*(longlong *)(param_1 + 8) == 0))
  goto LAB_1493bd84d;
  cVar2 = *(char *)(*param_3 + 0x20);
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  local_148 = param_1 + -0x48;
  FUN_1493c7268(&local_f8);
  local_140 = param_2;
  if ((int)param_3[1] == 0) {
    if (cVar2 == '\x04') {
LAB_1493bda0f:
      FUN_1493bddcc(local_118,param_3);
      uVar5 = *(undefined8 *)(param_1 + 8);
      local_e8 = local_148;
      local_e0 = 0;
      iVar3 = (int)param_3[1];
      lVar12 = *param_3;
      local_d8 = iVar3;
      if (iVar3 == 0) {
        local_d4 = 0;
      }
      else {
        FUN_1493c6d96(&local_e0,iVar3);
        FUN_1493c6dff(local_e0,lVar12,iVar3);
      }
      local_c8 = &local_108;
      local_128 = (undefined8 *)0x0;
      local_120 = 0;
      FUN_1446efa72(&local_128,0,4,0x10);
      puVar6 = local_128;
      local_120 = 4;
      *local_128 = &PTR_LAB_149e35290;
      uVar10 = FUN_144a3f946();
      iVar3 = local_d8;
      lVar12 = local_e0;
      puVar6[2] = uVar10;
      *puVar6 = &PTR_FUN_14bca8150;
      puVar6[3] = local_e8;
      puVar6[4] = 0;
      *(int *)(puVar6 + 5) = local_d8;
      if (local_d8 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
      }
      else {
        FUN_1493c6d96(puVar6 + 4,local_d8);
        FUN_1493c6dff(puVar6[4],lVar12,iVar3);
      }
      puVar6[7] = local_c8;
      FUN_1493b4934(uVar5,local_118,&local_128);
      FUN_1493c140a(local_e0,local_d8);
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uVar14 = 0;
    local_149 = cVar2;
    do {
      plVar9 = (longlong *)FUN_14001cc68(0x28,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14bca8110;
      FUN_1493c7314(plVar9 + 2);
      *(undefined1 *)(plVar9 + 4) = 0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar15 = plVar9 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar7 = uStack_f0;
      *(undefined1 *)(plVar9 + 4) = 1;
      lVar12 = plVar9[2];
      lVar4 = plVar9[3];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      lVar11 = (longlong)(int)uStack_f0;
      uVar8 = (int)uStack_f0 + 1;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar8);
      if (uStack_f0._4_4_ < uVar8) {
        FUN_1493c7436(&local_f8,uVar7 & 0xffffffff);
      }
      uVar7 = uStack_100;
      local_f8[lVar11 * 2] = lVar12;
      local_f8[lVar11 * 2 + 1] = lVar4;
      lVar12 = (longlong)(int)uStack_100;
      uVar8 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar8);
      if (uStack_100._4_4_ < uVar8) {
        FUN_1493c74bc(&local_108,uVar7 & 0xffffffff);
      }
      *(longlong **)(local_108 + lVar12 * 0x10) = plVar9 + 2;
      *(longlong **)(local_108 + 8 + lVar12 * 0x10) = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar15 = plVar9 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulonglong)(longlong)(int)param_3[1]);
    if (local_149 == '\x04') goto LAB_1493bda0f;
    if ((int)param_3[1] != 0) {
      lVar12 = 0;
      uVar14 = 0;
      do {
        lVar4 = *param_3;
        lVar11 = (lVar12 >> 0x20) * 0x50;
        lVar13 = (lVar12 >> 0x1c) + local_108;
        FUN_1493bde78(local_118,lVar4 + lVar11 + 0x10);
        uVar5 = *(undefined8 *)(param_1 + 8);
        local_e8 = local_148;
        FUN_1493bb146(&local_e0,lVar4 + lVar11);
        local_138 = (undefined8 *)0x0;
        local_130 = 0;
        local_88 = lVar13;
        FUN_1446efa72(&local_138,0,8,0x10);
        puVar6 = local_138;
        local_130 = 8;
        *local_138 = &PTR_LAB_149e35290;
        uVar10 = FUN_144a3f946();
        puVar6[2] = uVar10;
        *puVar6 = &PTR_FUN_14bca81c0;
        puVar6[3] = local_e8;
        FUN_1493bb146(puVar6 + 4,&local_e0);
        puVar6[0xf] = local_88;
        FUN_1493b4934(uVar5,local_118,&local_138);
        FUN_1493ba244(&local_e0);
        if (local_118[0] != 0) {
          FUN_1400020a8();
        }
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + 0x100000000;
      } while (uVar14 < (ulonglong)(longlong)(int)param_3[1]);
    }
  }
  param_2 = local_140;
  if ((longlong)(int)uStack_f0 != 0) {
    plVar15 = local_f8 + (longlong)(int)uStack_f0 * 2;
    plVar9 = local_f8;
    do {
      lVar12 = *plVar9;
      while ((*(byte *)(lVar12 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar12 + 0x70) + 0x20))
                  (*(longlong **)(lVar12 + 0x70),0xffffffff,0);
      }
      local_50 = *(byte *)(lVar12 + 0x118);
      if (local_50 == 1) {
        FUN_1493c7aee(&local_e8,lVar12 + 0x80);
      }
      if ((local_50 & 1) != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1493c7d2e(param_2,iVar3);
        }
        FUN_1493c7aee((longlong)iVar3 * 0x98 + *param_2,&local_e8);
      }
      if ((local_50 & 1) != 0) {
        FUN_1493bcc12(&local_e8);
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar15);
  }
  FUN_1493c721f(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1493c71d6(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1493bd84d:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493bddcc FUN_1493bddcc body=171 status=ok
// SIG undefined FUN_1493bddcc(void)

undefined8 FUN_1493bddcc(undefined8 param_1)

{
  undefined1 auStack_a8 [40];
  longlong local_80 [2];
  longlong local_70 [2];
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1493ba026(local_70);
  FUN_140056680(local_80,&DAT_14bca4fe6);
  FUN_1493be0ca(local_60,local_80,local_70);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1493b7828(local_60,param_1);
  FUN_1493be18a(local_60);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bde78 FUN_1493bde78 body=165 status=ok
// SIG undefined FUN_1493bde78(void)

undefined8 FUN_1493bde78(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined **local_50 [2];
  longlong local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(local_60,&DAT_14bca4fe6);
  FUN_1493be014(local_50,local_60,param_2);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1493b6622(local_50,param_1);
  local_50[0] = &PTR_FUN_14bca7dd0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bdf1e FUN_1493bdf1e body=246 status=ok
// SIG undefined FUN_1493bdf1e(void)

undefined8 *
FUN_1493bdf1e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14bca7d90;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x31) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x32) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x33) = param_7;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 1493be014 FUN_1493be014 body=182 status=ok
// SIG undefined FUN_1493be014(void)

undefined8 * FUN_1493be014(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14bca7dd0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 1493be0ca FUN_1493be0ca body=191 status=ok
// SIG undefined FUN_1493be0ca(void)

undefined8 * FUN_1493be0ca(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_38,L"AnimationQueries");
  FUN_1493be014(param_1,param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bca7e50;
  param_1[6] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 * 2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493be18a FUN_1493be18a body=82 status=ok
// SIG undefined FUN_1493be18a(void)

void FUN_1493be18a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bca7e50;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bca7dd0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493be1dc FUN_1493be1dc body=130 status=ok
// SIG undefined FUN_1493be1dc(void)

void FUN_1493be1dc(undefined4 *param_1,undefined8 *param_2,float param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  uVar3 = (ulonglong)*(int *)(param_2 + 1);
  uVar2 = 0;
  if (1 < uVar3) {
    pfVar1 = (float *)*param_2;
    iVar4 = 0;
    if (param_3 < *pfVar1) goto LAB_1493be1ee;
    uVar2 = uVar3 - 1;
    iVar4 = (int)uVar2;
    if (pfVar1[uVar3 - 1] <= param_3) goto LAB_1493be1ee;
    lVar5 = 0;
    uVar3 = 0;
    do {
      if ((*(float *)((longlong)pfVar1 + (lVar5 >> 0x1e)) <= param_3) &&
         (param_3 < pfVar1[(int)uVar3 + 1])) {
        iVar4 = (int)uVar3 + 1;
        uVar2 = uVar3 & 0xffffffff;
        goto LAB_1493be1ee;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x100000000;
    } while (uVar2 != uVar3);
  }
  uVar2 = 0;
  iVar4 = 0;
LAB_1493be1ee:
  *param_1 = (int)uVar2;
  param_1[1] = iVar4;
  return;
}



// FUNCTION 1493be25e FUN_1493be25e body=413 status=ok
// SIG undefined FUN_1493be25e(void)

ulonglong FUN_1493be25e(longlong param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  wchar_t *_Str;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_60 = param_4;
  FUN_1403de9f2(param_2,&local_58,&DAT_149e31048,1);
  if (*(int *)(local_58 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*local_58;
  }
  iVar1 = _wtoi(_Str);
  *param_3 = iVar1;
  uVar4 = 0;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xa8))) {
    if (1 < (uint)uStack_50) {
      uVar7 = 1;
      lVar6 = 0x100000000;
      pcVar5 = _wtoi_exref;
      do {
        puVar3 = &DAT_149dfb77a;
        if (*(int *)((longlong)local_58 + (lVar6 >> 0x1c) + 8) != 0) {
          puVar3 = *(undefined2 **)((longlong)local_58 + (lVar6 >> 0x1c));
        }
        uVar2 = (*pcVar5)(puVar3);
        if ((-1 < (int)uVar2) &&
           (uVar4 = (ulonglong)uVar2,
           (int)uVar2 < *(int *)(*(longlong *)(param_1 + 0xa0) + 0x28 + (longlong)*param_3 * 0x90)))
        {
          iVar1 = (int)local_60[1];
          *(uint *)(local_60 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)local_60 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(local_60,iVar1);
          }
          *(uint *)(*local_60 + (longlong)iVar1 * 4) = uVar2;
          pcVar5 = _wtoi_exref;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x100000000;
      } while (uVar7 < (ulonglong)(longlong)(int)(uint)uStack_50);
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(int)local_60[1] != 0);
  }
  FUN_1447a1747(local_58);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493be3fc FUN_1493be3fc body=134 status=ok
// SIG undefined FUN_1493be3fc(void)

void FUN_1493be3fc(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1493c78c8(param_1,iVar1);
    }
    FUN_1493c786d((longlong)iVar1 * 0x80 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1493c7dc2(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1493c7e22(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1493be484 FUN_1493be484 body=168 status=ok
// SIG undefined FUN_1493be484(void)

void FUN_1493be484(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = param_5;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  local_3c = param_3;
  local_38 = param_4;
  uVar2 = (**(code **)(*plVar3 + 8))();
  local_48 = &local_31;
  (*pcVar1)(uVar2,param_2,&local_3c,&local_38);
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493be52d FUN_1493be52d body=758 status=ok
// SIG undefined FUN_1493be52d(void)

ulonglong FUN_1493be52d(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *_Str;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  int local_90;
  undefined4 local_7c;
  longlong local_78 [3];
  undefined8 uStack_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1493be3fc((undefined8 *)(param_3 + 0x10),1,1);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_1403de9f2(param_1,&local_58,&DAT_149e31048,1);
  if ((int)uStack_50 == 4) {
    _Str = L"";
    pwVar9 = L"";
    if (*(int *)(local_58 + 1) != 0) {
      pwVar9 = (wchar_t *)*local_58;
    }
    iVar3 = _wtoi(pwVar9);
    pwVar9 = L"";
    if (*(int *)(local_58 + 3) != 0) {
      pwVar9 = (wchar_t *)local_58[2];
    }
    iVar4 = _wtoi(pwVar9);
    pwVar9 = L"";
    if (*(int *)(local_58 + 5) != 0) {
      pwVar9 = (wchar_t *)local_58[4];
    }
    iVar5 = _wtoi(pwVar9);
    if (*(int *)(local_58 + 7) != 0) {
      _Str = (wchar_t *)local_58[6];
    }
    iVar6 = _wtoi(_Str);
    if (iVar3 < *(int *)(param_2 + 0xa8)) {
      uVar12 = 0;
      if ((*(int *)(*(longlong *)(param_2 + 0xa0) + 0x28 + (longlong)iVar3 * 0x90) <= iVar4) ||
         (*(int *)(param_2 + 0x48) <= iVar5)) goto LAB_1493be647;
      lVar10 = *(longlong *)(param_2 + 0x40);
      if (iVar6 < *(int *)(lVar10 + 0x38 + (longlong)iVar5 * 0xa8)) {
        lVar7 = *(longlong *)(param_2 + 0xa0) + (longlong)iVar3 * 0x90;
        lVar11 = *(longlong *)(lVar7 + 0x10);
        lVar7 = (longlong)*(int *)(*(longlong *)(lVar7 + 0x20) + (longlong)iVar4 * 0x18);
        local_78[2] = 0;
        uStack_60 = 0;
        local_78[0] = 0;
        local_78[1] = 0;
        FUN_14931873e(*(undefined8 *)(lVar11 + 8 + lVar7 * 0x18));
        iVar3 = *(int *)(lVar11 + lVar7 * 0x18);
        iVar4 = (uint)(iVar3 == 2) * 2 + 1;
        FUN_144a12820(local_78,*(int *)(*(longlong *)(lVar11 + 0x10 + lVar7 * 0x18) + 4) * iVar4,1);
        FUN_1493182bc(*(undefined8 *)(lVar11 + 0x10 + lVar7 * 0x18),local_78[0]);
        if (0 < (int)uStack_60) {
          uVar2 = *(undefined8 *)(param_3 + 0x10);
          lVar11 = (longlong)(iVar4 * *(int *)(lVar10 + (longlong)iVar5 * 0xa8 + 0x38));
          lVar7 = (longlong)iVar6;
          lVar10 = 0;
          do {
            if (iVar3 == 2) {
              LOCK();
              UNLOCK();
              local_90 = DAT_14c761474 + 1;
              local_98 = 0;
              DAT_14c761474 = DAT_14c761474 + 1;
              FUN_1406507bc(uVar2,&local_7c,*(undefined4 *)(local_78[2] + lVar10 * 4),
                            *(undefined4 *)(local_78[0] + 4 + lVar7 * 4));
              uVar1 = local_7c;
              lVar8 = FUN_14045d1a0(uVar2,local_7c);
              *(undefined4 *)(lVar8 + 0xc) = *(undefined4 *)(local_78[0] + lVar7 * 4);
              *(undefined4 *)(lVar8 + 0x14) = *(undefined4 *)(local_78[0] + 8 + lVar7 * 4);
              iVar4 = 2;
            }
            else {
              LOCK();
              UNLOCK();
              local_90 = DAT_14c761474 + 1;
              local_98 = 0;
              DAT_14c761474 = DAT_14c761474 + 1;
              FUN_1406507bc(uVar2,&local_7c,*(undefined4 *)(local_78[2] + lVar10 * 4),
                            *(undefined4 *)(local_78[0] + lVar7 * 4));
              uVar1 = local_7c;
              iVar4 = iVar3;
            }
            FUN_14045d156(uVar2,uVar1,iVar4,1);
            lVar10 = lVar10 + 1;
            lVar7 = lVar7 + lVar11;
          } while (lVar10 < (int)uStack_60);
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        if (local_78[2] != 0) {
          FUN_1400020a8();
        }
        uVar12 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
        goto LAB_1493be647;
      }
    }
  }
  uVar12 = 0;
LAB_1493be647:
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493be824 FUN_1493be824 body=306 status=ok
// SIG undefined FUN_1493be824(void)

void FUN_1493be824(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (0 < (int)param_2[1]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      local_c8 = *param_2 + lVar1;
      local_d0 = (undefined4)lVar2;
      local_90 = 0;
      local_88 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_84 = 0xffffffff00000080;
      local_7c = 0;
      local_70 = 0;
      local_68 = 0;
      local_d8 = param_1;
      local_c0 = param_3;
      local_b8 = param_4;
      FUN_1493be958(&local_d8);
      local_68 = 0;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_1493c3c8e(&local_b0);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x90;
    } while (lVar2 < (int)param_2[1]);
  }
  FUN_145c74aa5(*param_2);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493be958 FUN_1493be958 body=833 status=ok
// SIG undefined FUN_1493be958(void)

void FUN_1493be958(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_1b8 [36];
  undefined1 local_194 [4];
  undefined4 local_190;
  int local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_18c = 0;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (0 < *(int *)(lVar4 + 0x28)) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 8 + (longlong)local_18c * 0x18);
      local_190 = *(undefined4 *)(lVar1 + 0x94);
      if ((*(int *)(lVar1 + 0x80) == 2) && (-1 < *(int *)(lVar1 + 0x9c))) {
        bVar2 = *(int *)(lVar1 + 0x9c) < *(int *)(*(longlong *)(param_1 + 0x18) + 8);
      }
      else {
        bVar2 = false;
      }
      if (*(int *)(*(longlong *)(lVar4 + 0x20) + 0x10 + (longlong)local_18c * 0x18) == 3) {
        uVar3 = FUN_1493c263a(&local_138,local_190,&local_190);
        uVar3 = FUN_146d8bb4c(uVar3,local_190,&local_190);
        FUN_1447cbafe(uVar3,local_194,&local_18c,0);
        if (bVar2) {
LAB_1493beb38:
          uVar3 = FUN_146d8bb4c(&local_188,*(undefined4 *)(lVar1 + 0x9c),lVar1 + 0x9c);
          piVar5 = (int *)(lVar1 + 0x94);
          goto LAB_1493beb61;
        }
      }
      else {
        if (bVar2) {
          uVar3 = FUN_1493c263a(&local_e8,*(undefined4 *)(lVar1 + 0x9c),lVar1 + 0x9c);
          uVar3 = FUN_146d8bb4c(uVar3,local_190,&local_190);
          FUN_1447cbafe(uVar3,local_194,&local_18c,0);
          goto LAB_1493beb38;
        }
        uVar3 = FUN_146d8bb4c(&local_98,local_190,&local_190);
        piVar5 = &local_18c;
LAB_1493beb61:
        FUN_1447cbafe(uVar3,local_194,piVar5,0);
      }
      local_18c = local_18c + 1;
      lVar4 = *(longlong *)(param_1 + 0x10);
    } while (local_18c < *(int *)(lVar4 + 0x28));
  }
  FUN_1444e5756(param_1,&local_e8);
  FUN_1493c1756(param_1,&local_138);
  FUN_1493c2010(param_1,&local_98);
  local_140 = 0;
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  FUN_14062beec(&local_188);
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1493c3afc(&local_138);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1493c3afc(&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14062beec(&local_98);
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493bec9a FUN_1493bec9a body=53 status=ok
// SIG undefined FUN_1493bec9a(void)

undefined8 FUN_1493bec9a(undefined8 param_1,byte param_2)

{
  wchar_t *pwVar1;
  
  if (param_2 < 6) {
    pwVar1 = (wchar_t *)(&PTR_u_Default_14bca82b0)[param_2];
  }
  else {
    pwVar1 = L"Unexpected";
  }
  FUN_140056680(param_1,pwVar1);
  return param_1;
}



// FUNCTION 1493beccf FUN_1493beccf body=306 status=ok
// SIG undefined FUN_1493beccf(void)

undefined8 FUN_1493beccf(undefined8 param_1,undefined4 param_2,byte param_3,byte param_4)

{
  int iVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(param_1,&DAT_14bac1124);
  FUN_1493bec9a(&local_40,param_2);
  iVar1 = local_38 + -1;
  if (local_38 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_1,local_40,iVar1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((char)param_2 != '\x04') {
    if (param_3 < 3) {
      pwVar3 = (wchar_t *)(&PTR_u_Opaque_14bca82e0)[param_3];
    }
    else {
      pwVar3 = L"Unexpected";
    }
    FUN_140056680(local_50,pwVar3);
    FUN_140ba7826(&local_40,&DAT_149e01f60,local_50);
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_40,iVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  puVar2 = &DAT_149dfb77a;
  if (param_4 != 0) {
    puVar2 = (undefined2 *)&DAT_14bca7d7e;
  }
  FUN_1400020e8(param_1,puVar2,(uint)param_4 * 3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bee02 FUN_1493bee02 body=423 status=ok
// SIG undefined FUN_1493bee02(void)

undefined8 * FUN_1493bee02(undefined8 *param_1,byte param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cc119b8 != DAT_14cc119e4) {
    puVar6 = &DAT_14cc119e8;
    if (DAT_14cc119f0 != (undefined *)0x0) {
      puVar6 = DAT_14cc119f0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cc119f8 - 1U & (uint)param_2) * 4);
    for (iVar1 = iVar5; iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x40 + DAT_14cc119b0 + 0x38)
        ) {
      if (*(byte *)(DAT_14cc119b0 + (longlong)iVar1 * 0x40) == param_2) goto LAB_1493bef3a;
    }
  }
  local_40 = 0x100000000;
  local_38 = &DAT_14cc119c0;
  local_30 = 0xffffffff;
  local_28 = 0;
  if (DAT_14cc119d8 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_40);
    lVar4 = (longlong)local_30._4_4_;
  }
  lVar3 = DAT_14cc119b0;
  *param_1 = 0;
  iVar5 = *(int *)(lVar3 + 0x10 + lVar4 * 0x40);
  pvVar2 = *(void **)(lVar3 + 8 + lVar4 * 0x40);
  *(int *)(param_1 + 1) = iVar5;
  if ((longlong)iVar5 != 0) {
    FUN_1446dd670(param_1,iVar5,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar5 * 2);
    goto LAB_1493beebe;
  }
  goto LAB_1493befa3;
  while (iVar5 = *(int *)(lVar4 + 0x38), iVar5 != -1) {
LAB_1493bef3a:
    lVar4 = DAT_14cc119b0 + (longlong)iVar5 * 0x40;
    if (*(byte *)(DAT_14cc119b0 + (longlong)iVar5 * 0x40) == param_2) goto LAB_1493bef5c;
  }
  lVar4 = 0;
LAB_1493bef5c:
  *param_1 = 0;
  iVar5 = *(int *)(lVar4 + 0x10);
  pvVar2 = *(void **)(lVar4 + 8);
  *(int *)(param_1 + 1) = iVar5;
  if ((longlong)iVar5 != 0) {
    FUN_1446dd670(param_1,iVar5,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar5 * 2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
LAB_1493befa3:
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
LAB_1493beebe:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493befaf FUN_1493befaf body=413 status=ok
// SIG undefined FUN_1493befaf(void)

undefined8 * FUN_1493befaf(undefined8 *param_1,byte param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cc119b8 != DAT_14cc119e4) {
    puVar6 = &DAT_14cc119e8;
    if (DAT_14cc119f0 != (undefined *)0x0) {
      puVar6 = DAT_14cc119f0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cc119f8 - 1U & (uint)param_2) * 4);
    for (iVar1 = iVar5; iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x40 + DAT_14cc119b0 + 0x38)
        ) {
      if (*(byte *)(DAT_14cc119b0 + (longlong)iVar1 * 0x40) == param_2) goto LAB_1493bf0e2;
    }
  }
  local_40 = 0x100000000;
  local_38 = &DAT_14cc119c0;
  local_30 = 0xffffffff;
  local_28 = 0;
  if (DAT_14cc119d8 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_40);
    lVar4 = (longlong)local_30._4_4_;
  }
  lVar3 = DAT_14cc119b0;
  *param_1 = 0;
  iVar5 = *(int *)(lVar3 + 0x30 + lVar4 * 0x40);
  uVar2 = *(undefined8 *)(lVar3 + 0x28 + lVar4 * 0x40);
  *(int *)(param_1 + 1) = iVar5;
  if (iVar5 != 0) {
    FUN_140b856de(param_1,iVar5,0);
    FUN_140b8566a(*param_1,uVar2,iVar5);
    goto LAB_1493bf066;
  }
  goto LAB_1493bf146;
  while (iVar5 = *(int *)(lVar4 + 0x38), iVar5 != -1) {
LAB_1493bf0e2:
    lVar4 = DAT_14cc119b0 + (longlong)iVar5 * 0x40;
    if (*(byte *)(DAT_14cc119b0 + (longlong)iVar5 * 0x40) == param_2) goto LAB_1493bf104;
  }
  lVar4 = 0;
LAB_1493bf104:
  *param_1 = 0;
  iVar5 = *(int *)(lVar4 + 0x30);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(int *)(param_1 + 1) = iVar5;
  if (iVar5 != 0) {
    FUN_140b856de(param_1,iVar5,0);
    FUN_140b8566a(*param_1,uVar2,iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
LAB_1493bf146:
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
LAB_1493bf066:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bf152 FUN_1493bf152 body=86 status=ok
// SIG undefined FUN_1493bf152(void)

void FUN_1493bf152(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_4;
  FUN_1493bf1aa(local_48,param_1,param_2,param_3);
  FUN_1493bf240(local_48);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493bf1aa FUN_1493bf1aa body=150 status=ok
// SIG undefined FUN_1493bf1aa(void)

undefined8 *
FUN_1493bf1aa(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte bVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  bVar1 = 1;
  if (((*(char *)(param_3 + 0x290) == '\0') &&
      (bVar1 = *(int *)(param_3 + 0x40) == 1 | 4, *(int *)(param_3 + 0x40) != 1)) &&
     (*(char *)(param_3 + 0x293) == '\0')) {
    bVar1 = 2;
    if (*(char *)(param_3 + 0x291) == '\0') {
      bVar1 = (*(char *)(param_3 + 0x292) != '\0') * '\x03';
    }
  }
  *(byte *)(param_1 + 6) = bVar1;
  *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)(param_3 + 0x24c);
  FUN_1493c3dfc(param_1);
  FUN_1493c40f4(param_1);
  return param_1;
}



// FUNCTION 1493bf240 FUN_1493bf240 body=2401 status=ok
// SIG undefined FUN_1493bf240(void)

void FUN_1493bf240(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  bool *pbVar6;
  longlong lVar7;
  bool *pbVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  bool local_68 [15];
  bool local_59;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar7 + 0x290) == '\x01') {
    bVar1 = FUN_1493c4390(param_1,&DAT_14cc10d80,lVar7 + 0x10);
    pbVar6 = local_68;
    local_58 = &DAT_3f8000003f800000;
    fStack_50 = 1.0;
    uStack_4c = 0x3f800000;
    local_68[0] = (bool)bVar1;
    FUN_1493c491e(param_1,&DAT_14cc10e10,*(longlong *)(param_1 + 8) + 0x30,&local_58);
    puVar5 = &DAT_14cc118f0;
LAB_1493bf2c0:
    local_58 = (undefined1 *)CONCAT71(local_58._1_7_,1);
    pbVar8 = (bool *)&local_58;
  }
  else {
    uVar2 = FUN_1493c4390(param_1,&DAT_14cc11100,lVar7 + 0x1e0);
    local_78 = 3;
    uVar10 = 0x3f800000;
    local_58._0_1_ = uVar2;
    FUN_1493c42a0(param_1,&DAT_14cc11190,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x234),
                  0x3f800000);
    local_68[0] = true;
    FUN_1493c4a76(param_1,&DAT_14cc11930,&local_58);
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x293) == '\0') {
      local_68[0] = (bool)FUN_1493c4390(param_1,&DAT_14cc111a0,*(longlong *)(param_1 + 8) + 0x218);
      local_58 = (undefined1 *)0x0;
      fStack_50 = 0.0;
      local_78 = 3;
      FUN_1493c4b00(param_1,&DAT_14cc11230,*(longlong *)(param_1 + 8) + 0x23c);
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x296) == '\x01') {
        uVar10 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1dc);
      }
      local_78 = 3;
      FUN_1493c42a0(param_1,&DAT_14cc11240,uVar10,0x3f800000);
    }
    else {
      local_68[0] = false;
    }
    local_58._0_1_ = true;
    FUN_1493c4a76(param_1,&DAT_14cc11920,local_68);
    uVar2 = FUN_1493c4390(param_1,&DAT_14cc11250,*(longlong *)(param_1 + 8) + 0x1fc);
    local_58 = (undefined1 *)CONCAT71(local_58._1_7_,uVar2);
    local_78 = 3;
    FUN_1493c42a0(param_1,&DAT_14cc112e0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x238),
                  0x3f800000);
    local_68[0] = true;
    FUN_1493c4a76(param_1,&DAT_14cc11940,&local_58);
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar7 + 0x40) == 0) {
      local_68[0] = (bool)FUN_1493c4390(param_1,&DAT_14cc10d80,lVar7 + 0x10);
      local_58 = &DAT_3f8000003f800000;
      fStack_50 = 1.0;
      uStack_4c = 0x3f800000;
      FUN_1493c491e(param_1,&DAT_14cc10e10,*(longlong *)(param_1 + 8) + 0x30,&local_58);
      local_58._0_1_ = true;
      FUN_1493c4a76(param_1,&DAT_14cc118f0,local_68,&local_58);
      local_58._0_1_ = FUN_1493c4390(param_1,&DAT_14cc10e40,*(longlong *)(param_1 + 8) + 0x44);
      local_78 = 3;
      FUN_1493c42a0(param_1,&DAT_14cc10ed0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x60),
                    0x3f800000);
      local_78 = 3;
      FUN_1493c42a0(param_1,&DAT_14cc10ee0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 100),
                    0x3f800000);
      local_68[0] = true;
      FUN_1493c4a76(param_1,&DAT_14cc11900,&local_58,local_68);
      bVar9 = *(char *)(*(longlong *)(param_1 + 8) + 0x295) != '\x01';
      if (bVar9) {
        local_58._0_1_ = true;
        pbVar6 = local_68;
      }
      else {
        local_58._0_1_ = FUN_1493c4390(param_1,&DAT_14cc10ef0,*(longlong *)(param_1 + 8) + 0x184);
        pbVar6 = (bool *)&local_58;
        local_78 = 3;
        FUN_1493c42a0(param_1,&DAT_14cc10f80,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x180),
                      0x3f000000);
      }
      local_68[0] = !bVar9;
      FUN_1493c4a76(param_1,&DAT_14cc11950,pbVar6);
      bVar9 = *(char *)(*(longlong *)(param_1 + 8) + 0x2e0) == '\x01';
      if (bVar9) {
        local_78 = 3;
        FUN_1493c42a0(param_1,&DAT_14cc116e0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x2b8),
                      0x3fa66666);
        FUN_1493c4390(param_1,&DAT_14cc116f0,*(longlong *)(param_1 + 8) + 0x29c);
        local_78 = 3;
        FUN_1493c42a0(param_1,&DAT_14cc11780,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x298),0);
        FUN_1493c4390(param_1,&DAT_14cc11790,*(longlong *)(param_1 + 8) + 0x2c4);
        local_78 = 3;
        FUN_1493c42a0(param_1,&DAT_14cc11820,*(undefined4 *)(*(longlong *)(param_1 + 8) + 700),
                      0x42c80000);
        local_78 = 3;
        FUN_1493c42a0(param_1,&DAT_14cc11830,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x2c0),
                      0x43c80000);
      }
      local_58._0_1_ = true;
      local_68[0] = bVar9;
      FUN_1493c4a76(param_1,&DAT_14cc11990);
      bVar9 = *(char *)(*(longlong *)(param_1 + 8) + 0x308) != '\x01';
      if (bVar9) {
        local_58 = (undefined1 *)CONCAT71(local_58._1_7_,1);
      }
      else {
        bVar1 = FUN_1493c4390(param_1,&DAT_14cc11840,*(longlong *)(param_1 + 8) + 0x2e4);
        local_78 = 3;
        FUN_1493c42a0(param_1,&DAT_14cc118d0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x300),0);
        local_78 = 3;
        FUN_1493c42a0(param_1,&DAT_14cc118e0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x304),0);
        local_58 = (undefined1 *)
                   CONCAT71(local_58._1_7_,
                            *(float *)(*(longlong *)(param_1 + 8) + 0x304) != 0.0 | bVar1);
      }
      local_68[0] = !bVar9;
      FUN_1493c4a76(param_1,&DAT_14cc119a0);
    }
    else if (*(int *)(lVar7 + 0x40) == 1) {
      bVar1 = FUN_1493c4390(param_1,&DAT_14cc10f90,lVar7 + 0x10);
      local_58 = &DAT_3f8000003f800000;
      fStack_50 = 1.0;
      uStack_4c = 0x3f800000;
      FUN_1493c491e(param_1,&DAT_14cc11020,*(longlong *)(param_1 + 8) + 0x30,&local_58);
      local_59 = (bool)FUN_1493c4390(param_1,&DAT_14cc11050,*(longlong *)(param_1 + 8) + 0x68);
      local_59 = (bool)(local_59 | bVar1);
      pbVar6 = &local_59;
      lVar7 = *(longlong *)(param_1 + 8);
      fStack_50 = (float)*(double *)(lVar7 + 0x98);
      local_58 = (undefined1 *)
                 CONCAT44((float)*(double *)(lVar7 + 0x90),(float)*(double *)(lVar7 + 0x88));
      local_68[0] = false;
      local_68[1] = false;
      local_68[2] = true;
      local_68[3] = true;
      local_68[4] = false;
      local_68[5] = false;
      local_68[6] = true;
      local_68[7] = true;
      local_68[8] = false;
      local_68[9] = false;
      local_68[10] = true;
      local_68[0xb] = true;
      local_78 = 3;
      FUN_1493c4b00(param_1,&DAT_14cc110e0,&local_58);
      local_78 = 3;
      FUN_1493c42a0(param_1,&DAT_14cc110f0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa0),
                    0x3f800000);
      puVar5 = &DAT_14cc11910;
      goto LAB_1493bf2c0;
    }
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar7 + 0x294) == '\x01') {
      local_78 = 3;
      FUN_1493c42a0(param_1,&DAT_14cc112f0,*(undefined4 *)(lVar7 + 0x1d8),0x3fc00000);
      lVar7 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar7 + 0x293) == '\x01') {
      uVar2 = FUN_1493c4390(param_1,&DAT_14cc11640,lVar7 + 0x10c);
      pbVar6 = (bool *)&local_58;
      local_58 = (undefined1 *)CONCAT71(local_58._1_7_,uVar2);
      local_78 = 3;
      FUN_1493c42a0(param_1,&DAT_14cc116d0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x108),0);
      local_78 = 3;
      FUN_1493c42a0(param_1,&DAT_14cc11310,(float)*(byte *)(param_1 + 0x31),0x40000000);
      pbVar8 = local_68;
      local_68[0] = true;
      puVar5 = &DAT_14cc11980;
    }
    else if (*(char *)(lVar7 + 0x291) == '\x01') {
      pbVar6 = (bool *)&local_58;
      local_58 = (undefined1 *)((ulonglong)local_58 & 0xffffffffffffff00);
      bVar1 = FUN_1493c4390(param_1,&DAT_14cc11320,lVar7 + 0xac);
      local_78 = 3;
      FUN_1493c42a0(param_1,&DAT_14cc113b0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa8),0);
      bVar3 = FUN_1493c4390(param_1,&DAT_14cc113c0,*(longlong *)(param_1 + 8) + 0xcc);
      local_78 = 3;
      FUN_1493c42a0(param_1,&DAT_14cc11450,*(undefined4 *)(*(longlong *)(param_1 + 8) + 200),0);
      bVar4 = FUN_1493c4390(param_1,&DAT_14cc11460,*(longlong *)(param_1 + 8) + 0xec);
      local_58 = (undefined1 *)CONCAT71(local_58._1_7_,bVar4 | bVar3 | bVar1);
      local_78 = 3;
      FUN_1493c42a0(param_1,&DAT_14cc114f0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0xe8),
                    0x3f800000);
      pbVar8 = local_68;
      local_68[0] = true;
      puVar5 = &DAT_14cc11960;
    }
    else {
      if (*(char *)(lVar7 + 0x292) != '\x01') goto LAB_1493bf2d0;
      bVar1 = FUN_1493c4390(param_1,&DAT_14cc11500,lVar7 + 0x140);
      lVar7 = *(longlong *)(param_1 + 8);
      fStack_50 = (float)*(double *)(lVar7 + 0x138);
      local_58 = (undefined1 *)
                 CONCAT44((float)*(double *)(lVar7 + 0x130),(float)*(double *)(lVar7 + 0x128));
      local_68[0] = false;
      local_68[1] = false;
      local_68[2] = false;
      local_68[3] = false;
      local_68[4] = false;
      local_68[5] = false;
      local_68[6] = false;
      local_68[7] = false;
      local_68[8] = false;
      local_68[9] = false;
      local_68[10] = false;
      local_68[0xb] = false;
      local_78 = 3;
      FUN_1493c4b00(param_1,&DAT_14cc11590,&local_58,local_68);
      bVar3 = FUN_1493c4390(param_1,&DAT_14cc115a0,*(longlong *)(param_1 + 8) + 0x160);
      local_78 = 3;
      local_68[0] = (bool)(bVar3 | bVar1);
      FUN_1493c42a0(param_1,&DAT_14cc11630,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x15c),0);
      pbVar8 = &local_59;
      local_59 = true;
      puVar5 = &DAT_14cc11970;
      pbVar6 = local_68;
    }
  }
  FUN_1493c4a76(param_1,puVar5,pbVar6,pbVar8);
LAB_1493bf2d0:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493bfba2 FUN_1493bfba2 body=98 status=ok
// SIG undefined FUN_1493bfba2(void)

int FUN_1493bfba2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((longlong)*(int *)(param_2 + 1) == 0) {
    iVar2 = -1;
  }
  else {
    piVar3 = (int *)*param_2;
    piVar1 = piVar3 + *(int *)(param_2 + 1);
    iVar5 = 0x7fffffff;
    iVar2 = -1;
    do {
      iVar6 = -1;
      iVar4 = *piVar3;
      do {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x98 + (longlong)iVar4 * 0x220);
        iVar6 = iVar6 + 1;
      } while (iVar4 != -1);
      if (iVar6 < iVar5) {
        iVar5 = iVar6;
        iVar2 = *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return iVar2;
}



// FUNCTION 1493bfc04 FUN_1493bfc04 body=623 status=ok
// SIG undefined FUN_1493bfc04(void)

void FUN_1493bfc04(longlong param_1,longlong param_2)

{
  void *_Src;
  uint uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
  }
  FUN_146f73238(lVar4 + 0x20,&local_58,DAT_14c99c688);
  if (0 < *(int *)(local_58 + 8)) {
    iVar6 = 0;
    pcVar5 = _wtoi_exref;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x80);
      }
      FUN_146f73238(lVar4 + 0x20,&local_60,DAT_14c99c688);
      plVar2 = (longlong *)(local_60 + 0x18);
      if (*(longlong **)(local_60 + 0x30) != (longlong *)0x0) {
        plVar2 = *(longlong **)(local_60 + 0x30);
      }
      FUN_1400021e4((longlong)((int)plVar2[2] * iVar6) * 8 + *plVar2,&local_58);
      puVar3 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar3 = local_58;
      }
      uVar1 = (*pcVar5)(puVar3);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_2 + 0xe8))) {
        local_58 = (undefined2 *)0x0;
        local_50 = *(int *)(*(longlong *)(param_2 + 0xe0) + 8 + (ulonglong)uVar1 * 0x370);
        lVar4 = (longlong)local_50;
        _Src = *(void **)(*(longlong *)(param_2 + 0xe0) + (ulonglong)uVar1 * 0x370);
        if (lVar4 == 0) {
          local_4c = 0;
LAB_1493bfd4c:
          puVar3 = &DAT_149dfb77a;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar4 * 2);
          puVar3 = local_58;
          if (local_50 == 0) goto LAB_1493bfd4c;
        }
        FUN_1446f470e(&local_60,puVar3,1);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
        if (lVar4 == 0) {
          lVar4 = *(longlong *)(param_1 + 0x80);
        }
        FUN_146f73238(lVar4 + 0x20,&local_68,DAT_14c99c688);
        plVar2 = (longlong *)(local_68 + 0x18);
        if (*(longlong **)(local_68 + 0x30) != (longlong *)0x0) {
          plVar2 = *(longlong **)(local_68 + 0x30);
        }
        *(longlong *)(*plVar2 + (longlong)((int)plVar2[2] * iVar6) * 8) = local_60;
        pcVar5 = _wtoi_exref;
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
          pcVar5 = _wtoi_exref;
        }
      }
      iVar6 = iVar6 + 1;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x80);
      }
      FUN_146f73238(lVar4 + 0x20,&local_58,DAT_14c99c688);
    } while (iVar6 < *(int *)(local_58 + 8));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493bfe74 FUN_1493bfe74 body=4161 status=ok
// SIG undefined FUN_1493bfe74(void)

ulonglong FUN_1493bfe74(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       longlong *param_5)

{
  undefined8 *puVar1;
  wchar_t wVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  wchar_t *pwVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 **ppuVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_628 [32];
  longlong *local_608;
  ulonglong local_5f8;
  longlong local_5f0;
  longlong local_5e8;
  ulonglong local_5e0;
  ulonglong local_5d8;
  undefined8 local_5d0;
  longlong *local_5c8;
  longlong local_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  wchar_t *local_5a8;
  undefined8 uStack_5a0;
  undefined1 *local_598;
  undefined8 local_590;
  undefined4 local_588;
  undefined4 local_584;
  longlong local_580;
  int local_578 [2];
  void *local_570;
  ulonglong uStack_568;
  undefined1 local_560;
  int local_53c;
  longlong local_538;
  undefined8 uStack_530;
  undefined1 local_528 [12];
  uint local_51c;
  longlong local_518;
  ulonglong uStack_510;
  undefined1 **local_508;
  undefined1 *local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined8 local_4e8;
  undefined4 local_4e0;
  longlong local_4d8;
  ulonglong uStack_4d0;
  undefined1 local_4c8;
  undefined8 local_4c7;
  undefined8 local_4b8;
  uint uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  int iStack_4a4;
  undefined1 local_4a0 [8];
  undefined1 *local_498;
  int local_490;
  char local_438;
  longlong local_428;
  undefined8 uStack_420;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3fc;
  int local_3f4;
  undefined1 local_3f0 [8];
  undefined1 *local_3e8;
  int local_3e0;
  longlong local_3d8;
  int local_3d0;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_628;
  local_518 = 0;
  uStack_510 = 0;
  local_5e8 = param_3;
  local_5d0 = param_4;
  FUN_1403de9f2(param_2,&local_518,&DAT_149e31048,1);
  lVar13 = local_518;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  local_51c = 0;
  if ((longlong)(int)uStack_510 != 0) {
    uVar11 = (longlong)(int)uStack_510 << 4;
    uVar14 = 0;
    local_5f8 = uVar11;
    do {
      pwVar8 = L"";
      if (*(int *)(lVar13 + 8 + uVar14) != 0) {
        pwVar8 = *(wchar_t **)(lVar13 + uVar14);
      }
      uVar5 = _wtoi(pwVar8);
      local_51c = uVar5 & 0xffff;
      if ((((int)local_51c < *(int *)(param_1 + 0x48)) && (iVar12 = (int)uVar5 >> 0x10, -1 < iVar12)
          ) && (iVar12 < *(int *)(param_1 + 0x98))) {
        plVar6 = (longlong *)FUN_140147222(&local_118,local_51c,&local_51c);
        iVar9 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar9 + 1U) {
          FUN_1446f48e2(plVar6,iVar9);
        }
        *(int *)(*plVar6 + (longlong)iVar9 * 4) = iVar12;
        uVar11 = local_5f8;
      }
      uVar14 = uVar14 + 0x10;
    } while (uVar11 != uVar14);
  }
  FUN_1493c7fb0(&local_118,&local_3d8);
  iVar12 = local_3d0;
  FUN_1493c825e(local_3d8,local_3d0);
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  if (iVar12 < 2) {
    FUN_1493c7fb0(&local_118,&local_3d8);
    FUN_1493c825e(local_3d8,local_3d0);
    if (local_3d8 != 0) {
      FUN_1400020a8();
    }
    if (local_3d0 != 0) {
      FUN_1458c1dca(&local_3d8);
      uVar11 = (longlong)(int)local_51c * 0xa8 + *(longlong *)(param_1 + 0x40);
      FUN_149312826(local_528);
      FUN_149312886(local_528,0x42c80000);
      local_608 = &local_4d8;
      local_4d8 = 0;
      uStack_4d0 = 0;
      FUN_14931287e(local_528,uVar11,local_5e8,&local_3d8);
      if (local_4d8 != 0) {
        FUN_1400020a8();
      }
      FUN_1493bfc04(&local_3d8);
      local_538 = 0;
      uStack_530 = 0;
      lVar13 = 0;
      local_408 = 0;
      local_400 = 0;
      local_428 = 0;
      uStack_420 = 0;
      local_3fc = 0xffffffff00000080;
      local_3f4 = 0;
      local_3e8 = (undefined1 *)0x0;
      local_3e0 = 0;
      if ((int)uStack_110 != local_e4) {
        puVar7 = local_d8;
        if (local_d8 == (undefined1 *)0x0) {
          puVar7 = local_e0;
        }
        iVar12 = *(int *)(puVar7 + (ulonglong)(local_d0 - 1U & local_51c) * 4);
        while (iVar12 != -1) {
          lVar13 = local_118 + (longlong)iVar12 * 0x20;
          if (*(uint *)(local_118 + (longlong)iVar12 * 0x20) == local_51c) goto LAB_1493c0229;
          iVar12 = *(int *)(lVar13 + 0x18);
        }
        lVar13 = 0;
      }
LAB_1493c0229:
      bVar21 = false;
      local_5f8 = param_1;
      local_5f0 = lVar13;
      if (*(int *)(lVar13 + 0x10) != 0) {
        uVar14 = 0;
        local_5e0 = uVar11;
        do {
          uVar11 = uStack_530;
          lVar17 = (longlong)(int)(uint)uStack_530;
          uVar5 = (uint)uStack_530 + 1;
          uStack_530 = CONCAT44(uStack_530._4_4_,uVar5);
          if (uStack_530._4_4_ < uVar5) {
            FUN_1493c828e(&local_538,uVar11 & 0xffffffff);
          }
          lVar17 = lVar17 * 0x2c0 + local_538;
          FUN_146f6bfa8(lVar17);
          local_53c = *(int *)(*(longlong *)(lVar13 + 8) + (longlong)(int)uVar14 * 4);
          uVar11 = (ulonglong)local_53c;
          if (uVar11 != 0xffffffffffffffff) {
            lVar13 = *(longlong *)(local_5f8 + 0x90);
            local_5d8 = uVar14;
            local_5c0 = lVar17;
            FUN_146fa70f0(local_578);
            FUN_146fa740c(local_578,0);
            local_4b8 = 0;
            uStack_4b0 = 0;
            local_4d8 = 0;
            uStack_4d0 = 0;
            uStack_4ac = 0x80;
            uStack_4a8 = 0xffffffff;
            iStack_4a4 = 0;
            local_498 = (undefined1 *)0x0;
            local_490 = 0;
            FUN_146fa78ae(local_578,&local_580,0);
            local_5c8 = (longlong *)FUN_149312890(local_528);
            plVar6 = (longlong *)FUN_1493c8322(&local_428,local_53c,&local_53c);
            if (*(int *)(lVar13 + 0x20 + uVar11 * 0x98) != 0) {
              lVar13 = lVar13 + uVar11 * 0x98;
              plVar19 = (longlong *)(lVar13 + 0x18);
              lVar17 = 0;
              uVar11 = 0;
              do {
                puVar16 = (undefined8 *)
                          ((longlong)*(int *)(*plVar19 + (lVar17 >> 0x1e)) * 0x220 +
                          *(longlong *)(local_5f8 + 0x60));
                iVar12 = (int)param_5[1];
                *(uint *)(param_5 + 1) = iVar12 + 1U;
                if (*(uint *)((longlong)param_5 + 0xc) < iVar12 + 1U) {
                  FUN_1447a1bd6(param_5,iVar12);
                }
                lVar18 = *param_5;
                lVar20 = (longlong)iVar12 * 0x10;
                puVar1 = (undefined8 *)(lVar18 + lVar20);
                *(undefined8 *)(lVar18 + lVar20) = 0;
                iVar12 = *(int *)(puVar16 + 1);
                pvVar3 = (void *)*puVar16;
                *(int *)(lVar18 + 8 + lVar20) = iVar12;
                if ((longlong)iVar12 == 0) {
                  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(puVar1,iVar12,0);
                  memcpy((void *)*puVar1,pvVar3,(longlong)iVar12 * 2);
                }
                puVar16 = (undefined8 *)
                          ((longlong)*(int *)(*plVar19 + (lVar17 >> 0x20) * 4) * 0x220 +
                          *(longlong *)(local_5f8 + 0x60));
                iVar12 = (int)plVar6[1];
                *(uint *)(plVar6 + 1) = iVar12 + 1U;
                if (*(uint *)((longlong)plVar6 + 0xc) < iVar12 + 1U) {
                  FUN_1447a1bd6(plVar6,iVar12);
                }
                lVar18 = *plVar6;
                lVar20 = (longlong)iVar12 * 0x10;
                puVar1 = (undefined8 *)(lVar18 + lVar20);
                *(undefined8 *)(lVar18 + lVar20) = 0;
                iVar12 = *(int *)(puVar16 + 1);
                pvVar3 = (void *)*puVar16;
                *(int *)(lVar18 + 8 + lVar20) = iVar12;
                if ((longlong)iVar12 == 0) {
                  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(puVar1,iVar12,0);
                  memcpy((void *)*puVar1,pvVar3,(longlong)iVar12 * 2);
                }
                uVar11 = uVar11 + 1;
                lVar17 = lVar17 + 0x100000000;
              } while (uVar11 < (ulonglong)(longlong)*(int *)(lVar13 + 0x20));
            }
            if (0 < *(int *)(local_5e0 + 0x18)) {
              lVar13 = 0;
              uVar11 = local_5e0;
              do {
                local_5a8 = (wchar_t *)0x0;
                uStack_5a0 = (undefined1 **)0x0;
                local_5e8 = lVar13;
                FUN_14931b296(lVar13 * 0xa0 + *(longlong *)(uVar11 + 0x10),&local_5a8);
                if (0 < (int)uStack_5a0) {
                  plVar6 = (longlong *)(lVar13 * 0x50 + *local_5c8);
                  uVar14 = 0;
                  iVar12 = (int)uStack_5a0;
LAB_1493c0422:
                  if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
                    plVar19 = (longlong *)plVar6[8];
                    if ((longlong *)plVar6[8] == (longlong *)0x0) {
                      plVar19 = plVar6 + 7;
                    }
                    iVar9 = *(int *)((longlong)plVar19 +
                                    (ulonglong)((uint)uVar14 & (int)plVar6[9] + 0x7fffffffU) * 4);
                    if (iVar9 != -1) {
                      do {
                        lVar13 = *plVar6 + (longlong)iVar9 * 0x10;
                        if (uVar14 == *(uint *)(*plVar6 + (longlong)iVar9 * 0x10)) {
                          ppuVar15 = (undefined1 **)(lVar13 + 4);
                          if (ppuVar15 != (undefined1 **)0x0 && lVar13 != 0) {
                            uVar5 = *(uint *)ppuVar15;
                            lVar13 = *(longlong *)(*(longlong *)(local_5c0 + 0x50) + 0x80);
                            if (lVar13 == 0) {
                              lVar13 = *(longlong *)(local_5c0 + 0x50);
                            }
                            if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar13 + 0x18))) {
                              lVar17 = *(longlong *)(lVar13 + 0x10);
                              if (*(longlong *)(lVar13 + 0x10) == 0) {
                                lVar17 = lVar13;
                              }
                              if ((*(uint *)(lVar17 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f)
                                  & 1) != 0) {
                                lVar13 = 0;
                                goto LAB_1493c04dd;
                              }
                            }
                          }
                          break;
                        }
                        iVar9 = *(int *)(lVar13 + 8);
                      } while (iVar9 != -1);
                    }
                  }
                  goto LAB_1493c042e;
                }
LAB_1493c06c9:
                if (local_5a8 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                lVar13 = local_5e8 + 1;
              } while (lVar13 < *(int *)(uVar11 + 0x18));
            }
            local_508 = (undefined1 **)&DAT_100000000;
            local_4f8 = 0xffffffff;
            local_4f0 = 0;
            uVar11 = 0;
            local_500 = &local_4c8;
            if (uStack_4b0 != 0) {
              FUN_1449c0562(&local_508);
              uVar11 = (ulonglong)uStack_4b0;
            }
            lVar13 = local_5f0;
            local_590 = local_4f8;
            uVar4 = local_590;
            local_588 = local_4f0;
            local_584 = local_4ec;
            uStack_5a0 = local_508;
            local_598 = local_500;
            local_590._4_4_ = (int)((ulonglong)local_4f8 >> 0x20);
            iVar12 = local_590._4_4_;
            local_5a8 = (wchar_t *)&local_4d8;
            if ((local_590._4_4_ != (int)uVar11) || (local_590 = uVar4, local_500 != &local_4c8)) {
              do {
                local_590 = uVar4;
                lVar17 = *(longlong *)local_5a8;
                lVar18 = (longlong)iVar12 * 0x20;
                local_5b8 = 0xc00000002;
                uStack_5b0 = 0x10000000001;
                local_4e8 = *(undefined8 *)(lVar17 + 8 + lVar18);
                local_4e0 = *(undefined4 *)(lVar17 + 0x10 + lVar18);
                local_500 = (undefined1 *)(local_580 + 0x18);
                if (*(undefined1 **)(local_580 + 0x30) != (undefined1 *)0x0) {
                  local_500 = *(undefined1 **)(local_580 + 0x30);
                }
                local_4f8 = CONCAT44(local_4f8._4_4_,*(undefined4 *)(lVar17 + lVar18));
                local_508 = &local_500;
                FUN_146fa8de4(&local_508,&local_4e8,&local_5b8);
                local_590 = CONCAT44(local_590._4_4_,(uint)local_590 & ~uStack_5a0._4_4_);
                FUN_1449c0562(&uStack_5a0);
                iVar12 = local_590._4_4_;
                uVar4 = local_590;
              } while (local_5a8 != (wchar_t *)&local_4d8 ||
                       (local_598 != &local_4c8 || local_590._4_4_ != (int)uVar11));
            }
            local_490 = 0;
            if (local_498 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1493c4d9a(&local_4d8);
            uVar14 = local_5d8;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < (ulonglong)(longlong)*(int *)(lVar13 + 0x10));
        bVar21 = 1 < (uint)uStack_530;
      }
      local_4d8 = 0;
      uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
      local_4c8 = 1;
      local_438 = '\0';
      local_4b8 = 0;
      uStack_4b0 = 0;
      uStack_4ac = 0;
      uStack_4a8 = 0;
      iStack_4a4 = 0;
      local_4c7 = 0x101010101010101;
      if (bVar21) {
        uVar14 = 1;
        do {
          lVar13 = *(longlong *)(*(longlong *)(local_538 + 0x50) + 0x80);
          if (lVar13 == 0) {
            lVar13 = *(longlong *)(local_538 + 0x50);
          }
          local_578[0] = *(int *)(lVar13 + 0x18) - *(int *)(lVar13 + 0x78);
          local_570 = (void *)0x0;
          local_560 = 0;
          uVar11 = (ulonglong)(int)uVar14;
          if ((int)uStack_420 != local_3f4) {
            uVar5 = *(uint *)(*(longlong *)(local_5f0 + 8) + uVar11 * 4);
            puVar7 = local_3e8;
            if (local_3e8 == (undefined1 *)0x0) {
              puVar7 = local_3f0;
            }
            iVar12 = *(int *)(puVar7 + (ulonglong)(local_3e0 - 1U & uVar5) * 4);
            while (iVar12 != -1) {
              lVar13 = local_428 + (longlong)iVar12 * 0x20;
              if (*(uint *)(local_428 + (longlong)iVar12 * 0x20) == uVar5) goto LAB_1493c0b0f;
              iVar12 = *(int *)(lVar13 + 0x18);
            }
          }
          lVar13 = 0;
LAB_1493c0b0f:
          uVar5 = *(uint *)(lVar13 + 0x10);
          lVar13 = (longlong)(int)uVar5;
          uStack_568 = (ulonglong)uVar5;
          if (lVar13 != 0) {
            FUN_14488eebe(&local_570);
            memset(local_570,0,lVar13 * 2);
            if (0 < (int)uVar5) {
              lVar17 = 0;
              local_5f8 = uVar11;
              do {
                *(short *)((longlong)local_570 + lVar17 * 2) = (short)lVar17;
                if ((int)uStack_420 != local_3f4) {
                  uVar5 = *(uint *)(*(longlong *)(local_5f0 + 8) + local_5f8 * 4);
                  puVar7 = local_3e8;
                  if (local_3e8 == (undefined1 *)0x0) {
                    puVar7 = local_3f0;
                  }
                  iVar12 = *(int *)(puVar7 + (ulonglong)(local_3e0 - 1U & uVar5) * 4);
                  while (iVar12 != -1) {
                    lVar18 = local_428 + (longlong)iVar12 * 0x20;
                    if (*(uint *)(local_428 + (longlong)iVar12 * 0x20) == uVar5) goto LAB_1493c0c4c;
                    iVar12 = *(int *)(lVar18 + 0x18);
                  }
                }
                lVar18 = 0;
LAB_1493c0c4c:
                if (0 < (int)param_5[1]) {
                  puVar16 = (undefined8 *)(lVar17 * 0x10 + *(longlong *)(lVar18 + 8));
                  lVar18 = 8;
                  lVar20 = 0;
                  do {
                    local_5a8 = (wchar_t *)0x0;
                    uVar5 = *(uint *)(*param_5 + lVar18);
                    pvVar3 = *(void **)(*param_5 + -8 + lVar18);
                    uStack_5a0 = (undefined1 **)CONCAT44(uStack_5a0._4_4_,uVar5);
                    if ((longlong)(int)uVar5 == 0) {
                      uStack_5a0 = (undefined1 **)(ulonglong)uVar5;
                      iVar12 = *(int *)(puVar16 + 1);
                      iVar9 = 0;
                      if (iVar12 != 0) goto LAB_1493c0d07;
LAB_1493c0dad:
                      *(short *)((longlong)local_570 + lVar17 * 2) = (short)lVar20;
                      if (local_5a8 != (wchar_t *)0x0) {
                        FUN_1400020a8();
                      }
                      break;
                    }
                    FUN_1446dd670(&local_5a8,uVar5,0);
                    memcpy(local_5a8,pvVar3,(longlong)(int)uVar5 * 2);
                    pwVar8 = local_5a8;
                    iVar12 = *(int *)(puVar16 + 1);
                    iVar9 = (int)uStack_5a0;
                    if ((int)uStack_5a0 == iVar12) {
                      if (((int)uStack_5a0 < 2) ||
                         (iVar12 = wcscmp(local_5a8,(wchar_t *)*puVar16), iVar12 == 0))
                      goto LAB_1493c0dad;
                    }
                    else {
LAB_1493c0d07:
                      pwVar8 = local_5a8;
                      if (iVar12 + iVar9 == 1) goto LAB_1493c0dad;
                    }
                    if (pwVar8 != (wchar_t *)0x0) {
                      FUN_1400020a8();
                    }
                    lVar20 = lVar20 + 1;
                    lVar18 = lVar18 + 0x10;
                  } while (lVar20 < (int)param_5[1]);
                }
                lVar17 = lVar17 + 1;
                uVar11 = local_5f8;
              } while (lVar17 != lVar13);
            }
          }
          FUN_146fa0ae2(local_538 + uVar11 * 0x2c0,local_538,&local_4d8);
          FUN_142ab5754(uVar11 * 0x2c0 + local_538,local_538,local_578);
          if (local_570 != (void *)0x0) {
            FUN_1400020a8();
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < (ulonglong)(longlong)(int)(uint)uStack_530);
      }
      FUN_146f6c7b4(local_5d0,local_538);
      if (local_438 == '\x01') {
        local_438 = '\0';
      }
      FUN_1449db362(&local_4d8);
      local_3e0 = 0;
      if (local_3e8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1493c4f08(&local_428);
      FUN_145cb3fa6(local_538,uStack_530 & 0xffffffff);
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_149312856(local_528);
      FUN_145838e00(&local_3d8);
      uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
      goto LAB_1493c004e;
    }
  }
  uVar11 = 0;
LAB_1493c004e:
  local_d0 = 0;
  if (local_d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(&local_118);
  FUN_1447a1747(local_518,uStack_510 & 0xffffffff);
  if (local_518 != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_628) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1493c04dd:
  fVar22 = (float)*(double *)(local_5a8 + uVar14 * 0x18 + lVar13 * 4);
  wVar2 = local_5a8[uVar14 * 0x18 + lVar13 + 0x10];
  if ((int)uStack_4d0 != iStack_4a4) {
    puVar7 = local_498;
    if (local_498 == (undefined1 *)0x0) {
      puVar7 = local_4a0;
    }
    iVar12 = *(int *)(puVar7 + (ulonglong)(local_490 - 1U & *(uint *)ppuVar15) * 4);
    while (iVar12 != -1) {
      lVar17 = local_4d8 + (longlong)iVar12 * 0x20;
      if (*(uint *)(local_4d8 + (longlong)iVar12 * 0x20) == *(uint *)ppuVar15) {
        if ((lVar17 != 0) && (plVar19 = (longlong *)(lVar17 + 8), plVar19 != (longlong *)0x0)) {
          iVar12 = *(int *)(lVar17 + 0x10);
          lVar18 = (longlong)iVar12;
          if (lVar18 < 1) goto LAB_1493c060e;
          lVar20 = *plVar19;
          lVar10 = 0;
          goto LAB_1493c0600;
        }
        break;
      }
      iVar12 = *(int *)(lVar17 + 0x18);
    }
  }
  local_508 = ppuVar15;
  FUN_1493c88f8(&local_4d8,&local_4e8,&local_508);
  lVar17 = local_4d8 + (longlong)(int)local_4e8 * 0x20;
  if (1.0 <= fVar22) {
    fVar22 = 1.0;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  iVar12 = *(int *)(lVar17 + 0x10);
  *(uint *)(lVar17 + 0x10) = iVar12 + 1U;
  if (*(uint *)(lVar17 + 0x14) < iVar12 + 1U) {
    FUN_146faa9c8((longlong *)(lVar17 + 8),iVar12);
  }
  *(uint *)(*(longlong *)(lVar17 + 8) + (longlong)iVar12 * 4) =
       (int)(fVar22 * 65535.0 + 0.5) << 0x10 | (uint)(ushort)wVar2;
  goto LAB_1493c063f;
  while (lVar10 = lVar10 + 1, lVar18 != lVar10) {
LAB_1493c0600:
    if (*(wchar_t *)(lVar20 + lVar10 * 4) == wVar2) {
      if ((float)*(ushort *)(lVar20 + 2 + lVar10 * 4) / 65535.0 < fVar22) {
        if (1.0 <= fVar22) {
          fVar22 = 1.0;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        *(short *)(lVar20 + 2 + lVar10 * 4) = (short)(int)(fVar22 * 65535.0 + 0.5);
      }
      goto LAB_1493c063f;
    }
  }
LAB_1493c060e:
  if (1.0 <= fVar22) {
    fVar22 = 1.0;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  *(uint *)(lVar17 + 0x10) = iVar12 + 1U;
  if (*(uint *)(lVar17 + 0x14) < iVar12 + 1U) {
    FUN_146faa9c8(plVar19,iVar12);
  }
  *(uint *)(*plVar19 + lVar18 * 4) = (int)(fVar22 * 65535.0 + 0.5) << 0x10 | (uint)(ushort)wVar2;
LAB_1493c063f:
  lVar13 = lVar13 + 1;
  if (lVar13 == 4) goto LAB_1493c06aa;
  goto LAB_1493c04dd;
LAB_1493c06aa:
  uVar11 = local_5e0;
  iVar12 = (int)uStack_5a0;
LAB_1493c042e:
  uVar14 = uVar14 + 1;
  if ((longlong)iVar12 <= (longlong)uVar14) goto LAB_1493c06c9;
  goto LAB_1493c0422;
}



// FUNCTION 1493c0eb6 FUN_1493c0eb6 body=413 status=ok
// SIG undefined FUN_1493c0eb6(void)

ulonglong FUN_1493c0eb6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_1403de9f2(param_2,&local_48,&DAT_149e31048,1);
  if ((int)uStack_40 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    goto LAB_1493c0f9b;
  }
  if (*(int *)(local_48 + 1) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)*local_48;
  }
  uVar1 = _wtoi(pwVar2);
  uVar4 = 0;
  uVar3 = uStack_40 & 0xffffffff;
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar1)) goto LAB_1493c0f9b;
  lVar5 = (ulonglong)uVar1 * 0xa8 + *(longlong *)(param_1 + 0x40);
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uStack_40 == 2) {
    if (*(int *)(local_48 + 3) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)local_48[2];
    }
    uVar1 = _wtoi(pwVar2);
    uVar4 = (ulonglong)uVar1;
    FUN_144aa29e6(&local_58,*(undefined4 *)(lVar5 + 0x38),1);
    if ((int)uVar1 < (int)uStack_50) {
      *(undefined4 *)(local_58 + (longlong)(int)uVar1 * 4) = 0x3f800000;
      goto LAB_1493c1001;
    }
    uVar4 = 0;
  }
  else {
LAB_1493c1001:
    FUN_149312826(local_60);
    FUN_149312886(local_60,0x42c80000);
    local_68 = &local_58;
    FUN_14931287e(local_60,lVar5,param_3,param_4);
    FUN_1493bfc04(param_4,param_1);
    FUN_149312856(local_60);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar3 = uStack_40 & 0xffffffff;
LAB_1493c0f9b:
  FUN_1447a1747(local_48,uVar3);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c105c FUN_1493c105c body=45 status=ok
// SIG undefined FUN_1493c105c(void)

longlong FUN_1493c105c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145d319b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c1090 FUN_1493c1090 body=115 status=ok
// SIG undefined FUN_1493c1090(void)

undefined8 FUN_1493c1090(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0xffffffff00000000;
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4,&local_28);
  if ((iStack_1c != -1) && (local_28 != 0)) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c1110 FUN_1493c1110 body=137 status=ok
// SIG undefined FUN_1493c1110(void)

undefined8 FUN_1493c1110(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  undefined8 local_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  local_20 = 0xffffffff00000000;
  local_38[0] = 0;
  local_38[1] = 0;
  (**(code **)(*param_1 + 0x28))(0,param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((iStack_1c != -1) && (local_38[2] != 0)) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c119a FUN_1493c119a body=45 status=ok
// SIG undefined FUN_1493c119a(void)

longlong FUN_1493c119a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145d319b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c11ce FUN_1493c11ce body=45 status=ok
// SIG undefined FUN_1493c11ce(void)

longlong FUN_1493c11ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x48;
  FUN_145d319b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c1206 FUN_1493c1206 body=56 status=ok
// SIG undefined FUN_1493c1206(void)

void FUN_1493c1206(longlong *param_1)

{
  FUN_1493bcc12(param_1 + 5);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493c123e FUN_1493c123e body=56 status=ok
// SIG undefined FUN_1493c123e(void)

void FUN_1493c123e(longlong *param_1)

{
  FUN_1493ba244(param_1 + 5);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493c1276 FUN_1493c1276 body=38 status=ok
// SIG undefined FUN_1493c1276(void)

void FUN_1493c1276(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493babe0(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 1493c129c FUN_1493c129c body=79 status=ok
// SIG undefined FUN_1493c129c(void)

void FUN_1493c129c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &DAT_14a176f00;
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1493c12ec FUN_1493c12ec body=166 status=ok
// SIG undefined FUN_1493c12ec(void)

undefined8 * FUN_1493c12ec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1493c1392 FUN_1493c1392 body=119 status=ok
// SIG undefined FUN_1493c1392(void)

void FUN_1493c1392(longlong param_1)

{
  undefined1 auStack_58 [39];
  undefined4 local_31;
  undefined4 uStack_2d;
  undefined4 uStack_29;
  undefined4 uStack_25;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 0;
  }
  if (1 < *(int *)(param_1 + 0x30)) {
    FUN_14681a10c(&local_31,*(undefined8 *)(param_1 + 0x28),0);
    if (&local_31 != (undefined4 *)(param_1 + 0x38)) {
      *(undefined1 *)(param_1 + 0x48) = local_21;
      *(undefined4 *)(param_1 + 0x38) = local_31;
      *(undefined4 *)(param_1 + 0x3c) = uStack_2d;
      *(undefined4 *)(param_1 + 0x40) = uStack_29;
      *(undefined4 *)(param_1 + 0x44) = uStack_25;
      *(undefined1 *)(param_1 + 0x49) = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c140a FUN_1493c140a body=38 status=ok
// SIG undefined FUN_1493c140a(void)

void FUN_1493c140a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493ba244(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1493c1430 FUN_1493c1430 body=71 status=ok
// SIG undefined FUN_1493c1430(void)

undefined8 * FUN_1493c1430(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bca7d90;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c1478 FUN_1493c1478 body=191 status=ok
// SIG undefined FUN_1493c1478(void)

undefined8 * FUN_1493c1478(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc12228) {
    FUN_144b3d300(&DAT_14cc12228);
    if (DAT_14cc12228 == -1) {
      FUN_140056680(&DAT_14cc12218,L"LoadSource");
      atexit((_func_5014 *)&LAB_1444e5734);
      _Init_thread_footer(&DAT_14cc12228);
    }
  }
  *param_2 = 0;
  iVar1 = DAT_14cc12220;
  _Src = DAT_14cc12218;
  lVar2 = (longlong)DAT_14cc12220;
  *(int *)(param_2 + 1) = DAT_14cc12220;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  return param_2;
}



// FUNCTION 1493c1538 FUN_1493c1538 body=83 status=ok
// SIG undefined FUN_1493c1538(void)

undefined8 * FUN_1493c1538(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1493c158c FUN_1493c158c body=71 status=ok
// SIG undefined FUN_1493c158c(void)

undefined8 * FUN_1493c158c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bca7dd0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c15d4 FUN_1493c15d4 body=191 status=ok
// SIG undefined FUN_1493c15d4(void)

undefined8 * FUN_1493c15d4(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc12240) {
    FUN_144b3d300(&DAT_14cc12240);
    if (DAT_14cc12240 == -1) {
      FUN_140056680(&DAT_14cc12230,L"Payload");
      atexit((_func_5014 *)&LAB_1444e5745);
      _Init_thread_footer(&DAT_14cc12240);
    }
  }
  *param_2 = 0;
  iVar1 = DAT_14cc12238;
  _Src = DAT_14cc12230;
  lVar2 = (longlong)DAT_14cc12238;
  *(int *)(param_2 + 1) = DAT_14cc12238;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  return param_2;
}



// FUNCTION 1493c1694 FUN_1493c1694 body=83 status=ok
// SIG undefined FUN_1493c1694(void)

undefined8 * FUN_1493c1694(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1493c16e8 FUN_1493c16e8 body=71 status=ok
// SIG undefined FUN_1493c16e8(void)

undefined8 * FUN_1493c16e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bca7dd0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c1730 FUN_1493c1730 body=38 status=ok
// SIG undefined FUN_1493c1730(void)

undefined8 FUN_1493c1730(undefined8 param_1,int param_2)

{
  FUN_1493be18a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c1756 FUN_1493c1756 body=2232 status=ok
// SIG undefined FUN_1493c1756(void)

void FUN_1493c1756(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined1 *local_190;
  ulonglong local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170 [2];
  longlong local_160 [2];
  longlong local_150 [2];
  longlong local_140 [2];
  undefined1 local_130;
  undefined7 uStack_12f;
  void *local_120;
  int local_118;
  undefined4 local_114;
  undefined1 local_110;
  longlong local_108;
  ulonglong uStack_100;
  longlong local_f8 [3];
  longlong *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  longlong lStack_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_1444e5756();
  plVar1 = param_2 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
  uStack_b0 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar11 = (int)param_2[5];
  }
  local_78 = local_a8;
  iStack_74 = iStack_a4;
  lStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = param_2;
  if ((iStack_a4 != iVar11) || (uStack_b0 != plVar1)) {
    do {
      plVar6 = (longlong *)param_1[4];
      if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
        uVar3 = (longlong)*(int *)(*local_90 + (longlong)iStack_74 * 0x60) * 0x220 +
                *(longlong *)param_1[3];
        uVar7 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        plVar10 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar6[8];
        }
        iVar8 = *(int *)((longlong)plVar10 +
                        (ulonglong)((int)plVar6[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        if (iVar8 != -1) {
          lVar12 = *local_90 + (longlong)iStack_74 * 0x60;
          do {
            lVar5 = *plVar6 + (longlong)iVar8 * 0x20;
            if (*(ulonglong *)(*plVar6 + (longlong)iVar8 * 0x20) == uVar3) {
              if (lVar5 != -8 && lVar5 != 0) {
                local_b8 = 0;
                uStack_b0 = (longlong *)0x403e000000000000;
                local_a8 = 0x11111111;
                iStack_a4 = 0x3fa11111;
                uStack_a0 = 0x3fa1111111111111;
                local_98 = 0;
                local_178 = FUN_1493c2e8a(param_1);
                uVar3 = lVar12 + 0x18;
                local_68 = (undefined1 *)0x100000000;
                local_58 = 0xffffffff;
                local_50 = 0;
                local_60 = uVar3;
                if (*(int *)(lVar12 + 0x30) != 0) {
                  FUN_1449c0562(&local_68);
                }
                local_198 = (longlong *)(lVar12 + 8);
                local_c8 = local_58;
                local_c0 = local_50;
                local_bc = local_4c;
                local_d8 = local_68;
                local_d0 = local_60;
                uVar7 = *(uint *)(lVar12 + 0x30);
                local_68 = (undefined1 *)CONCAT44(1 << ((byte)uVar7 & 0x1f),(int)uVar7 >> 5);
                local_58 = CONCAT44(uVar7,-1 << ((byte)uVar7 & 0x1f));
                local_50 = uVar7 & 0xffffffe0;
                local_e0 = local_198;
                local_60 = uVar3;
                if (*(uint *)(lVar12 + 0x30) != uVar7) {
                  FUN_1449c0562(&local_68);
                  uVar7 = local_58._4_4_;
                }
                uVar3 = local_60;
                if (local_e0 != local_198 || (local_d0 != local_60 || local_c8._4_4_ != uVar7)) {
                  do {
                    plVar6 = (longlong *)param_1[4];
                    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
                      uVar4 = (longlong)*(int *)(*local_e0 + (longlong)(int)local_c8._4_4_ * 0x60) *
                              0x220 + *(longlong *)param_1[3];
                      uVar9 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
                      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                      plVar10 = plVar6 + 7;
                      if ((longlong *)plVar6[8] != (longlong *)0x0) {
                        plVar10 = (longlong *)plVar6[8];
                      }
                      iVar8 = *(int *)((longlong)plVar10 +
                                      (ulonglong)((int)plVar6[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4
                                      );
                      if (iVar8 != -1) {
                        do {
                          lVar12 = *plVar6 + (longlong)iVar8 * 0x20;
                          if (*(ulonglong *)(*plVar6 + (longlong)iVar8 * 0x20) == uVar4) {
                            if ((lVar12 != -8 && lVar12 != 0) &&
                               (local_1a8 = *local_e0 + (longlong)(int)local_c8._4_4_ * 0x60,
                               lVar12 = FUN_1492f2ba8(*param_1), lVar12 != 0)) {
                              lVar5 = FUN_1459238a6();
                              if ((*(int *)(lVar5 + 0x38) <=
                                   *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                                   (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                                local_f8[0] = 0;
                                local_f8[1] = 0;
                                cVar2 = FUN_14933ff3c(lVar12);
                                if ((cVar2 != '\0') &&
                                   (lVar12 = FUN_1492f2ba8(*param_1,local_f8), lVar12 != 0)) {
                                  lVar5 = FUN_14599b312();
                                  if ((*(int *)(lVar5 + 0x38) <=
                                       *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                                       (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                                    local_108 = 0;
                                    uStack_100 = 0;
                                    FUN_14933cb5a(lVar12,&local_108);
                                    if ((longlong)(int)uStack_100 == 0) {
                                      uVar4 = 0;
                                    }
                                    else {
                                      local_188 = local_1a8 + 0x18;
                                      lVar5 = (longlong)(int)uStack_100 << 4;
                                      lVar12 = local_108;
                                      do {
                                        local_1a0 = lVar12;
                                        local_180 = lVar5;
                                        plVar6 = (longlong *)FUN_1492f2ba8(*param_1,lVar12);
                                        if (plVar6 != (longlong *)0x0) {
                                          lVar12 = FUN_14599b312();
                                          if ((*(int *)(lVar12 + 0x38) <= *(int *)(plVar6[2] + 0x38)
                                              ) && (*(longlong *)
                                                     (*(longlong *)(plVar6[2] + 0x30) +
                                                     (longlong)*(int *)(lVar12 + 0x38) * 8) ==
                                                    lVar12 + 0x30)) {
                                            (**(code **)(*plVar6 + 0x2e8))(plVar6,&local_68);
                                            if ((char)local_50 == '\x01') {
                                              if (local_68 != (undefined1 *)0x0) {
                                                FUN_1400020a8();
                                              }
                                              (**(code **)(*plVar6 + 0x2e8))(plVar6);
                                              local_120 = (void *)0x0;
                                              lVar12 = (longlong)(int)local_60;
                                              local_118 = (int)local_60;
                                              if (lVar12 == 0) {
                                                local_114 = 0;
                                              }
                                              else {
                                                local_190 = local_68;
                                                FUN_1446dd670(&local_120,local_60 & 0xffffffff,0);
                                                memcpy(local_120,local_190,lVar12 * 2);
                                              }
                                              local_110 = (undefined1)local_58;
                                              if (((char)local_50 == '\x01') &&
                                                 (local_68 != (undefined1 *)0x0)) {
                                                FUN_1400020a8();
                                              }
                                              local_68 = &DAT_100000000;
                                              local_60 = local_188;
                                              local_58 = 0xffffffff;
                                              local_50 = 0;
                                              if (*(int *)(local_1a8 + 0x30) == 0) {
                                                local_58._4_4_ = 0;
                                              }
                                              else {
                                                FUN_1449c0562(&local_68);
                                              }
                                              FUN_140002266(local_150,&DAT_149e063bc,
                                                            *(undefined4 *)
                                                             (*(longlong *)(local_1a8 + 8) +
                                                             (longlong)(int)local_58._4_4_ * 0xc));
                                              FUN_140002266(local_170,&DAT_149e063bc,
                                                            *(undefined4 *)(param_1 + 1));
                                              FUN_144a882a8(local_160,local_170,&DAT_149e31048);
                                              FUN_1401c7f3e(local_140,local_160,local_150);
                                              FUN_144a882a8(&local_130,local_140,&DAT_149e31048);
                                              FUN_144a7dea0(&local_68,&local_130,&local_120);
                                              if (CONCAT71(uStack_12f,local_130) != 0) {
                                                FUN_1400020a8();
                                              }
                                              if (local_140[0] != 0) {
                                                FUN_1400020a8();
                                              }
                                              if (local_160[0] != 0) {
                                                FUN_1400020a8();
                                              }
                                              if (local_170[0] != 0) {
                                                FUN_1400020a8();
                                              }
                                              if (local_150[0] != 0) {
                                                FUN_1400020a8();
                                              }
                                              local_130 = 2;
                                              FUN_149339084(local_178,local_1a0,&local_68);
                                              if (local_68 != (undefined1 *)0x0) {
                                                FUN_1400020a8();
                                              }
                                              if (local_120 != (void *)0x0) {
                                                FUN_1400020a8();
                                              }
                                            }
                                          }
                                        }
                                        lVar12 = local_1a0 + 0x10;
                                        lVar5 = local_180 + -0x10;
                                      } while (lVar5 != 0);
                                      uVar4 = uStack_100 & 0xffffffff;
                                    }
                                    FUN_1447a1747(local_108,uVar4);
                                    if (local_108 != 0) {
                                      FUN_1400020a8();
                                    }
                                  }
                                }
                                if (local_f8[0] != 0) {
                                  FUN_1400020a8();
                                }
                              }
                            }
                            break;
                          }
                          iVar8 = *(int *)(lVar12 + 0x18);
                        } while (iVar8 != -1);
                      }
                    }
                    local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
                    FUN_1449c0562(&local_d8);
                  } while (local_e0 != local_198 || (local_d0 != uVar3 || local_c8._4_4_ != uVar7));
                }
              }
              break;
            }
            iVar8 = *(int *)(lVar5 + 0x18);
          } while (iVar8 != -1);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493c2010 FUN_1493c2010 body=1576 status=ok
// SIG undefined FUN_1493c2010(void)

void FUN_1493c2010(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_178 [32];
  longlong *local_158;
  uint local_14c;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  int *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_dc;
  longlong local_d8 [3];
  longlong local_c0 [2];
  longlong local_b0 [2];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong lStack_80;
  longlong local_78 [2];
  undefined8 local_68;
  int *local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar8 = FUN_1493c39d1(*param_1);
    FUN_140b1283a(local_78,L"\\Animation\\",param_1[2] + 0x80);
    local_140 = uVar8;
    FUN_1444ba64e(uVar8,local_78,param_1[2],2);
    plVar1 = param_2 + 2;
    local_108 = (longlong *)0x100000000;
    local_f8 = (int *)&DAT_ffffffff;
    uStack_f0 = (ulonglong)uStack_f0._4_4_ << 0x20;
    uStack_100 = plVar1;
    if ((int)param_2[5] == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_108);
      iVar11 = (int)param_2[5];
    }
    local_88 = local_f8;
    piVar3 = local_88;
    lStack_80 = uStack_f0;
    local_98 = (undefined4)local_108;
    uStack_94 = local_108._4_4_;
    uStack_90 = (undefined4)uStack_100;
    uStack_8c = uStack_100._4_4_;
    local_88._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    iVar9 = local_88._4_4_;
    local_a0 = param_2;
    if ((local_88._4_4_ != iVar11) || (local_88 = piVar3, uStack_100 != plVar1)) {
      do {
        local_88 = piVar3;
        lVar5 = *local_a0;
        lVar10 = (longlong)iVar9 * 0x60;
        if ((*(int *)(lVar5 + 0x10 + lVar10) != *(int *)(lVar5 + 0x3c + lVar10)) &&
           (plVar6 = (longlong *)param_1[4], (int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34))) {
          piVar3 = (int *)(lVar5 + lVar10);
          puVar16 = (undefined8 *)((longlong)*piVar3 * 0x220 + *(longlong *)param_1[3]);
          uVar12 = ((uint)((ulonglong)puVar16 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar16 >> 4)) *
                   -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          plVar13 = plVar6 + 7;
          if ((longlong *)plVar6[8] != (longlong *)0x0) {
            plVar13 = (longlong *)plVar6[8];
          }
          iVar9 = *(int *)((longlong)plVar13 +
                          (ulonglong)((int)plVar6[9] - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
          if (iVar9 != -1) {
            do {
              lVar4 = *plVar6 + (longlong)iVar9 * 0x20;
              if (*(undefined8 **)(*plVar6 + (longlong)iVar9 * 0x20) == puVar16) {
                if (lVar4 + 8 != 0 && lVar4 != 0) {
                  local_158 = (longlong *)(lVar5 + lVar10 + 8);
                  local_148 = FUN_1493c3a66(*param_1);
                  puVar14 = &DAT_149dfb77a;
                  puVar15 = &DAT_149dfb77a;
                  if (*(int *)((undefined8 *)param_1[2] + 1) != 0) {
                    puVar15 = *(undefined2 **)param_1[2];
                  }
                  if (*(int *)(puVar16 + 1) != 0) {
                    puVar14 = (undefined2 *)*puVar16;
                  }
                  FUN_140002266(local_b0,L"%s_%s",puVar14,puVar15);
                  FUN_140b1283a(local_c0,L"\\AnimationTrack\\",local_b0);
                  uVar8 = local_148;
                  FUN_1444ba64e(local_148,local_c0,local_b0,2);
                  FUN_149337542(uVar8,lVar4 + 8);
                  local_d8[0] = 0;
                  local_d8[1] = 0;
                  FUN_144a83b10(local_d8,*(undefined4 *)(param_1 + 1));
                  local_dc = 0;
                  piVar2 = piVar3 + 6;
                  local_68 = (longlong *)&DAT_100000000;
                  local_58 = 0xffffffff;
                  local_50 = 0;
                  local_60 = piVar2;
                  if (piVar3[0xc] != 0) {
                    FUN_1449c0562(&local_68);
                  }
                  uStack_f0 = local_58;
                  local_e8 = local_50;
                  local_e4 = local_4c;
                  uStack_100 = local_68;
                  local_f8 = local_60;
                  local_108 = local_158;
                  uVar12 = piVar3[0xc];
                  local_68 = (longlong *)CONCAT44(1 << ((byte)uVar12 & 0x1f),(int)uVar12 >> 5);
                  local_58 = CONCAT44(uVar12,-1 << ((byte)uVar12 & 0x1f));
                  local_50 = uVar12 & 0xffffffe0;
                  local_60 = piVar2;
                  if (piVar3[0xc] != uVar12) {
                    FUN_1449c0562(&local_68);
                    uVar12 = local_58._4_4_;
                  }
                  piVar3 = local_60;
                  local_14c = uVar12;
                  if (local_108 != local_158 || (local_f8 != local_60 || uStack_f0._4_4_ != uVar12))
                  {
                    do {
                      iVar9 = *(int *)(*local_108 + (longlong)(int)uStack_f0._4_4_ * 0xc);
                      local_118[0] = 0;
                      local_118[1] = 0;
                      FUN_144a83b10(local_118,iVar9);
                      FUN_140ba7826(&local_68,&DAT_149e31048,local_118);
                      iVar7 = (int)local_60 + -1;
                      if ((int)local_60 == 0) {
                        iVar7 = 0;
                      }
                      FUN_1400020e8(local_d8,local_68,iVar7);
                      if (local_68 != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_118[0] != 0) {
                        FUN_1400020a8();
                      }
                      iVar9 = *(int *)(*(longlong *)(param_1[2] + 0x20) + 0x10 +
                                      (longlong)iVar9 * 0x18);
                      if (iVar9 == 2) {
                        local_dc = local_dc | 0x1c0;
                      }
                      else if (iVar9 == 1) {
                        local_dc = local_dc | 0x38;
                      }
                      else if (iVar9 == 0) {
                        local_dc = local_dc | 7;
                      }
                      uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_100._4_4_);
                      FUN_1449c0562(&uStack_100);
                    } while (local_108 != local_158 ||
                             (local_f8 != piVar3 || uStack_f0._4_4_ != local_14c));
                  }
                  uVar8 = local_148;
                  local_108 = (longlong *)CONCAT71(local_108._1_7_,1);
                  FUN_1493378d0(local_148,local_d8);
                  FUN_1493385de(uVar8,&local_dc);
                  FUN_1492f22b0(*param_1,local_128,uVar8);
                  if (local_128[0] != 0) {
                    FUN_1400020a8();
                  }
                  FUN_149337218(local_140,local_c0);
                  if (local_d8[0] != 0) {
                    FUN_1400020a8();
                  }
                  if (local_c0[0] != 0) {
                    FUN_1400020a8();
                  }
                  if (local_b0[0] != 0) {
                    FUN_1400020a8();
                  }
                }
                break;
              }
              iVar9 = *(int *)(lVar4 + 0x18);
            } while (iVar9 != -1);
          }
        }
        local_88 = (int *)CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
        FUN_1449c0562(&local_98);
        iVar9 = local_88._4_4_;
        piVar3 = local_88;
      } while (local_a0 != param_2 ||
               ((longlong *)CONCAT44(uStack_8c,uStack_90) != plVar1 || local_88._4_4_ != iVar11));
    }
    FUN_1492f22b0(*param_1,local_138,local_140);
    if (local_138[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493c263a FUN_1493c263a body=188 status=ok
// SIG undefined FUN_1493c263a(void)

longlong FUN_1493c263a(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1493c26d9;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1493c26f8(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1493c26d9:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1493c26f8 FUN_1493c26f8 body=272 status=ok
// SIG undefined FUN_1493c26f8(void)

undefined4 * FUN_1493c26f8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1493c280a(param_1,local_48);
  FUN_1493c29ae(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1493c28f8(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_1493c2ce2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c280a FUN_1493c280a body=238 status=ok
// SIG undefined FUN_1493c280a(void)

int * FUN_1493c280a(longlong *param_1,int *param_2)

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



// FUNCTION 1493c28f8 FUN_1493c28f8 body=182 status=ok
// SIG undefined FUN_1493c28f8(void)

undefined8 FUN_1493c28f8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_14062beec((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1493c2c68(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1493c29ae FUN_1493c29ae body=147 status=ok
// SIG undefined FUN_1493c29ae(void)

undefined4 * FUN_1493c29ae(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined4 *)*param_1;
  FUN_1493c2a42(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_14062beec(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c2a42 FUN_1493c2a42 body=123 status=ok
// SIG undefined FUN_1493c2a42(void)

undefined8 * FUN_1493c2a42(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1493c2abe();
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



// FUNCTION 1493c2abe FUN_1493c2abe body=425 status=ok
// SIG undefined FUN_1493c2abe(void)

longlong * FUN_1493c2abe(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    uVar5 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, uStack_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x60;
        *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(lVar2 + lVar8 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar7));
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c2c68 FUN_1493c2c68 body=122 status=ok
// SIG undefined FUN_1493c2c68(void)

void FUN_1493c2c68(longlong *param_1,int param_2)

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



// FUNCTION 1493c2ce2 FUN_1493c2ce2 body=423 status=ok
// SIG undefined FUN_1493c2ce2(void)

void FUN_1493c2ce2(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1493c2e8a FUN_1493c2e8a body=1006 status=ok
// SIG undefined FUN_1493c2e8a(void)

undefined8 FUN_1493c2e8a(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = param_1 + 5;
  iVar8 = (int)param_2[1];
  if (iVar8 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  else {
    puVar12 = (undefined2 *)*param_2;
  }
  iVar9 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar9 = 0;
  }
  uVar7 = FUN_144a49b4a(iVar9,puVar12);
  iVar8 = FUN_1493c33be(plVar1,uVar7,param_2);
  if (iVar8 == -1) {
    uVar10 = FUN_1493c3328(*param_1);
    local_70 = uVar10;
    FUN_140002266(&local_e8,&DAT_149e063bc,*(undefined4 *)(param_1 + 1));
    FUN_1400b22c2(local_90,L"_Common");
    FUN_1400b22c2(local_b0,"\\SkeletalAnimation\\");
    FUN_144a7dea0(local_a0,local_b0,param_2);
    FUN_1401c7f3e(&local_68,local_a0,local_90);
    FUN_1401c7f3e(local_80,&local_68,&local_e8);
    if (local_68 != 0.0) {
      FUN_1400020a8();
    }
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1444ba64e(uVar10,local_80,param_1[2],2);
    FUN_1493387bc(uVar10,param_2);
    FUN_1492f22b0(*param_1,local_c0,uVar10);
    if (local_c0[0] != 0) {
      FUN_1400020a8();
    }
    lVar4 = param_1[2];
    plVar2 = (longlong *)(lVar4 + 0x30);
    lVar3 = lVar4 + 0x40;
    local_68 = 2.12199579096527e-314;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar8 = 0;
    local_60 = lVar3;
    if (*(int *)(lVar4 + 0x58) != 0) {
      FUN_1449c0562(&local_68);
      iVar8 = *(int *)(lVar4 + 0x58);
    }
    local_d0 = local_58;
    uVar5 = local_d0;
    local_c8 = local_50;
    local_c4 = local_4c;
    local_e0 = (undefined8 *)local_68;
    local_d8 = local_60;
    local_d0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar9 = local_d0._4_4_;
    local_e8 = plVar2;
    if ((local_d0._4_4_ != iVar8) || (local_d0 = uVar5, local_60 != lVar3)) {
      do {
        local_d0 = uVar5;
        local_68 = 0.0;
        local_60 = -0x100000000;
        local_f8 = 0;
        FUN_1492fb1ea(uVar10,*local_e8 + (longlong)iVar9 * 0x28,
                      *local_e8 + 0x10 + (longlong)iVar9 * 0x28,&local_68);
        if ((local_60._4_4_ != -1) && (local_68 != 0.0)) {
          FUN_1400020a8();
        }
        local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
        FUN_1449c0562(&local_e0);
        iVar9 = local_d0._4_4_;
        uVar5 = local_d0;
      } while (local_e8 != plVar2 || (local_d8 != lVar3 || local_d0._4_4_ != iVar8));
    }
    local_e0 = &local_70;
    local_e8 = param_2;
    FUN_1493c348a(plVar1,&local_68);
    uVar10 = local_70;
    if (local_80[0] != 0) {
      FUN_1400020a8();
      uVar10 = local_70;
    }
  }
  else {
    iVar8 = (int)param_2[1];
    if (iVar8 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)*param_2;
    }
    uVar13 = 0;
    uVar11 = (ulonglong)(iVar8 - 1);
    if (iVar8 == 0) {
      uVar11 = uVar13;
    }
    uVar7 = FUN_144a49b4a(uVar11,puVar12);
    iVar8 = FUN_1493c33be(plVar1,uVar7,param_2);
    if (iVar8 != -1) {
      uVar13 = (longlong)iVar8 * 0x20 + *plVar1;
    }
    uVar10 = *(undefined8 *)(uVar13 + 0x10);
    cVar6 = FUN_14933885a(uVar10,&local_e8);
    if (cVar6 != '\0') {
      *(longlong **)(param_3 + 8) = local_e8;
      *(double *)(param_3 + 0x10) = 1.0 / (double)local_e8;
    }
    cVar6 = FUN_149338ad6(uVar10,&local_68);
    if (cVar6 != '\0') {
      *(double *)(param_3 + 0x18) = local_68;
      dVar14 = local_68 / *(double *)(param_3 + 0x10);
      *(int *)(param_3 + 0x20) = (int)ROUND(dVar14 + dVar14 + 0.5) >> 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1493c327a FUN_1493c327a body=173 status=ok
// SIG undefined FUN_1493c327a(void)

void FUN_1493c327a(longlong param_1,longlong param_2)

{
  double dVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14931873e(*(undefined8 *)(param_1 + 8),&local_28);
  if ((longlong)(int)uStack_20 < 1) {
    iVar2 = 0;
  }
  else {
    dVar1 = (double)*(float *)(local_28 + -4 + (longlong)(int)uStack_20 * 4) /
            *(double *)(param_2 + 0x10);
    iVar2 = (uint)((float)(int)dVar1 < (float)dVar1) + (int)dVar1;
  }
  if (*(int *)(param_2 + 0x20) < iVar2) {
    *(int *)(param_2 + 0x20) = iVar2;
    *(double *)(param_2 + 0x18) = (double)iVar2 * *(double *)(param_2 + 0x10);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c3328 FUN_1493c3328 body=148 status=ok
// SIG undefined FUN_1493c3328(void)

undefined8 FUN_1493c3328(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a932d8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c33be FUN_1493c33be body=203 status=ok
// SIG undefined FUN_1493c33be(void)

int FUN_1493c33be(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1493c3408:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1493c347e;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1493c347e;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1493c346f;
    }
  }
  return -1;
LAB_1493c347e:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1493c346f:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1493c3408;
}



// FUNCTION 1493c348a FUN_1493c348a body=315 status=ok
// SIG undefined FUN_1493c348a(void)

undefined4 * FUN_1493c348a(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1493c35c6(param_1,local_48);
  FUN_1493c371e(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1493c36ac(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1493c37f4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c35c6 FUN_1493c35c6 body=229 status=ok
// SIG undefined FUN_1493c35c6(void)

int * FUN_1493c35c6(longlong *param_1,int *param_2)

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



// FUNCTION 1493c36ac FUN_1493c36ac body=114 status=ok
// SIG undefined FUN_1493c36ac(void)

undefined8 FUN_1493c36ac(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1493c33be(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1493c3782(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1493c371e FUN_1493c371e body=100 status=ok
// SIG undefined FUN_1493c371e(void)

undefined8 * FUN_1493c371e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 1493c3782 FUN_1493c3782 body=114 status=ok
// SIG undefined FUN_1493c3782(void)

void FUN_1493c3782(longlong *param_1,int param_2)

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



// FUNCTION 1493c37f4 FUN_1493c37f4 body=476 status=ok
// SIG undefined FUN_1493c37f4(void)

void FUN_1493c37f4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c39d1 FUN_1493c39d1 body=148 status=ok
// SIG undefined FUN_1493c39d1(void)

undefined8 FUN_1493c39d1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a93014();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c3a66 FUN_1493c3a66 body=148 status=ok
// SIG undefined FUN_1493c3a66(void)

undefined8 FUN_1493c3a66(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a931ec();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c3afc FUN_1493c3afc body=52 status=ok
// SIG undefined FUN_1493c3afc(void)

void FUN_1493c3afc(longlong *param_1)

{
  FUN_1493c3b30();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493c3b30 FUN_1493c3b30 body=349 status=ok
// SIG undefined FUN_1493c3b30(void)

void FUN_1493c3b30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_14062beec(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c3c8e FUN_1493c3c8e body=52 status=ok
// SIG undefined FUN_1493c3c8e(void)

void FUN_1493c3c8e(longlong *param_1)

{
  FUN_1493c3cc2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493c3cc2 FUN_1493c3cc2 body=312 status=ok
// SIG undefined FUN_1493c3cc2(void)

void FUN_1493c3cc2(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1493c3dfc FUN_1493c3dfc body=758 status=ok
// SIG undefined FUN_1493c3dfc(void)

void FUN_1493c3dfc(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong local_b0 [2];
  longlong local_a0;
  int local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  int local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  int local_68;
  longlong local_60;
  int local_58;
  longlong local_50 [2];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1493bee02(local_50,*(undefined1 *)(param_1 + 6));
  FUN_140c50e86(&local_60,local_50,1);
  uVar1 = FUN_1493c420b(*param_1);
  FUN_1492ef9be(param_1[3],&local_90);
  local_80 = local_90;
  local_78 = local_88 + -1;
  if (local_88 == 0) {
    local_78 = 0;
  }
  local_a0 = local_60;
  local_98 = local_58 + -1;
  if (local_58 == 0) {
    local_98 = 0;
  }
  FUN_149347fa6(&local_70);
  FUN_1444ba64e(uVar1,&local_70,&local_60,2);
  if (CONCAT71(uStack_6f,local_70) != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_149346e1c(uVar1,local_50);
  FUN_1492f22b0(*param_1,local_b0,uVar1);
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = uVar1;
  FUN_149347d1e(param_1[3],param_1[1] + 0x248);
  cVar2 = *(char *)(param_1 + 6);
  if (cVar2 == '\x04') {
    local_70 = 1;
    FUN_149347bc6(param_1[3],&local_70);
    local_70 = 1;
    FUN_149347e74(param_1[3],&local_70);
    cVar2 = *(char *)(param_1 + 6);
  }
  FUN_1493befaf(&local_70,cVar2);
  cVar2 = *(char *)((longlong)param_1 + 0x31);
  if (cVar2 == '\x02') {
LAB_1493c3f9a:
    pwVar3 = L"OpacityMask";
  }
  else {
    if (cVar2 != '\x01') {
      if (cVar2 != '\0') goto LAB_1493c3fcd;
      FUN_140056680(&local_90,L"Opacity");
      local_40 = &local_90;
      FUN_140c8411c(&local_70);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1493c3f9a;
    }
    if (*(char *)(param_1 + 6) == '\x04') goto LAB_1493c3fcd;
    pwVar3 = L"Opacity";
  }
  FUN_140056680(&local_90,pwVar3);
  local_40 = &local_90;
  FUN_140c8411c(&local_70);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
LAB_1493c3fcd:
  if ((longlong)local_68 != 0) {
    lVar4 = CONCAT71(uStack_6f,local_70);
    lVar5 = (longlong)local_68 << 4;
    do {
      FUN_1492ef9be(uVar1,&local_90);
      FUN_149344f46(param_1[3],lVar4,&local_90,lVar4);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  lVar4 = param_1[1];
  if ((*(char *)(lVar4 + 0x290) == '\0') && (*(int *)(lVar4 + 0x24c) == 1)) {
    if (*(char *)(param_1 + 6) == '\x04') {
      local_b8 = 1;
      FUN_1493c42a0(param_1,&DAT_14cc11300,*(undefined4 *)(lVar4 + 0x250),0);
    }
    else {
      FUN_149347a6e(param_1[3],lVar4 + 0x250,1);
    }
  }
  FUN_1447a1747(CONCAT71(uStack_6f,local_70),local_68);
  if (CONCAT71(uStack_6f,local_70) != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c40f4 FUN_1493c40f4 body=278 status=ok
// SIG undefined FUN_1493c40f4(void)

void FUN_1493c40f4(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  FUN_1493beccf(local_38,*(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31),
                *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x248));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1449b8608(&local_58,&DAT_14cc10cd0,L"ParentIdentifier");
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140056680(local_48,puVar3);
  FUN_1492ee142(uVar1,local_48,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if ((*(char *)(lVar2 + 0x290) == '\0') && (*(int *)(lVar2 + 0x24c) == 1)) {
    local_68 = 2;
    FUN_1493c42a0(param_1,&DAT_14cc11300,*(undefined4 *)(lVar2 + 0x250),0);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493c420b FUN_1493c420b body=148 status=ok
// SIG undefined FUN_1493c420b(void)

undefined8 FUN_1493c420b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a93b24();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c42a0 FUN_1493c42a0 body=238 status=ok
// SIG undefined FUN_1493c42a0(void)

void FUN_1493c42a0(longlong param_1,undefined8 param_2,float param_3,float param_4,uint param_5)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = param_3;
  if (1e-08 < ABS(param_3 - param_4)) {
    if ((param_5 & 1) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      FUN_14933bd24(local_48,param_2);
      FUN_1492eda3c(uVar1,local_48,&local_34);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
    if ((param_5 & 2) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = DAT_14cc10cd0;
      if (DAT_14cc10cd8 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_140b1283a(local_48,puVar2,param_2);
      FUN_1492eda3c(uVar1,local_48,&local_34);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493c4390 FUN_1493c4390 body=1420 status=ok
// SIG undefined FUN_1493c4390(void)

undefined8 FUN_1493c4390(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  byte bVar6;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_d8;
  int local_d0;
  longlong local_c8 [2];
  float local_b8;
  float fStack_b4;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  int local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*param_3 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*param_3 < *(int *)(param_1[2] + 8)) {
      FUN_1492ef9be(param_1[4],&local_88);
      local_70 = local_88;
      local_68 = (int)uStack_80 + -1;
      if ((int)uStack_80 == 0) {
        local_68 = 0;
      }
      local_98 = *param_2;
      local_90 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        local_90 = 0;
      }
      uVar4 = FUN_14934810c(*param_1);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_1400021e4(&DAT_14cc11be8,&local_88);
      FUN_149346b60(uVar4,&local_88);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_a8 = *(undefined8 *)(*(longlong *)param_1[2] + 0x70 + (longlong)*param_3 * 0x80);
      iVar2 = *(int *)(*(longlong *)param_1[2] + 0x78 + (longlong)*param_3 * 0x80);
      local_a0 = iVar2 + -1;
      if (iVar2 == 0) {
        local_a0 = 0;
      }
      FUN_149348bf8(&local_88);
      FUN_1400021e4(&DAT_14cc11bf0,local_c8);
      FUN_14933bd24(&local_b8,local_c8);
      FUN_1492ee142(uVar4,&local_b8,&local_88);
      if (CONCAT44(fStack_b4,local_b8) != 0) {
        FUN_1400020a8();
      }
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_1492ef9be(uVar4,&local_88);
      FUN_149344996(param_1[4],param_2,&local_88);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      uVar4 = param_1[5];
      local_d8 = *(undefined8 *)(*(longlong *)param_1[2] + 0x70 + (longlong)*param_3 * 0x80);
      iVar2 = *(int *)(*(longlong *)param_1[2] + 0x78 + (longlong)*param_3 * 0x80);
      local_d0 = iVar2 + -1;
      if (iVar2 == 0) {
        local_d0 = 0;
      }
      FUN_149348bf8(&local_88);
      puVar5 = DAT_14cc10cd0;
      if (DAT_14cc10cd8 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_140b1283a(&local_b8,puVar5,param_2);
      FUN_1492ee142(uVar4,&local_b8,&local_88);
      if (CONCAT44(fStack_b4,local_b8) != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      bVar6 = *(byte *)(param_3 + 1);
      FUN_140474144(&local_88,param_2,&DAT_14cc10d00);
      local_e8 = 3;
      FUN_1493c42a0(param_1,&local_88,(float)bVar6,0);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_88 = 0;
      uStack_80 = 0;
      lVar3 = *(longlong *)(*(longlong *)param_1[2] + 8 + (longlong)*param_3 * 0x80);
      iVar2 = *(int *)(lVar3 + 8);
      bVar6 = iVar2 == 0x812f;
      if (iVar2 == 0x8370) {
        bVar6 = 2;
      }
      local_b8 = (float)bVar6;
      iVar2 = *(int *)(lVar3 + 0xc);
      bVar6 = iVar2 == 0x812f;
      if (iVar2 == 0x8370) {
        bVar6 = 2;
      }
      fStack_b4 = (float)bVar6;
      puStack_b0 = (undefined1 *)0x0;
      FUN_140474144(local_c8,param_2,&DAT_14cc10d70);
      local_e8 = 3;
      FUN_1493c4c46(param_1,local_c8,&local_b8,&local_88);
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      uVar4 = 1;
      if (*(char *)((longlong)param_3 + 5) == '\x01') {
        iVar2 = param_3[2];
        FUN_140474144(&local_88,param_2,&DAT_14cc10d10);
        local_e8 = 1;
        FUN_1493c42a0(param_1,&local_88,iVar2,0);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        iVar2 = param_3[3];
        FUN_140474144(&local_88,param_2,&DAT_14cc10d20);
        local_e8 = 1;
        FUN_1493c42a0(param_1,&local_88,iVar2,0);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        iVar2 = param_3[5];
        FUN_140474144(&local_88,param_2,&DAT_14cc10d30);
        local_e8 = 1;
        FUN_1493c42a0(param_1,&local_88,iVar2,0x3f800000);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        iVar2 = param_3[6];
        FUN_140474144(&local_88,param_2,&DAT_14cc10d40);
        local_e8 = 1;
        FUN_1493c42a0(param_1,&local_88,iVar2,0x3f800000);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        local_88 = *(longlong *)(param_3 + 2);
        uStack_80 = *(undefined8 *)(param_3 + 5);
        local_b8 = 0.0;
        fStack_b4 = 0.0;
        puStack_b0 = &DAT_3f8000003f800000;
        FUN_140474144(local_c8,param_2,&DAT_14cc10d50);
        local_e8 = 2;
        FUN_1493c4c46(param_1,local_c8,&local_88,&local_b8);
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        fVar1 = (float)param_3[4];
        if (1e-08 < ABS(fVar1)) {
          FUN_140474144(&local_88,param_2,&DAT_14cc10d60);
          local_e8 = 3;
          FUN_1493c42a0(param_1,&local_88,
                        ~-(uint)(fVar1 < 0.0) & (uint)fVar1 |
                        (uint)(6.2831855 - fVar1) & -(uint)(fVar1 < 0.0),0);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1493c491e FUN_1493c491e body=342 status=ok
// SIG undefined FUN_1493c491e(void)

void FUN_1493c491e(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6c = *param_4;
  local_68 = param_4[1];
  local_64 = param_4[2];
  local_78 = *param_3;
  local_74 = param_3[1];
  local_70 = param_3[2];
  FUN_140474144(local_88,param_2,&DAT_14cc10ce0);
  local_98 = 1;
  FUN_1493c4b00(param_1,local_88,&local_78,&local_6c);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = param_4[3];
  uVar2 = param_3[3];
  FUN_140474144(local_88,param_2,&DAT_14cc10cf0);
  local_98 = 1;
  FUN_1493c42a0(param_1,local_88,uVar2,uVar1);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  local_98 = 2;
  FUN_1493c4c46(param_1,param_2,param_3,param_4);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c4a76 FUN_1493c4a76 body=137 status=ok
// SIG undefined FUN_1493c4a76(void)

void FUN_1493c4a76(longlong param_1,undefined8 param_2,char *param_3,char *param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 != *param_4) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = DAT_14cc10cd0;
    if (DAT_14cc10cd8 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140b1283a(local_30,puVar2,param_2);
    FUN_1492ed6b4(uVar1,local_30,param_3);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493c4b00 FUN_1493c4b00 body=324 status=ok
// SIG undefined FUN_1493c4b00(void)

void FUN_1493c4b00(longlong param_1,undefined8 param_2,float *param_3,float *param_4,uint param_5)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((1e-08 < ABS(*param_3 - *param_4)) || (1e-08 < ABS(param_3[1] - param_4[1]))) ||
     (1e-08 < ABS(param_3[2] - param_4[2]))) {
    if ((param_5 & 1) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      FUN_1467ed646(local_50,param_3);
      FUN_14933bd24(local_60,param_2);
      FUN_1492edf7c(uVar1,local_60,local_50);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if ((param_5 & 2) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      FUN_1467ed646(local_50,param_3);
      puVar2 = DAT_14cc10cd0;
      if (DAT_14cc10cd8 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_140b1283a(local_60,puVar2,param_2);
      FUN_1492edf7c(uVar1,local_60,local_50);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493c4c46 FUN_1493c4c46 body=339 status=ok
// SIG undefined FUN_1493c4c46(void)

void FUN_1493c4c46(longlong param_1,undefined8 param_2,float *param_3,float *param_4,uint param_5)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((1e-08 < ABS(*param_3 - *param_4)) || (1e-08 < ABS(param_3[1] - param_4[1]))) ||
      (1e-08 < ABS(param_3[2] - param_4[2]))) || (1e-08 < ABS(param_3[3] - param_4[3]))) {
    if ((param_5 & 1) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      FUN_1414dd342(local_48,param_3);
      FUN_14933bd24(local_58,param_2);
      FUN_1492edf7c(uVar1,local_58,local_48);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_1414dd342(local_48,param_3);
    puVar2 = DAT_14cc10cd0;
    if (DAT_14cc10cd8 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140b1283a(local_58,puVar2,param_2);
    FUN_1492edf7c(uVar1,local_58,local_48);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493c4d9a FUN_1493c4d9a body=52 status=ok
// SIG undefined FUN_1493c4d9a(void)

void FUN_1493c4d9a(longlong *param_1)

{
  FUN_1493c4dce();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493c4dce FUN_1493c4dce body=313 status=ok
// SIG undefined FUN_1493c4dce(void)

void FUN_1493c4dce(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1493c4f08 FUN_1493c4f08 body=54 status=ok
// SIG undefined FUN_1493c4f08(void)

void FUN_1493c4f08(longlong *param_1)

{
  FUN_1493c4f3e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493c4f3e FUN_1493c4f3e body=384 status=ok
// SIG undefined FUN_1493c4f3e(void)

void FUN_1493c4f3e(longlong *param_1,int param_2)

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
      lVar5 = (longlong)iStack_64 * 0x20;
      FUN_1447a1747(*(undefined8 *)(lVar2 + 8 + lVar5),*(undefined4 *)(lVar2 + 0x10 + lVar5));
      if (*(longlong *)(lVar2 + 8 + lVar5) != 0) {
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



// FUNCTION 1493c50c0 FUN_1493c50c0 body=110 status=ok
// SIG undefined FUN_1493c50c0(void)

void FUN_1493c50c0(longlong param_1,uint param_2)

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
    FUN_145e7b778(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1493c5272(param_1);
    return;
  }
  FUN_1493c512e(param_1);
  FUN_145e7b778(param_1,param_2);
  return;
}



// FUNCTION 1493c512e FUN_1493c512e body=322 status=ok
// SIG undefined FUN_1493c512e(void)

void FUN_1493c512e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x7c + (longlong)iVar4 * 0x80) * 4) =
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



// FUNCTION 1493c5272 FUN_1493c5272 body=511 status=ok
// SIG undefined FUN_1493c5272(void)

void FUN_1493c5272(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_78;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar2 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar11 = local_78._4_4_;
      local_78 = uVar2;
      do {
        lVar12 = *local_90;
        lVar9 = (longlong)iVar11 * 0x80;
        iVar4 = *(int *)(lVar12 + 8 + lVar9);
        puVar8 = &DAT_149dfb77a;
        iVar6 = 0;
        if (iVar4 != 0) {
          puVar8 = *(undefined2 **)(lVar12 + lVar9);
          iVar6 = iVar4 + -1;
        }
        uVar3 = FUN_144a49b4a(iVar6,puVar8);
        lVar12 = lVar12 + lVar9;
        iVar4 = FUN_149330d25(lVar12 + 0x10);
        uVar5 = (longlong)(int)((uVar3 >> 2) + uVar3 * 0x40 + iVar4 + 0x9e3779b9 ^ uVar3) &
                (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        *(int *)(lVar12 + 0x7c) = iVar4;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x78) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar11 = local_78._4_4_;
        uVar2 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c5472 FUN_1493c5472 body=110 status=ok
// SIG undefined FUN_1493c5472(void)

void FUN_1493c5472(longlong param_1,uint param_2)

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
    FUN_145e7b8f0(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1493c562a(param_1);
    return;
  }
  FUN_1493c54e0(param_1);
  FUN_145e7b8f0(param_1,param_2);
  return;
}



// FUNCTION 1493c54e0 FUN_1493c54e0 body=328 status=ok
// SIG undefined FUN_1493c54e0(void)

void FUN_1493c54e0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc4 + (longlong)iVar4 * 200) * 4) =
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



// FUNCTION 1493c562a FUN_1493c562a body=520 status=ok
// SIG undefined FUN_1493c562a(void)

void FUN_1493c562a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_78;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar2 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar11 = local_78._4_4_;
      local_78 = uVar2;
      do {
        lVar12 = *local_90;
        lVar9 = (longlong)iVar11 * 200;
        iVar4 = *(int *)(lVar12 + 8 + lVar9);
        puVar8 = &DAT_149dfb77a;
        iVar6 = 0;
        if (iVar4 != 0) {
          puVar8 = *(undefined2 **)(lVar12 + lVar9);
          iVar6 = iVar4 + -1;
        }
        uVar3 = FUN_144a49b4a(iVar6,puVar8);
        lVar12 = lVar12 + lVar9;
        iVar4 = FUN_149330d25(lVar12 + 0x10);
        uVar5 = (longlong)(int)((uVar3 >> 2) + uVar3 * 0x40 + iVar4 + 0x9e3779b9 ^ uVar3) &
                (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        *(int *)(lVar12 + 0xc4) = iVar4;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0xc0) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar11 = local_78._4_4_;
        uVar2 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c5834 FUN_1493c5834 body=367 status=ok
// SIG undefined FUN_1493c5834(void)

undefined4 * FUN_1493c5834(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1493c59a4(param_1,local_48);
  uVar1 = param_3[1];
  FUN_1493c12ec(local_40,*param_3);
  FUN_1493bb146(local_40 + 5,uVar1);
  *(undefined4 *)(local_40 + 0xf) = 0xffffffff;
  local_4c = local_48[0];
  iVar6 = *(int *)(local_40 + 1);
  if (iVar6 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
  }
  iVar2 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar9);
  iVar6 = FUN_149330d25(local_40 + 2);
  uVar5 = (uVar5 >> 2) + uVar5 * 0x40 + iVar6 + 0x9e3779b9 ^ uVar5;
  cVar4 = FUN_1493c5a8a(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x7c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xf) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1493c5272(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c59a4 FUN_1493c59a4 body=229 status=ok
// SIG undefined FUN_1493c59a4(void)

int * FUN_1493c59a4(longlong *param_1,int *param_2)

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
      FUN_140eca382(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 1493c5a8a FUN_1493c5a8a body=106 status=ok
// SIG undefined FUN_1493c5a8a(void)

undefined8 FUN_1493c5a8a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1493c5af4(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x80 + *param_1);
    FUN_1493c123e(_Dst);
    memmove(_Dst,param_3,0x78);
    FUN_1493c5be6(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1493c5af4 FUN_1493c5af4 body=241 status=ok
// SIG undefined FUN_1493c5af4(void)

int FUN_1493c5af4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
      lVar5 = *param_3;
      do {
        lVar13 = (longlong)iVar1 * 0x80;
        iVar3 = *(int *)(lVar4 + 8 + lVar13);
        if (iVar3 == iVar2) {
          if (1 < iVar2) {
            lVar10 = 0;
            while( true ) {
              uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar13) + lVar10);
              uVar9 = (ulonglong)uVar8;
              uVar11 = *(ushort *)(lVar5 + lVar10);
              if (uVar8 != uVar11) break;
              if (uVar8 == 0) goto LAB_1493c5bbe;
LAB_1493c5b8a:
              lVar10 = lVar10 + 2;
            }
            if ((uVar11 | uVar8) < 0x80) {
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar12 = (ulonglong)uVar11;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1493c5b8a;
            }
            if (uVar8 != uVar11) goto LAB_1493c5bd2;
          }
LAB_1493c5bbe:
          cVar6 = FUN_1493c5c58((longlong *)(lVar4 + lVar13) + 2,param_3 + 2);
          if (cVar6 != '\0') {
            return iVar1;
          }
        }
        else if (iVar3 + iVar2 == 1) goto LAB_1493c5bbe;
LAB_1493c5bd2:
        iVar1 = *(int *)(lVar4 + 0x78 + lVar13);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1493c5be6 FUN_1493c5be6 body=114 status=ok
// SIG undefined FUN_1493c5be6(void)

void FUN_1493c5be6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
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



// FUNCTION 1493c5c58 FUN_1493c5c58 body=70 status=ok
// SIG undefined FUN_1493c5c58(void)

undefined8 FUN_1493c5c58(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == *(uint *)(param_2 + 1)) {
    if (1 < (int)uVar1) {
      iVar2 = wcscmp((wchar_t *)*param_1,(wchar_t *)*param_2);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  else if (*(uint *)(param_2 + 1) + uVar1 != 1) {
    return 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),*(char *)(param_1 + 2) == *(char *)(param_2 + 2));
}



// FUNCTION 1493c5c9e FUN_1493c5c9e body=121 status=ok
// SIG undefined FUN_1493c5c9e(void)

void FUN_1493c5c9e(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1493c5d18();
  if ((iVar1 == -1) || ((longlong)iVar1 * 200 + *param_1 == 0)) {
    local_40 = param_3;
    local_38 = param_4;
    FUN_1493c5e10(param_1,local_2c,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c5d18 FUN_1493c5d18 body=247 status=ok
// SIG undefined FUN_1493c5d18(void)

int FUN_1493c5d18(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
      lVar5 = *param_3;
      do {
        lVar13 = (longlong)iVar1 * 200;
        iVar3 = *(int *)(lVar4 + 8 + lVar13);
        if (iVar3 == iVar2) {
          if (1 < iVar2) {
            lVar10 = 0;
            while( true ) {
              uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar13) + lVar10);
              uVar9 = (ulonglong)uVar8;
              uVar11 = *(ushort *)(lVar5 + lVar10);
              if (uVar8 != uVar11) break;
              if (uVar8 == 0) goto LAB_1493c5de5;
LAB_1493c5db1:
              lVar10 = lVar10 + 2;
            }
            if ((uVar11 | uVar8) < 0x80) {
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar12 = (ulonglong)uVar11;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1493c5db1;
            }
            if (uVar8 != uVar11) goto LAB_1493c5df9;
          }
LAB_1493c5de5:
          cVar6 = FUN_1493c5c58((longlong *)(lVar4 + lVar13) + 2,param_3 + 2);
          if (cVar6 != '\0') {
            return iVar1;
          }
        }
        else if (iVar3 + iVar2 == 1) goto LAB_1493c5de5;
LAB_1493c5df9:
        iVar1 = *(int *)(lVar4 + 0xc0 + lVar13);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1493c5e10 FUN_1493c5e10 body=297 status=ok
// SIG undefined FUN_1493c5e10(void)

undefined4 * FUN_1493c5e10(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1493c5f3a(param_1,local_48);
  uVar1 = param_4[1];
  FUN_1493c12ec(local_40,*param_4);
  FUN_1493c6094(local_40 + 0x28,uVar1);
  *(undefined4 *)(local_40 + 0xc0) = 0xffffffff;
  cVar2 = FUN_1493c6028(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0xc4) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc0) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1493c562a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c5f3a FUN_1493c5f3a body=237 status=ok
// SIG undefined FUN_1493c5f3a(void)

int * FUN_1493c5f3a(longlong *param_1,int *param_2)

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
      FUN_146efee60(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 200);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 200) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 200 + *param_1;
  return param_2;
}



// FUNCTION 1493c6028 FUN_1493c6028 body=108 status=ok
// SIG undefined FUN_1493c6028(void)

undefined8 FUN_1493c6028(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1493c5d18(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 200 + *param_1);
    FUN_1493c1206(_Dst);
    memmove(_Dst,param_3,0xc0);
    FUN_1493c61ca(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1493c6094 FUN_1493c6094 body=309 status=ok
// SIG undefined FUN_1493c6094(void)

void FUN_1493c6094(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  param_1[0xc] = param_2[0xc];
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  param_1[0xd] = 0;
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  param_2[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_2[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return;
}



// FUNCTION 1493c61ca FUN_1493c61ca body=122 status=ok
// SIG undefined FUN_1493c61ca(void)

void FUN_1493c61ca(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 200) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 200) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 200 + 4) = uVar5;
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



// FUNCTION 1493c6244 FUN_1493c6244 body=41 status=ok
// SIG undefined FUN_1493c6244(void)

void FUN_1493c6244(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493bcc12(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 1493c626e FUN_1493c626e body=195 status=ok
// SIG undefined FUN_1493c626e(void)

undefined8 * FUN_1493c626e(undefined8 *param_1,undefined1 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_LAB_14bc68460;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14bca7f30;
  *(undefined1 *)(param_1 + 0xc) = param_2;
  param_1[0xe] = *param_3;
  param_1[0x10] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x14) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
  *(int *)(param_1 + 0x15) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
  *(int *)(param_1 + 0x12) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(int *)(param_1 + 0x13) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  if (param_1[0xe] == 0) {
    if (*param_3 != 0) {
      plVar8 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar8 = (longlong *)param_3[2];
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  else {
    *param_3 = 0;
  }
  return param_1;
}



// FUNCTION 1493c6332 FUN_1493c6332 body=70 status=ok
// SIG undefined FUN_1493c6332(void)

void FUN_1493c6332(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14bca7f30;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x90);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_149365954(param_1 + 0x10);
  return;
}



// FUNCTION 1493c6378 FUN_1493c6378 body=29 status=ok
// SIG undefined FUN_1493c6378(void)

undefined8 FUN_1493c6378(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c6396 FUN_1493c6396 body=302 status=ok
// SIG undefined FUN_1493c6396(void)

void FUN_1493c6396(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1493c6682(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar3 = iStack_5c;
      lVar2 = *local_78;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1493bb210(param_2,iVar1);
      }
      FUN_1493bb146((longlong)iVar1 * 0x50 + *param_2,lVar2 + (longlong)iVar3 * 0x80 + 0x28);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c64c6 FUN_1493c64c6 body=297 status=ok
// SIG undefined FUN_1493c64c6(void)

void FUN_1493c64c6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
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
  FUN_1493c66c8(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar2 = *local_70;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1493c67ba(param_2,iVar1);
      }
      FUN_1493c12ec((longlong)iVar1 * 0x28 + *param_2,lVar3 * 0x80 + lVar2);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c65f0 FUN_1493c65f0 body=145 status=ok
// SIG undefined FUN_1493c65f0(void)

longlong FUN_1493c65f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6();
  FUN_1493c684e(param_1 + 0x10,param_2 + 0x10);
  FUN_140bee9ec(param_1 + 0x20,param_2 + 0x20);
  FUN_144a67f5c(param_1 + 0x30,param_2 + 0x30);
  FUN_1493c68ae(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  FUN_144756208(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 1493c6682 FUN_1493c6682 body=68 status=ok
// SIG undefined FUN_1493c6682(void)

void FUN_1493c6682(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1493c140a(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1493bb0d4(param_1,param_2);
  return;
}



// FUNCTION 1493c66c8 FUN_1493c66c8 body=68 status=ok
// SIG undefined FUN_1493c66c8(void)

void FUN_1493c66c8(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1493c670d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1493c674a(param_1,param_2);
  return;
}



// FUNCTION 1493c670d FUN_1493c670d body=61 status=ok
// SIG undefined FUN_1493c670d(void)

void FUN_1493c670d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1493c674a FUN_1493c674a body=112 status=ok
// SIG undefined FUN_1493c674a(void)

void FUN_1493c674a(longlong param_1,uint param_2)

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



// FUNCTION 1493c67ba FUN_1493c67ba body=147 status=ok
// SIG undefined FUN_1493c67ba(void)

void FUN_1493c67ba(longlong param_1,int param_2)

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



// FUNCTION 1493c684e FUN_1493c684e body=95 status=ok
// SIG undefined FUN_1493c684e(void)

undefined8 * FUN_1493c684e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1493c129c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1493c690e(param_1,iVar1);
      FUN_1493c6970(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1493c68ae FUN_1493c68ae body=95 status=ok
// SIG undefined FUN_1493c68ae(void)

undefined8 * FUN_1493c68ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1493c1276(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1493c69ac(param_1,iVar1);
      FUN_1493c6a1f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1493c690e FUN_1493c690e body=98 status=ok
// SIG undefined FUN_1493c690e(void)

void FUN_1493c690e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,8);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1493c6970 FUN_1493c6970 body=60 status=ok
// SIG undefined FUN_1493c6970(void)

void FUN_1493c6970(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140501b78(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 1493c69ac FUN_1493c69ac body=115 status=ok
// SIG undefined FUN_1493c69ac(void)

void FUN_1493c69ac(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1493c6a1f FUN_1493c6a1f body=52 status=ok
// SIG undefined FUN_1493c6a1f(void)

void FUN_1493c6a1f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1493c6a54(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 1493c6a54 FUN_1493c6a54 body=158 status=ok
// SIG undefined FUN_1493c6a54(void)

undefined8 * FUN_1493c6a54(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1447c510a(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
  }
  FUN_1493c6af2(param_1 + 2,param_2 + 2);
  FUN_1493c6b5c(param_1 + 4,param_2 + 4);
  FUN_14134c51c(param_1 + 6,param_2 + 6);
  FUN_1493c6bc2(param_1 + 8,param_2 + 8);
  FUN_14672cfd6(param_1 + 10,param_2 + 10);
  return param_1;
}



// FUNCTION 1493c6af2 FUN_1493c6af2 body=105 status=ok
// SIG undefined FUN_1493c6af2(void)

undefined8 * FUN_1493c6af2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  *param_1 = 0;
  if (iVar1 == -1) {
    param_1[1] = 0xffffffff00000000;
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1447c510a(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
    }
  }
  return param_1;
}



// FUNCTION 1493c6b5c FUN_1493c6b5c body=101 status=ok
// SIG undefined FUN_1493c6b5c(void)

undefined8 * FUN_1493c6b5c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  *param_1 = 0;
  if (iVar1 == -1) {
    param_1[1] = 0xffffffff00000000;
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1447cd5fa(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1493c6bc2 FUN_1493c6bc2 body=105 status=ok
// SIG undefined FUN_1493c6bc2(void)

undefined8 * FUN_1493c6bc2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  *param_1 = 0;
  if (iVar1 == -1) {
    param_1[1] = 0xffffffff00000000;
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_144a06ca8(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
    }
  }
  return param_1;
}



// FUNCTION 1493c6c2c FUN_1493c6c2c body=85 status=ok
// SIG undefined FUN_1493c6c2c(void)

undefined8 * FUN_1493c6c2c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bca7f30;
  if (param_1[0xe] != 0) {
    plVar1 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_149365954(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c6c86 FUN_1493c6c86 body=50 status=ok
// SIG undefined FUN_1493c6c86(void)

void FUN_1493c6c86(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x70);
  plVar2 = (longlong *)(param_1 + 0x90);
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x80);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001493c6cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1493c6cb8 FUN_1493c6cb8 body=132 status=ok
// SIG undefined FUN_1493c6cb8(void)

void FUN_1493c6cb8(longlong param_1,int param_2)

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



// FUNCTION 1493c6d3e FUN_1493c6d3e body=88 status=ok
// SIG undefined FUN_1493c6d3e(void)

undefined8 * FUN_1493c6d3e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 4) * -0x33333333;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1493c6d96(param_1,iVar2);
    FUN_1493c6dff(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 1493c6d96 FUN_1493c6d96 body=105 status=ok
// SIG undefined FUN_1493c6d96(void)

undefined8 FUN_1493c6d96(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x50,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x50)) {
    uVar5 = uVar2 / 0x50 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x50,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1493c6dff FUN_1493c6dff body=47 status=ok
// SIG undefined FUN_1493c6dff(void)

void FUN_1493c6dff(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1493bb146(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1493c6e2e FUN_1493c6e2e body=56 status=ok
// SIG undefined FUN_1493c6e2e(void)

void FUN_1493c6e2e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001493c6e5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1493c6e66 FUN_1493c6e66 body=29 status=ok
// SIG undefined FUN_1493c6e66(void)

undefined8 FUN_1493c6e66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c6e84 FUN_1493c6e84 body=94 status=ok
// SIG undefined FUN_1493c6e84(void)

longlong * FUN_1493c6e84(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x400,0x10);
  FUN_1493c6ee2(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 1493c6ee2 FUN_1493c6ee2 body=99 status=ok
// SIG undefined FUN_1493c6ee2(void)

undefined8 * FUN_1493c6ee2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14bca7f90;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1493c6f46 FUN_1493c6f46 body=65 status=ok
// SIG undefined FUN_1493c6f46(void)

void FUN_1493c6f46(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x88) & 1) != 0) && (*(char *)(param_1 + 0x3f0) == '\x01')) {
    FUN_1493c6fa6(param_1 + 0x90);
    *(undefined1 *)(param_1 + 0x3f0) = 0;
  }
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 1493c6f88 FUN_1493c6f88 body=29 status=ok
// SIG undefined FUN_1493c6f88(void)

undefined8 FUN_1493c6f88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c6fa6 FUN_1493c6fa6 body=89 status=ok
// SIG undefined FUN_1493c6fa6(void)

void FUN_1493c6fa6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x330) == '\x01') {
    *(undefined1 *)(param_1 + 0x330) = 0;
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c8));
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FUN_1400020a8();
  }
  FUN_145838e00(param_1);
  return;
}



// FUNCTION 1493c7000 FUN_1493c7000 body=209 status=ok
// SIG undefined FUN_1493c7000(void)

longlong FUN_1493c7000(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_14851ac06();
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_2 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined8 *)(param_2 + 0x2c8) = 0;
  cVar1 = *(char *)(param_2 + 0x330);
  *(char *)(param_1 + 0x330) = cVar1;
  if (cVar1 == '\x01') {
    puVar3 = (undefined8 *)(param_2 + 0x2d0);
    puVar4 = (undefined8 *)(param_1 + 0x2d0);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x348);
  *(undefined8 *)(param_2 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x354);
  *(undefined8 *)(param_2 + 0x350) = 0;
  return param_1;
}



// FUNCTION 1493c70d2 FUN_1493c70d2 body=260 status=ok
// SIG undefined FUN_1493c70d2(void)

longlong FUN_1493c70d2(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_146f6bfa8();
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  iVar2 = *(int *)(param_2 + 0x2c8);
  uVar3 = *(undefined8 *)(param_2 + 0x2c0);
  *(int *)(param_1 + 0x2c8) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  else {
    FUN_140b856de((undefined8 *)(param_1 + 0x2c0),iVar2,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x2c0),uVar3,iVar2);
  }
  cVar1 = *(char *)(param_2 + 0x330);
  *(char *)(param_1 + 0x330) = cVar1;
  if (cVar1 == '\x01') {
    puVar5 = (undefined8 *)(param_2 + 0x2d0);
    puVar6 = (undefined8 *)(param_1 + 0x2d0);
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x348) = 0;
  iVar2 = *(int *)(param_2 + 0x350);
  _Src = *(void **)(param_2 + 0x348);
  *(int *)(param_1 + 0x350) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x354) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x348),iVar2,0);
    memcpy(*(void **)(param_1 + 0x348),_Src,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493c71d6 FUN_1493c71d6 body=73 status=ok
// SIG undefined FUN_1493c71d6(void)

void FUN_1493c71d6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1493c721f FUN_1493c721f body=73 status=ok
// SIG undefined FUN_1493c721f(void)

void FUN_1493c721f(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1493c7268 FUN_1493c7268 body=86 status=ok
// SIG undefined FUN_1493c7268(void)

void FUN_1493c7268(longlong param_1,uint param_2)

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



// FUNCTION 1493c72be FUN_1493c72be body=56 status=ok
// SIG undefined FUN_1493c72be(void)

void FUN_1493c72be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001493c72eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1493c72f6 FUN_1493c72f6 body=29 status=ok
// SIG undefined FUN_1493c72f6(void)

undefined8 FUN_1493c72f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c7314 FUN_1493c7314 body=94 status=ok
// SIG undefined FUN_1493c7314(void)

longlong * FUN_1493c7314(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x130,0x10);
  FUN_1493c7372(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 1493c7372 FUN_1493c7372 body=99 status=ok
// SIG undefined FUN_1493c7372(void)

undefined8 * FUN_1493c7372(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14bca8130;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1493c73d6 FUN_1493c73d6 body=65 status=ok
// SIG undefined FUN_1493c73d6(void)

void FUN_1493c73d6(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x88) & 1) != 0) && (*(char *)(param_1 + 0x128) == '\x01')) {
    FUN_1493bcc12(param_1 + 0x90);
    *(undefined1 *)(param_1 + 0x128) = 0;
  }
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 1493c7418 FUN_1493c7418 body=29 status=ok
// SIG undefined FUN_1493c7418(void)

undefined8 FUN_1493c7418(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c7436 FUN_1493c7436 body=132 status=ok
// SIG undefined FUN_1493c7436(void)

void FUN_1493c7436(longlong param_1,int param_2)

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



// FUNCTION 1493c74bc FUN_1493c74bc body=132 status=ok
// SIG undefined FUN_1493c74bc(void)

void FUN_1493c74bc(longlong param_1,int param_2)

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



// FUNCTION 1493c7542 FUN_1493c7542 body=65 status=ok
// SIG undefined FUN_1493c7542(void)

void FUN_1493c7542(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1493c78c8(param_1,iVar1);
  }
  FUN_1493c786d((longlong)iVar1 * 0x80 + *param_1,param_2);
  return;
}



// FUNCTION 1493c7584 FUN_1493c7584 body=349 status=ok
// SIG undefined FUN_1493c7584(void)

longlong * FUN_1493c7584(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
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
      FUN_1493c7757(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1493c7782(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1493ba66a(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1493c76e2(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1493c771c(param_2);
        FUN_1493ba66a(uVar3,param_1);
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



// FUNCTION 1493c76e2 FUN_1493c76e2 body=57 status=ok
// SIG undefined FUN_1493c76e2(void)

void FUN_1493c76e2(undefined8 *param_1,int param_2)

{
  FUN_1493c7757(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1493c7782(param_1,param_2);
  return;
}



// FUNCTION 1493c771c FUN_1493c771c body=59 status=ok
// SIG undefined FUN_1493c771c(void)

longlong FUN_1493c771c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1493c77e8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_1493c77e1(lVar2);
  return lVar2;
}



// FUNCTION 1493c7757 FUN_1493c7757 body=43 status=ok
// SIG undefined FUN_1493c7757(void)

void FUN_1493c7757(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1493c7782 FUN_1493c7782 body=95 status=ok
// SIG undefined FUN_1493c7782(void)

void FUN_1493c7782(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1493c77e1 FUN_1493c77e1 body=7 status=ok
// SIG undefined FUN_1493c77e1(void)

void FUN_1493c77e1(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1493c77e8 FUN_1493c77e8 body=132 status=ok
// SIG undefined FUN_1493c77e8(void)

void FUN_1493c77e8(longlong param_1,int param_2)

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



// FUNCTION 1493c786d FUN_1493c786d body=91 status=ok
// SIG undefined FUN_1493c786d(void)

void FUN_1493c786d(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x70);
    do {
      puVar1[-9] = 0;
      *(undefined4 *)(puVar1 + -8) = 0;
      puVar1[-0xd] = 0;
      puVar1[-0xc] = 0;
      *(undefined8 *)((longlong)puVar1 + -0x3c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar1 + -0x34) = 0;
      puVar1[-5] = 0;
      *(undefined4 *)(puVar1 + -4) = 0;
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *(undefined4 *)(puVar1 + -1) = 0x7f7fffff;
      *(undefined2 *)((longlong)puVar1 + -4) = 0x404;
      puVar1[-0xe] = &DAT_14a176f00;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1493c78c8 FUN_1493c78c8 body=132 status=ok
// SIG undefined FUN_1493c78c8(void)

void FUN_1493c78c8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493c794e FUN_1493c794e body=357 status=ok
// SIG undefined FUN_1493c794e(void)

longlong * FUN_1493c794e(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
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
      FUN_1493c1276(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1493baf84(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x2aaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1493ba678(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x60;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1493c7ab4(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1493b9b72(param_2);
        FUN_1493ba678(uVar3,param_1);
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



// FUNCTION 1493c7ab4 FUN_1493c7ab4 body=57 status=ok
// SIG undefined FUN_1493c7ab4(void)

void FUN_1493c7ab4(undefined8 *param_1,int param_2)

{
  FUN_1493c1276(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1493baf84(param_1,param_2);
  return;
}



// FUNCTION 1493c7aee FUN_1493c7aee body=576 status=ok
// SIG undefined FUN_1493c7aee(void)

undefined8 * FUN_1493c7aee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar3 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1493c690e(param_1 + 2,iVar1,0);
    FUN_1493c6970(param_1[2],uVar3,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar3 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 4,iVar1,0);
    FUN_140b8566a(param_1[4],uVar3,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  uVar3 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1493c69ac(param_1 + 8,iVar1,0);
    FUN_1493c6a1f(param_1[8],uVar3,iVar1);
  }
  param_1[0xc] = param_2[0xc];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar5 = *(undefined4 *)(param_2 + 0xb);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0xb) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar6;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  pvVar2 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_144756262(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 1493c7d2e FUN_1493c7d2e body=146 status=ok
// SIG undefined FUN_1493c7d2e(void)

void FUN_1493c7d2e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493c7dc2 FUN_1493c7dc2 body=95 status=ok
// SIG undefined FUN_1493c7dc2(void)

void FUN_1493c7dc2(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x80 + *param_1);
  FUN_1493c129c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x80 + (longlong)_Dst),(longlong)iVar2 << 7);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1493c7e22 FUN_1493c7e22 body=63 status=ok
// SIG undefined FUN_1493c7e22(void)

void FUN_1493c7e22(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1493c7e62(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,8);
  }
  return;
}



// FUNCTION 1493c7e62 FUN_1493c7e62 body=97 status=ok
// SIG undefined FUN_1493c7e62(void)

ulonglong FUN_1493c7e62(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,8);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 1493c7ec4 FUN_1493c7ec4 body=25 status=ok
// SIG undefined FUN_1493c7ec4(void)

undefined8 FUN_1493c7ec4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  (*(code *)*param_2)(param_1,*param_3);
  return param_1;
}



// FUNCTION 1493c7f08 FUN_1493c7f08 body=29 status=ok
// SIG undefined FUN_1493c7f08(void)

undefined8 FUN_1493c7f08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493c7f26 FUN_1493c7f26 body=138 status=ok
// SIG undefined FUN_1493c7f26(void)

void FUN_1493c7f26(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x40 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
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
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1493c7fb0 FUN_1493c7fb0 body=423 status=ok
// SIG undefined FUN_1493c7fb0(void)

longlong * FUN_1493c7fb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1493c815a(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      puVar4 = (undefined4 *)((longlong)iStack_5c * 0x20 + *local_78);
      iVar2 = (int)param_2[1];
      lVar3 = (longlong)iVar2;
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1493c81ca(param_2,iVar2);
      }
      lVar1 = *param_2;
      *(undefined4 *)(lVar1 + lVar3 * 0x18) = *puVar4;
      *(undefined8 *)(lVar1 + 8 + lVar3 * 0x18) = 0;
      iVar2 = puVar4[4];
      _Src = *(void **)(puVar4 + 2);
      *(int *)(lVar1 + 0x10 + lVar3 * 0x18) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)(lVar1 + lVar3 * 0x18 + 0x14) = 0;
      }
      else {
        puVar5 = (undefined8 *)(lVar1 + lVar3 * 0x18 + 8);
        FUN_144a06ca8(puVar5,iVar2,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar2 << 2);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493c815a FUN_1493c815a body=112 status=ok
// SIG undefined FUN_1493c815a(void)

void FUN_1493c815a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1493c81ca FUN_1493c81ca body=147 status=ok
// SIG undefined FUN_1493c81ca(void)

void FUN_1493c81ca(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493c825e FUN_1493c825e body=47 status=ok
// SIG undefined FUN_1493c825e(void)

void FUN_1493c825e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1493c828e FUN_1493c828e body=146 status=ok
// SIG undefined FUN_1493c828e(void)

void FUN_1493c828e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x2c0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2c0)) {
      uVar5 = uVar4 / 0x2c0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2c0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493c8322 FUN_1493c8322 body=190 status=ok
// SIG undefined FUN_1493c8322(void)

longlong FUN_1493c8322(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1493c83c3;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1493c83e2(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1493c83c3:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1493c83e2 FUN_1493c83e2 body=310 status=ok
// SIG undefined FUN_1493c83e2(void)

undefined4 *
FUN_1493c83e2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1493c851a(param_1,local_58);
  *local_50 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_50 + 2) = 0;
  *(undefined8 *)(local_50 + 4) = 0;
  FUN_1447a1747(0,0);
  local_50[6] = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1493c8600(param_1,param_3,local_50,local_58);
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
      local_50[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_50[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1493c8750(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c851a FUN_1493c851a body=229 status=ok
// SIG undefined FUN_1493c851a(void)

int * FUN_1493c851a(longlong *param_1,int *param_2)

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



// FUNCTION 1493c8600 FUN_1493c8600 body=198 status=ok
// SIG undefined FUN_1493c8600(void)

void FUN_1493c8600(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          FUN_1447a1747(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1493c86c6(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1493c8671;
        }
        iVar8 = piVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1493c8671:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1493c86c6 FUN_1493c86c6 body=138 status=ok
// SIG undefined FUN_1493c86c6(void)

void FUN_1493c86c6(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1493c8750 FUN_1493c8750 body=422 status=ok
// SIG undefined FUN_1493c8750(void)

void FUN_1493c8750(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1493c88f8 FUN_1493c88f8 body=283 status=ok
// SIG undefined FUN_1493c88f8(void)

undefined4 * FUN_1493c88f8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1493c8a14(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_1493c8afa(param_1,uVar4,local_40,&local_4c);
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
      local_40[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1493c8c0a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493c8a14 FUN_1493c8a14 body=229 status=ok
// SIG undefined FUN_1493c8a14(void)

int * FUN_1493c8a14(longlong *param_1,int *param_2)

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



// FUNCTION 1493c8afa FUN_1493c8afa body=157 status=ok
// SIG undefined FUN_1493c8afa(void)

undefined8 FUN_1493c8afa(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1493c8b98(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1493c8b98 FUN_1493c8b98 body=114 status=ok
// SIG undefined FUN_1493c8b98(void)

void FUN_1493c8b98(longlong *param_1,int param_2)

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



// FUNCTION 1493c8c0a FUN_1493c8c0a body=422 status=ok
// SIG undefined FUN_1493c8c0a(void)

void FUN_1493c8c0a(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1493c8db6 FUN_1493c8db6 body=148 status=ok
// SIG undefined FUN_1493c8db6(void)

undefined8 FUN_1493c8db6(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0xa0 + lVar2;
    do {
      if ((longlong)*(int *)(lVar2 + 0x28) != 0) {
        piVar5 = *(int **)(lVar2 + 0x20);
        piVar1 = piVar5 + (longlong)*(int *)(lVar2 + 0x28) * 6;
        do {
          if ((*piVar5 < param_3 && -1 < *piVar5) && ((longlong)piVar5[4] != 0)) {
            lVar4 = 0;
            do {
              if (-1 < *(int *)(*(longlong *)(piVar5 + 2) + lVar4) &&
                  *(int *)(*(longlong *)(piVar5 + 2) + lVar4) < param_2) {
                return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
              }
              lVar4 = lVar4 + 4;
            } while ((longlong)piVar5[4] * 4 != lVar4);
          }
          piVar5 = piVar5 + 6;
        } while (piVar5 != piVar1);
      }
      lVar2 = lVar2 + 0xa0;
    } while (lVar2 != lVar3);
  }
  return 0;
}



// FUNCTION 1493c8e4a FUN_1493c8e4a body=4248 status=ok
// SIG undefined FUN_1493c8e4a(void)

/* WARNING: Removing unreachable block (ram,0x0001493c9abe) */
/* WARNING: Removing unreachable block (ram,0x0001493c9858) */
/* WARNING: Removing unreachable block (ram,0x0001493c95da) */
/* WARNING: Removing unreachable block (ram,0x0001493c936a) */
/* WARNING: Removing unreachable block (ram,0x0001493c9231) */
/* WARNING: Removing unreachable block (ram,0x0001493c94a2) */
/* WARNING: Removing unreachable block (ram,0x0001493c971a) */
/* WARNING: Removing unreachable block (ram,0x0001493c9984) */
/* WARNING: Removing unreachable block (ram,0x0001493c9dbe) */
/* WARNING: Removing unreachable block (ram,0x0001493c9ad0) */
/* WARNING: Removing unreachable block (ram,0x0001493c986a) */
/* WARNING: Removing unreachable block (ram,0x0001493c95ec) */
/* WARNING: Removing unreachable block (ram,0x0001493c937c) */
/* WARNING: Removing unreachable block (ram,0x0001493c9243) */
/* WARNING: Removing unreachable block (ram,0x0001493c94b4) */
/* WARNING: Removing unreachable block (ram,0x0001493c972c) */
/* WARNING: Removing unreachable block (ram,0x0001493c9996) */
/* WARNING: Removing unreachable block (ram,0x0001493c9dd0) */

void FUN_1493c8e4a(undefined4 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *_Src;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_298 [40];
  longlong local_270;
  undefined4 *local_268;
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [23];
  undefined1 local_209;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  longlong *local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined1 local_170;
  undefined4 local_16c;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108 [4];
  undefined8 local_e8;
  int local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (DAT_14cad8288 == 0) goto LAB_1493c8e81;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_270 = param_2;
  local_268 = param_1;
  if ((longlong)*(int *)(param_2 + 400) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x188);
    lVar9 = (longlong)*(int *)(param_2 + 400) << 5;
    do {
      FUN_1493c9ee4(local_108,lVar8);
      local_198 = local_108;
      local_190 = local_108 + 2;
      FUN_140ac5c08(&local_b8,&local_128,&local_198,0);
      if (local_108[2] != 0) {
        FUN_1400020a8();
      }
      if (local_108[0] != 0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x20;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  lVar8 = local_270;
  local_e8 = 0;
  local_e0 = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_138 = *(undefined8 *)(local_270 + 0x100);
  local_130 = *(undefined4 *)(local_270 + 0x108);
  FUN_14282d1cc(local_108);
  local_148 = *(undefined8 *)(lVar8 + 0x110);
  local_140 = *(undefined4 *)(lVar8 + 0x118);
  FUN_14282d1cc(local_108);
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  plVar7 = local_108 + 2;
  local_128 = 0x100000000;
  local_118 = 0xffffffff;
  local_110 = 0;
  iVar11 = 0;
  uStack_120 = plVar7;
  if (local_e0 != 0) {
    FUN_1449c0562(&local_128);
    iVar11 = local_e0;
  }
  local_180 = local_118;
  uVar4 = local_180;
  local_178 = local_110;
  uStack_174 = local_10c;
  local_190 = (longlong *)local_128;
  local_188 = uStack_120;
  local_198 = local_108;
  local_180._4_4_ = (int)((ulonglong)local_118 >> 0x20);
  if ((local_180._4_4_ != iVar11) || (uStack_120 != plVar7)) {
    iVar6 = local_180._4_4_;
    local_180 = uVar4;
    do {
      puVar10 = (undefined8 *)((longlong)iVar6 * 0x18 + *local_198);
      iVar6 = FUN_144a075de(&DAT_14cc137a8,puVar10);
      uVar3 = uStack_150;
      uVar2 = uStack_160;
      if (iVar6 == -1) {
        iVar6 = (int)uStack_160;
        uVar5 = (int)uStack_160 + 1;
        uStack_160 = CONCAT44(uStack_160._4_4_,uVar5);
        lVar8 = local_168;
        if (uStack_160._4_4_ < uVar5) {
          FUN_1447a1bd6(&local_168,uVar2 & 0xffffffff);
          lVar8 = local_168;
        }
      }
      else {
        iVar6 = (int)uStack_150;
        uVar5 = (int)uStack_150 + 1;
        uStack_150 = CONCAT44(uStack_150._4_4_,uVar5);
        lVar8 = local_158;
        if (uStack_150._4_4_ < uVar5) {
          FUN_1447a1bd6(&local_158,uVar3 & 0xffffffff);
          lVar8 = local_158;
        }
      }
      lVar9 = (longlong)iVar6 * 0x10;
      puVar1 = (undefined8 *)(lVar8 + lVar9);
      *(undefined8 *)(lVar8 + lVar9) = 0;
      iVar6 = *(int *)(puVar10 + 1);
      _Src = (void *)*puVar10;
      *(int *)(lVar8 + 8 + lVar9) = iVar6;
      if ((longlong)iVar6 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar6,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar6 * 2);
      }
      local_180 = CONCAT44(local_180._4_4_,(uint)local_180 & ~local_190._4_4_);
      FUN_1449c0562(&local_190);
      iVar6 = local_180._4_4_;
      uVar4 = local_180;
    } while (local_198 != local_108 || (local_188 != plVar7 || local_180._4_4_ != iVar11));
  }
  local_180 = uVar4;
  lVar8 = local_270;
  local_128 = 0;
  uStack_120 = (longlong *)0x0;
  if (0 < *(int *)(local_270 + 0x108)) {
    lVar9 = local_270 + 0x100;
    FUN_140056680(local_1a8,L"ExtensionsUsed");
    FUN_1493c9f80(&local_198,local_1a8,lVar9);
    lVar9 = (longlong)(int)uStack_120;
    uVar5 = (int)uStack_120 + 1;
    uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,uVar5);
    if (uStack_120._4_4_ < uVar5) {
      FUN_146b17dba(&local_128);
    }
    lVar9 = lVar9 * 0x30;
    *(undefined8 *)(local_128 + lVar9) = 0;
    *(longlong **)(local_128 + lVar9) = local_198;
    *(undefined4 *)(local_128 + 8 + lVar9) = (undefined4)local_190;
    *(uint *)(local_128 + 0xc + lVar9) = local_190._4_4_;
    *(undefined8 *)(local_128 + 0x10 + lVar9) = 0;
    *(longlong **)(local_128 + 0x10 + lVar9) = local_188;
    *(uint *)(local_128 + 0x18 + lVar9) = (uint)local_180;
    *(int *)(local_128 + 0x1c + lVar9) = local_180._4_4_;
    *(ulonglong *)(local_128 + 0x20 + lVar9) = CONCAT44(uStack_174,local_178);
    *(undefined1 *)(local_128 + 0x28 + lVar9) = local_170;
    *(undefined4 *)(local_128 + 0x2c + lVar9) = local_16c;
    local_180 = 0;
    local_188 = (longlong *)0x0;
    local_190 = (longlong *)0x0;
    local_198 = (longlong *)0x0;
  }
  if (0 < *(int *)(lVar8 + 0x118)) {
    FUN_140056680(local_1b8,L"ExtensionsRequired");
    FUN_1493c9f80(&local_198,local_1b8,lVar8 + 0x110);
    lVar9 = (longlong)(int)uStack_120;
    uVar5 = (int)uStack_120 + 1;
    uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,uVar5);
    if (uStack_120._4_4_ < uVar5) {
      FUN_146b17dba(&local_128);
    }
    lVar9 = lVar9 * 0x30;
    *(undefined8 *)(local_128 + lVar9) = 0;
    *(longlong **)(local_128 + lVar9) = local_198;
    *(undefined4 *)(local_128 + 8 + lVar9) = (undefined4)local_190;
    *(uint *)(local_128 + 0xc + lVar9) = local_190._4_4_;
    *(undefined8 *)(local_128 + 0x10 + lVar9) = 0;
    *(longlong **)(local_128 + 0x10 + lVar9) = local_188;
    *(uint *)(local_128 + 0x18 + lVar9) = (uint)local_180;
    *(int *)(local_128 + 0x1c + lVar9) = local_180._4_4_;
    *(ulonglong *)(local_128 + 0x20 + lVar9) = CONCAT44(uStack_174,local_178);
    *(undefined1 *)(local_128 + 0x28 + lVar9) = local_170;
    *(undefined4 *)(local_128 + 0x2c + lVar9) = local_16c;
    local_180 = 0;
    local_188 = (longlong *)0x0;
    local_190 = (longlong *)0x0;
    local_198 = (longlong *)0x0;
  }
  if (0 < (int)uStack_150) {
    FUN_140056680(local_1c8,L"ExtensionsSupported");
    FUN_1493c9fde(&local_198,local_1c8,&local_158);
    lVar9 = (longlong)(int)uStack_120;
    uVar5 = (int)uStack_120 + 1;
    uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,uVar5);
    if (uStack_120._4_4_ < uVar5) {
      FUN_146b17dba(&local_128);
    }
    lVar9 = lVar9 * 0x30;
    *(undefined8 *)(local_128 + lVar9) = 0;
    *(longlong **)(local_128 + lVar9) = local_198;
    *(undefined4 *)(local_128 + 8 + lVar9) = (undefined4)local_190;
    *(uint *)(local_128 + 0xc + lVar9) = local_190._4_4_;
    *(undefined8 *)(local_128 + 0x10 + lVar9) = 0;
    *(longlong **)(local_128 + 0x10 + lVar9) = local_188;
    *(uint *)(local_128 + 0x18 + lVar9) = (uint)local_180;
    *(int *)(local_128 + 0x1c + lVar9) = local_180._4_4_;
    *(ulonglong *)(local_128 + 0x20 + lVar9) = CONCAT44(uStack_174,local_178);
    *(undefined1 *)(local_128 + 0x28 + lVar9) = local_170;
    *(undefined4 *)(local_128 + 0x2c + lVar9) = local_16c;
    local_180 = 0;
    local_188 = (longlong *)0x0;
    local_190 = (longlong *)0x0;
    local_198 = (longlong *)0x0;
  }
  if (0 < (int)uStack_160) {
    FUN_140056680(local_1d8,L"ExtensionsUnsupported");
    FUN_1493c9fde(&local_198,local_1d8,&local_168);
    lVar9 = (longlong)(int)uStack_120;
    uVar5 = (int)uStack_120 + 1;
    uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,uVar5);
    if (uStack_120._4_4_ < uVar5) {
      FUN_146b17dba(&local_128);
    }
    lVar9 = lVar9 * 0x30;
    *(undefined8 *)(local_128 + lVar9) = 0;
    *(longlong **)(local_128 + lVar9) = local_198;
    *(undefined4 *)(local_128 + 8 + lVar9) = (undefined4)local_190;
    *(uint *)(local_128 + 0xc + lVar9) = local_190._4_4_;
    *(undefined8 *)(local_128 + 0x10 + lVar9) = 0;
    *(longlong **)(local_128 + 0x10 + lVar9) = local_188;
    *(uint *)(local_128 + 0x18 + lVar9) = (uint)local_180;
    *(int *)(local_128 + 0x1c + lVar9) = local_180._4_4_;
    *(ulonglong *)(local_128 + 0x20 + lVar9) = CONCAT44(uStack_174,local_178);
    *(undefined1 *)(local_128 + 0x28 + lVar9) = local_170;
    *(undefined4 *)(local_128 + 0x2c + lVar9) = local_16c;
    local_180 = 0;
    local_188 = (longlong *)0x0;
    local_190 = (longlong *)0x0;
    local_198 = (longlong *)0x0;
  }
  if (*(int *)(lVar8 + 0x178) - 2U < 0x7fffffff) {
    FUN_140056680(local_1e8,L"MetaData.GeneratorName");
    FUN_146b280ea(&local_198,local_1e8,lVar8 + 0x170);
    lVar9 = (longlong)(int)uStack_120;
    uVar5 = (int)uStack_120 + 1;
    uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,uVar5);
    if (uStack_120._4_4_ < uVar5) {
      FUN_146b17dba(&local_128);
    }
    lVar9 = lVar9 * 0x30;
    *(undefined8 *)(local_128 + lVar9) = 0;
    *(longlong **)(local_128 + lVar9) = local_198;
    *(undefined4 *)(local_128 + 8 + lVar9) = (undefined4)local_190;
    *(uint *)(local_128 + 0xc + lVar9) = local_190._4_4_;
    *(undefined8 *)(local_128 + 0x10 + lVar9) = 0;
    *(longlong **)(local_128 + 0x10 + lVar9) = local_188;
    *(uint *)(local_128 + 0x18 + lVar9) = (uint)local_180;
    *(int *)(local_128 + 0x1c + lVar9) = local_180._4_4_;
    *(ulonglong *)(local_128 + 0x20 + lVar9) = CONCAT44(uStack_174,local_178);
    *(undefined1 *)(local_128 + 0x28 + lVar9) = local_170;
    *(undefined4 *)(local_128 + 0x2c + lVar9) = local_16c;
    local_180 = 0;
    local_188 = (longlong *)0x0;
    local_190 = (longlong *)0x0;
    local_198 = (longlong *)0x0;
  }
  if (local_84 < (int)uStack_b0) {
    FUN_140056680(local_1f8,L"MetaData.Extras");
    FUN_1493ca03c(&local_198,local_1f8,&local_b8);
    lVar9 = (longlong)(int)uStack_120;
    uVar5 = (int)uStack_120 + 1;
    uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,uVar5);
    if (uStack_120._4_4_ < uVar5) {
      FUN_146b17dba(&local_128);
    }
    lVar9 = lVar9 * 0x30;
    *(undefined8 *)(local_128 + lVar9) = 0;
    *(longlong **)(local_128 + lVar9) = local_198;
    *(undefined4 *)(local_128 + 8 + lVar9) = (undefined4)local_190;
    *(uint *)(local_128 + 0xc + lVar9) = local_190._4_4_;
    *(undefined8 *)(local_128 + 0x10 + lVar9) = 0;
    *(longlong **)(local_128 + 0x10 + lVar9) = local_188;
    *(uint *)(local_128 + 0x18 + lVar9) = (uint)local_180;
    *(int *)(local_128 + 0x1c + lVar9) = local_180._4_4_;
    *(ulonglong *)(local_128 + 0x20 + lVar9) = CONCAT44(uStack_174,local_178);
    *(undefined1 *)(local_128 + 0x28 + lVar9) = local_170;
    *(undefined4 *)(local_128 + 0x2c + lVar9) = local_16c;
    local_180 = 0;
    local_188 = (longlong *)0x0;
    local_190 = (longlong *)0x0;
    local_198 = (longlong *)0x0;
  }
  FUN_140056680(local_208,L"MetaData.Version");
  FUN_1479a6dbe(&local_198,local_208,lVar8 + 0x180);
  lVar9 = (longlong)(int)uStack_120;
  uVar5 = (int)uStack_120 + 1;
  uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,uVar5);
  if (uStack_120._4_4_ < uVar5) {
    FUN_146b17dba(&local_128);
  }
  lVar9 = lVar9 * 0x30;
  *(undefined8 *)(local_128 + lVar9) = 0;
  *(longlong **)(local_128 + lVar9) = local_198;
  *(undefined4 *)(local_128 + 8 + lVar9) = (undefined4)local_190;
  *(uint *)(local_128 + 0xc + lVar9) = local_190._4_4_;
  *(undefined8 *)(local_128 + 0x10 + lVar9) = 0;
  *(longlong **)(local_128 + 0x10 + lVar9) = local_188;
  *(uint *)(local_128 + 0x18 + lVar9) = (uint)local_180;
  *(int *)(local_128 + 0x1c + lVar9) = local_180._4_4_;
  *(ulonglong *)(local_128 + 0x20 + lVar9) = CONCAT44(uStack_174,local_178);
  *(undefined1 *)(local_128 + 0x28 + lVar9) = local_170;
  *(undefined4 *)(local_128 + 0x2c + lVar9) = local_16c;
  local_180 = 0;
  local_188 = (longlong *)0x0;
  local_190 = (longlong *)0x0;
  local_198 = (longlong *)0x0;
  if (*(char *)(lVar8 + 0x198) == '\x01') {
    local_209 = 1;
    FUN_140056680(local_220,L"HasAbnormalInverseBindMatrices");
    FUN_146b28186(&local_198,local_220,&local_209);
    lVar8 = (longlong)(int)uStack_120;
    uVar5 = (int)uStack_120 + 1;
    uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,uVar5);
    if (uStack_120._4_4_ < uVar5) {
      FUN_146b17dba(&local_128);
    }
    lVar8 = lVar8 * 0x30;
    *(undefined8 *)(local_128 + lVar8) = 0;
    *(longlong **)(local_128 + lVar8) = local_198;
    *(undefined4 *)(local_128 + 8 + lVar8) = (undefined4)local_190;
    *(uint *)(local_128 + 0xc + lVar8) = local_190._4_4_;
    *(undefined8 *)(local_128 + 0x10 + lVar8) = 0;
    *(longlong **)(local_128 + 0x10 + lVar8) = local_188;
    *(uint *)(local_128 + 0x18 + lVar8) = (uint)local_180;
    *(int *)(local_128 + 0x1c + lVar8) = local_180._4_4_;
    *(ulonglong *)(local_128 + 0x20 + lVar8) = CONCAT44(uStack_174,local_178);
    *(undefined1 *)(local_128 + 0x28 + lVar8) = local_170;
    *(undefined4 *)(local_128 + 0x2c + lVar8) = local_16c;
  }
  local_180 = 0;
  local_188 = (longlong *)0x0;
  local_190 = (longlong *)0x0;
  local_198 = (longlong *)0x0;
  switch(*local_268) {
  case 0:
    FUN_140056680(local_230,L"TranslationStatus");
    FUN_1493ca09a(&local_198);
    break;
  case 1:
    FUN_140056680(local_240,L"TranslationStatus");
    FUN_1493ca0fc(&local_198);
    break;
  case 2:
    FUN_140056680(local_250,L"TranslationStatus");
    FUN_1493ca15e(&local_198);
    break;
  case 3:
    FUN_140056680(local_260,L"TranslationStatus");
    FUN_1493ca1c0(&local_198);
    break;
  default:
    goto switchD_1493c9af4_default;
  }
  lVar8 = (longlong)(int)uStack_120;
  uVar5 = (int)uStack_120 + 1;
  uStack_120 = (longlong *)CONCAT44(uStack_120._4_4_,uVar5);
  if (uStack_120._4_4_ < uVar5) {
    FUN_146b17dba(&local_128);
  }
  lVar8 = lVar8 * 0x30;
  *(undefined8 *)(local_128 + lVar8) = 0;
  *(longlong **)(local_128 + lVar8) = local_198;
  *(undefined4 *)(local_128 + 8 + lVar8) = (undefined4)local_190;
  *(uint *)(local_128 + 0xc + lVar8) = local_190._4_4_;
  *(undefined8 *)(local_128 + 0x10 + lVar8) = 0;
  *(longlong **)(local_128 + 0x10 + lVar8) = local_188;
  *(uint *)(local_128 + 0x18 + lVar8) = (uint)local_180;
  *(int *)(local_128 + 0x1c + lVar8) = local_180._4_4_;
  *(ulonglong *)(local_128 + 0x20 + lVar8) = CONCAT44(uStack_174,local_178);
  *(undefined1 *)(local_128 + 0x28 + lVar8) = local_170;
  *(undefined4 *)(local_128 + 0x2c + lVar8) = local_16c;
switchD_1493c9af4_default:
  local_180 = 0;
  local_188 = (longlong *)0x0;
  local_190 = (longlong *)0x0;
  local_198 = (longlong *)0x0;
  plVar7 = (longlong *)FUN_147a89392();
  FUN_140056680(&local_198,L"Interchange.Usage.Import.GLTF");
  (**(code **)(*plVar7 + 0xf0))(plVar7,&local_198,&local_128);
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(local_128,(ulonglong)uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_168,uStack_160 & 0xffffffff);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_158,uStack_150 & 0xffffffff);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_b8);
LAB_1493c8e81:
  if ((local_60 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


