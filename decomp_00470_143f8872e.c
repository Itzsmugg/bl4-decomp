// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143f8872e FUN_143f8872e body=819 status=ok
// SIG undefined FUN_143f8872e(void)

undefined4 FUN_143f8872e(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)((longlong)param_1 + 0x139) == (char)param_2) {
    if ((int)param_4[1] == 0) {
      uVar7 = 0;
    }
    else {
      plVar11 = (longlong *)*param_4;
      if (plVar11 == (longlong *)0x0) {
        uVar7 = 0;
        goto LAB_143f887b8;
      }
      uVar7 = 0;
      (**(code **)(*plVar11 + 0x60))(plVar11,0);
    }
  }
  else {
    if (((char)param_2 != '\0') &&
       (cVar5 = (**(code **)(*param_1 + 0x10))(param_1), cVar5 != '\x03')) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    plVar11 = (longlong *)param_1[0x1a];
    bVar3 = true;
    if (plVar11 == (longlong *)0x0) {
LAB_143f88827:
      lVar10 = 0;
      plVar11 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar11[1];
      do {
        if (iVar6 == 0) goto LAB_143f88827;
        LOCK();
        iVar4 = (int)plVar11[1];
        bVar12 = iVar6 == iVar4;
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar12);
      lVar10 = param_1[0x19];
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      bVar3 = false;
    }
    local_78 = 0;
    local_70 = 0;
    local_80 = param_1;
    FUN_140146ccc(&local_78,param_4);
    if (!bVar3) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_68 = lVar10;
    local_60 = plVar11;
    if (local_50 != 4) {
      FUN_1446efa72(&local_58,0,4,0x10);
      local_50 = 4;
    }
    *local_58 = &PTR_LAB_14b526cc0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_58[2] = lVar9;
    *local_58 = &PTR_FUN_14b527280;
    local_58[3] = local_80;
    local_58[4] = local_78;
    local_78 = 0;
    *(undefined4 *)(local_58 + 5) = local_70;
    local_70 = 0;
    local_58[6] = local_68;
    local_58[7] = local_60;
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    local_90 = 0;
    local_88 = 0;
    FUN_1412f566c(&local_90,&local_58);
    uVar7 = FUN_148ae2fbc(param_2,param_1 + 0x36,param_3,&local_90);
    if (!bVar3) {
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_143f88778;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143f88778:
  puVar8 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar8 == (undefined8 *)0x0) goto LAB_143f887b8;
    (**(code **)*puVar8)(puVar8,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar8 = (undefined8 *)*param_4;
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f887b8:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 143f88a68 FUN_143f88a68 body=274 status=ok
// SIG undefined FUN_143f88a68(void)

void FUN_143f88a68(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x128);
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
  plVar3 = (longlong *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x118) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f88ae2;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f88ae2:
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(param_1 + 0x20);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f88b7a FUN_143f88b7a body=228 status=ok
// SIG undefined FUN_143f88b7a(void)

void FUN_143f88b7a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x140);
  uVar3 = FUN_145cefb3b(param_2);
  iVar4 = FUN_145cefbbe(plVar1,uVar3,param_2);
  if (iVar4 == -1) {
    return;
  }
  uVar3 = FUN_145cefb3b(param_2);
  iVar4 = FUN_145cefbbe(plVar1,uVar3,param_2);
  if (iVar4 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar4 * 0x78 + *plVar1;
  }
  cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x60) + 0x20))();
  uVar3 = FUN_145cefb3b(param_2);
  iVar4 = FUN_145cefbbe(plVar1,uVar3,param_2);
  if (cVar2 != '\0') {
    if (iVar4 == -1) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)iVar4 * 0x78 + *plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000143f88c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar5 + 0x60) + 0x58))(*(longlong **)(lVar5 + 0x60),1);
    return;
  }
  if (iVar4 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar4 * 0x78 + *plVar1;
  }
  FUN_140457ffc(*(longlong *)(lVar5 + 0x60) + 0x38,param_1);
  FUN_145e215c6(plVar1,param_2);
  return;
}



// FUNCTION 143f88c5e FUN_143f88c5e body=157 status=ok
// SIG undefined FUN_143f88c5e(void)

void FUN_143f88c5e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f88cfc FUN_143f88cfc body=124 status=ok
// SIG undefined FUN_143f88cfc(void)

void FUN_143f88cfc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f88d78 FUN_143f88d78 body=124 status=ok
// SIG undefined FUN_143f88d78(void)

