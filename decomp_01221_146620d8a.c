// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146620d8a FUN_146620d8a body=66 status=ok
// SIG undefined FUN_146620d8a(void)

undefined8 * FUN_146620d8a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9614d0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146620dcc FUN_146620dcc body=29 status=ok
// SIG undefined FUN_146620dcc(void)

undefined8 FUN_146620dcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146620dea FUN_146620dea body=132 status=ok
// SIG undefined FUN_146620dea(void)

void FUN_146620dea(longlong param_1,int param_2)

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



// FUNCTION 146620e6e FUN_146620e6e body=26 status=ok
// SIG undefined FUN_146620e6e(void)

bool FUN_146620e6e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146620e88 FUN_146620e88 body=190 status=ok
// SIG undefined FUN_146620e88(void)

void FUN_146620e88(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14094adb2(param_1,&local_30);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar6 = FUN_140f7f0d2();
    cVar5 = FUN_1448093f4(lVar3,uVar6);
    if (cVar5 != '\0') {
      FUN_14123c256(lVar3 + 0x6a8,param_1 + 0x2e0);
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146620f60 FUN_146620f60 body=153 status=ok
// SIG undefined FUN_146620f60(void)

void FUN_146620f60(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14094b946(param_1,&local_28);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar5 = FUN_140e56edc();
    FUN_1448093f4(lVar3,uVar5);
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146620ffa FUN_146620ffa body=32 status=ok
// SIG undefined FUN_146620ffa(void)

undefined4 FUN_146620ffa(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1405c6693();
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x5e0);
  }
  return uVar1;
}



// FUNCTION 14662101a FUN_14662101a body=125 status=ok
// SIG undefined FUN_14662101a(void)

void FUN_14662101a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + -0x398;
  FUN_140bfc8e6();
  lVar1 = FUN_1447210f0(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6e0c(lVar1);
    if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 200), lVar1 != 0)) &&
       (*(longlong *)(param_2 + 0x68) == DAT_14cbc46c8)) {
      if (*(int *)(param_2 + 0x80) < 1) {
        FUN_14104df36(lVar1,param_1);
        FUN_14104e042(param_1);
        return;
      }
      FUN_14129790e(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14662109e FUN_14662109e body=40 status=ok
// SIG undefined FUN_14662109e(void)

void FUN_14662109e(undefined8 param_1,longlong param_2)

{
  FUN_140907f04();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc46c8,0);
  return;
}



// FUNCTION 1466210c6 FUN_1466210c6 body=300 status=ok
// SIG undefined FUN_1466210c6(void)

void FUN_1466210c6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  FUN_1412e261a();
  lVar1 = FUN_1447e736e(param_1 + 800);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x2a0;
  }
  else {
    lVar1 = FUN_1447e736e(param_1 + 800);
    lVar1 = lVar1 + 0x30;
  }
  lVar2 = FUN_1447e736e(param_1 + 0x270);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0x1f0;
  }
  else {
    lVar2 = FUN_1447e736e(param_1 + 0x270);
    lVar2 = lVar2 + 0x30;
  }
  if (((param_2 == 0) || (lVar1 == 0)) || (lVar2 == 0)) {
    fVar4 = *(float *)(param_1 + 0x350);
    fVar5 = *(float *)(param_1 + 0x354);
  }
  else {
    uVar3 = FUN_1412e26e6(param_1,param_2);
    fVar4 = (float)FUN_1448c9f94(lVar1,uVar3,0);
    fVar5 = (float)FUN_1448c9f94(lVar2,uVar3,0);
    *(float *)(param_1 + 0x350) = fVar4;
    *(float *)(param_1 + 0x354) = fVar5;
  }
  if (fVar4 <= *(float *)(param_1 + 0x24)) {
    fVar4 = *(float *)(param_1 + 0x24);
  }
  *(float *)(param_1 + 0x24) = fVar4;
  if (*(float *)(param_1 + 0x28) <= fVar5) {
    fVar5 = *(float *)(param_1 + 0x28);
  }
  *(float *)(param_1 + 0x28) = fVar5;
  *(undefined1 *)(param_1 + 0x34c) = 1;
  *(undefined2 *)(param_1 + 0x1e0) = 1;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  return;
}



// FUNCTION 1466211f2 FUN_1466211f2 body=144 status=ok
// SIG undefined FUN_1466211f2(void)

