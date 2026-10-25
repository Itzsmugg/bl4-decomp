// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1488f9720 FUN_1488f9720 body=158 status=ok
// SIG undefined FUN_1488f9720(void)

longlong * FUN_1488f9720(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_1489046b8();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1489047ce(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f97c2 FUN_1488f97c2 body=213 status=ok
// SIG undefined FUN_1488f97c2(void)

undefined8 FUN_1488f97c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_1 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_1488f9818;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x70);
    if (((lVar8 != 0) && (lVar7 = FUN_1488f9898(lVar8), lVar7 != 0)) &&
       (lVar8 = FUN_1410cfc16(lVar8), lVar8 != 0)) {
      uVar3 = *(undefined4 *)(lVar7 + 0x40);
      local_28 = *(undefined4 *)(lVar8 + 0x98);
      local_30 = *(undefined8 *)(lVar8 + 0x90);
      lVar8 = (**(code **)(**(longlong **)(lVar8 + 8) + 8))();
      if (lVar8 != 0) {
        FUN_143df0d3e(lVar8,uVar3,0);
      }
    }
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
LAB_1488f9818:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1488f9898 FUN_1488f9898 body=78 status=ok
// SIG undefined FUN_1488f9898(void)

longlong * FUN_1488f9898(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b1f44();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1488f98e6 FUN_1488f98e6 body=211 status=ok
// SIG undefined FUN_1488f98e6(void)

void FUN_1488f98e6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1488f999b;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x70);
    if (lVar4 != 0) {
      if ((param_3 != (longlong *)0x0) &&
         (lVar7 = (**(code **)(*param_3 + 0x10))(param_3), lVar7 != 0)) {
        uVar8 = FUN_1447210f0();
        local_28 = 0;
        local_38 = 0;
        uStack_30 = 0;
        local_48 = 0;
        local_58 = 0;
        uStack_50 = 0;
        FUN_1460028be(uVar8,lVar7);
      }
      FUN_140170a76(lVar4,&DAT_14cb86230);
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
LAB_1488f999b:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488f99ba FUN_1488f99ba body=154 status=ok
// SIG undefined FUN_1488f99ba(void)

void FUN_1488f99ba(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  char local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1461beb14(param_1,local_38);
  if (local_34 == '\x01') {
    lVar1 = FUN_148844dd4(param_1);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_148844dd4(param_1);
      if (plVar2 != (longlong *)0x0) {
        lVar1 = (**(code **)(*plVar2 + 0xb8))(plVar2,param_2);
        if (lVar1 != 0) goto LAB_1488f9a1e;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
LAB_1488f9a1e:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f9a6e FUN_1488f9a6e body=381 status=ok
// SIG undefined FUN_1488f9a6e(void)

longlong * FUN_1488f9a6e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1488f9b79:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4189e0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1488f9bec;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1488f9b79;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4189e0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1488f9bec;
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



// FUNCTION 1488f9bec FUN_1488f9bec body=32 status=ok
// SIG undefined FUN_1488f9bec(void)

void FUN_1488f9bec(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140a262da(param_1 + 0x60);
  FUN_148844e0a(param_1,uVar1);
  return;
}



// FUNCTION 1488f9c0c FUN_1488f9c0c body=103 status=ok
// SIG undefined FUN_1488f9c0c(void)

longlong * FUN_1488f9c0c(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b418a50;
  puVar1 = puVar2 + 2;
  FUN_14621bd16(puVar1,param_1);
  *param_2 = (longlong)puVar1;
  param_2[1] = (longlong)puVar2;
  FUN_148904c40(param_2,puVar1);
  return param_2;
}



// FUNCTION 1488f9c78 FUN_1488f9c78 body=277 status=ok
// SIG undefined FUN_1488f9c78(void)

longlong * FUN_1488f9c78(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0xb8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418a70;
  plVar1 = plVar4 + 2;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[2] = (longlong)&PTR_LAB_14b4189a0;
  *(undefined1 *)((longlong)plVar4 + 0x71) = 0;
  *(undefined4 *)(plVar4 + 0xf) = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  *(undefined4 *)(plVar4 + 0x12) = 0;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148904d06(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488f9d94 FUN_1488f9d94 body=297 status=ok
// SIG undefined FUN_1488f9d94(void)

void FUN_1488f9d94(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_1488f9ebe();
  if (param_2 == 0 || lVar3 == 0) goto LAB_1488f9e41;
  FUN_141068c44(param_1,local_60);
  uVar4 = FUN_141068cca(param_1);
  FUN_140f4ea62(lVar3 + 0x18,&local_48,uVar4,local_60);
  if (local_38 == 0) {
    if ((((local_48 == 0) || (local_40 == 0)) ||
        (plVar1 = *(longlong **)(local_40 + 0xb8), plVar1 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) goto LAB_1488f9e41;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_38 = FUN_144aff482(uVar4,&local_48);
    if (local_38 == 0) goto LAB_1488f9e41;
  }
  uVar4 = FUN_14477b664(local_40);
  local_58 = FUN_14477b664(uVar4);
  local_50 = local_38;
  FUN_146210b66(param_2,local_60,param_1 + 0x60);
LAB_1488f9e41:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488f9ebe FUN_1488f9ebe body=78 status=ok
// SIG undefined FUN_1488f9ebe(void)

longlong * FUN_1488f9ebe(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b2102();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1488f9f0c FUN_1488f9f0c body=194 status=ok
// SIG undefined FUN_1488f9f0c(void)

void FUN_1488f9f0c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((param_2 != 0) && (plVar4 = (longlong *)FUN_14017698e(param_2), plVar4 != (longlong *)0x0)) {
    lVar6 = *(longlong *)(param_1 + 0x68);
    if (lVar6 == 0) {
      uVar5 = FUN_14043db3a();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x68) = lVar6;
    }
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x70) != 0) {
LAB_1488f9f5a:
                    /* WARNING: Could not recover jumptable at 0x0001488f9f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar1);
      return;
    }
    if ((lVar6 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(param_1 + 0x70) = lVar6;
        if (lVar6 == 0) {
          return;
        }
        goto LAB_1488f9f5a;
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
  }
  return;
}



// FUNCTION 1488f9fd2 FUN_1488f9fd2 body=243 status=ok
// SIG undefined FUN_1488f9fd2(void)

longlong * FUN_1488f9fd2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418ae0;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b418b00;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148904e22(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fa0c8 FUN_1488fa0c8 body=259 status=ok
// SIG undefined FUN_1488fa0c8(void)

void FUN_1488fa0c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  code *local_70;
  undefined4 local_68;
  undefined1 local_60 [20];
  undefined1 local_4c [12];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1488fa1cc();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) != 0)) {
    uVar4 = FUN_141068cca(param_1);
    FUN_145d55fd2(&local_40,uVar4);
    if (local_40 != 0) {
      FUN_141068c44(param_1,local_4c);
      local_70 = FUN_1488fa39c;
      local_68 = 0;
      FUN_1488fa21a(local_60,param_1);
      local_78 = local_4c;
      FUN_145d5623a(local_40,&local_70,lVar3 + 0x18,local_60);
      *(undefined4 *)(param_1 + 100) = local_70._0_4_;
      FUN_1449db362(local_60);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fa1cc FUN_1488fa1cc body=78 status=ok
// SIG undefined FUN_1488fa1cc(void)

longlong * FUN_1488fa1cc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b2198();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1488fa21a FUN_1488fa21a body=386 status=ok
// SIG undefined FUN_1488fa21a(void)

longlong * FUN_1488fa21a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1488fa32b:
    *puVar5 = &PTR_LAB_14b419c70;
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
    *puVar5 = &PTR_FUN_14b418b30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1488fa32b;
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
    *puVar5 = &PTR_LAB_14b419c70;
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
    *puVar5 = &PTR_FUN_14b418b30;
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



// FUNCTION 1488fa39c FUN_1488fa39c body=262 status=ok
// SIG undefined FUN_1488fa39c(void)

void FUN_1488fa39c(longlong param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_3;
  if (lVar2 == 0) {
    if (*(int *)(param_1 + 100) == param_2) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      FUN_145a182aa(param_1 + 100);
      lVar2 = *(longlong *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (lVar2 != 0) {
        LOCK();
        piVar1 = (int *)(lVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  else {
    local_48 = FUN_1488fa556;
    local_40 = 0;
    FUN_148905240(local_38,param_1);
    FUN_145c81c2c(lVar2 + 0x130,&local_48,local_38);
    FUN_1449db362(local_38);
    *(longlong *)(param_1 + 0x68) = *param_3;
    plVar3 = (longlong *)param_3[1];
    plVar4 = *(longlong **)(param_1 + 0x70);
    if (plVar4 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(param_1 + 0x70);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x70) = plVar3;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fa4b6 FUN_1488fa4b6 body=159 status=ok
// SIG undefined FUN_1488fa4b6(void)

void FUN_1488fa4b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_1488fa1cc();
  if ((lVar3 != 0) && (*(int *)(param_1 + 100) != 0)) {
    uVar4 = FUN_141068cca(param_1);
    FUN_145d55fd2(&local_28,uVar4);
    if (local_28 != 0) {
      FUN_148895dd0(local_28,*(undefined4 *)(param_1 + 100));
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
    FUN_145a182aa((undefined4 *)(param_1 + 100));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fa556 FUN_1488fa556 body=62 status=ok
// SIG undefined FUN_1488fa556(void)

void FUN_1488fa556(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 0x60) = 1;
  FUN_145a182aa(param_1 + 100);
  plVar2 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001488fa589. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1488fa598 FUN_1488fa598 body=244 status=ok
// SIG undefined FUN_1488fa598(void)

longlong * FUN_1488fa598(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418c10;
  plVar1 = plVar4 + 2;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[2] = (longlong)&PTR_LAB_14b418c30;
  *(undefined8 *)((longlong)plVar4 + 0x74) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x7c) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x84) = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1489057ca(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fa690 FUN_1488fa690 body=425 status=ok
// SIG undefined FUN_1488fa690(void)

void FUN_1488fa690(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_1488fa83a();
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x20) != 0)) {
    DAT_14cb85d68 = DAT_14cb85d68 + 1;
    FUN_14495448a(&local_38,L"Request");
    FUN_1446f470e(&local_58,L"BinderBehaviorMod_PlayTrick",1);
    local_50 = local_58;
    local_48 = local_38;
    local_40 = 0;
    uVar6 = thunk_FUN_14050fd64();
    FUN_140b0c6f6(uVar6,&local_68,&local_50);
    plVar1 = local_60;
    if ((code **)(param_1 + 0x60) != &local_68) {
      *(code **)(param_1 + 0x60) = local_68;
      local_68 = (code *)0x0;
      plVar3 = *(longlong **)(param_1 + 0x68);
      if (local_60 != plVar3) {
        local_60 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x68) = plVar1;
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
    }
    plVar1 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    pcVar4 = *(code **)(param_1 + 0x60);
    if (pcVar4 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar4 + 8))(pcVar4,lVar5 + 0x20,0);
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      local_68 = FUN_1488faa0a;
      local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
      FUN_1488fa888(local_78,param_1);
      FUN_140844560(uVar6,&local_68,local_78);
      FUN_1407d097e(*(undefined8 *)(param_1 + 0x60));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fa83a FUN_1488fa83a body=78 status=ok
// SIG undefined FUN_1488fa83a(void)

longlong * FUN_1488fa83a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464b222e();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1488fa888 FUN_1488fa888 body=386 status=ok
// SIG undefined FUN_1488fa888(void)

longlong * FUN_1488fa888(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1488fa999:
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
    *puVar5 = &PTR_FUN_14b418c60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1488fa999;
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
    *puVar5 = &PTR_FUN_14b418c60;
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



// FUNCTION 1488faa0a FUN_1488faa0a body=64 status=ok
// SIG undefined FUN_1488faa0a(void)

void FUN_1488faa0a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) << 3;
    do {
      uVar1 = FUN_14479d2ce(lVar3);
      FUN_1488faa4a(param_1,uVar1);
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1488faa4a FUN_1488faa4a body=146 status=ok
// SIG undefined FUN_1488faa4a(void)

void FUN_1488faa4a(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1488fa83a();
  if (param_2 != (longlong *)0x0 && lVar2 != 0) {
    uVar1 = FUN_1407ca880();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar1);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        lVar2 = FUN_140963a30(lVar2 + 0x18);
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001488faad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x20))(plVar4,lVar2,*(code **)(*plVar4 + 0x20));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1488faadc FUN_1488faadc body=146 status=ok
// SIG undefined FUN_1488faadc(void)

void FUN_1488faadc(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1488fa83a();
  if (param_2 != (longlong *)0x0 && lVar2 != 0) {
    uVar1 = FUN_1407ca880();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar1);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        lVar2 = FUN_140963a30(lVar2 + 0x18);
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001488fab6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x28))(plVar4,lVar2,*(code **)(*plVar4 + 0x28));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1488fab6e FUN_1488fab6e body=137 status=ok
// SIG undefined FUN_1488fab6e(void)

void FUN_1488fab6e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = FUN_1488fa83a();
  if ((lVar4 != 0) && ((longlong)*(int *)(param_1 + 0x40) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar6 = (longlong)*(int *)(param_1 + 0x40) << 3;
    do {
      uVar5 = FUN_14479d2ce(lVar4);
      FUN_1488faadc(param_1,uVar5);
      lVar4 = lVar4 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488fabea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488fac08 FUN_1488fac08 body=238 status=ok
// SIG undefined FUN_1488fac08(void)

longlong * FUN_1488fac08(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418cd0;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_LAB_14b418cf0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148905c6a(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488facfe FUN_1488facfe body=262 status=ok
// SIG undefined FUN_1488facfe(void)

ulonglong FUN_1488facfe(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined7 uVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_1410cfc16();
  if (lVar5 == 0) {
    ppuVar8 = (undefined8 **)0x0;
  }
  else {
    ppuVar8 = &local_58;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_1410cfcf6(lVar5,ppuVar8);
    if ((longlong)(int)uStack_50 == 0) {
      ppuVar8 = (undefined8 **)0x0;
    }
    else {
      local_60 = local_58 + (int)uStack_50;
      puVar7 = local_58;
      do {
        lVar5 = (longlong)(int)param_2[1];
        uVar9 = (undefined7)((ulonglong)ppuVar8 >> 8);
        ppuVar8 = (undefined8 **)CONCAT71(uVar9,lVar5 == 0);
        if (lVar5 == 0) {
LAB_1488fadad:
          ppuVar8 = (undefined8 **)CONCAT71(uVar9,1);
          break;
        }
        uVar1 = *puVar7;
        lVar2 = *param_2;
        lVar10 = 0;
        while( true ) {
          lVar3 = *(longlong *)(lVar2 + lVar10);
          if (lVar3 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_1458cdfb6();
            uVar6 = FUN_144718840(lVar3,uVar6);
          }
          cVar4 = FUN_1457fbefe(uVar1,uVar6);
          if (cVar4 != '\0') break;
          lVar10 = lVar10 + 8;
          if (lVar5 * 8 == lVar10) goto LAB_1488fadad;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != local_60);
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppuVar8 & 0xffffffff;
}



// FUNCTION 1488fae06 FUN_1488fae06 body=326 status=ok
// SIG undefined FUN_1488fae06(void)

void FUN_1488fae06(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined1 local_b0 [16];
  undefined2 local_a0 [2];
  undefined4 local_9c;
  code *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1411c289e();
  lVar3 = FUN_1410d0064(param_1);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar4;
    uVar2 = rand();
    local_98 = FUN_1488faf4e;
    local_90 = 0;
    FUN_1410d00d8(local_b0,param_1,&local_98);
    local_98 = (code *)0x0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar1,param_1 + 0x78,&local_98,(float)(uVar2 & 0x7fff) / 32767.0 + 1.0);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(local_b0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488faf4e FUN_1488faf4e body=355 status=ok
// SIG undefined FUN_1488faf4e(void)

void FUN_1488faf4e(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  longlong local_58 [2];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_1410cfb5a();
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  FUN_1411c289e(param_1);
  local_48 = (longlong *)0x0;
  local_40 = 0x200000000;
  lVar4 = FUN_14135d882();
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x18) != '\x01')) {
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x38);
      lVar7 = (longlong)*(int *)(param_1 + 0x40) << 3;
      do {
        lVar5 = FUN_14479d2ce(lVar4);
        uVar1 = local_40;
        if (lVar5 != 0) {
          lVar8 = (longlong)(int)local_40;
          uVar3 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,uVar3);
          if (local_40._4_4_ < uVar3) {
            FUN_1489061fc(local_58,uVar1 & 0xffffffff);
          }
          plVar6 = local_48;
          if (local_48 == (longlong *)0x0) {
            plVar6 = local_58;
          }
          plVar6[lVar8] = lVar5;
        }
        lVar4 = lVar4 + 8;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
      plVar6 = local_48;
      local_60 = (int)local_40;
      goto LAB_1488faffa;
    }
LAB_1488faff6:
    local_60 = 0;
  }
  else {
    lVar4 = FUN_14479d2ce();
    if (lVar4 == 0) goto LAB_1488faff6;
    local_40 = CONCAT44(local_40._4_4_,1);
    local_60 = 1;
    local_58[0] = lVar4;
  }
  plVar6 = (longlong *)0x0;
LAB_1488faffa:
  local_68 = local_58;
  if (plVar6 != (longlong *)0x0) {
    local_68 = plVar6;
  }
  cVar2 = FUN_1488facfe(param_1);
  if (cVar2 != '\0') {
    FUN_140170a76(param_1,&DAT_14cb86210);
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fb0c8 FUN_1488fb0c8 body=293 status=ok
// SIG undefined FUN_1488fb0c8(void)

void FUN_1488fb0c8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_1410cfc16();
  if ((lVar2 != 0) && (cVar1 = FUN_146002902(lVar2,param_2), cVar1 != '\0')) {
    uVar3 = FUN_1410d0064();
    local_28 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_1460028be(uVar3,param_2);
    FUN_140170a76(param_1,&DAT_14cb86218);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (lVar2 != 0) {
      if ((longlong)*(int *)(lVar2 + 0x10) != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 8) + lVar4) == DAT_14cb86208) {
            FUN_1410cfe3c(param_1);
            lVar2 = *(longlong *)(param_1 + 0x28);
            break;
          }
          lVar4 = lVar4 + 0x28;
        } while ((longlong)*(int *)(lVar2 + 0x10) * 0x28 != lVar4);
        if (lVar2 == 0) goto LAB_1488fb0ed;
      }
      if ((longlong)*(int *)(lVar2 + 0x10) != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 8) + lVar4) == DAT_14cb86210) {
            FUN_1488faf4e(param_1);
            break;
          }
          lVar4 = lVar4 + 0x28;
        } while ((longlong)*(int *)(lVar2 + 0x10) * 0x28 != lVar4);
      }
    }
  }
LAB_1488fb0ed:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488fb21c FUN_1488fb21c body=381 status=ok
// SIG undefined FUN_1488fb21c(void)

longlong * FUN_1488fb21c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1488fb327:
    *puVar3 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b419050;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1488fb39a;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1488fb327;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b419050;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1488fb39a;
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



// FUNCTION 1488fb39a FUN_1488fb39a body=69 status=ok
// SIG undefined FUN_1488fb39a(void)

void FUN_1488fb39a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_1488fb3e0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fb3e0 FUN_1488fb3e0 body=480 status=ok
// SIG undefined FUN_1488fb3e0(void)

void FUN_1488fb3e0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x400000000;
  if ((longlong)(int)param_2[1] != 0) {
    lVar6 = *param_2;
    lVar7 = (longlong)(int)param_2[1] << 3;
    do {
      lVar3 = FUN_14479d2ce(lVar6);
      if (lVar3 != 0) {
        lVar4 = FUN_144a6c4d8();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar4 = (longlong)(int)local_40;
          uVar2 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,uVar2);
          if (local_40._4_4_ < uVar2) {
            FUN_14885072a(local_68);
          }
          puVar5 = local_48;
          if (local_48 == (undefined1 *)0x0) {
            puVar5 = local_68;
          }
          *(longlong *)(puVar5 + lVar4 * 8) = lVar3;
        }
      }
      lVar6 = lVar6 + 8;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
    lVar6 = (longlong)(int)local_40;
    puVar5 = local_68;
    if (local_48 != (undefined1 *)0x0) {
      puVar5 = local_48;
    }
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(puVar5 + lVar7) != 0) {
          FUN_14120f5c4();
        }
        FUN_1488fb69e(param_1);
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
  }
  if (0 < (longlong)*(int *)(param_1 + 0x80)) {
    lVar6 = (longlong)*(int *)(param_1 + 0x80);
    do {
      lVar7 = FUN_14479d2ce(lVar6 * 8 + -8 + *(longlong *)(param_1 + 0x78));
      if (lVar7 != 0) {
        puVar5 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar5 = local_68;
        }
        if ((longlong)(int)local_40 != 0) {
          lVar3 = 0;
          do {
            if (*(longlong *)(puVar5 + lVar3) == lVar7) goto LAB_1488fb580;
            lVar3 = lVar3 + 8;
          } while ((longlong)(int)local_40 * 8 != lVar3);
        }
        FUN_14120f5c4();
      }
      FUN_1488fb890(param_1);
LAB_1488fb580:
      bVar1 = 1 < lVar6;
      lVar6 = lVar6 + -1;
    } while (bVar1);
  }
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fb5c2 FUN_1488fb5c2 body=144 status=ok
// SIG undefined FUN_1488fb5c2(void)

void FUN_1488fb5c2(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar1 = FUN_140ec3c88(param_1);
    plVar2 = (longlong *)FUN_140ec3c65(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1 + 0x88,*(undefined8 *)(param_1 + 0xc0));
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  local_20 = 0;
  local_18 = 0;
  FUN_1488fb3e0(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fb654 FUN_1488fb654 body=73 status=ok
// SIG undefined FUN_1488fb654(void)

undefined8 * FUN_1488fb654(longlong param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x90);
  FUN_1447715ec(param_2 + 2,param_1 + 0x98);
  return param_2;
}



// FUNCTION 1488fb69e FUN_1488fb69e body=496 status=ok
// SIG undefined FUN_1488fb69e(void)

void FUN_1488fb69e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78 [4];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x78);
      lVar10 = (longlong)*(int *)(param_1 + 0x80) << 3;
      do {
        cVar6 = FUN_148906bb4(lVar8,param_2);
        if (cVar6 != '\0') goto LAB_1488fb857;
        lVar8 = lVar8 + 8;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    local_78[0] = 0;
    FUN_14485c47a(local_78,param_2);
    iVar4 = *(int *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x80) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar4 + 1U) {
      FUN_148906c2c((longlong *)(param_1 + 0x78),iVar4);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 8) = local_78[0];
    if ((longlong)*(int *)(param_2 + 0x498) != 0) {
      plVar9 = *(longlong **)(param_2 + 0x490);
      plVar3 = plVar9 + *(int *)(param_2 + 0x498);
      do {
        lVar8 = *plVar9;
        if (lVar8 != 0) {
          FUN_1448c1924(lVar8,&local_88);
          if (local_88 != 0) {
            local_58 = (undefined8 *)0x0;
            local_50 = 0x400000000;
            FUN_148847290(local_88,0,local_78);
            puVar11 = local_58;
            if (local_58 == (undefined8 *)0x0) {
              puVar11 = local_78;
            }
            lVar10 = (longlong)(int)local_50;
            if (lVar10 != 0) {
              lVar7 = 0;
              do {
                FUN_140ec4382(param_1,*(undefined8 *)((longlong)puVar11 + lVar7));
                lVar7 = lVar7 + 8;
              } while (lVar10 * 8 != lVar7);
            }
            if (local_58 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar5 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          FUN_148906cb2(local_78,param_1);
          FUN_14885086e(lVar8 + 0x9a8,&local_88,local_78);
          FUN_1449db362(local_78);
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar3);
    }
  }
LAB_1488fb857:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488fb890 FUN_1488fb890 body=517 status=ok
// SIG undefined FUN_1488fb890(void)

void FUN_1488fb890(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_2;
  if ((param_2 != 0) && ((longlong)*(int *)(param_2 + 0x498) != 0)) {
    plVar8 = *(longlong **)(param_2 + 0x490);
    plVar9 = plVar8 + *(int *)(param_2 + 0x498);
    do {
      lVar4 = *plVar8;
      if (lVar4 != 0) {
        FUN_1448c1924(lVar4,&local_78);
        lVar7 = local_78;
        if (local_78 != 0) {
          lVar1 = local_78 + 0x38;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          uStack_50 = 0;
          uStack_60 = lVar1;
          if (*(int *)(local_78 + 0x50) == 0) {
            iVar11 = 0;
          }
          else {
            FUN_1449c0562(&local_68);
            iVar11 = *(int *)(lVar7 + 0x50);
          }
          plVar10 = (longlong *)(lVar7 + 0x28);
          uStack_80 = CONCAT44(uStack_4c,uStack_50);
          local_88 = local_58;
          uVar5 = local_88;
          local_98 = (undefined4)local_68;
          uStack_94 = local_68._4_4_;
          uStack_90 = (undefined4)uStack_60;
          uStack_8c = uStack_60._4_4_;
          local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          iVar6 = local_88._4_4_;
          local_a0 = plVar10;
          if ((local_88._4_4_ != iVar11) || (local_88 = uVar5, uStack_60 != lVar1)) {
            do {
              local_88 = uVar5;
              lVar7 = FUN_14479d2ce(*local_a0 + (longlong)iVar6 * 0x58 + 0x30);
              if (lVar7 != 0) {
                FUN_14110eb88(param_1,lVar7);
              }
              local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
              FUN_1449c0562(&local_98);
              iVar6 = local_88._4_4_;
              uVar5 = local_88;
            } while (local_a0 != plVar10 ||
                     (CONCAT44(uStack_8c,uStack_90) != lVar1 || local_88._4_4_ != iVar11));
          }
        }
        plVar10 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_70 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar3 = (int *)((longlong)plVar10 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        FUN_140457ffc(lVar4 + 0x9a8,param_1);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar9);
  }
  local_68 = 0;
  FUN_14485c47a(&local_68,local_a8);
  local_a0 = &local_68;
  FUN_14890718a(param_1 + 0x78);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488fba9e FUN_1488fba9e body=323 status=ok
// SIG undefined FUN_1488fba9e(void)

longlong * FUN_1488fba9e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0xd8);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b419130;
  plVar1 = plVar4 + 2;
  memset(plVar4 + 3,0,0xa8);
  *(undefined4 *)(plVar4 + 7) = 2;
  *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)plVar4 + 0x54) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar4 + 100) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x6c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x74) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x7c) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x84) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b348ee0;
  *(undefined4 *)(plVar4 + 0x14) = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  *(undefined4 *)(plVar4 + 0x17) = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  *(undefined2 *)(plVar4 + 0x13) = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_1489072c0(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fbbe4 FUN_1488fbbe4 body=268 status=ok
// SIG undefined FUN_1488fbbe4(void)

void FUN_1488fbbe4(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14890735e(local_40,param_1);
  FUN_1414cf8c0(&DAT_14cadbeb0,local_48,local_40);
  FUN_1449db362(local_40);
  FUN_148907836(local_40,param_1);
  FUN_141211dc4(&DAT_14cadbec8,local_48,local_40);
  FUN_1449db362(local_40);
  lVar1 = FUN_140ec3c88(param_1);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x238))) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar5);
      if (lVar2 != 0) {
        lVar3 = FUN_1449f3324();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_1488fbdca(param_1,lVar2);
        }
      }
      lVar5 = lVar5 + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x238));
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488fbcf2 FUN_1488fbcf2 body=107 status=ok
// SIG undefined FUN_1488fbcf2(void)

void FUN_1488fbcf2(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = FUN_1447210f0(param_2);
  lVar2 = FUN_140ec3c88(param_1);
  if (lVar1 != lVar2) {
    return;
  }
  if (param_3 != 0) {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1488fbd4b;
  }
  param_3 = 0;
LAB_1488fbd4b:
  FUN_1488fbdca(param_1,param_3);
  return;
}



// FUNCTION 1488fbd5e FUN_1488fbd5e body=107 status=ok
// SIG undefined FUN_1488fbd5e(void)

void FUN_1488fbd5e(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = FUN_1447210f0(param_2);
  lVar2 = FUN_140ec3c88(param_1);
  if (lVar1 != lVar2) {
    return;
  }
  if (param_3 != 0) {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1488fbdb7;
  }
  param_3 = 0;
LAB_1488fbdb7:
  FUN_1488fbfd8(param_1,param_3);
  return;
}



// FUNCTION 1488fbdca FUN_1488fbdca body=299 status=ok
// SIG undefined FUN_1488fbdca(void)

void FUN_1488fbdca(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x90) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
      lVar4 = (longlong)*(int *)(param_1 + 0x90) << 3;
      do {
        cVar2 = FUN_1411db966(lVar3,param_2);
        if (cVar2 != '\0') goto LAB_1488fbec8;
        lVar3 = lVar3 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    local_38[0] = 0;
    FUN_14485c47a(local_38,param_2);
    iVar1 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
      FUN_14577298c(param_1 + 0x88,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8) = local_38[0];
    FUN_148907d0e(local_38,param_1);
    FUN_141230466(param_2 + 0x9c0,local_40,local_38);
    FUN_1449db362(local_38);
    lVar3 = *(longlong *)(param_2 + 0xa08);
    if (lVar3 != 0) {
      lVar4 = FUN_144a78b9e();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        FUN_1488fc1a8(param_1,lVar3);
      }
    }
  }
LAB_1488fbec8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fbef6 FUN_1488fbef6 body=225 status=ok
// SIG undefined FUN_1488fbef6(void)

void FUN_1488fbef6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140457ffc(&DAT_14cadbeb0,param_1);
  FUN_140457ffc(&DAT_14cadbec8,param_1);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x90);
  lVar2 = (longlong)local_30;
  pvVar3 = *(void **)(param_1 + 0x88);
  if (lVar2 != 0) {
    FUN_145835afc(&local_38,local_30,0);
    memcpy(local_38,pvVar3,lVar2 << 3);
    if ((longlong)local_30 != 0) {
      lVar2 = (longlong)local_30 << 3;
      pvVar3 = local_38;
      do {
        uVar1 = FUN_14479d2ce(pvVar3);
        FUN_1488fbfd8(param_1,uVar1);
        pvVar3 = (void *)((longlong)pvVar3 + 8);
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488fbfd8 FUN_1488fbfd8 body=262 status=ok
// SIG undefined FUN_1488fbfd8(void)

void FUN_1488fbfd8(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x90) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    lVar3 = (longlong)*(int *)(param_1 + 0x90) << 3;
    do {
      cVar1 = FUN_1411db966(lVar2,param_2);
      if (cVar1 != '\0') {
        FUN_140457ffc(param_2 + 0x9c0,param_1);
        lVar2 = *(longlong *)(param_2 + 0xa08);
        if (lVar2 != 0) {
          lVar3 = FUN_144a78b9e();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            FUN_1488fc354(param_1,lVar2);
          }
        }
        FUN_14110eb88(param_1,*(undefined8 *)(param_2 + 0xa08));
        local_40 = 0;
        FUN_14485c47a(&local_40,param_2);
        local_38 = &local_40;
        FUN_141291ed4(param_1 + 0x88);
        break;
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488fc0e0 FUN_1488fc0e0 body=200 status=ok
// SIG undefined FUN_1488fc0e0(void)

void FUN_1488fc0e0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar2 = (longlong)*(int *)(param_1 + 0x90) << 3;
    do {
      cVar1 = FUN_1411db966(lVar3,param_2);
      if (cVar1 != '\0') {
        if (param_3 == 0) {
LAB_1488fc15c:
          param_3 = 0;
        }
        else {
          lVar3 = FUN_144a78b9e();
          if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_1488fc15c;
        }
        FUN_1488fc354(param_1,param_3);
        if (param_4 != 0) {
          lVar3 = FUN_144a78b9e();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_1488fc190;
        }
        param_4 = 0;
LAB_1488fc190:
        FUN_1488fc1a8(param_1,param_4);
        return;
      }
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1488fc1a8 FUN_1488fc1a8 body=282 status=ok
// SIG undefined FUN_1488fc1a8(void)

void FUN_1488fc1a8(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x78);
      lVar5 = (longlong)*(int *)(param_1 + 0x80) << 3;
      do {
        cVar2 = FUN_140cf9e2e(lVar4,param_2);
        if (cVar2 != '\0') goto LAB_1488fc2a2;
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    local_38[0] = 0;
    FUN_14485c47a(local_38,param_2);
    iVar1 = *(int *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x80) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
      FUN_1489081e6((longlong *)(param_1 + 0x78),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 8) = local_38[0];
    uVar3 = FUN_1415c99d8(param_2 + 0x10b0);
    cVar2 = FUN_1415c99e0(uVar3);
    if (cVar2 != '\0') {
      FUN_140ec4382(param_1,param_2);
    }
    lVar4 = FUN_1415c99d8(param_2 + 0x10b0);
    FUN_148908354(local_38,param_1);
    FUN_14890826c(lVar4 + 0x40,local_40,local_38);
    FUN_1449db362(local_38);
  }
LAB_1488fc2a2:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fc2c4 FUN_1488fc2c4 body=143 status=ok
// SIG undefined FUN_1488fc2c4(void)

void FUN_1488fc2c4(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_2 + 8))(param_2), lVar2 != 0)) {
    lVar3 = FUN_144a78b9e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30 && ((longlong)*(int *)(param_1 + 0x80) != 0)))) {
      lVar3 = *(longlong *)(param_1 + 0x78);
      lVar4 = (longlong)*(int *)(param_1 + 0x80) << 3;
      do {
        cVar1 = FUN_140cf9e2e(lVar3,lVar2);
        if (cVar1 != '\0') {
          FUN_140ec4382(param_1,lVar2);
          return;
        }
        lVar3 = lVar3 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1488fc354 FUN_1488fc354 body=196 status=ok
// SIG undefined FUN_1488fc354(void)

void FUN_1488fc354(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x80) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    lVar3 = (longlong)*(int *)(param_1 + 0x80) << 3;
    do {
      cVar1 = FUN_140cf9e2e(lVar2,param_2);
      if (cVar1 != '\0') {
        lVar2 = FUN_1415c99d8(param_2 + 0x10b0);
        FUN_140457ffc(lVar2 + 0x40,param_1);
        local_40 = 0;
        FUN_14485c47a(&local_40,param_2);
        local_38 = &local_40;
        FUN_14890883a(param_1 + 0x78);
        FUN_14110eb88(param_1,param_2);
        break;
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fc41a FUN_1488fc41a body=275 status=ok
// SIG undefined FUN_1488fc41a(void)

longlong * FUN_1488fc41a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0xa8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b419380;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  *(undefined4 *)(plVar4 + 7) = 2;
  *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)plVar4 + 0x54) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar4 + 100) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x6c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x74) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x7c) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x84) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b348f10;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14890896e(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fc530 FUN_1488fc530 body=69 status=ok
// SIG undefined FUN_1488fc530(void)

void FUN_1488fc530(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_1457c1586();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fc576 FUN_1488fc576 body=428 status=ok
// SIG undefined FUN_1488fc576(void)

void FUN_1488fc576(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60 [4];
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x78);
      lVar7 = (longlong)*(int *)(param_1 + 0x80) << 3;
      do {
        cVar4 = FUN_148908fca(lVar5,param_2);
        if (cVar4 != '\0') goto LAB_1488fc614;
        lVar5 = lVar5 + 8;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    local_60[0] = 0;
    FUN_14485c47a(local_60,param_2);
    iVar3 = *(int *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x80) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar3 + 1U) {
      FUN_148909042((longlong *)(param_1 + 0x78),iVar3);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar3 * 8) = local_60[0];
    lVar5 = *(longlong *)(param_2 + 0x410);
    if (lVar5 != 0) {
      FUN_1448c1924(lVar5,&local_70);
      if (local_70 != 0) {
        local_40 = (undefined8 *)0x0;
        local_38 = 0x400000000;
        FUN_148847290(local_70,0,local_60);
        puVar6 = local_60;
        if (local_40 != (undefined8 *)0x0) {
          puVar6 = local_40;
        }
        lVar7 = (longlong)(int)local_38;
        if (lVar7 != 0) {
          lVar8 = 0;
          do {
            FUN_140ec4382(param_1,*(undefined8 *)((longlong)puVar6 + lVar8));
            lVar8 = lVar8 + 8;
          } while (lVar7 * 8 != lVar8);
        }
        if (local_40 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
          }
        }
      }
      FUN_1489090c8(local_60,param_1);
      FUN_14885086e(lVar5 + 0x9a8,&local_70,local_60);
      FUN_1449db362(local_60);
    }
  }
LAB_1488fc614:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488fc724 FUN_1488fc724 body=464 status=ok
// SIG undefined FUN_1488fc724(void)

void FUN_1488fc724(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x410), lVar4 != 0)) {
    FUN_1448c1924(lVar4,&local_70);
    if (local_70 != 0) {
      plVar2 = (longlong *)(local_70 + 0x28);
      lVar3 = local_70 + 0x38;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      local_48 = 0;
      iVar8 = 0;
      local_58 = lVar3;
      if (*(int *)(local_70 + 0x50) != 0) {
        FUN_1449c0562(&local_60);
        iVar8 = *(int *)(local_70 + 0x50);
      }
      local_90 = local_60;
      local_88 = local_58;
      local_80 = local_50;
      uVar5 = local_80;
      local_78 = local_48;
      local_74 = local_44;
      local_80._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar6 = local_80._4_4_;
      local_98 = plVar2;
      if ((local_80._4_4_ != iVar8) || (local_80 = local_50, local_58 != lVar3)) {
        do {
          local_80 = uVar5;
          lVar7 = FUN_14479d2ce(*local_98 + (longlong)iVar6 * 0x58 + 0x30);
          if (lVar7 != 0) {
            FUN_14110eb88(param_1,lVar7);
          }
          local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
          FUN_1449c0562(&local_90);
          iVar6 = local_80._4_4_;
          uVar5 = local_80;
        } while (local_98 != plVar2 || (local_88 != lVar3 || local_80._4_4_ != iVar8));
      }
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_68 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    FUN_140457ffc(lVar4 + 0x9a8,param_1);
  }
  local_60 = 0;
  FUN_14485c47a(&local_60,param_2);
  local_98 = &local_60;
  FUN_1489095a0(param_1 + 0x78);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488fc909 FUN_1488fc909 body=111 status=ok
// SIG undefined FUN_1488fc909(void)

void FUN_1488fc909(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*param_1 + 0x160))();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 8),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1489096e0(param_1,param_2 + 0x10);
  return;
}



// FUNCTION 1488fc978 FUN_1488fc978 body=679 status=ok
// SIG undefined FUN_1488fc978(void)

void FUN_1488fc978(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = (longlong)(int)param_1[1];
  local_c0 = param_2;
  if (lVar6 != 0) {
    if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 3) != 2)) {
      FUN_14009b010(param_2,2,0);
      lVar6 = (longlong)(int)param_1[1];
      if (lVar6 == 0) goto LAB_1488fcbea;
    }
    lVar5 = *param_1;
    lVar6 = lVar6 * 0x20 + lVar5;
    do {
      local_a8 = 0;
      plStack_a0 = (longlong *)0x0;
      FUN_14009b010(&local_a8,3,0);
      plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,DAT_14cb85d80);
      local_b8 = DAT_14cb85d78;
      FUN_1448075d0(&local_88,&local_b8);
      FUN_14187f5dc(&local_a8,&local_88,lVar5);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,DAT_14cb85d98);
      local_b8 = DAT_14cb85d90;
      FUN_1448075d0(&local_88,&local_b8);
      FUN_14187f678(&local_a8,&local_88,lVar5 + 8);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      local_b8 = 0;
      plStack_b0 = (longlong *)0x0;
      FUN_14009b010(&local_b8,2,0);
      if ((longlong)*(int *)(lVar5 + 0x18) != 0) {
        lVar7 = *(longlong *)(lVar5 + 0x10);
        lVar4 = (longlong)*(int *)(lVar5 + 0x18) * 0x18;
        do {
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          FUN_1418a5cba(lVar7,&local_88);
          FUN_14173818c(&local_b8,&local_88,0);
          plVar3 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar7 = lVar7 + 0x18;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
      }
      local_90 = DAT_14cb85db0;
      local_98 = DAT_14cb85da8;
      FUN_1448075d0(&local_88,&local_98);
      FUN_14161210c(&local_a8,&local_88);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      plVar3 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      FUN_14173818c(local_c0,&local_a8);
      plVar3 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar6);
  }
LAB_1488fcbea:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488fcc20 FUN_1488fcc20 body=666 status=ok
// SIG undefined FUN_1488fcc20(void)

void FUN_1488fcc20(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pbVar2 = (byte *)*param_2;
  plVar4 = &DAT_14c9a1270;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
    plVar4 = *(longlong **)(pbVar2 + 8);
  }
  if ((longlong)(int)plVar4[2] != 0) {
    lVar8 = *plVar4;
    local_a0 = (longlong)(int)plVar4[2] * 0x10 + lVar8;
    local_a8 = param_1;
    do {
      plVar4 = local_a8;
      iVar1 = (int)local_a8[1];
      *(uint *)(local_a8 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)local_a8 + 0xc) < iVar1 + 1U) {
        FUN_14884c51e(local_a8,iVar1);
      }
      lVar9 = *plVar4;
      lVar10 = (longlong)iVar1 * 0x20;
      puVar5 = (undefined8 *)(lVar9 + 0x10 + lVar10);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)(lVar9 + lVar10) = 0;
      ((undefined8 *)(lVar9 + lVar10))[1] = 0;
      local_90 = DAT_14cb85d80;
      local_98 = DAT_14cb85d78;
      FUN_1448075d0(local_88,&local_98);
      puVar5 = (undefined8 *)FUN_144a06846(lVar8,local_88);
      pbVar2 = (byte *)*puVar5;
      if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(pbVar2 + 8);
      }
      puVar5 = (undefined8 *)(lVar9 + lVar10);
      FUN_1446ddc76(&local_98,uVar6,1);
      *puVar5 = local_98;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      local_90 = DAT_14cb85d98;
      local_98 = DAT_14cb85d90;
      FUN_1448075d0(local_88,&local_98);
      uVar6 = FUN_144a06846(lVar8,local_88);
      uVar3 = FUN_140e1edd4(uVar6,0);
      *(undefined4 *)(puVar5 + 1) = uVar3;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      local_90 = DAT_14cb85db0;
      local_98 = DAT_14cb85da8;
      FUN_1448075d0(local_88,&local_98);
      puVar7 = (undefined8 *)FUN_144a06846(lVar8,local_88);
      pbVar2 = (byte *)*puVar7;
      plVar4 = &DAT_14c9a1270;
      if ((pbVar2 != (byte *)0x0) && (plVar4 = &DAT_14c9a1270, (*pbVar2 & 2) != 0)) {
        plVar4 = *(longlong **)(pbVar2 + 8);
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if ((longlong)(int)plVar4[2] != 0) {
        plVar11 = (longlong *)(lVar10 + lVar9 + 0x10);
        lVar9 = *plVar4;
        lVar10 = (longlong)(int)plVar4[2] << 4;
        do {
          iVar1 = *(int *)(puVar5 + 3);
          *(uint *)(puVar5 + 3) = iVar1 + 1U;
          if (*(uint *)((longlong)puVar5 + 0x1c) < iVar1 + 1U) {
            FUN_145c70f7e(plVar11,iVar1);
          }
          puVar7 = (undefined8 *)(*plVar11 + (longlong)iVar1 * 0x18);
          *puVar7 = 0xffffffff;
          puVar7[1] = 0;
          puVar7[2] = 0;
          FUN_14581d0f0(puVar7,lVar9);
          lVar9 = lVar9 + 0x10;
          lVar10 = lVar10 + -0x10;
        } while (lVar10 != 0);
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != local_a0);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488fcebc FUN_1488fcebc body=51 status=ok
// SIG undefined FUN_1488fcebc(void)

longlong FUN_1488fcebc(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    uVar1 = FUN_145a8455e();
    lVar2 = FUN_144718840(param_1,uVar1);
    if (lVar2 != 0) break;
    param_1 = *(longlong *)(param_1 + 0x20);
  }
  return lVar2;
}



// FUNCTION 1488fcef0 FUN_1488fcef0 body=73 status=ok
// SIG undefined FUN_1488fcef0(void)

undefined8 FUN_1488fcef0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))();
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
    if (plVar2[5] != 0) break;
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f0))(plVar2);
  }
  lVar1 = *(longlong *)(plVar2[5] + 0x30);
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar1 + 0x360);
}



// FUNCTION 1488fcf52 FUN_1488fcf52 body=162 status=ok
// SIG undefined FUN_1488fcf52(void)

longlong FUN_1488fcf52(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                      undefined1 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1406419cc((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar3 = FUN_1406418b4();
  *(undefined8 *)(lVar3 + 0x20) = *param_2;
  *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 1);
  FUN_1447715ec(lVar3 + 0x30,param_2 + 2);
  FUN_140427366(param_3,lVar3 + 0x60);
  *(undefined1 *)(lVar3 + 0x58) = param_5;
  *(undefined1 *)(lVar3 + 0x90) = param_4;
  return lVar3;
}



// FUNCTION 1488fd002 FUN_1488fd002 body=23 status=ok
// SIG undefined FUN_1488fd002(void)

byte FUN_1488fd002(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x18))();
  return bVar1 ^ *(byte *)(param_1 + 1);
}



// FUNCTION 1488fd01a FUN_1488fd01a body=158 status=ok
// SIG undefined FUN_1488fd01a(void)

ulonglong FUN_1488fd01a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (iVar1 != 0) {
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        if ((plVar3 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2), cVar4 == (char)plVar3[1]))
        goto LAB_1488fd06a;
        lVar6 = lVar6 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar6);
    }
  }
  else {
    if (iVar1 != 0) {
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        if ((plVar3 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2), cVar4 != (char)plVar3[1])) {
          uVar5 = CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
          goto LAB_1488fd06c;
        }
        lVar6 = lVar6 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar6);
    }
LAB_1488fd06a:
    uVar5 = 0;
  }
LAB_1488fd06c:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1488fd0b8 FUN_1488fd0b8 body=539 status=ok
// SIG undefined FUN_1488fd0b8(void)

ulonglong FUN_1488fd0b8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [40];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = *(undefined8 *)(param_1 + 0x10);
  local_78 = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*param_2 + 0x10))(param_2,local_70);
  cVar5 = FUN_1401144ce(local_70);
  if (cVar5 != '\0') {
    uVar9 = (**(code **)(*param_2 + 0x20))(param_2);
    FUN_1406128d2(&local_90,uVar9);
    if (local_88 != (longlong *)0x0) {
      iVar7 = (int)local_88[1];
      do {
        if (iVar7 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar8 = (int)local_88[1];
        bVar14 = iVar7 == iVar8;
        if (bVar14) {
          *(int *)(local_88 + 1) = iVar7 + 1;
          iVar8 = iVar7;
        }
        iVar7 = iVar8;
        UNLOCK();
        plVar11 = local_88;
      } while (!bVar14);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
      if (plVar11 != (longlong *)0x0) {
        if (local_90 != 0) {
          FUN_1489b49e0(local_90,&local_90,local_70);
          if (local_90 != 0) {
            if (*(char *)(local_90 + 0x21) == '\0') {
              lVar10 = FUN_14479d2ce(local_90 + 0x18);
              if (lVar10 == 0) {
                bVar6 = 3;
              }
              else {
                iVar7 = *(int *)(lVar10 + 0x498);
                if ((longlong)iVar7 != 0) {
                  lVar3 = *(longlong *)(lVar10 + 0x490);
                  lVar13 = 0;
                  do {
                    lVar4 = *(longlong *)(lVar3 + lVar13);
                    if ((lVar4 != 0) && (iVar8 = FUN_147e23d04(lVar4,0), 0 < iVar8)) {
                      bVar6 = 1;
                      goto LAB_1488fd19d;
                    }
                    lVar13 = lVar13 + 8;
                  } while ((longlong)iVar7 * 8 != lVar13);
                }
                bVar6 = FUN_1437ea93c(lVar10);
                bVar6 = bVar6 ^ 3;
              }
            }
            else {
              bVar6 = 0;
            }
LAB_1488fd19d:
            if (bVar6 == *(byte *)(param_1 + 0x1c)) {
              if (local_88 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_88 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_88)(local_88);
                  LOCK();
                  piVar1 = (int *)((longlong)local_88 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_88 + 0x10))(local_88);
                  }
                }
              }
              LOCK();
              plVar2 = plVar11 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              uVar12 = CONCAT71((int7)((ulonglong)local_88 >> 8),1);
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
              goto LAB_1488fd231;
            }
          }
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_88 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar1 = (int *)((longlong)local_88 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_88 + 0x10))(local_88);
              }
            }
          }
        }
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  uVar12 = 0;
LAB_1488fd231:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1488fd2d4 FUN_1488fd2d4 body=56 status=ok
// SIG undefined FUN_1488fd2d4(void)

ulonglong FUN_1488fd2d4(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  lVar3 = FUN_1411db1ae(lVar2);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    lVar2 = lVar3;
    bVar1 = FUN_1414875dc(lVar3);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar3 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 1488fd30c FUN_1488fd30c body=83 status=ok
// SIG undefined FUN_1488fd30c(void)

undefined8 FUN_1488fd30c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  if ((plVar2 != (longlong *)0x0) && ((longlong)(int)plVar2[1] != 0)) {
    lVar1 = *plVar2;
    lVar3 = 0;
    do {
      if ((*(longlong *)(lVar1 + lVar3) == *(longlong *)(param_1 + 0x10)) &&
         (*(longlong *)(lVar1 + 8 + lVar3) == *(longlong *)(param_1 + 0x18))) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)plVar2[1] * 0x10 != lVar3);
  }
  return 0;
}



// FUNCTION 1488fd360 FUN_1488fd360 body=283 status=ok
// SIG undefined FUN_1488fd360(void)

undefined8 FUN_1488fd360(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 *local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar3 = (longlong *)FUN_141883374(uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_64);
    local_70 = local_64;
    local_68 = local_5c;
    FUN_1448075d0(local_58);
    lVar4 = FUN_14060eaf6(local_58);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (lVar4 != 0) {
      FUN_140fa600a(lVar4,local_58);
      local_90 = &DAT_14cb88978;
      local_88 = 0;
      local_98 = param_1 + 0x10;
      (**(code **)(*plVar3 + 0x40))(plVar3,&local_78,local_58,&local_64);
      uVar1 = FUN_141043016(local_78);
      uVar2 = FUN_14891b22f(uVar1,*(undefined1 *)(param_1 + 0x1c));
      goto LAB_1488fd449;
    }
  }
  uVar2 = 0;
LAB_1488fd449:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fd47c FUN_1488fd47c body=54 status=ok
// SIG undefined FUN_1488fd47c(void)

undefined8 FUN_1488fd47c(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    cVar1 = (**(code **)(*param_2 + 0x38))(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else if ((*(char *)(param_1 + 0x10) == '\0') &&
          (cVar1 = (**(code **)(*param_2 + 0x38))(param_2), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1488fd4b2 FUN_1488fd4b2 body=470 status=ok
// SIG undefined FUN_1488fd4b2(void)

ulonglong FUN_1488fd4b2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *(undefined8 *)(param_1 + 0x10);
  local_60 = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*param_2 + 0x10))(param_2,local_58);
  cVar4 = FUN_1401144ce(local_58);
  if (cVar4 != '\0') {
    uVar6 = (**(code **)(*param_2 + 0x20))(param_2);
    FUN_1406128d2(&local_78,uVar6);
    if (local_70 != (longlong *)0x0) {
      iVar5 = (int)local_70[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_70[1];
        bVar10 = iVar5 == iVar3;
        if (bVar10) {
          *(int *)(local_70 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = local_70;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_78 != 0) {
          FUN_1489b4c32(local_78,&local_78,local_58);
          if (local_78 != 0) {
            cVar7 = '\0';
            cVar4 = FUN_1437ea990(local_78,0);
            if (cVar4 == '\0') {
              iVar5 = FUN_147e2434e(local_78,0);
              if (iVar5 < 1) {
                cVar4 = FUN_141800100(local_78);
                cVar7 = '\x02';
                if (cVar4 == '\0') goto LAB_1488fd593;
              }
              cVar7 = '\x01';
            }
LAB_1488fd593:
            if (cVar7 == *(char *)(param_1 + 0x1c)) {
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_70 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar1 = (int *)((longlong)local_70 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_70 + 0x10))(local_70);
                  }
                }
              }
              LOCK();
              plVar2 = plVar8 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              uVar9 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
              goto LAB_1488fd627;
            }
          }
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_70 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar1 = (int *)((longlong)local_70 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_70 + 0x10))(local_70);
              }
            }
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_1488fd627:
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1488fd68e FUN_1488fd68e body=409 status=ok
// SIG undefined FUN_1488fd68e(void)

undefined8 * FUN_1488fd68e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_3[1] != 0) && (param_3[2] != 0)) && (0 < *(int *)(param_3[2] + 8))) {
    lVar2 = (**(code **)(*(longlong *)*param_3 + 0x70))();
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        lVar2 = (**(code **)(*(longlong *)*param_3 + 0x68))();
      }
      else {
        local_a0 = *(undefined4 *)(param_1 + 0x78);
        local_a8 = *(undefined8 *)(param_1 + 0x70);
        lVar2 = FUN_140f54c6c(lVar2);
      }
      if (lVar2 != 0) {
        lVar2 = FUN_148910c6e(lVar2,*(undefined8 *)(param_1 + 0x7c));
        if (lVar2 != 0) {
          lVar3 = FUN_14479d2ce(*(longlong *)(*param_3 + 8) + 0x50);
          if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x30) == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
          }
          local_98[0] = 0;
          local_70 = 0;
          FUN_1456bb102(local_98,uVar4);
          FUN_1448729ea(param_1 + 0x20,local_68,local_98);
          uVar6 = FUN_144a7ecd0(local_68);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
          if (pcVar1 != (code *)0x0) {
            pppuVar5 = local_68;
            if (0x18 < local_50) {
              pppuVar5 = (undefined8 ***)local_68[0];
            }
            (*pcVar1)(pppuVar5);
          }
          if (0x18 < local_50) {
            FUN_1400020a8(local_68[0]);
          }
          FUN_144a5ac3a(local_98);
          FUN_14891e628(lVar2,uVar6);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fd828 FUN_1488fd828 body=123 status=ok
// SIG undefined FUN_1488fd828(void)

undefined8 FUN_1488fd828(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14624635c(param_1 + 0x20,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"TimeToAdd: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488fd8a4 FUN_1488fd8a4 body=887 status=ok
// SIG undefined FUN_1488fd8a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1488fd8a4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  int local_100;
  undefined1 local_f8;
  ulonglong local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 *local_78;
  int local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
  if (((lVar2 != 0) && (*(int *)(param_1 + 0x20) != 0)) && ((longlong)*(int *)(lVar2 + 0x88) != 0))
  {
    lVar1 = param_1 + 0x20;
    piVar3 = *(int **)(lVar2 + 0x80);
    lVar2 = (longlong)*(int *)(lVar2 + 0x88) * 0x30;
    do {
      if ((*piVar3 == *(int *)(param_1 + 0x20)) && (piVar3[2] == *(int *)(param_1 + 0x28))) {
        if ((piVar3 != (int *)0x0) && (lVar2 = FUN_1488ebd0c(), lVar2 != 0)) {
          if (*(char *)(lVar2 + 0x18) == '\x01') {
            FUN_1408226d0(lVar1,&local_108,1);
            puVar7 = local_108;
            if (local_100 == 0) {
              puVar7 = &DAT_149dfb77a;
            }
            lVar2 = (**(code **)(*(longlong *)*param_3 + 0x70))();
            if (lVar2 == 0) {
              local_88 = 0;
              local_80 = 0;
            }
            else {
              local_80 = *(undefined4 *)(lVar2 + 0x98);
              local_88 = *(undefined8 *)(lVar2 + 0x90);
            }
            FUN_1408226d0(&local_88,&local_78,1);
            puVar4 = &DAT_149dfb77a;
            if (local_70 != 0) {
              puVar4 = local_78;
            }
            FUN_140002266(&local_c8,L"%ls.%ls",puVar4,puVar7);
            puVar7 = &DAT_149dfb77a;
            if (local_c0 != 0) {
              puVar7 = local_c8;
            }
            FUN_1446f470e(&local_68,puVar7,1);
            if (local_c8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_78 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_108 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(char *)(lVar2 + 0x18) != '\0') {
              uVar6 = 0;
              uVar5 = 0;
              goto LAB_1488fd996;
            }
            local_68 = *(ulonglong *)(lVar2 + 0x20);
          }
          uVar6 = local_68 & 0xffffffff00000000;
          uVar5 = local_68;
LAB_1488fd996:
          local_b4 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          lStack_90 = 0;
          local_c8 = _DAT_14cb7d0e0;
          local_c0 = DAT_14cb7d0e8;
          lVar2 = (**(code **)(*(longlong *)*param_3 + 0x70))();
          if (lVar2 == 0) {
            local_108 = (undefined2 *)0x0;
            local_100 = 0;
          }
          else {
            local_100 = *(undefined4 *)(lVar2 + 0x98);
            local_108 = *(undefined2 **)(lVar2 + 0x90);
          }
          FUN_140e3418c(&local_108,&local_b4,1);
          local_b8[0] = 0;
          FUN_140641d04(local_b8);
          FUN_140d85a76(*param_3,lVar1,&local_c8);
          local_e8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          lStack_d0 = 0;
          local_108 = _DAT_14cb7d0f8;
          local_100 = DAT_14cb7d100;
          local_f8 = 0;
          local_f4 = uVar5 & 0xffffffff | uVar6;
          FUN_140641d04();
          FUN_140d85a76(*param_3,lVar1,&local_108);
          lVar2 = lStack_d0;
          *param_2 = 0;
          param_2[1] = 0;
          if (lStack_d0 != 0) {
            FUN_144a2da94(lStack_d0);
            FUN_1400020a8(lVar2);
          }
          lVar2 = lStack_90;
          if (lStack_90 != 0) {
            FUN_144a2da94(lStack_90);
            FUN_1400020a8(lVar2);
          }
          if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
            return param_2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        break;
      }
      piVar3 = piVar3 + 0xc;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
}



// FUNCTION 1488fdc1c FUN_1488fdc1c body=29 status=ok
// SIG undefined FUN_1488fdc1c(void)

undefined8 FUN_1488fdc1c(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x20,param_2,1);
  return param_2;
}



// FUNCTION 1488fdc3a FUN_1488fdc3a body=805 status=ok
// SIG undefined FUN_1488fdc3a(void)

undefined8 * FUN_1488fdc3a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  char *pcVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [43];
  undefined1 local_13d;
  int local_13c;
  longlong *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_110;
  longlong local_108 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 0x88))();
  if (lVar6 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_168);
  }
  local_128 = *param_3;
  local_138 = (longlong *)param_3[2];
  if (local_138 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_138 + 0xc) = *(int *)((longlong)local_138 + 0xc) + 1;
    UNLOCK();
  }
  local_13c = *(int *)(param_1 + 0x30);
  cVar2 = *(char *)(param_1 + 0x20);
  pcVar7 = "all";
  if (cVar2 == '\0') {
    pcVar7 = "Spawner";
  }
  local_130 = param_2;
  FUN_1400b22c2(&local_d8,pcVar7);
  iVar3 = (int)uStack_d0 + -1;
  if ((int)uStack_d0 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(local_108,iVar3,local_d8,1);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(lVar6 + 0x88) != 0) {
    puVar9 = *(undefined8 **)(lVar6 + 0x80);
    lVar6 = (longlong)*(int *)(lVar6 + 0x88) * 0x30;
    do {
      FUN_14890b878(puVar9,&local_110);
      local_118 = *(undefined4 *)(puVar9 + 1);
      local_120 = *puVar9;
      if ((cVar2 == '\x01') || (local_110 == local_108[0])) {
        if (1 < local_13c) {
          FUN_1408226d0(&local_120,&local_d8,1);
          iVar3 = *(int *)(param_1 + 0x30);
          iVar4 = iVar3 + -1;
          if (iVar3 == 0) {
            iVar4 = 0;
          }
          puVar8 = &DAT_149dfb77a;
          if (iVar3 != 0) {
            puVar8 = *(undefined2 **)(param_1 + 0x28);
          }
          cVar5 = FUN_144a791f8(&local_d8,puVar8,iVar4,1);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          if (cVar5 == '\0') goto LAB_1488fdd5f;
        }
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        if ((int)local_120 != 0) {
          local_d8 = 0xb;
          local_13d = *(undefined1 *)(param_1 + 0x38);
          FUN_140c25b54(&local_d8);
          local_e0 = local_118;
          local_e8 = local_120;
          FUN_144928d62(&local_c8,0,&local_e8);
          local_f0 = DAT_14cb7bde8;
          local_f8 = DAT_14cb7bde0;
          FUN_144928d62(&local_c8,1,&local_f8);
          FUN_140e1bbe8(local_108,local_13d);
          FUN_140641b42(&local_98,local_108);
        }
        FUN_140bc46c6(local_128,&local_d8,0,0);
        FUN_141638c42(&local_d8);
      }
LAB_1488fdd5f:
      puVar9 = puVar9 + 6;
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != 0);
  }
  puVar9 = local_130;
  *local_130 = 0;
  local_130[1] = 0;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_138 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_138 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar9;
}



// FUNCTION 1488fdf64 FUN_1488fdf64 body=32 status=ok
// SIG undefined FUN_1488fdf64(void)

undefined8 FUN_1488fdf64(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"Toggle Batch Alias");
  return param_2;
}



// FUNCTION 1488fdf84 FUN_1488fdf84 body=46 status=ok
// SIG undefined FUN_1488fdf84(void)

undefined8 * FUN_1488fdf84(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  (**(code **)(*(longlong *)*param_3 + 0xa8))((longlong *)*param_3,param_1 + 0x20,0);
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1488fdfb2 FUN_1488fdfb2 body=29 status=ok
// SIG undefined FUN_1488fdfb2(void)

undefined8 FUN_1488fdfb2(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x20,param_2,1);
  return param_2;
}



// FUNCTION 1488fdfd0 FUN_1488fdfd0 body=29 status=ok
// SIG undefined FUN_1488fdfd0(void)

undefined8 FUN_1488fdfd0(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x20,param_2,1);
  return param_2;
}



// FUNCTION 1488fdfee FUN_1488fdfee body=83 status=ok
// SIG undefined FUN_1488fdfee(void)

undefined8 * FUN_1488fdfee(longlong param_1,undefined8 *param_2)

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



// FUNCTION 1488fe042 FUN_1488fe042 body=42 status=ok
// SIG undefined FUN_1488fe042(void)

undefined8 FUN_1488fe042(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"%.2f",(double)*(float *)(param_1 + 0x20));
  return param_2;
}



// FUNCTION 1488fe06c FUN_1488fe06c body=303 status=ok
// SIG undefined FUN_1488fe06c(void)

undefined8 * FUN_1488fe06c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_3[1] != 0) && (param_3[2] != 0)) && (0 < *(int *)(param_3[2] + 8))) {
    uVar1 = (**(code **)(*(longlong *)*param_3 + 0x20))();
    local_90 = *(undefined4 *)(param_1 + 0x28);
    local_98 = *(undefined8 *)(param_1 + 0x20);
    (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_68);
    lVar2 = FUN_14883d4c2(&local_68,uVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (lVar2 != 0) {
      uVar1 = FUN_145a84472();
      plVar3 = (longlong *)FUN_144718840(lVar2,uVar1);
      if (plVar3 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar2 != 0) {
          uVar1 = (**(code **)(*(longlong *)*param_3 + 0x20))();
          local_58 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          local_88 = 0;
          uStack_80 = 0;
          FUN_1460028be(uVar1,lVar2);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fe19c FUN_1488fe19c body=29 status=ok
// SIG undefined FUN_1488fe19c(void)

undefined8 FUN_1488fe19c(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x20,param_2,1);
  return param_2;
}



// FUNCTION 1488fe1ba FUN_1488fe1ba body=379 status=ok
// SIG undefined FUN_1488fe1ba(void)

undefined8 * FUN_1488fe1ba(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14479d2ce(*(longlong *)(*param_3 + 8) + 0x58);
    FUN_145d55fd2(&local_40);
    if (local_40 != 0) {
      local_4c = (undefined4)DAT_14c948618;
      local_48 = DAT_14c948618._4_4_;
      local_44 = DAT_14c948620;
      if (*(char *)(param_1 + 0x48) == '\x01') {
        lVar3 = (**(code **)(*(longlong *)*param_3 + 0x70))();
        if (lVar3 == 0) {
          local_44 = 0;
          local_48 = 0;
          local_4c = 0;
        }
        else {
          local_4c = *(undefined4 *)(lVar3 + 0x90);
          local_48 = *(undefined4 *)(lVar3 + 0x94);
          local_44 = *(undefined4 *)(lVar3 + 0x98);
        }
      }
      local_78 = *(undefined8 *)(param_1 + 0x20);
      local_70 = *(undefined4 *)(param_1 + 0x28);
      uStack_6c = *(undefined4 *)(param_1 + 0x2c);
      uStack_68 = *(undefined4 *)(param_1 + 0x30);
      uStack_64 = *(undefined4 *)(param_1 + 0x34);
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_1 + 0x40);
      lVar3 = (longlong)local_58;
      _Src = *(void **)(param_1 + 0x38);
      if (lVar3 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,_Src,lVar3 * 2);
      }
      FUN_148895944(local_40,&local_78,&local_4c);
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
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488fe336 FUN_1488fe336 body=26 status=ok
// SIG undefined FUN_1488fe336(void)

undefined8 FUN_1488fe336(longlong param_1,undefined8 param_2)

{
  FUN_14475cc44(param_1 + 0x28);
  return param_2;
}



// FUNCTION 1488fe350 FUN_1488fe350 body=254 status=ok
// SIG undefined FUN_1488fe350(void)

undefined8 FUN_1488fe350(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_2 + 0x29) & 1) != 0) {
    local_34 = 0;
    local_2c = 0;
    uVar2 = FUN_14117c614();
    FUN_14047320e(uVar2,param_2,&local_34,0);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    lStack_40 = 0;
    uVar2 = FUN_140643e6c();
    FUN_14047320e(uVar2,param_2,&local_78,0);
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      local_80 = local_2c;
      local_88 = local_34;
      FUN_14068d1cc(param_1,&local_88,&local_78);
    }
    lVar1 = lStack_40;
    if (lStack_40 != 0) {
      FUN_144a2da94(lStack_40);
      FUN_1400020a8(lVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fe450 FUN_1488fe450 body=26 status=ok
// SIG undefined FUN_1488fe450(void)

undefined8 FUN_1488fe450(longlong param_1,undefined8 param_2)

{
  FUN_14883b1da(param_1 + 0x20);
  return param_2;
}



// FUNCTION 1488fe46a FUN_1488fe46a body=232 status=ok
// SIG undefined FUN_1488fe46a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1488fe46a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [4];
  undefined8 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70[0] = 0;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  lStack_48 = 0;
  local_80 = _DAT_14cb7d0b0;
  local_78 = DAT_14cb7d0b8;
  FUN_141881e36(local_90,L"Finished");
  FUN_140641b42(local_70,local_90);
  FUN_140d85a76(*param_3,param_1 + 0x20,&local_80);
  lVar1 = lStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if (lStack_48 != 0) {
    FUN_144a2da94(lStack_48);
    FUN_1400020a8(lVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fe554 FUN_1488fe554 body=29 status=ok
// SIG undefined FUN_1488fe554(void)

undefined8 FUN_1488fe554(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x20,param_2,1);
  return param_2;
}



// FUNCTION 1488fe572 FUN_1488fe572 body=740 status=ok
// SIG undefined FUN_1488fe572(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1488fe572(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb85ec8) && (FUN_144b3d300(&DAT_14cb85ec8), DAT_14cb85ec8 == -1)) {
    _DAT_14cb85ea0 = 0;
    uRam000000014cb85ea8 = 0;
    _DAT_14cb85eb0 = 0;
    DAT_14cb85eb8 = 0;
    uRam000000014cb85ec0 = 0;
    FUN_1446ddda2(&DAT_14cb85ea0,"params",0);
    atexit((_func_5014 *)&LAB_143de695a);
    _Init_thread_footer(&DAT_14cb85ec8);
  }
  cVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  uVar7 = local_d0;
  if ((cVar4 == '\0') &&
     (cVar4 = (**(code **)(*param_2 + 8))(param_2), uVar7 = local_d0, cVar4 != '\0')) {
    uVar7 = (**(code **)(*param_2 + 0x28))(param_2);
    uVar7 = FUN_144a06846(uVar7,&DAT_14cb85ea0);
    plVar8 = (longlong *)FUN_1412446d2(uVar7);
    plVar1 = plVar8 + 3;
    local_a8 = 0x100000000;
    local_98 = 0xffffffff;
    uStack_90 = 0;
    uStack_a0 = plVar1;
    if ((int)plVar8[6] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_a8);
      iVar10 = (int)plVar8[6];
    }
    uStack_c8 = CONCAT44(uStack_8c,uStack_90);
    local_d0 = local_98;
    uVar7 = local_d0;
    local_e0 = (undefined4)local_a8;
    uStack_dc = local_a8._4_4_;
    uStack_d8 = (undefined4)uStack_a0;
    uStack_d4 = uStack_a0._4_4_;
    local_d0._4_4_ = (int)((ulonglong)local_98 >> 0x20);
    local_e8 = plVar8;
    if ((local_d0._4_4_ != iVar10) || (uStack_a0 != plVar1)) {
      local_f8 = local_f8 + 0x38;
      iVar6 = local_d0._4_4_;
      local_d0 = uVar7;
      do {
        lVar2 = *local_e8;
        local_58 = 0;
        local_50 = 0;
        FUN_140785e92(local_70,param_2,(longlong)iVar6 * 0x40 + 0x28 + lVar2);
        if (local_50 == 0) {
          bVar5 = 0;
        }
        else {
          FUN_140c5894c(&local_a8,local_70);
          FUN_1447325ac(lVar2 + (longlong)iVar6 * 0x40,local_f0,1);
          local_c0 = local_f0;
          local_b8 = &local_a8;
          FUN_140ff1448(local_f8,local_ac,&local_c0,0);
          FUN_144a2da94(&local_a8);
          bVar5 = local_50;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar9 = local_70;
          if (0x18 < local_58) {
            ppppuVar9 = (undefined8 ****)local_70[0];
          }
          (*pcVar3)(ppppuVar9);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
        local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~uStack_dc);
        FUN_1449c0562(&local_e0);
        iVar6 = local_d0._4_4_;
        uVar7 = local_d0;
      } while (local_e8 != plVar8 ||
               ((longlong *)CONCAT44(uStack_d4,uStack_d8) != plVar1 || local_d0._4_4_ != iVar10));
    }
  }
  local_d0 = uVar7;
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1488fe858 FUN_1488fe858 body=1164 status=ok
// SIG undefined FUN_1488fe858(void)

undefined8 * FUN_1488fe858(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  longlong *local_180;
  undefined8 local_178;
  longlong local_170;
  uint local_168;
  int iStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  longlong *local_150;
  undefined1 local_144 [4];
  undefined1 local_140 [40];
  longlong local_118;
  undefined1 local_108 [40];
  longlong local_e0;
  longlong local_d0;
  longlong local_c8;
  uint local_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar3 = FUN_14479d2ce(*(longlong *)(*param_3 + 8) + 0x50);
  iVar5 = 0;
  if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) &&
      (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x170) != 0)) {
    lVar4 = FUN_1411531be();
    lVar3 = *(longlong *)(lVar3 + 0x170);
    if (lVar3 != 0) {
      local_1c0 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 == 0)) goto LAB_1488fe900;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        local_1c0 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          local_1c0 = lVar3;
        }
        goto LAB_1488fe900;
      }
    }
  }
  local_1c0 = 0;
LAB_1488fe900:
  lVar4 = (**(code **)(*(longlong *)*param_3 + 0x70))();
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar3 = param_1 + 0x48;
  local_d0 = 0x100000000;
  local_c0 = 0xffffffff;
  iStack_bc = 0;
  local_b8 = 0;
  local_c8 = lVar3;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1449c0562(&local_d0);
    iVar5 = *(int *)(param_1 + 0x60);
  }
  local_168 = local_c0;
  iStack_164 = iStack_bc;
  local_160 = local_b8;
  local_15c = local_b4;
  local_178 = local_d0;
  local_170 = local_c8;
  local_180 = plVar1;
  if ((iStack_bc != iVar5) || (local_c8 != lVar3)) {
    do {
      lVar2 = *local_180 + (longlong)iStack_164 * 0x48;
      if (*(char *)(lVar2 + 0x38) == '\x16') {
        FUN_140c59106(lVar2 + 0x10,&local_18c);
        local_1b8 = lVar4;
        if (lVar4 != 0) {
          local_190 = local_184;
          local_198 = local_18c;
          lVar4 = FUN_14189d07a(lVar4);
          if (lVar4 != 0) {
            local_1b0 = param_2;
            FUN_14096c63a(lVar4 + 0x10,local_140);
            FUN_140c258c2(local_140,local_108);
            FUN_140b126e4(local_108,&local_1a8);
            FUN_1470ed5e8(&local_d0,&local_1a8);
            local_158 = lVar2;
            local_150 = &local_d0;
            FUN_1410f809a(&local_98,local_144,&local_158,0);
            FUN_144a2da94(&local_d0);
            if (local_e0 != 0) {
              FUN_1400020a8();
            }
            param_2 = local_1b0;
            lVar4 = local_1b8;
            if (local_118 != 0) {
              FUN_1400020a8();
              lVar4 = local_1b8;
            }
            goto LAB_1488feb5d;
          }
        }
        local_1a8 = 0;
        uStack_1a0 = 0;
        FUN_1470ed5e8(&local_d0);
        local_158 = lVar2;
        local_150 = &local_d0;
        FUN_1410f809a(&local_98,local_144,&local_158,0);
        FUN_144a2da94(&local_d0);
        lVar4 = local_1b8;
      }
      else {
        local_c8 = lVar2 + 8;
        local_d0 = lVar2;
        FUN_140ffa80e(&local_98,local_108);
      }
LAB_1488feb5d:
      local_168 = local_168 & ~local_178._4_4_;
      FUN_1449c0562(&local_178);
    } while (local_180 != plVar1 || (local_170 != lVar3 || iStack_164 != iVar5));
  }
  switch(*(undefined1 *)(param_1 + 0x88)) {
  case 0:
    FUN_14885d902(local_1c0,param_1 + 0x20,&local_98);
    break;
  case 1:
    FUN_14885db62(local_1c0,param_1 + 0x20,&local_98,param_1 + 0x8c);
    break;
  case 2:
    local_1c8 = *(undefined1 *)(param_1 + 0xb8);
    FUN_14885d9f4(local_1c0,param_1 + 0x20,&local_98,param_1 + 0x98);
    break;
  case 3:
    lVar3 = FUN_148909cda(param_1 + 0xc0);
    if (lVar3 != 0) {
      lVar3 = FUN_148909cda(param_1 + 0xc0);
      FUN_14885dc5c(local_1c0,param_1 + 0x20,&local_98,*(undefined8 *)(lVar3 + 0x10));
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(&local_98);
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488fece6 FUN_1488fece6 body=71 status=ok
// SIG undefined FUN_1488fece6(void)

undefined8 FUN_1488fece6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x20);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fed2e FUN_1488fed2e body=65 status=ok
// SIG undefined FUN_1488fed2e(void)

void FUN_1488fed2e(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  FUN_145a182aa(param_1 + 0x38);
  FUN_1488fed70(param_1,uVar1,param_2);
  FUN_145a182aa(param_1 + 0x38);
  FUN_1458b44fe(param_1);
  return;
}



// FUNCTION 1488fed70 FUN_1488fed70 body=170 status=ok
// SIG undefined FUN_1488fed70(void)

void FUN_1488fed70(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0 && *(char *)(param_1 + 0x50) == '\0') {
    uVar3 = FUN_14479d2ce(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x58);
    FUN_145d55fd2(&local_30,uVar3);
    if (local_30 != 0) {
      if (param_3 == '\0') {
        FUN_148895dd0(local_30,param_2);
      }
      else {
        FUN_146206a78();
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fee1c FUN_1488fee1c body=34 status=ok
// SIG undefined FUN_1488fee1c(void)

void FUN_1488fee1c(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_145a182aa(param_1 + 0x38);
  FUN_1458b44fe(param_1);
  return;
}



// FUNCTION 1488fee3e FUN_1488fee3e body=26 status=ok
// SIG undefined FUN_1488fee3e(void)

undefined8 FUN_1488fee3e(longlong param_1,undefined8 param_2)

{
  FUN_14475cc44(param_1 + 0x28);
  return param_2;
}



// FUNCTION 1488fee58 FUN_1488fee58 body=937 status=ok
// SIG undefined FUN_1488fee58(void)

longlong * FUN_1488fee58(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((param_3[1] != 0) && (param_3[2] != 0)) && (0 < *(int *)(param_3[2] + 8))) &&
     (*(longlong *)(param_1 + 0x28) != 0)) {
    FUN_148895f78(&local_70,param_1 + 0x20);
    uVar4 = local_70;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    plVar9 = *(longlong **)(param_1 + 0x30);
    if (plVar9 == (longlong *)0x0) {
      FUN_148896256(local_70,uVar5);
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      FUN_148896256(uVar4,uVar5);
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    uVar5 = local_70;
    uVar4 = FUN_1464edbe2();
    FUN_1488960fc(uVar5,uVar4,0);
    uVar5 = FUN_14479d2ce(*(longlong *)(*param_3 + 8) + 0x58);
    FUN_145d55fd2(&local_80,uVar5);
    bVar2 = true;
    if (local_80 != 0) {
      lVar6 = (**(code **)(*(longlong *)*param_3 + 0x70))();
      if (lVar6 == 0) {
        local_60 = (code *)0x0;
        local_58 = 0;
      }
      else {
        local_58 = *(undefined4 *)(lVar6 + 0x98);
        local_60 = *(code **)(lVar6 + 0x90);
      }
      local_50 = local_70;
      local_48 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      FUN_148895926(local_80,&local_90,&local_50,&local_60);
      plVar9 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_48 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_90 == 0) {
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_88 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)local_88 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_88 + 0x10))(local_88);
            }
          }
        }
      }
      else {
        plVar7 = (longlong *)FUN_14001cc68(0x68,0x10);
        FUN_14890a0f2(plVar7,param_3);
        plVar9 = plVar7 + 2;
        local_a0 = plVar9;
        local_98 = plVar7;
        FUN_14890a1ac(&local_a0,plVar9);
        *(undefined4 *)(plVar7 + 9) = *(undefined4 *)(local_90 + 0x184);
        lVar6 = local_90 + 0x130;
        local_60 = FUN_145a1827a;
        local_58 = 0;
        FUN_14890a254(&local_50,&local_a0);
        FUN_145c81c2c(lVar6,&local_60,&local_50);
        FUN_1449db362(&local_50);
        plVar3 = local_88;
        plVar7[10] = local_90;
        plVar8 = (longlong *)plVar7[0xb];
        if (plVar8 != local_88) {
          if (local_88 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_88 + 0xc) = *(int *)((longlong)local_88 + 0xc) + 1;
            UNLOCK();
            plVar8 = (longlong *)plVar7[0xb];
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          plVar7[0xb] = (longlong)plVar3;
          plVar7 = local_98;
          plVar9 = local_a0;
        }
        plVar8 = local_98;
        *param_2 = (longlong)plVar9;
        param_2[1] = (longlong)plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_98 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
        }
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_88 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)local_88 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_88 + 0x10))(local_88);
            }
          }
        }
        bVar2 = false;
      }
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_78 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
        }
      }
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_68 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    if (!bVar2) goto LAB_1488ff087;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1488ff087:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ff202 FUN_1488ff202 body=26 status=ok
// SIG undefined FUN_1488ff202(void)

undefined8 FUN_1488ff202(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x20);
  return param_2;
}



// FUNCTION 1488ff21c FUN_1488ff21c body=65 status=ok
// SIG undefined FUN_1488ff21c(void)

undefined8 FUN_1488ff21c(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1448a1d26();
  if ((cVar1 != '\0') && (*(longlong *)(param_2 + 0x20) == *(longlong *)(param_1 + 0x20))) {
    uVar2 = FUN_14470eb98(param_2 + 0x28,param_1 + 0x28);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1488ff25e FUN_1488ff25e body=227 status=ok
// SIG undefined FUN_1488ff25e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1488ff25e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [4];
  undefined8 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70[0] = 0;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  lStack_48 = 0;
  local_80 = _DAT_14cb7d0c8;
  local_78 = DAT_14cb7d0d0;
  FUN_140e1bbe8(local_90,1);
  FUN_140641b42(local_70,local_90);
  FUN_140d85a76(*param_3,param_1 + 0x20,&local_80);
  lVar1 = lStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if (lStack_48 != 0) {
    FUN_144a2da94(lStack_48);
    FUN_1400020a8(lVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ff342 FUN_1488ff342 body=29 status=ok
// SIG undefined FUN_1488ff342(void)

undefined8 FUN_1488ff342(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x20,param_2,1);
  return param_2;
}



// FUNCTION 1488ff360 FUN_1488ff360 body=232 status=ok
// SIG undefined FUN_1488ff360(void)

undefined8 * FUN_1488ff360(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*(longlong *)*param_3 + 0x88))();
  if (lVar2 != 0) {
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_40 = *(undefined8 *)(param_1 + 0x20);
    plVar3 = (longlong *)FUN_14890b8ae(lVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar3 + 8))(plVar3);
      lVar4 = FUN_14653396a();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        plVar5 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x70))();
        if (plVar5 != (longlong *)0x0) {
          uVar1 = *(undefined1 *)(param_1 + 0x2c);
          FUN_148920596(plVar3,&local_40);
          (**(code **)(*plVar5 + 0xa8))
                    (plVar5,&local_40,CONCAT71((int7)((ulonglong)param_1 >> 8),uVar1) & 0xffffffff);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ff44a FUN_1488ff44a body=29 status=ok
// SIG undefined FUN_1488ff44a(void)

undefined8 FUN_1488ff44a(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x20,param_2,1);
  return param_2;
}



// FUNCTION 1488ff468 FUN_1488ff468 body=722 status=ok
// SIG undefined FUN_1488ff468(void)

undefined8 FUN_1488ff468(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_3;
  local_e0 = param_2;
  if (0 < (int)param_1[1]) {
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    FUN_14009b010(&local_88,2,0);
    FUN_1446dcc2e(local_e8,&local_88);
    plVar5 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    lVar4 = param_1[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar3 = *param_1;
      lVar6 = lVar3 + 0x10;
      do {
        local_a8 = 0;
        plStack_a0 = (longlong *)0x0;
        FUN_14009b010(&local_a8,3,0);
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        FUN_14009b010(&local_b8,1,0);
        local_c8 = *(undefined8 *)(lVar6 + -0x10);
        local_c0 = *(undefined4 *)(lVar6 + -8);
        FUN_1448075d0(&local_88,&local_c8);
        FUN_1402afb54(&local_b8,&local_88);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        plStack_d0 = (longlong *)CONCAT44(plStack_d0._4_4_,DAT_14cb85ed8);
        local_d8 = DAT_14cb85ed0;
        FUN_1448075d0(&local_88,&local_d8);
        FUN_14161210c(&local_a8,&local_88);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (*(char *)(lVar6 + 0x20) != '\0') {
          local_d8 = 0;
          plStack_d0 = (longlong *)0x0;
          FUN_1470eb76c(lVar6,local_e0,&local_d8,0);
          local_90 = DAT_14cb85ef0;
          local_98 = DAT_14cb85ee8;
          FUN_1448075d0(&local_88,&local_98);
          FUN_14161210c(&local_a8,&local_88);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          plVar5 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_d0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_d0)(plStack_d0);
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
        FUN_14173818c(local_e8,&local_a8);
        plVar5 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        plVar5 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_a0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        lVar7 = lVar6 + 0x38;
        lVar6 = lVar6 + 0x48;
      } while (lVar7 != lVar3 + (longlong)(int)lVar4 * 0x48);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1488ff73c FUN_1488ff73c body=115 status=ok
// SIG undefined FUN_1488ff73c(void)

undefined2 * FUN_1488ff73c(undefined8 *param_1,undefined2 *param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    piVar1 = (int *)*param_1;
    lVar2 = (longlong)*(int *)(param_1 + 1) * 0x48;
    do {
      if ((*piVar1 == *param_3) && (piVar1[2] == param_3[2])) {
        if (piVar1 != (int *)0x0) {
          FUN_14096c63a(piVar1 + 4,param_2);
          return param_2;
        }
        break;
      }
      piVar1 = piVar1 + 0x12;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return param_2;
}



// FUNCTION 1488ff7b8 FUN_1488ff7b8 body=180 status=ok
// SIG undefined FUN_1488ff7b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488ff7b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb85fb8) {
    FUN_144b3d300(&DAT_14cb85fb8);
    if (DAT_14cb85fb8 == -1) {
      _DAT_14cb85f68 = 0;
      _DAT_14cb85f70 = 0;
      _DAT_14cb85f48 = 0;
      _DAT_14cb85f50 = 0;
      _DAT_14cb85f74 = 0xffffffff00000080;
      DAT_14cb85f7c = 0;
      DAT_14cb85f88 = 0;
      _DAT_14cb85f90 = 0;
      DAT_14cb85f98 = 0;
      uRam000000014cb85fa0 = 0;
      _DAT_14cb85fa8 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb85fb0);
      atexit(FUN_143de696b);
      _Init_thread_footer(&DAT_14cb85fb8);
      return;
    }
  }
  return;
}



// FUNCTION 1488ff86c FUN_1488ff86c body=50 status=ok
// SIG undefined FUN_1488ff86c(void)

undefined8 * FUN_1488ff86c(undefined8 *param_1)

{
  FUN_1488ff7b8();
  param_1[1] = &DAT_14cb85f48;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b417af0;
  return param_1;
}



// FUNCTION 1488ff89e FUN_1488ff89e body=92 status=ok
// SIG undefined FUN_1488ff89e(void)

undefined8 * FUN_1488ff89e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414bc928(&DAT_14cb86020);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b348eb0;
  FUN_1488ff7b8();
  puVar1[4] = &DAT_14cb85f48;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = &PTR_FUN_14b417af0;
  *(undefined4 *)(puVar1 + 7) = 3;
  return puVar1;
}



// FUNCTION 1488ff8fa FUN_1488ff8fa body=44 status=ok
// SIG undefined FUN_1488ff8fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488ff8fa(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8602c = _DAT_14cb8602c + -1;
  *param_1 = DAT_14cb86020;
  DAT_14cb86020 = param_1;
  return;
}



// FUNCTION 1488ff926 FUN_1488ff926 body=84 status=ok
// SIG undefined FUN_1488ff926(void)

void FUN_1488ff926(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b348eb0;
  FUN_1488ff7b8();
  param_1[4] = &DAT_14cb85f48;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = &PTR_FUN_14b417af0;
  *(undefined4 *)(param_1 + 7) = 3;
  return;
}



// FUNCTION 1488ff9a8 FUN_1488ff9a8 body=212 status=ok
// SIG undefined FUN_1488ff9a8(void)

void FUN_1488ff9a8(void)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1488ff7b8();
  if (DAT_14cb85f50 == DAT_14cb85f7c) {
    FUN_1446ddc76(local_20,"KeepAlive",1);
    FUN_1405593a8(&DAT_14cb85f48,&DAT_14cb6bd50,local_20);
    FUN_1446ddc76(local_20,"Shelve",1);
    FUN_1405593a8(&DAT_14cb85f48,&DAT_14cb6bd60,local_20);
    FUN_1446ddc76(local_20,&DAT_14b417b9d,1);
    FUN_1405593a8(&DAT_14cb85f48,&DAT_14cb6bd58,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ffa7e FUN_1488ffa7e body=22 status=ok
// SIG undefined FUN_1488ffa7e(void)

undefined8 FUN_1488ffa7e(int *param_1)

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
  
  plVar4 = DAT_14cb860c8;
  if (DAT_14cb860c8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb860c8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb860c8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb860c8[0x3a] <= *(int *)((longlong)DAT_14cb860c8 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb860c8 + 0x300))(DAT_14cb860c8);
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



// FUNCTION 1488ffb34 FUN_1488ffb34 body=112 status=ok
// SIG undefined FUN_1488ffb34(void)

undefined8 FUN_1488ffb34(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x50), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar4 = 0;
    do {
      lVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 8))();
      if ((*(int *)(param_2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
          param_2 + 0x30)) {
        return *(undefined8 *)(lVar2 + lVar4);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return 0;
}



// FUNCTION 1488ffba4 FUN_1488ffba4 body=147 status=ok
// SIG undefined FUN_1488ffba4(void)

bool FUN_1488ffba4(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  int iVar1;
  undefined1 auStack_68 [44];
  ulonglong local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 2) {
    FUN_144a7660c(param_1,&local_3c,1);
    *(undefined4 *)(param_2 + 1) = local_34;
    *param_2 = local_3c;
    FUN_1400f0e12(param_1,&local_3c,1);
    *(undefined4 *)(param_3 + 1) = local_34;
    *param_3 = local_3c;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1 == 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ffc38 FUN_1488ffc38 body=85 status=ok
// SIG undefined FUN_1488ffc38(void)

undefined8 FUN_1488ffc38(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  FUN_143de6a6b(param_1,&local_20,param_3,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ffc8e FUN_1488ffc8e body=85 status=ok
// SIG undefined FUN_1488ffc8e(void)

undefined8 FUN_1488ffc8e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  FUN_143de6a6b(param_1,&local_20,param_3,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ffce4 FUN_1488ffce4 body=28 status=ok
// SIG undefined FUN_1488ffce4(void)

undefined8 FUN_1488ffce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1408226d0(param_3,param_2,1);
  return param_2;
}



// FUNCTION 1488ffd00 FUN_1488ffd00 body=144 status=ok
// SIG undefined FUN_1488ffd00(void)

void FUN_1488ffd00(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      lVar2 = FUN_1411db1ae(lVar2);
      if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0xe0), plVar1 != (longlong *)0x0)) {
        local_28 = *param_2;
        FUN_1401533ba(local_34,&local_28,1);
        (**(code **)(*plVar1 + 0x38))(plVar1,local_34,param_3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ffd92 FUN_1488ffd92 body=139 status=ok
// SIG undefined FUN_1488ffd92(void)

void FUN_1488ffd92(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [12];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      lVar2 = FUN_1411db1ae(lVar2);
      if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0xe0), plVar1 != (longlong *)0x0)) {
        local_20 = *param_2;
        FUN_1401533ba(local_2c,&local_20,1);
        (**(code **)(*plVar1 + 0x88))(plVar1,local_2c);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ffe1e FUN_1488ffe1e body=7 status=ok
// SIG undefined FUN_1488ffe1e(void)

bool FUN_1488ffe1e(int *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 1488ffe25 FUN_1488ffe25 body=275 status=ok
// SIG undefined FUN_1488ffe25(void)

undefined8 FUN_1488ffe25(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(local_50,&local_60);
  uVar2 = FUN_14060eaf6(local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (param_1 == 0) {
LAB_1488ffed8:
    uVar2 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x1f0) == 0) {
LAB_1488ffec2:
      lVar3 = FUN_1411db1ae(param_1);
      if (lVar3 == 0) goto LAB_1488ffed8;
    }
    else {
      lVar3 = FUN_144a79464();
      plVar4 = *(longlong **)(param_1 + 0x1f0);
      if (((((plVar4 == (longlong *)0x0) || (lVar3 == 0)) || (lVar1 = plVar4[2], lVar1 == 0)) ||
          ((*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)))) ||
         ((lVar3 = (**(code **)(*plVar4 + 0x470))(), lVar3 == 0 ||
          ((plVar4 = (longlong *)FUN_14890b80c(lVar3,uVar2,param_3), plVar4 == (longlong *)0x0 ||
           (lVar3 = (**(code **)(*plVar4 + 0x2b8))(plVar4), lVar3 == 0)))))) goto LAB_1488ffec2;
    }
    uVar2 = *(undefined8 *)(lVar3 + 0xe0);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1488fff3a FUN_1488fff3a body=42 status=ok
// SIG undefined FUN_1488fff3a(void)

void FUN_1488fff3a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    FUN_14890e3da(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 1488fff64 FUN_1488fff64 body=114 status=ok
// SIG undefined FUN_1488fff64(void)

void FUN_1488fff64(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = *(undefined4 *)(param_3 + 1);
  local_1c = *param_3;
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_10 = param_4;
  lVar1 = (**(code **)(*param_1 + 8))(param_1,&local_28);
  if (lVar1 != 0) {
    FUN_14890e4f4(lVar1,&local_1c,local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488fffd8 FUN_1488fffd8 body=119 status=ok
// SIG undefined FUN_1488fffd8(void)

void FUN_1488fffd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  local_1c = 0;
  local_30 = 0;
  local_28 = 0;
  cVar1 = FUN_1488ffba4(param_2);
  if (cVar1 != '\0') {
    FUN_1488fff64(param_1,&local_24,&local_30,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148900050 FUN_148900050 body=58 status=ok
// SIG undefined FUN_148900050(void)

undefined8 *
FUN_148900050(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_3);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_14890e1a2(lVar1,param_2,param_4);
  }
  return param_2;
}



// FUNCTION 14890008a FUN_14890008a body=97 status=ok
// SIG undefined FUN_14890008a(void)

undefined8 FUN_14890008a(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_2[2] == 0) {
    uVar1 = *param_2;
  }
  else {
    uVar1 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar2 = FUN_140f16416((longlong *)(param_1 + 0x60),uVar1,param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x60),
     puVar4 = (undefined8 *)(lVar3 + 0x10), puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 1489000ec FUN_1489000ec body=473 status=ok
// SIG undefined FUN_1489000ec(void)

ulonglong FUN_1489000ec(longlong *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  int local_c0 [2];
  int local_b8;
  int local_b4 [2];
  int local_ac;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar6 = 0;
  local_8c = 0;
  local_84 = 0;
  local_98 = 0;
  local_90 = 0;
  cVar4 = FUN_1488ffba4(param_2);
  if (cVar4 != '\0') {
    lVar5 = (**(code **)(*param_1 + 8))(param_1,&local_8c);
    if (lVar5 != 0) {
      FUN_143df0958(lVar5,&local_a8,&local_98);
      if (local_a8 != 0) {
        lVar5 = local_a8 + 0x28;
        if (*(longlong *)(local_a8 + 0x38) != 0) {
          lVar5 = *(longlong *)(local_a8 + 0x38);
        }
        iVar2 = *(int *)(local_a8 + 0x40);
        if ((longlong)iVar2 != 0) {
          lVar7 = 0;
          do {
            plVar3 = *(longlong **)(*(longlong *)(lVar5 + lVar7) + 0x30);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x10))(plVar3,local_80);
              FUN_144a659ac(local_70,local_b4,3);
              if ((((local_b4[0] == *param_3) && (local_ac == param_3[2])) &&
                  (FUN_144a659ac(local_70,local_c0,4), local_c0[0] == *param_4)) &&
                 (local_b8 == param_4[2])) {
                if (local_58 != 0) {
                  FUN_1400020a8();
                }
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_a0 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar1 = (int *)((longlong)local_a0 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_a0 + 0x10))(local_a0);
                    }
                  }
                }
                uVar6 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
                goto LAB_148900257;
              }
              if (local_58 != 0) {
                FUN_1400020a8();
              }
            }
            lVar7 = lVar7 + 0x10;
          } while ((longlong)iVar2 * 0x10 != lVar7);
        }
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a0 + 0x10))(local_a0);
          }
        }
      }
    }
    uVar6 = 0;
  }
LAB_148900257:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1489002c6 FUN_1489002c6 body=33 status=ok
// SIG undefined FUN_1489002c6(void)

void FUN_1489002c6(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    FUN_143df0d14(lVar1);
    return;
  }
  return;
}



// FUNCTION 1489002e8 FUN_1489002e8 body=857 status=ok
// SIG undefined FUN_1489002e8(void)

void FUN_1489002e8(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  uint local_120;
  int iStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_110;
  longlong *local_108;
  uint local_100;
  int iStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_ec [4];
  undefined8 local_e8;
  int local_e0;
  code *local_d8;
  longlong *local_c8 [2];
  longlong local_b8 [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_e8 = *param_2;
  local_e0 = *(int *)(param_2 + 1);
  local_d8 = (code *)*param_4;
  local_c8[0] = (longlong *)0x0;
  if (local_d8 != (code *)0x0) {
    plVar8 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_4[2];
    }
    (**(code **)*plVar8)(plVar8,local_c8);
  }
  local_78 = 0;
  iVar13 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar11 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94);
  if (uVar11 != 0) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar11);
    }
    FUN_14890aed4(&local_98,uVar11);
    iVar6 = 1;
    if (3 < uVar11) {
      uVar11 = (uVar11 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_140f17470();
    }
  }
  plVar8 = (longlong *)(param_1 + 0x60);
  plVar1 = (longlong *)(param_1 + 0x70);
  local_110 = 0x100000000;
  local_100 = 0xffffffff;
  iStack_fc = 0;
  local_f8 = 0;
  local_140 = param_3;
  local_108 = plVar1;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_1449c0562(&local_110);
    iVar13 = *(int *)(param_1 + 0x88);
  }
  local_120 = local_100;
  iStack_11c = iStack_fc;
  local_118 = local_f8;
  local_114 = local_f4;
  local_130 = local_110;
  local_128 = local_108;
  local_138 = plVar8;
  if ((iStack_fc != iVar13) || (local_108 != plVar1)) {
    do {
      lVar2 = *local_138;
      lVar12 = (longlong)iStack_11c * 0x20;
      puVar3 = *(undefined4 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + lVar12) + 0xa0) + 8);
      puVar9 = &DAT_14c9485f0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar9 = puVar3;
      }
      FUN_144a7660c(puVar9,&local_110,1);
      pcVar4 = local_d8;
      if (((int)local_110 == (int)local_e8) && ((int)local_108 == local_e0)) {
        plVar14 = (longlong *)(lVar2 + lVar12 + 0x10);
        if (local_d8 != (code *)0x0) {
          local_110 = *plVar14;
          plVar10 = local_c8[0];
          if (local_c8[0] == (longlong *)0x0) {
            plVar10 = local_b8;
          }
          uVar7 = (**(code **)(*plVar10 + 8))();
          cVar5 = (*pcVar4)(uVar7,&local_110);
          if (cVar5 == '\0') goto LAB_148900577;
        }
        local_110 = lVar2 + lVar12;
        local_108 = plVar14;
        FUN_14890b072(&local_98,local_ec,&local_110);
      }
LAB_148900577:
      local_120 = local_120 & ~local_130._4_4_;
      FUN_1449c0562(&local_130);
    } while (local_138 != plVar8 || (local_128 != plVar1 || iStack_11c != iVar13));
  }
  if (local_d8 != (code *)0x0) {
    plVar8 = local_c8[0];
    if (local_c8[0] == (longlong *)0x0) {
      plVar8 = local_b8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  FUN_148900644(&local_98,local_140);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146556d68(&local_98);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148900644 FUN_148900644 body=329 status=ok
// SIG undefined FUN_148900644(void)

void FUN_148900644(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_146557146(param_2);
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
      iVar2 = iStack_5c;
      lVar1 = *local_78;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_140f16476(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) =
           *(undefined8 *)((longlong)iVar2 * 0x20 + lVar1 + 0x10);
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



// FUNCTION 148900790 FUN_148900790 body=40 status=ok
// SIG undefined FUN_148900790(void)

void FUN_148900790(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140d7e454();
  if (lVar1 == 0) {
    return;
  }
  FUN_14612646c(lVar1,param_2);
  return;
}



// FUNCTION 1489007b8 FUN_1489007b8 body=41 status=ok
// SIG undefined FUN_1489007b8(void)

void FUN_1489007b8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140d7e454();
  if (lVar1 != 0) {
    FUN_148844a7a(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1489007e2 FUN_1489007e2 body=150 status=ok
// SIG undefined FUN_1489007e2(void)

void FUN_1489007e2(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140d7e454();
  if (lVar1 == 0) {
    local_20 = DAT_14c948620;
    local_28 = DAT_14c948618;
  }
  else {
    FUN_148844b04(lVar1,&local_28);
  }
  if (((int)local_28 == *param_2) && (local_20 == param_2[2])) {
    lVar1 = FUN_140d7e454(param_1);
    if (lVar1 != 0) {
      FUN_148844a7a(lVar1,&DAT_14c948618);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890087a FUN_14890087a body=33 status=ok
// SIG undefined FUN_14890087a(void)

void FUN_14890087a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    FUN_14890ec12(lVar1);
    return;
  }
  return;
}



// FUNCTION 14890089c FUN_14890089c body=33 status=ok
// SIG undefined FUN_14890089c(void)

void FUN_14890089c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    FUN_140ee51f2(lVar1);
    return;
  }
  return;
}



// FUNCTION 1489008be FUN_1489008be body=110 status=ok
// SIG undefined FUN_1489008be(void)

void FUN_1489008be(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar1[1] = param_1;
  *(undefined2 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_14b41bee0;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0x100000000;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = param_2;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = puVar1;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 14890092c FUN_14890092c body=95 status=ok
// SIG undefined FUN_14890092c(void)

undefined8
FUN_14890092c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x200,0x10);
  FUN_140fed154(uVar1,param_2,param_3,param_1,param_4,param_5);
  return uVar1;
}



// FUNCTION 14890098c FUN_14890098c body=55 status=ok
// SIG undefined FUN_14890098c(void)

void FUN_14890098c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x198,0x10);
  FUN_140f5d3e4(uVar1,param_2,param_1,param_3);
  return;
}



// FUNCTION 1489009c3 FUN_1489009c3 body=150 status=ok
// SIG undefined FUN_1489009c3(void)

undefined8 FUN_1489009c3(longlong param_1,undefined8 *param_2)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar7;
  double dVar8;
  undefined8 uVar6;
  
  if ((longlong)*(int *)(param_2 + 1) == 0) {
    uVar6 = 0x7f7fffff;
  }
  else {
    pdVar2 = (double *)*param_2;
    pdVar1 = pdVar2 + (longlong)*(int *)(param_2 + 1) * 3;
    fVar7 = 3.4028235e+38;
    do {
      dVar4 = *pdVar2 - *(double *)(param_1 + 0x78);
      dVar8 = pdVar2[1] - *(double *)(param_1 + 0x80);
      dVar5 = pdVar2[2] - *(double *)(param_1 + 0x88);
      dVar5 = SQRT(dVar5 * dVar5 + dVar8 * dVar8 + dVar4 * dVar4);
      fVar3 = (float)dVar5;
      if (fVar7 <= fVar3) {
        fVar3 = fVar7;
      }
      fVar7 = fVar3;
      uVar6 = CONCAT44((int)((ulonglong)dVar5 >> 0x20),fVar7);
      pdVar2 = pdVar2 + 3;
    } while (pdVar2 != pdVar1);
  }
  return uVar6;
}



// FUNCTION 148900a5a FUN_148900a5a body=380 status=ok
// SIG undefined FUN_148900a5a(void)

longlong * FUN_148900a5a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148900b64:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b419a30;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1457cd212;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148900b64;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b419a30;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1457cd212;
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



// FUNCTION 148900bd6 FUN_148900bd6 body=91 status=ok
// SIG undefined FUN_148900bd6(void)

undefined8 * FUN_148900bd6(undefined8 *param_1,int param_2)

{
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148900c32 FUN_148900c32 body=38 status=ok
// SIG undefined FUN_148900c32(void)

undefined8 FUN_148900c32(undefined8 param_1,int param_2)

{
  FUN_1403d9e6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148900c5c FUN_148900c5c body=38 status=ok
// SIG undefined FUN_148900c5c(void)

undefined8 FUN_148900c5c(undefined8 param_1,int param_2)

{
  FUN_14162be94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148900c82 FUN_148900c82 body=68 status=ok
// SIG undefined FUN_148900c82(void)

undefined8 * FUN_148900c82(longlong param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_14890b71c(param_2,param_1 + 0x60);
  return param_2;
}



// FUNCTION 148900ccc FUN_148900ccc body=81 status=ok
// SIG undefined FUN_148900ccc(void)

undefined8 FUN_148900ccc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148900d24 FUN_148900d24 body=89 status=ok
// SIG undefined FUN_148900d24(void)

bool FUN_148900d24(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148900d6f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148900d6f:
  return lVar6 == param_2;
}



// FUNCTION 148900d7e FUN_148900d7e body=118 status=ok
// SIG undefined FUN_148900d7e(void)

void FUN_148900d7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b419ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417e80;
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



// FUNCTION 148900df4 FUN_148900df4 body=118 status=ok
// SIG undefined FUN_148900df4(void)

void FUN_148900df4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b419ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417e80;
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



// FUNCTION 148900e6a FUN_148900e6a body=156 status=ok
// SIG undefined FUN_148900e6a(void)

void FUN_148900e6a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b419ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417e80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148900ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148900f06 FUN_148900f06 body=104 status=ok
// SIG undefined FUN_148900f06(void)

void FUN_148900f06(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148900f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148900f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148900f9a FUN_148900f9a body=29 status=ok
// SIG undefined FUN_148900f9a(void)

undefined8 FUN_148900f9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148900fb8 FUN_148900fb8 body=83 status=ok
// SIG undefined FUN_148900fb8(void)

void FUN_148900fb8(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9dd0;
  uVar2 = (ushort)DAT_14c9a9dd0;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9e68 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9dd0);
  }
  else {
    (*DAT_14c9a9e68)();
  }
  *(undefined1 *)(param_2 + 4) = 0x16;
  return;
}



// FUNCTION 14890100c FUN_14890100c body=83 status=ok
// SIG undefined FUN_14890100c(void)

void FUN_14890100c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9dd0;
  uVar2 = (ushort)DAT_14c9a9dd0;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9e68 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9dd0);
  }
  else {
    (*DAT_14c9a9e68)();
  }
  *(undefined1 *)(param_2 + 4) = 0x16;
  return;
}



// FUNCTION 148901060 FUN_148901060 body=81 status=ok
// SIG undefined FUN_148901060(void)

void FUN_148901060(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 1489010c8 FUN_1489010c8 body=283 status=ok
// SIG undefined FUN_1489010c8(void)

undefined8 FUN_1489010c8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 14890120c FUN_14890120c body=59 status=ok
// SIG undefined FUN_14890120c(void)

undefined8 FUN_14890120c(longlong *param_1)

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



// FUNCTION 1489012aa FUN_1489012aa body=85 status=ok
// SIG undefined FUN_1489012aa(void)

void FUN_1489012aa(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 148901306 FUN_148901306 body=38 status=ok
// SIG undefined FUN_148901306(void)

undefined8 FUN_148901306(undefined8 param_1,int param_2)

{
  FUN_1410955f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14890132e FUN_14890132e body=132 status=ok
// SIG undefined FUN_14890132e(void)

void FUN_14890132e(longlong param_1,int param_2)

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



// FUNCTION 1489013b4 FUN_1489013b4 body=83 status=ok
// SIG undefined FUN_1489013b4(void)

longlong * FUN_1489013b4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_146539c1e();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
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



// FUNCTION 148901408 FUN_148901408 body=386 status=ok
// SIG undefined FUN_148901408(void)

longlong * FUN_148901408(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148901519:
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
    *puVar5 = &PTR_FUN_14b418130;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148901519;
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
    *puVar5 = &PTR_FUN_14b418130;
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



// FUNCTION 14890158a FUN_14890158a body=64 status=ok
// SIG undefined FUN_14890158a(void)

undefined8 * FUN_14890158a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b418130;
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



// FUNCTION 1489015ce FUN_1489015ce body=81 status=ok
// SIG undefined FUN_1489015ce(void)

undefined8 FUN_1489015ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148901626 FUN_148901626 body=89 status=ok
// SIG undefined FUN_148901626(void)

bool FUN_148901626(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148901671;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148901671:
  return lVar6 == param_2;
}



// FUNCTION 14890169c FUN_14890169c body=118 status=ok
// SIG undefined FUN_14890169c(void)

void FUN_14890169c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418130;
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



// FUNCTION 148901712 FUN_148901712 body=118 status=ok
// SIG undefined FUN_148901712(void)

void FUN_148901712(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418130;
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



// FUNCTION 148901788 FUN_148901788 body=156 status=ok
// SIG undefined FUN_148901788(void)

void FUN_148901788(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b418130;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148901814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148901824 FUN_148901824 body=100 status=ok
// SIG undefined FUN_148901824(void)

void FUN_148901824(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148901870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014890187d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148901888 FUN_148901888 body=100 status=ok
// SIG undefined FUN_148901888(void)

ulonglong FUN_148901888(longlong param_1)

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
LAB_1489018e1:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1489018e1;
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



// FUNCTION 1489018ec FUN_1489018ec body=9 status=ok
// SIG undefined FUN_1489018ec(void)

void FUN_1489018ec(longlong param_1)

{
  FUN_14890198a(param_1 + 0x10);
  return;
}



// FUNCTION 1489018f6 FUN_1489018f6 body=29 status=ok
// SIG undefined FUN_1489018f6(void)

undefined8 FUN_1489018f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148901914 FUN_148901914 body=38 status=ok
// SIG undefined FUN_148901914(void)

undefined8 FUN_148901914(undefined8 param_1,int param_2)

{
  FUN_14890198a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14890193a FUN_14890193a body=38 status=ok
// SIG undefined FUN_14890193a(void)

undefined8 FUN_14890193a(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148901964 FUN_148901964 body=38 status=ok
// SIG undefined FUN_148901964(void)

undefined8 FUN_148901964(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14890198a FUN_14890198a body=115 status=ok
// SIG undefined FUN_14890198a(void)

void FUN_14890198a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4181c0;
  plVar3 = (longlong *)param_1[0x15];
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
  plVar3 = (longlong *)param_1[0x12];
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
  FUN_140fae274(param_1);
  return;
}



// FUNCTION 1489019fe FUN_1489019fe body=167 status=ok
// SIG undefined FUN_1489019fe(void)

void FUN_1489019fe(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148901a79;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148901a79;
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
LAB_148901a79:
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
                    /* WARNING: Could not recover jumptable at 0x000148901a99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148901aa6 FUN_148901aa6 body=386 status=ok
// SIG undefined FUN_148901aa6(void)

longlong * FUN_148901aa6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148901bb7:
    *puVar5 = &PTR_LAB_14a3a3510;
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
    *puVar5 = &PTR_FUN_14b418240;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148901bb7;
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
    *puVar5 = &PTR_LAB_14a3a3510;
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
    *puVar5 = &PTR_FUN_14b418240;
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



// FUNCTION 148901c28 FUN_148901c28 body=64 status=ok
// SIG undefined FUN_148901c28(void)

undefined8 * FUN_148901c28(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b418240;
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



// FUNCTION 148901c6c FUN_148901c6c body=81 status=ok
// SIG undefined FUN_148901c6c(void)

undefined8 FUN_148901c6c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148901cc4 FUN_148901cc4 body=89 status=ok
// SIG undefined FUN_148901cc4(void)

bool FUN_148901cc4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148901d0f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148901d0f:
  return lVar6 == param_2;
}



// FUNCTION 148901d3a FUN_148901d3a body=118 status=ok
// SIG undefined FUN_148901d3a(void)

void FUN_148901d3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418240;
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



// FUNCTION 148901db0 FUN_148901db0 body=118 status=ok
// SIG undefined FUN_148901db0(void)

void FUN_148901db0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418240;
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



// FUNCTION 148901e26 FUN_148901e26 body=156 status=ok
// SIG undefined FUN_148901e26(void)

void FUN_148901e26(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b418240;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148901eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148901ec2 FUN_148901ec2 body=104 status=ok
// SIG undefined FUN_148901ec2(void)

void FUN_148901ec2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148901f0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148901f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148901f2a FUN_148901f2a body=101 status=ok
// SIG undefined FUN_148901f2a(void)

ulonglong FUN_148901f2a(longlong param_1)

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
LAB_148901f84:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148901f84;
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



// FUNCTION 148901f8f FUN_148901f8f body=86 status=ok
// SIG undefined FUN_148901f8f(void)

void FUN_148901f8f(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b4182b0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b4182d0;
  return;
}



// FUNCTION 148901ff0 FUN_148901ff0 body=29 status=ok
// SIG undefined FUN_148901ff0(void)

undefined8 FUN_148901ff0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14890200e FUN_14890200e body=38 status=ok
// SIG undefined FUN_14890200e(void)

undefined8 FUN_14890200e(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148902034 FUN_148902034 body=167 status=ok
// SIG undefined FUN_148902034(void)

void FUN_148902034(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489020af;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489020af;
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
LAB_1489020af:
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
                    /* WARNING: Could not recover jumptable at 0x0001489020cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489020dc FUN_1489020dc body=84 status=ok
// SIG undefined FUN_1489020dc(void)

void FUN_1489020dc(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*param_1 == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x10);
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
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x02';
  *(undefined8 *)(param_1 + 8) = *param_2;
  FUN_144a1314c(param_1 + 0x28);
  return;
}



// FUNCTION 148902130 FUN_148902130 body=86 status=ok
// SIG undefined FUN_148902130(void)

void FUN_148902130(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b418300;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b418320;
  return;
}



// FUNCTION 148902190 FUN_148902190 body=29 status=ok
// SIG undefined FUN_148902190(void)

undefined8 FUN_148902190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489021ae FUN_1489021ae body=38 status=ok
// SIG undefined FUN_1489021ae(void)

undefined8 FUN_1489021ae(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489021d4 FUN_1489021d4 body=167 status=ok
// SIG undefined FUN_1489021d4(void)

void FUN_1489021d4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14890224f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14890224f;
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
LAB_14890224f:
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
                    /* WARNING: Could not recover jumptable at 0x00014890226f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14890227c FUN_14890227c body=9 status=ok
// SIG undefined FUN_14890227c(void)

void FUN_14890227c(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 148902286 FUN_148902286 body=29 status=ok
// SIG undefined FUN_148902286(void)

undefined8 FUN_148902286(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489022a4 FUN_1489022a4 body=38 status=ok
// SIG undefined FUN_1489022a4(void)

undefined8 FUN_1489022a4(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489022ca FUN_1489022ca body=167 status=ok
// SIG undefined FUN_1489022ca(void)

void FUN_1489022ca(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148902345;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148902345;
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
LAB_148902345:
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
                    /* WARNING: Could not recover jumptable at 0x000148902365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148902372 FUN_148902372 body=386 status=ok
// SIG undefined FUN_148902372(void)

longlong * FUN_148902372(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148902483:
    *puVar5 = &PTR_LAB_14b3e9ef0;
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
    *puVar5 = &PTR_FUN_14b4183a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148902483;
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
    *puVar5 = &PTR_LAB_14b3e9ef0;
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
    *puVar5 = &PTR_FUN_14b4183a0;
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



// FUNCTION 1489024f4 FUN_1489024f4 body=64 status=ok
// SIG undefined FUN_1489024f4(void)

undefined8 * FUN_1489024f4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4183a0;
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



// FUNCTION 148902538 FUN_148902538 body=81 status=ok
// SIG undefined FUN_148902538(void)

undefined8 FUN_148902538(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148902590 FUN_148902590 body=89 status=ok
// SIG undefined FUN_148902590(void)

bool FUN_148902590(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1489025db;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1489025db:
  return lVar6 == param_2;
}



// FUNCTION 148902606 FUN_148902606 body=118 status=ok
// SIG undefined FUN_148902606(void)

void FUN_148902606(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4183a0;
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



// FUNCTION 14890267c FUN_14890267c body=118 status=ok
// SIG undefined FUN_14890267c(void)

void FUN_14890267c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4183a0;
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



// FUNCTION 1489026f2 FUN_1489026f2 body=156 status=ok
// SIG undefined FUN_1489026f2(void)

void FUN_1489026f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4183a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014890277e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14890278e FUN_14890278e body=104 status=ok
// SIG undefined FUN_14890278e(void)

void FUN_14890278e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489027db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489027ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489027f6 FUN_1489027f6 body=101 status=ok
// SIG undefined FUN_1489027f6(void)

ulonglong FUN_1489027f6(longlong param_1)

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
LAB_148902850:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148902850;
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



// FUNCTION 14890285c FUN_14890285c body=64 status=ok
// SIG undefined FUN_14890285c(void)

undefined8 * FUN_14890285c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b418410;
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



// FUNCTION 1489028a0 FUN_1489028a0 body=81 status=ok
// SIG undefined FUN_1489028a0(void)

undefined8 FUN_1489028a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1489028f8 FUN_1489028f8 body=89 status=ok
// SIG undefined FUN_1489028f8(void)

bool FUN_1489028f8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148902943;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148902943:
  return lVar6 == param_2;
}



// FUNCTION 14890296e FUN_14890296e body=118 status=ok
// SIG undefined FUN_14890296e(void)

void FUN_14890296e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b418410;
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



// FUNCTION 1489029e4 FUN_1489029e4 body=118 status=ok
// SIG undefined FUN_1489029e4(void)

void FUN_1489029e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b418410;
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



// FUNCTION 148902a5a FUN_148902a5a body=156 status=ok
// SIG undefined FUN_148902a5a(void)

void FUN_148902a5a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b418410;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148902ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148902af6 FUN_148902af6 body=100 status=ok
// SIG undefined FUN_148902af6(void)

void FUN_148902af6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148902b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148902b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148902b5a FUN_148902b5a body=100 status=ok
// SIG undefined FUN_148902b5a(void)

ulonglong FUN_148902b5a(longlong param_1)

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
LAB_148902bb3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148902bb3;
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



// FUNCTION 148902bbe FUN_148902bbe body=68 status=ok
// SIG undefined FUN_148902bbe(void)

undefined8 * FUN_148902bbe(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b418480;
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



// FUNCTION 148902c06 FUN_148902c06 body=81 status=ok
// SIG undefined FUN_148902c06(void)

undefined8 FUN_148902c06(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148902c5e FUN_148902c5e body=91 status=ok
// SIG undefined FUN_148902c5e(void)

bool FUN_148902c5e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148902c8e;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148902c8e:
  return lVar6 == param_2;
}



// FUNCTION 148902cba FUN_148902cba body=118 status=ok
// SIG undefined FUN_148902cba(void)

void FUN_148902cba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4184f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418480;
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



// FUNCTION 148902d30 FUN_148902d30 body=118 status=ok
// SIG undefined FUN_148902d30(void)

void FUN_148902d30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4184f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418480;
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



// FUNCTION 148902da6 FUN_148902da6 body=156 status=ok
// SIG undefined FUN_148902da6(void)

void FUN_148902da6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4184f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b418480;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148902e32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148902e42 FUN_148902e42 body=104 status=ok
// SIG undefined FUN_148902e42(void)

void FUN_148902e42(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148902e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148902ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148902eac FUN_148902eac body=38 status=ok
// SIG undefined FUN_148902eac(void)

undefined8 FUN_148902eac(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148902ed2 FUN_148902ed2 body=27 status=ok
// SIG undefined FUN_148902ed2(void)

void FUN_148902ed2(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 148902eee FUN_148902eee body=147 status=ok
// SIG undefined FUN_148902eee(void)

void FUN_148902eee(longlong param_1,int param_2)

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



// FUNCTION 148902f82 FUN_148902f82 body=64 status=ok
// SIG undefined FUN_148902f82(void)

undefined8 * FUN_148902f82(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4185b0;
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



// FUNCTION 148902fc6 FUN_148902fc6 body=81 status=ok
// SIG undefined FUN_148902fc6(void)

undefined8 FUN_148902fc6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14890301e FUN_14890301e body=89 status=ok
// SIG undefined FUN_14890301e(void)

bool FUN_14890301e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148903069;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148903069:
  return lVar6 == param_2;
}



// FUNCTION 148903094 FUN_148903094 body=118 status=ok
// SIG undefined FUN_148903094(void)

void FUN_148903094(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4185b0;
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



// FUNCTION 14890310a FUN_14890310a body=118 status=ok
// SIG undefined FUN_14890310a(void)

void FUN_14890310a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4185b0;
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



// FUNCTION 148903180 FUN_148903180 body=156 status=ok
// SIG undefined FUN_148903180(void)

void FUN_148903180(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4185b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014890320c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14890321c FUN_14890321c body=100 status=ok
// SIG undefined FUN_14890321c(void)

void FUN_14890321c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148903268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148903275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148903280 FUN_148903280 body=100 status=ok
// SIG undefined FUN_148903280(void)

ulonglong FUN_148903280(longlong param_1)

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
LAB_1489032d9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1489032d9;
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



// FUNCTION 1489032e4 FUN_1489032e4 body=111 status=ok
// SIG undefined FUN_1489032e4(void)

undefined8 * FUN_1489032e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b418620;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[2] = &PTR_FUN_14b418640;
  FUN_140d7ec9e(puVar1 + 0xe);
  return puVar1;
}



// FUNCTION 148903354 FUN_148903354 body=42 status=ok
// SIG undefined FUN_148903354(void)

void FUN_148903354(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b418640;
  FUN_1407e878c(param_1 + 0x70);
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 14890337e FUN_14890337e body=29 status=ok
// SIG undefined FUN_14890337e(void)

undefined8 FUN_14890337e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14890339c FUN_14890339c body=60 status=ok
// SIG undefined FUN_14890339c(void)

undefined8 * FUN_14890339c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b418640;
  FUN_1407e878c(param_1 + 0xc);
  FUN_140fae274(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489033d8 FUN_1489033d8 body=167 status=ok
// SIG undefined FUN_1489033d8(void)

void FUN_1489033d8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148903453;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148903453;
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
LAB_148903453:
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
                    /* WARNING: Could not recover jumptable at 0x000148903473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148903480 FUN_148903480 body=132 status=ok
// SIG undefined FUN_148903480(void)

void FUN_148903480(longlong param_1,int param_2)

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



// FUNCTION 148903506 FUN_148903506 body=261 status=ok
// SIG undefined FUN_148903506(void)

void FUN_148903506(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_143ded88a(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 14890360c FUN_14890360c body=9 status=ok
// SIG undefined FUN_14890360c(void)

void FUN_14890360c(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 148903616 FUN_148903616 body=29 status=ok
// SIG undefined FUN_148903616(void)

undefined8 FUN_148903616(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148903634 FUN_148903634 body=38 status=ok
// SIG undefined FUN_148903634(void)

undefined8 FUN_148903634(undefined8 param_1,int param_2)

{
  FUN_140fae274();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14890365a FUN_14890365a body=167 status=ok
// SIG undefined FUN_14890365a(void)

void FUN_14890365a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489036d5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489036d5;
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
LAB_1489036d5:
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
                    /* WARNING: Could not recover jumptable at 0x0001489036f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148903702 FUN_148903702 body=386 status=ok
// SIG undefined FUN_148903702(void)

longlong * FUN_148903702(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148903813:
    *puVar5 = &PTR_LAB_14a79d330;
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
    *puVar5 = &PTR_FUN_14b4186c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148903813;
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
    *puVar5 = &PTR_LAB_14a79d330;
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
    *puVar5 = &PTR_FUN_14b4186c0;
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



// FUNCTION 148903884 FUN_148903884 body=64 status=ok
// SIG undefined FUN_148903884(void)

undefined8 * FUN_148903884(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4186c0;
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



// FUNCTION 1489038c8 FUN_1489038c8 body=81 status=ok
// SIG undefined FUN_1489038c8(void)

undefined8 FUN_1489038c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148903920 FUN_148903920 body=89 status=ok
// SIG undefined FUN_148903920(void)

bool FUN_148903920(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14890396b;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14890396b:
  return lVar6 == param_2;
}



// FUNCTION 148903996 FUN_148903996 body=118 status=ok
// SIG undefined FUN_148903996(void)

void FUN_148903996(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4186c0;
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



// FUNCTION 148903a0c FUN_148903a0c body=118 status=ok
// SIG undefined FUN_148903a0c(void)

void FUN_148903a0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4186c0;
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



// FUNCTION 148903a82 FUN_148903a82 body=156 status=ok
// SIG undefined FUN_148903a82(void)

void FUN_148903a82(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d330;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4186c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148903b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148903b1e FUN_148903b1e body=104 status=ok
// SIG undefined FUN_148903b1e(void)

void FUN_148903b1e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148903b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148903b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}