void FUN_143f88d78(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f88df4 FUN_143f88df4 body=124 status=ok
// SIG undefined FUN_143f88df4(void)

void FUN_143f88df4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f88e70 FUN_143f88e70 body=124 status=ok
// SIG undefined FUN_143f88e70(void)

void FUN_143f88e70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f88eec FUN_143f88eec body=124 status=ok
// SIG undefined FUN_143f88eec(void)

void FUN_143f88eec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f88f68 FUN_143f88f68 body=124 status=ok
// SIG undefined FUN_143f88f68(void)

void FUN_143f88f68(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f88fe4 FUN_143f88fe4 body=124 status=ok
// SIG undefined FUN_143f88fe4(void)

void FUN_143f88fe4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f89060 FUN_143f89060 body=124 status=ok
// SIG undefined FUN_143f89060(void)

void FUN_143f89060(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f890dc FUN_143f890dc body=1355 status=ok
// SIG undefined FUN_143f890dc(void)

undefined4 FUN_143f890dc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  byte bVar7;
  bool bVar8;
  undefined8 uVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 uVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong *plVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined4 local_f4;
  longlong *local_f0;
  undefined8 local_e8;
  uint *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar13 = *(int *)(param_1 + 0x168);
  local_f0 = param_3;
  if (iVar13 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar18 = 0;
    iVar12 = 0;
  }
  else {
    puVar14 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar14 = (uint *)(param_1 + 0x150);
    }
    uVar23 = *puVar14;
    if (uVar23 == 0) {
      iVar12 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar12 = iVar13 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar18 = 0;
      do {
        if (uVar17 == uVar16) {
          local_f4 = 0x3fb;
          goto LAB_143f89305;
        }
        iVar18 = iVar18 + 0x20;
        uVar23 = puVar14[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar16 = 0;
      iVar18 = 0;
    }
    uVar17 = (ulonglong)(-uVar23 & uVar23);
    uVar4 = uVar17 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar12 = (iVar18 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar12) {
      iVar12 = iVar13;
    }
  }
  local_f4 = 0x3fb;
  if (iVar12 != iVar13) {
    uVar23 = 0xffffffff;
    bVar10 = 0;
    local_100 = param_1;
    local_e8 = param_2;
    local_e0 = (uint *)(param_1 + 0x150);
    do {
      bVar7 = bVar10;
      lVar20 = *(longlong *)(local_100 + 0x140);
      lVar25 = (longlong)iVar12 * 0x78;
      FUN_1413ebcfe(&local_b8,lVar20 + lVar25);
      local_58 = *(longlong **)(lVar20 + 0x60 + lVar25);
      local_50 = *(longlong *)(lVar20 + 0x68 + lVar25);
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      cVar11 = (**(code **)(*local_58 + 0x10))();
      FUN_145e216be(&local_b8);
      uVar9 = local_e8;
      plVar2 = local_f0;
      if (cVar11 == '\x02') goto LAB_143f8938d;
      uVar23 = uVar23 & ~(uint)uVar17;
      puVar14 = *(uint **)(local_100 + 0x160);
      if (*(uint **)(local_100 + 0x160) == (uint *)0x0) {
        puVar14 = local_e0;
      }
      iVar5 = *(int *)(local_100 + 0x168);
      iVar12 = (int)uVar16;
      lVar20 = (longlong)iVar12;
      uVar15 = puVar14[lVar20] & uVar23;
      if (uVar15 == 0) {
        iVar21 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar21 = iVar5 + -1;
        }
        iVar21 = iVar21 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar22 = iVar21;
        if (iVar21 < iVar12) {
          iVar22 = iVar12;
        }
        if (iVar12 < iVar21) {
          lVar25 = 0;
          do {
            uVar15 = puVar14[lVar20 + lVar25 + 1];
            if (uVar15 != 0) {
              uVar16 = (ulonglong)(iVar12 + (int)lVar25 + 1);
              uVar23 = 0xffffffff;
              goto LAB_143f892b8;
            }
            iVar18 = iVar18 + 0x20;
            lVar25 = lVar25 + 1;
          } while (iVar22 - lVar20 != lVar25);
          uVar23 = 0xffffffff;
          lVar20 = (longlong)iVar22;
        }
        uVar16 = lVar20 + 1U & 0xffffffff;
        iVar12 = iVar5;
      }
      else {
LAB_143f892b8:
        uVar17 = (ulonglong)(-uVar15 & uVar15);
        uVar4 = uVar17 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar12 = (iVar18 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar12) {
          iVar12 = iVar5;
        }
      }
      bVar10 = bVar7 | cVar11 == '\x02';
    } while (iVar12 != iVar13);
    if ((bool)(bVar7 | cVar11 == '\x02')) {
LAB_143f8938d:
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0;
      plVar24 = *(longlong **)(local_100 + 0xb8);
      bVar8 = true;
      if (plVar24 == (longlong *)0x0) {
        uVar19 = 0;
        plVar24 = (longlong *)0x0;
      }
      else {
        iVar13 = (int)plVar24[1];
        uVar19 = 0;
        do {
          if (iVar13 == 0) {
            plVar24 = (longlong *)0x0;
            goto LAB_143f89449;
          }
          LOCK();
          iVar12 = (int)plVar24[1];
          bVar26 = iVar13 == iVar12;
          if (bVar26) {
            *(int *)(plVar24 + 1) = iVar13 + 1;
            iVar12 = iVar13;
          }
          iVar13 = iVar12;
          UNLOCK();
        } while (!bVar26);
        uVar19 = *(undefined8 *)(local_100 + 0xb0);
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar24 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar3 = (int *)((longlong)plVar24 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar24 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar3 = (int *)((longlong)plVar24 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
          bVar8 = false;
        }
        else {
          bVar8 = false;
        }
      }
LAB_143f89449:
      local_b0 = 0;
      local_a8 = 0;
      local_b8 = local_100;
      FUN_140146ccc(&local_b0,plVar2);
      if (!bVar8) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      local_a0 = uVar19;
      local_98 = plVar24;
      if (local_c0 != 4) {
        FUN_1446efa72(&local_c8,0,4,0x10);
        local_c0 = 4;
      }
      *local_c8 = &PTR_LAB_14b526cc0;
      LOCK();
      UNLOCK();
      lVar25 = DAT_14c758608 + 1;
      lVar20 = DAT_14c758608 + 1;
      if (lVar25 == 0) {
        LOCK();
        UNLOCK();
        lVar25 = DAT_14c758608 + 2;
        lVar20 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar20;
      local_c8[2] = lVar25;
      *local_c8 = &PTR_FUN_14b527c10;
      local_c8[3] = local_b8;
      local_c8[4] = local_b0;
      local_b0 = 0;
      *(undefined4 *)(local_c8 + 5) = local_a8;
      local_a8 = 0;
      local_c8[6] = local_a0;
      local_c8[7] = local_98;
      if (DAT_14cb99c48 == (undefined8 *)0x0) {
        DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *DAT_14cb99c48 = 0;
        DAT_14cb99c48[1] = 0;
        DAT_14cb99c48[2] = 2;
      }
      local_d8 = 0;
      local_d0 = 0;
      FUN_1412f566c(&local_d8,&local_c8);
      local_f4 = FUN_148ae6dcc(local_100 + 0x130,uVar9,&local_d8);
      if (!bVar8) {
        LOCK();
        plVar2 = plVar24 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar3 = (int *)((longlong)plVar24 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
      }
      if (local_c0 != 0) {
        if (local_c8 == (undefined8 *)0x0) goto LAB_143f89305;
        (**(code **)*local_c8)(local_c8,0);
        FUN_1446efa72(&local_c8,0,0,0x10);
        local_c0 = 0;
      }
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143f89305:
  plVar2 = local_f0;
  if ((int)local_f0[1] != 0) {
    puVar6 = (undefined8 *)*local_f0;
    if (puVar6 == (undefined8 *)0x0) goto LAB_143f89345;
    (**(code **)*puVar6)(puVar6,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(plVar2 + 1) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_143f89345:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_f4;
}



// FUNCTION 143f89628 FUN_143f89628 body=124 status=ok
// SIG undefined FUN_143f89628(void)

void FUN_143f89628(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f896a4 FUN_143f896a4 body=124 status=ok
// SIG undefined FUN_143f896a4(void)

void FUN_143f896a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f89732 FUN_143f89732 body=52 status=ok
// SIG undefined FUN_143f89732(void)

void FUN_143f89732(longlong param_1,longlong param_2)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(param_1 * param_2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_1 * param_2);
    return;
  }
  return;
}



// FUNCTION 143f89774 FUN_143f89774 body=1458 status=ok
// SIG undefined FUN_143f89774(void)

void FUN_143f89774(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined2 *_Src;
  char cVar5;
  size_t sVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined2 *local_98;
  uint local_90;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  uint local_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  undefined4 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
    FUN_1413288e0(&DAT_14c926ca8);
    atexit(FUN_1427ac032);
    _Init_thread_footer(&DAT_14c926f30);
  }
  (**(code **)(DAT_14c926ca8 + 0x68))(&DAT_14c926ca8,&local_78,"VivoxCore");
  (**(code **)(*(longlong *)local_78 + 0x20))(local_78,&local_88);
  plVar3 = (longlong *)CONCAT44(uStack_6c,local_70);
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
  local_78 = local_88;
  if (local_80 == 0) {
    local_78 = L"";
  }
  local_70 = 0;
  if (local_78 != (wchar_t *)0x0) {
    sVar6 = wcslen(local_78);
    local_70 = (uint)sVar6;
  }
  local_68 = L"Source/ThirdParty/VivoxCoreLibrary/Windows/Release/x64";
  local_60 = 0x36;
  FUN_140bee87a(&local_98,&local_78,2);
  uVar4 = local_90;
  _Src = local_98;
  uVar11 = (ulonglong)local_90;
  puVar9 = local_98;
  if (local_90 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  FUN_1458f4f8e(puVar9);
  if ((int)uVar4 < 2) {
    lVar10 = 0;
  }
  else {
    local_78 = (wchar_t *)0x0;
    local_70 = uVar4;
    FUN_1446dd670(&local_78,uVar4 + 0xd,0);
    memcpy(local_78,_Src,uVar11 * 2);
    FUN_1401aebe8(&local_78,L"vivoxsdk.dll",0xc);
    pwVar12 = L"";
    if (local_70 != 0) {
      pwVar12 = local_78;
    }
    lVar10 = FUN_14155261e(pwVar12);
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_145be8130(puVar9);
  if (_Src != (undefined2 *)0x0) {
    FUN_1400020a8(_Src);
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 8) = lVar10;
  if (lVar10 == 0) goto LAB_143f8992a;
  local_88 = (wchar_t *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  local_80 = 3;
  *(undefined ***)local_88 = &PTR_LAB_14a1ca5b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(local_88 + 8) = lVar7;
  *(undefined ***)local_88 = &PTR_FUN_14b527eb0;
  *(longlong *)(local_88 + 0xc) = param_1 + -0x10;
  *(undefined **)(local_88 + 0x10) = &DAT_14587b360;
  local_88[0x14] = L'\0';
  local_88[0x15] = L'\0';
  local_78 = (wchar_t *)0x0;
  local_70 = 0;
  FUN_145f9a32e(&local_78,&local_88);
  if (((local_70 == 0) || (local_78 == (wchar_t *)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)local_78 + 0x30))(), uVar4 = DAT_14cb10988, cVar5 == '\0'))
  {
    if (local_70 == 0) goto LAB_143f89b26;
    if (local_78 != (wchar_t *)0x0) {
      (*(code *)**(undefined8 **)local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      goto LAB_143f89b19;
    }
  }
  else {
    if ((DAT_14cb10994 < 1) &&
       (DAT_14cb10990 = DAT_14cb10990 + -1, DAT_14cb10990 <= (int)DAT_14cb10988)) {
      if (0 < (int)DAT_14cb10988) {
        iVar8 = 0;
        do {
          if (((*(int *)(DAT_14cb10980 + 8 + (longlong)iVar8 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(DAT_14cb10980 + (longlong)iVar8 * 0x10),
              plVar3 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(&DAT_14cb10980,iVar8);
            FUN_14005b248(&DAT_14cb10980);
          }
          else {
            iVar8 = iVar8 + 1;
          }
        } while (iVar8 < (int)DAT_14cb10988);
      }
      DAT_14cb10990 = 2;
      if (2 < (int)(DAT_14cb10988 * 2)) {
        DAT_14cb10990 = DAT_14cb10988 * 2;
      }
      if ((DAT_14cb10990 < (int)uVar4) && (DAT_14cb1098c != DAT_14cb10988)) {
        FUN_14045812c();
      }
    }
    if ((local_70 != 0) && (local_78 != (wchar_t *)0x0)) {
      (**(code **)(*(longlong *)local_78 + 0x38))(local_78,&local_98);
    }
    uVar4 = DAT_14cb10988;
    lVar10 = (longlong)(int)DAT_14cb10988;
    DAT_14cb10988 = DAT_14cb10988 + 1;
    if (DAT_14cb1098c < DAT_14cb10988) {
      FUN_1447a71f6(&DAT_14cb10980,uVar4);
    }
    lVar7 = DAT_14cb10980;
    lVar10 = lVar10 * 0x10;
    *(undefined8 *)(DAT_14cb10980 + lVar10) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar10) = 0;
    *(wchar_t **)(lVar7 + lVar10) = local_78;
    local_78 = (wchar_t *)0x0;
    *(uint *)(lVar7 + 8 + lVar10) = local_70;
LAB_143f89b19:
    local_70 = 0;
LAB_143f89b26:
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  local_98 = (undefined2 *)&DAT_1457de284;
  local_90 = 0;
  FUN_14658f27a(&local_78,param_1 + -0x10);
  FUN_145ee7fae(&local_98,&local_78);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_1446f470e(&local_a0,L"VivoxVoice",1);
  (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,local_a0,param_1 + 8);
  FUN_1401cb1ee(&local_78);
  if (local_80 != 0) {
    if (local_88 == (wchar_t *)0x0) goto LAB_143f8992a;
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143f8992a:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f89d28 FUN_143f89d28 body=312 status=ok
// SIG undefined FUN_143f89d28(void)

void FUN_143f89d28(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 8);
  FUN_1446f470e(&local_30,L"VivoxVoice",1);
  (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,local_30,puVar1);
  FUN_140457ffc(&DAT_14cb10980,param_1 + -0x10);
  FUN_14126849c(&DAT_14cb10a38,param_1 + -0x10);
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if ((HMODULE)*puVar1 != (HMODULE)0x0) {
    FreeLibrary((HMODULE)*puVar1);
    *puVar1 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f89e76 FUN_143f89e76 body=41 status=ok
// SIG undefined FUN_143f89e76(void)

undefined8 FUN_143f89e76(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
  (**(code **)(*plVar1 + 0x118))(plVar1);
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 143f89eaa FUN_143f89eaa body=29 status=ok
// SIG undefined FUN_143f89eaa(void)

undefined8 FUN_143f89eaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f89edc FUN_143f89edc body=93 status=ok
// SIG undefined FUN_143f89edc(void)

void FUN_143f89edc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526b70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f89f3a FUN_143f89f3a body=93 status=ok
// SIG undefined FUN_143f89f3a(void)

void FUN_143f89f3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526b70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f89f98 FUN_143f89f98 body=126 status=ok
// SIG undefined FUN_143f89f98(void)

void FUN_143f89f98(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526be0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b526b70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8a007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8a026 FUN_143f8a026 body=26 status=ok
// SIG undefined FUN_143f8a026(void)

undefined1 FUN_143f8a026(longlong param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x18) == 0x29) {
    FUN_143f8519c(*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 143f8a040 FUN_143f8a040 body=111 status=ok
// SIG undefined FUN_143f8a040(void)

undefined8 * FUN_143f8a040(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b526c50;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f8a091;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f8a091:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8a0c4 FUN_143f8a0c4 body=123 status=ok
// SIG undefined FUN_143f8a0c4(void)

void FUN_143f8a0c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526c50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141509b10(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f8a140 FUN_143f8a140 body=123 status=ok
// SIG undefined FUN_143f8a140(void)

void FUN_143f8a140(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526c50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141509b10(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f8a1bc FUN_143f8a1bc body=157 status=ok
// SIG undefined FUN_143f8a1bc(void)

void FUN_143f8a1bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b526c50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_141509b10(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8a24a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8a264 FUN_143f8a264 body=20 status=ok
// SIG undefined FUN_143f8a264(void)

undefined1 FUN_143f8a264(longlong param_1)

{
  FUN_143f8a278(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f8a278 FUN_143f8a278 body=879 status=ok
// SIG undefined FUN_143f8a278(void)

void FUN_143f8a278(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  void *pvVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_1400b22c2(&local_68,*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x30));
  iVar4 = local_60;
  pvVar7 = local_68;
  local_58 = local_68;
  if (*(int *)(param_2 + 0x1c) != 0) goto LAB_143f8a569;
  iVar3 = local_60 + -1;
  if (local_60 == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(lVar1 + 0x148,local_68,iVar3);
  if (iVar4 == DAT_14cb99c28) {
    if (1 < iVar4) {
      lVar5 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)pvVar7 + lVar5);
        uVar9 = (ulonglong)uVar8;
        uVar10 = *(ushort *)(DAT_14cb99c20 + lVar5);
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_143f8a48d;
LAB_143f8a33d:
        lVar5 = lVar5 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_143f8a33d;
      }
      if (uVar8 != uVar10) goto LAB_143f8a36d;
    }
LAB_143f8a48d:
    local_60 = *(int *)(lVar1 + 0xb8);
    pvVar6 = *(void **)(lVar1 + 0xb0);
LAB_143f8a4c8:
    local_68 = (void *)0x0;
    lVar5 = (longlong)local_60;
    if (lVar5 == 0) {
LAB_143f8a4f9:
      local_68 = (void *)0x0;
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
LAB_143f8a4f2:
      memcpy(local_68,pvVar6,lVar5 * 2);
    }
  }
  else {
    if (DAT_14cb99c28 + iVar4 == 1) goto LAB_143f8a48d;
LAB_143f8a36d:
    if (iVar4 == DAT_14cb99c38) {
      if (1 < iVar4) {
        lVar5 = 0;
        while( true ) {
          uVar8 = *(ushort *)((longlong)pvVar7 + lVar5);
          uVar9 = (ulonglong)uVar8;
          uVar10 = *(ushort *)(DAT_14cb99c30 + lVar5);
          if (uVar8 != uVar10) break;
          if (uVar8 == 0) goto LAB_143f8a4b1;
LAB_143f8a3ad:
          lVar5 = lVar5 + 2;
        }
        if ((uVar10 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar11 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_143f8a3ad;
        }
        if (uVar8 != uVar10) goto LAB_143f8a3dd;
      }
LAB_143f8a4b1:
      local_60 = *(int *)(lVar1 + 0xe8);
      pvVar6 = *(void **)(lVar1 + 0xe0);
      goto LAB_143f8a4c8;
    }
    if (DAT_14cb99c38 + iVar4 == 1) goto LAB_143f8a4b1;
LAB_143f8a3dd:
    if (iVar4 != DAT_14cb99c18) {
      if (DAT_14cb99c18 + iVar4 == 1) goto LAB_143f8a5d2;
LAB_143f8a44d:
      local_68 = (void *)0x0;
      local_60 = iVar4;
      if (iVar4 == 0) goto LAB_143f8a4f9;
      FUN_1446dd670(&local_68,iVar4,0);
      lVar5 = (longlong)iVar4;
      pvVar6 = pvVar7;
      goto LAB_143f8a4f2;
    }
    if (1 < iVar4) {
      lVar5 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)pvVar7 + lVar5);
        uVar9 = (ulonglong)uVar8;
        uVar10 = *(ushort *)(DAT_14cb99c10 + lVar5);
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_143f8a5d2;
LAB_143f8a41d:
        lVar5 = lVar5 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_143f8a41d;
      }
      if (uVar8 != uVar10) goto LAB_143f8a44d;
    }
LAB_143f8a5d2:
    FUN_1400b22c2(&local_68,&DAT_149e02088);
  }
  pvVar6 = local_68;
  local_78 = (void *)0x0;
  lVar5 = (longlong)local_60;
  local_70 = local_60;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_60,0);
    memcpy(local_78,pvVar6,lVar5 * 2);
  }
  FUN_143f848d0(lVar1,&local_78);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143f8a569:
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0 && (int)param_1[2] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(param_2 + 0x20),&local_58);
    pvVar7 = local_58;
  }
  if (pvVar7 != (void *)0x0) {
    FUN_1400020a8(pvVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8a5e8 FUN_143f8a5e8 body=125 status=ok
// SIG undefined FUN_143f8a5e8(void)

undefined8 * FUN_143f8a5e8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b526d30;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f8a639;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f8a639:
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8a67a FUN_143f8a67a body=203 status=ok
// SIG undefined FUN_143f8a67a(void)

void FUN_143f8a67a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b526cc0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b526d30;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_141509b10(puVar2 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143f8a746 FUN_143f8a746 body=203 status=ok
// SIG undefined FUN_143f8a746(void)

void FUN_143f8a746(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b526cc0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b526d30;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_141509b10(puVar2 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143f8a812 FUN_143f8a812 body=261 status=ok
// SIG undefined FUN_143f8a812(void)

void FUN_143f8a812(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b526cc0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b526d30;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  *(undefined4 *)&p_Var2[1].CriticalSection = 0;
  FUN_141509b10(p_Var2 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8a901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8a922 FUN_143f8a922 body=20 status=ok
// SIG undefined FUN_143f8a922(void)

undefined1 FUN_143f8a922(longlong param_1)

{
  FUN_143f8a936(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f8a936 FUN_143f8a936 body=908 status=ok
// SIG undefined FUN_143f8a936(void)

void FUN_143f8a936(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong **pplStack_60;
  longlong *local_58;
  longlong **pplStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  local_68 = (longlong *)0x0;
  pplStack_60 = (longlong **)0x0;
  FUN_1400b22c2(&local_58,*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x30));
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_68 = local_58;
  pplStack_60 = pplStack_50;
  if (*(int *)(param_2 + 0x1c) != 0) goto LAB_143f8ac69;
  pplStack_50 = &local_68;
  local_58 = param_1 + 1;
  FUN_140ac5c08(lVar2 + 0x170,&local_78,&local_58,0);
  plVar3 = local_68;
  if ((int)pplStack_60 == DAT_14cb99c28) {
    if (1 < (int)pplStack_60) {
      lVar4 = 0;
      while( true ) {
        uVar6 = *(ushort *)((longlong)local_68 + lVar4);
        uVar5 = (ulonglong)uVar6;
        uVar8 = *(ushort *)(DAT_14cb99c20 + lVar4);
        if (uVar6 != uVar8) break;
        if (uVar6 == 0) goto LAB_143f8ab38;
LAB_143f8aa12:
        lVar4 = lVar4 + 2;
      }
      if ((uVar8 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_143f8aa12;
      }
      if (uVar6 != uVar8) goto LAB_143f8aa41;
    }
LAB_143f8ab38:
    iVar1 = *(int *)(lVar2 + 0xb8);
    plVar3 = *(longlong **)(lVar2 + 0xb0);
LAB_143f8ab73:
    local_58 = (longlong *)0x0;
    lVar4 = (longlong)iVar1;
    pplStack_50 = (longlong **)CONCAT44(pplStack_50._4_4_,iVar1);
    if (lVar4 == 0) {
LAB_143f8abf6:
      local_58 = (longlong *)0x0;
      pplStack_50 = (longlong **)((ulonglong)pplStack_50 & 0xffffffff);
    }
    else {
      FUN_1446dd670(&local_58,iVar1,0);
LAB_143f8ab9d:
      memcpy(local_58,plVar3,lVar4 * 2);
    }
  }
  else {
    if (DAT_14cb99c28 + (int)pplStack_60 == 1) goto LAB_143f8ab38;
LAB_143f8aa41:
    if ((int)pplStack_60 == DAT_14cb99c38) {
      if (1 < (int)pplStack_60) {
        lVar4 = 0;
        while( true ) {
          uVar6 = *(ushort *)((longlong)local_68 + lVar4);
          uVar5 = (ulonglong)uVar6;
          uVar8 = *(ushort *)(DAT_14cb99c30 + lVar4);
          if (uVar6 != uVar8) break;
          if (uVar6 == 0) goto LAB_143f8ab5c;
LAB_143f8aa87:
          lVar4 = lVar4 + 2;
        }
        if ((uVar8 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar7 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_143f8aa87;
        }
        if (uVar6 != uVar8) goto LAB_143f8aab6;
      }
LAB_143f8ab5c:
      iVar1 = *(int *)(lVar2 + 0xe8);
      plVar3 = *(longlong **)(lVar2 + 0xe0);
      goto LAB_143f8ab73;
    }
    if (DAT_14cb99c38 + (int)pplStack_60 == 1) goto LAB_143f8ab5c;
LAB_143f8aab6:
    if ((int)pplStack_60 != DAT_14cb99c18) {
      if (DAT_14cb99c18 + (int)pplStack_60 == 1) goto LAB_143f8abab;
LAB_143f8abc3:
      local_58 = (longlong *)0x0;
      pplStack_50 = (longlong **)CONCAT44(pplStack_50._4_4_,(int)pplStack_60);
      if ((int)pplStack_60 == 0) goto LAB_143f8abf6;
      lVar4 = (longlong)(int)pplStack_60;
      FUN_1446dd670(&local_58,(ulonglong)pplStack_60 & 0xffffffff,0);
      goto LAB_143f8ab9d;
    }
    if (1 < (int)pplStack_60) {
      lVar4 = 0;
      while( true ) {
        uVar6 = *(ushort *)((longlong)local_68 + lVar4);
        uVar5 = (ulonglong)uVar6;
        uVar8 = *(ushort *)(DAT_14cb99c10 + lVar4);
        if (uVar6 != uVar8) break;
        if (uVar6 == 0) goto LAB_143f8abab;
LAB_143f8aafb:
        lVar4 = lVar4 + 2;
      }
      if ((uVar8 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_143f8aafb;
      }
      if (uVar6 != uVar8) goto LAB_143f8abc3;
    }
LAB_143f8abab:
    FUN_1400b22c2(&local_58,&DAT_149e02088);
  }
  plVar3 = local_58;
  lVar4 = (longlong)(int)pplStack_50;
  local_78 = (void *)0x0;
  local_70 = (int)pplStack_50;
  if (lVar4 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,(ulonglong)pplStack_50 & 0xffffffff,0);
    memcpy(local_78,plVar3,lVar4 * 2);
  }
  FUN_143f84b78(lVar2,param_1 + 1,&local_78);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f8ac69:
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0 && (int)param_1[4] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined4 *)(param_2 + 0x20),&local_68);
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f8acc4 FUN_143f8acc4 body=29 status=ok
// SIG undefined FUN_143f8acc4(void)

undefined8 FUN_143f8acc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8acf6 FUN_143f8acf6 body=93 status=ok
// SIG undefined FUN_143f8acf6(void)

void FUN_143f8acf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526da0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8ad54 FUN_143f8ad54 body=93 status=ok
// SIG undefined FUN_143f8ad54(void)

void FUN_143f8ad54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526da0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8adb2 FUN_143f8adb2 body=126 status=ok
// SIG undefined FUN_143f8adb2(void)

void FUN_143f8adb2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b526da0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8ae21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8ae3a FUN_143f8ae3a body=20 status=ok
// SIG undefined FUN_143f8ae3a(void)

undefined1 FUN_143f8ae3a(longlong param_1)

{
  FUN_143f85282(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143f8ae4e FUN_143f8ae4e body=29 status=ok
// SIG undefined FUN_143f8ae4e(void)

undefined8 FUN_143f8ae4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8ae80 FUN_143f8ae80 body=93 status=ok
// SIG undefined FUN_143f8ae80(void)

void FUN_143f8ae80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526e10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8aede FUN_143f8aede body=93 status=ok
// SIG undefined FUN_143f8aede(void)

void FUN_143f8aede(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526e10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8af3c FUN_143f8af3c body=126 status=ok
// SIG undefined FUN_143f8af3c(void)

void FUN_143f8af3c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b526e10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8afab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8afc4 FUN_143f8afc4 body=20 status=ok
// SIG undefined FUN_143f8afc4(void)

undefined1 FUN_143f8afc4(longlong param_1)

{
  FUN_143f86316(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143f8afd8 FUN_143f8afd8 body=29 status=ok
// SIG undefined FUN_143f8afd8(void)

undefined8 FUN_143f8afd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8b00a FUN_143f8b00a body=93 status=ok
// SIG undefined FUN_143f8b00a(void)

void FUN_143f8b00a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526e80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8b068 FUN_143f8b068 body=93 status=ok
// SIG undefined FUN_143f8b068(void)

void FUN_143f8b068(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526e80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8b0c6 FUN_143f8b0c6 body=126 status=ok
// SIG undefined FUN_143f8b0c6(void)

void FUN_143f8b0c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b526e80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8b135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8b14e FUN_143f8b14e body=20 status=ok
// SIG undefined FUN_143f8b14e(void)

undefined1 FUN_143f8b14e(longlong param_1)

{
  FUN_143f85282(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143f8b162 FUN_143f8b162 body=29 status=ok
// SIG undefined FUN_143f8b162(void)

undefined8 FUN_143f8b162(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8b194 FUN_143f8b194 body=93 status=ok
// SIG undefined FUN_143f8b194(void)

void FUN_143f8b194(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526ef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8b1f2 FUN_143f8b1f2 body=93 status=ok
// SIG undefined FUN_143f8b1f2(void)

void FUN_143f8b1f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526ef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8b250 FUN_143f8b250 body=126 status=ok
// SIG undefined FUN_143f8b250(void)

void FUN_143f8b250(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b526ef0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8b2bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8b2d8 FUN_143f8b2d8 body=20 status=ok
// SIG undefined FUN_143f8b2d8(void)

undefined1 FUN_143f8b2d8(longlong param_1)

{
  FUN_143f86316(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143f8b2ec FUN_143f8b2ec body=29 status=ok
// SIG undefined FUN_143f8b2ec(void)

undefined8 FUN_143f8b2ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8b31e FUN_143f8b31e body=93 status=ok
// SIG undefined FUN_143f8b31e(void)

void FUN_143f8b31e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526f70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8b37c FUN_143f8b37c body=93 status=ok
// SIG undefined FUN_143f8b37c(void)

void FUN_143f8b37c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526f70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8b3da FUN_143f8b3da body=126 status=ok
// SIG undefined FUN_143f8b3da(void)

void FUN_143f8b3da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526be0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b526f70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8b449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8b46a FUN_143f8b46a body=29 status=ok
// SIG undefined FUN_143f8b46a(void)

undefined1 FUN_143f8b46a(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x1c8) == '\0') {
    FUN_143f871b6();
  }
  return 1;
}



// FUNCTION 143f8b488 FUN_143f8b488 body=149 status=ok
// SIG undefined FUN_143f8b488(void)

undefined8 * FUN_143f8b488(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b526fe0;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8b4ff;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8b4ff:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8b532 FUN_143f8b532 body=146 status=ok
// SIG undefined FUN_143f8b532(void)

void FUN_143f8b532(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526fe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8b5c4 FUN_143f8b5c4 body=146 status=ok
// SIG undefined FUN_143f8b5c4(void)

void FUN_143f8b5c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b526fe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8b656 FUN_143f8b656 body=184 status=ok
// SIG undefined FUN_143f8b656(void)

void FUN_143f8b656(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b526fe0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8b6fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8b718 FUN_143f8b718 body=20 status=ok
// SIG undefined FUN_143f8b718(void)

undefined1 FUN_143f8b718(longlong param_1)

{
  FUN_143f8b72c(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f8b72c FUN_143f8b72c body=212 status=ok
// SIG undefined FUN_143f8b72c(void)

void FUN_143f8b72c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined1 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x1c8) == '\0') {
    if (*(int *)(param_2 + 0x1c) != 0) {
      if (*(char *)(lVar1 + 0xe0) != '\0') {
        *(undefined1 *)(lVar1 + 0xe0) = 0;
        local_38 = &PTR_FUN_14b525ad0;
        local_30 = 0;
        local_28 = lVar1;
        FUN_145a9f81e(lVar1 + 8);
      }
      if (*(char *)(lVar1 + 0xe1) != '\0') {
        *(undefined1 *)(lVar1 + 0xe1) = 0;
        local_38 = &PTR_FUN_14b525ad0;
        local_30 = 0;
        local_28 = lVar1;
        FUN_145a9f81e(lVar1 + 0x20);
      }
    }
    plVar2 = (longlong *)param_1[1];
    if (plVar2 != (longlong *)0x0 && (int)param_1[2] != 0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(param_2 + 0x20));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8b802 FUN_143f8b802 body=149 status=ok
// SIG undefined FUN_143f8b802(void)

undefined8 * FUN_143f8b802(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527050;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8b879;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8b879:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8b8ac FUN_143f8b8ac body=146 status=ok
// SIG undefined FUN_143f8b8ac(void)

void FUN_143f8b8ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527050;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8b93e FUN_143f8b93e body=146 status=ok
// SIG undefined FUN_143f8b93e(void)

void FUN_143f8b93e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527050;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8b9d0 FUN_143f8b9d0 body=184 status=ok
// SIG undefined FUN_143f8b9d0(void)

void FUN_143f8b9d0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527050;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8ba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8baba FUN_143f8baba body=56 status=ok
// SIG undefined FUN_143f8baba(void)

undefined8 FUN_143f8baba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x1c8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    }
  }
  return 1;
}



// FUNCTION 143f8baf2 FUN_143f8baf2 body=149 status=ok
// SIG undefined FUN_143f8baf2(void)

undefined8 * FUN_143f8baf2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b5270c0;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8bb69;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8bb69:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8bb9c FUN_143f8bb9c body=146 status=ok
// SIG undefined FUN_143f8bb9c(void)

void FUN_143f8bb9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5270c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8bc2e FUN_143f8bc2e body=146 status=ok
// SIG undefined FUN_143f8bc2e(void)

void FUN_143f8bc2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5270c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8bcc0 FUN_143f8bcc0 body=184 status=ok
// SIG undefined FUN_143f8bcc0(void)

void FUN_143f8bcc0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5270c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8bd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8bdaa FUN_143f8bdaa body=56 status=ok
// SIG undefined FUN_143f8bdaa(void)

undefined8 FUN_143f8bdaa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x1c8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    }
  }
  return 1;
}



// FUNCTION 143f8bde2 FUN_143f8bde2 body=149 status=ok
// SIG undefined FUN_143f8bde2(void)

undefined8 * FUN_143f8bde2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527130;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8be59;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8be59:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8be8c FUN_143f8be8c body=146 status=ok
// SIG undefined FUN_143f8be8c(void)

void FUN_143f8be8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8bf1e FUN_143f8bf1e body=146 status=ok
// SIG undefined FUN_143f8bf1e(void)

void FUN_143f8bf1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8bfb0 FUN_143f8bfb0 body=184 status=ok
// SIG undefined FUN_143f8bfb0(void)

void FUN_143f8bfb0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527130;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8c058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8c09a FUN_143f8c09a body=56 status=ok
// SIG undefined FUN_143f8c09a(void)

undefined8 FUN_143f8c09a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x1c8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    }
  }
  return 1;
}



// FUNCTION 143f8c0d2 FUN_143f8c0d2 body=149 status=ok
// SIG undefined FUN_143f8c0d2(void)

undefined8 * FUN_143f8c0d2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b5271a0;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8c149;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8c149:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8c17c FUN_143f8c17c body=146 status=ok
// SIG undefined FUN_143f8c17c(void)

void FUN_143f8c17c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5271a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8c20e FUN_143f8c20e body=146 status=ok
// SIG undefined FUN_143f8c20e(void)

void FUN_143f8c20e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5271a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8c2a0 FUN_143f8c2a0 body=184 status=ok
// SIG undefined FUN_143f8c2a0(void)

void FUN_143f8c2a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5271a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8c348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8c38a FUN_143f8c38a body=56 status=ok
// SIG undefined FUN_143f8c38a(void)

undefined8 FUN_143f8c38a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x1c8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    }
  }
  return 1;
}



// FUNCTION 143f8c3c2 FUN_143f8c3c2 body=149 status=ok
// SIG undefined FUN_143f8c3c2(void)

undefined8 * FUN_143f8c3c2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527210;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8c439;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8c439:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8c46c FUN_143f8c46c body=146 status=ok
// SIG undefined FUN_143f8c46c(void)

void FUN_143f8c46c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8c4fe FUN_143f8c4fe body=146 status=ok
// SIG undefined FUN_143f8c4fe(void)

void FUN_143f8c4fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8c590 FUN_143f8c590 body=184 status=ok
// SIG undefined FUN_143f8c590(void)

void FUN_143f8c590(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527210;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8c638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8c67a FUN_143f8c67a body=56 status=ok
// SIG undefined FUN_143f8c67a(void)

undefined8 FUN_143f8c67a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x1c8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    }
  }
  return 1;
}



// FUNCTION 143f8c6b2 FUN_143f8c6b2 body=149 status=ok
// SIG undefined FUN_143f8c6b2(void)

undefined8 * FUN_143f8c6b2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527280;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8c729;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8c729:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8c75c FUN_143f8c75c body=146 status=ok
// SIG undefined FUN_143f8c75c(void)

void FUN_143f8c75c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527280;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8c7ee FUN_143f8c7ee body=146 status=ok
// SIG undefined FUN_143f8c7ee(void)

void FUN_143f8c7ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527280;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8c880 FUN_143f8c880 body=184 status=ok
// SIG undefined FUN_143f8c880(void)

void FUN_143f8c880(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527280;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8c928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8c980 FUN_143f8c980 body=78 status=ok
// SIG undefined FUN_143f8c980(void)

undefined8 FUN_143f8c980(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x1c8) == '\0') {
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(bool *)(*(longlong *)(param_1 + 0x18) + 0x139) =
           *(int *)(*(longlong *)(param_2 + 0x30) + 0x38) != 0;
    }
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    }
  }
  return 1;
}



// FUNCTION 143f8c9ce FUN_143f8c9ce body=29 status=ok
// SIG undefined FUN_143f8c9ce(void)

undefined8 FUN_143f8c9ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8ca00 FUN_143f8ca00 body=93 status=ok
// SIG undefined FUN_143f8ca00(void)

void FUN_143f8ca00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8ca5e FUN_143f8ca5e body=93 status=ok
// SIG undefined FUN_143f8ca5e(void)

void FUN_143f8ca5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8cabc FUN_143f8cabc body=126 status=ok
// SIG undefined FUN_143f8cabc(void)

void FUN_143f8cabc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527310;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8cb2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8cb44 FUN_143f8cb44 body=20 status=ok
// SIG undefined FUN_143f8cb44(void)

undefined1 FUN_143f8cb44(longlong param_1)

{
  FUN_143f8cb58(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f8cb58 FUN_143f8cb58 body=373 status=ok
// SIG undefined FUN_143f8cb58(void)

void FUN_143f8cb58(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (*(int *)(param_2 + 0x1c) == 0) {
    FUN_1400b22c2(&local_40,*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xa8));
    if ((longlong **)(lVar1 + 0x480) == &local_40) {
      if (local_40 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0x480) != 0) {
        FUN_1400020a8();
      }
      *(longlong **)(lVar1 + 0x480) = local_40;
      local_40 = (longlong *)0x0;
      *(int *)(lVar1 + 0x488) = local_38;
      *(undefined4 *)(lVar1 + 0x48c) = local_34;
    }
  }
  if ((longlong)*(int *)(lVar1 + 0x498) != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x490);
    lVar3 = (longlong)*(int *)(lVar1 + 0x498) << 4;
    do {
      local_40 = (longlong *)0x0;
      local_38 = 0;
      FUN_141509b10(&local_40,lVar2);
      if (local_40 != (longlong *)0x0 && local_38 != 0) {
        (**(code **)(*local_40 + 0x60))(local_40,*(undefined4 *)(param_2 + 0x20),lVar1 + 0x480);
      }
      if (local_38 == 0) {
LAB_143f8cc8f:
        if (local_40 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_40 != (longlong *)0x0) {
        (**(code **)*local_40)(local_40,0);
        FUN_1446efa72(&local_40,0,0,0x10);
        local_38 = 0;
        goto LAB_143f8cc8f;
      }
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f8ccce FUN_143f8ccce body=29 status=ok
// SIG undefined FUN_143f8ccce(void)

undefined8 FUN_143f8ccce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8cd00 FUN_143f8cd00 body=93 status=ok
// SIG undefined FUN_143f8cd00(void)

void FUN_143f8cd00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8cd5e FUN_143f8cd5e body=93 status=ok
// SIG undefined FUN_143f8cd5e(void)

void FUN_143f8cd5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8cdbc FUN_143f8cdbc body=126 status=ok
// SIG undefined FUN_143f8cdbc(void)

void FUN_143f8cdbc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526be0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527380;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8ce2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8ce44 FUN_143f8ce44 body=20 status=ok
// SIG undefined FUN_143f8ce44(void)

undefined1 FUN_143f8ce44(longlong param_1)

{
  FUN_141230c3e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143f8ce58 FUN_143f8ce58 body=83 status=ok
// SIG undefined FUN_143f8ce58(void)

undefined8 * FUN_143f8ce58(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5273f0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8cec0 FUN_143f8cec0 body=118 status=ok
// SIG undefined FUN_143f8cec0(void)

void FUN_143f8cec0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5273f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8cf36 FUN_143f8cf36 body=118 status=ok
// SIG undefined FUN_143f8cf36(void)

void FUN_143f8cf36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5273f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8cfac FUN_143f8cfac body=156 status=ok
// SIG undefined FUN_143f8cfac(void)

void FUN_143f8cfac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5273f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8d038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8d04e FUN_143f8d04e body=52 status=ok
// SIG undefined FUN_143f8d04e(void)

undefined8 * FUN_143f8d04e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b527460;
  FUN_143f88a68(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8d096 FUN_143f8d096 body=64 status=ok
// SIG undefined FUN_143f8d096(void)

void FUN_143f8d096(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 0x15) {
    FUN_1446efa72(param_2,0,0x15,0x10);
    *(undefined4 *)(param_2 + 1) = 0x15;
  }
  FUN_143f8d1fe(*param_2,param_1);
  return;
}



// FUNCTION 143f8d0d6 FUN_143f8d0d6 body=64 status=ok
// SIG undefined FUN_143f8d0d6(void)

void FUN_143f8d0d6(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 0x15) {
    FUN_1446efa72(param_2,0,0x15,0x10);
    *(undefined4 *)(param_2 + 1) = 0x15;
  }
  FUN_143f8d1fe(*param_2,param_1);
  return;
}



// FUNCTION 143f8d116 FUN_143f8d116 body=98 status=ok
// SIG undefined FUN_143f8d116(void)

void FUN_143f8d116(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x15) {
    FUN_1446efa72(param_2 + 1,0,0x15,0x10);
    param_2[1].LockCount = 0x15;
  }
  FUN_143f8d1fe(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8d169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8d178 FUN_143f8d178 body=65 status=ok
// SIG undefined FUN_143f8d178(void)

void FUN_143f8d178(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f8d38e(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8d1ba FUN_143f8d1ba body=67 status=ok
// SIG undefined FUN_143f8d1ba(void)

undefined8 FUN_143f8d1ba(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f8d38e(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8d1fe FUN_143f8d1fe body=400 status=ok
// SIG undefined FUN_143f8d1fe(void)

undefined8 * FUN_143f8d1fe(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_14b4f7870;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14b527460;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_148aeb398(param_1 + 7,param_2 + 0x38);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  FUN_148aeb398(param_1 + 0x11,param_2 + 0x88);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_148aeb398(param_1 + 0x1b,param_2 + 0xd8);
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  FUN_140146ccc(param_1 + 0x25,param_2 + 0x128);
  param_1[0x27] = *(undefined8 *)(param_2 + 0x138);
  lVar2 = *(longlong *)(param_2 + 0x140);
  param_1[0x28] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 143f8d38e FUN_143f8d38e body=790 status=ok
// SIG undefined FUN_143f8d38e(void)

void FUN_143f8d38e(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  if (*param_2 != 0) {
    if (*(char *)(lVar1 + 0x2d0) != '\0') {
      *(undefined1 *)(lVar1 + 0x2d0) = 0;
      FUN_14584d7f0(lVar1 + 0x38,0);
    }
    if (param_1[0x22] != 0 && (int)param_1[0x23] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
    }
    goto LAB_143f8d3e1;
  }
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = lVar1;
  FUN_140146ccc(&local_60,param_1 + 0x22);
  local_50 = param_1[0x24];
  local_48 = param_1[0x25];
  if (local_48 == 0) {
LAB_143f8d491:
    FUN_1446efa72(&local_40,0,4,0x10);
    local_38 = 4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
    if (local_38 != 4) goto LAB_143f8d491;
  }
  *local_40 = &PTR_LAB_14b526cc0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_40[2] = lVar6;
  *local_40 = &PTR_FUN_14b5274d0;
  local_40[3] = local_68;
  local_40[4] = local_60;
  local_60 = 0;
  *(undefined4 *)(local_40 + 5) = local_58;
  local_58 = 0;
  local_40[6] = local_50;
  local_40[7] = local_48;
  *(undefined1 *)(lVar1 + 0x368) = 1;
  if (DAT_14cb99c48 == (undefined8 *)0x0) {
    DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *DAT_14cb99c48 = 0;
    DAT_14cb99c48[1] = 0;
    DAT_14cb99c48[2] = 2;
  }
  local_68 = 0;
  local_60 = local_60 & 0xffffffff00000000;
  FUN_1412f566c(&local_68,&local_40);
  local_78 = param_1 + 0x18;
  local_80 = param_1 + 0xe;
  local_88 = param_1 + 4;
  local_90 = (undefined1)param_1[3];
  local_98 = *(undefined1 *)(lVar1 + 0x368);
  bVar5 = *(char *)(lVar1 + 0x301) - 1;
  uVar7 = 100;
  if (bVar5 < 4) {
    uVar7 = *(undefined4 *)(&DAT_14b527ff8 + (ulonglong)bVar5 * 4);
  }
  local_70 = &local_68;
  iVar4 = FUN_14658f436(param_3,lVar1 + 0xc0,param_1 + 1,uVar7);
  if (iVar4 != 0) {
    if (*(char *)(lVar1 + 0x2d0) != '\0') {
      *(undefined1 *)(lVar1 + 0x2d0) = 0;
      FUN_14584d7f0(lVar1 + 0x38,0);
    }
    plVar2 = (longlong *)param_1[0x22];
    if (plVar2 != (longlong *)0x0 && (int)param_1[0x23] != 0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,0);
    }
  }
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_143f8d3e1;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f8d3e1:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8d6be FUN_143f8d6be body=149 status=ok
// SIG undefined FUN_143f8d6be(void)

undefined8 * FUN_143f8d6be(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b5274d0;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8d735;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8d735:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8d768 FUN_143f8d768 body=146 status=ok
// SIG undefined FUN_143f8d768(void)

void FUN_143f8d768(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5274d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8d7fa FUN_143f8d7fa body=146 status=ok
// SIG undefined FUN_143f8d7fa(void)

void FUN_143f8d7fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5274d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8d88c FUN_143f8d88c body=184 status=ok
// SIG undefined FUN_143f8d88c(void)

void FUN_143f8d88c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5274d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8d934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8d94e FUN_143f8d94e body=20 status=ok
// SIG undefined FUN_143f8d94e(void)

undefined1 FUN_143f8d94e(longlong param_1)

{
  FUN_143f8d962(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f8d962 FUN_143f8d962 body=105 status=ok
// SIG undefined FUN_143f8d962(void)

void FUN_143f8d962(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  
  lVar1 = *param_1;
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (*(char *)(lVar1 + 0x2d0) != '\x01') goto LAB_143f8d989;
    uVar3 = 2;
  }
  else {
    if (*(char *)(lVar1 + 0x2d0) == '\0') goto LAB_143f8d989;
    uVar3 = 0;
  }
  *(undefined1 *)(lVar1 + 0x2d0) = uVar3;
  FUN_14584d7f0(lVar1 + 0x38);
LAB_143f8d989:
  plVar2 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0 || (int)param_1[2] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143f8d9b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(param_2 + 0x20));
  return;
}



// FUNCTION 143f8d9cc FUN_143f8d9cc body=163 status=ok
// SIG undefined FUN_143f8d9cc(void)

undefined8 * FUN_143f8d9cc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527540;
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8da43;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8da43:
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8da84 FUN_143f8da84 body=226 status=ok
// SIG undefined FUN_143f8da84(void)

void FUN_143f8da84(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4f7870;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b527540;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_140146ccc(puVar2 + 6,param_1 + 0x30);
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  lVar3 = *(longlong *)(param_1 + 0x48);
  puVar2[9] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8db66 FUN_143f8db66 body=226 status=ok
// SIG undefined FUN_143f8db66(void)

void FUN_143f8db66(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4f7870;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b527540;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_140146ccc(puVar2 + 6,param_1 + 0x30);
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  lVar3 = *(longlong *)(param_1 + 0x48);
  puVar2[9] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8dc48 FUN_143f8dc48 body=285 status=ok
// SIG undefined FUN_143f8dc48(void)

void FUN_143f8dc48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4f7870;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b527540;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  *(undefined4 *)&p_Var2[1].CriticalSection = 0;
  FUN_140146ccc(p_Var2 + 1,param_1 + 0x30);
  p_Var2[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x48);
  p_Var2[1].ProcessLocksList.Blink = p_Var3;
  if (p_Var3 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var3->Blink = *(int *)&p_Var3->Blink + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8dd4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8dd66 FUN_143f8dd66 body=65 status=ok
// SIG undefined FUN_143f8dd66(void)

void FUN_143f8dd66(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f8ddec(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8dda8 FUN_143f8dda8 body=67 status=ok
// SIG undefined FUN_143f8dda8(void)

undefined8 FUN_143f8dda8(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f8ddec(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8ddec FUN_143f8ddec body=1079 status=ok
// SIG undefined FUN_143f8ddec(void)

void FUN_143f8ddec(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  longlong *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 *local_138;
  int local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = *param_1;
  if (*param_2 != 0) {
    if (*(char *)(lVar1 + 0x2d0) != '\0') {
      *(undefined1 *)(lVar1 + 0x2d0) = 0;
      FUN_14584d7f0(lVar1 + 0x38,0);
    }
    if (param_1[3] != 0 && (int)param_1[4] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_198);
    }
    goto LAB_143f8de3b;
  }
  local_138 = (undefined8 *)0x0;
  local_130 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_88 = lVar1;
  FUN_140146ccc(&uStack_80,param_1 + 3);
  local_70 = param_1[5];
  local_68 = param_1[6];
  if (local_68 == 0) {
LAB_143f8dee3:
    FUN_1446efa72(&local_138,0,4,0x10);
    local_130 = 4;
  }
  else {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
    if (local_130 != 4) goto LAB_143f8dee3;
  }
  *local_138 = &PTR_LAB_14b526cc0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_138[2] = lVar6;
  *local_138 = &PTR_FUN_14b5275b0;
  local_138[3] = local_88;
  local_138[4] = uStack_80;
  uStack_80 = 0;
  *(undefined4 *)(local_138 + 5) = local_78;
  local_78 = 0;
  local_138[6] = local_70;
  local_138[7] = local_68;
  *(undefined1 *)(lVar1 + 0x368) = 0;
  if (DAT_14cb99c48 == (undefined8 *)0x0) {
    DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *DAT_14cb99c48 = 0;
    DAT_14cb99c48[1] = 0;
    DAT_14cb99c48[2] = 2;
  }
  local_148 = 0;
  local_140 = 0;
  FUN_1412f566c(&local_148,&local_138);
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_178 = *(undefined1 *)(lVar1 + 0x368);
  bVar5 = *(char *)(lVar1 + 0x301) - 1;
  uVar7 = 100;
  if (bVar5 < 4) {
    uVar7 = *(undefined4 *)(&DAT_14b527ff8 + (ulonglong)bVar5 * 4);
  }
  local_158 = &local_88;
  local_160 = &local_d8;
  local_168 = &local_128;
  local_170 = 0;
  local_150 = &local_148;
  iVar4 = FUN_14658f436(param_3,lVar1 + 0xc0,param_1 + 1,uVar7);
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(&local_128);
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(&local_d8);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(&local_88);
  if (iVar4 != 0) {
    if (*(char *)(lVar1 + 0x2d0) != '\0') {
      *(undefined1 *)(lVar1 + 0x2d0) = 0;
      FUN_14584d7f0(lVar1 + 0x38,0);
    }
    plVar2 = (longlong *)param_1[3];
    if (plVar2 != (longlong *)0x0 && (int)param_1[4] != 0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,0);
    }
  }
  if (local_130 != 0) {
    if (local_138 == (undefined8 *)0x0) goto LAB_143f8de3b;
    (**(code **)*local_138)(local_138,0);
    FUN_1446efa72(&local_138,0,0,0x10);
    local_130 = 0;
  }
  if (local_138 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f8de3b:
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8e23e FUN_143f8e23e body=149 status=ok
// SIG undefined FUN_143f8e23e(void)

undefined8 * FUN_143f8e23e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b5275b0;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8e2b5;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8e2b5:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8e2e8 FUN_143f8e2e8 body=146 status=ok
// SIG undefined FUN_143f8e2e8(void)

void FUN_143f8e2e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5275b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8e37a FUN_143f8e37a body=146 status=ok
// SIG undefined FUN_143f8e37a(void)

void FUN_143f8e37a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5275b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8e40c FUN_143f8e40c body=184 status=ok
// SIG undefined FUN_143f8e40c(void)

void FUN_143f8e40c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5275b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8e4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8e4ce FUN_143f8e4ce body=20 status=ok
// SIG undefined FUN_143f8e4ce(void)

undefined1 FUN_143f8e4ce(longlong param_1)

{
  FUN_143f8e4e2(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f8e4e2 FUN_143f8e4e2 body=105 status=ok
// SIG undefined FUN_143f8e4e2(void)

void FUN_143f8e4e2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  
  lVar1 = *param_1;
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (*(char *)(lVar1 + 0x2d0) != '\x01') goto LAB_143f8e509;
    uVar3 = 2;
  }
  else {
    if (*(char *)(lVar1 + 0x2d0) == '\0') goto LAB_143f8e509;
    uVar3 = 0;
  }
  *(undefined1 *)(lVar1 + 0x2d0) = uVar3;
  FUN_14584d7f0(lVar1 + 0x38);
LAB_143f8e509:
  plVar2 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0 || (int)param_1[2] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143f8e535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(param_2 + 0x20));
  return;
}



// FUNCTION 143f8e54c FUN_143f8e54c body=29 status=ok
// SIG undefined FUN_143f8e54c(void)

undefined8 FUN_143f8e54c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8e57e FUN_143f8e57e body=93 status=ok
// SIG undefined FUN_143f8e57e(void)

void FUN_143f8e57e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5276b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527640;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8e5dc FUN_143f8e5dc body=93 status=ok
// SIG undefined FUN_143f8e5dc(void)

void FUN_143f8e5dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5276b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527640;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f8e63a FUN_143f8e63a body=126 status=ok
// SIG undefined FUN_143f8e63a(void)

void FUN_143f8e63a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5276b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527640;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8e6a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8e6c2 FUN_143f8e6c2 body=20 status=ok
// SIG undefined FUN_143f8e6c2(void)

undefined1 FUN_143f8e6c2(longlong param_1)

{
  FUN_145985468(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143f8e6d6 FUN_143f8e6d6 body=158 status=ok
// SIG undefined FUN_143f8e6d6(void)

undefined8 * FUN_143f8e6d6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527720;
  FUN_140d5fbf2(param_1 + 8);
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8e756;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8e756:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8e788 FUN_143f8e788 body=171 status=ok
// SIG undefined FUN_143f8e788(void)

void FUN_143f8e788(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 0xc) {
    FUN_1446efa72(param_2,0,0xc,0x10);
    *(undefined4 *)(param_2 + 1) = 0xc;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527720;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_140d600ee(puVar1 + 8,param_1 + 0x40);
  *(undefined1 *)(puVar1 + 0x16) = *(undefined1 *)(param_1 + 0xb0);
  return;
}



// FUNCTION 143f8e834 FUN_143f8e834 body=171 status=ok
// SIG undefined FUN_143f8e834(void)

void FUN_143f8e834(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 0xc) {
    FUN_1446efa72(param_2,0,0xc,0x10);
    *(undefined4 *)(param_2 + 1) = 0xc;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527720;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_140d600ee(puVar1 + 8,param_1 + 0x40);
  *(undefined1 *)(puVar1 + 0x16) = *(undefined1 *)(param_1 + 0xb0);
  return;
}



// FUNCTION 143f8e8e0 FUN_143f8e8e0 body=209 status=ok
// SIG undefined FUN_143f8e8e0(void)

void FUN_143f8e8e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0xc) {
    FUN_1446efa72(param_2 + 1,0,0xc,0x10);
    param_2[1].LockCount = 0xc;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527720;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  FUN_140d600ee(&p_Var1[1].ProcessLocksList,param_1 + 0x40);
  *(undefined1 *)&p_Var1[3].EntryCount = *(undefined1 *)(param_1 + 0xb0);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8e9a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8e9bc FUN_143f8e9bc body=20 status=ok
// SIG undefined FUN_143f8e9bc(void)

undefined1 FUN_143f8e9bc(longlong param_1)

{
  FUN_143f8e9d0(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f8e9d0 FUN_143f8e9d0 body=551 status=ok
// SIG undefined FUN_143f8e9d0(void)

void FUN_143f8e9d0(longlong *param_1,longlong param_2)

{
  void *_Src;
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [112];
  longlong local_70 [2];
  longlong local_60;
  undefined8 local_58;
  int iStack_54;
  void *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_2 + 0x1c) == 0) {
    lVar5 = *param_1;
    FUN_1400b22c2(local_70,*(undefined8 *)(param_2 + 0x40));
    iVar4 = *(int *)(lVar5 + 0x108);
    if ((longlong)iVar4 < 2) {
      local_50 = (void *)0x0;
      _Src = *(void **)(lVar5 + 0x100);
      local_48 = CONCAT44(local_48._4_4_,iVar4);
      if (iVar4 == 0) {
        local_48 = 0;
      }
      else {
        FUN_1446dd670(&local_50,iVar4,0);
        memcpy(local_50,_Src,(longlong)iVar4 * 2);
      }
    }
    else {
      local_50 = (void *)0x0;
      local_48 = 0xffffffff00000000;
    }
    local_60 = 0;
    local_58 = 0xffffffff00000000;
    FUN_140d5f844(local_e0,local_70,&local_60,&local_50);
    if ((iStack_54 != -1) && (local_60 != 0)) {
      FUN_1400020a8();
    }
    if ((local_48._4_4_ != -1) && (local_50 != (void *)0x0)) {
      FUN_1400020a8();
    }
    plVar1 = param_1 + 5;
    cVar2 = FUN_1414b3116(local_e0,plVar1);
    if (cVar2 != '\0') {
      lVar5 = lVar5 + 0x280;
      uVar3 = FUN_1414b3267(plVar1);
      iVar4 = FUN_14659020e(lVar5,uVar3,plVar1);
      if ((iVar4 == -1) && ((char)param_1[0x13] == '\x01')) {
        FUN_1461f364e(lVar5,&local_50,plVar1);
      }
      else {
        uVar3 = FUN_1414b3267(plVar1);
        iVar4 = FUN_14659020e(lVar5,uVar3,plVar1);
        if ((iVar4 != -1) && ((char)param_1[0x13] == '\0')) {
          FUN_14613a1fe(lVar5,plVar1);
        }
      }
    }
    FUN_140d5fbf2(local_e0);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0 && (int)param_1[2] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8ebf8 FUN_143f8ebf8 body=188 status=ok
// SIG undefined FUN_143f8ebf8(void)

undefined8 * FUN_143f8ebf8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527790;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145af2b28(param_1 + 8);
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8ec96;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8ec96:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8ecc8 FUN_143f8ecc8 body=217 status=ok
// SIG undefined FUN_143f8ecc8(void)

void FUN_143f8ecc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 10) {
    FUN_1446efa72(param_2,0,10,0x10);
    *(undefined4 *)(param_2 + 1) = 10;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  FUN_148aeb398(puVar1 + 8,param_1 + 0x40);
  *(undefined1 *)(puVar1 + 0x12) = *(undefined1 *)(param_1 + 0x90);
  return;
}



// FUNCTION 143f8eda2 FUN_143f8eda2 body=217 status=ok
// SIG undefined FUN_143f8eda2(void)

void FUN_143f8eda2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 10) {
    FUN_1446efa72(param_2,0,10,0x10);
    *(undefined4 *)(param_2 + 1) = 10;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  FUN_148aeb398(puVar1 + 8,param_1 + 0x40);
  *(undefined1 *)(puVar1 + 0x12) = *(undefined1 *)(param_1 + 0x90);
  return;
}



// FUNCTION 143f8ee7c FUN_143f8ee7c body=255 status=ok
// SIG undefined FUN_143f8ee7c(void)

void FUN_143f8ee7c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 10) {
    FUN_1446efa72(param_2 + 1,0,10,0x10);
    param_2[1].LockCount = 10;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527790;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  p_Var1[2].Type = 0;
  p_Var1[2].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[2].field_0x4 = 0;
  *(undefined4 *)&p_Var1[2].CriticalSection = 0;
  p_Var1[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  p_Var1[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
  *(undefined8 *)((longlong)&p_Var1[2].CriticalSection + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&p_Var1[2].ProcessLocksList.Flink + 4) = 0;
  p_Var1[2].EntryCount = 0;
  p_Var1[2].ContentionCount = 0;
  p_Var1[2].Flags = 0;
  FUN_148aeb398(&p_Var1[1].ProcessLocksList,param_1 + 0x40);
  *(undefined1 *)&p_Var1[3].Type = *(undefined1 *)(param_1 + 0x90);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8ef6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8ef86 FUN_143f8ef86 body=20 status=ok
// SIG undefined FUN_143f8ef86(void)

undefined1 FUN_143f8ef86(longlong param_1)

{
  FUN_143f8ef9a(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f8ef9a FUN_143f8ef9a body=1743 status=ok
// SIG undefined FUN_143f8ef9a(void)

void FUN_143f8ef9a(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  size_t sVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined4 local_210;
  longlong local_208;
  longlong local_200;
  uint *local_1f8;
  undefined1 local_1ec [4];
  wchar_t *local_1e8;
  int local_1e0;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168 [18];
  longlong local_d8;
  undefined8 local_d0;
  int iStack_cc;
  void *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(int *)(param_2 + 0x1c) == 0) {
    lVar19 = *param_1;
    plVar2 = local_168 + 0x10;
    local_200 = param_2;
    FUN_1400b22c2(plVar2,*(undefined8 *)(param_2 + 0x40));
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_168[0xe] = 0;
    local_168[0xf] = 0;
    local_168[0xc] = 0;
    local_168[0xd] = 0;
    local_168[10] = 0;
    local_168[0xb] = 0;
    local_168[8] = 0;
    local_168[9] = 0;
    local_168[6] = 0;
    local_168[7] = 0;
    local_168[4] = 0;
    local_168[5] = 0;
    local_168[2] = 0;
    local_168[3] = 0;
    while( true ) {
      FUN_1400b22c2(&local_1e8,&DAT_149dfc0af);
      pwVar13 = local_1e8;
      if (local_1e0 == 0) {
        pwVar13 = L"";
      }
      if (pwVar13 == (wchar_t *)0x0) {
        bVar20 = false;
      }
      else {
        sVar7 = wcslen(pwVar13);
        local_210 = 0xffffffff;
        local_218 = 0;
        iVar4 = FUN_1447ee042(plVar2,pwVar13,sVar7 & 0xffffffff,1);
        bVar20 = iVar4 != -1;
      }
      if (local_1e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar20) break;
      local_168[0] = 0;
      local_168[1] = 0;
      local_178 = 0;
      uStack_170 = 0;
      FUN_1400b22c2(&local_1e8,&DAT_149dfc0af);
      local_210 = 0;
      local_218 = 1;
      FUN_1407cdbc6(plVar2,&local_1e8,local_168,&local_178);
      if (local_1e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      iVar4 = *(int *)(lVar19 + 0x108);
      local_c8 = (void *)0x0;
      if ((longlong)iVar4 < 2) {
        pvVar3 = *(void **)(lVar19 + 0x100);
        local_c0 = CONCAT44(local_c0._4_4_,iVar4);
        if (iVar4 == 0) {
          local_c0 = 0;
        }
        else {
          FUN_1446dd670(&local_c8,iVar4,0);
          memcpy(local_c8,pvVar3,(longlong)iVar4 * 2);
        }
      }
      else {
        local_c0 = 0xffffffff00000000;
      }
      local_d8 = 0;
      local_d0 = 0xffffffff00000000;
      FUN_140d5f844(&local_1e8,local_168,&local_d8,&local_c8);
      FUN_145960ee8(local_168 + 2,&local_1e8);
      FUN_140d5fbf2(&local_1e8);
      if ((iStack_cc != -1) && (local_d8 != 0)) {
        FUN_1400020a8();
      }
      if ((local_c0._4_4_ != -1) && (local_c8 != (void *)0x0)) {
        FUN_1400020a8();
      }
      FUN_1461f364e(&local_b8,&local_1e8,local_168 + 2);
      uVar12 = 0;
      uVar17 = (int)uStack_170 - 1;
      if ((int)uStack_170 == 0) {
        uVar17 = uVar12;
      }
      FUN_1402980a2(plVar2,local_178,uVar17);
      FUN_1400b22c2(&local_1e8,&DAT_149dfc0af);
      pwVar13 = local_1e8;
      if (local_1e0 == 0) {
        pwVar13 = L"";
      }
      if (pwVar13 != (wchar_t *)0x0) {
        sVar7 = wcslen(pwVar13);
        local_210 = 0xffffffff;
        local_218 = 0;
        iVar4 = FUN_1447ee042(plVar2,pwVar13,sVar7 & 0xffffffff,1);
        uVar12 = (uint)(iVar4 != -1);
      }
      if (local_1e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if ((char)uVar12 == '\0') {
        iVar4 = *(int *)(lVar19 + 0x108);
        local_c8 = (void *)0x0;
        if ((longlong)iVar4 < 2) {
          pvVar3 = *(void **)(lVar19 + 0x100);
          local_c0 = CONCAT44(local_c0._4_4_,iVar4);
          if (iVar4 == 0) {
            local_c0 = 0;
          }
          else {
            FUN_1446dd670(&local_c8,iVar4,0);
            memcpy(local_c8,pvVar3,(longlong)iVar4 * 2);
          }
        }
        else {
          local_c0 = 0xffffffff00000000;
        }
        local_d8 = 0;
        local_d0 = 0xffffffff00000000;
        FUN_140d5f844(&local_1e8,&local_178,&local_d8,&local_c8);
        FUN_148aeb4e6(&local_b8,local_1ec,&local_1e8);
        FUN_140d5fbf2(&local_1e8);
        if ((iStack_cc != -1) && (local_d8 != 0)) {
          FUN_1400020a8();
        }
        if ((local_c0._4_4_ != -1) && (local_c8 != (void *)0x0)) {
          FUN_1400020a8();
        }
      }
      if (local_178 != 0) {
        FUN_1400020a8();
      }
      if (local_168[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_1f8 = (uint *)(param_1 + 7);
    iVar4 = (int)param_1[10];
    local_208 = lVar19;
    if (iVar4 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar18 = 0;
      iVar6 = 0;
    }
    else {
      puVar8 = (uint *)param_1[9];
      if ((uint *)param_1[9] == (uint *)0x0) {
        puVar8 = local_1f8;
      }
      uVar17 = *puVar8;
      if (uVar17 == 0) {
        iVar18 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar18 = iVar4 + -1;
        }
        uVar14 = 0;
        uVar11 = (ulonglong)(uint)(iVar18 >> 5);
        if (iVar18 >> 5 < 1) {
          uVar11 = uVar14;
        }
        iVar18 = 0;
        do {
          if (uVar11 == uVar14) goto LAB_143f8f4c7;
          iVar18 = iVar18 + 0x20;
          uVar17 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar14 = 0;
        iVar18 = 0;
      }
      uVar16 = (ulonglong)(-uVar17 & uVar17);
      uVar11 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar6 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar6) {
        iVar6 = iVar4;
      }
    }
    if (iVar6 != iVar4) {
      local_208 = lVar19 + 0x280;
      uVar17 = 0xffffffff;
      do {
        lVar19 = (longlong)iVar6 * 0x78 + param_1[5];
        uVar5 = FUN_1414b3267(lVar19);
        iVar6 = FUN_14659020e(&local_b8,uVar5,lVar19);
        if (iVar6 != -1) {
          iVar6 = FUN_14659020e(local_208,uVar5,lVar19);
          if ((iVar6 == -1) && ((char)param_1[0xf] == '\x01')) {
            FUN_1461f364e(local_208,&local_1e8,lVar19);
          }
          else {
            iVar6 = FUN_14659020e(local_208,uVar5,lVar19);
            if ((iVar6 != -1) && ((char)param_1[0xf] == '\0')) {
              FUN_14613a1fe(local_208,lVar19);
            }
          }
        }
        uVar17 = uVar17 & ~(uint)uVar16;
        puVar8 = (uint *)param_1[9];
        if ((uint *)param_1[9] == (uint *)0x0) {
          puVar8 = local_1f8;
        }
        iVar1 = (int)param_1[10];
        iVar6 = (int)uVar14;
        lVar19 = (longlong)iVar6;
        uVar12 = puVar8[lVar19] & uVar17;
        if (uVar12 == 0) {
          iVar9 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar9 = iVar1 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar18 = iVar18 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar15 = 0;
            do {
              uVar12 = puVar8[lVar19 + lVar15 + 1];
              if (uVar12 != 0) {
                uVar14 = (ulonglong)(iVar6 + (int)lVar15 + 1);
                uVar17 = 0xffffffff;
                goto LAB_143f8f622;
              }
              iVar18 = iVar18 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar10 - lVar19 != lVar15);
            uVar17 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar14 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar1;
        }
        else {
LAB_143f8f622:
          uVar16 = (ulonglong)(-uVar12 & uVar12);
          uVar11 = uVar16 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar6 = (iVar18 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar1 <= iVar6) {
            iVar6 = iVar1;
          }
        }
      } while (iVar6 != iVar4);
    }
LAB_143f8f4c7:
    FUN_140d5fbf2(local_168 + 2);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_145af2b28(&local_b8);
    param_2 = local_200;
    if (local_168[0x10] != 0) {
      FUN_1400020a8();
      param_2 = local_200;
    }
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0 && (int)param_1[2] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(param_2 + 0x20));
  }
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f8f66a FUN_143f8f66a body=149 status=ok
// SIG undefined FUN_143f8f66a(void)

undefined8 * FUN_143f8f66a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527800;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8f6e1;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8f6e1:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8f714 FUN_143f8f714 body=146 status=ok
// SIG undefined FUN_143f8f714(void)

void FUN_143f8f714(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527800;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8f7a6 FUN_143f8f7a6 body=146 status=ok
// SIG undefined FUN_143f8f7a6(void)

void FUN_143f8f7a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527800;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8f838 FUN_143f8f838 body=184 status=ok
// SIG undefined FUN_143f8f838(void)

void FUN_143f8f838(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527800;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8f8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8f8fa FUN_143f8f8fa body=20 status=ok
// SIG undefined FUN_143f8f8fa(void)

undefined1 FUN_143f8f8fa(longlong param_1)

{
  FUN_143f8f90e(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f8f90e FUN_143f8f90e body=80 status=ok
// SIG undefined FUN_143f8f90e(void)

void FUN_143f8f90e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    FUN_14584d8f8(*param_1 + 0x280);
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)0x0 || (int)param_1[2] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143f8f94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
  return;
}



// FUNCTION 143f8f95e FUN_143f8f95e body=149 status=ok
// SIG undefined FUN_143f8f95e(void)

undefined8 * FUN_143f8f95e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527870;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8f9d5;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8f9d5:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8fa08 FUN_143f8fa08 body=146 status=ok
// SIG undefined FUN_143f8fa08(void)

void FUN_143f8fa08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527870;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8fa9a FUN_143f8fa9a body=146 status=ok
// SIG undefined FUN_143f8fa9a(void)

void FUN_143f8fa9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527870;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8fb2c FUN_143f8fb2c body=184 status=ok
// SIG undefined FUN_143f8fb2c(void)

void FUN_143f8fb2c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527870;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8fbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8fc0a FUN_143f8fc0a body=43 status=ok
// SIG undefined FUN_143f8fc0a(void)

undefined8 FUN_143f8fc0a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f8fc36 FUN_143f8fc36 body=149 status=ok
// SIG undefined FUN_143f8fc36(void)

undefined8 * FUN_143f8fc36(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b5278e0;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8fcad;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8fcad:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8fce0 FUN_143f8fce0 body=146 status=ok
// SIG undefined FUN_143f8fce0(void)

void FUN_143f8fce0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5278e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8fd72 FUN_143f8fd72 body=146 status=ok
// SIG undefined FUN_143f8fd72(void)

void FUN_143f8fd72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5278e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f8fe04 FUN_143f8fe04 body=184 status=ok
// SIG undefined FUN_143f8fe04(void)

void FUN_143f8fe04(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5278e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f8feac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f8fee2 FUN_143f8fee2 body=43 status=ok
// SIG undefined FUN_143f8fee2(void)

undefined8 FUN_143f8fee2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f8ff0e FUN_143f8ff0e body=149 status=ok
// SIG undefined FUN_143f8ff0e(void)

undefined8 * FUN_143f8ff0e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527950;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f8ff85;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f8ff85:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f8ffb8 FUN_143f8ffb8 body=146 status=ok
// SIG undefined FUN_143f8ffb8(void)

void FUN_143f8ffb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f9004a FUN_143f9004a body=146 status=ok
// SIG undefined FUN_143f9004a(void)

void FUN_143f9004a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f900dc FUN_143f900dc body=184 status=ok
// SIG undefined FUN_143f900dc(void)

void FUN_143f900dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527950;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f90184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f901ba FUN_143f901ba body=43 status=ok
// SIG undefined FUN_143f901ba(void)

undefined8 FUN_143f901ba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f901e6 FUN_143f901e6 body=149 status=ok
// SIG undefined FUN_143f901e6(void)

undefined8 * FUN_143f901e6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b5279c0;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f9025d;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f9025d:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f90290 FUN_143f90290 body=146 status=ok
// SIG undefined FUN_143f90290(void)

void FUN_143f90290(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5279c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f90322 FUN_143f90322 body=146 status=ok
// SIG undefined FUN_143f90322(void)

void FUN_143f90322(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5279c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f903b4 FUN_143f903b4 body=184 status=ok
// SIG undefined FUN_143f903b4(void)

void FUN_143f903b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5279c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f9045c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f90492 FUN_143f90492 body=43 status=ok
// SIG undefined FUN_143f90492(void)

undefined8 FUN_143f90492(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f904be FUN_143f904be body=149 status=ok
// SIG undefined FUN_143f904be(void)

undefined8 * FUN_143f904be(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527a30;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f90535;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f90535:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f90568 FUN_143f90568 body=146 status=ok
// SIG undefined FUN_143f90568(void)

void FUN_143f90568(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f905fa FUN_143f905fa body=146 status=ok
// SIG undefined FUN_143f905fa(void)

void FUN_143f905fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f9068c FUN_143f9068c body=184 status=ok
// SIG undefined FUN_143f9068c(void)

void FUN_143f9068c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527a30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f90734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f9076a FUN_143f9076a body=43 status=ok
// SIG undefined FUN_143f9076a(void)

undefined8 FUN_143f9076a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f90796 FUN_143f90796 body=149 status=ok
// SIG undefined FUN_143f90796(void)

undefined8 * FUN_143f90796(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527ac0;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f9080d;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f9080d:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f90840 FUN_143f90840 body=146 status=ok
// SIG undefined FUN_143f90840(void)

void FUN_143f90840(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527ac0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f908d2 FUN_143f908d2 body=146 status=ok
// SIG undefined FUN_143f908d2(void)

void FUN_143f908d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527ac0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f90964 FUN_143f90964 body=184 status=ok
// SIG undefined FUN_143f90964(void)

void FUN_143f90964(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527ac0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f90a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f90a42 FUN_143f90a42 body=43 status=ok
// SIG undefined FUN_143f90a42(void)

undefined8 FUN_143f90a42(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f90a6e FUN_143f90a6e body=149 status=ok
// SIG undefined FUN_143f90a6e(void)

undefined8 * FUN_143f90a6e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527b30;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f90ae5;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f90ae5:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f90b18 FUN_143f90b18 body=146 status=ok
// SIG undefined FUN_143f90b18(void)

void FUN_143f90b18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141509b10(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f90baa FUN_143f90baa body=146 status=ok
// SIG undefined FUN_143f90baa(void)

void FUN_143f90baa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_141509b10(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f90c3c FUN_143f90c3c body=184 status=ok
// SIG undefined FUN_143f90c3c(void)

void FUN_143f90c3c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527b30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_141509b10(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f90ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f90cfe FUN_143f90cfe body=20 status=ok
// SIG undefined FUN_143f90cfe(void)

undefined1 FUN_143f90cfe(longlong param_1)

{
  FUN_143f90d12(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f90d12 FUN_143f90d12 body=120 status=ok
// SIG undefined FUN_143f90d12(void)

void FUN_143f90d12(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,*(undefined8 *)(param_2 + 0x40));
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x10) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20),local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f90d8c FUN_143f90d8c body=111 status=ok
// SIG undefined FUN_143f90d8c(void)

undefined8 * FUN_143f90d8c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b527ba0;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f90ddd;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f90ddd:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f90e10 FUN_143f90e10 body=123 status=ok
// SIG undefined FUN_143f90e10(void)

void FUN_143f90e10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f90e8c FUN_143f90e8c body=123 status=ok
// SIG undefined FUN_143f90e8c(void)

void FUN_143f90e8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f90f08 FUN_143f90f08 body=157 status=ok
// SIG undefined FUN_143f90f08(void)

void FUN_143f90f08(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527ba0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f90f96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f90fcc FUN_143f90fcc body=43 status=ok
// SIG undefined FUN_143f90fcc(void)

undefined8 FUN_143f90fcc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f90ff8 FUN_143f90ff8 body=149 status=ok
// SIG undefined FUN_143f90ff8(void)

undefined8 * FUN_143f90ff8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527c10;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f9106f;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f9106f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f910a2 FUN_143f910a2 body=146 status=ok
// SIG undefined FUN_143f910a2(void)

void FUN_143f910a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f91134 FUN_143f91134 body=146 status=ok
// SIG undefined FUN_143f91134(void)

void FUN_143f91134(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f911c6 FUN_143f911c6 body=184 status=ok
// SIG undefined FUN_143f911c6(void)

void FUN_143f911c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527c10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f9126e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f912b4 FUN_143f912b4 body=60 status=ok
// SIG undefined FUN_143f912b4(void)

undefined8 FUN_143f912b4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    in_RAX = *(longlong *)(param_1 + 0x18);
    *(undefined1 *)(in_RAX + 0x369) = 1;
  }
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f912f0 FUN_143f912f0 body=149 status=ok
// SIG undefined FUN_143f912f0(void)

undefined8 * FUN_143f912f0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527c80;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f91367;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f91367:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f9139a FUN_143f9139a body=146 status=ok
// SIG undefined FUN_143f9139a(void)

void FUN_143f9139a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527c80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_148aebb1a(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f9142c FUN_143f9142c body=146 status=ok
// SIG undefined FUN_143f9142c(void)

void FUN_143f9142c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527c80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_148aebb1a(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f914be FUN_143f914be body=184 status=ok
// SIG undefined FUN_143f914be(void)

void FUN_143f914be(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527c80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_148aebb1a(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f91566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f915a2 FUN_143f915a2 body=49 status=ok
// SIG undefined FUN_143f915a2(void)

undefined8 FUN_143f915a2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20),param_2 + 0x40);
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f915d4 FUN_143f915d4 body=149 status=ok
// SIG undefined FUN_143f915d4(void)

undefined8 * FUN_143f915d4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b527cf0;
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
  plVar3 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f9164b;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f9164b:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f9167e FUN_143f9167e body=146 status=ok
// SIG undefined FUN_143f9167e(void)

void FUN_143f9167e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_148aebb1a(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f91710 FUN_143f91710 body=146 status=ok
// SIG undefined FUN_143f91710(void)

void FUN_143f91710(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_148aebb1a(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f917a2 FUN_143f917a2 body=184 status=ok
// SIG undefined FUN_143f917a2(void)

void FUN_143f917a2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527cf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_148aebb1a(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f9184a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f91886 FUN_143f91886 body=49 status=ok
// SIG undefined FUN_143f91886(void)

undefined8 FUN_143f91886(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20),param_2 + 0x40);
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f918b8 FUN_143f918b8 body=111 status=ok
// SIG undefined FUN_143f918b8(void)

undefined8 * FUN_143f918b8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b527d60;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f91909;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f91909:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f9193c FUN_143f9193c body=129 status=ok
// SIG undefined FUN_143f9193c(void)

void FUN_143f9193c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527d60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_140146ccc(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f919be FUN_143f919be body=129 status=ok
// SIG undefined FUN_143f919be(void)

void FUN_143f919be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527d60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_140146ccc(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f91a40 FUN_143f91a40 body=163 status=ok
// SIG undefined FUN_143f91a40(void)

void FUN_143f91a40(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527d60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_140146ccc(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f91ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f91b1c FUN_143f91b1c body=61 status=ok
// SIG undefined FUN_143f91b1c(void)

undefined8 FUN_143f91b1c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    in_RAX = *(longlong *)(param_1 + 0x18);
    *(undefined4 *)(in_RAX + 0x18) = *(undefined4 *)(param_1 + 0x20);
  }
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x30) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f91b5a FUN_143f91b5a body=111 status=ok
// SIG undefined FUN_143f91b5a(void)

undefined8 * FUN_143f91b5a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b527dd0;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f91bab;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f91bab:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f91bde FUN_143f91bde body=129 status=ok
// SIG undefined FUN_143f91bde(void)

void FUN_143f91bde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527dd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_140146ccc(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f91c60 FUN_143f91c60 body=129 status=ok
// SIG undefined FUN_143f91c60(void)

void FUN_143f91c60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527dd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_140146ccc(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f91ce2 FUN_143f91ce2 body=163 status=ok
// SIG undefined FUN_143f91ce2(void)

void FUN_143f91ce2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527dd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined1 *)&p_Var1->EntryCount = *(undefined1 *)(param_1 + 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_140146ccc(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f91d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f91dbe FUN_143f91dbe body=61 status=ok
// SIG undefined FUN_143f91dbe(void)

undefined8 FUN_143f91dbe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    in_RAX = *(longlong *)(param_1 + 0x18);
    *(undefined1 *)(in_RAX + 0x1c) = *(undefined1 *)(param_1 + 0x20);
  }
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x30) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f91dfc FUN_143f91dfc body=111 status=ok
// SIG undefined FUN_143f91dfc(void)

undefined8 * FUN_143f91dfc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b527e40;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f91e4d;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f91e4d:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f91e80 FUN_143f91e80 body=123 status=ok
// SIG undefined FUN_143f91e80(void)

void FUN_143f91e80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527e40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f91efc FUN_143f91efc body=123 status=ok
// SIG undefined FUN_143f91efc(void)

void FUN_143f91efc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b526cc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527e40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140146ccc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f91f78 FUN_143f91f78 body=157 status=ok
// SIG undefined FUN_143f91f78(void)

void FUN_143f91f78(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b526cc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527e40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140146ccc(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f92006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f9203c FUN_143f9203c body=43 status=ok
// SIG undefined FUN_143f9203c(void)

undefined8 FUN_143f9203c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_2 + 0x20));
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f92073 FUN_143f92073 body=450 status=ok
// SIG undefined FUN_143f92073(void)

void FUN_143f92073(void)

{
  longlong lVar1;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14098d3d2(FUN_143f84608,L"/Script/VivoxCore",L"DeviceType",&DAT_14cb99ad8);
  FUN_14098d3d2(FUN_143f8463f,L"/Script/VivoxCore",L"EAudioFadeModel",&DAT_14cb99af0);
  FUN_14098d3d2(FUN_143f84676,L"/Script/VivoxCore",L"ChannelType",&DAT_14cb99b08);
  FUN_14098d3d2(FUN_143f846ad,L"/Script/VivoxCore",L"ConnectionState",&DAT_14cb99b20);
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b525650 + lVar1),L"/Script/VivoxCore",
                  *(undefined8 *)(&UNK_14b525658 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_14b525660 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0xb0);
  lVar1 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b525820 + lVar1),L"/Script/VivoxCore",
                  *(undefined8 *)((longlong)&PTR_u_TTSDestination_14b525828 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_14b525830 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x40);
  FUN_14098d3d2(FUN_143f84865,L"/Script/VivoxCore",L"PresenceStatus",&DAT_14cb99be0);
  FUN_1400b22c2(&DAT_14cb99c10,"No Device");
  atexit((_func_5014 *)&LAB_143f8489c);
  FUN_1400b22c2(&DAT_14cb99c20,"Default System Device");
  atexit((_func_5014 *)&LAB_143f848ad);
  FUN_1400b22c2(&DAT_14cb99c30,"Default Communication Device");
  atexit((_func_5014 *)&LAB_143f848be);
  local_38 = 0x800000014b526148;
  local_24 = 9;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14658f34e(&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f92238 FUN_143f92238 body=57 status=ok
// SIG undefined FUN_143f92238(void)

undefined8 FUN_143f92238(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x240))();
  if (cVar1 != '\0') {
    FUN_145feea36(param_1);
    plVar2 = (longlong *)FUN_141535576(param_1[2]);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return 1;
}



// FUNCTION 143f92272 FUN_143f92272 body=419 status=ok
// SIG undefined FUN_143f92272(void)

void FUN_143f92272(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    lVar15 = (longlong)iVar3;
    if (lVar15 != 0) {
      plVar4 = *(longlong **)(param_1 + 0x18);
      plVar5 = *(longlong **)(param_2 + 0x10);
      if (plVar5 == (longlong *)0x0) {
LAB_143f922e5:
        lVar8 = *plVar4;
        lVar9 = 0;
      }
      else {
        iVar7 = (int)plVar5[1];
        do {
          if (iVar7 == 0) goto LAB_143f922e5;
          LOCK();
          iVar12 = (int)plVar5[1];
          bVar16 = iVar7 == iVar12;
          if (bVar16) {
            *(int *)(plVar5 + 1) = iVar7 + 1;
            iVar12 = iVar7;
          }
          iVar7 = iVar12;
          UNLOCK();
        } while (!bVar16);
        lVar9 = *(longlong *)(param_2 + 8);
        lVar8 = *plVar4;
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
      iVar12 = 0;
      iVar7 = 0;
      bVar16 = lVar9 == lVar8;
      do {
        lVar8 = (longlong)iVar7;
        lVar9 = lVar8;
        iVar10 = iVar7 + 1;
        if (iVar7 + 1 < iVar3) {
          iVar10 = iVar3;
        }
        do {
          lVar9 = lVar9 + 1;
          if (lVar15 <= lVar9) goto LAB_143f92396;
          plVar5 = *(longlong **)(param_2 + 0x10);
          if (plVar5 == (longlong *)0x0) {
LAB_143f9237e:
            lVar14 = plVar4[lVar9 * 2];
            lVar13 = 0;
          }
          else {
            iVar11 = (int)plVar5[1];
            do {
              if (iVar11 == 0) goto LAB_143f9237e;
              LOCK();
              iVar6 = (int)plVar5[1];
              bVar17 = iVar11 == iVar6;
              if (bVar17) {
                *(int *)(plVar5 + 1) = iVar11 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
              UNLOCK();
            } while (!bVar17);
            lVar13 = *(longlong *)(param_2 + 8);
            lVar14 = plVar4[lVar9 * 2];
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
        } while (bVar16 == (lVar13 == lVar14));
        iVar10 = (int)lVar9;
LAB_143f92396:
        iVar11 = iVar10 - iVar7;
        if (bVar16 == false) {
          if (iVar12 != iVar7) {
            memmove(plVar4 + (longlong)iVar12 * 2,plVar4 + lVar8 * 2,(longlong)iVar11 << 4);
          }
          iVar12 = iVar12 + iVar11;
        }
        else {
          FUN_145fee9ac(plVar4 + lVar8 * 2,iVar11);
        }
        iVar7 = iVar10;
        bVar16 = (bool)(bVar16 ^ 1);
      } while (lVar9 < lVar15);
      *(int *)(param_1 + 0x20) = iVar12;
    }
  }
  return;
}



// FUNCTION 143f92416 FUN_143f92416 body=704 status=ok
// SIG undefined FUN_143f92416(void)

undefined4 FUN_143f92416(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  int local_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8 [2];
  longlong local_e8;
  longlong local_d8 [2];
  longlong local_c8;
  longlong local_b8 [2];
  longlong local_a8;
  longlong local_98 [2];
  longlong local_88;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_78 = param_2;
  uVar2 = FUN_140988638(&local_78,L"INFO",1);
  if ((char)uVar2 == '\0') goto LAB_143f92455;
  (**(code **)(*param_1 + 0x80))(param_1,local_98);
  (**(code **)(*param_1 + 0x90))(param_1,local_b8);
  (**(code **)(*param_1 + 0x58))(param_1,&local_70);
  FUN_1459b191a(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x88))(param_1,local_d8);
  (**(code **)(*param_1 + 0x98))(param_1,local_f8);
  (**(code **)(*param_1 + 0x60))(param_1,&local_70);
  FUN_1459b191a(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  cVar1 = FUN_140d60302(param_1 + 4);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0xb8))(param_1), cVar1 != '\0')) {
    local_108 = 0;
    uStack_100 = 0;
    iVar3 = (**(code **)(*param_1 + 0x1c0))(param_1);
    if (iVar3 == 0) {
      puVar4 = &DAT_149e30aac;
LAB_143f925b7:
      FUN_14020fad6(&local_108,puVar4);
    }
    else {
      if (iVar3 == 1) {
        puVar4 = (undefined2 *)&DAT_14b40c392;
        goto LAB_143f925b7;
      }
      if (iVar3 == 2) {
        (**(code **)(*param_1 + 0x1c8))(param_1,&local_70);
        FUN_146b47854(&local_128,&local_70,&DAT_149e06196);
        puVar4 = local_128;
        if (local_120 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_118,L"CHANNELS:%s",puVar4);
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        local_108 = local_118;
        uStack_100 = uStack_110;
        local_118 = 0;
        uStack_110 = 0;
        if (local_128 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_28 = 0;
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(&local_70);
      }
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
LAB_143f92455:
  if ((local_20 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 143f926e4 FUN_143f926e4 body=145 status=ok
// SIG undefined FUN_143f926e4(void)

void FUN_143f926e4(longlong param_1,float param_2)

{
  longlong *plVar1;
  float fVar2;
  
  plVar1 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (plVar1 != (longlong *)0x0) {
    if (2.0 <= param_2) {
      param_2 = 2.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(param_1 + 0xa4) = param_2;
    fVar2 = (float)log2f(param_2);
    fVar2 = fVar2 * 12.0;
    if (12.0 <= fVar2) {
      fVar2 = 12.0;
    }
    if (fVar2 <= -50.0) {
      fVar2 = -50.0;
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000143f92766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(plVar1,(int)fVar2,*(code **)(*plVar1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 143f92776 FUN_143f92776 body=145 status=ok
// SIG undefined FUN_143f92776(void)

void FUN_143f92776(longlong param_1,float param_2)

{
  longlong *plVar1;
  float fVar2;
  
  plVar1 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (plVar1 != (longlong *)0x0) {
    if (2.0 <= param_2) {
      param_2 = 2.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(param_1 + 0xa8) = param_2;
    fVar2 = (float)log2f(param_2);
    fVar2 = fVar2 * 12.0;
    if (12.0 <= fVar2) {
      fVar2 = 12.0;
    }
    if (fVar2 <= -50.0) {
      fVar2 = -50.0;
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000143f927f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(plVar1,(int)fVar2,*(code **)(*plVar1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 143f92808 FUN_143f92808 body=45 status=ok
// SIG undefined FUN_143f92808(void)

undefined4 FUN_143f92808(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa4);
  }
  return uVar2;
}



// FUNCTION 143f92836 FUN_143f92836 body=45 status=ok
// SIG undefined FUN_143f92836(void)

undefined4 FUN_143f92836(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa8);
  }
  return uVar2;
}



// FUNCTION 143f92864 FUN_143f92864 body=61 status=ok
// SIG undefined FUN_143f92864(void)

void FUN_143f92864(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000143f92897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2,*(code **)(*plVar1 + 0x58));
    return;
  }
  return;
}



// FUNCTION 143f928a2 FUN_143f928a2 body=61 status=ok
// SIG undefined FUN_143f928a2(void)

void FUN_143f928a2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000143f928d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2,*(code **)(*plVar1 + 0x58));
    return;
  }
  return;
}



// FUNCTION 143f928e0 FUN_143f928e0 body=52 status=ok
// SIG undefined FUN_143f928e0(void)

undefined8 FUN_143f928e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000143f92909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
    return uVar2;
  }
  return 1;
}



// FUNCTION 143f92914 FUN_143f92914 body=52 status=ok
// SIG undefined FUN_143f92914(void)

undefined8 FUN_143f92914(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000143f9293d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
    return uVar2;
  }
  return 1;
}



// FUNCTION 143f92948 FUN_143f92948 body=1338 status=ok
// SIG undefined FUN_143f92948(void)

longlong * FUN_143f92948(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  void **ppvVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ushort uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong uVar23;
  int iVar24;
  undefined1 auStack_f8 [40];
  void *local_d0;
  longlong *local_c8;
  uint *local_c0;
  void *local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong *local_a8 [2];
  void *local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 uStack_80;
  wchar_t *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_2 = 0;
  param_2[1] = 0;
  local_c8 = param_2;
  plVar6 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (plVar6 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x28))(plVar6);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
    iVar1 = (int)plVar6[5];
    puVar22 = (uint *)(plVar6 + 2);
    if (iVar1 == 0) {
      uVar17 = 1;
      uVar23 = 0;
      iVar24 = 0;
      iVar5 = 0;
    }
    else {
      puVar7 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar7 = puVar22;
      }
      uVar18 = *puVar7;
      if (uVar18 == 0) {
        iVar5 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar5 = iVar1 + -1;
        }
        uVar23 = 0;
        uVar17 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar17 = uVar23;
        }
        iVar24 = 0;
        do {
          if (uVar17 == uVar23) goto LAB_143f92a3b;
          iVar24 = iVar24 + 0x20;
          uVar18 = puVar7[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar23 = 0;
        iVar24 = 0;
      }
      uVar17 = (ulonglong)(-uVar18 & uVar18);
      uVar9 = uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar5 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar5) {
        iVar5 = iVar1;
      }
    }
    if (iVar5 != iVar1) {
      uVar18 = 0xffffffff;
      local_c0 = puVar22;
LAB_143f92a8a:
      plVar11 = *(longlong **)(*plVar6 + 0x10 + (longlong)iVar5 * 0x20);
      if (plVar11 != (longlong *)0x0) {
        puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11);
        puVar14 = &DAT_149dfb77a;
        if (*(int *)(puVar8 + 1) != 0) {
          puVar14 = (undefined2 *)*puVar8;
        }
        lVar16 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar14 + lVar16);
          uVar9 = (ulonglong)uVar4;
          uVar19 = *(ushort *)((longlong)L"Default Communication Device" + lVar16);
          puVar22 = local_c0;
          if (uVar4 != uVar19) break;
          if (uVar4 == 0) goto LAB_143f92b07;
LAB_143f92ad1:
          lVar16 = lVar16 + 2;
        }
        if ((uVar19 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar20 = (ulonglong)uVar19;
          uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar20]) goto LAB_143f92ad1;
        }
        if (uVar4 != uVar19) {
          local_88 = (void *)0x0;
          uStack_80 = 0;
          local_98 = (void *)0x0;
          uStack_90 = 0;
          ppvVar10 = (void **)(**(code **)(*plVar11 + 0x10))(plVar11);
          if (&local_88 != ppvVar10) {
            uVar15 = *(uint *)(ppvVar10 + 1);
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar15);
            if (uVar15 == 0 && uStack_80._4_4_ == 0) {
              uStack_80 = (ulonglong)uVar15;
            }
            else {
              local_d0 = (void *)(longlong)(int)uVar15;
              local_b8 = *ppvVar10;
              FUN_1446dd670(&local_88);
              if ((int)local_d0 != 0) {
                memcpy(local_88,local_b8,(longlong)local_d0 * 2);
              }
            }
          }
          local_70 = L"DefaultVoiceDeviceName";
          local_68 = 0x16;
          FUN_1446e940c(local_ac,&local_70);
          local_70 = L"GbxVivoxVoiceChat";
          local_68 = 0x11;
          FUN_1446e940c(local_b0,&local_70);
          local_70 = L"Default";
          local_68 = 7;
          FUN_140208c1e(local_a8,local_b0,local_ac,&local_70);
          puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11);
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(puVar8 + 1) != 0) {
            puVar14 = (undefined2 *)*puVar8;
          }
          lVar16 = 0;
          goto LAB_143f92cd5;
        }
      }
      goto LAB_143f92b07;
    }
  }
LAB_143f92a3b:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_c8;
LAB_143f92cd5:
  uVar4 = *(ushort *)((longlong)puVar14 + lVar16);
  uVar9 = (ulonglong)uVar4;
  uVar19 = *(ushort *)((longlong)L"Default System Device" + lVar16);
  if (uVar4 == uVar19) {
    if (uVar4 == 0) goto LAB_143f92d1e;
LAB_143f92ce8:
    lVar16 = lVar16 + 2;
    goto LAB_143f92cd5;
  }
  if ((uVar19 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar20 = (ulonglong)uVar19;
    uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar20]) goto LAB_143f92ce8;
  }
  if (uVar4 != uVar19) {
    ppvVar10 = (void **)(**(code **)(*plVar11 + 8))(plVar11);
    goto LAB_143f92d80;
  }
LAB_143f92d1e:
  plVar11 = local_a8[0];
  if (*(code **)(*local_a8[0] + 0x50) != FUN_144828418) {
    plVar11 = (longlong *)(**(code **)(*local_a8[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar11);
  pcVar3 = *(code **)(*local_a8[0] + 0x28);
  if (pcVar3 == FUN_14482841c) {
    ppvVar10 = (void **)(local_a8[0] + 3);
    if (local_a8[0][5] != 0) {
      ppvVar10 = (void **)(local_a8[0][5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    ppvVar10 = (void **)(local_a8[0] + 2);
  }
  else {
    ppvVar10 = (void **)(*pcVar3)(local_a8[0]);
  }
LAB_143f92d80:
  if (&local_98 != ppvVar10) {
    uVar15 = *(uint *)(ppvVar10 + 1);
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar15);
    if (uVar15 == 0 && uStack_90._4_4_ == 0) {
      uStack_90 = (ulonglong)uVar15;
    }
    else {
      local_d0 = *ppvVar10;
      FUN_1446dd670(&local_98,uVar15);
      if (uVar15 != 0) {
        memcpy(local_98,local_d0,(longlong)(int)uVar15 * 2);
      }
    }
  }
  iVar5 = (int)local_c8[1];
  *(uint *)(local_c8 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)local_c8 + 0xc) < iVar5 + 1U) {
    FUN_146590622(local_c8,iVar5);
  }
  FUN_146590586((longlong)iVar5 * 0x20 + *local_c8,&local_98);
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  puVar22 = local_c0;
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
    puVar22 = local_c0;
  }
LAB_143f92b07:
  uVar18 = uVar18 & ~(uint)uVar17;
  puVar7 = (uint *)plVar6[4];
  if ((uint *)plVar6[4] == (uint *)0x0) {
    puVar7 = puVar22;
  }
  iVar2 = (int)plVar6[5];
  iVar5 = (int)uVar23;
  lVar16 = (longlong)iVar5;
  uVar15 = puVar7[lVar16] & uVar18;
  if (uVar15 == 0) {
    iVar12 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar12 = iVar2 + -1;
    }
    iVar12 = iVar12 >> 5;
    iVar24 = iVar24 + 0x20;
    iVar13 = iVar12;
    if (iVar12 < iVar5) {
      iVar13 = iVar5;
    }
    if (iVar5 < iVar12) {
      lVar21 = 0;
      do {
        uVar15 = puVar7[lVar16 + lVar21 + 1];
        if (uVar15 != 0) {
          uVar23 = (ulonglong)(iVar5 + (int)lVar21 + 1);
          uVar18 = 0xffffffff;
          goto LAB_143f92b83;
        }
        iVar24 = iVar24 + 0x20;
        lVar21 = lVar21 + 1;
      } while (iVar13 - lVar16 != lVar21);
      uVar18 = 0xffffffff;
      iVar5 = iVar13;
    }
    uVar23 = (ulonglong)(iVar5 + 1);
    iVar5 = iVar2;
  }
  else {
LAB_143f92b83:
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar9 = uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar5 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 == iVar1) goto LAB_143f92a3b;
  goto LAB_143f92a8a;
}



// FUNCTION 143f92e84 FUN_143f92e84 body=1338 status=ok
// SIG undefined FUN_143f92e84(void)

longlong * FUN_143f92e84(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  void **ppvVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ushort uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong uVar23;
  int iVar24;
  undefined1 auStack_f8 [40];
  void *local_d0;
  longlong *local_c8;
  uint *local_c0;
  void *local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong *local_a8 [2];
  void *local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 uStack_80;
  wchar_t *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_2 = 0;
  param_2[1] = 0;
  local_c8 = param_2;
  plVar6 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (plVar6 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x30))(plVar6);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
    iVar1 = (int)plVar6[5];
    puVar22 = (uint *)(plVar6 + 2);
    if (iVar1 == 0) {
      uVar17 = 1;
      uVar23 = 0;
      iVar24 = 0;
      iVar5 = 0;
    }
    else {
      puVar7 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar7 = puVar22;
      }
      uVar18 = *puVar7;
      if (uVar18 == 0) {
        iVar5 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar5 = iVar1 + -1;
        }
        uVar23 = 0;
        uVar17 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar17 = uVar23;
        }
        iVar24 = 0;
        do {
          if (uVar17 == uVar23) goto LAB_143f92f77;
          iVar24 = iVar24 + 0x20;
          uVar18 = puVar7[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar23 = 0;
        iVar24 = 0;
      }
      uVar17 = (ulonglong)(-uVar18 & uVar18);
      uVar9 = uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar5 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar5) {
        iVar5 = iVar1;
      }
    }
    if (iVar5 != iVar1) {
      uVar18 = 0xffffffff;
      local_c0 = puVar22;
LAB_143f92fc6:
      plVar11 = *(longlong **)(*plVar6 + 0x10 + (longlong)iVar5 * 0x20);
      if (plVar11 != (longlong *)0x0) {
        puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11);
        puVar14 = &DAT_149dfb77a;
        if (*(int *)(puVar8 + 1) != 0) {
          puVar14 = (undefined2 *)*puVar8;
        }
        lVar16 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar14 + lVar16);
          uVar9 = (ulonglong)uVar4;
          uVar19 = *(ushort *)((longlong)L"Default Communication Device" + lVar16);
          puVar22 = local_c0;
          if (uVar4 != uVar19) break;
          if (uVar4 == 0) goto LAB_143f93043;
LAB_143f9300d:
          lVar16 = lVar16 + 2;
        }
        if ((uVar19 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar20 = (ulonglong)uVar19;
          uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar20]) goto LAB_143f9300d;
        }
        if (uVar4 != uVar19) {
          local_88 = (void *)0x0;
          uStack_80 = 0;
          local_98 = (void *)0x0;
          uStack_90 = 0;
          ppvVar10 = (void **)(**(code **)(*plVar11 + 0x10))(plVar11);
          if (&local_88 != ppvVar10) {
            uVar15 = *(uint *)(ppvVar10 + 1);
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar15);
            if (uVar15 == 0 && uStack_80._4_4_ == 0) {
              uStack_80 = (ulonglong)uVar15;
            }
            else {
              local_d0 = (void *)(longlong)(int)uVar15;
              local_b8 = *ppvVar10;
              FUN_1446dd670(&local_88);
              if ((int)local_d0 != 0) {
                memcpy(local_88,local_b8,(longlong)local_d0 * 2);
              }
            }
          }
          local_70 = L"DefaultVoiceDeviceName";
          local_68 = 0x16;
          FUN_1446e940c(local_ac,&local_70);
          local_70 = L"GbxVivoxVoiceChat";
          local_68 = 0x11;
          FUN_1446e940c(local_b0,&local_70);
          local_70 = L"Default";
          local_68 = 7;
          FUN_140208c1e(local_a8,local_b0,local_ac,&local_70);
          puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11);
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(puVar8 + 1) != 0) {
            puVar14 = (undefined2 *)*puVar8;
          }
          lVar16 = 0;
          goto LAB_143f93211;
        }
      }
      goto LAB_143f93043;
    }
  }
LAB_143f92f77:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_c8;
LAB_143f93211:
  uVar4 = *(ushort *)((longlong)puVar14 + lVar16);
  uVar9 = (ulonglong)uVar4;
  uVar19 = *(ushort *)((longlong)L"Default System Device" + lVar16);
  if (uVar4 == uVar19) {
    if (uVar4 == 0) goto LAB_143f9325a;
LAB_143f93224:
    lVar16 = lVar16 + 2;
    goto LAB_143f93211;
  }
  if ((uVar19 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar20 = (ulonglong)uVar19;
    uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar20]) goto LAB_143f93224;
  }
  if (uVar4 != uVar19) {
    ppvVar10 = (void **)(**(code **)(*plVar11 + 8))(plVar11);
    goto LAB_143f932bc;
  }
LAB_143f9325a:
  plVar11 = local_a8[0];
  if (*(code **)(*local_a8[0] + 0x50) != FUN_144828418) {
    plVar11 = (longlong *)(**(code **)(*local_a8[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar11);
  pcVar3 = *(code **)(*local_a8[0] + 0x28);
  if (pcVar3 == FUN_14482841c) {
    ppvVar10 = (void **)(local_a8[0] + 3);
    if (local_a8[0][5] != 0) {
      ppvVar10 = (void **)(local_a8[0][5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    ppvVar10 = (void **)(local_a8[0] + 2);
  }
  else {
    ppvVar10 = (void **)(*pcVar3)(local_a8[0]);
  }
LAB_143f932bc:
  if (&local_98 != ppvVar10) {
    uVar15 = *(uint *)(ppvVar10 + 1);
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar15);
    if (uVar15 == 0 && uStack_90._4_4_ == 0) {
      uStack_90 = (ulonglong)uVar15;
    }
    else {
      local_d0 = *ppvVar10;
      FUN_1446dd670(&local_98,uVar15);
      if (uVar15 != 0) {
        memcpy(local_98,local_d0,(longlong)(int)uVar15 * 2);
      }
    }
  }
  iVar5 = (int)local_c8[1];
  *(uint *)(local_c8 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)local_c8 + 0xc) < iVar5 + 1U) {
    FUN_146590622(local_c8,iVar5);
  }
  FUN_146590586((longlong)iVar5 * 0x20 + *local_c8,&local_98);
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  puVar22 = local_c0;
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
    puVar22 = local_c0;
  }
LAB_143f93043:
  uVar18 = uVar18 & ~(uint)uVar17;
  puVar7 = (uint *)plVar6[4];
  if ((uint *)plVar6[4] == (uint *)0x0) {
    puVar7 = puVar22;
  }
  iVar2 = (int)plVar6[5];
  iVar5 = (int)uVar23;
  lVar16 = (longlong)iVar5;
  uVar15 = puVar7[lVar16] & uVar18;
  if (uVar15 == 0) {
    iVar12 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar12 = iVar2 + -1;
    }
    iVar12 = iVar12 >> 5;
    iVar24 = iVar24 + 0x20;
    iVar13 = iVar12;
    if (iVar12 < iVar5) {
      iVar13 = iVar5;
    }
    if (iVar5 < iVar12) {
      lVar21 = 0;
      do {
        uVar15 = puVar7[lVar16 + lVar21 + 1];
        if (uVar15 != 0) {
          uVar23 = (ulonglong)(iVar5 + (int)lVar21 + 1);
          uVar18 = 0xffffffff;
          goto LAB_143f930bf;
        }
        iVar24 = iVar24 + 0x20;
        lVar21 = lVar21 + 1;
      } while (iVar13 - lVar16 != lVar21);
      uVar18 = 0xffffffff;
      iVar5 = iVar13;
    }
    uVar23 = (ulonglong)(iVar5 + 1);
    iVar5 = iVar2;
  }
  else {
LAB_143f930bf:
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar9 = uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar5 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 == iVar1) goto LAB_143f92f77;
  goto LAB_143f92fc6;
}



// FUNCTION 143f933c0 FUN_143f933c0 body=1114 status=ok
// SIG undefined FUN_143f933c0(void)

void FUN_143f933c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_188 [32];
  undefined1 local_168 [16];
  undefined8 *local_158;
  longlong *local_150;
  void *local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a0;
  undefined4 local_98;
  wchar_t *local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  code *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar7 = param_1 + 0x20;
  FUN_140d60302(lVar7);
  if (*(int *)(param_1 + 0xa0) == 0) {
    *(undefined4 *)(param_1 + 0xa0) = 1;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (void *)0x0;
    uStack_e0 = 0;
    puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x80;
    *(undefined4 *)(puVar4 + 6) = 0xffffffff;
    local_158 = puVar4;
    local_150 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_150[1] = (longlong)&DAT_100000001;
    *local_150 = (longlong)&PTR_FUN_149e49100;
    local_150[2] = (longlong)puVar4;
    lVar5 = FUN_14001cc68(0x88,0x10);
    FUN_14047b06c(lVar5,param_4);
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e44a40;
    plVar6[2] = lVar5;
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
    FUN_14047b282(lVar5,&local_158,0);
    local_70 = (code *)0x14b4f5140;
    local_68 = 5;
    FUN_14047fa10(local_158,&local_70,&local_e8);
    local_80 = L"issuer";
    local_78 = 6;
    FUN_14047fa10(local_158,&local_80,&local_b8);
    local_90 = L"domain";
    local_88 = 6;
    FUN_14047fa10(local_158,&local_90,&local_c8);
    local_a0 = L"endpoint";
    local_98 = 8;
    FUN_14047fa10(local_158,&local_a0,&local_d8);
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
    plVar6 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    iVar8 = (int)uStack_b0 + -1;
    if ((int)uStack_b0 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(param_1 + 0x1b0,local_b8,iVar8);
    iVar8 = (int)uStack_c0 + -1;
    if ((int)uStack_c0 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(param_1 + 0x1a0,local_c8,iVar8);
    iVar8 = (int)uStack_d0 + -1;
    if ((int)uStack_d0 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(param_1 + 0x1c0,local_d8,iVar8);
    FUN_146034fa6(param_1,&local_158,param_3);
    FUN_145960ee8(lVar7,&local_158);
    FUN_140d5fbf2(&local_158);
    plVar6 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6,lVar7);
    pvVar3 = local_e8;
    local_158 = (undefined8 *)0x0;
    lVar7 = (longlong)(int)uStack_e0;
    local_150 = (longlong *)CONCAT44(local_150._4_4_,(int)uStack_e0);
    if (lVar7 == 0) {
      local_150 = (longlong *)(uStack_e0 & 0xffffffff);
    }
    else {
      FUN_1446dd670(&local_158,uStack_e0 & 0xffffffff,0);
      memcpy(local_158,pvVar3,lVar7 * 2);
    }
    FUN_1460480e0(param_1,plVar6);
    local_70 = FUN_14166efe0;
    local_68 = 0;
    FUN_1461ecd0e(local_168,param_1,&local_70,param_5);
    local_70 = (code *)0x0;
    local_68 = *(int *)(param_1 + 0x1c8);
    lVar7 = (longlong)local_68;
    pvVar3 = *(void **)(param_1 + 0x1c0);
    if (lVar7 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_68,0);
      memcpy(local_70,pvVar3,lVar7 * 2);
    }
    (**(code **)(*plVar6 + 0x50))(plVar6,&local_70,&local_158,local_168);
    if (local_70 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_158 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1465904a0(&local_e8);
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9381c FUN_143f9381c body=679 status=ok
// SIG undefined FUN_143f9381c(void)

void FUN_143f9381c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined1 local_e8 [119];
  undefined1 local_71;
  undefined8 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar5 = (**(code **)(*param_1 + 0xb8))();
  if ((cVar5 != '\0') && ((longlong)(int)param_2[1] != 0)) {
    lVar11 = *param_2;
    lVar12 = (longlong)(int)param_2[1] * 0x10 + lVar11;
    local_f0 = param_1 + 0x2a;
    do {
      FUN_14482b35e(local_f0,local_e8,lVar11,0);
      plVar7 = (longlong *)FUN_141535576(*(undefined8 *)(param_1[3] + 0x10));
      plVar8 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7,param_1 + 4);
      local_70 = (undefined8 *)0x0;
      local_68 = 0;
      FUN_1446efa72(&local_70,0,3,0x10);
      local_68 = 3;
      plVar7 = (longlong *)param_1[2];
      if (plVar7 == (longlong *)0x0) {
LAB_143f93913:
        *local_70 = &PTR_LAB_149e35290;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_70[2] = lVar9;
        *local_70 = &PTR_FUN_14b528d70;
        local_70[3] = 0;
        local_70[4] = 0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_143f93913;
          LOCK();
          iVar4 = (int)plVar7[1];
          bVar13 = iVar6 == iVar4;
          if (bVar13) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar13);
        lVar3 = param_1[1];
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *local_70 = &PTR_LAB_149e35290;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_70[2] = lVar10;
        *local_70 = &PTR_FUN_14b528d70;
        local_70[3] = lVar3;
        local_70[4] = plVar7;
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
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
      local_71 = 1;
      FUN_146034fa6(param_1,local_e8,lVar11);
      (**(code **)(*plVar8 + 0x78))(plVar8,local_e8,&local_71);
      FUN_140d5fbf2(local_e8);
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != lVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f93ac4 FUN_143f93ac4 body=673 status=ok
// SIG undefined FUN_143f93ac4(void)

void FUN_143f93ac4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined1 local_e8 [119];
  undefined1 local_71;
  undefined8 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar5 = (**(code **)(*param_1 + 0xb8))();
  if ((cVar5 != '\0') && ((longlong)(int)param_2[1] != 0)) {
    lVar11 = *param_2;
    lVar12 = (longlong)(int)param_2[1] * 0x10 + lVar11;
    local_f0 = param_1 + 0x2a;
    do {
      FUN_1411a58b4(local_f0,lVar11);
      plVar7 = (longlong *)FUN_141535576(*(undefined8 *)(param_1[3] + 0x10));
      plVar8 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7,param_1 + 4);
      local_70 = (undefined8 *)0x0;
      local_68 = 0;
      FUN_1446efa72(&local_70,0,3,0x10);
      local_68 = 3;
      plVar7 = (longlong *)param_1[2];
      if (plVar7 == (longlong *)0x0) {
LAB_143f93bb5:
        *local_70 = &PTR_LAB_149e35290;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_70[2] = lVar9;
        *local_70 = &PTR_FUN_14b528de0;
        local_70[3] = 0;
        local_70[4] = 0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_143f93bb5;
          LOCK();
          iVar4 = (int)plVar7[1];
          bVar13 = iVar6 == iVar4;
          if (bVar13) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar13);
        lVar3 = param_1[1];
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *local_70 = &PTR_LAB_149e35290;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_70[2] = lVar10;
        *local_70 = &PTR_FUN_14b528de0;
        local_70[3] = lVar3;
        local_70[4] = plVar7;
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
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
      local_71 = 0;
      FUN_146034fa6(param_1,local_e8,lVar11);
      (**(code **)(*plVar8 + 0x78))(plVar8,local_e8,&local_71,&local_70);
      FUN_140d5fbf2(local_e8);
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != lVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