void FUN_1466211f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    if ((param_2 != 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
      lVar3 = FUN_140344898();
      lVar1 = *(longlong *)(param_2 + 0x28);
      if (((lVar1 != 0) &&
          (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
         (((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30 && (*(longlong *)(lVar1 + 0xa58) != 0)) &&
          (*(longlong *)(param_1 + 0xd8) != 0)))) {
        FUN_14480f766(*(longlong *)(lVar1 + 0xa58) + 0x1ed0);
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 146621282 FUN_146621282 body=167 status=ok
// SIG undefined FUN_146621282(void)

void FUN_146621282(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_3;
  local_18 = param_3[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_28 = param_7;
  local_30 = param_6;
  local_38 = param_5;
  FUN_145924f52(param_1,param_2,&local_20);
  plVar3 = (longlong *)param_3[1];
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
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146621330 FUN_146621330 body=167 status=ok
// SIG undefined FUN_146621330(void)

void FUN_146621330(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_3;
  local_18 = param_3[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_28 = param_7;
  local_30 = param_6;
  local_38 = param_5;
  FUN_145924f52(param_1,param_2,&local_20);
  plVar3 = (longlong *)param_3[1];
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
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466213de FUN_1466213de body=167 status=ok
// SIG undefined FUN_1466213de(void)

void FUN_1466213de(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_3;
  local_18 = param_3[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_28 = param_7;
  local_30 = param_6;
  local_38 = param_5;
  FUN_145924f52(param_1,param_2,&local_20);
  plVar3 = (longlong *)param_3[1];
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
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662148c FUN_14662148c body=226 status=ok
// SIG undefined FUN_14662148c(void)

void FUN_14662148c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c4ea();
  FUN_1446f470e(&local_58,L"PhysicsState",1);
  uVar1 = FUN_140ebc504();
  FUN_140ebc504();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"CarryableState",1);
  uVar1 = FUN_140ebc504();
  FUN_140ebc504();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662158c FUN_14662158c body=52 status=ok
// SIG undefined FUN_14662158c(void)

void FUN_14662158c(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1412d3646(param_1 + 0x88,uVar1);
    return;
  }
  return;
}



// FUNCTION 1466215c0 FUN_1466215c0 body=52 status=ok
// SIG undefined FUN_1466215c0(void)

void FUN_1466215c0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1412d3646(param_1 + 0x98,uVar1);
    return;
  }
  return;
}



// FUNCTION 1466215f4 FUN_1466215f4 body=273 status=ok
// SIG undefined FUN_1466215f4(void)

void FUN_1466215f4(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_4b8 [32];
  undefined1 local_498 [552];
  byte local_270;
  undefined1 local_268 [560];
  undefined1 local_38;
  undefined6 local_34;
  undefined2 uStack_2e;
  undefined6 uStack_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    if (lVar2 != 0) {
      lVar3 = FUN_144a5dd5e();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
         (*(longlong *)(lVar2 + 0xf48) != 0)) {
        cVar1 = (**(code **)(*(longlong *)(param_1 + 0x2240) + 0x38))
                          (param_1 + 0x2240,*(longlong *)(lVar2 + 0xf48) + 0x3b48);
        if (cVar1 == '\0') {
          FUN_140e386ea(local_498);
          FUN_140e386ea(local_268);
          local_38 = 0;
          local_24 = 0;
          local_34 = 0;
          uStack_2e = 0;
          uStack_2c = 0;
          local_270 = local_270 | 2;
          if ((undefined1 *)(param_3 + 0x10) != local_498) {
            FUN_14007afac((undefined1 *)(param_3 + 0x10),local_498);
          }
          FUN_144908ac8(local_268);
          FUN_144908ac8(local_498);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146621706 FUN_146621706 body=140 status=ok
// SIG undefined FUN_146621706(void)

void FUN_146621706(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c4ea();
  FUN_1446f470e(&local_38,L"ReplicatedSocketInfo",1);
  uVar1 = FUN_140f50f54();
  FUN_140f50f54();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146621794 FUN_146621794 body=90 status=ok
// SIG undefined FUN_146621794(void)

void FUN_146621794(longlong param_1,longlong param_2)

{
  FUN_140bfc8e6();
  if ((*(char *)(param_1 + -0x220) == '\x03') && (*(longlong *)(param_2 + 0x68) == DAT_14cbc5600)) {
    if (0 < *(int *)(param_2 + 0x80)) {
      FUN_1411ab890(param_1 + -0x398);
      return;
    }
    FUN_1412f7efc(param_1 + -0x398);
    return;
  }
  return;
}



// FUNCTION 1466217ee FUN_1466217ee body=247 status=ok
// SIG undefined FUN_1466217ee(void)

void FUN_1466217ee(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x26a0) == '\0') {
    FUN_14592dd8c(param_1 + 0x2608);
    if (*(char *)(param_1 + 0x178) == '\x03') {
      local_34 = 0;
      local_48 = DAT_14cbc5608;
      local_40 = 0xffffffff;
      FUN_141094e00(param_1 + 0x4d8,&local_48,1);
    }
    lVar1 = *(longlong *)(param_1 + 0x2618);
    if (lVar1 != 0) {
      FUN_145960f54(lVar1);
      FUN_1413662ce(lVar1);
      *(undefined8 *)(lVar1 + 0x2c8) = 0;
    }
  }
  if ((*(longlong *)(param_1 + 0x2640) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x2640) + 0x46a) == '\x01')) {
    cVar2 = FUN_14582c99a(param_1);
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146621900 FUN_146621900 body=69 status=ok
// SIG undefined FUN_146621900(void)

void FUN_146621900(longlong param_1,undefined8 param_2)

{
  FUN_145965236();
  FUN_1413f02b4(param_1,param_2);
  *(undefined1 *)(param_1 + 0x30) = 1;
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146621939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))();
    return;
  }
  return;
}



// FUNCTION 146621946 FUN_146621946 body=210 status=ok
// SIG undefined FUN_146621946(void)

void FUN_146621946(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140136774();
  local_48 = *(undefined8 *)(param_1 + 0x360);
  FUN_1446dcdd4(local_40);
  plVar1 = (longlong *)FUN_1400d6974(local_40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_140fe7bec();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar2 = *(longlong *)(param_1 + 0x360);
      if (*(longlong *)(param_1 + 0x348) != lVar2) {
        *(undefined8 *)(param_1 + 0x358) = 0;
      }
      *(longlong *)(param_1 + 0x348) = lVar2;
      if (lVar2 != 0) {
        *(undefined8 *)(param_1 + 0x370) = 0;
      }
      *(undefined8 *)(param_1 + 0x360) = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146621a1a FUN_146621a1a body=76 status=ok
// SIG undefined FUN_146621a1a(void)

undefined8 FUN_146621a1a(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1415260e0(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146621a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146621a66 FUN_146621a66 body=252 status=ok
// SIG undefined FUN_146621a66(void)

void FUN_146621a66(longlong *param_1)

{
  longlong *plVar1;
  void *_Src;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(*param_1 + 0x20))();
  if ((*(longlong *)(lVar3 + 0x38) != 0) &&
     (plVar1 = *(longlong **)(lVar3 + 0x40), plVar1 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    if (*(char *)(lVar3 + 0x31) == '\x02') {
      *(undefined1 *)(lVar3 + 0x31) = 3;
      lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
      if (lVar3 != 0) {
        local_58 = *(undefined8 *)(lVar3 + 0xe0);
        local_50 = *(undefined4 *)(lVar3 + 0xe8);
        uStack_4c = *(undefined4 *)(lVar3 + 0xec);
        uStack_48 = *(undefined4 *)(lVar3 + 0xf0);
        uStack_44 = *(undefined4 *)(lVar3 + 0xf4);
        local_40 = (void *)0x0;
        local_38 = *(int *)(lVar3 + 0x100);
        lVar4 = (longlong)local_38;
        _Src = *(void **)(lVar3 + 0xf8);
        if (lVar4 == 0) {
          local_34 = 0;
        }
        else {
          FUN_1446dd670(&local_40,local_38,0);
          memcpy(local_40,_Src,lVar4 * 2);
        }
        uVar2 = FUN_141473846(param_1 + -0x769,&local_58,0);
        *(undefined1 *)(param_1 + 0x9c1) = uVar2;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146621b84 FUN_146621b84 body=40 status=ok
// SIG undefined FUN_146621b84(void)

undefined8 FUN_146621b84(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146621bac FUN_146621bac body=40 status=ok
// SIG undefined FUN_146621bac(void)

undefined8 FUN_146621bac(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146621bd4 FUN_146621bd4 body=40 status=ok
// SIG undefined FUN_146621bd4(void)

undefined8 FUN_146621bd4(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146621bfc FUN_146621bfc body=85 status=ok
// SIG undefined FUN_146621bfc(void)

void FUN_146621bfc(void)

{
  FUN_144760e21(DAT_14cbc56b8,DAT_14cbc56c0);
  if (DAT_14cbc56b8 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cbc56a0,DAT_14cbc56a8);
  if (DAT_14cbc56a0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146621c52 FUN_146621c52 body=85 status=ok
// SIG undefined FUN_146621c52(void)

void FUN_146621c52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963490;
  return;
}



// FUNCTION 146621ca8 FUN_146621ca8 body=29 status=ok
// SIG undefined FUN_146621ca8(void)

undefined8 FUN_146621ca8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146621cc6 FUN_146621cc6 body=29 status=ok
// SIG undefined FUN_146621cc6(void)

bool FUN_146621cc6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146621ce4 FUN_146621ce4 body=26 status=ok
// SIG undefined FUN_146621ce4(void)

bool FUN_146621ce4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146621cfe FUN_146621cfe body=29 status=ok
// SIG undefined FUN_146621cfe(void)

bool FUN_146621cfe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146621d1c FUN_146621d1c body=26 status=ok
// SIG undefined FUN_146621d1c(void)

bool FUN_146621d1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146621d4a FUN_146621d4a body=24 status=ok
// SIG undefined FUN_146621d4a(void)

bool FUN_146621d4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146621d62 FUN_146621d62 body=101 status=ok
// SIG undefined FUN_146621d62(void)

void FUN_146621d62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146621dc8 FUN_146621dc8 body=39 status=ok
// SIG undefined FUN_146621dc8(void)

void FUN_146621dc8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000146621deb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 146621df0 FUN_146621df0 body=68 status=ok
// SIG undefined FUN_146621df0(void)

undefined8 * FUN_146621df0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9638a0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146621e34 FUN_146621e34 body=148 status=ok
// SIG undefined FUN_146621e34(void)

void FUN_146621e34(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[0] = 0;
    local_38[1] = 0;
  }
  else {
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_1403de7ba(local_38,*param_1 + 0x460);
  }
  FUN_1403de7ba(param_2,local_38);
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146621eca FUN_146621eca body=248 status=ok
// SIG undefined FUN_146621eca(void)

undefined8 FUN_146621eca(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3ecd00;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9644c0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ace2c8(&DAT_14cb896e0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146621fc4 FUN_146621fc4 body=76 status=ok
// SIG undefined FUN_146621fc4(void)

undefined8 FUN_146621fc4(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14597fada(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146622005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146622010 FUN_146622010 body=76 status=ok
// SIG undefined FUN_146622010(void)

undefined8 FUN_146622010(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1458ef5be(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146622051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14662205c FUN_14662205c body=54 status=ok
// SIG undefined FUN_14662205c(void)

void FUN_14662205c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4208) != 0) {
    FUN_1407afb5c(*(longlong *)(param_1 + 0x4208),1,1);
    FUN_141009ea0(*(undefined8 *)(param_1 + 0x4208));
    return;
  }
  return;
}



// FUNCTION 146622092 FUN_146622092 body=177 status=ok
// SIG undefined FUN_146622092(void)

void FUN_146622092(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x4208) == 0) {
    *(undefined1 *)(param_1 + 0x4228) = 0;
  }
  else {
    FUN_1407afb5c(*(longlong *)(param_1 + 0x4208),1,1);
    FUN_141009ea0(*(undefined8 *)(param_1 + 0x4208));
    lVar2 = *(longlong *)(param_1 + 0x4208);
    *(undefined1 *)(param_1 + 0x4228) = 0;
    if (lVar2 != 0) {
      uVar1 = (**(code **)(*(longlong *)(lVar2 + 0x3b38) + 0x18))(lVar2 + 0x3b38);
      FUN_140ec7f74(uVar1);
      uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x3b38) + 0x18))
                        (*(longlong *)(param_1 + 0x4208) + 0x3b38);
      FUN_1409c9c98(uVar1,0);
      lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x3c20) + 0x18))
                        (*(longlong *)(param_1 + 0x4208) + 0x3c20);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x50) = 0xbf800000;
      }
    }
  }
  return;
}



// FUNCTION 146622144 FUN_146622144 body=160 status=ok
// SIG undefined FUN_146622144(void)

void FUN_146622144(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_1[0x73];
  local_28 = (undefined4)param_1[0x71];
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x38c);
  uStack_20 = (undefined4)param_1[0x72];
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x394);
  (**(code **)(param_1[0x2f] + 0xf8))(param_1 + 0x2f);
  param_1[0x73] = local_18;
  *(undefined4 *)(param_1 + 0x71) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x38c) = uStack_24;
  *(undefined4 *)(param_1 + 0x72) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x394) = uStack_1c;
  *(undefined1 *)((longlong)param_1 + 0x422b) = 0;
  (**(code **)(*param_1 + 0xef8))(param_1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xe08))(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140c07c00(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,*puVar1);
}



// FUNCTION 1466221e6 FUN_1466221e6 body=132 status=ok
// SIG undefined FUN_1466221e6(void)

void FUN_1466221e6(longlong param_1,int param_2)

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



// FUNCTION 14662226c FUN_14662226c body=29 status=ok
// SIG undefined FUN_14662226c(void)

bool FUN_14662226c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662228a FUN_14662228a body=24 status=ok
// SIG undefined FUN_14662228a(void)

bool FUN_14662228a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466222a2 FUN_1466222a2 body=29 status=ok
// SIG undefined FUN_1466222a2(void)

bool FUN_1466222a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466222c0 FUN_1466222c0 body=96 status=ok
// SIG undefined FUN_1466222c0(void)

void FUN_1466222c0(longlong param_1,int param_2)

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



// FUNCTION 146622320 FUN_146622320 body=132 status=ok
// SIG undefined FUN_146622320(void)

void FUN_146622320(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1466223a6 FUN_1466223a6 body=132 status=ok
// SIG undefined FUN_1466223a6(void)

void FUN_1466223a6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14662242c FUN_14662242c body=29 status=ok
// SIG undefined FUN_14662242c(void)

bool FUN_14662242c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662244a FUN_14662244a body=26 status=ok
// SIG undefined FUN_14662244a(void)

bool FUN_14662244a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146622464 FUN_146622464 body=24 status=ok
// SIG undefined FUN_146622464(void)

bool FUN_146622464(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146622490 FUN_146622490 body=24 status=ok
// SIG undefined FUN_146622490(void)

bool FUN_146622490(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466224a8 FUN_1466224a8 body=101 status=ok
// SIG undefined FUN_1466224a8(void)

void FUN_1466224a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b964550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14662250e FUN_14662250e body=29 status=ok
// SIG undefined FUN_14662250e(void)

undefined8 FUN_14662250e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662252c FUN_14662252c body=239 status=ok
// SIG undefined FUN_14662252c(void)

int * FUN_14662252c(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14662261c FUN_14662261c body=29 status=ok
// SIG undefined FUN_14662261c(void)

bool FUN_14662261c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662263a FUN_14662263a body=24 status=ok
// SIG undefined FUN_14662263a(void)

bool FUN_14662263a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146622652 FUN_146622652 body=101 status=ok
// SIG undefined FUN_146622652(void)

void FUN_146622652(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4420;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b964650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1466226b8 FUN_1466226b8 body=132 status=ok
// SIG undefined FUN_1466226b8(void)

void FUN_1466226b8(longlong param_1,int param_2)

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



// FUNCTION 14662273c FUN_14662273c body=65 status=ok
// SIG undefined FUN_14662273c(void)

void FUN_14662273c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = 0;
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 14662277e FUN_14662277e body=29 status=ok
// SIG undefined FUN_14662277e(void)

undefined8 FUN_14662277e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662279c FUN_14662279c body=24 status=ok
// SIG undefined FUN_14662279c(void)

bool FUN_14662279c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466227b4 FUN_1466227b4 body=42 status=ok
// SIG undefined FUN_1466227b4(void)

void FUN_1466227b4(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140521134(param_1 + 0x3c0);
  }
  FUN_140872622(param_1);
  return;
}



// FUNCTION 1466227de FUN_1466227de body=33 status=ok
// SIG undefined FUN_1466227de(void)

void FUN_1466227de(longlong param_1)

{
  FUN_140115e24();
  FUN_1404d4e8e(param_1 + 0x3c0,param_1);
  return;
}



// FUNCTION 146622800 FUN_146622800 body=76 status=ok
// SIG undefined FUN_146622800(void)

undefined8 FUN_146622800(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145acd618(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146622841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14662284c FUN_14662284c body=76 status=ok
// SIG undefined FUN_14662284c(void)

undefined8 FUN_14662284c(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145ad13d2(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014662288d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146622898 FUN_146622898 body=54 status=ok
// SIG undefined FUN_146622898(void)

void FUN_146622898(longlong param_1)

{
  FUN_140521134(param_1 + 0x3b8);
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140872868(param_1 + 0x4c0);
  }
  FUN_140872622(param_1);
  return;
}



// FUNCTION 1466228ce FUN_1466228ce body=33 status=ok
// SIG undefined FUN_1466228ce(void)

void FUN_1466228ce(longlong param_1)

{
  FUN_140115e24();
  FUN_1404d4e8e(param_1 + 0x3b8,param_1);
  return;
}



// FUNCTION 1466228fc FUN_1466228fc body=1250 status=ok
// SIG undefined FUN_1466228fc(void)

longlong * FUN_1466228fc(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 ****ppppuVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  longlong *local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = param_4;
  lVar7 = FUN_1447210f0(param_4);
  if ((lVar7 != 0) && (lVar8 = FUN_1402d1dc0(param_1 + 0x58), lVar8 != 0)) {
    local_110 = 1;
    local_118 = 2;
    plVar9 = (longlong *)FUN_1405837ac(lVar7,lVar8,param_3,1);
    if (plVar9 != (longlong *)0x0) {
      plVar11 = (longlong *)(param_1 + 0x88);
      lVar7 = param_1 + 0x98;
      local_a0 = 0x100000000;
      local_90 = 0xffffffff;
      iStack_8c = 0;
      uStack_88 = 0;
      uStack_98 = lVar7;
      if (*(int *)(param_1 + 0xb0) == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_a0);
        iVar14 = *(int *)(param_1 + 0xb0);
      }
      uStack_a8 = CONCAT44(uStack_84,uStack_88);
      local_b0 = local_90;
      iStack_ac = iStack_8c;
      local_c0 = (undefined4)local_a0;
      uStack_bc = local_a0._4_4_;
      uStack_b8 = (undefined4)uStack_98;
      uStack_b4 = uStack_98._4_4_;
      local_108 = param_1;
      local_100 = param_2;
      local_c8 = plVar11;
      if ((iStack_8c != iVar14) || (uStack_98 != lVar7)) {
        do {
          lVar8 = *local_c8;
          lVar10 = (longlong)iStack_ac;
          puVar2 = (undefined8 *)(lVar8 + lVar10 * 0x48);
          local_a0 = local_a0 & 0xffffffffffffff00;
          local_78 = 0;
          FUN_1456bb102(&local_a0,local_f8);
          FUN_1447c3578(lVar8 + lVar10 * 0x48 + 8,local_70,&local_a0);
          FUN_144a5ac3a(&local_a0);
          switch(local_50) {
          case 1:
            uVar15 = FUN_144a7fca4(local_70);
            (**(code **)(*plVar9 + 0x9f8))(plVar9,*puVar2,uVar15);
            break;
          case 2:
            uVar15 = FUN_1405d5f74(local_70);
            (**(code **)(*plVar9 + 0xa00))(plVar9,*puVar2,uVar15);
            break;
          case 3:
            uVar15 = FUN_144a7ecd0(local_70);
            (**(code **)(*plVar9 + 0xa08))(plVar9,*puVar2,uVar15);
            break;
          case 4:
            FUN_144a7b7fe(local_70,local_e0);
            (**(code **)(*plVar9 + 0xa10))(plVar9,*puVar2,local_e0);
            break;
          case 5:
          case 6:
            break;
          case 7:
switchD_146622a95_caseD_7:
            uVar12 = FUN_14030a32e(local_70);
            (**(code **)(*plVar9 + 0xa20))(plVar9,*puVar2,uVar12);
            break;
          default:
            if (local_50 == 0x18) {
              FUN_140a1ca64(local_70,local_f0);
              (**(code **)(*plVar9 + 0xa18))(plVar9,*puVar2,local_f0);
            }
            else if (local_50 == 0x13) goto switchD_146622a95_caseD_7;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar13 = local_70;
            if (0x18 < local_58) {
              ppppuVar13 = (undefined8 ****)local_70[0];
            }
            (*pcVar3)(ppppuVar13);
          }
          if (0x18 < local_58) {
            FUN_1400020a8(local_70[0]);
          }
          local_b0 = local_b0 & ~uStack_bc;
          FUN_1449c0562(&local_c0);
        } while (local_c8 != plVar11 ||
                 (CONCAT44(uStack_b4,uStack_b8) != lVar7 || iStack_ac != iVar14));
      }
      lVar7 = local_108;
      plVar11 = (longlong *)(local_108 + 0xd8);
      uVar6 = FUN_141248bfa(plVar11,0,0xbf800000);
      if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar7 + 0xe0))) {
        lVar7 = *plVar11;
        plVar11 = (longlong *)(lVar7 + (ulonglong)uVar6 * 0x20);
        lVar7 = *(longlong *)(lVar7 + 8 + (ulonglong)uVar6 * 0x20);
        if (lVar7 == 0) {
          uVar12 = FUN_1405bc036();
          lVar7 = FUN_14477b664(uVar12);
          plVar11[1] = lVar7;
        }
        if (((plVar11[2] == 0) && (lVar7 != 0)) && (*plVar11 != 0)) {
          plVar4 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
            lVar7 = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar7 = FUN_144aff482(uVar12,plVar11);
          }
          plVar11[2] = lVar7;
        }
        FUN_14189b8e0(plVar9);
        lVar7 = local_108;
      }
      plVar11 = (longlong *)FUN_14001cc68(0x38,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14b965ea0;
      plVar11[3] = lVar7;
      plVar11[2] = (longlong)&PTR_FUN_14b965550;
      plVar11[4] = lVar7;
      plVar11[5] = 0;
      FUN_14485c47a(plVar11 + 5,plVar9);
      plVar9 = local_100;
      *(undefined1 *)(plVar11 + 6) = 0;
      *local_100 = (longlong)(plVar11 + 2);
      local_100[1] = (longlong)plVar11;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar4 = plVar11 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return plVar9;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
}



// FUNCTION 146622de4 FUN_146622de4 body=39 status=ok
// SIG undefined FUN_146622de4(void)

bool FUN_146622de4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402d1dc0(param_1 + 0x58);
  return *(longlong *)(param_1 + 0x60) == 0 || lVar1 != 0;
}



// FUNCTION 146622e12 FUN_146622e12 body=42 status=ok
// SIG undefined FUN_146622e12(void)

undefined8 FUN_146622e12(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x50);
  if ((lVar2 != 0) && (iVar1 = FUN_14490d72a(lVar2), iVar1 == 1)) {
    return 2;
  }
  return 0;
}



// FUNCTION 146622e3c FUN_146622e3c body=131 status=ok
// SIG undefined FUN_146622e3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146622e3c(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,&DAT_14b702c08,1);
  FUN_14147d486(&DAT_14cbc67c0,local_18,3);
  _DAT_14cbc67c0 = &PTR_FUN_14b965938;
  FUN_140834d1a(&DAT_14cbc67c0,L"Events relevant to fight for your life.");
  DAT_14cbc681d = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146622ec0 FUN_146622ec0 body=224 status=ok
// SIG undefined FUN_146622ec0(void)

void FUN_146622ec0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(byte *)(param_1 + 0x241) & 2) == 0) == (bool)(char)param_2) &&
     (lVar1 = *(longlong *)(param_1 + 0x238), lVar1 != 0)) {
    *(byte *)(param_1 + 0x241) = *(byte *)(param_1 + 0x241) & 0xfd | (char)param_2 * '\x02';
    if ((*(byte *)(param_1 + 0x240) & 1) != 0) {
      FUN_144a62f0c(lVar1,*(undefined8 *)(lVar1 + 0x28),0x40);
      *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) =
           (ushort)*(undefined4 *)(*(longlong *)(param_1 + 0x238) + 0x7558) & 0xbfff |
           (*(byte *)(param_1 + 0x241) & 2) << 0xd;
    }
    FUN_1400021e4(&DAT_14cbc67a0,local_30);
    FUN_1407aedfe(*(undefined8 *)(param_1 + 0x238),param_2,local_30,0x1fff);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146622fa2 FUN_146622fa2 body=329 status=ok
// SIG undefined FUN_146622fa2(void)

void FUN_146622fa2(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x2a0);
  cVar2 = FUN_1403ae288(puVar1);
  if (cVar2 != '\0') {
    if (*(longlong *)(param_1 + 0x2c0) != 0) {
      lVar4 = FUN_14008e0ae(puVar1);
      iVar3 = *(int *)(lVar4 + 0x50);
      if (iVar3 == 0) {
        FUN_1402a453c((int *)(lVar4 + 0x50));
        iVar3 = *(int *)(lVar4 + 0x50);
      }
      if (*(longlong *)(param_1 + 0x2c0) != 0) {
        FUN_14480f766(DAT_14c9a3d60 + (longlong)iVar3 * 0x88 + -0x18);
      }
      *(undefined8 *)(param_1 + 0x2c0) = 0;
    }
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      lVar4 = FUN_14008e0ae(puVar1);
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        FUN_14480f766(lVar4 + 0x168);
      }
      *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      lVar4 = FUN_14008e0ae(puVar1);
      if (*(longlong *)(param_1 + 0x2d0) != 0) {
        FUN_14480f766(lVar4 + 0x198);
      }
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined1 *)(param_1 + 700) = 0xff;
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_14480f766(*(longlong *)(param_1 + 0x238) + 0x4320);
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  return;
}



// FUNCTION 1466230ec FUN_1466230ec body=651 status=ok
// SIG undefined FUN_1466230ec(void)

void FUN_1466230ec(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined **local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar2 = FUN_14486116a(*(longlong *)(param_1 + 0x238) + 0x898);
  if (iVar2 == 2) {
    if (((param_3 != (longlong *)0x0) &&
        (lVar1 = *(longlong *)(param_1 + 0x238), *(char *)(lVar1 + 0x178) == '\x03')) &&
       ((longlong)*(int *)(lVar1 + 0x5530) != 0)) {
      lVar6 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar1 + 0x5528) + 8 + lVar6) != 0) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x5528) + lVar6) != 0)) {
          uVar3 = 0;
          local_168 = 0;
          local_164 = 0;
          local_160 = 0;
          local_158 = 0x3002;
          local_150 = 0;
          local_118 = 0;
          local_110 = 0x200000000;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          local_f0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_e8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_e0 = DAT_14c8464f0;
          local_c8 = DAT_14c8464f0;
          local_c0 = 0;
          local_b8 = 0x3006;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_90 = (undefined4)DAT_14c8464e0;
          uStack_8c = DAT_14c8464e0._4_4_;
          uStack_88 = (undefined4)DAT_14c8464e8;
          uStack_84 = DAT_14c8464e8._4_4_;
          local_80 = DAT_14c8464f0;
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_6c = 0;
          local_d8 = local_f0;
          uStack_d0 = uStack_e8;
          FUN_1405c5fa2();
          local_60 = &DAT_14cb769e8;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = &PTR_FUN_14b0394b0;
          local_48 = 0x1000000;
          if (param_2 != 0) {
            uVar4 = FUN_144a7b040();
            plVar5 = (longlong *)FUN_144718840(param_2,uVar4);
            if (plVar5 == (longlong *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
            }
          }
          uVar7 = (**(code **)(*param_3 + 0x140))(param_3,0);
          FUN_14095f044(&local_168,uVar7,uVar3,param_3);
          lVar1 = *(longlong *)(param_1 + 0x238);
          local_170 = 0;
          FUN_14485c47a(&local_170,param_2);
          FUN_1415097ba(lVar1 + 0x5528,local_170,&local_168);
          *(byte *)(param_1 + 0x241) = *(byte *)(param_1 + 0x241) | 0x10;
          FUN_14142720e(&local_168);
          break;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)*(int *)(lVar1 + 0x5530) * 0x10 != lVar6);
    }
    FUN_141509760(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146623378 FUN_146623378 body=131 status=ok
// SIG undefined FUN_146623378(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146623378(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"Health",1);
  FUN_14147d486(&DAT_14cbc69b8,local_18,3);
  _DAT_14cbc69b8 = &PTR_FUN_14b965990;
  FUN_140834d1a(&DAT_14cbc69b8,L"Events relevant to health and healing.");
  DAT_14cbc6a15 = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466233fc FUN_1466233fc body=73 status=ok
// SIG undefined FUN_1466233fc(void)

void FUN_1466233fc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (0 < *(int *)(param_1 + 0x238)) {
    FUN_148c0609f(param_1 + 0x230,param_2,param_3);
  }
  FUN_1410b8c2c(param_1 + 0x218,param_2,param_3);
  return;
}



