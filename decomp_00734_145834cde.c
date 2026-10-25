// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145834cde FUN_145834cde body=53 status=ok
// SIG undefined FUN_145834cde(void)

void FUN_145834cde(longlong *param_1)

{
  FUN_145834d4a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145834d14 FUN_145834d14 body=53 status=ok
// SIG undefined FUN_145834d14(void)

void FUN_145834d14(longlong *param_1)

{
  FUN_145834da4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145834d4a FUN_145834d4a body=90 status=ok
// SIG undefined FUN_145834d4a(void)

void FUN_145834d4a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14598a99e(param_1,0);
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



// FUNCTION 145834da4 FUN_145834da4 body=90 status=ok
// SIG undefined FUN_145834da4(void)

void FUN_145834da4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1456b4004(param_1,0);
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



// FUNCTION 145834dfe FUN_145834dfe body=264 status=ok
// SIG undefined FUN_145834dfe(void)

longlong * FUN_145834dfe(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b420a40;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b420a58;
  FUN_140d7ec9e(plVar4 + 9);
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_145834f0a(&local_40,plVar1);
  FUN_145834fac(plVar1,param_3,param_1);
  plVar3 = local_38;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145834f0a FUN_145834f0a body=162 status=ok
// SIG undefined FUN_145834f0a(void)

void FUN_145834f0a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145834f49;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145834f49;
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
LAB_145834f49:
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
                    /* WARNING: Could not recover jumptable at 0x000145834fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145834fac FUN_145834fac body=331 status=ok
// SIG undefined FUN_145834fac(void)

void FUN_145834fac(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 local_f8 [16];
  code *local_e8;
  undefined4 local_e0;
  undefined1 local_dc [12];
  undefined8 local_d0;
  longlong lStack_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (lVar1 != 0) {
    local_e8 = FUN_1458350f8;
    local_e0 = 0;
    FUN_145835138(local_f8);
    memset(&local_e8,0,0xa0);
    FUN_144a7a8f6(&local_e8);
    FUN_144a7a8f6(local_dc);
    local_b8 = (longlong *)0x0;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_d0 = 0;
    lStack_c8 = 0;
    uVar2 = FUN_1447210f0(lVar1);
    local_108 = local_f8;
    FUN_1411cff2e(param_1 + 0x38,param_3 + 8,uVar2,&local_e8);
    if (local_88 != 0) {
      plVar3 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar3 = local_68;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (lStack_c8 != 0) {
      plVar3 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar3 = local_a8;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    FUN_1458350f8(param_1);
    FUN_1449db362(local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458350f8 FUN_1458350f8 body=64 status=ok
// SIG undefined FUN_1458350f8(void)

void FUN_1458350f8(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_140a262da(param_1 + 0x38);
  if (((*(char *)(param_1 + 0x30) != cVar2) &&
      (*(char *)(param_1 + 0x30) = cVar2, *(int *)(param_1 + 0x20) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145835135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 145835138 FUN_145835138 body=428 status=ok
// SIG undefined FUN_145835138(void)

longlong * FUN_145835138(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145835218:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b420a70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145835218;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b420a70;
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



// FUNCTION 1458352e4 FUN_1458352e4 body=40 status=ok
// SIG undefined FUN_1458352e4(void)

undefined8 FUN_1458352e4(undefined8 param_1,int param_2)

{
  FUN_14583530c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583530c FUN_14583530c body=143 status=ok
// SIG undefined FUN_14583530c(void)

void FUN_14583530c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b15dc40;
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14583539c(param_1 + 9);
  FUN_1458353d4(param_1);
  return;
}



// FUNCTION 14583539c FUN_14583539c body=55 status=ok
// SIG undefined FUN_14583539c(void)

void FUN_14583539c(longlong *param_1)

{
  FUN_14583543c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458353d4 FUN_1458353d4 body=94 status=ok
// SIG undefined FUN_1458353d4(void)

void FUN_1458353d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b15a3d0;
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14583543c FUN_14583543c body=123 status=ok
// SIG undefined FUN_14583543c(void)

void FUN_14583543c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
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



// FUNCTION 1458354b8 FUN_1458354b8 body=171 status=ok
// SIG undefined FUN_1458354b8(void)

void FUN_1458354b8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b162f20;
  FUN_145835563(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  param_1[5] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_140115c12(param_1 + 7,0);
  }
  param_1[6] = 0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
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
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 145835563 FUN_145835563 body=60 status=ok
// SIG undefined FUN_145835563(void)

void FUN_145835563(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1447a1747(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458355a0 FUN_1458355a0 body=180 status=ok
// SIG undefined FUN_1458355a0(void)

int FUN_1458355a0(longlong param_1,ulonglong param_2,char param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 1) {
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  else {
    if (iVar2 == 1) {
      uVar4 = 0;
    }
    else {
      uVar3 = 0;
      plVar5 = *(longlong **)(param_1 + 8);
      do {
        uVar4 = uVar3;
        if (param_2 <= *(ulonglong *)(*plVar5 + 0x10)) break;
        uVar3 = uVar3 + 1;
        plVar5 = plVar5 + 3;
        uVar4 = (ulonglong)(iVar2 - 1);
      } while (iVar2 - 1 != uVar3);
    }
    plVar5 = (longlong *)(*(longlong **)(param_1 + 8))[uVar4 * 3];
    iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
    uVar3 = FUN_145835654(param_1,iVar2);
    if (param_2 < uVar3) {
      iVar1 = iVar2 + -1;
    }
    else {
      uVar3 = FUN_145835654(param_1,iVar2 + 1);
      iVar1 = iVar2 + 1;
      if (param_2 < uVar3) {
        iVar1 = iVar2;
      }
    }
    iVar6 = iVar1;
    if ((param_3 != '\0') && (iVar6 = *(int *)(param_1 + 0x18), iVar1 < *(int *)(param_1 + 0x18))) {
      iVar6 = iVar1;
    }
    iVar2 = *(int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x1c) < iVar6) {
      iVar2 = iVar6;
    }
  }
  return iVar2;
}



// FUNCTION 145835654 FUN_145835654 body=81 status=ok
// SIG undefined FUN_145835654(void)

undefined8 FUN_145835654(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 < 1) || (param_2 <= *(int *)(param_1 + 0x1c))) {
    return 0;
  }
  if (iVar1 == 1) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    plVar5 = *(longlong **)(param_1 + 8);
    do {
      uVar3 = uVar4;
      if (param_2 <= *(int *)(*plVar5 + 8)) break;
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 3;
      uVar3 = (ulonglong)(iVar1 - 1);
    } while (iVar1 - 1 != uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00014583567d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)(*(longlong **)(param_1 + 8))[uVar3 * 3] + 0x10))();
  return uVar2;
}



// FUNCTION 1458356a6 FUN_1458356a6 body=81 status=ok
// SIG undefined FUN_1458356a6(void)

int FUN_1458356a6(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_4_ = (int)((ulonglong)param_2 >> 0x20);
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = 0x45300000;
  dVar1 = pow((((double)CONCAT44(0x43300000,(int)param_2) - 4503599627370496.0) +
              (auVar2._8_8_ - 1.9342813113834067e+25)) / *(double *)(param_1 + 0x28) -
              *(double *)(param_1 + 0x38),1.0 / *(double *)(param_1 + 0x30));
  return (int)((dVar1 - *(double *)(param_1 + 0x18)) / *(double *)(param_1 + 0x20));
}



// FUNCTION 1458356f8 FUN_1458356f8 body=70 status=ok
// SIG undefined FUN_1458356f8(void)

undefined8 FUN_1458356f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14583573e(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14583573e FUN_14583573e body=84 status=ok
// SIG undefined FUN_14583573e(void)

longlong * FUN_14583573e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1458357a0 FUN_1458357a0 body=40 status=ok
// SIG undefined FUN_1458357a0(void)

undefined8 FUN_1458357a0(undefined8 param_1,int param_2)

{
  FUN_1458357c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458357c8 FUN_1458357c8 body=112 status=ok
// SIG undefined FUN_1458357c8(void)

void FUN_1458357c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b65cb80;
  param_1[6] = &PTR_FUN_14b65ce70;
  FUN_140bcae4d(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1411d0104(param_1);
  return;
}



// FUNCTION 14583583e FUN_14583583e body=118 status=ok
// SIG undefined FUN_14583583e(void)

LPVOID FUN_14583583e(longlong *param_1,longlong param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = VirtualAlloc((LPVOID)0x0,
                        -(ulonglong)DAT_14c841d40 & (param_2 * 0x20 + (ulonglong)DAT_14c841d40) - 1,
                        0x3000,4);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_1411d03d7(pvVar1,param_2);
    return pvVar1;
  }
  if ((LPCRITICAL_SECTION)(*param_1 + 0x38) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x38));
  }
                    /* WARNING: Subroutine does not return */
  FUN_1467b7838(param_2 * 0x20,0);
}



// FUNCTION 1458358b6 FUN_1458358b6 body=277 status=ok
// SIG undefined FUN_1458358b6(void)

void FUN_1458358b6(longlong param_1,short param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = param_2;
  if (param_3 == '\0') {
    sVar3 = *(short *)(param_1 + 2);
    if (param_4 == '\0') {
      if (sVar3 == 0x3941 || sVar3 == param_2) goto LAB_1458358eb;
      pwVar2 = 
      L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x does not have an expected value.";
      uVar1 = 0xb3;
    }
    else {
      if (sVar3 == 0x3941) goto LAB_1458358eb;
      pwVar2 = 
      L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x. This block is guaranteed to be new yet is it already assigned."
      ;
      uVar1 = 0xae;
    }
  }
  else {
    if (param_4 != '\0') {
      FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x9a,
                    L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x. This block is both preexisting and guaranteed to be new; which makes no sense."
                    ,*(undefined2 *)(param_1 + 2),param_2);
    }
    sVar3 = *(short *)(param_1 + 2);
    if (param_2 == 0x3941) {
      if ((sVar3 == 0x17ea) || (sVar3 == -0xce9)) goto LAB_1458358eb;
      pwVar2 = 
      L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be preexisting and in use."
      ;
      uVar1 = 0xa0;
      sVar4 = 0x3941;
    }
    else {
      if (sVar3 == param_2) goto LAB_1458358eb;
      pwVar2 = 
      L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x because this block should be preexisting."
      ;
      uVar1 = 0xa5;
    }
  }
  FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",uVar1,pwVar2,sVar3,sVar4);
LAB_1458358eb:
  *(short *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 1458359cc FUN_1458359cc body=255 status=ok
// SIG undefined FUN_1458359cc(void)

void FUN_1458359cc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145835b5e();
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0xa8);
  lVar2 = (longlong)local_30;
  pvVar3 = *(void **)(param_1 + 0xa0);
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_145835afc(&local_38,local_30,0);
    memcpy(local_38,pvVar3,lVar2 << 3);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_145835acc(param_1 + 0xa0);
  }
  if ((longlong)local_30 != 0) {
    lVar2 = (longlong)local_30 << 3;
    pvVar3 = local_38;
    do {
      lVar1 = FUN_14479d2ce(pvVar3);
      if (lVar1 != 0) {
        FUN_1411d03f8(param_1 + 0x48,lVar1);
      }
      pvVar3 = (void *)((longlong)pvVar3 + 8);
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145835acc FUN_145835acc body=48 status=ok
// SIG undefined FUN_145835acc(void)

void FUN_145835acc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 145835afc FUN_145835afc body=98 status=ok
// SIG undefined FUN_145835afc(void)

void FUN_145835afc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145835b5e FUN_145835b5e body=120 status=ok
// SIG undefined FUN_145835b5e(void)

void FUN_145835b5e(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xb0);
    lVar3 = FUN_140b15fd0();
    if (lVar3 != 0) {
      lVar3 = FUN_1447210f0(lVar3);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x1f0) == 0) {
          puVar4 = (undefined8 *)(lVar3 + 0x458);
        }
        else {
          puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
        }
        uVar2 = *puVar4;
        lVar3 = FUN_144a61814(uVar2,puVar1);
        if (lVar3 != 0) {
          FUN_1405a424c(uVar2,*puVar1);
        }
      }
    }
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 145835bd6 FUN_145835bd6 body=227 status=ok
// SIG undefined FUN_145835bd6(void)

