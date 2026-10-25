// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147fa20e6 FUN_147fa20e6 body=60 status=ok
// SIG undefined FUN_147fa20e6(void)

undefined1 FUN_147fa20e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146a6959c(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 147fa214a FUN_147fa214a body=59 status=ok
// SIG undefined FUN_147fa214a(void)

undefined8 FUN_147fa214a(longlong *param_1)

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



// FUNCTION 147fa21e8 FUN_147fa21e8 body=48 status=ok
// SIG undefined FUN_147fa21e8(void)

void FUN_147fa21e8(longlong *param_1)

{
  if ((char)param_1[3] == '\x01') {
    FUN_144a65a1e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 147fa2228 FUN_147fa2228 body=44 status=ok
// SIG undefined FUN_147fa2228(void)

void FUN_147fa2228(undefined8 param_1,longlong *param_2)

{
  FUN_14570ecf1(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fa226a FUN_147fa226a body=54 status=ok
// SIG undefined FUN_147fa226a(void)

undefined1 FUN_147fa226a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fa2364(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147fa22c8 FUN_147fa22c8 body=59 status=ok
// SIG undefined FUN_147fa22c8(void)

undefined8 FUN_147fa22c8(longlong *param_1)

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



// FUNCTION 147fa2364 FUN_147fa2364 body=95 status=ok
// SIG undefined FUN_147fa2364(void)

undefined8 * FUN_147fa2364(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14570ecf1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fa23c4(param_1,iVar1);
      FUN_147fa2426(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fa23c4 FUN_147fa23c4 body=98 status=ok
// SIG undefined FUN_147fa23c4(void)

void FUN_147fa23c4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fa2426 FUN_147fa2426 body=52 status=ok
// SIG undefined FUN_147fa2426(void)

void FUN_147fa2426(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fa245a(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 147fa245a FUN_147fa245a body=170 status=ok
// SIG undefined FUN_147fa245a(void)

undefined4 * FUN_147fa245a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[10] = iVar1;
  if (iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1405b83fc(param_1 + 8,iVar1,0);
    FUN_1405b835c(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if (iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1405b853a(param_1 + 0xc,iVar1,0);
    FUN_1405b83ac(*(undefined8 *)(param_1 + 0xc),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147fa2506 FUN_147fa2506 body=50 status=ok
// SIG undefined FUN_147fa2506(void)

void FUN_147fa2506(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_14570ecf1(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147fa25b2 FUN_147fa25b2 body=48 status=ok
// SIG undefined FUN_147fa25b2(void)

void FUN_147fa25b2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fa25f8 FUN_147fa25f8 body=54 status=ok
// SIG undefined FUN_147fa25f8(void)

undefined1 FUN_147fa25f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fa26f2(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147fa2656 FUN_147fa2656 body=59 status=ok
// SIG undefined FUN_147fa2656(void)

undefined8 FUN_147fa2656(longlong *param_1)

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



// FUNCTION 147fa26f2 FUN_147fa26f2 body=112 status=ok
// SIG undefined FUN_147fa26f2(void)

longlong * FUN_147fa26f2(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *param_2;
    }
  }
  *param_1 = lVar5;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar5 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  FUN_147f981f8(param_1 + 3,param_2 + 3);
  FUN_147f98248(param_1 + 5,param_2 + 5);
  lVar5 = param_2[8];
  lVar3 = param_2[9];
  lVar4 = param_2[10];
  param_1[7] = param_2[7];
  param_1[8] = lVar5;
  param_1[9] = lVar3;
  param_1[10] = lVar4;
  param_1[0xb] = param_2[0xb];
  return param_1;
}



// FUNCTION 147fa2764 FUN_147fa2764 body=52 status=ok
// SIG undefined FUN_147fa2764(void)

void FUN_147fa2764(longlong param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147fa2798 FUN_147fa2798 body=52 status=ok
// SIG undefined FUN_147fa2798(void)

void FUN_147fa2798(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_146075062(param_2);
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined1 *)((longlong)param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 147fa27cc FUN_147fa27cc body=38 status=ok
// SIG undefined FUN_147fa27cc(void)

void FUN_147fa27cc(undefined8 param_1,longlong param_2)

{
  FUN_146075062(param_2);
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 147fa27f2 FUN_147fa27f2 body=56 status=ok
// SIG undefined FUN_147fa27f2(void)

void FUN_147fa27f2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000147fa281f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147fa2840 FUN_147fa2840 body=76 status=ok
// SIG undefined FUN_147fa2840(void)

undefined8 FUN_147fa2840(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1413a517a(param_2,param_3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x25) = *(undefined8 *)(param_3 + 0x25);
    *(undefined8 *)(param_2 + 0x20) = uVar1;
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 147fa28b4 FUN_147fa28b4 body=59 status=ok
// SIG undefined FUN_147fa28b4(void)

undefined8 FUN_147fa28b4(longlong *param_1)

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



// FUNCTION 147fa28fa FUN_147fa28fa body=64 status=ok
// SIG undefined FUN_147fa28fa(void)

void FUN_147fa28fa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147fa29c8 FUN_147fa29c8 body=100 status=ok
// SIG undefined FUN_147fa29c8(void)

undefined1 FUN_147fa29c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fa2a54 FUN_147fa2a54 body=59 status=ok
// SIG undefined FUN_147fa2a54(void)

undefined8 FUN_147fa2a54(longlong *param_1)

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



// FUNCTION 147fa2b26 FUN_147fa2b26 body=100 status=ok
// SIG undefined FUN_147fa2b26(void)

undefined1 FUN_147fa2b26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined1 *)(param_2 + 8 + lVar3) = *(undefined1 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fa2bb2 FUN_147fa2bb2 body=59 status=ok
// SIG undefined FUN_147fa2bb2(void)

undefined8 FUN_147fa2bb2(longlong *param_1)

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



// FUNCTION 147fa2c54 FUN_147fa2c54 body=122 status=ok
// SIG undefined FUN_147fa2c54(void)

longlong FUN_147fa2c54(longlong param_1,longlong param_2)

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
    FUN_147fa2cce(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147fa2cce FUN_147fa2cce body=241 status=ok
// SIG undefined FUN_147fa2cce(void)

longlong * FUN_147fa2cce(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c52af8(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined4 *)(lVar4 + 8 + lVar7) = *(undefined4 *)(lVar2 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar2 + 0x10 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147fa2dbf FUN_147fa2dbf body=82 status=ok
// SIG undefined FUN_147fa2dbf(void)

void FUN_147fa2dbf(longlong param_1,longlong param_2,int param_3)

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
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147fa2e11 FUN_147fa2e11 body=82 status=ok
// SIG undefined FUN_147fa2e11(void)

void FUN_147fa2e11(longlong param_1,longlong param_2,int param_3)

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
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147fa2e64 FUN_147fa2e64 body=114 status=ok
// SIG undefined FUN_147fa2e64(void)

void FUN_147fa2e64(longlong *param_1,int param_2)

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



// FUNCTION 147fa2ed6 FUN_147fa2ed6 body=116 status=ok
// SIG undefined FUN_147fa2ed6(void)

void FUN_147fa2ed6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 147fa2f4a FUN_147fa2f4a body=325 status=ok
// SIG undefined FUN_147fa2f4a(void)

void FUN_147fa2f4a(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
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



// FUNCTION 147fa3090 FUN_147fa3090 body=114 status=ok
// SIG undefined FUN_147fa3090(void)

void FUN_147fa3090(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 147fa3102 FUN_147fa3102 body=96 status=ok
// SIG undefined FUN_147fa3102(void)

void FUN_147fa3102(longlong param_1,int param_2)

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



// FUNCTION 147fa3162 FUN_147fa3162 body=132 status=ok
// SIG undefined FUN_147fa3162(void)

void FUN_147fa3162(longlong param_1,int param_2)

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



// FUNCTION 147fa31e8 FUN_147fa31e8 body=29 status=ok
// SIG undefined FUN_147fa31e8(void)

undefined8 FUN_147fa31e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fa3220 FUN_147fa3220 body=29 status=ok
// SIG undefined FUN_147fa3220(void)

bool FUN_147fa3220(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147fa323e FUN_147fa323e body=26 status=ok
// SIG undefined FUN_147fa323e(void)

bool FUN_147fa323e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147fa3258 FUN_147fa3258 body=24 status=ok
// SIG undefined FUN_147fa3258(void)

bool FUN_147fa3258(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147fa3270 FUN_147fa3270 body=93 status=ok
// SIG undefined FUN_147fa3270(void)

void FUN_147fa3270(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9e80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acdd360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147fa32ce FUN_147fa32ce body=93 status=ok
// SIG undefined FUN_147fa32ce(void)

void FUN_147fa32ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9e80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acdd360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147fa332c FUN_147fa332c body=126 status=ok
// SIG undefined FUN_147fa332c(void)

void FUN_147fa332c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9e80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acdd360;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147fa339b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147fa33aa FUN_147fa33aa body=58 status=ok
// SIG undefined FUN_147fa33aa(void)

void FUN_147fa33aa(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147fa33e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147fa33e4 FUN_147fa33e4 body=173 status=ok
// SIG undefined FUN_147fa33e4(void)

bool FUN_147fa33e4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa3492 FUN_147fa3492 body=38 status=ok
// SIG undefined FUN_147fa3492(void)

void FUN_147fa3492(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147fa1642(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 147fa34b8 FUN_147fa34b8 body=143 status=ok
// SIG undefined FUN_147fa34b8(void)

void FUN_147fa34b8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x2c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2c)) {
      uVar5 = uVar4 / 0x2c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fa3548 FUN_147fa3548 body=238 status=ok
// SIG undefined FUN_147fa3548(void)

undefined8 * FUN_147fa3548(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_147fa36c6(param_1 + 5,iVar1);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 0x2c);
  }
  return param_1;
}



// FUNCTION 147fa3636 FUN_147fa3636 body=143 status=ok
// SIG undefined FUN_147fa3636(void)

void FUN_147fa3636(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fa36c6 FUN_147fa36c6 body=98 status=ok
// SIG undefined FUN_147fa36c6(void)

undefined8 FUN_147fa36c6(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x2c,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x2c)) {
    uVar5 = uVar2 / 0x2c & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x2c,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147fa3728 FUN_147fa3728 body=480 status=ok
// SIG undefined FUN_147fa3728(void)

longlong * FUN_147fa3728(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147fa3492(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147fa3980(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x49249 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0x28;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      (**(code **)(*param_1 + 0x160))(param_1,lVar3 + lVar5 + -0x28);
      FUN_14021219d(param_1,lVar3 + lVar5 + -0x20);
      FUN_14021219d(param_1,lVar3 + lVar5 + -0x10);
      FUN_147fa39ec(param_1,lVar3 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x38;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_147fa390a(param_2);
    if (0 < (int)local_44) {
      iVar4 = 0;
      do {
        lVar5 = FUN_147fa3944(param_2);
        (**(code **)(*param_1 + 0x160))(param_1,lVar5);
        FUN_14021219d(param_1,lVar5 + 8);
        FUN_14021219d(param_1,lVar5 + 0x18);
        FUN_147fa39ec(param_1,lVar5 + 0x28);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147fa390a FUN_147fa390a body=57 status=ok
// SIG undefined FUN_147fa390a(void)

void FUN_147fa390a(undefined8 *param_1,int param_2)

{
  FUN_147fa3492(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147fa3980(param_1,param_2);
  return;
}



// FUNCTION 147fa3944 FUN_147fa3944 body=59 status=ok
// SIG undefined FUN_147fa3944(void)

longlong FUN_147fa3944(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147fa3636(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_147fa3c93(lVar2);
  return lVar2;
}



// FUNCTION 147fa3980 FUN_147fa3980 body=108 status=ok
// SIG undefined FUN_147fa3980(void)

void FUN_147fa3980(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 147fa39ec FUN_147fa39ec body=363 status=ok
// SIG undefined FUN_147fa39ec(void)

longlong * FUN_147fa39ec(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x2c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x2c);
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
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147fa3c06(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x5d174 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147fa3b58(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x2c;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147fa3c06(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147fa3bca(param_2);
        FUN_147fa3b58(param_1,uVar3);
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



// FUNCTION 147fa3b58 FUN_147fa3b58 body=114 status=ok
// SIG undefined FUN_147fa3b58(void)

longlong * FUN_147fa3b58(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  (**(code **)(*param_1 + 0x160))();
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 8);
  FUN_147d92fa4(param_1,param_2 + 0x10);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x28),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x28) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 147fa3bca FUN_147fa3bca body=59 status=ok
// SIG undefined FUN_147fa3bca(void)

longlong FUN_147fa3bca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147fa34b8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x2c + *param_1;
  FUN_147fa3c72(lVar2);
  return lVar2;
}



// FUNCTION 147fa3c06 FUN_147fa3c06 body=108 status=ok
// SIG undefined FUN_147fa3c06(void)

void FUN_147fa3c06(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x2c,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x2c)) {
      uVar2 = uVar1 / 0x2c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x2c,4);
  }
  return;
}



// FUNCTION 147fa3c72 FUN_147fa3c72 body=33 status=ok
// SIG undefined FUN_147fa3c72(void)

void FUN_147fa3c72(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = DAT_14cb0f120;
  param_1[2] = DAT_14cb0f118;
  param_1[3] = uVar1;
  param_1[4] = DAT_14cb0f128;
  *(undefined1 *)(param_1 + 5) = 7;
  return;
}



// FUNCTION 147fa3c93 FUN_147fa3c93 body=23 status=ok
// SIG undefined FUN_147fa3c93(void)

void FUN_147fa3c93(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 147fa3caa FUN_147fa3caa body=150 status=ok
// SIG undefined FUN_147fa3caa(void)

void FUN_147fa3caa(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x60 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
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
      puVar7 = puVar7 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fa3d40 FUN_147fa3d40 body=315 status=ok
// SIG undefined FUN_147fa3d40(void)

undefined4 *
FUN_147fa3d40(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140f208a0(param_1,local_50);
  FUN_147f98f58(local_48,param_3);
  *(undefined4 *)(local_48 + 0x88) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = FUN_140e95df5(local_48);
  local_68 = param_4;
  cVar1 = FUN_1438c5cb0(param_1,uVar2,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)(local_48 + 0x8c) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0x88) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140e95b44(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa3e7c FUN_147fa3e7c body=114 status=ok
// SIG undefined FUN_147fa3e7c(void)

int FUN_147fa3e7c(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_147fa0788(lVar1 + (longlong)iVar4 * 0x90,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x88 + (longlong)iVar4 * 0x90);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 147fa3eee FUN_147fa3eee body=153 status=ok
// SIG undefined FUN_147fa3eee(void)

void FUN_147fa3eee(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x90 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
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
      puVar7 = puVar7 + 0x24;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fa3f88 FUN_147fa3f88 body=114 status=ok
// SIG undefined FUN_147fa3f88(void)

void FUN_147fa3f88(longlong *param_1,int param_2)

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



// FUNCTION 147fa3ffa FUN_147fa3ffa body=128 status=ok
// SIG undefined FUN_147fa3ffa(void)

void FUN_147fa3ffa(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb277d0;
  if (DAT_14cb27804 != 0) {
    *(int *)(DAT_14cb277d0 + (longlong)DAT_14cb27800 * 0x70) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x70) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb27804) {
    iVar4 = DAT_14cb27800;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x70) = iVar4;
  DAT_14cb27804 = DAT_14cb27804 + 1;
  puVar3 = &DAT_14cb277e0;
  if (DAT_14cb277f0 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb277f0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb27800 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147fa407a FUN_147fa407a body=114 status=ok
// SIG undefined FUN_147fa407a(void)

void FUN_147fa407a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 147fa40ec FUN_147fa40ec body=64 status=ok
// SIG undefined FUN_147fa40ec(void)

void FUN_147fa40ec(void)

{
  if (DAT_14cb27834 != 0) {
    DAT_14cb27834 = 0;
    FUN_1446f8d3c(&DAT_14cb27828,DAT_14cb27830,0,4,4);
  }
  return;
}



// FUNCTION 147fa412c FUN_147fa412c body=90 status=ok
// SIG undefined FUN_147fa412c(void)

void FUN_147fa412c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147fa3f88();
  return;
}



// FUNCTION 147fa4186 FUN_147fa4186 body=97 status=ok
// SIG undefined FUN_147fa4186(void)

float FUN_147fa4186(double *param_1)

{
  byte bVar1;
  double dVar2;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 < 2) {
    return (float)*param_1;
  }
  if (bVar1 == 2) {
    dVar2 = *param_1 * *param_1 + param_1[1] * param_1[1];
  }
  else {
    if (bVar1 != 3) {
      return 0.0;
    }
    dVar2 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  }
  return (float)SQRT(dVar2);
}



// FUNCTION 147fa4230 FUN_147fa4230 body=167 status=ok
// SIG undefined FUN_147fa4230(void)

ulonglong FUN_147fa4230(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_147fa42d8();
    local_31 = 0;
    uVar3 = FUN_14477b072(param_1,DAT_14cb27dd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_31);
    uVar4 = CONCAT71((int7)((ulonglong)&local_31 >> 8),local_31);
    plVar2 = (longlong *)param_1[6];
    param_1[5] = 0;
    param_1[6] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa42d8 FUN_147fa42d8 body=259 status=ok
// SIG undefined FUN_147fa42d8(void)

void FUN_147fa42d8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_147fb6880(*(longlong *)(param_2 + 0x18),&local_30);
    if ((undefined8 *)(param_1 + 0x28) != &local_30) {
      *(undefined8 *)(param_1 + 0x28) = local_30;
      local_30 = 0;
      plVar2 = *(longlong **)(param_1 + 0x30);
      *(longlong **)(param_1 + 0x30) = local_28;
      local_28 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
  }
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_2 + 0xd8);
  lVar4 = *(longlong *)(param_2 + 8);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar4);
  }
  bVar3 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x38) = lVar4;
  plVar2 = *(longlong **)(param_2 + 200);
  lVar4 = *plVar2;
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = *plVar2;
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar4;
  *(short *)(param_1 + 0x48) = (short)plVar2[1];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa43f4 FUN_147fa43f4 body=183 status=ok
// SIG undefined FUN_147fa43f4(void)

undefined4 FUN_147fa43f4(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    FUN_147fa42d8();
    local_44 = 0;
    uVar3 = FUN_14477b072(param_1,DAT_14cb27e10);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_44);
    uVar4 = local_44;
    plVar2 = (longlong *)param_1[6];
    param_1[5] = 0;
    param_1[6] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa44c4 FUN_147fa44c4 body=67 status=ok
// SIG undefined FUN_147fa44c4(void)

void FUN_147fa44c4(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_147fa42d8();
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    return;
  }
  uVar1 = FUN_14477b072(param_1,DAT_14cb27e60);
                    /* WARNING: Could not recover jumptable at 0x000147fa4504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 147fa4508 FUN_147fa4508 body=103 status=ok
// SIG undefined FUN_147fa4508(void)

void FUN_147fa4508(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 10) & 2) != 0) {
    uVar3 = FUN_14477b072(param_1,DAT_14cb27e70);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,0);
  }
  plVar2 = (longlong *)param_1[6];
  param_1[5] = 0;
  param_1[6] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  return;
}



// FUNCTION 147fa4570 FUN_147fa4570 body=99 status=ok
// SIG undefined FUN_147fa4570(void)

void FUN_147fa4570(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 10) & 4) != 0) {
    local_1c = param_3;
    uVar1 = FUN_14477b072(param_1,DAT_14cb27e50);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa4610 FUN_147fa4610 body=181 status=ok
// SIG undefined FUN_147fa4610(void)

void FUN_147fa4610(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a5dc74(local_30);
  FUN_140008f88(param_3,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa46cc FUN_147fa46cc body=193 status=ok
// SIG undefined FUN_147fa46cc(void)

void FUN_147fa46cc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0xffff;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_147fa4bf6(param_1,puVar2,local_28);
  *(bool *)param_3 = lVar1 != 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa478e FUN_147fa478e body=241 status=ok
// SIG undefined FUN_147fa478e(void)

void FUN_147fa478e(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [37];
  undefined1 local_23;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_22 = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_22);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_22);
  }
  puVar1 = *(undefined2 **)(param_2 + 0x38);
  local_23 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_23);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_23);
  }
  puVar2 = &local_22;
  if (puVar1 != (undefined2 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147fa4880(param_1,puVar2,local_23);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa4880 FUN_147fa4880 body=177 status=ok
// SIG undefined FUN_147fa4880(void)

void FUN_147fa4880(longlong param_1,undefined2 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined2 local_28 [4];
  undefined8 local_20;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_147fa4915;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      local_20 = 0;
      local_18 = 0xffff;
      local_28[0] = *(undefined2 *)(param_1 + 0x4a);
      local_16 = *param_2;
      local_14 = param_3;
      FUN_147fb6332(*(longlong *)(param_1 + 0x28),*(longlong *)(param_1 + 0x38),local_28);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_147fa4915:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fa4932 FUN_147fa4932 body=197 status=ok
// SIG undefined FUN_147fa4932(void)

void FUN_147fa4932(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_141215e22(local_40);
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147fa49f8(param_1,puVar1);
  FUN_1401f9f5c(local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa49f8 FUN_147fa49f8 body=156 status=ok
// SIG undefined FUN_147fa49f8(void)

void FUN_147fa49f8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_147fa4a78;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      local_28 = *(undefined8 *)(param_2 + 0x18);
      local_20 = *(undefined4 *)(param_2 + 8);
      uStack_1c = *(undefined4 *)(param_2 + 0xc);
      uStack_18 = *(undefined4 *)(param_2 + 0x10);
      uStack_14 = *(undefined4 *)(param_2 + 0x14);
      FUN_147fab436(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x58));
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_147fa4a78:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fa4a96 FUN_147fa4a96 body=306 status=ok
// SIG undefined FUN_147fa4a96(void)

void FUN_147fa4a96(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0xffff;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  FUN_1446ddbd2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = (longlong *)0x0;
  lVar1 = FUN_147fa4bf6(param_1,puVar2);
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  else {
    *(longlong *)(param_2 + 0x38) = lVar1;
    *(longlong **)(param_2 + 0x30) = local_40;
    if (param_3 != 0) {
      (**(code **)(*local_40 + 0x118))(local_40,param_3,lVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa4bf6 FUN_147fa4bf6 body=274 status=ok
// SIG undefined FUN_147fa4bf6(void)

longlong FUN_147fa4bf6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    lVar9 = 0;
    do {
      if (iVar6 == 0) goto LAB_147fa4c60;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
    lVar9 = *(longlong *)(param_1 + 0x28);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      local_50 = *(undefined8 *)(lVar9 + 0x10);
      local_48 = *(undefined4 *)(lVar9 + 0x18);
      local_40 = 0;
      uVar7 = FUN_147faccd2(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(param_1 + 0x48),
                            &local_50,&local_40);
      local_68 = &local_58;
      local_58 = 0;
      lVar8 = FUN_1438c790f(param_2,lVar9,uVar7,local_40);
      lVar9 = 0;
      uVar7 = 0;
      if ((lVar8 != 0) &&
         (cVar5 = FUN_147fba38d(local_58,param_2), lVar9 = lVar8, uVar7 = local_58, cVar5 == '\0'))
      {
        lVar9 = 0;
        uVar7 = 0;
      }
      *param_3 = uVar7;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_147fa4c60:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 147fa4d0e FUN_147fa4d0e body=156 status=ok
// SIG undefined FUN_147fa4d0e(void)

void FUN_147fa4d0e(longlong param_1,longlong param_2)

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
  *(char *)(param_1 + 0x50) = '\x02' - (local_1c == 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa4dac FUN_147fa4dac body=161 status=ok
// SIG undefined FUN_147fa4dac(void)

ulonglong FUN_147fa4dac(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_46;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 4;
  local_46 = 0x1ffffffffffff;
  local_38 = 0;
  local_30 = 0xffff;
  local_28 = 0;
  FUN_147fa4e4e(&local_68);
  uVar1 = FUN_14477b072(param_1,DAT_14cb27f78);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_28);
  FUN_147fa6ed6(&local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa4e4e FUN_147fa4e4e body=99 status=ok
// SIG undefined FUN_147fa4e4e(void)

longlong FUN_147fa4e4e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147fa6ab2();
  FUN_147faa350(param_1 + 0x10,param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x30);
    }
  }
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 147fa4eb2 FUN_147fa4eb2 body=150 status=ok
// SIG undefined FUN_147fa4eb2(void)

void FUN_147fa4eb2(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_36;
  undefined8 local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 4;
  local_36 = 0x1ffffffffffff;
  local_28 = 0;
  local_20 = 0xffff;
  FUN_147fa4e4e(&local_58);
  uVar1 = FUN_14477b072(param_1,DAT_14cb27f88);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  FUN_147fa6ed6(&local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa4f4a FUN_147fa4f4a body=150 status=ok
// SIG undefined FUN_147fa4f4a(void)

void FUN_147fa4f4a(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_36;
  undefined8 local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 4;
  local_36 = 0x1ffffffffffff;
  local_28 = 0;
  local_20 = 0xffff;
  FUN_147fa4e4e(&local_58);
  uVar1 = FUN_14477b072(param_1,DAT_14cb27f98);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  FUN_147fa6ed6(&local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa4ffc FUN_147fa4ffc body=75 status=ok
// SIG undefined FUN_147fa4ffc(void)

undefined1 FUN_147fa4ffc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  FUN_147fa42d8();
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_1 + 0x51) < '\0') {
    FUN_147fa4f4a(param_1,param_3);
    uVar1 = *(undefined1 *)(param_1 + 0x50);
  }
  else {
    if ((*(byte *)(param_1 + 0x52) & 2) != 0) {
      uVar1 = FUN_147fa4dac(param_1,param_3);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 147fa5048 FUN_147fa5048 body=223 status=ok
// SIG undefined FUN_147fa5048(void)

void FUN_147fa5048(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)((longlong)param_1 + 0x51) & 0x20) != 0) {
    FUN_147fa4eb2(param_1,param_3);
  }
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_14119d0a4(lVar3);
    local_48 = 0;
    FUN_14485c47a(&local_48,param_1);
    FUN_1406338de(uVar4,local_48);
    uVar4 = FUN_144a88394(lVar3);
    if (param_1 != (longlong *)0x0) {
      FUN_1410d4dde(uVar4,param_1);
    }
  }
  plVar2 = (longlong *)param_1[6];
  param_1[5] = 0;
  param_1[6] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa5128 FUN_147fa5128 body=115 status=ok
// SIG undefined FUN_147fa5128(void)

void FUN_147fa5128(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [2];
  undefined4 local_2a;
  undefined4 uStack_26;
  undefined4 uStack_22;
  undefined4 uStack_1e;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)((longlong)param_1 + 0x51) & 0x40) != 0) {
    local_2a = *param_4;
    uStack_26 = param_4[1];
    uStack_22 = param_4[2];
    uStack_1e = param_4[3];
    local_1a = *(undefined2 *)(param_4 + 4);
    local_2c[0] = param_3;
    uVar1 = FUN_14477b072(local_2a,DAT_14cb27fb8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_2c);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa519c FUN_147fa519c body=162 status=ok
// SIG undefined FUN_147fa519c(void)

undefined1 FUN_147fa519c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)((longlong)param_1 + 0x52) & 1) == 0) {
    if ((*(byte *)((longlong)param_1 + 0x52) & 4) != 0) {
      local_1c = 0;
      local_20 = param_3;
      uVar2 = FUN_14477b072(param_1,DAT_14cb27fc8);
      (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_20);
      uVar1 = local_1c;
      goto LAB_147fa5221;
    }
  }
  else {
    local_20 = param_3;
    uVar2 = FUN_14477b072(param_1,DAT_14cb27fa8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_20);
  }
  uVar1 = (undefined1)param_1[10];
LAB_147fa5221:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fa5346 FUN_147fa5346 body=101 status=ok
// SIG undefined FUN_147fa5346(void)

undefined1 FUN_147fa5346(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fa53d4 FUN_147fa53d4 body=59 status=ok
// SIG undefined FUN_147fa53d4(void)

undefined8 FUN_147fa53d4(longlong *param_1)

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



// FUNCTION 147fa54f0 FUN_147fa54f0 body=59 status=ok
// SIG undefined FUN_147fa54f0(void)

undefined8 FUN_147fa54f0(longlong *param_1)

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



// FUNCTION 147fa5666 FUN_147fa5666 body=59 status=ok
// SIG undefined FUN_147fa5666(void)

undefined8 FUN_147fa5666(longlong *param_1)

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



// FUNCTION 147fa5706 FUN_147fa5706 body=34 status=ok
// SIG undefined FUN_147fa5706(void)

undefined8 FUN_147fa5706(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa5728 FUN_147fa5728 body=55 status=ok
// SIG undefined FUN_147fa5728(void)

void FUN_147fa5728(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27898 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27898 =
         FUN_140002ddd(FUN_14644e7b9,uVar1,L"StateTreeBooleanOperationPropertyFunctionInstanceData")
    ;
  }
  return;
}



// FUNCTION 147fa576e FUN_147fa576e body=34 status=ok
// SIG undefined FUN_147fa576e(void)

undefined8 FUN_147fa576e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa5866 FUN_147fa5866 body=59 status=ok
// SIG undefined FUN_147fa5866(void)

undefined8 FUN_147fa5866(longlong *param_1)

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



// FUNCTION 147fa5906 FUN_147fa5906 body=34 status=ok
// SIG undefined FUN_147fa5906(void)

undefined8 FUN_147fa5906(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa5928 FUN_147fa5928 body=55 status=ok
// SIG undefined FUN_147fa5928(void)

void FUN_147fa5928(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27898 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27898 =
         FUN_140002ddd(FUN_14644e7b9,uVar1,L"StateTreeBooleanOperationPropertyFunctionInstanceData")
    ;
  }
  return;
}



// FUNCTION 147fa5a34 FUN_147fa5a34 body=59 status=ok
// SIG undefined FUN_147fa5a34(void)

undefined8 FUN_147fa5a34(longlong *param_1)

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



// FUNCTION 147fa5ad4 FUN_147fa5ad4 body=34 status=ok
// SIG undefined FUN_147fa5ad4(void)

undefined8 FUN_147fa5ad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa5af6 FUN_147fa5af6 body=55 status=ok
// SIG undefined FUN_147fa5af6(void)

void FUN_147fa5af6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27898 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27898 =
         FUN_140002ddd(FUN_14644e7b9,uVar1,L"StateTreeBooleanOperationPropertyFunctionInstanceData")
    ;
  }
  return;
}



// FUNCTION 147fa5b98 FUN_147fa5b98 body=59 status=ok
// SIG undefined FUN_147fa5b98(void)

undefined8 FUN_147fa5b98(longlong *param_1)

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



// FUNCTION 147fa5d0e FUN_147fa5d0e body=59 status=ok
// SIG undefined FUN_147fa5d0e(void)

undefined8 FUN_147fa5d0e(longlong *param_1)

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



// FUNCTION 147fa5dae FUN_147fa5dae body=34 status=ok
// SIG undefined FUN_147fa5dae(void)

undefined8 FUN_147fa5dae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa5dd0 FUN_147fa5dd0 body=55 status=ok
// SIG undefined FUN_147fa5dd0(void)

void FUN_147fa5dd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb278f8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb278f8 =
         FUN_140002ddd(FUN_14644ea01,uVar1,
                       L"StateTreeBooleanNotOperationPropertyFunctionInstanceData");
  }
  return;
}



// FUNCTION 147fa5e96 FUN_147fa5e96 body=59 status=ok
// SIG undefined FUN_147fa5e96(void)

undefined8 FUN_147fa5e96(longlong *param_1)

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



// FUNCTION 147fa5f94 FUN_147fa5f94 body=111 status=ok
// SIG undefined FUN_147fa5f94(void)

undefined1 FUN_147fa5f94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar4 = *(longlong *)(param_3 + lVar5);
      if ((bVar3 & 1) != 0) {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_14689c22e();
          lVar4 = *(longlong *)(param_3 + lVar5);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar5);
      *plVar1 = lVar4;
      uVar2 = *(undefined8 *)(param_3 + 0xf + lVar5);
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar5);
      *(undefined8 *)((longlong)plVar1 + 0xf) = uVar2;
      lVar5 = lVar5 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fa602c FUN_147fa602c body=59 status=ok
// SIG undefined FUN_147fa602c(void)

undefined8 FUN_147fa602c(longlong *param_1)

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



// FUNCTION 147fa6120 FUN_147fa6120 body=126 status=ok
// SIG undefined FUN_147fa6120(void)

undefined1 FUN_147fa6120(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + lVar4) = *(undefined2 *)(param_3 + lVar4);
      lVar3 = *(longlong *)(param_3 + 8 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_14689c22e();
          lVar3 = *(longlong *)(param_3 + 8 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar4;
      *(longlong *)(lVar1 + 8) = lVar3;
      *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_3 + 0x10 + lVar4);
      *(undefined1 *)(lVar1 + 0x14) = *(undefined1 *)(param_3 + 0x14 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fa61c6 FUN_147fa61c6 body=59 status=ok
// SIG undefined FUN_147fa61c6(void)

undefined8 FUN_147fa61c6(longlong *param_1)

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



// FUNCTION 147fa62ee FUN_147fa62ee body=59 status=ok
// SIG undefined FUN_147fa62ee(void)

undefined8 FUN_147fa62ee(longlong *param_1)

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



// FUNCTION 147fa640a FUN_147fa640a body=59 status=ok
// SIG undefined FUN_147fa640a(void)

undefined8 FUN_147fa640a(longlong *param_1)

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



// FUNCTION 147fa64e4 FUN_147fa64e4 body=56 status=ok
// SIG undefined FUN_147fa64e4(void)

void FUN_147fa64e4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000147fa6511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147fa6532 FUN_147fa6532 body=54 status=ok
// SIG undefined FUN_147fa6532(void)

undefined1 FUN_147fa6532(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fa6664(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147fa6590 FUN_147fa6590 body=59 status=ok
// SIG undefined FUN_147fa6590(void)

undefined8 FUN_147fa6590(longlong *param_1)

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



// FUNCTION 147fa65d6 FUN_147fa65d6 body=64 status=ok
// SIG undefined FUN_147fa65d6(void)

void FUN_147fa65d6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x18);
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
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147fa6664 FUN_147fa6664 body=81 status=ok
// SIG undefined FUN_147fa6664(void)

longlong * FUN_147fa6664(longlong *param_1,longlong *param_2)

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
  param_1[1] = param_2[1];
  FUN_147fa66b6(param_1 + 2,param_2 + 2);
  *(int *)(param_1 + 4) = (int)param_2[4];
  return param_1;
}



// FUNCTION 147fa66b6 FUN_147fa66b6 body=80 status=ok
// SIG undefined FUN_147fa66b6(void)

undefined8 * FUN_147fa66b6(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  return param_1;
}



// FUNCTION 147fa67c4 FUN_147fa67c4 body=122 status=ok
// SIG undefined FUN_147fa67c4(void)

undefined1 FUN_147fa67c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_14689c22e();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)(plVar1 + 4) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      plVar1[5] = *(longlong *)(param_3 + 0x28 + lVar13);
      lVar13 = lVar13 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fa6866 FUN_147fa6866 body=59 status=ok
// SIG undefined FUN_147fa6866(void)

undefined8 FUN_147fa6866(longlong *param_1)

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



// FUNCTION 147fa6980 FUN_147fa6980 body=83 status=ok
// SIG undefined FUN_147fa6980(void)

undefined8 FUN_147fa6980(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fa6ab2(param_2,param_3);
    FUN_147fa6b02(param_2 + 0x10,param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 147fa69fc FUN_147fa69fc body=59 status=ok
// SIG undefined FUN_147fa69fc(void)

undefined8 FUN_147fa69fc(longlong *param_1)

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



// FUNCTION 147fa6a42 FUN_147fa6a42 body=34 status=ok
// SIG undefined FUN_147fa6a42(void)

void FUN_147fa6a42(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1459cb720(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147fa6ab2 FUN_147fa6ab2 body=79 status=ok
// SIG undefined FUN_147fa6ab2(void)

undefined8 * FUN_147fa6ab2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fa6b62(param_1,iVar1);
      FUN_147fa6bd5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fa6b02 FUN_147fa6b02 body=95 status=ok
// SIG undefined FUN_147fa6b02(void)

undefined8 * FUN_147fa6b02(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459cb7cc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fa6c48(param_1,iVar1);
      FUN_147fa6cbb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fa6b62 FUN_147fa6b62 body=115 status=ok
// SIG undefined FUN_147fa6b62(void)

void FUN_147fa6b62(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fa6bd5 FUN_147fa6bd5 body=114 status=ok
// SIG undefined FUN_147fa6bd5(void)

void FUN_147fa6bd5(longlong param_1,longlong param_2,int param_3)

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
  byte bVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = 0;
    bVar10 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar11);
      *(longlong *)(param_1 + lVar11) = lVar2;
      if ((lVar2 != 0 & bVar10) == 1) {
        FUN_14689c22e();
        bVar10 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar11;
      lVar1 = param_2 + lVar11;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      lVar11 = lVar11 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fa6c48 FUN_147fa6c48 body=115 status=ok
// SIG undefined FUN_147fa6c48(void)

void FUN_147fa6c48(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fa6cbb FUN_147fa6cbb body=52 status=ok
// SIG undefined FUN_147fa6cbb(void)

void FUN_147fa6cbb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fa6cf0(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 147fa6cf0 FUN_147fa6cf0 body=88 status=ok
// SIG undefined FUN_147fa6cf0(void)

longlong * FUN_147fa6cf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  return param_1;
}



// FUNCTION 147fa6dc2 FUN_147fa6dc2 body=54 status=ok
// SIG undefined FUN_147fa6dc2(void)

undefined1 FUN_147fa6dc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fa4e4e(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147fa6e20 FUN_147fa6e20 body=59 status=ok
// SIG undefined FUN_147fa6e20(void)

undefined8 FUN_147fa6e20(longlong *param_1)

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



// FUNCTION 147fa6e66 FUN_147fa6e66 body=34 status=ok
// SIG undefined FUN_147fa6e66(void)

void FUN_147fa6e66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_147fa6ed6(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147fa6ed6 FUN_147fa6ed6 body=59 status=ok
// SIG undefined FUN_147fa6ed6(void)

void FUN_147fa6ed6(longlong *param_1)

{
  FUN_147fa6f11(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fa6f11 FUN_147fa6f11 body=97 status=ok
// SIG undefined FUN_147fa6f11(void)

void FUN_147fa6f11(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar4 = 0x80;
    do {
      plVar3 = *(longlong **)(param_1 + -8 + lVar4);
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
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 147fa6fda FUN_147fa6fda body=113 status=ok
// SIG undefined FUN_147fa6fda(void)

undefined1 FUN_147fa6fda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_14689c22e();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x15 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x15) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x19) = uVar8;
      *(undefined4 *)((longlong)plVar1 + 0x1d) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x21) = uVar10;
      lVar13 = lVar13 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fa7074 FUN_147fa7074 body=59 status=ok
// SIG undefined FUN_147fa7074(void)

undefined8 FUN_147fa7074(longlong *param_1)

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



// FUNCTION 147fa717c FUN_147fa717c body=54 status=ok
// SIG undefined FUN_147fa717c(void)

undefined1 FUN_147fa717c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fa72f6(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147fa71da FUN_147fa71da body=59 status=ok
// SIG undefined FUN_147fa71da(void)

undefined8 FUN_147fa71da(longlong *param_1)

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



// FUNCTION 147fa7220 FUN_147fa7220 body=34 status=ok
// SIG undefined FUN_147fa7220(void)

void FUN_147fa7220(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_147fa7290(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147fa7290 FUN_147fa7290 body=59 status=ok
// SIG undefined FUN_147fa7290(void)

void FUN_147fa7290(longlong *param_1)

{
  FUN_147fa72cb(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fa72cb FUN_147fa72cb body=42 status=ok
// SIG undefined FUN_147fa72cb(void)

void FUN_147fa72cb(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_1401f9f5c(param_1);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147fa72f6 FUN_147fa72f6 body=95 status=ok
// SIG undefined FUN_147fa72f6(void)

longlong FUN_147fa72f6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147fa7356();
  FUN_147fa73a6(param_1 + 0x10,param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 147fa7356 FUN_147fa7356 body=79 status=ok
// SIG undefined FUN_147fa7356(void)

undefined8 * FUN_147fa7356(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fa7406(param_1,iVar1);
      FUN_147fa7479(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fa73a6 FUN_147fa73a6 body=95 status=ok
// SIG undefined FUN_147fa73a6(void)

undefined8 * FUN_147fa73a6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147fa72cb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fa74e4(param_1,iVar1);
      FUN_147fa7546(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fa7406 FUN_147fa7406 body=115 status=ok
// SIG undefined FUN_147fa7406(void)

void FUN_147fa7406(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fa7479 FUN_147fa7479 body=106 status=ok
// SIG undefined FUN_147fa7479(void)

void FUN_147fa7479(longlong param_1,longlong param_2,int param_3)

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
  byte bVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = 0;
    bVar10 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar11);
      *(longlong *)(param_1 + lVar11) = lVar2;
      if ((lVar2 != 0 & bVar10) == 1) {
        FUN_14689c22e();
        bVar10 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar11;
      lVar1 = param_2 + lVar11;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x19);
      uVar8 = *(undefined4 *)(lVar1 + 0x1d);
      uVar9 = *(undefined4 *)(lVar1 + 0x21);
      *(undefined4 *)(lVar2 + 0x15) = *(undefined4 *)(lVar1 + 0x15);
      *(undefined4 *)(lVar2 + 0x19) = uVar7;
      *(undefined4 *)(lVar2 + 0x1d) = uVar8;
      *(undefined4 *)(lVar2 + 0x21) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      lVar11 = lVar11 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fa74e4 FUN_147fa74e4 body=98 status=ok
// SIG undefined FUN_147fa74e4(void)

void FUN_147fa74e4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fa7546 FUN_147fa7546 body=108 status=ok
// SIG undefined FUN_147fa7546(void)

void FUN_147fa7546(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar2);
      *puVar1 = *(undefined8 *)(param_2 + lVar2);
      puVar1[1] = 0;
      puVar1[2] = 0;
      FUN_1401fa0f0(puVar1 + 1,*(undefined8 *)(param_2 + 8 + lVar2),
                    *(undefined8 *)(param_2 + 0x10 + lVar2));
      puVar1[3] = *(undefined8 *)(param_2 + 0x18 + lVar2);
      lVar2 = lVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fa7638 FUN_147fa7638 body=59 status=ok
// SIG undefined FUN_147fa7638(void)

undefined8 FUN_147fa7638(longlong *param_1)

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



// FUNCTION 147fa77ae FUN_147fa77ae body=59 status=ok
// SIG undefined FUN_147fa77ae(void)

undefined8 FUN_147fa77ae(longlong *param_1)

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



// FUNCTION 147fa784e FUN_147fa784e body=34 status=ok
// SIG undefined FUN_147fa784e(void)

undefined8 FUN_147fa784e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa7870 FUN_147fa7870 body=55 status=ok
// SIG undefined FUN_147fa7870(void)

void FUN_147fa7870(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27ad8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27ad8 =
         FUN_140002ddd(FUN_14644f2bb,uVar1,L"StateTreeFloatCombinaisonPropertyFunctionInstanceData")
    ;
  }
  return;
}



// FUNCTION 147fa797c FUN_147fa797c body=59 status=ok
// SIG undefined FUN_147fa797c(void)

undefined8 FUN_147fa797c(longlong *param_1)

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



// FUNCTION 147fa7a1c FUN_147fa7a1c body=34 status=ok
// SIG undefined FUN_147fa7a1c(void)

undefined8 FUN_147fa7a1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa7a3e FUN_147fa7a3e body=55 status=ok
// SIG undefined FUN_147fa7a3e(void)

void FUN_147fa7a3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27ad8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27ad8 =
         FUN_140002ddd(FUN_14644f2bb,uVar1,L"StateTreeFloatCombinaisonPropertyFunctionInstanceData")
    ;
  }
  return;
}



// FUNCTION 147fa7b4a FUN_147fa7b4a body=59 status=ok
// SIG undefined FUN_147fa7b4a(void)

undefined8 FUN_147fa7b4a(longlong *param_1)

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



// FUNCTION 147fa7bea FUN_147fa7bea body=34 status=ok
// SIG undefined FUN_147fa7bea(void)

undefined8 FUN_147fa7bea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa7c0c FUN_147fa7c0c body=55 status=ok
// SIG undefined FUN_147fa7c0c(void)

void FUN_147fa7c0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27ad8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27ad8 =
         FUN_140002ddd(FUN_14644f2bb,uVar1,L"StateTreeFloatCombinaisonPropertyFunctionInstanceData")
    ;
  }
  return;
}



// FUNCTION 147fa7d18 FUN_147fa7d18 body=59 status=ok
// SIG undefined FUN_147fa7d18(void)

undefined8 FUN_147fa7d18(longlong *param_1)

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



// FUNCTION 147fa7db8 FUN_147fa7db8 body=34 status=ok
// SIG undefined FUN_147fa7db8(void)

undefined8 FUN_147fa7db8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa7dda FUN_147fa7dda body=55 status=ok
// SIG undefined FUN_147fa7dda(void)

void FUN_147fa7dda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27ad8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27ad8 =
         FUN_140002ddd(FUN_14644f2bb,uVar1,L"StateTreeFloatCombinaisonPropertyFunctionInstanceData")
    ;
  }
  return;
}



// FUNCTION 147fa7e7e FUN_147fa7e7e body=59 status=ok
// SIG undefined FUN_147fa7e7e(void)

undefined8 FUN_147fa7e7e(longlong *param_1)

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



// FUNCTION 147fa7ff4 FUN_147fa7ff4 body=59 status=ok
// SIG undefined FUN_147fa7ff4(void)

undefined8 FUN_147fa7ff4(longlong *param_1)

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



// FUNCTION 147fa8094 FUN_147fa8094 body=34 status=ok
// SIG undefined FUN_147fa8094(void)

undefined8 FUN_147fa8094(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa80b6 FUN_147fa80b6 body=55 status=ok
// SIG undefined FUN_147fa80b6(void)

void FUN_147fa80b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27b50 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27b50 =
         FUN_140002ddd(FUN_14644f595,uVar1,L"StateTreeSingleFloatPropertyFunctionInstanceData");
  }
  return;
}



// FUNCTION 147fa81c2 FUN_147fa81c2 body=59 status=ok
// SIG undefined FUN_147fa81c2(void)

undefined8 FUN_147fa81c2(longlong *param_1)

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



// FUNCTION 147fa8262 FUN_147fa8262 body=34 status=ok
// SIG undefined FUN_147fa8262(void)

undefined8 FUN_147fa8262(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa8284 FUN_147fa8284 body=55 status=ok
// SIG undefined FUN_147fa8284(void)

void FUN_147fa8284(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27b50 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27b50 =
         FUN_140002ddd(FUN_14644f595,uVar1,L"StateTreeSingleFloatPropertyFunctionInstanceData");
  }
  return;
}



// FUNCTION 147fa832a FUN_147fa832a body=65 status=ok
// SIG undefined FUN_147fa832a(void)

undefined2 FUN_147fa832a(longlong *param_1,undefined2 *param_2)

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



// FUNCTION 147fa843a FUN_147fa843a body=59 status=ok
// SIG undefined FUN_147fa843a(void)

undefined8 FUN_147fa843a(longlong *param_1)

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



// FUNCTION 147fa855a FUN_147fa855a body=59 status=ok
// SIG undefined FUN_147fa855a(void)

undefined8 FUN_147fa855a(longlong *param_1)

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



// FUNCTION 147fa86d0 FUN_147fa86d0 body=59 status=ok
// SIG undefined FUN_147fa86d0(void)

undefined8 FUN_147fa86d0(longlong *param_1)

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



// FUNCTION 147fa8770 FUN_147fa8770 body=34 status=ok
// SIG undefined FUN_147fa8770(void)

undefined8 FUN_147fa8770(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa8792 FUN_147fa8792 body=55 status=ok
// SIG undefined FUN_147fa8792(void)

void FUN_147fa8792(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27bc8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27bc8 =
         FUN_140002ddd(FUN_14644f841,uVar1,L"StateTreeMakeIntervalPropertyFunctionInstanceData");
  }
  return;
}



// FUNCTION 147fa884e FUN_147fa884e body=59 status=ok
// SIG undefined FUN_147fa884e(void)

undefined8 FUN_147fa884e(longlong *param_1)

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



// FUNCTION 147fa89c4 FUN_147fa89c4 body=59 status=ok
// SIG undefined FUN_147fa89c4(void)

undefined8 FUN_147fa89c4(longlong *param_1)

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



// FUNCTION 147fa8a64 FUN_147fa8a64 body=34 status=ok
// SIG undefined FUN_147fa8a64(void)

undefined8 FUN_147fa8a64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa8a86 FUN_147fa8a86 body=55 status=ok
// SIG undefined FUN_147fa8a86(void)

void FUN_147fa8a86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27bf8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27bf8 =
         FUN_140002ddd(FUN_14644f965,uVar1,L"StateTreeIntCombinaisonPropertyFunctionInstanceData");
  }
  return;
}



// FUNCTION 147fa8b92 FUN_147fa8b92 body=59 status=ok
// SIG undefined FUN_147fa8b92(void)

undefined8 FUN_147fa8b92(longlong *param_1)

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



// FUNCTION 147fa8c32 FUN_147fa8c32 body=34 status=ok
// SIG undefined FUN_147fa8c32(void)

undefined8 FUN_147fa8c32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa8c54 FUN_147fa8c54 body=55 status=ok
// SIG undefined FUN_147fa8c54(void)

void FUN_147fa8c54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27bf8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27bf8 =
         FUN_140002ddd(FUN_14644f965,uVar1,L"StateTreeIntCombinaisonPropertyFunctionInstanceData");
  }
  return;
}



// FUNCTION 147fa8d60 FUN_147fa8d60 body=59 status=ok
// SIG undefined FUN_147fa8d60(void)

undefined8 FUN_147fa8d60(longlong *param_1)

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



// FUNCTION 147fa8e00 FUN_147fa8e00 body=34 status=ok
// SIG undefined FUN_147fa8e00(void)

undefined8 FUN_147fa8e00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa8e22 FUN_147fa8e22 body=55 status=ok
// SIG undefined FUN_147fa8e22(void)

void FUN_147fa8e22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27bf8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27bf8 =
         FUN_140002ddd(FUN_14644f965,uVar1,L"StateTreeIntCombinaisonPropertyFunctionInstanceData");
  }
  return;
}



// FUNCTION 147fa8f2e FUN_147fa8f2e body=59 status=ok
// SIG undefined FUN_147fa8f2e(void)

undefined8 FUN_147fa8f2e(longlong *param_1)

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



// FUNCTION 147fa8fce FUN_147fa8fce body=34 status=ok
// SIG undefined FUN_147fa8fce(void)

undefined8 FUN_147fa8fce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa8ff0 FUN_147fa8ff0 body=55 status=ok
// SIG undefined FUN_147fa8ff0(void)

void FUN_147fa8ff0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27bf8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27bf8 =
         FUN_140002ddd(FUN_14644f965,uVar1,L"StateTreeIntCombinaisonPropertyFunctionInstanceData");
  }
  return;
}



// FUNCTION 147fa9094 FUN_147fa9094 body=59 status=ok
// SIG undefined FUN_147fa9094(void)

undefined8 FUN_147fa9094(longlong *param_1)

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



// FUNCTION 147fa920a FUN_147fa920a body=59 status=ok
// SIG undefined FUN_147fa920a(void)

undefined8 FUN_147fa920a(longlong *param_1)

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



// FUNCTION 147fa92aa FUN_147fa92aa body=34 status=ok
// SIG undefined FUN_147fa92aa(void)

undefined8 FUN_147fa92aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa92cc FUN_147fa92cc body=55 status=ok
// SIG undefined FUN_147fa92cc(void)

void FUN_147fa92cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27c70 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27c70 =
         FUN_140002ddd(FUN_14644fc3f,uVar1,L"StateTreeSingleIntPropertyFunctionInstanceData");
  }
  return;
}



// FUNCTION 147fa93d8 FUN_147fa93d8 body=59 status=ok
// SIG undefined FUN_147fa93d8(void)

undefined8 FUN_147fa93d8(longlong *param_1)

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



// FUNCTION 147fa9478 FUN_147fa9478 body=34 status=ok
// SIG undefined FUN_147fa9478(void)

undefined8 FUN_147fa9478(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fa949a FUN_147fa949a body=55 status=ok
// SIG undefined FUN_147fa949a(void)

void FUN_147fa949a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb27c70 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb27c70 =
         FUN_140002ddd(FUN_14644fc3f,uVar1,L"StateTreeSingleIntPropertyFunctionInstanceData");
  }
  return;
}



// FUNCTION 147fa95a6 FUN_147fa95a6 body=59 status=ok
// SIG undefined FUN_147fa95a6(void)

undefined8 FUN_147fa95a6(longlong *param_1)

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



// FUNCTION 147fa96b2 FUN_147fa96b2 body=59 status=ok
// SIG undefined FUN_147fa96b2(void)

undefined8 FUN_147fa96b2(longlong *param_1)

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



// FUNCTION 147fa9792 FUN_147fa9792 body=115 status=ok
// SIG undefined FUN_147fa9792(void)

undefined1 FUN_147fa9792(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + lVar3) = *(undefined2 *)(param_3 + lVar3);
      *(undefined2 *)(param_2 + 2 + lVar3) = *(undefined2 *)(param_3 + 2 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fa982e FUN_147fa982e body=59 status=ok
// SIG undefined FUN_147fa982e(void)

undefined8 FUN_147fa982e(longlong *param_1)

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



// FUNCTION 147fa98d0 FUN_147fa98d0 body=72 status=ok
// SIG undefined FUN_147fa98d0(void)

void FUN_147fa98d0(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141215e22(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_145a598dc(param_2 + 5);
  param_2[7] = 0;
  return;
}



// FUNCTION 147fa9918 FUN_147fa9918 body=50 status=ok
// SIG undefined FUN_147fa9918(void)

void FUN_147fa9918(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_141215e22(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_145a598dc(param_2 + 5);
  param_2[7] = 0;
  return;
}



// FUNCTION 147fa9968 FUN_147fa9968 body=54 status=ok
// SIG undefined FUN_147fa9968(void)

undefined1 FUN_147fa9968(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fa9aac(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147fa99c6 FUN_147fa99c6 body=59 status=ok
// SIG undefined FUN_147fa99c6(void)

undefined8 FUN_147fa99c6(longlong *param_1)

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



// FUNCTION 147fa9a0c FUN_147fa9a0c body=34 status=ok
// SIG undefined FUN_147fa9a0c(void)

void FUN_147fa9a0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_147fa9a7c(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147fa9a7c FUN_147fa9a7c body=48 status=ok
// SIG undefined FUN_147fa9a7c(void)

void FUN_147fa9a7c(longlong param_1)

{
  FUN_1459cb468(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9f5c(param_1 + 8);
  return;
}



// FUNCTION 147fa9aac FUN_147fa9aac body=75 status=ok
// SIG undefined FUN_147fa9aac(void)

longlong FUN_147fa9aac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147fa9af8();
  FUN_147fb67fe(param_1 + 0x28,param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  return param_1;
}



// FUNCTION 147fa9af8 FUN_147fa9af8 body=92 status=ok
// SIG undefined FUN_147fa9af8(void)

longlong * FUN_147fa9af8(longlong *param_1,longlong *param_2)

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
  if (param_1 != param_2) {
    FUN_1401fa0f0(param_1 + 1,param_2[1],param_2[2]);
  }
  FUN_1403fbf4e(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 147fa9bf2 FUN_147fa9bf2 body=59 status=ok
// SIG undefined FUN_147fa9bf2(void)

undefined8 FUN_147fa9bf2(longlong *param_1)

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



// FUNCTION 147fa9d3e FUN_147fa9d3e body=127 status=ok
// SIG undefined FUN_147fa9d3e(void)

undefined1 FUN_147fa9d3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0x28;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -0x10 + lVar8) = *(undefined2 *)(param_3 + -0x10 + lVar8);
      puVar1 = (undefined4 *)(param_3 + -0x20 + lVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + -0x20 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined4 *)(param_2 + -8 + lVar8) = *(undefined4 *)(param_3 + -8 + lVar8);
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8) = lVar7;
      lVar8 = lVar8 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fa9de6 FUN_147fa9de6 body=59 status=ok
// SIG undefined FUN_147fa9de6(void)

undefined8 FUN_147fa9de6(longlong *param_1)

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



// FUNCTION 147fa9e86 FUN_147fa9e86 body=34 status=ok
// SIG undefined FUN_147fa9e86(void)

undefined8 FUN_147fa9e86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147fa9ea8 FUN_147fa9ea8 body=66 status=ok
// SIG undefined FUN_147fa9ea8(void)

undefined8 FUN_147fa9ea8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((((lVar1 != 0) && (lVar2 = FUN_1459ec246(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}



// FUNCTION 147fa9ef0 FUN_147fa9ef0 body=54 status=ok
// SIG undefined FUN_147fa9ef0(void)

void FUN_147fa9ef0(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_147fab3a0(param_2);
  *param_2 = &PTR_FUN_14acea610;
  param_2[5] = 0;
  return;
}



// FUNCTION 147fa9f26 FUN_147fa9f26 body=40 status=ok
// SIG undefined FUN_147fa9f26(void)

void FUN_147fa9f26(undefined8 param_1,undefined8 *param_2)

{
  FUN_147fab3a0(param_2);
  *param_2 = &PTR_FUN_14acea610;
  param_2[5] = 0;
  return;
}



// FUNCTION 147fa9f72 FUN_147fa9f72 body=129 status=ok
// SIG undefined FUN_147fa9f72(void)

undefined1 FUN_147fa9f72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0x28;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -0x10 + lVar8) = *(undefined2 *)(param_3 + -0x10 + lVar8);
      puVar1 = (undefined4 *)(param_3 + -0x20 + lVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + -0x20 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined2 *)(param_2 + -8 + lVar8) = *(undefined2 *)(param_3 + -8 + lVar8);
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8) = lVar7;
      lVar8 = lVar8 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147faa01c FUN_147faa01c body=59 status=ok
// SIG undefined FUN_147faa01c(void)

undefined8 FUN_147faa01c(longlong *param_1)

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



// FUNCTION 147faa0bc FUN_147faa0bc body=34 status=ok
// SIG undefined FUN_147faa0bc(void)

undefined8 FUN_147faa0bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147faa0de FUN_147faa0de body=66 status=ok
// SIG undefined FUN_147faa0de(void)

undefined8 FUN_147faa0de(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((((lVar1 != 0) && (lVar2 = FUN_1459ec332(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}



// FUNCTION 147faa1ac FUN_147faa1ac body=117 status=ok
// SIG undefined FUN_147faa1ac(void)

undefined1 FUN_147faa1ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0x20;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -8 + lVar8) = *(undefined2 *)(param_3 + -8 + lVar8);
      puVar1 = (undefined4 *)(param_3 + -0x18 + lVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + -0x18 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8) = lVar7;
      lVar8 = lVar8 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147faa24a FUN_147faa24a body=59 status=ok
// SIG undefined FUN_147faa24a(void)

undefined8 FUN_147faa24a(longlong *param_1)

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



// FUNCTION 147faa2ea FUN_147faa2ea body=34 status=ok
// SIG undefined FUN_147faa2ea(void)

undefined8 FUN_147faa2ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147faa30c FUN_147faa30c body=66 status=ok
// SIG undefined FUN_147faa30c(void)

undefined8 FUN_147faa30c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((((lVar1 != 0) && (lVar2 = FUN_14595a9d8(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}



// FUNCTION 147faa350 FUN_147faa350 body=95 status=ok
// SIG undefined FUN_147faa350(void)

undefined8 * FUN_147faa350(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147fa6f11(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147faa3b0(param_1,iVar1);
      FUN_147faa412(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147faa3b0 FUN_147faa3b0 body=98 status=ok
// SIG undefined FUN_147faa3b0(void)

void FUN_147faa3b0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147faa412 FUN_147faa412 body=69 status=ok
// SIG undefined FUN_147faa412(void)

void FUN_147faa412(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar2 = 8;
    do {
      *(undefined8 *)(param_1 + -8 + lVar2) = *(undefined8 *)(param_2 + -8 + lVar2);
      lVar1 = *(longlong *)(param_2 + lVar2);
      *(longlong *)(param_1 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x88);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 147faa4fa FUN_147faa4fa body=129 status=ok
// SIG undefined FUN_147faa4fa(void)

undefined1 FUN_147faa4fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0x28;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -0x10 + lVar8) = *(undefined2 *)(param_3 + -0x10 + lVar8);
      puVar1 = (undefined4 *)(param_3 + -0x20 + lVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + -0x20 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined2 *)(param_2 + -8 + lVar8) = *(undefined2 *)(param_3 + -8 + lVar8);
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8) = lVar7;
      lVar8 = lVar8 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147faa5a4 FUN_147faa5a4 body=59 status=ok
// SIG undefined FUN_147faa5a4(void)

undefined8 FUN_147faa5a4(longlong *param_1)

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



// FUNCTION 147faa644 FUN_147faa644 body=34 status=ok
// SIG undefined FUN_147faa644(void)

undefined8 FUN_147faa644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147faa666 FUN_147faa666 body=66 status=ok
// SIG undefined FUN_147faa666(void)

undefined8 FUN_147faa666(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((((lVar1 != 0) && (lVar2 = FUN_145afba70(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}



// FUNCTION 147faa6b0 FUN_147faa6b0 body=177 status=ok
// SIG undefined FUN_147faa6b0(void)

undefined8 FUN_147faa6b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (DAT_14cb27d18 == 0) {
      uVar2 = FUN_140bffa48();
      DAT_14cb27d18 = FUN_140002ddd(FUN_14644fee7,uVar2,L"StateTreePropertyRef");
      if (DAT_14cb27d18 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cb27d18 + 0x38) <= *(int *)(lVar3 + 0x38)) {
      return CONCAT71((int7)((ulonglong)(DAT_14cb27d18 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cb27d18 + 0x38) * 8)
                      == DAT_14cb27d18 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 147faa864 FUN_147faa864 body=79 status=ok
// SIG undefined FUN_147faa864(void)

undefined8 FUN_147faa864(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  bool bVar6;
  
  piVar1 = *(int **)(param_2 + 0x100);
  if (*piVar1 == piVar1[4]) {
    lVar2 = *(longlong *)(piVar1 + 6);
    bVar3 = lVar2 != 0 & DAT_14c950c29;
    uVar4 = (ulonglong)CONCAT31((int3)((uint)*piVar1 >> 8),bVar3);
    if (bVar3 == 1) {
      uVar4 = FUN_1456cec3c(lVar2);
    }
    bVar6 = *(longlong *)(piVar1 + 2) == lVar2;
    uVar5 = (undefined7)(uVar4 >> 8);
  }
  else {
    bVar6 = false;
    uVar5 = 0;
  }
  return CONCAT71(uVar5,(bool)*(char *)(param_1 + 0x28) != bVar6);
}



// FUNCTION 147faa950 FUN_147faa950 body=51 status=ok
// SIG undefined FUN_147faa950(void)

undefined4 FUN_147faa950(undefined8 param_1,longlong param_2)

{
  float *pfVar1;
  uint uVar2;
  
  pfVar1 = *(float **)(param_2 + 0x100);
  uVar2 = rand();
  return CONCAT31((int3)((uVar2 & 0x7fff) >> 8),(float)(uVar2 & 0x7fff) / 32767.0 < *pfVar1);
}



// FUNCTION 147faaa34 FUN_147faaa34 body=442 status=ok
// SIG undefined FUN_147faaa34(void)

undefined8 FUN_147faaa34(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar3 = *(longlong **)(param_2 + 0x100);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    iVar2 = (int)plVar3[5];
    if (*(char *)(param_1 + 0x29) != '\x01') {
      cVar4 = '\x01';
      if (iVar2 != 0) {
        plVar8 = (longlong *)plVar3[4];
        plVar1 = plVar8 + iVar2;
        do {
          if ((int)plVar3[1] != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)(*plVar3 + lVar6) == *plVar8) goto LAB_147faabd3;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)plVar3[1] << 3 != lVar6);
          }
          if ((longlong)(int)plVar3[3] == 0) goto LAB_147faabde;
          lVar6 = 0;
          while (*(longlong *)(plVar3[2] + lVar6) != *plVar8) {
            lVar6 = lVar6 + 8;
            if ((longlong)(int)plVar3[3] * 8 == lVar6) goto LAB_147faabde;
          }
LAB_147faabd3:
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar1);
      }
      goto LAB_147faabe0;
    }
    cVar4 = '\x01';
    if (iVar2 == 0) goto LAB_147faabe0;
    plVar1 = plVar3 + 1;
    if ((longlong)(int)*plVar1 != 0) {
      lVar6 = *plVar3;
      plVar3 = (longlong *)plVar3[4];
      plVar8 = plVar3 + iVar2;
      do {
        lVar5 = 0;
        while (*(longlong *)(lVar6 + lVar5) != *plVar3) {
          lVar5 = lVar5 + 8;
          if ((longlong)(int)*plVar1 * 8 == lVar5) goto LAB_147faabde;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar8);
      goto LAB_147faabe0;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\0') {
    iVar2 = (int)plVar3[5];
    if (*(char *)(param_1 + 0x29) == '\x01') {
      if (iVar2 != 0) {
        lVar6 = *plVar3;
        plVar7 = (longlong *)plVar3[4];
        plVar8 = plVar7 + iVar2;
        plVar1 = plVar3 + 1;
        plVar3 = (longlong *)(longlong)(int)*plVar1;
        do {
          if ((int)*plVar1 != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(lVar6 + lVar5) == *plVar7) goto LAB_147faab71;
              lVar5 = lVar5 + 8;
            } while ((longlong)plVar3 << 3 != lVar5);
          }
          plVar7 = plVar7 + 1;
          cVar4 = '\0';
        } while (plVar7 != plVar8);
        goto LAB_147faabe0;
      }
    }
    else if (iVar2 != 0) {
      plVar8 = (longlong *)plVar3[4];
      plVar1 = plVar8 + iVar2;
      do {
        if ((int)plVar3[1] != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(*plVar3 + lVar6) == *plVar8) goto LAB_147faab71;
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)plVar3[1] << 3 != lVar6);
        }
        if ((longlong)(int)plVar3[3] != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(plVar3[2] + lVar6) == *plVar8) goto LAB_147faab71;
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)plVar3[3] * 8 != lVar6);
        }
        plVar8 = plVar8 + 1;
        cVar4 = '\0';
      } while (plVar8 != plVar1);
      goto LAB_147faabe0;
    }
  }
LAB_147faabde:
  cVar4 = '\0';
LAB_147faabe0:
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),*(char *)(param_1 + 0x2a) != cVar4);
LAB_147faab71:
  cVar4 = '\x01';
  goto LAB_147faabe0;
}



// FUNCTION 147faabee FUN_147faabee body=36 status=ok
// SIG undefined FUN_147faabee(void)

bool FUN_147faabee(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_144ade028(param_1 + 0x28,*(undefined8 *)(param_2 + 0x100));
  return *(char *)(param_1 + 0x70) != cVar1;
}



// FUNCTION 147faac48 FUN_147faac48 body=67 status=ok
// SIG undefined FUN_147faac48(void)

bool FUN_147faac48(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x100);
  lVar2 = plVar1[1];
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  return (bool)*(char *)(param_1 + 0x28) != (*plVar1 == lVar2);
}



// FUNCTION 147faacd0 FUN_147faacd0 body=170 status=ok
// SIG undefined FUN_147faacd0(void)

ulonglong FUN_147faacd0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  
  pfVar3 = *(float **)(param_2 + 0x100);
  fVar1 = pfVar3[1];
  fVar2 = pfVar3[2];
  fVar6 = 0.0;
  if (fVar1 <= fVar2) {
    if (ABS(fVar2 - fVar1) <= 1e-08) {
      fVar6 = (float)(-(uint)(fVar2 <= *pfVar3) & 0x3f800000);
    }
    else {
      fVar6 = (*pfVar3 - fVar1) / (fVar2 - fVar1);
    }
  }
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  lVar4 = FUN_1401e2d36(param_1 + 0x28);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x78) != 0)) {
    uVar5 = FUN_1448c9f94(lVar4,fVar6,0);
    return uVar5;
  }
  return (ulonglong)(uint)fVar6;
}



// FUNCTION 147faaf3a FUN_147faaf3a body=115 status=ok
// SIG undefined FUN_147faaf3a(void)

void FUN_147faaf3a(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_1438c81c0(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147faafae FUN_147faafae body=551 status=ok
// SIG undefined FUN_147faafae(void)

undefined8 * FUN_147faafae(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x1000);
  if (*piVar1 == -1) {
    LOCK();
    UNLOCK();
    iVar10 = DAT_14cb283a8 + 1;
    *piVar1 = DAT_14cb283a8;
    DAT_14cb283a8 = iVar10;
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x90);
  AcquireSRWLockShared(SRWLock);
  plVar2 = (longlong *)(param_1 + 0x98);
  if (*piVar1 < *(int *)(param_1 + 0xa0)) {
    lVar7 = *plVar2;
    lVar8 = (longlong)*piVar1 * 0x10;
    *param_2 = *(undefined8 *)(lVar7 + lVar8);
    lVar7 = *(longlong *)(lVar7 + 8 + lVar8);
    param_2[1] = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    ReleaseSRWLockShared(SRWLock);
  }
  else {
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockExclusive(SRWLock);
    iVar10 = *piVar1;
    if (iVar10 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10 + 1);
    }
    if (*(int *)(param_1 + 0xa4) <= iVar10) {
      FUN_147fb3cb8(plVar2);
    }
    if (*(int *)(param_1 + 0xa0) <= iVar10) {
      iVar10 = (iVar10 - *(int *)(param_1 + 0xa0)) + 1;
      do {
        plVar9 = (longlong *)FUN_14494321d(0x20);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14acf2e00;
        plVar3 = plVar9 + 2;
        FUN_145a598dc(plVar3);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar4 = plVar9 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar5 = (int *)((longlong)plVar9 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        FUN_147fb6c3e(plVar3,param_1,param_1 + 0x80);
        iVar6 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
          FUN_147fb3d44(plVar2,iVar6);
        }
        lVar7 = *plVar2;
        *(longlong **)(lVar7 + (longlong)iVar6 * 0x10) = plVar3;
        *(longlong **)(lVar7 + 8 + (longlong)iVar6 * 0x10) = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar9 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar5 = (int *)((longlong)plVar9 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *piVar1;
    lVar7 = *plVar2;
    *param_2 = *(undefined8 *)(lVar7 + (longlong)iVar10 * 0x10);
    lVar7 = *(longlong *)(lVar7 + 8 + (longlong)iVar10 * 0x10);
    param_2[1] = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  return param_2;
}



// FUNCTION 147fab1d6 FUN_147fab1d6 body=106 status=ok
// SIG undefined FUN_147fab1d6(void)

undefined8 FUN_147fab1d6(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0xb0);
  if (uVar1 == *(uint *)(param_2 + 0xb0)) {
    uVar4 = 1;
    if (0 < (int)uVar1) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xa8) + lVar5);
        if ((((lVar2 == 0) ||
             (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar5), lVar3 == 0)) ||
            (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_147fab23c;
        lVar5 = lVar5 + 0x18;
      } while ((ulonglong)uVar1 * 0x18 != lVar5);
    }
  }
  else {
LAB_147fab23c:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 147fab240 FUN_147fab240 body=95 status=ok
// SIG undefined FUN_147fab240(void)

undefined8 FUN_147fab240(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb283b8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb283b8 = FUN_140002ddd(FUN_14645257d,uVar1,L"StateTreeConditionBase");
    if (DAT_14cb283b8 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x38) < *(int *)(DAT_14cb283b8 + 0x38)) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)(DAT_14cb283b8 + 0x30) >> 8),
                  *(longlong *)
                   (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cb283b8 + 0x38) * 8) ==
                  DAT_14cb283b8 + 0x30);
}



// FUNCTION 147fab2a0 FUN_147fab2a0 body=95 status=ok
// SIG undefined FUN_147fab2a0(void)

undefined8 FUN_147fab2a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb283e8 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb283e8 = FUN_140002ddd(FUN_146452675,uVar1,L"StateTreeConsiderationBase");
    if (DAT_14cb283e8 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x38) < *(int *)(DAT_14cb283e8 + 0x38)) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)(DAT_14cb283e8 + 0x30) >> 8),
                  *(longlong *)
                   (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cb283e8 + 0x38) * 8) ==
                  DAT_14cb283e8 + 0x30);
}



// FUNCTION 147fab300 FUN_147fab300 body=159 status=ok
// SIG undefined FUN_147fab300(void)

void FUN_147fab300(longlong param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x18c) < 0) {
    *(undefined4 *)(param_1 + 0x188) = 0;
    FUN_147fb3e1c(param_1 + 0x180);
  }
  else {
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x90));
  iVar1 = *(int *)(param_1 + 0xa4);
  FUN_1459cb819(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xa4) != 0)) {
    FUN_147fb3cb8(param_1 + 0x98,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000147fab385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x90));
  return;
}



// FUNCTION 147fab3a0 FUN_147fab3a0 body=55 status=ok
// SIG undefined FUN_147fab3a0(void)

void FUN_147fab3a0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffff0000;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *param_1 = &PTR_FUN_14acee830;
  *(undefined2 *)(param_1 + 4) = 1;
  return;
}



// FUNCTION 147fab3d8 FUN_147fab3d8 body=94 status=ok
// SIG undefined FUN_147fab3d8(void)

void FUN_147fab3d8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_14cb28460 == 0) {
      uVar2 = FUN_140bffa48();
      DAT_14cb28460 = FUN_140002ddd(FUN_1464528bd,uVar2,L"StateTreeEvent");
    }
    FUN_144a79930(param_2,DAT_14cb28460,lVar1,0);
    return;
  }
  return;
}



// FUNCTION 147fab436 FUN_147fab436 body=166 status=ok
// SIG undefined FUN_147fab436(void)

void FUN_147fab436(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_3 != 0) || ((param_4[1] != 0 && (*param_4 != 0)))) {
    iVar1 = (int)param_1[1];
    if ((longlong)iVar1 < 0x40) {
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_147fb520a(param_1,iVar1);
      }
      local_48 = (undefined4)*param_4;
      uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_40 = (undefined4)param_4[1];
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_147fb5146((longlong)iVar1 * 0x10 + *param_1,*param_3,&local_48,param_5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