// FUNCTION 146623446 FUN_146623446 body=88 status=ok
// SIG undefined FUN_146623446(void)

undefined8 * FUN_146623446(undefined8 *param_1)

{
  FUN_1403df946();
  *param_1 = &PTR_FUN_14b965720;
  param_1[0xaa] = 0;
  param_1[0xab] = 0x3f800000;
  param_1[0xac] = 0;
  *(byte *)(param_1 + 0xad) = *(byte *)(param_1 + 0xad) & 0xfc;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)((longlong)param_1 + 0x51a) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  return param_1;
}



// FUNCTION 14662349e FUN_14662349e body=112 status=ok
// SIG undefined FUN_14662349e(void)

undefined8 FUN_14662349e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_1409177f8();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_140b0175a(param_1,param_2,&local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146623530 FUN_146623530 body=40 status=ok
// SIG undefined FUN_146623530(void)

undefined8 FUN_146623530(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146623558 FUN_146623558 body=69 status=ok
// SIG undefined FUN_146623558(void)

undefined8 * FUN_146623558(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b965720;
  if (*(char *)(param_1 + 0xae) == '\x01') {
    *(undefined1 *)(param_1 + 0xae) = 0;
  }
  FUN_1403dfcb0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662359e FUN_14662359e body=150 status=ok
// SIG undefined FUN_14662359e(void)

void FUN_14662359e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 146623634 FUN_146623634 body=26 status=ok
// SIG undefined FUN_146623634(void)

bool FUN_146623634(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662364e FUN_14662364e body=24 status=ok
// SIG undefined FUN_14662364e(void)

bool FUN_14662364e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146623666 FUN_146623666 body=85 status=ok
// SIG undefined FUN_146623666(void)

void FUN_146623666(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965d30;
  return;
}



// FUNCTION 1466236bc FUN_1466236bc body=29 status=ok
// SIG undefined FUN_1466236bc(void)

undefined8 FUN_1466236bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466236da FUN_1466236da body=61 status=ok
// SIG undefined FUN_1466236da(void)

void FUN_1466236da(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b965550;
  plVar1 = (longlong *)FUN_14479d2ce((undefined8 *)(param_1 + 0x28));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa48))(plVar1);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146623718 FUN_146623718 body=29 status=ok
// SIG undefined FUN_146623718(void)

undefined8 FUN_146623718(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146623736 FUN_146623736 body=428 status=ok
// SIG undefined FUN_146623736(void)

longlong * FUN_146623736(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_146623816:
    *puVar5 = &PTR_LAB_14b9667e0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b965ee0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146623816;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b9667e0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b965ee0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1466238e2 FUN_1466238e2 body=132 status=ok
// SIG undefined FUN_1466238e2(void)

void FUN_1466238e2(longlong param_1,int param_2)

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



// FUNCTION 146623968 FUN_146623968 body=14 status=ok
// SIG undefined FUN_146623968(void)

void FUN_146623968(longlong param_1)

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



// FUNCTION 146623976 FUN_146623976 body=29 status=ok
// SIG undefined FUN_146623976(void)

undefined8 FUN_146623976(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146623994 FUN_146623994 body=132 status=ok
// SIG undefined FUN_146623994(void)

void FUN_146623994(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146623a18 FUN_146623a18 body=192 status=ok
// SIG undefined FUN_146623a18(void)

void FUN_146623a18(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
    local_20 = FUN_1409f759a();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    local_18 = 3;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146623ada FUN_146623ada body=540 status=ok
// SIG undefined FUN_146623ada(void)

void FUN_146623ada(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = param_1 + 0xf0;
  cVar1 = FUN_144729dda(lVar4);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(lVar4);
    if (*(char *)(lVar2 + 0x178) == '\x03') {
      FUN_1461f9bde(param_1);
      lVar2 = FUN_14479d2ce(lVar4);
      FUN_1447f69b6(lVar2 + 0x5918);
      if (*(char *)(param_1 + 0x131) == '\0') {
        lVar2 = FUN_14479d2ce(lVar4);
        FUN_1447f69b6(lVar2 + 0x4fc8);
      }
    }
    plVar3 = (longlong *)FUN_14479d2ce(lVar4);
    cVar1 = (**(code **)(*plVar3 + 0x700))(plVar3);
    if (cVar1 == '\0') {
      lVar4 = FUN_14479d2ce(lVar4);
      if (lVar4 != 0) {
        lVar4 = FUN_1456e2bea(lVar4);
        if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_f8);
        }
      }
    }
    else {
      lVar2 = param_1 + 0xb0;
      if (*(char *)(param_1 + 0x131) != '\0') {
        lVar2 = param_1 + 0x80;
      }
      uVar5 = FUN_14479d2ce(lVar4);
      local_d8 = (undefined1 **)0x0;
      FUN_140b32deb(local_58 + 2,uVar5,lVar2,0);
      local_58[2] = 0;
      local_58[3] = 0xffffffffffffffff;
      if ((*(char *)(param_1 + 0x131) == '\0') &&
         (lVar2 = *(longlong *)(param_1 + 0x18), lVar2 != 0)) {
        local_58[0] = 0;
        local_58[1] = 0;
        local_68 = &DAT_4030000000000000;
        local_60 = 0x4022000000000000;
        uVar5 = FUN_14479d2ce(lVar4);
        local_78 = 1;
        local_80 = 0;
        local_88 = 0;
        local_90 = 1;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = 0;
        local_b8 = 1;
        local_c0 = 1;
        local_b0 = 0;
        local_c8 = 4;
        local_d0 = 0x42c80000;
        local_d8 = &local_68;
        FUN_141530594(uVar5,lVar2,1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146623d10 FUN_146623d10 body=485 status=ok
// SIG undefined FUN_146623d10(void)

void FUN_146623d10(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  float fVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = param_1 + 0xf0;
  cVar4 = FUN_144729dda(lVar1);
  if (cVar4 != '\0') {
    lVar5 = FUN_14479d2ce(lVar1);
    if (*(char *)(lVar5 + 0x178) != '\x03') {
      *(undefined8 *)(param_1 + 0x120) = 0;
      uVar6 = FUN_14479d2ce(lVar1);
      uVar6 = FUN_1401b4c98(uVar6);
      fVar2 = *(float *)(param_1 + 0x138);
      uVar7 = FUN_14479d2ce(lVar1);
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar3 = local_d0;
      local_c8 = 3;
      *local_d0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_d0[2] = lVar5;
      *local_d0 = &PTR_FUN_14b9675d0;
      local_d0[3] = 0;
      FUN_14485c47a(local_d0 + 3,uVar7);
      puVar3[4] = param_1;
      local_b8 = 0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,&local_d0);
      local_78 = 1;
      local_d8 = local_c0;
      local_c0[0] = 0;
      local_bc = 0xbf800000;
      FUN_1406f4044(uVar6,param_1 + 0x120,&local_b8,fVar2 * 0.7);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      FUN_1449db362(&local_d0);
      FUN_1461c03f7(param_1 + 0xe0,param_2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146623ef6 FUN_146623ef6 body=400 status=ok
// SIG undefined FUN_146623ef6(void)

void FUN_146623ef6(longlong param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1408c7d08();
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88,param_1);
  FUN_1448729ea(param_1 + 0xa8,local_58,local_88);
  uVar3 = FUN_144a7b41a(local_58,*(undefined4 *)(param_1 + 0x178));
  *(undefined4 *)(param_1 + 0x178) = uVar3;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88,param_1);
  FUN_1448729ea(param_1 + 0xf8,local_58,local_88);
  uVar3 = FUN_144a7b41a(local_58,*(undefined4 *)(param_1 + 0x17c));
  *(undefined4 *)(param_1 + 0x17c) = uVar3;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146624088 FUN_146624088 body=151 status=ok
// SIG undefined FUN_146624088(void)

void FUN_146624088(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x400);
  if (lVar4 == 0) {
    uVar3 = FUN_145c20674();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x400) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x408) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x3f8));
    }
    *(undefined8 *)(param_1 + 0x408) = uVar3;
    return;
  }
  return;
}



// FUNCTION 146624120 FUN_146624120 body=355 status=ok
// SIG undefined FUN_146624120(void)

void FUN_146624120(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 == 0) {
    uVar3 = FUN_14122bc66();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x288) = lVar4;
  }
  lVar6 = *(longlong *)(param_1 + 0x290);
  if (lVar6 == 0) {
    if ((*(longlong *)(param_1 + 0x280) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x290) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x280));
        *(longlong *)(param_1 + 0x290) = lVar6;
        if (lVar6 != 0) goto LAB_146624246;
      }
    }
    lVar5 = FUN_14571695d();
    lVar4 = *(longlong *)(lVar5 + 0x60);
    if (lVar4 == 0) {
      uVar3 = FUN_14122bc66();
      lVar4 = FUN_14477b664(uVar3);
      *(longlong *)(lVar5 + 0x60) = lVar4;
    }
    lVar6 = *(longlong *)(lVar5 + 0x68);
    if (lVar6 == 0) {
      if (*(longlong *)(lVar5 + 0x58) == 0) {
        return;
      }
      if (lVar4 == 0) {
        return;
      }
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar3,(longlong *)(lVar5 + 0x58));
      }
      *(longlong *)(lVar5 + 0x68) = lVar6;
    }
  }
