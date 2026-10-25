// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14772c02a FUN_14772c02a body=62 status=ok
// SIG undefined FUN_14772c02a(void)

void FUN_14772c02a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14772c068(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14772c068 FUN_14772c068 body=93 status=ok
// SIG undefined FUN_14772c068(void)

ulonglong FUN_14772c068(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14772c0c6 FUN_14772c0c6 body=29 status=ok
// SIG undefined FUN_14772c0c6(void)

undefined8 FUN_14772c0c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772c0e4 FUN_14772c0e4 body=126 status=ok
// SIG undefined FUN_14772c0e4(void)

void FUN_14772c0e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = DAT_14cab73c0;
  local_28 = DAT_14cab73c8;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_40 = *param_3;
    local_38 = param_3[1];
    FUN_14775e24c(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772c164 FUN_14772c164 body=29 status=ok
// SIG undefined FUN_14772c164(void)

undefined8 FUN_14772c164(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772c182 FUN_14772c182 body=126 status=ok
// SIG undefined FUN_14772c182(void)

void FUN_14772c182(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = DAT_14cab74b0;
  local_28 = DAT_14cab74b8;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_40 = *param_3;
    local_38 = param_3[1];
    FUN_14775e24c(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772c202 FUN_14772c202 body=29 status=ok
// SIG undefined FUN_14772c202(void)

undefined8 FUN_14772c202(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772c220 FUN_14772c220 body=126 status=ok
// SIG undefined FUN_14772c220(void)

void FUN_14772c220(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = DAT_14cab7550;
  local_28 = DAT_14cab7558;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_40 = *param_3;
    local_38 = param_3[1];
    FUN_14775e24c(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772c2a0 FUN_14772c2a0 body=29 status=ok
// SIG undefined FUN_14772c2a0(void)

undefined8 FUN_14772c2a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772c2be FUN_14772c2be body=93 status=ok
// SIG undefined FUN_14772c2be(void)

void FUN_14772c2be(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x170) < 1) {
LAB_14772c305:
    uVar2 = 0;
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x168);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_14772c305;
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 14772c31c FUN_14772c31c body=82 status=ok
// SIG undefined FUN_14772c31c(void)

void FUN_14772c31c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x170) < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x168);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  *param_3 = lVar1;
  return;
}



// FUNCTION 14772c36e FUN_14772c36e body=182 status=ok
// SIG undefined FUN_14772c36e(void)

void FUN_14772c36e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x300))(param_1);
  uVar1 = FUN_147743a5a(param_1,uVar1,0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772c428 FUN_14772c428 body=8 status=ok
// SIG undefined FUN_14772c428(void)

void FUN_14772c428(undefined8 param_1,undefined8 param_2)

{
  FUN_147743a5a(param_1,param_2,0);
  return;
}



// FUNCTION 14772c436 FUN_14772c436 body=87 status=ok
// SIG undefined FUN_14772c436(void)

void FUN_14772c436(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_18 = 0;
  uVar1 = FUN_14772c994();
  *param_3 = uVar1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772c48e FUN_14772c48e body=193 status=ok
// SIG undefined FUN_14772c48e(void)

void FUN_14772c48e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_14772c550(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772c550 FUN_14772c550 body=191 status=ok
// SIG undefined FUN_14772c550(void)

undefined8 FUN_14772c550(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = FUN_1405e2bf2();
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)) && (lVar1 = *param_2, lVar1 != 0)) {
      local_28 = lVar1;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c();
      }
      cVar2 = FUN_14772cb0e(param_1,&local_28);
      if (cVar2 != '\0') {
        local_30 = *param_2;
        if ((local_30 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar4 = FUN_1433335f4(param_1,&local_30);
        goto LAB_14772c59f;
      }
    }
  }
  uVar4 = 0;
LAB_14772c59f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772c610 FUN_14772c610 body=159 status=ok
// SIG undefined FUN_14772c610(void)

void FUN_14772c610(undefined8 param_1,longlong param_2)

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
  FUN_14772c756(param_1,local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772c6b4 FUN_14772c6b4 body=158 status=ok
// SIG undefined FUN_14772c6b4(void)

void FUN_14772c6b4(undefined8 param_1,longlong param_2)

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
  FUN_145e12b26(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772c756 FUN_14772c756 body=561 status=ok
// SIG undefined FUN_14772c756(void)

void FUN_14772c756(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) goto LAB_14772c91e;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_140760c2c(param_2,&local_40);
    if (local_40 != 0) {
      switch(*(undefined1 *)(param_1 + 0x188)) {
      case 0:
      case 1:
        uVar4 = *(undefined8 *)(param_1 + 0x1b0);
        plVar5 = *(longlong **)(param_1 + 0x1b8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_48 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        FUN_1469779b4(uVar4,local_50);
        break;
      case 2:
      case 3:
        uVar4 = *(undefined8 *)(param_1 + 0x1b0);
        plVar5 = *(longlong **)(param_1 + 0x1b8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_48 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        FUN_146aa34d4(uVar4,local_50);
        break;
      case 4:
        uVar4 = *(undefined8 *)(param_1 + 0x1b0);
        plVar5 = *(longlong **)(param_1 + 0x1b8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_48 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        FUN_146a8ff5c(uVar4,local_50);
        break;
      case 5:
        uVar4 = *(undefined8 *)(param_1 + 0x1b0);
        plVar5 = *(longlong **)(param_1 + 0x1b8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_58 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        FUN_145901a74(uVar4,local_60);
        goto LAB_14772c8bc;
      default:
        goto switchD_14772c7cb_default;
      }
      plVar2 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
LAB_14772c8bc:
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
switchD_14772c7cb_default:
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)local_38 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  FUN_1476cf0bc(param_1 + 0x1c0,param_2,param_3);
LAB_14772c91e:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14772c994 FUN_14772c994 body=376 status=ok
// SIG undefined FUN_14772c994(void)

undefined8 FUN_14772c994(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_2;
  if ((((lVar3 == 0) || (lVar2 = FUN_1405e2bf2(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (lVar5 = *param_2,
     lVar5 == 0 ||
     *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
     lVar2 + 0x30)) {
    lVar5 = *(longlong *)(param_1 + 0x248);
  }
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
LAB_14772ca0a:
    lVar3 = FUN_1405e2bf2();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar3 = FUN_1405e2bf2();
      if ((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar2 = lVar5;
        }
      }
      lVar3 = FUN_1405e2bf2();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        local_28 = lVar5;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
        }
        cVar1 = FUN_14772cb0e(param_1,&local_28);
        if (cVar1 != '\0') {
          local_30 = lVar5;
          if ((lVar5 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar5);
          }
          uVar4 = FUN_1433335f4(param_1,&local_30);
          goto LAB_14772ca2d;
        }
      }
    }
  }
  else if (lVar5 != 0) goto LAB_14772ca0a;
  uVar4 = 0;
LAB_14772ca2d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14772cb0e FUN_14772cb0e body=260 status=ok
// SIG undefined FUN_14772cb0e(void)

ulonglong FUN_14772cb0e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  lVar1 = *param_2;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar1 == 0) goto LAB_14772cb4a;
  lVar2 = FUN_1405e2bf2();
  if ((((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30)) || ((*param_2 == 0 || (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 == 0))))
  goto LAB_14772cb4a;
  lVar2 = FUN_1412864c6();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     ((*(longlong *)
        (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
       != lVar2 + 0x30 || (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 == 0)))) goto LAB_14772cb4a;
  lVar2 = FUN_1405e2bf2();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) goto LAB_14772cb4a;
  lVar2 = *param_2;
  if (lVar2 == 0) {
LAB_14772cbd8:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1405e2bf2();
    if (((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_14772cbd8;
    lVar2 = *param_2;
  }
  lVar1 = *(longlong *)(lVar1 + 0x10);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    uVar4 = 0;
  }
LAB_14772cb4a:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14772cc32 FUN_14772cc32 body=8 status=ok
// SIG undefined FUN_14772cc32(void)

longlong FUN_14772cc32(longlong param_1)

{
  return param_1 + 0x1c0;
}



// FUNCTION 14772cc3a FUN_14772cc3a body=88 status=ok
// SIG undefined FUN_14772cc3a(void)

undefined8 * FUN_14772cc3a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147766a78(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14772ccac FUN_14772ccac body=160 status=ok
// SIG undefined FUN_14772ccac(void)

void FUN_14772ccac(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14772cd4e(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772cd4e FUN_14772cd4e body=825 status=ok
// SIG undefined FUN_14772cd4e(void)

void FUN_14772cd4e(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_f8 [32];
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float local_ac;
  uint local_a8;
  float local_a4;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  *(undefined4 *)(param_1 + 0x168) = *param_2;
  *(undefined4 *)(param_1 + 0x16c) = uVar6;
  *(undefined4 *)(param_1 + 0x170) = uVar7;
  *(undefined4 *)(param_1 + 0x174) = uVar8;
  plVar4 = *(longlong **)(param_1 + 0x1b0);
  if (plVar4 != (longlong *)0x0) {
    fVar15 = (float)*(double *)(param_1 + 0x168);
    fVar14 = (float)*(double *)(param_1 + 0x170);
    bVar3 = *(byte *)(param_1 + 0x188);
    if (bVar3 < 2) {
      lVar9 = (**(code **)(*plVar4 + 0x180))();
      if (0 < *(int *)(lVar9 + 0x20)) {
        lVar11 = 0;
        do {
          local_d4 = 0.0;
          fVar13 = 0.0;
          if (lVar11 != 0) {
            local_d4 = fVar14;
            fVar13 = fVar15;
          }
          local_d8 = 0.0;
          if (bVar3 == 0) {
            local_d4 = 0.0;
            local_d8 = fVar13;
          }
          lVar5 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + lVar11 * 8);
          local_d0 = 0;
          local_c8 = 1;
          local_c0 = 0;
          uStack_b8 = 0;
          FUN_140a55872(lVar5 + 0x28,lVar5 + 0x20,&local_d8);
          FUN_1449db362(&local_c0);
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lVar9 + 0x20));
      }
    }
    else if (bVar3 - 2 < 2) {
      plVar4 = *(longlong **)(param_1 + 0x1b8);
      if (plVar4 == (longlong *)0x0) {
        local_88 = *param_2;
        uStack_84 = param_2[1];
        uStack_80 = param_2[2];
        uStack_7c = param_2[3];
        FUN_146aa400e();
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_88 = *(undefined4 *)(param_1 + 0x168);
        uStack_84 = *(undefined4 *)(param_1 + 0x16c);
        uStack_80 = *(undefined4 *)(param_1 + 0x170);
        uStack_7c = *(undefined4 *)(param_1 + 0x174);
        FUN_146aa400e();
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
    else if ((bVar3 == 5) && (lVar9 = (**(code **)(*plVar4 + 0x180))(), 0 < *(int *)(lVar9 + 0x20)))
    {
      uVar12 = 0;
      do {
        if ((int)*(uint *)(param_1 + 0x180) < 1) {
          fVar13 = -fVar15;
          local_ac = (float)(int)uVar12;
          local_a4 = 0.0;
          local_b0 = 0.0;
          if (fVar13 <= fVar15) {
            local_b0 = fVar15 * local_ac;
          }
          local_a8 = -(uint)(fVar15 < fVar13) & (uint)(fVar13 * local_ac);
          if (0.0 <= fVar14) {
            local_ac = local_ac * fVar14;
          }
          else {
            local_a4 = -fVar14 * local_ac;
LAB_14772d00f:
            local_ac = 0.0;
          }
        }
        else {
          local_b0 = 0.0;
          local_ac = 0.0;
          local_a8 = 0;
          local_a4 = 0.0;
          fVar15 = 0.0;
          fVar14 = 0.0;
          if (uVar12 != 0) {
            uVar10 = 0;
            local_ac = 0.0;
            do {
              lVar11 = ((uVar10 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x180)) * 0x10;
              fVar15 = fVar15 + (float)*(double *)(*(longlong *)(param_1 + 0x178) + lVar11);
              local_ac = local_ac + (float)*(double *)(*(longlong *)(param_1 + 0x178) + 8 + lVar11);
              uVar10 = uVar10 + 1;
            } while (uVar12 != uVar10);
            fVar14 = -fVar15;
            local_a4 = 0.0;
            local_b0 = 0.0;
            if (fVar14 <= fVar15) {
              local_b0 = fVar15;
            }
            local_a8 = -(uint)(fVar15 < fVar14) & (uint)fVar14;
            fVar14 = local_ac;
            if (local_ac < 0.0) {
              local_a4 = -local_ac;
              goto LAB_14772d00f;
            }
          }
        }
        lVar11 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + uVar12 * 8);
        local_a0 = 1;
        local_98 = 0;
        uStack_90 = 0;
        FUN_140a55872(lVar11 + 0x28,lVar11 + 0x20,&local_b0);
        FUN_1449db362();
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)*(int *)(lVar9 + 0x20));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14772d088 FUN_14772d088 body=188 status=ok
// SIG undefined FUN_14772d088(void)

void FUN_14772d088(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_24 = 1;
  local_20 = 0x43b4000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14772d146(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772d146 FUN_14772d146 body=369 status=ok
// SIG undefined FUN_14772d146(void)

void FUN_14772d146(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *(undefined8 *)(param_1 + 0x19c) = *param_2;
  *(undefined8 *)(param_1 + 0x1a4) = uVar5;
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  if ((lVar3 != 0) && (*(char *)(param_1 + 0x188) == '\x04')) {
    plVar4 = *(longlong **)(param_1 + 0x1b8);
    if (plVar4 == (longlong *)0x0) {
      *(undefined4 *)(lVar3 + 0x20c) = *(undefined4 *)param_2;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(undefined4 *)(lVar3 + 0x20c) = *(undefined4 *)param_2;
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
    lVar3 = *(longlong *)(param_1 + 0x1b0);
    plVar4 = *(longlong **)(param_1 + 0x1b8);
    if (plVar4 == (longlong *)0x0) {
      *(undefined1 *)(lVar3 + 0x218) = *(undefined1 *)((longlong)param_2 + 4);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(undefined1 *)(lVar3 + 0x218) = *(undefined1 *)((longlong)param_2 + 4);
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
    lVar3 = *(longlong *)(param_1 + 0x1b0);
    plVar4 = *(longlong **)(param_1 + 0x1b8);
    if (plVar4 == (longlong *)0x0) {
      *(undefined4 *)(lVar3 + 0x214) = *(undefined4 *)(param_2 + 1);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(undefined4 *)(lVar3 + 0x214) = *(undefined4 *)(param_2 + 1);
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
    lVar3 = *(longlong *)(param_1 + 0x1b0);
    plVar4 = *(longlong **)(param_1 + 0x1b8);
    if (plVar4 == (longlong *)0x0) {
      *(undefined4 *)(lVar3 + 0x210) = *(undefined4 *)((longlong)param_2 + 0xc);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(undefined4 *)(lVar3 + 0x210) = *(undefined4 *)((longlong)param_2 + 0xc);
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
                    /* WARNING: Could not recover jumptable at 0x00014772d29e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14772d312 FUN_14772d312 body=1414 status=ok
// SIG undefined FUN_14772d312(void)

undefined8 * FUN_14772d312(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_298 [32];
  undefined1 *local_278;
  undefined1 local_269;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined8 local_250;
  longlong *local_248;
  undefined1 local_240 [162];
  undefined1 local_19e;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_298;
  switch((char)param_1[0x31]) {
  case '\0':
    FUN_140a5296a(local_240);
    local_278 = &local_269;
    FUN_140a541dc(local_268,"SHorizontalBox",
                  ".\\Runtime/UMG/Private/Components/DynamicEntryBoxBase.cpp",0x10a);
    FUN_14772d89a(local_268,param_1 + 0x36);
    FUN_140a50ec6(local_268,&local_250,local_240);
    if (local_248 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_248 + 1) = (int)local_248[1] + 1;
      UNLOCK();
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_248 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar2 = (int *)((longlong)local_248 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_248 + 0x10))(local_248);
          }
        }
      }
    }
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_260 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar2 = (int *)((longlong)local_260 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_260 + 0x10))(local_260);
        }
      }
    }
    FUN_145ab33da(local_240);
    plVar5 = local_248;
    uVar6 = local_250;
    break;
  case '\x01':
    FUN_1407679b0(local_240);
    local_278 = &local_269;
    FUN_14076837c(local_268,"SVerticalBox",
                  ".\\Runtime/UMG/Private/Components/DynamicEntryBoxBase.cpp",0x10d);
    FUN_14772d920(local_268,param_1 + 0x36);
    FUN_14076784c(local_268,&local_250,local_240);
    if (local_248 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_248 + 1) = (int)local_248[1] + 1;
      UNLOCK();
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_248 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar2 = (int *)((longlong)local_248 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_248 + 0x10))(local_248);
          }
        }
      }
    }
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_260 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar2 = (int *)((longlong)local_260 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_260 + 0x10))(local_260);
        }
      }
    }
    FUN_14149255e(local_240);
    plVar5 = local_248;
    uVar6 = local_250;
    break;
  case '\x02':
    FUN_14772d9a6(local_240);
    local_44 = 0;
    local_58 = (undefined4)param_1[0x2d];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x16c);
    uStack_50 = (undefined4)param_1[0x2e];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x174);
    uVar6 = 0x110;
    goto LAB_14772d664;
  case '\x03':
    FUN_14772d9a6(local_240);
    local_44 = 1;
    local_58 = (undefined4)param_1[0x2d];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x16c);
    uStack_50 = (undefined4)param_1[0x2e];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x174);
    uVar6 = 0x116;
LAB_14772d664:
    local_278 = &local_269;
    local_48 = 1;
    FUN_147766ada(local_268,"SWrapBox",".\\Runtime/UMG/Private/Components/DynamicEntryBoxBase.cpp",
                  uVar6);
    FUN_14772da6e(local_268,param_1 + 0x36);
    FUN_14772daf4(local_268,&local_250,local_240);
    if (local_248 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_248 + 1) = (int)local_248[1] + 1;
      UNLOCK();
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_248 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar2 = (int *)((longlong)local_248 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_248 + 0x10))(local_248);
          }
        }
      }
    }
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_260 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar2 = (int *)((longlong)local_260 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_260 + 0x10))(local_260);
        }
      }
    }
    FUN_14772db68(local_240);
    plVar5 = local_248;
    uVar6 = local_250;
    break;
  case '\x04':
    FUN_14772dbb8(local_240);
    local_70 = 1;
    local_6c = *(undefined4 *)((longlong)param_1 + 0x19c);
    local_68 = (undefined1)param_1[0x34];
    local_64 = *(undefined4 *)((longlong)param_1 + 0x1a4);
    local_60 = (undefined4)param_1[0x35];
    FUN_147766d1c(local_268,&local_269);
    FUN_14772dc72(local_268,param_1 + 0x36);
    FUN_14772dcf8(local_268,&local_250,local_240);
    if (local_248 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_248 + 1) = (int)local_248[1] + 1;
      UNLOCK();
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_248 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar2 = (int *)((longlong)local_248 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_248 + 0x10))(local_248);
          }
        }
      }
    }
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_260 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar2 = (int *)((longlong)local_260 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_260 + 0x10))(local_260);
        }
      }
    }
    FUN_14772dd6c(local_240);
    plVar5 = local_248;
    uVar6 = local_250;
    break;
  case '\x05':
    FUN_140a504fe(local_240);
    local_19e = 1;
    local_278 = &local_269;
    FUN_140a536a8(local_268,"SOverlay",".\\Runtime/UMG/Private/Components/DynamicEntryBoxBase.cpp",
                  0x124);
    FUN_14772ddb0(local_268,param_1 + 0x36);
    FUN_140a4ff16(local_268,&local_250,local_240);
    if (local_248 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_248 + 1) = (int)local_248[1] + 1;
      UNLOCK();
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_248 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar2 = (int *)((longlong)local_248 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_248 + 0x10))(local_248);
          }
        }
      }
    }
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_260 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar2 = (int *)((longlong)local_260 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_260 + 0x10))(local_260);
        }
      }
    }
    FUN_1415b5e16(local_240);
    plVar5 = local_248;
    uVar6 = local_250;
    break;
  default:
    plVar5 = (longlong *)0x0;
    uVar6 = 0;
  }
  FUN_1476cef9c(param_1 + 0x38);
  lVar4 = param_1[0x39];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = param_1[0x38];
    lVar7 = 0;
    do {
      (**(code **)(*param_1 + 0x300))(param_1,*(undefined8 *)(lVar3 + lVar7));
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  *param_2 = uVar6;
  param_2[1] = plVar5;
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
  if ((local_40 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14772d89a FUN_14772d89a body=134 status=ok
// SIG undefined FUN_14772d89a(void)

undefined8 * FUN_14772d89a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x00014772d8f1;
    }
    param_2[1] = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x00014772d8f1:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 14772d920 FUN_14772d920 body=134 status=ok
// SIG undefined FUN_14772d920(void)

undefined8 * FUN_14772d920(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x00014772d977;
    }
    param_2[1] = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x00014772d977:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 14772d9a6 FUN_14772d9a6 body=198 status=ok
// SIG undefined FUN_14772d9a6(void)

longlong FUN_14772d9a6(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  *(undefined1 *)(param_1 + 0x1d4) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1e8) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 0x1ec) = uVar1;
  *(undefined4 *)(param_1 + 0x1f0) = uVar2;
  *(undefined4 *)(param_1 + 500) = uVar3;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772da6e FUN_14772da6e body=134 status=ok
// SIG undefined FUN_14772da6e(void)

undefined8 * FUN_14772da6e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x00014772dac5;
    }
    param_2[1] = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x00014772dac5:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 14772daf4 FUN_14772daf4 body=115 status=ok
// SIG undefined FUN_14772daf4(void)

longlong * FUN_14772daf4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146aa3520(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14772db68 FUN_14772db68 body=80 status=ok
// SIG undefined FUN_14772db68(void)

void FUN_14772db68(longlong param_1)

{
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_146ac6f60(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14772dbb8 FUN_14772dbb8 body=184 status=ok
// SIG undefined FUN_14772dbb8(void)

longlong FUN_14772dbb8(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1d8) = 1;
  *(undefined8 *)(param_1 + 0x1dc) = 0x43b4000000000000;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772dc72 FUN_14772dc72 body=134 status=ok
// SIG undefined FUN_14772dc72(void)

undefined8 * FUN_14772dc72(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x00014772dcc9;
    }
    param_2[1] = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x00014772dcc9:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 14772dcf8 FUN_14772dcf8 body=115 status=ok
// SIG undefined FUN_14772dcf8(void)

longlong * FUN_14772dcf8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a8ffa8(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14772dd6c FUN_14772dd6c body=68 status=ok
// SIG undefined FUN_14772dd6c(void)

void FUN_14772dd6c(longlong param_1)

{
  FUN_1449db362(param_1 + 0x1c0);
  FUN_146ac12ff(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14772ddb0 FUN_14772ddb0 body=134 status=ok
// SIG undefined FUN_14772ddb0(void)

undefined8 * FUN_14772ddb0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x00014772de07;
    }
    param_2[1] = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x00014772de07:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 14772de36 FUN_14772de36 body=120 status=ok
// SIG undefined FUN_14772de36(void)

void FUN_14772de36(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_21;
  local_20 = FUN_1477677ea;
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14776702c(param_1,&local_30,&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772deb0 FUN_14772deb0 body=91 status=ok
// SIG undefined FUN_14772deb0(void)

longlong * FUN_14772deb0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = DAT_14cab7860;
  puVar3 = &DAT_14cab7838;
  if (DAT_14cab7858 != (undefined8 *)0x0) {
    puVar3 = DAT_14cab7858;
  }
  lVar1 = puVar3[(longlong)DAT_14cab7860 + -1];
  *param_1 = lVar1;
  if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
    FUN_1456cec3c();
    iVar2 = DAT_14cab7860;
  }
  DAT_14cab7860 = iVar2 + -1;
  FUN_1477679f6();
  return param_1;
}



// FUNCTION 14772df0c FUN_14772df0c body=2222 status=ok
// SIG undefined FUN_14772df0c(void)

void FUN_14772df0c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_2f8 [40];
  undefined4 local_2d0;
  float local_2cc;
  undefined8 local_2c8;
  undefined1 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  float local_2a8;
  undefined1 local_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290 [8];
  longlong *local_288;
  float local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined1 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  code *local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined1 local_234;
  undefined8 local_230;
  undefined4 local_228;
  float local_220;
  undefined1 local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  float local_208;
  float fStack_204;
  uint uStack_200;
  float fStack_1fc;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1d9;
  code *local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined1 local_148 [8];
  undefined1 local_140 [16];
  float local_130;
  float fStack_12c;
  uint uStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  uint local_108;
  undefined1 local_104;
  uint local_100;
  undefined1 local_fc;
  uint local_f8;
  undefined1 local_f4;
  undefined2 local_f0;
  float local_98;
  undefined1 local_94;
  undefined1 local_90 [32];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  bVar4 = *(byte *)(param_1 + 0x188);
  if (bVar4 == 5) {
    if (*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0) goto LAB_14772df78;
    puVar10 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x180))();
    uVar8 = (**(code **)*puVar10)(puVar10);
    if ((int)*(uint *)(param_1 + 0x180) < 1) {
      dVar7 = *(double *)(param_1 + 0x170) * (double)(int)uVar8;
      dVar6 = (double)(int)uVar8 * *(double *)(param_1 + 0x168);
      uVar13 = (uint)(*(double *)(param_1 + 0x168) < 0.0) * 2 + 1;
      uVar15 = (uint)(*(double *)(param_1 + 0x170) < 0.0) * 2 + 1;
    }
    else {
      uVar13 = (uint)*(byte *)(param_1 + 0x194);
      uVar15 = (uint)*(byte *)(param_1 + 0x195);
      dVar7 = DAT_14c8463f8;
      dVar6 = DAT_14c8463f0;
      if (0 < (int)uVar8) {
        uVar14 = 0;
        do {
          lVar11 = ((ulonglong)uVar14 % (ulonglong)*(uint *)(param_1 + 0x180)) * 0x10;
          dVar6 = dVar6 + *(double *)(*(longlong *)(param_1 + 0x178) + lVar11);
          dVar7 = dVar7 + *(double *)(*(longlong *)(param_1 + 0x178) + 8 + lVar11);
          uVar14 = uVar14 + 1;
        } while (uVar8 != uVar14);
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x1b0);
    plVar12 = *(longlong **)(param_1 + 0x1b8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    FUN_140763f46(uVar5,local_148,0xffffffff);
    local_104 = 1;
    fVar17 = (float)dVar6;
    fVar16 = (float)dVar7;
    local_fc = 1;
    fVar18 = -fVar17;
    local_208 = 0.0;
    if (fVar18 <= fVar17) {
      local_208 = fVar17;
    }
    uStack_200 = -(uint)(fVar17 < fVar18) & (uint)fVar18;
    fStack_1fc = -fVar16;
    fStack_204 = 0.0;
    if (fStack_1fc <= fVar16) {
      fStack_204 = fVar16;
    }
    fStack_1fc = (float)(-(uint)(fVar16 < fStack_1fc) & (uint)fStack_1fc);
    local_1f8 = 1;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_120 = CONCAT71(local_120._1_7_,1);
    local_130 = local_208;
    fStack_12c = fStack_204;
    uStack_128 = uStack_200;
    fStack_124 = fStack_1fc;
    local_108 = uVar13;
    local_100 = uVar15;
    FUN_144a450dc(local_118,&local_1f0);
    FUN_1449db362(&local_1f0);
    local_250 = local_290;
    local_258 = FUN_143336ee2;
    FUN_1407616b4(param_2,&local_1d8);
    FUN_140a4fd40(local_148,&local_1d8);
    plVar2 = local_1d0;
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    FUN_1407640b6(local_148);
LAB_14772e1b0:
    if (plVar12 == (longlong *)0x0) goto LAB_14772df78;
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_14772df78;
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar3 = (int *)((longlong)plVar12 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 != 0) goto LAB_14772df78;
    lVar11 = *plVar12;
  }
  else {
    if (bVar4 - 2 < 2) {
      uVar5 = *(undefined8 *)(param_1 + 0x1b0);
      plVar12 = *(longlong **)(param_1 + 0x1b8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      FUN_146aa33a8(uVar5,local_148);
      local_f0 = 0x100;
      local_108 = (uint)*(byte *)(param_1 + 0x194);
      local_104 = 1;
      local_100 = (uint)*(byte *)(param_1 + 0x195);
      local_fc = 1;
      local_250 = local_290;
      local_258 = FUN_143336ee2;
      FUN_1407616b4(param_2,&local_1d8);
      FUN_14772e7bc(local_148,&local_1d8);
      plVar2 = local_1d0;
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1d0)(local_1d0);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      FUN_14772e844(local_148);
    }
    else {
      if (bVar4 == 4) {
        uVar5 = *(undefined8 *)(param_1 + 0x1b0);
        plVar12 = *(longlong **)(param_1 + 0x1b8);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        FUN_146a8fed6(uVar5,local_148);
        local_250 = local_290;
        local_258 = FUN_143336ee2;
        FUN_1407616b4(param_2,&local_1d8);
        FUN_14772e91e(local_148,&local_1d8);
        plVar2 = local_1d0;
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_1d0)(local_1d0);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        FUN_14772e9a6(local_148);
        goto LAB_14772e1b0;
      }
      if (*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0) goto LAB_14772df78;
      puVar10 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x180))();
      iVar9 = (**(code **)*puVar10)(puVar10);
      fVar16 = 0.0;
      if (iVar9 != 0) {
        fVar16 = (float)*(double *)(param_1 + 0x170);
      }
      if (bVar4 == 0) {
        fVar16 = 0.0;
        if (iVar9 != 0) {
          fVar16 = (float)*(double *)(param_1 + 0x168);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x1b0);
        plVar12 = *(longlong **)(param_1 + 0x1b8);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        FUN_146a24608(uVar5,local_148,0xffffffff);
        local_220 = (float)*(int *)(param_1 + 0x198);
        local_21c = 1;
        local_218 = 0;
        uStack_210 = 0;
        local_94 = 1;
        local_98 = local_220;
        FUN_144a450dc(local_90,&local_218);
        FUN_1449db362(&local_218);
        local_100 = (uint)*(byte *)(param_1 + 0x194);
        local_fc = 1;
        local_f8 = (uint)*(byte *)(param_1 + 0x195);
        local_f4 = 1;
        FUN_14772ea74(&local_258,param_1 + 0x18c);
        local_188 = local_258._0_4_;
        local_180 = (undefined4)local_250;
        local_17c = local_250._4_1_;
        local_178 = local_248;
        local_248 = 0;
        local_170 = local_240;
        local_240 = 0;
        local_168 = local_238;
        local_164 = local_234;
        local_160 = local_230;
        local_230 = 0;
        local_158 = local_228;
        local_228 = 0;
        local_150 = 1;
        lVar11 = FUN_146a1ba66(local_140);
        local_27c = 0;
        local_274 = 0;
        local_270 = 1;
        local_268 = 0;
        uStack_260 = 0;
        *(undefined1 *)(lVar11 + 0x28) = 1;
        *(float *)(lVar11 + 0x18) = fVar16;
        *(undefined8 *)(lVar11 + 0x1c) = 0;
        *(undefined4 *)(lVar11 + 0x24) = 0;
        local_280 = fVar16;
        FUN_144a450dc(lVar11 + 0x30,&local_268);
        FUN_1449db362(&local_268);
        local_1d0 = (longlong *)&local_1d9;
        local_1d8 = FUN_143336ee2;
        FUN_1407616b4(param_2,local_290);
        FUN_140a4fe8e(lVar11,local_290);
        if (local_288 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_288 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_288)(local_288);
            LOCK();
            piVar3 = (int *)((longlong)local_288 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_288 + 0x10))(local_288);
            }
          }
        }
        FUN_1449db362(&local_230);
        FUN_1449db362(&local_248);
        FUN_146a071ac(local_148);
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x1b0);
        plVar12 = *(longlong **)(param_1 + 0x1b8);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        FUN_140767c14(uVar5,local_148,0xffffffff);
        local_2a8 = (float)*(int *)(param_1 + 0x198);
        local_2a4 = 1;
        local_2a0 = 0;
        uStack_298 = 0;
        local_94 = 1;
        local_98 = local_2a8;
        FUN_144a450dc(local_90,&local_2a0);
        FUN_1449db362(&local_2a0);
        local_100 = (uint)*(byte *)(param_1 + 0x194);
        local_fc = 1;
        local_f8 = (uint)*(byte *)(param_1 + 0x195);
        local_f4 = 1;
        FUN_14772ea74(&local_258,param_1 + 0x18c);
        local_1c8 = local_258._0_4_;
        local_1c0 = (undefined4)local_250;
        local_1bc = local_250._4_1_;
        local_1b8 = local_248;
        local_248 = 0;
        local_1b0 = local_240;
        local_240 = 0;
        local_1a8 = local_238;
        local_1a4 = local_234;
        local_1a0 = local_230;
        local_230 = 0;
        local_198 = local_228;
        local_228 = 0;
        local_190 = 1;
        FUN_14772ebf0(local_140);
        local_2d0 = 0;
        local_2c8 = 0;
        local_2c0 = 1;
        local_2b8 = 0;
        uStack_2b0 = 0;
        local_118[0] = 1;
        uStack_128 = 0;
        local_120 = 0;
        local_2cc = fVar16;
        fStack_124 = fVar16;
        FUN_144a450dc(local_110,&local_2b8);
        FUN_1449db362(&local_2b8);
        local_1d0 = (longlong *)&local_1d9;
        local_1d8 = FUN_143336ee2;
        FUN_1407616b4(param_2,local_290);
        FUN_145aaf878(local_140,local_290);
        if (local_288 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_288 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_288)(local_288);
            LOCK();
            piVar3 = (int *)((longlong)local_288 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_288 + 0x10))(local_288);
            }
          }
        }
        FUN_1449db362(&local_230);
        FUN_1449db362(&local_248);
        FUN_140767802(local_148);
      }
    }
    if (plVar12 == (longlong *)0x0) goto LAB_14772df78;
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_14772df78;
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar3 = (int *)((longlong)plVar12 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 != 0) goto LAB_14772df78;
    lVar11 = *plVar12;
  }
  (**(code **)(lVar11 + 0x10))(plVar12);
LAB_14772df78:
  if ((local_70 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772e7bc FUN_14772e7bc body=136 status=ok
// SIG undefined FUN_14772e7bc(void)

longlong FUN_14772e7bc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x00014772e815;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x00014772e815:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 14772e844 FUN_14772e844 body=216 status=ok
// SIG undefined FUN_14772e844(void)

void FUN_14772e844(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[0xd] == -1) {
      uVar3 = FUN_146ac6ccc();
      *(undefined4 *)(param_1 + 0xd) = uVar3;
    }
    else {
      FUN_147767a9c(param_1[0xc],param_1);
    }
    pcVar2 = (code *)param_1[0xe];
    if (pcVar2 != (code *)0x0) {
      local_34 = (undefined4)param_1[0xd];
      plVar5 = param_1 + 0x12;
      if ((longlong *)param_1[0x10] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x10];
      }
      local_40 = lVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_40,&local_34);
    }
  }
  if (param_1[0xe] != 0) {
    plVar5 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_146ac6f86(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772e91e FUN_14772e91e body=136 status=ok
// SIG undefined FUN_14772e91e(void)

longlong FUN_14772e91e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x00014772e977;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x00014772e977:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 14772e9a6 FUN_14772e9a6 body=204 status=ok
// SIG undefined FUN_14772e9a6(void)

void FUN_14772e9a6(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[4] == -1) {
      uVar3 = FUN_146ac112a();
      *(undefined4 *)(param_1 + 4) = uVar3;
    }
    else {
      FUN_147767b1e(param_1[3],param_1);
    }
    pcVar2 = (code *)param_1[6];
    if (pcVar2 != (code *)0x0) {
      local_34 = (undefined4)param_1[4];
      plVar5 = param_1 + 10;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[8];
      }
      local_40 = lVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_40,&local_34);
    }
  }
  if (param_1[6] != 0) {
    plVar5 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_146ac1326(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772ea74 FUN_14772ea74 body=378 status=ok
// SIG undefined FUN_14772ea74(void)

undefined4 * FUN_14772ea74(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_2 + 1) == '\x01') {
    local_90 = *param_2;
    puVar3 = &local_88;
    local_8c = 1;
    local_88 = 0;
    uStack_80 = 0;
    puVar1 = &local_68;
    local_78[0] = 1;
    local_6c = 1;
    local_68 = 0;
    local_60 = 0;
    local_70 = local_90;
    FUN_140a52b3c(puVar1,puVar3);
    local_54 = local_8c;
    local_58 = local_90;
    local_50 = 0;
    local_48 = 0;
    FUN_140a52b3c(&local_50,puVar3);
    uVar2 = local_48;
    uVar4 = local_50;
    *param_1 = local_78[0];
    param_1[2] = local_70;
    *(undefined1 *)(param_1 + 3) = local_6c;
    *(undefined8 *)(param_1 + 4) = local_68;
    local_68 = 0;
    param_1[6] = local_60;
    local_60 = 0;
    *(undefined1 *)(param_1 + 9) = local_54;
    param_1[8] = local_58;
    local_50 = 0;
    local_48 = 0;
    FUN_1449db362(&local_50);
  }
  else {
    FUN_140a529f8(local_78);
    uVar2 = local_48;
    uVar4 = local_50;
    *param_1 = local_78[0];
    *(undefined1 *)(param_1 + 3) = local_6c;
    param_1[2] = local_70;
    puVar3 = &local_68;
    *(undefined8 *)(param_1 + 4) = local_68;
    local_68 = 0;
    param_1[6] = local_60;
    local_60 = 0;
    param_1[8] = local_58;
    *(undefined1 *)(param_1 + 9) = local_54;
    puVar1 = &local_50;
    local_50 = 0;
    local_48 = 0;
  }
  FUN_1449db362(puVar1);
  FUN_1449db362(puVar3);
  *(undefined8 *)(param_1 + 10) = uVar4;
  param_1[0xc] = uVar2;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772ebf0 FUN_14772ebf0 body=59 status=ok
// SIG undefined FUN_14772ebf0(void)

longlong FUN_14772ebf0(longlong param_1,longlong param_2)

{
  FUN_146a46c74(param_1 + 0x50);
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1449db362(param_2 + 0x28);
    FUN_1449db362(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return param_1;
}



// FUNCTION 14772ecc2 FUN_14772ecc2 body=159 status=ok
// SIG undefined FUN_14772ecc2(void)

void FUN_14772ecc2(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(&local_40);
  plVar2 = local_40;
  plVar1 = (longlong *)*param_2;
  if (local_40 != plVar1) {
    local_40 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_38 = (undefined4)param_2[1];
  local_30 = param_3;
  FUN_1447cd2ec(param_1,&local_40);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772ed82 FUN_14772ed82 body=159 status=ok
// SIG undefined FUN_14772ed82(void)

void FUN_14772ed82(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x478) == 0) {
    local_28 = *(longlong **)(param_1 + 0x188);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 400);
  }
  else {
    FUN_146a65818(*(longlong *)(param_1 + 0x478),&local_28);
  }
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772ee3c FUN_14772ee3c body=159 status=ok
// SIG undefined FUN_14772ee3c(void)

void FUN_14772ee3c(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x478) == 0) {
    local_28 = *(longlong **)(param_1 + 0x168);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0x170);
  }
  else {
    FUN_146a53cfc(*(longlong *)(param_1 + 0x478),&local_28);
  }
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772eedc FUN_14772eedc body=338 status=ok
// SIG undefined FUN_14772eedc(void)

void FUN_14772eedc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [96];
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0x41c00000;
  local_38 = 0;
  local_34 = 2;
  local_32 = 0;
  local_30 = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a87366(local_e8,&local_88);
  FUN_14772f030(param_1,local_e8);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f030 FUN_14772f030 body=104 status=ok
// SIG undefined FUN_14772f030(void)

void FUN_14772f030(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1412cc59c(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FUN_146a64bde(*(longlong *)(param_1 + 0x478),param_1 + 0x1b0);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x00014772f08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14772f098 FUN_14772f098 body=156 status=ok
// SIG undefined FUN_14772f098(void)

void FUN_14772f098(undefined8 param_1,longlong param_2)

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
  FUN_14772f136(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f136 FUN_14772f136 body=84 status=ok
// SIG undefined FUN_14772f136(void)

void FUN_14772f136(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x1c0) = param_2;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FUN_146a64bde(*(longlong *)(param_1 + 0x478),param_1 + 0x1b0);
    return;
  }
  return;
}



// FUNCTION 14772f18a FUN_14772f18a body=156 status=ok
// SIG undefined FUN_14772f18a(void)

void FUN_14772f18a(undefined8 param_1,longlong param_2)

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
  FUN_14772f228(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f228 FUN_14772f228 body=84 status=ok
// SIG undefined FUN_14772f228(void)

void FUN_14772f228(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x1d0) = param_2;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FUN_146a64bde(*(longlong *)(param_1 + 0x478),param_1 + 0x1b0);
    return;
  }
  return;
}



// FUNCTION 14772f27c FUN_14772f27c body=201 status=ok
// SIG undefined FUN_14772f27c(void)

void FUN_14772f27c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  FUN_14772f346(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f346 FUN_14772f346 body=229 status=ok
// SIG undefined FUN_14772f346(void)

void FUN_14772f346(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x188);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x188) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  uVar4 = (undefined4)param_2[1];
  *(undefined4 *)(param_1 + 400) = uVar4;
  lVar3 = *(longlong *)(param_1 + 0x478);
  if (lVar3 != 0) {
    local_50 = *(longlong **)(param_1 + 0x188);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 8))();
      uVar4 = *(undefined4 *)(param_1 + 400);
    }
    local_40 = 1;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = uVar4;
    FUN_146a6580c(lVar3,&local_50);
    FUN_1449db362(&local_38);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f430 FUN_14772f430 body=195 status=ok
// SIG undefined FUN_14772f430(void)

void FUN_14772f430(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x441) = local_34 != 0;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = local_34 != 0;
    FUN_146a65866();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f4f8 FUN_14772f4f8 body=195 status=ok
// SIG undefined FUN_14772f4f8(void)

void FUN_14772f4f8(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x440) = local_34 != 0;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = local_34 != 0;
    FUN_146a65836();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f5bc FUN_14772f5bc body=152 status=ok
// SIG undefined FUN_14772f5bc(void)

void FUN_14772f5bc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14772f656(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f656 FUN_14772f656 body=102 status=ok
// SIG undefined FUN_14772f656(void)

void FUN_14772f656(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(char *)(param_1 + 0x452) = (char)param_2;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a65956(*(longlong *)(param_1 + 0x478),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f6be FUN_14772f6be body=156 status=ok
// SIG undefined FUN_14772f6be(void)

void FUN_14772f6be(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14772f75c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f75c FUN_14772f75c body=106 status=ok
// SIG undefined FUN_14772f75c(void)

void FUN_14772f75c(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x444) = param_2;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a658b2(*(longlong *)(param_1 + 0x478),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f7c8 FUN_14772f7c8 body=201 status=ok
// SIG undefined FUN_14772f7c8(void)

void FUN_14772f7c8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  FUN_14772f892(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f892 FUN_14772f892 body=229 status=ok
// SIG undefined FUN_14772f892(void)

void FUN_14772f892(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_147730c28();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x478);
    if (lVar1 != 0) {
      local_58 = *(longlong **)(param_1 + 0x168);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = *(undefined4 *)(param_1 + 0x170);
      local_48 = 1;
      local_40 = 0;
      uStack_38 = 0;
      FUN_146a5407e(lVar1,&local_58);
      FUN_1449db362(&local_40);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    local_60 = DAT_14cab7918;
    local_68 = DAT_14cab7910;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772f978 FUN_14772f978 body=177 status=ok
// SIG undefined FUN_14772f978(void)

void FUN_14772f978(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [45];
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1b = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x453) = local_1b;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_1a = local_1b;
    local_19 = 1;
    FUN_146a659c4();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772fa2a FUN_14772fa2a body=143 status=ok
// SIG undefined FUN_14772fa2a(void)

void FUN_14772fa2a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x478) == 0) {
    local_28 = *(longlong **)(param_1 + 0x168);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0x170);
  }
  else {
    FUN_146a53cfc(*(longlong *)(param_1 + 0x478),&local_28);
  }
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772faba FUN_14772faba body=94 status=ok
// SIG undefined FUN_14772faba(void)

void FUN_14772faba(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_14772f892(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772fb1a FUN_14772fb1a body=143 status=ok
// SIG undefined FUN_14772fb1a(void)

void FUN_14772fb1a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x478) == 0) {
    local_28 = *(longlong **)(param_1 + 0x188);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 400);
  }
  else {
    FUN_146a65818(*(longlong *)(param_1 + 0x478),&local_28);
  }
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772fbaa FUN_14772fbaa body=94 status=ok
// SIG undefined FUN_14772fbaa(void)

void FUN_14772fbaa(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_14772f346(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772fc0a FUN_14772fc0a body=58 status=ok
// SIG undefined FUN_14772fc0a(void)

void FUN_14772fc0a(longlong param_1)

{
  FUN_145c2d5d0(param_1 + 0x1b0);
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FUN_146a64bde(*(longlong *)(param_1 + 0x478),param_1 + 0x1b0);
    return;
  }
  return;
}



// FUNCTION 14772fc4e FUN_14772fc4e body=89 status=ok
// SIG undefined FUN_14772fc4e(void)

void FUN_14772fc4e(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x440) = uVar1;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_146a65836();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772fcb2 FUN_14772fcb2 body=89 status=ok
// SIG undefined FUN_14772fcb2(void)

void FUN_14772fcb2(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x441) = uVar1;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_146a65866();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772fd36 FUN_14772fd36 body=102 status=ok
// SIG undefined FUN_14772fd36(void)

void FUN_14772fd36(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x448) = param_2;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a658d4(*(longlong *)(param_1 + 0x478),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772fdb0 FUN_14772fdb0 body=102 status=ok
// SIG undefined FUN_14772fdb0(void)

void FUN_14772fdb0(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x449) = param_2;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a658ee(*(longlong *)(param_1 + 0x478),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772fe2a FUN_14772fe2a body=102 status=ok
// SIG undefined FUN_14772fe2a(void)

void FUN_14772fe2a(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x44a) = param_2;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a65908(*(longlong *)(param_1 + 0x478),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772fea4 FUN_14772fea4 body=102 status=ok
// SIG undefined FUN_14772fea4(void)

void FUN_14772fea4(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 1099) = param_2;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a65922(*(longlong *)(param_1 + 0x478),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772ff1e FUN_14772ff1e body=102 status=ok
// SIG undefined FUN_14772ff1e(void)

void FUN_14772ff1e(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x44c) = param_2;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a6593c(*(longlong *)(param_1 + 0x478),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772ffa2 FUN_14772ffa2 body=82 status=ok
// SIG undefined FUN_14772ffa2(void)

void FUN_14772ffa2(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [46];
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x453) = uVar1;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    local_9 = 1;
    local_a = uVar1;
    FUN_146a659c4();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147730038 FUN_147730038 body=80 status=ok
// SIG undefined FUN_147730038(void)

void FUN_147730038(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x478) = 0;
  plVar3 = *(longlong **)(param_1 + 0x480);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x480) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147730084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147730088 FUN_147730088 body=1733 status=ok
// SIG undefined FUN_147730088(void)

undefined8 * FUN_147730088(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_6e8 [32];
  undefined1 *local_6c8;
  undefined1 local_6b1;
  undefined1 local_6b0 [8];
  longlong *local_6a8;
  uint local_698;
  undefined1 local_694;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined2 local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined2 local_668;
  undefined8 local_660;
  undefined8 uStack_658;
  int local_650;
  undefined1 local_64c;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 *local_638;
  undefined4 local_630;
  undefined8 *local_628;
  undefined4 local_620;
  undefined2 local_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined2 local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined2 local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined2 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined2 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined4 local_5a0;
  undefined1 local_59c;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined2 local_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined2 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  longlong *local_550;
  undefined1 local_548 [544];
  longlong local_328;
  undefined2 local_220;
  undefined1 local_218 [16];
  undefined2 local_208;
  undefined1 local_200 [16];
  undefined2 local_1f0;
  undefined1 local_1e8 [16];
  undefined2 local_1d8;
  undefined1 local_1d0 [40];
  undefined2 local_1a8;
  undefined1 local_1a0 [16];
  undefined2 local_190;
  undefined1 local_188 [16];
  uint local_178;
  undefined1 local_174;
  undefined1 local_170 [72];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [16];
  undefined2 local_f0;
  undefined1 local_e8 [64];
  int local_a8;
  undefined1 local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90;
  undefined2 local_88;
  undefined1 local_80 [16];
  undefined2 local_70;
  undefined1 local_68 [20];
  undefined1 local_54;
  undefined1 local_53;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_6e8;
  FUN_146a63634(local_548);
  local_328 = param_1 + 0x1b0;
  local_570 = CONCAT11(1,*(undefined1 *)(param_1 + 0x440));
  local_568 = 0;
  uStack_560 = 0;
  local_220 = local_570;
  FUN_144a450dc(local_218,&local_568);
  FUN_1449db362(&local_568);
  local_588 = CONCAT11(1,*(undefined1 *)(param_1 + 0x441));
  local_580 = 0;
  uStack_578 = 0;
  local_208 = local_588;
  FUN_144a450dc(local_200,&local_580);
  FUN_1449db362(&local_580);
  local_5a0 = *(undefined4 *)(param_1 + 0x444);
  local_59c = 1;
  local_598 = 0;
  uStack_590 = 0;
  local_104 = 1;
  local_108 = local_5a0;
  FUN_144a450dc(local_100,&local_598);
  FUN_1449db362(&local_598);
  local_5b8 = CONCAT11(1,*(undefined1 *)(param_1 + 0x448));
  local_5b0 = 0;
  uStack_5a8 = 0;
  local_1f0 = local_5b8;
  FUN_144a450dc(local_1e8,&local_5b0);
  FUN_1449db362(&local_5b0);
  local_5d0 = CONCAT11(1,*(undefined1 *)(param_1 + 0x449));
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_1d8 = local_5d0;
  FUN_144a450dc(local_1d0,&local_5c8);
  FUN_1449db362(&local_5c8);
  local_5e8 = CONCAT11(1,*(undefined1 *)(param_1 + 0x44a));
  local_5e0 = 0;
  uStack_5d8 = 0;
  local_1a8 = local_5e8;
  FUN_144a450dc(local_1a0,&local_5e0);
  FUN_1449db362(&local_5e0);
  local_600 = CONCAT11(1,*(undefined1 *)(param_1 + 1099));
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_190 = local_600;
  FUN_144a450dc(local_188,&local_5f8);
  FUN_1449db362(&local_5f8);
  local_618 = CONCAT11(1,*(undefined1 *)(param_1 + 0x44c));
  local_610 = 0;
  uStack_608 = 0;
  local_f0 = local_618;
  FUN_144a450dc(local_e8,&local_610);
  FUN_1449db362(&local_610);
  local_628 = (undefined8 *)0x0;
  local_620 = 0;
  FUN_1446efa72(&local_628,0,3,0x10);
  puVar5 = local_628;
  local_620 = 3;
  *local_628 = &PTR_LAB_149f0eae0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_628[2] = lVar8;
  *local_628 = &PTR_FUN_14a5406c0;
  local_628[3] = 0;
  FUN_14485c47a(local_628 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_14773074e;
  FUN_144a450dc(local_128,&local_628);
  local_638 = (undefined8 *)0x0;
  local_630 = 0;
  FUN_1446efa72(&local_638,0,3,0x10);
  puVar5 = local_638;
  local_630 = 3;
  *local_638 = &PTR_LAB_149f0eb50;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_638[2] = lVar8;
  *local_638 = &PTR_FUN_14a540730;
  local_638[3] = 0;
  FUN_14485c47a(local_638 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_1477307d6;
  FUN_144a450dc(local_118,&local_638);
  bVar7 = *(char *)(param_1 + 0x44e) - 1;
  local_650 = bVar7 + 1;
  if (4 < bVar7) {
    local_650 = 0;
  }
  local_64c = 1;
  local_648 = 0;
  uStack_640 = 0;
  local_a4 = 1;
  local_a8 = local_650;
  FUN_144a450dc(local_a0,&local_648);
  FUN_1449db362(&local_648);
  local_90 = *(undefined1 *)(param_1 + 0x44f);
  local_668 = CONCAT11(1,*(undefined1 *)(param_1 + 0x450));
  local_660 = 0;
  uStack_658 = 0;
  local_88 = local_668;
  FUN_144a450dc(local_80,&local_660);
  FUN_1449db362(&local_660);
  local_680 = CONCAT11(1,*(undefined1 *)(param_1 + 0x451));
  local_678 = 0;
  uStack_670 = 0;
  local_70 = local_680;
  FUN_144a450dc(local_68,&local_678);
  FUN_1449db362(&local_678);
  local_698 = (uint)*(byte *)(param_1 + 0x452);
  local_694 = 1;
  local_690 = 0;
  uStack_688 = 0;
  local_174 = 1;
  local_178 = local_698;
  FUN_144a450dc(local_170,&local_690);
  FUN_1449db362(&local_690);
  local_54 = *(undefined1 *)(param_1 + 0x453);
  local_53 = 1;
  local_6c8 = &local_6b1;
  FUN_146a7c5de(local_6b0,"SEditableText",".\\Runtime/UMG/Private/Components/EditableText.cpp",0x4b)
  ;
  FUN_146a639a0(local_6b0,&local_558,local_548);
  plVar4 = local_550;
  if (local_550 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x478) = local_558;
    plVar9 = *(longlong **)(param_1 + 0x480);
    if (plVar9 == (longlong *)0x0) goto LAB_1477305a4;
    *(undefined8 *)(param_1 + 0x480) = 0;
LAB_1477306e9:
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477305a4;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_550 + 1) = (int)local_550[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x478) = local_558;
    plVar9 = *(longlong **)(param_1 + 0x480);
    if (local_550 != plVar9) {
      *(longlong **)(param_1 + 0x480) = local_550;
      if (plVar9 == (longlong *)0x0) goto LAB_1477305a4;
      goto LAB_1477306e9;
    }
    LOCK();
    plVar9 = local_550 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_1477305a4;
    (**(code **)*local_550)(local_550);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_1477305a4:
  if (local_550 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_550 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_550)(local_550);
      LOCK();
      piVar1 = (int *)((longlong)local_550 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_550 + 0x10))(local_550);
      }
    }
  }
  if (local_6a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_6a8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_6a8)(local_6a8);
      LOCK();
      piVar1 = (int *)((longlong)local_6a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6a8 + 0x10))(local_6a8);
      }
    }
  }
  FUN_1449db362(&local_638);
  FUN_1449db362(&local_628);
  FUN_146a63a14(local_548);
  uVar3 = *(undefined8 *)(param_1 + 0x478);
  plVar4 = *(longlong **)(param_1 + 0x480);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_6e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773074e FUN_14773074e body=118 status=ok
// SIG undefined FUN_14773074e(void)

void FUN_14773074e(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_147730c28();
  if (cVar1 != '\0') {
    local_20 = DAT_14cab7918;
    local_28 = DAT_14cab7910;
    FUN_140e2f5f4(param_1 + 0x28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477307d6 FUN_1477307d6 body=123 status=ok
// SIG undefined FUN_1477307d6(void)

void FUN_1477307d6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147730c28();
  if (cVar1 != '\0') {
    local_28 = DAT_14cab7918;
    local_30 = DAT_14cab7910;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14772ecc2(param_1 + 0x468,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147730852 FUN_147730852 body=855 status=ok
// SIG undefined FUN_147730852(void)

void FUN_147730852(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x478) != 0) {
    cVar1 = FUN_14113f0c0(param_1 + 0x178);
    if (cVar1 == '\0') {
      local_70 = *(longlong **)(param_1 + 0x168);
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 8))();
      }
      local_68 = *(undefined4 *)(param_1 + 0x170);
      local_60 = 1;
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      local_98 = *(longlong **)(param_1 + 0x180);
      uVar2 = FUN_14479d2ce(param_1 + 0x178);
      FUN_144a5dc74(&local_70);
      local_58 = 0;
      uStack_50 = 0;
      local_60 = 1;
      FUN_1446efa72(&local_58,0,3,0x10);
      uStack_50 = CONCAT44(uStack_50._4_4_,3);
      FUN_147766644(local_58,uVar2,&local_98);
    }
    cVar1 = FUN_14113f0c0(param_1 + 0x198);
    if (cVar1 == '\0') {
      local_98 = *(longlong **)(param_1 + 0x188);
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 8))();
      }
      local_90 = *(undefined4 *)(param_1 + 400);
      local_88 = 1;
      local_80 = 0;
      uStack_78 = 0;
    }
    else {
      local_e0 = *(undefined8 *)(param_1 + 0x1a0);
      uVar2 = FUN_14479d2ce(param_1 + 0x198);
      FUN_144a5dc74(&local_98);
      local_80 = 0;
      uStack_78 = 0;
      local_88 = 1;
      FUN_1446efa72(&local_80,0,3,0x10);
      uStack_78 = CONCAT44(uStack_78._4_4_,3);
      FUN_147766644(local_80,uVar2,&local_e0);
    }
    FUN_146a5407e(*(undefined8 *)(param_1 + 0x478),&local_70);
    FUN_146a64bde(*(undefined8 *)(param_1 + 0x478),param_1 + 0x1b0);
    FUN_146a6580c(*(undefined8 *)(param_1 + 0x478),&local_98);
    local_b0 = *(undefined1 *)(param_1 + 0x440);
    local_af = 1;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_146a65836(*(undefined8 *)(param_1 + 0x478));
    local_c8 = *(undefined1 *)(param_1 + 0x441);
    local_c7 = 1;
    local_c0 = 0;
    uStack_b8 = 0;
    FUN_146a65866(*(undefined8 *)(param_1 + 0x478));
    local_e0._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x44d));
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146a65962(*(undefined8 *)(param_1 + 0x478),&local_e0);
    FUN_1449db362(&local_d8);
    local_f8 = *(undefined1 *)(param_1 + 0x451);
    local_f7 = 1;
    local_f0 = 0;
    uStack_e8 = 0;
    FUN_146a6597c(*(undefined8 *)(param_1 + 0x478));
    local_e0._0_5_ = CONCAT14(1,(uint)*(byte *)(param_1 + 0x452));
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146a65956(*(undefined8 *)(param_1 + 0x478),&local_e0);
    FUN_1449db362(&local_d8);
    local_42 = *(undefined1 *)(param_1 + 0x453);
    local_41 = 1;
    FUN_146a659c4(*(undefined8 *)(param_1 + 0x478));
    FUN_147730baa(param_1 + 0x454,*(undefined8 *)(param_1 + 0x478));
    FUN_1449db362(&local_80);
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    FUN_1449db362(&local_58);
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147730baa FUN_147730baa body=124 status=ok
// SIG undefined FUN_147730baa(void)

void FUN_147730baa(byte *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  byte local_1c;
  undefined1 local_1b;
  byte local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = (*param_1 & 1) != 0;
  if ((bool)local_19) {
    local_1a = param_1[1];
  }
  FUN_146a659ac(param_2);
  local_1b = (*param_1 & 2) != 0;
  if ((bool)local_1b) {
    local_1c = param_1[2];
  }
  FUN_146a659b8(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147730c28 FUN_147730c28 body=106 status=ok
// SIG undefined FUN_147730c28(void)

uint FUN_147730c28(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x168);
  uVar4 = FUN_14010cee6(plVar1,param_2,3);
  if ((char)uVar4 == '\0') {
    plVar2 = (longlong *)*param_2;
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != plVar2) {
      *plVar1 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 0x170) = (int)param_2[1];
  }
  return uVar4 ^ 1;
}



// FUNCTION 147730d4a FUN_147730d4a body=159 status=ok
// SIG undefined FUN_147730d4a(void)

void FUN_147730d4a(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(&local_40);
  plVar2 = local_40;
  plVar1 = (longlong *)*param_2;
  if (local_40 != plVar1) {
    local_40 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_38 = (undefined4)param_2[1];
  local_30 = param_3;
  FUN_1447cd2ec(param_1,&local_40);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147730dea FUN_147730dea body=61 status=ok
// SIG undefined FUN_147730dea(void)

void FUN_147730dea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0xe68);
  if (lVar1 != 0) {
    uVar2 = FUN_140e82300();
    FUN_146a680fe(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 147730e28 FUN_147730e28 body=166 status=ok
// SIG undefined FUN_147730e28(void)

void FUN_147730e28(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xe68) == 0) {
    local_28 = *(longlong **)(param_1 + 0x168);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0x170);
  }
  else {
    FUN_146a53cfc(*(undefined8 *)(*(longlong *)(param_1 + 0xe68) + 0x2b8),&local_28);
  }
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147730ed4 FUN_147730ed4 body=53 status=ok
// SIG undefined FUN_147730ed4(void)

void FUN_147730ed4(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xe68) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146a68578();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 147730f0a FUN_147730f0a body=241 status=ok
// SIG undefined FUN_147730f0a(void)

void FUN_147730f0a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
  }
  local_30 = local_20;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    FUN_146a680fe(*(longlong *)(param_1 + 0xe68),&local_38);
    plVar1 = local_38;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147730ffc FUN_147730ffc body=155 status=ok
// SIG undefined FUN_147730ffc(void)

void FUN_147730ffc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_147731098(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731098 FUN_147731098 body=131 status=ok
// SIG undefined FUN_147731098(void)

void FUN_147731098(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x754) = uVar2;
  *(undefined4 *)(param_1 + 0x758) = uVar3;
  *(undefined4 *)(param_1 + 0x75c) = uVar4;
  *(undefined1 *)(param_1 + 0x760) = 0;
  lVar1 = *(longlong *)(param_1 + 0xe68);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a5c8a2(lVar1 + 0x250,lVar1,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773111c FUN_14773111c body=201 status=ok
// SIG undefined FUN_14773111c(void)

void FUN_14773111c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  FUN_1477311e6(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477311e6 FUN_1477311e6 body=229 status=ok
// SIG undefined FUN_1477311e6(void)

void FUN_1477311e6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0xe10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xe10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  uVar4 = (undefined4)param_2[1];
  *(undefined4 *)(param_1 + 0xe18) = uVar4;
  lVar3 = *(longlong *)(param_1 + 0xe68);
  if (lVar3 != 0) {
    local_50 = *(longlong **)(param_1 + 0xe10);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 8))();
      uVar4 = *(undefined4 *)(param_1 + 0xe18);
    }
    local_40 = 1;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = uVar4;
    FUN_146a688e6(lVar3,&local_50);
    FUN_1449db362(&local_38);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477312d0 FUN_1477312d0 body=195 status=ok
// SIG undefined FUN_1477312d0(void)

void FUN_1477312d0(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0xe31) = local_34 != 0;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = local_34 != 0;
    FUN_146a6898c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731398 FUN_147731398 body=195 status=ok
// SIG undefined FUN_147731398(void)

void FUN_147731398(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0xe30) = local_34 != 0;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = local_34 != 0;
    FUN_146a688fa();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773145c FUN_14773145c body=152 status=ok
// SIG undefined FUN_14773145c(void)

void FUN_14773145c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477314f6(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477314f6 FUN_1477314f6 body=102 status=ok
// SIG undefined FUN_1477314f6(void)

void FUN_1477314f6(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(char *)(param_1 + 0xe42) = (char)param_2;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a68b08(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773155e FUN_14773155e body=201 status=ok
// SIG undefined FUN_14773155e(void)

void FUN_14773155e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  FUN_147731628(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731628 FUN_147731628 body=229 status=ok
// SIG undefined FUN_147731628(void)

void FUN_147731628(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_147732b06();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0xe68);
    if (lVar1 != 0) {
      local_58 = *(longlong **)(param_1 + 0x168);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = *(undefined4 *)(param_1 + 0x170);
      local_48 = 1;
      local_40 = 0;
      uStack_38 = 0;
      FUN_146a5456e(lVar1,&local_58);
      FUN_1449db362(&local_40);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    local_60 = DAT_14cab79c8;
    local_68 = DAT_14cab79c0;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773170e FUN_14773170e body=177 status=ok
// SIG undefined FUN_14773170e(void)

void FUN_14773170e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [45];
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1b = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0xe43) = local_1b;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_1a = local_1b;
    local_19 = 1;
    FUN_146a68508();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477317c0 FUN_1477317c0 body=150 status=ok
// SIG undefined FUN_1477317c0(void)

void FUN_1477317c0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe68) == 0) {
    local_28 = *(longlong **)(param_1 + 0x168);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0x170);
  }
  else {
    FUN_146a53cfc(*(undefined8 *)(*(longlong *)(param_1 + 0xe68) + 0x2b8),&local_28);
  }
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731858 FUN_147731858 body=94 status=ok
// SIG undefined FUN_147731858(void)

void FUN_147731858(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_147731628(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477318b8 FUN_1477318b8 body=150 status=ok
// SIG undefined FUN_1477318b8(void)

void FUN_1477318b8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe68) == 0) {
    local_28 = *(longlong **)(param_1 + 0xe10);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0xe18);
  }
  else {
    FUN_146a65818(*(undefined8 *)(*(longlong *)(param_1 + 0xe68) + 0x2b8),&local_28);
  }
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731950 FUN_147731950 body=94 status=ok
// SIG undefined FUN_147731950(void)

void FUN_147731950(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_1477311e6(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477319ba FUN_1477319ba body=89 status=ok
// SIG undefined FUN_1477319ba(void)

void FUN_1477319ba(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0xe30) = uVar1;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_146a688fa();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731a1e FUN_147731a1e body=89 status=ok
// SIG undefined FUN_147731a1e(void)

void FUN_147731a1e(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0xe31) = uVar1;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_146a6898c();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731a90 FUN_147731a90 body=106 status=ok
// SIG undefined FUN_147731a90(void)

void FUN_147731a90(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0xe34) = param_2;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a68a36(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731b0e FUN_147731b0e body=102 status=ok
// SIG undefined FUN_147731b0e(void)

void FUN_147731b0e(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0xe38) = param_2;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a68a5e(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731b88 FUN_147731b88 body=102 status=ok
// SIG undefined FUN_147731b88(void)

void FUN_147731b88(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0xe39) = param_2;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a68a80(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731c02 FUN_147731c02 body=102 status=ok
// SIG undefined FUN_147731c02(void)

void FUN_147731c02(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0xe3a) = param_2;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a68aa2(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731c7c FUN_147731c7c body=102 status=ok
// SIG undefined FUN_147731c7c(void)

void FUN_147731c7c(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0xe3b) = param_2;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a68ac4(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731cf6 FUN_147731cf6 body=102 status=ok
// SIG undefined FUN_147731cf6(void)

void FUN_147731cf6(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0xe3c) = param_2;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a68ae6(*(longlong *)(param_1 + 0xe68),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731d7a FUN_147731d7a body=82 status=ok
// SIG undefined FUN_147731d7a(void)

void FUN_147731d7a(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [46];
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0xe43) = uVar1;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    local_9 = 1;
    local_a = uVar1;
    FUN_146a68508();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731e10 FUN_147731e10 body=99 status=ok
// SIG undefined FUN_147731e10(void)

void FUN_147731e10(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc08);
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147731e74 FUN_147731e74 body=48 status=ok
// SIG undefined FUN_147731e74(void)

void FUN_147731e74(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  return;
}



// FUNCTION 147731ea4 FUN_147731ea4 body=80 status=ok
// SIG undefined FUN_147731ea4(void)

void FUN_147731ea4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0xe68) = 0;
  plVar3 = *(longlong **)(param_1 + 0xe70);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe70) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147731ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147731ef4 FUN_147731ef4 body=1799 status=ok
// SIG undefined FUN_147731ef4(void)

undefined8 * FUN_147731ef4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_748 [32];
  undefined1 *local_728;
  undefined1 local_719;
  undefined1 local_718 [8];
  longlong *local_710;
  uint local_700;
  undefined1 local_6fc;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined2 local_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined2 local_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  int local_6b8;
  undefined1 local_6b4;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 *local_6a0;
  undefined4 local_698;
  undefined8 *local_690;
  undefined4 local_688;
  undefined2 local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined2 local_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined2 local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined2 local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined2 local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined2 local_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined4 local_5f0;
  undefined1 local_5ec;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined2 local_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined2 local_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  longlong *local_5a0;
  undefined1 local_598 [424];
  longlong local_3f0;
  undefined2 local_280;
  undefined1 local_278 [16];
  undefined2 local_268;
  undefined1 local_260 [16];
  undefined2 local_250;
  undefined1 local_248 [16];
  undefined2 local_238;
  undefined1 local_230 [16];
  undefined2 local_220;
  undefined1 local_218 [16];
  undefined2 local_208;
  undefined1 local_200 [16];
  uint local_1f0;
  undefined1 local_1ec;
  undefined1 local_1e8 [16];
  undefined2 local_1d8;
  undefined1 local_1d0 [48];
  undefined1 local_1a0 [16];
  undefined1 local_190 [32];
  undefined4 local_170;
  undefined1 local_16c;
  undefined1 local_168 [16];
  undefined2 local_158;
  undefined1 local_150 [168];
  int local_a8;
  undefined1 local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90;
  undefined2 local_88;
  undefined1 local_80 [16];
  undefined2 local_70;
  undefined1 local_68 [20];
  undefined1 local_54;
  undefined1 local_53;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_748;
  FUN_146a10de6(local_598);
  local_3f0 = param_1 + 400;
  local_5c0 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe30));
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_280 = local_5c0;
  FUN_144a450dc(local_278,&local_5b8);
  FUN_1449db362(&local_5b8);
  local_5d8 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe31));
  local_5d0 = 0;
  uStack_5c8 = 0;
  local_268 = local_5d8;
  FUN_144a450dc(local_260,&local_5d0);
  FUN_1449db362(&local_5d0);
  local_5f0 = *(undefined4 *)(param_1 + 0xe34);
  local_5ec = 1;
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_16c = 1;
  local_170 = local_5f0;
  FUN_144a450dc(local_168,&local_5e8);
  FUN_1449db362(&local_5e8);
  local_608 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe38));
  local_600 = 0;
  uStack_5f8 = 0;
  local_250 = local_608;
  FUN_144a450dc(local_248,&local_600);
  FUN_1449db362(&local_600);
  local_620 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe39));
  local_618 = 0;
  uStack_610 = 0;
  local_238 = local_620;
  FUN_144a450dc(local_230,&local_618);
  FUN_1449db362(&local_618);
  local_638 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe3a));
  local_630 = 0;
  uStack_628 = 0;
  local_220 = local_638;
  FUN_144a450dc(local_218,&local_630);
  FUN_1449db362(&local_630);
  local_650 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe3b));
  local_648 = 0;
  uStack_640 = 0;
  local_208 = local_650;
  FUN_144a450dc(local_200,&local_648);
  FUN_1449db362(&local_648);
  local_668 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe3c));
  local_660 = 0;
  uStack_658 = 0;
  local_158 = local_668;
  FUN_144a450dc(local_150,&local_660);
  FUN_1449db362(&local_660);
  local_680 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe3d));
  local_678 = 0;
  uStack_670 = 0;
  local_1d8 = local_680;
  FUN_144a450dc(local_1d0,&local_678);
  FUN_1449db362(&local_678);
  local_690 = (undefined8 *)0x0;
  local_688 = 0;
  FUN_1446efa72(&local_690,0,3,0x10);
  puVar5 = local_690;
  local_688 = 3;
  *local_690 = &PTR_LAB_149f0eae0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_690[2] = lVar8;
  *local_690 = &PTR_FUN_14a5407a0;
  local_690[3] = 0;
  FUN_14485c47a(local_690 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = &LAB_1477325fc;
  FUN_144a450dc(local_1a0,&local_690);
  local_6a0 = (undefined8 *)0x0;
  local_698 = 0;
  FUN_1446efa72(&local_6a0,0,3,0x10);
  puVar5 = local_6a0;
  local_698 = 3;
  *local_6a0 = &PTR_LAB_149f0eb50;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_6a0[2] = lVar8;
  *local_6a0 = &PTR_FUN_14a540810;
  local_6a0[3] = 0;
  FUN_14485c47a(local_6a0 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = &LAB_14773260a;
  FUN_144a450dc(local_190,&local_6a0);
  bVar7 = *(char *)(param_1 + 0xe3e) - 1;
  local_6b8 = bVar7 + 1;
  if (4 < bVar7) {
    local_6b8 = 0;
  }
  local_6b4 = 1;
  local_6b0 = 0;
  uStack_6a8 = 0;
  local_a4 = 1;
  local_a8 = local_6b8;
  FUN_144a450dc(local_a0,&local_6b0);
  FUN_1449db362(&local_6b0);
  local_90 = *(undefined1 *)(param_1 + 0xe3f);
  local_6d0 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe40));
  local_6c8 = 0;
  uStack_6c0 = 0;
  local_88 = local_6d0;
  FUN_144a450dc(local_80,&local_6c8);
  FUN_1449db362(&local_6c8);
  local_6e8 = CONCAT11(1,*(undefined1 *)(param_1 + 0xe41));
  local_6e0 = 0;
  uStack_6d8 = 0;
  local_70 = local_6e8;
  FUN_144a450dc(local_68,&local_6e0);
  FUN_1449db362(&local_6e0);
  local_700 = (uint)*(byte *)(param_1 + 0xe42);
  local_6fc = 1;
  local_6f8 = 0;
  uStack_6f0 = 0;
  local_1ec = 1;
  local_1f0 = local_700;
  FUN_144a450dc(local_1e8,&local_6f8);
  FUN_1449db362(&local_6f8);
  local_54 = *(undefined1 *)(param_1 + 0xe43);
  local_53 = 1;
  local_728 = &local_719;
  FUN_146a400a4(local_718,"SEditableTextBox",".\\Runtime/UMG/Private/Components/EditableTextBox.cpp"
                ,0x5e);
  FUN_146a1115e(local_718,&local_5a8,local_598);
  plVar4 = local_5a0;
  if (local_5a0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe68) = local_5a8;
    plVar9 = *(longlong **)(param_1 + 0xe70);
    if (plVar9 == (longlong *)0x0) goto LAB_147732452;
    *(undefined8 *)(param_1 + 0xe70) = 0;
LAB_147732597:
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147732452;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_5a0 + 1) = (int)local_5a0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xe68) = local_5a8;
    plVar9 = *(longlong **)(param_1 + 0xe70);
    if (local_5a0 != plVar9) {
      *(longlong **)(param_1 + 0xe70) = local_5a0;
      if (plVar9 == (longlong *)0x0) goto LAB_147732452;
      goto LAB_147732597;
    }
    LOCK();
    plVar9 = local_5a0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147732452;
    (**(code **)*local_5a0)(local_5a0);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_147732452:
  if (local_5a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_5a0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_5a0)(local_5a0);
      LOCK();
      piVar1 = (int *)((longlong)local_5a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5a0 + 0x10))(local_5a0);
      }
    }
  }
  if (local_710 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_710 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_710)(local_710);
      LOCK();
      piVar1 = (int *)((longlong)local_710 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_710 + 0x10))(local_710);
      }
    }
  }
  FUN_1449db362(&local_6a0);
  FUN_1449db362(&local_690);
  FUN_146a111d2(local_598);
  uVar3 = *(undefined8 *)(param_1 + 0xe68);
  plVar4 = *(longlong **)(param_1 + 0xe70);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_748) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147732618 FUN_147732618 body=1135 status=ok
// SIG undefined FUN_147732618(void)

void FUN_147732618(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [40];
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    cVar1 = FUN_14113f0c0(param_1 + 0x178);
    if (cVar1 == '\0') {
      local_70 = *(longlong **)(param_1 + 0x168);
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 8))();
      }
      local_68 = *(undefined4 *)(param_1 + 0x170);
      local_60 = 1;
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      local_98 = *(longlong **)(param_1 + 0x180);
      uVar2 = FUN_14479d2ce(param_1 + 0x178);
      FUN_144a5dc74(&local_70);
      local_58 = 0;
      uStack_50 = 0;
      local_60 = 1;
      FUN_1446efa72(&local_58,0,3,0x10);
      uStack_50 = CONCAT44(uStack_50._4_4_,3);
      FUN_147766644(local_58,uVar2,&local_98);
    }
    cVar1 = FUN_14113f0c0(param_1 + 0xe20);
    if (cVar1 == '\0') {
      local_98 = *(longlong **)(param_1 + 0xe10);
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 8))();
      }
      local_90 = *(undefined4 *)(param_1 + 0xe18);
      local_88 = 1;
      local_80 = 0;
      uStack_78 = 0;
    }
    else {
      local_e0 = *(undefined8 *)(param_1 + 0xe28);
      uVar2 = FUN_14479d2ce(param_1 + 0xe20);
      FUN_144a5dc74(&local_98);
      local_80 = 0;
      uStack_78 = 0;
      local_88 = 1;
      FUN_1446efa72(&local_80,0,3,0x10);
      uStack_78 = CONCAT44(uStack_78._4_4_,3);
      FUN_147766644(local_80,uVar2,&local_e0);
    }
    FUN_146a6778e(*(undefined8 *)(param_1 + 0xe68),param_1 + 400);
    FUN_146a5456e(*(undefined8 *)(param_1 + 0xe68),&local_70);
    FUN_146a688e6(*(undefined8 *)(param_1 + 0xe68),&local_98);
    local_b0 = *(undefined1 *)(param_1 + 0xe30);
    local_af = 1;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_146a688fa(*(undefined8 *)(param_1 + 0xe68));
    local_c8 = *(undefined1 *)(param_1 + 0xe31);
    local_c7 = 1;
    local_c0 = 0;
    uStack_b8 = 0;
    FUN_146a6898c(*(undefined8 *)(param_1 + 0xe68));
    local_e0._0_5_ = CONCAT14(1,*(undefined4 *)(param_1 + 0xe34));
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146a68a36(*(undefined8 *)(param_1 + 0xe68),&local_e0);
    FUN_1449db362(&local_d8);
    local_e0._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0xe38));
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146a68a5e(*(undefined8 *)(param_1 + 0xe68),&local_e0);
    FUN_1449db362(&local_d8);
    local_e0._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0xe39));
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146a68a80(*(undefined8 *)(param_1 + 0xe68),&local_e0);
    FUN_1449db362(&local_d8);
    local_e0._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0xe3a));
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146a68aa2(*(undefined8 *)(param_1 + 0xe68),&local_e0);
    FUN_1449db362(&local_d8);
    local_e0._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0xe3b));
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146a68ac4(*(undefined8 *)(param_1 + 0xe68),&local_e0);
    FUN_1449db362(&local_d8);
    local_e0._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0xe3c));
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146a68ae6(*(undefined8 *)(param_1 + 0xe68),&local_e0);
    FUN_1449db362(&local_d8);
    local_f8 = *(undefined1 *)(param_1 + 0xe3d);
    local_f7 = 1;
    local_f0 = 0;
    uStack_e8 = 0;
    FUN_146a68b1c(*(undefined8 *)(param_1 + 0xe68));
    local_110 = *(undefined1 *)(param_1 + 0xe41);
    local_10f = 1;
    local_108 = 0;
    uStack_100 = 0;
    FUN_146a68b52(*(undefined8 *)(param_1 + 0xe68));
    local_e0._0_5_ = CONCAT14(1,(uint)*(byte *)(param_1 + 0xe42));
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146a68b08(*(undefined8 *)(param_1 + 0xe68),&local_e0);
    FUN_1449db362(&local_d8);
    local_42 = *(undefined1 *)(param_1 + 0xe43);
    local_41 = 1;
    FUN_146a68508(*(undefined8 *)(param_1 + 0xe68));
    FUN_147732a88(param_1 + 0xe44,*(undefined8 *)(param_1 + 0xe68));
    FUN_1449db362(&local_80);
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    FUN_1449db362(&local_58);
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147732a88 FUN_147732a88 body=124 status=ok
// SIG undefined FUN_147732a88(void)

void FUN_147732a88(byte *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  byte local_1c;
  undefined1 local_1b;
  byte local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = (*param_1 & 1) != 0;
  if ((bool)local_19) {
    local_1a = param_1[1];
  }
  FUN_146a684e0(param_2);
  local_1b = (*param_1 & 2) != 0;
  if ((bool)local_1b) {
    local_1c = param_1[2];
  }
  FUN_146a684f4(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147732b06 FUN_147732b06 body=106 status=ok
// SIG undefined FUN_147732b06(void)

uint FUN_147732b06(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x168);
  uVar4 = FUN_14010cee6(plVar1,param_2,3);
  if ((char)uVar4 == '\0') {
    plVar2 = (longlong *)*param_2;
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != plVar2) {
      *plVar1 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 0x170) = (int)param_2[1];
  }
  return uVar4 ^ 1;
}



// FUNCTION 147732b70 FUN_147732b70 body=118 status=ok
// SIG undefined FUN_147732b70(void)

void FUN_147732b70(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_147732b06();
  if (cVar1 != '\0') {
    local_20 = DAT_14cab79c8;
    local_28 = DAT_14cab79c0;
    FUN_140e2f5f4(param_1 + 0x28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147732bf8 FUN_147732bf8 body=123 status=ok
// SIG undefined FUN_147732bf8(void)

void FUN_147732bf8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147732b06();
  if (cVar1 != '\0') {
    local_28 = DAT_14cab79c8;
    local_30 = DAT_14cab79c0;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_147730d4a(param_1 + 0xe58,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147732cbe FUN_147732cbe body=158 status=ok
// SIG undefined FUN_147732cbe(void)

void FUN_147732cbe(undefined8 param_1,longlong param_2)

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
  FUN_147732d5e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147732d5e FUN_147732d5e body=139 status=ok
// SIG undefined FUN_147732d5e(void)

void FUN_147732d5e(longlong param_1,char param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x3b4) != param_2) {
    *(char *)(param_1 + 0x3b4) = param_2;
    local_28 = DAT_14cab7a30;
    local_30 = DAT_14cab7a28;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147732e00 FUN_147732e00 body=158 status=ok
// SIG undefined FUN_147732e00(void)

void FUN_147732e00(undefined8 param_1,longlong param_2)

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
  FUN_147732ea0(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147732ea0 FUN_147732ea0 body=139 status=ok
// SIG undefined FUN_147732ea0(void)

void FUN_147732ea0(longlong param_1,char param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x3b4) != param_2) {
    *(char *)(param_1 + 0x3b4) = param_2;
    local_28 = DAT_14cab7a30;
    local_30 = DAT_14cab7a28;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147732f3e FUN_147732f3e body=316 status=ok
// SIG undefined FUN_147732f3e(void)

void FUN_147732f3e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = &PTR_FUN_149ed05f0;
  local_e0 = *(undefined4 *)(param_1 + 0x2f8);
  uStack_dc = *(undefined4 *)(param_1 + 0x2fc);
  uStack_d8 = *(undefined4 *)(param_1 + 0x300);
  uStack_d4 = *(undefined4 *)(param_1 + 0x304);
  local_d0 = *(undefined4 *)(param_1 + 0x308);
  uStack_cc = *(undefined4 *)(param_1 + 0x30c);
  uStack_c8 = *(undefined4 *)(param_1 + 0x310);
  uStack_c4 = *(undefined4 *)(param_1 + 0x314);
  local_c0 = *(undefined4 *)(param_1 + 0x318);
  uStack_bc = *(undefined4 *)(param_1 + 0x31c);
  uStack_b8 = *(undefined4 *)(param_1 + 800);
  uStack_b4 = *(undefined4 *)(param_1 + 0x324);
  local_b0 = *(longlong *)(param_1 + 0x328);
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = (undefined8 *)(param_1 + 0x330);
  puVar6 = local_a8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_54 = *(undefined1 *)(param_1 + 900);
  local_58 = *(undefined4 *)(param_1 + 0x380);
  local_50 = *(undefined8 *)(param_1 + 0x388);
  local_48 = *(longlong **)(param_1 + 0x390);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_40 = *(undefined8 *)(param_1 + 0x398);
  FUN_140f13d9e(param_2,&local_e8);
  plVar3 = local_48;
  local_e8 = &PTR_FUN_149ed05f0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147733082 FUN_147733082 body=90 status=ok
// SIG undefined FUN_147733082(void)

void FUN_147733082(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1469688aa(param_1 + 0x2f0);
  if (cVar1 == '\0') {
    FUN_140f13d9e(param_1 + 0x2f0,param_2);
    if (*(longlong *)(param_1 + 0x400) != 0) {
      FUN_146a8d46e(*(longlong *)(param_1 + 0x400),param_2);
      thunk_FUN_140163244(*(undefined8 *)(param_1 + 0x400));
      return;
    }
  }
  return;
}



// FUNCTION 14773315e FUN_14773315e body=94 status=ok
// SIG undefined FUN_14773315e(void)

void FUN_14773315e(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x3bc) = *param_2;
  *(undefined4 *)(param_1 + 0x3c0) = uVar1;
  *(undefined4 *)(param_1 + 0x3c4) = uVar2;
  *(undefined4 *)(param_1 + 0x3c8) = uVar3;
  if (*(longlong *)(param_1 + 0x400) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x3bc);
    uStack_14 = *(undefined4 *)(param_1 + 0x3c0);
    uStack_10 = *(undefined4 *)(param_1 + 0x3c4);
    uStack_c = *(undefined4 *)(param_1 + 0x3c8);
    FUN_146a8d556(*(longlong *)(param_1 + 0x400));
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477331ca FUN_1477331ca body=94 status=ok
// SIG undefined FUN_1477331ca(void)

void FUN_1477331ca(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x3cc) = *param_2;
  *(undefined4 *)(param_1 + 0x3d0) = uVar1;
  *(undefined4 *)(param_1 + 0x3d4) = uVar2;
  *(undefined4 *)(param_1 + 0x3d8) = uVar3;
  if (*(longlong *)(param_1 + 0x400) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x3cc);
    uStack_14 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_10 = *(undefined4 *)(param_1 + 0x3d4);
    uStack_c = *(undefined4 *)(param_1 + 0x3d8);
    FUN_146a8d5a8(*(longlong *)(param_1 + 0x400));
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147733234 FUN_147733234 body=94 status=ok
// SIG undefined FUN_147733234(void)

void FUN_147733234(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cab7a38;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cab7a40;
  return;
}



// FUNCTION 1477332b6 FUN_1477332b6 body=126 status=ok
// SIG undefined FUN_1477332b6(void)

void FUN_1477332b6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  
  if (DAT_14cab7a38 == param_2) {
    plVar1 = *(longlong **)(param_1 + 0x288);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    }
    plVar1 = (longlong *)(param_1 + 0x288);
  }
  else {
    if (DAT_14cab7a40 != param_2) {
      return;
    }
    plVar1 = *(longlong **)(param_1 + 0x290);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    }
    plVar1 = (longlong *)(param_1 + 0x290);
  }
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *plVar1 = param_3;
  return;
}



// FUNCTION 147733334 FUN_147733334 body=1492 status=ok
// SIG undefined FUN_147733334(void)

undefined8 * FUN_147733334(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  undefined1 local_501;
  undefined1 local_500 [8];
  longlong *local_4f8;
  undefined8 *local_4e8;
  undefined4 local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined1 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined1 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  undefined1 local_464;
  undefined8 local_460;
  undefined8 uStack_458;
  longlong local_448;
  undefined1 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  longlong *local_420;
  undefined8 local_418;
  longlong *local_410;
  undefined8 local_408;
  longlong *local_400;
  code *local_3f8;
  undefined1 *local_3f0;
  longlong local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined1 local_234;
  undefined1 local_230 [16];
  longlong local_220;
  undefined1 local_218;
  undefined1 local_210 [64];
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined4 local_180;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140;
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [176];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_538;
  if (*(longlong *)(param_1 + 0x3f0) == 0) {
    local_408 = DAT_14c98dec8;
    local_400 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_3f0 = local_500;
    local_3f8 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x3f0),&local_408);
  }
  if (*(longlong *)(param_1 + 0x3f8) == 0) {
    local_418 = DAT_14c98dec8;
    local_410 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_3f0 = local_500;
    local_3f8 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x3f8),&local_418);
  }
  FUN_146b05ec6(&local_3f8);
  local_250 = param_1 + 0x170;
  local_448 = param_1 + 0x2f0;
  local_440 = 1;
  local_438 = 0;
  uStack_430 = 0;
  local_218 = 1;
  local_220 = local_448;
  FUN_144a450dc(local_210,&local_438);
  FUN_1449db362(&local_438);
  local_468 = *(undefined4 *)(param_1 + 0x3b0);
  local_478 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_470 = *(undefined8 *)(param_1 + 0x3a8);
  local_464 = 1;
  local_460 = 0;
  uStack_458 = 0;
  local_248 = *(undefined4 *)(param_1 + 0x3a0);
  uStack_244 = *(undefined4 *)(param_1 + 0x3a4);
  uStack_240 = *(undefined4 *)(param_1 + 0x3a8);
  uStack_23c = *(undefined4 *)(param_1 + 0x3ac);
  local_238 = *(undefined4 *)(param_1 + 0x3b0);
  local_234 = 1;
  FUN_144a450dc(local_230,&local_460);
  FUN_1449db362(&local_460);
  local_180 = *(undefined4 *)(param_1 + 0x3b8);
  uVar3 = *(undefined8 *)(param_1 + 0x3cc);
  uVar5 = *(undefined8 *)(param_1 + 0x3d4);
  local_498 = 1;
  local_490 = 0;
  uStack_488 = 0;
  local_118 = 1;
  local_4a8._0_4_ = (undefined4)uVar3;
  local_4a8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_4a0._0_4_ = (undefined4)uVar5;
  uStack_4a0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_128 = (undefined4)local_4a8;
  uStack_124 = local_4a8._4_4_;
  uStack_120 = (undefined4)uStack_4a0;
  uStack_11c = uStack_4a0._4_4_;
  local_4a8 = uVar3;
  uStack_4a0 = uVar5;
  FUN_144a450dc(local_110,&local_490);
  FUN_1449db362(&local_490);
  local_4d8 = *(undefined4 *)(param_1 + 0x3bc);
  uStack_4d4 = *(undefined4 *)(param_1 + 0x3c0);
  uStack_4d0 = *(undefined4 *)(param_1 + 0x3c4);
  uStack_4cc = *(undefined4 *)(param_1 + 0x3c8);
  local_4c8 = 1;
  local_4c0 = 0;
  uStack_4b8 = 0;
  local_140 = 1;
  local_150 = local_4d8;
  uStack_14c = uStack_4d4;
  uStack_148 = uStack_4d0;
  uStack_144 = uStack_4cc;
  FUN_144a450dc(local_138,&local_4c0);
  FUN_1449db362(&local_4c0);
  local_4e8 = (undefined8 *)0x0;
  local_4e0 = 0;
  FUN_1446efa72(&local_4e8,0,3,0x10);
  puVar6 = local_4e8;
  local_4e0 = 3;
  *local_4e8 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_4e8[2] = lVar8;
  *local_4e8 = &PTR_FUN_14a540880;
  local_4e8[3] = 0;
  FUN_14485c47a(local_4e8 + 3,param_1);
  puVar6[4] = FUN_14773390a;
  *(undefined4 *)(puVar6 + 5) = 0;
  FUN_144a450dc(local_100,&local_4e8);
  plVar4 = local_1c8;
  if (local_400 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_400 + 1) = (int)local_400[1] + 1;
    UNLOCK();
  }
  local_1d0 = local_408;
  local_1c8 = local_400;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  plVar4 = local_1b8;
  if (local_410 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_410 + 1) = (int)local_410[1] + 1;
    UNLOCK();
  }
  local_1c0 = local_418;
  local_1b8 = local_410;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  local_518 = &local_501;
  FUN_146b07822(local_500,"SExpandableArea",".\\Runtime/UMG/Private/Components/ExpandableArea.cpp",
                0xde);
  FUN_146b061e0(local_500,&local_428,&local_3f8);
  plVar4 = local_420;
  if (local_420 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x400) = local_428;
    plVar9 = *(longlong **)(param_1 + 0x408);
    if (plVar9 == (longlong *)0x0) goto LAB_147733731;
    *(undefined8 *)(param_1 + 0x408) = 0;
LAB_1477338bd:
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147733731;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_420 + 1) = (int)local_420[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x400) = local_428;
    plVar9 = *(longlong **)(param_1 + 0x408);
    if (local_420 != plVar9) {
      *(longlong **)(param_1 + 0x408) = local_420;
      if (plVar9 == (longlong *)0x0) goto LAB_147733731;
      goto LAB_1477338bd;
    }
    LOCK();
    plVar9 = local_420 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147733731;
    (**(code **)*local_420)(local_420);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_147733731:
  if (local_420 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_420 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_420)(local_420);
      LOCK();
      piVar1 = (int *)((longlong)local_420 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_420 + 0x10))(local_420);
      }
    }
  }
  if (local_4f8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_4f8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_4f8)(local_4f8);
      LOCK();
      piVar1 = (int *)((longlong)local_4f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_4f8 + 0x10))(local_4f8);
      }
    }
  }
  FUN_1449db362(&local_4e8);
  FUN_146b06462(&local_3f8);
  uVar3 = *(undefined8 *)(param_1 + 0x400);
  plVar4 = *(longlong **)(param_1 + 0x408);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  plVar4 = local_410;
  if (local_410 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_410 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_410)(local_410);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_400;
  if (local_400 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_400 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_400)(local_400);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773390a FUN_14773390a body=137 status=ok
// SIG undefined FUN_14773390a(void)

void FUN_14773390a(longlong param_1,char param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x3b4) != param_2) {
    *(char *)(param_1 + 0x3b4) = param_2;
    local_30 = DAT_14cab7a30;
    local_38 = DAT_14cab7a28;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  if (0 < *(int *)(param_1 + 1000)) {
    local_28 = param_1;
    local_20 = param_2;
    FUN_1447cd2ec(param_1 + 0x3e0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147733994 FUN_147733994 body=242 status=ok
// SIG undefined FUN_147733994(void)

void FUN_147733994(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FUN_146a8d466(*(longlong *)(param_1 + 0x400),param_1 + 0x170);
    thunk_FUN_140163244(*(undefined8 *)(param_1 + 0x400));
    (**(code **)(**(longlong **)(param_1 + 0x400) + 0x248))
              (*(longlong **)(param_1 + 0x400),*(undefined1 *)(param_1 + 0x3b4));
    local_28 = *(undefined4 *)(param_1 + 0x3cc);
    uStack_24 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_20 = *(undefined4 *)(param_1 + 0x3d4);
    uStack_1c = *(undefined4 *)(param_1 + 0x3d8);
    FUN_146a8d5a8(*(undefined8 *)(param_1 + 0x400));
    local_38 = *(undefined4 *)(param_1 + 0x3bc);
    uStack_34 = *(undefined4 *)(param_1 + 0x3c0);
    uStack_30 = *(undefined4 *)(param_1 + 0x3c4);
    uStack_2c = *(undefined4 *)(param_1 + 0x3c8);
    FUN_146a8d556(*(undefined8 *)(param_1 + 0x400));
    FUN_146a8d46e(*(undefined8 *)(param_1 + 0x400),param_1 + 0x2f0);
    thunk_FUN_140163244(*(undefined8 *)(param_1 + 0x400));
    FUN_146a8d4e6(*(undefined8 *)(param_1 + 0x400),param_1 + 0x3a0);
    FUN_146a8d446(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x3b8));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147733a88 FUN_147733a88 body=314 status=ok
// SIG undefined FUN_147733a88(void)

void FUN_147733a88(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147733bc4(param_1,local_28,local_2c,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147733bc4 FUN_147733bc4 body=132 status=ok
// SIG undefined FUN_147733bc4(void)

longlong FUN_147733bc4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147743a5a(param_1,param_2,0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_145920d02();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) {
      lVar2 = 0;
    }
    else {
      *(undefined4 *)(lVar1 + 0x4c) = param_3;
      lVar2 = lVar1;
      if (*(longlong *)(lVar1 + 0x70) == 0) {
        *(undefined4 *)(lVar1 + 0x54) = param_4;
      }
      else {
        FUN_1477350b6(*(longlong *)(lVar1 + 0x70),param_3);
        *(undefined4 *)(lVar1 + 0x54) = param_4;
        if (*(longlong *)(lVar1 + 0x70) != 0) {
          FUN_1477351d6(*(longlong *)(lVar1 + 0x70),param_4);
        }
      }
    }
  }
  return lVar2;
}



// FUNCTION 147733c48 FUN_147733c48 body=230 status=ok
// SIG undefined FUN_147733c48(void)

void FUN_147733c48(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147733d30(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147733d30 FUN_147733d30 body=212 status=ok
// SIG undefined FUN_147733d30(void)

void FUN_147733d30(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x188);
  if (iVar1 <= param_2) {
    do {
      *(uint *)(param_1 + 0x188) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x18c) < iVar1 + 1U) {
        FUN_14475e4ac(param_1 + 0x180,iVar1);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar1 * 4) = 0;
      iVar1 = *(int *)(param_1 + 0x188);
    } while (iVar1 <= param_2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x180) + (longlong)param_2 * 4) = param_3;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    local_54 = 1;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = param_3;
    FUN_146a8fc4c(*(longlong *)(param_1 + 0x1a0),param_2,&local_58);
    FUN_1449db362(&local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147733e06 FUN_147733e06 body=230 status=ok
// SIG undefined FUN_147733e06(void)

void FUN_147733e06(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147733eee(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147733eee FUN_147733eee body=212 status=ok
// SIG undefined FUN_147733eee(void)

void FUN_147733eee(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x198);
  if (iVar1 <= param_2) {
    do {
      *(uint *)(param_1 + 0x198) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x19c) < iVar1 + 1U) {
        FUN_14475e4ac(param_1 + 400,iVar1);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 400) + (longlong)iVar1 * 4) = 0;
      iVar1 = *(int *)(param_1 + 0x198);
    } while (iVar1 <= param_2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 400) + (longlong)param_2 * 4) = param_3;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    local_54 = 1;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = param_3;
    FUN_146a8fd10(*(longlong *)(param_1 + 0x1a0),param_2,&local_58);
    FUN_1449db362(&local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147733fc6 FUN_147733fc6 body=155 status=ok
// SIG undefined FUN_147733fc6(void)

void FUN_147733fc6(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1a8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014773405d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147734068 FUN_147734068 body=102 status=ok
// SIG undefined FUN_147734068(void)

void FUN_147734068(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x1a8);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_1477340d0(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477340d0 FUN_1477340d0 body=422 status=ok
// SIG undefined FUN_1477340d0(void)

void FUN_1477340d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 local_168;
  longlong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_129;
  code *local_128;
  undefined1 *local_120;
  undefined8 local_118 [3];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  undefined1 local_e8 [16];
  uint local_d8;
  undefined1 local_d4;
  uint local_d0;
  undefined1 local_cc;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_178 = *(undefined4 *)(param_1 + 0x5c);
  FUN_146a8e698(*param_2,local_118,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x4c));
  *(undefined8 *)(param_1 + 0x70) = local_118[0];
  local_158 = *(undefined4 *)(param_1 + 0x38);
  uStack_154 = *(undefined4 *)(param_1 + 0x3c);
  uStack_150 = *(undefined4 *)(param_1 + 0x40);
  uStack_14c = *(undefined4 *)(param_1 + 0x44);
  local_148 = 1;
  local_140 = 0;
  uStack_138 = 0;
  local_f0 = 1;
  local_100 = local_158;
  uStack_fc = uStack_154;
  uStack_f8 = uStack_150;
  uStack_f4 = uStack_14c;
  FUN_144a450dc(local_e8,&local_140);
  FUN_1449db362(&local_140);
  local_d8 = (uint)*(byte *)(param_1 + 0x48);
  local_d4 = 1;
  local_d0 = (uint)*(byte *)(param_1 + 0x49);
  local_cc = 1;
  local_b0 = *(undefined4 *)(param_1 + 0x50);
  local_ac = 1;
  local_c0 = *(undefined4 *)(param_1 + 0x58);
  local_bc = 1;
  local_a0 = *(undefined4 *)(param_1 + 0x60);
  uStack_9c = *(undefined4 *)(param_1 + 100);
  uStack_98 = *(undefined4 *)(param_1 + 0x68);
  uStack_94 = *(undefined4 *)(param_1 + 0x6c);
  local_90 = 1;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_168 = DAT_14c98dec8;
    local_160 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_120 = &local_129;
    local_128 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_168);
  }
  FUN_146b05d76(local_118,&local_168);
  plVar3 = local_160;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_160 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_147734fc6(local_118);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734278 FUN_147734278 body=222 status=ok
// SIG undefined FUN_147734278(void)

void FUN_147734278(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x1a0) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x1a0);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_146a8ea08(uVar4,&local_38);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734358 FUN_147734358 body=674 status=ok
// SIG undefined FUN_147734358(void)

undefined8 * FUN_147734358(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_288 [32];
  undefined1 *local_268;
  undefined8 local_260;
  longlong local_258;
  undefined1 local_249;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined8 local_230;
  longlong *local_228;
  undefined1 local_220 [472];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_146b05cee(local_220);
  local_268 = &local_249;
  FUN_146b075e0(local_248,"SGridPanel",".\\Runtime/UMG/Private/Components/GridPanel.cpp",0x3b);
  FUN_146b05e52(local_248,&local_230,local_220);
  plVar6 = local_228;
  if (local_228 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1a0) = local_230;
    plVar9 = *(longlong **)(param_1 + 0x1a8);
    if (plVar9 == (longlong *)0x0) goto LAB_147734403;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
LAB_1477345c2:
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_147734403;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_228 + 1) = (int)local_228[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1a0) = local_230;
    plVar9 = *(longlong **)(param_1 + 0x1a8);
    if (local_228 != plVar9) {
      *(longlong **)(param_1 + 0x1a8) = local_228;
      if (plVar9 == (longlong *)0x0) goto LAB_147734403;
      goto LAB_1477345c2;
    }
    LOCK();
    plVar9 = local_228 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147734403;
    (**(code **)*local_228)(local_228);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar6;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_147734403:
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_228 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar1 = (int *)((longlong)local_228 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_228 + 0x10))(local_228);
      }
    }
  }
  if (local_240 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_240 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar1 = (int *)((longlong)local_240 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_240 + 0x10))(local_240);
      }
    }
  }
  FUN_146b065da(local_220);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if (lVar4 != 0) {
        lVar7 = FUN_145920d02();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_260 = *(undefined8 *)(param_1 + 0x1a0);
          local_258 = *(longlong *)(param_1 + 0x1a8);
          if (local_258 != 0) {
            LOCK();
            *(int *)(local_258 + 8) = *(int *)(local_258 + 8) + 1;
            UNLOCK();
          }
          FUN_1477340d0(lVar4,&local_260);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1a0);
  plVar6 = *(longlong **)(param_1 + 0x1a8);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477345fc FUN_1477345fc body=270 status=ok
// SIG undefined FUN_1477345fc(void)

void FUN_1477345fc(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_146a8fdd4();
    if (0 < *(int *)(param_1 + 0x188)) {
      uVar1 = 0;
      do {
        local_58 = *(undefined4 *)(*(longlong *)(param_1 + 0x180) + uVar1 * 4);
        local_54 = 1;
        local_50 = 0;
        uStack_48 = 0;
        FUN_146a8fc4c(*(undefined8 *)(param_1 + 0x1a0),uVar1 & 0xffffffff,&local_58);
        FUN_1449db362(&local_50);
        uVar1 = uVar1 + 1;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x188));
    }
    if (0 < *(int *)(param_1 + 0x198)) {
      uVar1 = 0;
      do {
        local_58 = *(undefined4 *)(*(longlong *)(param_1 + 400) + uVar1 * 4);
        local_54 = 1;
        local_50 = 0;
        uStack_48 = 0;
        FUN_146a8fd10(*(undefined8 *)(param_1 + 0x1a0),uVar1 & 0xffffffff,&local_58);
        FUN_1449db362(&local_50);
        uVar1 = uVar1 + 1;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x198));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773470c FUN_14773470c body=165 status=ok
// SIG undefined FUN_14773470c(void)

void FUN_14773470c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x54) = local_1c;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1477351d6();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477347b2 FUN_1477347b2 body=165 status=ok
// SIG undefined FUN_1477347b2(void)

void FUN_1477347b2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x58) = local_1c;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14773525e();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734858 FUN_147734858 body=171 status=ok
// SIG undefined FUN_147734858(void)

void FUN_147734858(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x48) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x38) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x38) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734904 FUN_147734904 body=165 status=ok
// SIG undefined FUN_147734904(void)

void FUN_147734904(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x5c) = local_1c;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1477352f6();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477349aa FUN_1477349aa body=168 status=ok
// SIG undefined FUN_1477349aa(void)

void FUN_1477349aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x60) = local_28;
  *(undefined4 *)(param_1 + 100) = uStack_24;
  *(undefined4 *)(param_1 + 0x68) = uStack_20;
  *(undefined4 *)(param_1 + 0x6c) = uStack_1c;
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x68) = local_28;
    *(undefined4 *)(lVar1 + 0x6c) = uStack_24;
    *(undefined4 *)(lVar1 + 0x70) = uStack_20;
    *(undefined4 *)(lVar1 + 0x74) = uStack_1c;
    FUN_14156c56c(lVar1,2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734a54 FUN_147734a54 body=163 status=ok
// SIG undefined FUN_147734a54(void)

void FUN_147734a54(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_147734af8(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734af8 FUN_147734af8 body=117 status=ok
// SIG undefined FUN_147734af8(void)

void FUN_147734af8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a55872(lVar1 + 0x28,lVar1 + 0x20,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734b6e FUN_147734b6e body=165 status=ok
// SIG undefined FUN_147734b6e(void)

void FUN_147734b6e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x4c) = local_1c;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1477350b6();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734c14 FUN_147734c14 body=165 status=ok
// SIG undefined FUN_147734c14(void)

void FUN_147734c14(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x50) = local_1c;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14773513e();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734cba FUN_147734cba body=171 status=ok
// SIG undefined FUN_147734cba(void)

void FUN_147734cba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x49) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x3c) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x3c) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734d66 FUN_147734d66 body=78 status=ok
// SIG undefined FUN_147734d66(void)

void FUN_147734d66(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 == 0) {
    local_18 = *(undefined4 *)(param_1 + 0x38);
    uStack_14 = *(undefined4 *)(param_1 + 0x3c);
    uStack_10 = *(undefined4 *)(param_1 + 0x40);
    uStack_c = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    local_18 = *(undefined4 *)(lVar1 + 0x28);
    uStack_14 = *(undefined4 *)(lVar1 + 0x2c);
    uStack_10 = *(undefined4 *)(lVar1 + 0x30);
    uStack_c = *(undefined4 *)(lVar1 + 0x34);
  }
  *param_2 = local_18;
  param_2[1] = uStack_14;
  param_2[2] = uStack_10;
  param_2[3] = uStack_c;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734db6 FUN_147734db6 body=62 status=ok
// SIG undefined FUN_147734db6(void)

void FUN_147734db6(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_147734af8();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734f54 FUN_147734f54 body=94 status=ok
// SIG undefined FUN_147734f54(void)

void FUN_147734f54(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    *(undefined4 *)(lVar1 + 0x68) = (undefined4)local_28;
    *(undefined4 *)(lVar1 + 0x6c) = local_28._4_4_;
    *(undefined4 *)(lVar1 + 0x70) = (undefined4)uStack_20;
    *(undefined4 *)(lVar1 + 0x74) = uStack_20._4_4_;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147734fc6 FUN_147734fc6 body=238 status=ok
// SIG undefined FUN_147734fc6(void)

void FUN_147734fc6(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[0x13] == -1) {
      uVar3 = FUN_146a8ec66();
      *(undefined4 *)(param_1 + 0x13) = uVar3;
    }
    else {
      FUN_146a8ecc0(param_1[0x12],param_1);
    }
    pcVar2 = (code *)param_1[0x14];
    if (pcVar2 != (code *)0x0) {
      local_34 = (undefined4)param_1[0x13];
      plVar5 = param_1 + 0x18;
      if ((longlong *)param_1[0x16] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x16];
      }
      local_40 = lVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_40,&local_34);
    }
  }
  if (param_1[0x14] != 0) {
    plVar5 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_146b06566(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477350b6 FUN_1477350b6 body=136 status=ok
// SIG undefined FUN_1477350b6(void)

void FUN_1477350b6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (0 < param_2) {
    iVar5 = param_2;
  }
  if ((((iVar5 != *(int *)(param_1 + 0x58)) &&
       (*(int *)(param_1 + 0x58) = iVar5, *(longlong *)(param_1 + 0x40) != 0)) &&
      (plVar3 = *(longlong **)(param_1 + 0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_1429027b0(0,param_1,0);
        return;
      }
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
    FUN_1429027b0(*(undefined8 *)(param_1 + 0x40),param_1,0);
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
                    /* WARNING: Could not recover jumptable at 0x000147735128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14773513e FUN_14773513e body=152 status=ok
// SIG undefined FUN_14773513e(void)

void FUN_14773513e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 10000;
  if (param_2 < 10000) {
    iVar5 = param_2;
  }
  iVar4 = 1;
  if (1 < iVar5) {
    iVar4 = iVar5;
  }
  if ((((iVar4 != *(int *)(param_1 + 0x5c)) &&
       (*(int *)(param_1 + 0x5c) = iVar4, *(longlong *)(param_1 + 0x40) != 0)) &&
      (plVar3 = *(longlong **)(param_1 + 0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_1429027b0(0,param_1,0);
        return;
      }
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
    FUN_1429027b0(*(undefined8 *)(param_1 + 0x40),param_1,0);
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
                    /* WARNING: Could not recover jumptable at 0x0001477351c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477351d6 FUN_1477351d6 body=136 status=ok
// SIG undefined FUN_1477351d6(void)

void FUN_1477351d6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (0 < param_2) {
    iVar5 = param_2;
  }
  if ((((iVar5 != *(int *)(param_1 + 0x50)) &&
       (*(int *)(param_1 + 0x50) = iVar5, *(longlong *)(param_1 + 0x40) != 0)) &&
      (plVar3 = *(longlong **)(param_1 + 0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_1429027b0(0,param_1,0);
        return;
      }
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
    FUN_1429027b0(*(undefined8 *)(param_1 + 0x40),param_1,0);
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
                    /* WARNING: Could not recover jumptable at 0x000147735248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14773525e FUN_14773525e body=152 status=ok
// SIG undefined FUN_14773525e(void)

void FUN_14773525e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 10000;
  if (param_2 < 10000) {
    iVar5 = param_2;
  }
  iVar4 = 1;
  if (1 < iVar5) {
    iVar4 = iVar5;
  }
  if ((((iVar4 != *(int *)(param_1 + 0x54)) &&
       (*(int *)(param_1 + 0x54) = iVar4, *(longlong *)(param_1 + 0x40) != 0)) &&
      (plVar3 = *(longlong **)(param_1 + 0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_1429027b0(0,param_1,0);
        return;
      }
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
    FUN_1429027b0(*(undefined8 *)(param_1 + 0x40),param_1,0);
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
                    /* WARNING: Could not recover jumptable at 0x0001477352e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477352f6 FUN_1477352f6 body=129 status=ok
// SIG undefined FUN_1477352f6(void)

void FUN_1477352f6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((((*(int *)(param_1 + 0x60) != param_2) &&
       (*(int *)(param_1 + 0x60) = param_2, *(longlong *)(param_1 + 0x40) != 0)) &&
      (plVar3 = *(longlong **)(param_1 + 0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_1429027b0(0,param_1,1);
        return;
      }
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
    FUN_1429027b0(*(undefined8 *)(param_1 + 0x40),param_1,1);
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
                    /* WARNING: Could not recover jumptable at 0x000147735361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147735378 FUN_147735378 body=260 status=ok
// SIG undefined FUN_147735378(void)

void FUN_147735378(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x38) != (uint)*(byte *)(param_1 + 0x48)) {
      *(uint *)(lVar4 + 0x38) = (uint)*(byte *)(param_1 + 0x48);
      FUN_14156c56c(lVar4,1);
      lVar4 = *(longlong *)(param_1 + 0x70);
      if (lVar4 == 0) goto LAB_147735399;
    }
    if (*(uint *)(lVar4 + 0x3c) != (uint)*(byte *)(param_1 + 0x49)) {
      *(uint *)(lVar4 + 0x3c) = (uint)*(byte *)(param_1 + 0x49);
      FUN_14156c56c(lVar4,1);
    }
  }
LAB_147735399:
  local_28 = *(undefined4 *)(param_1 + 0x38);
  uStack_24 = *(undefined4 *)(param_1 + 0x3c);
  uStack_20 = *(undefined4 *)(param_1 + 0x40);
  uStack_1c = *(undefined4 *)(param_1 + 0x44);
  FUN_147734af8(param_1);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1477350b6(*(longlong *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x4c));
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_14773513e(*(longlong *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x50));
      if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_1477351d6(*(longlong *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x54));
        if (*(longlong *)(param_1 + 0x70) != 0) {
          FUN_14773525e(*(longlong *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x58));
          lVar4 = *(longlong *)(param_1 + 0x70);
          if (lVar4 != 0) {
            uVar1 = *(undefined4 *)(param_1 + 100);
            uVar2 = *(undefined4 *)(param_1 + 0x68);
            uVar3 = *(undefined4 *)(param_1 + 0x6c);
            *(undefined4 *)(lVar4 + 0x68) = *(undefined4 *)(param_1 + 0x60);
            *(undefined4 *)(lVar4 + 0x6c) = uVar1;
            *(undefined4 *)(lVar4 + 0x70) = uVar2;
            *(undefined4 *)(lVar4 + 0x74) = uVar3;
            FUN_14156c56c(lVar4,2);
            if (*(longlong *)(param_1 + 0x70) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
            }
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773548e FUN_14773548e body=164 status=ok
// SIG undefined FUN_14773548e(void)

void FUN_14773548e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147735534(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147735534 FUN_147735534 body=66 status=ok
// SIG undefined FUN_147735534(void)

longlong FUN_147735534(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147743a5a(param_1,param_2,0);
  if (lVar1 != 0) {
    lVar2 = FUN_145920dec();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147735584 FUN_147735584 body=102 status=ok
// SIG undefined FUN_147735584(void)

void FUN_147735584(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x188);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_1477355ec(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477355ec FUN_1477355ec body=543 status=ok
// SIG undefined FUN_1477355ec(void)

void FUN_1477355ec(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined4 local_1d0 [2];
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_161;
  code *local_160;
  undefined1 *local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_110 [8];
  undefined8 local_108 [3];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0;
  undefined1 local_d8 [16];
  uint local_c8;
  undefined1 local_c4;
  uint local_c0;
  undefined1 local_bc;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_146a24608(*param_2,local_110,0xffffffff);
  *(undefined8 *)(param_1 + 0x38) = local_108[0];
  local_c8 = (uint)*(byte *)(param_1 + 0x58);
  local_c4 = 1;
  local_c0 = (uint)*(byte *)(param_1 + 0x59);
  local_bc = 1;
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  local_188 = 1;
  local_180 = 0;
  uStack_178 = 0;
  local_e0 = 1;
  local_198._0_4_ = (undefined4)uVar5;
  local_198._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_190._0_4_ = (undefined4)uVar4;
  uStack_190._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_f0 = (undefined4)local_198;
  uStack_ec = local_198._4_4_;
  uStack_e8 = (undefined4)uStack_190;
  uStack_e4 = uStack_190._4_4_;
  local_198 = uVar5;
  uStack_190 = uVar4;
  FUN_144a450dc(local_d8,&local_180);
  FUN_1449db362(&local_180);
  FUN_14772ea74(local_1d0,param_1 + 0x40);
  local_150 = local_1d0[0];
  local_148 = local_1c8;
  local_144 = local_1c4;
  local_140 = local_1c0;
  local_1c0 = 0;
  local_138 = local_1b8;
  local_1b8 = 0;
  local_130 = local_1b0;
  local_12c = local_1ac;
  local_128 = local_1a8;
  local_1a8 = 0;
  local_120 = local_1a0;
  local_1a0 = 0;
  local_118 = 1;
  uVar5 = FUN_146a1ba66(local_108);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_1e0 = DAT_14c98dec8;
    local_1d8 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_158 = &local_161;
    local_160 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_1e0);
  }
  FUN_140a4fe8e(uVar5,&local_1e0);
  plVar3 = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1449db362(&local_1a8);
  FUN_1449db362(&local_1c0);
  FUN_146a071ac(local_110);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773580c FUN_14773580c body=222 status=ok
// SIG undefined FUN_14773580c(void)

void FUN_14773580c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x180);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_1469779b4(uVar4,&local_38);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477358ec FUN_1477358ec body=637 status=ok
// SIG undefined FUN_1477358ec(void)

undefined8 * FUN_1477358ec(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined1 local_229;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined8 local_210;
  longlong *local_208;
  undefined1 local_200 [440];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_140a5296a(local_200);
  local_248 = &local_229;
  FUN_140a541dc(local_228,"SHorizontalBox",".\\Runtime/UMG/Private/Components/HorizontalBox.cpp",
                0x3d);
  FUN_140a50ec6(local_228,&local_210,local_200);
  plVar6 = local_208;
  if (local_208 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = local_210;
    plVar8 = *(longlong **)(param_1 + 0x188);
    if (plVar8 == (longlong *)0x0) goto LAB_147735a00;
    *(undefined8 *)(param_1 + 0x188) = 0;
LAB_1477359c8:
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_147735a00;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar8;
  }
  else {
    LOCK();
    *(int *)(local_208 + 1) = (int)local_208[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x180) = local_210;
    plVar8 = *(longlong **)(param_1 + 0x188);
    if (local_208 != plVar8) {
      *(longlong **)(param_1 + 0x188) = local_208;
      if (plVar8 == (longlong *)0x0) goto LAB_147735a00;
      goto LAB_1477359c8;
    }
    LOCK();
    plVar8 = local_208 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_147735a00;
    (**(code **)*local_208)(local_208);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_147735a00:
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_208 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)local_208 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_208 + 0x10))(local_208);
      }
    }
  }
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_220 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  FUN_145ab33da(local_200);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if (lVar4 != 0) {
        lVar7 = FUN_145920dec();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_240 = *(undefined8 *)(param_1 + 0x180);
          local_238 = *(longlong *)(param_1 + 0x188);
          if (local_238 != 0) {
            LOCK();
            *(int *)(local_238 + 8) = *(int *)(local_238 + 8) + 1;
            UNLOCK();
          }
          FUN_1477355ec(lVar4,&local_240);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  plVar6 = *(longlong **)(param_1 + 0x188);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147735b6a FUN_147735b6a body=171 status=ok
// SIG undefined FUN_147735b6a(void)

void FUN_147735b6a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x58) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x38) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x38) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147735c16 FUN_147735c16 body=163 status=ok
// SIG undefined FUN_147735c16(void)

void FUN_147735c16(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_147735cba(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147735cba FUN_147735cba body=117 status=ok
// SIG undefined FUN_147735cba(void)

void FUN_147735cba(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a55872(lVar1 + 0x28,lVar1 + 0x20,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147735d30 FUN_147735d30 body=160 status=ok
// SIG undefined FUN_147735d30(void)

void FUN_147735d30(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0x3f800000;
  uStack_1c = CONCAT31(uStack_1c._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147735dd2(param_1,CONCAT44(uStack_1c,local_20));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147735dd2 FUN_147735dd2 body=99 status=ok
// SIG undefined FUN_147735dd2(void)

void FUN_147735dd2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [56];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x38);
  local_20 = param_2;
  if (lVar1 != 0) {
    FUN_14772ea74(local_58,&local_20);
    FUN_146a74ad8(lVar1,local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147735e36 FUN_147735e36 body=171 status=ok
// SIG undefined FUN_147735e36(void)

void FUN_147735e36(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x59) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x3c) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x3c) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147735eea FUN_147735eea body=62 status=ok
// SIG undefined FUN_147735eea(void)

void FUN_147735eea(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_147735cba();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147735f6c FUN_147735f6c body=147 status=ok
// SIG undefined FUN_147735f6c(void)

void FUN_147735f6c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x48);
  uStack_24 = *(undefined4 *)(param_1 + 0x4c);
  uStack_20 = *(undefined4 *)(param_1 + 0x50);
  uStack_1c = *(undefined4 *)(param_1 + 0x54);
  FUN_147735cba();
  FUN_147735dd2(param_1,*(undefined8 *)(param_1 + 0x40));
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x38) != (uint)*(byte *)(param_1 + 0x58)) {
      *(uint *)(lVar1 + 0x38) = (uint)*(byte *)(param_1 + 0x58);
      FUN_14156c56c(lVar1,1);
      lVar1 = *(longlong *)(param_1 + 0x38);
      if (lVar1 == 0) goto LAB_147735fd2;
    }
    if (*(uint *)(lVar1 + 0x3c) != (uint)*(byte *)(param_1 + 0x59)) {
      *(uint *)(lVar1 + 0x3c) = (uint)*(byte *)(param_1 + 0x59);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
LAB_147735fd2:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736010 FUN_147736010 body=38 status=ok
// SIG undefined FUN_147736010(void)

void FUN_147736010(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147736036();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147736036 FUN_147736036 body=144 status=ok
// SIG undefined FUN_147736036(void)

longlong FUN_147736036(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  if (lVar2 != 0) {
    lVar1 = FUN_1402d2740();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar1 = FUN_144a772c4();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
        return lVar2;
      }
      lVar2 = FUN_14090ceee(lVar2,param_1,0);
      FUN_147736a30(param_1,lVar2);
      if (*(longlong *)(param_1 + 0x268) == 0) {
        return lVar2;
      }
      thunk_FUN_140163244();
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1477360c6 FUN_1477360c6 body=393 status=ok
// SIG undefined FUN_1477360c6(void)

void FUN_1477360c6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x300))(param_1,pppuVar4);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736250 FUN_147736250 body=160 status=ok
// SIG undefined FUN_147736250(void)

void FUN_147736250(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x308))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477362f8 FUN_1477362f8 body=304 status=ok
// SIG undefined FUN_1477362f8(void)

void FUN_1477362f8(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  int local_3c;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = uStack_30;
  (**(code **)(*param_1 + 0x318))(param_1,&local_50,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773642a FUN_14773642a body=160 status=ok
// SIG undefined FUN_14773642a(void)

void FUN_14773642a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x328))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477364cc FUN_1477364cc body=310 status=ok
// SIG undefined FUN_1477364cc(void)

void FUN_1477364cc(longlong *param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  _Src = pvStack_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58;
  local_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  uStack_70 = (undefined4)local_48;
  uStack_6c = local_48._4_4_;
  local_68 = (void *)0x0;
  lVar1 = (longlong)(int)local_38;
  local_60 = (int)local_38;
  if (lVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_38 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar1 * 2);
  }
  (**(code **)(*param_1 + 0x338))(param_1,&local_80);
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773660a FUN_14773660a body=399 status=ok
// SIG undefined FUN_14773660a(void)

void FUN_14773660a(longlong *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  _Src = pvStack_40;
  iVar1 = local_5c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_58;
  local_80 = (undefined4)uStack_50;
  uStack_7c = uStack_50._4_4_;
  uStack_78 = (undefined4)local_48;
  uStack_74 = local_48._4_4_;
  local_70 = (void *)0x0;
  lVar2 = (longlong)(int)local_38;
  local_68 = (int)local_38;
  if (lVar2 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_38 & 0xffffffff,0);
    memcpy(local_70,_Src,lVar2 * 2);
  }
  (**(code **)(*param_1 + 0x330))(param_1,&local_88,iVar1 != 0);
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477367a0 FUN_1477367a0 body=245 status=ok
// SIG undefined FUN_1477367a0(void)

void FUN_1477367a0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x310))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773689c FUN_14773689c body=245 status=ok
// SIG undefined FUN_14773689c(void)

void FUN_14773689c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 800))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736992 FUN_147736992 body=156 status=ok
// SIG undefined FUN_147736992(void)

void FUN_147736992(undefined8 param_1,longlong param_2)

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
  FUN_147736a30(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736a30 FUN_147736a30 body=130 status=ok
// SIG undefined FUN_147736a30(void)

void FUN_147736a30(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x1a8) != param_2) {
    FUN_140648376(param_1 + 0x170);
    local_18 = DAT_14cab7bc8;
    local_20 = DAT_14cab7bc0;
    FUN_140e2f5f4(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x268) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736ac0 FUN_147736ac0 body=179 status=ok
// SIG undefined FUN_147736ac0(void)

void FUN_147736ac0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  local_1c = local_1c & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_1c;
  local_48 = local_2c;
  uStack_44 = uStack_28;
  uStack_40 = uStack_24;
  uStack_3c = uStack_20;
  FUN_147736b74(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736b74 FUN_147736b74 body=147 status=ok
// SIG undefined FUN_147736b74(void)

void FUN_147736b74(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_140a5ca7a((undefined4 *)(param_1 + 0x178));
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x188) = param_2[4];
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x178) = *param_2;
    *(undefined4 *)(param_1 + 0x17c) = uVar1;
    *(undefined4 *)(param_1 + 0x180) = uVar2;
    *(undefined4 *)(param_1 + 0x184) = uVar3;
    local_28 = DAT_14cab7bc8;
    local_30 = DAT_14cab7bc0;
    FUN_140e2f5f4(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x268) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736c18 FUN_147736c18 body=176 status=ok
// SIG undefined FUN_147736c18(void)

void FUN_147736c18(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x230) = local_38;
  *(undefined4 *)(param_1 + 0x234) = uStack_34;
  *(undefined4 *)(param_1 + 0x238) = uStack_30;
  *(undefined4 *)(param_1 + 0x23c) = uStack_2c;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    local_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    FUN_146977664();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736cca FUN_147736cca body=179 status=ok
// SIG undefined FUN_147736cca(void)

void FUN_147736cca(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x268) != 0) {
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_38 = 1;
    local_30 = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_14605eab4();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736d7e FUN_147736d7e body=188 status=ok
// SIG undefined FUN_147736d7e(void)

void FUN_147736d7e(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x23c) = local_2c;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x230);
    uStack_24 = *(undefined4 *)(param_1 + 0x234);
    uStack_20 = *(undefined4 *)(param_1 + 0x238);
    uStack_1c = *(undefined4 *)(param_1 + 0x23c);
    FUN_146977664();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736e3c FUN_147736e3c body=316 status=ok
// SIG undefined FUN_147736e3c(void)

void FUN_147736e3c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = &PTR_FUN_149ed05f0;
  local_e0 = *(undefined4 *)(param_1 + 0x178);
  uStack_dc = *(undefined4 *)(param_1 + 0x17c);
  uStack_d8 = *(undefined4 *)(param_1 + 0x180);
  uStack_d4 = *(undefined4 *)(param_1 + 0x184);
  local_d0 = *(undefined4 *)(param_1 + 0x188);
  uStack_cc = *(undefined4 *)(param_1 + 0x18c);
  uStack_c8 = *(undefined4 *)(param_1 + 400);
  uStack_c4 = *(undefined4 *)(param_1 + 0x194);
  local_c0 = *(undefined4 *)(param_1 + 0x198);
  uStack_bc = *(undefined4 *)(param_1 + 0x19c);
  uStack_b8 = *(undefined4 *)(param_1 + 0x1a0);
  uStack_b4 = *(undefined4 *)(param_1 + 0x1a4);
  local_b0 = *(longlong *)(param_1 + 0x1a8);
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = (undefined8 *)(param_1 + 0x1b0);
  puVar6 = local_a8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_54 = *(undefined1 *)(param_1 + 0x204);
  local_58 = *(undefined4 *)(param_1 + 0x200);
  local_50 = *(undefined8 *)(param_1 + 0x208);
  local_48 = *(longlong **)(param_1 + 0x210);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_40 = *(undefined8 *)(param_1 + 0x218);
  FUN_140f13d9e(param_2,&local_e8);
  plVar3 = local_48;
  local_e8 = &PTR_FUN_149ed05f0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147736f7a FUN_147736f7a body=8 status=ok
// SIG undefined FUN_147736f7a(void)

longlong FUN_147736f7a(longlong param_1)

{
  return param_1 + 0x170;
}



// FUNCTION 147736f9c FUN_147736f9c body=94 status=ok
// SIG undefined FUN_147736f9c(void)

void FUN_147736f9c(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x230) = *param_2;
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  *(undefined4 *)(param_1 + 0x23c) = uVar3;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x230);
    uStack_14 = *(undefined4 *)(param_1 + 0x234);
    uStack_10 = *(undefined4 *)(param_1 + 0x238);
    uStack_c = *(undefined4 *)(param_1 + 0x23c);
    FUN_146977664(*(longlong *)(param_1 + 0x268));
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147737032 FUN_147737032 body=480 status=ok
// SIG undefined FUN_147737032(void)

undefined8 * FUN_147737032(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  undefined1 local_291;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined8 local_278;
  longlong *local_270;
  undefined1 local_268 [544];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_140a53334(local_268);
  local_48 = *(undefined1 *)(param_1 + 0x250);
  local_2a8 = &local_291;
  FUN_140a554b8(local_290,"SImage",".\\Runtime/UMG/Private/Components/Image.cpp",0x29);
  FUN_140a52c70(local_290,&local_278,local_268);
  plVar4 = local_270;
  if (local_270 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x268) = local_278;
    plVar5 = *(longlong **)(param_1 + 0x270);
    if (plVar5 == (longlong *)0x0) goto LAB_14773714b;
    *(undefined8 *)(param_1 + 0x270) = 0;
LAB_147737113:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14773714b;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_270 + 1) = (int)local_270[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x268) = local_278;
    plVar5 = *(longlong **)(param_1 + 0x270);
    if (local_270 != plVar5) {
      *(longlong **)(param_1 + 0x270) = local_270;
      if (plVar5 == (longlong *)0x0) goto LAB_14773714b;
      goto LAB_147737113;
    }
    LOCK();
    plVar5 = local_270 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14773714b;
    (**(code **)*local_270)(local_270);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14773714b:
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_270 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar1 = (int *)((longlong)local_270 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_270 + 0x10))(local_270);
      }
    }
  }
  if (local_288 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_288 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_288)(local_288);
      LOCK();
      piVar1 = (int *)((longlong)local_288 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_288 + 0x10))(local_288);
      }
    }
  }
  FUN_140a55a86(local_268);
  uVar3 = *(undefined8 *)(param_1 + 0x268);
  plVar4 = *(longlong **)(param_1 + 0x270);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147737214 FUN_147737214 body=1291 status=ok
// SIG undefined FUN_147737214(void)

void FUN_147737214(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2d8 [32];
  undefined8 *local_2b8;
  undefined4 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined5 uStack_298;
  undefined8 local_290;
  undefined4 local_288;
  code *local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  code *local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  uint uStack_218;
  undefined1 uStack_214;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined **local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  longlong local_1c0;
  undefined8 local_1b8 [10];
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined **local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  byte local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_1412719b8();
  cVar1 = FUN_14113f0c0(param_1 + 0x240);
  if (cVar1 == '\0') {
    local_228 = *(undefined8 *)(param_1 + 0x230);
    uStack_220 = (undefined4)*(undefined8 *)(param_1 + 0x238);
    uStack_21c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x238) >> 0x20);
    uStack_218 = uStack_218 & 0xffffff00;
    uStack_214 = 1;
    local_210 = 0;
    uStack_208 = 0;
  }
  else {
    local_128 = *(undefined ***)(param_1 + 0x248);
    uVar2 = FUN_14479d2ce(param_1 + 0x240);
    local_228 = 0x3f800000;
    uStack_220 = 0x3f800000;
    uStack_21c = 0x3f800000;
    uStack_218 = uStack_218 & 0xffffff00;
    local_210 = 0;
    uStack_208 = 0;
    uStack_214 = 1;
    FUN_1446efa72(&local_210,0,3,0x10);
    uStack_208 = CONCAT44(uStack_208._4_4_,3);
    FUN_1477688f4(local_210,uVar2,&local_128);
  }
  cVar1 = FUN_14113f0c0(param_1 + 0x220);
  if (cVar1 == '\0') {
    local_1f8 = &PTR_FUN_149ed05f0;
    local_1f0 = *(undefined4 *)(param_1 + 0x178);
    uStack_1ec = *(undefined4 *)(param_1 + 0x17c);
    uStack_1e8 = *(undefined4 *)(param_1 + 0x180);
    uStack_1e4 = *(undefined4 *)(param_1 + 0x184);
    local_1e0 = *(undefined4 *)(param_1 + 0x188);
    uStack_1dc = *(undefined4 *)(param_1 + 0x18c);
    uStack_1d8 = *(undefined4 *)(param_1 + 400);
    uStack_1d4 = *(undefined4 *)(param_1 + 0x194);
    local_1d0 = *(undefined4 *)(param_1 + 0x198);
    uStack_1cc = *(undefined4 *)(param_1 + 0x19c);
    uStack_1c8 = *(undefined4 *)(param_1 + 0x1a0);
    uStack_1c4 = *(undefined4 *)(param_1 + 0x1a4);
    local_1c0 = *(longlong *)(param_1 + 0x1a8);
    if ((local_1c0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar5 = (undefined8 *)(param_1 + 0x1b0);
    puVar6 = local_1b8;
    for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_164 = *(undefined1 *)(param_1 + 0x204);
    local_168 = *(undefined4 *)(param_1 + 0x200);
    local_160 = *(undefined8 *)(param_1 + 0x208);
    local_158 = *(longlong *)(param_1 + 0x210);
    if (local_158 != 0) {
      LOCK();
      *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
      UNLOCK();
    }
    local_150 = *(undefined8 *)(param_1 + 0x218);
    local_148 = 1;
    local_140 = 0;
    uStack_138 = 0;
    uVar2 = FUN_1476d2f2e(&local_1f8);
    FUN_147737846(param_1,uVar2);
    FUN_1476d2a2e(&local_1f8);
    local_240 = CONCAT31(local_240._1_3_,1);
    local_238 = 0;
    uStack_230 = 0;
    local_248 = (code *)(param_1 + 0x170);
  }
  else {
    local_260 = *(undefined8 *)(param_1 + 0x228);
    uVar2 = FUN_14479d2ce(param_1 + 0x220);
    local_128 = &PTR_FUN_149ed05f0;
    local_120 = &DAT_3f8000003f800000;
    puStack_118 = &DAT_3f8000003f800000;
    local_110 = 0;
    local_10c = 3;
    local_108 = 0x4200000042000000;
    local_b4 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c0 = 0;
    uStack_bf = 0;
    local_b0 = 1;
    local_a0 = DAT_14c84635c;
    local_a8 = DAT_14c84635c;
    local_98 = 0;
    local_94 = local_94 & 0xf8 | 4;
    local_80 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 1;
    FUN_1446efa72(&local_70,0,3,0x10);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    FUN_14770396c(local_70,uVar2,&local_260);
    local_258 = 0;
    local_250 = 0;
    FUN_1446efa72(&local_258,0,0x10,0x10);
    local_250 = 0x10;
    local_248 = FUN_147737720;
    local_240 = 0;
    FUN_147768c8a(local_258,param_1,&local_248,&local_128);
    local_248 = (code *)0x0;
    local_240 = CONCAT31(local_240._1_3_,1);
    local_238 = 0;
    uStack_230 = (ulonglong)uStack_230._4_4_ << 0x20;
    FUN_140a5c3e8(&local_238,&local_258);
    FUN_1449db362(&local_258);
    FUN_1476d2a2e(&local_128);
  }
  lVar3 = *(longlong *)(param_1 + 0x268);
  if (lVar3 != 0) {
    local_278 = (undefined1)local_240;
    local_280 = local_248;
    local_270 = 0;
    local_268 = 0;
    FUN_140a5c3e8();
    FUN_145767ef4(lVar3,&local_280);
    thunk_FUN_140163244(*(undefined8 *)(param_1 + 0x268));
    uVar2 = *(undefined8 *)(param_1 + 0x268);
    uStack_298 = CONCAT14(uStack_214,uStack_218);
    local_2a8 = (undefined4)local_228;
    uStack_2a4 = local_228._4_4_;
    uStack_2a0 = uStack_220;
    uStack_29c = uStack_21c;
    local_290 = 0;
    local_288 = 0;
    FUN_140a5aaa0();
    FUN_146977638(uVar2,&local_2a8);
    uVar2 = *(undefined8 *)(param_1 + 0x268);
    local_2b8 = (undefined8 *)0x0;
    local_2b0 = 0;
    FUN_1446efa72(&local_2b8,0,3,0x10);
    puVar5 = local_2b8;
    local_2b0 = 3;
    *local_2b8 = &PTR_LAB_149f05a00;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_2b8[2] = lVar4;
    *local_2b8 = &PTR_FUN_14a540960;
    local_2b8[3] = 0;
    FUN_14485c47a(local_2b8 + 3,param_1);
    puVar5[4] = FUN_147737758;
    *(undefined4 *)(puVar5 + 5) = 0;
    FUN_1457670ac(uVar2,&local_2b8);
  }
  FUN_1449db362(&local_238);
  FUN_1449db362(&local_210);
  if ((local_50 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147737720 FUN_147737720 body=56 status=ok
// SIG undefined FUN_147737720(void)

longlong FUN_147737720(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1476d2f2e(param_2);
  FUN_147737846(param_1,uVar1);
  FUN_1476d2a2e(param_2);
  return param_1 + 0x170;
}



// FUNCTION 147737758 FUN_147737758 body=236 status=ok
// SIG undefined FUN_147737758(void)

undefined1 *
FUN_147737758(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_148 [40];
  undefined1 local_120 [184];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar1 = FUN_14113f0c0(param_1 + 0x254);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_3 + 0xc);
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = param_3[4];
    uStack_54 = param_3[5];
    uStack_50 = param_3[6];
    uStack_4c = param_3[7];
    local_48 = param_3[8];
    uStack_44 = param_3[9];
    uStack_40 = param_3[10];
    uStack_3c = param_3[0xb];
    FUN_14775a980(local_120,param_1 + 0x254,&local_68,param_4);
    FUN_1428fd920(param_2,local_120);
    FUN_14493db24(local_120);
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147737846 FUN_147737846 body=146 status=ok
// SIG undefined FUN_147737846(void)

void FUN_147737846(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1469688aa(param_1 + 0x170);
  if (cVar1 == '\0') {
    FUN_140f13d9e(param_1 + 0x170,param_2);
    local_30 = DAT_14cab7bc0;
    local_28 = DAT_14cab7bc8;
    FUN_140e2f5f4(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x268) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477378e8 FUN_1477378e8 body=339 status=ok
// SIG undefined FUN_1477378e8(void)

void FUN_1477378e8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x348))(param_1);
    local_d8 = &PTR_FUN_149ed05f0;
    local_d0 = &DAT_3f8000003f800000;
    puStack_c8 = &DAT_3f8000003f800000;
    local_c0 = 0;
    local_bc = 3;
    local_b8 = 0x4200000042000000;
    local_64 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    local_60 = 1;
    local_50 = DAT_14c84635c;
    local_58 = DAT_14c84635c;
    local_48 = 0;
    local_44 = 4;
    local_40 = 0;
    plStack_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_147737846(param_1,&local_d8);
    plVar3 = plStack_38;
    local_d8 = &PTR_FUN_149ed05f0;
    if (plStack_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_38)(plStack_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  else {
    cVar4 = FUN_1469688aa(param_1 + 0x2e,param_2 + 0x30);
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 0x348))(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_f8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147737b4c FUN_147737b4c body=304 status=ok
// SIG undefined FUN_147737b4c(void)

void FUN_147737b4c(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_98 [32];
  longlong *local_78 [3];
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[0x35] != *param_2) {
    (**(code **)(*param_1 + 0x348))();
    FUN_140648376(param_1 + 0x2e,*param_2);
    local_48 = DAT_14cab7bc8;
    local_50 = DAT_14cab7bc0;
    FUN_140e2f5f4(param_1 + 5);
    if (param_3 != '\0') {
      if ((*param_2 == 0) || (plVar1 = (longlong *)param_2[1], plVar1 == (longlong *)0x0)) {
        param_1[0x32] = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x10))(plVar1,local_78);
        if (local_78[0] == (longlong *)0x0) {
          fVar3 = 0.0;
          fVar2 = 0.0;
        }
        else {
          fVar2 = (float)(**(code **)(*local_78[0] + 0x358))();
          fVar3 = (float)(**(code **)(*local_78[0] + 0x350))();
          fVar3 = (float)((double)fVar3 * local_60);
          fVar2 = (float)((double)fVar2 * local_58);
        }
        *(float *)(param_1 + 0x32) = fVar3;
        *(float *)((longlong)param_1 + 0x194) = fVar2;
      }
    }
    if (param_1[0x4d] != 0) {
      thunk_FUN_140163244();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147737d64 FUN_147737d64 body=152 status=ok
// SIG undefined FUN_147737d64(void)

void FUN_147737d64(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x35] != param_2) {
    (**(code **)(*param_1 + 0x348))();
    FUN_140648376(param_1 + 0x2e,param_2);
    local_28 = DAT_14cab7bc8;
    local_30 = DAT_14cab7bc0;
    FUN_140e2f5f4(param_1 + 5);
    if (param_1[0x4d] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147737e0c FUN_147737e0c body=155 status=ok
// SIG undefined FUN_147737e0c(void)

void FUN_147737e0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_140886972();
    *(undefined8 *)(param_1 + 0x278) = 0;
    plVar3 = *(longlong **)(param_1 + 0x280);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x280) = 0;
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
  }
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (*(int *)(param_1 + 0x2a4) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x298),0);
  }
  puVar4 = *(undefined2 **)(param_1 + 0x298);
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = 0;
  }
  return;
}



// FUNCTION 147737ea8 FUN_147737ea8 body=203 status=ok
// SIG undefined FUN_147737ea8(void)

void FUN_147737ea8(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147737f74(local_40,param_3);
  local_68 = *param_2;
  local_60 = *(undefined4 *)(param_2 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_58 = *(undefined4 *)(param_2 + 2);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_2 + 4);
  lVar1 = (longlong)local_48;
  _Src = (void *)param_2[3];
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  (**(code **)(*param_1 + 0x340))(param_1,&local_68,local_40);
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147737f74 FUN_147737f74 body=183 status=ok
// SIG undefined FUN_147737f74(void)

longlong * FUN_147737f74(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149e020b0;
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
  puVar1[2] = lVar6;
  *puVar1 = &PTR_FUN_149e309d0;
  puVar1[4] = *param_2;
  puVar1[6] = param_2[2];
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[7];
  puVar1[10] = param_2[6];
  puVar1[0xb] = uVar4;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  if (puVar1[4] != 0) {
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 14773802c FUN_14773802c body=14 status=ok
// SIG undefined FUN_14773802c(void)

void FUN_14773802c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
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



// FUNCTION 14773803a FUN_14773803a body=14 status=ok
// SIG undefined FUN_14773803a(void)

void FUN_14773803a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
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



// FUNCTION 147738048 FUN_147738048 body=529 status=ok
// SIG undefined FUN_147738048(void)

void FUN_147738048(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  uint uVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  longlong local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_90 = 0;
  FUN_14485c47a(&local_90,param_1);
  local_c8 = local_90;
  local_c0 = *param_2;
  local_b8 = (undefined4)param_2[1];
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_b0 = (undefined4)param_2[2];
  uStack_ac = *(undefined4 *)((longlong)param_2 + 0x14);
  local_a8 = (void *)0x0;
  uVar1 = *(uint *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  local_a0 = CONCAT44(local_a0._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    local_a0 = (ulonglong)uVar1;
  }
  else {
    FUN_1446dd670(&local_a8,uVar1,0);
    memcpy(local_a8,pvVar2,(longlong)(int)uVar1 * 2);
  }
  local_88[0] = (code *)0x0;
  local_98 = param_3;
  local_78 = (longlong *)FUN_14001cc68(0x40,8);
  *local_78 = (longlong)&PTR_FUN_14a540a40;
  local_78[1] = local_c8;
  local_78[2] = local_c0;
  local_78[3] = CONCAT44(uStack_b4,local_b8);
  local_78[4] = CONCAT44(uStack_ac,uStack_b0);
  local_78[5] = (longlong)local_a8;
  local_a8 = (void *)0x0;
  *(undefined4 *)(local_78 + 6) = (undefined4)local_a0;
  *(undefined4 *)((longlong)local_78 + 0x34) = local_a0._4_4_;
  local_a0 = 0;
  *(undefined1 *)(local_78 + 7) = local_98;
  if (local_78 + 1 != (longlong *)0x0) {
    local_88[0] = FUN_1433364e6;
  }
  local_f0 = *param_2;
  local_e8 = (undefined4)param_2[1];
  uStack_e4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_e0 = (undefined4)param_2[2];
  uStack_dc = *(undefined4 *)((longlong)param_2 + 0x14);
  local_d8 = (void *)0x0;
  local_d0 = (int)param_2[4];
  lVar4 = (longlong)local_d0;
  pvVar2 = (void *)param_2[3];
  if (lVar4 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1446dd670(&local_d8,local_d0,0);
    memcpy(local_d8,pvVar2,lVar4 * 2);
  }
  FUN_147737ea8(param_1,&local_f0,local_88);
  if (local_88[0] != (code *)0x0) {
    plVar3 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar3 = local_68;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773825a FUN_14773825a body=508 status=ok
// SIG undefined FUN_14773825a(void)

void FUN_14773825a(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  void *local_90;
  undefined8 local_88;
  longlong local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80 = 0;
  FUN_14485c47a(&local_80,param_1);
  local_b0 = local_80;
  local_a8 = *param_2;
  local_a0 = (undefined4)param_2[1];
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_98 = (undefined4)param_2[2];
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_90 = (void *)0x0;
  uVar1 = *(uint *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  local_88 = CONCAT44(local_88._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    local_88 = (ulonglong)uVar1;
  }
  else {
    FUN_1446dd670(&local_90,uVar1,0);
    memcpy(local_90,pvVar2,(longlong)(int)uVar1 * 2);
  }
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x38,8);
  pvVar2 = local_90;
  *local_68 = (longlong)&PTR_FUN_14a540a60;
  local_90 = (void *)0x0;
  uVar3 = (undefined4)local_88;
  uVar4 = local_88._4_4_;
  local_88 = 0;
  local_68[1] = local_b0;
  local_68[2] = local_a8;
  local_68[3] = CONCAT44(uStack_9c,local_a0);
  local_68[4] = CONCAT44(uStack_94,uStack_98);
  local_68[5] = (longlong)pvVar2;
  *(undefined4 *)(local_68 + 6) = uVar3;
  *(undefined4 *)((longlong)local_68 + 0x34) = uVar4;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_143336680;
  }
  local_d8 = *param_2;
  local_d0 = (undefined4)param_2[1];
  uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_c8 = (undefined4)param_2[2];
  uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_c0 = (void *)0x0;
  local_b8 = (int)param_2[4];
  lVar6 = (longlong)local_b8;
  pvVar2 = (void *)param_2[3];
  if (lVar6 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,local_b8,0);
    memcpy(local_c0,pvVar2,lVar6 * 2);
  }
  FUN_147737ea8(param_1,&local_d8,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar5 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar5 = local_58;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773847a FUN_14773847a body=241 status=ok
// SIG undefined FUN_14773847a(void)

void FUN_14773847a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146075062(&local_40);
  plVar3 = local_30;
  local_40 = *param_2;
  local_38 = param_2[1];
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar5 = (undefined8 *)*local_30;
      local_30 = plVar4;
      (*(code *)*puVar5)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar4 = local_30;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar4 = local_30;
      }
    }
  }
  local_30 = plVar4;
  local_28 = *(undefined1 *)(param_2 + 3);
  FUN_1447cd2ec(param_1,&local_40);
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_2[2];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773859e FUN_14773859e body=174 status=ok
// SIG undefined FUN_14773859e(void)

void FUN_14773859e(longlong param_1,longlong param_2)

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
  if (*(longlong *)(param_1 + 0x848) != 0) {
    *(bool *)(*(longlong *)(param_1 + 0x848) + 0x2f1) = local_1c != 0;
  }
  *(bool *)(param_1 + 0x811) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738652 FUN_147738652 body=174 status=ok
// SIG undefined FUN_147738652(void)

void FUN_147738652(longlong param_1,longlong param_2)

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
  if (*(longlong *)(param_1 + 0x848) != 0) {
    *(bool *)(*(longlong *)(param_1 + 0x848) + 0x2f0) = local_1c != 0;
  }
  *(bool *)(param_1 + 0x810) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738702 FUN_147738702 body=191 status=ok
// SIG undefined FUN_147738702(void)

void FUN_147738702(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477387c2(param_1,plVar1);
  FUN_144a65a1e(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477387c2 FUN_1477387c2 body=176 status=ok
// SIG undefined FUN_1477387c2(void)

void FUN_1477387c2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x848);
  if (lVar2 != 0) {
    local_48 = 0;
    iVar1 = *(int *)(param_2 + 1);
    uVar3 = *param_2;
    local_40 = iVar1;
    if (iVar1 == 0) {
      local_3c = 0;
    }
    else {
      FUN_145732088(&local_48,iVar1,0);
      FUN_14573204f(local_48,uVar3,iVar1);
    }
    FUN_1477392de(lVar2,&local_48);
  }
  FUN_146a6959c(param_1 + 0x818,param_2);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738874 FUN_147738874 body=201 status=ok
// SIG undefined FUN_147738874(void)

void FUN_147738874(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  FUN_14773893e(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773893e FUN_14773893e body=169 status=ok
// SIG undefined FUN_14773893e(void)

void FUN_14773893e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x848);
  if (lVar1 != 0) {
    local_38 = (longlong *)*param_2;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    local_30 = (undefined4)param_2[1];
    FUN_140008f88(lVar1 + 0x2d0,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_140008f88(param_1 + 0x7f0,param_2);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477389e8 FUN_1477389e8 body=201 status=ok
// SIG undefined FUN_1477389e8(void)

void FUN_1477389e8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_30 = local_20;
  FUN_147738ab2(param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738ab2 FUN_147738ab2 body=169 status=ok
// SIG undefined FUN_147738ab2(void)

void FUN_147738ab2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x848);
  if (lVar1 != 0) {
    local_38 = (longlong *)*param_2;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    local_30 = (undefined4)param_2[1];
    FUN_140008f88(lVar1 + 0x2e0,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_140008f88(param_1 + 0x800,param_2);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738b5c FUN_147738b5c body=212 status=ok
// SIG undefined FUN_147738b5c(void)

void FUN_147738b5c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146075062(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar3 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147738c32(param_1,puVar3);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738c32 FUN_147738c32 body=221 status=ok
// SIG undefined FUN_147738c32(void)

void FUN_147738c32(longlong param_1,longlong *param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x7c0) != *param_2) ||
     (((*(uint *)(param_2 + 3) ^ *(uint *)(param_1 + 0x7d8)) & 0xf) != 0)) {
    local_28 = DAT_14cab7c40;
    local_30 = DAT_14cab7c38;
    FUN_140e2f5f4(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x848) != 0) {
      local_68 = *param_2;
      local_60 = param_2[1];
      local_58 = param_2[2];
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      local_50 = (undefined1)param_2[3];
      local_48 = 1;
      local_40 = 0;
      uStack_38 = 0;
      FUN_146a699a8();
    }
    FUN_1413a517a(param_1 + 0x7c0,param_2);
    *(char *)(param_1 + 0x7d8) = (char)param_2[3];
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738d10 FUN_147738d10 body=151 status=ok
// SIG undefined FUN_147738d10(void)

void FUN_147738d10(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147738da8(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738da8 FUN_147738da8 body=50 status=ok
// SIG undefined FUN_147738da8(void)

void FUN_147738da8(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined7 uVar3;
  
  if (*(longlong *)(param_1 + 0x848) != 0) {
    uVar3 = (undefined7)((ulonglong)param_2 >> 8);
    bVar2 = (char)param_2 - 1;
    if (bVar2 < 4) {
      uVar3 = 0x14a5452;
      puVar1 = (&PTR_DAT_14a545290)[bVar2];
    }
    else {
      puVar1 = &DAT_14c96b238;
    }
    FUN_146a6a85a(*(longlong *)(param_1 + 0x848),CONCAT71(uVar3,*puVar1));
    return;
  }
  return;
}



// FUNCTION 147738dda FUN_147738dda body=104 status=ok
// SIG undefined FUN_147738dda(void)

void FUN_147738dda(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_3a8 [32];
  undefined1 local_388 [880];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  FUN_141478cf2(local_388,param_1 + 0x170);
  FUN_141254448(param_2,local_388);
  FUN_140ffd6b6(local_388);
  if ((local_18 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738e44 FUN_147738e44 body=56 status=ok
// SIG undefined FUN_147738e44(void)

void FUN_147738e44(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x848) != 0) {
    FUN_146a69cce(*(longlong *)(param_1 + 0x848),param_2);
  }
  FUN_141254448(param_1 + 0x170,param_2);
  return;
}



// FUNCTION 147738e7c FUN_147738e7c body=104 status=ok
// SIG undefined FUN_147738e7c(void)

void FUN_147738e7c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [736];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_318;
  FUN_140e9ea3a(local_2f8,param_1 + 0x4e0);
  FUN_140a5e6b8(param_2,local_2f8);
  FUN_140e9e952(local_2f8);
  if ((local_18 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738ee6 FUN_147738ee6 body=56 status=ok
// SIG undefined FUN_147738ee6(void)

void FUN_147738ee6(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x848) != 0) {
    FUN_146a69ce0(*(longlong *)(param_1 + 0x848),param_2);
  }
  FUN_140a5e6b8(param_1 + 0x4e0,param_2);
  return;
}



// FUNCTION 147738f1e FUN_147738f1e body=167 status=ok
// SIG undefined FUN_147738f1e(void)

void FUN_147738f1e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x7c0);
  local_30 = *(undefined8 *)(param_1 + 0x7c8);
  local_28 = *(longlong **)(param_1 + 2000);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_20 = *(undefined1 *)(param_1 + 0x7d8);
  FUN_1413a4742(param_2,&local_38);
  plVar3 = local_28;
  *(undefined1 *)(param_2 + 0x18) = local_20;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147738fd8 FUN_147738fd8 body=105 status=ok
// SIG undefined FUN_147738fd8(void)

void FUN_147738fd8(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x848) != 0) {
    local_48 = *param_2;
    uStack_40 = param_2[1];
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146a69c96();
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x7e4) = uVar1;
  *(undefined4 *)(param_1 + 0x7e8) = uVar2;
  *(undefined4 *)(param_1 + 0x7ec) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147739042 FUN_147739042 body=118 status=ok
// SIG undefined FUN_147739042(void)

void FUN_147739042(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(longlong **)(param_1 + 0x7f0);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = *(undefined4 *)(param_1 + 0x7f8);
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477390ba FUN_1477390ba body=94 status=ok
// SIG undefined FUN_1477390ba(void)

void FUN_1477390ba(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_14773893e(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773911a FUN_14773911a body=118 status=ok
// SIG undefined FUN_14773911a(void)

void FUN_14773911a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(longlong **)(param_1 + 0x800);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = *(undefined4 *)(param_1 + 0x808);
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147739192 FUN_147739192 body=94 status=ok
// SIG undefined FUN_147739192(void)

void FUN_147739192(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_147738ab2(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147739250 FUN_147739250 body=99 status=ok
// SIG undefined FUN_147739250(void)

void FUN_147739250(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbd8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477392b4 FUN_1477392b4 body=41 status=ok
// SIG undefined FUN_1477392b4(void)

void FUN_1477392b4(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x0001477392da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  return;
}



// FUNCTION 1477392de FUN_1477392de body=56 status=ok
// SIG undefined FUN_1477392de(void)

void FUN_1477392de(longlong param_1,longlong *param_2)

{
  FUN_14611128a(param_1 + 0x2f8);
  FUN_144a65a1e(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147739316 FUN_147739316 body=551 status=ok
// SIG undefined FUN_147739316(void)

void FUN_147739316(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x848) != 0) {
    local_78 = *(undefined8 *)(param_1 + 0x7c0);
    local_70 = *(undefined8 *)(param_1 + 0x7c8);
    local_68 = *(longlong *)(param_1 + 2000);
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    local_60 = *(undefined1 *)(param_1 + 0x7d8);
    local_58 = 1;
    local_50 = 0;
    uStack_48 = 0;
    FUN_146a699a8();
    local_a8 = *(undefined4 *)(param_1 + 0x7e0);
    uStack_a4 = *(undefined4 *)(param_1 + 0x7e4);
    uStack_a0 = *(undefined4 *)(param_1 + 0x7e8);
    uStack_9c = *(undefined4 *)(param_1 + 0x7ec);
    local_98 = 1;
    local_90 = 0;
    uStack_88 = 0;
    FUN_146a69c96(*(undefined8 *)(param_1 + 0x848));
    FUN_146a69cce(*(undefined8 *)(param_1 + 0x848),param_1 + 0x170);
    FUN_146a69ce0(*(undefined8 *)(param_1 + 0x848),param_1 + 0x4e0);
    local_b8 = *(longlong **)(param_1 + 0x7f0);
    lVar2 = *(longlong *)(param_1 + 0x848);
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))();
    }
    local_b0 = *(undefined4 *)(param_1 + 0x7f8);
    FUN_140008f88(lVar2 + 0x2d0,&local_b8);
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_c8 = *(longlong **)(param_1 + 0x800);
    lVar2 = *(longlong *)(param_1 + 0x848);
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 8))();
    }
    local_c0 = *(undefined4 *)(param_1 + 0x808);
    FUN_140008f88(lVar2 + 0x2e0,&local_c8);
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x848) + 0x2f0) = *(undefined1 *)(param_1 + 0x810);
    *(undefined1 *)(*(longlong *)(param_1 + 0x848) + 0x2f1) = *(undefined1 *)(param_1 + 0x811);
    uVar3 = *(undefined8 *)(param_1 + 0x848);
    local_d8 = 0;
    iVar1 = *(int *)(param_1 + 0x820);
    uVar4 = *(undefined8 *)(param_1 + 0x818);
    local_d0 = iVar1;
    if (iVar1 == 0) {
      local_cc = 0;
    }
    else {
      FUN_145732088(&local_d8,iVar1,0);
      FUN_14573204f(local_d8,uVar4,iVar1);
    }
    FUN_1477392de(uVar3,&local_d8);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14773953e FUN_14773953e body=80 status=ok
// SIG undefined FUN_14773953e(void)

void FUN_14773953e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x848) = 0;
  plVar3 = *(longlong **)(param_1 + 0x850);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x850) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014773958a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14773958e FUN_14773958e body=1550 status=ok
// SIG undefined FUN_14773958e(void)

undefined8 * FUN_14773958e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 auStack_428 [39];
  undefined1 local_401;
  undefined1 local_400 [8];
  longlong *local_3f8;
  undefined8 *local_3e8;
  undefined4 local_3e0;
  undefined8 *local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  int local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined1 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_388;
  undefined8 local_380;
  longlong local_378;
  undefined1 local_370;
  undefined1 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  longlong *local_348;
  undefined1 local_340 [424];
  undefined1 local_198 [24];
  undefined1 local_180;
  undefined1 local_178;
  undefined1 local_170 [136];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_428;
  FUN_147739b9e(local_340);
  local_388 = *(undefined8 *)(param_1 + 0x7c0);
  local_380 = *(undefined8 *)(param_1 + 0x7c8);
  local_378 = *(longlong *)(param_1 + 2000);
  if (local_378 != 0) {
    LOCK();
    *(int *)(local_378 + 8) = *(int *)(local_378 + 8) + 1;
    UNLOCK();
  }
  local_370 = *(undefined1 *)(param_1 + 0x7d8);
  local_368 = 1;
  local_360 = 0;
  uStack_358 = 0;
  FUN_1413a4742(local_198,&local_388);
  local_180 = local_370;
  local_178 = local_368;
  FUN_144a450dc(local_170,&local_360);
  FUN_146a69c52(&local_388);
  local_3b8 = *(undefined4 *)(param_1 + 0x7e0);
  uStack_3b4 = *(undefined4 *)(param_1 + 0x7e4);
  uStack_3b0 = *(undefined4 *)(param_1 + 0x7e8);
  uStack_3ac = *(undefined4 *)(param_1 + 0x7ec);
  local_3a8 = 1;
  local_3a0 = 0;
  uStack_398 = 0;
  local_d8 = 1;
  local_e8 = local_3b8;
  uStack_e4 = uStack_3b4;
  uStack_e0 = uStack_3b0;
  uStack_dc = uStack_3ac;
  FUN_144a450dc(local_d0,&local_3a0);
  FUN_1449db362(&local_3a0);
  plVar8 = local_b0;
  local_c0 = param_1 + 0x170;
  local_b8 = param_1 + 0x4e0;
  plVar3 = *(longlong **)(param_1 + 0x7f0);
  if (plVar3 == (longlong *)0x0) {
    uVar9 = *(undefined4 *)(param_1 + 0x7f8);
    local_a8 = uVar9;
    if (local_b0 != (longlong *)0x0) {
      local_b0 = (longlong *)0x0;
LAB_147739ae9:
      (**(code **)(*plVar8 + 0x10))(plVar8);
      local_a8 = uVar9;
      if (plVar3 != (longlong *)0x0) goto LAB_147739727;
    }
  }
  else {
    (**(code **)(*plVar3 + 8))(plVar3);
    plVar8 = local_b0;
    uVar9 = *(undefined4 *)(param_1 + 0x7f8);
    local_a8 = uVar9;
    if ((local_b0 != plVar3) &&
       (local_b0 = plVar3, (**(code **)(*plVar3 + 8))(plVar3), plVar8 != (longlong *)0x0))
    goto LAB_147739ae9;
LAB_147739727:
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  plVar8 = local_a0;
  plVar3 = *(longlong **)(param_1 + 0x800);
  if (plVar3 == (longlong *)0x0) {
    uVar9 = *(undefined4 *)(param_1 + 0x808);
    local_98 = uVar9;
    if (local_a0 != (longlong *)0x0) {
      local_a0 = (longlong *)0x0;
LAB_147739b13:
      (**(code **)(*plVar8 + 0x10))(plVar8);
      local_98 = uVar9;
      if (plVar3 != (longlong *)0x0) goto LAB_147739799;
    }
  }
  else {
    (**(code **)(*plVar3 + 8))(plVar3);
    plVar8 = local_a0;
    uVar9 = *(undefined4 *)(param_1 + 0x808);
    local_98 = uVar9;
    if ((local_a0 != plVar3) &&
       (local_a0 = plVar3, (**(code **)(*plVar3 + 8))(plVar3), plVar8 != (longlong *)0x0))
    goto LAB_147739b13;
LAB_147739799:
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  local_90 = *(undefined1 *)(param_1 + 0x810);
  local_8f = *(undefined1 *)(param_1 + 0x811);
  local_3c8 = 0;
  iVar2 = *(int *)(param_1 + 0x820);
  uVar4 = *(undefined8 *)(param_1 + 0x818);
  local_3c0 = iVar2;
  if (iVar2 == 0) {
    local_3bc = 0;
  }
  else {
    FUN_145732088(&local_3c8,iVar2,0);
    FUN_14573204f(local_3c8,uVar4,iVar2);
  }
  FUN_147739e78(local_340,&local_3c8);
  local_3d8 = (undefined8 *)0x0;
  local_3d0 = 0;
  FUN_1446efa72(&local_3d8,0,3,0x10);
  puVar5 = local_3d8;
  local_3d0 = 3;
  *local_3d8 = &PTR_LAB_14a540d50;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_3d8[2] = lVar7;
  *local_3d8 = &PTR_FUN_14a540ce0;
  local_3d8[3] = 0;
  FUN_14485c47a(local_3d8 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = &LAB_147739eb2;
  FUN_144a450dc(local_78,&local_3d8);
  local_3e8 = (undefined8 *)0x0;
  local_3e0 = 0;
  FUN_1446efa72(&local_3e8,0,3,0x10);
  puVar5 = local_3e8;
  local_3e0 = 3;
  *local_3e8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_3e8[2] = lVar7;
  *local_3e8 = &PTR_FUN_14a540dc0;
  local_3e8[3] = 0;
  FUN_14485c47a(local_3e8 + 3,param_1);
  puVar5[4] = &LAB_147739ec0;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_144a450dc(local_68,&local_3e8);
  FUN_147769582(local_400,&local_401);
  FUN_147739ece(local_400,&local_350,local_340);
  plVar3 = local_348;
  if (local_348 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x848) = local_350;
    plVar8 = *(longlong **)(param_1 + 0x850);
    if (plVar8 == (longlong *)0x0) goto LAB_1477399a2;
    *(undefined8 *)(param_1 + 0x850) = 0;
LAB_147739b38:
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1477399a2;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_348 + 1) = (int)local_348[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x848) = local_350;
    plVar8 = *(longlong **)(param_1 + 0x850);
    if (local_348 != plVar8) {
      *(longlong **)(param_1 + 0x850) = local_348;
      if (plVar8 == (longlong *)0x0) goto LAB_1477399a2;
      goto LAB_147739b38;
    }
    LOCK();
    plVar8 = local_348 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1477399a2;
    (**(code **)*local_348)(local_348);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_1477399a2:
  if (local_348 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_348 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_348)(local_348);
      LOCK();
      piVar1 = (int *)((longlong)local_348 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_348 + 0x10))(local_348);
      }
    }
  }
  if (local_3f8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3f8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3f8)(local_3f8);
      LOCK();
      piVar1 = (int *)((longlong)local_3f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3f8 + 0x10))(local_3f8);
      }
    }
  }
  FUN_1449db362(&local_3e8);
  FUN_1449db362(&local_3d8);
  FUN_147739f42(local_340);
  uVar4 = *(undefined8 *)(param_1 + 0x848);
  plVar3 = *(longlong **)(param_1 + 0x850);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = uVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147739b9e FUN_147739b9e body=728 status=ok
// SIG undefined FUN_147739b9e(void)

longlong FUN_147739b9e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140a5071c();
  plVar4 = DAT_14c966e90;
  uVar3 = DAT_14c966e88;
  uVar6 = DAT_14c966e80;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
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
  *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  *(undefined8 *)(param_1 + 0x1b0) = uVar3;
  *(longlong **)(param_1 + 0x1b8) = plVar4;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1ef) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined2 *)(param_1 + 0x234) = 2;
  *(undefined1 *)(param_1 + 0x236) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x240) = 0;
  *(undefined1 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  lVar5 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar5 == 0) {
    lVar5 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_78,"Button",1);
  uVar6 = FUN_141492734(lVar5,local_78,0,0);
  *(undefined8 *)(param_1 + 0x280) = uVar6;
  lVar5 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar5 == 0) {
    lVar5 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_80,"NormalText",1);
  uVar6 = FUN_140a57516(lVar5,local_80,0,0);
  *(undefined8 *)(param_1 + 0x288) = uVar6;
  local_70 = L"DefaultKeySelectionText";
  local_68 = 0x17;
  FUN_1446e940c(local_84,&local_70);
  local_70 = L"InputKeySelector";
  local_68 = 0x10;
  FUN_1446e940c(local_88,&local_70);
  FUN_140208bae(param_1 + 0x290,local_88,local_84,&DAT_149e30fc2);
  local_70 = L"DefaultEmptyText";
  local_68 = 0x10;
  FUN_1446e940c(local_84,&local_70);
  local_70 = L"InputKeySelector";
  local_68 = 0x10;
  FUN_1446e940c(local_88,&local_70);
  FUN_140208bae(param_1 + 0x2a0,local_88,local_84,L"Empty");
  *(undefined2 *)(param_1 + 0x2b0) = 1;
  *(undefined1 *)(param_1 + 0x2b2) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c4) = 0;
  *(undefined8 *)(param_1 + 0x2cc) = 0;
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


