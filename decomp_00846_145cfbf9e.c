// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145cfbf9e FUN_145cfbf9e body=144 status=ok
// SIG undefined FUN_145cfbf9e(void)

void FUN_145cfbf9e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x168);
  local_20 = *(undefined8 *)*param_2;
  local_18 = (longlong *)((undefined8 *)*param_2)[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_145cfc030(lVar3 + 0x560,&local_20);
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfc030 FUN_145cfc030 body=173 status=ok
// SIG undefined FUN_145cfc030(void)

void FUN_145cfc030(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145cfc0c7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145cfc0c7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145cfc0de FUN_145cfc0de body=38 status=ok
// SIG undefined FUN_145cfc0de(void)

undefined8 FUN_145cfc0de(undefined8 param_1,int param_2)

{
  FUN_145cfc104();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cfc104 FUN_145cfc104 body=110 status=ok
// SIG undefined FUN_145cfc104(void)

void FUN_145cfc104(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a452750;
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
                    /* WARNING: Could not recover jumptable at 0x000145cfc166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145cfc172 FUN_145cfc172 body=24 status=ok
// SIG undefined FUN_145cfc172(void)

void FUN_145cfc172(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145cfc186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145cfc18a FUN_145cfc18a body=38 status=ok
// SIG undefined FUN_145cfc18a(void)

undefined8 FUN_145cfc18a(undefined8 param_1,int param_2)

{
  FUN_145cfc2cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cfc1b0 FUN_145cfc1b0 body=42 status=ok
// SIG undefined FUN_145cfc1b0(void)

void FUN_145cfc1b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145cfc1da(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145cfc1da FUN_145cfc1da body=242 status=ok
// SIG undefined FUN_145cfc1da(void)

void FUN_145cfc1da(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140457ffc(*param_1 + 0x240,param_1);
  if (*param_1 != param_1[2]) {
    FUN_140457ffc(param_1[2] + 0x240,param_1);
  }
  FUN_144760e21(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x000145cfc2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145cfc2cc FUN_145cfc2cc body=474 status=ok
// SIG undefined FUN_145cfc2cc(void)

void FUN_145cfc2cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a4508d0;
  param_1[1] = &PTR_FUN_14a450900;
  param_1[0xc] = &PTR_LAB_14a450930;
  FUN_140457ffc(&DAT_14c8673d8,param_1);
  uVar2 = FUN_140c61bfa();
  FUN_140457ffc(uVar2,param_1);
  uVar2 = FUN_140b631de();
  FUN_140457ffc(uVar2,param_1);
  if (DAT_14ca84d88 == '\x01') {
    FUN_14080c2b4();
    FUN_1410bdeec(param_1);
  }
  puVar1 = (undefined8 *)param_1[0x4c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x4a] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0x4b],1);
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_145974c50(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_145cfc51d(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_145974d3e(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_145cfc56a(param_1 + 0x13);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  FUN_140af926c(param_1 + 0xc);
  FUN_145cfc4a6(param_1 + 1);
  return;
}



// FUNCTION 145cfc4a6 FUN_145cfc4a6 body=63 status=ok
// SIG undefined FUN_145cfc4a6(void)

void FUN_145cfc4a6(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149edad80;
  FUN_14152da2c();
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145cfc4e6(param_1 + 1);
  return;
}



// FUNCTION 145cfc4e6 FUN_145cfc4e6 body=55 status=ok
// SIG undefined FUN_145cfc4e6(void)

void FUN_145cfc4e6(longlong *param_1)

{
  FUN_145cfc8da(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cfc51d FUN_145cfc51d body=77 status=ok
// SIG undefined FUN_145cfc51d(void)

void FUN_145cfc51d(longlong param_1,int param_2)

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



// FUNCTION 145cfc56a FUN_145cfc56a body=175 status=ok
// SIG undefined FUN_145cfc56a(void)

void FUN_145cfc56a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_145cfc61a(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_145cfc650(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145cfc686(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145cfc6bc(param_1);
  return;
}



// FUNCTION 145cfc61a FUN_145cfc61a body=53 status=ok
// SIG undefined FUN_145cfc61a(void)

void FUN_145cfc61a(longlong *param_1)

{
  FUN_145cfc6f2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cfc650 FUN_145cfc650 body=53 status=ok
// SIG undefined FUN_145cfc650(void)

void FUN_145cfc650(longlong *param_1)

{
  FUN_1459750ac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cfc686 FUN_145cfc686 body=53 status=ok
// SIG undefined FUN_145cfc686(void)

void FUN_145cfc686(longlong *param_1)

{
  FUN_145974eaa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cfc6bc FUN_145cfc6bc body=53 status=ok
// SIG undefined FUN_145cfc6bc(void)

void FUN_145cfc6bc(longlong *param_1)

{
  FUN_14597520a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cfc6f2 FUN_145cfc6f2 body=378 status=ok
// SIG undefined FUN_145cfc6f2(void)

void FUN_145cfc6f2(longlong *param_1)

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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cfc86e FUN_145cfc86e body=107 status=ok
// SIG undefined FUN_145cfc86e(void)

void FUN_145cfc86e(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145cfc8bd:
      FUN_145cfc8da(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14152dc0e(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145cfc8bd;
  FUN_145cfc95c(param_1);
  FUN_145cfc8da(param_1,param_2);
  return;
}



// FUNCTION 145cfc8da FUN_145cfc8da body=129 status=ok
// SIG undefined FUN_145cfc8da(void)

void FUN_145cfc8da(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145cfc95c FUN_145cfc95c body=325 status=ok
// SIG undefined FUN_145cfc95c(void)

void FUN_145cfc95c(longlong *param_1)

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



// FUNCTION 145cfcaa8 FUN_145cfcaa8 body=92 status=ok
// SIG undefined FUN_145cfcaa8(void)

void FUN_145cfcaa8(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = FUN_1459ecf34();
  uVar3 = FUN_1409ffe1d();
  lVar4 = FUN_145cfcb04(uVar3,uVar2);
  *(longlong *)(param_1 + 8) = lVar4;
  uVar1 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  FUN_1447f71cc(lVar4,0x40000000);
  return;
}



// FUNCTION 145cfcb04 FUN_145cfcb04 body=177 status=ok
// SIG undefined FUN_145cfcb04(void)

undefined8 FUN_145cfcb04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfcbc2 FUN_145cfcbc2 body=263 status=ok
// SIG undefined FUN_145cfcbc2(void)

undefined8 * FUN_145cfcbc2(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ecae36();
  *param_1 = &PTR_FUN_14b85af60;
  local_50 = DAT_14cbe5280;
  local_58 = DAT_14cbe5278;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe5290);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b81bd00,0);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfccd6 FUN_145cfccd6 body=263 status=ok
// SIG undefined FUN_145cfccd6(void)

undefined8 * FUN_145cfccd6(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ecae36();
  *param_1 = &PTR_FUN_14b85b240;
  local_50 = DAT_14cbe52c0;
  local_58 = DAT_14cbe52b8;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe52d0);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b81bd00,0);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3fe66666;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfcdea FUN_145cfcdea body=263 status=ok
// SIG undefined FUN_145cfcdea(void)

undefined8 * FUN_145cfcdea(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ecae36();
  *param_1 = &PTR_FUN_14b85b520;
  local_50 = DAT_14cbe5300;
  local_58 = DAT_14cbe52f8;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe5310);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"deep_freeze_pips",0);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x40066666;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfcef2 FUN_145cfcef2 body=310 status=ok
// SIG undefined FUN_145cfcef2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cfcef2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc31a00) {
    FUN_144b3d300(&DAT_14cc31a00);
    if (DAT_14cc31a00 == -1) {
      FUN_145cfd052();
      FUN_145cfd18a();
      FUN_140db5666(&DAT_14cc31958,0,&DAT_14cc318f0,L"FHardwareVideoDecodingVS",
                    L"/Plugin/WmfMedia/Private/MediaHardwareVideoDecoding.usf",L"MainVS",0,1,
                    FUN_1498e2fdc,FUN_1498e2f7c,&LAB_1498e2f48,&LAB_1498e2f44,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc32070);
      _DAT_14cc31958 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1446a33fd);
      _Init_thread_footer(&DAT_14cc31a00);
    }
  }
  return &DAT_14cc31958;
}



// FUNCTION 145cfd028 Unwind@145cfd028 body=42 status=ok
// SIG undefined Unwind@145cfd028(void)

void Unwind_145cfd028(void)

{
  FUN_144d8db2c(&DAT_14cc31a00);
  return;
}



// FUNCTION 145cfd052 FUN_145cfd052 body=233 status=ok
// SIG undefined FUN_145cfd052(void)

void FUN_145cfd052(void)

{
  longlong local_28 [2];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc320f0) {
    FUN_144b3d300(&DAT_14cc320f0);
    if (DAT_14cc320f0 == -1) {
      FUN_145cfd2d4(local_28);
      FUN_140b49562(&DAT_14cc32070,0,1,L"FHardwareVideoDecodingShaderParams",
                    L"FHardwareVideoDecodingShaderParams",0,0,"Unknown",0xd,0x80,local_28,0,0,0);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1446a78de);
      _Init_thread_footer(&DAT_14cc320f0);
    }
  }
  return;
}



// FUNCTION 145cfd13c Unwind@145cfd13c body=40 status=ok
// SIG undefined Unwind@145cfd13c(void)

void Unwind_145cfd13c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 145cfd164 Unwind@145cfd164 body=38 status=ok
// SIG undefined Unwind@145cfd164(void)

void Unwind_145cfd164(void)

{
  FUN_144d8db2c(&DAT_14cc320f0);
  return;
}



// FUNCTION 145cfd18a FUN_145cfd18a body=205 status=ok
// SIG undefined FUN_145cfd18a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfd18a(void)

{
  if ((DAT_14cc31957 & 2) == 0) {
    DAT_14cc31957 = DAT_14cc31957 | 2;
    _DAT_14cc318f8 = L"FHardwareVideoDecodingVS";
    _DAT_14cc31910 = FUN_146826540;
    _DAT_14cc31918 = FUN_146825d77;
    _DAT_14cc31920 = FUN_146825fd6;
    _DAT_14cc31928 = FUN_1407e02ea;
    _DAT_14cc31930 = FUN_146826273;
    _DAT_14cc31908 = FUN_1498e2f16;
    _DAT_14cc31948 = 0xffffffff000000e0;
    _DAT_14cc31950 = 8;
    DAT_14cc31954 = 0;
    _DAT_14cc31938 = &LAB_1498e2f40;
    FUN_145cfd258();
    FUN_1407e00cc(&DAT_14cc318f0);
    return;
  }
  return;
}



// FUNCTION 145cfd258 FUN_145cfd258 body=123 status=ok
// SIG undefined FUN_145cfd258(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfd258(void)

{
  _DAT_14cc320f8 = L"BASE";
  DAT_14cc32122 = 4;
  _DAT_14cc32100 = FUN_140b35ae4();
  _DAT_14cc32108 = DAT_14cc31900;
  _DAT_14cc32110 = &LAB_14682652b;
  DAT_14cc31900 = &DAT_14cc320f8;
  DAT_14cc31955 = DAT_14cc31955 + '\x01';
  _DAT_14cc32118 = 0x100000000;
  if (*(char *)(_DAT_14cc32100 + 100) != '\0') {
    DAT_14cc31956 = DAT_14cc31956 + '\x01';
  }
  return;
}



// FUNCTION 145cfd2d4 FUN_145cfd2d4 body=207 status=ok
// SIG undefined FUN_145cfd2d4(void)

longlong * FUN_145cfd2d4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  
  uVar19 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar16 = FUN_145cfd3ca;
  do {
    pcVar16 = (code *)(*pcVar16)(uVar19,param_1);
    uVar19 = extraout_XMM0_Da;
  } while (pcVar16 != (code *)0x0);
  uVar3 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar3) {
    lVar4 = *param_1;
    lVar17 = (longlong)(int)uVar3 * 0x30;
    lVar18 = 0;
    do {
      lVar17 = lVar17 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar18);
      uVar6 = ((undefined8 *)(lVar4 + lVar18))[1];
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar18);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar18);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = *(undefined8 *)(lVar4 + lVar17);
      uVar12 = ((undefined8 *)(lVar4 + lVar17))[1];
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar17);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar17);
      uVar15 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar15;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar18);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      *(undefined8 *)(lVar4 + lVar18) = uVar11;
      ((undefined8 *)(lVar4 + lVar18))[1] = uVar12;
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar17);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar17);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined8 *)(lVar4 + lVar17) = uVar5;
      ((undefined8 *)(lVar4 + lVar17))[1] = uVar6;
      lVar18 = lVar18 + 0x30;
    } while ((ulonglong)(uVar3 >> 1) * 0x30 != lVar18);
  }
  return param_1;
}



// FUNCTION 145cfd3a4 Unwind@145cfd3a4 body=38 status=ok
// SIG undefined Unwind@145cfd3a4(void)

void Unwind_145cfd3a4(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 145cfd3ca FUN_145cfd3ca body=136 status=ok
// SIG undefined FUN_145cfd3ca(void)

code * FUN_145cfd3ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrgbToLinear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498e7d18;
}



// FUNCTION 145cfd452 FUN_145cfd452 body=138 status=ok
// SIG undefined FUN_145cfd452(void)

code * FUN_145cfd452(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureUV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498e7e2c;
}



// FUNCTION 145cfd4dc FUN_145cfd4dc body=138 status=ok
// SIG undefined FUN_145cfd4dc(void)

code * FUN_145cfd4dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BilinearClampedSamplerUV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1467712a4;
}



// FUNCTION 145cfd566 FUN_145cfd566 body=115 status=ok
// SIG undefined FUN_145cfd566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfd566(void)

{
  _DAT_14cc324e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc324e8,1);
  DAT_14cc324d8 = 0;
  if (DAT_14cc324d0 != 0) {
    FUN_1400020a8();
  }
  FUN_145cfd5da();
                    /* WARNING: Could not recover jumptable at 0x000145cfd5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cc32468);
  return;
}



// FUNCTION 145cfd5da FUN_145cfd5da body=54 status=ok
// SIG undefined FUN_145cfd5da(void)

void FUN_145cfd5da(void)

{
  FUN_145cfd610();
  if (DAT_14cc324b0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cc32490 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cfd610 FUN_145cfd610 body=106 status=ok
// SIG undefined FUN_145cfd610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfd610(void)

{
  DAT_14cc32498 = 0;
  if (DAT_14cc3249c != 0) {
    FUN_140549ad6(&DAT_14cc32490,0);
  }
  _DAT_14cc324c0 = 0xffffffff;
  DAT_14cc324b8 = 0;
  if (DAT_14cc324bc < 0x81) {
    return;
  }
  DAT_14cc324bc = 0x80;
  FUN_1446efbd8(&DAT_14cc324a0,0);
  return;
}



// FUNCTION 145cfd67a FUN_145cfd67a body=54 status=ok
// SIG undefined FUN_145cfd67a(void)

void FUN_145cfd67a(void)

{
  FUN_145cfd6b0();
  if (DAT_14c867e78 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c867e58 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cfd6b0 FUN_145cfd6b0 body=348 status=ok
// SIG undefined FUN_145cfd6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfd6b0(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c867e68;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c867e80 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c867e58;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_1457d3294(*local_58 + (longlong)iStack_3c * 0xa0 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c867e60 = 0;
  if (DAT_14c867e64 != 0) {
    FUN_14152de66(&DAT_14c867e58,0);
  }
  _DAT_14c867e88 = 0xffffffff;
  DAT_14c867e80 = 0;
  if (0x80 < DAT_14c867e84) {
    DAT_14c867e84 = 0x80;
    FUN_1446efbd8(&DAT_14c867e68,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfd80e FUN_145cfd80e body=225 status=ok
// SIG undefined FUN_145cfd80e(void)

void FUN_145cfd80e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
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
  FUN_145cfd8f0(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfd8f0 FUN_145cfd8f0 body=84 status=ok
// SIG undefined FUN_145cfd8f0(void)

void FUN_145cfd8f0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (lVar3 != 0) {
        FUN_145cfd944(lVar3,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145cfd944 FUN_145cfd944 body=275 status=ok
// SIG undefined FUN_145cfd944(void)

void FUN_145cfd944(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = *(int **)(param_1 + 0x60);
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (*piVar5 == param_2) {
    piVar6 = (int *)0x0;
  }
  else {
    do {
      piVar6 = piVar5;
      piVar5 = *(int **)(piVar6 + 0x22);
      if (piVar5 == (int *)0x0) {
        return;
      }
    } while (*piVar5 != param_2);
  }
  if (((*(longlong *)(piVar5 + 0x24) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (lVar3 = FUN_1447210f0(), lVar3 != 0)) {
    piVar1 = piVar5 + 0x24;
    lVar3 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x30));
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    lVar3 = FUN_144a61814(uVar2,piVar1);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,*(undefined8 *)piVar1);
    }
    piVar1[0] = 0;
    piVar1[1] = 0;
  }
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)(param_1 + 0x60);
  }
  else {
    piVar6 = piVar6 + 0x22;
  }
  *(undefined8 *)piVar6 = *(undefined8 *)(piVar5 + 0x22);
  if (*(longlong *)(piVar5 + 0x1c) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(piVar5 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(piVar5);
  return;
}



// FUNCTION 145cfda58 FUN_145cfda58 body=196 status=ok
// SIG undefined FUN_145cfda58(void)

longlong FUN_145cfda58(uint param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c98e778 != DAT_14c98e7a4) {
    puVar3 = &DAT_14c98e7a8;
    if (DAT_14c98e7b0 != (undefined *)0x0) {
      puVar3 = DAT_14c98e7b0;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14c98e7b8 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = DAT_14c98e770 + (longlong)iVar1 * 0x80;
        if (*(longlong *)(DAT_14c98e770 + (longlong)iVar1 * 0x80) == *param_2) {
          if (lVar2 != 0) goto LAB_145cfdac9;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x78);
      } while (iVar1 != -1);
    }
  }
  local_20 = param_2;
  FUN_145cfdb1e(&local_14,param_1);
  lVar2 = (longlong)local_14 * 0x80 + DAT_14c98e770;
LAB_145cfdac9:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 145cfdb1e FUN_145cfdb1e body=288 status=ok
// SIG undefined FUN_145cfdb1e(void)

undefined4 * FUN_145cfdb1e(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145cfe050(local_48);
  FUN_145cfdc40(param_3,local_40);
  *(undefined4 *)(local_40 + 0x78) = 0xffffffff;
  cVar2 = FUN_145cfdd68(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14c98e778 - DAT_14c98e7a4;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14c98e7b8)) {
      param_2 = DAT_14c98e7b8 - 1U & param_2;
      *(uint *)(local_40 + 0x7c) = param_2;
      puVar4 = DAT_14c98e7b0;
      if (DAT_14c98e7b0 == (undefined *)0x0) {
        puVar4 = &DAT_14c98e7a8;
      }
      *(undefined4 *)(local_40 + 0x78) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14c98e7b8 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14c98e7b0;
      if (DAT_14c98e7b0 == (undefined *)0x0) {
        puVar4 = &DAT_14c98e7a8;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14c98e7b8 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14c98e7b8 = iVar6;
      FUN_145cfe334();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfdc40 FUN_145cfdc40 body=168 status=ok
// SIG undefined FUN_145cfdc40(void)

undefined8 * FUN_145cfdc40(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 local_90 [80];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145cfde1a(local_90);
  *param_2 = *(undefined8 *)*param_1;
  FUN_145cfdcea(param_2 + 1,local_90);
  param_2[0xb] = local_40;
  local_40 = 0;
  *(undefined4 *)(param_2 + 0xc) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 100) = local_38._4_4_;
  local_38 = 0;
  param_2[0xd] = local_30;
  param_2[0xe] = uStack_28;
  local_30 = 0;
  uStack_28 = 0;
  FUN_14582c2d6(local_90);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfdcea FUN_145cfdcea body=125 status=ok
// SIG undefined FUN_145cfdcea(void)

undefined8 * FUN_145cfdcea(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145cfe15e();
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



// FUNCTION 145cfdd68 FUN_145cfdd68 body=177 status=ok
// SIG undefined FUN_145cfdd68(void)

undefined8 FUN_145cfdd68(uint param_1,longlong *param_2,int *param_3)

{
  void *_Dst;
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_14c98e778 - DAT_14c98e7a4 != 1) && (DAT_14c98e778 != DAT_14c98e7a4)) {
    puVar1 = &DAT_14c98e7a8;
    if (DAT_14c98e7b0 != (undefined *)0x0) {
      puVar1 = DAT_14c98e7b0;
    }
    iVar2 = *(int *)(puVar1 + (ulonglong)(DAT_14c98e7b8 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(DAT_14c98e770 + (longlong)iVar2 * 0x80);
        if (*(longlong *)(DAT_14c98e770 + (longlong)iVar2 * 0x80) == *param_2) {
          FUN_14582c2d6((longlong)_Dst + 8);
          memmove(_Dst,param_2,0x78);
          FUN_145e10940(&DAT_14c98e770,*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x78);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145cfde1a FUN_145cfde1a body=190 status=ok
// SIG undefined FUN_145cfde1a(void)

undefined8 * FUN_145cfde1a(undefined8 *param_1)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  FUN_145cfdeda(param_1 + 10,&local_78);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1411a9250(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfdeda FUN_145cfdeda body=160 status=ok
// SIG undefined FUN_145cfdeda(void)

void FUN_145cfdeda(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_145cfdf7a();
  bVar5 = false;
  do {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1469ea66e(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar4 = (longlong)iVar1 * 0x50;
    *(undefined8 *)(lVar2 + 0x20 + lVar4) = 0;
    *(undefined4 *)(lVar2 + 0x28 + lVar4) = 0;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    ((undefined8 *)(lVar2 + lVar4))[1] = 0;
    *(undefined8 *)(lVar2 + 0x2c + lVar4) = 0xffffffff00000080;
    *(undefined4 *)(lVar2 + 0x34 + lVar4) = 0;
    *(undefined8 *)(lVar2 + 0x40 + lVar4) = 0;
    *(undefined4 *)(lVar2 + 0x48 + lVar4) = 0;
    FUN_1411a95fa(lVar2 + lVar4,param_2);
    bVar3 = !bVar5;
    bVar5 = true;
  } while (bVar3);
  return;
}



// FUNCTION 145cfdf7a FUN_145cfdf7a body=52 status=ok
// SIG undefined FUN_145cfdf7a(void)

void FUN_145cfdf7a(undefined8 *param_1)

{
  FUN_1411a9211(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 2) {
    FUN_145cfdfae(param_1);
    return;
  }
  return;
}



// FUNCTION 145cfdfae FUN_145cfdfae body=162 status=ok
// SIG undefined FUN_145cfdfae(void)

undefined8 FUN_145cfdfae(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0xa0;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e0a];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xa0,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if (1 < (int)(uVar3 / 0x50)) {
    uVar4 = uVar3 / 0x50 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x50,8);
  }
  return uVar2;
}



// FUNCTION 145cfe050 FUN_145cfe050 body=269 status=ok
// SIG undefined FUN_145cfe050(void)

int * FUN_145cfe050(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c98e7a0;
  iVar3 = DAT_14c98e778;
  if (DAT_14c98e7a4 == 0) {
    iVar2 = DAT_14c98e778 + 1;
    bVar7 = DAT_14c98e77c == DAT_14c98e778;
    DAT_14c98e778 = iVar2;
    if (bVar7) {
      FUN_140eca382(&DAT_14c98e770,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c98e780,1);
    puVar4 = DAT_14c98e790;
    if (DAT_14c98e790 == (undefined *)0x0) {
      puVar4 = &DAT_14c98e780;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c98e7a0;
    DAT_14c98e7a0 = *(int *)(DAT_14c98e770 + 4 + lVar6 * 0x80);
    DAT_14c98e7a4 = DAT_14c98e7a4 + -1;
    if (DAT_14c98e7a4 != 0) {
      *(undefined4 *)(DAT_14c98e770 + (longlong)DAT_14c98e7a0 * 0x80) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c98e780;
  if (DAT_14c98e790 != (undefined *)0x0) {
    puVar4 = DAT_14c98e790;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x80 + DAT_14c98e770;
  return param_1;
}



// FUNCTION 145cfe15e FUN_145cfe15e body=469 status=ok
// SIG undefined FUN_145cfe15e(void)

longlong * FUN_145cfe15e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar10 = 0;
    local_50 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar8 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, local_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 0x10 + (longlong)iVar9 * 0x20);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (((local_68._4_4_ != iVar10) || (local_70 != plVar1)) || (local_80 != param_1));
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
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145cfe334 FUN_145cfe334 body=526 status=ok
// SIG undefined FUN_145cfe334(void)

void FUN_145cfe334(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98e7b0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c98e7b0,0,0,4);
  }
  uVar3 = DAT_14c98e7b8;
  uVar2 = local_50;
  if (DAT_14c98e7b8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c98e7a8,0,DAT_14c98e7b8,4);
    if (0 < (int)uVar3) {
      do {
        puVar5 = DAT_14c98e7b0;
        if (DAT_14c98e7b0 == (undefined *)0x0) {
          puVar5 = &DAT_14c98e7a8;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c98e7b8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c98e780;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c98e798 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c98e770;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x80;
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c98e7b8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x7c + lVar6) = iVar8;
        puVar5 = DAT_14c98e7b0;
        if (DAT_14c98e7b0 == (undefined *)0x0) {
          puVar5 = &DAT_14c98e7a8;
        }
        *(undefined4 *)(lVar1 + 0x78 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c98e7b8 - 1U & uVar9) * 4);
        puVar5 = DAT_14c98e7b0;
        if (DAT_14c98e7b0 == (undefined *)0x0) {
          puVar5 = &DAT_14c98e7a8;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c98e7b8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cfe544 FUN_145cfe544 body=169 status=ok
// SIG undefined FUN_145cfe544(void)

bool FUN_145cfe544(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfe5ee FUN_145cfe5ee body=44 status=ok
// SIG undefined FUN_145cfe5ee(void)

void FUN_145cfe5ee(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14497e828();
  if (lVar1 == param_2) {
    FUN_145bd0d64(param_1);
    return;
  }
  return;
}



// FUNCTION 145cfe61a FUN_145cfe61a body=44 status=ok
// SIG undefined FUN_145cfe61a(void)

void FUN_145cfe61a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14497e828();
  if (lVar1 == param_2) {
    FUN_145ac069c(param_1);
    return;
  }
  return;
}



// FUNCTION 145cfe646 FUN_145cfe646 body=52 status=ok
// SIG undefined FUN_145cfe646(void)

void FUN_145cfe646(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14497e828();
  if (lVar1 == param_2) {
    FUN_145fcde88(param_1);
    FUN_1414dc7b2(param_1);
    return;
  }
  return;
}



// FUNCTION 145cfe67a FUN_145cfe67a body=292 status=ok
// SIG undefined FUN_145cfe67a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cfe67a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca41768) {
    FUN_144b3d300(&DAT_14ca41768);
    if (DAT_14ca41768 == -1) {
      FUN_145cfe79e();
      FUN_145cfe8a2();
      FUN_140db5666(&DAT_14ca416c0,0,&DAT_14ca41658,L"FRectLightAtlasVS",
                    L"/Engine/Private/RectLightAtlas.usf",L"MainVS",0,1,FUN_1472c4eb6,FUN_1472c4e56,
                    &LAB_1472c4e52,&LAB_1472c4e4e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca43aa0)
      ;
      _DAT_14ca416c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f804fb);
      _Init_thread_footer(&DAT_14ca41768);
    }
  }
  return &DAT_14ca416c0;
}



// FUNCTION 145cfe79e FUN_145cfe79e body=258 status=ok
// SIG undefined FUN_145cfe79e(void)

void FUN_145cfe79e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43b20) {
    FUN_144b3d300(&DAT_14ca43b20);
    if (DAT_14ca43b20 == -1) {
      FUN_145cfe9ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1a6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43aa0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafd73);
      _Init_thread_footer(&DAT_14ca43b20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfe8a2 FUN_145cfe8a2 body=205 status=ok
// SIG undefined FUN_145cfe8a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfe8a2(void)

{
  if ((DAT_14ca416bf & 2) == 0) {
    DAT_14ca416bf = DAT_14ca416bf | 2;
    _DAT_14ca41660 = L"FRectLightAtlasVS";
    _DAT_14ca41678 = FUN_146826540;
    _DAT_14ca41680 = FUN_146825d77;
    _DAT_14ca41688 = FUN_146825fd6;
    _DAT_14ca41690 = FUN_1407e02ea;
    _DAT_14ca41698 = FUN_146826273;
    _DAT_14ca41670 = FUN_1472c4e20;
    _DAT_14ca416b0 = 0xffffffff000000e0;
    _DAT_14ca416b8 = 8;
    DAT_14ca416bc = 0;
    _DAT_14ca416a0 = &LAB_1472c4e4a;
    FUN_145cfe970();
    FUN_1407e00cc(&DAT_14ca41658);
    return;
  }
  return;
}



// FUNCTION 145cfe970 FUN_145cfe970 body=123 status=ok
// SIG undefined FUN_145cfe970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfe970(void)

{
  _DAT_14ca44730 = L"BASE";
  DAT_14ca4475a = 4;
  _DAT_14ca44738 = FUN_140b35ae4();
  _DAT_14ca44740 = DAT_14ca41668;
  _DAT_14ca44748 = &LAB_14682652b;
  DAT_14ca41668 = &DAT_14ca44730;
  DAT_14ca416bd = DAT_14ca416bd + '\x01';
  _DAT_14ca44750 = 0x100000000;
  if (*(char *)(_DAT_14ca44738 + 100) != '\0') {
    DAT_14ca416be = DAT_14ca416be + '\x01';
  }
  return;
}



// FUNCTION 145cfe9ec FUN_145cfe9ec body=226 status=ok
// SIG undefined FUN_145cfe9ec(void)

longlong * FUN_145cfe9ec(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146303c0c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfead4 FUN_145cfead4 body=132 status=ok
// SIG undefined FUN_145cfead4(void)

undefined1 * FUN_145cfead4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145cfead0;
}



// FUNCTION 145cfeb58 FUN_145cfeb58 body=138 status=ok
// SIG undefined FUN_145cfeb58(void)

code * FUN_145cfeb58(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SlotBufferOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cfead4;
}



// FUNCTION 145cfebe2 FUN_145cfebe2 body=120 status=ok
// SIG undefined FUN_145cfebe2(void)

undefined2 * FUN_145cfebe2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868710) {
    FUN_144b3d300(&DAT_14c868710);
    if (DAT_14c868710 == -1) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = &DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
  }
  return DAT_14c868708;
}



// FUNCTION 145cfec5a FUN_145cfec5a body=40 status=ok
// SIG undefined FUN_145cfec5a(void)

undefined8 FUN_145cfec5a(undefined8 param_1,int param_2)

{
  FUN_145cfec82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cfec82 FUN_145cfec82 body=98 status=ok
// SIG undefined FUN_145cfec82(void)

void FUN_145cfec82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a54a770;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cfecf0 FUN_145cfecf0 body=127 status=ok
// SIG undefined FUN_145cfecf0(void)

undefined8 * FUN_145cfecf0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a7c6470;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return param_1;
}



// FUNCTION 145cfed70 FUN_145cfed70 body=61 status=ok
// SIG undefined FUN_145cfed70(void)

void FUN_145cfed70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_145cfedad(lVar1,*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cfedad FUN_145cfedad body=77 status=ok
// SIG undefined FUN_145cfedad(void)

void FUN_145cfedad(longlong param_1,int param_2)

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



// FUNCTION 145cfedfa FUN_145cfedfa body=40 status=ok
// SIG undefined FUN_145cfedfa(void)

undefined8 FUN_145cfedfa(undefined8 param_1,int param_2)

{
  FUN_145cfee22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cfee22 FUN_145cfee22 body=98 status=ok
// SIG undefined FUN_145cfee22(void)

void FUN_145cfee22(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abf3990;
  param_1[5] = &PTR_FUN_14abf3cb0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abe9730;
  param_1[5] = &PTR_LAB_14abe9a20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cfee8c FUN_145cfee8c body=130 status=ok
// SIG undefined FUN_145cfee8c(void)

undefined8 * FUN_145cfee8c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad6ea80;
  param_1[6] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x44,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  param_1[6] = &PTR_FUN_14ad6b340;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  FUN_1413492ec(param_1 + 6,0);
  return param_1;
}



// FUNCTION 145cfef0e FUN_145cfef0e body=179 status=ok
// SIG undefined FUN_145cfef0e(void)

bool FUN_145cfef0e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
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



// FUNCTION 145cfefde FUN_145cfefde body=34 status=ok
// SIG undefined FUN_145cfefde(void)

undefined8 FUN_145cfefde(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145cff000 FUN_145cff000 body=37 status=ok
// SIG undefined FUN_145cff000(void)

void FUN_145cff000(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145cff026();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145cff026 FUN_145cff026 body=75 status=ok
// SIG undefined FUN_145cff026(void)

ulonglong FUN_145cff026(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar2 = FUN_1411c648e(lVar3);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    bVar1 = FUN_145cff072(lVar2,*(undefined4 *)(param_1 + 0xe0));
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145cff072 FUN_145cff072 body=26 status=ok
// SIG undefined FUN_145cff072(void)

undefined1 FUN_145cff072(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14588298a();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 1);
  }
  return uVar1;
}



// FUNCTION 145cff098 FUN_145cff098 body=264 status=ok
// SIG undefined FUN_145cff098(void)

undefined8 * FUN_145cff098(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b88afa0;
  local_50 = DAT_14cbe55c0;
  local_58 = DAT_14cbe55b8;
  FUN_1448075d0(local_48);
  FUN_1404e49fa(param_1 + 5,local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe55d0);
  local_50 = DAT_14cbe55c0;
  local_58 = DAT_14cbe55b8;
  FUN_1448075d0(local_48);
  FUN_1447325ac(local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe55f8;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cff1a2 FUN_145cff1a2 body=59 status=ok
// SIG undefined FUN_145cff1a2(void)

longlong FUN_145cff1a2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145cff1e2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x70 + *param_1;
  thunk_FUN_1456e003e(lVar2);
  return lVar2;
}



// FUNCTION 145cff1dd thunk_FUN_1456e003e body=5 status=ok
// SIG undefined thunk_FUN_1456e003e(void)

undefined8 * thunk_FUN_1456e003e(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong *plStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_140056680(&plStack_38,&DAT_149dfb77a);
  param_1[2] = plStack_38;
  *(undefined4 *)(param_1 + 3) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_2c;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_144a5dc74(&plStack_38);
  FUN_14023423e(param_1 + 5,&plStack_38);
  *(undefined4 *)(param_1 + 7) = 0;
  if (plStack_38 != (longlong *)0x0) {
    (**(code **)(*plStack_38 + 0x10))();
  }
  FUN_144a5dc74(&plStack_38);
  FUN_14023423e(param_1 + 8,&plStack_38);
  *(undefined4 *)(param_1 + 10) = 0;
  if (plStack_38 != (longlong *)0x0) {
    (**(code **)(*plStack_38 + 0x10))();
  }
  FUN_140056680(&plStack_38,&DAT_149dfb77a);
  param_1[0xb] = plStack_38;
  *(undefined4 *)(param_1 + 0xc) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 100) = uStack_2c;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cff1e2 FUN_145cff1e2 body=143 status=ok
// SIG undefined FUN_145cff1e2(void)

void FUN_145cff1e2(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cff272 FUN_145cff272 body=40 status=ok
// SIG undefined FUN_145cff272(void)

undefined8 FUN_145cff272(undefined8 param_1,int param_2)

{
  FUN_145cff29a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cff29a FUN_145cff29a body=98 status=ok
// SIG undefined FUN_145cff29a(void)

void FUN_145cff29a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc5c760;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cff2fc FUN_145cff2fc body=292 status=ok
// SIG undefined FUN_145cff2fc(void)

undefined4 * FUN_145cff2fc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409e7252(param_1,local_48);
  uVar3 = *(uint *)*param_3;
  *local_40 = uVar3;
  *(undefined1 *)(local_40 + 1) = 0;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar1 = FUN_1409e71ba(param_1,uVar3,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_40[3] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145cff422(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cff422 FUN_145cff422 body=431 status=ok
// SIG undefined FUN_145cff422(void)

void FUN_145cff422(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 145cff5d2 FUN_145cff5d2 body=280 status=ok
// SIG undefined FUN_145cff5d2(void)

void FUN_145cff5d2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1405f1eac();
  lVar5 = FUN_1447210f0(param_1);
  if ((lVar5 != 0) && (FUN_145cff6ec(&local_30,lVar5), local_28 != (longlong *)0x0)) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_145cffa6c(local_30,param_1);
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
    }
  }
  FUN_145cff9aa(&local_38);
  FUN_145cff7cc(param_1 + 0x203,param_1,local_38);
  FUN_145cff8f0(local_40);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_145cff85e(param_1 + 0x204,param_1);
  return;
}



// FUNCTION 145cff6ec FUN_145cff6ec body=223 status=ok
// SIG undefined FUN_145cff6ec(void)

longlong * FUN_145cff6ec(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144747626(&local_28,DAT_14cbd4040,param_2);
  plVar1 = local_20;
  if (local_28 != 0) {
    if (local_20 == (longlong *)0x0) {
      *param_1 = local_28;
    }
    else {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
      *param_1 = local_28;
      if ((longlong *)param_1[1] != local_20) {
        LOCK();
        *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
        UNLOCK();
        plVar3 = (longlong *)param_1[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        param_1[1] = (longlong)plVar1;
      }
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cff7cc FUN_145cff7cc body=145 status=ok
// SIG undefined FUN_145cff7cc(void)

void FUN_145cff7cc(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_140649f3e(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x203,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cff85e FUN_145cff85e body=145 status=ok
// SIG undefined FUN_145cff85e(void)

void FUN_145cff85e(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_140e36bbc(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x204,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cff8f0 FUN_145cff8f0 body=185 status=ok
// SIG undefined FUN_145cff8f0(void)

undefined8 * FUN_145cff8f0(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd4070) {
    FUN_144b3d300(&DAT_14cbd4070);
    if (DAT_14cbd4070 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"rlapped",8);
      builtin_wcsncpy(local_48 + 8,L"ignalOve",8);
      builtin_wcsncpy(local_48,L"OnEndNoS",8);
      FUN_1446f470e(&DAT_14cbd4068,local_48,1);
      _Init_thread_footer(&DAT_14cbd4070);
    }
  }
  *param_1 = DAT_14cbd4068;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cff9aa FUN_145cff9aa body=192 status=ok
// SIG undefined FUN_145cff9aa(void)

undefined8 * FUN_145cff9aa(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd4060) {
    FUN_144b3d300(&DAT_14cbd4060);
    if (DAT_14cbd4060 == -1) {
      builtin_wcsncpy(local_48,L"OnBeginNoSignalOverlapped",0x1a);
      FUN_1446f470e(&DAT_14cbd4058,local_48,1);
      _Init_thread_footer(&DAT_14cbd4060);
    }
  }
  *param_1 = DAT_14cbd4058;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cffa6c FUN_145cffa6c body=404 status=ok
// SIG undefined FUN_145cffa6c(void)

void FUN_145cffa6c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined1 local_a0 [16];
  undefined2 local_90 [2];
  undefined4 local_8c;
  code *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    lVar6 = (longlong)*(int *)(param_1 + 0x28) << 3;
    do {
      cVar3 = FUN_145f8eaf6(lVar4,param_2);
      if (cVar3 != '\0') goto LAB_145cffba2;
      lVar4 = lVar4 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  local_88 = (code *)0x0;
  FUN_14485c47a(&local_88,param_2);
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_145cffc02(param_1 + 0x20,iVar1);
  }
  *(code **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = local_88;
  if ((*(longlong *)(param_1 + 0x30) == 0) && (lVar4 = FUN_14479d2ce(param_1 + 8), lVar4 != 0)) {
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar5;
    local_88 = FUN_140e61a54;
    local_80 = 0;
    FUN_145cffc86(local_a0,param_1,&local_88);
    local_88 = (code *)0x0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,local_a0);
    local_48 = 1;
    local_a8 = local_90;
    local_90[0] = 1;
    local_8c = 0xbf800000;
    FUN_1406f4044(uVar2,param_1 + 0x30,&local_88,0x3f800000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(local_a0);
  }
LAB_145cffba2:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cffc02 FUN_145cffc02 body=132 status=ok
// SIG undefined FUN_145cffc02(void)

void FUN_145cffc02(longlong param_1,int param_2)

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



// FUNCTION 145cffc86 FUN_145cffc86 body=428 status=ok
// SIG undefined FUN_145cffc86(void)

longlong * FUN_145cffc86(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145cffd66:
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b9a3390;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145cffd66;
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
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b9a3390;
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



// FUNCTION 145cffe32 FUN_145cffe32 body=48 status=ok
// SIG undefined FUN_145cffe32(void)

longlong FUN_145cffe32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_145cffe62(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cffe62 FUN_145cffe62 body=75 status=ok
// SIG undefined FUN_145cffe62(void)

void FUN_145cffe62(longlong param_1)

{
  LPVOID pvVar1;
  
  *(undefined ***)(param_1 + 0x108) = &PTR_FUN_149e5ddc8;
  pvVar1 = TlsGetValue(DAT_14c75ebf4);
  if (pvVar1 == (LPVOID)(param_1 + 0x108)) {
    TlsSetValue(DAT_14c75ebf4,(LPVOID)0x0);
  }
  FUN_145cffeae(param_1);
  return;
}



// FUNCTION 145cffeae FUN_145cffeae body=164 status=ok
// SIG undefined FUN_145cffeae(void)

void FUN_145cffeae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e5ddb0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1401be51a(param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145cfff52(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145cfff88(param_1 + 1);
  return;
}



// FUNCTION 145cfff52 FUN_145cfff52 body=53 status=ok
// SIG undefined FUN_145cfff52(void)

void FUN_145cfff52(longlong *param_1)

{
  FUN_145d00018();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cfff88 FUN_145cfff88 body=53 status=ok
// SIG undefined FUN_145cfff88(void)

void FUN_145cfff88(longlong *param_1)

{
  FUN_145cfffbe();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cfffbe FUN_145cfffbe body=90 status=ok
// SIG undefined FUN_145cfffbe(void)

void FUN_145cfffbe(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d00018 FUN_145d00018 body=345 status=ok
// SIG undefined FUN_145d00018(void)

void FUN_145d00018(longlong *param_1)

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
      FUN_140010906(*local_68 + (longlong)iStack_4c * 0x240 + 0x10);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1462717da(param_1);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d00172 FUN_145d00172 body=40 status=ok
// SIG undefined FUN_145d00172(void)

undefined8 FUN_145d00172(undefined8 param_1,int param_2)

{
  FUN_145d0019a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d0019a FUN_145d0019a body=77 status=ok
// SIG undefined FUN_145d0019a(void)

void FUN_145d0019a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3b21d0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_145d001e8(param_1 + 0x72);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145d001e8 FUN_145d001e8 body=53 status=ok
// SIG undefined FUN_145d001e8(void)

void FUN_145d001e8(longlong *param_1)

{
  FUN_145d0021e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0021e FUN_145d0021e body=382 status=ok
// SIG undefined FUN_145d0021e(void)

void FUN_145d0021e(longlong *param_1)

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
      FUN_147451ab8(lVar2 + lVar3 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d003a8 FUN_145d003a8 body=486 status=ok
// SIG undefined FUN_145d003a8(void)

undefined8 * FUN_145d003a8(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b377640;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 2;
  *(undefined4 *)(param_1 + 0x16) = 0x1910c;
  param_1[0x17] = "skill_library";
  lVar4 = FUN_145d00590();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_60,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d00499;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d00499:
  FUN_1400b22c2(local_70,"GbxSkills.Skill Library");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d00590 FUN_145d00590 body=55 status=ok
// SIG undefined FUN_145d00590(void)

void FUN_145d00590(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65150 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65150 = FUN_140002ddd(FUN_1465084f4,uVar1,L"GbxSkillLibraryDef");
  }
  return;
}



// FUNCTION 145d005d2 FUN_145d005d2 body=225 status=ok
// SIG undefined FUN_145d005d2(void)

undefined8 * FUN_145d005d2(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d006b4();
  *param_1 = &PTR_FUN_14a3e4000;
  param_1[0xc] = DAT_14c99d1d8;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = FUN_14001cc68(0xd8,0x10);
  FUN_1412e3d1e(local_40);
  FUN_145d006f4(uVar1,local_40);
  param_1[0x11] = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a3e48a0;
  puVar2[2] = uVar1;
  param_1[0x12] = puVar2;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d006b4 FUN_145d006b4 body=63 status=ok
// SIG undefined FUN_145d006b4(void)

undefined8 * FUN_145d006b4(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8bfae0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 3;
  return param_1;
}



// FUNCTION 145d006f4 FUN_145d006f4 body=115 status=ok
// SIG undefined FUN_145d006f4(void)

void FUN_145d006f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_149faf660;
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return;
}



// FUNCTION 145d00768 FUN_145d00768 body=40 status=ok
// SIG undefined FUN_145d00768(void)

undefined8 FUN_145d00768(undefined8 param_1,int param_2)

{
  FUN_145d00790();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d00790 FUN_145d00790 body=133 status=ok
// SIG undefined FUN_145d00790(void)

void FUN_145d00790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b208e70;
  FUN_144a2da94(param_1 + 0x43);
  FUN_144a2da94(param_1 + 0x3c);
  FUN_144a2da94(param_1 + 0x35);
  FUN_144a2da94(param_1 + 0x2e);
  FUN_144a2da94(param_1 + 0x25);
  FUN_144a2da94(param_1 + 0x1e);
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0xf);
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145d00816 FUN_145d00816 body=91 status=ok
// SIG undefined FUN_145d00816(void)

void FUN_145d00816(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145d00872();
  *(undefined8 *)(param_1 + 2000) = 0;
  plVar3 = *(longlong **)(param_1 + 0x7d8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x7d8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145d0086d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d00872 FUN_145d00872 body=186 status=ok
// SIG undefined FUN_145d00872(void)

void FUN_145d00872(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x7a8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x7a8) = 0;
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
  *(undefined8 *)(param_1 + 0x790) = 0;
  plVar3 = *(longlong **)(param_1 + 0x798);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x798) = 0;
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
  *(undefined4 *)(param_1 + 0x788) = 0;
  if (*(int *)(param_1 + 0x78c) == 0) {
    return;
  }
  FUN_14777377c(param_1 + 0x780);
  return;
}



// FUNCTION 145d0092c FUN_145d0092c body=40 status=ok
// SIG undefined FUN_145d0092c(void)

undefined8 FUN_145d0092c(undefined8 param_1,int param_2)

{
  FUN_145d00954();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d00954 FUN_145d00954 body=237 status=ok
// SIG undefined FUN_145d00954(void)

void FUN_145d00954(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae50470;
  param_1[5] = &PTR_FUN_14ae50790;
  FUN_144760e21(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x53];
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
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x49] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x49] + 0x10))();
  }
  param_1[0x30] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x44];
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
  FUN_140f861ce(param_1);
  return;
}



// FUNCTION 145d00a42 FUN_145d00a42 body=37 status=ok
// SIG undefined FUN_145d00a42(void)

void FUN_145d00a42(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1a0);
  FUN_145d00a68(param_2);
  return;
}



// FUNCTION 145d00a68 FUN_145d00a68 body=240 status=ok
// SIG undefined FUN_145d00a68(void)

undefined8 * FUN_145d00a68(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b76c4b0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xf00000d0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xf00000d0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_144928b90(param_1 + 0x2d,0);
  return param_1;
}



// FUNCTION 145d00b58 FUN_145d00b58 body=213 status=ok
// SIG undefined FUN_145d00b58(void)

void FUN_145d00b58(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_140c05e56();
  if ((lVar5 != 0) && (FUN_1410d53f0(&local_30,lVar5), local_28 != (longlong *)0x0)) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_145d00c2e(local_30 + 0x28,&local_30,param_1);
        FUN_14152dfcc(local_30 + 0x40,&local_30,param_1);
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d00c2e FUN_145d00c2e body=228 status=ok
// SIG undefined FUN_145d00c2e(void)

undefined8 FUN_145d00c2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b972cb0;
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
  *local_38 = &PTR_FUN_14b97da00;
  local_38[3] = param_3;
  local_38[4] = FUN_1441a71f8;
  FUN_145d00d14(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d00d14 FUN_145d00d14 body=216 status=ok
// SIG undefined FUN_145d00d14(void)

undefined8 * FUN_145d00d14(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d00df9 FUN_145d00df9 body=1141 status=ok
// SIG undefined FUN_145d00df9(void)

/* WARNING: Removing unreachable block (ram,0x000145d01243) */

longlong ** FUN_145d00df9(longlong **param_1,undefined4 *param_2)

{
  longlong **pplVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  byte bVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a4 [4];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_1[8] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = (longlong *)0x0;
  param_1[1] = (longlong *)0x0;
  param_1[2] = (longlong *)0x0;
  param_1[3] = (longlong *)0x0;
  param_1[4] = (longlong *)0x0;
  param_1[5] = (longlong *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x11] = (longlong *)0x0;
  param_1[0x12] = (longlong *)0x0;
  param_1[0x13] = (longlong *)0x0;
  param_1[0x14] = (longlong *)0x0;
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  FUN_14152e0f7(&local_78);
  if (&local_78 == param_1) {
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_1 = local_78;
    param_1[1] = uStack_70;
  }
  local_c8 = param_2[4];
  uStack_c4 = param_2[5];
  uStack_c0 = param_2[6];
  uStack_bc = param_2[7];
  FUN_14152e0f7(&local_78);
  if (param_1 + 2 == &local_78) {
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    param_1[2] = local_78;
    local_78 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_70._4_4_;
  }
  pplVar1 = param_1 + 4;
  uVar10 = (ulonglong)(*(longlong *)(param_2 + 10) - *(longlong *)(param_2 + 8)) >> 5;
  uVar9 = (uint)uVar10;
  if ((uint)(*(int *)(param_1 + 5) - *(int *)((longlong)param_1 + 0x54)) < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar9);
    }
    FUN_140b80270(pplVar1,uVar10 & 0xffffffff);
    iVar4 = 1;
    if (3 < uVar9) {
      uVar9 = (uVar9 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((*(int *)(param_1 + 0xd) == 0) || (*(int *)(param_1 + 0xd) < iVar4)) {
      *(int *)(param_1 + 0xd) = iVar4;
      FUN_140b7fdd8(pplVar1);
    }
  }
  puVar6 = *(undefined4 **)(param_2 + 8);
  puVar2 = *(undefined4 **)(param_2 + 10);
  if (puVar2 != puVar6 && -1 < (longlong)puVar2 - (longlong)puVar6) {
    for (; puVar6 != puVar2; puVar6 = puVar6 + 8) {
      local_d8 = puVar6[4];
      uStack_d4 = puVar6[5];
      uStack_d0 = puVar6[6];
      uStack_cc = puVar6[7];
      FUN_14152e0f7(&local_a0,&local_d8);
      local_f8 = *puVar6;
      uStack_f4 = puVar6[1];
      uStack_f0 = puVar6[2];
      uStack_ec = puVar6[3];
      FUN_14152e0f7(local_e8,&local_f8);
      uStack_70 = &local_a0;
      local_78 = local_e8;
      FUN_1411f1c38(pplVar1,local_a4,&local_78,0);
      if (local_e8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  param_1[0xe] = *(longlong **)(param_2 + 0xc);
  param_1[0xf] = *(longlong **)(param_2 + 0xe);
  bVar5 = 3;
  if ((byte)param_2[0x10] < 3) {
    bVar5 = (byte)param_2[0x10];
  }
  *(byte *)(param_1 + 0x10) = bVar5;
  local_108 = param_2[0x12];
  uStack_104 = param_2[0x13];
  uStack_100 = param_2[0x14];
  uStack_fc = param_2[0x15];
  FUN_14152e0f7(&local_78);
  if (param_1 + 0x11 == &local_78) {
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x11] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    param_1[0x11] = local_78;
    local_78 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x12) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x94) = uStack_70._4_4_;
  }
  puVar7 = *(undefined8 **)(param_2 + 0x16);
  puVar8 = *(undefined8 **)(param_2 + 0x18);
  uVar10 = ((longlong)puVar8 - (longlong)puVar7 >> 3) * -0x3333333333333333;
  iVar4 = (int)uVar10;
  if (-1 < iVar4) {
    pplVar1 = param_1 + 0x13;
    if (*(int *)((longlong)param_1 + 0xa4) < iVar4) {
      FUN_148a6723c(pplVar1);
      puVar7 = *(undefined8 **)(param_2 + 0x16);
      puVar8 = *(undefined8 **)(param_2 + 0x18);
    }
    if (puVar7 != puVar8) {
      do {
        local_58 = puVar7[4];
        local_78 = (longlong *)*puVar7;
        uStack_70 = (longlong *)puVar7[1];
        local_68 = *(undefined4 *)(puVar7 + 2);
        uStack_64 = *(undefined4 *)((longlong)puVar7 + 0x14);
        uStack_60 = *(undefined4 *)(puVar7 + 3);
        uStack_5c = *(undefined4 *)((longlong)puVar7 + 0x1c);
        FUN_148a61869(&local_a0,&local_78);
        iVar4 = *(int *)(param_1 + 0x14);
        lVar11 = (longlong)iVar4;
        *(uint *)(param_1 + 0x14) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0xa4) < iVar4 + 1U) {
          FUN_148a672ac(pplVar1,iVar4);
        }
        plVar3 = *pplVar1;
        plVar3[lVar11 * 5] = 0;
        plVar3[lVar11 * 5] = local_a0;
        local_a0 = 0;
        *(undefined4 *)(plVar3 + lVar11 * 5 + 1) = (undefined4)local_98;
        *(undefined4 *)((longlong)plVar3 + lVar11 * 0x28 + 0xc) = local_98._4_4_;
        local_98 = 0;
        *(undefined1 *)(plVar3 + lVar11 * 5 + 4) = local_80;
        plVar3 = plVar3 + lVar11 * 5 + 2;
        *(undefined4 *)plVar3 = local_90;
        *(undefined4 *)((longlong)plVar3 + 4) = uStack_8c;
        *(undefined4 *)(plVar3 + 1) = uStack_88;
        *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_84;
        puVar7 = puVar7 + 5;
      } while (puVar7 != puVar8);
    }
    if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar10 & 0xffffffff);
}



// FUNCTION 145d01270 FUN_145d01270 body=62 status=ok
// SIG undefined FUN_145d01270(void)

void FUN_145d01270(void)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14c9a7210;
  if (DAT_14c9a7410 != (undefined8 *)0x0) {
    puVar1 = DAT_14c9a7410;
  }
  FUN_145d012ae(puVar1,DAT_14c9a7418);
  if (DAT_14c9a7410 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d012ae FUN_145d012ae body=77 status=ok
// SIG undefined FUN_145d012ae(void)

void FUN_145d012ae(longlong param_1,int param_2)

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



// FUNCTION 145d012fc FUN_145d012fc body=146 status=ok
// SIG undefined FUN_145d012fc(void)

code * FUN_145d012fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d0138e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubstrateBasePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9e000000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b7d70;
  return FUN_145dedb2a;
}



// FUNCTION 145d0138e FUN_145d0138e body=261 status=ok
// SIG undefined FUN_145d0138e(void)

void FUN_145d0138e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b7df0) {
    FUN_144b3d300(&DAT_14c9b7df0);
    if (DAT_14c9b7df0 == -1) {
      FUN_145d01494(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSubstrateBasePassUniformParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x20;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b7d70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8df67);
      _Init_thread_footer(&DAT_14c9b7df0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d01494 FUN_145d01494 body=226 status=ok
// SIG undefined FUN_145d01494(void)

longlong * FUN_145d01494(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b67e8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d01578 FUN_145d01578 body=136 status=ok
// SIG undefined FUN_145d01578(void)

undefined1 * FUN_145d01578(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d01600();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x21;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14713657a;
}



// FUNCTION 145d01600 FUN_145d01600 body=265 status=ok
// SIG undefined FUN_145d01600(void)

undefined * FUN_145d01600(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c0ab0) {
    FUN_144b3d300(&DAT_14c9c0ab0);
    if (DAT_14c9c0ab0 == -1) {
      FUN_145d0181e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSubstrateCommonParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x18;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0a30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8df73);
      _Init_thread_footer(&DAT_14c9c0ab0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0a30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0170a FUN_145d0170a body=138 status=ok
// SIG undefined FUN_145d0170a(void)

code * FUN_145d0170a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SliceStoringDebugSubstrateTreeDataWithoutMRT";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d01578;
}



// FUNCTION 145d01794 FUN_145d01794 body=138 status=ok
// SIG undefined FUN_145d01794(void)

code * FUN_145d01794(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FirstSliceStoringSubstrateSSSDataWithoutMRT";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d0170a;
}



// FUNCTION 145d0181e FUN_145d0181e body=226 status=ok
// SIG undefined FUN_145d0181e(void)

longlong * FUN_145d0181e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b6870;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d01902 FUN_145d01902 body=130 status=ok
// SIG undefined FUN_145d01902(void)

undefined1 * FUN_145d01902(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxBytesPerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147136608;
}



// FUNCTION 145d01984 FUN_145d01984 body=138 status=ok
// SIG undefined FUN_145d01984(void)

code * FUN_145d01984(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxClosurePerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d01902;
}



// FUNCTION 145d01a0e FUN_145d01a0e body=138 status=ok
// SIG undefined FUN_145d01a0e(void)

code * FUN_145d01a0e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bRoughDiffuse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d01984;
}



// FUNCTION 145d01a98 FUN_145d01a98 body=40 status=ok
// SIG undefined FUN_145d01a98(void)

undefined8 FUN_145d01a98(undefined8 param_1,int param_2)

{
  FUN_145d01ac0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d01ac0 FUN_145d01ac0 body=99 status=ok
// SIG undefined FUN_145d01ac0(void)

void FUN_145d01ac0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a526e90;
  param_1[5] = &PTR_FUN_14a527190;
  plVar3 = (longlong *)param_1[0xfe];
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
  FUN_140ffd8aa(param_1 + 0x2e);
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145d01b30 FUN_145d01b30 body=128 status=ok
// SIG undefined FUN_145d01b30(void)

undefined8 * FUN_145d01b30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_LAB_14a5a48d0;
  FUN_14118b488(puVar1 + 1);
  *puVar1 = &PTR_FUN_14a5a4840;
  puVar1[1] = &PTR_FUN_14a5a48a0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 2;
  return puVar1;
}



// FUNCTION 145d01bbc FUN_145d01bbc body=128 status=ok
// SIG undefined FUN_145d01bbc(void)

undefined8 * FUN_145d01bbc(undefined8 *param_1)

{
  FUN_145946744();
  *param_1 = &PTR_FUN_14a5dd320;
  param_1[5] = &PTR_FUN_14a5dd720;
  param_1[0x3c1] = 0;
  *(undefined4 *)(param_1 + 0x3c2) = 0;
  param_1[0x3bd] = 0;
  param_1[0x3be] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e1c) = 0;
  param_1[0x3c5] = 0;
  *(undefined4 *)(param_1 + 0x3c6) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x800;
  *(undefined1 *)(param_1 + 0x3a9) = 1;
  *(byte *)((longlong)param_1 + 0xa4) = *(byte *)((longlong)param_1 + 0xa4) | 0x17;
  return param_1;
}



// FUNCTION 145d01c3c FUN_145d01c3c body=40 status=ok
// SIG undefined FUN_145d01c3c(void)

undefined8 FUN_145d01c3c(undefined8 param_1,int param_2)

{
  FUN_145d01c64();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d01c64 FUN_145d01c64 body=175 status=ok
// SIG undefined FUN_145d01c64(void)

void FUN_145d01c64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a65a3c0;
  FUN_1447a1747(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145d01d13(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc97f4(param_1);
  return;
}



// FUNCTION 145d01d13 FUN_145d01d13 body=63 status=ok
// SIG undefined FUN_145d01d13(void)

void FUN_145d01d13(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d01d52 FUN_145d01d52 body=89 status=ok
// SIG undefined FUN_145d01d52(void)

void FUN_145d01d52(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  DAT_14cb70c78 = 0;
  lVar1 = *param_1;
  uVar2 = (ulonglong)(param_1[1] - lVar1) >> 5;
  DAT_14cb70c80 = (int)uVar2;
  if (DAT_14cb70c80 != 0) {
    FUN_145d01dac(uVar2 & 0xffffffff);
    FUN_145d01e06(DAT_14cb70c78,lVar1,uVar2 & 0xffffffff);
    return;
  }
  DAT_14cb70c84 = 0;
  return;
}



// FUNCTION 145d01dac FUN_145d01dac body=90 status=ok
// SIG undefined FUN_145d01dac(void)

void FUN_145d01dac(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_1 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_1 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(&DAT_14cb70c78,0,uVar3,0x20,8);
  }
  DAT_14cb70c84 = iVar2;
  return;
}



// FUNCTION 145d01e06 FUN_145d01e06 body=99 status=ok
// SIG undefined FUN_145d01e06(void)

void FUN_145d01e06(undefined8 *param_1,longlong param_2,int param_3)

{
  param_2 = param_2 + 0x10;
  do {
    *param_1 = &DAT_14a171d50;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = *(undefined8 *)(param_2 + -8);
    FUN_1406022fe(param_1 + 2,param_2);
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 145d01e6a FUN_145d01e6a body=113 status=ok
// SIG undefined FUN_145d01e6a(void)

void FUN_145d01e6a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d01fd0();
  lVar1 = thunk_FUN_1404eee4c(param_1 + 0x40);
  local_28 = FUN_1459b2baa;
  local_20 = 0;
  FUN_145d01ee2(lVar1 + 8,local_18,param_1);
  FUN_1459b2bd4(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d01edc thunk_FUN_1404eee4c body=5 status=ok
// SIG undefined thunk_FUN_1404eee4c(void)

void thunk_FUN_1404eee4c(longlong *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (param_1[1] == 0) {
    FUN_141237793();
    if ((longlong)DAT_14c9a3330 != 0) {
      lVar3 = 0;
      do {
        puVar2 = *(undefined **)(DAT_14c9a3328 + lVar3);
        if ((puVar2 != (undefined *)0x0) && (*(longlong *)(puVar2 + 0x3c) == *param_1))
        goto LAB_1404eeea3;
        lVar3 = lVar3 + 0x18;
      } while ((longlong)DAT_14c9a3330 * 0x18 != lVar3);
    }
    puVar2 = (undefined *)0x0;
LAB_1404eeea3:
    puVar1 = &DAT_14c9a3168;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    param_1[1] = (longlong)puVar1;
  }
  return;
}



// FUNCTION 145d01ee2 FUN_145d01ee2 body=237 status=ok
// SIG undefined FUN_145d01ee2(void)

undefined8
FUN_145d01ee2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3ec750;
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
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b412bc0;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_145ca1c8a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d01fd0 FUN_145d01fd0 body=333 status=ok
// SIG undefined FUN_145d01fd0(void)

void FUN_145d01fd0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d0211e(param_1,local_58);
  local_48 = FUN_145afe75e;
  local_40 = 0;
  FUN_145d02182(local_38,local_58);
  FUN_1414cf8c0(&DAT_14cadbeb0,&local_48,local_38);
  FUN_1449db362(local_38);
  plVar2 = local_50;
  *(code **)(param_1 + 0x30) = local_48;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_145d0211e(param_1,local_58);
  local_48 = FUN_145afe816;
  local_40 = 0;
  FUN_145d022ae(local_38,local_58);
  FUN_141211dc4(&DAT_14cadbec8,&local_48,local_38);
  FUN_1449db362(local_38);
  *(code **)(param_1 + 0x38) = local_48;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)local_50 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0211e FUN_145d0211e body=99 status=ok
// SIG undefined FUN_145d0211e(void)

undefined8 * FUN_145d0211e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_145d02160:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145d02160;
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
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
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
  return param_2;
}



// FUNCTION 145d02182 FUN_145d02182 body=300 status=ok
// SIG undefined FUN_145d02182(void)

longlong * FUN_145d02182(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14a8bcc20;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b3ec7c0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a8bcc20;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b3ec7c0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145d022ae FUN_145d022ae body=300 status=ok
// SIG undefined FUN_145d022ae(void)

longlong * FUN_145d022ae(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14a8bcd00;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b3ec830;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a8bcd00;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b3ec830;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145d023da FUN_145d023da body=40 status=ok
// SIG undefined FUN_145d023da(void)

undefined8 FUN_145d023da(undefined8 param_1,int param_2)

{
  FUN_145d02402();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d02402 FUN_145d02402 body=198 status=ok
// SIG undefined FUN_145d02402(void)

void FUN_145d02402(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4b6ec0;
  param_1[0xf] = &PTR_FUN_14a5af930;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  param_1[0xf] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x12)])(param_1 + 0x10);
  plVar3 = (longlong *)param_1[0xe];
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
  FUN_145d024c8(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d024c8 FUN_145d024c8 body=40 status=ok
// SIG undefined FUN_145d024c8(void)

void FUN_145d024c8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a408d6(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145d024f0 FUN_145d024f0 body=310 status=ok
// SIG undefined FUN_145d024f0(void)

void FUN_145d024f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f5a90;
  plVar1 = plVar3 + 2;
  local_50 = (longlong *)*param_4;
  *param_4 = 0;
  local_48 = (longlong *)CONCAT44(local_48._4_4_,*(undefined4 *)(param_4 + 1));
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_145d02628(plVar1,*param_2,param_3,&local_50);
  local_60 = plVar1;
  local_58 = plVar3;
  FUN_145d02794(&local_60,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_50 = plVar1;
  local_48 = plVar3;
  FUN_1411d7792(param_1,&local_50);
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d02628 FUN_145d02628 body=143 status=ok
// SIG undefined FUN_145d02628(void)

undefined8 *
FUN_145d02628(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  *param_1 = &PTR_FUN_14b4f5ab0;
  param_1[4] = 0;
  FUN_14485c47a(param_1 + 4);
  param_1[5] = *param_3;
  lVar1 = param_3[1];
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_145d026b8(param_1 + 7,param_4);
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1449db362(param_4);
  return param_1;
}



// FUNCTION 145d026b8 FUN_145d026b8 body=124 status=ok
// SIG undefined FUN_145d026b8(void)

void FUN_145d026b8(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 145d02736 FUN_145d02736 body=93 status=ok
// SIG undefined FUN_145d02736(void)

void FUN_145d02736(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5a20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f59b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 145d02794 FUN_145d02794 body=162 status=ok
// SIG undefined FUN_145d02794(void)

void FUN_145d02794(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145d027d3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145d027d3;
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
LAB_145d027d3:
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
                    /* WARNING: Could not recover jumptable at 0x000145d02832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145d02836 FUN_145d02836 body=54 status=ok
// SIG undefined FUN_145d02836(void)

void FUN_145d02836(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d0286c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5902a0;
  puVar1[5] = &PTR_FUN_14b590580;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 145d0286c FUN_145d0286c body=85 status=ok
// SIG undefined FUN_145d0286c(void)

undefined8 * FUN_145d0286c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b551890;
  param_1[5] = &PTR_LAB_14b551b30;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0xffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000;
  return param_1;
}



// FUNCTION 145d028c2 FUN_145d028c2 body=38 status=ok
// SIG undefined FUN_145d028c2(void)

undefined8 FUN_145d028c2(undefined8 param_1,int param_2)

{
  FUN_145d028e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d028e8 FUN_145d028e8 body=101 status=ok
// SIG undefined FUN_145d028e8(void)

void FUN_145d028e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a2a20;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145d0294e FUN_145d0294e body=38 status=ok
// SIG undefined FUN_145d0294e(void)

undefined8 FUN_145d0294e(undefined8 param_1,int param_2)

{
  FUN_145d02974();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d02974 FUN_145d02974 body=101 status=ok
// SIG undefined FUN_145d02974(void)

void FUN_145d02974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a2ec0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145d029da FUN_145d029da body=169 status=ok
// SIG undefined FUN_145d029da(void)

bool FUN_145d029da(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d02a84 FUN_145d02a84 body=246 status=ok
// SIG undefined FUN_145d02a84(void)

void FUN_145d02a84(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448d5e3c(&local_48,param_1 + 0x54);
  lVar4 = *(longlong *)(local_48 + 0x510);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xd0));
  *(int *)(lVar4 + 200) = *(int *)(lVar4 + 200) + 1;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  lVar5 = *(longlong *)(lVar4 + 0xb0);
  *(int *)(lVar4 + 0xc0) = *(int *)(lVar4 + 0xc0) + 2;
  iVar3 = *(int *)(lVar4 + 0xb8);
  if ((longlong)iVar3 != 0) {
    lVar8 = 0;
    do {
      puVar6 = *(undefined8 **)(lVar5 + lVar8);
      cVar7 = (**(code **)*puVar6)(puVar6,*param_2);
      if (cVar7 != '\0') {
        *(bool *)(lVar5 + 0x30 + lVar8) = param_3 == 1;
      }
      lVar8 = lVar8 + 0x38;
    } while ((longlong)iVar3 * 0x38 - lVar8 != 0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xd0));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d02b7c FUN_145d02b7c body=40 status=ok
// SIG undefined FUN_145d02b7c(void)

undefined8 FUN_145d02b7c(undefined8 param_1,int param_2)

{
  FUN_145d02ba4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d02ba4 FUN_145d02ba4 body=99 status=ok
// SIG undefined FUN_145d02ba4(void)

void FUN_145d02ba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc69ef0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1457df34e(param_1);
  return;
}



// FUNCTION 145d02c08 FUN_145d02c08 body=40 status=ok
// SIG undefined FUN_145d02c08(void)

undefined8 FUN_145d02c08(undefined8 param_1,int param_2)

{
  FUN_145d02c30();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d02c30 FUN_145d02c30 body=99 status=ok
// SIG undefined FUN_145d02c30(void)

void FUN_145d02c30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc74f10;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145d02c94 FUN_145d02c94 body=40 status=ok
// SIG undefined FUN_145d02c94(void)

undefined8 FUN_145d02c94(undefined8 param_1,int param_2)

{
  FUN_145d02cbc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d02cbc FUN_145d02cbc body=122 status=ok
// SIG undefined FUN_145d02cbc(void)

void FUN_145d02cbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcb91f0;
  if (*(int *)((longlong)param_1 + 0xac) != -1) {
    if (param_1[0x14] != 0) {
      FUN_1400020a8();
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0xffffffff00000000;
  }
  FUN_14152e1c8(param_1 + 0x10);
  (*(code *)(&PTR_FUN_14bcbb6e0)[*(byte *)(param_1 + 0xf)])(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d02d36 FUN_145d02d36 body=40 status=ok
// SIG undefined FUN_145d02d36(void)

undefined8 FUN_145d02d36(undefined8 param_1,int param_2)

{
  FUN_145d02d5e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d02d5e FUN_145d02d5e body=175 status=ok
// SIG undefined FUN_145d02d5e(void)

void FUN_145d02d5e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd0c600;
  param_1[0x21] = &PTR_FUN_14bd0c900;
  param_1[0x22] = &PTR_FUN_14bd0c930;
  param_1[0x23] = &PTR_FUN_14bd0c950;
  param_1[0x24] = &PTR_FUN_14bd0c970;
  param_1[0x25] = &PTR_FUN_14bd0c990;
  FUN_145d02e0d(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_141136054(param_1);
  return;
}



// FUNCTION 145d02e0d FUN_145d02e0d body=63 status=ok
// SIG undefined FUN_145d02e0d(void)

void FUN_145d02e0d(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d02e4c FUN_145d02e4c body=63 status=ok
// SIG undefined FUN_145d02e4c(void)

void FUN_145d02e4c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d02e8c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd27920;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return;
}



// FUNCTION 145d02e8c FUN_145d02e8c body=76 status=ok
// SIG undefined FUN_145d02e8c(void)

undefined8 * FUN_145d02e8c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bc127d0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 145d02ee0 FUN_145d02ee0 body=131 status=ok
// SIG undefined FUN_145d02ee0(void)

undefined8 * FUN_145d02ee0(undefined8 *param_1)

{
  FUN_1458de9a4();
  *param_1 = &PTR_FUN_14bdb5210;
  param_1[5] = &PTR_FUN_14bdb55c0;
  param_1[0x13] = &PTR_FUN_14bdb55e0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_1411b354a(param_1 + 0x20,0,0,0,0);
  *(undefined1 *)(param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 145d02f64 FUN_145d02f64 body=407 status=ok
// SIG undefined FUN_145d02f64(void)

void FUN_145d02f64(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145d030fc(local_18,local_20,local_24,local_28 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d030fc FUN_145d030fc body=324 status=ok
// SIG undefined FUN_145d030fc(void)

void FUN_145d030fc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_70 = param_2;
      FUN_1446dcdd4(&local_68);
      if (DAT_14cb7d760 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_144837462(DAT_14cb7d760,&local_68);
      }
      if (CONCAT44(uStack_4c,local_50) != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        uVar3 = (**(code **)(*(longlong *)(param_1 + 0x3a20) + 0x10))(param_1 + 0x3a20);
        local_68 = 0;
        uStack_60 = 0;
        uStack_4c = CONCAT31(uStack_4c._1_3_,0xff);
        local_50 = 0;
        local_58 = 0;
        FUN_14493679e(uVar3,&local_68,lVar2,0);
        cVar1 = FUN_14486ea84(&local_68);
        if (cVar1 != '\0') {
          uVar3 = FUN_14008e0ae(&local_68);
          FUN_1414f49d2(uVar3,param_3,param_4,1);
        }
      }
      FUN_145d03242(param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d03242 FUN_145d03242 body=32 status=ok
// SIG undefined FUN_145d03242(void)

void FUN_145d03242(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14018ffce();
  if (lVar1 != 0) {
    FUN_145d03262(lVar1);
    return;
  }
  return;
}



// FUNCTION 145d03262 FUN_145d03262 body=70 status=ok
// SIG undefined FUN_145d03262(void)

void FUN_145d03262(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (*(longlong *)(param_1 + 0xac8) != 0) {
      FUN_1447f69b6(*(longlong *)(param_1 + 0xac8) + 0x5068);
    }
    FUN_1447cd2ec(param_1 + 0x940,0);
    return;
  }
  return;
}



// FUNCTION 145d032b0 FUN_145d032b0 body=340 status=ok
// SIG undefined FUN_145d032b0(void)

undefined8 * FUN_145d032b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140e51bee(param_1,uVar1);
  *param_1 = &PTR_FUN_14b5e33f0;
  param_1[0x72] = &PTR_FUN_14b5e3ac0;
  param_1[0x73] = &PTR_FUN_14b5e3b40;
  param_1[0x74] = &PTR_FUN_14b5e3bb0;
  param_1[0x75] = &PTR_FUN_14b5e3bd8;
  param_1[0x76] = &PTR_FUN_14b5e3bf0;
  param_1[0xa4] = &PTR_FUN_14b5e3c20;
  param_1[0xa5] = &PTR_FUN_14b5e3c70;
  param_1[0xa6] = &PTR_FUN_14b5e3ca0;
  param_1[0xa7] = &PTR_FUN_14b5e3cd0;
  param_1[0xa8] = &PTR_FUN_14b5e3ce8;
  param_1[0x118] = &PTR_FUN_14b5e3d00;
  param_1[0x119] = &PTR_FUN_14b5e3d30;
  param_1[0x11a] = &PTR_FUN_14b5e3d60;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  *(undefined1 *)(param_1 + 0x127) = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  *(undefined4 *)(param_1 + 299) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(undefined4 *)(param_1 + 0x34) = 0x40400000;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 0x10;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfb;
  return param_1;
}



// FUNCTION 145d03412 FUN_145d03412 body=53 status=ok
// SIG undefined FUN_145d03412(void)

void FUN_145d03412(longlong *param_1)

{
  FUN_145d03448();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d03448 FUN_145d03448 body=364 status=ok
// SIG undefined FUN_145d03448(void)

void FUN_145d03448(longlong *param_1)

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
      FUN_145e04ddc(lVar2 + lVar3 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d035b6 FUN_145d035b6 body=205 status=ok
// SIG undefined FUN_145d035b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d035b6(void)

{
  if ((DAT_14cb5047f & 2) == 0) {
    DAT_14cb5047f = DAT_14cb5047f | 2;
    _DAT_14cb50420 = L"FAdvectVelocitysCS";
    _DAT_14cb50438 = FUN_146826540;
    _DAT_14cb50440 = FUN_146825d77;
    _DAT_14cb50448 = FUN_146825fd6;
    _DAT_14cb50450 = FUN_1407e02ea;
    _DAT_14cb50458 = FUN_146826273;
    _DAT_14cb50430 = FUN_1485ec49a;
    _DAT_14cb50470 = 0xffffffff000000e0;
    _DAT_14cb50478 = 8;
    DAT_14cb5047c = 0;
    _DAT_14cb50460 = &LAB_1485ec4c4;
    FUN_145d03684();
    FUN_1407e00cc(&DAT_14cb50418);
    return;
  }
  return;
}



// FUNCTION 145d03684 FUN_145d03684 body=123 status=ok
// SIG undefined FUN_145d03684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d03684(void)

{
  _DAT_14cb50ed8 = L"BASE";
  DAT_14cb50f02 = 4;
  _DAT_14cb50ee0 = FUN_140b35ae4();
  _DAT_14cb50ee8 = DAT_14cb50428;
  _DAT_14cb50ef0 = &LAB_14682652b;
  DAT_14cb50428 = &DAT_14cb50ed8;
  DAT_14cb5047d = DAT_14cb5047d + '\x01';
  _DAT_14cb50ef8 = 0x100000000;
  if (*(char *)(_DAT_14cb50ee0 + 100) != '\0') {
    DAT_14cb5047e = DAT_14cb5047e + '\x01';
  }
  return;
}



// FUNCTION 145d03700 FUN_145d03700 body=226 status=ok
// SIG undefined FUN_145d03700(void)

longlong * FUN_145d03700(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1464a46d0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d037e8 FUN_145d037e8 body=138 status=ok
// SIG undefined FUN_145d037e8(void)

code * FUN_145d037e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Velocity";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a4758;
}



// FUNCTION 145d03872 FUN_145d03872 body=140 status=ok
// SIG undefined FUN_145d03872(void)

undefined1 * FUN_145d03872(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a8d58a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxWindParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGbxWindUniformBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb50380;
  return &LAB_145d037e4;
}



// FUNCTION 145d038fe FUN_145d038fe body=356 status=ok
// SIG undefined FUN_145d038fe(void)

undefined4 * FUN_145d038fe(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d03ad2(param_1,local_40);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_38 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_38 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_38 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_38[2] = *puVar2;
  lVar11 = puVar2[1];
  local_38[3] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  iVar9 = *(int *)(local_38 + 1);
  if (iVar9 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*local_38;
  }
  iVar3 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar3 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar3,puVar10);
  cVar5 = FUN_145d03a64(param_1,uVar6,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_38 + 0x24) = uVar6;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14620f0d0(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d03a64 FUN_145d03a64 body=109 status=ok
// SIG undefined FUN_145d03a64(void)

undefined8 FUN_145d03a64(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
     (iVar9 = FUN_1410bdd7e(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_145ad1d1e(puVar1);
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
    FUN_145ad1d74(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 145d03ad2 FUN_145d03ad2 body=231 status=ok
// SIG undefined FUN_145d03ad2(void)

int * FUN_145d03ad2(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145d03bc8 FUN_145d03bc8 body=234 status=ok
// SIG undefined FUN_145d03bc8(void)

undefined8 * FUN_145d03bc8(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 *local_40;
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_145d03cb4(L"Mounting pak file: %s \n",puVar5);
  if (param_3 == -1) {
    param_3 = FUN_1458042bc(param_2);
  }
  local_38[0] = 0;
  local_30 = (undefined8 *)0x0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  local_40 = local_38;
  local_48 = 1;
  cVar2 = FUN_1416bd1f2(param_1,puVar5,param_3,0);
  puVar3 = local_30;
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  puVar4 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)0x0;
  if (cVar2 != '\0') {
    puVar3 = puVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d03cb4 FUN_145d03cb4 body=308 status=ok
// SIG undefined FUN_145d03cb4(void)

void FUN_145d03cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  WCHAR *lpOutputString;
  ulonglong uVar4;
  LPCWSTR _Memory;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined8 *local_460;
  undefined8 *local_450;
  WCHAR local_448 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_450 = &local_res10;
  puVar3 = (undefined8 *)FUN_144737586();
  local_468 = 0;
  lpOutputString = local_448;
  local_460 = &local_res10;
  uVar2 = __stdio_common_vswprintf(*puVar3,lpOutputString,0x200,param_1);
  if ((int)uVar2 < 0) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 < 0x200) {
    _Memory = (LPCWSTR)0x0;
  }
  else {
    uVar4 = 0x400;
    lpOutputString = (LPCWSTR)0x0;
    do {
      free(lpOutputString);
      lpOutputString = malloc(uVar4 * 2);
      if (lpOutputString == (LPCWSTR)0x0) goto LAB_145d03d4f;
      local_450 = &local_res10;
      puVar3 = (undefined8 *)FUN_144737586();
      local_468 = 0;
      local_460 = &local_res10;
      uVar2 = __stdio_common_vswprintf(*puVar3,lpOutputString,uVar4,param_1);
      iVar1 = (int)uVar4;
      uVar4 = (ulonglong)(uint)(iVar1 * 2);
    } while (((int)uVar2 < 0) || (_Memory = lpOutputString, iVar1 <= (int)uVar2));
  }
  lpOutputString[uVar2] = L'\0';
  OutputDebugStringW(lpOutputString);
  free(_Memory);
LAB_145d03d4f:
  if ((local_48 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d03dea FUN_145d03dea body=240 status=ok
// SIG undefined FUN_145d03dea(void)

void FUN_145d03dea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_145d03f8e(param_2,param_3,param_4,param_5);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_145d03eec(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d03eec FUN_145d03eec body=162 status=ok
// SIG undefined FUN_145d03eec(void)

void FUN_145d03eec(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145d03f2b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145d03f2b;
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
LAB_145d03f2b:
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
                    /* WARNING: Could not recover jumptable at 0x000145d03f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145d03f8e FUN_145d03f8e body=172 status=ok
// SIG undefined FUN_145d03f8e(void)

undefined8 *
FUN_145d03f8e(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b4f0a80;
  local_40 = *param_4;
  local_48 = &local_40;
  *param_4 = 0;
  local_38 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_145d0403c(puVar1 + 2,*param_1,*param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0403c FUN_145d0403c body=244 status=ok
// SIG undefined FUN_145d0403c(void)

undefined8 *
FUN_145d0403c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_14b4f0350;
  param_1[4] = &PTR_LAB_14b4f0378;
  FUN_14485c47a(param_1 + 6);
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14b4f0aa0;
  param_1[4] = &PTR_FUN_14b4f0ac8;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[10] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_145c44cca(param_1 + 0xc,param_5);
  *(undefined4 *)(param_1 + 0xe) = 7;
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 145d04130 FUN_145d04130 body=878 status=ok
// SIG undefined FUN_145d04130(void)

void FUN_145d04130(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
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
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x2a0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
      if ((lVar4 != 0) &&
         ((uVar5 = *(ulonglong *)(lVar4 + 0x30), uVar5 != 0 &&
          (*(int *)(param_1 + 0x328) != *(int *)(param_1 + 0x354))))) {
        uVar8 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        lVar10 = param_1 + 0x358;
        if (*(longlong *)(param_1 + 0x360) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x360);
        }
        iVar9 = *(int *)(lVar10 + (ulonglong)
                                  (*(int *)(param_1 + 0x368) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
        if (iVar9 != -1) {
          do {
            puVar3 = (ulonglong *)(*(longlong *)(param_1 + 800) + (longlong)iVar9 * 0x28);
            if (*puVar3 == uVar5) {
              if ((((ulonglong)(puVar3 + 1) & 0xfffffffffffffff7) != 0) &&
                 (uVar5 = puVar3[3], (longlong)(int)uVar5 != 0)) {
                uVar6 = puVar3[2];
                lVar10 = 0;
                do {
                  if (*(int *)(*(longlong *)(uVar6 + lVar10) + 0x40) !=
                      *(int *)(*(longlong *)(uVar6 + lVar10) + 0x44)) {
                    *(undefined4 *)(lVar4 + 0x40) = 0xfffffffe;
                  }
                  lVar10 = lVar10 + 8;
                } while ((longlong)(int)uVar5 * 8 != lVar10);
              }
              break;
            }
            iVar9 = (int)puVar3[4];
          } while (iVar9 != -1);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
    iVar7 = *(int *)(param_1 + 0x2a0);
  }
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  if (iVar7 == 0) {
    iVar7 = 0;
    uStack_60 = lVar2;
  }
  else {
    uStack_60 = lVar2;
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x2a0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
      if ((lVar4 != 0) &&
         ((local_68 = *(longlong *)(lVar4 + 0x30), local_68 == 0 || (*(int *)(lVar4 + 0x40) == -2)))
         ) {
        *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar4 + 0x44);
        FUN_14152e682(param_1,&local_68,lVar4);
        if (local_68 != *(longlong *)(lVar4 + 0x30)) {
          if (*(longlong *)(lVar4 + 0x30) != 0) {
            iVar9 = *(int *)(param_1 + 0x378);
            *(uint *)(param_1 + 0x378) = iVar9 + 1U;
            if (*(uint *)(param_1 + 0x37c) < iVar9 + 1U) {
              FUN_1470a4daa((longlong *)(param_1 + 0x370),iVar9);
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x370) + (longlong)iVar9 * 8) =
                 *(undefined8 *)(lVar4 + 0x30);
          }
          *(longlong *)(lVar4 + 0x30) = local_68;
          if (local_68 != 0) {
            FUN_1407d81de(local_68 + 8,lVar4);
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d044aa FUN_145d044aa body=579 status=ok
// SIG undefined FUN_145d044aa(void)

undefined8 * FUN_145d044aa(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_145d0476a();
  *param_1 = &PTR_FUN_14a7a11d0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 5,L"Compress each track independently");
  *(undefined8 *)((longlong)param_1 + 100) = 0x3b03126f3be56042;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3a378034;
  *(undefined4 *)(param_1 + 0xc) = 0x3951b717;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xa41700000;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xfc;
  *(undefined1 **)((longlong)param_1 + 0xb4) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x16) = 1;
  *(byte *)((longlong)param_1 + 0xac) = *(byte *)((longlong)param_1 + 0xac) & 0xfc;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) & 0xfe;
  *(undefined4 *)(param_1 + 0x18) = 0x3f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x19) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x1a) = 0x3a83126f;
  iVar2 = *(int *)(param_1 + 0xf);
  *(uint *)(param_1 + 0xf) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x7c) < iVar2 + 1U) {
    FUN_145d046ee(param_1 + 0xe,iVar2);
  }
  *(undefined1 *)(param_1[0xe] + (longlong)iVar2) = 6;
  iVar2 = *(int *)(param_1 + 0xf);
  *(uint *)(param_1 + 0xf) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x7c) < iVar2 + 1U) {
    FUN_145d046ee(param_1 + 0xe,iVar2);
  }
  puVar1 = param_1 + 0x10;
  *(undefined1 *)(param_1[0xe] + (longlong)iVar2) = 2;
  iVar2 = *(int *)(param_1 + 0x11);
  *(uint *)(param_1 + 0x11) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x8c) < iVar2 + 1U) {
    FUN_145d046ee(puVar1,iVar2);
  }
  *(undefined1 *)(param_1[0x10] + (longlong)iVar2) = 6;
  iVar2 = *(int *)(param_1 + 0x11);
  *(uint *)(param_1 + 0x11) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x8c) < iVar2 + 1U) {
    FUN_145d046ee(puVar1,iVar2);
  }
  *(undefined1 *)(param_1[0x10] + (longlong)iVar2) = 3;
  iVar2 = *(int *)(param_1 + 0x11);
  *(uint *)(param_1 + 0x11) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x8c) < iVar2 + 1U) {
    FUN_145d046ee(puVar1,iVar2);
  }
  puVar1 = param_1 + 0x12;
  *(undefined1 *)(param_1[0x10] + (longlong)iVar2) = 2;
  iVar2 = *(int *)(param_1 + 0x13);
  *(uint *)(param_1 + 0x13) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x9c) < iVar2 + 1U) {
    FUN_145d046ee(puVar1,iVar2);
  }
  *(undefined1 *)(param_1[0x12] + (longlong)iVar2) = 6;
  iVar2 = *(int *)(param_1 + 0x13);
  *(uint *)(param_1 + 0x13) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x9c) < iVar2 + 1U) {
    FUN_145d046ee(puVar1,iVar2);
  }
  *(undefined1 *)(param_1[0x12] + (longlong)iVar2) = 3;
  iVar2 = *(int *)(param_1 + 0x13);
  *(uint *)(param_1 + 0x13) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x9c) < iVar2 + 1U) {
    FUN_145d046ee(puVar1,iVar2);
  }
  *(undefined1 *)(param_1[0x12] + (longlong)iVar2) = 2;
  return param_1;
}



// FUNCTION 145d046ee FUN_145d046ee body=124 status=ok
// SIG undefined FUN_145d046ee(void)

void FUN_145d046ee(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
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
    iVar3 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar3) {
      iVar5 = iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145d0476a FUN_145d0476a body=124 status=ok
// SIG undefined FUN_145d0476a(void)

undefined8 * FUN_145d0476a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a79d540;
  FUN_140056680(param_1 + 5,&DAT_149e01fe8);
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0x100;
  *param_1 = &PTR_FUN_14a7a1d50;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
  FUN_14020fad6(param_1 + 5,L"Remove Linear Keys");
  param_1[8] = 0x3a449ba63a83126f;
  param_1[9] = 0x3a83126f358637bd;
  param_1[10] = 0x3a83126f3a83126f;
  *(undefined4 *)(param_1 + 0xb) = 0x40000000;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) | 3;
  return param_1;
}



// FUNCTION 145d047e6 FUN_145d047e6 body=613 status=ok
// SIG undefined FUN_145d047e6(void)

void FUN_145d047e6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_1 + 0x278);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892fa8) {
    iVar5 = 0;
    if ((longlong)*(int *)(param_1 + 0x100) != 0) {
      lVar3 = 0;
      iVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar3);
        if (lVar2 != 0) {
          iVar5 = iVar5 + (uint)((*(byte *)(lVar2 + 0xa4) & 4) == 0);
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(param_1 + 0x100) * 8 != lVar3);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caf2430) && (FUN_144b3d300(&DAT_14caf2430), DAT_14caf2430 == -1)) {
      FUN_140056680(&DAT_14caf2420,L"NumClients");
      atexit((_func_5014 *)&LAB_14359e6dc);
      _Init_thread_footer(&DAT_14caf2430);
    }
    FUN_140002266(local_38,&DAT_149e063bc,iVar5);
    FUN_14152eab6(&DAT_14caf2420,local_38);
    if (local_38[0] != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caf2448) && (FUN_144b3d300(&DAT_14caf2448), DAT_14caf2448 == -1)) {
      FUN_140056680(&DAT_14caf2438,L"ReplicationModel");
      atexit((_func_5014 *)&LAB_14359e6ed);
      _Init_thread_footer(&DAT_14caf2448);
    }
    if (param_2 == 1) {
      FUN_145d04a4c(param_1,&local_48);
      puVar4 = local_48;
      if (local_40 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140056680(local_38,puVar4);
      FUN_14152eab6(&DAT_14caf2438,local_38);
      bVar6 = local_38[0] != (undefined2 *)0x0;
      local_38[0] = local_48;
      if (bVar6) {
        FUN_1400020a8();
        local_38[0] = local_48;
      }
    }
    else {
      if (param_2 != 2) goto LAB_145d04a2b;
      FUN_140056680(local_38,&DAT_149dfb77a);
      FUN_14152eab6(&DAT_14caf2438,local_38);
    }
    if (local_38[0] != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_145d04a2b:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d04a4c FUN_145d04a4c body=145 status=ok
// SIG undefined FUN_145d04a4c(void)

undefined8 FUN_145d04a4c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x830) == 0) {
    if (*(longlong *)(param_1 + 0x840) == 0) {
      FUN_140056680(param_2,L"Generic");
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_140056680(param_2,L"Iris");
  }
  else {
    local_18 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x830) + 0x10) + 0x18);
    FUN_1400021e4(&local_18,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 145d04af4 FUN_145d04af4 body=121 status=ok
// SIG undefined FUN_145d04af4(void)

void FUN_145d04af4(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_1 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_1 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != DAT_14c9a71dc) {
    DAT_14c9a71dc = (int)uVar2;
    FUN_1446f8d3c(&DAT_14c9a71d0,DAT_14c9a71d8,uVar2,0x18,8);
  }
  return;
}



// FUNCTION 145d04b6e FUN_145d04b6e body=287 status=ok
// SIG undefined FUN_145d04b6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d04b6e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b11f8) {
    FUN_144b3d300(&DAT_14c9b11f8);
    if (DAT_14c9b11f8 == -1) {
      FUN_145d04c8e();
      FUN_140db5666(&DAT_14c9b1150,2,&DAT_14c9b10e8,
                    L"TBasePassCSFPrecomputedVolumetricLightmapLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712dcd0,
                    FUN_14712dca8,FUN_141751b44,&LAB_14712dca4,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b1150 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c634);
      _Init_thread_footer(&DAT_14c9b11f8);
    }
  }
  return &DAT_14c9b1150;
}



// FUNCTION 145d04c8e FUN_145d04c8e body=205 status=ok
// SIG undefined FUN_145d04c8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d04c8e(void)

{
  if ((DAT_14c9b114f & 2) == 0) {
    DAT_14c9b114f = DAT_14c9b114f | 2;
    _DAT_14c9b10f0 = L"TBasePassCSFPrecomputedVolumetricLightmapLightingPolicySkylight";
    _DAT_14c9b1108 = FUN_146826540;
    _DAT_14c9b1110 = FUN_146825d77;
    _DAT_14c9b1118 = FUN_146825fd6;
    _DAT_14c9b1120 = FUN_1407e02ea;
    _DAT_14c9b1128 = FUN_146826273;
    _DAT_14c9b1100 = FUN_14712dc6a;
    _DAT_14c9b1140 = 0xffffffff00000128;
    _DAT_14c9b1148 = 8;
    DAT_14c9b114c = 0;
    _DAT_14c9b1130 = &LAB_14712dca0;
    FUN_145d04d5c();
    FUN_1407e00cc(&DAT_14c9b10e8);
    return;
  }
  return;
}



// FUNCTION 145d04d5c FUN_145d04d5c body=133 status=ok
// SIG undefined FUN_145d04d5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d04d5c(void)

{
  _DAT_14c9bc210 = L"BASE";
  DAT_14c9bc23a = 4;
  FUN_145d04de2();
  _DAT_14c9bc220 = DAT_14c9b10f8;
  _DAT_14c9bc218 = &DAT_14c9bc240;
  _DAT_14c9bc228 = &LAB_14682652b;
  DAT_14c9b10f8 = &DAT_14c9bc210;
  DAT_14c9b114d = DAT_14c9b114d + '\x01';
  _DAT_14c9bc230 = 0x100000000;
  if (DAT_14c9bc2a4 != '\0') {
    DAT_14c9b114e = DAT_14c9b114e + '\x01';
  }
  return;
}



// FUNCTION 145d04de2 FUN_145d04de2 body=200 status=ok
// SIG undefined FUN_145d04de2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d04de2(void)

{
  if ((DAT_14c9bc2a7 & 2) != 0) {
    return;
  }
  DAT_14c9bc2a7 = DAT_14c9bc2a7 | 2;
  _DAT_14c9bc248 = L"TBasePassComputeShaderBaseType";
  _DAT_14c9bc260 = FUN_146826540;
  _DAT_14c9bc268 = FUN_146825d77;
  _DAT_14c9bc270 = FUN_146825fd6;
  _DAT_14c9bc278 = FUN_1407e02ea;
  _DAT_14c9bc280 = FUN_146826273;
  _DAT_14c9bc258 = FUN_14713d276;
  _DAT_14c9bc298 = 0xffffffff00000128;
  _DAT_14c9bc2a0 = 8;
  DAT_14c9bc2a4 = 0;
  _DAT_14c9bc288 = &LAB_14713d2ac;
  FUN_145d04eaa();
  FUN_1407e00cc(&DAT_14c9bc240);
  return;
}



// FUNCTION 145d04eaa FUN_145d04eaa body=133 status=ok
// SIG undefined FUN_145d04eaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d04eaa(void)

{
  _DAT_14c9bc2a8 = L"BASE";
  DAT_14c9bc2d2 = 4;
  FUN_145d04f30();
  _DAT_14c9bc2b8 = DAT_14c9bc250;
  _DAT_14c9bc2b0 = &DAT_14c9bc2d8;
  _DAT_14c9bc2c0 = &LAB_14682652b;
  DAT_14c9bc250 = &DAT_14c9bc2a8;
  DAT_14c9bc2a5 = DAT_14c9bc2a5 + '\x01';
  _DAT_14c9bc2c8 = 0x100000000;
  if (DAT_14c9bc33c != '\0') {
    DAT_14c9bc2a6 = DAT_14c9bc2a6 + '\x01';
  }
  return;
}



// FUNCTION 145d04f30 FUN_145d04f30 body=210 status=ok
// SIG undefined FUN_145d04f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d04f30(void)

{
  if ((DAT_14c9bc33f & 2) == 0) {
    DAT_14c9bc33f = DAT_14c9bc33f | 2;
    _DAT_14c9bc2e0 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_14c9bc2f8 = FUN_146826540;
    _DAT_14c9bc300 = FUN_146825d77;
    _DAT_14c9bc308 = FUN_146825fd6;
    _DAT_14c9bc310 = FUN_1407e02ea;
    _DAT_14c9bc318 = FUN_146826273;
    _DAT_14c9bc2f0 = FUN_14713d2b0;
    _DAT_14c9bc330 = 0xffffffff00000128;
    _DAT_14c9bc338 = 8;
    DAT_14c9bc33c = 0;
    _DAT_14c9bc320 = &LAB_14713d2e6;
    FUN_145d05002();
    FUN_145d05618();
    FUN_1407e00cc(&DAT_14c9bc2d8);
    return;
  }
  return;
}



// FUNCTION 145d05002 FUN_145d05002 body=121 status=ok
// SIG undefined FUN_145d05002(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05002(void)

{
  FUN_145d0507c();
  _DAT_14c9bc340 = L"ReflectionCaptureBuffer";
  DAT_14c9bc36a = FUN_140850cc5();
  _DAT_14c9bc348 = FUN_14106a12a();
  _DAT_14c9bc358 = &LAB_14682652b;
  _DAT_14c9bc360 = 0x10000010e;
  _DAT_14c9bc368 = 0;
  _DAT_14c9bc350 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc340;
  return;
}



// FUNCTION 145d0507c FUN_145d0507c body=121 status=ok
// SIG undefined FUN_145d0507c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0507c(void)

{
  FUN_145d050f6();
  _DAT_14c9bc370 = L"ShadingOutputsParam";
  DAT_14c9bc39a = FUN_140850cc5();
  _DAT_14c9bc378 = FUN_14106a12a();
  _DAT_14c9bc388 = &LAB_14682652b;
  _DAT_14c9bc390 = 0x100000110;
  _DAT_14c9bc398 = 0;
  _DAT_14c9bc380 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc370;
  return;
}



// FUNCTION 145d050f6 FUN_145d050f6 body=121 status=ok
// SIG undefined FUN_145d050f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d050f6(void)

{
  FUN_145d05170();
  _DAT_14c9bc3a0 = L"ViewRectParam";
  DAT_14c9bc3ca = FUN_140850cc5();
  _DAT_14c9bc3a8 = FUN_140ec6960();
  _DAT_14c9bc3b8 = &LAB_14682652b;
  _DAT_14c9bc3c0 = 0x100000112;
  _DAT_14c9bc3c8 = 0;
  _DAT_14c9bc3b0 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc3a0;
  return;
}



// FUNCTION 145d05170 FUN_145d05170 body=121 status=ok
// SIG undefined FUN_145d05170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05170(void)

{
  FUN_145d051ea();
  _DAT_14c9bc3d0 = L"PassDataParam";
  DAT_14c9bc3fa = FUN_140850cc5();
  _DAT_14c9bc3d8 = FUN_140ec6960();
  _DAT_14c9bc3e8 = &LAB_14682652b;
  _DAT_14c9bc3f0 = 0x100000118;
  _DAT_14c9bc3f8 = 0;
  _DAT_14c9bc3e0 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc3d0;
  return;
}



// FUNCTION 145d051ea FUN_145d051ea body=121 status=ok
// SIG undefined FUN_145d051ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d051ea(void)

{
  FUN_145d05264();
  _DAT_14c9bc400 = L"Target0";
  DAT_14c9bc42a = FUN_140850cc5();
  _DAT_14c9bc408 = FUN_1410b9266();
  _DAT_14c9bc418 = &LAB_14682652b;
  _DAT_14c9bc420 = 0x10000011e;
  _DAT_14c9bc428 = 0;
  _DAT_14c9bc410 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc400;
  return;
}



// FUNCTION 145d05264 FUN_145d05264 body=121 status=ok
// SIG undefined FUN_145d05264(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05264(void)

{
  FUN_145d052de();
  _DAT_14c9bc430 = L"Target1";
  DAT_14c9bc45a = FUN_140850cc5();
  _DAT_14c9bc438 = FUN_1410b9266();
  _DAT_14c9bc448 = &LAB_14682652b;
  _DAT_14c9bc450 = 0x10000011f;
  _DAT_14c9bc458 = 0;
  _DAT_14c9bc440 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc430;
  return;
}



// FUNCTION 145d052de FUN_145d052de body=121 status=ok
// SIG undefined FUN_145d052de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d052de(void)

{
  FUN_145d05358();
  _DAT_14c9bc460 = L"Target2";
  DAT_14c9bc48a = FUN_140850cc5();
  _DAT_14c9bc468 = FUN_1410b9266();
  _DAT_14c9bc478 = &LAB_14682652b;
  _DAT_14c9bc480 = 0x100000120;
  _DAT_14c9bc488 = 0;
  _DAT_14c9bc470 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc460;
  return;
}



// FUNCTION 145d05358 FUN_145d05358 body=121 status=ok
// SIG undefined FUN_145d05358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05358(void)

{
  FUN_145d053d2();
  _DAT_14c9bc490 = L"Target3";
  DAT_14c9bc4ba = FUN_140850cc5();
  _DAT_14c9bc498 = FUN_1410b9266();
  _DAT_14c9bc4a8 = &LAB_14682652b;
  _DAT_14c9bc4b0 = 0x100000121;
  _DAT_14c9bc4b8 = 0;
  _DAT_14c9bc4a0 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc490;
  return;
}



// FUNCTION 145d053d2 FUN_145d053d2 body=121 status=ok
// SIG undefined FUN_145d053d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d053d2(void)

{
  FUN_145d0544c();
  _DAT_14c9bc4c0 = L"Target4";
  DAT_14c9bc4ea = FUN_140850cc5();
  _DAT_14c9bc4c8 = FUN_1410b9266();
  _DAT_14c9bc4d8 = &LAB_14682652b;
  _DAT_14c9bc4e0 = 0x100000122;
  _DAT_14c9bc4e8 = 0;
  _DAT_14c9bc4d0 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc4c0;
  return;
}



// FUNCTION 145d0544c FUN_145d0544c body=121 status=ok
// SIG undefined FUN_145d0544c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0544c(void)

{
  FUN_145d054c6();
  _DAT_14c9bc4f0 = L"Target5";
  DAT_14c9bc51a = FUN_140850cc5();
  _DAT_14c9bc4f8 = FUN_1410b9266();
  _DAT_14c9bc508 = &LAB_14682652b;
  _DAT_14c9bc510 = 0x100000123;
  _DAT_14c9bc518 = 0;
  _DAT_14c9bc500 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc4f0;
  return;
}



// FUNCTION 145d054c6 FUN_145d054c6 body=121 status=ok
// SIG undefined FUN_145d054c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d054c6(void)

{
  FUN_145d05540();
  _DAT_14c9bc520 = L"Target6";
  DAT_14c9bc54a = FUN_140850cc5();
  _DAT_14c9bc528 = FUN_1410b9266();
  _DAT_14c9bc538 = &LAB_14682652b;
  _DAT_14c9bc540 = 0x100000124;
  _DAT_14c9bc548 = 0;
  _DAT_14c9bc530 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc520;
  return;
}



// FUNCTION 145d05540 FUN_145d05540 body=216 status=ok
// SIG undefined FUN_145d05540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05540(void)

{
  _DAT_14c9bc580 = L"Targets";
  DAT_14c9bc5aa = FUN_140850cc5();
  _DAT_14c9bc588 = FUN_1410b9266();
  _DAT_14c9bc598 = &LAB_14682652b;
  _DAT_14c9bc5a0 = 0x100000126;
  _DAT_14c9bc5a8 = 0;
  _DAT_14c9bc590 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc580;
  _DAT_14c9bc550 = L"Target7";
  DAT_14c9bc57a = FUN_140850cc5();
  _DAT_14c9bc558 = FUN_1410b9266();
  _DAT_14c9bc568 = &LAB_14682652b;
  _DAT_14c9bc570 = 0x100000125;
  _DAT_14c9bc578 = 0;
  _DAT_14c9bc560 = DAT_14c9bc2e8;
  DAT_14c9bc2e8 = &DAT_14c9bc550;
  return;
}



// FUNCTION 145d05618 FUN_145d05618 body=225 status=ok
// SIG undefined FUN_145d05618(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05618(void)

{
  _DAT_14c9bc5b0 = L"BASE";
  DAT_14c9bc5da = 4;
  _DAT_14c9bc5b8 = FUN_1411cad6c();
  _DAT_14c9bc5c0 = DAT_14c9bc2e8;
  _DAT_14c9bc5c8 = &LAB_14682652b;
  DAT_14c9bc2e8 = &DAT_14c9bc5b0;
  DAT_14c9bc33d = DAT_14c9bc33d + '\x01';
  _DAT_14c9bc5d0 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bc5b8 + 100) != '\0') {
    DAT_14c9bc33e = DAT_14c9bc33e + '\x01';
  }
  _DAT_14c9bc5e0 = L"BASE";
  DAT_14c9bc60a = 4;
  _DAT_14c9bc5e8 = FUN_141092e92();
  _DAT_14c9bc5f0 = DAT_14c9bc2e8;
  _DAT_14c9bc5f8 = &LAB_14682652b;
  DAT_14c9bc2e8 = &DAT_14c9bc5e0;
  DAT_14c9bc33d = DAT_14c9bc33d + '\x01';
  _DAT_14c9bc600 = 0x100000000;
  if (*(char *)(_DAT_14c9bc5e8 + 100) != '\0') {
    DAT_14c9bc33e = DAT_14c9bc33e + '\x01';
  }
  return;
}



// FUNCTION 145d056fa FUN_145d056fa body=287 status=ok
// SIG undefined FUN_145d056fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d056fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b2100) {
    FUN_144b3d300(&DAT_14c9b2100);
    if (DAT_14c9b2100 == -1) {
      FUN_145d0581a();
      FUN_140db5666(&DAT_14c9b2058,2,&DAT_14c9b1ff0,
                    L"TBasePassCSFCachedVolumeIndirectLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712e606,
                    FUN_14712e5de,FUN_1417541e6,&LAB_14712e5da,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b2058 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c6d0);
      _Init_thread_footer(&DAT_14c9b2100);
    }
  }
  return &DAT_14c9b2058;
}



// FUNCTION 145d0581a FUN_145d0581a body=205 status=ok
// SIG undefined FUN_145d0581a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0581a(void)

{
  if ((DAT_14c9b2057 & 2) == 0) {
    DAT_14c9b2057 = DAT_14c9b2057 | 2;
    _DAT_14c9b1ff8 = L"TBasePassCSFCachedVolumeIndirectLightingPolicySkylight";
    _DAT_14c9b2010 = FUN_146826540;
    _DAT_14c9b2018 = FUN_146825d77;
    _DAT_14c9b2020 = FUN_146825fd6;
    _DAT_14c9b2028 = FUN_1407e02ea;
    _DAT_14c9b2030 = FUN_146826273;
    _DAT_14c9b2008 = FUN_14712e5a0;
    _DAT_14c9b2048 = 0xffffffff00000128;
    _DAT_14c9b2050 = 8;
    DAT_14c9b2054 = 0;
    _DAT_14c9b2038 = &LAB_14712e5d6;
    FUN_145d058e8();
    FUN_1407e00cc(&DAT_14c9b1ff0);
    return;
  }
  return;
}



// FUNCTION 145d058e8 FUN_145d058e8 body=133 status=ok
// SIG undefined FUN_145d058e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d058e8(void)

{
  _DAT_14c9bcd00 = L"BASE";
  DAT_14c9bcd2a = 4;
  FUN_145d0596e();
  _DAT_14c9bcd10 = DAT_14c9b2000;
  _DAT_14c9bcd08 = &DAT_14c9bcd30;
  _DAT_14c9bcd18 = &LAB_14682652b;
  DAT_14c9b2000 = &DAT_14c9bcd00;
  DAT_14c9b2055 = DAT_14c9b2055 + '\x01';
  _DAT_14c9bcd20 = 0x100000000;
  if (DAT_14c9bcd94 != '\0') {
    DAT_14c9b2056 = DAT_14c9b2056 + '\x01';
  }
  return;
}



// FUNCTION 145d0596e FUN_145d0596e body=200 status=ok
// SIG undefined FUN_145d0596e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0596e(void)

{
  if ((DAT_14c9bcd97 & 2) != 0) {
    return;
  }
  DAT_14c9bcd97 = DAT_14c9bcd97 | 2;
  _DAT_14c9bcd38 = L"TBasePassComputeShaderBaseType";
  _DAT_14c9bcd50 = FUN_146826540;
  _DAT_14c9bcd58 = FUN_146825d77;
  _DAT_14c9bcd60 = FUN_146825fd6;
  _DAT_14c9bcd68 = FUN_1407e02ea;
  _DAT_14c9bcd70 = FUN_146826273;
  _DAT_14c9bcd48 = FUN_14713d770;
  _DAT_14c9bcd88 = 0xffffffff00000128;
  _DAT_14c9bcd90 = 8;
  DAT_14c9bcd94 = 0;
  _DAT_14c9bcd78 = &LAB_14713d7a6;
  FUN_145d05a36();
  FUN_1407e00cc(&DAT_14c9bcd30);
  return;
}



// FUNCTION 145d05a36 FUN_145d05a36 body=133 status=ok
// SIG undefined FUN_145d05a36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05a36(void)

{
  _DAT_14c9bcd98 = L"BASE";
  DAT_14c9bcdc2 = 4;
  FUN_145d05abc();
  _DAT_14c9bcda8 = DAT_14c9bcd40;
  _DAT_14c9bcda0 = &DAT_14c9bcdc8;
  _DAT_14c9bcdb0 = &LAB_14682652b;
  DAT_14c9bcd40 = &DAT_14c9bcd98;
  DAT_14c9bcd95 = DAT_14c9bcd95 + '\x01';
  _DAT_14c9bcdb8 = 0x100000000;
  if (DAT_14c9bce2c != '\0') {
    DAT_14c9bcd96 = DAT_14c9bcd96 + '\x01';
  }
  return;
}



// FUNCTION 145d05abc FUN_145d05abc body=210 status=ok
// SIG undefined FUN_145d05abc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05abc(void)

{
  if ((DAT_14c9bce2f & 2) == 0) {
    DAT_14c9bce2f = DAT_14c9bce2f | 2;
    _DAT_14c9bcdd0 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_14c9bcde8 = FUN_146826540;
    _DAT_14c9bcdf0 = FUN_146825d77;
    _DAT_14c9bcdf8 = FUN_146825fd6;
    _DAT_14c9bce00 = FUN_1407e02ea;
    _DAT_14c9bce08 = FUN_146826273;
    _DAT_14c9bcde0 = FUN_14713d7aa;
    _DAT_14c9bce20 = 0xffffffff00000128;
    _DAT_14c9bce28 = 8;
    DAT_14c9bce2c = 0;
    _DAT_14c9bce10 = &LAB_14713d7e0;
    FUN_145d05b8e();
    FUN_145d061a4();
    FUN_1407e00cc(&DAT_14c9bcdc8);
    return;
  }
  return;
}



// FUNCTION 145d05b8e FUN_145d05b8e body=121 status=ok
// SIG undefined FUN_145d05b8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05b8e(void)

{
  FUN_145d05c08();
  _DAT_14c9bce30 = L"ReflectionCaptureBuffer";
  DAT_14c9bce5a = FUN_140850cc5();
  _DAT_14c9bce38 = FUN_14106a12a();
  _DAT_14c9bce48 = &LAB_14682652b;
  _DAT_14c9bce50 = 0x10000010e;
  _DAT_14c9bce58 = 0;
  _DAT_14c9bce40 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bce30;
  return;
}



// FUNCTION 145d05c08 FUN_145d05c08 body=121 status=ok
// SIG undefined FUN_145d05c08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05c08(void)

{
  FUN_145d05c82();
  _DAT_14c9bce60 = L"ShadingOutputsParam";
  DAT_14c9bce8a = FUN_140850cc5();
  _DAT_14c9bce68 = FUN_14106a12a();
  _DAT_14c9bce78 = &LAB_14682652b;
  _DAT_14c9bce80 = 0x100000110;
  _DAT_14c9bce88 = 0;
  _DAT_14c9bce70 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bce60;
  return;
}



// FUNCTION 145d05c82 FUN_145d05c82 body=121 status=ok
// SIG undefined FUN_145d05c82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05c82(void)

{
  FUN_145d05cfc();
  _DAT_14c9bce90 = L"ViewRectParam";
  DAT_14c9bceba = FUN_140850cc5();
  _DAT_14c9bce98 = FUN_140ec6960();
  _DAT_14c9bcea8 = &LAB_14682652b;
  _DAT_14c9bceb0 = 0x100000112;
  _DAT_14c9bceb8 = 0;
  _DAT_14c9bcea0 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bce90;
  return;
}



// FUNCTION 145d05cfc FUN_145d05cfc body=121 status=ok
// SIG undefined FUN_145d05cfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05cfc(void)

{
  FUN_145d05d76();
  _DAT_14c9bcec0 = L"PassDataParam";
  DAT_14c9bceea = FUN_140850cc5();
  _DAT_14c9bcec8 = FUN_140ec6960();
  _DAT_14c9bced8 = &LAB_14682652b;
  _DAT_14c9bcee0 = 0x100000118;
  _DAT_14c9bcee8 = 0;
  _DAT_14c9bced0 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bcec0;
  return;
}



// FUNCTION 145d05d76 FUN_145d05d76 body=121 status=ok
// SIG undefined FUN_145d05d76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05d76(void)

{
  FUN_145d05df0();
  _DAT_14c9bcef0 = L"Target0";
  DAT_14c9bcf1a = FUN_140850cc5();
  _DAT_14c9bcef8 = FUN_1410b9266();
  _DAT_14c9bcf08 = &LAB_14682652b;
  _DAT_14c9bcf10 = 0x10000011e;
  _DAT_14c9bcf18 = 0;
  _DAT_14c9bcf00 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bcef0;
  return;
}



// FUNCTION 145d05df0 FUN_145d05df0 body=121 status=ok
// SIG undefined FUN_145d05df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05df0(void)

{
  FUN_145d05e6a();
  _DAT_14c9bcf20 = L"Target1";
  DAT_14c9bcf4a = FUN_140850cc5();
  _DAT_14c9bcf28 = FUN_1410b9266();
  _DAT_14c9bcf38 = &LAB_14682652b;
  _DAT_14c9bcf40 = 0x10000011f;
  _DAT_14c9bcf48 = 0;
  _DAT_14c9bcf30 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bcf20;
  return;
}



// FUNCTION 145d05e6a FUN_145d05e6a body=121 status=ok
// SIG undefined FUN_145d05e6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05e6a(void)

{
  FUN_145d05ee4();
  _DAT_14c9bcf50 = L"Target2";
  DAT_14c9bcf7a = FUN_140850cc5();
  _DAT_14c9bcf58 = FUN_1410b9266();
  _DAT_14c9bcf68 = &LAB_14682652b;
  _DAT_14c9bcf70 = 0x100000120;
  _DAT_14c9bcf78 = 0;
  _DAT_14c9bcf60 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bcf50;
  return;
}



// FUNCTION 145d05ee4 FUN_145d05ee4 body=121 status=ok
// SIG undefined FUN_145d05ee4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05ee4(void)

{
  FUN_145d05f5e();
  _DAT_14c9bcf80 = L"Target3";
  DAT_14c9bcfaa = FUN_140850cc5();
  _DAT_14c9bcf88 = FUN_1410b9266();
  _DAT_14c9bcf98 = &LAB_14682652b;
  _DAT_14c9bcfa0 = 0x100000121;
  _DAT_14c9bcfa8 = 0;
  _DAT_14c9bcf90 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bcf80;
  return;
}



// FUNCTION 145d05f5e FUN_145d05f5e body=121 status=ok
// SIG undefined FUN_145d05f5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05f5e(void)

{
  FUN_145d05fd8();
  _DAT_14c9bcfb0 = L"Target4";
  DAT_14c9bcfda = FUN_140850cc5();
  _DAT_14c9bcfb8 = FUN_1410b9266();
  _DAT_14c9bcfc8 = &LAB_14682652b;
  _DAT_14c9bcfd0 = 0x100000122;
  _DAT_14c9bcfd8 = 0;
  _DAT_14c9bcfc0 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bcfb0;
  return;
}



// FUNCTION 145d05fd8 FUN_145d05fd8 body=121 status=ok
// SIG undefined FUN_145d05fd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d05fd8(void)

{
  FUN_145d06052();
  _DAT_14c9bcfe0 = L"Target5";
  DAT_14c9bd00a = FUN_140850cc5();
  _DAT_14c9bcfe8 = FUN_1410b9266();
  _DAT_14c9bcff8 = &LAB_14682652b;
  _DAT_14c9bd000 = 0x100000123;
  _DAT_14c9bd008 = 0;
  _DAT_14c9bcff0 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bcfe0;
  return;
}



// FUNCTION 145d06052 FUN_145d06052 body=121 status=ok
// SIG undefined FUN_145d06052(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06052(void)

{
  FUN_145d060cc();
  _DAT_14c9bd010 = L"Target6";
  DAT_14c9bd03a = FUN_140850cc5();
  _DAT_14c9bd018 = FUN_1410b9266();
  _DAT_14c9bd028 = &LAB_14682652b;
  _DAT_14c9bd030 = 0x100000124;
  _DAT_14c9bd038 = 0;
  _DAT_14c9bd020 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bd010;
  return;
}


