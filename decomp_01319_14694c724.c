// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14694c724 FUN_14694c724 body=96 status=ok
// SIG undefined FUN_14694c724(void)

undefined8 FUN_14694c724(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1413a517a(param_2,param_3);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14694c7ac FUN_14694c7ac body=59 status=ok
// SIG undefined FUN_14694c7ac(void)

undefined8 FUN_14694c7ac(longlong *param_1)

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



// FUNCTION 14694c7f2 FUN_14694c7f2 body=74 status=ok
// SIG undefined FUN_14694c7f2(void)

void FUN_14694c7f2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_149eda6d0;
    plVar3 = (longlong *)param_2[6];
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
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 14694c88a FUN_14694c88a body=158 status=ok
// SIG undefined FUN_14694c88a(void)

undefined8 *
FUN_14694c88a(undefined8 *param_1,undefined8 *param_2,undefined2 *param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149eda670;
  *(undefined2 *)(param_1 + 1) = *param_3;
  *(undefined1 *)((longlong)param_1 + 10) = param_5;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_149eda6d0;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  lVar3 = param_2[2];
  param_1[6] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 7) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_7;
  plVar4 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 14694c928 FUN_14694c928 body=83 status=ok
// SIG undefined FUN_14694c928(void)

undefined8 * FUN_14694c928(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eda6d0;
  plVar3 = (longlong *)param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694ca40 FUN_14694ca40 body=59 status=ok
// SIG undefined FUN_14694ca40(void)

undefined8 FUN_14694ca40(longlong *param_1)

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



// FUNCTION 14694cae0 FUN_14694cae0 body=29 status=ok
// SIG undefined FUN_14694cae0(void)

undefined8 FUN_14694cae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694cbe2 FUN_14694cbe2 body=110 status=ok
// SIG undefined FUN_14694cbe2(void)

undefined8 FUN_14694cbe2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined8 uVar10;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      uVar8 = *(undefined8 *)(param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x38) = *(undefined8 *)(param_3 + -0x38);
      *(undefined8 *)(param_2 + -0x30) = uVar8;
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      uVar4 = *(undefined4 *)(param_3 + -0x10);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined4 *)(param_2 + -0x10) = uVar4;
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      FUN_1413a517a(param_2,param_3);
      uVar8 = *(undefined8 *)(param_3 + 0x20);
      uVar9 = *(undefined8 *)(param_3 + 0x23);
      uVar10 = *(undefined8 *)(param_3 + 0x2b);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x20) = uVar8;
      *(undefined8 *)(param_2 + 0x23) = uVar9;
      *(undefined8 *)(param_2 + 0x2b) = uVar10;
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14694cc78 FUN_14694cc78 body=59 status=ok
// SIG undefined FUN_14694cc78(void)

undefined8 FUN_14694cc78(longlong *param_1)

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



// FUNCTION 14694ccbe FUN_14694ccbe body=74 status=ok
// SIG undefined FUN_14694ccbe(void)

void FUN_14694ccbe(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_149eda650;
    plVar3 = (longlong *)param_2[10];
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
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 14694cd56 FUN_14694cd56 body=83 status=ok
// SIG undefined FUN_14694cd56(void)

undefined8 * FUN_14694cd56(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eda650;
  plVar3 = (longlong *)param_1[10];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694ce5a FUN_14694ce5a body=63 status=ok
// SIG undefined FUN_14694ce5a(void)

undefined8 FUN_14694ce5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    lVar2 = 0x20;
    do {
      *(undefined8 *)(param_2 + -8 + lVar2) = *(undefined8 *)(param_3 + -8 + lVar2);
      puVar4 = (undefined8 *)(param_3 + -0x18 + lVar2);
      uVar1 = puVar4[1];
      puVar5 = (undefined8 *)(param_2 + -0x18 + lVar2);
      *puVar5 = *puVar4;
      puVar5[1] = uVar1;
      puVar4 = (undefined8 *)(param_3 + lVar2);
      puVar5 = (undefined8 *)(param_2 + lVar2);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar2 = lVar2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14694cec2 FUN_14694cec2 body=59 status=ok
// SIG undefined FUN_14694cec2(void)

undefined8 FUN_14694cec2(longlong *param_1)

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



// FUNCTION 14694cf6e FUN_14694cf6e body=29 status=ok
// SIG undefined FUN_14694cf6e(void)

undefined8 FUN_14694cf6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694d070 FUN_14694d070 body=59 status=ok
// SIG undefined FUN_14694d070(void)

undefined8 FUN_14694d070(longlong *param_1)

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



// FUNCTION 14694d110 FUN_14694d110 body=29 status=ok
// SIG undefined FUN_14694d110(void)

undefined8 FUN_14694d110(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694d12e FUN_14694d12e body=119 status=ok
// SIG undefined FUN_14694d12e(void)

void FUN_14694d12e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14694d1a6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14694d1a6 FUN_14694d1a6 body=141 status=ok
// SIG undefined FUN_14694d1a6(void)

void FUN_14694d1a6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 14694d2e0 FUN_14694d2e0 body=59 status=ok
// SIG undefined FUN_14694d2e0(void)

undefined8 FUN_14694d2e0(longlong *param_1)

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



// FUNCTION 14694d382 FUN_14694d382 body=121 status=ok
// SIG undefined FUN_14694d382(void)

void FUN_14694d382(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 0x48);
  FUN_1447157bd(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x128);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x48),(longlong)iVar3 * 0x48);
    iVar1 = *(int *)(param_1 + 0x128);
  }
  *(int *)(param_1 + 0x128) = iVar1 - param_3;
  return;
}



// FUNCTION 14694d3fc FUN_14694d3fc body=74 status=ok
// SIG undefined FUN_14694d3fc(void)

void FUN_14694d3fc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14694d446(param_1,*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 300));
  if (iVar1 == *(int *)(param_1 + 300)) {
    return;
  }
  *(int *)(param_1 + 300) = iVar1;
  FUN_14022ee7e(param_1,*(undefined4 *)(param_1 + 0x128),iVar1,0x48);
  return;
}



// FUNCTION 14694d446 FUN_14694d446 body=126 status=ok
// SIG undefined FUN_14694d446(void)

ulonglong FUN_14694d446(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x48) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,0);
      uVar1 = uVar1 / 0x48;
    }
  }
  return uVar1;
}



// FUNCTION 14694d4c4 FUN_14694d4c4 body=130 status=ok
// SIG undefined FUN_14694d4c4(void)

void FUN_14694d4c4(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_2 + 0x128);
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x128);
    *(uint *)(param_1 + 0x128) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 300) - iVar2) < uVar1) {
      FUN_14022ed06(param_1,iVar2);
    }
    lVar4 = *(longlong *)(param_2 + 0x120);
    if (*(longlong *)(param_2 + 0x120) == 0) {
      lVar4 = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar3 = param_1;
    }
    FUN_1401bb7eb(lVar3 + (longlong)iVar2 * 0x48,lVar4,uVar1);
    return;
  }
  return;
}



// FUNCTION 14694d546 FUN_14694d546 body=227 status=ok
// SIG undefined FUN_14694d546(void)

void FUN_14694d546(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  
  *param_1 = *param_2;
  lVar7 = param_2[1];
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_1 + 0x1d) = *(undefined8 *)((longlong)param_2 + 0x1d);
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  bVar6 = false;
  lVar7 = 0;
  do {
    bVar4 = false;
    lVar5 = 0;
    do {
      param_1[lVar7 * 4 + lVar5 * 2 + 5] = param_2[lVar7 * 4 + lVar5 * 2 + 5];
      lVar1 = param_2[lVar7 * 4 + lVar5 * 2 + 6];
      param_1[lVar7 * 4 + lVar5 * 2 + 6] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      lVar5 = 1;
      bVar3 = !bVar4;
      bVar4 = true;
    } while (bVar3);
    lVar7 = 1;
    bVar4 = !bVar6;
    bVar6 = true;
  } while (bVar4);
  bVar6 = false;
  lVar7 = 0;
  do {
    param_1[lVar7 * 2 + 0xd] = param_2[lVar7 * 2 + 0xd];
    lVar5 = param_2[lVar7 * 2 + 0xe];
    param_1[lVar7 * 2 + 0xe] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
      UNLOCK();
    }
    lVar7 = 1;
    bVar4 = !bVar6;
    bVar6 = true;
  } while (bVar4);
  uVar2 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar2;
  uVar2 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar2;
  return;
}



// FUNCTION 14694d62a FUN_14694d62a body=146 status=ok
// SIG undefined FUN_14694d62a(void)

void FUN_14694d62a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14694d6be FUN_14694d6be body=122 status=ok
// SIG undefined FUN_14694d6be(void)

void FUN_14694d6be(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 14694d738 FUN_14694d738 body=31 status=ok
// SIG undefined FUN_14694d738(void)

undefined8 FUN_14694d738(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694d774 FUN_14694d774 body=101 status=ok
// SIG undefined FUN_14694d774(void)

void FUN_14694d774(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eda1b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14694d7da FUN_14694d7da body=101 status=ok
// SIG undefined FUN_14694d7da(void)

void FUN_14694d7da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eda1b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14694d840 FUN_14694d840 body=134 status=ok
// SIG undefined FUN_14694d840(void)

void FUN_14694d840(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149eda1b0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014694d8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14694d8d6 FUN_14694d8d6 body=25 status=ok
// SIG undefined FUN_14694d8d6(void)

undefined8 FUN_14694d8d6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14694d8f0 FUN_14694d8f0 body=122 status=ok
// SIG undefined FUN_14694d8f0(void)

void FUN_14694d8f0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x98) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98 + 4) = uVar5;
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



// FUNCTION 14694d96a FUN_14694d96a body=69 status=ok
// SIG undefined FUN_14694d96a(void)

void FUN_14694d96a(longlong param_1,uint param_2)

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
    FUN_140325268(param_1);
    return;
  }
  return;
}



// FUNCTION 14694d9b0 FUN_14694d9b0 body=114 status=ok
// SIG undefined FUN_14694d9b0(void)

void FUN_14694d9b0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14694da22 FUN_14694da22 body=329 status=ok
// SIG undefined FUN_14694da22(void)

int FUN_14694da22(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar8 = *param_1;
      do {
        lVar11 = (longlong)iVar3 * 0x40;
        plVar7 = *(longlong **)(lVar8 + 8 + lVar11);
        if (plVar7 == (longlong *)0x0) {
LAB_14694daa5:
          plVar7 = (longlong *)0x0;
        }
        else {
          iVar6 = (int)plVar7[1];
          do {
            if (iVar6 == 0) goto LAB_14694daa5;
            LOCK();
            iVar5 = (int)plVar7[1];
            bVar12 = iVar6 == iVar5;
            if (bVar12) {
              *(int *)(plVar7 + 1) = iVar6 + 1;
              iVar5 = iVar6;
            }
            iVar6 = iVar5;
            UNLOCK();
          } while (!bVar12);
        }
        plVar10 = (longlong *)(lVar8 + lVar11);
        lVar8 = *plVar10;
        plVar4 = (longlong *)param_3[1];
        if (plVar4 == (longlong *)0x0) {
LAB_14694daf4:
          lVar9 = 0;
        }
        else {
          iVar6 = (int)plVar4[1];
          do {
            if (iVar6 == 0) goto LAB_14694daf4;
            LOCK();
            iVar5 = (int)plVar4[1];
            bVar12 = iVar6 == iVar5;
            if (bVar12) {
              *(int *)(plVar4 + 1) = iVar6 + 1;
              iVar5 = iVar6;
            }
            iVar6 = iVar5;
            UNLOCK();
          } while (!bVar12);
          lVar9 = *param_3;
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
        if (plVar7 == (longlong *)0x0) {
          lVar8 = 0;
        }
        else {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if ((((lVar8 == lVar9) && ((int)plVar10[2] == (int)param_3[2])) &&
            (*(int *)((longlong)plVar10 + 0x14) == *(int *)((longlong)param_3 + 0x14))) &&
           (((int)plVar10[3] == (int)param_3[3] &&
            (*(int *)((longlong)plVar10 + 0x1c) == *(int *)((longlong)param_3 + 0x1c))))) {
          return iVar3;
        }
        lVar8 = *param_1;
        iVar3 = *(int *)(lVar8 + 0x38 + lVar11);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 14694db6c FUN_14694db6c body=14 status=ok
// SIG undefined FUN_14694db6c(void)

void FUN_14694db6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14694db7a FUN_14694db7a body=29 status=ok
// SIG undefined FUN_14694db7a(void)

undefined8 FUN_14694db7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694db98 FUN_14694db98 body=337 status=ok
// SIG undefined FUN_14694db98(void)

undefined4 * FUN_14694db98(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14694dcea(param_1,local_40);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_38 = *puVar1;
  lVar11 = puVar1[1];
  local_38[1] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = *(undefined4 *)(puVar1 + 4);
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar4 = *(undefined4 *)(puVar1 + 3);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(undefined4 *)(local_38 + 2) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar3;
  *(undefined4 *)(local_38 + 3) = uVar4;
  *(undefined4 *)((longlong)local_38 + 0x1c) = uVar5;
  local_38[5] = *puVar2;
  lVar11 = puVar2[1];
  local_38[6] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 7) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = *(uint *)(local_38 + 4);
  cVar6 = FUN_14694ddd0(param_1,uVar8,local_38,&local_44);
  uVar3 = local_44;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x3c) = uVar8;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 7) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_14694dec6(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14694dcea FUN_14694dcea body=229 status=ok
// SIG undefined FUN_14694dcea(void)

int * FUN_14694dcea(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14694ddd0 FUN_14694ddd0 body=131 status=ok
// SIG undefined FUN_14694ddd0(void)

undefined8 FUN_14694ddd0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar15 = FUN_14694da22(), iVar15 != -1)) {
    lVar2 = *param_1;
    lVar16 = (longlong)iVar15 * 0x40;
    FUN_14694a59a(lVar2 + lVar16);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[8];
    uVar12 = param_3[9];
    uVar13 = param_3[10];
    uVar14 = param_3[0xb];
    *(undefined8 *)(lVar2 + 0x30 + lVar16) = *(undefined8 *)(param_3 + 0xc);
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar16);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar16);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar16);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14694de54(param_1,*param_4);
    *param_4 = iVar15;
    return 1;
  }
  return 0;
}



// FUNCTION 14694de54 FUN_14694de54 body=114 status=ok
// SIG undefined FUN_14694de54(void)

