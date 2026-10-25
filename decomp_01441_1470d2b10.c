// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1470d2b10 FUN_1470d2b10 body=59 status=ok
// SIG undefined FUN_1470d2b10(void)

undefined8 FUN_1470d2b10(longlong *param_1)

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



// FUNCTION 1470d2bbc FUN_1470d2bbc body=46 status=ok
// SIG undefined FUN_1470d2bbc(void)

void FUN_1470d2bbc(undefined8 param_1,longlong param_2)

{
  FUN_140da25d9(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470d2c00 FUN_1470d2c00 body=54 status=ok
// SIG undefined FUN_1470d2c00(void)

undefined1 FUN_1470d2c00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470d2cfa(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1470d2c5e FUN_1470d2c5e body=59 status=ok
// SIG undefined FUN_1470d2c5e(void)

undefined8 FUN_1470d2c5e(longlong *param_1)

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



// FUNCTION 1470d2cfa FUN_1470d2cfa body=76 status=ok
// SIG undefined FUN_1470d2cfa(void)

longlong * FUN_1470d2cfa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_1470d2d46(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1470d2d46 FUN_1470d2d46 body=93 status=ok
// SIG undefined FUN_1470d2d46(void)

undefined8 * FUN_1470d2d46(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140da25d9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470d2da4(param_1,iVar1);
      FUN_1470d2e06(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470d2da4 FUN_1470d2da4 body=98 status=ok
// SIG undefined FUN_1470d2da4(void)

void FUN_1470d2da4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470d2e06 FUN_1470d2e06 body=52 status=ok
// SIG undefined FUN_1470d2e06(void)

void FUN_1470d2e06(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1470d2e3a(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1470d2e3a FUN_1470d2e3a body=110 status=ok
// SIG undefined FUN_1470d2e3a(void)

undefined4 * FUN_1470d2e3a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1408fdf90(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 1470d2eaa FUN_1470d2eaa body=50 status=ok
// SIG undefined FUN_1470d2eaa(void)

void FUN_1470d2eaa(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_140da25d9(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1470d2f0a FUN_1470d2f0a body=114 status=ok
// SIG undefined FUN_1470d2f0a(void)

undefined1 FUN_1470d2f0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470d2fa4 FUN_1470d2fa4 body=110 status=ok
// SIG undefined FUN_1470d2fa4(void)

void FUN_1470d2fa4(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  FUN_144a78877(uVar1 >> 0x10 ^ uVar1,(int)param_2[1]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d30a8 FUN_1470d30a8 body=63 status=ok
// SIG undefined FUN_1470d30a8(void)

undefined1 FUN_1470d30a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470d31d0(param_2,param_3);
    param_3 = param_3 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return 1;
}



// FUNCTION 1470d3110 FUN_1470d3110 body=59 status=ok
// SIG undefined FUN_1470d3110(void)

undefined8 FUN_1470d3110(longlong *param_1)

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



// FUNCTION 1470d315c FUN_1470d315c body=38 status=ok
// SIG undefined FUN_1470d315c(void)

void FUN_1470d315c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x208) == '\x01') {
    FUN_140da24b4(param_2);
    *(undefined1 *)(param_2 + 0x208) = 0;
  }
  return;
}



// FUNCTION 1470d31d0 FUN_1470d31d0 body=232 status=ok
// SIG undefined FUN_1470d31d0(void)

undefined2 * FUN_1470d31d0(undefined2 *param_1,undefined2 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = *param_2;
  FUN_14054c6c4(param_1 + 4,param_2 + 4);
  FUN_1470d3316(param_1 + 0xc,param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  lVar5 = *(longlong *)(param_2 + 0xc4);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xc4);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(longlong *)(param_1 + 0xc4) = lVar5;
  if (plVar4 != (longlong *)0x0) {
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
  }
  FUN_140e00d48(param_1 + 200,param_2 + 200);
  FUN_1470d32b8(param_1 + 0xd0,param_2 + 0xd0);
  lVar5 = *(longlong *)(param_2 + 0xd8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0xd8);
    }
  }
  *(longlong *)(param_1 + 0xd8) = lVar5;
  FUN_1470d3b9c(param_1 + 0xdc,param_2 + 0xdc);
  return param_1;
}



// FUNCTION 1470d32b8 FUN_1470d32b8 body=93 status=ok
// SIG undefined FUN_1470d32b8(void)

undefined8 * FUN_1470d32b8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140da259f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470d3a8a(param_1,iVar1);
      FUN_1470d3aec(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470d3316 FUN_1470d3316 body=369 status=ok
// SIG undefined FUN_1470d3316(void)

longlong FUN_1470d3316(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_140816ffa();
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x10,param_2 + 0x10);
  }
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  uVar8 = *(undefined4 *)(param_2 + 0x38);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = *(undefined4 *)(param_2 + 0x44);
  uVar11 = *(undefined4 *)(param_2 + 0x48);
  uVar12 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  *(undefined4 *)(param_1 + 0x48) = uVar11;
  *(undefined4 *)(param_1 + 0x4c) = uVar12;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  FUN_14054c6c4(param_1 + 0x50,param_2 + 0x50);
  FUN_14054c6c4(param_1 + 0x60,param_2 + 0x60);
  FUN_14054c6c4(param_1 + 0x70,param_2 + 0x70);
  FUN_140472df2(param_1 + 0x80,param_2 + 0x80);
  FUN_140472df2(param_1 + 0x90,param_2 + 0x90);
  FUN_1470d3488(param_1 + 0xa0,param_2 + 0xa0);
  FUN_140de4c12(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  FUN_1470d35ca(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  lVar4 = *(longlong *)(param_2 + 0xf0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(longlong *)(param_1 + 0xf0) = lVar4;
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
  *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  FUN_1470d3698(param_1 + 0x100,param_2 + 0x100);
  if (param_1 != param_2) {
    FUN_1470d3958(param_1 + 0x150,param_2 + 0x150);
  }
  return param_1;
}



// FUNCTION 1470d3488 FUN_1470d3488 body=89 status=ok
// SIG undefined FUN_1470d3488(void)

undefined8 * FUN_1470d3488(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470d34e2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1470d34e2 FUN_1470d34e2 body=115 status=ok
// SIG undefined FUN_1470d34e2(void)

void FUN_1470d34e2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470d3556 FUN_1470d3556 body=115 status=ok
// SIG undefined FUN_1470d3556(void)

void FUN_1470d3556(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470d35ca FUN_1470d35ca body=89 status=ok
// SIG undefined FUN_1470d35ca(void)

undefined8 * FUN_1470d35ca(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470d3624(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1470d3624 FUN_1470d3624 body=115 status=ok
// SIG undefined FUN_1470d3624(void)

void FUN_1470d3624(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470d3698 FUN_1470d3698 body=122 status=ok
// SIG undefined FUN_1470d3698(void)

longlong FUN_1470d3698(longlong param_1,longlong param_2)

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
    FUN_1470d3712(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1470d3712 FUN_1470d3712 body=304 status=ok
// SIG undefined FUN_1470d3712(void)

longlong * FUN_1470d3712(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_1406cb7f2(param_1,(ulonglong)uVar3);
    lVar8 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar8 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar8) < uVar3) {
      FUN_1406cd6a8(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar3) {
      lVar8 = *param_1;
      lVar4 = *param_2;
      lVar11 = 0;
      uVar10 = 0;
      do {
        plVar9 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar9 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar9 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar8 + lVar11) = *(undefined4 *)(lVar4 + lVar11);
          *(undefined4 *)(lVar8 + 4 + lVar11) = *(undefined4 *)(lVar4 + 4 + lVar11);
        }
        else {
          puVar1 = (undefined8 *)(lVar11 + lVar8 + 0x38);
          puVar2 = (undefined4 *)(lVar4 + lVar11);
          puVar1[-5] = *(undefined8 *)(puVar2 + 4);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          *(undefined4 *)(puVar1 + -7) = *puVar2;
          *(undefined4 *)((longlong)puVar1 + -0x34) = uVar5;
          *(undefined4 *)(puVar1 + -6) = uVar6;
          *(undefined4 *)((longlong)puVar1 + -0x2c) = uVar7;
          FUN_1470d3842(lVar8 + 0x18 + lVar11,lVar4 + 0x18 + lVar11);
          *puVar1 = *(undefined8 *)(puVar2 + 0xe);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x40;
      } while (uVar3 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 1470d3842 FUN_1470d3842 body=161 status=ok
// SIG undefined FUN_1470d3842(void)

undefined8 * FUN_1470d3842(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1470d38e4(param_1,iVar1,0);
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
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1470d38e4 FUN_1470d38e4 body=115 status=ok
// SIG undefined FUN_1470d38e4(void)

void FUN_1470d38e4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,0x10);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470d3958 FUN_1470d3958 body=304 status=ok
// SIG undefined FUN_1470d3958(void)

void FUN_1470d3958(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1470d3a8a FUN_1470d3a8a body=98 status=ok
// SIG undefined FUN_1470d3a8a(void)

void FUN_1470d3a8a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470d3aec FUN_1470d3aec body=52 status=ok
// SIG undefined FUN_1470d3aec(void)

void FUN_1470d3aec(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1470d3b20(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1470d3b20 FUN_1470d3b20 body=123 status=ok
// SIG undefined FUN_1470d3b20(void)

longlong * FUN_1470d3b20(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  lVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1470d2da4(param_1 + 2,iVar1,0);
    FUN_1470d2e06(param_1[2],lVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1470d3b9c FUN_1470d3b9c body=122 status=ok
// SIG undefined FUN_1470d3b9c(void)

longlong FUN_1470d3b9c(longlong param_1,longlong param_2)

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
    FUN_1470d3c16(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1470d3c16 FUN_1470d3c16 body=211 status=ok
// SIG undefined FUN_1470d3c16(void)

undefined8 * FUN_1470d3c16(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140da2608(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140044672(param_1);
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
          FUN_1470d3cea(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar4 + 10);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xc;
        puVar6 = puVar6 + 0xc;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1470d3cea FUN_1470d3cea body=106 status=ok
// SIG undefined FUN_1470d3cea(void)

longlong * FUN_1470d3cea(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar2 = DAT_14c950c29;
  *(int *)(param_1 + 1) = (int)param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_14689c22e();
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(int *)(param_1 + 4) = (int)param_2[4];
  return param_1;
}



// FUNCTION 1470d3dd6 FUN_1470d3dd6 body=59 status=ok
// SIG undefined FUN_1470d3dd6(void)

undefined8 FUN_1470d3dd6(longlong *param_1)

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



// FUNCTION 1470d3e76 FUN_1470d3e76 body=55 status=ok
// SIG undefined FUN_1470d3e76(void)

void FUN_1470d3e76(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5840 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5840 = FUN_140002ddd(FUN_1462aecc5,uVar1,L"GbxPrimaryPlayerValueResolver");
  }
  return;
}



// FUNCTION 1470d3f54 FUN_1470d3f54 body=59 status=ok
// SIG undefined FUN_1470d3f54(void)

undefined8 FUN_1470d3f54(longlong *param_1)

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



// FUNCTION 1470d405c FUN_1470d405c body=59 status=ok
// SIG undefined FUN_1470d405c(void)

undefined8 FUN_1470d405c(longlong *param_1)

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



// FUNCTION 1470d412c FUN_1470d412c body=62 status=ok
// SIG undefined FUN_1470d412c(void)

undefined1 FUN_1470d412c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1470d42aa(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470d4192 FUN_1470d4192 body=59 status=ok
// SIG undefined FUN_1470d4192(void)

undefined8 FUN_1470d4192(longlong *param_1)

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



// FUNCTION 1470d41d8 FUN_1470d41d8 body=48 status=ok
// SIG undefined FUN_1470d41d8(void)

void FUN_1470d41d8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a1bef30;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1470d4256 FUN_1470d4256 body=55 status=ok
// SIG undefined FUN_1470d4256(void)

void FUN_1470d4256(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5958 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5958 = FUN_140002ddd(FUN_1462af083,uVar1,L"GbxSelectorValueResolver");
  }
  return;
}



// FUNCTION 1470d42aa FUN_1470d42aa body=79 status=ok
// SIG undefined FUN_1470d42aa(void)

undefined8 * FUN_1470d42aa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470d42fa(param_1,iVar1);
      FUN_145d27cee(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470d42fa FUN_1470d42fa body=115 status=ok
// SIG undefined FUN_1470d42fa(void)

void FUN_1470d42fa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470d43e0 FUN_1470d43e0 body=59 status=ok
// SIG undefined FUN_1470d43e0(void)

undefined8 FUN_1470d43e0(longlong *param_1)

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



// FUNCTION 1470d44f2 FUN_1470d44f2 body=63 status=ok
// SIG undefined FUN_1470d44f2(void)

undefined1 FUN_1470d44f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470d4606(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1470d455a FUN_1470d455a body=59 status=ok
// SIG undefined FUN_1470d455a(void)

undefined8 FUN_1470d455a(longlong *param_1)

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



// FUNCTION 1470d45a6 FUN_1470d45a6 body=38 status=ok
// SIG undefined FUN_1470d45a6(void)

void FUN_1470d45a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_14099dbda(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1470d4606 FUN_1470d4606 body=160 status=ok
// SIG undefined FUN_1470d4606(void)

longlong FUN_1470d4606(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  lVar1 = *(longlong *)(param_2 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) {
    if (lVar2 == 0) goto LAB_1470d468b;
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
  }
  else {
    if (lVar2 == lVar1) goto LAB_1470d468b;
    if ((lVar2 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar1);
  }
  *(longlong *)(param_1 + 0x48) = lVar1;
LAB_1470d468b:
  FUN_1470d46a6(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 1470d46a6 FUN_1470d46a6 body=122 status=ok
// SIG undefined FUN_1470d46a6(void)

longlong FUN_1470d46a6(longlong param_1,longlong param_2)

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
    FUN_1470d4720(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1470d4720 FUN_1470d4720 body=119 status=ok
// SIG undefined FUN_1470d4720(void)

undefined8 * FUN_1470d4720(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14099dfc8(param_1,uVar1);
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



// FUNCTION 1470d4798 FUN_1470d4798 body=28 status=ok
// SIG undefined FUN_1470d4798(void)

undefined8 FUN_1470d4798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1470d482c FUN_1470d482c body=59 status=ok
// SIG undefined FUN_1470d482c(void)

undefined8 FUN_1470d482c(longlong *param_1)

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



// FUNCTION 1470d4954 FUN_1470d4954 body=59 status=ok
// SIG undefined FUN_1470d4954(void)

undefined8 FUN_1470d4954(longlong *param_1)

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



// FUNCTION 1470d4a2a FUN_1470d4a2a body=48 status=ok
// SIG undefined FUN_1470d4a2a(void)

void FUN_1470d4a2a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470d4a70 FUN_1470d4a70 body=97 status=ok
// SIG undefined FUN_1470d4a70(void)

undefined8 FUN_1470d4a70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30);
      uVar1 = *(undefined4 *)(param_3 + -0x24);
      uVar2 = *(undefined4 *)(param_3 + -0x20);
      uVar3 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = uVar1;
      *(undefined4 *)(param_2 + -0x20) = uVar2;
      *(undefined4 *)(param_2 + -0x1c) = uVar3;
      FUN_144a787a6(param_2 + -0x18,param_3 + -0x18);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1470d4b96(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470d4afa FUN_1470d4afa body=59 status=ok
// SIG undefined FUN_1470d4afa(void)

undefined8 FUN_1470d4afa(longlong *param_1)

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



// FUNCTION 1470d4b96 FUN_1470d4b96 body=89 status=ok
// SIG undefined FUN_1470d4b96(void)

undefined8 * FUN_1470d4b96(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470d4bf0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1470d4bf0 FUN_1470d4bf0 body=115 status=ok
// SIG undefined FUN_1470d4bf0(void)

void FUN_1470d4bf0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470d4c64 FUN_1470d4c64 body=52 status=ok
// SIG undefined FUN_1470d4c64(void)

void FUN_1470d4c64(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1470d4d36 FUN_1470d4d36 body=59 status=ok
// SIG undefined FUN_1470d4d36(void)

undefined8 FUN_1470d4d36(longlong *param_1)

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



// FUNCTION 1470d4e56 FUN_1470d4e56 body=59 status=ok
// SIG undefined FUN_1470d4e56(void)

undefined8 FUN_1470d4e56(longlong *param_1)

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



// FUNCTION 1470d4f98 FUN_1470d4f98 body=59 status=ok
// SIG undefined FUN_1470d4f98(void)

undefined8 FUN_1470d4f98(longlong *param_1)

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



// FUNCTION 1470d50b2 FUN_1470d50b2 body=59 status=ok
// SIG undefined FUN_1470d50b2(void)

undefined8 FUN_1470d50b2(longlong *param_1)

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



// FUNCTION 1470d51b2 FUN_1470d51b2 body=75 status=ok
// SIG undefined FUN_1470d51b2(void)

undefined1 FUN_1470d51b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140d02432(param_2,param_3);
    FUN_140d02432(param_2 + 0x50,param_3 + 0x50);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 1470d5226 FUN_1470d5226 body=59 status=ok
// SIG undefined FUN_1470d5226(void)

undefined8 FUN_1470d5226(longlong *param_1)

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



// FUNCTION 1470d52cc FUN_1470d52cc body=101 status=ok
// SIG undefined FUN_1470d52cc(void)

void FUN_1470d52cc(undefined8 param_1,undefined1 *param_2)

{
  memset(param_2,0,0xa8);
  *param_2 = 1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x58) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x90) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0xa0) = 0x3f800000;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 1470d53ba FUN_1470d53ba body=140 status=ok
// SIG undefined FUN_1470d53ba(void)

undefined1 FUN_1470d53ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_140d02432();
      FUN_140d02432(param_2 + lVar1 + 0x58,param_3 + lVar1 + 0x58);
      FUN_1470d5538(param_2 + lVar1 + 0xa8,param_3 + lVar1 + 0xa8);
      lVar1 = lVar1 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470d546e FUN_1470d546e body=59 status=ok
// SIG undefined FUN_1470d546e(void)

undefined8 FUN_1470d546e(longlong *param_1)

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



// FUNCTION 1470d54ba FUN_1470d54ba body=47 status=ok
// SIG undefined FUN_1470d54ba(void)

void FUN_1470d54ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    if (*(longlong *)(param_2 + 0xa8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 1470d5538 FUN_1470d5538 body=79 status=ok
// SIG undefined FUN_1470d5538(void)

undefined8 * FUN_1470d5538(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470d5588(param_1,iVar1);
      FUN_1470d55fb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470d5588 FUN_1470d5588 body=115 status=ok
// SIG undefined FUN_1470d5588(void)

void FUN_1470d5588(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470d55fb FUN_1470d55fb body=60 status=ok
// SIG undefined FUN_1470d55fb(void)

void FUN_1470d55fb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1458d04d6(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 1470d56a0 FUN_1470d56a0 body=59 status=ok
// SIG undefined FUN_1470d56a0(void)

undefined8 FUN_1470d56a0(longlong *param_1)

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



// FUNCTION 1470d5740 FUN_1470d5740 body=29 status=ok
// SIG undefined FUN_1470d5740(void)

undefined8 FUN_1470d5740(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470d575e FUN_1470d575e body=55 status=ok
// SIG undefined FUN_1470d575e(void)

void FUN_1470d575e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5af8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5af8 = FUN_140002ddd(FUN_1462af777,uVar1,L"GbxBaseMapAutoSaveData");
  }
  return;
}



// FUNCTION 1470d57ca FUN_1470d57ca body=78 status=ok
// SIG undefined FUN_1470d57ca(void)

undefined8 FUN_1470d57ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470d5840 FUN_1470d5840 body=59 status=ok
// SIG undefined FUN_1470d5840(void)

undefined8 FUN_1470d5840(longlong *param_1)

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



// FUNCTION 1470d5886 FUN_1470d5886 body=48 status=ok
// SIG undefined FUN_1470d5886(void)

void FUN_1470d5886(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a1c0810;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1470d5900 FUN_1470d5900 body=55 status=ok
// SIG undefined FUN_1470d5900(void)

void FUN_1470d5900(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5b40 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5b40 = FUN_140002ddd(FUN_1462af8a9,uVar1,L"GenericComponentContextResolver");
  }
  return;
}



// FUNCTION 1470d5986 FUN_1470d5986 body=59 status=ok
// SIG undefined FUN_1470d5986(void)

undefined8 FUN_1470d5986(longlong *param_1)

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



// FUNCTION 1470d5a1a FUN_1470d5a1a body=55 status=ok
// SIG undefined FUN_1470d5a1a(void)

void FUN_1470d5a1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5b58 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5b58 = FUN_140002ddd(FUN_1462af93b,uVar1,L"InstigatorContextResolver");
  }
  return;
}



// FUNCTION 1470d5aa8 FUN_1470d5aa8 body=104 status=ok
// SIG undefined FUN_1470d5aa8(void)

undefined1 FUN_1470d5aa8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    uVar4 = *(undefined4 *)(param_3 + 0x30);
    uVar5 = *(undefined4 *)(param_3 + 0x34);
    uVar6 = *(undefined4 *)(param_3 + 0x38);
    uVar7 = *(undefined4 *)(param_3 + 0x3c);
    uVar8 = *(undefined4 *)(param_3 + 0x40);
    uVar9 = *(undefined4 *)(param_3 + 0x44);
    uVar10 = *(undefined4 *)(param_3 + 0x48);
    uVar11 = *(undefined4 *)(param_3 + 0x4c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    *(undefined4 *)(param_2 + 0x30) = uVar4;
    *(undefined4 *)(param_2 + 0x34) = uVar5;
    *(undefined4 *)(param_2 + 0x38) = uVar6;
    *(undefined4 *)(param_2 + 0x3c) = uVar7;
    *(undefined4 *)(param_2 + 0x40) = uVar8;
    *(undefined4 *)(param_2 + 0x44) = uVar9;
    *(undefined4 *)(param_2 + 0x48) = uVar10;
    *(undefined4 *)(param_2 + 0x4c) = uVar11;
    FUN_144a787a6(param_2 + 0x50,param_3 + 0x50);
    param_2 = param_2 + 0x60;
    param_3 = param_3 + 0x60;
  }
  return 1;
}



// FUNCTION 1470d5b38 FUN_1470d5b38 body=59 status=ok
// SIG undefined FUN_1470d5b38(void)

undefined8 FUN_1470d5b38(longlong *param_1)

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



// FUNCTION 1470d5b7e FUN_1470d5b7e body=34 status=ok
// SIG undefined FUN_1470d5b7e(void)

void FUN_1470d5b7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1459cc9be(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1470d5c24 FUN_1470d5c24 body=101 status=ok
// SIG undefined FUN_1470d5c24(void)

undefined8 FUN_1470d5c24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470d5cb2 FUN_1470d5cb2 body=59 status=ok
// SIG undefined FUN_1470d5cb2(void)

undefined8 FUN_1470d5cb2(longlong *param_1)

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



// FUNCTION 1470d5cf8 FUN_1470d5cf8 body=43 status=ok
// SIG undefined FUN_1470d5cf8(void)

void FUN_1470d5cf8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1470d5da8 FUN_1470d5da8 body=101 status=ok
// SIG undefined FUN_1470d5da8(void)

undefined8 FUN_1470d5da8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      uVar1 = *(undefined8 *)(param_3 + 0x1d + lVar2);
      *(undefined8 *)(param_2 + 0x18 + lVar2) = *(undefined8 *)(param_3 + 0x18 + lVar2);
      *(undefined8 *)(param_2 + 0x1d + lVar2) = uVar1;
      lVar2 = lVar2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470d5e36 FUN_1470d5e36 body=59 status=ok
// SIG undefined FUN_1470d5e36(void)

undefined8 FUN_1470d5e36(longlong *param_1)

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



// FUNCTION 1470d5e7c FUN_1470d5e7c body=43 status=ok
// SIG undefined FUN_1470d5e7c(void)

void FUN_1470d5e7c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1470d5ef0 FUN_1470d5ef0 body=104 status=ok
// SIG undefined FUN_1470d5ef0(void)

undefined8 FUN_1470d5ef0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1470e71a4(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d5f5a FUN_1470d5f5a body=28 status=ok
// SIG undefined FUN_1470d5f5a(void)

undefined8 FUN_1470d5f5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1470d5fe4 FUN_1470d5fe4 body=59 status=ok
// SIG undefined FUN_1470d5fe4(void)

undefined8 FUN_1470d5fe4(longlong *param_1)

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



// FUNCTION 1470d602a FUN_1470d602a body=37 status=ok
// SIG undefined FUN_1470d602a(void)

void FUN_1470d602a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1470d6124 FUN_1470d6124 body=59 status=ok
// SIG undefined FUN_1470d6124(void)

undefined8 FUN_1470d6124(longlong *param_1)

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



// FUNCTION 1470d6208 FUN_1470d6208 body=59 status=ok
// SIG undefined FUN_1470d6208(void)

undefined8 FUN_1470d6208(longlong *param_1)

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



// FUNCTION 1470d62a8 FUN_1470d62a8 body=40 status=ok
// SIG undefined FUN_1470d62a8(void)

void FUN_1470d62a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a1c1450;
  FUN_14151b02a(param_2 + 1);
  *(undefined1 *)(param_2 + 0x2b) = 0;
  return;
}



// FUNCTION 1470d62e6 FUN_1470d62e6 body=94 status=ok
// SIG undefined FUN_1470d62e6(void)

undefined1 FUN_1470d62e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1470b4292(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x158 + lVar1) = *(undefined1 *)(param_3 + 0x158 + lVar1);
      lVar1 = lVar1 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470d636c FUN_1470d636c body=59 status=ok
// SIG undefined FUN_1470d636c(void)

undefined8 FUN_1470d636c(longlong *param_1)

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



// FUNCTION 1470d63b8 FUN_1470d63b8 body=49 status=ok
// SIG undefined FUN_1470d63b8(void)

void FUN_1470d63b8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *param_2 = &PTR_FUN_14a1c1450;
    FUN_1414a735c(param_2 + 1);
    *(undefined1 *)(param_2 + 0x2c) = 0;
  }
  return;
}



// FUNCTION 1470d6434 FUN_1470d6434 body=55 status=ok
// SIG undefined FUN_1470d6434(void)

void FUN_1470d6434(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5d20 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5d20 = FUN_140002ddd(FUN_1462b0049,uVar1,L"PropertyDeltaValueResolver");
  }
  return;
}



// FUNCTION 1470d64a2 FUN_1470d64a2 body=42 status=ok
// SIG undefined FUN_1470d64a2(void)

undefined8 FUN_1470d64a2(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1448ec59e();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x78) >> 8),
                     *(longlong *)(param_1 + 0x78) == *param_2);
  }
  return uVar2;
}



// FUNCTION 1470d64cc FUN_1470d64cc body=233 status=ok
// SIG undefined FUN_1470d64cc(void)

void FUN_1470d64cc(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined1 local_38 [4];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 8)) {
    uVar4 = 0;
    do {
      plVar1 = (longlong *)FUN_14140f0d8();
      if (plVar1 == (longlong *)0x0) {
        plVar1 = &DAT_14c9a5f00;
      }
      if ((longlong)*(int *)(param_1 + 0x28) != 0) {
        plVar2 = *(longlong **)(param_1 + 0x20);
        lVar5 = (longlong)*(int *)(param_1 + 0x28) * 0x18;
        do {
          if (*plVar2 == *plVar1) goto LAB_1470d6550;
          plVar2 = plVar2 + 3;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
      plVar2 = (longlong *)0x0;
LAB_1470d6550:
      plVar3 = (longlong *)((longlong)plVar2 + 0xc);
      if (plVar2 == (longlong *)0x0) {
        plVar3 = plVar1 + 3;
      }
      local_40 = (undefined4)plVar3[1];
      local_48 = *plVar3;
      local_34 = 0;
      FUN_140640e4a(param_1,uVar4 & 0xffffffff,&local_48,local_38);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 8));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d65b6 FUN_1470d65b6 body=346 status=ok
// SIG undefined FUN_1470d65b6(void)

void FUN_1470d65b6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1448ec792(param_2,&local_50);
  if ((local_50 != 0) && (0 < *(int *)(local_50 + 0x80))) {
    lVar4 = 0;
    do {
      if ((longlong)(int)param_1[1] != 0) {
        lVar3 = *param_1;
        lVar6 = 0;
        do {
          if (*(longlong *)(lVar3 + 0x68 + lVar6) ==
              *(longlong *)(*(longlong *)(local_50 + 0x78) + lVar4 * 0x90)) {
            uVar7 = (lVar6 >> 3) * -0xf0f0f0f0f0f0f0f;
            iVar5 = (int)uVar7;
            if (iVar5 != -1) {
              lVar6 = (longlong)iVar5 * 0x88;
              iVar5 = *(int *)(lVar3 + lVar6);
              *(int *)(lVar3 + lVar6) = iVar5 + -1;
              if (iVar5 < 2) {
                lVar8 = (longlong)*(int *)(lVar3 + lVar6 + 0x10);
                if (lVar8 != 0) {
                  lVar3 = *(longlong *)(lVar3 + lVar6 + 8);
                  lVar6 = 0;
                  do {
                    if (*(longlong *)(lVar3 + lVar6) != 0) {
                      FUN_14078b1f4();
                    }
                    lVar6 = lVar6 + 0x10;
                  } while (lVar8 * 0x10 != lVar6);
                }
                FUN_1470d6712(param_1,uVar7 & 0xffffffff);
              }
            }
            break;
          }
          lVar6 = lVar6 + 0x88;
        } while ((longlong)(int)param_1[1] * 0x88 != lVar6);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(local_50 + 0x80));
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470d6712 FUN_1470d6712 body=96 status=ok
// SIG undefined FUN_1470d6712(void)

void FUN_1470d6712(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x88 + *param_1);
  FUN_1470b983a(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x88),(longlong)(int)(~param_2 + iVar1) * 0x88);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1470d9302(param_1);
  return;
}



// FUNCTION 1470d6772 FUN_1470d6772 body=14 status=ok
// SIG undefined FUN_1470d6772(void)

undefined8 * FUN_1470d6772(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return param_1;
}



// FUNCTION 1470d6780 FUN_1470d6780 body=28 status=ok
// SIG undefined FUN_1470d6780(void)

undefined8 FUN_1470d6780(undefined8 param_1,undefined8 param_2)

{
  FUN_1400021e4(param_2,param_1);
  return param_1;
}



// FUNCTION 1470d679c FUN_1470d679c body=4 status=ok
// SIG undefined FUN_1470d679c(void)

undefined4 FUN_1470d679c(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 1470d67a0 FUN_1470d67a0 body=28 status=ok
// SIG undefined FUN_1470d67a0(void)

undefined8 FUN_1470d67a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400021e4(param_2,param_1);
  return param_1;
}



// FUNCTION 1470d67bc FUN_1470d67bc body=4 status=ok
// SIG undefined FUN_1470d67bc(void)

undefined4 FUN_1470d67bc(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 1470d67c0 FUN_1470d67c0 body=74 status=ok
// SIG undefined FUN_1470d67c0(void)

bool FUN_1470d67c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [8];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_142b35302(local_1c,param_1,param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0 < local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d680c FUN_1470d680c body=75 status=ok
// SIG undefined FUN_1470d680c(void)

undefined8 * FUN_1470d680c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f930f0(local_28);
  *param_1 = local_28[0];
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d6858 thunk_FUN_1409c2518 body=5 status=ok
// SIG undefined thunk_FUN_1409c2518(void)

undefined8 thunk_FUN_1409c2518(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_48 [36];
  undefined1 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == (longlong *)0x0) goto LAB_1409c26e9;
  uVar3 = 0;
  if ((*param_2 == 0 && (int)param_2[1] == -1) || (*param_3 == 0)) goto LAB_1409c26eb;
  uVar3 = FUN_140437988();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
  if (plVar4 != (longlong *)0x0) {
    uVar3 = FUN_140437988();
    plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
    if (((plVar5 != (longlong *)0x0 && plVar4 != plVar5) &&
        (plVar4 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5), plVar4[3] != 0)) &&
       (*(int *)((longlong)plVar4 + 0x14) != 0)) {
      uVar8 = *(uint *)(plVar4 + 2);
      uVar3 = 0;
      if (((int)uVar8 < 0) || (uVar3 = 0, DAT_14c9647dc <= (int)uVar8)) goto LAB_1409c26eb;
      lVar6 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      if (((lVar6 != 0) &&
          ((*(int *)(lVar6 + 0x10) == *(int *)((longlong)plVar4 + 0x14) &&
           ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) &&
         (cVar2 = FUN_142b34f2c(plVar4), cVar2 != '\0')) {
        lVar6 = *param_2;
        uVar8 = *(uint *)(param_2 + 1);
        if (lVar6 != 0 || uVar8 != 0xffffffff) {
          if ((int)uVar8 < 0) {
            lVar7 = *plVar4;
            uVar10 = *(uint *)(plVar4 + 1);
LAB_1409c2652:
            if (uVar10 != 0) {
              uVar9 = (ulonglong)(int)uVar10;
LAB_1409c2665:
              uVar11 = 0;
              do {
                if (*(longlong *)(lVar7 + 0x68 + uVar11) == lVar6) {
                  uVar8 = (int)(uVar11 >> 3) * -0xf0f0f0f;
                  goto LAB_1409c269b;
                }
                lVar1 = lVar7 + uVar11;
                uVar11 = uVar11 + 0x88;
              } while (lVar1 + 0x88 != uVar9 * 0x88 + lVar7);
            }
            uVar8 = 0xffffffff;
LAB_1409c269b:
            *(uint *)(param_2 + 1) = uVar8;
            bVar12 = uVar8 != 0xffffffff;
            lVar7 = *plVar4;
          }
          else {
            uVar10 = *(uint *)(plVar4 + 1);
            uVar9 = (ulonglong)uVar10;
            lVar7 = *plVar4;
            if ((int)uVar10 <= (int)uVar8) goto LAB_1409c2652;
            if (*(longlong *)(lVar7 + 0x68 + (ulonglong)uVar8 * 0x88) != lVar6) goto LAB_1409c2665;
            bVar12 = true;
          }
          uVar3 = 0;
          if ((!bVar12) || (lVar7 = lVar7 + (longlong)(int)uVar8 * 0x88, lVar7 == 0))
          goto LAB_1409c26eb;
          cVar2 = FUN_1448ec59e(lVar7,param_3);
          if (cVar2 != '\0') {
            uStack_24 = 0;
            uVar3 = FUN_14063ffb4(plVar4,(int)param_2[1],(int)param_3[1]);
            goto LAB_1409c26eb;
          }
        }
      }
    }
  }
LAB_1409c26e9:
  uVar3 = 0;
LAB_1409c26eb:
  if ((uStack_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1470d685e FUN_1470d685e body=134 status=ok
// SIG undefined FUN_1470d685e(void)

void FUN_1470d685e(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar5 = lVar4 * 0x18;
    plVar2 = plVar3;
    do {
      if (*plVar2 == *param_2) {
        if (plVar2 != (longlong *)0x0) {
          return;
        }
        break;
      }
      plVar2 = plVar2 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1470d941e(param_1,iVar1);
    plVar3 = (longlong *)*param_1;
  }
  plVar3 = plVar3 + lVar4 * 3;
  *(int *)(plVar3 + 1) = (int)param_2[1];
  *plVar3 = *param_2;
  *(undefined8 *)((longlong)plVar3 + 0xc) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x14) = 0xffffffff;
  return;
}



// FUNCTION 1470d68e4 FUN_1470d68e4 body=29 status=ok
// SIG undefined FUN_1470d68e4(void)

undefined8 FUN_1470d68e4(longlong param_1,undefined8 param_2)

{
  FUN_142b358d2(param_2,param_1,param_1 + 8);
  return 1;
}



// FUNCTION 1470d6902 FUN_1470d6902 body=24 status=ok
// SIG undefined FUN_1470d6902(void)

undefined1 FUN_1470d6902(void)

{
  undefined1 *in_R9;
  
  FUN_1405e2abc();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 1470d691a FUN_1470d691a body=141 status=ok
// SIG undefined FUN_1470d691a(void)

undefined8 FUN_1470d691a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144aa7a80(local_30,1,0);
  FUN_1446dcc2e(param_2,local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  FUN_1401269c0(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d69a8 FUN_1470d69a8 body=125 status=ok
// SIG undefined FUN_1470d69a8(void)

undefined8 FUN_1470d69a8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14173e428(param_1,&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d6a26 FUN_1470d6a26 body=246 status=ok
// SIG undefined FUN_1470d6a26(void)

undefined8 FUN_1470d6a26(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_34,6);
  if (uVar1 == local_34) {
    (**(code **)(*param_3 + 0x160))(param_3,param_1);
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  else {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_34,2);
    if (uVar1 != local_34) {
      uVar3 = 0;
      goto LAB_1470d6a7f;
    }
    *param_1 = 0;
    param_1 = param_1 + 1;
    puVar2 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,param_1,4);
      }
      else {
        thunk_FUN_14572512c(param_3,param_1);
      }
    }
    else {
      *(undefined4 *)param_1 = *puVar2;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
  }
  uVar3 = 1;
LAB_1470d6a7f:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d6b1e FUN_1470d6b1e body=19 status=ok
// SIG undefined FUN_1470d6b1e(void)

void FUN_1470d6b1e(longlong *param_1,longlong *param_2)

{
  if (*param_1 != *param_2) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  return;
}



// FUNCTION 1470d6b32 FUN_1470d6b32 body=29 status=ok
// SIG undefined FUN_1470d6b32(void)

undefined8 FUN_1470d6b32(longlong param_1,undefined8 param_2)

{
  FUN_142b358d2(param_2,param_1,param_1 + 8);
  return 1;
}



// FUNCTION 1470d6b50 FUN_1470d6b50 body=38 status=ok
// SIG undefined FUN_1470d6b50(void)

undefined8
FUN_1470d6b50(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  *param_4 = 1;
  return 1;
}



// FUNCTION 1470d6b76 FUN_1470d6b76 body=141 status=ok
// SIG undefined FUN_1470d6b76(void)

undefined8 FUN_1470d6b76(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144aa7a80(local_30,1,0);
  FUN_1446dcc2e(param_2,local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  FUN_1401269c0(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d6c04 FUN_1470d6c04 body=246 status=ok
// SIG undefined FUN_1470d6c04(void)

undefined8 FUN_1470d6c04(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_34,6);
  if (uVar1 == local_34) {
    (**(code **)(*param_3 + 0x160))(param_3,param_1);
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  else {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_34,2);
    if (uVar1 != local_34) {
      uVar3 = 0;
      goto LAB_1470d6c5d;
    }
    *param_1 = 0;
    param_1 = param_1 + 1;
    puVar2 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,param_1,4);
      }
      else {
        thunk_FUN_14572512c(param_3,param_1);
      }
    }
    else {
      *(undefined4 *)param_1 = *puVar2;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
  }
  uVar3 = 1;
LAB_1470d6c5d:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d6d02 FUN_1470d6d02 body=128 status=ok
// SIG undefined FUN_1470d6d02(void)

longlong * FUN_1470d6d02(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a1c7160;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[2] = &PTR_FUN_14a18e3f0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *param_2 = (longlong)(puVar1 + 2);
  param_2[1] = (longlong)puVar1;
  FUN_1470d94da(param_2);
  return param_2;
}



// FUNCTION 1470d6d82 FUN_1470d6d82 body=85 status=ok
// SIG undefined FUN_1470d6d82(void)

undefined8 * FUN_1470d6d82(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_14a18e458;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14042b2d2(param_1 + 3);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_14085140c(param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 1470d6dd8 FUN_1470d6dd8 body=122 status=ok
// SIG undefined FUN_1470d6dd8(void)

void FUN_1470d6dd8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1470d9648(param_1,iVar1);
    }
    FUN_1470d9632((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1470d96dc(param_1,param_2,iVar1 - param_2);
    FUN_1470d973e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1470d6e54 FUN_1470d6e54 body=358 status=ok
// SIG undefined FUN_1470d6e54(void)

void FUN_1470d6e54(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  uVar8 = FUN_1462a6fb8();
  FUN_140005cc6(param_1,&local_58,uVar8,0);
  uVar8 = FUN_1400014c6(&local_58);
  lVar6 = local_58;
  local_70 = 0;
  if (local_58 != 0) {
    uVar9 = FUN_1462a6fb8();
    cVar7 = FUN_1448093f4(lVar6,uVar9);
    if (cVar7 == '\0') {
      local_70 = 0;
    }
    else {
      local_70 = local_58;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
        local_68 = plStack_50;
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
        bVar4 = false;
        goto LAB_1470d6f04;
      }
    }
  }
  local_68 = (longlong *)0x0;
  bVar4 = true;
LAB_1470d6f04:
  plVar5 = local_68;
  local_60 = 0;
  FUN_14485c47a(&local_60,uVar8);
  FUN_14029d0b6(param_2,&local_70);
  plVar3 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar4) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d6fbc FUN_1470d6fbc body=208 status=ok
// SIG undefined FUN_1470d6fbc(void)

void FUN_1470d6fbc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [144];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = (longlong)(int)param_2[1];
  if (0 < lVar1) {
    iVar3 = *(int *)(param_1 + 0x80) + (int)param_2[1];
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (*(int *)(param_1 + 0x84) < iVar3) {
      FUN_1408522b2(param_1 + 0x78);
      lVar1 = (longlong)(int)param_2[1];
      if (lVar1 == 0) goto LAB_1470d705f;
    }
    lVar4 = *param_2;
    lVar1 = lVar1 * 0x88 + lVar4;
    do {
      lVar2 = FUN_14140f0d8(lVar4 + 0x18);
      if (lVar2 != 0) {
        FUN_140e965fc(local_b8,lVar2);
        FUN_140ab6af6(param_1,local_b8);
        FUN_14072ff4a(local_b8);
      }
      lVar4 = lVar4 + 0x88;
    } while (lVar4 != lVar1);
  }
LAB_1470d705f:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d7162 FUN_1470d7162 body=239 status=ok
// SIG undefined FUN_1470d7162(void)

void FUN_1470d7162(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar2 = DAT_14c9a6208;
  iVar13 = DAT_14c9a6208;
  if ((param_1 != 0) && (lVar5 = (longlong)DAT_14c9a6208, lVar5 != 0)) {
    plVar3 = &DAT_14c9a6180;
    if (DAT_14c9a6200 != (longlong *)0x0) {
      plVar3 = DAT_14c9a6200;
    }
    iVar13 = 0;
    bVar4 = *plVar3 == param_1;
    iVar10 = 0;
    do {
      lVar8 = (longlong)iVar10;
      iVar6 = iVar10 + 1;
      if (iVar10 + 1 < iVar2) {
        iVar6 = iVar2;
      }
      plVar7 = plVar3 + lVar8 * 2 + 2;
      iVar12 = iVar10;
      lVar9 = lVar8;
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar6;
        if (lVar5 <= lVar9) break;
        lVar1 = *plVar7;
        iVar12 = iVar12 + 1;
        plVar7 = plVar7 + 2;
        iVar11 = iVar12;
      } while (bVar4 == (lVar1 == param_1));
      if (bVar4 == false) {
        if (iVar13 != iVar10) {
          memmove(plVar3 + (longlong)iVar13 * 2,plVar3 + lVar8 * 2,(longlong)(iVar11 - iVar10) << 4)
          ;
        }
        iVar13 = iVar13 + (iVar11 - iVar10);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar10 = iVar11;
    } while (lVar9 < lVar5);
  }
  DAT_14c9a6208 = iVar13;
  return;
}



// FUNCTION 1470d7252 FUN_1470d7252 body=524 status=ok
// SIG undefined FUN_1470d7252(void)

undefined8 FUN_1470d7252(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  size_t sVar5;
  wchar_t *_Str;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  int local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  wchar_t *local_b0;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(longlong *)(param_1 + 8) == 0) &&
     ((*(longlong *)(param_1 + 0x28) == 0 || (*(longlong *)(param_1 + 0x30) == 0)))) {
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    FUN_1446dcc2e(param_2,&local_c8);
    plVar3 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    goto LAB_1470d741b;
  }
  FUN_144aa7a80(&local_c8,1,0);
  FUN_1446dcc2e(param_2,&local_c8);
  plVar3 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    if (DAT_14c9a1ab0 == 0) goto LAB_1470d741b;
    lVar4 = FUN_1470a0c6c(DAT_14c9a1ab0,(longlong *)(param_1 + 0x28));
    if (lVar4 == 0) goto LAB_1470d741b;
    local_d8 = *(wchar_t **)(param_1 + 0x28);
    FUN_1446dcdd4(&local_c8);
    FUN_14709212c(param_2,*(undefined2 *)(lVar4 + 0xb6),&local_c8,0);
  }
  else {
    FUN_14475cc44((longlong *)(param_1 + 8),&local_d8);
    _Str = local_d8;
    if (local_d0 == 0) {
      _Str = L"";
    }
    local_48 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      sVar5 = wcslen(_Str);
      FUN_1449b853c(&local_c8,_Str,sVar5 & 0xffffffff,1);
    }
    FUN_14709214c(param_2,local_40);
    local_b0 = local_d8;
    if (local_48 != 0) {
      FUN_1400020a8();
      local_b0 = local_d8;
    }
  }
  if (local_b0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1470d741b:
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1470d7460 FUN_1470d7460 body=190 status=ok
// SIG undefined FUN_1470d7460(void)

undefined8 FUN_1470d7460(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14102a358(param_1 + 0x44,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_14173e428(param_1 + 0x38,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"SetActorState: %s=%s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d7520 FUN_1470d7520 body=153 status=ok
// SIG undefined FUN_1470d7520(void)

void FUN_1470d7520(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x708))();
  lVar3 = param_1[0x78];
  if (cVar1 == '\0') {
    if (lVar3 != 0) {
      lVar2 = FUN_144a75eb4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar2 = 0x308;
        goto LAB_1470d7595;
      }
    }
    lVar2 = 0x308;
  }
  else {
    if (lVar3 != 0) {
      lVar2 = FUN_144a75eb4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar2 = 0x318;
        goto LAB_1470d7595;
      }
    }
    lVar2 = 0x318;
  }
  lVar3 = 0;
LAB_1470d7595:
                    /* WARNING: Could not recover jumptable at 0x0001470d75a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2))(param_1,lVar3);
  return;
}



// FUNCTION 1470d75ba FUN_1470d75ba body=31 status=ok
// SIG undefined FUN_1470d75ba(void)

void FUN_1470d75ba(longlong *param_1)

{
  FUN_1409e8a6c();
                    /* WARNING: Could not recover jumptable at 0x0001470d75d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8e0))(param_1);
  return;
}



// FUNCTION 1470d75da FUN_1470d75da body=424 status=ok
// SIG undefined FUN_1470d75da(void)

void FUN_1470d75da(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1470d7784(param_2,&local_40);
  FUN_1400021e4(param_1 + 0x18,&local_60);
  puVar4 = local_60;
  if (local_58 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_50,L"(%s)",puVar4);
  iVar2 = local_48 + -1;
  if (local_48 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar2);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_70 = (void *)0x0;
  local_68 = local_38;
  if ((longlong)local_38 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_38,0);
    memcpy(local_70,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  if (*(int *)(param_1 + 0x38) == 0) {
    local_98 = 0;
    uStack_90 = 0;
    uVar3 = FUN_147906f5e(param_2,0x3f800000);
    FUN_147906d38(param_1 + 0x20,uVar3);
  }
  else {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x38) + -1) * 8);
    local_88 = 0;
    uStack_80 = 0;
    uVar3 = FUN_147906f5e(param_2,0x3f800000);
    (**(code **)(*plVar1 + 0x38))(plVar1,uVar3);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470d7784 FUN_1470d7784 body=208 status=ok
// SIG undefined FUN_1470d7784(void)

undefined8 FUN_1470d7784(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1407282b4();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d7856 FUN_1470d7856 body=97 status=ok
// SIG undefined FUN_1470d7856(void)

void FUN_1470d7856(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    local_18 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_1470d9a96(param_1 + 0x10,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d78b8 FUN_1470d78b8 body=105 status=ok
// SIG undefined FUN_1470d78b8(void)

void FUN_1470d78b8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_20 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_18 = &local_20;
    FUN_1470d9b46(param_1 + 0x10);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d7922 FUN_1470d7922 body=50 status=ok
// SIG undefined FUN_1470d7922(void)

longlong FUN_1470d7922(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x18);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2 * 8;
    lVar3 = 0;
    do {
      bVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar3) == param_2;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar4);
      if (bVar4) {
        return lVar2;
      }
      bVar4 = lVar1 + -8 != lVar3;
      lVar3 = lVar3 + 8;
    } while (bVar4);
  }
  return lVar2;
}



// FUNCTION 1470d7954 FUN_1470d7954 body=61 status=ok
// SIG undefined FUN_1470d7954(void)

undefined1 FUN_1470d7954(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x120) + 8 + lVar1) == *(longlong *)(param_2 + 8)) {
        return 1;
      }
      bVar2 = (longlong)*(int *)(param_1 + 0x128) * 0x10 + -0x10 != lVar1;
      lVar1 = lVar1 + 0x10;
    } while (bVar2);
  }
  return 0;
}



// FUNCTION 1470d7992 FUN_1470d7992 body=98 status=ok
// SIG undefined FUN_1470d7992(void)

void FUN_1470d7992(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_1470d9cda(param_1 + 0x120,&local_20);
  if (param_3 != '\0') {
    FUN_1406c717c(param_1);
  }
  *(undefined1 *)(param_1 + 0xa8) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470d79f6 FUN_1470d79f6 body=19 status=ok
// SIG undefined FUN_1470d79f6(void)

void FUN_1470d79f6(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = DAT_14caa8578;
  return;
}



// FUNCTION 1470d7a0a FUN_1470d7a0a body=67 status=ok
// SIG undefined FUN_1470d7a0a(void)

void FUN_1470d7a0a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
    FUN_140890db0((longlong *)(param_1 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_2 + 8;
  return;
}



// FUNCTION 1470d7a4e FUN_1470d7a4e body=18 status=ok
// SIG undefined FUN_1470d7a4e(void)

undefined8 * FUN_1470d7a4e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1470d7a60 FUN_1470d7a60 body=94 status=ok
// SIG undefined FUN_1470d7a60(void)

bool FUN_1470d7a60(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  float extraout_XMM0_Da;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 == 0) {
    bVar3 = false;
  }
  else {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      FUN_144a5e4da(param_1,*(undefined8 *)(lVar1 + lVar4));
      bVar3 = 0.0 < extraout_XMM0_Da;
      if (0.0 < extraout_XMM0_Da) {
        return bVar3;
      }
      bVar5 = (longlong)(int)lVar2 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return bVar3;
}



// FUNCTION 1470d7abe FUN_1470d7abe body=94 status=ok
// SIG undefined FUN_1470d7abe(void)

bool FUN_1470d7abe(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  float extraout_XMM0_Da;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 == 0) {
    bVar3 = true;
  }
  else {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      FUN_144a5e4da(param_1,*(undefined8 *)(lVar1 + lVar4));
      bVar3 = 0.0 < extraout_XMM0_Da;
      if (extraout_XMM0_Da <= 0.0) {
        return bVar3;
      }
      bVar5 = (longlong)(int)lVar2 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return bVar3;
}



// FUNCTION 1470d7b1c FUN_1470d7b1c body=317 status=ok
// SIG undefined FUN_1470d7b1c(void)

void FUN_1470d7b1c(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  cVar2 = FUN_144966fca(param_1[4]);
  if (cVar2 != '\0') {
    cVar2 = FUN_144a61b4f();
    if (cVar2 != '\0') {
      FUN_14036294a(param_1[4],1,1);
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  plVar1 = *(longlong **)(lVar3 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if (cVar2 == '\0') {
      plVar5 = *(longlong **)(lVar3 + 0x170);
      if (plVar5 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar5 + 0xa8))(plVar5);
        if (lVar4 == 0) {
          uVar7 = 0;
        }
        else {
          puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0xa8))(plVar5);
          uVar7 = *puVar6;
        }
        *(undefined8 *)(lVar3 + 0x170) = uVar7;
LAB_1470d7c2a:
        FUN_140a02510(param_1,lVar3,plVar5);
        return;
      }
    }
    else {
      lVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1);
      if (lVar4 != 0) {
        plVar5 = (longlong *)(**(code **)(*plVar1 + 0xa8))(plVar1);
        plVar5 = (longlong *)*plVar5;
        if (plVar5 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar5 + 0xa8))(plVar5);
          if (lVar4 == 0) {
            uVar7 = 0;
          }
          else {
            puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0xa8))(plVar5);
            uVar7 = *puVar6;
          }
          puVar6 = (undefined8 *)(**(code **)(*plVar1 + 0xa8))(plVar1);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = uVar7;
            goto LAB_1470d7c2a;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1470d7c5a FUN_1470d7c5a body=188 status=ok
// SIG undefined FUN_1470d7c5a(void)

void FUN_1470d7c5a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != (longlong *)0x0) {
    cVar2 = FUN_144966fca(param_1[4]);
    if (cVar2 != '\0') {
      cVar2 = FUN_144a61b4f();
      if (cVar2 != '\0') {
        FUN_14036294a(param_1[4],1,1);
      }
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
    FUN_14023ffbe();
    (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_1408d610e(lVar3,param_2);
    iVar1 = (int)param_1[0x9f];
    *(uint *)(param_1 + 0x9f) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x4fc) < iVar1 + 1U) {
      FUN_140c4a4dc(param_1 + 0x9e,iVar1);
    }
    *(longlong **)(param_1[0x9e] + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 1470d7d16 caseD_40 body=27 status=ok
// SIG undefined caseD_40(void)

undefined8 switchD_148704b3c::caseD_40(undefined8 param_1,undefined8 param_2)

{
  FUN_14162be86(param_2,0);
  return param_2;
}



// FUNCTION 1470d7d32 caseD_41 body=27 status=ok
// SIG undefined caseD_41(void)

undefined8 switchD_148704b3c::caseD_41(undefined8 param_1,undefined8 param_2)

{
  FUN_14162be86(param_2,0);
  return param_2;
}



// FUNCTION 1470d7d4e FUN_1470d7d4e body=241 status=ok
// SIG undefined FUN_1470d7d4e(void)

undefined1 *
FUN_1470d7d4e(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_144aa84c2(param_4);
  if (lVar1 == 0) {
    lVar1 = FUN_14003f512(param_4);
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0xae8);
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0x100000000;
      if (lVar1 == 0) {
        return param_2;
      }
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      goto LAB_1470d7e1f;
    }
    lVar1 = FUN_140fecfdc(param_4);
    if (lVar1 == 0) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0x100000000;
      return param_2;
    }
    lVar1 = FUN_14003f626();
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (lVar1 == 0) {
      return param_2;
    }
    *(undefined4 *)(param_2 + 0x38) = 1;
  }
  else {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
LAB_1470d7e1f:
  FUN_1456bb102(param_2,lVar1);
  return param_2;
}



// FUNCTION 1470d7e40 FUN_1470d7e40 body=33 status=ok
// SIG undefined FUN_1470d7e40(void)

undefined8 * FUN_1470d7e40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1401031ac(0,0,param_2);
  return param_2;
}



// FUNCTION 1470d7e94 FUN_1470d7e94 body=48 status=ok
// SIG undefined FUN_1470d7e94(void)

longlong FUN_1470d7e94(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_14074effa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470d7ecc FUN_1470d7ecc body=48 status=ok
// SIG undefined FUN_1470d7ecc(void)

longlong FUN_1470d7ecc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_14074effa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470d7f1c FUN_1470d7f1c body=48 status=ok
// SIG undefined FUN_1470d7f1c(void)

longlong FUN_1470d7f1c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd8;
  FUN_14074effa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470d7f54 FUN_1470d7f54 body=48 status=ok
// SIG undefined FUN_1470d7f54(void)

longlong FUN_1470d7f54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe0;
  FUN_14074effa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470d7f8c FUN_1470d7f8c body=48 status=ok
// SIG undefined FUN_1470d7f8c(void)

longlong FUN_1470d7f8c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x588;
  FUN_14074effa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470d804a FUN_1470d804a body=59 status=ok
// SIG undefined FUN_1470d804a(void)

undefined8 FUN_1470d804a(longlong *param_1)

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



// FUNCTION 1470d80ea FUN_1470d80ea body=29 status=ok
// SIG undefined FUN_1470d80ea(void)

undefined8 FUN_1470d80ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470d8108 FUN_1470d8108 body=55 status=ok
// SIG undefined FUN_1470d8108(void)

void FUN_1470d8108(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5d38 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5d38 = FUN_140002ddd(FUN_1462b061f,uVar1,L"GbxContextParam_CustomPropertyResolver");
  }
  return;
}



// FUNCTION 1470d8140 FUN_1470d8140 body=58 status=ok
// SIG undefined FUN_1470d8140(void)

longlong FUN_1470d8140(undefined8 param_1,longlong param_2)

{
  FUN_140033559(".\\Runtime/Gearbox/GbxEngine/Public/Attributes/ValueResolvers/PropertyValueResolver.h"
                ,0x12,L"Pure virtual not implemented (%s)",L"Resolve");
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  return param_2;
}



// FUNCTION 1470d817c FUN_1470d817c body=48 status=ok
// SIG undefined FUN_1470d817c(void)

void FUN_1470d817c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a1c6480;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_14151b02a(param_2 + 2);
  *(undefined1 *)(param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 1470d81c2 FUN_1470d81c2 body=104 status=ok
// SIG undefined FUN_1470d81c2(void)

undefined1 FUN_1470d81c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + 8 + lVar1) = *(undefined1 *)(param_3 + 8 + lVar1);
      FUN_1470b4292(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined1 *)(param_2 + 0x160 + lVar1) = *(undefined1 *)(param_3 + 0x160 + lVar1);
      lVar1 = lVar1 + 0x168;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470d8252 FUN_1470d8252 body=59 status=ok
// SIG undefined FUN_1470d8252(void)

undefined8 FUN_1470d8252(longlong *param_1)

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



// FUNCTION 1470d829e FUN_1470d829e body=49 status=ok
// SIG undefined FUN_1470d829e(void)

void FUN_1470d829e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    *param_2 = &PTR_FUN_14a1c6480;
    FUN_1414a735c(param_2 + 2);
    *(undefined1 *)(param_2 + 0x2d) = 0;
  }
  return;
}



// FUNCTION 1470d831e FUN_1470d831e body=79 status=ok
// SIG undefined FUN_1470d831e(void)

void FUN_1470d831e(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  FUN_1413e94bc(param_2 + 1,0x40000000);
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  return;
}



// FUNCTION 1470d836e FUN_1470d836e body=79 status=ok
// SIG undefined FUN_1470d836e(void)

void FUN_1470d836e(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  FUN_1413e94bc(param_2 + 1,0x40000000);
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  return;
}



// FUNCTION 1470d83dc FUN_1470d83dc body=63 status=ok
// SIG undefined FUN_1470d83dc(void)

undefined1 FUN_1470d83dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470d8506(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1470d8444 FUN_1470d8444 body=59 status=ok
// SIG undefined FUN_1470d8444(void)

undefined8 FUN_1470d8444(longlong *param_1)

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



// FUNCTION 1470d8490 FUN_1470d8490 body=40 status=ok
// SIG undefined FUN_1470d8490(void)

void FUN_1470d8490(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_145ac2828(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1470d8506 FUN_1470d8506 body=208 status=ok
// SIG undefined FUN_1470d8506(void)

undefined4 * FUN_1470d8506(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  FUN_14117bcd8(param_1 + 1,param_2 + 1);
  param_1[6] = param_2[6];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  FUN_144a67f5c(param_1 + 8,param_2 + 8);
  FUN_140dcb4aa(param_1 + 0xc,param_2 + 0xc);
  FUN_1405b70a4(param_1 + 0x10,param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x14);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x14);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x14) = lVar3;
  lVar3 = 0xb;
  do {
    lVar2 = *(longlong *)(param_2 + lVar3 * 2);
    if ((bVar1 & 1) != 0) {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_2 + lVar3 * 2);
        bVar1 = DAT_14c950c29;
      }
    }
    *(longlong *)(param_1 + lVar3 * 2) = lVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xe);
  FUN_1470d85d6(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 1470d85d6 FUN_1470d85d6 body=79 status=ok
// SIG undefined FUN_1470d85d6(void)

undefined8 * FUN_1470d85d6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470d86ce(param_1,iVar1);
      FUN_1470d8730(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470d8626 FUN_1470d8626 body=115 status=ok
// SIG undefined FUN_1470d8626(void)

void FUN_1470d8626(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470d8699 FUN_1470d8699 body=52 status=ok
// SIG undefined FUN_1470d8699(void)

void FUN_1470d8699(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_144a8b00e(param_1,param_2);
    param_1 = param_1 + 0xc;
    param_2 = param_2 + 0xc;
  }
  return;
}



// FUNCTION 1470d86ce FUN_1470d86ce body=98 status=ok
// SIG undefined FUN_1470d86ce(void)

void FUN_1470d86ce(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470d8730 FUN_1470d8730 body=82 status=ok
// SIG undefined FUN_1470d8730(void)

void FUN_1470d8730(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1470d8784 FUN_1470d8784 body=135 status=ok
// SIG undefined FUN_1470d8784(void)

void FUN_1470d8784(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 400) != 0) {
    plVar1 = (longlong *)(param_1 + 0x1b0);
    if (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x1a0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    plVar1 = (longlong *)(param_1 + 0x170);
    if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x160);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    plVar1 = (longlong *)(param_1 + 0x130);
    if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x120);
    }
                    /* WARNING: Could not recover jumptable at 0x0001470d8800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1470d8866 FUN_1470d8866 body=59 status=ok
// SIG undefined FUN_1470d8866(void)

undefined8 FUN_1470d8866(longlong *param_1)

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



// FUNCTION 1470d8906 FUN_1470d8906 body=55 status=ok
// SIG undefined FUN_1470d8906(void)

void FUN_1470d8906(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5dc8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5dc8 = FUN_140002ddd(FUN_1462b087f,uVar1,L"SkeletalMeshComponentContextResolver");
  }
  return;
}



// FUNCTION 1470d89ae FUN_1470d89ae body=59 status=ok
// SIG undefined FUN_1470d89ae(void)

undefined8 FUN_1470d89ae(longlong *param_1)

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



// FUNCTION 1470d8a4a FUN_1470d8a4a body=55 status=ok
// SIG undefined FUN_1470d8a4a(void)

void FUN_1470d8a4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5de0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5de0 = FUN_140002ddd(FUN_1462b0915,uVar1,L"SlotWeightValueResolver");
  }
  return;
}



// FUNCTION 1470d8b2e FUN_1470d8b2e body=59 status=ok
// SIG undefined FUN_1470d8b2e(void)

undefined8 FUN_1470d8b2e(longlong *param_1)

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



// FUNCTION 1470d8c52 FUN_1470d8c52 body=59 status=ok
// SIG undefined FUN_1470d8c52(void)

undefined8 FUN_1470d8c52(longlong *param_1)

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



// FUNCTION 1470d8d3c FUN_1470d8d3c body=39 status=ok
// SIG undefined FUN_1470d8d3c(void)

undefined8 FUN_1470d8d3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470d8d8c FUN_1470d8d8c body=59 status=ok
// SIG undefined FUN_1470d8d8c(void)

undefined8 FUN_1470d8d8c(longlong *param_1)

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



// FUNCTION 1470d8ed2 FUN_1470d8ed2 body=59 status=ok
// SIG undefined FUN_1470d8ed2(void)

undefined8 FUN_1470d8ed2(longlong *param_1)

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



// FUNCTION 1470d8fe8 FUN_1470d8fe8 body=59 status=ok
// SIG undefined FUN_1470d8fe8(void)

undefined8 FUN_1470d8fe8(longlong *param_1)

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



// FUNCTION 1470d9089 FUN_1470d9089 body=1 status=ok
// SIG undefined FUN_1470d9089(void)

void FUN_1470d9089(void)

{
  return;
}



// FUNCTION 1470d908a FUN_1470d908a body=132 status=ok
// SIG undefined FUN_1470d908a(void)

void FUN_1470d908a(longlong param_1,int param_2)

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



// FUNCTION 1470d9120 FUN_1470d9120 body=93 status=ok
// SIG undefined FUN_1470d9120(void)

void FUN_1470d9120(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c70f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470d917e FUN_1470d917e body=93 status=ok
// SIG undefined FUN_1470d917e(void)

void FUN_1470d917e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c70f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470d91dc FUN_1470d91dc body=126 status=ok
// SIG undefined FUN_1470d91dc(void)

void FUN_1470d91dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c70f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470d924b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470d926a FUN_1470d926a body=150 status=ok
// SIG undefined FUN_1470d926a(void)

void FUN_1470d926a(longlong param_1,int param_2)

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



// FUNCTION 1470d9302 FUN_1470d9302 body=62 status=ok
// SIG undefined FUN_1470d9302(void)

void FUN_1470d9302(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470d9340(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x88,8);
  }
  return;
}



// FUNCTION 1470d9340 FUN_1470d9340 body=118 status=ok
// SIG undefined FUN_1470d9340(void)

ulonglong FUN_1470d9340(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x88) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1470d937d;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x88,8);
      param_2 = param_2 / 0x88;
    }
  }
LAB_1470d937d:
  return param_2 & 0xffffffff;
}



// FUNCTION 1470d93b6 FUN_1470d93b6 body=103 status=ok
// SIG undefined FUN_1470d93b6(void)

undefined8 FUN_1470d93b6(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0xc)) {
    uVar4 = uVar2 / 0xc & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xc,4);
  }
  return uVar3;
}



// FUNCTION 1470d941e FUN_1470d941e body=147 status=ok
// SIG undefined FUN_1470d941e(void)

void FUN_1470d941e(longlong param_1,int param_2)

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



// FUNCTION 1470d94bc FUN_1470d94bc body=29 status=ok
// SIG undefined FUN_1470d94bc(void)

undefined8 FUN_1470d94bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470d94da FUN_1470d94da body=158 status=ok
// SIG undefined FUN_1470d94da(void)

void FUN_1470d94da(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1470d954c;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1470d954c;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1470d954c:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001470d956c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1470d9578 FUN_1470d9578 body=138 status=ok
// SIG undefined FUN_1470d9578(void)

void FUN_1470d9578(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1470d9602 FUN_1470d9602 body=48 status=ok
// SIG undefined FUN_1470d9602(void)

void FUN_1470d9602(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1470d9632 FUN_1470d9632 body=22 status=ok
// SIG undefined FUN_1470d9632(void)

void FUN_1470d9632(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 1470d9648 FUN_1470d9648 body=147 status=ok
// SIG undefined FUN_1470d9648(void)

void FUN_1470d9648(longlong param_1,int param_2)

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



// FUNCTION 1470d96dc FUN_1470d96dc body=98 status=ok
// SIG undefined FUN_1470d96dc(void)

void FUN_1470d96dc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_14072ffb2(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1470d973e FUN_1470d973e body=62 status=ok
// SIG undefined FUN_1470d973e(void)

void FUN_1470d973e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470d977c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1470d977c FUN_1470d977c body=112 status=ok
// SIG undefined FUN_1470d977c(void)

ulonglong FUN_1470d977c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1470d97b6;
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
LAB_1470d97b6:
  return param_2 & 0xffffffff;
}



// FUNCTION 1470d97ec FUN_1470d97ec body=107 status=ok
// SIG undefined FUN_1470d97ec(void)

void FUN_1470d97ec(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14c9a6208;
  if (param_1 <= (int)DAT_14c9a6208) {
    iVar2 = 8;
    if (8 < DAT_14c9a6208) {
      lVar5 = (longlong)(int)DAT_14c9a6208;
      if (8 < DAT_14c9a620c) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14c9a620c = iVar2;
    FUN_1470d9858(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14c9a6208);
}



// FUNCTION 1470d9858 FUN_1470d9858 body=142 status=ok
// SIG undefined FUN_1470d9858(void)

void FUN_1470d9858(int param_1,uint param_2)

{
  if (param_2 < 9) {
    if (DAT_14c9a6200 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14c9a6180,DAT_14c9a6200,(longlong)param_1 << 4);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14c9a6200 == (void *)0x0) {
    FUN_1446efa72(&DAT_14c9a6200,0,param_2,0x10);
    memmove(DAT_14c9a6200,&DAT_14c9a6180,(longlong)param_1 << 4);
    return;
  }
  FUN_1446efa72(&DAT_14c9a6200,param_1,param_2,0x10);
  return;
}



// FUNCTION 1470d98e6 FUN_1470d98e6 body=136 status=ok
// SIG undefined FUN_1470d98e6(void)

void FUN_1470d98e6(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x3c8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xc;
    if (0xc < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0xc < *(uint *)(param_1 + 0x3cc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x50,0);
      iVar4 = (int)(uVar3 / 0x50);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x3cc) = iVar5;
    FUN_1470d9970(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470d9970 FUN_1470d9970 body=149 status=ok
// SIG undefined FUN_1470d9970(void)

void FUN_1470d9970(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x3c0);
  if ((uint)param_3 < 0xd) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x3c0,0,param_3,0x50);
    memmove(*(void **)((longlong)param_1 + 0x3c0),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x3c0,param_2,param_3,0x50);
  return;
}



// FUNCTION 1470d9a06 FUN_1470d9a06 body=96 status=ok
// SIG undefined FUN_1470d9a06(void)

void FUN_1470d9a06(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1470d9a66 FUN_1470d9a66 body=48 status=ok
// SIG undefined FUN_1470d9a66(void)

void FUN_1470d9a66(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1470d9a96 FUN_1470d9a96 body=176 status=ok
// SIG undefined FUN_1470d9a96(void)

ulonglong FUN_1470d9a96(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 3;
    uVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5 * 8) == lVar3) {
        if ((int)uVar5 != -1) goto LAB_1470d9b23;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_14571252c(param_1,uVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_1470d9b23:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1470d9b46 FUN_1470d9b46 body=307 status=ok
// SIG undefined FUN_1470d9b46(void)

void FUN_1470d9b46(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar12 = (longlong)(int)uVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = *(longlong *)*param_2;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    iVar9 = 0;
    uVar10 = 0;
    bVar5 = *plVar2 == lVar3;
    do {
      iVar4 = (int)uVar10;
      uVar11 = uVar10;
      uVar7 = uVar10;
      uVar6 = iVar4 + 1U;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        uVar6 = uVar1;
      }
      do {
        uVar7 = uVar7 + 1;
        if (lVar12 <= (longlong)uVar7) {
          uVar11 = (ulonglong)uVar6;
          break;
        }
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while (bVar5 == (plVar2[uVar7] == lVar3));
      if (bVar5 == false) {
        iVar8 = (int)uVar11 - iVar4;
        if (iVar9 != iVar4) {
          memmove(plVar2 + iVar9,plVar2 + uVar10,(longlong)iVar8 << 3);
        }
        iVar9 = iVar9 + iVar8;
      }
      uVar10 = uVar11;
      bVar5 = (bool)(bVar5 ^ 1);
    } while ((longlong)uVar7 < lVar12);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 1470d9c7a FUN_1470d9c7a body=48 status=ok
// SIG undefined FUN_1470d9c7a(void)

void FUN_1470d9c7a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1470d9caa FUN_1470d9caa body=48 status=ok
// SIG undefined FUN_1470d9caa(void)

void FUN_1470d9caa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1470d9cda FUN_1470d9cda body=253 status=ok
// SIG undefined FUN_1470d9cda(void)

void FUN_1470d9cda(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar1;
  if (lVar5 != 0) {
    lVar2 = *param_1;
    uVar13 = 0;
    bVar12 = *(longlong *)(lVar2 + 8) == *(longlong *)(*param_2 + 8);
    uVar9 = 0;
    do {
      uVar8 = (ulonglong)uVar9;
      uVar6 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar1) {
        uVar6 = uVar1;
      }
      lVar4 = uVar8 * 0x10;
      plVar7 = (longlong *)(lVar2 + 0x18 + lVar4);
      uVar10 = uVar9;
      do {
        uVar8 = uVar8 + 1;
        uVar11 = uVar6;
        if (lVar5 <= (longlong)uVar8) break;
        lVar3 = *plVar7;
        uVar10 = uVar10 + 1;
        plVar7 = plVar7 + 2;
        uVar11 = uVar10;
      } while (bVar12 == (lVar3 == *(longlong *)(*param_2 + 8)));
      if (bVar12 == false) {
        if (uVar13 != uVar9) {
          memmove((void *)((longlong)(int)uVar13 * 0x10 + lVar2),(void *)(lVar4 + lVar2),
                  (longlong)(int)(uVar11 - uVar9) << 4);
        }
        uVar13 = uVar13 + (uVar11 - uVar9);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      uVar9 = uVar11;
    } while ((longlong)uVar8 < lVar5);
    *(uint *)(param_1 + 1) = uVar13;
  }
  return;
}



// FUNCTION 1470d9dd8 FUN_1470d9dd8 body=138 status=ok
// SIG undefined FUN_1470d9dd8(void)

void FUN_1470d9dd8(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1470d9e62 FUN_1470d9e62 body=113 status=ok
// SIG undefined FUN_1470d9e62(void)

void FUN_1470d9e62(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1470d9ed4 FUN_1470d9ed4 body=114 status=ok
// SIG undefined FUN_1470d9ed4(void)

void FUN_1470d9ed4(longlong *param_1,int param_2)

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



// FUNCTION 1470d9f46 FUN_1470d9f46 body=114 status=ok
// SIG undefined FUN_1470d9f46(void)

void FUN_1470d9f46(longlong *param_1,int param_2)

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



// FUNCTION 1470d9fb8 FUN_1470d9fb8 body=122 status=ok
// SIG undefined FUN_1470d9fb8(void)

void FUN_1470d9fb8(longlong *param_1,int param_2)

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



// FUNCTION 1470da032 FUN_1470da032 body=262 status=ok
// SIG undefined FUN_1470da032(void)

longlong FUN_1470da032(void)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cad00c8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1479b7a0c;
      local_40 = &LAB_1463b464e;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 8;
      local_68 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) == DAT_14cad00c8 + 0x30)) goto LAB_1470da07f;
  }
  lVar1 = 0;
LAB_1470da07f:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470da13a FUN_1470da13a body=136 status=ok
// SIG undefined FUN_1470da13a(void)

void FUN_1470da13a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined1 local_58 [40];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88);
  local_58[0] = 0;
  local_30 = 0;
  uVar1 = FUN_144873cc0(param_1);
  FUN_1470da1c3(uVar1,local_88);
  FUN_144a5ac3a(local_58);
  FUN_144a5ac3a(local_88);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470da1c3 FUN_1470da1c3 body=259 status=ok
// SIG undefined FUN_1470da1c3(void)

void FUN_1470da1c3(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [48];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    }
    if (plVar3 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if (cVar5 != '\0') {
        FUN_1400606f6(local_70,param_1,param_2);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = local_70;
        }
        if ((longlong)local_38 != 0) {
          lVar6 = (longlong)local_38 * 0x30;
          do {
            (**(code **)(*plVar3 + 0x58))(plVar3,param_1,local_40);
            local_40 = local_40 + 0x30;
            lVar6 = lVar6 + -0x30;
          } while (lVar6 != 0);
        }
        FUN_1446fdf24(local_70);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470da2c8 FUN_1470da2c8 body=244 status=ok
// SIG undefined FUN_1470da2c8(void)

void FUN_1470da2c8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar3 = &local_58;
  local_40 = 4;
  local_38 = 2;
  local_b8[0] = 0;
  local_90 = 0;
  local_58 = param_3;
  FUN_1456bb102(local_b8);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_1);
  FUN_140e4698e(uVar2,local_b8,puVar3);
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_40) {
      puVar3 = (undefined4 *)CONCAT44(uStack_54,local_58);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(uStack_54,local_58));
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470da3be FUN_1470da3be body=266 status=ok
// SIG undefined FUN_1470da3be(void)

void FUN_1470da3be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_1);
  FUN_144750e81(local_58,uVar2,local_b8);
  FUN_141213494(local_58,&local_c0,param_3);
  *param_4 = local_c0;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_58;
    if (0x18 < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470da4ca FUN_1470da4ca body=247 status=ok
// SIG undefined FUN_1470da4ca(void)

void FUN_1470da4ca(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 8;
  local_58[0] = (undefined8 **)*param_3;
  local_38 = 0xb;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_1);
  FUN_140e4698e(uVar2,local_b8,local_58);
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_58;
    if (0x18 < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470da5c2 FUN_1470da5c2 body=261 status=ok
// SIG undefined FUN_1470da5c2(void)

undefined8
FUN_1470da5c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8,param_3);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_2);
  FUN_144750e81(local_58,uVar2,local_b8);
  FUN_1405b801a(local_58,param_1,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_58;
    if (0x18 < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470da6c8 FUN_1470da6c8 body=256 status=ok
// SIG undefined FUN_1470da6c8(void)

void FUN_1470da6c8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar3 = &local_58;
  local_40 = 0x18;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = *(undefined8 *)(param_3 + 4);
  local_38 = 4;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_1);
  FUN_140e4698e(uVar2,local_b8,puVar3);
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_40) {
      puVar3 = (undefined4 *)CONCAT44(uStack_54,local_58);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(uStack_54,local_58));
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470da7ca FUN_1470da7ca body=261 status=ok
// SIG undefined FUN_1470da7ca(void)

undefined8
FUN_1470da7ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8,param_3);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_2);
  FUN_144750e81(local_58,uVar2,local_b8);
  FUN_1470da8d0(local_58,param_1,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_58;
    if (0x18 < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470da8d0 FUN_1470da8d0 body=205 status=ok
// SIG undefined FUN_1470da8d0(void)

undefined4 * FUN_1470da8d0(undefined4 *param_1,undefined4 *param_2,undefined8 ***param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\x05') {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_48,param_1,5);
  if (local_28 != 0) {
    param_3 = local_48;
  }
  *(undefined8 ***)(param_2 + 4) = param_3[2];
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = *(undefined4 *)param_3;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = local_48;
    if (0x18 < local_30) {
      pppuVar5 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470da99e FUN_1470da99e body=256 status=ok
// SIG undefined FUN_1470da99e(void)

void FUN_1470da99e(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar3 = &local_58;
  local_40 = 0x18;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = *(undefined8 *)(param_3 + 4);
  local_38 = 5;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_1);
  FUN_140e4698e(uVar2,local_b8,puVar3);
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_40) {
      puVar3 = (undefined4 *)CONCAT44(uStack_54,local_58);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(uStack_54,local_58));
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470daaa0 FUN_1470daaa0 body=297 status=ok
// SIG undefined FUN_1470daaa0(void)

longlong FUN_1470daaa0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_1);
  FUN_144750e81(local_58,uVar2,local_b8);
  lVar3 = FUN_14105ccec(local_58,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar4 = local_58;
    if (0x18 < local_40) {
      pppuVar4 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar4);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  if (lVar3 != 0) {
    if (param_3 == 0) goto LAB_1470dab9f;
    if ((*(int *)(param_3 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8
         ) == param_3 + 0x30)) goto LAB_1470dab9f;
  }
  lVar3 = 0;
LAB_1470dab9f:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dabca FUN_1470dabca body=265 status=ok
// SIG undefined FUN_1470dabca(void)

void FUN_1470dabca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 8;
  local_58[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_58,param_3);
  local_38 = 6;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8,param_2);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_1);
  FUN_140e4698e(uVar2,local_b8,local_58);
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_58;
    if (0x18 < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470dacd4 FUN_1470dacd4 body=401 status=ok
// SIG undefined FUN_1470dacd4(void)

longlong FUN_1470dacd4(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8);
  local_88[0] = 0;
  local_60 = 0;
  uVar3 = FUN_144873cc0(param_1);
  FUN_144750e81(local_58,uVar3,local_b8);
  lVar4 = FUN_1457633d0(local_58,param_4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar7 = local_58;
    if (0x18 < local_40) {
      ppppuVar7 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar7);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  if (lVar4 != 0) {
    lVar2 = *param_3;
    if ((((lVar2 == 0) || (lVar5 = FUN_144a6c4d8(), lVar5 == 0)) ||
        (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30 || (lVar2 = *param_3, lVar2 == 0)))) goto LAB_1470dae1d;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    lVar5 = FUN_144a6c4d8();
    if ((lVar5 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        lVar6 = lVar2;
      }
    }
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) goto LAB_1470dae1d;
  }
  lVar4 = 0;
LAB_1470dae1d:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1470dae66 FUN_1470dae66 body=265 status=ok
// SIG undefined FUN_1470dae66(void)

void FUN_1470dae66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 8;
  local_58[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_58,param_3);
  local_38 = 7;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8,param_2);
  local_88[0] = 0;
  local_60 = 0;
  uVar2 = FUN_144873cc0(param_1);
  FUN_140e4698e(uVar2,local_b8,local_58);
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_58;
    if (0x18 < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470daf70 FUN_1470daf70 body=23 status=ok
// SIG undefined FUN_1470daf70(void)

int FUN_1470daf70(undefined4 param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_141047926(param_1,param_2,(float)param_3);
  return (int)fVar1;
}



// FUNCTION 1470daf87 FUN_1470daf87 body=373 status=ok
// SIG undefined FUN_1470daf87(void)

longlong * FUN_1470daf87(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [48];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_2 + 0x30);
    plVar5 = *(longlong **)(param_2 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    if (plVar3 != (longlong *)0x0) {
      *param_1 = param_2;
      param_1[1] = *param_4;
      param_1[2] = param_4[1];
      param_1[9] = 0;
      param_1[10] = 0x100000000;
      FUN_1400606f6(local_80,param_2,param_3);
      puVar6 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar6 = local_80;
      }
      if ((longlong)local_48 != 0) {
        lVar7 = (longlong)local_48 * 0x30;
        do {
          cVar4 = (**(code **)(*plVar3 + 0x80))(plVar3,param_2,puVar6,param_4);
          if (cVar4 != '\0') {
            FUN_1470dbf74(param_1,puVar6);
          }
          puVar6 = puVar6 + 0x30;
          lVar7 = lVar7 + -0x30;
        } while (lVar7 != 0);
      }
      FUN_1446fdf24(local_80);
      goto LAB_1470db0b1;
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
LAB_1470db0b1:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470db0fe FUN_1470db0fe body=145 status=ok
// SIG undefined FUN_1470db0fe(void)

undefined8 FUN_1470db0fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [40];
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined1 local_60 [40];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90[0] = 0;
  local_68 = 0;
  FUN_1456bb102(local_90,param_3);
  local_60[0] = 0;
  local_38 = 0;
  FUN_1470db190(param_1,param_2,local_90);
  FUN_144a5ac3a(local_60);
  FUN_144a5ac3a(local_90);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470db190 FUN_1470db190 body=587 status=ok
// SIG undefined FUN_1470db190(void)

longlong * FUN_1470db190(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [40];
  undefined1 *local_c0;
  longlong *local_b8;
  longlong **local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong local_80;
  undefined1 local_78 [48];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = *param_2;
  plVar1 = param_2 + 1;
  if ((int)param_2[10] < 1) {
    FUN_1470daf87(param_1,local_80,param_3,plVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
  }
  if (local_80 == 0) {
    local_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
  }
  else {
    local_98 = *(longlong **)(local_80 + 0x30);
    plVar7 = *(longlong **)(local_80 + 0x38);
    if (plVar7 == (longlong *)0x0) {
      plStack_90 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_90 = plVar7;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_98 != (longlong *)0x0) {
      *param_1 = local_80;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[9] = 0;
      param_1[10] = 0x100000000;
      FUN_1400606f6(local_78,local_80,param_3);
      local_b0 = &local_98;
      plVar7 = param_2 + 3;
      if ((longlong *)param_2[9] != (longlong *)0x0) {
        plVar7 = (longlong *)param_2[9];
      }
      local_c0 = local_78;
      local_b8 = param_1;
      local_a8 = &local_80;
      local_a0 = plVar1;
      if ((longlong)(int)param_2[10] != 0) {
        lVar6 = (longlong)(int)param_2[10] * 0x30;
        do {
          FUN_142b3d7d8(&local_c0,plVar7);
          plVar7 = plVar7 + 6;
          lVar6 = lVar6 + -0x30;
        } while (lVar6 != 0);
      }
      puVar5 = local_78;
      if (local_48 != (undefined1 *)0x0) {
        puVar5 = local_48;
      }
      if ((longlong)local_40 != 0) {
        lVar6 = (longlong)local_40 * 0x30;
        do {
          cVar4 = (**(code **)(*local_98 + 0x80))(local_98,local_80,puVar5,plVar1);
          if (cVar4 != '\0') {
            FUN_1470dbf74(param_1,puVar5);
          }
          puVar5 = puVar5 + 0x30;
          lVar6 = lVar6 + -0x30;
        } while (lVar6 != 0);
      }
      FUN_1446fdf24(local_78);
      goto LAB_1470db356;
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
LAB_1470db356:
  plVar1 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_90 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470db3de thunk_FUN_1470db3e3 body=5 status=ok
// SIG undefined thunk_FUN_1470db3e3(void)

void thunk_FUN_1470db3e3(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x30);
    plVar4 = *(longlong **)(lVar2 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      plVar6 = param_1 + 3;
      if ((longlong *)param_1[9] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[9];
      }
      if ((longlong)(int)param_1[10] != 0) {
        lVar5 = (longlong)(int)param_1[10] * 0x30;
        do {
          (**(code **)(*plVar3 + 0x88))(plVar3,lVar2,plVar6,param_1 + 1);
          plVar6 = plVar6 + 6;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001470db4a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1470db3e3 FUN_1470db3e3 body=213 status=ok
// SIG undefined FUN_1470db3e3(void)

void FUN_1470db3e3(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x30);
    plVar4 = *(longlong **)(lVar2 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      plVar6 = param_1 + 3;
      if ((longlong *)param_1[9] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[9];
      }
      if ((longlong)(int)param_1[10] != 0) {
        lVar5 = (longlong)(int)param_1[10] * 0x30;
        do {
          (**(code **)(*plVar3 + 0x88))(plVar3,lVar2,plVar6,param_1 + 1);
          plVar6 = plVar6 + 6;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001470db4a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1470db4b8 FUN_1470db4b8 body=22 status=ok
// SIG undefined FUN_1470db4b8(void)

undefined8 FUN_1470db4b8(undefined8 param_1)

{
  FUN_1413e94bc();
  return param_1;
}



// FUNCTION 1470db4ce FUN_1470db4ce body=20 status=ok
// SIG undefined FUN_1470db4ce(void)

void FUN_1470db4ce(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  *param_3 = *(undefined4 *)(param_1 + 8);
  return;
}



// FUNCTION 1470db4e2 FUN_1470db4e2 body=28 status=ok
// SIG undefined FUN_1470db4e2(void)

undefined8 FUN_1470db4e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1470b0b78(param_2,param_1);
  return param_1;
}



// FUNCTION 1470db4fe FUN_1470db4fe body=6 status=ok
// SIG undefined FUN_1470db4fe(void)

undefined4 FUN_1470db4fe(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 1470db504 FUN_1470db504 body=10 status=ok
// SIG undefined FUN_1470db504(void)

void FUN_1470db504(undefined8 param_1,longlong param_2)

{
  FUN_144b085bc(param_1,*(undefined4 *)(param_2 + 4));
  return;
}



// FUNCTION 1470db50e thunk_FUN_144b085bc body=5 status=ok
// SIG undefined thunk_FUN_144b085bc(void)

bool thunk_FUN_144b085bc(longlong param_1,float param_2)

{
  return ABS(*(float *)(param_1 + 4) - param_2) <= 1e-08;
}