LAB_146624246:
  if ((param_2 != 0) && (lVar6 != 0)) {
    FUN_14132d58e(param_2,lVar6,1);
    return;
  }
  return;
}



// FUNCTION 146624284 FUN_146624284 body=259 status=ok
// SIG undefined FUN_146624284(void)

undefined8 *
FUN_146624284(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  local_48 = (int)param_3[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  local_60 = (longlong *)*param_2;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  local_58 = (undefined4)param_2[1];
  FUN_145976f8e(param_1,&local_60,&local_50);
  *param_1 = &PTR_FUN_14b748b70;
  param_1[5] = param_4;
  param_1[6] = param_5;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146624388 FUN_146624388 body=248 status=ok
// SIG undefined FUN_146624388(void)

undefined8 *
FUN_146624388(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  local_48 = (int)param_3[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  local_60 = (longlong *)*param_2;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  local_58 = (undefined4)param_2[1];
  FUN_145976f8e(param_1,&local_60,&local_50);
  *param_1 = &PTR_FUN_14b748b80;
  param_1[5] = param_4;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146624482 FUN_146624482 body=896 status=ok
// SIG undefined FUN_146624482(void)

longlong * FUN_146624482(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1466244ef;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    if ((*(longlong *)(param_1 + 200) != 0) && (cVar6 = FUN_140fd4278(param_1), cVar6 == '\0')) {
      if (*(char *)(param_1 + 0xd8) == '\0') {
        FUN_144a5dc74(&local_78);
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        FUN_1446ddda2(&local_68,"BigMap_Action_TrackMission",0);
        FUN_140ac6c96(&local_68,&local_78);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        lVar8 = FUN_14001cc68(0x38,0x10);
        FUN_14050cae0(param_1,&local_68);
        FUN_1400b22c2(local_88,"action_ui_bigmap_tooltip_main_action");
        local_98 = local_78;
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 8))();
        }
        local_90 = local_70;
        FUN_148d10efe(lVar8,&local_98,local_88,&local_68);
        plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14b967ad0;
        plVar9[2] = lVar8;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        iVar7 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
          FUN_145976dba(param_2,iVar7);
        }
        lVar4 = *param_2;
        *(longlong *)(lVar4 + (longlong)iVar7 * 0x10) = lVar8;
        *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
      FUN_144a5dc74(&local_78);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN_1446ddda2(&local_68,"BigMap_Action_ViewInLog",0);
      FUN_140ac6c96(&local_68,&local_78);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      lVar8 = FUN_14001cc68(0x38,0x10);
      FUN_14050cae0(param_1,&local_68);
      FUN_1400b22c2(local_a8,"action_ui_bigmap_tooltip_leave_menu_action");
      local_b8 = local_78;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 8))();
      }
      local_b0 = local_70;
      FUN_148d10ffa(lVar8,&local_b8,local_a8,&local_68);
      plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14b967af0;
      plVar9[2] = lVar8;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_145976dba(param_2,iVar7);
      }
      lVar4 = *param_2;
      *(longlong *)(lVar4 + (longlong)iVar7 * 0x10) = lVar8;
      *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_1466244ef:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146624804 FUN_146624804 body=83 status=ok
// SIG undefined FUN_146624804(void)

void FUN_146624804(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  
  puVar1 = (undefined8 *)(param_1 + 200);
  cVar3 = FUN_144729dda(puVar1);
  if (cVar3 != '\0') {
    lVar2 = FUN_14479d2ce(puVar1);
    FUN_140457ffc(lVar2 + 0x750,param_1);
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *puVar1 = 0;
  FUN_140457ffc(&DAT_14cb717f8,param_1);
  return;
}



// FUNCTION 146624858 FUN_146624858 body=202 status=ok
// SIG undefined FUN_146624858(void)

undefined8 FUN_146624858(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = (**(code **)(*param_1 + 0x180))();
  FUN_1410d53f0(&local_28,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_141446784(local_28,param_1 + 0x19);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_1466248d5;
    }
  }
  uVar5 = 0;
LAB_1466248d5:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146624924 FUN_146624924 body=65 status=ok
// SIG undefined FUN_146624924(void)

void FUN_146624924(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  plVar2 = (longlong *)FUN_14007a5e6(uVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014662495b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xe8))(plVar2,param_1 + 0xb,*(code **)(*plVar2 + 0xe8));
    return;
  }
  return;
}



// FUNCTION 146624966 FUN_146624966 body=169 status=ok
// SIG undefined FUN_146624966(void)

void FUN_146624966(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = (**(code **)(*param_1 + 0x180))();
  plVar3 = (longlong *)FUN_14007a5e6(uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0xf0))(plVar3,param_1 + 0xb);
  }
  lVar6 = param_1[7];
  uVar4 = 0;
  if ((longlong)(int)param_1[8] != 0) {
    lVar5 = (longlong)(int)param_1[8] * 0x18;
    lVar6 = lVar6 + 8;
    do {
      if (param_1[6] != 0) {
        FUN_140993b54(param_1[6],lVar6);
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
    uVar4 = (undefined4)param_1[8];
    lVar6 = param_1[7];
  }
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  FUN_14117d0df(lVar6,uVar4);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x44) != 0)) {
    FUN_14883663a(param_1 + 7,0);
    return;
  }
  return;
}



// FUNCTION 146624a10 FUN_146624a10 body=236 status=ok
// SIG undefined FUN_146624a10(void)

void FUN_146624a10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_14060e84c();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_140457ffc(lVar2 + 0x9c0,param_1);
    }
  }
  uVar4 = 0;
  FUN_145c46468(param_1,0);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    lVar2 = lVar2 + 8;
    do {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_140993b54(*(longlong *)(param_1 + 0x30),lVar2);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  FUN_14117d0df(lVar2,uVar4);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_14883663a(param_1 + 0x38,0);
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_14882c108(param_1 + 0x60,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 146624b12 FUN_146624b12 body=223 status=ok
// SIG undefined FUN_146624b12(void)

void FUN_146624b12(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_14060e84c();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_140457ffc(lVar2 + 0x3490,param_1);
      FUN_140457ffc(lVar2 + 0x34a8,param_1);
      FUN_140457ffc(lVar2 + 0x34c0,param_1);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  uVar4 = 0;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    lVar2 = lVar2 + 8;
    do {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_140993b54(*(longlong *)(param_1 + 0x30),lVar2);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  FUN_14117d0df(lVar2,uVar4);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_14883663a(param_1 + 0x38,0);
    return;
  }
  return;
}



// FUNCTION 146624bf2 FUN_146624bf2 body=189 status=ok
// SIG undefined FUN_146624bf2(void)

void FUN_146624bf2(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  cVar2 = FUN_144729dda(param_1 + 0xb);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(param_1 + 0xb);
    FUN_140457ffc(lVar3 + 0x2250,param_1);
  }
  param_1[0xb] = 0;
  (**(code **)(*param_1 + 0x180))(param_1);
  lVar3 = param_1[7];
  uVar4 = 0;
  if ((longlong)(int)param_1[8] != 0) {
    lVar5 = (longlong)(int)param_1[8] * 0x18;
    lVar3 = lVar3 + 8;
    do {
      if (param_1[6] != 0) {
        FUN_140993b54(param_1[6],lVar3);
      }
      lVar3 = lVar3 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
    uVar4 = (undefined4)param_1[8];
    lVar3 = param_1[7];
  }
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  FUN_14117d0df(lVar3,uVar4);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x44) != 0)) {
    FUN_14883663a(param_1 + 7,0);
    return;
  }
  return;
}