void FUN_14694de54(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14694dec6 FUN_14694dec6 body=423 status=ok
// SIG undefined FUN_14694dec6(void)

void FUN_14694dec6(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x20 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 14694e06e FUN_14694e06e body=351 status=ok
// SIG undefined FUN_14694e06e(void)

undefined4 * FUN_14694e06e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14694e1ce(param_1,local_40);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_38 = *puVar1;
  lVar11 = puVar1[1];
  local_38[1] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = *(undefined4 *)(puVar1 + 4);
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar4 = *(undefined4 *)(puVar1 + 3);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(undefined4 *)(local_38 + 2) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar3;
  *(undefined4 *)(local_38 + 3) = uVar4;
  *(undefined4 *)((longlong)local_38 + 0x1c) = uVar5;
  local_38[5] = puVar1[5];
  *(undefined4 *)(local_38 + 6) = *(undefined4 *)(puVar1 + 6);
  local_38[7] = *puVar2;
  lVar11 = puVar2[1];
  local_38[8] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 9) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = *(uint *)(local_38 + 6);
  cVar6 = FUN_14694e2bc(param_1,uVar8,local_38,&local_44);
  uVar3 = local_44;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x4c) = uVar8;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 9) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_14694e510(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14694e1ce FUN_14694e1ce body=238 status=ok
// SIG undefined FUN_14694e1ce(void)

int * FUN_14694e1ce(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 14694e2bc FUN_14694e2bc body=109 status=ok
// SIG undefined FUN_14694e2bc(void)

undefined8 FUN_14694e2bc(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_14694e32a(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x50 + *param_1);
    FUN_14694a546(_Dst);
    memmove(_Dst,param_3,0x48);
    FUN_14694e496(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 14694e32a FUN_14694e32a body=363 status=ok
// SIG undefined FUN_14694e32a(void)

int FUN_14694e32a(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar8 = *param_1;
      do {
        lVar11 = (longlong)iVar3 * 0x50;
        plVar7 = *(longlong **)(lVar8 + 8 + lVar11);
        if (plVar7 == (longlong *)0x0) {
LAB_14694e3b1:
          plVar7 = (longlong *)0x0;
        }
        else {
          iVar6 = (int)plVar7[1];
          do {
            if (iVar6 == 0) goto LAB_14694e3b1;
            LOCK();
            iVar5 = (int)plVar7[1];
            bVar12 = iVar6 == iVar5;
            if (bVar12) {
              *(int *)(plVar7 + 1) = iVar6 + 1;
              iVar5 = iVar6;
            }
            iVar6 = iVar5;
            UNLOCK();
          } while (!bVar12);
        }
        plVar10 = (longlong *)(lVar8 + lVar11);
        lVar8 = *plVar10;
        plVar4 = (longlong *)param_3[1];
        if (plVar4 == (longlong *)0x0) {
LAB_14694e400:
          lVar9 = 0;
        }
        else {
          iVar6 = (int)plVar4[1];
          do {
            if (iVar6 == 0) goto LAB_14694e400;
            LOCK();
            iVar5 = (int)plVar4[1];
            bVar12 = iVar6 == iVar5;
            if (bVar12) {
              *(int *)(plVar4 + 1) = iVar6 + 1;
              iVar5 = iVar6;
            }
            iVar6 = iVar5;
            UNLOCK();
          } while (!bVar12);
          lVar9 = *param_3;
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
        if (plVar7 == (longlong *)0x0) {
          lVar8 = 0;
        }
        else {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if ((((lVar8 == lVar9) && ((int)plVar10[2] == (int)param_3[2])) &&
            (*(int *)((longlong)plVar10 + 0x14) == *(int *)((longlong)param_3 + 0x14))) &&
           (((int)plVar10[3] == (int)param_3[3] &&
            (*(int *)((longlong)plVar10 + 0x1c) == *(int *)((longlong)param_3 + 0x1c))))) {
          if ((*(float *)(plVar10 + 5) == *(float *)(param_3 + 5)) &&
             (!NAN(*(float *)(plVar10 + 5)) && !NAN(*(float *)(param_3 + 5)))) {
            if ((*(float *)((longlong)plVar10 + 0x2c) == *(float *)((longlong)param_3 + 0x2c)) &&
               (!NAN(*(float *)((longlong)plVar10 + 0x2c)) &&
                !NAN(*(float *)((longlong)param_3 + 0x2c)))) {
              return iVar3;
            }
          }
        }
        lVar8 = *param_1;
        iVar3 = *(int *)(lVar8 + 0x48 + lVar11);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 14694e496 FUN_14694e496 body=122 status=ok
// SIG undefined FUN_14694e496(void)

void FUN_14694e496(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 14694e510 FUN_14694e510 body=424 status=ok
// SIG undefined FUN_14694e510(void)

void FUN_14694e510(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x50;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x30 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x4c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar7) =
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



// FUNCTION 14694e6ba FUN_14694e6ba body=372 status=ok
// SIG undefined FUN_14694e6ba(void)

void FUN_14694e6ba(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)param_1[9] - 1U & (longlong)(int)param_2[6];
    iVar5 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar5 != -1) {
      plVar7 = (longlong *)((longlong)plVar7 + uVar8 * 4);
      do {
        lVar12 = *param_1;
        plVar9 = *(longlong **)(lVar12 + 8 + (longlong)iVar5 * 0x50);
        if (plVar9 == (longlong *)0x0) {
LAB_14694e73c:
          plVar9 = (longlong *)0x0;
        }
        else {
          iVar6 = (int)plVar9[1];
          do {
            if (iVar6 == 0) goto LAB_14694e73c;
            LOCK();
            iVar4 = (int)plVar9[1];
            bVar13 = iVar6 == iVar4;
            if (bVar13) {
              *(int *)(plVar9 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
          } while (!bVar13);
        }
        plVar11 = (longlong *)(lVar12 + (longlong)iVar5 * 0x50);
        lVar12 = *plVar11;
        plVar3 = (longlong *)param_2[1];
        if (plVar3 == (longlong *)0x0) {
LAB_14694e785:
          lVar10 = 0;
        }
        else {
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) goto LAB_14694e785;
            LOCK();
            iVar6 = (int)plVar3[1];
            bVar13 = iVar5 == iVar6;
            if (bVar13) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
              iVar6 = iVar5;
            }
            iVar5 = iVar6;
            UNLOCK();
          } while (!bVar13);
          lVar10 = *param_2;
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
        if (plVar9 == (longlong *)0x0) {
          lVar12 = 0;
        }
        else {
          LOCK();
          plVar3 = plVar9 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if ((((lVar12 == lVar10) && ((int)plVar11[2] == (int)param_2[2])) &&
            (*(int *)((longlong)plVar11 + 0x14) == *(int *)((longlong)param_2 + 0x14))) &&
           (((int)plVar11[3] == (int)param_2[3] &&
            (*(int *)((longlong)plVar11 + 0x1c) == *(int *)((longlong)param_2 + 0x1c))))) {
          if ((*(float *)(plVar11 + 5) == *(float *)(param_2 + 5)) &&
             (!NAN(*(float *)(plVar11 + 5)) && !NAN(*(float *)(param_2 + 5)))) {
            if ((*(float *)((longlong)plVar11 + 0x2c) == *(float *)((longlong)param_2 + 0x2c)) &&
               (!NAN(*(float *)((longlong)plVar11 + 0x2c)) &&
                !NAN(*(float *)((longlong)param_2 + 0x2c)))) {
              FUN_14694e82e(param_1,(int)*plVar7);
              return;
            }
          }
        }
        iVar5 = (int)plVar11[9];
        plVar7 = plVar11 + 9;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 14694e82e FUN_14694e82e body=121 status=ok
// SIG undefined FUN_14694e82e(void)

void FUN_14694e82e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x50;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x4c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x48 + lVar6 * 0x50);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x50 + 0x48);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x48);
  FUN_14694a546(lVar3 + *param_1);
  FUN_14694e496(param_1,param_2);
  return;
}



// FUNCTION 14694e8a8 FUN_14694e8a8 body=48 status=ok
// SIG undefined FUN_14694e8a8(void)

void FUN_14694e8a8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14694e8d8 FUN_14694e8d8 body=63 status=ok
// SIG undefined FUN_14694e8d8(void)

void FUN_14694e8d8(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1458b237a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14694dec6(param_1);
    return;
  }
  FUN_14694e918(param_1);
  FUN_1458b237a(param_1);
  return;
}



// FUNCTION 14694e918 FUN_14694e918 body=322 status=ok
// SIG undefined FUN_14694e918(void)

void FUN_14694e918(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 14694ea5c FUN_14694ea5c body=63 status=ok
// SIG undefined FUN_14694ea5c(void)

void FUN_14694ea5c(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1458b24c8(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14694e510(param_1);
    return;
  }
  FUN_14694ea9c(param_1);
  FUN_1458b24c8(param_1);
  return;
}



// FUNCTION 14694ea9c FUN_14694ea9c body=326 status=ok
// SIG undefined FUN_14694ea9c(void)

void FUN_14694ea9c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x4c + (longlong)iVar4 * 0x50) * 4) =
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



// FUNCTION 14694ebe4 FUN_14694ebe4 body=130 status=ok
// SIG undefined FUN_14694ebe4(void)

void FUN_14694ebe4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x94 + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x90 + lVar6 * 0x98);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x98 + 0x90);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x90);
  FUN_1458b1d54(lVar3 + *param_1);
  FUN_14694d8f0(param_1,param_2);
  return;
}



// FUNCTION 14694ec66 FUN_14694ec66 body=489 status=ok
// SIG undefined FUN_14694ec66(void)

void FUN_14694ec66(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar7 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar7;
joined_r0x00014694ecb0:
    do {
      iVar6 = iVar7 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar8 = iVar7 * 2 + 2;
        if ((iVar8 < (int)param_2) &&
           (cVar5 = (*(code *)*param_3)(param_1 + (longlong)iVar8 * 2,param_1 + (longlong)iVar6 * 2)
           , cVar5 == '\0')) {
          iVar6 = iVar8;
        }
        puVar10 = param_1 + (longlong)iVar7 * 2;
        puVar11 = param_1 + (longlong)iVar6 * 2;
        cVar5 = (*(code *)*param_3)(puVar10,puVar11);
        if (cVar5 != '\0') {
          uVar2 = *puVar10;
          uVar3 = puVar10[1];
          uVar4 = puVar11[1];
          *puVar10 = *puVar11;
          puVar10[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar11 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
          iVar7 = iVar6;
          local_58 = uVar2;
          uStack_50 = uVar3;
          goto joined_r0x00014694ecb0;
        }
      }
      bVar13 = iVar9 != 0;
      iVar7 = iVar9 + -1;
      iVar9 = iVar7;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar12 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar12 * 2)[1];
      *param_1 = param_1[uVar12 * 2];
      param_1[1] = uVar4;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar10 = param_1 + uVar12 * 2;
      *(undefined4 *)puVar10 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
      if (param_2 != 2) {
        do {
          iVar7 = 0;
          iVar6 = 1;
          iVar9 = 0;
          do {
            iVar7 = iVar7 + 2;
            iVar8 = iVar6;
            if (((longlong)iVar7 < (longlong)uVar12) &&
               (cVar5 = (*(code *)*param_3)(param_1 + (longlong)iVar7 * 2,
                                            param_1 + (longlong)iVar6 * 2), cVar5 == '\0')) {
              iVar8 = iVar7;
            }
            puVar10 = param_1 + (longlong)iVar9 * 2;
            puVar11 = param_1 + (longlong)iVar8 * 2;
            cVar5 = (*(code *)*param_3)(puVar10,puVar11);
            if (cVar5 == '\0') break;
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar11[1];
            *puVar10 = *puVar11;
            puVar10[1] = uVar4;
            local_58._0_4_ = (undefined4)uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar3;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)puVar11 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
            iVar7 = iVar8 * 2;
            iVar6 = iVar8 * 2 + 1;
            local_58 = uVar2;
            uStack_50 = uVar3;
            iVar9 = iVar8;
          } while ((longlong)iVar6 < (longlong)uVar12);
          uVar1 = uVar12 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar10 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          bVar13 = 2 < uVar12;
          uVar12 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
        } while (bVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14694ee50 FUN_14694ee50 body=48 status=ok
// SIG undefined FUN_14694ee50(void)

void FUN_14694ee50(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14694ee80 FUN_14694ee80 body=611 status=ok
// SIG undefined FUN_14694ee80(void)

void FUN_14694ee80(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    iVar11 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar13 = iVar11;
joined_r0x00014694eeca:
    do {
      iVar10 = iVar11 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar12 = iVar11 * 2 + 2;
        if ((iVar12 < (int)param_2) &&
           (cVar9 = (*(code *)*param_3)(param_1 + (longlong)iVar12 * 4,
                                        param_1 + (longlong)iVar10 * 4), cVar9 == '\0')) {
          iVar10 = iVar12;
        }
        puVar14 = param_1 + (longlong)iVar11 * 4;
        puVar15 = param_1 + (longlong)iVar10 * 4;
        cVar9 = (*(code *)*param_3)(puVar14,puVar15);
        if (cVar9 != '\0') {
          uVar2 = *puVar14;
          uVar3 = puVar14[1];
          local_58 = puVar14[2];
          uStack_50 = puVar14[3];
          uVar4 = *puVar15;
          uVar5 = puVar15[1];
          uVar6 = puVar15[3];
          puVar14[2] = puVar15[2];
          puVar14[3] = uVar6;
          *puVar14 = uVar4;
          puVar14[1] = uVar5;
          local_68._0_4_ = (undefined4)uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar3;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar15[2] = local_58;
          puVar15[3] = uStack_50;
          *(undefined4 *)puVar15 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar15 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_60._4_4_;
          iVar11 = iVar10;
          local_68 = uVar2;
          uStack_60 = uVar3;
          goto joined_r0x00014694eeca;
        }
      }
      bVar17 = iVar13 != 0;
      iVar11 = iVar13 + -1;
      iVar13 = iVar11;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar16 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[uVar16 * 4];
      uVar7 = (param_1 + uVar16 * 4)[1];
      uVar8 = (param_1 + uVar16 * 4 + 2)[1];
      param_1[2] = param_1[uVar16 * 4 + 2];
      param_1[3] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_68._0_4_ = (undefined4)uVar2;
      local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar3;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar5;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar14 = param_1 + uVar16 * 4 + 2;
      *(undefined4 *)puVar14 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
      puVar14 = param_1 + uVar16 * 4;
      *(undefined4 *)puVar14 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
      local_68 = uVar2;
      uStack_60 = uVar3;
      local_58 = uVar4;
      uStack_50 = uVar5;
      if (param_2 != 2) {
        do {
          iVar11 = 0;
          iVar10 = 1;
          iVar13 = 0;
          do {
            iVar11 = iVar11 + 2;
            iVar12 = iVar10;
            if (((longlong)iVar11 < (longlong)uVar16) &&
               (cVar9 = (*(code *)*param_3)(param_1 + (longlong)iVar11 * 4,
                                            param_1 + (longlong)iVar10 * 4), cVar9 == '\0')) {
              iVar12 = iVar11;
            }
            puVar14 = param_1 + (longlong)iVar13 * 4;
            puVar15 = param_1 + (longlong)iVar12 * 4;
            cVar9 = (*(code *)*param_3)(puVar14,puVar15);
            if (cVar9 == '\0') break;
            uVar2 = *puVar14;
            uVar3 = puVar14[1];
            uVar4 = puVar14[2];
            uVar5 = puVar14[3];
            uVar6 = *puVar15;
            uVar7 = puVar15[1];
            uVar8 = puVar15[3];
            puVar14[2] = puVar15[2];
            puVar14[3] = uVar8;
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            local_68._0_4_ = (undefined4)uVar2;
            local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar3;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_58._0_4_ = (undefined4)uVar4;
            local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar5;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            *(undefined4 *)(puVar15 + 2) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar15 + 0x14) = local_58._4_4_;
            *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_50._4_4_;
            *(undefined4 *)puVar15 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar15 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_60._4_4_;
            iVar11 = iVar12 * 2;
            iVar10 = iVar12 * 2 + 1;
            local_68 = uVar2;
            uStack_60 = uVar3;
            local_58 = uVar4;
            uStack_50 = uVar5;
            iVar13 = iVar12;
          } while ((longlong)iVar10 < (longlong)uVar16);
          uVar1 = uVar16 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[uVar1 * 4];
          uVar7 = (param_1 + uVar1 * 4)[1];
          uVar8 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar8;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_68._0_4_ = (undefined4)uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar3;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_58._0_4_ = (undefined4)uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar5;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar14 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar14 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
          puVar14 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar14 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
          bVar17 = 2 < uVar16;
          uVar16 = uVar1;
          local_68 = uVar2;
          uStack_60 = uVar3;
          local_58 = uVar4;
          uStack_50 = uVar5;
        } while (bVar17);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14694f0e4 FUN_14694f0e4 body=31 status=ok
// SIG undefined FUN_14694f0e4(void)

undefined8 FUN_14694f0e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694f120 FUN_14694f120 body=93 status=ok
// SIG undefined FUN_14694f120(void)

void FUN_14694f120(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eda280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14694f17e FUN_14694f17e body=93 status=ok
// SIG undefined FUN_14694f17e(void)

void FUN_14694f17e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eda280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14694f1dc FUN_14694f1dc body=126 status=ok
// SIG undefined FUN_14694f1dc(void)

void FUN_14694f1dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149eda280;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014694f24b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14694f266 FUN_14694f266 body=21 status=ok
// SIG undefined FUN_14694f266(void)

undefined8 FUN_14694f266(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14694f27c FUN_14694f27c body=38 status=ok
// SIG undefined FUN_14694f27c(void)

undefined8 FUN_14694f27c(undefined8 param_1,int param_2)

{
  FUN_14694f2b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694f2b0 FUN_14694f2b0 body=59 status=ok
// SIG undefined FUN_14694f2b0(void)

void FUN_14694f2b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eda310;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140187f4a(param_1);
  return;
}



// FUNCTION 14694f2ec FUN_14694f2ec body=132 status=ok
// SIG undefined FUN_14694f2ec(void)

void FUN_14694f2ec(longlong param_1,int param_2)

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



// FUNCTION 14694f371 FUN_14694f371 body=154 status=ok
// SIG undefined FUN_14694f371(void)

void FUN_14694f371(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x130);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149eda2f0;
  uVar1 = *param_1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(puVar2 + 5) = 1;
  *(undefined2 *)(puVar2 + 0x19) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
  puVar2[0x1f] = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x10c) = 0;
  puVar2[0x23] = 0;
  *(undefined4 *)(puVar2 + 0x24) = 0;
  *(undefined1 *)(puVar2 + 0x25) = uVar1;
  return;
}



// FUNCTION 14694f40c FUN_14694f40c body=114 status=ok
// SIG undefined FUN_14694f40c(void)

void FUN_14694f40c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14694f47e FUN_14694f47e body=90 status=ok
// SIG undefined FUN_14694f47e(void)

void FUN_14694f47e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14694f4d8();
  return;
}



// FUNCTION 14694f4d8 FUN_14694f4d8 body=78 status=ok
// SIG undefined FUN_14694f4d8(void)

void FUN_14694f4d8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14694f526(param_1,param_2);
  return;
}



// FUNCTION 14694f526 FUN_14694f526 body=114 status=ok
// SIG undefined FUN_14694f526(void)

void FUN_14694f526(longlong *param_1,int param_2)

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



// FUNCTION 14694f598 FUN_14694f598 body=63 status=ok
// SIG undefined FUN_14694f598(void)

void FUN_14694f598(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1458b261a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1406db39e(param_1);
    return;
  }
  FUN_14694f5d8(param_1);
  FUN_1458b261a(param_1);
  return;
}



// FUNCTION 14694f5d8 FUN_14694f5d8 body=322 status=ok
// SIG undefined FUN_14694f5d8(void)

void FUN_14694f5d8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14694f71c FUN_14694f71c body=63 status=ok
// SIG undefined FUN_14694f71c(void)

void FUN_14694f71c(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1458b21f2(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_145af8178(param_1);
    return;
  }
  FUN_14694f75c(param_1);
  FUN_1458b21f2(param_1);
  return;
}



// FUNCTION 14694f75c FUN_14694f75c body=322 status=ok
// SIG undefined FUN_14694f75c(void)

void FUN_14694f75c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 14694f8a0 FUN_14694f8a0 body=93 status=ok
// SIG undefined FUN_14694f8a0(void)

ulonglong FUN_14694f8a0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14694f8fe FUN_14694f8fe body=86 status=ok
// SIG undefined FUN_14694f8fe(void)

void FUN_14694f8fe(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14694f954 FUN_14694f954 body=132 status=ok
// SIG undefined FUN_14694f954(void)

void FUN_14694f954(longlong param_1,int param_2)

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



// FUNCTION 14694f9da FUN_14694f9da body=282 status=ok
// SIG undefined FUN_14694f9da(void)

undefined4 * FUN_14694f9da(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_14694faf6(param_1,local_48);
  FUN_14694fc8a(param_3,local_40);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_14694fbe4(param_1,uVar4,local_40,&local_4c);
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
      local_40[0x17] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x16] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14694fd8e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14694faf6 FUN_14694faf6 body=238 status=ok
// SIG undefined FUN_14694faf6(void)

int * FUN_14694faf6(longlong *param_1,int *param_2)

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



// FUNCTION 14694fbe4 FUN_14694fbe4 body=165 status=ok
// SIG undefined FUN_14694fbe4(void)

undefined8 FUN_14694fbe4(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x58);
          FUN_14694fd14(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14694fc8a FUN_14694fc8a body=138 status=ok
// SIG undefined FUN_14694fc8a(void)

undefined4 * FUN_14694fc8a(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  puVar2 = (undefined4 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  uVar6 = puVar2[4];
  uVar7 = puVar2[5];
  uVar8 = puVar2[6];
  uVar9 = puVar2[7];
  uVar10 = puVar2[8];
  uVar11 = puVar2[9];
  uVar12 = puVar2[10];
  uVar13 = puVar2[0xb];
  uVar14 = puVar2[0xc];
  uVar15 = puVar2[0xd];
  uVar16 = puVar2[0xe];
  uVar17 = puVar2[0xf];
  param_2[2] = *puVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[7] = uVar7;
  param_2[8] = uVar8;
  param_2[9] = uVar9;
  param_2[10] = uVar10;
  param_2[0xb] = uVar11;
  param_2[0xc] = uVar12;
  param_2[0xd] = uVar13;
  param_2[0xe] = uVar14;
  param_2[0xf] = uVar15;
  param_2[0x10] = uVar16;
  param_2[0x11] = uVar17;
  *(undefined8 *)(param_2 + 0x12) = 0;
  iVar1 = puVar2[0x12];
  _Src = *(void **)(puVar2 + 0x10);
  param_2[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[0x15] = 0;
  }
  else {
    FUN_14694a82e(param_2 + 0x12,iVar1,0);
    memcpy(*(void **)(param_2 + 0x12),_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 14694fd14 FUN_14694fd14 body=122 status=ok
// SIG undefined FUN_14694fd14(void)

void FUN_14694fd14(longlong *param_1,int param_2)

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



// FUNCTION 14694fd8e FUN_14694fd8e body=423 status=ok
// SIG undefined FUN_14694fd8e(void)

void FUN_14694fd8e(longlong *param_1)

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



// FUNCTION 14694ff36 FUN_14694ff36 body=114 status=ok
// SIG undefined FUN_14694ff36(void)

void FUN_14694ff36(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 14694ffa8 FUN_14694ffa8 body=114 status=ok
// SIG undefined FUN_14694ffa8(void)

void FUN_14694ffa8(longlong *param_1,int param_2)

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



// FUNCTION 14695001a FUN_14695001a body=141 status=ok
// SIG undefined FUN_14695001a(void)

longlong FUN_14695001a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1469500a8();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x30;
    if (lVar3 + lVar2 != 0) goto LAB_146950057;
  }
  local_30 = param_3;
  FUN_146950116(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x30;
LAB_146950057:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469500a8 FUN_1469500a8 body=109 status=ok
// SIG undefined FUN_1469500a8(void)

int FUN_1469500a8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x30;
        if (((*(longlong *)(lVar2 + lVar4) == *param_3) &&
            (*(int *)(lVar2 + lVar4 + 8) == (int)param_3[1])) &&
           (*(int *)(lVar2 + lVar4 + 0xc) == *(int *)((longlong)param_3 + 0xc))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146950116 FUN_146950116 body=285 status=ok
// SIG undefined FUN_146950116(void)

undefined4 * FUN_146950116(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146950234(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  local_40[2] = puVar1[2];
  uVar2 = puVar1[1];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[3] = 0;
  local_40[4] = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  cVar3 = FUN_146950322(param_1,param_3,local_40,local_48);
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x2c) = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14695043e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146950234 FUN_146950234 body=238 status=ok
// SIG undefined FUN_146950234(void)

int * FUN_146950234(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 146950322 FUN_146950322 body=161 status=ok
// SIG undefined FUN_146950322(void)

undefined8 FUN_146950322(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar13 = FUN_1469500a8(), iVar13 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x30);
    plVar4 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar13 * 0x30);
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
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[4];
    uVar10 = param_3[5];
    uVar11 = param_3[6];
    uVar12 = param_3[7];
    *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_3 + 8);
    puVar3[4] = uVar9;
    puVar3[5] = uVar10;
    puVar3[6] = uVar11;
    puVar3[7] = uVar12;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_1469503c4(param_1,*param_4);
    *param_4 = iVar13;
    return 1;
  }
  return 0;
}



// FUNCTION 1469503c4 FUN_1469503c4 body=122 status=ok
// SIG undefined FUN_1469503c4(void)

void FUN_1469503c4(longlong *param_1,int param_2)

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



// FUNCTION 14695043e FUN_14695043e body=424 status=ok
// SIG undefined FUN_14695043e(void)

void FUN_14695043e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x10 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 1469505e8 FUN_1469505e8 body=46 status=ok
// SIG undefined FUN_1469505e8(void)

void FUN_1469505e8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_146950634(param_1 + 0x20);
  return;
}



// FUNCTION 146950616 FUN_146950616 body=29 status=ok
// SIG undefined FUN_146950616(void)

undefined8 FUN_146950616(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146950634 FUN_146950634 body=52 status=ok
// SIG undefined FUN_146950634(void)

void FUN_146950634(longlong *param_1)

{
  FUN_146950668();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146950668 FUN_146950668 body=317 status=ok
// SIG undefined FUN_146950668(void)

void FUN_146950668(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x48 + (longlong)iStack_4c * 0x60) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469507a6 FUN_1469507a6 body=122 status=ok
// SIG undefined FUN_1469507a6(void)

void FUN_1469507a6(longlong *param_1,int param_2)

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



// FUNCTION 146950820 FUN_146950820 body=122 status=ok
// SIG undefined FUN_146950820(void)

void FUN_146950820(longlong *param_1,int param_2)

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



// FUNCTION 14695089a FUN_14695089a body=63 status=ok
// SIG undefined FUN_14695089a(void)

void FUN_14695089a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1458b2c8e(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14695043e(param_1);
    return;
  }
  FUN_1469508da(param_1);
  FUN_1458b2c8e(param_1);
  return;
}



// FUNCTION 1469508da FUN_1469508da body=326 status=ok
// SIG undefined FUN_1469508da(void)

void FUN_1469508da(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 146950a22 FUN_146950a22 body=63 status=ok
// SIG undefined FUN_146950a22(void)

void FUN_146950a22(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1458b2a74(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1406db03a(param_1);
    return;
  }
  FUN_146950a62(param_1);
  FUN_1458b2a74(param_1);
  return;
}



// FUNCTION 146950a62 FUN_146950a62 body=326 status=ok
// SIG undefined FUN_146950a62(void)

void FUN_146950a62(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 146950baa FUN_146950baa body=63 status=ok
// SIG undefined FUN_146950baa(void)

void FUN_146950baa(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1458b285a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1406db1ec(param_1);
    return;
  }
  FUN_146950bea(param_1);
  FUN_1458b285a(param_1);
  return;
}



// FUNCTION 146950bea FUN_146950bea body=326 status=ok
// SIG undefined FUN_146950bea(void)

void FUN_146950bea(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 146950d32 FUN_146950d32 body=322 status=ok
// SIG undefined FUN_146950d32(void)

void FUN_146950d32(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 146950e76 FUN_146950e76 body=122 status=ok
// SIG undefined FUN_146950e76(void)

void FUN_146950e76(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 146950ef0 FUN_146950ef0 body=163 status=ok
// SIG undefined FUN_146950ef0(void)

undefined8 *
FUN_146950ef0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  *param_3 = 0;
  local_20 = (undefined4)param_3[1];
  local_1c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_38 = param_5;
  FUN_146950fe0(param_1 + 2);
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4(param_1);
  *param_1 = &PTR_FUN_149eda450;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146950f94 FUN_146950f94 body=45 status=ok
// SIG undefined FUN_146950f94(void)

void FUN_146950f94(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x10);
  FUN_1457f5636(param_1 + 0x20);
  return;
}



// FUNCTION 146950fc2 FUN_146950fc2 body=29 status=ok
// SIG undefined FUN_146950fc2(void)

undefined8 FUN_146950fc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146950fe0 FUN_146950fe0 body=149 status=ok
// SIG undefined FUN_146950fe0(void)

longlong FUN_146950fe0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                      undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  *param_3 = 0;
  local_20 = (undefined4)param_3[1];
  local_1c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_38 = param_5;
  FUN_1469510b0(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146951076 FUN_146951076 body=57 status=ok
// SIG undefined FUN_146951076(void)

undefined8 * FUN_146951076(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  FUN_1457f5636(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469510b0 FUN_1469510b0 body=172 status=ok
// SIG undefined FUN_1469510b0(void)

undefined8 *
FUN_1469510b0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1458a3260(0,0);
  uVar1 = *param_1;
  local_48 = *param_3;
  *param_3 = 0;
  local_40 = (undefined4)param_3[1];
  local_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_58 = param_5;
  FUN_1458a3152(uVar1,param_2,&local_48,param_4);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695115e FUN_14695115e body=202 status=ok
// SIG undefined FUN_14695115e(void)

undefined8 *
FUN_14695115e(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  void *_Src;
  undefined8 unaff_RBX;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_149eda430;
  uVar1 = *param_4;
  uVar2 = *param_3;
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_40;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar3 * 2);
  }
  local_50 = 0;
  local_58 = uVar1;
  FUN_146950ef0(param_1 + 2,&local_50,&local_48,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695122a FUN_14695122a body=14 status=ok
// SIG undefined FUN_14695122a(void)

void FUN_14695122a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 146951238 FUN_146951238 body=29 status=ok
// SIG undefined FUN_146951238(void)

undefined8 FUN_146951238(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146951256 FUN_146951256 body=271 status=ok
// SIG undefined FUN_146951256(void)

char FUN_146951256(double *param_1,double param_2,double param_3,double param_4,float param_5,
                  float param_6,float param_7)

{
  char cVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  if ((((param_5 <= 0.5) || (param_6 <= 0.5)) || (0.5 < param_7)) &&
     (((0.5 <= param_5 || (0.5 <= param_6)) || (param_7 < 0.5)))) {
    if (*(char *)(param_1 + 1) != '\0') {
      return '\0';
    }
    fVar4 = param_6;
    if (param_6 <= param_5) {
      fVar4 = param_5;
    }
    fVar5 = param_7;
    if (fVar4 <= param_7) {
      fVar5 = fVar4;
    }
    fVar4 = param_6;
    if (param_5 <= param_6) {
      fVar4 = param_5;
    }
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    if ((fVar5 == param_7) && (!NAN(fVar5) && !NAN(param_7))) {
      return '\0';
    }
  }
  dVar3 = (param_4 - param_2) * *param_1;
  dVar2 = (double)param_7;
  cVar1 = '\x03';
  if (((double)param_5 - dVar3 <= dVar2) && (dVar2 <= dVar3 + (double)param_5)) {
    dVar3 = (param_3 - param_4) * *param_1;
    cVar1 = '\x03';
    if ((double)param_6 - dVar3 <= dVar2) {
      cVar1 = (dVar3 + (double)param_6 < dVar2) * '\x02' + '\x01';
    }
  }
  return cVar1;
}



// FUNCTION 146951366 FUN_146951366 body=132 status=ok
// SIG undefined FUN_146951366(void)

undefined8 * FUN_146951366(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *param_1 = param_2;
  param_1[1] = 0xffefffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0xffefffffffffffff;
  param_1[4] = 0x7fefffffffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  plVar1 = (longlong *)*param_2;
  uVar3 = 0;
  if (plVar1 != (longlong *)param_2[1]) {
    do {
      uVar2 = (int)uVar3 + (int)((ulonglong)(plVar1[1] - *plVar1) >> 3);
      uVar3 = (ulonglong)uVar2;
      plVar1 = plVar1 + 3;
    } while (plVar1 != (longlong *)param_2[1]);
    uVar3 = (ulonglong)(int)uVar2;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1469513ea(param_1 + 9,uVar3);
  return param_1;
}



// FUNCTION 1469513ea FUN_1469513ea body=84 status=ok
// SIG undefined FUN_1469513ea(void)

void FUN_1469513ea(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  code *pcVar2;
  void *_Dst;
  
  if (param_2 != 0) {
    if (0x492492492492492 < param_2) {
      FUN_14695143e();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    _Dst = (void *)FUN_146951450(param_2);
    *param_1 = _Dst;
    pvVar1 = (void *)((longlong)_Dst + param_2 * 0x38);
    param_1[2] = pvVar1;
    memset(_Dst,0,param_2 * 0x38);
    param_1[1] = pvVar1;
  }
  return;
}



// FUNCTION 14695143e FUN_14695143e body=16 status=ok
// SIG undefined FUN_14695143e(void)

void FUN_14695143e(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 146951450 FUN_146951450 body=35 status=ok
// SIG undefined FUN_146951450(void)

ulonglong FUN_146951450(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 * 0x38;
  if (param_1 < 0x4a) {
    if (param_1 != 0) {
      uVar2 = FUN_14001cc68(uVar2,0x10);
      return uVar2;
    }
    return 0;
  }
  if (0xffffffffffffffd8 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  lVar1 = FUN_14001cc68(uVar2 + 0x27,0x10);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



// FUNCTION 146951474 FUN_146951474 body=290 status=ok
// SIG undefined FUN_146951474(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146951474(longlong *param_1,double *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  double dVar11;
  
  dVar11 = SQRT((*param_2 - (double)param_1[7]) * (*param_2 - (double)param_1[7]) +
                (param_2[1] - (double)param_1[8]) * (param_2[1] - (double)param_1[8])) * 1.001 *
           (double)(&DAT_149931160)[0.0 < (double)param_1[1]] + (double)param_1[1];
  param_1[1] = (longlong)dVar11;
  param_1[3] = (ulonglong)dVar11 | DAT_149931e80;
  param_1[4] = (longlong)ABS(dVar11);
  param_1[5] = 0;
  param_1[6] = 0;
  dVar11 = param_2[1];
  param_1[7] = (longlong)*param_2;
  param_1[8] = (longlong)dVar11;
  plVar3 = (longlong *)*param_1;
  plVar10 = (longlong *)*plVar3;
  if (plVar10 != (longlong *)plVar3[1]) {
    lVar8 = param_1[9];
    do {
      puVar9 = (undefined8 *)*plVar10;
      puVar1 = (undefined8 *)plVar10[1];
      if (puVar9 != puVar1) {
        puVar4 = puVar1 + -2;
        if ((ulonglong)((longlong)puVar1 - (longlong)puVar9) < 9) {
          puVar4 = puVar9;
        }
        uVar2 = puVar1[-1];
        uVar6 = *puVar4;
        lVar7 = lVar8;
        do {
          uVar5 = uVar2;
          uVar2 = *puVar9;
          lVar8 = lVar7 + 0x38;
          FUN_1469404ae(param_1 + 1,lVar7,uVar6,uVar5,uVar2);
          puVar9 = puVar9 + 1;
          uVar6 = uVar5;
          lVar7 = lVar8;
        } while (puVar9 != (undefined8 *)plVar10[1]);
        plVar3 = (longlong *)*param_1;
      }
      plVar10 = plVar10 + 3;
    } while (plVar10 != (longlong *)plVar3[1]);
  }
  FUN_1469403fc(param_1 + 1,param_1 + 7);
  return;
}



// FUNCTION 146951596 FUN_146951596 body=627 status=ok
// SIG undefined FUN_146951596(void)

undefined8 FUN_146951596(longlong param_1,double param_2,ulonglong param_3)

{
  double *pdVar1;
  float *pfVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  float local_88;
  float local_84;
  float local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)(local_70 >> 8),1);
    if ((param_3 & 2) == 0) {
      dVar5 = *(double *)(param_1 + 0x20) * param_2;
      param_2 = param_2 * *(double *)(param_1 + 0x18);
      pdVar1 = *(double **)(param_1 + 0x10);
      local_90 = pdVar1[3] + dVar5;
      local_98 = pdVar1[2] + param_2;
      FUN_1428680bc(&local_88,pdVar1 + 0x12);
      dVar4 = (1.0 - ABS(dVar5)) * (1.0 - ABS(param_2));
      pfVar2 = (float *)pdVar1[4];
      fVar10 = pfVar2[2];
      fVar8 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar6 = fVar7;
      if (fVar7 <= fVar8) {
        fVar6 = fVar8;
      }
      fVar9 = fVar10;
      if (fVar6 <= fVar10) {
        fVar9 = fVar6;
      }
      fVar6 = fVar7;
      if (fVar8 <= fVar7) {
        fVar6 = fVar8;
      }
      if (fVar9 <= fVar6) {
        fVar9 = fVar6;
      }
      fVar6 = (float)((double)(fVar9 - fVar8) * dVar4 + (double)local_88);
      fVar7 = (float)((double)(fVar9 - fVar7) * dVar4 + (double)local_84);
      fVar10 = (float)((double)(fVar9 - fVar10) * dVar4 + (double)local_80);
      fVar8 = local_84;
      if (local_84 <= local_88) {
        fVar8 = local_88;
      }
      if (fVar8 <= local_80) {
        local_80 = fVar8;
      }
      if (local_88 <= local_84) {
        local_84 = local_88;
      }
      fVar8 = local_80;
      if (local_80 <= local_84) {
        fVar8 = local_84;
      }
      fVar9 = fVar7;
      if (fVar7 <= fVar6) {
        fVar9 = fVar6;
      }
      if (fVar9 <= fVar10) {
        fVar10 = fVar9;
      }
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      if (fVar10 <= fVar7) {
        fVar10 = fVar7;
      }
      local_a0 = dVar5 * pdVar1[0x17] + pdVar1[1];
      local_a8 = param_2 * pdVar1[0x16] + *pdVar1;
      dVar5 = (double)FUN_146951474(pdVar1 + 6);
      fVar7 = (float)((dVar5 + pdVar1[0x15]) * pdVar1[0x14]);
      uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                       (double)ABS(fVar10 - fVar7) *
                       *(double *)(*(longlong *)(param_1 + 0x10) + 0xc0) <
                       (double)ABS(fVar8 - fVar7));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695180a FUN_14695180a body=98 status=ok
// SIG undefined FUN_14695180a(void)

undefined8 * FUN_14695180a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *param_1 = param_2;
  FUN_14693dd08(param_1 + 1);
  plVar1 = (longlong *)*param_2;
  uVar3 = 0;
  if (plVar1 != (longlong *)param_2[1]) {
    do {
      uVar2 = (int)uVar3 + (int)((ulonglong)(plVar1[1] - *plVar1) >> 3);
      uVar3 = (ulonglong)uVar2;
      plVar1 = plVar1 + 3;
    } while (plVar1 != (longlong *)param_2[1]);
    uVar3 = (ulonglong)(int)uVar2;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1469513ea(param_1 + 9,uVar3);
  return param_1;
}



// FUNCTION 14695186c FUN_14695186c body=191 status=ok
// SIG undefined FUN_14695186c(void)

void FUN_14695186c(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  
  FUN_14693ddea(param_1 + 1);
  plVar5 = (longlong *)*param_1;
  plVar12 = (longlong *)*plVar5;
  if (plVar12 != (longlong *)plVar5[1]) {
    lVar10 = param_1[9];
    do {
      puVar11 = (undefined8 *)*plVar12;
      puVar1 = (undefined8 *)plVar12[1];
      if (puVar11 != puVar1) {
        lVar2 = *plVar5;
        lVar3 = param_1[6];
        puVar6 = puVar1 + -2;
        if ((ulonglong)((longlong)puVar1 - (longlong)puVar11) < 9) {
          puVar6 = puVar11;
        }
        uVar4 = puVar1[-1];
        uVar8 = *puVar6;
        lVar9 = lVar10;
        do {
          uVar7 = uVar4;
          uVar4 = *puVar11;
          lVar10 = lVar9 + 0x38;
          FUN_1469404ae((longlong)((int)((ulonglong)((longlong)plVar12 - lVar2) >> 3) * -0x55555555)
                        * 0x40 + lVar3,lVar9,uVar8,uVar7,uVar4);
          puVar11 = puVar11 + 1;
          uVar8 = uVar7;
          lVar9 = lVar10;
        } while (puVar11 != (undefined8 *)plVar12[1]);
        plVar5 = (longlong *)*param_1;
      }
      plVar12 = plVar12 + 3;
    } while (plVar12 != (longlong *)plVar5[1]);
  }
  FUN_14693dea6(param_1 + 1);
  return;
}



// FUNCTION 14695192c FUN_14695192c body=627 status=ok
// SIG undefined FUN_14695192c(void)

undefined8 FUN_14695192c(longlong param_1,double param_2,ulonglong param_3)

{
  double *pdVar1;
  float *pfVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  float local_88;
  float local_84;
  float local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)(local_70 >> 8),1);
    if ((param_3 & 2) == 0) {
      dVar5 = *(double *)(param_1 + 0x20) * param_2;
      param_2 = param_2 * *(double *)(param_1 + 0x18);
      pdVar1 = *(double **)(param_1 + 0x10);
      local_90 = pdVar1[3] + dVar5;
      local_98 = pdVar1[2] + param_2;
      FUN_1428680bc(&local_88,pdVar1 + 0x12);
      dVar4 = (1.0 - ABS(dVar5)) * (1.0 - ABS(param_2));
      pfVar2 = (float *)pdVar1[4];
      fVar10 = pfVar2[2];
      fVar8 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar6 = fVar7;
      if (fVar7 <= fVar8) {
        fVar6 = fVar8;
      }
      fVar9 = fVar10;
      if (fVar6 <= fVar10) {
        fVar9 = fVar6;
      }
      fVar6 = fVar7;
      if (fVar8 <= fVar7) {
        fVar6 = fVar8;
      }
      if (fVar9 <= fVar6) {
        fVar9 = fVar6;
      }
      fVar6 = (float)((double)(fVar9 - fVar8) * dVar4 + (double)local_88);
      fVar7 = (float)((double)(fVar9 - fVar7) * dVar4 + (double)local_84);
      fVar10 = (float)((double)(fVar9 - fVar10) * dVar4 + (double)local_80);
      fVar8 = local_84;
      if (local_84 <= local_88) {
        fVar8 = local_88;
      }
      if (fVar8 <= local_80) {
        local_80 = fVar8;
      }
      if (local_88 <= local_84) {
        local_84 = local_88;
      }
      fVar8 = local_80;
      if (local_80 <= local_84) {
        fVar8 = local_84;
      }
      fVar9 = fVar7;
      if (fVar7 <= fVar6) {
        fVar9 = fVar6;
      }
      if (fVar9 <= fVar10) {
        fVar10 = fVar9;
      }
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      if (fVar10 <= fVar7) {
        fVar10 = fVar7;
      }
      local_a0 = dVar5 * pdVar1[0x17] + pdVar1[1];
      local_a8 = param_2 * pdVar1[0x16] + *pdVar1;
      dVar5 = (double)FUN_14695186c(pdVar1 + 6);
      fVar7 = (float)((dVar5 + pdVar1[0x15]) * pdVar1[0x14]);
      uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                       (double)ABS(fVar10 - fVar7) *
                       *(double *)(*(longlong *)(param_1 + 0x10) + 0xc0) <
                       (double)ABS(fVar8 - fVar7));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146951ba0 FUN_146951ba0 body=98 status=ok
// SIG undefined FUN_146951ba0(void)

undefined8 * FUN_146951ba0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *param_1 = param_2;
  FUN_14693d7c8(param_1 + 1);
  plVar1 = (longlong *)*param_2;
  uVar3 = 0;
  if (plVar1 != (longlong *)param_2[1]) {
    do {
      uVar2 = (int)uVar3 + (int)((ulonglong)(plVar1[1] - *plVar1) >> 3);
      uVar3 = (ulonglong)uVar2;
      plVar1 = plVar1 + 3;
    } while (plVar1 != (longlong *)param_2[1]);
    uVar3 = (ulonglong)(int)uVar2;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_146951d16(param_1 + 9,uVar3);
  return param_1;
}



// FUNCTION 146951c02 FUN_146951c02 body=275 status=ok
// SIG undefined FUN_146951c02(void)

void FUN_146951c02(longlong *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double *pdVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  dVar4 = param_2[1];
  param_1[1] = (longlong)*param_2;
  param_1[2] = (longlong)dVar4;
  pdVar5 = (double *)param_1[6];
  if (pdVar5 != (double *)param_1[7]) {
    do {
      pdVar5[2] = SQRT((*param_2 - *pdVar5) * (*param_2 - *pdVar5) +
                       (param_2[1] - pdVar5[1]) * (param_2[1] - pdVar5[1])) * 1.001 *
                  (double)(&DAT_149931160)[0.0 < pdVar5[2]] + pdVar5[2];
      dVar4 = param_2[1];
      *pdVar5 = *param_2;
      pdVar5[1] = dVar4;
      pdVar5 = pdVar5 + 4;
    } while (pdVar5 != (double *)param_1[7]);
  }
  plVar6 = (longlong *)*param_1;
  plVar9 = (longlong *)*plVar6;
  if (plVar9 != (longlong *)plVar6[1]) {
    lVar11 = param_1[9];
    do {
      puVar8 = (undefined8 *)*plVar9;
      if (puVar8 != (undefined8 *)plVar9[1]) {
        lVar1 = *plVar6;
        lVar2 = param_1[6];
        uVar7 = ((undefined8 *)plVar9[1])[-1];
        lVar10 = lVar11;
        do {
          uVar3 = *puVar8;
          lVar11 = lVar10 + 0x18;
          FUN_14694022c((longlong)((int)((ulonglong)((longlong)plVar9 - lVar1) >> 3) * -0x55555555)
                        * 0x20 + lVar2,lVar10,uVar7);
          puVar8 = puVar8 + 1;
          uVar7 = uVar3;
          lVar10 = lVar11;
        } while (puVar8 != (undefined8 *)plVar9[1]);
        plVar6 = (longlong *)*param_1;
      }
      plVar9 = plVar9 + 3;
    } while (plVar9 != (longlong *)plVar6[1]);
  }
  FUN_14693d92a(param_1 + 1);
  return;
}



// FUNCTION 146951d16 FUN_146951d16 body=88 status=ok
// SIG undefined FUN_146951d16(void)

void FUN_146951d16(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  code *pcVar2;
  void *_Dst;
  
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_146951d6e();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    _Dst = (void *)FUN_146951d80(param_2);
    *param_1 = _Dst;
    pvVar1 = (void *)((longlong)_Dst + param_2 * 0x18);
    param_1[2] = pvVar1;
    memset(_Dst,0,param_2 * 0x18);
    param_1[1] = pvVar1;
  }
  return;
}



// FUNCTION 146951d6e FUN_146951d6e body=16 status=ok
// SIG undefined FUN_146951d6e(void)

void FUN_146951d6e(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 146951d80 FUN_146951d80 body=45 status=ok
// SIG undefined FUN_146951d80(void)

ulonglong FUN_146951d80(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 * 0x18;
  if (param_1 < 0xab) {
    if (param_1 != 0) {
      uVar2 = FUN_14001cc68(uVar2,0x10);
      return uVar2;
    }
    return 0;
  }
  if (0xffffffffffffffd8 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  lVar1 = FUN_14001cc68(uVar2 + 0x27,0x10);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



// FUNCTION 146951dae FUN_146951dae body=82 status=ok
// SIG undefined FUN_146951dae(void)

void FUN_146951dae(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 146951e02 FUN_146951e02 body=82 status=ok
// SIG undefined FUN_146951e02(void)

void FUN_146951e02(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 146951e56 FUN_146951e56 body=98 status=ok
// SIG undefined FUN_146951e56(void)

undefined8 * FUN_146951e56(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *param_1 = param_2;
  FUN_14693e528(param_1 + 1);
  plVar1 = (longlong *)*param_2;
  uVar3 = 0;
  if (plVar1 != (longlong *)param_2[1]) {
    do {
      uVar2 = (int)uVar3 + (int)((ulonglong)(plVar1[1] - *plVar1) >> 3);
      uVar3 = (ulonglong)uVar2;
      plVar1 = plVar1 + 3;
    } while (plVar1 != (longlong *)param_2[1]);
    uVar3 = (ulonglong)(int)uVar2;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1469513ea(param_1 + 9,uVar3);
  return param_1;
}



// FUNCTION 146951eb8 FUN_146951eb8 body=255 status=ok
// SIG undefined FUN_146951eb8(void)

undefined8 FUN_146951eb8(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
  lVar14 = param_1[6];
  if (lVar14 != param_1[7]) {
    do {
      FUN_14693d5bc(lVar14,param_3);
      lVar14 = lVar14 + 0xa0;
    } while (lVar14 != param_1[7]);
  }
  plVar8 = (longlong *)*param_1;
  plVar12 = (longlong *)*plVar8;
  if (plVar12 != (longlong *)plVar8[1]) {
    lVar14 = param_1[9];
    do {
      puVar10 = (undefined8 *)*plVar12;
      puVar1 = (undefined8 *)plVar12[1];
      if (puVar10 != puVar1) {
        lVar2 = *plVar8;
        lVar3 = param_1[6];
        puVar9 = puVar1 + -2;
        if ((ulonglong)((longlong)puVar1 - (longlong)puVar10) < 9) {
          puVar9 = puVar10;
        }
        uVar11 = *puVar9;
        lVar13 = lVar14;
        uVar15 = puVar1[-1];
        do {
          uVar4 = *puVar10;
          lVar14 = lVar13 + 0x38;
          FUN_146940a6c((longlong)((int)((ulonglong)((longlong)plVar12 - lVar2) >> 3) * -0x55555555)
                        * 0xa0 + lVar3,lVar13,uVar11,uVar15,uVar4);
          puVar10 = puVar10 + 1;
          uVar11 = uVar15;
          lVar13 = lVar14;
          uVar15 = uVar4;
        } while (puVar10 != (undefined8 *)plVar12[1]);
        plVar8 = (longlong *)*param_1;
      }
      plVar12 = plVar12 + 3;
    } while (plVar12 != (longlong *)plVar8[1]);
  }
  FUN_14693e60a(param_1 + 1,param_2);
  return param_2;
}



// FUNCTION 146951fb8 FUN_146951fb8 body=82 status=ok
// SIG undefined FUN_146951fb8(void)

void FUN_146951fb8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14695200c FUN_14695200c body=192 status=ok
// SIG undefined FUN_14695200c(void)

undefined8 * FUN_14695200c(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffefffffffffffff;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[5] = 0xffefffffffffffff;
  param_1[6] = 0x7fefffffffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xffefffffffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0xffefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffefffffffffffff;
  param_1[0x12] = 0x7fefffffffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)param_2[1]) {
    do {
      uVar2 = (int)uVar3 + (int)((ulonglong)(plVar1[1] - *plVar1) >> 3);
      uVar3 = (ulonglong)uVar2;
      plVar1 = plVar1 + 3;
    } while (plVar1 != (longlong *)param_2[1]);
    uVar3 = (ulonglong)(int)uVar2;
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_1469513ea(param_1 + 0x15,uVar3);
  return param_1;
}



// FUNCTION 1469520cc FUN_1469520cc body=180 status=ok
// SIG undefined FUN_1469520cc(void)

undefined8 FUN_1469520cc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  
  plVar1 = param_1 + 1;
  FUN_14693d5bc(plVar1,param_3);
  plVar4 = (longlong *)*param_1;
  plVar11 = (longlong *)*plVar4;
  if (plVar11 != (longlong *)plVar4[1]) {
    lVar9 = param_1[0x15];
    do {
      puVar10 = (undefined8 *)*plVar11;
      puVar2 = (undefined8 *)plVar11[1];
      if (puVar10 != puVar2) {
        puVar5 = puVar2 + -2;
        if ((ulonglong)((longlong)puVar2 - (longlong)puVar10) < 9) {
          puVar5 = puVar10;
        }
        uVar3 = puVar2[-1];
        uVar7 = *puVar5;
        lVar8 = lVar9;
        do {
          uVar6 = uVar3;
          uVar3 = *puVar10;
          lVar9 = lVar8 + 0x38;
          FUN_146940a6c(plVar1,lVar8,uVar7,uVar6,uVar3);
          puVar10 = puVar10 + 1;
          uVar7 = uVar6;
          lVar8 = lVar9;
        } while (puVar10 != (undefined8 *)plVar11[1]);
        plVar4 = (longlong *)*param_1;
      }
      plVar11 = plVar11 + 3;
    } while (plVar11 != (longlong *)plVar4[1]);
  }
  FUN_14693d724(plVar1,param_2);
  return param_2;
}



// FUNCTION 146952180 FUN_146952180 body=106 status=ok
// SIG undefined FUN_146952180(void)

void FUN_146952180(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 1;
  FUN_14682b238(local_40,1,"FSdfGeneratorTask",0);
  FUN_14694558e(param_1 + 0x80);
  FUN_142791572(local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469521f0 FUN_1469521f0 body=132 status=ok
// SIG undefined FUN_1469521f0(void)

void FUN_1469521f0(longlong param_1,int param_2)

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



// FUNCTION 146952276 FUN_146952276 body=132 status=ok
// SIG undefined FUN_146952276(void)

void FUN_146952276(longlong param_1,int param_2)

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



// FUNCTION 1469522fc FUN_1469522fc body=62 status=ok
// SIG undefined FUN_1469522fc(void)

void FUN_1469522fc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14695233a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14695233a FUN_14695233a body=93 status=ok
// SIG undefined FUN_14695233a(void)

ulonglong FUN_14695233a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146952398 FUN_146952398 body=24 status=ok
// SIG undefined FUN_146952398(void)

void FUN_146952398(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469523ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1469523b0 FUN_1469523b0 body=29 status=ok
// SIG undefined FUN_1469523b0(void)

undefined8 FUN_1469523b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469523ce FUN_1469523ce body=62 status=ok
// SIG undefined FUN_1469523ce(void)

void FUN_1469523ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14695240c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 14695240c FUN_14695240c body=112 status=ok
// SIG undefined FUN_14695240c(void)

ulonglong FUN_14695240c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146952446;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,8);
      param_2 = param_2 / 0x60;
    }
  }
LAB_146952446:
  return param_2 & 0xffffffff;
}



// FUNCTION 14695247c FUN_14695247c body=113 status=ok
// SIG undefined FUN_14695247c(void)

void FUN_14695247c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1469524ee FUN_1469524ee body=228 status=ok
// SIG undefined FUN_1469524ee(void)

int FUN_1469524ee(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x18);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x18);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x10 + lVar8 * 0x18);
    }
  }
  return -1;
}



// FUNCTION 1469525d2 FUN_1469525d2 body=439 status=ok
// SIG undefined FUN_1469525d2(void)

undefined4 *
FUN_1469525d2(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14695278a(param_1,local_50);
  uVar7 = *param_3;
  *local_48 = uVar7;
  uVar3 = param_3[1];
  local_48[1] = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(local_48 + 2) = 0xffffffff;
    local_54 = local_50[0];
  }
  else {
    LOCK();
    *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)local_48[1];
    *(undefined4 *)(local_48 + 2) = 0xffffffff;
    local_54 = local_50[0];
    uVar7 = *local_48;
    if (plVar4 != (longlong *)0x0) {
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
  }
  uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  local_68 = param_4;
  cVar5 = FUN_146952870(param_1,uVar6,local_48,&local_54);
  if (cVar5 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x14) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146952a18(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695278a FUN_14695278a body=230 status=ok
// SIG undefined FUN_14695278a(void)

int * FUN_14695278a(longlong *param_1,int *param_2)

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



// FUNCTION 146952870 FUN_146952870 body=285 status=ok
// SIG undefined FUN_146952870(void)

void FUN_146952870(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_50 = *param_3;
    local_48 = (longlong *)param_3[1];
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    iVar9 = FUN_1469524ee(param_1,param_2,&local_50);
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x18);
      plVar4 = *(longlong **)(puVar3 + 2);
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
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      *puVar3 = *(undefined4 *)param_3;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_14695298e(param_1,*param_4,1);
      *param_4 = iVar9;
      uVar8 = 1;
      goto LAB_1469528a2;
    }
  }
  uVar8 = 0;
LAB_1469528a2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695298e FUN_14695298e body=138 status=ok
// SIG undefined FUN_14695298e(void)

void FUN_14695298e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146952a18 FUN_146952a18 body=527 status=ok
// SIG undefined FUN_146952a18(void)

void FUN_146952a18(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x18);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x18);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
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
        lVar4 = lVar4 + lVar6 * 0x18;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146952c28 FUN_146952c28 body=147 status=ok
// SIG undefined FUN_146952c28(void)

void FUN_146952c28(longlong param_1,int param_2)

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



// FUNCTION 146952cbc FUN_146952cbc body=118 status=ok
// SIG undefined FUN_146952cbc(void)

void FUN_146952cbc(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10 + (longlong)(int)param_2 * 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  iVar5 = ~param_2 + iVar4;
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    memmove((void *)(lVar2 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 0x18),(longlong)iVar6 * 0x18);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 146952d32 FUN_146952d32 body=62 status=ok
// SIG undefined FUN_146952d32(void)

void FUN_146952d32(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146952d70(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146952d70 FUN_146952d70 body=112 status=ok
// SIG undefined FUN_146952d70(void)

ulonglong FUN_146952d70(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146952daa;
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
LAB_146952daa:
  return param_2 & 0xffffffff;
}



// FUNCTION 146952de0 FUN_146952de0 body=114 status=ok
// SIG undefined FUN_146952de0(void)

void FUN_146952de0(longlong *param_1,int param_2)

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



// FUNCTION 146952e52 FUN_146952e52 body=134 status=ok
// SIG undefined FUN_146952e52(void)

void FUN_146952e52(longlong *param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_3) goto LAB_146952e62;
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_146952e62:
  *param_2 = iVar1;
  return;
}



// FUNCTION 146952ed8 FUN_146952ed8 body=87 status=ok
// SIG undefined FUN_146952ed8(void)

void FUN_146952ed8(longlong *param_1,int param_2)

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
  FUN_146952de0();
  return;
}



// FUNCTION 146952f30 FUN_146952f30 body=138 status=ok
// SIG undefined FUN_146952f30(void)

void FUN_146952f30(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146952fba FUN_146952fba body=119 status=ok
// SIG undefined FUN_146952fba(void)

void FUN_146952fba(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x648);
  if (param_2 <= (int)uVar1) {
    iVar5 = 100;
    if (100 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (100 < *(uint *)(param_1 + 0x64c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x64c) = iVar5;
    FUN_146953032(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146953032 FUN_146953032 body=141 status=ok
// SIG undefined FUN_146953032(void)

void FUN_146953032(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x640);
  if ((uint)param_3 < 0x65) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x640,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x640),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x640,param_2,param_3,0x10);
  return;
}



// FUNCTION 1469530c0 FUN_1469530c0 body=147 status=ok
// SIG undefined FUN_1469530c0(void)

void FUN_1469530c0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146953154 FUN_146953154 body=115 status=ok
// SIG undefined FUN_146953154(void)

void FUN_146953154(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    iVar2 = (int)(uVar1 / 0x24);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x24,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1469531c8 FUN_1469531c8 body=96 status=ok
// SIG undefined FUN_1469531c8(void)

void FUN_1469531c8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 146953228 FUN_146953228 body=147 status=ok
// SIG undefined FUN_146953228(void)

void FUN_146953228(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1469532bc FUN_1469532bc body=370 status=ok
// SIG undefined FUN_1469532bc(void)

ulonglong FUN_1469532bc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  undefined1 local_180 [288];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_188[0] = (undefined1)param_3;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 1;
  plVar2 = *(longlong **)(param_1 + 0x38);
  uVar6 = 0;
  FUN_142877f32(plVar2,2,0);
  (**(code **)(*plVar2 + 0x238))(plVar2,param_1,local_188);
  if (0 < (int)local_58) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      puVar5 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar5 = local_180;
      }
      plVar2 = *(longlong **)(puVar5 + lVar7 + 0x38);
      plVar3 = *(longlong **)(puVar5 + lVar7 + 0x40);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (*(char *)((longlong)plVar2 + 0x3a) == '\x01') {
        cVar4 = (**(code **)(*plVar2 + 400))();
      }
      else {
        cVar4 = '\0';
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      puVar5 = puVar5 + lVar7;
      if (cVar4 != '\0') {
LAB_1469533e7:
        FUN_1402018be(param_2,puVar5);
        uVar6 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
        goto LAB_1469533f5;
      }
      cVar4 = FUN_1469532bc(puVar5,param_2,param_3);
      if (cVar4 != '\0') goto LAB_1469533e7;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x48;
    } while (lVar8 < (int)local_58);
    uVar6 = 0;
  }
LAB_1469533f5:
  FUN_144715780(local_180);
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146953430 FUN_146953430 body=363 status=ok
// SIG undefined FUN_146953430(void)

ulonglong FUN_146953430(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  undefined1 local_180 [288];
  undefined1 *local_60;
  ulonglong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_188[0] = (undefined1)param_3;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 1;
  plVar2 = *(longlong **)(param_1 + 0x38);
  FUN_142877f32(plVar2,2,0);
  (**(code **)(*plVar2 + 0x238))(plVar2,param_1,local_188);
  iVar6 = (int)local_58 + 1;
  lVar4 = (local_58 & 0xffffffff) * 0x48;
  do {
    lVar7 = lVar4 + -0x48;
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) goto LAB_14695355e;
    puVar8 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar8 = local_180;
    }
    plVar2 = *(longlong **)(puVar8 + lVar4 + -0x10);
    plVar3 = *(longlong **)(puVar8 + lVar4 + -8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (*(char *)((longlong)plVar2 + 0x3a) == '\x01') {
      cVar5 = (**(code **)(*plVar2 + 400))();
    }
    else {
      cVar5 = '\0';
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (cVar5 != '\0') break;
    cVar5 = FUN_146953430(puVar8 + lVar7,param_2,param_3 & 0xffffffff);
    lVar4 = lVar7;
  } while (cVar5 == '\0');
  FUN_1402018be(param_2,puVar8 + lVar7);
LAB_14695355e:
  FUN_144715780(local_180);
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return CONCAT71((int7)(param_3 >> 8),0 < iVar6) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695359c FUN_14695359c body=118 status=ok
// SIG undefined FUN_14695359c(void)

void FUN_14695359c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed7760;
  FUN_146946e70();
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  plVar3 = (longlong *)param_1[5];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146953606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146953612 FUN_146953612 body=115 status=ok
// SIG undefined FUN_146953612(void)

undefined8 * FUN_146953612(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96b1b8) {
    FUN_144b3d300(&DAT_14c96b1b8);
    if (DAT_14c96b1b8 == -1) {
      FUN_140056680(&DAT_14c96b1a8,L"FGameDragDropOperation");
      atexit((_func_5014 *)&LAB_142868cef);
      _Init_thread_footer(&DAT_14c96b1b8);
    }
  }
  return &DAT_14c96b1a8;
}



// FUNCTION 146953686 FUN_146953686 body=137 status=ok
// SIG undefined FUN_146953686(void)

void FUN_146953686(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = *param_1;
  lVar1 = param_1[1];
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[5];
  param_2[6] = param_3[4];
  param_2[7] = uVar6;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[0xe] = param_1[0xe];
  uVar2 = param_1[8];
  uVar3 = param_1[9];
  uVar4 = param_1[10];
  uVar5 = param_1[0xb];
  uVar6 = param_1[0xd];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = uVar6;
  param_2[10] = uVar4;
  param_2[0xb] = uVar5;
  param_2[8] = uVar2;
  param_2[9] = uVar3;
  uVar2 = param_1[0xf];
  uVar3 = param_1[0x10];
  uVar4 = param_1[0x12];
  uVar5 = param_1[0x13];
  uVar6 = param_1[0x14];
  param_2[0x11] = param_1[0x11];
  param_2[0x12] = uVar4;
  param_2[0xf] = uVar2;
  param_2[0x10] = uVar3;
  param_2[0x13] = uVar5;
  param_2[0x14] = uVar6;
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_1 + 0x15);
  *(byte *)((longlong)param_2 + 0x3c) = *(byte *)((longlong)param_2 + 0x3c) | 2;
  return;
}



// FUNCTION 146953710 FUN_146953710 body=149 status=ok
// SIG undefined FUN_146953710(void)

void FUN_146953710(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *param_1;
    if (lVar4 != 0) {
      FUN_14695414e(lVar4);
      lVar7 = FUN_14001cc68(0x40,0x10);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0x100000000;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(longlong *)(lVar4 + 0x100) = lVar7;
    }
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
                    /* WARNING: Could not recover jumptable at 0x000146953758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469537a6 FUN_1469537a6 body=145 status=ok
// SIG undefined FUN_1469537a6(void)

void FUN_1469537a6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  uVar2 = FUN_146968d90(param_1 + 0x8b0,&local_30);
  iVar1 = *(int *)(param_1 + 0x8f8);
  *(uint *)(param_1 + 0x8f8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8fc) < iVar1 + 1U) {
    FUN_1400c4ccc(param_1 + 0x8e0,iVar1);
  }
  lVar3 = param_1 + 0x8e0;
  if (*(longlong *)(param_1 + 0x8f0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x8f0);
  }
  *(undefined4 *)(lVar3 + (longlong)iVar1 * 4) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146953838 FUN_146953838 body=18 status=ok
// SIG undefined FUN_146953838(void)

void FUN_146953838(longlong param_1)

{
  *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x8f8) + -1;
  FUN_146968f00(param_1 + 0x8e0);
  return;
}



// FUNCTION 14695384a FUN_14695384a body=110 status=ok
// SIG undefined FUN_14695384a(void)

longlong FUN_14695384a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x8f8)) && (*(int *)(param_1 + 0x8a8) != 0)) {
    lVar2 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar2 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) == '\0') {
      lVar2 = FUN_1469692de(param_1);
      return lVar2;
    }
  }
  iVar1 = FUN_142875aca(param_1 + 0x240);
  return (longlong)iVar1 * 0xd0 + *(longlong *)(param_1 + 0x240);
}



// FUNCTION 1469538b8 FUN_1469538b8 body=111 status=ok
// SIG undefined FUN_1469538b8(void)

longlong FUN_1469538b8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x8f8)) && (*(int *)(param_1 + 0x8a8) != 0)) {
    lVar2 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar2 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) == '\0') {
      lVar2 = FUN_146969552(param_1);
      return lVar2;
    }
  }
  iVar1 = FUN_14023a06c(param_1 + 0x200);
  return (longlong)iVar1 * 0xa0 + *(longlong *)(param_1 + 0x200);
}



// FUNCTION 146953928 FUN_146953928 body=110 status=ok
// SIG undefined FUN_146953928(void)

longlong FUN_146953928(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x8f8)) && (*(int *)(param_1 + 0x8a8) != 0)) {
    lVar2 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar2 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) == '\0') {
      lVar2 = FUN_146969788(param_1);
      return lVar2;
    }
  }
  iVar1 = FUN_142875c4a(param_1 + 0x1a0);
  return (longlong)iVar1 * 0xd0 + *(longlong *)(param_1 + 0x1a0);
}



// FUNCTION 146953996 FUN_146953996 body=111 status=ok
// SIG undefined FUN_146953996(void)

longlong FUN_146953996(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x8f8)) && (*(int *)(param_1 + 0x8a8) != 0)) {
    lVar2 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar2 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) == '\0') {
      lVar2 = FUN_146969c6e(param_1);
      return lVar2;
    }
  }
  iVar1 = FUN_142875faa(param_1 + 0x1d0);
  return (longlong)iVar1 * 0x90 + *(longlong *)(param_1 + 0x1d0);
}



// FUNCTION 146953a06 FUN_146953a06 body=110 status=ok
// SIG undefined FUN_146953a06(void)

longlong FUN_146953a06(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x8f8)) && (*(int *)(param_1 + 0x8a8) != 0)) {
    lVar2 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar2 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) == '\0') {
      lVar2 = FUN_146969ed2(param_1);
      return lVar2;
    }
  }
  iVar1 = FUN_142876130(param_1 + 0x1c0);
  return (longlong)iVar1 * 0x98 + *(longlong *)(param_1 + 0x1c0);
}



// FUNCTION 146953a74 FUN_146953a74 body=107 status=ok
// SIG undefined FUN_146953a74(void)

longlong FUN_146953a74(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x8f8)) && (*(int *)(param_1 + 0x8a8) != 0)) {
    lVar2 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar2 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) == '\0') {
      lVar2 = FUN_14696a12c(param_1);
      return lVar2;
    }
  }
  iVar1 = FUN_142876312(param_1 + 0x1e0);
  return (longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x1e0);
}



// FUNCTION 146953ae0 FUN_146953ae0 body=107 status=ok
// SIG undefined FUN_146953ae0(void)

longlong FUN_146953ae0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x8f8)) && (*(int *)(param_1 + 0x8a8) != 0)) {
    lVar2 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar2 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) == '\0') {
      lVar2 = FUN_14696a800(param_1);
      return lVar2;
    }
  }
  iVar1 = FUN_142876774(param_1 + 0x230);
  return (longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x230);
}



// FUNCTION 146953b4c FUN_146953b4c body=30 status=ok
// SIG undefined FUN_146953b4c(void)

undefined4 FUN_146953b4c(longlong param_1)

{
  if (0 < (longlong)*(int *)(param_1 + 0x128)) {
    return *(undefined4 *)
            (*(longlong *)(param_1 + 0x120) + -4 + (longlong)*(int *)(param_1 + 0x128) * 4);
  }
  return 0xffffffff;
}



// FUNCTION 146953b6a FUN_146953b6a body=93 status=ok
// SIG undefined FUN_146953b6a(void)

undefined4 FUN_146953b6a(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x150);
  *(uint *)(param_1 + 0x150) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x154) < iVar1 + 1U) {
    FUN_14696aa64(param_1 + 0x140,iVar1);
  }
  lVar2 = param_1 + 0x140;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x148);
  }
  *(undefined1 *)(lVar2 + iVar1) = param_2;
  return *(undefined4 *)(param_1 + 0x150);
}



// FUNCTION 146953bc8 FUN_146953bc8 body=31 status=ok
// SIG undefined FUN_146953bc8(void)

void FUN_146953bc8(longlong param_1)

{
  if (*(int *)(param_1 + 0x150) < 1) {
    return;
  }
  *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
  FUN_14696ab48(param_1 + 0x140);
  return;
}



// FUNCTION 146953be8 FUN_146953be8 body=276 status=ok
// SIG undefined FUN_146953be8(void)

undefined8 * FUN_146953be8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)FUN_14001cc68(0x118);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149ee9940;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0xf0);
  plVar4[0x20] = param_3;
  plVar4[0x21] = param_1;
  lVar5 = FUN_14001cc68(0x40,0x10);
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0x100000000;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  plVar4[0x22] = lVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
    FUN_14696acda((longlong *)(param_1 + 0x38),iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x38);
  *(longlong **)(lVar5 + (longlong)iVar3 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = plVar4;
  *param_2 = plVar1;
  param_2[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
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
  return param_2;
}



// FUNCTION 146953cfc FUN_146953cfc body=244 status=ok
// SIG undefined FUN_146953cfc(void)

undefined8 * FUN_146953cfc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x1f0) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x1e8);
    lVar6 = (longlong)*(int *)(param_1 + 0x1f0) << 4;
    do {
      cVar4 = FUN_144aa28c6(*puVar7,param_2);
      if (cVar4 != '\0') {
        return puVar7;
      }
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149ee6440;
  FUN_144b01262(plVar5 + 2,param_2);
  iVar3 = *(int *)(param_1 + 0x1f0);
  *(uint *)(param_1 + 0x1f0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 500) < iVar3 + 1U) {
    FUN_14696af00((longlong *)(param_1 + 0x1e8),iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x1e8);
  lVar8 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar6 + lVar8) = plVar5 + 2;
  *(longlong **)(lVar6 + 8 + lVar8) = plVar5;
  if (plVar5 != (longlong *)0x0) {
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
  return (undefined8 *)(lVar6 + lVar8);
}



// FUNCTION 146953df0 FUN_146953df0 body=99 status=ok
// SIG undefined FUN_146953df0(void)

void FUN_146953df0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x1f0);
  if (0 < iVar3) {
    plVar1 = (longlong *)(param_1 + 0x1e8);
    iVar4 = 0;
    do {
      lVar2 = *(longlong *)(*plVar1 + 8 + (longlong)iVar4 * 0x10);
      if ((lVar2 == 0) || (*(int *)(lVar2 + 8) != 1)) {
        iVar4 = iVar4 + 1;
      }
      else {
        FUN_14696af86(plVar1,iVar4);
        FUN_14696b00e(plVar1);
        iVar3 = *(int *)(param_1 + 0x1f0);
      }
    } while (iVar4 < iVar3);
  }
  return;
}



// FUNCTION 146953e54 FUN_146953e54 body=288 status=ok
// SIG undefined FUN_146953e54(void)

void FUN_146953e54(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  puVar6 = (undefined8 *)param_2[1];
  local_28 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    iVar4 = *(int *)(puVar6 + 1);
    do {
      if (iVar4 == 0) {
        local_28 = (undefined8 *)0x0;
        goto LAB_146953e88;
      }
      LOCK();
      iVar2 = *(int *)(puVar6 + 1);
      bVar7 = iVar4 == iVar2;
      if (bVar7) {
        *(int *)(puVar6 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar7);
    if (puVar6 != (undefined8 *)0x0) {
      local_30 = *param_2;
      goto LAB_146953e8a;
    }
  }
LAB_146953e88:
  puVar6 = (undefined8 *)0x0;
LAB_146953e8a:
  FUN_146953f86(param_1 + 0x38,&local_30);
  lVar3 = local_30;
  local_38 = local_30;
  FUN_146953fdc(param_1 + 0x48);
  FUN_14695414e(lVar3);
  lVar5 = FUN_14001cc68(0x40,0x10);
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0x100000000;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(longlong *)(lVar3 + 0x100) = lVar5;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar6)(puVar6);
      LOCK();
      piVar1 = (int *)((longlong)puVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146953f86 FUN_146953f86 body=85 status=ok
// SIG undefined FUN_146953f86(void)

void FUN_146953f86(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2) == *param_2) {
        if (iVar1 == 1) {
          return;
        }
        FUN_14696b0aa(param_1,-iVar1);
        FUN_14696b11c(param_1);
        return;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 146953fdc FUN_146953fdc body=176 status=ok
// SIG undefined FUN_146953fdc(void)

void FUN_146953fdc(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 400);
  if (*(longlong *)(param_1 + 400) == 0) {
    lVar4 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar1 != 0) {
    iVar3 = 1;
    lVar6 = 0;
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar6) == *param_2) {
        if (iVar3 == 0) {
          return;
        }
        iVar3 = iVar1 - iVar3;
        if (iVar3 != 0) {
          iVar5 = 1;
          if (iVar3 < 1) {
            iVar5 = iVar3;
          }
          memmove((void *)(lVar4 + (lVar2 >> 0x20) * 8),
                  (void *)(lVar4 + (longlong)(iVar1 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar1 = *(int *)(param_1 + 0x198);
        }
        *(int *)(param_1 + 0x198) = iVar1 + -1;
        FUN_14696b1b8(param_1);
        return;
      }
      lVar2 = lVar2 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 << 3 != lVar6);
  }
  return;
}



// FUNCTION 14695408c FUN_14695408c body=150 status=ok
// SIG undefined FUN_14695408c(void)

void FUN_14695408c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x28) * 0xd0;
    lVar3 = *(longlong *)(param_1 + 0x20) + 0x60;
    do {
      FUN_14693848c(lVar3,param_2);
      lVar3 = lVar3 + 0xd0;
      lVar4 = lVar4 + -0xd0;
    } while (lVar4 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + 0x60 + lVar4);
      if (lVar2 != 0) {
        FUN_142862946(lVar2,param_2);
      }
      lVar2 = *(longlong *)(lVar3 + 0x80 + lVar4);
      if (lVar2 != 0) {
        FUN_142862946(lVar2,param_2);
      }
      lVar4 = lVar4 + 0x98;
    } while ((longlong)iVar1 * 0x98 - lVar4 != 0);
  }
  return;
}



// FUNCTION 146954122 FUN_146954122 body=43 status=ok
// SIG undefined FUN_146954122(void)

void FUN_146954122(longlong param_1)

{
  FUN_14695414e();
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_140055f48(param_1);
  return;
}



// FUNCTION 14695414e FUN_14695414e body=912 status=ok
// SIG undefined FUN_14695414e(void)

void FUN_14695414e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1428768e2(param_1);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1428768e2(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  FUN_142875273(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_142876912(param_1 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  FUN_14171ee09(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    FUN_142876942(param_1 + 0x30);
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  FUN_14287523f(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_142876972(param_1 + 0x40);
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  FUN_1428751fd(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_1428769a2(param_1 + 0x50);
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  FUN_1428751cc(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_1428769d2(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_142876a02(param_1 + 0x70);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x8c) < 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_1428768e2(param_1 + 0x80);
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  FUN_142875192(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    FUN_142876a32(param_1 + 0x90);
  }
  iVar1 = *(int *)(param_1 + 0xac);
  FUN_142875150(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xac) != 0)) {
    FUN_142876a62(param_1 + 0xa0);
  }
  if (*(int *)(param_1 + 0xbc) < 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_142876a92(param_1 + 0xb0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(int *)(param_1 + 0xcc) < 0) {
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_142876ac2(param_1 + 0xc0);
  }
  else {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xdc) < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_142876af2(param_1 + 0xd0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    uVar3 = *(undefined8 *)(param_1 + 0xf8);
    lVar5 = 0;
    do {
      FUN_14696ae86(uVar3,*(undefined4 *)(lVar2 + lVar5));
      lVar5 = lVar5 + 4;
    } while ((longlong)iVar1 * 4 != lVar5);
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if (*(int *)(param_1 + 0xec) < 0) {
      FUN_14481578e(param_1 + 0xe0,0);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (lVar2 != 0) {
    if (DAT_14c968098 == 0) {
      FUN_1469546e6(lVar2);
      FUN_1400020a8(lVar2);
    }
    else {
      plVar4 = *(longlong **)(DAT_14c968098 + 0x20);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x188))(plVar4,lVar2);
      }
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  return;
}



// FUNCTION 1469544de FUN_1469544de body=426 status=ok
// SIG undefined FUN_1469544de(void)

longlong FUN_1469544de(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                      undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined2 param_8,
                      undefined1 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_5c;
  int local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 0x100);
  uVar1 = *(undefined4 *)(lVar4 + 0x28);
  uVar2 = *(undefined4 *)(lVar4 + 0x38);
  local_98 = *param_3;
  uStack_94 = param_3[1];
  uStack_90 = param_3[2];
  uStack_8c = param_3[3];
  local_88 = param_3[4];
  uStack_84 = param_3[5];
  uStack_80 = param_3[6];
  uStack_7c = param_3[7];
  local_78 = param_3[8];
  uStack_74 = param_3[9];
  uStack_70 = param_3[10];
  uStack_6c = param_3[0xb];
  plVar5 = *(longlong **)(param_1 + 0xf8);
  local_5c = 0;
  local_a4 = param_2;
  local_a0 = param_4;
  FUN_14696ad60(plVar5,local_58);
  *(undefined4 *)(local_50 + 4) = local_78;
  *(undefined4 *)((longlong)local_50 + 0x24) = uStack_74;
  *(undefined4 *)(local_50 + 5) = uStack_70;
  *(undefined4 *)((longlong)local_50 + 0x2c) = uStack_6c;
  *(undefined4 *)(local_50 + 2) = local_88;
  *(undefined4 *)((longlong)local_50 + 0x14) = uStack_84;
  *(undefined4 *)(local_50 + 3) = uStack_80;
  *(undefined4 *)((longlong)local_50 + 0x1c) = uStack_7c;
  *local_50 = CONCAT44(uStack_94,local_98);
  local_50[1] = CONCAT44(uStack_8c,uStack_90);
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[8] = local_a0;
  local_50[9] = 0;
  local_50[10] = lVar4 + 0x20;
  local_50[0xb] = lVar4 + 0x30;
  local_50[0xc] = 0;
  *(undefined4 *)(local_50 + 0xd) = local_a4;
  *(undefined4 *)((longlong)local_50 + 0x6c) = uVar1;
  *(undefined4 *)(local_50 + 0xe) = uVar2;
  *(undefined4 *)((longlong)local_50 + 0x74) = 0;
  *(undefined4 *)(local_50 + 0xf) = 0;
  *(undefined4 *)((longlong)local_50 + 0x7c) = 0xffffffff;
  *(undefined4 *)(local_50 + 0x10) = 0;
  *(undefined4 *)((longlong)local_50 + 0x84) = 0;
  *(undefined1 *)(local_50 + 0x11) = param_9;
  *(undefined2 *)((longlong)local_50 + 0x8a) = param_8;
  *(undefined1 *)((longlong)local_50 + 0x8c) = param_6;
  *(undefined1 *)((longlong)local_50 + 0x8d) = param_5;
  *(undefined1 *)((longlong)local_50 + 0x8e) = param_7;
  *(undefined2 *)((longlong)local_50 + 0x8f) = 0x100;
  lVar4 = *plVar5;
  iVar3 = *(int *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xe8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xec) < iVar3 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0xe0),iVar3);
  }
  *(int *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar3 * 4) = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar4 + (longlong)local_58[0] * 0xa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695468a FUN_14695468a body=92 status=ok
// SIG undefined FUN_14695468a(void)

void FUN_14695468a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x100);
  iVar1 = *(int *)(lVar2 + 0x18);
  *(uint *)(lVar2 + 0x18) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x1c) < iVar1 + 1U) {
    FUN_14696b268(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    lVar3 = lVar2;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1469546e6 FUN_1469546e6 body=56 status=ok
// SIG undefined FUN_1469546e6(void)

void FUN_1469546e6(longlong param_1)

{
  FUN_146963efa(param_1,0);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_146963f40(param_1);
  return;
}



// FUNCTION 14695471e FUN_14695471e body=593 status=ok
// SIG undefined FUN_14695471e(void)

void FUN_14695471e(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,float param_6,longlong param_7,undefined4 param_8,
                  undefined8 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  float local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)((longlong)param_3 + 0x34) & 1) != 0) {
    fVar1 = *(float *)(param_3 + 1);
    *(float *)((longlong)param_3 + 0x1c) = fVar1;
    param_3[4] = 0;
    *(float *)(param_3 + 5) = fVar1;
    *(undefined8 *)((longlong)param_3 + 0x2c) = *param_3;
    *(float *)((longlong)param_3 + 0x14) = (1.0 / fVar1) * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 3) = *(float *)(param_3 + 2) * (1.0 / fVar1);
  }
  cVar5 = FUN_140239c6b(param_1,param_3,param_4,param_9);
  if (cVar5 == '\0') {
    local_a0 = param_9;
    local_a8 = param_5;
    pfVar6 = (float *)FUN_140239d86(param_1,param_2,param_3,param_4);
    if ((param_6 != 0.0) || (NAN(param_6))) {
      FUN_146954970(&local_98,param_3,param_7,param_8);
      fVar7 = sinf(param_6);
      fVar8 = cosf(param_6);
      fVar9 = (-local_98 * fVar7 - fVar8 * local_94) + local_94;
      local_98 = (fVar7 * local_94 - local_98 * fVar8) + local_98;
      fVar1 = *pfVar6;
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[3];
      fVar4 = pfVar6[2];
      *pfVar6 = fVar8 * fVar1 + fVar7 * fVar4;
      pfVar6[1] = fVar2 * fVar8 + fVar3 * fVar7;
      pfVar6[2] = fVar8 * fVar4 - fVar7 * fVar1;
      pfVar6[3] = fVar8 * fVar3 - fVar7 * fVar2;
      pfVar6[4] = local_98 * fVar1 + fVar9 * fVar4 + pfVar6[4];
      pfVar6[5] = local_98 * fVar2 + fVar9 * fVar3 + pfVar6[5];
    }
  }
  if (*(char *)(param_7 + 8) == '\x01') {
    *(undefined1 *)(param_7 + 8) = 0;
  }
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146954970 FUN_146954970 body=301 status=ok
// SIG undefined FUN_146954970(void)

void FUN_146954970(float *param_1,longlong param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  if (param_4 == 1) {
    pfVar5 = (float *)&DAT_14c84635c;
    if (*(char *)(param_3 + 2) != '\0') {
      pfVar5 = param_3;
    }
    fVar10 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                   *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20));
    fVar9 = *(float *)(param_2 + 0x1c) * fVar10;
    fVar8 = -*(float *)(param_2 + 0x24) * fVar10;
    fVar7 = -*(float *)(param_2 + 0x20) * fVar10;
    fVar10 = fVar10 * *(float *)(param_2 + 0x28);
    fVar1 = *(float *)(param_2 + 0x30);
    fVar2 = *(float *)(param_2 + 0x2c);
    fVar3 = *pfVar5;
    fVar4 = pfVar5[1];
    *param_1 = fVar10 * fVar3 + fVar8 * fVar4 + (-fVar2 * fVar10 - fVar1 * fVar8);
    param_1[1] = fVar7 * fVar3 + fVar9 * fVar4 + (-fVar2 * fVar7 - fVar9 * fVar1);
  }
  else if (param_4 == 0) {
    if (*(char *)(param_3 + 2) == '\0') {
      uVar6 = CONCAT44(*(float *)(param_2 + 0x18) * 0.5,*(float *)(param_2 + 0x14) * 0.5);
    }
    else {
      uVar6 = *(undefined8 *)param_3;
    }
    *(undefined8 *)param_1 = uVar6;
  }
  return;
}



// FUNCTION 146954a9e FUN_146954a9e body=218 status=ok
// SIG undefined FUN_146954a9e(void)

void FUN_146954a9e(longlong param_1,longlong param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412cc59c(param_1 + 0x60,param_3);
  iVar1 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar1 = 0;
  }
  iVar2 = iVar1;
  if (param_4 < iVar1) {
    iVar2 = param_4;
  }
  if (param_5 < iVar1) {
    iVar1 = param_5;
  }
  iVar2 = iVar1 - iVar2;
  if (iVar1 <= param_4) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    FUN_144a63a7c(param_2,&local_38);
    if ((longlong *)(param_1 + 0xc0) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xc0) = local_38;
      *(undefined4 *)(param_1 + 200) = local_30;
      *(undefined4 *)(param_1 + 0xcc) = local_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146954b7a FUN_146954b7a body=338 status=ok
// SIG undefined FUN_146954b7a(void)

void FUN_146954b7a(undefined8 param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4,
                  undefined4 param_5,undefined1 param_6,undefined4 *param_7)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar1 = *(float *)(param_3 + 1);
  if ((*(byte *)((longlong)param_3 + 0x34) & 1) != 0) {
    *(float *)((longlong)param_3 + 0x1c) = fVar1;
    param_3[4] = 0;
    *(float *)(param_3 + 5) = fVar1;
    *(undefined8 *)((longlong)param_3 + 0x2c) = *param_3;
    *(float *)((longlong)param_3 + 0x14) = (1.0 / fVar1) * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 3) = *(float *)(param_3 + 2) * (1.0 / fVar1);
  }
  if ((0.0 < *(float *)((longlong)param_3 + 0x14) * fVar1) &&
     (0.0 < fVar1 * *(float *)(param_3 + 3))) {
    cVar2 = FUN_14022c706(param_1);
    if (cVar2 == '\0') {
      uVar3 = FUN_146953a74(param_1);
      local_58 = *param_7;
      uStack_54 = param_7[1];
      uStack_50 = param_7[2];
      uStack_4c = param_7[3];
      local_68 = *param_4;
      *param_4 = 0;
      local_60 = (undefined4)param_4[1];
      local_5c = *(undefined4 *)((longlong)param_4 + 0xc);
      param_4[1] = 0;
      FUN_146954cce(uVar3,&local_68,param_5);
      local_70 = param_6;
      local_78 = param_3;
      FUN_14023a0a8(uVar3,param_1,6,param_2);
    }
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146954cce FUN_146954cce body=112 status=ok
// SIG undefined FUN_146954cce(void)

void FUN_146954cce(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((longlong *)(param_1 + 0x50) != param_2) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x50) = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0x58) = (int)param_2[1];
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = param_3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 0x70) = *param_4;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146954d3e FUN_146954d3e body=428 status=ok
// SIG undefined FUN_146954d3e(void)

void FUN_146954d3e(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9,undefined8 *param_10)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if ((*(byte *)((longlong)param_3 + 0x34) & 1) != 0) {
    fVar4 = *(float *)(param_3 + 1);
    *(float *)((longlong)param_3 + 0x1c) = fVar4;
    param_3[4] = 0;
    *(float *)(param_3 + 5) = fVar4;
    *(undefined8 *)((longlong)param_3 + 0x2c) = *param_3;
    *(float *)((longlong)param_3 + 0x14) = (1.0 / fVar4) * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 3) = *(float *)(param_3 + 2) * (1.0 / fVar4);
  }
  cVar2 = FUN_14022c706(param_1);
  if (cVar2 == '\0') {
    lVar3 = FUN_146953a06(param_1);
    fVar5 = (float)((ulonglong)param_4 >> 0x20);
    fVar4 = (float)((ulonglong)param_6 >> 0x20);
    uVar1 = param_10[1];
    *(undefined8 *)(lVar3 + 0x50) = *param_10;
    *(undefined8 *)(lVar3 + 0x58) = uVar1;
    *(float *)(lVar3 + 0x70) = (float)param_4;
    *(float *)(lVar3 + 0x74) = fVar5;
    *(float *)(lVar3 + 0x78) = (float)param_5 * 0.33333334 + (float)param_4;
    *(float *)(lVar3 + 0x7c) = (float)((ulonglong)param_5 >> 0x20) * 0.33333334 + fVar5;
    *(float *)(lVar3 + 0x80) = (float)param_6 - (float)param_7 * 0.33333334;
    *(float *)(lVar3 + 0x84) = fVar4 - (float)((ulonglong)param_7 >> 0x20) * 0.33333334;
    *(float *)(lVar3 + 0x88) = (float)param_6;
    *(float *)(lVar3 + 0x8c) = fVar4;
    *(undefined4 *)(lVar3 + 0x90) = param_8;
    FUN_14023a0a8(lVar3,param_1,4,param_2,param_3,param_9);
  }
  return;
}



// FUNCTION 146954eea FUN_146954eea body=392 status=ok
// SIG undefined FUN_146954eea(void)

void FUN_146954eea(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar4 = FUN_14022c706();
  if ((cVar4 == '\0') && (1 < *(int *)(param_4 + 1))) {
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_14171ef34();
    if ((longlong)*(int *)(param_4 + 1) != 0) {
      pdVar7 = (double *)*param_4;
      pdVar6 = pdVar7 + (longlong)*(int *)(param_4 + 1) * 2;
      do {
        uVar3 = uStack_a0;
        dVar1 = *pdVar7;
        dVar2 = pdVar7[1];
        lVar8 = (longlong)(int)uStack_a0;
        uVar5 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
        if (uStack_a0._4_4_ < uVar5) {
          FUN_140752556(&local_a8,uVar3 & 0xffffffff);
        }
        *(float *)(local_a8 + lVar8 * 8) = (float)dVar1;
        *(float *)(local_a8 + 4 + lVar8 * 8) = (float)dVar2;
        pdVar7 = pdVar7 + 2;
      } while (pdVar7 != pdVar6);
    }
    local_b8 = (undefined4)local_a8;
    uStack_b4 = local_a8._4_4_;
    uStack_b0 = (int)uStack_a0;
    uStack_ac = uStack_a0._4_4_;
    local_a8 = 0;
    uStack_a0 = 0;
    local_c0 = param_8;
    local_c8 = param_7;
    local_d0 = param_6;
    local_d8 = param_5;
    FUN_146955074(param_1,param_2,param_3);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146955074 FUN_146955074 body=355 status=ok
// SIG undefined FUN_146955074(void)

void FUN_146955074(undefined8 param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4,
                  byte param_5,undefined4 *param_6,char param_7,undefined4 param_8)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  byte local_80;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)((longlong)param_3 + 0x34) & 1) != 0) {
    fVar1 = *(float *)(param_3 + 1);
    *(float *)((longlong)param_3 + 0x1c) = fVar1;
    param_3[4] = 0;
    *(float *)(param_3 + 5) = fVar1;
    *(undefined8 *)((longlong)param_3 + 0x2c) = *param_3;
    *(float *)((longlong)param_3 + 0x14) = (1.0 / fVar1) * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 3) = *(float *)(param_3 + 2) * (1.0 / fVar1);
  }
  cVar5 = FUN_14022c706(param_1);
  if ((cVar5 == '\0') && (1 < (int)param_4[1])) {
    lVar6 = FUN_146953996(param_1);
    uVar2 = param_6[1];
    uVar3 = param_6[2];
    uVar4 = param_6[3];
    *(undefined4 *)(lVar6 + 0x50) = *param_6;
    *(undefined4 *)(lVar6 + 0x54) = uVar2;
    *(undefined4 *)(lVar6 + 0x58) = uVar3;
    *(undefined4 *)(lVar6 + 0x5c) = uVar4;
    *(undefined4 *)(lVar6 + 0x80) = param_8;
    local_70 = *param_4;
    *param_4 = 0;
    local_68 = (undefined4)param_4[1];
    local_64 = *(undefined4 *)((longlong)param_4 + 0xc);
    param_4[1] = 0;
    FUN_1469551d8(lVar6,&local_70,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff);
    local_80 = param_5 | 0x10;
    if (param_7 == '\0') {
      local_80 = param_5;
    }
    local_88 = param_3;
    FUN_14023a0a8(lVar6,param_1,5,param_2);
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469551d8 FUN_1469551d8 body=132 status=ok
// SIG undefined FUN_1469551d8(void)

void FUN_1469551d8(longlong param_1,longlong *param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x8c) = param_3;
  if ((longlong *)(param_1 + 0x60) != param_2) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x60) = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0x68) = (int)param_2[1];
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_144750f90(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14695525c FUN_14695525c body=192 status=ok
// SIG undefined FUN_14695525c(void)

void FUN_14695525c(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 *param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  
  if ((*(byte *)((longlong)param_3 + 0x34) & 1) != 0) {
    fVar1 = *(float *)(param_3 + 1);
    *(float *)((longlong)param_3 + 0x1c) = fVar1;
    param_3[4] = 0;
    *(float *)(param_3 + 5) = fVar1;
    *(undefined8 *)((longlong)param_3 + 0x2c) = *param_3;
    *(float *)((longlong)param_3 + 0x14) = (1.0 / fVar1) * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 3) = *(float *)(param_3 + 2) * (1.0 / fVar1);
  }
  cVar6 = FUN_14022c706(param_1);
  if (cVar6 == '\0') {
    lVar7 = FUN_146953ae0(param_1);
    *(undefined4 *)(lVar7 + 0x70) = param_5;
    uVar5 = param_4[1];
    *(undefined8 *)(lVar7 + 0x50) = *param_4;
    *(undefined8 *)(lVar7 + 0x58) = uVar5;
    uVar2 = param_6[1];
    uVar3 = param_6[2];
    uVar4 = param_6[3];
    *(undefined4 *)(lVar7 + 0x60) = *param_6;
    *(undefined4 *)(lVar7 + 100) = uVar2;
    *(undefined4 *)(lVar7 + 0x68) = uVar3;
    *(undefined4 *)(lVar7 + 0x6c) = uVar4;
    FUN_14023a0a8(lVar7,param_1,0xb,param_2,param_3,0);
  }
  return;
}



// FUNCTION 14695531c FUN_14695531c body=10009 status=ok
// SIG undefined FUN_14695531c(void)

void FUN_14695531c(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 uVar19;
  longlong *plVar20;
  undefined2 uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined1 local_280;
  undefined1 local_278;
  undefined1 local_270;
  undefined2 local_268;
  float *local_260;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  ulonglong local_218;
  undefined8 uStack_210;
  float local_1fc;
  undefined1 local_1f8 [16];
  float local_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  fVar37 = param_2[8];
  local_244 = param_2[9];
  uVar4 = *(undefined1 *)((longlong)param_2 + 0x45);
  fVar43 = param_2[10];
  fVar32 = param_2[0x10];
  if ((*(longlong *)(param_2 + 0x22) == 0) ||
     (plVar20 = *(longlong **)(*(longlong *)(param_2 + 0x22) + 0x10), plVar20 == (longlong *)0x0)) {
    plVar20 = (longlong *)0x0;
    local_248 = 1.0;
    local_240 = 1.0;
    fVar36 = fVar32;
  }
  else {
    uVar15 = (**(code **)*plVar20)(plVar20);
    uVar16 = (**(code **)(*plVar20 + 8))(plVar20);
    local_248 = (float)uVar16;
    local_240 = (float)uVar15;
    fVar36 = param_2[0x10];
  }
  fVar42 = param_2[0x18];
  fVar23 = fVar42;
  if (fVar37 < 0.0) {
    fVar23 = -fVar42;
  }
  fVar1 = param_2[0x19];
  fVar38 = (1.0 / fVar36) * local_248;
  local_168 = ZEXT416((uint)fVar38);
  fVar36 = (1.0 / fVar36) * local_240;
  local_1d8._0_4_ = fVar1;
  local_1d8._4_4_ = 0;
  local_1d8._8_4_ = 0;
  local_1d8._12_4_ = 0;
  if (local_244 < 0.0) {
    local_1d8._0_4_ = -fVar1;
    local_1d8._4_4_ = 0x80000000;
    local_1d8._8_4_ = 0x80000000;
    local_1d8._12_4_ = 0x80000000;
  }
  fVar2 = param_2[0x1a];
  fVar9 = (float)(~-(uint)(fVar37 < 0.0) & (uint)fVar2 | (uint)-fVar2 & -(uint)(fVar37 < 0.0));
  fVar3 = param_2[0x1b];
  fVar10 = (float)(~-(uint)(local_244 < 0.0) & (uint)fVar3 | (uint)-fVar3 & -(uint)(local_244 < 0.0)
                  );
  local_158 = ZEXT416((uint)fVar10);
  fVar40 = fVar37 - fVar36 * fVar9;
  fVar34 = ABS(fVar40);
  local_198 = ZEXT416((uint)fVar37);
  fVar41 = ABS(fVar36 * fVar23);
  fVar24 = local_244 - fVar38 * fVar10;
  local_1c8 = ZEXT416((uint)fVar24);
  uVar15 = -(uint)(fVar34 < fVar41);
  fVar10 = fVar37 * 0.5;
  if (fVar41 <= fVar34) {
    fVar10 = fVar36 * fVar23;
  }
  local_188 = ZEXT416((uint)fVar10);
  fVar37 = (float)(~uVar15 & (uint)fVar40 | uVar15 & (uint)(fVar37 * 0.5));
  local_238 = ZEXT416((uint)fVar37);
  local_248 = *(float *)((longlong)param_1 + 0x2c) / local_248;
  fVar24 = ABS(fVar24);
  fVar34 = ABS(fVar38 * (float)local_1d8._0_4_);
  local_148 = ZEXT416((uint)fVar34);
  local_228 = ZEXT416((uint)fVar24);
  local_240 = *(float *)((longlong)param_1 + 0x2c) / local_240;
  auVar44 = ZEXT416((uint)local_240);
  local_178 = ZEXT416((uint)(local_244 * 0.5));
  local_24c = local_244 * 0.5;
  if (fVar34 <= fVar24) {
    local_24c = fVar38 * (float)local_1d8._0_4_;
  }
  local_118 = ABS(fVar42) + local_240;
  local_110 = ABS(fVar1) + local_248;
  auVar25 = ZEXT416((uint)local_110);
  local_10c = (1.0 - ABS(fVar3)) + local_248;
  local_1a8 = ZEXT416((uint)local_10c);
  local_114 = (1.0 - ABS(fVar2)) + local_240;
  local_218 = (ulonglong)(uint)local_114;
  uStack_210 = 0;
  fVar36 = fVar36 * (1.0 - (fVar23 + fVar9));
  local_1b8 = ZEXT416((uint)local_118);
  local_108 = 0;
  uStack_100 = 0x3f80000000000000;
  local_f8 = 0;
  uStack_f0 = 0x3f80000000000000;
  local_138 = *(undefined8 *)(param_2 + 0x14);
  uVar11 = *(undefined8 *)(param_2 + 0x16);
  local_1f8 = auVar25;
  uStack_130 = uVar11;
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_1411ab38a(&local_138,&local_11c);
  }
  else {
    uStack_130._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
    auVar29._4_8_ = 0;
    auVar29._0_4_ = uStack_130._4_4_;
    if (uStack_130._4_4_ <= 0.0) {
      auVar29 = ZEXT812(0) << 0x20;
    }
    if (1.0 <= auVar29._0_4_) {
      auVar29._4_8_ = auVar29._4_8_;
      auVar29._0_4_ = 0x3f800000;
    }
    uStack_130._0_4_ = (float)uVar11;
    if ((float)uStack_130 <= 0.0) {
      uStack_130._0_4_ = 0.0;
    }
    if (1.0 <= (float)uStack_130) {
      uStack_130._0_4_ = 1.0;
    }
    local_138._4_4_ = (float)((ulonglong)local_138 >> 0x20);
    if (local_138._4_4_ <= 0.0) {
      local_138._4_4_ = 0.0;
    }
    if (1.0 <= local_138._4_4_) {
      local_138._4_4_ = 1.0;
    }
    if ((float)local_138 <= 0.0) {
      local_138._0_4_ = 0.0;
    }
    if (1.0 <= (float)local_138) {
      local_138._0_4_ = 1.0;
    }
    local_11c = CONCAT13((char)(int)(auVar29._0_4_ * 255.0 + 0.5),
                         CONCAT12((char)(int)((float)local_138 * 255.0 + 0.5),
                                  CONCAT11((char)(int)(local_138._4_4_ * 255.0 + 0.5),
                                           (char)(int)((float)uStack_130 * 255.0 + 0.5))));
  }
  uVar15 = -(uint)(ABS(fVar36) <= 1e-08);
  local_268 = 0x60;
  local_278 = 1;
  local_280 = 2;
  local_288 = plVar20;
  local_270 = uVar4;
  local_260 = param_2;
  lVar17 = FUN_140c7650a(param_1,*param_1,fVar43,&local_118);
  uVar14 = local_11c;
  fVar43 = local_244;
  fVar42 = 0.0 / local_244;
  local_1fc = 0.0 / (float)local_198._0_4_;
  auVar26 = ZEXT816(0);
  auVar27 = blendps(ZEXT416((uint)(*param_2 * 0.0 + param_2[2] * 0.0 + param_2[4] + 0.5)),auVar26,
                    0xe);
  auVar27 = roundps(auVar25,auVar27,1);
  auVar25 = blendps(ZEXT416((uint)(param_2[1] * 0.0 + param_2[3] * 0.0 + param_2[5] + 0.5)),auVar26,
                    0xe);
  auVar44 = roundps(auVar44,auVar25,1);
  fVar23 = fVar32 * (float)local_198._0_4_;
  fVar32 = fVar32 * local_244 + fVar32 * local_244 + 0.5;
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
  }
  uVar16 = uVar15 & 0x3f800000;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = local_240;
  *(float *)(lVar6 + 4 + lVar18) = local_248;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = local_1fc;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar42;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar27._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  uVar19 = (undefined2)((uint)(int)ROUND(fVar23 + fVar23 + 0.5) >> 1);
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  uVar21 = (undefined2)((uint)(int)ROUND(fVar32) >> 1);
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  fVar43 = local_24c / fVar43;
  auVar44 = blendps(ZEXT416((uint)(*param_2 * 0.0 + param_2[2] * local_24c + param_2[4] + 0.5)),
                    auVar26,0xe);
  auVar25 = roundps(ZEXT416((uint)fVar32),auVar44,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * 0.0 + param_2[3] * local_24c + param_2[5] + 0.5)),
                    auVar26,0xe);
  auVar44 = roundps(auVar27,auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = local_240;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1f8._0_4_;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = local_1fc;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar43;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar25._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  fVar37 = (float)(~uVar15 & (uint)((fVar37 - fVar10) / fVar36) | uVar16);
  auVar27 = ZEXT416((uint)fVar37);
  uVar12 = local_188._0_4_;
  local_1dc = (float)local_188._0_4_ / (float)local_198._0_4_;
  auVar26 = ZEXT816(0);
  auVar25 = blendps(ZEXT416((uint)(*param_2 * (float)local_188._0_4_ + param_2[2] * 0.0 + param_2[4]
                                  + 0.5)),auVar26,0xe);
  auVar33 = roundps(ZEXT416(uVar16),auVar25,1);
  auVar25 = blendps(ZEXT416((uint)(param_2[1] * (float)local_188._0_4_ + param_2[3] * 0.0 +
                                   param_2[5] + 0.5)),auVar26,0xe);
  auVar44 = roundps(auVar44,auVar25,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  local_23c = fVar43;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
  }
  fVar32 = local_1dc;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = local_1b8._0_4_;
  *(float *)(lVar6 + 4 + lVar18) = local_248;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = local_1dc;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar42;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar33._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar25 = blendps(ZEXT416((uint)(*param_2 * (float)uVar12 + param_2[2] * local_24c + param_2[4] +
                                  0.5)),auVar26,0xe);
  auVar33 = roundps(auVar33,auVar25,1);
  auVar25 = blendps(ZEXT416((uint)(param_2[1] * (float)uVar12 + param_2[3] * local_24c + param_2[5]
                                  + 0.5)),auVar26,0xe);
  auVar25 = roundps(auVar26,auVar25,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    auVar44 = auVar27;
  }
  uVar31 = local_228._4_4_;
  uVar7 = local_228._8_4_;
  uVar8 = local_228._12_4_;
  iVar22 = -(uint)(local_228._0_4_ < (float)local_148._0_4_);
  auVar26._4_12_ = local_228._4_12_;
  auVar26._0_4_ = iVar22;
  fVar43 = (float)local_1d8._0_4_ + (float)local_158._0_4_;
  if (fVar37 <= 1.0) {
    auVar27 = ZEXT416(0x3f800000);
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = local_1b8._0_4_;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1f8._0_4_;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar32;
  *(float *)(lVar6 + 0x14 + lVar18) = local_23c;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar33._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar25._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar28 = ZEXT816(0);
  auVar25 = blendps(ZEXT416((uint)(*param_2 * (float)uVar12 + param_2[2] * 0.0 + param_2[4] + 0.5)),
                    auVar28,0xe);
  auVar33 = roundps(auVar33,auVar25,1);
  auVar25 = blendps(ZEXT416((uint)(param_2[1] * (float)uVar12 + param_2[3] * 0.0 + param_2[5] + 0.5)
                           ),auVar28,0xe);
  auVar44 = roundps(auVar44,auVar25,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  local_1d8._0_4_ = fVar42;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    auVar26._4_4_ = uVar31;
    auVar26._8_4_ = uVar7;
    auVar26._12_4_ = uVar8;
    fVar42 = (float)local_1d8._0_4_;
  }
  fVar37 = local_240;
  auVar39._0_4_ = local_178._0_4_ & auVar26._0_4_;
  auVar39._4_4_ = local_178._4_4_ & auVar26._4_4_;
  auVar39._8_4_ = local_178._8_4_ & auVar26._8_4_;
  auVar39._12_4_ = local_178._12_4_ & auVar26._12_4_;
  auVar30._0_4_ = ~auVar26._0_4_ & local_1c8._0_4_;
  auVar30._4_4_ = ~auVar26._4_4_ & local_1c8._4_4_;
  auVar30._8_4_ = ~auVar26._8_4_ & local_1c8._8_4_;
  auVar30._12_4_ = ~auVar26._12_4_ & local_1c8._12_4_;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = local_240;
  *(float *)(lVar6 + 4 + lVar18) = local_248;
  uVar31 = auVar27._0_4_;
  *(undefined4 *)(lVar6 + 8 + lVar18) = uVar31;
  *(undefined4 *)(lVar6 + 0xc + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar32;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar42;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar33._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar25 = blendps(ZEXT416((uint)(*param_2 * (float)uVar12 + param_2[2] * local_24c + param_2[4] +
                                  0.5)),auVar28,0xe);
  auVar25 = roundps(auVar44,auVar25,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * (float)uVar12 + param_2[3] * local_24c + param_2[5]
                                  + 0.5)),auVar28,0xe);
  auVar44 = roundps(auVar28,auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
  }
  local_228 = auVar30 | auVar39;
  fVar43 = (float)local_168._0_4_ * (1.0 - fVar43);
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = fVar37;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1f8._0_4_;
  *(undefined4 *)(lVar6 + 8 + lVar18) = uVar31;
  *(undefined4 *)(lVar6 + 0xc + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar32;
  *(float *)(lVar6 + 0x14 + lVar18) = local_23c;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar25._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  fVar37 = fVar37 + 1.0;
  fVar32 = (float)local_238._0_4_ / (float)local_198._0_4_;
  auVar33 = ZEXT816(0);
  auVar26 = blendps(ZEXT416((uint)(*param_2 * (float)local_238._0_4_ + param_2[2] * 0.0 + param_2[4]
                                  + 0.5)),auVar33,0xe);
  auVar26 = roundps(auVar44,auVar26,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * (float)local_238._0_4_ + param_2[3] * 0.0 +
                                   param_2[5] + 0.5)),auVar33,0xe);
  auVar44 = roundps(auVar25,auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = fVar37;
  *(float *)(lVar6 + 4 + lVar18) = local_248;
  *(undefined4 *)(lVar6 + 8 + lVar18) = uVar31;
  *(undefined4 *)(lVar6 + 0xc + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar32;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = local_1d8._0_4_;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar26._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar28._4_12_ = local_228._4_12_;
  fVar42 = local_228._0_4_ - local_24c;
  auVar25 = blendps(ZEXT416((uint)(*param_2 * (float)local_238._0_4_ + param_2[2] * local_24c +
                                   param_2[4] + 0.5)),auVar33,0xe);
  auVar25 = roundps(auVar44,auVar25,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * (float)local_238._0_4_ + param_2[3] * local_24c +
                                   param_2[5] + 0.5)),auVar33,0xe);
  auVar44 = roundps(auVar33,auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  fVar36 = (float)local_238._0_4_;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
  }
  fVar23 = local_24c;
  auVar33 = ZEXT416((uint)local_24c);
  auVar28._0_4_ = fVar42 / fVar43;
  uVar15 = -(uint)(ABS(fVar43) <= 1e-08);
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  local_1c8._0_4_ = fVar37;
  *(float *)(lVar6 + lVar18) = fVar37;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1f8._0_4_;
  *(undefined4 *)(lVar6 + 8 + lVar18) = uVar31;
  *(undefined4 *)(lVar6 + 0xc + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar32;
  *(float *)(lVar6 + 0x14 + lVar18) = local_23c;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar25._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar26 = ZEXT816(0);
  auVar44 = blendps(ZEXT416((uint)(*param_2 * fVar36 + param_2[2] * 0.0 + param_2[4] + 0.5)),auVar26
                    ,0xe);
  auVar25 = roundps(auVar25,auVar44,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * fVar36 + param_2[3] * 0.0 + param_2[5] + 0.5)),
                    auVar26,0xe);
  auVar44 = roundps(ZEXT416((uint)fVar37),auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  local_158 = auVar27;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
  }
  auVar27 = local_198;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = (undefined4)local_218;
  *(float *)(lVar6 + 4 + lVar18) = local_248;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar32;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = local_1d8._0_4_;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar25._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar44 = blendps(ZEXT416((uint)(*param_2 * fVar36 + param_2[2] * fVar23 + param_2[4] + 0.5)),
                    auVar26,0xe);
  auVar25 = roundps(auVar28,auVar44,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * fVar36 + param_2[3] * fVar23 + param_2[5] + 0.5)),
                    auVar26,0xe);
  auVar44 = roundps(auVar26,auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = (undefined4)local_218;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1f8._0_4_;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  local_168._0_4_ = fVar32;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar32;
  *(float *)(lVar6 + 0x14 + lVar18) = local_23c;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar25._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  fVar37 = (float)(~uVar15 & (uint)auVar28._0_4_ | uVar15 & 0x3f800000);
  fVar32 = auVar27._0_4_;
  auVar35._4_12_ = auVar27._4_12_;
  auVar35._0_4_ = fVar32 / fVar32;
  auVar27 = ZEXT816(0);
  auVar25 = blendps(ZEXT416((uint)(*param_2 * fVar32 + param_2[2] * 0.0 + param_2[4] + 0.5)),auVar27
                    ,0xe);
  auVar25 = roundps(auVar44,auVar25,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * fVar32 + param_2[3] * 0.0 + param_2[5] + 0.5)),
                    auVar27,0xe);
  auVar44 = roundps(auVar33,auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  uVar12 = local_188._0_4_;
  uVar31 = (undefined4)local_218;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  fVar43 = local_24c;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  uVar7 = local_1c8._0_4_;
  *(undefined4 *)(lVar6 + lVar18) = local_1c8._0_4_;
  *(float *)(lVar6 + 4 + lVar18) = local_248;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = auVar35._0_4_;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = local_1d8._0_4_;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar25._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar44 = blendps(ZEXT416((uint)(*param_2 * fVar32 + param_2[2] * local_24c + param_2[4] + 0.5)),
                    auVar27,0xe);
  auVar25 = roundps(auVar25,auVar44,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * fVar32 + param_2[3] * local_24c + param_2[5] + 0.5))
                    ,auVar27,0xe);
  auVar44 = roundps(auVar27,auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  fVar32 = local_23c;
  if (fVar37 <= 1.0) {
    fVar37 = 1.0;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar7;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1f8._0_4_;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  local_178._0_4_ = auVar35._0_4_;
  *(float *)(lVar6 + 0x10 + lVar18) = auVar35._0_4_;
  *(float *)(lVar6 + 0x14 + lVar18) = local_23c;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar25._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar27 = ZEXT816(0);
  auVar25 = blendps(ZEXT416((uint)(*param_2 * 0.0 + param_2[2] * fVar43 + param_2[4] + 0.5)),auVar27
                    ,0xe);
  auVar25 = roundps(auVar44,auVar25,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * 0.0 + param_2[3] * fVar43 + param_2[5] + 0.5)),
                    auVar27,0xe);
  auVar44 = roundps(auVar35,auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  fVar43 = local_1fc;
  fVar23 = local_248 + 1.0;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = local_240;
  *(float *)(lVar6 + 4 + lVar18) = local_248;
  *(undefined4 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0xc + lVar18) = fVar37;
  *(float *)(lVar6 + 0x10 + lVar18) = local_1fc;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar32;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar25._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  fVar32 = local_228._0_4_;
  fVar42 = fVar32 / local_244;
  auVar25 = blendps(ZEXT416((uint)(*param_2 * 0.0 + param_2[2] * fVar32 + param_2[4] + 0.5)),auVar27
                    ,0xe);
  auVar26 = roundps(auVar25,auVar25,1);
  auVar25 = blendps(ZEXT416((uint)(param_2[1] * 0.0 + param_2[3] * fVar32 + param_2[5] + 0.5)),
                    auVar27,0xe);
  auVar25 = roundps(auVar27,auVar25,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = local_240;
  *(float *)(lVar6 + 4 + lVar18) = fVar23;
  *(undefined4 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0xc + lVar18) = fVar37;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar43;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar42;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar26._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar25._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar26 = ZEXT816(0);
  auVar27 = blendps(ZEXT416((uint)(*param_2 * (float)uVar12 + param_2[2] * local_24c + param_2[4] +
                                  0.5)),auVar26,0xe);
  auVar27 = roundps(auVar25,auVar27,1);
  auVar25 = blendps(ZEXT416((uint)(param_2[1] * (float)uVar12 + param_2[3] * local_24c + param_2[5]
                                  + 0.5)),auVar26,0xe);
  auVar44 = roundps(auVar44,auVar25,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  local_1d8 = ZEXT416((uint)fVar23);
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  auVar25 = local_198;
  fVar43 = local_1dc;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  uVar7 = local_1b8._0_4_;
  *(undefined4 *)(lVar6 + lVar18) = local_1b8._0_4_;
  *(float *)(lVar6 + 4 + lVar18) = local_248;
  *(undefined4 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0xc + lVar18) = fVar37;
  *(float *)(lVar6 + 0x10 + lVar18) = local_1dc;
  *(float *)(lVar6 + 0x14 + lVar18) = local_23c;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar27._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar33 = blendps(ZEXT416((uint)(*param_2 * (float)uVar12 + param_2[2] * local_228._0_4_ +
                                   param_2[4] + 0.5)),auVar26,0xe);
  auVar33 = roundps(auVar27,auVar33,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * (float)uVar12 + param_2[3] * local_228._0_4_ +
                                   param_2[5] + 0.5)),auVar26,0xe);
  auVar27 = roundps(auVar26,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  fVar32 = local_198._0_4_;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar7;
  uVar12 = local_1d8._0_4_;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1d8._0_4_;
  *(undefined4 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0xc + lVar18) = fVar37;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar43;
  local_1f8._0_4_ = fVar42;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar42;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar33._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar27._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar26 = ZEXT816(0);
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar36 + param_2[2] * local_24c + param_2[4] + 0.5)),
                    auVar26,0xe);
  auVar33 = roundps(auVar33,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar36 + param_2[3] * local_24c + param_2[5] + 0.5))
                    ,auVar26,0xe);
  auVar44 = roundps(auVar44,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  fVar43 = local_23c;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar31;
  *(float *)(lVar6 + 4 + lVar18) = local_248;
  *(undefined4 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0xc + lVar18) = fVar37;
  uVar8 = local_168._0_4_;
  *(undefined4 *)(lVar6 + 0x10 + lVar18) = local_168._0_4_;
  *(float *)(lVar6 + 0x14 + lVar18) = local_23c;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar33._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar36 + param_2[2] * local_228._0_4_ + param_2[4] +
                                  0.5)),auVar26,0xe);
  auVar33 = roundps(auVar33,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar36 + param_2[3] * local_228._0_4_ + param_2[5] +
                                  0.5)),auVar26,0xe);
  auVar27 = roundps(auVar26,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  uVar7 = local_1c8._0_4_;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar31;
  *(undefined4 *)(lVar6 + 4 + lVar18) = uVar12;
  *(undefined4 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0xc + lVar18) = fVar37;
  *(undefined4 *)(lVar6 + 0x10 + lVar18) = uVar8;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = local_1f8._0_4_;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar33._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar27._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar26 = ZEXT816(0);
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar32 + local_24c * param_2[2] + param_2[4] + 0.5)),
                    auVar26,0xe);
  auVar33 = roundps(auVar33,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar32 + param_2[3] * local_24c + param_2[5] + 0.5))
                    ,auVar26,0xe);
  auVar44 = roundps(auVar44,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar7;
  *(float *)(lVar6 + 4 + lVar18) = local_248;
  *(undefined4 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0xc + lVar18) = fVar37;
  uVar8 = local_178._0_4_;
  *(undefined4 *)(lVar6 + 0x10 + lVar18) = local_178._0_4_;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar43;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar33._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar32 + param_2[2] * local_228._0_4_ + param_2[4] +
                                  0.5)),auVar26,0xe);
  auVar33 = roundps(auVar33,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar32 + param_2[3] * local_228._0_4_ + param_2[5] +
                                  0.5)),auVar26,0xe);
  auVar27 = roundps(auVar26,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar7;
  *(undefined4 *)(lVar6 + 4 + lVar18) = uVar12;
  *(undefined4 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0xc + lVar18) = fVar37;
  *(undefined4 *)(lVar6 + 0x10 + lVar18) = uVar8;
  uVar7 = local_1f8._0_4_;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = local_1f8._0_4_;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar33._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar27._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar28 = ZEXT816(0);
  auVar27 = blendps(ZEXT416((uint)(*param_2 * 0.0 + param_2[2] * local_228._0_4_ + param_2[4] + 0.5)
                           ),auVar28,0xe);
  auVar26 = roundps(auVar33,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * 0.0 + param_2[3] * local_228._0_4_ + param_2[5] +
                                  0.5)),auVar28,0xe);
  auVar44 = roundps(auVar44,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  fVar37 = local_1fc;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = local_240;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1a8._0_4_;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = local_1fc;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = uVar7;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar26._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  fVar43 = local_244 / local_244;
  auVar44 = blendps(ZEXT416((uint)(*param_2 * 0.0 + param_2[2] * local_244 + param_2[4] + 0.5)),
                    auVar28,0xe);
  auVar27 = roundps(auVar44,auVar44,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * 0.0 + param_2[3] * local_244 + param_2[5] + 0.5)),
                    auVar28,0xe);
  auVar44 = roundps(ZEXT416((uint)local_244),auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  auVar26 = local_188;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = local_240;
  *(undefined4 *)(lVar6 + 4 + lVar18) = uVar12;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar37;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar43;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar27._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  fVar37 = local_188._0_4_;
  auVar33 = ZEXT816(0);
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar37 + param_2[2] * local_228._0_4_ + param_2[4] +
                                  0.5)),auVar33,0xe);
  auVar27 = roundps(auVar44,auVar27,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * fVar37 + param_2[3] * local_228._0_4_ + param_2[5] +
                                  0.5)),auVar33,0xe);
  auVar44 = roundps(auVar28,auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  fVar42 = local_1dc;
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  uVar7 = local_1b8._0_4_;
  *(undefined4 *)(lVar6 + lVar18) = local_1b8._0_4_;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1a8._0_4_;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = local_1dc;
  uVar12 = local_1f8._0_4_;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = local_1f8._0_4_;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar27._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar28 = blendps(ZEXT416((uint)(*param_2 * fVar37 + param_2[2] * local_244 + param_2[4] + 0.5)),
                    auVar33,0xe);
  auVar28 = roundps(auVar27,auVar28,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar37 + param_2[3] * local_244 + param_2[5] + 0.5))
                    ,auVar33,0xe);
  auVar27 = roundps(auVar33,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar7;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1d8._0_4_;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar42;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar43;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar28._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar27._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar33 = ZEXT816(0);
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar37 + param_2[2] * local_228._0_4_ + param_2[4] +
                                  0.5)),auVar33,0xe);
  auVar28 = roundps(auVar28,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar37 + param_2[3] * local_228._0_4_ + param_2[5] +
                                  0.5)),auVar33,0xe);
  auVar44 = roundps(auVar44,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = local_240;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1a8._0_4_;
  uVar7 = local_158._0_4_;
  *(undefined4 *)(lVar6 + 8 + lVar18) = local_158._0_4_;
  *(undefined4 *)(lVar6 + 0xc + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar42;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = uVar12;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar28._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = fVar37 * *param_2 + param_2[2] * local_244 + param_2[4] + 0.5;
  auVar27 = blendps(auVar27,auVar33,0xe);
  auVar26 = roundps(ZEXT416((uint)local_244),auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar37 + param_2[3] * local_244 + param_2[5] + 0.5))
                    ,auVar33,0xe);
  auVar27 = roundps(auVar33,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(float *)(lVar6 + lVar18) = local_240;
  uVar12 = local_1d8._0_4_;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1d8._0_4_;
  *(undefined4 *)(lVar6 + 8 + lVar18) = uVar7;
  *(undefined4 *)(lVar6 + 0xc + lVar18) = 0;
  *(float *)(lVar6 + 0x10 + lVar18) = fVar42;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar43;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar26._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar27._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar33 = ZEXT816(0);
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar36 + param_2[2] * local_228._0_4_ + param_2[4] +
                                  0.5)),auVar33,0xe);
  auVar26 = roundps(auVar26,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar36 + param_2[3] * local_228._0_4_ + param_2[5] +
                                  0.5)),auVar33,0xe);
  auVar44 = roundps(auVar44,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  uVar8 = local_1c8._0_4_;
  *(undefined4 *)(lVar6 + lVar18) = local_1c8._0_4_;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1a8._0_4_;
  *(undefined4 *)(lVar6 + 8 + lVar18) = uVar7;
  *(undefined4 *)(lVar6 + 0xc + lVar18) = 0;
  uVar13 = local_168._0_4_;
  auVar28 = ZEXT416((uint)local_168._0_4_);
  *(undefined4 *)(lVar6 + 0x10 + lVar18) = local_168._0_4_;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = local_1f8._0_4_;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar26._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar36 + param_2[2] * local_244 + param_2[4] + 0.5)),
                    auVar33,0xe);
  auVar26 = roundps(auVar26,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar36 + param_2[3] * local_244 + param_2[5] + 0.5))
                    ,auVar33,0xe);
  auVar27 = roundps(auVar33,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar8;
  *(undefined4 *)(lVar6 + 4 + lVar18) = uVar12;
  *(undefined4 *)(lVar6 + 8 + lVar18) = uVar7;
  *(undefined4 *)(lVar6 + 0xc + lVar18) = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar18) = uVar13;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar43;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar26._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar27._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar33 = ZEXT816(0);
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar36 + param_2[2] * local_228._0_4_ + param_2[4] +
                                  0.5)),auVar33,0xe);
  auVar26 = roundps(auVar26,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar36 + param_2[3] * local_228._0_4_ + param_2[5] +
                                  0.5)),auVar33,0xe);
  auVar44 = roundps(auVar44,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    fVar36 = (float)local_238._0_4_;
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar31;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1a8._0_4_;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar18) = uVar13;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = local_1f8._0_4_;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar26._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar36 + param_2[2] * local_244 + param_2[4] + 0.5)),
                    auVar33,0xe);
  auVar26 = roundps(auVar26,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar36 + param_2[3] * local_244 + param_2[5] + 0.5))
                    ,auVar33,0xe);
  auVar27 = roundps(auVar33,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
    uVar31 = (undefined4)local_218;
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar31;
  *(undefined4 *)(lVar6 + 4 + lVar18) = uVar12;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar18) = uVar13;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar43;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar26._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar27._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar33 = ZEXT816(0);
  auVar27 = blendps(ZEXT416((uint)(*param_2 * fVar32 + param_2[2] * local_228._0_4_ + param_2[4] +
                                  0.5)),auVar33,0xe);
  auVar26 = roundps(auVar26,auVar27,1);
  auVar27 = blendps(ZEXT416((uint)(param_2[1] * fVar32 + param_2[3] * local_228._0_4_ + param_2[5] +
                                  0.5)),auVar33,0xe);
  auVar44 = roundps(auVar44,auVar27,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar8;
  *(undefined4 *)(lVar6 + 4 + lVar18) = local_1a8._0_4_;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  uVar31 = local_178._0_4_;
  *(undefined4 *)(lVar6 + 0x10 + lVar18) = local_178._0_4_;
  *(undefined4 *)(lVar6 + 0x14 + lVar18) = local_1f8._0_4_;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar26._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  auVar44._4_12_ = auVar25._4_12_;
  auVar44._0_4_ = fVar32 * *param_2 + local_244 * param_2[2] + param_2[4] + 0.5;
  auVar44 = blendps(auVar44,auVar33,0xe);
  auVar25 = roundps(auVar28,auVar44,1);
  auVar44 = blendps(ZEXT416((uint)(param_2[1] * fVar32 + param_2[3] * local_244 + param_2[5] + 0.5))
                    ,auVar33,0xe);
  auVar44 = roundps(auVar33,auVar44,1);
  lVar6 = *(longlong *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar6 + 8);
  *(int *)(lVar6 + 8) = iVar5 + 1;
  if (*(int *)(lVar6 + 0xc) == iVar5) {
    FUN_146964c32(lVar6,iVar5);
  }
  lVar6 = **(longlong **)(lVar17 + 0x50);
  lVar18 = (longlong)iVar5 * 0x2c;
  *(undefined4 *)(lVar6 + lVar18) = uVar8;
  *(undefined4 *)(lVar6 + 4 + lVar18) = uVar12;
  *(undefined8 *)(lVar6 + 8 + lVar18) = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar18) = uVar31;
  *(float *)(lVar6 + 0x14 + lVar18) = fVar43;
  *(int *)(lVar6 + 0x18 + lVar18) = auVar25._0_4_;
  *(int *)(lVar6 + 0x1c + lVar18) = auVar44._0_4_;
  *(undefined4 *)(lVar6 + 0x20 + lVar18) = uVar14;
  *(undefined4 *)(lVar6 + 0x24 + lVar18) = 0;
  *(undefined2 *)(lVar6 + 0x28 + lVar18) = uVar19;
  *(undefined2 *)(lVar6 + 0x2a + lVar18) = uVar21;
  *(int *)(lVar17 + 0x74) = *(int *)(lVar17 + 0x74) + 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9751f0) {
    FUN_144b3d300(&DAT_14c9751f0);
    if (DAT_14c9751f0 == -1) {
      FUN_14696b3da();
      atexit((_func_5014 *)&LAB_142876d9b);
      _Init_thread_footer(&DAT_14c9751f0);
    }
  }
  *(undefined8 **)(lVar17 + 0x58) = &DAT_14c9751e0;
  *(undefined4 *)(lVar17 + 0x78) = DAT_14c9751e8;
  *(undefined4 *)(lVar17 + 0x70) = 0;
  if ((local_e0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146957a36 FUN_146957a36 body=9009 status=ok
// SIG undefined FUN_146957a36(void)

void FUN_146957a36(undefined8 *param_1,float *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 uVar13;
  longlong *plVar14;
  undefined2 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined1 local_280;
  undefined1 local_278;
  undefined1 local_270;
  undefined2 local_268;
  float *local_260;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  float local_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  float local_1dc;
  undefined1 local_1d8 [16];
  float local_1bc;
  float local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [16];
  float local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  float local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  ulonglong local_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  fVar23 = param_2[8];
  fVar24 = param_2[9];
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x45);
  fVar19 = param_2[10];
  fVar28 = param_2[0x10];
  if ((*(longlong *)(param_2 + 0x22) == 0) ||
     (plVar14 = *(longlong **)(*(longlong *)(param_2 + 0x22) + 0x10), plVar14 == (longlong *)0x0)) {
    plVar14 = (longlong *)0x0;
    local_248 = 1.0;
    local_240 = 1.0;
    fVar26 = fVar28;
  }
  else {
    uVar9 = (**(code **)*plVar14)(plVar14);
    uVar10 = (**(code **)(*plVar14 + 8))(plVar14);
    local_248 = (float)uVar10;
    local_240 = (float)uVar9;
    fVar26 = param_2[0x10];
  }
  fVar18 = param_2[0x18];
  fVar16 = fVar18;
  if (fVar23 < 0.0) {
    fVar16 = -fVar18;
  }
  fVar31 = param_2[0x19];
  fVar22 = (1.0 / fVar26) * local_248;
  local_1f8 = ZEXT416((uint)fVar22);
  fVar26 = (1.0 / fVar26) * local_240;
  local_198 = fVar31;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  if (fVar24 < 0.0) {
    local_198 = -fVar31;
    uStack_194 = 0x80000000;
    uStack_190 = 0x80000000;
    uStack_18c = 0x80000000;
  }
  fVar17 = param_2[0x1a];
  fVar27 = (float)(~-(uint)(fVar23 < 0.0) & (uint)fVar17 | (uint)-fVar17 & -(uint)(fVar23 < 0.0));
  fVar29 = param_2[0x1b];
  fVar34 = (float)(~-(uint)(fVar24 < 0.0) & (uint)fVar29 | (uint)-fVar29 & -(uint)(fVar24 < 0.0));
  local_168 = ZEXT416((uint)fVar34);
  fVar20 = fVar23 - fVar26 * fVar27;
  fVar33 = ABS(fVar20);
  fVar30 = ABS(fVar26 * fVar16);
  fVar32 = fVar24 - fVar22 * fVar34;
  uVar9 = -(uint)(fVar33 < fVar30);
  fVar34 = fVar23 * 0.5;
  if (fVar30 <= fVar33) {
    fVar34 = fVar26 * fVar16;
  }
  local_238 = ZEXT416((uint)fVar34);
  fVar20 = (float)(~uVar9 & (uint)fVar20 | uVar9 & (uint)(fVar23 * 0.5));
  local_1a8 = ZEXT416((uint)fVar20);
  local_248 = *(float *)((longlong)param_1 + 0x2c) / local_248;
  local_158 = ZEXT416((uint)fVar32);
  fVar32 = ABS(fVar32);
  local_178 = ABS(fVar22 * local_198);
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_174 = 0;
  local_24c = *(float *)((longlong)param_1 + 0x2c) / local_240;
  local_1b8 = fVar24 * 0.5;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  local_244 = local_1b8;
  if (local_178 <= fVar32) {
    local_244 = fVar22 * local_198;
  }
  local_118 = ABS(fVar18) + local_24c;
  local_228 = ZEXT416((uint)local_118);
  local_110 = ABS(fVar31) + local_248;
  local_10c = (1.0 - ABS(fVar29)) + local_248;
  local_114 = (1.0 - ABS(fVar17)) + local_24c;
  local_208 = ZEXT416((uint)local_114);
  fVar26 = fVar26 * (1.0 - (fVar16 + fVar27));
  local_1d8 = ZEXT416((uint)local_110);
  local_108 = 0;
  uStack_100 = 0x3f80000000000000;
  local_f8 = 0;
  uStack_f0 = 0x3f80000000000000;
  local_138 = param_2[0x14];
  fStack_134 = param_2[0x15];
  fStack_130 = param_2[0x16];
  fStack_12c = param_2[0x17];
  local_148 = (ulonglong)(uint)local_10c;
  uStack_140 = 0;
  local_188 = ZEXT416((uint)fVar32);
  local_20c = fVar23;
  local_1dc = fVar24;
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_1411ab38a(&local_138,&local_11c);
  }
  else {
    fVar23 = fStack_12c;
    if (fStack_12c <= 0.0) {
      fVar23 = 0.0;
    }
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
    fVar24 = fStack_130;
    if (fStack_130 <= 0.0) {
      fVar24 = 0.0;
    }
    if (1.0 <= fVar24) {
      fVar24 = 1.0;
    }
    fVar18 = fStack_134;
    if (fStack_134 <= 0.0) {
      fVar18 = 0.0;
    }
    if (1.0 <= fVar18) {
      fVar18 = 1.0;
    }
    fVar16 = local_138;
    if (local_138 <= 0.0) {
      fVar16 = 0.0;
    }
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    local_11c = CONCAT13((char)(int)(fVar23 * 255.0 + 0.5),
                         CONCAT12((char)(int)(fVar16 * 255.0 + 0.5),
                                  CONCAT11((char)(int)(fVar18 * 255.0 + 0.5),
                                           (char)(int)(fVar24 * 255.0 + 0.5))));
  }
  uVar9 = -(uint)(ABS(fVar26) <= 1e-08);
  local_268 = 0x60;
  local_278 = 1;
  local_280 = 2;
  local_288 = plVar14;
  local_270 = uVar2;
  local_260 = param_2;
  lVar11 = FUN_140c7650a(param_1,*param_1,fVar19,&local_118);
  uVar8 = local_11c;
  fVar22 = local_1dc;
  local_23c = 0.0 / local_1dc;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar19 = param_2[2];
  fVar18 = *param_2;
  fVar16 = param_2[5];
  fVar31 = param_2[4];
  fVar29 = 0.0 / local_20c;
  fVar17 = fVar28 * local_20c;
  fVar28 = fVar28 * local_1dc;
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = local_24c;
  *(float *)(lVar4 + 4 + lVar12) = local_248;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar29;
  *(float *)(lVar4 + 0x14 + lVar12) = local_23c;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar18 * 0.0 + fVar19 * 0.0 + fVar31;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * 0.0 + fVar23 * 0.0 + fVar16;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  uVar13 = (undefined2)((uint)(int)ROUND(fVar17 + fVar17 + 0.5) >> 1);
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  uVar15 = (undefined2)((uint)(int)ROUND(fVar28 + fVar28 + 0.5) >> 1);
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar22 = local_244 / fVar22;
  fVar18 = param_2[3] * local_244;
  fVar23 = param_2[1];
  fVar24 = *param_2;
  fVar16 = param_2[2] * local_244;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = local_24c;
  *(undefined4 *)(lVar4 + 4 + lVar12) = local_1d8._0_4_;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar29;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar22;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar24 * 0.0 + fVar16 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar23 * 0.0 + fVar18 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar26 = (float)(~uVar9 & (uint)((fVar20 - fVar34) / fVar26) | uVar9 & 0x3f800000);
  fVar31 = (float)local_238._0_4_ / local_20c;
  fVar23 = param_2[3];
  fVar18 = param_2[1] * (float)local_238._0_4_;
  fVar24 = param_2[2];
  fVar16 = *param_2 * (float)local_238._0_4_;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  uVar25 = local_188._0_4_;
  uVar21 = local_158._0_4_;
  local_240 = fVar22;
  local_1bc = fVar29;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
  }
  fVar22 = local_23c;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = local_228._0_4_;
  *(float *)(lVar4 + 4 + lVar12) = local_248;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar31;
  *(float *)(lVar4 + 0x14 + lVar12) = local_23c;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar16 + fVar24 * 0.0 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar18 + fVar23 * 0.0 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar19 = param_2[3] * local_244;
  fVar16 = param_2[1] * (float)local_238._0_4_;
  fVar18 = param_2[2] * local_244;
  fVar17 = *param_2 * (float)local_238._0_4_;
  fVar23 = param_2[5];
  fVar24 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  fVar28 = (float)local_238._0_4_;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    fVar28 = (float)local_238._0_4_;
  }
  bVar5 = (float)uVar25 < local_178;
  fVar29 = local_198 + (float)local_168._0_4_;
  if (fVar26 <= 1.0) {
    fVar26 = 1.0;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = local_228._0_4_;
  *(undefined4 *)(lVar4 + 4 + lVar12) = local_1d8._0_4_;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar31;
  *(float *)(lVar4 + 0x14 + lVar12) = local_240;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar17 + fVar18 + fVar24;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar16 + fVar19 + fVar23;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar19 = param_2[2];
  fVar18 = *param_2;
  fVar16 = param_2[5];
  fVar17 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  fVar27 = fVar28;
  uVar25 = local_228._0_4_;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    fVar27 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  uVar9 = (uint)local_1b8 & -(uint)bVar5;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = local_24c;
  *(float *)(lVar4 + 4 + lVar12) = local_248;
  *(float *)(lVar4 + 8 + lVar12) = fVar26;
  *(undefined4 *)(lVar4 + 0xc + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar31;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar22;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar18 * fVar28 + fVar19 * 0.0 + fVar17;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * fVar28 + fVar23 * 0.0 + fVar16;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar16 = param_2[3] * local_244;
  fVar23 = param_2[1];
  fVar22 = param_2[2] * local_244;
  fVar24 = *param_2;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  fVar18 = fVar27;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    fVar18 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  fVar34 = (float)(~-(uint)bVar5 & uVar21 | uVar9);
  fVar17 = (float)local_1f8._0_4_ * (1.0 - fVar29);
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = local_24c;
  *(undefined4 *)(lVar4 + 4 + lVar12) = local_1d8._0_4_;
  *(float *)(lVar4 + 8 + lVar12) = fVar26;
  *(undefined4 *)(lVar4 + 0xc + lVar12) = 0;
  local_188._0_4_ = fVar31;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar31;
  *(float *)(lVar4 + 0x14 + lVar12) = local_240;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar24 * fVar27 + fVar22 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar23 * fVar27 + fVar16 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar16 = local_24c + 1.0;
  uVar21 = local_1a8._0_4_;
  fVar29 = (float)local_1a8._0_4_ / local_20c;
  fVar23 = param_2[3];
  fVar31 = param_2[1] * (float)local_1a8._0_4_;
  fVar24 = param_2[2];
  fVar22 = *param_2 * (float)local_1a8._0_4_;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    fVar18 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  fVar27 = fVar34 - local_244;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = fVar16;
  *(float *)(lVar4 + 4 + lVar12) = local_248;
  *(float *)(lVar4 + 8 + lVar12) = fVar26;
  *(undefined4 *)(lVar4 + 0xc + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar29;
  *(float *)(lVar4 + 0x14 + lVar12) = local_23c;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar22 + fVar24 * 0.0 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar31 + fVar23 * 0.0 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar31 = param_2[3] * local_244;
  fVar23 = param_2[1];
  fVar22 = param_2[2] * local_244;
  fVar24 = *param_2;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  local_1f8._0_4_ = fVar16;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    fVar18 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
    fVar16 = (float)local_1f8._0_4_;
  }
  uVar9 = -(uint)(ABS(fVar17) <= 1e-08);
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = fVar16;
  *(undefined4 *)(lVar4 + 4 + lVar12) = local_1d8._0_4_;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  *(float *)(lVar4 + 8 + lVar12) = fVar26;
  *(undefined4 *)(lVar4 + 0xc + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar29;
  *(float *)(lVar4 + 0x14 + lVar12) = local_240;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar24 * (float)uVar21 + fVar22 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar23 * (float)uVar21 + fVar31 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar16 = param_2[5];
  fVar31 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  local_1b8 = fVar26;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    fVar18 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  fVar26 = local_23c;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = local_208._0_4_;
  *(float *)(lVar4 + 4 + lVar12) = local_248;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar29;
  *(float *)(lVar4 + 0x14 + lVar12) = local_23c;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * (float)uVar21 + fVar28 * 0.0 + fVar31;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * (float)uVar21 + fVar23 * 0.0 + fVar16;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar16 = param_2[3] * local_244;
  fVar23 = param_2[1];
  fVar31 = param_2[2] * local_244;
  fVar24 = *param_2;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    fVar18 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  fVar22 = local_20c;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = local_208._0_4_;
  *(undefined4 *)(lVar4 + 4 + lVar12) = local_1d8._0_4_;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar29;
  *(float *)(lVar4 + 0x14 + lVar12) = local_240;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar24 * (float)uVar21 + fVar31 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar23 * (float)uVar21 + fVar16 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar31 = (float)(~uVar9 & (uint)(fVar27 / fVar17) | uVar9 & 0x3f800000);
  fVar27 = local_20c / local_20c;
  fVar23 = param_2[3];
  fVar16 = param_2[1] * local_20c;
  fVar24 = param_2[2];
  fVar17 = *param_2 * local_20c;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  uVar21 = local_208._0_4_;
  local_198 = fVar29;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar18 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  fVar32 = local_1bc;
  fVar20 = local_1dc;
  fVar29 = local_244;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = local_1f8._0_4_;
  *(float *)(lVar4 + 4 + lVar12) = local_248;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar27;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar26;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar17 + fVar24 * 0.0 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar16 + fVar23 * 0.0 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar26 = param_2[3] * local_244;
  fVar23 = param_2[1];
  fVar16 = param_2[2] * local_244;
  fVar24 = *param_2;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar18 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  fVar17 = local_240;
  if (fVar31 <= 1.0) {
    fVar31 = 1.0;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = local_1f8._0_4_;
  *(undefined4 *)(lVar4 + 4 + lVar12) = local_1d8._0_4_;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar27;
  *(float *)(lVar4 + 0x14 + lVar12) = local_240;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar24 * fVar22 + fVar16 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar23 * fVar22 + fVar26 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar16 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  uVar1 = local_1f8._0_4_;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar18 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
    uVar1 = local_1f8._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = local_24c;
  *(float *)(lVar4 + 4 + lVar12) = local_248;
  *(undefined4 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0xc + lVar12) = fVar31;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar32;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar17;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * 0.0 + fVar28 * fVar29 + fVar16;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * 0.0 + fVar23 * fVar29 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar29 = local_248 + 1.0;
  fVar17 = fVar34 / fVar20;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar16 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar18 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
    uVar1 = local_1f8._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = local_24c;
  *(float *)(lVar4 + 4 + lVar12) = fVar29;
  *(undefined4 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0xc + lVar12) = fVar31;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar32;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar17;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * 0.0 + fVar28 * fVar34 + fVar16;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * 0.0 + fVar23 * fVar34 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar16 = param_2[3] * local_244;
  fVar23 = param_2[1];
  fVar32 = param_2[2] * local_244;
  fVar24 = *param_2;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  fVar26 = fVar18;
  local_23c = fVar27;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar26 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
    uVar1 = local_1f8._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar25;
  *(float *)(lVar4 + 4 + lVar12) = local_248;
  *(undefined4 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0xc + lVar12) = fVar31;
  uVar7 = local_188._0_4_;
  *(undefined4 *)(lVar4 + 0x10 + lVar12) = local_188._0_4_;
  *(float *)(lVar4 + 0x14 + lVar12) = local_240;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar24 * fVar18 + fVar32 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar23 * fVar18 + fVar16 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar18 = param_2[5];
  fVar16 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  fVar27 = fVar26;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar27 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
    uVar1 = local_1f8._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar25;
  *(float *)(lVar4 + 4 + lVar12) = fVar29;
  *(undefined4 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0xc + lVar12) = fVar31;
  *(undefined4 *)(lVar4 + 0x10 + lVar12) = uVar7;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar17;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * fVar26 + fVar28 * fVar34 + fVar16;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * fVar26 + fVar23 * fVar34 + fVar18;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar28 = param_2[3] * local_244;
  uVar7 = local_1a8._0_4_;
  fVar26 = param_2[1] * (float)local_1a8._0_4_;
  fVar19 = param_2[2] * local_244;
  fVar18 = *param_2 * (float)local_1a8._0_4_;
  fVar23 = param_2[5];
  fVar24 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar27 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
    uVar1 = local_1f8._0_4_;
  }
  fVar16 = local_198;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar21;
  *(float *)(lVar4 + 4 + lVar12) = local_248;
  *(undefined4 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0xc + lVar12) = fVar31;
  *(float *)(lVar4 + 0x10 + lVar12) = local_198;
  *(float *)(lVar4 + 0x14 + lVar12) = local_240;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar18 + fVar19 + fVar24;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar26 + fVar28 + fVar23;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar27 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
    uVar1 = local_1f8._0_4_;
  }
  fVar32 = local_23c;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar21;
  *(float *)(lVar4 + 4 + lVar12) = fVar29;
  *(undefined4 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0xc + lVar12) = fVar31;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar16;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar17;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * (float)uVar7 + fVar28 * fVar34 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * (float)uVar7 + fVar23 * fVar34 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar26 = param_2[3] * local_244;
  fVar23 = param_2[1];
  fVar18 = local_244 * param_2[2];
  fVar24 = *param_2;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  local_1d8 = ZEXT416((uint)fVar29);
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar27 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
    uVar1 = local_1f8._0_4_;
  }
  fVar16 = local_1bc;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar1;
  *(float *)(lVar4 + 4 + lVar12) = local_248;
  *(undefined4 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0xc + lVar12) = fVar31;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar32;
  *(float *)(lVar4 + 0x14 + lVar12) = local_240;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar24 * fVar22 + fVar18 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar23 * fVar22 + fVar26 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar27 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
    uVar1 = local_1f8._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar1;
  *(undefined4 *)(lVar4 + 4 + lVar12) = local_1d8._0_4_;
  *(undefined4 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0xc + lVar12) = fVar31;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar32;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar17;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * fVar22 + fVar28 * fVar34 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * fVar22 + fVar23 * fVar34 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  uVar7 = (undefined4)local_148;
  uVar1 = local_188._0_4_;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar27 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = local_24c;
  *(undefined4 *)(lVar4 + 4 + lVar12) = uVar7;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar16;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar17;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * 0.0 + fVar28 * fVar34 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * 0.0 + fVar23 * fVar34 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar31 = fVar20 / fVar20;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar27 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = local_24c;
  *(undefined4 *)(lVar4 + 4 + lVar12) = local_1d8._0_4_;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar16;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar31;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * 0.0 + fVar28 * fVar20 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * 0.0 + fVar23 * fVar20 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  fVar16 = fVar27;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar16 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar25;
  *(undefined4 *)(lVar4 + 4 + lVar12) = uVar7;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar12) = uVar1;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar17;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * fVar27 + fVar28 * fVar34 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * fVar27 + fVar23 * fVar34 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  fVar22 = fVar16;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar22 = (float)local_238._0_4_;
    uVar25 = local_228._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar25;
  *(undefined4 *)(lVar4 + 4 + lVar12) = local_1d8._0_4_;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar12) = uVar1;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar31;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * fVar16 + fVar28 * fVar20 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * fVar16 + fVar23 * fVar20 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  fVar16 = fVar22;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
    fVar16 = (float)local_238._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = local_24c;
  *(undefined4 *)(lVar4 + 4 + lVar12) = uVar7;
  *(float *)(lVar4 + 8 + lVar12) = local_1b8;
  *(undefined4 *)(lVar4 + 0xc + lVar12) = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar12) = uVar1;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar17;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * fVar22 + fVar28 * fVar34 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * fVar22 + fVar23 * fVar34 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  local_248 = fVar17;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(float *)(lVar4 + lVar12) = local_24c;
  uVar25 = local_1d8._0_4_;
  *(undefined4 *)(lVar4 + 4 + lVar12) = local_1d8._0_4_;
  *(float *)(lVar4 + 8 + lVar12) = local_1b8;
  *(undefined4 *)(lVar4 + 0xc + lVar12) = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar12) = uVar1;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar31;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar16 * fVar19 + fVar28 * fVar20 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * fVar16 + fVar23 * fVar20 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  uVar1 = local_1a8._0_4_;
  fVar26 = param_2[1] * (float)local_1a8._0_4_;
  fVar24 = param_2[2];
  fVar18 = *param_2 * (float)local_1a8._0_4_;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
  }
  fVar16 = local_198;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  uVar6 = local_1f8._0_4_;
  *(undefined4 *)(lVar4 + lVar12) = local_1f8._0_4_;
  *(undefined4 *)(lVar4 + 4 + lVar12) = uVar7;
  *(float *)(lVar4 + 8 + lVar12) = local_1b8;
  *(undefined4 *)(lVar4 + 0xc + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = local_198;
  *(float *)(lVar4 + 0x14 + lVar12) = local_248;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar18 + fVar24 * fVar34 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar26 + fVar23 * fVar34 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar6;
  *(undefined4 *)(lVar4 + 4 + lVar12) = uVar25;
  *(float *)(lVar4 + 8 + lVar12) = local_1b8;
  *(undefined4 *)(lVar4 + 0xc + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar16;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar31;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * (float)uVar1 + fVar28 * fVar20 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * (float)uVar1 + fVar23 * fVar20 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar21;
  *(undefined4 *)(lVar4 + 4 + lVar12) = uVar7;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar16;
  *(float *)(lVar4 + 0x14 + lVar12) = local_248;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * (float)uVar1 + fVar28 * fVar34 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * (float)uVar1 + fVar23 * fVar34 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_208._0_4_;
  }
  fVar17 = local_20c;
  fVar22 = local_23c;
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar21;
  *(undefined4 *)(lVar4 + 4 + lVar12) = uVar25;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar16;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar31;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar19 * (float)uVar1 + fVar28 * fVar20 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * (float)uVar1 + fVar23 * fVar20 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar26 = param_2[1] * local_20c;
  fVar24 = param_2[2];
  fVar18 = *param_2 * local_20c;
  fVar28 = param_2[5];
  fVar19 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  uVar21 = local_1f8._0_4_;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_1f8._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar21;
  *(undefined4 *)(lVar4 + 4 + lVar12) = uVar7;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar22;
  *(float *)(lVar4 + 0x14 + lVar12) = local_248;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar18 + fVar24 * fVar34 + fVar19;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar26 + fVar23 * fVar34 + fVar28;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  fVar23 = param_2[3];
  fVar24 = param_2[1];
  fVar28 = param_2[2];
  fVar19 = *param_2;
  fVar26 = param_2[5];
  fVar18 = param_2[4];
  lVar4 = *(longlong *)(lVar11 + 0x50);
  iVar3 = *(int *)(lVar4 + 8);
  *(int *)(lVar4 + 8) = iVar3 + 1;
  if (*(int *)(lVar4 + 0xc) == iVar3) {
    FUN_146964c32(lVar4,iVar3);
    uVar21 = local_1f8._0_4_;
  }
  lVar4 = **(longlong **)(lVar11 + 0x50);
  lVar12 = (longlong)iVar3 * 0x2c;
  *(undefined4 *)(lVar4 + lVar12) = uVar21;
  *(undefined4 *)(lVar4 + 4 + lVar12) = uVar25;
  *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
  *(float *)(lVar4 + 0x10 + lVar12) = fVar22;
  *(float *)(lVar4 + 0x14 + lVar12) = fVar31;
  *(float *)(lVar4 + 0x18 + lVar12) = fVar17 * fVar19 + fVar20 * fVar28 + fVar18;
  *(float *)(lVar4 + 0x1c + lVar12) = fVar24 * fVar17 + fVar23 * fVar20 + fVar26;
  *(undefined4 *)(lVar4 + 0x20 + lVar12) = uVar8;
  *(undefined4 *)(lVar4 + 0x24 + lVar12) = 0;
  *(undefined2 *)(lVar4 + 0x28 + lVar12) = uVar13;
  *(undefined2 *)(lVar4 + 0x2a + lVar12) = uVar15;
  *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c975208) {
    FUN_144b3d300(&DAT_14c975208);
    if (DAT_14c975208 == -1) {
      FUN_14696bc0e();
      atexit((_func_5014 *)&LAB_142876dac);
      _Init_thread_footer(&DAT_14c975208);
    }
  }
  *(undefined8 **)(lVar11 + 0x58) = &DAT_14c9751f8;
  *(undefined4 *)(lVar11 + 0x78) = DAT_14c975200;
  *(undefined4 *)(lVar11 + 0x70) = 0;
  if ((local_e0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146959d68 FUN_146959d68 body=1157 status=ok
// SIG undefined FUN_146959d68(void)

void FUN_146959d68(longlong param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong *plVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_138 [32];
  float local_118;
  undefined4 local_110;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined8 local_f8;
  float *pfStack_f0;
  float *local_e8;
  int *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 *local_c8;
  float *local_c0;
  float local_b8;
  undefined1 local_b1;
  int local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  fVar10 = param_2[0x14];
  fVar8 = param_2[0x15];
  local_f8 = *(undefined8 *)(param_2 + 0x14);
  fVar12 = param_2[0x16];
  fVar9 = param_2[0x17];
  pfStack_f0 = *(float **)(param_2 + 0x16);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1411ab38a(&local_f8,&local_ac);
  }
  else {
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    local_ac = (undefined1)(int)(fVar12 * 255.0 + 0.5);
    local_ab = (undefined1)(int)(fVar8 * 255.0 + 0.5);
    local_aa = (undefined1)(int)(fVar10 * 255.0 + 0.5);
    local_a9 = (undefined1)(int)(fVar9 * 255.0 + 0.5);
  }
  local_b0 = (int)param_2[0x32] + -1;
  if (param_2[0x32] == 0.0) {
    local_b0 = 0;
  }
  local_b1 = *(undefined1 *)((longlong)param_2 + 0x45);
  fVar10 = param_2[10];
  local_b8 = param_2[0x10];
  fVar8 = 1.0 / local_b8;
  local_a4 = param_2[3] * 0.0;
  local_9c = param_2[1] * 0.0;
  local_a8 = param_2[2] * 0.0;
  fVar12 = *param_2 * 0.0;
  local_a0 = param_2[2] * fVar8 + fVar12;
  local_94 = local_9c + local_a4 + param_2[5];
  local_98 = fVar12 + local_a8 + param_2[4];
  auVar13 = ZEXT416((uint)local_98);
  local_9c = local_9c + fVar8 * param_2[3];
  local_a4 = fVar8 * param_2[1] + local_a4;
  local_a8 = fVar8 * *param_2 + local_a8;
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar7 = puVar3[2];
    plVar6 = (longlong *)puVar3[3];
  }
  else {
    uVar7 = *puVar3;
    plVar6 = (longlong *)puVar3[1];
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),&local_f8);
  pfVar5 = pfStack_f0;
  uVar4 = local_f8;
  if (pfStack_f0 != (float *)0x0) {
    LOCK();
    plVar6 = (longlong *)((longlong)pfStack_f0 + 8);
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (*(code *)**(undefined8 **)pfStack_f0)(pfStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)pfVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*(longlong *)pfVar5 + 0x10))(pfVar5);
      }
    }
  }
  local_e8 = &local_b8;
  local_e0 = &local_b0;
  local_d8 = uVar4;
  local_c8 = &local_b1;
  local_c0 = &local_a8;
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  local_118 = fVar10;
  local_f8 = uVar7;
  pfStack_f0 = param_2;
  local_d0 = param_1;
  if ((int)param_2[0x1c] < 1) {
    local_110 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x1e);
    auVar13 = roundps(auVar13,ZEXT416((uint)((float)(int)param_2[0x1c] * local_b8 + 0.5)),1);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      FUN_1411ab38a(param_2 + 0x20,&local_fc);
    }
    else {
      fVar8 = param_2[0x23];
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      fVar12 = param_2[0x22];
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      fVar9 = param_2[0x20];
      fVar11 = param_2[0x21];
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      local_fc = (undefined1)(int)(fVar12 * 255.0 + 0.5);
      local_fb = (undefined1)(int)(fVar11 * 255.0 + 0.5);
      local_fa = (undefined1)(int)(fVar9 * 255.0 + 0.5);
      local_f9 = (undefined1)(int)(fVar8 * 255.0 + 0.5);
    }
    local_110 = auVar13._0_4_;
    FUN_14696c442(&local_f8,param_2 + 0x1c,&local_fc,uVar7);
    local_118 = (float)((int)fVar10 + 1);
    local_110 = auVar13._0_4_;
  }
  FUN_14696c442(&local_f8,&DAT_14c96b1c0,&local_ac,uVar4);
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695a1ee FUN_14695a1ee body=1157 status=ok
// SIG undefined FUN_14695a1ee(void)

void FUN_14695a1ee(longlong param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong *plVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_138 [32];
  float local_118;
  undefined4 local_110;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined8 local_f8;
  float *pfStack_f0;
  float *local_e8;
  int *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 *local_c8;
  float *local_c0;
  float local_b8;
  undefined1 local_b1;
  int local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  fVar10 = param_2[0x14];
  fVar8 = param_2[0x15];
  local_f8 = *(undefined8 *)(param_2 + 0x14);
  fVar12 = param_2[0x16];
  fVar9 = param_2[0x17];
  pfStack_f0 = *(float **)(param_2 + 0x16);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1411ab38a(&local_f8,&local_ac);
  }
  else {
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    local_ac = (undefined1)(int)(fVar12 * 255.0 + 0.5);
    local_ab = (undefined1)(int)(fVar8 * 255.0 + 0.5);
    local_aa = (undefined1)(int)(fVar10 * 255.0 + 0.5);
    local_a9 = (undefined1)(int)(fVar9 * 255.0 + 0.5);
  }
  local_b0 = (int)param_2[0x32] + -1;
  if (param_2[0x32] == 0.0) {
    local_b0 = 0;
  }
  local_b1 = *(undefined1 *)((longlong)param_2 + 0x45);
  fVar10 = param_2[10];
  local_b8 = param_2[0x10];
  fVar8 = 1.0 / local_b8;
  local_a4 = param_2[3] * 0.0;
  local_9c = param_2[1] * 0.0;
  local_a8 = param_2[2] * 0.0;
  fVar12 = *param_2 * 0.0;
  local_a0 = param_2[2] * fVar8 + fVar12;
  local_94 = local_9c + local_a4 + param_2[5];
  local_98 = fVar12 + local_a8 + param_2[4];
  auVar13 = ZEXT416((uint)local_98);
  local_9c = local_9c + fVar8 * param_2[3];
  local_a4 = fVar8 * param_2[1] + local_a4;
  local_a8 = fVar8 * *param_2 + local_a8;
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar7 = puVar3[2];
    plVar6 = (longlong *)puVar3[3];
  }
  else {
    uVar7 = *puVar3;
    plVar6 = (longlong *)puVar3[1];
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),&local_f8);
  pfVar5 = pfStack_f0;
  uVar4 = local_f8;
  if (pfStack_f0 != (float *)0x0) {
    LOCK();
    plVar6 = (longlong *)((longlong)pfStack_f0 + 8);
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (*(code *)**(undefined8 **)pfStack_f0)(pfStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)pfVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*(longlong *)pfVar5 + 0x10))(pfVar5);
      }
    }
  }
  local_e8 = &local_b8;
  local_e0 = &local_b0;
  local_d8 = uVar4;
  local_c8 = &local_b1;
  local_c0 = &local_a8;
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  local_118 = fVar10;
  local_f8 = uVar7;
  pfStack_f0 = param_2;
  local_d0 = param_1;
  if ((int)param_2[0x1c] < 1) {
    local_110 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x1e);
    auVar13 = roundps(auVar13,ZEXT416((uint)((float)(int)param_2[0x1c] * local_b8 + 0.5)),1);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      FUN_1411ab38a(param_2 + 0x20,&local_fc);
    }
    else {
      fVar8 = param_2[0x23];
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      fVar12 = param_2[0x22];
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      fVar9 = param_2[0x20];
      fVar11 = param_2[0x21];
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      local_fc = (undefined1)(int)(fVar12 * 255.0 + 0.5);
      local_fb = (undefined1)(int)(fVar11 * 255.0 + 0.5);
      local_fa = (undefined1)(int)(fVar9 * 255.0 + 0.5);
      local_f9 = (undefined1)(int)(fVar8 * 255.0 + 0.5);
    }
    local_110 = auVar13._0_4_;
    FUN_14696d3ce(&local_f8,param_2 + 0x1c,&local_fc,uVar7);
    local_118 = (float)((int)fVar10 + 1);
    local_110 = auVar13._0_4_;
  }
  FUN_14696d3ce(&local_f8,&DAT_14c96b1c0,&local_ac,uVar4);
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695a674 FUN_14695a674 body=1235 status=ok
// SIG undefined FUN_14695a674(void)

void FUN_14695a674(longlong param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_16c;
  undefined1 local_16b;
  undefined1 local_16a;
  undefined1 local_169;
  longlong *local_168;
  float *local_160;
  longlong *local_158;
  undefined8 *local_150;
  longlong local_148;
  float *local_140;
  longlong local_138;
  undefined8 uStack_130;
  float *local_118;
  undefined8 local_110;
  float *local_108;
  float local_100;
  float local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined8 local_c8;
  longlong local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar4 = *(longlong *)(param_2 + 0x18);
  local_c8 = *(undefined8 *)(param_2 + 0x20);
  fVar10 = param_2[0x14];
  fVar9 = param_2[0x15];
  local_138 = *(longlong *)(param_2 + 0x14);
  fVar14 = param_2[0x16];
  fVar12 = param_2[0x17];
  uStack_130 = *(undefined8 *)(param_2 + 0x16);
  local_c0 = lVar4;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1411ab38a(&local_138,&local_cc);
  }
  else {
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if (1.0 <= fVar14) {
      fVar14 = 1.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    local_cc = (undefined1)(int)(fVar14 * 255.0 + 0.5);
    local_cb = (undefined1)(int)(fVar9 * 255.0 + 0.5);
    local_ca = (undefined1)(int)(fVar10 * 255.0 + 0.5);
    local_c9 = (undefined1)(int)(fVar12 * 255.0 + 0.5);
  }
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar8 = puVar5[2];
    plVar7 = (longlong *)puVar5[3];
  }
  else {
    uVar8 = *puVar5;
    plVar7 = (longlong *)puVar5[1];
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_f0 = 0;
  local_e8 = 0xffffffff;
  local_138 = local_c0;
  local_100 = (float)(int)*(short *)(local_c0 + 0x10);
  local_fc = (float)*(ushort *)(local_c0 + 0x12);
  uStack_130 = local_c8;
  local_118 = param_2;
  local_110 = uVar8;
  if (*(ushort *)(local_c0 + 0x12) != 0) {
    fVar10 = param_2[10];
    fVar9 = 1.0 / param_2[0x10];
    local_b4 = param_2[3] * 0.0;
    local_ac = param_2[1] * 0.0;
    local_b8 = param_2[2] * 0.0;
    fVar14 = *param_2 * 0.0;
    local_b0 = param_2[2] * fVar9 + fVar14;
    local_a4 = local_ac + local_b4 + param_2[5];
    local_a8 = fVar14 + local_b8 + param_2[4];
    local_ac = local_ac + fVar9 * param_2[3];
    local_b4 = fVar9 * param_2[1] + local_b4;
    local_b8 = fVar9 * *param_2 + local_b8;
    local_140 = &local_b8;
    local_168 = &local_138;
    local_158 = &local_c0;
    local_150 = &local_c8;
    uVar8 = *(undefined8 *)(local_c0 + 0x18);
    iVar3 = *(int *)(lVar4 + 0x20);
    local_1a8 = fVar10;
    local_160 = param_2;
    local_148 = param_1;
    local_108 = local_140;
    if (iVar3 < 1) {
      local_198 = 0xffffffff;
      local_1a0 = 0;
    }
    else {
      auVar13 = roundps(ZEXT416((uint)local_b4),ZEXT416((uint)(param_2[0x10] * (float)iVar3 + 0.5)),
                        1);
      uVar6 = *(undefined8 *)(lVar4 + 0x28);
      local_188 = param_2[0x1c];
      fStack_184 = param_2[0x1d];
      fStack_180 = param_2[0x1e];
      fStack_17c = param_2[0x1f];
      if (*(char *)(param_1 + 0x30) == '\x01') {
        FUN_1411ab38a(&local_188,&local_16c);
      }
      else {
        fVar9 = fStack_17c;
        if (fStack_17c <= 0.0) {
          fVar9 = 0.0;
        }
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
        fVar14 = fStack_180;
        if (fStack_180 <= 0.0) {
          fVar14 = 0.0;
        }
        if (1.0 <= fVar14) {
          fVar14 = 1.0;
        }
        fVar12 = fStack_184;
        if (fStack_184 <= 0.0) {
          fVar12 = 0.0;
        }
        if (1.0 <= fVar12) {
          fVar12 = 1.0;
        }
        fVar11 = local_188;
        if (local_188 <= 0.0) {
          fVar11 = 0.0;
        }
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
        local_16c = (undefined1)(int)(fVar14 * 255.0 + 0.5);
        local_16b = (undefined1)(int)(fVar12 * 255.0 + 0.5);
        local_16a = (undefined1)(int)(fVar11 * 255.0 + 0.5);
        local_169 = (undefined1)(int)(fVar9 * 255.0 + 0.5);
      }
      local_198 = 0xffffffff;
      local_1a0 = auVar13._0_4_;
      local_198 = FUN_14696e256(&local_168,(int *)(lVar4 + 0x20),&local_16c,uVar6);
      local_1a8 = (float)((int)fVar10 + 1);
      local_1a0 = auVar13._0_4_;
    }
    FUN_14696e256(&local_168,&DAT_14c96b1c0,&local_cc,uVar8);
  }
  if ((local_a0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695ab48 FUN_14695ab48 body=1645 status=ok
// SIG undefined FUN_14695ab48(void)

void FUN_14695ab48(undefined8 *param_1,float *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined2 local_f8;
  float *local_f0;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_d8 = *(undefined8 *)(param_2 + 0x14);
  uVar4 = *(undefined8 *)(param_2 + 0x16);
  if (*(char *)(param_1 + 6) == '\x01') {
    uStack_d0 = uVar4;
    FUN_1411ab38a(&local_d8,&local_a4);
  }
  else {
    uStack_d0._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    fVar8 = 0.0;
    if (uStack_d0._4_4_ <= 0.0) {
      uStack_d0._4_4_ = fVar8;
    }
    fVar11 = 1.0;
    if (1.0 <= uStack_d0._4_4_) {
      uStack_d0._4_4_ = fVar11;
    }
    uStack_d0._0_4_ = (float)uVar4;
    if ((float)uStack_d0 <= 0.0) {
      uStack_d0._0_4_ = fVar8;
    }
    if (1.0 <= (float)uStack_d0) {
      uStack_d0._0_4_ = fVar11;
    }
    local_d8._4_4_ = (float)((ulonglong)local_d8 >> 0x20);
    if (local_d8._4_4_ <= 0.0) {
      local_d8._4_4_ = fVar8;
    }
    if (1.0 <= local_d8._4_4_) {
      local_d8._4_4_ = fVar11;
    }
    if ((float)local_d8 <= 0.0) {
      local_d8._0_4_ = fVar8;
    }
    if (1.0 <= (float)local_d8) {
      local_d8._0_4_ = 1.0;
    }
    local_a4 = CONCAT13((char)(int)(uStack_d0._4_4_ * 255.0 + 0.5),
                        CONCAT12((char)(int)((float)local_d8 * 255.0 + 0.5),
                                 CONCAT11((char)(int)(local_d8._4_4_ * 255.0 + 0.5),
                                          (char)(int)((float)uStack_d0 * 255.0 + 0.5))));
  }
  fVar8 = param_2[8];
  fVar11 = param_2[9];
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_110 = 2;
  local_118 = 0;
  local_f0 = param_2;
  lVar6 = FUN_140c7650a(param_1,*param_1,param_2[10],&local_d8);
  local_d8 = *(undefined8 *)(param_2 + 0x14);
  uVar4 = *(undefined8 *)(param_2 + 0x16);
  uStack_d0 = uVar4;
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_1411ab38a(&local_d8,&local_dc);
  }
  else {
    uStack_d0._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    fVar9 = 0.0;
    if (uStack_d0._4_4_ <= 0.0) {
      uStack_d0._4_4_ = fVar9;
    }
    fVar12 = 1.0;
    if (1.0 <= uStack_d0._4_4_) {
      uStack_d0._4_4_ = fVar12;
    }
    uStack_d0._0_4_ = (float)uVar4;
    if ((float)uStack_d0 <= 0.0) {
      uStack_d0._0_4_ = fVar9;
    }
    if (1.0 <= (float)uStack_d0) {
      uStack_d0._0_4_ = fVar12;
    }
    local_d8._4_4_ = (float)((ulonglong)local_d8 >> 0x20);
    if (local_d8._4_4_ <= 0.0) {
      local_d8._4_4_ = fVar9;
    }
    if (1.0 <= local_d8._4_4_) {
      local_d8._4_4_ = fVar12;
    }
    if ((float)local_d8 <= 0.0) {
      local_d8._0_4_ = fVar9;
    }
    if (1.0 <= (float)local_d8) {
      local_d8._0_4_ = 1.0;
    }
    local_dc = (undefined1)(int)((float)uStack_d0 * 255.0 + 0.5);
    local_db = (undefined1)(int)(local_d8._4_4_ * 255.0 + 0.5);
    local_da = (undefined1)(int)((float)local_d8 * 255.0 + 0.5);
    local_d9 = (undefined1)(int)(uStack_d0._4_4_ * 255.0 + 0.5);
  }
  uVar5 = local_a4;
  auVar14 = ZEXT816(0);
  auVar10 = blendps(ZEXT416((uint)((float)DAT_14c84635c * *param_2 +
                                   DAT_14c84635c._4_4_ * param_2[2] + param_2[4] + 0.5)),auVar14,0xe
                   );
  auVar13 = roundps(unaff_XMM9,auVar10,1);
  auVar10 = blendps(ZEXT416((uint)(param_2[1] * (float)DAT_14c84635c +
                                   param_2[3] * DAT_14c84635c._4_4_ + param_2[5] + 0.5)),auVar14,0xe
                   );
  auVar10 = roundps(unaff_XMM11,auVar10,1);
  lVar2 = *(longlong *)(lVar6 + 0x50);
  iVar1 = *(int *)(lVar2 + 8);
  *(int *)(lVar2 + 8) = iVar1 + 1;
  if (*(int *)(lVar2 + 0xc) == iVar1) {
    FUN_146964c32(lVar2,iVar1);
  }
  lVar2 = **(longlong **)(lVar6 + 0x50);
  lVar7 = (longlong)iVar1 * 0x2c;
  *(undefined8 *)(lVar2 + lVar7) = 0;
  ((undefined8 *)(lVar2 + lVar7))[1] = &DAT_3f8000003f800000;
  *(int *)(lVar2 + 0x18 + lVar7) = auVar13._0_4_;
  *(int *)(lVar2 + 0x1c + lVar7) = auVar10._0_4_;
  *(undefined4 *)(lVar2 + 0x20 + lVar7) = uVar5;
  *(undefined4 *)(lVar2 + 0x24 + lVar7) = 0;
  *(int *)(lVar6 + 0x74) = *(int *)(lVar6 + 0x74) + 1;
  auVar13 = blendps(ZEXT416((uint)(*param_2 * fVar8 + param_2[2] * 0.0 + param_2[4] + 0.5)),auVar14,
                    0xe);
  auVar13 = roundps(auVar10,auVar13,1);
  auVar10 = blendps(ZEXT416((uint)(param_2[1] * fVar8 + param_2[3] * 0.0 + param_2[5] + 0.5)),
                    auVar14,0xe);
  auVar10 = roundps(auVar14,auVar10,1);
  lVar2 = *(longlong *)(lVar6 + 0x50);
  iVar1 = *(int *)(lVar2 + 8);
  *(int *)(lVar2 + 8) = iVar1 + 1;
  if (*(int *)(lVar2 + 0xc) == iVar1) {
    FUN_146964c32(lVar2,iVar1);
  }
  lVar2 = **(longlong **)(lVar6 + 0x50);
  lVar7 = (longlong)iVar1 * 0x2c;
  *(undefined8 *)(lVar2 + lVar7) = 0x3f800000;
  ((undefined8 *)(lVar2 + lVar7))[1] = &DAT_3f8000003f800000;
  *(int *)(lVar2 + 0x18 + lVar7) = auVar13._0_4_;
  *(int *)(lVar2 + 0x1c + lVar7) = auVar10._0_4_;
  *(undefined4 *)(lVar2 + 0x20 + lVar7) = uVar5;
  *(undefined4 *)(lVar2 + 0x24 + lVar7) = 0;
  *(int *)(lVar6 + 0x74) = *(int *)(lVar6 + 0x74) + 1;
  auVar15 = ZEXT816(0);
  auVar10 = blendps(ZEXT416((uint)(*param_2 * 0.0 + param_2[2] * fVar11 + param_2[4] + 0.5)),auVar15
                    ,0xe);
  auVar14 = roundps(auVar10,auVar10,1);
  auVar10 = blendps(ZEXT416((uint)(param_2[1] * 0.0 + param_2[3] * fVar11 + param_2[5] + 0.5)),
                    auVar15,0xe);
  auVar10 = roundps(auVar13,auVar10,1);
  lVar2 = *(longlong *)(lVar6 + 0x50);
  iVar1 = *(int *)(lVar2 + 8);
  *(int *)(lVar2 + 8) = iVar1 + 1;
  if (*(int *)(lVar2 + 0xc) == iVar1) {
    FUN_146964c32(lVar2,iVar1);
  }
  lVar2 = **(longlong **)(lVar6 + 0x50);
  lVar7 = (longlong)iVar1 * 0x2c;
  *(undefined8 *)(lVar2 + lVar7) = 0x3f80000000000000;
  ((undefined8 *)(lVar2 + lVar7))[1] = &DAT_3f8000003f800000;
  *(int *)(lVar2 + 0x18 + lVar7) = auVar14._0_4_;
  *(int *)(lVar2 + 0x1c + lVar7) = auVar10._0_4_;
  *(undefined4 *)(lVar2 + 0x20 + lVar7) = uVar5;
  *(undefined4 *)(lVar2 + 0x24 + lVar7) = 0;
  *(int *)(lVar6 + 0x74) = *(int *)(lVar6 + 0x74) + 1;
  auVar10 = blendps(ZEXT416((uint)(fVar8 * *param_2 + fVar11 * param_2[2] + param_2[4] + 0.5)),
                    auVar15,0xe);
  auVar13 = roundps(auVar10,auVar10,1);
  auVar10 = blendps(ZEXT416((uint)(param_2[1] * fVar8 + param_2[3] * fVar11 + param_2[5] + 0.5)),
                    auVar15,0xe);
  auVar10 = roundps(ZEXT416((uint)(fVar11 * param_2[2])),auVar10,1);
  lVar2 = *(longlong *)(lVar6 + 0x50);
  iVar1 = *(int *)(lVar2 + 8);
  *(int *)(lVar2 + 8) = iVar1 + 1;
  if (*(int *)(lVar2 + 0xc) == iVar1) {
    FUN_146964c32(lVar2,iVar1);
  }
  lVar2 = **(longlong **)(lVar6 + 0x50);
  lVar7 = (longlong)iVar1 * 0x2c;
  *(undefined8 *)(lVar2 + lVar7) = &DAT_3f8000003f800000;
  ((undefined8 *)(lVar2 + lVar7))[1] = &DAT_3f8000003f800000;
  *(int *)(lVar2 + 0x18 + lVar7) = auVar13._0_4_;
  *(int *)(lVar2 + 0x1c + lVar7) = auVar10._0_4_;
  *(undefined4 *)(lVar2 + 0x20 + lVar7) = uVar5;
  *(undefined4 *)(lVar2 + 0x24 + lVar7) = 0;
  *(int *)(lVar6 + 0x74) = *(int *)(lVar6 + 0x74) + 1;
  plVar3 = *(longlong **)(lVar6 + 0x58);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar3,iVar1);
  }
  *(undefined4 *)(*plVar3 + (longlong)iVar1 * 4) = 0;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  plVar3 = *(longlong **)(lVar6 + 0x58);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar3,iVar1);
  }
  *(undefined4 *)(*plVar3 + (longlong)iVar1 * 4) = 1;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  plVar3 = *(longlong **)(lVar6 + 0x58);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar3,iVar1);
  }
  *(undefined4 *)(*plVar3 + (longlong)iVar1 * 4) = 2;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  plVar3 = *(longlong **)(lVar6 + 0x58);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar3,iVar1);
  }
  *(undefined4 *)(*plVar3 + (longlong)iVar1 * 4) = 2;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  plVar3 = *(longlong **)(lVar6 + 0x58);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar3,iVar1);
  }
  *(undefined4 *)(*plVar3 + (longlong)iVar1 * 4) = 1;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  plVar3 = *(longlong **)(lVar6 + 0x58);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar3,iVar1);
  }
  *(undefined4 *)(*plVar3 + (longlong)iVar1 * 4) = 3;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695b1b6 FUN_14695b1b6 body=1484 status=ok
// SIG undefined FUN_14695b1b6(void)

void FUN_14695b1b6(undefined8 *param_1,float *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined2 local_e8;
  float *local_e0;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  fVar10 = param_2[0x14];
  fVar12 = param_2[0x15];
  local_c8 = *(undefined8 *)(param_2 + 0x14);
  fVar11 = param_2[0x16];
  fVar13 = param_2[0x17];
  uStack_c0 = *(undefined8 *)(param_2 + 0x16);
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_1411ab38a(&local_c8,&local_94);
  }
  else {
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    local_94 = CONCAT13((char)(int)(fVar13 * 255.0 + 0.5),
                        CONCAT12((char)(int)(fVar10 * 255.0 + 0.5),
                                 CONCAT11((char)(int)(fVar12 * 255.0 + 0.5),
                                          (char)(int)(fVar11 * 255.0 + 0.5))));
  }
  fVar10 = param_2[8];
  fVar12 = param_2[9];
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_100 = 2;
  local_108 = 0;
  local_e0 = param_2;
  lVar6 = FUN_140c7650a(param_1,*param_1,param_2[10],&local_c8);
  fVar11 = param_2[0x14];
  fVar13 = param_2[0x15];
  local_c8 = *(undefined8 *)(param_2 + 0x14);
  fVar8 = param_2[0x16];
  fVar9 = param_2[0x17];
  uStack_c0 = *(undefined8 *)(param_2 + 0x16);
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_1411ab38a(&local_c8,&local_cc);
  }
  else {
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    local_cc = (undefined1)(int)(fVar8 * 255.0 + 0.5);
    local_cb = (undefined1)(int)(fVar13 * 255.0 + 0.5);
    local_ca = (undefined1)(int)(fVar11 * 255.0 + 0.5);
    local_c9 = (undefined1)(int)(fVar9 * 255.0 + 0.5);
  }
  uVar5 = local_94;
  fVar9 = param_2[3] * DAT_14c84635c._4_4_;
  fVar15 = param_2[1] * (float)DAT_14c84635c;
  fVar8 = DAT_14c84635c._4_4_ * param_2[2];
  fVar14 = (float)DAT_14c84635c * *param_2;
  fVar11 = param_2[5];
  fVar13 = param_2[4];
  lVar3 = *(longlong *)(lVar6 + 0x50);
  iVar2 = *(int *)(lVar3 + 8);
  *(int *)(lVar3 + 8) = iVar2 + 1;
  if (*(int *)(lVar3 + 0xc) == iVar2) {
    FUN_146964c32(lVar3,iVar2);
  }
  lVar3 = **(longlong **)(lVar6 + 0x50);
  lVar7 = (longlong)iVar2 * 0x2c;
  *(undefined8 *)(lVar3 + lVar7) = 0;
  ((undefined8 *)(lVar3 + lVar7))[1] = &DAT_3f8000003f800000;
  *(float *)(lVar3 + 0x18 + lVar7) = fVar14 + fVar8 + fVar13;
  *(float *)(lVar3 + 0x1c + lVar7) = fVar15 + fVar9 + fVar11;
  *(undefined4 *)(lVar3 + 0x20 + lVar7) = uVar5;
  *(undefined4 *)(lVar3 + 0x24 + lVar7) = 0;
  *(int *)(lVar6 + 0x74) = *(int *)(lVar6 + 0x74) + 1;
  fVar11 = param_2[3];
  fVar13 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = *param_2;
  fVar14 = param_2[5];
  fVar15 = param_2[4];
  lVar3 = *(longlong *)(lVar6 + 0x50);
  iVar2 = *(int *)(lVar3 + 8);
  *(int *)(lVar3 + 8) = iVar2 + 1;
  if (*(int *)(lVar3 + 0xc) == iVar2) {
    FUN_146964c32(lVar3,iVar2);
  }
  lVar3 = **(longlong **)(lVar6 + 0x50);
  lVar7 = (longlong)iVar2 * 0x2c;
  *(undefined8 *)(lVar3 + lVar7) = 0x3f800000;
  ((undefined8 *)(lVar3 + lVar7))[1] = &DAT_3f8000003f800000;
  *(float *)(lVar3 + 0x18 + lVar7) = fVar9 * fVar10 + fVar8 * 0.0 + fVar15;
  *(float *)(lVar3 + 0x1c + lVar7) = fVar13 * fVar10 + fVar11 * 0.0 + fVar14;
  *(undefined4 *)(lVar3 + 0x20 + lVar7) = uVar5;
  *(undefined4 *)(lVar3 + 0x24 + lVar7) = 0;
  *(int *)(lVar6 + 0x74) = *(int *)(lVar6 + 0x74) + 1;
  fVar11 = param_2[3];
  fVar13 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = *param_2;
  fVar14 = param_2[5];
  fVar15 = param_2[4];
  lVar3 = *(longlong *)(lVar6 + 0x50);
  iVar2 = *(int *)(lVar3 + 8);
  *(int *)(lVar3 + 8) = iVar2 + 1;
  if (*(int *)(lVar3 + 0xc) == iVar2) {
    FUN_146964c32(lVar3,iVar2);
  }
  lVar3 = **(longlong **)(lVar6 + 0x50);
  lVar7 = (longlong)iVar2 * 0x2c;
  *(undefined8 *)(lVar3 + lVar7) = 0x3f80000000000000;
  ((undefined8 *)(lVar3 + lVar7))[1] = &DAT_3f8000003f800000;
  *(float *)(lVar3 + 0x18 + lVar7) = fVar9 * 0.0 + fVar8 * fVar12 + fVar15;
  *(float *)(lVar3 + 0x1c + lVar7) = fVar13 * 0.0 + fVar11 * fVar12 + fVar14;
  *(undefined4 *)(lVar3 + 0x20 + lVar7) = uVar5;
  *(undefined4 *)(lVar3 + 0x24 + lVar7) = 0;
  *(int *)(lVar6 + 0x74) = *(int *)(lVar6 + 0x74) + 1;
  fVar11 = param_2[3];
  fVar13 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = *param_2;
  fVar14 = param_2[5];
  fVar15 = param_2[4];
  lVar3 = *(longlong *)(lVar6 + 0x50);
  iVar2 = *(int *)(lVar3 + 8);
  *(int *)(lVar3 + 8) = iVar2 + 1;
  if (*(int *)(lVar3 + 0xc) == iVar2) {
    FUN_146964c32(lVar3,iVar2);
  }
  lVar3 = **(longlong **)(lVar6 + 0x50);
  lVar7 = (longlong)iVar2 * 0x2c;
  puVar1 = (undefined4 *)(lVar3 + lVar7);
  *puVar1 = 0x3f800000;
  puVar1[1] = 0x3f800000;
  puVar1[2] = 0x3f800000;
  puVar1[3] = 0x3f800000;
  *(float *)(lVar3 + 0x18 + lVar7) = fVar10 * fVar9 + fVar12 * fVar8 + fVar15;
  *(float *)(lVar3 + 0x1c + lVar7) = fVar13 * fVar10 + fVar11 * fVar12 + fVar14;
  *(undefined4 *)(lVar3 + 0x20 + lVar7) = uVar5;
  *(undefined4 *)(lVar3 + 0x24 + lVar7) = 0;
  *(int *)(lVar6 + 0x74) = *(int *)(lVar6 + 0x74) + 1;
  plVar4 = *(longlong **)(lVar6 + 0x58);
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_1447808da(plVar4,iVar2);
  }
  *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) = 0;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  plVar4 = *(longlong **)(lVar6 + 0x58);
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_1447808da(plVar4,iVar2);
  }
  *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) = 1;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  plVar4 = *(longlong **)(lVar6 + 0x58);
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_1447808da(plVar4,iVar2);
  }
  *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) = 2;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  plVar4 = *(longlong **)(lVar6 + 0x58);
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_1447808da(plVar4,iVar2);
  }
  *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) = 2;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  plVar4 = *(longlong **)(lVar6 + 0x58);
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_1447808da(plVar4,iVar2);
  }
  *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) = 1;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  plVar4 = *(longlong **)(lVar6 + 0x58);
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_1447808da(plVar4,iVar2);
  }
  *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) = 3;
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695b784 FUN_14695b784 body=768 status=ok
// SIG undefined FUN_14695b784(void)

void FUN_14695b784(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined1 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_e8 [32];
  float *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined2 local_a8;
  longlong local_a0;
  undefined4 local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  fVar9 = 0.0;
  if (0.0 <= *(float *)(param_2 + 0x90)) {
    fVar9 = *(float *)(param_2 + 0x90);
  }
  fVar12 = fVar9 * 0.5 + 1.0;
  local_88 = (fVar9 * 0.5 + -1.0) / fVar12;
  fStack_84 = 0.0;
  fStack_80 = 0.0;
  fStack_7c = 0.0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_6c = 0x3f800000;
  uStack_68 = 0;
  uStack_64 = 0;
  fStack_60 = 0.0;
  local_5c = 0x3f800000;
  local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,*(undefined1 *)(param_2 + 0x45));
  local_c8 = (float *)0x0;
  local_a8 = 0;
  local_b8 = CONCAT71(local_b8._1_7_,4);
  local_c0 = CONCAT71(local_c0._1_7_,2);
  local_a0 = param_2;
  uVar6 = FUN_140c7650a(param_1,*param_1,*(undefined4 *)(param_2 + 0x28),&local_88);
  fVar12 = fVar12 / *(float *)(param_2 + 0x40);
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 == 1) {
    lVar2 = *(longlong *)(param_2 + 0x60);
    if (*(char *)(param_1 + 6) != '\x01') {
      fVar9 = *(float *)(lVar2 + 0x14);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      uVar5 = (undefined1)(int)(fVar9 * 255.0 + 0.5);
      fVar9 = *(float *)(lVar2 + 0x10);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      fVar10 = *(float *)(lVar2 + 8);
      fVar11 = *(float *)(lVar2 + 0xc);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      uVar8 = (undefined1)(int)(fVar10 * 255.0 + 0.5);
      uVar4 = CONCAT11((char)(int)(fVar11 * 255.0 + 0.5),(char)(int)(fVar9 * 255.0 + 0.5));
LAB_14695b99e:
      local_8c = CONCAT13(uVar5,CONCAT12(uVar8,uVar4));
      goto LAB_14695b9a7;
    }
    pfVar7 = (float *)(lVar2 + 8);
  }
  else {
    local_88 = *(float *)(param_2 + 0x50);
    fStack_84 = *(float *)(param_2 + 0x54);
    fStack_80 = *(float *)(param_2 + 0x58);
    fStack_7c = *(float *)(param_2 + 0x5c);
    if (*(char *)(param_1 + 6) != '\x01') {
      if (fStack_7c <= 0.0) {
        fStack_7c = 0.0;
      }
      if (1.0 <= fStack_7c) {
        fStack_7c = 1.0;
      }
      uVar5 = (undefined1)(int)(fStack_7c * 255.0 + 0.5);
      if (fStack_80 <= 0.0) {
        fStack_80 = 0.0;
      }
      if (1.0 <= fStack_80) {
        fStack_80 = 1.0;
      }
      if (fStack_84 <= 0.0) {
        fStack_84 = 0.0;
      }
      if (1.0 <= fStack_84) {
        fStack_84 = 1.0;
      }
      if (local_88 <= 0.0) {
        local_88 = 0.0;
      }
      if (1.0 <= local_88) {
        local_88 = 1.0;
      }
      uVar8 = (undefined1)(int)(local_88 * 255.0 + 0.5);
      uVar4 = CONCAT11((char)(int)(fStack_84 * 255.0 + 0.5),(char)(int)(fStack_80 * 255.0 + 0.5));
      goto LAB_14695b99e;
    }
    pfVar7 = &local_88;
  }
  FUN_1411ab38a(pfVar7,&local_8c);
LAB_14695b9a7:
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  local_88 = (float)uVar6;
  fStack_84 = (float)((ulonglong)uVar6 >> 0x20);
  fStack_80 = (float)param_2;
  fStack_7c = (float)((ulonglong)param_2 >> 0x20);
  uStack_68 = (undefined4)DAT_14c84635c;
  uStack_64 = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
  local_5c = 1;
  local_58[0] = local_8c;
  uStack_70 = (undefined4)uVar3;
  local_6c = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  local_c8 = *(float **)(param_2 + 0x78);
  uStack_78 = uStack_70;
  uStack_74 = local_6c;
  fStack_60 = fVar12;
  if (iVar1 < 2) {
    pfVar7 = local_c8;
    local_c8 = &local_88;
    FUN_1469640a0(uVar3,pfVar7,*(undefined8 *)(param_2 + 0x80),uVar6);
    FUN_146964314(&local_88,uVar6,local_58);
  }
  else {
    local_c0 = *(undefined8 *)(param_2 + 0x80);
    local_b8 = uVar6;
    local_b0 = param_1;
    FUN_14695e136(&local_88,(longlong *)(param_2 + 0x60),1);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695ba86 FUN_14695ba86 body=3388 status=ok
// SIG undefined FUN_14695ba86(void)

void FUN_14695ba86(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *_Src;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined2 local_198;
  float *local_190;
  float local_184;
  float local_180;
  uint local_17c;
  uint local_178;
  float local_174;
  undefined8 *local_170;
  float local_168;
  float local_164;
  longlong local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 *local_138;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar5 = *(undefined8 *)(param_2 + 8);
  local_1a0 = *(undefined1 *)((longlong)param_2 + 0x45);
  fVar24 = param_2[0x10];
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  fVar16 = (float)uVar5;
  fVar27 = (float)((ulonglong)uVar5 >> 0x20);
  if ((((param_2[0x1c] != 0.0) || (param_2[0x1d] != 0.0)) || (NAN(param_2[0x1d]))) ||
     (((param_2[0x1e] != 0.0 || (NAN(param_2[0x1e]))) ||
      ((param_2[0x1f] != 1.0 || (NAN(param_2[0x1f]))))))) {
    local_118 = *(undefined8 *)(param_2 + 0x1c);
    uStack_110 = *(undefined8 *)(param_2 + 0x1e);
    local_1a8 = 7;
    uStack_120 = uVar5;
  }
  else {
    local_1a8 = 0;
  }
  local_198 = *(undefined2 *)(param_2 + 0x12);
  local_1b8 = 0;
  local_1b0 = 2;
  local_190 = param_2;
  local_170 = param_1;
  lVar9 = FUN_140c7650a(param_1,*param_1,param_2[10],&local_128);
  local_164 = (float)DAT_14c84635c;
  local_168 = DAT_14c84635c._4_4_;
  local_138 = (undefined8 *)0x0;
  local_130 = param_2[0x16];
  lVar14 = (longlong)(int)local_130;
  _Src = *(float **)(param_2 + 0x14);
  if (lVar14 == 0) {
    local_12c = 0.0;
    lVar14 = 0;
  }
  else {
    FUN_146970548(&local_138,local_130,0);
    memcpy(local_138,_Src,lVar14 * 0x18);
    _Src = *(float **)(param_2 + 0x14);
    lVar14 = (longlong)(int)param_2[0x16];
  }
  local_184 = fVar27;
  local_180 = fVar16;
  if (param_2[0x18] == 1.4013e-45) {
    if (0.0 < *_Src) {
      local_148 = *(undefined8 *)(_Src + 2);
      uStack_140 = *(undefined8 *)(_Src + 4);
      uVar13 = (ulonglong)(uint)local_130;
      local_130 = (float)((int)local_130 + 1);
      if ((uint)local_12c < (uint)local_130) {
        FUN_1469705bc(&local_138,uVar13);
      }
      puVar8 = local_138;
      memmove(local_138 + 3,local_138,uVar13 * 0x18);
      *puVar8 = 0;
      puVar8[1] = local_148;
      puVar8[2] = uStack_140;
    }
    if (local_180 < _Src[lVar14 * 6 + -6] || local_180 == _Src[lVar14 * 6 + -6]) goto LAB_14695bd7d;
  }
  else {
    if (0.0 < _Src[1]) {
      local_148 = *(undefined8 *)(_Src + 2);
      uStack_140 = *(undefined8 *)(_Src + 4);
      uVar13 = (ulonglong)(uint)local_130;
      local_130 = (float)((int)local_130 + 1);
      if ((uint)local_12c < (uint)local_130) {
        FUN_1469705bc(&local_138,uVar13);
      }
      puVar8 = local_138;
      memmove(local_138 + 3,local_138,uVar13 * 0x18);
      *puVar8 = 0;
      puVar8[1] = local_148;
      puVar8[2] = uStack_140;
    }
    if (local_184 < _Src[lVar14 * 6 + -5] || local_184 == _Src[lVar14 * 6 + -5]) goto LAB_14695bd7d;
  }
  fVar16 = local_130;
  local_148 = *(undefined8 *)(_Src + lVar14 * 6 + -4);
  uStack_140 = *(undefined8 *)(_Src + lVar14 * 6 + -2);
  lVar14 = (longlong)(int)local_130;
  local_130 = (float)((int)local_130 + 1);
  if ((uint)local_12c < (uint)local_130) {
    FUN_1469705bc(&local_138,fVar16);
  }
  local_138[lVar14 * 3] = uVar5;
  local_138[lVar14 * 3 + 1] = local_148;
  (local_138 + lVar14 * 3 + 1)[1] = uStack_140;
LAB_14695bd7d:
  if (0 < (int)local_130) {
    fVar16 = fVar24 * local_180;
    fVar24 = fVar24 * local_184;
    lVar15 = 0x14;
    lVar14 = 0;
    local_178 = (uint)(int)ROUND(fVar16 + fVar16 + 0.5) >> 1;
    local_17c = (uint)(int)ROUND(fVar24 + fVar24 + 0.5) >> 1;
    do {
      puVar8 = local_138;
      if (param_2[0x18] == 1.4013e-45) {
        fVar24 = *(float *)((longlong)local_138 + lVar15 + -0x14);
        fVar29 = local_164 + fVar24;
        fVar24 = fVar24 + 0.0;
        fVar30 = fVar29 / local_180;
        local_174 = fVar24 / local_180;
        fVar23 = 1.0;
        fVar16 = local_184;
        fVar27 = local_168;
        fVar28 = 0.0;
      }
      else {
        fVar16 = *(float *)((longlong)local_138 + lVar15 + -0x10);
        fVar27 = local_168 + fVar16;
        fVar30 = 0.0;
        fVar16 = fVar16 + 0.0;
        fVar23 = fVar27 / local_184;
        local_174 = 1.0;
        fVar28 = fVar23;
        fVar29 = local_164;
        fVar24 = local_180;
      }
      lVar12 = (longlong)local_138 + lVar15 + -0xc;
      if (lVar14 == 0) {
        if (*(char *)(local_170 + 6) == '\x01') {
          FUN_1411ab38a(lVar12,&local_14c);
        }
        else {
          fVar17 = *(float *)((longlong)local_138 + lVar15);
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          if (1.0 <= fVar17) {
            fVar17 = 1.0;
          }
          fVar18 = *(float *)((longlong)local_138 + lVar15 + -4);
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          fVar19 = *(float *)((longlong)local_138 + lVar15 + -0xc);
          fVar21 = *(float *)((longlong)local_138 + lVar15 + -8);
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          if (1.0 <= fVar21) {
            fVar21 = 1.0;
          }
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if (1.0 <= fVar19) {
            fVar19 = 1.0;
          }
          local_14c = CONCAT13((char)(int)(fVar17 * 255.0 + 0.5),
                               CONCAT12((char)(int)(fVar19 * 255.0 + 0.5),
                                        CONCAT11((char)(int)(fVar21 * 255.0 + 0.5),
                                                 (char)(int)(fVar18 * 255.0 + 0.5))));
        }
        uVar7 = local_14c;
        fVar17 = param_2[3];
        fVar18 = param_2[1];
        fVar19 = param_2[2];
        auVar26 = ZEXT416((uint)(fVar19 * fVar27));
        fVar21 = *param_2;
        fVar1 = param_2[5];
        fVar2 = param_2[4];
        lVar10 = *(longlong *)(lVar9 + 0x50);
        iVar3 = *(int *)(lVar10 + 8);
        *(int *)(lVar10 + 8) = iVar3 + 1;
        if (*(int *)(lVar10 + 0xc) == iVar3) {
          auVar26._0_8_ = FUN_146964c32(lVar10,iVar3);
          auVar26._8_8_ = extraout_XMM0_Qb_01;
        }
        auVar22 = ZEXT816(0);
        auVar25 = blendps(ZEXT416((uint)(fVar21 * fVar29 + fVar19 * fVar27 + fVar2 + 0.5)),auVar22,
                          0xe);
        auVar26 = roundps(auVar26,auVar25,1);
        auVar25 = blendps(ZEXT416((uint)(fVar18 * fVar29 + fVar17 * fVar27 + fVar1 + 0.5)),auVar22,
                          0xe);
        auVar22 = roundps(auVar22,auVar25,1);
        lVar10 = **(longlong **)(lVar9 + 0x50);
        lVar11 = (longlong)iVar3 * 0x2c;
        *(float *)(lVar10 + lVar11) = fVar30;
        *(float *)(lVar10 + 4 + lVar11) = fVar28;
        *(undefined8 *)(lVar10 + 8 + lVar11) = 0;
        *(float *)(lVar10 + 0x10 + lVar11) = fVar29 / local_180;
        *(float *)(lVar10 + 0x14 + lVar11) = fVar27 / local_184;
        *(int *)(lVar10 + 0x18 + lVar11) = auVar26._0_4_;
        *(int *)(lVar10 + 0x1c + lVar11) = auVar22._0_4_;
        *(undefined4 *)(lVar10 + 0x20 + lVar11) = uVar7;
        *(undefined4 *)(lVar10 + 0x24 + lVar11) = 0;
        *(short *)(lVar10 + 0x28 + lVar11) = (short)local_178;
        *(short *)(lVar10 + 0x2a + lVar11) = (short)local_17c;
        *(int *)(lVar9 + 0x74) = *(int *)(lVar9 + 0x74) + 1;
        if (*(char *)(local_170 + 6) == '\x01') {
          FUN_1411ab38a(lVar12,&local_150);
        }
        else {
          fVar27 = *(float *)((longlong)puVar8 + lVar15);
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          if (1.0 <= fVar27) {
            fVar27 = 1.0;
          }
          fVar28 = *(float *)((longlong)puVar8 + lVar15 + -4);
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
          fVar29 = *(float *)((longlong)puVar8 + lVar15 + -0xc);
          fVar30 = *(float *)((longlong)puVar8 + lVar15 + -8);
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          if (1.0 <= fVar30) {
            fVar30 = 1.0;
          }
          if (fVar29 <= 0.0) {
            fVar29 = 0.0;
          }
          if (1.0 <= fVar29) {
            fVar29 = 1.0;
          }
          local_150 = CONCAT13((char)(int)(fVar27 * 255.0 + 0.5),
                               CONCAT12((char)(int)(fVar29 * 255.0 + 0.5),
                                        CONCAT11((char)(int)(fVar30 * 255.0 + 0.5),
                                                 (char)(int)(fVar28 * 255.0 + 0.5))));
        }
        uVar7 = local_150;
        fVar27 = param_2[3];
        fVar28 = param_2[1];
        fVar29 = param_2[2];
        auVar22 = ZEXT416((uint)(fVar29 * fVar16));
        fVar30 = *param_2;
        fVar17 = param_2[5];
        fVar18 = param_2[4];
        lVar12 = *(longlong *)(lVar9 + 0x50);
        iVar3 = *(int *)(lVar12 + 8);
        *(int *)(lVar12 + 8) = iVar3 + 1;
        if (*(int *)(lVar12 + 0xc) == iVar3) {
          auVar22._0_8_ = FUN_146964c32(lVar12,iVar3);
          auVar22._8_8_ = extraout_XMM0_Qb_02;
        }
        auVar25 = ZEXT816(0);
        auVar26 = blendps(ZEXT416((uint)(fVar30 * fVar24 + fVar29 * fVar16 + fVar18 + 0.5)),auVar25,
                          0xe);
        auVar26 = roundps(auVar22,auVar26,1);
        auVar22 = blendps(ZEXT416((uint)(fVar28 * fVar24 + fVar27 * fVar16 + fVar17 + 0.5)),auVar25,
                          0xe);
        auVar22 = roundps(auVar25,auVar22,1);
        lVar12 = **(longlong **)(lVar9 + 0x50);
        lVar10 = (longlong)iVar3 * 0x2c;
        *(float *)(lVar12 + lVar10) = local_174;
        *(float *)(lVar12 + 4 + lVar10) = fVar23;
        *(undefined8 *)(lVar12 + 8 + lVar10) = 0;
        *(float *)(lVar12 + 0x10 + lVar10) = fVar24 / local_180;
        *(float *)(lVar12 + 0x14 + lVar10) = fVar16 / local_184;
        *(int *)(lVar12 + 0x18 + lVar10) = auVar26._0_4_;
        *(int *)(lVar12 + 0x1c + lVar10) = auVar22._0_4_;
        *(undefined4 *)(lVar12 + 0x20 + lVar10) = uVar7;
        *(undefined4 *)(lVar12 + 0x24 + lVar10) = 0;
        *(short *)(lVar12 + 0x28 + lVar10) = (short)local_178;
        *(short *)(lVar12 + 0x2a + lVar10) = (short)local_17c;
        *(int *)(lVar9 + 0x74) = *(int *)(lVar9 + 0x74) + 1;
      }
      else {
        iVar3 = *(int *)(lVar9 + 0x74);
        local_160 = lVar12;
        if (*(char *)(local_170 + 6) == '\x01') {
          FUN_1411ab38a(lVar12,&local_154);
        }
        else {
          fVar17 = *(float *)((longlong)local_138 + lVar15);
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          if (1.0 <= fVar17) {
            fVar17 = 1.0;
          }
          fVar18 = *(float *)((longlong)local_138 + lVar15 + -4);
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          fVar19 = *(float *)((longlong)local_138 + lVar15 + -0xc);
          fVar21 = *(float *)((longlong)local_138 + lVar15 + -8);
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          if (1.0 <= fVar21) {
            fVar21 = 1.0;
          }
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if (1.0 <= fVar19) {
            fVar19 = 1.0;
          }
          local_154 = CONCAT13((char)(int)(fVar17 * 255.0 + 0.5),
                               CONCAT12((char)(int)(fVar19 * 255.0 + 0.5),
                                        CONCAT11((char)(int)(fVar21 * 255.0 + 0.5),
                                                 (char)(int)(fVar18 * 255.0 + 0.5))));
        }
        uVar7 = local_154;
        fVar17 = param_2[3];
        fVar18 = param_2[1];
        fVar19 = param_2[2];
        auVar25 = ZEXT416((uint)(fVar19 * fVar27));
        fVar21 = *param_2;
        fVar1 = param_2[5];
        fVar2 = param_2[4];
        lVar12 = *(longlong *)(lVar9 + 0x50);
        iVar4 = *(int *)(lVar12 + 8);
        *(int *)(lVar12 + 8) = iVar4 + 1;
        if (*(int *)(lVar12 + 0xc) == iVar4) {
          auVar25._0_8_ = FUN_146964c32(lVar12,iVar4);
          auVar25._8_8_ = extraout_XMM0_Qb;
        }
        auVar22 = ZEXT816(0);
        auVar26 = blendps(ZEXT416((uint)(fVar21 * fVar29 + fVar19 * fVar27 + fVar2 + 0.5)),auVar22,
                          0xe);
        auVar26 = roundps(auVar25,auVar26,1);
        auVar25 = blendps(ZEXT416((uint)(fVar18 * fVar29 + fVar17 * fVar27 + fVar1 + 0.5)),auVar22,
                          0xe);
        auVar22 = roundps(auVar22,auVar25,1);
        lVar12 = **(longlong **)(lVar9 + 0x50);
        lVar10 = (longlong)iVar4 * 0x2c;
        *(float *)(lVar12 + lVar10) = fVar30;
        *(float *)(lVar12 + 4 + lVar10) = fVar28;
        *(undefined8 *)(lVar12 + 8 + lVar10) = 0;
        *(float *)(lVar12 + 0x10 + lVar10) = fVar29 / local_180;
        *(float *)(lVar12 + 0x14 + lVar10) = fVar27 / local_184;
        *(int *)(lVar12 + 0x18 + lVar10) = auVar26._0_4_;
        *(int *)(lVar12 + 0x1c + lVar10) = auVar22._0_4_;
        *(undefined4 *)(lVar12 + 0x20 + lVar10) = uVar7;
        *(undefined4 *)(lVar12 + 0x24 + lVar10) = 0;
        *(short *)(lVar12 + 0x28 + lVar10) = (short)local_178;
        *(short *)(lVar12 + 0x2a + lVar10) = (short)local_17c;
        *(int *)(lVar9 + 0x74) = *(int *)(lVar9 + 0x74) + 1;
        if (*(char *)(local_170 + 6) == '\x01') {
          FUN_1411ab38a(local_160,&local_158);
        }
        else {
          fVar27 = *(float *)((longlong)puVar8 + lVar15);
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          if (1.0 <= fVar27) {
            fVar27 = 1.0;
          }
          fVar28 = *(float *)((longlong)puVar8 + lVar15 + -4);
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
          fVar29 = *(float *)((longlong)puVar8 + lVar15 + -0xc);
          fVar30 = *(float *)((longlong)puVar8 + lVar15 + -8);
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          if (1.0 <= fVar30) {
            fVar30 = 1.0;
          }
          if (fVar29 <= 0.0) {
            fVar29 = 0.0;
          }
          if (1.0 <= fVar29) {
            fVar29 = 1.0;
          }
          local_158 = CONCAT13((char)(int)(fVar27 * 255.0 + 0.5),
                               CONCAT12((char)(int)(fVar29 * 255.0 + 0.5),
                                        CONCAT11((char)(int)(fVar30 * 255.0 + 0.5),
                                                 (char)(int)(fVar28 * 255.0 + 0.5))));
        }
        uVar7 = local_158;
        fVar27 = param_2[3];
        fVar28 = param_2[1];
        fVar29 = param_2[2];
        auVar20 = ZEXT416((uint)(fVar29 * fVar16));
        fVar30 = *param_2;
        fVar17 = param_2[5];
        fVar18 = param_2[4];
        lVar12 = *(longlong *)(lVar9 + 0x50);
        iVar4 = *(int *)(lVar12 + 8);
        *(int *)(lVar12 + 8) = iVar4 + 1;
        if (*(int *)(lVar12 + 0xc) == iVar4) {
          auVar20._0_8_ = FUN_146964c32(lVar12,iVar4);
          auVar20._8_8_ = extraout_XMM0_Qb_00;
        }
        auVar22 = ZEXT816(0);
        auVar26 = blendps(ZEXT416((uint)(fVar30 * fVar24 + fVar29 * fVar16 + fVar18 + 0.5)),auVar22,
                          0xe);
        auVar26 = roundps(auVar20,auVar26,1);
        auVar25 = blendps(ZEXT416((uint)(fVar28 * fVar24 + fVar27 * fVar16 + fVar17 + 0.5)),auVar22,
                          0xe);
        auVar22 = roundps(auVar22,auVar25,1);
        lVar12 = **(longlong **)(lVar9 + 0x50);
        lVar10 = (longlong)iVar4 * 0x2c;
        *(float *)(lVar12 + lVar10) = local_174;
        *(float *)(lVar12 + 4 + lVar10) = fVar23;
        *(undefined8 *)(lVar12 + 8 + lVar10) = 0;
        *(float *)(lVar12 + 0x10 + lVar10) = fVar24 / local_180;
        *(float *)(lVar12 + 0x14 + lVar10) = fVar16 / local_184;
        *(int *)(lVar12 + 0x18 + lVar10) = auVar26._0_4_;
        *(int *)(lVar12 + 0x1c + lVar10) = auVar22._0_4_;
        *(undefined4 *)(lVar12 + 0x20 + lVar10) = uVar7;
        *(undefined4 *)(lVar12 + 0x24 + lVar10) = 0;
        *(short *)(lVar12 + 0x28 + lVar10) = (short)local_178;
        *(short *)(lVar12 + 0x2a + lVar10) = (short)local_17c;
        *(int *)(lVar9 + 0x74) = *(int *)(lVar9 + 0x74) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3 + -2;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3 + -1;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3 + -1;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3 + 1;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
      }
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0x18;
    } while (lVar14 < (int)local_130);
  }
  if (local_138 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695c7c4 FUN_14695c7c4 body=3238 status=ok
// SIG undefined FUN_14695c7c4(void)

void FUN_14695c7c4(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined2 local_198;
  float *local_190;
  float local_180;
  float local_17c;
  uint local_178;
  uint local_174;
  undefined8 *local_170;
  float local_168;
  float local_164;
  longlong local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 *local_138;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar5 = *(undefined8 *)(param_2 + 8);
  local_1a0 = *(undefined1 *)((longlong)param_2 + 0x45);
  fVar23 = param_2[0x10];
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  fVar17 = (float)uVar5;
  fVar26 = (float)((ulonglong)uVar5 >> 0x20);
  if (((((param_2[0x1c] != 0.0) || (NAN(param_2[0x1c]))) || (param_2[0x1d] != 0.0)) ||
      ((NAN(param_2[0x1d]) || (param_2[0x1e] != 0.0)))) ||
     ((NAN(param_2[0x1e]) || ((param_2[0x1f] != 1.0 || (NAN(param_2[0x1f]))))))) {
    local_118 = *(undefined8 *)(param_2 + 0x1c);
    uStack_110 = *(undefined8 *)(param_2 + 0x1e);
    local_1a8 = 7;
    uStack_120 = uVar5;
  }
  else {
    local_1a8 = 0;
  }
  local_198 = *(undefined2 *)(param_2 + 0x12);
  local_1b8 = 0;
  local_1b0 = 2;
  local_190 = param_2;
  local_170 = param_1;
  lVar9 = FUN_140c7650a(param_1,*param_1,param_2[10],&local_128);
  local_164 = (float)DAT_14c84635c;
  local_168 = DAT_14c84635c._4_4_;
  local_138 = (undefined8 *)0x0;
  local_130 = param_2[0x16];
  lVar15 = (longlong)(int)local_130;
  pfVar13 = *(float **)(param_2 + 0x14);
  if (lVar15 == 0) {
    local_12c = 0.0;
    lVar15 = 0;
  }
  else {
    FUN_146970548(&local_138,local_130,0);
    memcpy(local_138,pfVar13,lVar15 * 0x18);
    pfVar13 = *(float **)(param_2 + 0x14);
    lVar15 = (longlong)(int)param_2[0x16];
  }
  local_180 = fVar26;
  local_17c = fVar17;
  if (param_2[0x18] == 1.4013e-45) {
    if (0.0 < *pfVar13) {
      local_148 = pfVar13[2];
      fStack_144 = pfVar13[3];
      fStack_140 = pfVar13[4];
      fStack_13c = pfVar13[5];
      uVar14 = (ulonglong)(uint)local_130;
      local_130 = (float)((int)local_130 + 1);
      if ((uint)local_12c < (uint)local_130) {
        FUN_1469705bc(&local_138,uVar14);
      }
      puVar8 = local_138;
      memmove(local_138 + 3,local_138,uVar14 * 0x18);
      *puVar8 = 0;
      puVar8[1] = CONCAT44(fStack_144,local_148);
      puVar8[2] = CONCAT44(fStack_13c,fStack_140);
    }
    if (local_17c < pfVar13[lVar15 * 6 + -6] || local_17c == pfVar13[lVar15 * 6 + -6])
    goto LAB_14695cabb;
  }
  else {
    if (0.0 < pfVar13[1]) {
      local_148 = pfVar13[2];
      fStack_144 = pfVar13[3];
      fStack_140 = pfVar13[4];
      fStack_13c = pfVar13[5];
      uVar14 = (ulonglong)(uint)local_130;
      local_130 = (float)((int)local_130 + 1);
      if ((uint)local_12c < (uint)local_130) {
        FUN_1469705bc(&local_138,uVar14);
      }
      puVar8 = local_138;
      memmove(local_138 + 3,local_138,uVar14 * 0x18);
      *puVar8 = 0;
      puVar8[1] = CONCAT44(fStack_144,local_148);
      puVar8[2] = CONCAT44(fStack_13c,fStack_140);
    }
    if (local_180 < pfVar13[lVar15 * 6 + -5] || local_180 == pfVar13[lVar15 * 6 + -5])
    goto LAB_14695cabb;
  }
  fVar17 = local_130;
  local_148 = pfVar13[lVar15 * 6 + -4];
  fStack_144 = pfVar13[lVar15 * 6 + -3];
  fStack_140 = pfVar13[lVar15 * 6 + -2];
  fStack_13c = pfVar13[lVar15 * 6 + -1];
  lVar15 = (longlong)(int)local_130;
  local_130 = (float)((int)local_130 + 1);
  if ((uint)local_12c < (uint)local_130) {
    FUN_1469705bc(&local_138,fVar17);
  }
  local_138[lVar15 * 3] = uVar5;
  pfVar13 = (float *)(local_138 + lVar15 * 3 + 1);
  *pfVar13 = local_148;
  pfVar13[1] = fStack_144;
  pfVar13[2] = fStack_140;
  pfVar13[3] = fStack_13c;
LAB_14695cabb:
  if (0 < (int)local_130) {
    fVar17 = fVar23 * local_17c;
    fVar23 = fVar23 * local_180;
    lVar16 = 0x14;
    lVar15 = 0;
    local_174 = (uint)(int)ROUND(fVar17 + fVar17 + 0.5) >> 1;
    local_178 = (uint)(int)ROUND(fVar23 + fVar23 + 0.5) >> 1;
    do {
      puVar8 = local_138;
      if (param_2[0x18] == 1.4013e-45) {
        fVar23 = *(float *)((longlong)local_138 + lVar16 + -0x14);
        fVar26 = local_164 + fVar23;
        fVar25 = 0.0;
        fVar23 = fVar23 + 0.0;
        fVar27 = fVar26 / local_17c;
        fVar24 = fVar23 / local_17c;
        fVar21 = local_168;
        fVar28 = 1.0;
        fVar17 = local_180;
      }
      else {
        fVar17 = *(float *)((longlong)local_138 + lVar16 + -0x10);
        fVar21 = local_168 + fVar17;
        fVar27 = 0.0;
        fVar17 = fVar17 + 0.0;
        fVar25 = fVar21 / local_180;
        fVar24 = 1.0;
        fVar26 = local_164;
        fVar28 = fVar25;
        fVar23 = local_17c;
      }
      lVar12 = (longlong)local_138 + lVar16 + -0xc;
      if (lVar15 == 0) {
        if (*(char *)(local_170 + 6) == '\x01') {
          FUN_1411ab38a(lVar12,&local_14c);
        }
        else {
          fVar18 = *(float *)((longlong)local_138 + lVar16);
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          fVar19 = *(float *)((longlong)local_138 + lVar16 + -4);
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if (1.0 <= fVar19) {
            fVar19 = 1.0;
          }
          fVar20 = *(float *)((longlong)local_138 + lVar16 + -0xc);
          fVar22 = *(float *)((longlong)local_138 + lVar16 + -8);
          if (fVar22 <= 0.0) {
            fVar22 = 0.0;
          }
          if (1.0 <= fVar22) {
            fVar22 = 1.0;
          }
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          if (1.0 <= fVar20) {
            fVar20 = 1.0;
          }
          local_14c = CONCAT13((char)(int)(fVar18 * 255.0 + 0.5),
                               CONCAT12((char)(int)(fVar20 * 255.0 + 0.5),
                                        CONCAT11((char)(int)(fVar22 * 255.0 + 0.5),
                                                 (char)(int)(fVar19 * 255.0 + 0.5))));
        }
        uVar7 = local_14c;
        fVar18 = param_2[3];
        fVar19 = param_2[1];
        fVar20 = param_2[2];
        fVar22 = *param_2;
        fVar1 = param_2[5];
        fVar2 = param_2[4];
        lVar10 = *(longlong *)(lVar9 + 0x50);
        iVar3 = *(int *)(lVar10 + 8);
        *(int *)(lVar10 + 8) = iVar3 + 1;
        if (*(int *)(lVar10 + 0xc) == iVar3) {
          FUN_146964c32(lVar10,iVar3);
        }
        lVar10 = **(longlong **)(lVar9 + 0x50);
        lVar11 = (longlong)iVar3 * 0x2c;
        *(float *)(lVar10 + lVar11) = fVar27;
        *(float *)(lVar10 + 4 + lVar11) = fVar25;
        *(undefined8 *)(lVar10 + 8 + lVar11) = 0;
        *(float *)(lVar10 + 0x10 + lVar11) = fVar26 / local_17c;
        *(float *)(lVar10 + 0x14 + lVar11) = fVar21 / local_180;
        *(float *)(lVar10 + 0x18 + lVar11) = fVar22 * fVar26 + fVar20 * fVar21 + fVar2;
        *(float *)(lVar10 + 0x1c + lVar11) = fVar19 * fVar26 + fVar18 * fVar21 + fVar1;
        *(undefined4 *)(lVar10 + 0x20 + lVar11) = uVar7;
        *(undefined4 *)(lVar10 + 0x24 + lVar11) = 0;
        *(short *)(lVar10 + 0x28 + lVar11) = (short)local_174;
        *(short *)(lVar10 + 0x2a + lVar11) = (short)local_178;
        *(int *)(lVar9 + 0x74) = *(int *)(lVar9 + 0x74) + 1;
        if (*(char *)(local_170 + 6) == '\x01') {
          FUN_1411ab38a(lVar12,&local_150);
        }
        else {
          fVar26 = *(float *)((longlong)puVar8 + lVar16);
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          if (1.0 <= fVar26) {
            fVar26 = 1.0;
          }
          fVar21 = *(float *)((longlong)puVar8 + lVar16 + -4);
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          if (1.0 <= fVar21) {
            fVar21 = 1.0;
          }
          fVar25 = *(float *)((longlong)puVar8 + lVar16 + -0xc);
          fVar27 = *(float *)((longlong)puVar8 + lVar16 + -8);
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          if (1.0 <= fVar27) {
            fVar27 = 1.0;
          }
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
          local_150 = CONCAT13((char)(int)(fVar26 * 255.0 + 0.5),
                               CONCAT12((char)(int)(fVar25 * 255.0 + 0.5),
                                        CONCAT11((char)(int)(fVar27 * 255.0 + 0.5),
                                                 (char)(int)(fVar21 * 255.0 + 0.5))));
        }
        uVar7 = local_150;
        fVar26 = param_2[3];
        fVar21 = param_2[1];
        fVar25 = param_2[2];
        fVar27 = *param_2;
        fVar18 = param_2[5];
        fVar19 = param_2[4];
        lVar12 = *(longlong *)(lVar9 + 0x50);
        iVar3 = *(int *)(lVar12 + 8);
        *(int *)(lVar12 + 8) = iVar3 + 1;
        if (*(int *)(lVar12 + 0xc) == iVar3) {
          FUN_146964c32(lVar12,iVar3);
        }
        lVar12 = **(longlong **)(lVar9 + 0x50);
        lVar10 = (longlong)iVar3 * 0x2c;
        *(float *)(lVar12 + lVar10) = fVar24;
        *(float *)(lVar12 + 4 + lVar10) = fVar28;
        *(undefined8 *)(lVar12 + 8 + lVar10) = 0;
        *(float *)(lVar12 + 0x10 + lVar10) = fVar23 / local_17c;
        *(float *)(lVar12 + 0x14 + lVar10) = fVar17 / local_180;
        *(float *)(lVar12 + 0x18 + lVar10) = fVar27 * fVar23 + fVar25 * fVar17 + fVar19;
        *(float *)(lVar12 + 0x1c + lVar10) = fVar21 * fVar23 + fVar26 * fVar17 + fVar18;
        *(undefined4 *)(lVar12 + 0x20 + lVar10) = uVar7;
        *(undefined4 *)(lVar12 + 0x24 + lVar10) = 0;
        *(short *)(lVar12 + 0x28 + lVar10) = (short)local_174;
        *(short *)(lVar12 + 0x2a + lVar10) = (short)local_178;
        *(int *)(lVar9 + 0x74) = *(int *)(lVar9 + 0x74) + 1;
      }
      else {
        iVar3 = *(int *)(lVar9 + 0x74);
        local_160 = lVar12;
        if (*(char *)(local_170 + 6) == '\x01') {
          FUN_1411ab38a(lVar12,&local_154);
        }
        else {
          fVar18 = *(float *)((longlong)local_138 + lVar16);
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          fVar19 = *(float *)((longlong)local_138 + lVar16 + -4);
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if (1.0 <= fVar19) {
            fVar19 = 1.0;
          }
          fVar20 = *(float *)((longlong)local_138 + lVar16 + -0xc);
          fVar22 = *(float *)((longlong)local_138 + lVar16 + -8);
          if (fVar22 <= 0.0) {
            fVar22 = 0.0;
          }
          if (1.0 <= fVar22) {
            fVar22 = 1.0;
          }
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          if (1.0 <= fVar20) {
            fVar20 = 1.0;
          }
          local_154 = CONCAT13((char)(int)(fVar18 * 255.0 + 0.5),
                               CONCAT12((char)(int)(fVar20 * 255.0 + 0.5),
                                        CONCAT11((char)(int)(fVar22 * 255.0 + 0.5),
                                                 (char)(int)(fVar19 * 255.0 + 0.5))));
        }
        uVar7 = local_154;
        fVar18 = param_2[3];
        fVar19 = param_2[1];
        fVar20 = param_2[2];
        fVar22 = *param_2;
        fVar1 = param_2[5];
        fVar2 = param_2[4];
        lVar12 = *(longlong *)(lVar9 + 0x50);
        iVar4 = *(int *)(lVar12 + 8);
        *(int *)(lVar12 + 8) = iVar4 + 1;
        if (*(int *)(lVar12 + 0xc) == iVar4) {
          FUN_146964c32(lVar12,iVar4);
        }
        lVar12 = **(longlong **)(lVar9 + 0x50);
        lVar10 = (longlong)iVar4 * 0x2c;
        *(float *)(lVar12 + lVar10) = fVar27;
        *(float *)(lVar12 + 4 + lVar10) = fVar25;
        *(undefined8 *)(lVar12 + 8 + lVar10) = 0;
        *(float *)(lVar12 + 0x10 + lVar10) = fVar26 / local_17c;
        *(float *)(lVar12 + 0x14 + lVar10) = fVar21 / local_180;
        *(float *)(lVar12 + 0x18 + lVar10) = fVar22 * fVar26 + fVar20 * fVar21 + fVar2;
        *(float *)(lVar12 + 0x1c + lVar10) = fVar19 * fVar26 + fVar18 * fVar21 + fVar1;
        *(undefined4 *)(lVar12 + 0x20 + lVar10) = uVar7;
        *(undefined4 *)(lVar12 + 0x24 + lVar10) = 0;
        *(short *)(lVar12 + 0x28 + lVar10) = (short)local_174;
        *(short *)(lVar12 + 0x2a + lVar10) = (short)local_178;
        *(int *)(lVar9 + 0x74) = *(int *)(lVar9 + 0x74) + 1;
        if (*(char *)(local_170 + 6) == '\x01') {
          FUN_1411ab38a(local_160,&local_158);
        }
        else {
          fVar26 = *(float *)((longlong)puVar8 + lVar16);
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          if (1.0 <= fVar26) {
            fVar26 = 1.0;
          }
          fVar21 = *(float *)((longlong)puVar8 + lVar16 + -4);
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          if (1.0 <= fVar21) {
            fVar21 = 1.0;
          }
          fVar25 = *(float *)((longlong)puVar8 + lVar16 + -0xc);
          fVar27 = *(float *)((longlong)puVar8 + lVar16 + -8);
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          if (1.0 <= fVar27) {
            fVar27 = 1.0;
          }
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
          local_158 = CONCAT13((char)(int)(fVar26 * 255.0 + 0.5),
                               CONCAT12((char)(int)(fVar25 * 255.0 + 0.5),
                                        CONCAT11((char)(int)(fVar27 * 255.0 + 0.5),
                                                 (char)(int)(fVar21 * 255.0 + 0.5))));
        }
        uVar7 = local_158;
        fVar26 = param_2[3];
        fVar21 = param_2[1];
        fVar25 = param_2[2];
        fVar27 = *param_2;
        fVar18 = param_2[5];
        fVar19 = param_2[4];
        lVar12 = *(longlong *)(lVar9 + 0x50);
        iVar4 = *(int *)(lVar12 + 8);
        *(int *)(lVar12 + 8) = iVar4 + 1;
        if (*(int *)(lVar12 + 0xc) == iVar4) {
          FUN_146964c32(lVar12,iVar4);
        }
        lVar12 = **(longlong **)(lVar9 + 0x50);
        lVar10 = (longlong)iVar4 * 0x2c;
        *(float *)(lVar12 + lVar10) = fVar24;
        *(float *)(lVar12 + 4 + lVar10) = fVar28;
        *(undefined8 *)(lVar12 + 8 + lVar10) = 0;
        *(float *)(lVar12 + 0x10 + lVar10) = fVar23 / local_17c;
        *(float *)(lVar12 + 0x14 + lVar10) = fVar17 / local_180;
        *(float *)(lVar12 + 0x18 + lVar10) = fVar27 * fVar23 + fVar25 * fVar17 + fVar19;
        *(float *)(lVar12 + 0x1c + lVar10) = fVar21 * fVar23 + fVar26 * fVar17 + fVar18;
        *(undefined4 *)(lVar12 + 0x20 + lVar10) = uVar7;
        *(undefined4 *)(lVar12 + 0x24 + lVar10) = 0;
        *(short *)(lVar12 + 0x28 + lVar10) = (short)local_174;
        *(short *)(lVar12 + 0x2a + lVar10) = (short)local_178;
        *(int *)(lVar9 + 0x74) = *(int *)(lVar9 + 0x74) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3 + -2;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3 + -1;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3 + -1;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
        plVar6 = *(longlong **)(lVar9 + 0x58);
        iVar4 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar3 + 1;
        *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
      }
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 0x18;
    } while (lVar15 < (int)local_130);
  }
  if (local_138 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14695d46c FUN_14695d46c body=2448 status=ok
// SIG undefined FUN_14695d46c(void)

void FUN_14695d46c(undefined8 *param_1,float *param_2)

{
  float fVar1;
  undefined1 uVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined1 local_150;
  byte local_148;
  undefined1 local_140;
  undefined2 local_138;
  float *local_130;
  float local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  fVar18 = param_2[8];
  fVar19 = param_2[9];
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x45);
  fVar4 = param_2[10];
  fVar16 = param_2[0x14];
  fVar17 = param_2[0x15];
  local_118 = *(undefined8 *)(param_2 + 0x14);
  fVar15 = param_2[0x16];
  fVar14 = param_2[0x17];
  uStack_110 = *(undefined8 *)(param_2 + 0x16);
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_1411ab38a(&local_118,&local_e4);
  }
  else {
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if (1.0 <= fVar14) {
      fVar14 = 1.0;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    local_e4 = CONCAT13((char)(int)(fVar14 * 255.0 + 0.5),
                        CONCAT12((char)(int)(fVar16 * 255.0 + 0.5),
                                 CONCAT11((char)(int)(fVar17 * 255.0 + 0.5),
                                          (char)(int)(fVar15 * 255.0 + 0.5))));
  }
  local_138 = *(undefined2 *)(param_2 + 0x12);
  plVar6 = *(longlong **)(param_2 + 0x18);
  bVar3 = *(byte *)(param_2 + 0x1a);
  bVar13 = (byte)((ushort)local_138 >> 8) & 1 & *(byte *)((longlong)param_1 + 0x32);
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_150 = 2;
  local_158 = plVar6;
  local_148 = bVar3 & 2;
  local_140 = uVar2;
  local_130 = param_2;
  local_11c = fVar4;
  lVar10 = FUN_140c7650a(param_1,param_1[bVar13],fVar4);
  if (plVar6 != (longlong *)0x0) {
    bVar8 = *(byte *)(param_2 + 0x1a);
    if ((bVar8 & 1) == 0) {
      *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | bVar8 >> 2 & 1;
      bVar8 = *(byte *)(param_2 + 0x1a);
    }
    if ((bVar8 & 1) == 0) {
      fVar18 = param_2[0x10];
      uVar9 = (**(code **)(*plVar6 + 8))(plVar6);
      fVar19 = (float)uVar9 / fVar18;
      uVar9 = (**(code **)*plVar6)(plVar6);
      fVar18 = (float)uVar9 / fVar18;
    }
  }
  uVar7 = local_e4;
  fVar4 = param_2[3];
  fVar16 = param_2[1];
  fVar17 = param_2[2];
  fVar15 = *param_2;
  fVar14 = param_2[5];
  fVar1 = param_2[4];
  lVar11 = *(longlong *)(lVar10 + 0x50);
  iVar5 = *(int *)(lVar11 + 8);
  *(int *)(lVar11 + 8) = iVar5 + 1;
  if (*(int *)(lVar11 + 0xc) == iVar5) {
    FUN_146964c32(lVar11,iVar5);
  }
  lVar11 = **(longlong **)(lVar10 + 0x50);
  lVar12 = (longlong)iVar5 * 0x2c;
  *(undefined8 *)(lVar11 + lVar12) = 0;
  ((undefined8 *)(lVar11 + lVar12))[1] = &DAT_3f8000003f800000;
  *(float *)(lVar11 + 0x18 + lVar12) = fVar15 * 0.0 + fVar17 * 0.0 + fVar1;
  *(float *)(lVar11 + 0x1c + lVar12) = fVar16 * 0.0 + fVar4 * 0.0 + fVar14;
  *(undefined4 *)(lVar11 + 0x20 + lVar12) = uVar7;
  *(undefined4 *)(lVar11 + 0x24 + lVar12) = 0;
  *(int *)(lVar10 + 0x74) = *(int *)(lVar10 + 0x74) + 1;
  fVar4 = param_2[3];
  fVar16 = param_2[1];
  fVar17 = param_2[2];
  fVar15 = *param_2;
  fVar14 = param_2[5];
  fVar1 = param_2[4];
  lVar11 = *(longlong *)(lVar10 + 0x50);
  iVar5 = *(int *)(lVar11 + 8);
  *(int *)(lVar11 + 8) = iVar5 + 1;
  if (*(int *)(lVar11 + 0xc) == iVar5) {
    FUN_146964c32(lVar11,iVar5);
  }
  lVar11 = **(longlong **)(lVar10 + 0x50);
  lVar12 = (longlong)iVar5 * 0x2c;
  *(undefined8 *)(lVar11 + lVar12) = 0x3f800000;
  ((undefined8 *)(lVar11 + lVar12))[1] = &DAT_3f8000003f800000;
  *(float *)(lVar11 + 0x18 + lVar12) = fVar15 * fVar18 + fVar17 * 0.0 + fVar1;
  *(float *)(lVar11 + 0x1c + lVar12) = fVar16 * fVar18 + fVar4 * 0.0 + fVar14;
  *(undefined4 *)(lVar11 + 0x20 + lVar12) = uVar7;
  *(undefined4 *)(lVar11 + 0x24 + lVar12) = 0;
  *(int *)(lVar10 + 0x74) = *(int *)(lVar10 + 0x74) + 1;
  fVar4 = param_2[3];
  fVar16 = param_2[1];
  fVar17 = param_2[2];
  fVar15 = *param_2;
  fVar14 = param_2[5];
  fVar1 = param_2[4];
  lVar11 = *(longlong *)(lVar10 + 0x50);
  iVar5 = *(int *)(lVar11 + 8);
  *(int *)(lVar11 + 8) = iVar5 + 1;
  if (*(int *)(lVar11 + 0xc) == iVar5) {
    FUN_146964c32(lVar11,iVar5);
  }
  lVar11 = **(longlong **)(lVar10 + 0x50);
  lVar12 = (longlong)iVar5 * 0x2c;
  *(undefined8 *)(lVar11 + lVar12) = 0x3f80000000000000;
  ((undefined8 *)(lVar11 + lVar12))[1] = &DAT_3f8000003f800000;
  *(float *)(lVar11 + 0x18 + lVar12) = fVar15 * 0.0 + fVar17 * fVar19 + fVar1;
  *(float *)(lVar11 + 0x1c + lVar12) = fVar16 * 0.0 + fVar4 * fVar19 + fVar14;
  *(undefined4 *)(lVar11 + 0x20 + lVar12) = uVar7;
  *(undefined4 *)(lVar11 + 0x24 + lVar12) = 0;
  *(int *)(lVar10 + 0x74) = *(int *)(lVar10 + 0x74) + 1;
  fVar4 = param_2[3];
  fVar16 = param_2[1];
  fVar17 = param_2[2];
  fVar15 = *param_2;
  fVar14 = param_2[5];
  fVar1 = param_2[4];
  lVar11 = *(longlong *)(lVar10 + 0x50);
  iVar5 = *(int *)(lVar11 + 8);
  *(int *)(lVar11 + 8) = iVar5 + 1;
  if (*(int *)(lVar11 + 0xc) == iVar5) {
    FUN_146964c32(lVar11,iVar5);
  }
  lVar11 = **(longlong **)(lVar10 + 0x50);
  lVar12 = (longlong)iVar5 * 0x2c;
  *(undefined8 *)(lVar11 + lVar12) = &DAT_3f8000003f800000;
  ((undefined8 *)(lVar11 + lVar12))[1] = &DAT_3f8000003f800000;
  *(float *)(lVar11 + 0x18 + lVar12) = fVar15 * fVar18 + fVar17 * fVar19 + fVar1;
  *(float *)(lVar11 + 0x1c + lVar12) = fVar16 * fVar18 + fVar4 * fVar19 + fVar14;
  *(undefined4 *)(lVar11 + 0x20 + lVar12) = uVar7;
  *(undefined4 *)(lVar11 + 0x24 + lVar12) = 0;
  *(int *)(lVar10 + 0x74) = *(int *)(lVar10 + 0x74) + 1;
  plVar6 = *(longlong **)(lVar10 + 0x58);
  iVar5 = (int)plVar6[1];
  *(uint *)(plVar6 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
    FUN_1447808da(plVar6,iVar5);
  }
  *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 0;
  *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
  plVar6 = *(longlong **)(lVar10 + 0x58);
  iVar5 = (int)plVar6[1];
  *(uint *)(plVar6 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
    FUN_1447808da(plVar6,iVar5);
  }
  *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 1;
  *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
  plVar6 = *(longlong **)(lVar10 + 0x58);
  iVar5 = (int)plVar6[1];
  *(uint *)(plVar6 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
    FUN_1447808da(plVar6,iVar5);
  }
  *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 2;
  *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
  plVar6 = *(longlong **)(lVar10 + 0x58);
  iVar5 = (int)plVar6[1];
  *(uint *)(plVar6 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
    FUN_1447808da(plVar6,iVar5);
  }
  *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 2;
  *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
  plVar6 = *(longlong **)(lVar10 + 0x58);
  iVar5 = (int)plVar6[1];
  *(uint *)(plVar6 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
    FUN_1447808da(plVar6,iVar5);
  }
  *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 1;
  *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
  plVar6 = *(longlong **)(lVar10 + 0x58);
  iVar5 = (int)plVar6[1];
  *(uint *)(plVar6 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
    FUN_1447808da(plVar6,iVar5);
  }
  *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 3;
  *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
  if (bVar13 != 0) {
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_138 = 1;
    local_150 = 2;
    local_158 = (longlong *)0x0;
    local_148 = bVar3 & 2;
    local_140 = uVar2;
    local_130 = param_2;
    lVar11 = FUN_140c7650a(param_1,*param_1,local_11c);
    fVar4 = param_2[3];
    fVar16 = param_2[1];
    fVar17 = param_2[2];
    fVar15 = *param_2;
    fVar14 = param_2[5];
    fVar1 = param_2[4];
    lVar10 = *(longlong *)(lVar11 + 0x50);
    iVar5 = *(int *)(lVar10 + 8);
    *(int *)(lVar10 + 8) = iVar5 + 1;
    if (*(int *)(lVar10 + 0xc) == iVar5) {
      FUN_146964c32(lVar10,iVar5);
    }
    lVar10 = **(longlong **)(lVar11 + 0x50);
    lVar12 = (longlong)iVar5 * 0x2c;
    *(undefined8 *)(lVar10 + lVar12) = 0;
    ((undefined8 *)(lVar10 + lVar12))[1] = &DAT_3f8000003f800000;
    *(float *)(lVar10 + 0x18 + lVar12) = fVar15 * 0.0 + fVar17 * 0.0 + fVar1;
    *(float *)(lVar10 + 0x1c + lVar12) = fVar16 * 0.0 + fVar4 * 0.0 + fVar14;
    *(undefined8 *)(lVar10 + 0x20 + lVar12) = 0;
    *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
    fVar4 = param_2[3];
    fVar16 = param_2[1];
    fVar17 = param_2[2];
    fVar15 = *param_2;
    fVar14 = param_2[5];
    fVar1 = param_2[4];
    lVar10 = *(longlong *)(lVar11 + 0x50);
    iVar5 = *(int *)(lVar10 + 8);
    *(int *)(lVar10 + 8) = iVar5 + 1;
    if (*(int *)(lVar10 + 0xc) == iVar5) {
      FUN_146964c32(lVar10,iVar5);
    }
    lVar10 = **(longlong **)(lVar11 + 0x50);
    lVar12 = (longlong)iVar5 * 0x2c;
    *(undefined8 *)(lVar10 + lVar12) = 0x3f800000;
    ((undefined8 *)(lVar10 + lVar12))[1] = &DAT_3f8000003f800000;
    *(float *)(lVar10 + 0x18 + lVar12) = fVar15 * fVar18 + fVar17 * 0.0 + fVar1;
    *(float *)(lVar10 + 0x1c + lVar12) = fVar16 * fVar18 + fVar4 * 0.0 + fVar14;
    *(undefined8 *)(lVar10 + 0x20 + lVar12) = 0;
    *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
    fVar4 = param_2[3];
    fVar16 = param_2[1];
    fVar17 = param_2[2];
    fVar15 = *param_2;
    fVar14 = param_2[5];
    fVar1 = param_2[4];
    lVar10 = *(longlong *)(lVar11 + 0x50);
    iVar5 = *(int *)(lVar10 + 8);
    *(int *)(lVar10 + 8) = iVar5 + 1;
    if (*(int *)(lVar10 + 0xc) == iVar5) {
      FUN_146964c32(lVar10,iVar5);
    }
    lVar10 = **(longlong **)(lVar11 + 0x50);
    lVar12 = (longlong)iVar5 * 0x2c;
    *(undefined8 *)(lVar10 + lVar12) = 0x3f80000000000000;
    ((undefined8 *)(lVar10 + lVar12))[1] = &DAT_3f8000003f800000;
    *(float *)(lVar10 + 0x18 + lVar12) = fVar15 * 0.0 + fVar17 * fVar19 + fVar1;
    *(float *)(lVar10 + 0x1c + lVar12) = fVar16 * 0.0 + fVar4 * fVar19 + fVar14;
    *(undefined8 *)(lVar10 + 0x20 + lVar12) = 0;
    *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
    fVar4 = param_2[3];
    fVar16 = param_2[1];
    fVar17 = param_2[2];
    fVar15 = *param_2;
    fVar14 = param_2[5];
    fVar1 = param_2[4];
    lVar10 = *(longlong *)(lVar11 + 0x50);
    iVar5 = *(int *)(lVar10 + 8);
    *(int *)(lVar10 + 8) = iVar5 + 1;
    if (*(int *)(lVar10 + 0xc) == iVar5) {
      FUN_146964c32(lVar10,iVar5);
    }
    lVar10 = **(longlong **)(lVar11 + 0x50);
    lVar12 = (longlong)iVar5 * 0x2c;
    *(undefined8 *)(lVar10 + lVar12) = &DAT_3f8000003f800000;
    ((undefined8 *)(lVar10 + lVar12))[1] = &DAT_3f8000003f800000;
    *(float *)(lVar10 + 0x18 + lVar12) = fVar18 * fVar15 + fVar19 * fVar17 + fVar1;
    *(float *)(lVar10 + 0x1c + lVar12) = fVar16 * fVar18 + fVar4 * fVar19 + fVar14;
    *(undefined8 *)(lVar10 + 0x20 + lVar12) = 0;
    *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + 1;
    plVar6 = *(longlong **)(lVar11 + 0x58);
    iVar5 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
      FUN_1447808da(plVar6,iVar5);
    }
    *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 0;
    *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + 1;
    plVar6 = *(longlong **)(lVar11 + 0x58);
    iVar5 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
      FUN_1447808da(plVar6,iVar5);
    }
    *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 1;
    *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + 1;
    plVar6 = *(longlong **)(lVar11 + 0x58);
    iVar5 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
      FUN_1447808da(plVar6,iVar5);
    }
    *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 2;
    *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + 1;
    plVar6 = *(longlong **)(lVar11 + 0x58);
    iVar5 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
      FUN_1447808da(plVar6,iVar5);
    }
    *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 2;
    *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + 1;
    plVar6 = *(longlong **)(lVar11 + 0x58);
    iVar5 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
      FUN_1447808da(plVar6,iVar5);
    }
    *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 1;
    *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + 1;
    plVar6 = *(longlong **)(lVar11 + 0x58);
    iVar5 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
      FUN_1447808da(plVar6,iVar5);
    }
    *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = 3;
    *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + 1;
  }
  if ((local_e0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695ddfe FUN_14695ddfe body=247 status=ok
// SIG undefined FUN_14695ddfe(void)

void FUN_14695ddfe(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined2 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_2 + 0x60)) {
    local_68 = *(undefined2 *)(param_2 + 0x48);
    local_70 = *(undefined1 *)(param_2 + 0x45);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      local_88 = 0;
    }
    else {
      local_88 = *(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x10);
    }
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_78 = 5;
    local_80 = 2;
    local_60 = param_2;
    lVar1 = FUN_140c7650a(0,*param_1,*(undefined4 *)(param_2 + 0x28));
    *(byte *)(lVar1 + 0x90) = *(byte *)(lVar1 + 0x90) & 0xfe;
    *(undefined4 *)(lVar1 + 0x80) = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(lVar1 + 0x84) = *(undefined4 *)(param_2 + 0x80);
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_2 + 0x78);
    FUN_142875352(*(undefined8 *)(lVar1 + 0x50),param_2 + 0x58);
    *(int *)(lVar1 + 0x74) = *(int *)(lVar1 + 0x74) + *(int *)(param_2 + 0x60);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695df0c FUN_14695df0c body=553 status=ok
// SIG undefined FUN_14695df0c(void)

void FUN_14695df0c(undefined8 *param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined2 local_b8;
  float *local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
  fVar1 = DAT_14c84635c._4_4_ * param_2[2];
  auVar5 = blendps(ZEXT416((uint)((float)DAT_14c84635c * *param_2 + fVar1 + param_2[4] + 0.5)),
                   ZEXT816(0),0xe);
  auVar5 = roundps(ZEXT416((uint)fVar1),auVar5,1);
  auVar4 = blendps(ZEXT416((uint)(*param_2 * param_2[8] + param_2[2] * param_2[9] + param_2[4] + 0.5
                                 )),ZEXT816(0),0xe);
  auVar4 = roundps(auVar4,auVar4,1);
  if (0.0 < (auVar4._0_4_ - auVar5._0_4_) / (float)param_3) {
    auVar2 = blendps(ZEXT416((uint)((float)DAT_14c84635c * param_2[1] +
                                    DAT_14c84635c._4_4_ * param_2[3] + param_2[5] + 0.5)),ZEXT816(0)
                     ,0xe);
    auVar3 = roundps(auVar2,auVar2,1);
    auVar2 = blendps(ZEXT416((uint)(param_2[8] * param_2[1] + param_2[9] * param_2[3] + param_2[5] +
                                   0.5)),ZEXT816(0),0xe);
    auVar2 = roundps(auVar2,auVar2,1);
    if (0.0 < (auVar2._0_4_ - auVar3._0_4_) / (float)((ulonglong)param_3 >> 0x20)) {
      local_88 = *(undefined8 *)(param_2 + 0x18);
      uStack_80 = *(undefined8 *)(param_2 + 0x1a);
      local_90 = (float)(int)param_2[0x1c];
      local_98 = *(undefined8 *)(param_2 + 0x14);
      local_8c = 0;
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = 6;
      local_d0 = 2;
      local_d8 = 0;
      local_b0 = param_2;
      local_a8 = auVar5._0_4_;
      fStack_a4 = auVar3._0_4_;
      fStack_a0 = auVar4._0_4_;
      fStack_9c = auVar2._0_4_;
      FUN_140c7650a(auVar2._0_8_,*param_1,param_2[10]);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695e136 FUN_14695e136 body=583 status=ok
// SIG undefined FUN_14695e136(void)

void FUN_14695e136(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  uint uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = (ulonglong)*(uint *)(param_2 + 1);
  if (param_3 < (int)(*(uint *)(param_2 + 1) - 1)) {
    lVar2 = (longlong)param_3;
    param_3 = -param_3;
    lVar3 = lVar2 * 0x18 + 8;
    do {
      fVar4 = 1.0 / (float)((int)uVar1 + param_3);
      lStack_b0 = CONCAT44(lStack_b0._4_4_,fVar4);
      local_b8 = &local_98;
      FUN_146964cc2(param_4,fVar4,param_6,param_7);
      param_4 = local_80;
      local_a8 = local_80;
      lStack_b0 = (ulonglong)uStack_84 << 0x20;
      local_a0 = param_1;
      FUN_146964e3c(*param_2 + lVar3 + -0x18,*param_2 + lVar3,param_8,
                    CONCAT44(uStack_94,
                             CONCAT13(uStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,local_98)))));
      lVar2 = lVar2 + 1;
      uVar1 = (ulonglong)(int)param_2[1];
      param_3 = param_3 + -1;
      lVar3 = lVar3 + 0x18;
      param_7 = local_68;
      param_6 = local_70;
    } while (lVar2 < (longlong)(uVar1 - 1));
    param_3 = -param_3;
    param_5 = local_78;
  }
  lVar3 = (longlong)param_3 * 0x18;
  local_b8 = (undefined1 *)param_5;
  lStack_b0 = param_6;
  local_a8 = param_7;
  local_a0 = param_1;
  FUN_146964e3c(*param_2 + -0x10 + lVar3,*param_2 + lVar3 + 8,param_8,param_4);
  lVar3 = *param_2 + lVar3;
  if (*(char *)(param_8 + 0x30) == '\x01') {
    FUN_1411ab38a((float *)(lVar3 + 8),&local_98);
  }
  else {
    fVar4 = *(float *)(lVar3 + 0x14);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    fVar5 = *(float *)(lVar3 + 0x10);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
    fVar6 = *(float *)(lVar3 + 8);
    fVar7 = *(float *)(lVar3 + 0xc);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    local_98 = (undefined1)(int)(fVar5 * 255.0 + 0.5);
    uStack_97 = (undefined1)(int)(fVar7 * 255.0 + 0.5);
    uStack_96 = (undefined1)(int)(fVar6 * 255.0 + 0.5);
    uStack_95 = (undefined1)(int)(fVar4 * 255.0 + 0.5);
  }
  FUN_146964314(param_1,param_7,&local_98);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695e3ee FUN_14695e3ee body=665 status=ok
// SIG undefined FUN_14695e3ee(void)

void FUN_14695e3ee(longlong *param_1,char param_2,uint *param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  
  plVar2 = (longlong *)*param_1;
  fVar14 = 0.0;
  if (param_1[1] != 0) {
    fVar14 = (float)*(int *)(param_1[1] + 0x40);
  }
  iVar1 = (int)plVar2[1];
  fVar15 = (*(float *)(param_1 + 9) - *(float *)((longlong)param_1 + 0x4c)) +
           (float)(int)plVar2[8] + fVar14;
  if (0.0 < fVar15) {
    uVar9 = iVar1 >> 1;
    lVar11 = (longlong)(int)uVar9;
    lVar8 = lVar11 * 0xa8 + 0x18;
    do {
      uVar3 = (uint)lVar11;
      if ((int)uVar9 < 0) {
        if ((int)plVar2[1] <= lVar11) break;
        if (uVar9 == uVar3) goto LAB_14695e453;
LAB_14695e48e:
        if (fVar15 <= 0.0) break;
        if ((-1 < lVar11) && (lVar11 < (int)plVar2[1])) {
          fVar15 = fVar15 - (float)(int)*(short *)(*plVar2 + lVar8);
          param_3[1] = uVar3;
        }
      }
      else {
        if (uVar9 != uVar3) {
          if ((int)uVar9 < (int)plVar2[1]) {
            fVar15 = fVar15 - (float)(int)*(short *)(*plVar2 + 0x18 + (ulonglong)uVar9 * 0xa8);
            *param_3 = uVar9;
          }
          goto LAB_14695e48e;
        }
LAB_14695e453:
        fVar15 = fVar15 - (float)(int)*(short *)(*plVar2 + lVar8);
        param_3[1] = uVar9;
        *param_3 = uVar9;
      }
      lVar11 = lVar11 + 1;
      uVar9 = uVar9 - 1;
      lVar8 = lVar8 + 0xa8;
    } while (0.0 < fVar15);
  }
  uVar9 = *param_3;
  if (param_2 == '\x02') {
    if (uVar9 == 0xffffffff) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar3 = param_3[1];
      if (uVar3 != 0xffffffff) {
        if ((int)uVar3 < (int)uVar9) {
          iVar4 = 0;
        }
        else {
          iVar7 = (uVar3 + 1) - uVar9;
          psVar6 = (short *)(*plVar2 + (longlong)(int)uVar9 * 0xa8 + 0x18);
          iVar4 = 0;
          do {
            iVar4 = iVar4 + *psVar6;
            psVar6 = psVar6 + 0x54;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        iVar7 = uVar3 + 1;
        if ((int)uVar9 < 1) {
          bVar12 = false;
        }
        else {
          bVar12 = (int)uVar9 <= (int)plVar2[1];
        }
        if ((int)uVar3 < -1) {
          bVar13 = false;
        }
        else {
          bVar13 = iVar7 < (int)plVar2[1];
        }
        if ((bVar12) || (bVar13)) {
          iVar5 = uVar9 - 1;
          do {
            if (bVar12) {
              bVar12 = *(char *)(*plVar2 + 0x24 + (longlong)iVar5 * 0xa8) == '\0';
              if (bVar12) {
                iVar4 = iVar4 + *(short *)(*plVar2 + (longlong)iVar5 * 0xa8 + 0x18);
              }
              if (iVar5 < 1) {
                bVar10 = false;
              }
              else {
                bVar10 = iVar5 <= (int)plVar2[1];
              }
              bVar12 = (bool)(bVar12 & bVar10);
              iVar5 = iVar5 + -1;
            }
            if (bVar13) {
              bVar13 = *(char *)(*plVar2 + 0x24 + (longlong)iVar7 * 0xa8) == '\0';
              if (bVar13) {
                iVar4 = iVar4 + *(short *)(*plVar2 + (longlong)iVar7 * 0xa8 + 0x18);
              }
              if (iVar7 < -1) {
                bVar10 = false;
              }
              else {
                bVar10 = iVar7 + 1 < (int)plVar2[1];
              }
              bVar13 = (bool)(bVar13 & bVar10);
              iVar7 = iVar7 + 1;
            }
          } while ((bVar12) || (bVar13));
        }
        param_3[2] = (uint)((*(float *)((longlong)param_1 + 0x4c) -
                            ((float)((int)plVar2[8] - iVar4) + fVar14)) + (float)param_3[2]);
      }
    }
  }
  uVar3 = param_3[1] - uVar9;
  if (uVar3 == iVar1 - 2U || uVar3 + 1 == iVar1) {
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_3 + 2);
  }
  if (uVar9 == 0 && param_3[1] == iVar1 - 2U) {
    param_3[2] = (uint)(fVar14 + (float)param_3[2]);
  }
  return;
}



// FUNCTION 14695e688 FUN_14695e688 body=10 status=ok
// SIG undefined FUN_14695e688(void)

undefined8 * FUN_14695e688(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14695e692 FUN_14695e692 body=27 status=ok
// SIG undefined FUN_14695e692(void)

void FUN_14695e692(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14695e6ae FUN_14695e6ae body=38 status=ok
// SIG undefined FUN_14695e6ae(void)

undefined8 FUN_14695e6ae(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x18))();
  return param_2;
}



// FUNCTION 14695e6d8 FUN_14695e6d8 body=65 status=ok
// SIG undefined FUN_14695e6d8(void)

undefined8 FUN_14695e6d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = **(undefined8 **)(param_1 + 8);
  plVar4 = (longlong *)(*(undefined8 **)(param_1 + 8))[1];
  if (plVar4 != (longlong *)0x0) {
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
  return uVar3;
}



// FUNCTION 14695e71a FUN_14695e71a body=40 status=ok
// SIG undefined FUN_14695e71a(void)

void FUN_14695e71a(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_1469546e6(param_2);
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14695e742 FUN_14695e742 body=41 status=ok
// SIG undefined FUN_14695e742(void)

void FUN_14695e742(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1402bc8f6(param_2);
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 14695e944 FUN_14695e944 body=148 status=ok
// SIG undefined FUN_14695e944(void)

undefined8 * FUN_14695e944(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  
  *param_1 = param_2;
  fVar5 = (float)((ulonglong)param_3 >> 0x20) * param_4;
  param_4 = (float)param_3 * param_4;
  *(int *)(param_1 + 1) = (int)ROUND(param_4 + param_4 + 0.5) >> 1;
  *(int *)((longlong)param_1 + 0xc) = (int)ROUND(fVar5 + fVar5 + 0.5) >> 1;
  uVar3 = FUN_144a78877();
  uVar1 = *param_1;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar3 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4),uVar3);
  *(undefined4 *)(param_1 + 2) = uVar3;
  return param_1;
}



// FUNCTION 14695e9d8 FUN_14695e9d8 body=117 status=ok
// SIG undefined FUN_14695e9d8(void)

void FUN_14695e9d8(longlong param_1)

{
  FUN_145cec533(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_1469729e0(param_1 + 0x78);
  }
  FUN_145cec569(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_146972a10(param_1 + 0x88);
  }
  FUN_146972a40(param_1 + 0x28);
  return;
}



// FUNCTION 14695ea54 FUN_14695ea54 body=150 status=ok
// SIG undefined FUN_14695ea54(void)

bool FUN_14695ea54(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_40,6);
  uVar2 = local_40 & 0xffffffff;
  if (uVar1 == uVar2) {
    local_40 = 0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),&local_40);
    *param_1 = 0;
    param_1[1] = local_40;
    param_1[2] = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 == uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695eaec FUN_14695eaec body=138 status=ok
// SIG undefined FUN_14695eaec(void)

void FUN_14695eaec(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(local_30,"CoreStyle",1);
  FUN_142873e00(local_28,local_30);
  FUN_14695eb78(local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695eb78 FUN_14695eb78 body=210 status=ok
// SIG undefined FUN_14695eb78(void)

void FUN_14695eb78(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (DAT_14c96b350 != (longlong *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*DAT_14c96b350 + 8))();
    FUN_145ac6b12(&DAT_14c96b458,*puVar4);
  }
  plVar5 = DAT_14c96b358;
  DAT_14c96b350 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    if (DAT_14c96b358 == (longlong *)0x0) goto LAB_14695ec20;
    DAT_14c96b358 = (longlong *)0x0;
LAB_14695ebcc:
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14695ec20;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (plVar3 != DAT_14c96b358) {
      bVar6 = DAT_14c96b358 == (longlong *)0x0;
      plVar5 = DAT_14c96b358;
      DAT_14c96b358 = plVar3;
      if (bVar6) goto LAB_14695ec20;
      goto LAB_14695ebcc;
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14695ec20;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_14695ec20:
  if (DAT_14c96b350 == (longlong *)0x0) {
    FUN_14695eaec();
    return;
  }
  FUN_145938026();
  return;
}



// FUNCTION 14695ec4a FUN_14695ec4a body=56 status=ok
// SIG undefined FUN_14695ec4a(void)

void FUN_14695ec4a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x00014695ec77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14695ec82 FUN_14695ec82 body=536 status=ok
// SIG undefined FUN_14695ec82(void)

undefined8 * FUN_14695ec82(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_145c1c3e8();
  *param_1 = &PTR_FUN_149ee65d0;
  puVar1 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0x3f3851ec;
  puVar1[1] = 0x3f3851ec;
  puVar1[2] = 0x3f3851ec;
  puVar1[3] = 0x3f800000;
  param_1[0x76] = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149ee6700;
  puVar2[2] = puVar1;
  param_1[0x77] = puVar2;
  puVar1 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x3f800000;
  param_1[0x78] = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149ee6700;
  puVar2[2] = puVar1;
  param_1[0x79] = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0x3e6666663f3374bc;
  puVar2[1] = 0x3f8000003b449ba6;
  param_1[0x7a] = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149ee6700;
  puVar3[2] = puVar2;
  param_1[0x7b] = puVar3;
  puVar1 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0x3f3a5e35;
  puVar1[1] = 0x3eba5e35;
  puVar1[2] = 0x3b449ba6;
  puVar1[3] = 0x3f800000;
  param_1[0x7c] = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149ee6700;
  puVar2[2] = puVar1;
  param_1[0x7d] = puVar2;
  puVar1 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0x3e800000;
  puVar1[1] = 0x3e800000;
  puVar1[2] = 0x3e800000;
  puVar1[3] = 0x3f800000;
  param_1[0x7e] = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149ee6700;
  puVar2[2] = puVar1;
  param_1[0x7f] = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0x3e6666663f3374bc;
  puVar2[1] = 0x3f8000003b449ba6;
  param_1[0x80] = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149ee6700;
  puVar3[2] = puVar2;
  param_1[0x81] = puVar3;
  puVar1 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0x3d8b4396;
  puVar1[1] = 0x3d8b4396;
  puVar1[2] = 0x3d8b4396;
  puVar1[3] = 0x3f800000;
  param_1[0x82] = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149ee6700;
  puVar2[2] = puVar1;
  param_1[0x83] = puVar2;
  return param_1;
}



// FUNCTION 14695eeb0 FUN_14695eeb0 body=274 status=ok
// SIG undefined FUN_14695eeb0(void)

undefined8 FUN_14695eeb0(uint *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_48,0x3e);
  cVar3 = FUN_1468ec2ac(&local_34,local_48);
  if (cVar3 == '\0') {
    local_34 = *(undefined4 *)(param_2 + 8);
    FUN_1401a700c(&local_48,0x41);
    cVar3 = FUN_1468ec2ac(&local_34,local_48);
    if (cVar3 == '\0') {
      uVar4 = 0;
      goto LAB_14695ef59;
    }
    FUN_1401e02ac(param_3,&local_48);
    *param_1 = local_48;
    param_1[1] = uStack_44;
    param_1[2] = uStack_40;
    param_1[3] = uStack_3c;
  }
  else {
    FUN_144afef32(*param_3,&local_48);
    uVar1 = (&DAT_14c758c60)[local_48._1_1_];
    uVar2 = (&DAT_14c758c60)[(byte)local_48];
    *param_1 = (&DAT_14c758c60)[local_48._2_1_];
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = (uint)((float)(local_48 >> 0x18) * 0.003921569);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  uVar4 = 1;
LAB_14695ef59:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695efc4 FUN_14695efc4 body=776 status=ok
// SIG undefined FUN_14695efc4(void)

longlong * FUN_14695efc4(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong uStack_a0;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = param_1 + 0x228;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x240) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = (longlong *)(param_1 + 0x218);
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      lVar2 = *local_90;
      lVar3 = (longlong)iStack_74;
      lVar7 = *(longlong *)(lVar2 + 8 + lVar3 * 0x18);
      lVar6 = *(longlong *)(lVar7 + 0xa8);
      if (lVar6 == 0) {
        plVar4 = (longlong *)(*(longlong *)(lVar7 + 0x38) + 0x18);
        if (*(longlong *)(lVar7 + 0x38) == 0) {
          plVar4 = (longlong *)(lVar7 + 0xa8);
        }
        lVar6 = *plVar4;
      }
      if (lVar6 == param_3) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar3 * 0x18 + lVar2);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
  }
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_146972db2(&local_a8,0x14);
  local_60 = param_1 + 0x40;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = (longlong *)(param_1 + 0x30);
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      plVar4 = *(longlong **)(*local_90 + 8 + (longlong)iStack_74 * 0x20);
      (**(code **)(*plVar4 + 8))(plVar4,&local_a8);
      lVar2 = local_a8;
      lVar7 = (longlong)(int)uStack_a0;
      if (lVar7 != 0) {
        lVar6 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar6);
          lVar5 = *(longlong *)(lVar3 + 0xa8);
          if (lVar5 == 0) {
            plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x38) + 0x18);
            if (*(longlong *)(lVar3 + 0x38) == 0) {
              plVar4 = (longlong *)(lVar3 + 0xa8);
            }
            lVar5 = *plVar4;
          }
          if (lVar5 == param_3) {
            lVar5 = (longlong)iStack_74;
            lVar3 = *local_90;
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1446f84a2(param_2,iVar1);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar5 * 0x20 + lVar3);
          }
          lVar6 = lVar6 + 8;
        } while (lVar7 * 8 != lVar6);
      }
      bVar8 = (longlong)uStack_a0 < 0;
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      if (bVar8) {
        FUN_146972db2(&local_a8,0);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14695f2ce FUN_14695f2ce body=167 status=ok
// SIG undefined FUN_14695f2ce(void)

undefined8 FUN_14695f2ce(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_68 [32];
  int local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  local_48 = iVar1 + 1 + (uint)(*(int *)(param_1 + 0x18) == 0);
  local_40[0] = 0;
  FUN_14125bce8(local_40,*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x18),0);
  FUN_1401aebe8(local_40,*param_3,iVar1);
  FUN_144a882a8(param_2,local_40,param_4);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695f376 FUN_14695f376 body=156 status=ok
// SIG undefined FUN_14695f376(void)

undefined8 * FUN_14695f376(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  int local_48;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_38,param_3);
  iVar2 = local_30 + -1;
  if (local_30 == 0) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  local_48 = iVar2 + 1 + (uint)(iVar1 == 0);
  *param_2 = 0;
  FUN_14125bce8(param_2,*(undefined8 *)(param_1 + 0x10),iVar1,0);
  FUN_1401aebe8(param_2,local_38,iVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695f414 FUN_14695f414 body=110 status=ok
// SIG undefined FUN_14695f414(void)

undefined8 * FUN_14695f414(longlong param_1,undefined8 *param_2,wchar_t *param_3)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = wcslen(param_3);
  iVar1 = *(int *)(param_1 + 0x18);
  *param_2 = 0;
  FUN_14125bce8(param_2,*(undefined8 *)(param_1 + 0x10),iVar1,0,
                (uint)((int)sVar2 != -1 && iVar1 == 0) + (int)sVar2 + 1);
  FUN_1401aebe8(param_2,param_3,sVar2 & 0xffffffff);
  return param_2;
}



// FUNCTION 14695f482 FUN_14695f482 body=89 status=ok
// SIG undefined FUN_14695f482(void)

undefined8 * FUN_14695f482(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *param_2 = 0;
  FUN_14125bce8(param_2,*(undefined8 *)(param_1 + 0x10),iVar1,0,iVar2 + 1 + (uint)(iVar1 == 0));
  FUN_1401aebe8(param_2,*param_3,iVar2);
  return param_2;
}



// FUNCTION 14695f4dc FUN_14695f4dc body=192 status=ok
// SIG undefined FUN_14695f4dc(void)

undefined8 FUN_14695f4dc(longlong param_1,undefined8 param_2,wchar_t *param_3,undefined8 param_4)

{
  size_t sVar1;
  undefined1 auStack_78 [32];
  int local_58;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  sVar1 = wcslen(param_3);
  local_58 = (uint)((int)sVar1 != -1 && *(int *)(param_1 + 0x28) == 0) + (int)sVar1 + 1;
  local_48[0] = 0;
  FUN_14125bce8(local_48,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x28),0);
  FUN_1401aebe8(local_48,param_3,sVar1 & 0xffffffff);
  FUN_144a882a8(param_2,local_48,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695f59e FUN_14695f59e body=167 status=ok
// SIG undefined FUN_14695f59e(void)

undefined8 FUN_14695f59e(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_68 [32];
  int local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  local_48 = iVar1 + 1 + (uint)(*(int *)(param_1 + 0x28) == 0);
  local_40[0] = 0;
  FUN_14125bce8(local_40,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x28),0);
  FUN_1401aebe8(local_40,*param_3,iVar1);
  FUN_144a882a8(param_2,local_40,param_4);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695f646 FUN_14695f646 body=156 status=ok
// SIG undefined FUN_14695f646(void)

undefined8 * FUN_14695f646(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  int local_48;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_38,param_3);
  iVar2 = local_30 + -1;
  if (local_30 == 0) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_48 = iVar2 + 1 + (uint)(iVar1 == 0);
  *param_2 = 0;
  FUN_14125bce8(param_2,*(undefined8 *)(param_1 + 0x20),iVar1,0);
  FUN_1401aebe8(param_2,local_38,iVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14695f6e4 FUN_14695f6e4 body=110 status=ok
// SIG undefined FUN_14695f6e4(void)

undefined8 * FUN_14695f6e4(longlong param_1,undefined8 *param_2,wchar_t *param_3)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = wcslen(param_3);
  iVar1 = *(int *)(param_1 + 0x28);
  *param_2 = 0;
  FUN_14125bce8(param_2,*(undefined8 *)(param_1 + 0x20),iVar1,0,
                (uint)((int)sVar2 != -1 && iVar1 == 0) + (int)sVar2 + 1);
  FUN_1401aebe8(param_2,param_3,sVar2 & 0xffffffff);
  return param_2;
}



// FUNCTION 14695f752 FUN_14695f752 body=89 status=ok
// SIG undefined FUN_14695f752(void)

undefined8 * FUN_14695f752(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *param_2 = 0;
  FUN_14125bce8(param_2,*(undefined8 *)(param_1 + 0x20),iVar1,0,iVar2 + 1 + (uint)(iVar1 == 0));
  FUN_1401aebe8(param_2,*param_3,iVar2);
  return param_2;
}



// FUNCTION 14695f7ac FUN_14695f7ac body=802 status=ok
// SIG undefined FUN_14695f7ac(void)

ulonglong FUN_14695f7ac(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                       longlong *param_5)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0 [2];
  longlong *local_c0 [2];
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  wchar_t **local_90;
  ulonglong *local_88;
  longlong local_80;
  undefined4 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  longlong *local_60 [2];
  ulonglong local_50 [4];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8 = param_2;
  FUN_141160160(&local_b0);
  if ((int)param_1[0x11] != *(int *)((longlong)param_1 + 0xb4)) {
    uVar2 = (uint)((ulonglong)local_b0 >> 0x10);
    uVar4 = (uint)local_b0 & 0xffff;
    plVar3 = param_1 + 0x17;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x18];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[0x19] - 1U &
                    (int)((ulonglong)local_b0 >> 0x20) + ((uint)local_b0 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(param_1[0x10] + (longlong)iVar5 * 0x14);
        if (*plVar3 == local_b0) {
          if (plVar3 != (longlong *)0x0) {
            param_4 = (ulonglong)*(uint *)(plVar3 + 1);
            goto LAB_14695fa01;
          }
          break;
        }
        iVar5 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar5 != -1);
    }
  }
  if ((param_1[0x75] == 0) ||
     (plVar3 = (longlong *)FUN_140a2b044(param_1 + 0x75), plVar3 == (longlong *)0x0)) {
    if (param_5 != (longlong *)0x0) {
      param_1 = param_5;
    }
    FUN_145715fae(local_d0,&local_a8);
    local_70 = L"UknownSlateFloat";
    local_68 = 0x10;
    FUN_1446e940c(local_f4,&local_70);
    local_70 = L"SlateStyleSet";
    local_68 = 0xd;
    FUN_1446e940c(local_f8,&local_70);
    FUN_140208bae(local_f0,local_f8,local_f4,L"Unable to find float property \'{0}\' in style.");
    FUN_14023409e(&local_e0,local_f0,1);
    local_70 = (wchar_t *)CONCAT44(local_70._4_4_,4);
    FUN_14023423e(local_60,local_d0);
    local_88 = local_50;
    local_90 = &local_70;
    FUN_14010d304(&local_80);
    local_a0 = local_e0;
    local_98 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c0,&local_a0,&local_80);
    FUN_14007f2db(local_80,local_78);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    (**(code **)(*param_1 + 0xa8))(param_1,3,local_c0,&local_a8);
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
  }
  else {
    if (param_5 != (longlong *)0x0) {
      param_1 = param_5;
    }
    local_108 = param_1;
    param_4 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,(int)param_4);
  }
LAB_14695fa01:
  if ((local_50[0] ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_4;
}



// FUNCTION 14695fad0 FUN_14695fad0 body=850 status=ok
// SIG undefined FUN_14695fad0(void)

double * FUN_14695fad0(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5,longlong *param_6)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 local_110;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_a0 = param_3;
  FUN_141160160(&local_a8,param_3,param_4);
  if ((int)param_1[0x1b] != *(int *)((longlong)param_1 + 0x104)) {
    uVar3 = (uint)((ulonglong)local_a8 >> 0x10);
    uVar8 = (uint)local_a8 & 0xffff;
    plVar7 = param_1 + 0x21;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0x22];
    }
    iVar9 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_1[0x23] - 1U &
                    (int)((ulonglong)local_a8 >> 0x20) + ((uint)local_a8 << 0x10 | uVar8) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        plVar7 = (longlong *)(param_1[0x1a] + (longlong)iVar9 * 0x18);
        if (*plVar7 == local_a8) {
          if (plVar7 != (longlong *)0x0) {
            fVar2 = *(float *)((longlong)plVar7 + 0xc);
            *param_2 = (double)*(float *)(plVar7 + 1);
            param_2[1] = (double)fVar2;
            goto LAB_14695fd49;
          }
          break;
        }
        iVar9 = (int)plVar7[2];
      } while (iVar9 != -1);
    }
  }
  if ((param_1[0x75] == 0) ||
     (plVar7 = (longlong *)FUN_140a2b044(param_1 + 0x75), plVar7 == (longlong *)0x0)) {
    if (param_6 != (longlong *)0x0) {
      param_1 = param_6;
    }
    FUN_145715fae(local_d8,&local_a0);
    local_68 = L"UknownSlateVector";
    local_60 = 0x11;
    FUN_1446e940c(local_fc,&local_68);
    local_68 = L"SlateStyleSet";
    local_60 = 0xd;
    FUN_1446e940c(local_100,&local_68);
    FUN_140208bae(local_f8,local_100,local_fc,L"Unable to find vector property \'{0}\' in style.");
    FUN_14023409e(&local_e8,local_f8,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(local_58,local_d8);
    local_80 = &local_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_e8;
    local_90 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_98,&local_78);
    FUN_14007f2db(local_78,local_70);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_e0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    (**(code **)(*param_1 + 0xa8))(param_1,3,local_c8,&local_a0);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    uVar4 = param_5[1];
    uVar5 = param_5[2];
    uVar6 = param_5[3];
    *(undefined4 *)param_2 = *param_5;
    *(undefined4 *)((longlong)param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 1) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  }
  else {
    local_b8 = *param_5;
    uStack_b4 = param_5[1];
    uStack_b0 = param_5[2];
    uStack_ac = param_5[3];
    local_118 = &local_b8;
    local_110 = 0;
    (**(code **)(*plVar7 + 0x30))(plVar7,param_2,param_3,param_4);
  }
LAB_14695fd49:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