undefined8 * FUN_145835bd6(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = &DAT_3f8000003f800000;
  param_1[3] = &DAT_3f8000003f800000;
  memset(param_1 + 4,0,0x184);
  memset(param_1 + 0x35,0,0x400);
  *(undefined4 *)(param_1 + 0xb5) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb8] = 6;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  memset(param_1 + 0xba,0,0x104);
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xea) = 0;
  param_1[0xeb] = 0;
  *(undefined2 *)((longlong)param_1 + 0x751) = 0;
  return param_1;
}



// FUNCTION 145835cba FUN_145835cba body=80 status=ok
// SIG undefined FUN_145835cba(void)

void FUN_145835cba(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x568) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x568) + 0x48))();
    *(undefined8 *)(param_1 + 0x568) = 0;
  }
  FUN_1411d16aa(param_1);
  if (DAT_14c9a1ab0 == param_1) {
    DAT_14c9a1ab0 = 0;
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145835d0a FUN_145835d0a body=61 status=ok
// SIG undefined FUN_145835d0a(void)

void FUN_145835d0a(longlong param_1)

{
  FUN_14582e47c(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_1470a3dfc(param_1 + 0x70);
  }
  FUN_145835d48(param_1 + 0x80);
  return;
}



// FUNCTION 145835d48 FUN_145835d48 body=67 status=ok
// SIG undefined FUN_145835d48(void)

void FUN_145835d48(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1458360f4(param_1);
    FUN_14582e4e0(param_1,0);
    return;
  }
  FUN_14582e4e0(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1470a3c26(param_1);
  return;
}



// FUNCTION 145835d8b FUN_145835d8b body=77 status=ok
// SIG undefined FUN_145835d8b(void)

void FUN_145835d8b(longlong param_1,int param_2)

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



// FUNCTION 145835dd8 FUN_145835dd8 body=160 status=ok
// SIG undefined FUN_145835dd8(void)

void FUN_145835dd8(longlong *param_1,undefined4 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145835e63;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145835e63:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145835e78 FUN_145835e78 body=96 status=ok
// SIG undefined FUN_145835e78(void)

void FUN_145835e78(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 145835ed8 FUN_145835ed8 body=67 status=ok
// SIG undefined FUN_145835ed8(void)

void FUN_145835ed8(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145836604(param_1);
    FUN_145835f1c(param_1,0);
    return;
  }
  FUN_145835f1c(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1411d2144(param_1);
  return;
}



// FUNCTION 145835f1c FUN_145835f1c body=129 status=ok
// SIG undefined FUN_145835f1c(void)

void FUN_145835f1c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 145835f9e FUN_145835f9e body=67 status=ok
// SIG undefined FUN_145835f9e(void)

void FUN_145835f9e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14583674a(param_1);
    FUN_145835fe2(param_1,0);
    return;
  }
  FUN_145835fe2(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140cea084(param_1);
  return;
}



// FUNCTION 145835fe2 FUN_145835fe2 body=129 status=ok
// SIG undefined FUN_145835fe2(void)

void FUN_145835fe2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
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



// FUNCTION 145836064 FUN_145836064 body=48 status=ok
// SIG undefined FUN_145836064(void)

void FUN_145836064(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145836094 FUN_145836094 body=48 status=ok
// SIG undefined FUN_145836094(void)

void FUN_145836094(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1458360c4 FUN_1458360c4 body=48 status=ok
// SIG undefined FUN_1458360c4(void)

void FUN_1458360c4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x98,8);
  }
  return;
}



// FUNCTION 1458360f4 FUN_1458360f4 body=341 status=ok
// SIG undefined FUN_1458360f4(void)

void FUN_1458360f4(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xcc + (longlong)iVar4 * 0xd0) * 4) =
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



// FUNCTION 14583624a FUN_14583624a body=318 status=ok
// SIG undefined FUN_14583624a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14583624a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x5d0);
  lVar2 = param_1 + 0x5e0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x5f8) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x5f8);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (local_48 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (plVar3 != (longlong *)0x0) {
        FUN_145c1f4a4(plVar3);
        _DAT_14c9a1bdc = _DAT_14c9a1bdc + -1;
        *plVar3 = (longlong)DAT_14c9a1bd0;
        DAT_14c9a1bd0 = plVar3;
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (((iStack_5c != iVar4) || (local_68 != lVar2)) || (local_78 != plVar1));
  }
  FUN_14583638a(plVar1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14583638a FUN_14583638a body=67 status=ok
// SIG undefined FUN_14583638a(void)

void FUN_14583638a(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14583644a(param_1);
    FUN_1458363ce(param_1,0);
    return;
  }
  FUN_1458363ce(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14570046a(param_1);
  return;
}



// FUNCTION 1458363ce FUN_1458363ce body=123 status=ok
// SIG undefined FUN_1458363ce(void)

void FUN_1458363ce(longlong param_1,int param_2)

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
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
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



// FUNCTION 14583644a FUN_14583644a body=325 status=ok
// SIG undefined FUN_14583644a(void)

void FUN_14583644a(longlong *param_1)

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



// FUNCTION 145836590 FUN_145836590 body=116 status=ok
// SIG undefined FUN_145836590(void)

void FUN_145836590(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x238,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x238)) {
      uVar2 = uVar1 / 0x238 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x238,8);
  }
  return;
}



// FUNCTION 145836604 FUN_145836604 body=325 status=ok
// SIG undefined FUN_145836604(void)

void FUN_145836604(longlong *param_1)

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



// FUNCTION 14583674a FUN_14583674a body=332 status=ok
// SIG undefined FUN_14583674a(void)

void FUN_14583674a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
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



// FUNCTION 145836898 FUN_145836898 body=59 status=ok
// SIG undefined FUN_145836898(void)

void FUN_145836898(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14caf6488);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  FUN_1458368d4((longlong)param_1 + 0x3d5,param_1);
  return;
}



// FUNCTION 1458368d4 FUN_1458368d4 body=130 status=ok
// SIG undefined FUN_1458368d4(void)