// FUNCTION 146624cb0 FUN_146624cb0 body=112 status=ok
// SIG undefined FUN_146624cb0(void)

void FUN_146624cb0(longlong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[5] == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_141495e41(&local_20,uVar1);
    bVar2 = local_20 == param_1[5];
  }
  *(bool *)(param_1 + 0xf) = bVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1413f8868(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146624d22 FUN_146624d22 body=218 status=ok
// SIG undefined FUN_146624d22(void)

void FUN_146624d22(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_14060e84c();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = FUN_14497e828(lVar2);
      if (lVar2 == 0) {
        return;
      }
      lVar2 = FUN_140fb8258(lVar2);
      if (lVar2 != 0) {
        FUN_140457ffc(lVar2 + 0x278,param_1);
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  uVar4 = 0;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    lVar2 = lVar2 + 8;
    do {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_140993b54(*(longlong *)(param_1 + 0x30),lVar2);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  FUN_14117d0df(lVar2,uVar4);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_14883663a(param_1 + 0x38,0);
    return;
  }
  return;
}



// FUNCTION 146624dfc FUN_146624dfc body=376 status=ok
// SIG undefined FUN_146624dfc(void)

undefined8 FUN_146624dfc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar7 = FUN_140082f10();
    lVar3 = *(longlong *)(param_1 + 0x398);
    if (lVar3 != 0) {
      uVar8 = 0;
      if ((lVar7 == 0) || (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 == 0)) goto LAB_146624f04;
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) {
        if ((&DAT_149fc1b6e)[*(byte *)(lVar3 + 0x500)] == '\x01') {
          if (*(longlong **)(lVar3 + 0x4f0) != (longlong *)0x0) {
            cVar6 = (**(code **)(**(longlong **)(lVar3 + 0x4f0) + 0x28))();
            if (cVar6 != '\0') goto LAB_146624eab;
          }
        }
        else if ((*(uint *)(lVar3 + 0x4f0) & 0xffffff) != 0) {
LAB_146624eab:
          FUN_1408e4d18(lVar3 + 0x4e8,&local_30);
          plVar1 = local_28;
          if (&local_30 != param_2) {
            *param_2 = local_30;
            local_30 = 0;
            plVar5 = (longlong *)param_2[1];
            if (local_28 != plVar5) {
              local_28 = (longlong *)0x0;
              param_2[1] = plVar1;
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
            }
          }
          plVar1 = local_28;
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_28 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_28)(local_28);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          uVar8 = 1;
          goto LAB_146624f04;
        }
      }
    }
  }
  uVar8 = 0;
LAB_146624f04:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146624f76 FUN_146624f76 body=215 status=ok
// SIG undefined FUN_146624f76(void)

