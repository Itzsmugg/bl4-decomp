// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149908d4a FUN_149908d4a body=118 status=ok
// SIG undefined FUN_149908d4a(void)

undefined4 FUN_149908d4a(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  if (*(int *)(param_1 + 0x3a8) < 1) {
    uVar1 = 0;
  }
  else {
    lVar2 = 0;
    lVar3 = 0;
    do {
      uVar1 = FUN_149908dc0(param_1,*(longlong *)(param_1 + 0x3a0) + lVar2);
      if ((char)uVar1 != '\0') break;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x150;
    } while (lVar3 < *(int *)(param_1 + 0x3a8));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  return uVar1;
}



// FUNCTION 149908dc0 FUN_149908dc0 body=76 status=ok
// SIG undefined FUN_149908dc0(void)

undefined1 FUN_149908dc0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(char *)(param_2 + 0x38) != '\x01') || (cVar1 = FUN_149908e0c(), cVar1 == '\0')) {
    return 0;
  }
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    if (*(int *)(param_2 + 0x148) != 4) {
      return 1;
    }
    if ((*(char *)(param_2 + 0x39) == '\x01') && (0 < *(int *)(param_2 + 0x114))) {
      return 1;
    }
  }
  if (*(char *)(param_2 + 0x3f) != '\0') {
    return 1;
  }
  return *(undefined1 *)(param_2 + 0x40);
}



// FUNCTION 149908e0c FUN_149908e0c body=261 status=ok
// SIG undefined FUN_149908e0c(void)

ulonglong FUN_149908e0c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x120))();
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x278) + 0x80))
              (*(longlong **)(param_1 + 0x278),&local_30);
    if (local_30 == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      (**(code **)(*local_30 + 0x110))(local_30,&local_40,*(undefined4 *)(param_2 + 0x120));
      if (local_40 == (undefined8 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar4 = (**(code **)*local_40)(local_40,*(undefined8 *)(param_2 + 8));
        uVar5 = (ulonglong)uVar4;
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
    }
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
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149908f12 FUN_149908f12 body=136 status=ok
// SIG undefined FUN_149908f12(void)

undefined8 FUN_149908f12(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(*param_1 + 0x20))();
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(param_3 + 0x18);
    uVar1 = *(undefined4 *)(param_3 + 0xc);
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    uVar3 = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(lVar4 + 0x34) = uVar1;
    *(undefined4 *)(lVar4 + 0x38) = uVar2;
    *(undefined4 *)(lVar4 + 0x3c) = uVar3;
    FUN_144a787a6(lVar4 + 0x48,param_3 + 0x20);
    *(undefined4 *)(lVar4 + 0x58) = *(undefined4 *)(param_3 + 0x30);
    FUN_1412c5fc6(lVar4 + 0x60,param_3 + 0x38);
    FUN_1412c6060(lVar4 + 0xb0,param_3 + 0x88);
    (**(code **)(*param_1 + 0xb8))(param_1,param_2,1);
  }
  return 1;
}



// FUNCTION 149908fa0 FUN_149908fa0 body=533 status=ok
// SIG undefined FUN_149908fa0(void)

undefined8 FUN_149908fa0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60 [3];
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = 0x2b0;
  do {
    iVar3 = rand();
    *(char *)((longlong)param_1 + lVar6) = (char)iVar3;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x2b8);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ba417f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  plVar1 = param_1 + 0x50;
  local_38[2] = lVar4;
  *local_38 = &PTR_FUN_14bf02ed0;
  local_38[3] = param_1;
  local_38[4] = FUN_1446b6cb0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14bf02f40;
  local_48[3] = param_1;
  local_48[4] = FUN_14990931c;
  FUN_1489bb0ca(local_60,0x400);
  FUN_1489b698a(plVar1,local_60,param_1[0x56]);
  cVar2 = FUN_143e6a626(plVar1,local_60,&local_38,&local_48);
  uVar5 = 0x3e5;
  if (cVar2 == '\0') {
    if ((int)param_1[0x55] == 2) {
      FUN_145e3ad82(plVar1);
    }
    FUN_149908b66(param_1);
    *(undefined4 *)(param_1[0x76] + 0x18) = 3;
    (**(code **)(*param_1 + 0x1a0))(param_1,0);
    uVar5 = 0xffffffff;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_48);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499091c6 FUN_1499091c6 body=341 status=ok
// SIG undefined FUN_1499091c6(void)

undefined8 FUN_1499091c6(void)

{
  longlong *plVar1;
  longlong *in_stack_00000028;
  undefined1 auStack_178 [40];
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = &PTR_FUN_14b4c3b18;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = &PTR_FUN_14b4c3b20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = FUN_1414a827a();
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 9999;
  plVar1 = (longlong *)*in_stack_00000028;
  if (plVar1 != (longlong *)0x0 && (int)in_stack_00000028[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0,0,&local_150);
  }
  FUN_14124efea(&local_150);
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990931c FUN_14990931c body=163 status=ok
// SIG undefined FUN_14990931c(void)

void FUN_14990931c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((int)param_1[0x55] == 2) {
    FUN_145e3ad82(param_1 + 0x50);
  }
  FUN_149908b66(param_1);
  plVar3 = (longlong *)param_1[0x76];
  if (plVar3 != (longlong *)0x0) {
    if (0 < (int)plVar3[2]) {
      (**(code **)(*plVar3 + 8))();
      plVar3 = (longlong *)param_1[0x76];
    }
    *(undefined4 *)(plVar3 + 3) = 2;
    param_1[0x76] = 0;
    plVar3 = (longlong *)param_1[0x77];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x77] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001499093bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))(param_1,1);
  return;
}



// FUNCTION 1499093c0 FUN_1499093c0 body=352 status=ok
// SIG undefined FUN_1499093c0(void)

undefined8 FUN_1499093c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x148) = 2;
  lVar3 = *(longlong *)(param_1 + 0x100);
  uVar7 = 0xffffffff;
  if ((param_2 == 0 || lVar3 == 0) || (lVar4 = *(longlong *)(param_2 + 0x100), lVar4 == 0))
  goto LAB_149909502;
  uVar7 = *(undefined8 *)(lVar4 + 0x18);
  lVar5 = *(longlong *)(lVar4 + 0x20);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x18) = uVar7;
  *(longlong *)(lVar3 + 0x20) = lVar5;
  if (plVar6 != (longlong *)0x0) {
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
  (**(code **)(**(longlong **)(lVar4 + 8) + 0xa0))(*(longlong **)(lVar4 + 8),&local_30);
  plVar6 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(undefined8 *)(lVar3 + 8) = local_30;
    plVar8 = *(longlong **)(lVar3 + 0x10);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
LAB_1499094a3:
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001499094ce:
        if (iVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(undefined8 *)(lVar3 + 8) = local_30;
    plVar8 = *(longlong **)(lVar3 + 0x10);
    if (local_28 == plVar8) {
      LOCK();
      plVar8 = local_28 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar8 = plVar6;
        goto joined_r0x0001499094ce;
      }
    }
    else {
      *(longlong **)(lVar3 + 0x10) = local_28;
      if (plVar8 != (longlong *)0x0) goto LAB_1499094a3;
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  uVar7 = 0;
LAB_149909502:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149909532 FUN_149909532 body=100 status=ok
// SIG undefined FUN_149909532(void)

undefined8 FUN_149909532(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x308))(0,param_2,0,&local_28);
  FUN_145fee2f2(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149909598 FUN_149909598 body=102 status=ok
// SIG undefined FUN_149909598(void)

undefined8 FUN_149909598(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x308))(0,0,0,&local_28);
  FUN_145fee2f2(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149909600 FUN_149909600 body=102 status=ok
// SIG undefined FUN_149909600(void)

undefined8 FUN_149909600(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x308))(0,0,0,&local_28);
  FUN_145fee2f2(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990967c FUN_14990967c body=26 status=ok
// SIG undefined FUN_14990967c(void)

longlong FUN_14990967c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 != 0) {
    lVar1 = lVar1 + 0x28;
  }
  return lVar1;
}



// FUNCTION 149909696 FUN_149909696 body=168 status=ok
// SIG undefined FUN_149909696(void)

void FUN_149909696(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0x68))(*(longlong **)(param_1 + 0x278),&local_30);
  if (local_30 != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x138))
                      (*(longlong **)(param_1 + 0x278),param_2);
    if (cVar3 == '\0') {
      (**(code **)(*local_30 + 0x58))(local_30,param_2);
    }
    else {
      (**(code **)(*local_30 + 8))();
    }
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149909740 FUN_149909740 body=166 status=ok
// SIG undefined FUN_149909740(void)

void FUN_149909740(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0x68))(*(longlong **)(param_1 + 0x278),&local_30);
  if (local_30 != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x138))
                      (*(longlong **)(param_1 + 0x278),param_2);
    if ((cVar3 == '\0') && (local_30 != (longlong *)0x0)) {
      (**(code **)(*local_30 + 0x60))(local_30,param_2);
    }
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499097e8 FUN_1499097e8 body=287 status=ok
// SIG undefined FUN_1499097e8(void)

undefined4 FUN_1499097e8(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  plVar7 = *(longlong **)(param_3 + 0x10);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
  }
  uVar6 = 0;
  if (plVar7 != (longlong *)0x0) {
    uVar6 = *(undefined8 *)(param_3 + 8);
  }
  uStack_40 = 1;
  FUN_1413eac7e(&local_48,0);
  *local_48 = uVar6;
  local_48[1] = plVar7;
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
  uVar5 = (**(code **)(*param_1 + 0x398))(param_1,param_2,&local_48,param_4);
  FUN_14127b1cd(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149909908 FUN_149909908 body=270 status=ok
// SIG undefined FUN_149909908(void)

undefined4 FUN_149909908(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  plVar6 = *(longlong **)(param_3 + 0x10);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
  }
  uVar7 = 0;
  if (plVar6 != (longlong *)0x0) {
    uVar7 = *(undefined8 *)(param_3 + 8);
  }
  uStack_40 = 1;
  FUN_1413eac7e(&local_48,0);
  *local_48 = uVar7;
  local_48[1] = plVar6;
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
  uVar5 = (**(code **)(*param_1 + 0x3c8))(param_1,param_2,&local_48);
  FUN_14127b1cd(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149909a18 FUN_149909a18 body=293 status=ok
// SIG undefined FUN_149909a18(void)

void FUN_149909a18(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_3 + 8) + 0x30))(*(longlong **)(param_3 + 8),local_38);
  uVar5 = FUN_1489bb5d7(param_2,local_38);
  uVar5 = FUN_1489bb5d7(uVar5,param_3 + 0x18);
  uVar5 = FUN_1489b6c87(uVar5,param_3 + 0x110);
  FUN_1489b6c87(uVar5,param_3 + 0x114);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_149909b3e(*(undefined8 *)(param_1 + 0x278),param_3 + 0x100);
  lVar3 = *(longlong *)(param_3 + 0x100);
  plVar4 = *(longlong **)(param_3 + 0x108);
  if (plVar4 == (longlong *)0x0) {
    FUN_1489bb5d7(param_2,*(longlong *)(lVar3 + 0x18) + 0x18);
    FUN_148f9a71b(param_2,*(undefined8 *)(lVar3 + 8));
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_1489bb5d7(param_2,*(longlong *)(lVar3 + 0x18) + 0x18);
    FUN_148f9a71b(param_2,*(undefined8 *)(lVar3 + 8));
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
  FUN_149909bd4(param_2,param_3 + 0x28);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149909b3e FUN_149909b3e body=148 status=ok
// SIG undefined FUN_149909b3e(void)

void FUN_149909b3e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x18))(param_1,&local_20);
  uVar5 = FUN_148a3eb84(local_20);
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar2 != 0) && (plVar4 = *(longlong **)(lVar2 + 8), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,uVar5);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149909bd4 FUN_149909bd4 body=932 status=ok
// SIG undefined FUN_149909bd4(void)