void FUN_1458368d4(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145836958(param_1,&local_30);
  if (local_30 != 0) {
    local_20 = param_2;
    FUN_1447cd2ec();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145836958 FUN_145836958 body=266 status=ok
// SIG undefined FUN_145836958(void)

undefined8 * FUN_145836958(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_14583697c;
  FUN_147c61c22(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x3d5,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_14583697c;
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
joined_r0x000145836a20:
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
        goto joined_r0x000145836a20;
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
LAB_14583697c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145836a64 FUN_145836a64 body=40 status=ok
// SIG undefined FUN_145836a64(void)

undefined8 FUN_145836a64(undefined8 param_1,int param_2)

{
  FUN_145836a8c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145836a8c FUN_145836a8c body=71 status=ok
// SIG undefined FUN_145836a8c(void)

void FUN_145836a8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3dec00;
  FUN_1411d3b86(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145836ad4 FUN_145836ad4 body=38 status=ok
// SIG undefined FUN_145836ad4(void)

undefined8 FUN_145836ad4(undefined8 param_1,int param_2)

{
  FUN_1411d537c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145836afa FUN_145836afa body=37 status=ok
// SIG undefined FUN_145836afa(void)

void FUN_145836afa(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  FUN_145836b20(param_2);
  return;
}



// FUNCTION 145836b20 FUN_145836b20 body=113 status=ok
// SIG undefined FUN_145836b20(void)

void FUN_145836b20(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b33dbe0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xf00000d0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xf00000d0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  return;
}



// FUNCTION 145836b92 FUN_145836b92 body=1430 status=ok
// SIG undefined FUN_145836b92(void)

void FUN_145836b92(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  uint local_160;
  undefined1 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_c2;
  undefined1 local_c1;
  int local_c0;
  undefined1 local_b9;
  int local_b8;
  byte local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [3];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b1 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b1);
  }
  local_b8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  iVar2 = local_b8;
  local_b9 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  local_c0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  iVar1 = local_c0;
  local_c1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c1);
  }
  local_c2 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c2);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = &local_e8;
  local_e8 = local_b0;
  uStack_e0 = uStack_a8;
  local_d8 = local_a0;
  local_170 = &local_108;
  local_108 = local_98;
  uStack_100 = uStack_90;
  local_f8 = local_88;
  local_178 = &local_128;
  local_128 = local_80;
  uStack_124 = uStack_7c;
  uStack_120 = uStack_78;
  uStack_11c = uStack_74;
  local_118 = local_70;
  local_148 = iVar1 != 0;
  local_158 = iVar2 != 0;
  local_138 = local_c2;
  local_140 = local_c1;
  local_150 = local_b9;
  local_160 = (uint)local_b1;
  FUN_1411d5404(local_40,plVar3,local_60,local_68);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583712a FUN_14583712a body=342 status=ok
// SIG undefined FUN_14583712a(void)

longlong * FUN_14583712a(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar8 = *(longlong **)(param_2 + 0x10);
  bVar7 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_14583721a:
    uVar10 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_14583721a;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar7 = false;
  }
  *puVar3 = &PTR_LAB_14b422ab0;
  *(undefined4 *)(puVar3 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar9;
  *puVar3 = &PTR_FUN_14b422a40;
  puVar3[3] = uVar10;
  puVar3[4] = plVar8;
  if (bVar7) {
    puVar3[5] = param_3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 14583728c FUN_14583728c body=330 status=ok
// SIG undefined FUN_14583728c(void)

undefined8 * FUN_14583728c(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ae019b0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_28 = param_1[3];
  FUN_1400021e4(&local_28,&local_38);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar3,1);
  param_1[5] = local_28;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1411d6b4e(param_1);
  FUN_1446f470e(&local_40,L"Default Instance",1);
  local_58 = FUN_1411d6c40();
  local_48 = 0;
  local_50 = 1;
  lVar2 = FUN_140486aac(param_2,param_1,local_40,local_58);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar1 = DAT_14c950c29;
  param_1[9] = lVar2;
  if ((param_1 != (undefined8 *)0x0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  *(undefined8 **)(lVar2 + 0x28) = param_1;
  FUN_1402ada0e(lVar2);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458373de FUN_1458373de body=81 status=ok
// SIG undefined FUN_1458373de(void)

undefined8 FUN_1458373de(undefined2 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  uVar4 = uVar1 + 3;
  if (-1 < (int)uVar1) {
    uVar4 = uVar1;
  }
  if (((int)uVar4 >> 2 & 0x80000001U) == 1) {
    cVar2 = FUN_144937519();
    if (cVar2 != '\x01' || (uVar1 & 0x80000001) != 1) {
      return 0;
    }
  }
  uVar3 = FUN_144a617d4(*param_1,1);
  return uVar3;
}



// FUNCTION 145837430 FUN_145837430 body=12 status=ok
// SIG undefined FUN_145837430(void)

void FUN_145837430(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145837439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14583743c FUN_14583743c body=31 status=ok
// SIG undefined FUN_14583743c(void)

undefined8 FUN_14583743c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145837468 FUN_145837468 body=31 status=ok
// SIG undefined FUN_145837468(void)

undefined8 FUN_145837468(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145837488 FUN_145837488 body=46 status=ok
// SIG undefined FUN_145837488(void)

void FUN_145837488(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447210f0();
  FUN_1458374b6(uVar1,param_1,0);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 1458374b6 FUN_1458374b6 body=180 status=ok
// SIG undefined FUN_1458374b6(void)

void FUN_1458374b6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14045ac7c(&local_30,param_1);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_28;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_14583756c(local_30,param_2,param_3);
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14583756c FUN_14583756c body=233 status=ok
// SIG undefined FUN_14583756c(void)

void FUN_14583756c(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar5 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      lVar6 = 0;
      do {
        lVar3 = FUN_14479d2ce(lVar1 + lVar6);
        if (lVar3 == param_2) {
          if (param_3 != '\0') goto LAB_1458375c7;
          uVar2 = (int)(lVar6 >> 2) * -0x33333333;
          if ((-1 < (int)uVar2) && (iVar5 = *(int *)(param_1 + 0x30), (int)uVar2 < iVar5)) {
            if (~uVar2 + iVar5 != 0) {
              memmove((void *)(*(longlong *)(param_1 + 0x28) +
                              (ulonglong)(uVar2 & 0x7fffffff) * 0x14),
                      (void *)(*(longlong *)(param_1 + 0x28) +
                               (ulonglong)(uVar2 & 0x7fffffff) * 0x14 + 0x14),
                      (longlong)(int)(~uVar2 + iVar5) * 0x14);
              iVar5 = *(int *)(param_1 + 0x30);
            }
            *(int *)(param_1 + 0x30) = iVar5 + -1;
            FUN_1458376a4(param_1 + 0x28);
          }
          goto LAB_1458375da;
        }
        lVar6 = lVar6 + 0x14;
      } while ((longlong)iVar5 * 0x14 != lVar6);
    }
    if (param_3 != '\0') {
LAB_1458375c7:
      uVar4 = FUN_145837656(param_1 + 0x28);
      FUN_14485c47a(uVar4,param_2);
    }
  }
LAB_1458375da:
  FUN_1411d7036(param_1);
  return;
}



// FUNCTION 145837656 FUN_145837656 body=63 status=ok
// SIG undefined FUN_145837656(void)

longlong FUN_145837656(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145837752(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x14 + *param_1;
  FUN_145837695(lVar2);
  return lVar2;
}



// FUNCTION 145837695 FUN_145837695 body=14 status=ok
// SIG undefined FUN_145837695(void)

void FUN_145837695(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1458376a4 FUN_1458376a4 body=62 status=ok
// SIG undefined FUN_1458376a4(void)

void FUN_1458376a4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458376e2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 1458376e2 FUN_1458376e2 body=111 status=ok
// SIG undefined FUN_1458376e2(void)

ulonglong FUN_1458376e2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x14) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      uVar1 = uVar1 / 0x14;
    }
  }
  return uVar1;
}



// FUNCTION 145837752 FUN_145837752 body=147 status=ok
// SIG undefined FUN_145837752(void)

void FUN_145837752(longlong param_1,int param_2)

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



// FUNCTION 1458377f4 FUN_1458377f4 body=40 status=ok
// SIG undefined FUN_1458377f4(void)

undefined8 FUN_1458377f4(undefined8 param_1,int param_2)

{
  FUN_14583781c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583781c FUN_14583781c body=75 status=ok
// SIG undefined FUN_14583781c(void)

void FUN_14583781c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6bd690;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145837868 FUN_145837868 body=45 status=ok
// SIG undefined FUN_145837868(void)

undefined8 FUN_145837868(undefined8 param_1,int param_2)

{
  FUN_1411d7298();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 145837896 FUN_145837896 body=40 status=ok
// SIG undefined FUN_145837896(void)

undefined8 FUN_145837896(undefined8 param_1,int param_2)

{
  FUN_1458378be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458378be FUN_1458378be body=65 status=ok
// SIG undefined FUN_1458378be(void)

void FUN_1458378be(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0ae2f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001458378fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145837900 FUN_145837900 body=40 status=ok
// SIG undefined FUN_145837900(void)

undefined8 FUN_145837900(undefined8 param_1,int param_2)

{
  FUN_145837928();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145837928 FUN_145837928 body=79 status=ok
// SIG undefined FUN_145837928(void)

void FUN_145837928(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b7eae50;
  param_1[5] = &PTR_LAB_14b7eb2f0;
  param_1[6] = &PTR_LAB_14b7eb330;
  plVar2 = (longlong *)param_1[0x23];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  thunk_FUN_14006e852(param_1);
  return;
}



// FUNCTION 145837978 thunk_FUN_14006e852 body=5 status=ok
// SIG undefined thunk_FUN_14006e852(void)

void thunk_FUN_14006e852(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a81f160;
  param_1[5] = &PTR_FUN_14a81f5e0;
  param_1[6] = &PTR_LAB_14a81f620;
  FUN_144760e21(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760f98(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145837986 FUN_145837986 body=142 status=ok
// SIG undefined FUN_145837986(void)

undefined8 FUN_145837986(uint *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(pbVar1 + 8);
  }
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 0;
  uStack_2c = 0;
  FUN_1446ddc76(&local_28,uVar2,1);
  FUN_144976b9c(&local_38,local_28);
  *param_1 = local_38;
  param_1[1] = (uint)uStack_34;
  param_1[2] = uStack_34._4_4_;
  param_1[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145837a2a FUN_145837a2a body=102 status=ok
// SIG undefined FUN_145837a2a(void)

void FUN_145837a2a(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          FUN_145837a90(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145837a90 FUN_145837a90 body=123 status=ok
// SIG undefined FUN_145837a90(void)

void FUN_145837a90(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x40 + 0x38);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x38);
  FUN_1412e0d58(*param_1 + lVar2 + 8);
  FUN_145837b0c(param_1,param_2);
  return;
}



// FUNCTION 145837b0c FUN_145837b0c body=112 status=ok
// SIG undefined FUN_145837b0c(void)

void FUN_145837b0c(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145837b7c FUN_145837b7c body=83 status=ok
// SIG undefined FUN_145837b7c(void)

void FUN_145837b7c(longlong param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = ~(byte)(1 << (*param_2 & 0x1f));
  *(byte *)(param_1 + 0x5210) = *(byte *)(param_1 + 0x5210) & bVar1;
  *(byte *)(param_1 + 0x5211) = *(byte *)(param_1 + 0x5211) & bVar1;
  FUN_145837be2(param_1 + 0x5130,*(undefined4 *)param_2);
  if (param_2 != (byte *)0x0) {
    FUN_145837bd0(param_2);
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 145837bd0 FUN_145837bd0 body=17 status=ok
// SIG undefined FUN_145837bd0(void)

void FUN_145837bd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
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



// FUNCTION 145837be2 FUN_145837be2 body=105 status=ok
// SIG undefined FUN_145837be2(void)

void FUN_145837be2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + (longlong)param_2 * 8) = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar5 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar5 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145837c4c FUN_145837c4c body=201 status=ok
// SIG undefined FUN_145837c4c(void)

void FUN_145837c4c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    lVar4 = FUN_1413da074(&local_38);
    *(longlong *)(param_1 + 8) = lVar4;
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
      lVar4 = *(longlong *)(param_1 + 8);
    }
    if (lVar4 == 0) goto LAB_145837ca7;
  }
  local_38 = *param_2;
  plStack_30 = (longlong *)param_2[1];
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_1411d7792(lVar4,&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_145837ca7:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145837d16 FUN_145837d16 body=40 status=ok
// SIG undefined FUN_145837d16(void)

undefined8 FUN_145837d16(undefined8 param_1,int param_2)

{
  FUN_145837d3e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145837d3e FUN_145837d3e body=100 status=ok
// SIG undefined FUN_145837d3e(void)

void FUN_145837d3e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1b64f0;
  FUN_145837da8(param_1 + 0x7c);
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145837da2 thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(void)

{
  thunk_FUN_1402ef4ac();
  return;
}



// FUNCTION 145837da8 FUN_145837da8 body=128 status=ok
// SIG undefined FUN_145837da8(void)

void FUN_145837da8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145837e36 FUN_145837e36 body=40 status=ok
// SIG undefined FUN_145837e36(void)

undefined8 FUN_145837e36(undefined8 param_1,int param_2)

{
  FUN_1457f72cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145837e66 FUN_145837e66 body=73 status=ok
// SIG undefined FUN_145837e66(void)

undefined8 * FUN_145837e66(undefined8 *param_1)

{
  FUN_140ac18b8();
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *param_1 = &PTR_FUN_14b94edf0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x361) = 0;
  *(undefined8 *)((longlong)param_1 + 0x369) = 0;
  return param_1;
}



// FUNCTION 145837eb0 FUN_145837eb0 body=103 status=ok
// SIG undefined FUN_145837eb0(void)

void FUN_145837eb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000145837f13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145837ef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 145837f54 FUN_145837f54 body=456 status=ok
// SIG undefined FUN_145837f54(void)

void FUN_145837f54(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14583811e FUN_14583811e body=103 status=ok
// SIG undefined FUN_14583811e(void)

void FUN_14583811e(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != DAT_14c94982c) {
    DAT_14c94982c = (int)uVar2;
    FUN_1446f8d3c(&DAT_14c949820,DAT_14c949828,uVar2,8,8);
  }
  return;
}



// FUNCTION 145838186 FUN_145838186 body=131 status=ok
// SIG undefined FUN_145838186(void)

void FUN_145838186(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14583820a();
  if (*(char *)(param_1 + 0x178) == '\x03') {
    cVar1 = FUN_140d0050e(param_1);
    puVar2 = &DAT_14cb7c580;
    if (cVar1 != '\0') {
      puVar2 = &DAT_14cb7c588;
    }
    local_20 = *puVar2;
    FUN_140bfca4e(param_1 + 0x520,&DAT_14cb8c1a0,&local_20,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583820a FUN_14583820a body=15 status=ok
// SIG undefined FUN_14583820a(void)

void FUN_14583820a(longlong param_1)

{
  FUN_14583821a(param_1 + 0x3b8,param_1);
  return;
}



// FUNCTION 14583821a FUN_14583821a body=162 status=ok
// SIG undefined FUN_14583821a(void)

void FUN_14583821a(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1458382a7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1458382a7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1458382bc FUN_1458382bc body=66 status=ok
// SIG undefined FUN_1458382bc(void)

void FUN_1458382bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145838300 FUN_145838300 body=1616 status=ok
// SIG undefined FUN_145838300(void)

longlong * FUN_145838300(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xda] = (longlong)&PTR_FUN_149f6b540;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xde] = (longlong)&PTR_LAB_149f6b550;
  FUN_14062dc0c(param_1 + 0xda,param_1 + 0xde);
  param_1[0xe1] = param_2;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  lVar2 = FUN_14001cc68(0x270,0x10);
  FUN_1411dabc2(lVar2);
  puVar1 = (undefined8 *)*param_1;
  *param_1 = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = FUN_14001cc68(0x270,0x10);
  FUN_1411dabc2(lVar2);
  puVar1 = (undefined8 *)param_1[1];
  param_1[1] = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = FUN_14001cc68(0x2b8,0x10);
  FUN_1411dab2c(lVar2);
  puVar1 = (undefined8 *)param_1[2];
  param_1[2] = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = FUN_14001cc68(0x2b8,0x10);
  FUN_1411dab2c(lVar2);
  puVar1 = (undefined8 *)param_1[3];
  param_1[3] = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = FUN_14001cc68(0x5a0,0x10);
  FUN_1411da860(lVar2);
  puVar1 = (undefined8 *)param_1[6];
  param_1[6] = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = FUN_14001cc68(0x5a0,0x10);
  FUN_1411da860(lVar2);
  puVar1 = (undefined8 *)param_1[4];
  param_1[4] = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = FUN_14001cc68(0x5a0,0x10);
  FUN_1411da860(lVar2);
  puVar1 = (undefined8 *)param_1[5];
  param_1[5] = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = FUN_14001cc68(0x6a8,0x10);
  FUN_145838950(lVar2);
  puVar1 = (undefined8 *)param_1[7];
  param_1[7] = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x6a8,0x10);
  FUN_145838950(puVar3);
  *puVar3 = &PTR_FUN_149f6b590;
  *(undefined1 *)(puVar3 + 0xe) = 6;
  puVar1 = (undefined8 *)param_1[8];
  param_1[8] = (longlong)puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_145838b08(param_1);
  FUN_1447dd35a(param_1);
  return param_1;
}



// FUNCTION 145838950 FUN_145838950 body=260 status=ok
// SIG undefined FUN_145838950(void)

undefined8 * FUN_145838950(undefined8 *param_1)

{
  FUN_1411da860();
  *param_1 = &PTR_FUN_149f537f0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb4] = &PTR_LAB_149f53810;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xb7] = &PTR_LAB_149f53850;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xba] = &PTR_LAB_149f537b0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xbd] = &PTR_LAB_149f53890;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc0] = &PTR_LAB_149f538d0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc3] = &PTR_LAB_149f51bd0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc6] = &PTR_LAB_149f51bd0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xc9] = &PTR_LAB_149f51bd0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcc] = &PTR_LAB_149f53910;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xcf] = &PTR_LAB_149f53950;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd2] = &PTR_LAB_149f53990;
  FUN_145838a54(param_1);
  return param_1;
}



// FUNCTION 145838a54 FUN_145838a54 body=179 status=ok
// SIG undefined FUN_145838a54(void)

void FUN_145838a54(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 3;
  FUN_14062dc0c(param_1,param_1 + 0x5a0);
  FUN_14062dc0c(param_1,param_1 + 0x5b8);
  FUN_14062dc0c(param_1,param_1 + 0x5d0);
  FUN_14062dc0c(param_1,param_1 + 0x5e8);
  FUN_14062dc0c(param_1,param_1 + 0x600);
  FUN_14062dc0c(param_1,param_1 + 0x618);
  FUN_14062dc0c(param_1,param_1 + 0x648);
  FUN_14062dc0c(param_1,param_1 + 0x660);
  FUN_14062dc0c(param_1,param_1 + 0x630);
  FUN_14062dc0c(param_1,param_1 + 0x678);
  FUN_14062dc0c(param_1,param_1 + 0x690);
  return;
}



// FUNCTION 145838b08 FUN_145838b08 body=249 status=ok
// SIG undefined FUN_145838b08(void)

void FUN_145838b08(longlong *param_1)

{
  *(undefined4 *)(*param_1 + 0x74) = 1;
  *(undefined4 *)(param_1[1] + 0x74) = 2;
  *(undefined4 *)(param_1[2] + 0x74) = 4;
  *(undefined4 *)(param_1[3] + 0x74) = 8;
  *(undefined4 *)(param_1[6] + 0x74) = 0x10;
  *(undefined4 *)(param_1[4] + 0x74) = 0x20;
  *(undefined4 *)(param_1[5] + 0x74) = 0x40;
  *(undefined4 *)(param_1[7] + 0x74) = 0x80;
  *(undefined4 *)(param_1[8] + 0x74) = 0x100;
  *(undefined4 *)(param_1 + 0x15) = 0x200;
  *(undefined4 *)(param_1 + 0x22) = 0x400;
  *(undefined4 *)(param_1 + 0x2f) = 0x800;
  *(undefined4 *)(param_1 + 0x3c) = 0x1000;
  *(undefined4 *)(param_1 + 0x49) = 0x2000;
  *(undefined4 *)(param_1 + 0x56) = 0x4000;
  *(undefined4 *)(param_1 + 99) = 0x8000;
  *(undefined4 *)(param_1 + 0x70) = 0x100000;
  *(undefined4 *)(param_1 + 0x7d) = 0x200000;
  *(undefined4 *)(param_1 + 0x8a) = 0x400000;
  *(undefined4 *)(param_1 + 0x8d) = 0x800000;
  *(undefined4 *)(param_1 + 0x90) = 0x1000000;
  *(undefined4 *)(param_1 + 0x9e) = 0x10000;
  *(undefined4 *)(param_1 + 0xab) = 0x40000;
  *(undefined4 *)(param_1 + 0xb8) = 0x80000;
  return;
}



// FUNCTION 145838c02 FUN_145838c02 body=141 status=ok
// SIG undefined FUN_145838c02(void)

longlong FUN_145838c02(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_144729dda(param_1 + 8);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      if (lVar3 != 0) {
        return lVar3;
      }
      plVar2 = (longlong *)FUN_14061177a(param_1);
      if (plVar2 != (longlong *)0x0) {
        if ((*(longlong *)(param_1 + 0x10) == 0) ||
           (cVar1 = FUN_144729dda(param_1 + 8), cVar1 == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
        }
                    /* WARNING: Could not recover jumptable at 0x000145838c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,uVar4,*(code **)(*plVar2 + 0x30));
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 145838c90 FUN_145838c90 body=185 status=ok
// SIG undefined FUN_145838c90(void)

bool FUN_145838c90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
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
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145838d4a FUN_145838d4a body=42 status=ok
// SIG undefined FUN_145838d4a(void)

void FUN_145838d4a(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_1447210f0();
  plVar2 = (longlong *)FUN_145838d74(uVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145838d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2);
    return;
  }
  return;
}



// FUNCTION 145838d74 FUN_145838d74 body=35 status=ok
// SIG undefined FUN_145838d74(void)

undefined8 FUN_145838d74(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_1411db1ae(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xe0);
  }
  return 0;
}



// FUNCTION 145838d98 FUN_145838d98 body=40 status=ok
// SIG undefined FUN_145838d98(void)

undefined8 FUN_145838d98(undefined8 param_1,int param_2)

{
  FUN_145838dc0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145838dc0 FUN_145838dc0 body=64 status=ok
// SIG undefined FUN_145838dc0(void)

void FUN_145838dc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149fa6af0;
  puVar1 = (undefined8 *)param_1[0x5d];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_145838e00(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145838e00 FUN_145838e00 body=331 status=ok
// SIG undefined FUN_145838e00(void)

void FUN_145838e00(longlong param_1)

{
  FUN_1412e7bc0(*(undefined8 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x290));
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1400020a8();
  }
  FUN_1412e7bc0(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600));
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  FUN_1412e7bc0(*(undefined8 *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x220));
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_1400020a8();
  }
  FUN_1412e7bc0(*(undefined8 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e8));
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  FUN_1412e7bc0(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_1412e7bc0(*(undefined8 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178));
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  FUN_1412e7bc0(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_1412e7bc0(*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145838f4c(param_1);
  return;
}



// FUNCTION 145838f4c FUN_145838f4c body=55 status=ok
// SIG undefined FUN_145838f4c(void)

void FUN_145838f4c(longlong *param_1)

{
  FUN_1411db320(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145838f84 FUN_145838f84 body=42 status=ok
// SIG undefined FUN_145838f84(void)

longlong FUN_145838f84(longlong param_1,int param_2)

{
  FUN_145838fd8(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145838fae FUN_145838fae body=42 status=ok
// SIG undefined FUN_145838fae(void)

longlong FUN_145838fae(longlong param_1,int param_2)

{
  FUN_14583903a(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145838fd8 FUN_145838fd8 body=52 status=ok
// SIG undefined FUN_145838fd8(void)

void FUN_145838fd8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_14583900c(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14583900c FUN_14583900c body=45 status=ok
// SIG undefined FUN_14583900c(void)

void FUN_14583900c(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14583903a FUN_14583903a body=52 status=ok
// SIG undefined FUN_14583903a(void)

void FUN_14583903a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_14583906e(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14583906e FUN_14583906e body=45 status=ok
// SIG undefined FUN_14583906e(void)

void FUN_14583906e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14583909c FUN_14583909c body=103 status=ok
// SIG undefined FUN_14583909c(void)

ulonglong FUN_14583909c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1458390e6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1458390e6;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 14583910a FUN_14583910a body=55 status=ok
// SIG undefined FUN_14583910a(void)

undefined8 FUN_14583910a(short *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0x31) {
    FUN_144880847(0x31,0);
    if (*param_1 == 0x31) {
      uVar1 = FUN_144880847(0x31,0);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 145839142 FUN_145839142 body=29 status=ok
// SIG undefined FUN_145839142(void)

void FUN_145839142(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145839160 FUN_145839160 body=31 status=ok
// SIG undefined FUN_145839160(void)

undefined8 FUN_145839160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145839180 FUN_145839180 body=40 status=ok
// SIG undefined FUN_145839180(void)

undefined8 FUN_145839180(undefined8 param_1,int param_2)

{
  FUN_1458391a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458391a8 FUN_1458391a8 body=110 status=ok
// SIG undefined FUN_1458391a8(void)

void FUN_1458391a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac474d0;
  FUN_144a2da94(param_1 + 0x47);
  FUN_144a2da94(param_1 + 0x40);
  FUN_140b970fc(param_1 + 0x1e);
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145839216 FUN_145839216 body=48 status=ok
// SIG undefined FUN_145839216(void)

void FUN_145839216(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145839246 FUN_145839246 body=187 status=ok
// SIG undefined FUN_145839246(void)

void FUN_145839246(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1458392e9;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1458392e9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145839301 FUN_145839301 body=39 status=ok
// SIG undefined FUN_145839301(void)

void FUN_145839301(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140da6e0e(*(undefined8 *)(param_1 + 0x260));
  if (lVar1 != 0) {
    FUN_145839328(lVar1);
    return;
  }
  return;
}



// FUNCTION 145839328 FUN_145839328 body=130 status=ok
// SIG undefined FUN_145839328(void)

void FUN_145839328(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1458394bc(*param_1 + 0x88,&local_20,param_1);
  param_1[3] = local_20;
  FUN_14583956c(*param_1 + 0x10,&local_20,param_1);
  param_1[4] = local_20;
  lVar1 = FUN_1458393ac(*(undefined8 *)(*param_1 + 0x38));
  param_1[5] = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458393ac FUN_1458393ac body=105 status=ok
// SIG undefined FUN_1458393ac(void)

undefined8 * FUN_1458393ac(longlong param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb0);
  memset(_Dst,0,0xb0);
  FUN_145839416(_Dst);
  *_Dst = &PTR_FUN_14b51ef30;
  if ((*(byte *)((longlong)_Dst + 0x41) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  _Dst[3] = param_1;
  FUN_141300b68(param_1 + 0x70,_Dst);
  return _Dst;
}



// FUNCTION 145839416 FUN_145839416 body=166 status=ok
// SIG undefined FUN_145839416(void)

undefined8 * FUN_145839416(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 0x201;
  *param_1 = &PTR_FUN_14b51f000;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xf] = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 1458394bc FUN_1458394bc body=174 status=ok
// SIG undefined FUN_1458394bc(void)

undefined8 FUN_1458394bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28,&local_40);
  *puVar1 = &PTR_LAB_14ac988f0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b51ede0;
  puVar1[3] = param_3;
  puVar1[4] = FUN_1402ed1ac;
  FUN_1411dda00(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583956c FUN_14583956c body=174 status=ok
// SIG undefined FUN_14583956c(void)

undefined8 FUN_14583956c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28,&local_40);
  *puVar1 = &PTR_LAB_14b51eec0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b51ee50;
  puVar1[3] = param_3;
  puVar1[4] = FUN_140110268;
  FUN_14583961c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583961c FUN_14583961c body=216 status=ok
// SIG undefined FUN_14583961c(void)

undefined8 * FUN_14583961c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145839706 FUN_145839706 body=84 status=ok
// SIG undefined FUN_145839706(void)

void FUN_145839706(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14583975c(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583975c FUN_14583975c body=85 status=ok
// SIG undefined FUN_14583975c(void)

void FUN_14583975c(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  FUN_140dba9e6(*param_1,param_2[0x10]);
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1e]);
    return;
  }
  return;
}



// FUNCTION 1458397b1 FUN_1458397b1 body=75 status=ok
// SIG undefined FUN_1458397b1(void)

void FUN_1458397b1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458397fc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab9e310;
  puVar1[0xb] = 0x424800003f480000;
  puVar1[0xc] = 0x4316000042480000;
  puVar1[0xd] = 0x42c8000042480000;
  puVar1[0xe] = 0x3f00000043160000;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0x3f800000;
  return;
}



// FUNCTION 1458397fc FUN_1458397fc body=68 status=ok
// SIG undefined FUN_1458397fc(void)

undefined8 * FUN_1458397fc(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14ab9f130;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0x4234000042340000;
  return param_1;
}



// FUNCTION 14583984e FUN_14583984e body=40 status=ok
// SIG undefined FUN_14583984e(void)

undefined8 FUN_14583984e(undefined8 param_1,int param_2)

{
  FUN_145839876();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145839876 FUN_145839876 body=71 status=ok
// SIG undefined FUN_145839876(void)

void FUN_145839876(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b141300;
  FUN_1458398bd(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458398bd FUN_1458398bd body=73 status=ok
// SIG undefined FUN_1458398bd(void)

void FUN_1458398bd(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145839906 FUN_145839906 body=25 status=ok
// SIG undefined FUN_145839906(void)

undefined8 FUN_145839906(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145839920 FUN_145839920 body=72 status=ok
// SIG undefined FUN_145839920(void)

void FUN_145839920(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  
  cVar1 = *(char *)(param_1 + 0x1b0);
  lVar3 = FUN_145839968();
  if (lVar3 == 0) {
    cVar2 = *(char *)(param_1 + 0x1b0);
  }
  else {
    cVar2 = FUN_144a87d0a(lVar3);
    *(char *)(param_1 + 0x1b0) = cVar2;
  }
  if (cVar2 == cVar1) {
    return;
  }
  FUN_14583bf3a(param_1);
  return;
}



// FUNCTION 145839968 FUN_145839968 body=63 status=ok
// SIG undefined FUN_145839968(void)

longlong FUN_145839968(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140c3a680();
  if (lVar1 != 0) {
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1458399a8 FUN_1458399a8 body=591 status=ok
// SIG undefined FUN_1458399a8(void)

void FUN_1458399a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_58,L"NetSyncProps",1);
  uVar1 = FUN_1411def2e();
  FUN_1411def2e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bReversePlayback",1);
  uVar1 = FUN_1411def2e();
  FUN_1411def2e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"StartTime",1);
  uVar1 = FUN_1411def2e();
  FUN_1411def2e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"DurationFrames",1);
  uVar1 = FUN_1411def2e();
  FUN_1411def2e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"DurationSubFrames",1);
  uVar1 = FUN_1411def2e();
  FUN_1411def2e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PlaybackSettings",1);
  uVar1 = FUN_1411def2e();
  FUN_1411def2e();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"Observer",1);
  uVar1 = FUN_1411def2e();
  FUN_1411def2e();
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



// FUNCTION 145839bfe FUN_145839bfe body=145 status=ok
// SIG undefined FUN_145839bfe(void)

void FUN_145839bfe(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145839d86();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_14583a024(local_18,param_1);
    FUN_145839c90(&DAT_14cb10a78,local_18,param_1,&DAT_1408091e2);
    FUN_145839c90(&DAT_14cb10a90,local_18,param_1,FUN_1408091e4);
    FUN_14583a114(local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145839c90 FUN_145839c90 body=244 status=ok
// SIG undefined FUN_145839c90(void)

undefined8
FUN_145839c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1ca6c0;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14a1c9fb0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1411df00c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145839d86 FUN_145839d86 body=564 status=ok
// SIG undefined FUN_145839d86(void)

/* WARNING: Removing unreachable block (ram,0x000145839fa0) */

void FUN_145839d86(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar3 = FUN_1411df190(param_1);
    *(undefined1 *)((longlong)param_1 + 0x351) = 0;
    uVar4 = FUN_1400dbadc();
    lVar5 = FUN_145aa0930(uVar4,L"PakFile");
    *(bool *)((longlong)param_1 + 0x353) = lVar5 != 0;
    *(undefined1 *)((longlong)param_1 + 0x354) = *(undefined1 *)(lVar3 + 0x7b);
    *(undefined1 *)((longlong)param_1 + 0x352) = DAT_14c872bf0;
    if (*(char *)(lVar3 + 0x79) == '\x01') {
      if (DAT_14c964680 != 3) {
        FUN_1446efa72(&DAT_14c964678,0,3,0x10);
        DAT_14c964680 = 3;
      }
      puVar2 = DAT_14c964678;
      *DAT_14c964678 = &PTR_LAB_14a7ec270;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      puVar2[2] = lVar5;
      *puVar2 = &PTR_FUN_14a7ec200;
      puVar2[3] = 0;
      FUN_14485c47a(puVar2 + 3,param_1);
      puVar2[4] = &LAB_1479500e8;
    }
    (**(code **)(*param_1 + 0x4b8))(param_1);
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    FUN_1401031ac(param_1,0,&local_48);
    puVar6 = local_48;
    if ((int)uStack_40 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_140002266(local_30,L"%s.StreamableManager",puVar6);
    FUN_145839fbc(param_1 + 0x3d,local_30);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_48,L"/Game");
    iVar1 = (int)param_1[0x3a];
    *(uint *)(param_1 + 0x3a) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1d4) < iVar1 + 1U) {
      FUN_1447a1bd6(param_1 + 0x39,iVar1);
    }
    lVar3 = param_1[0x39];
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar5) = 0;
    *(undefined2 **)(lVar3 + lVar5) = local_48;
    local_48 = (undefined2 *)0x0;
    *(int *)(lVar3 + 8 + lVar5) = (int)uStack_40;
    *(undefined4 *)(lVar3 + 0xc + lVar5) = uStack_40._4_4_;
    uStack_40 = 0;
    uVar4 = FUN_140c61bfa();
    FUN_14583a204(uVar4,&local_48,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145839fbc FUN_145839fbc body=104 status=ok
// SIG undefined FUN_145839fbc(void)

void FUN_145839fbc(longlong param_1,longlong *param_2)

{
  if ((longlong *)(param_1 + 0xe8) != param_2) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xe8) = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0xf0) = (int)param_2[1];
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14583a024 FUN_14583a024 body=239 status=ok
// SIG undefined FUN_14583a024(void)

undefined8 FUN_14583a024(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1c8660;
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
  *local_30 = &PTR_FUN_14a1c9f40;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1410716d2;
  FUN_140aa43ac(&DAT_14cb10a20,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583a114 FUN_14583a114 body=239 status=ok
// SIG undefined FUN_14583a114(void)

undefined8 FUN_14583a114(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1ca3a0;
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
  *local_30 = &PTR_FUN_14a1ca020;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1449fb846;
  FUN_140ea1bb6(&DAT_14cb0a930,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583a204 FUN_14583a204 body=244 status=ok
// SIG undefined FUN_14583a204(void)

undefined8 FUN_14583a204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14a7ec2e0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_14111c2e2;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583a308 FUN_14583a308 body=45 status=ok
// SIG undefined FUN_14583a308(void)

undefined8 FUN_14583a308(undefined8 param_1,int param_2)

{
  FUN_14583a336();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 14583a336 FUN_14583a336 body=107 status=ok
// SIG undefined FUN_14583a336(void)

void FUN_14583a336(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a641870;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_140595c52(param_1);
  return;
}



// FUNCTION 14583a3a2 FUN_14583a3a2 body=48 status=ok
// SIG undefined FUN_14583a3a2(void)

void FUN_14583a3a2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,4);
  }
  return;
}



// FUNCTION 14583a3d2 FUN_14583a3d2 body=190 status=ok
// SIG undefined FUN_14583a3d2(void)

undefined8 * FUN_14583a3d2(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8d3e8) {
    FUN_144b3d300(&DAT_14cb8d3e8);
    if (DAT_14cb8d3e8 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"back",5);
      builtin_wcsncpy(local_48 + 8,L"tHitCall",8);
      builtin_wcsncpy(local_48,L"Componen",8);
      FUN_1446f470e(&DAT_14cb8d3e0,local_48,1);
      _Init_thread_footer(&DAT_14cb8d3e8);
    }
  }
  *param_1 = DAT_14cb8d3e0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583a492 FUN_14583a492 body=137 status=ok
// SIG undefined FUN_14583a492(void)

void FUN_14583a492(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1400dccb8(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x598,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583a526 FUN_14583a526 body=71 status=ok
// SIG undefined FUN_14583a526(void)

void FUN_14583a526(longlong param_1)

{
  FUN_14583a56d(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14583a56d(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14583a56d FUN_14583a56d body=38 status=ok
// SIG undefined FUN_14583a56d(void)

void FUN_14583a56d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14583a594(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 14583a594 FUN_14583a594 body=73 status=ok
// SIG undefined FUN_14583a594(void)

void FUN_14583a594(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014583a5d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14583a5de FUN_14583a5de body=85 status=ok
// SIG undefined FUN_14583a5de(void)

void FUN_14583a5de(void)

{
  FUN_144760e21(DAT_14cb90c80,DAT_14cb90c88);
  if (DAT_14cb90c80 != 0) {
    FUN_1400020a8();
  }
  FUN_14583a633(DAT_14cb90c70,DAT_14cb90c78);
  if (DAT_14cb90c70 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14583a633 FUN_14583a633 body=38 status=ok
// SIG undefined FUN_14583a633(void)

void FUN_14583a633(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1411e2dbe(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 14583a65a FUN_14583a65a body=90 status=ok
// SIG undefined FUN_14583a65a(void)

void FUN_14583a65a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x9f8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x9f0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar4);
      if (lVar3 != 0) {
        uVar5 = FUN_1413eca68(param_1);
        FUN_1411e2e26(lVar3,uVar5);
      }
      lVar4 = lVar4 + 0x80;
    } while ((longlong)iVar1 * 0x80 != lVar4);
  }
  return;
}



// FUNCTION 14583a6b4 FUN_14583a6b4 body=39 status=ok
// SIG undefined FUN_14583a6b4(void)

void * FUN_14583a6b4(void *param_1,int param_2)

{
  FUN_14583a6dc();
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14583a6dc FUN_14583a6dc body=94 status=ok
// SIG undefined FUN_14583a6dc(void)

void FUN_14583a6dc(Property *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_14b455ef0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014583a72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::Property::~Property(param_1);
  return;
}



// FUNCTION 14583a73a FUN_14583a73a body=71 status=ok
// SIG undefined FUN_14583a73a(void)

void FUN_14583a73a(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14583a782(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x30 + *param_1);
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  return;
}



// FUNCTION 14583a782 FUN_14583a782 body=147 status=ok
// SIG undefined FUN_14583a782(void)

void FUN_14583a782(longlong param_1,int param_2)

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



// FUNCTION 14583a816 FUN_14583a816 body=104 status=ok
// SIG undefined FUN_14583a816(void)

undefined8 FUN_14583a816(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14583a880(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583a880 FUN_14583a880 body=42 status=ok
// SIG undefined FUN_14583a880(void)

undefined8 FUN_14583a880(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb89bc8;
  if ((((DAT_14cb89bc8 == (longlong *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) ||
     (*param_1 == DAT_14c948000)) {
    return 0;
  }
  if (*(code **)(*DAT_14cb89bc8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb89bc8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb89bc8[0x3a] <= *(int *)((longlong)DAT_14cb89bc8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb89bc8 + 0x300))(DAT_14cb89bc8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14583a8aa FUN_14583a8aa body=173 status=ok
// SIG undefined FUN_14583a8aa(void)

void FUN_14583a8aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68 [2];
  longlong local_58;
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1411e4208(local_68,param_3);
  local_48 = local_68[0];
  FUN_1400021e4(&local_48,local_40);
  uVar1 = FUN_1411e42ef(local_40,0);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1411e4270(uVar1);
  FUN_140277b32(param_1,param_2,param_3,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583a958 FUN_14583a958 body=254 status=ok
// SIG undefined FUN_14583a958(void)

undefined8
FUN_14583a958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e62a0;
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
  *local_48 = &PTR_FUN_14b9642a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141285884(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583aa66 FUN_14583aa66 body=36 status=ok
// SIG undefined FUN_14583aa66(void)

undefined8 FUN_14583aa66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14583aa8a FUN_14583aa8a body=158 status=ok
// SIG undefined FUN_14583aa8a(void)

bool FUN_14583aa8a(longlong param_1,undefined8 param_2)

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



// FUNCTION 14583ab30 FUN_14583ab30 body=55 status=ok
// SIG undefined FUN_14583ab30(void)

void FUN_14583ab30(longlong *param_1)

{
  FUN_14583ab68(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14583ab68 FUN_14583ab68 body=123 status=ok
// SIG undefined FUN_14583ab68(void)

void FUN_14583ab68(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
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



// FUNCTION 14583aca6 FUN_14583aca6 body=349 status=ok
// SIG undefined FUN_14583aca6(void)

void FUN_14583aca6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x140);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 300) == '\x05') {
      FUN_14583ae04(lVar1,*(undefined8 *)(param_1 + 0x38));
      FUN_14583ae62(lVar1,*(undefined8 *)(param_1 + 0x38));
      return;
    }
    switch(*(char *)(param_1 + 300)) {
    case '\0':
      FUN_14583aec0(lVar1,*(undefined8 *)(param_1 + 0x38));
      FUN_14583af1e(lVar1,*(undefined8 *)(param_1 + 0x38));
      *(undefined1 *)(param_1 + 0x130) = 1;
      break;
    case '\x01':
      FUN_148bc1256(lVar1,*(undefined8 *)(param_1 + 0x38));
      FUN_148bc12b4(lVar1,*(undefined8 *)(param_1 + 0x38));
      return;
    case '\x02':
      FUN_148bc13ce(lVar1,*(undefined8 *)(param_1 + 0x38));
      FUN_148bc142c(lVar1,*(undefined8 *)(param_1 + 0x38));
      return;
    case '\x03':
      FUN_148bc148a(lVar1,*(undefined8 *)(param_1 + 0x38));
      FUN_148bc14e8(lVar1,*(undefined8 *)(param_1 + 0x38));
      return;
    case '\x04':
      FUN_148bc1546(lVar1,*(undefined8 *)(param_1 + 0x38));
      FUN_148bc15a4(lVar1,*(undefined8 *)(param_1 + 0x38));
      return;
    case '\x06':
      if (*(char *)(param_1 + 0x130) == '\0') {
        FUN_14583aec0(lVar1,*(undefined8 *)(param_1 + 0x38));
        FUN_14583af1e(lVar1,*(undefined8 *)(param_1 + 0x38));
      }
      else if (*(char *)(param_1 + 0x12f) == '\x01') {
        FUN_148bc1312(lVar1,*(undefined8 *)(param_1 + 0x38));
        FUN_148bc1370(lVar1,*(undefined8 *)(param_1 + 0x38));
      }
      *(undefined1 *)(param_1 + 0x12f) = 1;
    }
  }
  return;
}



// FUNCTION 14583ae04 FUN_14583ae04 body=92 status=ok
// SIG undefined FUN_14583ae04(void)

void FUN_14583ae04(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba3a10);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583ae62 FUN_14583ae62 body=92 status=ok
// SIG undefined FUN_14583ae62(void)

void FUN_14583ae62(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba3a20);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583aec0 FUN_14583aec0 body=92 status=ok
// SIG undefined FUN_14583aec0(void)

void FUN_14583aec0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba3970);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583af1e FUN_14583af1e body=92 status=ok
// SIG undefined FUN_14583af1e(void)

void FUN_14583af1e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba3980);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583af80 FUN_14583af80 body=26 status=ok
// SIG undefined FUN_14583af80(void)

void FUN_14583af80(undefined8 param_1)

{
  FUN_144a63f30();
  FUN_14583af9a(param_1);
  return;
}



// FUNCTION 14583af9a FUN_14583af9a body=52 status=ok
// SIG undefined FUN_14583af9a(void)

void FUN_14583af9a(longlong param_1)

{
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    *(uint *)(param_1 + 0x3c) =
         (*(uint *)(param_1 + 0x3c) & 0x7fff0000) + (uint)*(ushort *)(param_1 + 0x40) + -0x80000000;
  }
  if (((*(uint *)(param_1 + 8) & 0x10) != 0) && ((*(uint *)(param_1 + 8) >> 9 & 1) == 0)) {
    FUN_147e6d824(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



// FUNCTION 14583afd8 FUN_14583afd8 body=156 status=ok
// SIG undefined FUN_14583afd8(void)

void FUN_14583afd8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b80de70;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0xf00000d0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xf) = 0x3f800000;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xf00000d0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0x3f800000;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 14583b07a FUN_14583b07a body=173 status=ok
// SIG undefined FUN_14583b07a(void)

void FUN_14583b07a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf8);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined2 *)((longlong)param_2 + 0x54) = 1;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *param_2 = &PTR_FUN_14ac80210;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 100) = 0;
  param_2[0xd] = 0xbf80000000000000;
  *(undefined4 *)(param_2 + 0xe) = 0xc4750000;
  *(undefined1 *)((longlong)param_2 + 0x74) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  param_2[0x19] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 14583b128 FUN_14583b128 body=35 status=ok
// SIG undefined FUN_14583b128(void)

void FUN_14583b128(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14583b14c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab76bc0;
  return;
}



// FUNCTION 14583b14c FUN_14583b14c body=32 status=ok
// SIG undefined FUN_14583b14c(void)

undefined8 * FUN_14583b14c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab4d280;
  return param_1;
}



// FUNCTION 14583b172 FUN_14583b172 body=385 status=ok
// SIG undefined FUN_14583b172(void)

void FUN_14583b172(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (param_1[0x157] == 0) {
    return;
  }
  lVar4 = FUN_140cb9f34();
  lVar6 = *(longlong *)(lVar4 + 0x70);
  if (lVar6 == 0) {
    uVar5 = FUN_1407f787c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x70) = lVar6;
  }
  plVar8 = (longlong *)(lVar4 + 0x68);
  lVar7 = *(longlong *)(lVar4 + 0x78);
  if (lVar7 == 0) {
    if ((lVar6 == 0) || (*plVar8 == 0)) goto LAB_14583b1db;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,plVar8);
        *(longlong *)(lVar4 + 0x78) = lVar7;
        if (lVar7 == 0) goto LAB_14583b1db;
        lVar6 = *(longlong *)(lVar4 + 0x70);
        goto LAB_14583b1b3;
      }
    }
    *(undefined8 *)(lVar4 + 0x78) = 0;
    goto LAB_14583b1db;
  }
LAB_14583b1b3:
  lVar1 = param_1[0x157];
  if (lVar6 == 0) {
    uVar5 = FUN_1407f787c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x70) = lVar6;
    lVar7 = *(longlong *)(lVar4 + 0x78);
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar8 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_14583b2ef:
        lVar7 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 == '\0') goto LAB_14583b2ef;
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,plVar8);
      }
      *(longlong *)(lVar4 + 0x78) = lVar7;
    }
  }
  FUN_1447997cc(lVar1,lVar7,0x3f800000,0,0);
LAB_14583b1db:
                    /* WARNING: Could not recover jumptable at 0x00014583b1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1010))(param_1);
  return;
}



// FUNCTION 14583b306 FUN_14583b306 body=236 status=ok
// SIG undefined FUN_14583b306(void)

void FUN_14583b306(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_144a7ae82();
  if (lVar3 == 0) {
    return;
  }
  lVar5 = *(longlong *)(lVar3 + 0x160);
  if (lVar5 == 0) {
    if (DAT_14cb25698 == 0) {
      uVar4 = FUN_140cd185c();
      DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar4,L"WwiseEventDef");
    }
    lVar5 = FUN_14477b664(DAT_14cb25698);
    *(longlong *)(lVar3 + 0x160) = lVar5;
  }
  if (((*(longlong *)(lVar3 + 0x168) != 0) || (lVar5 == 0)) || (*(longlong *)(lVar3 + 0x158) == 0))
  goto LAB_14583b33b;
  plVar1 = *(longlong **)(lVar5 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_14583b3ee:
    uVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_14583b3ee;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x158));
  }
  *(undefined8 *)(lVar3 + 0x168) = uVar4;
LAB_14583b33b:
  FUN_14583b3f2(param_1);
  return;
}



// FUNCTION 14583b3f2 FUN_14583b3f2 body=148 status=ok
// SIG undefined FUN_14583b3f2(void)

void FUN_14583b3f2(__uint64 *param_1,longlong param_2)

{
  undefined1 auStackY_68 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStackY_68;
  if ((param_2 != 0) && (*param_1 != 0xffffffffffffffff)) {
    local_28 = param_2;
    FUN_140942716(&local_28);
    AK::SoundEngine::PostEvent
              (*(uint *)(param_2 + 0x38),*param_1,0,
               (_func_void_AkCallbackType_AkCallbackInfo_ptr *)0x0,(void *)0x0,0,
               (AkExternalSourceInfo *)0x0,0);
    if ((local_28 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_28 + 0x50));
    }
  }
  if ((local_20 ^ (ulonglong)auStackY_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583b488 FUN_14583b488 body=156 status=ok
// SIG undefined FUN_14583b488(void)

void FUN_14583b488(undefined8 param_1,longlong param_2)

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
  thunk_FUN_14047210e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583b526 thunk_FUN_14047210e body=5 status=ok
// SIG undefined thunk_FUN_14047210e(void)

longlong thunk_FUN_14047210e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined2 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  code **ppcStack_30;
  undefined1 *puStack_28;
  code *pcStack_20;
  code *pcStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (DAT_14cba8288 == 0) {
      ppcStack_30 = &pcStack_18;
      pcStack_18 = FUN_141864c34;
      pcStack_20 = FUN_14081d0ea;
      puStack_28 = &LAB_1464cee30;
      puStack_38 = &LAB_148bfac22;
      puStack_40 = &LAB_140f21842;
      puStack_48 = &DAT_149e063b2;
      uStack_50 = 0;
      uStack_58 = 0x10000004;
      uStack_60 = 0x10;
      uStack_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      lVar1 = (**(code **)(*(longlong *)(lVar2 + 0x3c20) + 0x18))(lVar2 + 0x3c20);
      if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 == 0)) {
        if (*(int *)(lVar2 + 0x6190) < 1) goto LAB_1404721f0;
        lVar2 = *(longlong *)(lVar2 + 0x6188);
      }
      else {
        lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x510) + 0x18))(lVar1 + 0x510);
        if (*(int *)(lVar2 + 0xa8) < 1) goto LAB_1404721f0;
        lVar2 = *(longlong *)(lVar2 + 0xa0);
      }
      lVar2 = *(longlong *)(lVar2 + 0x20);
      if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_1404721aa;
    }
  }
LAB_1404721f0:
  lVar2 = 0;
LAB_1404721aa:
  if ((uStack_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583b558 FUN_14583b558 body=248 status=ok
// SIG undefined FUN_14583b558(void)

void FUN_14583b558(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x180);
  cVar3 = *(char *)(param_1 + 0x1b0);
  cVar4 = *(char *)(param_1 + 0x40);
  if (cVar3 != cVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x198);
    if (cVar4 == '\0') {
      if (cVar3 == '\x01') {
        FUN_14589c8c6(param_1,puVar2);
      }
      FUN_14589c4e4(param_1,puVar2);
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0;
    }
    else if (cVar4 == '\x02') {
      if (cVar3 == '\0') {
        FUN_145933696(param_1,plVar1);
      }
      FUN_14589c8c6(param_1,plVar1);
    }
    else if (cVar4 == '\x01') {
      if (cVar3 == '\x02') {
        FUN_14589c4e4(param_1,puVar2);
      }
      FUN_145933696(param_1,plVar1);
    }
    *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_1 + 0x40);
  }
  lVar5 = *plVar1;
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *plVar1;
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar5;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 400);
  return;
}



// FUNCTION 14583b650 FUN_14583b650 body=70 status=ok
// SIG undefined FUN_14583b650(void)

undefined8 FUN_14583b650(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_14583b696(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14583b696 FUN_14583b696 body=84 status=ok
// SIG undefined FUN_14583b696(void)

longlong * FUN_14583b696(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14583b6ea FUN_14583b6ea body=9 status=ok
// SIG undefined FUN_14583b6ea(void)

void FUN_14583b6ea(longlong param_1)

{
  FUN_14583b6f4(param_1 + 0x10);
  return;
}



// FUNCTION 14583b6f4 FUN_14583b6f4 body=77 status=ok
// SIG undefined FUN_14583b6f4(void)

void FUN_14583b6f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4f2590;
  param_1[4] = &PTR_FUN_14b4f25b8;
  FUN_1449db362(param_1 + 10);
  FUN_14127b1cd(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1411ebb9a(param_1);
  return;
}



// FUNCTION 14583b742 FUN_14583b742 body=132 status=ok
// SIG undefined FUN_14583b742(void)

void FUN_14583b742(longlong param_1,int param_2)

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



// FUNCTION 14583b7d6 FUN_14583b7d6 body=40 status=ok
// SIG undefined FUN_14583b7d6(void)

undefined8 FUN_14583b7d6(undefined8 param_1,int param_2)

{
  FUN_14583b7fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583b7fe FUN_14583b7fe body=99 status=ok
// SIG undefined FUN_14583b7fe(void)

void FUN_14583b7fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8001a0;
  FUN_14583b861(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b2b4220;
  FUN_140ed3afa(param_1 + 6);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14583b861 FUN_14583b861 body=49 status=ok
// SIG undefined FUN_14583b861(void)

void FUN_14583b861(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14583b892 FUN_14583b892 body=103 status=ok
// SIG undefined FUN_14583b892(void)

void FUN_14583b892(void)

{
  FUN_14583b938();
  FUN_1411ee667(DAT_14c82b418,DAT_14c82b420);
  if (DAT_14c82b418 != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c82b3f0);
  FUN_14583b8f9(DAT_14c82b3e0,DAT_14c82b3e8);
  if (DAT_14c82b3e0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14583b8f9 FUN_14583b8f9 body=63 status=ok
// SIG undefined FUN_14583b8f9(void)

void FUN_14583b8f9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -1);
      FUN_144a75412(plVar1 + -2);
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14583b938 FUN_14583b938 body=291 status=ok
// SIG undefined FUN_14583b938(void)

/* WARNING: Removing unreachable block (ram,0x00014583b953) */

undefined8 FUN_14583b938(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 extraout_RAX;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_14c82b428 == 0) {
    return 0;
  }
  LOCK();
  DAT_14c82b428 = 0;
  UNLOCK();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c82b3f0);
  lVar1 = DAT_14c82b3e0;
  lVar4 = (longlong)DAT_14c82b3e8;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar3) + 0x10))();
      lVar3 = lVar3 + 0x40;
    } while (lVar4 * 0x40 != lVar3);
  }
  do {
    lVar4 = FUN_1467a79f0();
    lVar1 = DAT_14c82b418;
  } while (lVar4 != 0);
  lVar4 = (longlong)DAT_14c82b420;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      FUN_140f14a8a(*(undefined8 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  iVar2 = DAT_14c82b424;
  LOCK();
  DAT_14c82b42c = 0;
  UNLOCK();
  FUN_1411ee667(DAT_14c82b418,DAT_14c82b420);
  DAT_14c82b420 = 0;
  if ((iVar2 < 0) && (DAT_14c82b424 != 0)) {
    FUN_145a07426(&DAT_14c82b418,0);
  }
  iVar2 = DAT_14c82b3ec;
  FUN_14583b8f9(DAT_14c82b3e0,DAT_14c82b3e8);
  DAT_14c82b3e8 = 0;
  if ((iVar2 < 0) && (DAT_14c82b3ec != 0)) {
    FUN_1467ab2c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014583ba4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c82b3f0);
  return extraout_RAX;
}



// FUNCTION 14583ba74 FUN_14583ba74 body=31 status=ok
// SIG undefined FUN_14583ba74(void)

undefined8 FUN_14583ba74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583ba94 FUN_14583ba94 body=40 status=ok
// SIG undefined FUN_14583ba94(void)

undefined8 FUN_14583ba94(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583babc thunk_FUN_14006e5d0 body=5 status=ok
// SIG undefined thunk_FUN_14006e5d0(void)

void thunk_FUN_14006e5d0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a85ebb0;
  param_1[5] = &PTR_FUN_14a85f5b0;
  param_1[6] = &PTR_LAB_14a85f5f0;
  param_1[0x55] = &PTR_FUN_14a85f640;
  param_1[0x56] = &PTR_FUN_14a85f6c0;
  param_1[0x57] = &PTR_FUN_14a85f6d0;
  FUN_144760e21(param_1[0xc1],*(undefined4 *)(param_1 + 0xc2));
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xbe],*(undefined4 *)(param_1 + 0xbf));
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xba] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0xb6];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760d56(param_1 + 0x82);
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x6f) == '\x01') {
    *(undefined1 *)(param_1 + 0x6f) = 0;
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5e));
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 14583bac2 FUN_14583bac2 body=40 status=ok
// SIG undefined FUN_14583bac2(void)

undefined8 FUN_14583bac2(undefined8 param_1,int param_2)

{
  thunk_FUN_140d7aa08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583baea thunk_FUN_140d7aa08 body=5 status=ok
// SIG undefined thunk_FUN_140d7aa08(void)

void thunk_FUN_140d7aa08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a858000;
  param_1[5] = &PTR_LAB_14a858590;
  param_1[6] = &PTR_LAB_14a8585d0;
  param_1[0x2f] = &PTR_LAB_14a858620;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 14583bafe FUN_14583bafe body=31 status=ok
// SIG undefined FUN_14583bafe(void)

undefined8 FUN_14583bafe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bb1e FUN_14583bb1e body=40 status=ok
// SIG undefined FUN_14583bb1e(void)

undefined8 FUN_14583bb1e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bb46 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14583bb5a FUN_14583bb5a body=31 status=ok
// SIG undefined FUN_14583bb5a(void)

undefined8 FUN_14583bb5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bb88 FUN_14583bb88 body=31 status=ok
// SIG undefined FUN_14583bb88(void)

undefined8 FUN_14583bb88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bbb6 FUN_14583bbb6 body=31 status=ok
// SIG undefined FUN_14583bbb6(void)

undefined8 FUN_14583bbb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bbe4 FUN_14583bbe4 body=31 status=ok
// SIG undefined FUN_14583bbe4(void)

undefined8 FUN_14583bbe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bc12 FUN_14583bc12 body=31 status=ok
// SIG undefined FUN_14583bc12(void)

undefined8 FUN_14583bc12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bc40 FUN_14583bc40 body=31 status=ok
// SIG undefined FUN_14583bc40(void)

undefined8 FUN_14583bc40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bc6e FUN_14583bc6e body=31 status=ok
// SIG undefined FUN_14583bc6e(void)

undefined8 FUN_14583bc6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bc9c FUN_14583bc9c body=31 status=ok
// SIG undefined FUN_14583bc9c(void)

undefined8 FUN_14583bc9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bcca FUN_14583bcca body=31 status=ok
// SIG undefined FUN_14583bcca(void)

undefined8 FUN_14583bcca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bcf8 FUN_14583bcf8 body=31 status=ok
// SIG undefined FUN_14583bcf8(void)

undefined8 FUN_14583bcf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bd26 FUN_14583bd26 body=31 status=ok
// SIG undefined FUN_14583bd26(void)

undefined8 FUN_14583bd26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bd54 FUN_14583bd54 body=31 status=ok
// SIG undefined FUN_14583bd54(void)

undefined8 FUN_14583bd54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bd82 FUN_14583bd82 body=31 status=ok
// SIG undefined FUN_14583bd82(void)

undefined8 FUN_14583bd82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bdb0 FUN_14583bdb0 body=31 status=ok
// SIG undefined FUN_14583bdb0(void)

undefined8 FUN_14583bdb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bdd0 FUN_14583bdd0 body=40 status=ok
// SIG undefined FUN_14583bdd0(void)

undefined8 FUN_14583bdd0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583bdf8 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14583bdfe FUN_14583bdfe body=25 status=ok
// SIG undefined FUN_14583bdfe(void)

undefined8 FUN_14583bdfe(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14583be18 FUN_14583be18 body=37 status=ok
// SIG undefined FUN_14583be18(void)

void FUN_14583be18(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_14583be3e();
  if (cVar1 != '\0') {
    FUN_14583bf3a(param_1);
    return;
  }
  return;
}



// FUNCTION 14583be3e FUN_14583be3e body=181 status=ok
// SIG undefined FUN_14583be3e(void)

bool FUN_14583be3e(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 400);
  iVar2 = *(int *)(param_1 + 0x194);
  *(undefined8 *)(param_1 + 400) = 0;
  plVar5 = (longlong *)FUN_14583bef4();
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x308))(plVar5,local_38);
    iVar3 = FUN_1411eec94(local_38);
    if (iVar3 == 2) {
      uVar4 = FUN_14133cd66(plVar5);
      *(undefined4 *)(param_1 + 0x194) = uVar4;
      uVar4 = FUN_14127c090(plVar5);
      *(undefined4 *)(param_1 + 400) = uVar4;
    }
  }
  if (*(int *)(param_1 + 400) == iVar1) {
    bVar6 = *(int *)(param_1 + 0x194) != iVar2;
  }
  else {
    bVar6 = true;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583bef4 FUN_14583bef4 body=69 status=ok
// SIG undefined FUN_14583bef4(void)

longlong FUN_14583bef4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140c3a680();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
    lVar2 = FUN_140b6d0be();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14583bf3a FUN_14583bf3a body=243 status=ok
// SIG undefined FUN_14583bf3a(void)

void FUN_14583bf3a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x50);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      do {
        FUN_14047a6d2(param_1,*(undefined4 *)(*local_78 + (longlong)iStack_5c * 0xc));
        local_60 = local_60 & ~uStack_6c;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar3);
    } while ((CONCAT44(uStack_64,uStack_68) != lVar2) || (local_78 != plVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14583c036 FUN_14583c036 body=68 status=ok
// SIG undefined FUN_14583c036(void)

bool FUN_14583c036(ushort param_1)

{
  int iVar1;
  bool bVar2;
  
  if (((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1) && (DAT_14c760e14 == '\x01')) {
    iVar1 = FUN_147cee33b();
    bVar2 = true;
    if (iVar1 != 1) {
      iVar1 = FUN_147cee33b();
      bVar2 = iVar1 == 2;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 14583c07a FUN_14583c07a body=118 status=ok
// SIG undefined FUN_14583c07a(void)

undefined8 FUN_14583c07a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x88);
  if (lVar1 != 0) {
    lVar1 = FUN_144a7af92(lVar1);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_140773fe2();
      if (plVar2 != (longlong *)0x0) {
        lVar3 = FUN_140636ec6(lVar1);
        if (lVar3 != 0) {
          lVar3 = FUN_144a7ba4c(lVar3);
          if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014583c0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(*plVar2 + 0x2d0))(plVar2,*(undefined4 *)(lVar3 + 0xe0),lVar1);
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14583c0f0 FUN_14583c0f0 body=40 status=ok
// SIG undefined FUN_14583c0f0(void)

undefined8 FUN_14583c0f0(undefined8 param_1,int param_2)

{
  FUN_14583c118();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583c118 FUN_14583c118 body=79 status=ok
// SIG undefined FUN_14583c118(void)

void FUN_14583c118(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5759e0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  thunk_FUN_14583c16e(param_1);
  return;
}



// FUNCTION 14583c168 thunk_FUN_14583c16e body=5 status=ok
// SIG undefined thunk_FUN_14583c16e(void)

void thunk_FUN_14583c16e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a758a80;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_14583c1b2(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14583c16e FUN_14583c16e body=68 status=ok
// SIG undefined FUN_14583c16e(void)

void FUN_14583c16e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a758a80;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_14583c1b2(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14583c1b2 FUN_14583c1b2 body=56 status=ok
// SIG undefined FUN_14583c1b2(void)

void FUN_14583c1b2(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14583c1f0 FUN_14583c1f0 body=57 status=ok
// SIG undefined FUN_14583c1f0(void)

void FUN_14583c1f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e38 = FUN_140002ddd(FUN_1465ad383,uVar1,L"GbxBrainAspect_TakeOff");
  }
  return;
}



// FUNCTION 14583c236 FUN_14583c236 body=150 status=ok
// SIG undefined FUN_14583c236(void)

void FUN_14583c236(longlong *param_1)

{
  param_1[6] = (longlong)&DAT_14a171d50;
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_140115c12(param_1 + 8,0);
  }
  param_1[7] = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[2] = (longlong)&DAT_14a171d50;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_140115c12(param_1 + 4,0);
  }
  param_1[3] = 0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14583c2cc FUN_14583c2cc body=213 status=ok
// SIG undefined FUN_14583c2cc(void)

longlong * FUN_14583c2cc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))();
  if (cVar4 != '\0') {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    cVar4 = FUN_1446e9750(param_1,&local_58,local_48,0);
    if (cVar4 != '\0') {
      param_1 = (longlong *)FUN_1411ef0dc(&local_58,param_1);
    }
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
    if (cVar4 != '\0') goto LAB_14583c347;
  }
  param_1 = (longlong *)FUN_140255d2c();
LAB_14583c347:
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14583c3a2 FUN_14583c3a2 body=45 status=ok
// SIG undefined FUN_14583c3a2(void)

undefined8 FUN_14583c3a2(undefined8 param_1,int param_2)

{
  FUN_14583c3d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 14583c3d0 FUN_14583c3d0 body=119 status=ok
// SIG undefined FUN_14583c3d0(void)

void FUN_14583c3d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d13c0;
  plVar3 = (longlong *)param_1[0x2c];
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
  plVar3 = (longlong *)param_1[0x1d];
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
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 14583c447 FUN_14583c447 body=468 status=ok
// SIG undefined FUN_14583c447(void)

ulonglong FUN_14583c447(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if ((param_1 != 0) && (iVar3 = FUN_14490d72a(), iVar3 != 3)) {
    lVar4 = param_2[2];
    if (lVar4 == 0) {
      lVar4 = FUN_140e045c8(*param_2);
      param_2[2] = lVar4;
    }
    lVar5 = param_3[2];
    if (lVar5 == 0) {
      lVar5 = FUN_140e045c8(*param_3);
      param_3[2] = lVar5;
    }
    if ((lVar4 != lVar5) && (lVar6 = FUN_14103c0a0(param_1), lVar6 != 0)) {
      if (param_4 == '\x01' && lVar5 != 0) {
        if (0 < (longlong)*(int *)(lVar5 + 0x20)) {
          lVar8 = *(longlong *)(lVar5 + 0x18);
          lVar5 = lVar8 + (longlong)*(int *)(lVar5 + 0x20) * 0x28;
          uVar10 = 0;
          do {
            if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x20) != 0)) {
              lVar11 = *(longlong *)(lVar4 + 0x18) + 8;
              lVar9 = (longlong)*(int *)(lVar4 + 0x20) * 0x28;
              do {
                cVar2 = FUN_144a7afa6(lVar11,lVar8 + 8);
                if (cVar2 != '\0') goto LAB_14583c606;
                lVar11 = lVar11 + 0x28;
                lVar9 = lVar9 + -0x28;
              } while (lVar9 != 0);
            }
            uVar1 = DAT_14cb84e98;
            uVar7 = FUN_14583c61c(lVar8);
            FUN_1411ac4f8(lVar6,uVar7,0,uVar1,0);
            uVar10 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
LAB_14583c606:
            lVar8 = lVar8 + 0x28;
          } while (lVar8 != lVar5);
          goto LAB_14583c575;
        }
      }
      else {
        uVar10 = 0;
        if ((lVar4 == 0) || (param_4 != '\0')) goto LAB_14583c575;
        if (0 < (longlong)*(int *)(lVar4 + 0x20)) {
          lVar8 = *(longlong *)(lVar4 + 0x18);
          lVar4 = lVar8 + (longlong)*(int *)(lVar4 + 0x20) * 0x28;
          uVar10 = 0;
          do {
            if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x20) != 0)) {
              lVar11 = *(longlong *)(lVar5 + 0x18) + 8;
              lVar9 = (longlong)*(int *)(lVar5 + 0x20) * 0x28;
              do {
                cVar2 = FUN_144a7afa6(lVar11,lVar8 + 8);
                if (cVar2 != '\0') goto LAB_14583c56c;
                lVar11 = lVar11 + 0x28;
                lVar9 = lVar9 + -0x28;
              } while (lVar9 != 0);
            }
            uVar1 = DAT_14cb84e98;
            uVar7 = FUN_14583c61c(lVar8);
            FUN_1411ac4f8(lVar6,uVar7,2,uVar1,0);
            uVar10 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
LAB_14583c56c:
            lVar8 = lVar8 + 0x28;
          } while (lVar8 != lVar4);
          goto LAB_14583c575;
        }
      }
    }
  }
  uVar10 = 0;
LAB_14583c575:
  return uVar10 & 0xffffff01;
}



// FUNCTION 14583c61c FUN_14583c61c body=189 status=ok
// SIG undefined FUN_14583c61c(void)

longlong FUN_14583c61c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1411ace9c();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 14583c6da FUN_14583c6da body=848 status=ok
// SIG undefined FUN_14583c6da(void)

void FUN_14583c6da(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  code *local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *param_1;
  lVar8 = *(longlong *)(lVar6 + 0x10);
  iVar10 = *(int *)(lVar8 + 0xa0);
  local_98 = param_1;
  if (iVar10 < 0) {
LAB_14583c996:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (*(int *)(lVar6 + 0x134) < iVar10) {
    FUN_14583ca2c(lVar6 + 0x128);
    iVar10 = *(int *)(lVar8 + 0xa0);
  }
  if (0 < iVar10) {
    lVar6 = 0;
    do {
      lVar11 = lVar6 * 0x68;
      if (*(int *)(*(longlong *)(lVar8 + 0x98) + 0x18 + lVar11) != 0) {
        local_b0 = lVar6;
        plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
        plVar5[1] = (longlong)&DAT_100000001;
        *plVar5 = (longlong)&PTR_FUN_14b42b930;
        plVar9 = plVar5 + 2;
        *(undefined1 *)(plVar5 + 7) = 0;
        plVar5[3] = 0;
        plVar5[4] = 0;
        *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
        *(undefined8 *)((longlong)plVar5 + 0x2c) = 0;
        plVar5[2] = (longlong)&PTR_FUN_14b42b950;
        local_a0 = plVar5 + 8;
        plVar5[8] = 0;
        plVar5[9] = 0;
        local_a8 = lVar8;
        local_90 = plVar9;
        local_88 = plVar5;
        FUN_1411efb30(&local_90,plVar9);
        plVar1 = local_98;
        lVar8 = local_a8;
        lVar6 = *local_98;
        local_80 = FUN_140b169f4;
        local_78 = 0;
        FUN_1411efbd2(local_70,&local_90,&local_80);
        FUN_1411efcfe(lVar6 + 0xb0,&local_80,local_70);
        FUN_1449db362(local_70);
        FUN_1411ef922(local_a0,*(longlong *)(lVar8 + 0x98) + lVar11 + 0x10);
        lVar6 = *plVar1;
        iVar10 = *(int *)(lVar6 + 0x130);
        *(uint *)(lVar6 + 0x130) = iVar10 + 1U;
        if (*(uint *)(lVar6 + 0x134) < iVar10 + 1U) {
          FUN_14898c0e4((longlong *)(lVar6 + 0x128),iVar10);
        }
        puVar7 = (undefined4 *)((longlong)iVar10 * 0x30 + *(longlong *)(lVar6 + 0x128));
        if (plVar5 == (longlong *)0x0) {
          *puVar7 = (int)local_b0;
          *(undefined8 *)(puVar7 + 2) = 0x10;
          *(undefined8 *)(puVar7 + 4) = 0;
          *(undefined8 *)(puVar7 + 6) = 0;
          *(undefined8 *)(puVar7 + 8) = 0;
          puVar7[10] = 0xffffffff;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          *puVar7 = (int)local_b0;
          *(longlong **)(puVar7 + 2) = plVar9;
          *(longlong **)(puVar7 + 4) = plVar5;
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          *(undefined8 *)(puVar7 + 6) = 0;
          *(undefined8 *)(puVar7 + 8) = 0;
          puVar7[10] = 0xffffffff;
          LOCK();
          plVar9 = plVar5 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            lVar8 = local_a8;
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              lVar8 = local_a8;
            }
          }
        }
        lVar6 = local_b0;
        plVar9 = (longlong *)(puVar7 + 6);
        iVar10 = *(int *)(*(longlong *)(lVar8 + 0x98) + 0x28 + lVar11);
        if (iVar10 < 0) goto LAB_14583c996;
        if ((int)puVar7[9] < iVar10) {
          FUN_14583ca9c(plVar9);
          iVar10 = *(int *)(*(longlong *)(lVar8 + 0x98) + 0x28 + lVar11);
        }
        if (0 < iVar10) {
          iVar10 = 0;
          do {
            iVar3 = puVar7[8];
            puVar7[8] = iVar3 + 1U;
            if ((uint)puVar7[9] < iVar3 + 1U) {
              FUN_14898c178(plVar9,iVar3);
            }
            lVar4 = *plVar9;
            *(int *)(lVar4 + (longlong)iVar3 * 0xc) = iVar10;
            *(undefined8 *)(lVar4 + 4 + (longlong)iVar3 * 0xc) = 0xffffffffffffffff;
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(*(longlong *)(lVar8 + 0x98) + 0x28 + lVar11));
        }
        plVar9 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_88 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        iVar10 = *(int *)(lVar8 + 0xa0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14583ca2c FUN_14583ca2c body=111 status=ok
// SIG undefined FUN_14583ca2c(void)

void FUN_14583ca2c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}