undefined4 * FUN_146624f76(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    FUN_141208f3a(&local_48);
    lVar2 = local_48;
    uVar3 = 0;
    if ((longlong)local_40 != 0) {
      lVar4 = 0;
      do {
        if ((*(longlong *)(lVar2 + lVar4) != 0) && (FUN_144a79b68(&local_50), local_50 == lVar1)) {
          uVar3 = 1;
          break;
        }
        lVar4 = lVar4 + 8;
        uVar3 = 0;
      } while ((longlong)local_40 * 8 != lVar4);
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar3;
    *(undefined1 *)(param_2 + 8) = 1;
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14662504e FUN_14662504e body=214 status=ok
// SIG undefined FUN_14662504e(void)

void FUN_14662504e(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    cVar1 = FUN_144729dda(param_1 + 0x38);
    if (cVar1 != '\0') {
      uVar3 = FUN_14479d2ce(param_1 + 0x38);
      lVar4 = FUN_1447210f0(uVar3);
      if (lVar4 != 0) {
        lVar4 = FUN_140115352(lVar4);
        if (lVar4 != 0) {
          local_20 = *(undefined4 *)(param_1 + 0x60);
          local_28 = *(undefined8 *)(param_1 + 0x58);
          uVar2 = FUN_14887b778(lVar4);
          if ((4 < (byte)uVar2) || ((0x1aU >> (uVar2 & 0x1f) & 1) == 0)) {
            FUN_148d122e0(param_1,uVar2);
          }
        }
      }
    }
  }
  cVar1 = *(char *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x80) != cVar1) {
    *(char *)(param_1 + 0x80) = cVar1;
    if (cVar1 == '\0') {
      FUN_1449db8d8();
    }
    else {
      FUN_144958d50(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146625126 FUN_146625126 body=126 status=ok
// SIG undefined FUN_146625126(void)

ulonglong FUN_146625126(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  cVar1 = FUN_144729dda(param_1 + 0x48);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x48);
    if (*(longlong *)(lVar2 + 0x398) != 0) {
      lVar3 = FUN_144a7b4ca();
      if ((((*(longlong *)(lVar2 + 0x398) != 0) && (lVar3 != 0)) &&
          (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x398) + 0x10), lVar2 != 0)) &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) {
        cVar1 = FUN_140e8536a();
        if (cVar1 == '\0') {
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1466251a4 FUN_1466251a4 body=124 status=ok
// SIG undefined FUN_1466251a4(void)

void FUN_1466251a4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x48);
  if (cVar1 != '\0') {
    cVar1 = FUN_144a87d38(param_2);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x48);
      local_38 = 0;
      FUN_140b32deb(local_30,*(undefined8 *)(lVar2 + 0x3d0),param_2,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146625222 FUN_146625222 body=129 status=ok
// SIG undefined FUN_146625222(void)

undefined8 * FUN_146625222(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  param_1 = param_1 + 0x48;
  cVar2 = FUN_144729dda(param_1);
  if ((cVar2 != '\0') && (lVar3 = FUN_14479d2ce(param_1), *(longlong *)(lVar3 + 0xa08) != 0)) {
    lVar3 = FUN_14479d2ce(param_1);
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xa08) + 0x1c8);
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar3 + 0x268);
      *param_2 = *(undefined8 *)(lVar3 + 0x260);
      param_2[1] = uVar1;
      param_2[2] = *(undefined8 *)(lVar3 + 0x270);
      return param_2;
    }
  }
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1466252c4 FUN_1466252c4 body=29 status=ok
// SIG undefined FUN_1466252c4(void)

undefined8 FUN_1466252c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466252e2 FUN_1466252e2 body=85 status=ok
// SIG undefined FUN_1466252e2(void)

void FUN_1466252e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b968f30;
  return;
}



// FUNCTION 146625338 FUN_146625338 body=29 status=ok
// SIG undefined FUN_146625338(void)

undefined8 FUN_146625338(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146625356 FUN_146625356 body=29 status=ok
// SIG undefined FUN_146625356(void)

undefined8 FUN_146625356(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146625374 FUN_146625374 body=29 status=ok
// SIG undefined FUN_146625374(void)

undefined8 FUN_146625374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146625392 FUN_146625392 body=93 status=ok
// SIG undefined FUN_146625392(void)

void FUN_146625392(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967a60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1466253f0 FUN_1466253f0 body=26 status=ok
// SIG undefined FUN_1466253f0(void)

bool FUN_1466253f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662540a FUN_14662540a body=29 status=ok
// SIG undefined FUN_14662540a(void)

bool FUN_14662540a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146625428 FUN_146625428 body=24 status=ok
// SIG undefined FUN_146625428(void)

bool FUN_146625428(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146625440 FUN_146625440 body=29 status=ok
// SIG undefined FUN_146625440(void)

bool FUN_146625440(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662545e FUN_14662545e body=24 status=ok
// SIG undefined FUN_14662545e(void)

bool FUN_14662545e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146625476 FUN_146625476 body=29 status=ok
// SIG undefined FUN_146625476(void)

undefined8 FUN_146625476(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146625494 FUN_146625494 body=29 status=ok
// SIG undefined FUN_146625494(void)

bool FUN_146625494(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466254b2 FUN_1466254b2 body=26 status=ok
// SIG undefined FUN_1466254b2(void)

bool FUN_1466254b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1466254cc FUN_1466254cc body=24 status=ok
// SIG undefined FUN_1466254cc(void)

bool FUN_1466254cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466254e4 FUN_1466254e4 body=24 status=ok
// SIG undefined FUN_1466254e4(void)

bool FUN_1466254e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466254fc FUN_1466254fc body=29 status=ok
// SIG undefined FUN_1466254fc(void)

bool FUN_1466254fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662551a FUN_14662551a body=26 status=ok
// SIG undefined FUN_14662551a(void)

bool FUN_14662551a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146625534 FUN_146625534 body=29 status=ok
// SIG undefined FUN_146625534(void)

bool FUN_146625534(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146625552 FUN_146625552 body=26 status=ok
// SIG undefined FUN_146625552(void)

bool FUN_146625552(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662556c FUN_14662556c body=24 status=ok
// SIG undefined FUN_14662556c(void)

bool FUN_14662556c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146625584 FUN_146625584 body=29 status=ok
// SIG undefined FUN_146625584(void)

bool FUN_146625584(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466255a2 FUN_1466255a2 body=26 status=ok
// SIG undefined FUN_1466255a2(void)

bool FUN_1466255a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1466255bc FUN_1466255bc body=24 status=ok
// SIG undefined FUN_1466255bc(void)

bool FUN_1466255bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466255d4 FUN_1466255d4 body=29 status=ok
// SIG undefined FUN_1466255d4(void)

bool FUN_1466255d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466255f2 FUN_1466255f2 body=29 status=ok
// SIG undefined FUN_1466255f2(void)

bool FUN_1466255f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146625610 FUN_146625610 body=29 status=ok
// SIG undefined FUN_146625610(void)

bool FUN_146625610(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662562e FUN_14662562e body=26 status=ok
// SIG undefined FUN_14662562e(void)

bool FUN_14662562e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146625648 FUN_146625648 body=29 status=ok
// SIG undefined FUN_146625648(void)

bool FUN_146625648(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146625666 FUN_146625666 body=24 status=ok
// SIG undefined FUN_146625666(void)

bool FUN_146625666(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662567e FUN_14662567e body=26 status=ok
// SIG undefined FUN_14662567e(void)

bool FUN_14662567e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146625698 FUN_146625698 body=158 status=ok
// SIG undefined FUN_146625698(void)

bool FUN_146625698(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146625738 FUN_146625738 body=132 status=ok
// SIG undefined FUN_146625738(void)

void FUN_146625738(longlong param_1,int param_2)

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



// FUNCTION 1466257be FUN_1466257be body=428 status=ok
// SIG undefined FUN_1466257be(void)

longlong * FUN_1466257be(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14662589e:
    *puVar5 = &PTR_LAB_14b968dc0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b968a40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14662589e;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b968dc0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b968a40;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14662596a FUN_14662596a body=428 status=ok
// SIG undefined FUN_14662596a(void)

longlong * FUN_14662596a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146625a4a:
    *puVar5 = &PTR_LAB_14b968e30;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b968ab0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146625a4a;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b968e30;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b968ab0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146625b16 FUN_146625b16 body=95 status=ok
// SIG undefined FUN_146625b16(void)

void FUN_146625b16(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146625b76 FUN_146625b76 body=118 status=ok
// SIG undefined FUN_146625b76(void)

void FUN_146625b76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b968b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146625bf6 FUN_146625bf6 body=57 status=ok
// SIG undefined FUN_146625bf6(void)

void FUN_146625bf6(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_1458ae910(uVar1,1,0);
    return;
  }
  return;
}



// FUNCTION 146625c30 FUN_146625c30 body=202 status=ok
// SIG undefined FUN_146625c30(void)

void FUN_146625c30(longlong param_1,double *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x30;
  cVar2 = FUN_144729dda(lVar3);
  if (cVar2 == '\0') {
    return;
  }
  if (9.99999905104687e-09 <=
      param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]) {
    cVar2 = FUN_144729dda(param_1 + 0x38);
    if (cVar2 != '\0') {
      uVar1 = FUN_14479d2ce(param_1 + 0x38);
      FUN_140545fa2(uVar1);
    }
    lVar3 = FUN_14479d2ce(lVar3);
    uVar1 = (**(code **)(*(longlong *)(lVar3 + 0x510) + 0x18))(lVar3 + 0x510);
    FUN_140dc8f42(uVar1,0);
    return;
  }
  lVar3 = FUN_14479d2ce(lVar3);
  uVar1 = (**(code **)(*(longlong *)(lVar3 + 0x510) + 0x18))(lVar3 + 0x510);
  FUN_140dc8e1a(uVar1,0);
  return;
}



// FUNCTION 146625cfa FUN_146625cfa body=192 status=ok
// SIG undefined FUN_146625cfa(void)

void FUN_146625cfa(longlong param_1,double *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  cVar1 = FUN_144729dda(lVar2);
  if (cVar1 == '\0') {
    return;
  }
  if (param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1] < 9.99999905104687e-09
     ) {
    lVar2 = FUN_14479d2ce(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000146625d6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar2 + 0x518) + 0x70))(lVar2 + 0x518,0,0);
    return;
  }
  cVar1 = FUN_144729dda(param_1 + 0x38);
  if (cVar1 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 0x38);
    FUN_140545fa2(uVar3);
  }
  lVar2 = FUN_14479d2ce(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000146625dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar2 + 0x518) + 0x68))(lVar2 + 0x518);
  return;
}



// FUNCTION 146625dba FUN_146625dba body=54 status=ok
// SIG undefined FUN_146625dba(void)

void FUN_146625dba(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x38);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x38);
    FUN_145acc83c(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 146625df0 FUN_146625df0 body=94 status=ok
// SIG undefined FUN_146625df0(void)

void FUN_146625df0(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x48) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_140115c12(param_1 + 0x58,0);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146625e4e FUN_146625e4e body=254 status=ok
// SIG undefined FUN_146625e4e(void)

void FUN_146625e4e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x40) + 8))) {
    FUN_1401cb356();
    local_38 = *(undefined8 *)(param_1 + 0x38);
    local_30 = *(longlong *)(param_1 + 0x40);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_38);
    plVar3 = *(longlong **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < (longlong)iVar2) {
    iVar7 = -iVar2;
    uVar6 = (longlong)iVar2;
    do {
      uVar5 = *(uint *)(param_1 + 0x30);
      if (uVar6 != uVar5) {
        memmove((void *)(*(longlong *)(param_1 + 0x28) + uVar6 * 4 + -4),
                (void *)(*(longlong *)(param_1 + 0x28) + uVar6 * 4),
                (longlong)(int)(uVar5 + iVar7) << 2);
        uVar5 = *(uint *)(param_1 + 0x30);
      }
      *(uint *)(param_1 + 0x30) = uVar5 - 1;
      FUN_1401fef06(param_1 + 0x28);
      iVar7 = iVar7 + 1;
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146625f4e FUN_146625f4e body=62 status=ok
// SIG undefined FUN_146625f4e(void)

undefined8 FUN_146625f4e(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cbc94e8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cbc94e8,param_1);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 146625f8c FUN_146625f8c body=735 status=ok
// SIG undefined FUN_146625f8c(void)

void FUN_146625f8c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Str1;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  wchar_t *local_68;
  int local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_70 = param_2;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400021e4(&local_70,&local_80);
    local_98 = (undefined2 *)0x0;
    uStack_90 = 0;
    local_a8 = (wchar_t *)0x0;
    uStack_a0 = 0;
    FUN_140056680(&local_68,&DAT_149e0635c);
    cVar1 = FUN_1407cdba6(&local_80,&local_68,&local_98,&local_a8);
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      iVar2 = local_78 + -1;
      if (local_78 == 0) {
        iVar2 = 0;
      }
      FUN_1402980a2(&local_98,local_80,iVar2);
      FUN_14020fad6(&local_a8,&DAT_149dfb77a);
    }
    FUN_140056680(&local_68,L"default");
    pwVar4 = local_68;
    if (local_60 == 0) {
      pwVar4 = L"";
    }
    _Str1 = L"";
    if ((int)uStack_a0 != 0) {
      _Str1 = local_a8;
    }
    iVar2 = wcscmp(_Str1,pwVar4);
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8(local_68);
    }
    if (iVar2 == 0) {
      FUN_14020fad6(&local_a8,&DAT_149dfb77a);
    }
    FUN_144928b90(&local_68,3);
    local_b8 = DAT_14cbc9638;
    local_b0 = DAT_14cbc9640;
    FUN_144928d62(local_58,1);
    local_c8[0] = 0;
    local_c4 = 0;
    local_bc = 0;
    puVar5 = local_98;
    if ((int)uStack_90 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d0,puVar5,1);
    FUN_144976b9c(local_c8,local_d0);
    lVar3 = FUN_1414ef453(param_1,0);
    if (lVar3 != 0) {
      FUN_140bc53f1(&local_68,local_c8,lVar3,0);
    }
    local_d8 = DAT_14cbc9658;
    local_e0 = DAT_14cbc9650;
    FUN_144928d62(local_58,1);
    pwVar4 = local_a8;
    if ((int)uStack_a0 == 0) {
      pwVar4 = L"";
    }
    FUN_1446f470e(&local_e8,pwVar4,1);
    FUN_144976b9c(local_c8,local_e8);
    lVar3 = FUN_1414ef453(param_1,0);
    if (lVar3 != 0) {
      FUN_140bc53f1(&local_68,local_c8,lVar3,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14662626c FUN_14662626c body=103 status=ok
// SIG undefined FUN_14662626c(void)

longlong FUN_14662626c(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144928b90(param_1,4);
  local_20 = DAT_14cbca668;
  local_18 = DAT_14cbca670;
  FUN_144928d62(param_1 + 0x10,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466262d4 FUN_1466262d4 body=103 status=ok
// SIG undefined FUN_1466262d4(void)

longlong FUN_1466262d4(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144928b90(param_1,3);
  local_20 = DAT_14cbca710;
  local_18 = DAT_14cbca718;
  FUN_144928d62(param_1 + 0x10,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662633c FUN_14662633c body=103 status=ok
// SIG undefined FUN_14662633c(void)

longlong FUN_14662633c(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144928b90(param_1,2);
  local_20 = DAT_14cbca710;
  local_18 = DAT_14cbca718;
  FUN_144928d62(param_1 + 0x10,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466263a4 FUN_1466263a4 body=103 status=ok
// SIG undefined FUN_1466263a4(void)

longlong FUN_1466263a4(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144928b90(param_1,3);
  local_20 = DAT_14cbca728;
  local_18 = DAT_14cbca730;
  FUN_144928d62(param_1 + 0x10,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662640c FUN_14662640c body=103 status=ok
// SIG undefined FUN_14662640c(void)

longlong FUN_14662640c(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144928b90(param_1,3);
  local_20 = DAT_14cbca758;
  local_18 = DAT_14cbca760;
  FUN_144928d62(param_1 + 0x10,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146626474 FUN_146626474 body=103 status=ok
// SIG undefined FUN_146626474(void)

longlong FUN_146626474(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144928b90(param_1,4);
  local_20 = DAT_14cbca770;
  local_18 = DAT_14cbca778;
  FUN_144928d62(param_1 + 0x10,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466264dc FUN_1466264dc body=118 status=ok
// SIG undefined FUN_1466264dc(void)

undefined8 * FUN_1466264dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"GetAudioLanguage",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146626554 FUN_146626554 body=118 status=ok
// SIG undefined FUN_146626554(void)

undefined8 * FUN_146626554(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"SetAudioLanguage",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466265cc FUN_1466265cc body=134 status=ok
// SIG undefined FUN_1466265cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1466265cc(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"Boss_Fight",1);
  FUN_14147d486(&DAT_14cbc9680,local_18,3);
  _DAT_14cbc9680 = &PTR_FUN_14b96c040;
  FUN_140834d1a(&DAT_14cbc9680,L"Events relevant to boss fights");
  _DAT_14cbc96e0 = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146626674 FUN_146626674 body=24 status=ok
// SIG undefined FUN_146626674(void)

bool FUN_146626674(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662668c FUN_14662668c body=147 status=ok
// SIG undefined FUN_14662668c(void)

void FUN_14662668c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146626720 FUN_146626720 body=448 status=ok
// SIG undefined FUN_146626720(void)

void FUN_146626720(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1466268e2 FUN_1466268e2 body=29 status=ok
// SIG undefined FUN_1466268e2(void)

undefined8 FUN_1466268e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146626900 FUN_146626900 body=29 status=ok
// SIG undefined FUN_146626900(void)

undefined8 FUN_146626900(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662692a FUN_14662692a body=29 status=ok
// SIG undefined FUN_14662692a(void)

bool FUN_14662692a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146626948 FUN_146626948 body=26 status=ok
// SIG undefined FUN_146626948(void)

bool FUN_146626948(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146626962 FUN_146626962 body=24 status=ok
// SIG undefined FUN_146626962(void)

bool FUN_146626962(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662697a FUN_14662697a body=24 status=ok
// SIG undefined FUN_14662697a(void)

bool FUN_14662697a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146626992 FUN_146626992 body=85 status=ok
// SIG undefined FUN_146626992(void)

void FUN_146626992(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e990;
  return;
}



// FUNCTION 1466269e8 FUN_1466269e8 body=29 status=ok
// SIG undefined FUN_1466269e8(void)

undefined8 FUN_1466269e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146626a06 FUN_146626a06 body=116 status=ok
// SIG undefined FUN_146626a06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146626a06(undefined8 *param_1)

{
  undefined8 uVar1;
  
  LOCK();
  _DAT_14cb1afc0 = _DAT_14cb1afc0 + 1;
  UNLOCK();
  uVar1 = FUN_140dba96c(DAT_14cb1afb8);
  *param_1 = uVar1;
  param_1[1] = &DAT_14cb1afb8;
  LOCK();
  _DAT_14cb1afc0 = _DAT_14cb1afc0 + 1;
  UNLOCK();
  FUN_140dba91a(param_1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[2] = 0;
  param_1[3] = &DAT_14cb1afb8;
  LOCK();
  _DAT_14cb1afc0 = _DAT_14cb1afc0 + 1;
  UNLOCK();
  FUN_140dba91a(param_1 + 2);
  LOCK();
  _DAT_14cb1afc0 = _DAT_14cb1afc0 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 146626a7a FUN_146626a7a body=132 status=ok
// SIG undefined FUN_146626a7a(void)

void FUN_146626a7a(longlong param_1,int param_2)

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



// FUNCTION 146626b00 FUN_146626b00 body=248 status=ok
// SIG undefined FUN_146626b00(void)

undefined8 FUN_146626b00(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14aa6ea50;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b971180;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1412b4546(&DAT_14cb10968,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146626bfa FUN_146626bfa body=254 status=ok
// SIG undefined FUN_146626bfa(void)

undefined8
FUN_146626bfa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b403f60;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9711f0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bc922(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146626cfa FUN_146626cfa body=248 status=ok
// SIG undefined FUN_146626cfa(void)

undefined8 FUN_146626cfa(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1ca6c0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b971260;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1411df00c(&DAT_14cb10a78,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146626df4 FUN_146626df4 body=49 status=ok
// SIG undefined FUN_146626df4(void)

longlong * FUN_146626df4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140b6d0be();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 146626e26 FUN_146626e26 body=32 status=ok
// SIG undefined FUN_146626e26(void)

undefined8 FUN_146626e26(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_14b96f8fc);
  return param_2;
}



// FUNCTION 146626e46 FUN_146626e46 body=76 status=ok
// SIG undefined FUN_146626e46(void)

void FUN_146626e46(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_140b6d0be();
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) == lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000146626e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x378))(plVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),5));
      return;
    }
  }
  return;
}



// FUNCTION 146626e92 FUN_146626e92 body=430 status=ok
// SIG undefined FUN_146626e92(void)

void FUN_146626e92(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) goto LAB_146626f85;
  if ((char)param_1[0x3f] == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x490))(param_1);
    if (cVar2 == '\0') {
      bVar3 = (**(code **)(*param_1 + 0x498))(param_1);
      if (5 < bVar3) {
        cVar2 = (**(code **)(*param_1 + 0x498))(param_1);
        if (cVar2 != '\t') {
          cVar2 = (**(code **)(*param_1 + 0x498))(param_1);
          bVar7 = (byte)(cVar2 - 10U) < 0xfc;
          goto LAB_146626f33;
        }
      }
    }
    local_30 = *(undefined8 *)(param_2 + 0x18);
    FUN_1400021e4(&local_30,&local_40);
    cVar2 = FUN_145ac4158(&local_40);
    if (CONCAT71(uStack_3f,local_40) != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') {
      FUN_1415aa586(param_1 + 0x40,&DAT_14cbca390);
    }
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
LAB_146626f33:
  lVar1 = *(longlong *)(param_2 + 0x170);
  if (lVar1 != 0) {
    lVar5 = FUN_140425b9a();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) {
      lVar5 = FUN_14592c82e();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) {
        FUN_14603dbc2(param_1);
      }
    }
  }
  if (param_1[6] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1[6] + 0x360);
  }
  iVar4 = FUN_14490d72a(uVar6);
  if (iVar4 == 3) {
    FUN_14144f736(param_1 + 0x40,&DAT_14cbca3c0,1);
  }
  if (bVar7) {
    local_40 = 8;
    FUN_140627eda(param_1 + 0x40);
  }
LAB_146626f85:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146627042 FUN_146627042 body=99 status=ok
// SIG undefined FUN_146627042(void)

void FUN_146627042(longlong param_1,longlong param_2,short *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (-1 < *param_3)) {
    lVar1 = FUN_14119d4d6();
    lVar2 = FUN_140bccd38(param_2,param_3);
    if (lVar2 == lVar1) {
      FUN_14144f736(param_1 + 0x200,&DAT_14cbca3b8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1466270a6 FUN_1466270a6 body=176 status=ok
// SIG undefined FUN_1466270a6(void)

undefined8 * FUN_1466270a6(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_14117e474();
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) goto LAB_14662713c;
  }
  lVar3 = FUN_14117e474();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    *param_1 = 0;
    iVar1 = *(int *)(lVar4 + 0x40);
    _Src = *(void **)(lVar4 + 0x38);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
LAB_14662713c:
  FUN_140056680(param_1,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 146627156 FUN_146627156 body=79 status=ok
// SIG undefined FUN_146627156(void)

longlong * FUN_146627156(longlong *param_1)

{
  ulonglong uVar1;
  short *psVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_140810f5e(param_1,0);
  uVar3 = (longlong)(int)param_1[1] * 2;
  do {
    if (uVar3 == 0) {
      return param_1;
    }
    uVar1 = uVar3 - 2;
    psVar2 = (short *)(*param_1 + -2 + uVar3);
    uVar3 = uVar1;
  } while (*psVar2 != 0x2f);
  iVar4 = (int)(uVar1 >> 1);
  if (iVar4 != -1) {
    FUN_14496493a(param_1,0,iVar4 + 1,1);
  }
  return param_1;
}



// FUNCTION 1466271a6 FUN_1466271a6 body=100 status=ok
// SIG undefined FUN_1466271a6(void)

void FUN_1466271a6(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1403ca102();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)) {
    lVar3 = FUN_140b7066c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar1 = FUN_14133cdf6(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001466271ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x778))(param_2,uVar1,*(code **)(*param_2 + 0x778));
      return;
    }
  }
  return;
}



// FUNCTION 14662720a FUN_14662720a body=237 status=ok
// SIG undefined FUN_14662720a(void)

undefined8
FUN_14662720a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_48,L"PlayAs");
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_4 + 1);
  lVar2 = (longlong)local_50;
  _Src = (void *)*param_4;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar2 * 2);
  }
  FUN_14126d510(&local_38,&local_58,local_48);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(param_2,iVar1,local_38,1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466272f8 FUN_1466272f8 body=20 status=ok
// SIG undefined FUN_1466272f8(void)

bool FUN_1466272f8(void)

{
  int iVar1;
  
  iVar1 = FUN_14140e32c();
  return iVar1 == 1;
}



// FUNCTION 14662730c FUN_14662730c body=254 status=ok
// SIG undefined FUN_14662730c(void)

undefined8
FUN_14662730c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3fdf50;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b972360;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a0b054(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662740c FUN_14662740c body=349 status=ok
// SIG undefined FUN_14662740c(void)

void FUN_14662740c(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  short local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = FUN_14487fd02();
  if (iVar2 == 3) goto LAB_14662753b;
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 == 0) {
LAB_146627563:
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1400f6f32(lVar3);
    if (lVar3 == 0) goto LAB_146627563;
    lVar3 = *(longlong *)(lVar3 + 0x68);
  }
  uVar4 = FUN_1447210f0(param_1);
  lVar5 = FUN_140149a73(uVar4,0);
  if ((lVar3 != 0) && (lVar5 != 0)) {
    lVar5 = FUN_1407d7c86(&DAT_14cbca810);
    if (lVar5 != 0) {
      lVar6 = FUN_1407d824e(lVar5);
      if (lVar6 != 0) {
        lVar7 = FUN_1403ca102(param_1);
        if ((lVar7 != 0) && (iVar2 = *(int *)(lVar7 + 0x40), (longlong)iVar2 != 0)) {
          lVar7 = *(longlong *)(lVar7 + 0x38);
          lVar10 = 0;
          do {
            uVar4 = *(undefined8 *)(lVar7 + lVar10);
            cVar1 = FUN_1406f1f80(uVar4);
            if (cVar1 != '\0') {
              FUN_1409845a0(lVar3,local_4c,uVar4);
              if (-1 < local_4c[0]) {
                plVar8 = (longlong *)FUN_140d71416(lVar3,local_4c);
                if (plVar8 != (longlong *)0x0) {
                  lVar9 = (**(code **)(*plVar8 + 0x7e0))(plVar8,lVar6 + 0x1c);
                  if (lVar9 != 0) {
                    FUN_1407d853c(lVar9,lVar5);
                  }
                }
              }
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar2 * 8 != lVar10);
        }
      }
    }
  }
LAB_14662753b:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662756a FUN_14662756a body=35 status=ok
// SIG undefined FUN_14662756a(void)

void FUN_14662756a(undefined8 param_1,longlong param_2)

{
  thunk_FUN_15750bbea();
  if (param_2 != 0) {
    FUN_144a5dd5e();
    return;
  }
  return;
}



// FUNCTION 14662758e FUN_14662758e body=32 status=ok
// SIG undefined FUN_14662758e(void)

undefined8 FUN_14662758e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 1466275ae FUN_1466275ae body=451 status=ok
// SIG undefined FUN_1466275ae(void)

longlong FUN_1466275ae(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
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
  if (param_1 == 0) {
LAB_14662764c:
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar5 = param_1 + 0x250;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar5;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = *(int *)(param_1 + 0x268);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar7) || (uStack_48 != lVar5)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar2;
      do {
        lVar8 = *(longlong *)(*local_78 + (longlong)iVar4 * 0x10);
        if (lVar8 != 0) {
          lVar6 = FUN_144a78c84();
          if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
              (cVar3 = FUN_14342c3d2(lVar8,DAT_14cbca630), cVar3 == '\0')) &&
             (cVar3 = FUN_14342c3d2(lVar8,DAT_14cbca628), cVar3 == '\0')) goto LAB_146627627;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != plVar1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar5 || local_60._4_4_ != iVar7));
    }
  }
  else {
    lVar5 = FUN_144a7cacc();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) goto LAB_14662764c;
    lVar8 = *(longlong *)(param_1 + 0x428);
    uVar2 = local_60;
    if (lVar8 != 0) {
      lVar5 = FUN_144a78c84();
      uVar2 = local_60;
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) goto LAB_146627627;
    }
  }
  local_60 = uVar2;
  lVar8 = 0;
LAB_146627627:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 146627772 FUN_146627772 body=106 status=ok
// SIG undefined FUN_146627772(void)

void FUN_146627772(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_20 = FUN_144a78c84();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1410dcbc6(param_1,&local_20,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466277e4 FUN_1466277e4 body=228 status=ok
// SIG undefined FUN_1466277e4(void)

undefined8 FUN_1466277e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b972de0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b9729a0;
  local_38[3] = param_3;
  local_38[4] = FUN_1459c3f04;
  FUN_145763944(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466278ca FUN_1466278ca body=254 status=ok
// SIG undefined FUN_1466278ca(void)

bool FUN_1466278ca(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  bool bVar4;
  float extraout_XMM0_Da;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = FUN_140343d7a();
  bVar4 = true;
  if (((lVar2 != 0) && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220), lVar1 != 0))
     && (*(char *)(param_1 + 0x36e) == '\x01')) {
    if (*(char *)(lVar1 + 0x130) == '\x01') {
      if (*(char *)(param_1 + 0x394) != '\x01') {
        return true;
      }
      FUN_141236616(param_1);
      bVar4 = extraout_XMM0_Da - *(float *)(param_1 + 0x390) < *(float *)(lVar1 + 0x138);
    }
    else {
      if (*(char *)(lVar1 + 0x130) != '\0') {
        return true;
      }
      if (*(char *)(param_1 + 0x388) != '\x01') {
        return true;
      }
      lVar2 = *(longlong *)(lVar2 + 0x1c8);
      if (lVar2 == 0) {
        pdVar3 = (double *)&DAT_14c8464e0;
        dVar5 = DAT_14c8464f0;
      }
      else {
        pdVar3 = (double *)(lVar2 + 0x260);
        dVar5 = *(double *)(lVar2 + 0x270);
      }
      dVar5 = dVar5 - *(double *)(param_1 + 0x380);
      dVar7 = *pdVar3 - *(double *)(param_1 + 0x370);
      dVar6 = pdVar3[1] - *(double *)(param_1 + 0x378);
      bVar4 = (float)(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7) <
              *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134);
    }
    bVar4 = !bVar4;
  }
  return bVar4;
}



// FUNCTION 1466279c8 FUN_1466279c8 body=90 status=ok
// SIG undefined FUN_1466279c8(void)

undefined8 FUN_1466279c8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)param_3;
  if ((char)param_3 != '\x04') {
    cVar1 = FUN_145be1a54(param_1);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x125) != '\0') {
    cVar1 = '\x02' - (*(char *)(param_1 + 0x125) == '\x05');
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)param_3 >> 8),cVar1);
    *(char *)(param_1 + 0xb5) = cVar1;
  }
  uVar2 = FUN_140c5097a(param_1,param_2,uVar3);
  return uVar2;
}



// FUNCTION 146627a22 FUN_146627a22 body=38 status=ok
// SIG undefined FUN_146627a22(void)

undefined8 FUN_146627a22(undefined8 param_1,int param_2)

{
  FUN_1458d8a78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146627a48 FUN_146627a48 body=40 status=ok
// SIG undefined FUN_146627a48(void)

undefined8 FUN_146627a48(undefined8 param_1,int param_2)

{
  FUN_1411203da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146627a70 FUN_146627a70 body=29 status=ok
// SIG undefined FUN_146627a70(void)

undefined8 FUN_146627a70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146627a8e FUN_146627a8e body=38 status=ok
// SIG undefined FUN_146627a8e(void)

undefined8 FUN_146627a8e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TitleLogin",1);
  return param_2;
}



// FUNCTION 146627ab4 FUN_146627ab4 body=29 status=ok
// SIG undefined FUN_146627ab4(void)

undefined8 FUN_146627ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146627ad2 FUN_146627ad2 body=38 status=ok
// SIG undefined FUN_146627ad2(void)

undefined8 FUN_146627ad2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TitleReset",1);
  return param_2;
}



// FUNCTION 146627af8 FUN_146627af8 body=29 status=ok
// SIG undefined FUN_146627af8(void)

bool FUN_146627af8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146627b16 FUN_146627b16 body=26 status=ok
// SIG undefined FUN_146627b16(void)

bool FUN_146627b16(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146627b30 FUN_146627b30 body=24 status=ok
// SIG undefined FUN_146627b30(void)

bool FUN_146627b30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146627b48 FUN_146627b48 body=29 status=ok
// SIG undefined FUN_146627b48(void)

bool FUN_146627b48(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146627b66 FUN_146627b66 body=24 status=ok
// SIG undefined FUN_146627b66(void)

bool FUN_146627b66(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146627b7e FUN_146627b7e body=24 status=ok
// SIG undefined FUN_146627b7e(void)

bool FUN_146627b7e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146627b96 FUN_146627b96 body=24 status=ok
// SIG undefined FUN_146627b96(void)

bool FUN_146627b96(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146627bae FUN_146627bae body=101 status=ok
// SIG undefined FUN_146627bae(void)

void FUN_146627bae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9713b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146627c14 FUN_146627c14 body=101 status=ok
// SIG undefined FUN_146627c14(void)

void FUN_146627c14(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9715e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146627c7a FUN_146627c7a body=148 status=ok
// SIG undefined FUN_146627c7a(void)

bool FUN_146627c7a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146627d10 FUN_146627d10 body=29 status=ok
// SIG undefined FUN_146627d10(void)

undefined8 FUN_146627d10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146627d2e FUN_146627d2e body=29 status=ok
// SIG undefined FUN_146627d2e(void)

bool FUN_146627d2e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146627d4c FUN_146627d4c body=26 status=ok
// SIG undefined FUN_146627d4c(void)

bool FUN_146627d4c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146627d66 FUN_146627d66 body=26 status=ok
// SIG undefined FUN_146627d66(void)

bool FUN_146627d66(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146627d80 FUN_146627d80 body=24 status=ok
// SIG undefined FUN_146627d80(void)

bool FUN_146627d80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146627d98 FUN_146627d98 body=26 status=ok
// SIG undefined FUN_146627d98(void)

bool FUN_146627d98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146627db2 FUN_146627db2 body=24 status=ok
// SIG undefined FUN_146627db2(void)

bool FUN_146627db2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146627dca FUN_146627dca body=29 status=ok
// SIG undefined FUN_146627dca(void)

bool FUN_146627dca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146627de8 FUN_146627de8 body=26 status=ok
// SIG undefined FUN_146627de8(void)

bool FUN_146627de8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146627e02 FUN_146627e02 body=24 status=ok
// SIG undefined FUN_146627e02(void)

bool FUN_146627e02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146627e1a FUN_146627e1a body=29 status=ok
// SIG undefined FUN_146627e1a(void)

bool FUN_146627e1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146627e38 FUN_146627e38 body=24 status=ok
// SIG undefined FUN_146627e38(void)

bool FUN_146627e38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146627e50 FUN_146627e50 body=24 status=ok
// SIG undefined FUN_146627e50(void)

bool FUN_146627e50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146627e68 FUN_146627e68 body=93 status=ok
// SIG undefined FUN_146627e68(void)

void FUN_146627e68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9727e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146627ec6 FUN_146627ec6 body=487 status=ok
// SIG undefined FUN_146627ec6(void)

longlong * FUN_146627ec6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar2 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14b9728c0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b972850;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_148d34794;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14b9728c0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b972850;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_148d34794;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466280b4 FUN_1466280b4 body=97 status=ok
// SIG undefined FUN_1466280b4(void)

void FUN_1466280b4(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14066e964();
  local_30 = FUN_140343d7a(param_1);
  FUN_14584a9c4(&local_28);
  *(undefined4 *)(param_1 + 0xd8) = local_28;
  *(undefined4 *)(param_1 + 0xdc) = uStack_24;
  *(undefined4 *)(param_1 + 0xe0) = uStack_20;
  *(undefined4 *)(param_1 + 0xe4) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146628116 FUN_146628116 body=102 status=ok
// SIG undefined FUN_146628116(void)

void FUN_146628116(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140440628(local_50,&DAT_14cbca908,0);
  FUN_1403719a4(param_1 + 0xd8,local_50);
  FUN_144a2da94(local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662817e FUN_14662817e body=355 status=ok
// SIG undefined FUN_14662817e(void)

undefined8 FUN_14662817e(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x48);
  plVar3 = (longlong *)FUN_140343d7a();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_1407ca880();
    plVar5 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar5 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      uVar4 = FUN_1407ca880();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      plVar8 = (longlong *)0x0;
      if (plVar5 != plVar6) {
        plVar8 = plVar6;
      }
    }
    lVar7 = FUN_144a78b9e();
    if (*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) {
      uVar4 = 0;
      if ((plVar8 == (longlong *)0x0) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) goto LAB_1466282af;
      plVar5 = (longlong *)(**(code **)(*plVar3 + 0x638))(plVar3);
      if (plVar5 != (longlong *)0x0) {
        lVar7 = FUN_140f27e30();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
          FUN_1407be368(&local_50,plVar8);
          *(undefined4 *)(param_1 + 0x118) = local_50;
          *(undefined4 *)(param_1 + 0x11c) = uStack_4c;
          *(undefined4 *)(param_1 + 0x120) = uStack_48;
          *(undefined4 *)(param_1 + 0x124) = uStack_44;
          uVar2 = (**(code **)(*plVar8 + 0x20))(plVar8,*(undefined8 *)(lVar1 + 0x80));
          *(undefined1 *)(param_1 + 0x110) = uVar2;
          (**(code **)(*plVar5 + 0x5d0))(plVar5,2,0);
          uVar4 = 1;
          FUN_145ccf238(plVar3,1);
          goto LAB_1466282af;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1466282af:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466282e8 FUN_1466282e8 body=318 status=ok
// SIG undefined FUN_1466282e8(void)

ulonglong FUN_1466282e8(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = *(longlong **)(param_1 + 0xf0);
  if (plVar3 == (longlong *)0x0) {
LAB_1466283fe:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1466283fe;
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
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      local_30 = 0xffffffffffffffff;
      local_28 = 0;
      local_24 = 0xffffffff;
      local_50 = *(undefined4 *)(lVar4 + 0x250);
      local_60 = *(undefined4 *)(lVar4 + 0x5d4);
      local_58 = *(undefined4 *)(lVar4 + 0x5d0);
      local_48 = *(undefined8 *)(lVar4 + 0x480);
      local_40 = *(longlong **)(lVar4 + 0x488);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
        UNLOCK();
      }
      local_38 = *(undefined8 *)(lVar4 + 0x440);
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_68 = *(undefined8 *)(param_2 + 4);
      local_54 = local_60;
      iVar6 = FUN_14022b7ff(&local_78,param_3);
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),iVar6 == 0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
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
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146628428 FUN_146628428 body=495 status=ok
// SIG undefined FUN_146628428(void)

void FUN_146628428(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [48];
  double local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14066e964();
  lVar9 = *(longlong *)(param_1 + 0x48);
  FUN_140440628(local_b8,&DAT_14cbcaa90,0);
  FUN_1403719a4(param_1 + 0xe0,local_b8);
  FUN_144a2da94(local_b8);
  if (*(longlong **)(lVar9 + 0x80) != (longlong *)0x0) {
    local_c8 = 0;
    uStack_c0 = 0;
    (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x2c0))();
    lVar4 = local_c8;
    if (*(char *)(lVar9 + 0x8c) == '\x01') {
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar9 + 0x88);
    }
    else {
      lVar9 = (longlong)(int)uStack_c0;
      if (lVar9 != 0) {
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)(lVar4 + lVar8);
          if (lVar3 != 0) {
            lVar7 = FUN_1402576f0();
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
              FUN_1409cd860(lVar3,local_b8,0,0x7f7fffff);
              fVar10 = *(float *)(param_1 + 0xd8);
              if (*(float *)(param_1 + 0xd8) <= (float)local_88) {
                fVar10 = (float)local_88;
              }
              *(float *)(param_1 + 0xd8) = fVar10;
            }
          }
          lVar8 = lVar8 + 8;
        } while (lVar9 * 8 != lVar8);
      }
    }
    lVar9 = FUN_140343d7a(param_1);
    if (lVar9 != 0) {
      lVar9 = FUN_140a40fb0(lVar9);
      if (lVar9 != 0) {
        cVar6 = FUN_140532d9e(lVar9);
        if (cVar6 != '\0') {
          lVar4 = *(longlong *)(lVar9 + 0x1518);
          plVar5 = *(longlong **)(lVar9 + 0x1520);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          if (lVar4 != 0) {
            *(float *)(param_1 + 0xd8) = *(float *)(lVar4 + 0x508) * *(float *)(param_1 + 0xd8);
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
        }
      }
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146628618 FUN_146628618 body=194 status=ok
// SIG undefined FUN_146628618(void)

undefined8 FUN_146628618(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x48);
  plVar3 = (longlong *)FUN_140343d7a();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_1407ca880();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      uVar4 = 0;
      if ((plVar3 != plVar5) && (plVar5 != (longlong *)0x0)) {
        FUN_1407be368(&local_38,plVar5);
        *(undefined4 *)(param_1 + 0x120) = local_38;
        *(undefined4 *)(param_1 + 0x124) = uStack_34;
        *(undefined4 *)(param_1 + 0x128) = uStack_30;
        *(undefined4 *)(param_1 + 300) = uStack_2c;
        uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,*(undefined8 *)(lVar1 + 0x80));
        *(undefined1 *)(param_1 + 0x118) = uVar2;
        uVar4 = 1;
      }
      goto LAB_1466286b6;
    }
  }
  uVar4 = 0;
LAB_1466286b6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466286dc FUN_1466286dc body=246 status=ok
// SIG undefined FUN_1466286dc(void)

void FUN_1466286dc(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141432ebc();
  uVar3 = DAT_14cbcaaf8;
  uVar1 = FUN_140a48832();
  lVar2 = FUN_140c48046(param_1 + 0x80,uVar1,uVar3,0);
  if (lVar2 != 0) {
    local_28 = 0;
    uVar3 = FUN_146178446();
    lVar2 = FUN_140c47e50(lVar2,uVar3,&local_28);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x80) = 1;
      *(undefined1 *)(lVar2 + 0x81) = *(undefined1 *)(param_1 + 0x1b1);
      lVar4 = *(longlong *)(param_1 + 0x198);
      if (DAT_14c950c29 == '\x01') {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *(longlong *)(param_1 + 0x198);
        }
      }
      *(longlong *)(lVar2 + 0x88) = lVar4;
      *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(param_1 + 0x1a0);
      *(undefined4 *)(lVar2 + 0x98) = *(undefined4 *)(param_1 + 0x1a8);
      *(undefined1 *)(lVar2 + 0xa0) = *(undefined1 *)(param_1 + 0x1b0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466287d4 FUN_1466287d4 body=633 status=ok
// SIG undefined FUN_1466287d4(void)

void FUN_1466287d4(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70 [7];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_141432ebc();
  uVar1 = FUN_1408d77e6();
  lVar2 = FUN_140c48046(param_1 + 0x80,uVar1,0,0);
  if (lVar2 != 0) {
    local_70[0] = 0;
    uVar1 = FUN_1408d77ac();
    plVar3 = (longlong *)FUN_140c47e50(lVar2,uVar1,local_70);
    if (plVar3 != (longlong *)0x0) {
      *(undefined1 *)(plVar3 + 0x53) = 1;
      *(undefined1 *)(plVar3 + 0x52) = 1;
      FUN_140440628(local_70,&DAT_14cbcab20,0);
      FUN_1403719a4(plVar3 + 0x43,local_70);
      FUN_144a2da94(local_70);
      *(undefined4 *)(plVar3 + 0x4a) = 1;
      FUN_144983130(plVar3 + 0x4b,param_1 + 0x198);
      (**(code **)(*plVar3 + 0x90))(plVar3);
    }
    uVar1 = FUN_140a48832();
    lVar4 = FUN_140c483dc(lVar2,uVar1,&DAT_14cbcab08,0);
    if (lVar4 != 0) {
      local_70[0] = 0;
      uVar1 = FUN_140c4800c();
      lVar4 = FUN_140c47e50(lVar4,uVar1,local_70);
      if (lVar4 != 0) {
        FUN_144983130(lVar4 + 0x80,param_1 + 0x198);
        *(undefined1 *)(lVar4 + 0x1d8) = 1;
        FUN_144983130(lVar4 + 0xe8,param_1 + 0x260);
        *(undefined1 *)(lVar4 + 0x1d0) = *(undefined1 *)(param_1 + 0x2d0);
        FUN_144983130(lVar4 + 0x198,param_1 + 0x298);
        *(undefined2 *)(lVar4 + 0x79) = 0x101;
        *(undefined1 *)(lVar4 + 0x7c) = 1;
      }
    }
    uVar1 = FUN_140a48832();
    lVar2 = FUN_140c483dc(lVar2,uVar1,&DAT_14cbcab10,0);
    if (lVar2 != 0) {
      local_70[0] = 0;
      uVar1 = FUN_140c48260();
      lVar2 = FUN_140c47e50(lVar2,uVar1,local_70);
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x1d8);
        if (DAT_14c950c29 == '\x01') {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar4 = *(longlong *)(param_1 + 0x1d8);
          }
        }
        *(longlong *)(lVar2 + 0x80) = lVar4;
        *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(param_1 + 0x1e0);
        *(undefined4 *)(lVar2 + 0x90) = *(undefined4 *)(param_1 + 0x1e8);
        FUN_144983130(lVar2 + 0x98,param_1 + 0x1f0);
        FUN_144983130(lVar2 + 0xd0,param_1 + 0x228);
        *(undefined4 *)(lVar2 + 0x108) = *(undefined4 *)(param_1 + 0x2d4);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