void FUN_149909bd4(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = FUN_1489b6c87(param_1,param_2 + 8);
  plVar5 = (longlong *)FUN_1489b6c87(uVar4,param_2 + 0xc);
  if (*(char *)((longlong)plVar5 + 0x14) == '\0') {
    lVar2 = plVar5[2];
    uVar7 = (int)lVar2 + 1;
    if (uVar7 <= *(uint *)(plVar5 + 1)) {
      uVar1 = *(undefined1 *)(param_2 + 0x10);
      *(uint *)(plVar5 + 2) = uVar7;
      *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
      if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
        lVar2 = plVar5[2];
        uVar7 = (int)lVar2 + 1;
        if (uVar7 <= *(uint *)(plVar5 + 1)) {
          uVar1 = *(undefined1 *)(param_2 + 0x12);
          *(uint *)(plVar5 + 2) = uVar7;
          *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
          if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
            lVar2 = plVar5[2];
            uVar7 = (int)lVar2 + 1;
            if (uVar7 <= *(uint *)(plVar5 + 1)) {
              uVar1 = *(undefined1 *)(param_2 + 0x13);
              *(uint *)(plVar5 + 2) = uVar7;
              *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
              if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                lVar2 = plVar5[2];
                uVar7 = (int)lVar2 + 1;
                if (uVar7 <= *(uint *)(plVar5 + 1)) {
                  uVar1 = *(undefined1 *)(param_2 + 0x14);
                  *(uint *)(plVar5 + 2) = uVar7;
                  *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                  if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                    lVar2 = plVar5[2];
                    uVar7 = (int)lVar2 + 1;
                    if (uVar7 <= *(uint *)(plVar5 + 1)) {
                      uVar1 = *(undefined1 *)(param_2 + 0x11);
                      *(uint *)(plVar5 + 2) = uVar7;
                      *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                      if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                        lVar2 = plVar5[2];
                        uVar7 = (int)lVar2 + 1;
                        if (uVar7 <= *(uint *)(plVar5 + 1)) {
                          uVar1 = *(undefined1 *)(param_2 + 0x15);
                          *(uint *)(plVar5 + 2) = uVar7;
                          *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                          if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                            lVar2 = plVar5[2];
                            uVar7 = (int)lVar2 + 1;
                            if (uVar7 <= *(uint *)(plVar5 + 1)) {
                              uVar1 = *(undefined1 *)(param_2 + 0x16);
                              *(uint *)(plVar5 + 2) = uVar7;
                              *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                              if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                                lVar2 = plVar5[2];
                                uVar7 = (int)lVar2 + 1;
                                if (uVar7 <= *(uint *)(plVar5 + 1)) {
                                  uVar1 = *(undefined1 *)(param_2 + 0x17);
                                  *(uint *)(plVar5 + 2) = uVar7;
                                  *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                                  if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                                    lVar2 = plVar5[2];
                                    uVar7 = (int)lVar2 + 1;
                                    if (uVar7 <= *(uint *)(plVar5 + 1)) {
                                      uVar1 = *(undefined1 *)(param_2 + 0x18);
                                      *(uint *)(plVar5 + 2) = uVar7;
                                      *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                                      if ((*(byte *)((longlong)plVar5 + 0x14) & 1) == 0) {
                                        lVar2 = plVar5[2];
                                        uVar7 = (int)lVar2 + 1;
                                        if (uVar7 <= *(uint *)(plVar5 + 1)) {
                                          uVar1 = *(undefined1 *)(param_2 + 0x19);
                                          *(uint *)(plVar5 + 2) = uVar7;
                                          *(undefined1 *)(*plVar5 + (longlong)(int)lVar2) = uVar1;
                                          goto LAB_149909d76;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((longlong)plVar5 + 0x14) = 1;
LAB_149909d76:
  FUN_1489b6c87(plVar5,param_2 + 0x30);
  plVar5 = (longlong *)(param_2 + 0x38);
  lVar2 = param_2 + 0x48;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = lVar2;
  if (*(int *)(param_2 + 0x60) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  iVar8 = 0;
  local_88 = plVar5;
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    iVar8 = 0;
    do {
      iVar8 = (iVar8 + 1) - (uint)(*(byte *)(*local_88 + 0x28 + (longlong)iStack_6c * 0x38) < 2);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  local_88 = (longlong *)CONCAT44(local_88._4_4_,iVar8);
  FUN_1489b6c87(param_1);
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = lVar2;
  if (*(int *)(param_2 + 0x60) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar5;
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      lVar2 = *local_88;
      lVar6 = (longlong)iStack_6c * 0x38;
      if (1 < *(byte *)(lVar2 + 0x28 + lVar6)) {
        FUN_148f9a62d(param_1,lVar2 + lVar6);
        FUN_1489bb6df(param_1,lVar2 + lVar6 + 8);
        if (*(char *)((longlong)param_1 + 0x14) == '\0') {
          lVar3 = param_1[2];
          uVar7 = (int)lVar3 + 1;
          if (uVar7 <= *(uint *)(param_1 + 1)) {
            uVar1 = *(undefined1 *)(lVar2 + lVar6 + 0x28);
            *(uint *)(param_1 + 2) = uVar7;
            *(undefined1 *)(*param_1 + (longlong)(int)lVar3) = uVar1;
            goto LAB_149909eda;
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      }
LAB_149909eda:
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149909f7a FUN_149909f7a body=840 status=ok
// SIG undefined FUN_149909f7a(void)

void FUN_149909f7a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14990a2c4(&local_40);
  FUN_1489bb965(param_1,local_40 + 0x18);
  uVar4 = FUN_1489bb965(param_1,param_2 + 0x18);
  uVar4 = FUN_1489b6cee(uVar4,param_2 + 0x110);
  FUN_1489b6cee(uVar4,param_2 + 0x114);
  plVar6 = local_38;
  if (local_38 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = local_40;
    plVar7 = *(longlong **)(param_2 + 0x10);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_2 + 0x10) = 0;
LAB_14990a247:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014990a178:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = local_40;
    plVar7 = *(longlong **)(param_2 + 0x10);
    if (local_38 == plVar7) {
      LOCK();
      plVar7 = local_38 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar6;
        goto joined_r0x00014990a178;
      }
    }
    else {
      *(longlong **)(param_2 + 0x10) = local_38;
      if (plVar7 != (longlong *)0x0) goto LAB_14990a247;
    }
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar5 = &PTR_FUN_14bf01110;
  puVar5[1] = 0;
  puVar5[2] = 0;
  FUN_14990559a();
  puVar5[3] = DAT_14cc326f0;
  lVar3 = DAT_14cc326f8;
  puVar5[4] = DAT_14cc326f8;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1446f470e(local_58,L"WINDOWS",1);
  plVar6 = (longlong *)FUN_140272950(local_58);
  (**(code **)(*plVar6 + 0x90))(plVar6,&local_50);
  plVar6 = local_48;
  if (local_48 == (longlong *)0x0) {
    puVar5[1] = local_50;
    plVar7 = (longlong *)puVar5[2];
    if (plVar7 != (longlong *)0x0) {
      puVar5[2] = 0;
LAB_14990a279:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014990a1b4:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    puVar5[1] = local_50;
    plVar7 = (longlong *)puVar5[2];
    if (local_48 == plVar7) {
      LOCK();
      plVar7 = local_48 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar6;
        goto joined_r0x00014990a1b4;
      }
    }
    else {
      puVar5[2] = local_48;
      if (plVar7 != (longlong *)0x0) goto LAB_14990a279;
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  FUN_14990a398(param_1,puVar5);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14bf02e40;
  plVar7[2] = (longlong)puVar5;
  *(undefined8 **)(param_2 + 0x100) = puVar5;
  plVar6 = *(longlong **)(param_2 + 0x108);
  if (plVar7 == plVar6) {
    if (plVar7 == (longlong *)0x0) goto LAB_14990a1e6;
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14990a1e6;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar7;
  }
  else {
    *(longlong **)(param_2 + 0x108) = plVar7;
    if (plVar6 == (longlong *)0x0) goto LAB_14990a1e6;
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_14990a1e6;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_14990a1e6:
  FUN_1446b76a2(param_1,param_2 + 0x28);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990a2c4 FUN_14990a2c4 body=212 status=ok
// SIG undefined FUN_14990a2c4(void)

undefined8 * FUN_14990a2c4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *puVar3 = &PTR_FUN_14bf01f20;
  puVar3[5] = DAT_14cb8e198;
  *param_1 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bf01f70;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  return param_1;
}



// FUNCTION 14990a398 FUN_14990a398 body=164 status=ok
// SIG undefined FUN_14990a398(void)

undefined8 FUN_14990a398(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14990a2c4(&local_48);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  plVar4 = *(longlong **)(param_2 + 0x20);
  *(ulonglong *)(param_2 + 0x18) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(param_2 + 0x20) = CONCAT44(uStack_3c,uStack_40);
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = SUB84(plVar4,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  local_38 = uVar3;
  uStack_30 = plVar4;
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
  FUN_1489bb965(param_1,*(longlong *)(param_2 + 0x18) + 0x18);
  FUN_148f9a7d2(param_1,*(undefined8 *)(param_2 + 8));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990a43e FUN_14990a43e body=49 status=ok
// SIG undefined FUN_14990a43e(void)

undefined4 FUN_14990a43e(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  uVar1 = *(undefined4 *)(param_1 + 0x3a8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  return uVar1;
}



// FUNCTION 14990a470 FUN_14990a470 body=98 status=ok
// SIG undefined FUN_14990a470(void)

void FUN_14990a470(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  if (0 < *(int *)(param_1 + 0x3a8)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_143e6d6b1(*(longlong *)(param_1 + 0x3a0) + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x150;
    } while (lVar2 < *(int *)(param_1 + 0x3a8));
  }
                    /* WARNING: Could not recover jumptable at 0x00014990a4cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  return;
}



// FUNCTION 14990a51e FUN_14990a51e body=239 status=ok
// SIG undefined FUN_14990a51e(void)

undefined8 * FUN_14990a51e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_3 + 8) < 2) goto LAB_14990a544;
  FUN_149905b18(&local_30,param_3);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_14990a544;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x00014990a5cb:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014990a5cb;
      }
    }
  }
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
LAB_14990a544:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990a60e FUN_14990a60e body=777 status=ok
// SIG undefined FUN_14990a60e(void)

undefined8 * FUN_14990a60e(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_14bf01150;
  param_1[6] = param_2;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_140056680(local_38,L"Super cool Item1");
  FUN_140056680(local_48,L"Cool Item1");
  FUN_140056680(local_58,L"Item1_Id");
  local_68 = 3;
  FUN_14990a918(param_1,local_58,local_48,local_38);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"Very nice Item2");
  FUN_140056680(local_48,L"Nice Item2");
  FUN_140056680(local_58,L"Item2_Id");
  local_68 = 0x28;
  FUN_14990a918(param_1,local_58,local_48,local_38);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"Faboulous Item3");
  FUN_140056680(local_48,L"Fab Item3");
  FUN_140056680(local_58,L"Item3_Id");
  local_68 = 500;
  FUN_14990a918(param_1,local_58,local_48,local_38);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"Expensive Item4");
  FUN_140056680(local_48,L"$$$ Item4");
  FUN_140056680(local_58,L"Item4_Id");
  local_68 = 6000;
  FUN_14990a918(param_1,local_58,local_48,local_38);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"Sooo fake Item5");
  FUN_140056680(local_48,L"Fake Item5");
  FUN_140056680(local_58,L"Item5_Id");
  local_68 = 70000;
  FUN_14990a918(param_1,local_58,local_48,local_38);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990a918 FUN_14990a918 body=353 status=ok
// SIG undefined FUN_14990a918(void)

void FUN_14990a918(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong **local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x100,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bf03300;
  FUN_148fbcba0(plVar3 + 2);
  local_68 = plVar3 + 2;
  local_60 = plVar3;
  FUN_144a787a6(plVar3 + 3,param_2);
  FUN_140009b9a(&local_58,param_3);
  FUN_140008f88(plVar3 + 5,&local_58);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  FUN_140009b9a(&local_58,param_4);
  FUN_140008f88(plVar3 + 7,&local_58);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  plVar3[0x10] = (ulonglong)param_5;
  plVar3[0xd] = (ulonglong)param_5;
  FUN_14020fad6(plVar3 + 0x11,&DAT_14bf0130e);
  local_50 = &local_68;
  local_58 = param_2;
  FUN_14990fec8(param_1 + 0x38,local_44);
  plVar3 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990aa7a FUN_14990aa7a body=249 status=ok
// SIG undefined FUN_14990aa7a(void)

void FUN_14990aa7a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_40 = 0;
  local_38 = 0;
  FUN_147ca3f96(&local_40,param_3);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14bf02fb0;
  local_30[3] = 0;
  *(undefined4 *)(local_30 + 4) = 0;
  FUN_147ca3f96(local_30 + 3,&local_40);
  FUN_145c398c4(uVar1,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990ab74 FUN_14990ab74 body=53 status=ok
// SIG undefined FUN_14990ab74(void)

void FUN_14990ab74(undefined8 param_1,undefined8 *param_2)

{
  FUN_148fc3df9(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) == 0) {
    return;
  }
  FUN_148fc3e52(param_2,0);
  return;
}



// FUNCTION 14990abaa FUN_14990abaa body=304 status=ok
// SIG undefined FUN_14990abaa(void)

void FUN_14990abaa(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  if (cVar3 == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    local_40 = 0;
    local_38 = 0;
    FUN_14990fb90(&local_40,param_4);
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    local_28 = 3;
    *local_30 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar4;
    *local_30 = &PTR_FUN_14bf03080;
    local_30[3] = 0;
    *(undefined4 *)(local_30 + 4) = 0;
    FUN_14990fb90(local_30 + 3,&local_40);
    FUN_145c398c4(uVar1,&local_30);
    FUN_1449db362(&local_30);
    FUN_1449db362(&local_40);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_14990ace4(param_1,param_4);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1447a1747(0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990ace4 FUN_14990ace4 body=450 status=ok
// SIG undefined FUN_14990ace4(void)

void FUN_14990ace4(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_14990ad12:
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14990ad12;
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
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
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
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    bVar10 = false;
    local_68 = uVar4;
    plStack_60 = plVar3;
  }
  plVar3 = plStack_60;
  local_58 = 0;
  local_50 = 0;
  FUN_14990fb90(&local_58,param_2);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  local_40 = 4;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar8;
  *local_48 = &PTR_FUN_14bf03290;
  local_48[3] = local_68;
  local_48[4] = plStack_60;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_48[5] = 0;
  *(undefined4 *)(local_48 + 6) = 0;
  FUN_14990fb90(local_48 + 5,&local_58);
  FUN_145c398c4(uVar9,&local_48);
  FUN_1449db362(&local_48);
  FUN_1449db362(&local_58);
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_60 + 0x10))();
    }
  }
  if (!bVar10) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14990aea8 FUN_14990aea8 body=444 status=ok
// SIG undefined FUN_14990aea8(void)

void FUN_14990aea8(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined **ppuVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  if (cVar2 == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    local_40 = 0;
    local_38 = 0;
    FUN_14990fb90(&local_40,param_4);
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    *local_30 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar4;
    ppuVar3 = &PTR_FUN_14bf03160;
  }
  else {
    if (0 < *(int *)(param_3 + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    local_40 = 0;
    local_38 = 0;
    FUN_14990fb90(&local_40,param_4);
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    *local_30 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar4;
    ppuVar3 = &PTR_FUN_14bf031d0;
  }
  local_28 = 3;
  *local_30 = ppuVar3;
  local_30[3] = 0;
  *(undefined4 *)(local_30 + 4) = 0;
  FUN_14990fb90(local_30 + 3,&local_40);
  FUN_145c398c4(uVar5,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990b082 FUN_14990b082 body=322 status=ok
// SIG undefined FUN_14990b082(void)

void FUN_14990b082(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  FUN_14990fd8e(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
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
      iVar4 = iStack_5c;
      lVar2 = *local_78;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_148fc3f5a(param_2,iVar1);
      }
      lVar2 = lVar2 + (longlong)iVar4 * 0x28;
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = *(longlong *)(lVar2 + 0x18);
      *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14990b1c6 FUN_14990b1c6 body=144 status=ok
// SIG undefined FUN_14990b1c6(void)

undefined8 * FUN_14990b1c6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  
  iVar4 = *(int *)(param_3 + 1);
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  iVar4 = FUN_14990fdd4((longlong *)(param_1 + 0x38),uVar3,param_3);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 + (longlong)iVar4 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar1 = lVar1 + (longlong)iVar4 * 0x28;
      *param_2 = *(undefined8 *)(lVar1 + 0x10);
      lVar1 = *(longlong *)(lVar1 + 0x18);
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14990b2d6 FUN_14990b2d6 body=161 status=ok
// SIG undefined FUN_14990b2d6(void)

longlong * FUN_14990b2d6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0xe8);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else if (*(char *)(param_1 + 0xf8) == '\0') {
    cVar4 = (**(code **)(*plVar5 + 0x18))();
    if (cVar4 == '\0') {
      *(undefined8 *)(param_1 + 0xe8) = 0;
      plVar5 = *(longlong **)(param_1 + 0xf0);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xf0) = 0;
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
    *(undefined1 *)(param_1 + 0xf8) = 1;
    plVar5 = *(longlong **)(param_1 + 0xe8);
  }
  *param_2 = (longlong)plVar5;
  lVar3 = *(longlong *)(param_1 + 0xf0);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14990b4b2 FUN_14990b4b2 body=112 status=ok
// SIG undefined FUN_14990b4b2(void)

undefined8 * FUN_14990b4b2(undefined8 *param_1,undefined8 param_2)

{
  FUN_1460d0fec();
  *param_1 = &PTR_FUN_14bf02360;
  param_1[0x4f] = param_2;
  FUN_1460d1166(param_1 + 0x50);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x6f),4000);
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  return param_1;
}



// FUNCTION 14990b522 FUN_14990b522 body=32 status=ok
// SIG undefined FUN_14990b522(void)

undefined8 FUN_14990b522(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 14990b548 FUN_14990b548 body=152 status=ok
// SIG undefined FUN_14990b548(void)

undefined8 FUN_14990b548(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"OnlineServiceName";
  local_28 = 0x11;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"OnlineSubsystemNull";
  local_28 = 0x13;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,&DAT_149e43d78);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990b5e2 FUN_14990b5e2 body=38 status=ok
// SIG undefined FUN_14990b5e2(void)

undefined8 FUN_14990b5e2(undefined8 param_1,int param_2)

{
  FUN_149910788();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990b608 FUN_14990b608 body=38 status=ok
// SIG undefined FUN_14990b608(void)

undefined8 FUN_14990b608(undefined8 param_1,int param_2)

{
  FUN_145c34120();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990b62e FUN_14990b62e body=38 status=ok
// SIG undefined FUN_14990b62e(void)

undefined8 FUN_14990b62e(undefined8 param_1,int param_2)

{
  FUN_149906126();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990b654 FUN_14990b654 body=38 status=ok
// SIG undefined FUN_14990b654(void)

undefined8 FUN_14990b654(undefined8 param_1,int param_2)

{
  FUN_149906ed2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990b67a FUN_14990b67a body=38 status=ok
// SIG undefined FUN_14990b67a(void)

undefined8 FUN_14990b67a(undefined8 param_1,int param_2)

{
  FUN_1499076a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990b6a0 FUN_14990b6a0 body=38 status=ok
// SIG undefined FUN_14990b6a0(void)

undefined8 FUN_14990b6a0(undefined8 param_1,int param_2)

{
  FUN_149910838();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990b6e6 FUN_14990b6e6 body=27 status=ok
// SIG undefined FUN_14990b6e6(void)

undefined8 FUN_14990b6e6(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  return param_2;
}



// FUNCTION 14990b702 FUN_14990b702 body=223 status=ok
// SIG undefined FUN_14990b702(void)

undefined8 FUN_14990b702(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18),&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    FUN_140002266(param_2,L"HostIP: %s SessionId: %s",L"INVALID",puVar2);
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1,&local_40,1);
    puVar3 = local_40;
    if (local_38 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"HostIP: %s SessionId: %s",puVar3,puVar2);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14990b7e8 FUN_14990b7e8 body=38 status=ok
// SIG undefined FUN_14990b7e8(void)

undefined8 FUN_14990b7e8(undefined8 param_1,int param_2)

{
  FUN_1499108a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990b80e FUN_14990b80e body=178 status=ok
// SIG undefined FUN_14990b80e(void)

longlong * FUN_14990b80e(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  puVar2 = &DAT_149dfb77a;
  puVar3 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 1) != 0) {
    puVar3 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = *(undefined2 **)(param_1 + 0x10);
  }
  local_38 = param_1;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,puVar2,puVar3,&local_28);
  if (cVar1 == '\0') {
    FUN_140056680(param_2,&DAT_149dfb77a);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_20._4_4_;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990b8c2 FUN_14990b8c2 body=78 status=ok
// SIG undefined FUN_14990b8c2(void)

void FUN_14990b8c2(longlong *param_1)

{
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14990b910 FUN_14990b910 body=38 status=ok
// SIG undefined FUN_14990b910(void)

void FUN_14990b910(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14990b8c2(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 14990b936 FUN_14990b936 body=48 status=ok
// SIG undefined FUN_14990b936(void)

void FUN_14990b936(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 14990b966 FUN_14990b966 body=113 status=ok
// SIG undefined FUN_14990b966(void)

undefined8 * FUN_14990b966(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  FUN_1446b8a78(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 14990b9d8 FUN_14990b9d8 body=147 status=ok
// SIG undefined FUN_14990b9d8(void)

void FUN_14990b9d8(longlong param_1,int param_2)

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



// FUNCTION 14990ba6c FUN_14990ba6c body=38 status=ok
// SIG undefined FUN_14990ba6c(void)

undefined8 FUN_14990ba6c(undefined8 param_1,int param_2)

{
  FUN_14990bb0e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990baae FUN_14990baae body=32 status=ok
// SIG undefined FUN_14990baae(void)

undefined8 FUN_14990baae(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"DummyRealName");
  return param_2;
}



// FUNCTION 14990bace FUN_14990bace body=32 status=ok
// SIG undefined FUN_14990bace(void)

undefined8 FUN_14990bace(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"DummyDisplayName");
  return param_2;
}



// FUNCTION 14990baee FUN_14990baee body=32 status=ok
// SIG undefined FUN_14990baee(void)

undefined8 FUN_14990baee(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"DummyAuthTicket");
  return param_2;
}



// FUNCTION 14990bb0e FUN_14990bb0e body=144 status=ok
// SIG undefined FUN_14990bb0e(void)

void FUN_14990bb0e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bf01e70;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014990bb92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14990bb9e FUN_14990bb9e body=52 status=ok
// SIG undefined FUN_14990bb9e(void)

void FUN_14990bb9e(longlong *param_1)

{
  FUN_14990bbd2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14990bbd2 FUN_14990bbd2 body=307 status=ok
// SIG undefined FUN_14990bbd2(void)

void FUN_14990bbd2(longlong *param_1)

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
      FUN_14990bd06((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 14990bd06 FUN_14990bd06 body=100 status=ok
// SIG undefined FUN_14990bd06(void)

void FUN_14990bd06(longlong param_1)

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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014990bd5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14990bd6a FUN_14990bd6a body=52 status=ok
// SIG undefined FUN_14990bd6a(void)

void FUN_14990bd6a(longlong *param_1)

{
  FUN_14990bd9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14990bd9e FUN_14990bd9e body=343 status=ok
// SIG undefined FUN_14990bd9e(void)

void FUN_14990bd9e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990bef6 FUN_14990bef6 body=288 status=ok
// SIG undefined FUN_14990bef6(void)

undefined8 * FUN_14990bef6(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b4ce010;
  (**(code **)(*param_2 + 0x30))(param_2,puVar2 + 3);
  (**(code **)(*param_2 + 0x10))(param_2,puVar2 + 5);
  *puVar2 = &PTR_FUN_14bf01f20;
  *param_1 = puVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bf01f70;
  plVar3[2] = (longlong)puVar2;
  param_1[1] = plVar3;
  if (puVar2 == (undefined8 *)0x0) {
    return param_1;
  }
  if (((puVar2[1] != 0) && (puVar2[2] != 0)) && (0 < *(int *)(puVar2[2] + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    puVar2[1] = puVar2;
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar2[1] = puVar2;
    if ((longlong *)puVar2[2] == plVar3) goto LAB_14990bfee;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      puVar2[2] = plVar3;
      goto LAB_14990bfee;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  puVar2[2] = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_14990bfee:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 14990c016 FUN_14990c016 body=78 status=ok
// SIG undefined FUN_14990c016(void)

undefined8 * FUN_14990c016(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ce010;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 14990c064 FUN_14990c064 body=25 status=ok
// SIG undefined FUN_14990c064(void)

void FUN_14990c064(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014990c079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14990c07e FUN_14990c07e body=29 status=ok
// SIG undefined FUN_14990c07e(void)

undefined8 FUN_14990c07e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990c09e FUN_14990c09e body=52 status=ok
// SIG undefined FUN_14990c09e(void)

void FUN_14990c09e(longlong *param_1)

{
  FUN_14990c0d2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14990c0d2 FUN_14990c0d2 body=320 status=ok
// SIG undefined FUN_14990c0d2(void)

void FUN_14990c0d2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
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



// FUNCTION 14990c214 FUN_14990c214 body=52 status=ok
// SIG undefined FUN_14990c214(void)

void FUN_14990c214(longlong *param_1)

{
  FUN_14990c248();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14990c248 FUN_14990c248 body=309 status=ok
// SIG undefined FUN_14990c248(void)

void FUN_14990c248(longlong *param_1)

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
      FUN_14990c37e((longlong)iStack_4c * 0x48 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 14990c37e FUN_14990c37e body=92 status=ok
// SIG undefined FUN_14990c37e(void)

void FUN_14990c37e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_145842369(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4ce010;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014990c3cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14990c3da FUN_14990c3da body=124 status=ok
// SIG undefined FUN_14990c3da(void)

undefined8 * FUN_14990c3da(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b4ce010;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 14990c456 FUN_14990c456 body=132 status=ok
// SIG undefined FUN_14990c456(void)

void FUN_14990c456(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_14b438dd0;
  param_1[1] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 14990c4da FUN_14990c4da body=61 status=ok
// SIG undefined FUN_14990c4da(void)

void FUN_14990c4da(longlong *param_1)

{
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



// FUNCTION 14990c518 FUN_14990c518 body=9 status=ok
// SIG undefined FUN_14990c518(void)

void FUN_14990c518(longlong param_1)

{
  FUN_14990c594(param_1 + 0x10);
  return;
}



// FUNCTION 14990c522 FUN_14990c522 body=29 status=ok
// SIG undefined FUN_14990c522(void)

undefined8 FUN_14990c522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990c540 FUN_14990c540 body=38 status=ok
// SIG undefined FUN_14990c540(void)

undefined8 FUN_14990c540(undefined8 param_1,int param_2)

{
  FUN_14990c594();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990c566 FUN_14990c566 body=45 status=ok
// SIG undefined FUN_14990c566(void)

longlong FUN_14990c566(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x70;
  FUN_14990c594(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990c594 FUN_14990c594 body=413 status=ok
// SIG undefined FUN_14990c594(void)

void FUN_14990c594(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bf020d0;
  param_1[0xe] = &PTR_FUN_14bf022f8;
  plVar3 = (longlong *)param_1[0x2d];
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
  plVar3 = (longlong *)param_1[0x2b];
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
  plVar3 = (longlong *)param_1[0x29];
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
  plVar3 = (longlong *)param_1[0x27];
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
  plVar3 = (longlong *)param_1[0x25];
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
  plVar3 = (longlong *)param_1[0x23];
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
  plVar3 = (longlong *)param_1[0x21];
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
  plVar3 = (longlong *)param_1[0x1e];
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
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_145bfbe50(param_1);
  return;
}



// FUNCTION 14990c732 FUN_14990c732 body=38 status=ok
// SIG undefined FUN_14990c732(void)

undefined8 FUN_14990c732(undefined8 param_1,int param_2)

{
  FUN_1461c3e26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990c758 FUN_14990c758 body=45 status=ok
// SIG undefined FUN_14990c758(void)

longlong FUN_14990c758(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1461c3e26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990c786 FUN_14990c786 body=211 status=ok
// SIG undefined FUN_14990c786(void)

longlong FUN_14990c786(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  iVar2 = *(int *)(param_1 + 0x3a8);
  *(uint *)(param_1 + 0x3a8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x3ac) < iVar2 + 1U) {
    FUN_145cb6262((longlong *)(param_1 + 0x3a0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  lVar4 = (longlong)iVar2 * 0x150;
  FUN_14589e2aa(lVar3 + lVar4,param_3);
  *(undefined ***)(lVar3 + lVar4) = &PTR_FUN_14ba3d840;
  *(undefined8 *)(lVar3 + 0x118 + lVar4) = param_2;
  *(undefined4 *)(lVar3 + 0x120 + lVar4) = 0xffffffff;
  *(undefined1 *)(lVar3 + 0x124 + lVar4) = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x128 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x138 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x148 + lVar4) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  return lVar3 + lVar4;
}



// FUNCTION 14990c85a FUN_14990c85a body=272 status=ok
// SIG undefined FUN_14990c85a(void)

longlong FUN_14990c85a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  iVar2 = *(int *)(param_1 + 0x3a8);
  *(uint *)(param_1 + 0x3a8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x3ac) < iVar2 + 1U) {
    FUN_145cb6262((longlong *)(param_1 + 0x3a0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x150);
  *puVar1 = &PTR_FUN_14b4c3b18;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1412c5ebc(puVar1 + 5,param_3);
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  *puVar1 = &PTR_FUN_14ba3d840;
  puVar1[0x23] = param_2;
  *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x124) = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  return lVar3 + (longlong)iVar2 * 0x150;
}



// FUNCTION 14990c96a FUN_14990c96a body=38 status=ok
// SIG undefined FUN_14990c96a(void)

undefined8 FUN_14990c96a(undefined8 param_1,int param_2)

{
  FUN_14990cb44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990c990 FUN_14990c990 body=91 status=ok
// SIG undefined FUN_14990c990(void)

longlong FUN_14990c990(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  lVar1 = (longlong)*(int *)(param_1 + 0x3a8);
  if (0 < lVar1) {
    lVar2 = *(longlong *)(param_1 + 0x3a0);
    do {
      if (*(longlong *)(lVar2 + 0x118) == param_2) goto LAB_14990c9d7;
      lVar2 = lVar2 + 0x150;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  lVar2 = 0;
LAB_14990c9d7:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  return lVar2;
}



// FUNCTION 14990c9ec FUN_14990c9ec body=113 status=ok
// SIG undefined FUN_14990c9ec(void)

void FUN_14990c9ec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  if (0 < (longlong)*(int *)(param_1 + 0x3a8)) {
    plVar3 = (longlong *)(param_1 + 0x3a0);
    plVar1 = (longlong *)(*plVar3 + 0x118);
    lVar2 = 0;
    do {
      if (*plVar1 == param_2) {
        FUN_14592e564(plVar3);
        FUN_14592e4b2(plVar3);
        break;
      }
      lVar2 = lVar2 + 1;
      plVar1 = plVar1 + 0x2a;
    } while (*(int *)(param_1 + 0x3a8) != lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014990ca44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  return;
}



// FUNCTION 14990ca5e FUN_14990ca5e body=119 status=ok
// SIG undefined FUN_14990ca5e(void)

ulonglong FUN_14990ca5e(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  undefined7 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  uVar2 = (ulonglong)*(int *)(param_1 + 0x3a8);
  if ((longlong)uVar2 < 1) {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)param_1 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (*(char *)(*(longlong *)(param_1 + 0x3a0) + 0x3e) == '\0') {
      pcVar3 = (char *)(*(longlong *)(param_1 + 0x3a0) + 0x18e);
      uVar4 = 1;
      do {
        uVar6 = uVar4;
        if (uVar2 == uVar6) break;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 0x150;
        uVar4 = uVar6 + 1;
      } while (cVar1 != '\x01');
      uVar4 = CONCAT71(uVar5,uVar6 < uVar2);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  return uVar4 & 0xffffffff;
}



// FUNCTION 14990cad6 FUN_14990cad6 body=109 status=ok
// SIG undefined FUN_14990cad6(void)

undefined4 FUN_14990cad6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  if (0 < (longlong)*(int *)(param_1 + 0x3a8)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + 0x118 + lVar1) == param_2) {
        uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x3a0) + 0x148 + lVar1);
        goto LAB_14990cb27;
      }
      lVar1 = lVar1 + 0x150;
    } while ((longlong)*(int *)(param_1 + 0x3a8) * 0x150 - lVar1 != 0);
  }
  uVar2 = 0;
LAB_14990cb27:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
  return uVar2;
}



// FUNCTION 14990cb44 FUN_14990cb44 body=133 status=ok
// SIG undefined FUN_14990cb44(void)

void FUN_14990cb44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bf02360;
  plVar3 = (longlong *)param_1[0x77];
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
  FUN_145858433(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  FUN_145e3acb6(param_1 + 0x50);
  FUN_145859142(param_1);
  return;
}



// FUNCTION 14990cbca FUN_14990cbca body=38 status=ok
// SIG undefined FUN_14990cbca(void)

undefined8 FUN_14990cbca(undefined8 param_1,int param_2)

{
  FUN_14990cbf0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990cbf0 FUN_14990cbf0 body=67 status=ok
// SIG undefined FUN_14990cbf0(void)

void FUN_14990cbf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bf027c0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14990cc34(param_1 + 8);
  FUN_145aeaa52(param_1);
  return;
}



// FUNCTION 14990cc34 FUN_14990cc34 body=52 status=ok
// SIG undefined FUN_14990cc34(void)

void FUN_14990cc34(longlong *param_1)

{
  FUN_14990cc68();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14990cc68 FUN_14990cc68 body=336 status=ok
// SIG undefined FUN_14990cc68(void)

void FUN_14990cc68(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x60);
      FUN_148a446f0(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990cdba FUN_14990cdba body=133 status=ok
// SIG undefined FUN_14990cdba(void)

undefined8 * FUN_14990cdba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  uVar2 = DAT_14cb8e198;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b4ce010;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = uVar2;
  *param_1 = &PTR_FUN_14bf01f20;
  return param_1;
}



// FUNCTION 14990ce40 FUN_14990ce40 body=130 status=ok
// SIG undefined FUN_14990ce40(void)

void FUN_14990ce40(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990cec4 FUN_14990cec4 body=52 status=ok
// SIG undefined FUN_14990cec4(void)

undefined8 * FUN_14990cec4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bf02930;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990cf20 FUN_14990cf20 body=121 status=ok
// SIG undefined FUN_14990cf20(void)

void FUN_14990cf20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bf02930;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14990ce40(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14bf028c0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 14990cf9a FUN_14990cf9a body=121 status=ok
// SIG undefined FUN_14990cf9a(void)

void FUN_14990cf9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bf02930;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14990ce40(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14bf028c0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 14990d014 FUN_14990d014 body=157 status=ok
// SIG undefined FUN_14990d014(void)

void FUN_14990d014(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bf02930;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_14990ce40(&p_Var1->CriticalSection,param_1 + 8);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf028c0;
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014990d0a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14990d0b2 FUN_14990d0b2 body=148 status=ok
// SIG undefined FUN_14990d0b2(void)

void FUN_14990d0b2(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  pcVar2 = *(code **)(param_1 + 0x28);
  local_50 = 0;
  local_48 = 0;
  FUN_14990ce40(&local_50,param_1 + 8);
  local_68 = param_5;
  local_60 = &local_50;
  (*pcVar2)(uVar1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990d148 FUN_14990d148 body=150 status=ok
// SIG undefined FUN_14990d148(void)

undefined8
FUN_14990d148(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  pcVar2 = *(code **)(param_1 + 0x28);
  local_50 = 0;
  local_48 = 0;
  FUN_14990ce40(&local_50,param_1 + 8);
  local_68 = param_5;
  local_60 = &local_50;
  (*pcVar2)(uVar1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990d1e2 FUN_14990d1e2 body=134 status=ok
// SIG undefined FUN_14990d1e2(void)

void FUN_14990d1e2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*param_1 + 0x60))();
  }
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990d26a FUN_14990d26a body=24 status=ok
// SIG undefined FUN_14990d26a(void)

void FUN_14990d26a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014990d27e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14990d282 FUN_14990d282 body=29 status=ok
// SIG undefined FUN_14990d282(void)

undefined8 FUN_14990d282(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990d2a0 FUN_14990d2a0 body=387 status=ok
// SIG undefined FUN_14990d2a0(void)

undefined4 * FUN_14990d2a0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14990d424(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  lVar12 = puVar3[1];
  local_38[3] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  cVar7 = FUN_14990d50a(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_14990d72a(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990d424 FUN_14990d424 body=230 status=ok
// SIG undefined FUN_14990d424(void)

int * FUN_14990d424(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14990d50a FUN_14990d50a body=240 status=ok
// SIG undefined FUN_14990d50a(void)

undefined8 FUN_14990d50a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

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
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_14990d5fc(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_14990d5fc(param_1);
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
    }
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_14990bd06(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_14990d6b8(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_14990d530;
    }
  }
  uVar13 = 0;
LAB_14990d530:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990d5fc FUN_14990d5fc body=188 status=ok
// SIG undefined FUN_14990d5fc(void)

int FUN_14990d5fc(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar7 = *param_1;
      do {
        lVar8 = (longlong)iVar3;
        puVar4 = *(undefined8 **)(lVar7 + lVar8 * 0x28);
        plVar6 = *(longlong **)(lVar7 + 8 + lVar8 * 0x28);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_3) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
        if (plVar6 != (longlong *)0x0) {
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
        if (cVar5 != '\0') {
          return iVar3;
        }
        lVar7 = *param_1;
        iVar3 = *(int *)(lVar7 + 0x20 + lVar8 * 0x28);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 14990d6b8 FUN_14990d6b8 body=114 status=ok
// SIG undefined FUN_14990d6b8(void)

void FUN_14990d6b8(longlong *param_1,int param_2)

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



// FUNCTION 14990d72a FUN_14990d72a body=490 status=ok
// SIG undefined FUN_14990d72a(void)

void FUN_14990d72a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14990d916 FUN_14990d916 body=303 status=ok
// SIG undefined FUN_14990d916(void)

undefined4 * FUN_14990d916(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14990da46(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *(undefined8 *)(local_40 + 4) = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_14990db2c(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14990dc5c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990da46 FUN_14990da46 body=229 status=ok
// SIG undefined FUN_14990da46(void)

int * FUN_14990da46(longlong *param_1,int *param_2)

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



// FUNCTION 14990db2c FUN_14990db2c body=189 status=ok
// SIG undefined FUN_14990db2c(void)

undefined8 FUN_14990db2c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
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
          }
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_14990dbea(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14990dbea FUN_14990dbea body=114 status=ok
// SIG undefined FUN_14990dbea(void)

void FUN_14990dbea(longlong *param_1,int param_2)

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



// FUNCTION 14990dc5c FUN_14990dc5c body=422 status=ok
// SIG undefined FUN_14990dc5c(void)

void FUN_14990dc5c(longlong *param_1)

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



// FUNCTION 14990de04 FUN_14990de04 body=270 status=ok
// SIG undefined FUN_14990de04(void)

void FUN_14990de04(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar8 + uVar9 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      do {
        lVar3 = *param_1;
        lVar7 = (longlong)iVar6;
        puVar4 = *(undefined8 **)(lVar3 + lVar7 * 0x28);
        plVar8 = *(longlong **)(lVar3 + 8 + lVar7 * 0x28);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_2) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
        if (plVar8 != (longlong *)0x0) {
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
        }
        if (cVar5 != '\0') {
          FUN_14990df12(param_1,*puVar10);
          break;
        }
        lVar3 = lVar3 + lVar7 * 0x28;
        iVar6 = *(int *)(lVar3 + 0x20);
        puVar10 = (undefined4 *)(lVar3 + 0x20);
      } while (iVar6 != -1);
    }
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014990de4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14990df12 FUN_14990df12 body=117 status=ok
// SIG undefined FUN_14990df12(void)

void FUN_14990df12(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_14990bd06((longlong)param_2 * 0x28 + *param_1);
  FUN_14990d6b8(param_1,param_2);
  return;
}



// FUNCTION 14990df88 FUN_14990df88 body=81 status=ok
// SIG undefined FUN_14990df88(void)

void FUN_14990df88(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_14990dfda(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14990dfda FUN_14990dfda body=90 status=ok
// SIG undefined FUN_14990dfda(void)

void FUN_14990dfda(longlong *param_1,int param_2)

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
  FUN_14990e034();
  return;
}



// FUNCTION 14990e034 FUN_14990e034 body=78 status=ok
// SIG undefined FUN_14990e034(void)

void FUN_14990e034(longlong *param_1,int param_2)

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
  FUN_14990dbea(param_1,param_2);
  return;
}



// FUNCTION 14990e082 FUN_14990e082 body=180 status=ok
// SIG undefined FUN_14990e082(void)

undefined8 * FUN_14990e082(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_140c39ec6(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 14990e136 FUN_14990e136 body=207 status=ok
// SIG undefined FUN_14990e136(void)

int FUN_14990e136(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14990e180:
      lVar10 = (longlong)iVar1 * 0x60;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_14990e1fa;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14990e1fa;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14990e1eb;
    }
  }
  return -1;
LAB_14990e1fa:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14990e1eb:
  iVar1 = *(int *)(lVar4 + 0x58 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14990e180;
}



// FUNCTION 14990e206 FUN_14990e206 body=319 status=ok
// SIG undefined FUN_14990e206(void)

undefined4 * FUN_14990e206(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14990e346(param_1,local_48);
  FUN_14990e4c0(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
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
  cVar3 = FUN_14990e434(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x5c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
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
      FUN_14990e838(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990e346 FUN_14990e346 body=238 status=ok
// SIG undefined FUN_14990e346(void)

int * FUN_14990e346(longlong *param_1,int *param_2)

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



// FUNCTION 14990e434 FUN_14990e434 body=140 status=ok
// SIG undefined FUN_14990e434(void)

undefined8 FUN_14990e434(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_14990e136(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x60);
    FUN_148a446f0(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x60),param_3,0x58);
    FUN_14990e7be(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 14990e4c0 FUN_14990e4c0 body=101 status=ok
// SIG undefined FUN_14990e4c0(void)

undefined8 * FUN_14990e4c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_14990e526(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 14990e526 FUN_14990e526 body=291 status=ok
// SIG undefined FUN_14990e526(void)

undefined8 * FUN_14990e526(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
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
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar3 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_14990e64a(param_1 + 4,iVar1);
    FUN_14990e6b4(param_1[4],uVar3,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar3 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_14990e72c(param_1 + 6,iVar1);
    FUN_14990e78e(param_1[6],uVar3,iVar1);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 14990e64a FUN_14990e64a body=106 status=ok
// SIG undefined FUN_14990e64a(void)

undefined8 FUN_14990e64a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14990e6b4 FUN_14990e6b4 body=119 status=ok
// SIG undefined FUN_14990e6b4(void)

void FUN_14990e6b4(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(param_2 + 0x10);
  do {
    *param_1 = 0;
    iVar1 = *(int *)(puVar2 + -8);
    _Src = *(void **)(puVar2 + -0x10);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    *(undefined1 *)(param_1 + 2) = *puVar2;
    param_1 = param_1 + 3;
    puVar2 = puVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14990e72c FUN_14990e72c body=98 status=ok
// SIG undefined FUN_14990e72c(void)

undefined8 FUN_14990e72c(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x78,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x8888888888888889),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x78)) {
    uVar5 = uVar2 / 0x78 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x78,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14990e78e FUN_14990e78e body=47 status=ok
// SIG undefined FUN_14990e78e(void)

void FUN_14990e78e(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_14990e082(param_1,param_2);
    param_1 = param_1 + 0x78;
    param_2 = param_2 + 0x78;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14990e7be FUN_14990e7be body=122 status=ok
// SIG undefined FUN_14990e7be(void)

void FUN_14990e7be(longlong *param_1,int param_2)

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



// FUNCTION 14990e838 FUN_14990e838 body=480 status=ok
// SIG undefined FUN_14990e838(void)

void FUN_14990e838(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x60;
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
        *(int *)(lVar3 + 0x5c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar11) =
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



// FUNCTION 14990ea1a FUN_14990ea1a body=81 status=ok
// SIG undefined FUN_14990ea1a(void)

void FUN_14990ea1a(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_14990ea6c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14990ea6c FUN_14990ea6c body=90 status=ok
// SIG undefined FUN_14990ea6c(void)

void FUN_14990ea6c(longlong *param_1,int param_2)

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
  FUN_14990eac6();
  return;
}



// FUNCTION 14990eac6 FUN_14990eac6 body=59 status=ok
// SIG undefined FUN_14990eac6(void)

void FUN_14990eac6(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14990eb02(param_1,param_2);
  return;
}



// FUNCTION 14990eb02 FUN_14990eb02 body=114 status=ok
// SIG undefined FUN_14990eb02(void)

void FUN_14990eb02(longlong *param_1,int param_2)

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



// FUNCTION 14990eb74 FUN_14990eb74 body=303 status=ok
// SIG undefined FUN_14990eb74(void)

undefined4 * FUN_14990eb74(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14990eca4(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_14990ed8a(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14990ee30(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990eca4 FUN_14990eca4 body=229 status=ok
// SIG undefined FUN_14990eca4(void)

int * FUN_14990eca4(longlong *param_1,int *param_2)

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



// FUNCTION 14990ed8a FUN_14990ed8a body=166 status=ok
// SIG undefined FUN_14990ed8a(void)

undefined8 FUN_14990ed8a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
        piVar2 = (int *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          plVar7 = *(longlong **)(piVar2 + 4);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar2 = iVar3;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_14990eb02(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar2[6];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 14990ee30 FUN_14990ee30 body=422 status=ok
// SIG undefined FUN_14990ee30(void)

void FUN_14990ee30(longlong *param_1)

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



// FUNCTION 14990efd8 FUN_14990efd8 body=130 status=ok
// SIG undefined FUN_14990efd8(void)

void FUN_14990efd8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990f05c FUN_14990f05c body=121 status=ok
// SIG undefined FUN_14990f05c(void)

longlong FUN_14990f05c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14990f0d6();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_14990f14a(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x48;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x30;
}



// FUNCTION 14990f0d6 FUN_14990f0d6 body=116 status=ok
// SIG undefined FUN_14990f0d6(void)

longlong FUN_14990f0d6(longlong *param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar6;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar6 = *param_1;
      do {
        lVar5 = (longlong)iVar3;
        puVar1 = (undefined8 *)(lVar6 + lVar5 * 0x48);
        cVar2 = (**(code **)*puVar1)(puVar1,param_3);
        lVar6 = *param_1;
        if (cVar2 != '\0') {
          return lVar6 + lVar5 * 0x48;
        }
        iVar3 = *(int *)(lVar6 + 0x40 + lVar5 * 0x48);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14990f14a FUN_14990f14a body=298 status=ok
// SIG undefined FUN_14990f14a(void)

undefined4 * FUN_14990f14a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14990f276(param_1,local_48);
  FUN_14990c3da(local_40,*param_4);
  *local_40 = &PTR_FUN_14bf01f20;
  local_40[6] = 0;
  local_40[7] = 0;
  FUN_145842369(0,0);
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  cVar1 = FUN_14990f35c(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x44) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
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
      FUN_14990f484(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990f276 FUN_14990f276 body=230 status=ok
// SIG undefined FUN_14990f276(void)

int * FUN_14990f276(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 14990f35c FUN_14990f35c body=182 status=ok
// SIG undefined FUN_14990f35c(void)

undefined8 FUN_14990f35c(longlong *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
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
  char cVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar19 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[8];
    }
    iVar22 = *(int *)((longlong)plVar19 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar22 != -1) {
      lVar21 = *param_1;
      do {
        lVar20 = (longlong)iVar22;
        puVar1 = (undefined8 *)(lVar21 + lVar20 * 0x48);
        cVar18 = (**(code **)*puVar1)(puVar1,param_3);
        lVar21 = *param_1;
        if (cVar18 != '\0') {
          puVar2 = (undefined4 *)(lVar21 + lVar20 * 0x48);
          FUN_14990c37e(puVar2);
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
          uVar15 = param_3[0xd];
          uVar16 = param_3[0xe];
          uVar17 = param_3[0xf];
          puVar2[0xc] = param_3[0xc];
          puVar2[0xd] = uVar15;
          puVar2[0xe] = uVar16;
          puVar2[0xf] = uVar17;
          puVar2[8] = uVar11;
          puVar2[9] = uVar12;
          puVar2[10] = uVar13;
          puVar2[0xb] = uVar14;
          puVar2[4] = uVar7;
          puVar2[5] = uVar8;
          puVar2[6] = uVar9;
          puVar2[7] = uVar10;
          *puVar2 = uVar3;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          FUN_14990f412(param_1,*param_4);
          *param_4 = iVar22;
          return 1;
        }
        iVar22 = *(int *)(lVar21 + 0x40 + lVar20 * 0x48);
      } while (iVar22 != -1);
    }
  }
  return 0;
}



// FUNCTION 14990f412 FUN_14990f412 body=114 status=ok
// SIG undefined FUN_14990f412(void)

void FUN_14990f412(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 14990f484 FUN_14990f484 body=477 status=ok
// SIG undefined FUN_14990f484(void)

void FUN_14990f484(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 0x20 + lVar7 * 0x48);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + 0x18 + lVar7 * 0x48);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x44 + lVar7 * 0x48) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar7 * 0x48) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 14990f662 FUN_14990f662 body=48 status=ok
// SIG undefined FUN_14990f662(void)

void FUN_14990f662(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14990f692 FUN_14990f692 body=25 status=ok
// SIG undefined FUN_14990f692(void)

void FUN_14990f692(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014990f6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14990f6ac FUN_14990f6ac body=29 status=ok
// SIG undefined FUN_14990f6ac(void)

undefined8 FUN_14990f6ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990f6ca FUN_14990f6ca body=29 status=ok
// SIG undefined FUN_14990f6ca(void)

undefined8 FUN_14990f6ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990f704 FUN_14990f704 body=93 status=ok
// SIG undefined FUN_14990f704(void)

void FUN_14990f704(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3a100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14990f762 FUN_14990f762 body=93 status=ok
// SIG undefined FUN_14990f762(void)

void FUN_14990f762(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3a100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14990f7c0 FUN_14990f7c0 body=126 status=ok
// SIG undefined FUN_14990f7c0(void)

void FUN_14990f7c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3a100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02e60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014990f82f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14990f84c FUN_14990f84c body=21 status=ok
// SIG undefined FUN_14990f84c(void)

undefined8 FUN_14990f84c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14990f862 FUN_14990f862 body=29 status=ok
// SIG undefined FUN_14990f862(void)

undefined8 FUN_14990f862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990f89c FUN_14990f89c body=93 status=ok
// SIG undefined FUN_14990f89c(void)

void FUN_14990f89c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba417f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14990f8fa FUN_14990f8fa body=93 status=ok
// SIG undefined FUN_14990f8fa(void)

void FUN_14990f8fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba417f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bf02ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14990f958 FUN_14990f958 body=126 status=ok
// SIG undefined FUN_14990f958(void)

void FUN_14990f958(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba417f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02ed0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014990f9c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14990f9e4 FUN_14990f9e4 body=21 status=ok
// SIG undefined FUN_14990f9e4(void)

undefined8 FUN_14990f9e4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14990f9fa FUN_14990f9fa body=29 status=ok
// SIG undefined FUN_14990f9fa(void)

undefined8 FUN_14990f9fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990fa34 FUN_14990fa34 body=93 status=ok
// SIG undefined FUN_14990fa34(void)

void FUN_14990fa34(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf02f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14990fa92 FUN_14990fa92 body=93 status=ok
// SIG undefined FUN_14990fa92(void)

void FUN_14990fa92(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf02f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14990faf0 FUN_14990faf0 body=126 status=ok
// SIG undefined FUN_14990faf0(void)

void FUN_14990faf0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bf02f40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014990fb5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14990fb7a FUN_14990fb7a body=21 status=ok
// SIG undefined FUN_14990fb7a(void)

undefined8 FUN_14990fb7a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14990fb90 FUN_14990fb90 body=130 status=ok
// SIG undefined FUN_14990fb90(void)

void FUN_14990fb90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990fc14 FUN_14990fc14 body=376 status=ok
// SIG undefined FUN_14990fc14(void)

void FUN_14990fc14(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
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
  FUN_1408be27e(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      puVar5 = (undefined8 *)((longlong)iStack_64 * 0x28 + *local_80);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar4 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      *(undefined8 *)(lVar3 + lVar4) = 0;
      iVar2 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
      *(int *)(lVar3 + 8 + lVar4) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14990fd8e FUN_14990fd8e body=68 status=ok
// SIG undefined FUN_14990fd8e(void)

void FUN_14990fd8e(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145c26966(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148fc3ec4(param_1,param_2);
  return;
}



// FUNCTION 14990fdd4 FUN_14990fdd4 body=203 status=ok
// SIG undefined FUN_14990fdd4(void)

int FUN_14990fdd4(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14990fe1e:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14990fe94;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14990fe94;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14990fe85;
    }
  }
  return -1;
LAB_14990fe94:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14990fe85:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14990fe1e;
}



// FUNCTION 14990fea0 FUN_14990fea0 body=9 status=ok
// SIG undefined FUN_14990fea0(void)

void FUN_14990fea0(longlong param_1)

{
  FUN_148fc17be(param_1 + 0x10);
  return;
}



// FUNCTION 14990feaa FUN_14990feaa body=29 status=ok
// SIG undefined FUN_14990feaa(void)

undefined8 FUN_14990feaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990fec8 FUN_14990fec8 body=319 status=ok
// SIG undefined FUN_14990fec8(void)

undefined4 * FUN_14990fec8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_149910008(param_1,local_48);
  FUN_14991015c(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
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
  cVar3 = FUN_1499100ee(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
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
      FUN_14991028a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149910008 FUN_149910008 body=230 status=ok
// SIG undefined FUN_149910008(void)

int * FUN_149910008(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1499100ee FUN_1499100ee body=109 status=ok
// SIG undefined FUN_1499100ee(void)

undefined8 FUN_1499100ee(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_14990fdd4(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_149910240(puVar1);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1499101ce(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 14991015c FUN_14991015c body=113 status=ok
// SIG undefined FUN_14991015c(void)

undefined8 * FUN_14991015c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1499101ce FUN_1499101ce body=114 status=ok
// SIG undefined FUN_1499101ce(void)

void FUN_1499101ce(longlong *param_1,int param_2)

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



// FUNCTION 149910240 FUN_149910240 body=74 status=ok
// SIG undefined FUN_149910240(void)

void FUN_149910240(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14991028a FUN_14991028a body=476 status=ok
// SIG undefined FUN_14991028a(void)

void FUN_14991028a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 149910468 FUN_149910468 body=31 status=ok
// SIG undefined FUN_149910468(void)

undefined8 FUN_149910468(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1499104a4 FUN_1499104a4 body=93 status=ok
// SIG undefined FUN_1499104a4(void)

void FUN_1499104a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf03320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149910502 FUN_149910502 body=126 status=ok
// SIG undefined FUN_149910502(void)

void FUN_149910502(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bf03320;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149910571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149910580 FUN_149910580 body=21 status=ok
// SIG undefined FUN_149910580(void)

undefined8 FUN_149910580(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14991059e FUN_14991059e body=25 status=ok
// SIG undefined FUN_14991059e(void)

void FUN_14991059e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001499105b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1499105b8 FUN_1499105b8 body=29 status=ok
// SIG undefined FUN_1499105b8(void)

undefined8 FUN_1499105b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1499105d6 FUN_1499105d6 body=24 status=ok
// SIG undefined FUN_1499105d6(void)

void FUN_1499105d6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001499105ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1499105ee FUN_1499105ee body=29 status=ok
// SIG undefined FUN_1499105ee(void)

undefined8 FUN_1499105ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14991060c FUN_14991060c body=24 status=ok
// SIG undefined FUN_14991060c(void)

void FUN_14991060c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149910620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149910624 FUN_149910624 body=29 status=ok
// SIG undefined FUN_149910624(void)

undefined8 FUN_149910624(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149910642 FUN_149910642 body=24 status=ok
// SIG undefined FUN_149910642(void)

void FUN_149910642(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149910656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14991065a FUN_14991065a body=29 status=ok
// SIG undefined FUN_14991065a(void)

undefined8 FUN_14991065a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149910678 FUN_149910678 body=24 status=ok
// SIG undefined FUN_149910678(void)

void FUN_149910678(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014991068c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149910690 FUN_149910690 body=29 status=ok
// SIG undefined FUN_149910690(void)

undefined8 FUN_149910690(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1499106ae FUN_1499106ae body=25 status=ok
// SIG undefined FUN_1499106ae(void)

void FUN_1499106ae(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001499106c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1499106c8 FUN_1499106c8 body=29 status=ok
// SIG undefined FUN_1499106c8(void)

undefined8 FUN_1499106c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1499106e6 FUN_1499106e6 body=24 status=ok
// SIG undefined FUN_1499106e6(void)

void FUN_1499106e6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001499106fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1499106fe FUN_1499106fe body=29 status=ok
// SIG undefined FUN_1499106fe(void)

undefined8 FUN_1499106fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14991071c FUN_14991071c body=24 status=ok
// SIG undefined FUN_14991071c(void)

void FUN_14991071c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149910730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149910734 FUN_149910734 body=29 status=ok
// SIG undefined FUN_149910734(void)

undefined8 FUN_149910734(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149910752 FUN_149910752 body=24 status=ok
// SIG undefined FUN_149910752(void)

void FUN_149910752(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149910766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14991076a FUN_14991076a body=29 status=ok
// SIG undefined FUN_14991076a(void)

undefined8 FUN_14991076a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149910788 FUN_149910788 body=176 status=ok
// SIG undefined FUN_149910788(void)

void FUN_149910788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bf006d0;
  FUN_14990b910(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145f78c38(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145f78c70(param_1 + 5);
  *param_1 = &PTR_LAB_14ba439f0;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149910838 FUN_149910838 body=110 status=ok
// SIG undefined FUN_149910838(void)

void FUN_149910838(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bf01110;
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x00014991089a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1499108a6 FUN_1499108a6 body=126 status=ok
// SIG undefined FUN_1499108a6(void)

void FUN_1499108a6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bf01150;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_149910924(param_1 + 7);
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14ba4a890;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149910924 FUN_149910924 body=52 status=ok
// SIG undefined FUN_149910924(void)

void FUN_149910924(longlong *param_1)

{
  FUN_149910958();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149910958 FUN_149910958 body=307 status=ok
// SIG undefined FUN_149910958(void)

void FUN_149910958(longlong *param_1)

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
      FUN_149910240((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 149910a8c FUN_149910a8c body=269 status=ok
// SIG undefined FUN_149910a8c(void)

void FUN_149910a8c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  plVar1 = &local_20;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_18 != 0) && (*plVar1 != 0)) {
    FUN_140721fbe(local_18 + 0x1d8);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149910b9a FUN_149910b9a body=307 status=ok
// SIG undefined FUN_149910b9a(void)

void FUN_149910b9a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
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
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149910cce(&local_38,local_20,puVar1);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149910cce FUN_149910cce body=318 status=ok
// SIG undefined FUN_149910cce(void)

longlong * FUN_149910cce(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [28];
  char local_74;
  undefined8 local_68;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  *param_1 = 0;
  param_1[1] = 0;
  if (lVar2 != 0) {
    FUN_1405f0e9c(local_98,lVar2);
    if (local_74 == '\0') {
      do {
        local_a0 = 0;
        FUN_14485c47a(&local_a0,local_68);
        lVar2 = FUN_14479d2ce(&local_a0);
        if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x1e0) != 0)) {
          lVar3 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x1d8) + lVar3) == *param_3) {
              iVar1 = (int)param_1[1];
              *(uint *)(param_1 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
                FUN_1447d05f2(param_1,iVar1);
              }
              *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
              break;
            }
            lVar3 = lVar3 + 8;
          } while ((longlong)*(int *)(lVar2 + 0x1e0) * 8 != lVar3);
        }
        FUN_14059e512(local_98);
      } while (local_74 == '\0');
    }
    if ((local_40 & 1) != 0) {
      FUN_14024445c(local_90);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149910e0e FUN_149910e0e body=277 status=ok
// SIG undefined FUN_149910e0e(void)

void FUN_149910e0e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (*plVar1 != 0)) {
    local_18 = plVar1;
    FUN_1408ff3be(local_20 + 0x1d8);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149910f94 FUN_149910f94 body=59 status=ok
// SIG undefined FUN_149910f94(void)

undefined8 FUN_149910f94(longlong *param_1)

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



// FUNCTION 149911046 FUN_149911046 body=551 status=ok
// SIG undefined FUN_149911046(void)

void FUN_149911046(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_41;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar2 = local_38;
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
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_41;
  local_58 = local_40;
  uVar3 = FUN_14991126e(local_30,local_34,iVar2 != 0,iVar1 != 0);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14991126e FUN_14991126e body=355 status=ok
// SIG undefined FUN_14991126e(void)

longlong FUN_14991126e(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                      undefined4 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_1409ffe1d();
  lVar4 = FUN_149911dd9(uVar3);
  FUN_144757f48(lVar4,0x1000000);
  FUN_1446ddc76(&local_70,"AppleImageUtils",1);
  uVar3 = local_70;
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_1401e3324(uVar5,uVar3);
  local_80 = param_6;
  local_88 = param_5;
  local_98 = param_3;
  local_90 = param_4;
  (**(code **)(*plVar6 + 0x48))(plVar6,&local_70,param_1,param_2);
  plVar6 = local_68;
  if ((undefined8 *)(lVar4 + 0x50) != &local_70) {
    *(undefined8 *)(lVar4 + 0x50) = local_70;
    local_70 = 0;
    plVar2 = *(longlong **)(lVar4 + 0x58);
    if (local_68 != plVar2) {
      local_68 = (longlong *)0x0;
      *(longlong **)(lVar4 + 0x58) = plVar6;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar2 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  plVar6 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499113de FUN_1499113de body=551 status=ok
// SIG undefined FUN_1499113de(void)

void FUN_1499113de(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_41;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar2 = local_38;
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
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_41;
  local_58 = local_40;
  uVar3 = FUN_149911606(local_30,local_34,iVar2 != 0,iVar1 != 0);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149911606 FUN_149911606 body=355 status=ok
// SIG undefined FUN_149911606(void)

longlong FUN_149911606(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                      undefined4 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_1409ffe1d();
  lVar4 = FUN_149911dd9(uVar3);
  FUN_144757f48(lVar4,0x1000000);
  FUN_1446ddc76(&local_70,"AppleImageUtils",1);
  uVar3 = local_70;
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_1401e3324(uVar5,uVar3);
  local_80 = param_6;
  local_88 = param_5;
  local_98 = param_3;
  local_90 = param_4;
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_70,param_1,param_2);
  plVar6 = local_68;
  if ((undefined8 *)(lVar4 + 0x50) != &local_70) {
    *(undefined8 *)(lVar4 + 0x50) = local_70;
    local_70 = 0;
    plVar2 = *(longlong **)(lVar4 + 0x58);
    if (local_68 != plVar2) {
      local_68 = (longlong *)0x0;
      *(longlong **)(lVar4 + 0x58) = plVar6;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar2 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  plVar6 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149911776 FUN_149911776 body=470 status=ok
// SIG undefined FUN_149911776(void)

void FUN_149911776(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3d;
  uVar3 = FUN_14991194e(local_30,iVar2 != 0,iVar1 != 0,local_3c);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14991194e FUN_14991194e body=337 status=ok
// SIG undefined FUN_14991194e(void)

longlong FUN_14991194e(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                      undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = FUN_1409ffe1d();
  lVar4 = FUN_149911dd9(uVar3);
  FUN_144757f48(lVar4,0x1000000);
  FUN_1446ddc76(&local_60,"AppleImageUtils",1);
  uVar3 = local_60;
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_1401e3324(uVar5,uVar3);
  local_68 = param_5;
  local_78 = param_3;
  local_70 = param_4;
  (**(code **)(*plVar6 + 0x50))(plVar6,&local_60,param_1,param_2);
  plVar6 = local_58;
  if ((undefined8 *)(lVar4 + 0x50) != &local_60) {
    *(undefined8 *)(lVar4 + 0x50) = local_60;
    local_60 = 0;
    plVar2 = *(longlong **)(lVar4 + 0x58);
    if (local_58 != plVar2) {
      local_58 = (longlong *)0x0;
      *(longlong **)(lVar4 + 0x58) = plVar6;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar2 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  plVar6 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149911aac FUN_149911aac body=470 status=ok
// SIG undefined FUN_149911aac(void)

void FUN_149911aac(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3d;
  uVar3 = FUN_149911c84(local_30,iVar2 != 0,iVar1 != 0,local_3c);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149911c84 FUN_149911c84 body=337 status=ok
// SIG undefined FUN_149911c84(void)

longlong FUN_149911c84(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                      undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = FUN_1409ffe1d();
  lVar4 = FUN_149911dd9(uVar3);
  FUN_144757f48(lVar4,0x1000000);
  FUN_1446ddc76(&local_60,"AppleImageUtils",1);
  uVar3 = local_60;
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_1401e3324(uVar5,uVar3);
  local_68 = param_5;
  local_78 = param_3;
  local_70 = param_4;
  (**(code **)(*plVar6 + 0x58))(plVar6,&local_60,param_1,param_2);
  plVar6 = local_58;
  if ((undefined8 *)(lVar4 + 0x50) != &local_60) {
    *(undefined8 *)(lVar4 + 0x50) = local_60;
    local_60 = 0;
    plVar2 = *(longlong **)(lVar4 + 0x58);
    if (local_58 != plVar2) {
      local_58 = (longlong *)0x0;
      *(longlong **)(lVar4 + 0x58) = plVar6;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar2 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  plVar6 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149911dd9 FUN_149911dd9 body=148 status=ok
// SIG undefined FUN_149911dd9(void)

undefined8 FUN_149911dd9(undefined8 param_1)

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
  uVar1 = FUN_145893b38();
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



// FUNCTION 149911e72 FUN_149911e72 body=336 status=ok
// SIG undefined FUN_149911e72(void)

longlong * FUN_149911e72(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
LAB_149911ea7:
    plVar6 = (longlong *)FUN_14494321d(0x40);
    FUN_1499126ce(plVar6,L"ConvertToJPEG only supports UAppleImageInterface derived textures");
  }
  else {
    uVar5 = FUN_145bb455e();
    plVar6 = (longlong *)FUN_144718840(param_3,uVar5);
    if (plVar6 == (longlong *)0x0) goto LAB_149911ea7;
    cVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if (3 < (byte)(cVar3 - 1U)) {
      uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_140002266(local_28,L"ConvertToJPEG texture type (%d) was not supported",uVar4);
      plVar6 = (longlong *)FUN_1499128ce(local_28);
      *param_2 = (longlong)(plVar6 + 2);
      param_2[1] = (longlong)plVar6;
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
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_149911fa7;
    }
    plVar6 = (longlong *)FUN_14494321d(0x40);
    FUN_149912952(plVar6);
  }
  *param_2 = (longlong)(plVar6 + 2);
  param_2[1] = (longlong)plVar6;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_149911fa7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149911fc8 FUN_149911fc8 body=343 status=ok
// SIG undefined FUN_149911fc8(void)

longlong * FUN_149911fc8(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
LAB_149911ffd:
    plVar6 = (longlong *)FUN_14494321d(0x40);
    FUN_1499126ce(plVar6,L"ConvertToHEIF only supports UAppleImageInterface derived textures");
  }
  else {
    uVar5 = FUN_145bb455e();
    plVar6 = (longlong *)FUN_144718840(param_3,uVar5);
    if (plVar6 == (longlong *)0x0) goto LAB_149911ffd;
    cVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if (3 < (byte)(cVar3 - 1U)) {
      uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_140002266(local_28,L"ConvertToHEIF texture type (%d) was not supported",uVar4);
      plVar6 = (longlong *)FUN_1499128ce(local_28);
      *param_2 = (longlong)(plVar6 + 2);
      param_2[1] = (longlong)plVar6;
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
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_149912104;
    }
    plVar6 = (longlong *)FUN_14494321d(0x40);
    FUN_149912a44(plVar6,L"ConvertToHEIF requires iOS 11.0+ or macOS 10.13.4+");
  }
  *param_2 = (longlong)(plVar6 + 2);
  param_2[1] = (longlong)plVar6;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_149912104:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149912126 FUN_149912126 body=329 status=ok
// SIG undefined FUN_149912126(void)

longlong * FUN_149912126(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
LAB_14991215b:
    plVar6 = (longlong *)FUN_14494321d(0x40);
    FUN_149912b30(plVar6);
  }
  else {
    uVar5 = FUN_145bb455e();
    plVar6 = (longlong *)FUN_144718840(param_3,uVar5);
    if (plVar6 == (longlong *)0x0) goto LAB_14991215b;
    cVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if (3 < (byte)(cVar3 - 1U)) {
      uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_140002266(local_28,L"ConvertToPNG texture type (%d) was not supported",uVar4);
      plVar6 = (longlong *)FUN_1499128ce(local_28);
      *param_2 = (longlong)(plVar6 + 2);
      param_2[1] = (longlong)plVar6;
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
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_149912254;
    }
    plVar6 = (longlong *)FUN_14494321d(0x40);
    FUN_149912c22(plVar6);
  }
  *param_2 = (longlong)(plVar6 + 2);
  param_2[1] = (longlong)plVar6;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_149912254:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149912276 FUN_149912276 body=343 status=ok
// SIG undefined FUN_149912276(void)

longlong * FUN_149912276(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
LAB_1499122ab:
    plVar6 = (longlong *)FUN_14494321d(0x40);
    FUN_1499126ce(plVar6,L"ConvertToTIFF only supports UAppleImageInterface derived textures");
  }
  else {
    uVar5 = FUN_145bb455e();
    plVar6 = (longlong *)FUN_144718840(param_3,uVar5);
    if (plVar6 == (longlong *)0x0) goto LAB_1499122ab;
    cVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if (3 < (byte)(cVar3 - 1U)) {
      uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_140002266(local_28,L"ConvertToTIFF texture type (%d) was not supported",uVar4);
      plVar6 = (longlong *)FUN_1499128ce(local_28);
      *param_2 = (longlong)(plVar6 + 2);
      param_2[1] = (longlong)plVar6;
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
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1499123b2;
    }
    plVar6 = (longlong *)FUN_14494321d(0x40);
    FUN_149912a44(plVar6,L"ConvertToTIFF requires iOS 11.0+ or macOS 10.13.4+");
  }
  *param_2 = (longlong)(plVar6 + 2);
  param_2[1] = (longlong)plVar6;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_1499123b2:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499123d4 FUN_1499123d4 body=45 status=ok
// SIG undefined FUN_1499123d4(void)

longlong FUN_1499123d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e7b0b4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14991241a FUN_14991241a body=47 status=ok
// SIG undefined FUN_14991241a(void)

void FUN_14991241a(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149912460 FUN_149912460 body=67 status=ok
// SIG undefined FUN_149912460(void)

undefined1 FUN_149912460(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_1447a122a(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1499124cc FUN_1499124cc body=59 status=ok
// SIG undefined FUN_1499124cc(void)

undefined8 FUN_1499124cc(longlong *param_1)

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



// FUNCTION 14991256a FUN_14991256a body=51 status=ok
// SIG undefined FUN_14991256a(void)

void FUN_14991256a(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14991259e FUN_14991259e body=36 status=ok
// SIG undefined FUN_14991259e(void)

undefined8 FUN_14991259e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1499125de FUN_1499125de body=93 status=ok
// SIG undefined FUN_1499125de(void)

void FUN_1499125de(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf05f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14991263c FUN_14991263c body=123 status=ok
// SIG undefined FUN_14991263c(void)

void FUN_14991263c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bf05f50;
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



// FUNCTION 1499126b8 FUN_1499126b8 body=21 status=ok
// SIG undefined FUN_1499126b8(void)

undefined8 FUN_1499126b8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1499126ce FUN_1499126ce body=234 status=ok
// SIG undefined FUN_1499126ce(void)

undefined8 * FUN_1499126ce(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bf06020;
  FUN_140056680(&local_38);
  _Src = local_38;
  param_1[2] = &PTR_LAB_14bf06080;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  ppvVar1 = (void **)(param_1 + 6);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = &PTR_LAB_14bf06040;
  if (ppvVar1 != &local_38) {
    *(int *)(param_1 + 7) = local_30;
    if ((longlong)local_30 != 0) {
      FUN_1446dd670(ppvVar1,local_30,0);
      memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
    }
  }
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 3) = 1;
  UNLOCK();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499127d4 FUN_1499127d4 body=34 status=ok
// SIG undefined FUN_1499127d4(void)

undefined8 FUN_1499127d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149912800 FUN_149912800 body=83 status=ok
// SIG undefined FUN_149912800(void)

undefined8 * FUN_149912800(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
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



// FUNCTION 14991288e FUN_14991288e body=62 status=ok
// SIG undefined FUN_14991288e(void)

undefined8 * FUN_14991288e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bf06080;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1499128ce FUN_1499128ce body=131 status=ok
// SIG undefined FUN_1499128ce(void)

undefined8 * FUN_1499128ce(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x40);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14bf06020;
  puVar1[2] = &PTR_LAB_14bf06080;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = &PTR_LAB_14bf06040;
  FUN_144a787a6(puVar1 + 6,param_1);
  LOCK();
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(puVar1 + 3) = 1;
  UNLOCK();
  return puVar1;
}



// FUNCTION 149912952 FUN_149912952 body=241 status=ok
// SIG undefined FUN_149912952(void)

undefined8 * FUN_149912952(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bf06020;
  FUN_140056680(&local_38,L"ConvertToJPEG requires iOS 10.0+ or macOS 10.12+");
  _Src = local_38;
  param_1[2] = &PTR_LAB_14bf06080;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  ppvVar1 = (void **)(param_1 + 6);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = &PTR_LAB_14bf06040;
  if (ppvVar1 != &local_38) {
    *(int *)(param_1 + 7) = local_30;
    if ((longlong)local_30 != 0) {
      FUN_1446dd670(ppvVar1,local_30,0);
      memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
    }
  }
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 3) = 1;
  UNLOCK();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149912a44 FUN_149912a44 body=234 status=ok
// SIG undefined FUN_149912a44(void)

undefined8 * FUN_149912a44(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bf06020;
  FUN_140056680(&local_38);
  _Src = local_38;
  param_1[2] = &PTR_LAB_14bf06080;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  ppvVar1 = (void **)(param_1 + 6);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = &PTR_LAB_14bf06040;
  if (ppvVar1 != &local_38) {
    *(int *)(param_1 + 7) = local_30;
    if ((longlong)local_30 != 0) {
      FUN_1446dd670(ppvVar1,local_30,0);
      memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
    }
  }
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 3) = 1;
  UNLOCK();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149912b30 FUN_149912b30 body=241 status=ok
// SIG undefined FUN_149912b30(void)

undefined8 * FUN_149912b30(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bf06020;
  FUN_140056680(&local_38,L"ConvertToPNG only supports UAppleImageInterface derived textures");
  _Src = local_38;
  param_1[2] = &PTR_LAB_14bf06080;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  ppvVar1 = (void **)(param_1 + 6);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = &PTR_LAB_14bf06040;
  if (ppvVar1 != &local_38) {
    *(int *)(param_1 + 7) = local_30;
    if ((longlong)local_30 != 0) {
      FUN_1446dd670(ppvVar1,local_30,0);
      memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
    }
  }
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 3) = 1;
  UNLOCK();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149912c22 FUN_149912c22 body=241 status=ok
// SIG undefined FUN_149912c22(void)

undefined8 * FUN_149912c22(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bf06020;
  FUN_140056680(&local_38,L"ConvertToPNG requires iOS 11.0+ or macOS 10.13.4+");
  _Src = local_38;
  param_1[2] = &PTR_LAB_14bf06080;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  ppvVar1 = (void **)(param_1 + 6);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = &PTR_LAB_14bf06040;
  if (ppvVar1 != &local_38) {
    *(int *)(param_1 + 7) = local_30;
    if ((longlong)local_30 != 0) {
      FUN_1446dd670(ppvVar1,local_30,0);
      memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
    }
  }
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 3) = 1;
  UNLOCK();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149912d1a FUN_149912d1a body=155 status=ok
// SIG undefined FUN_149912d1a(void)

void FUN_149912d1a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_149912db6(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149912db6 FUN_149912db6 body=244 status=ok
// SIG undefined FUN_149912db6(void)

undefined4 FUN_149912db6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  uVar1 = DAT_14cc32850;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_1;
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_14493e38c(uVar3,uVar1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4);
  FUN_1400021e4(&local_28,&local_48);
  puVar5 = local_48;
  if (local_40 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_38,L"%s%s",&DAT_14bf06e86,puVar5);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar5 = local_38;
  if (local_30 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_50,puVar5,1);
  uVar2 = (**(code **)(*plVar4 + 0x408))(plVar4,local_50);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149912eac FUN_149912eac body=196 status=ok
// SIG undefined FUN_149912eac(void)

void FUN_149912eac(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
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
  FUN_149912f72(&local_30,local_20);
  FUN_1468c505c(param_3,&local_30);
  FUN_140195631(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149912f72 FUN_149912f72 body=486 status=ok
// SIG undefined FUN_149912f72(void)

undefined8 * FUN_149912f72(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  undefined2 *local_1a0;
  int local_198;
  undefined8 local_190;
  undefined1 *local_188;
  undefined1 local_17c [4];
  undefined2 *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = DAT_14cc32850;
  local_190 = param_2;
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_14493e38c(uVar2,uVar1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3);
  FUN_1400021e4(&local_190,&local_178);
  puVar4 = local_178;
  if ((int)uStack_170 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_1a0,L"%s%s",&DAT_14bf06e86,puVar4);
  if (local_178 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_108 = 0;
  local_100 = 0;
  local_178 = (undefined2 *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_36 = 1;
  puVar4 = local_1a0;
  if (local_198 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(local_1a8,puVar4,1);
  local_188 = local_1a8;
  FUN_149913a1e(&local_128,local_17c);
  (**(code **)(*plVar3 + 0x50))(plVar3,&local_178,param_1,1);
  FUN_14019571a(&local_178);
  if (local_1a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_149913b32(*param_1,*(undefined4 *)(param_1 + 1));
  if ((local_28 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14991315a FUN_14991315a body=139 status=ok
// SIG undefined FUN_14991315a(void)

void FUN_14991315a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1499131e6(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499131e6 FUN_1499131e6 body=223 status=ok
// SIG undefined FUN_1499131e6(void)

undefined8 * FUN_1499131e6(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined **local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 **local_60;
  longlong local_58 [3];
  undefined *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = DAT_14cc32850;
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_14493e38c(uVar2,uVar1);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3);
  local_78 = &local_40;
  local_40 = &DAT_14bf06e86;
  local_38 = 3;
  local_80 = local_58;
  local_58[0] = 0;
  local_58[1] = 0;
  local_60 = &local_80;
  local_68 = FUN_1446bd036;
  local_70 = param_1;
  (**(code **)(*plVar3 + 0x430))(plVar3);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14063460b(*param_1,*(undefined4 *)(param_1 + 1));
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


