// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14657fd34 FUN_14657fd34 body=40 status=ok
// SIG undefined FUN_14657fd34(void)

undefined8 FUN_14657fd34(undefined8 param_1,int param_2)

{
  FUN_145b03550();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14657fd5c FUN_14657fd5c body=29 status=ok
// SIG undefined FUN_14657fd5c(void)

undefined8 FUN_14657fd5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14657fd7a FUN_14657fd7a body=29 status=ok
// SIG undefined FUN_14657fd7a(void)

undefined8 FUN_14657fd7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14657fd98 FUN_14657fd98 body=125 status=ok
// SIG undefined FUN_14657fd98(void)

void FUN_14657fd98(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    lVar1 = FUN_1413da074(local_38);
    *(longlong *)(param_1 + 8) = lVar1;
    if (local_38[0] != 0) {
      FUN_1400020a8();
      lVar1 = *(longlong *)(param_1 + 8);
    }
    if (lVar1 == 0) goto LAB_14657fdec;
  }
  FUN_1411d7792(lVar1,param_2);
LAB_14657fdec:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14657fe16 FUN_14657fe16 body=61 status=ok
// SIG undefined FUN_14657fe16(void)

void FUN_14657fe16(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4df2f0;
  FUN_1449db362(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014657fe4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14657fe54 FUN_14657fe54 body=29 status=ok
// SIG undefined FUN_14657fe54(void)

undefined8 FUN_14657fe54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14657fe72 FUN_14657fe72 body=29 status=ok
// SIG undefined FUN_14657fe72(void)

undefined8 FUN_14657fe72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14657fe90 FUN_14657fe90 body=59 status=ok
// SIG undefined FUN_14657fe90(void)

void FUN_14657fe90(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b439230;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(param_1 + 0x18);
  return;
}



// FUNCTION 14657fecc FUN_14657fecc body=29 status=ok
// SIG undefined FUN_14657fecc(void)

undefined8 FUN_14657fecc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14657feea FUN_14657feea body=29 status=ok
// SIG undefined FUN_14657feea(void)

undefined8 FUN_14657feea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14657ff08 FUN_14657ff08 body=29 status=ok
// SIG undefined FUN_14657ff08(void)

undefined8 FUN_14657ff08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14657ff26 FUN_14657ff26 body=66 status=ok
// SIG undefined FUN_14657ff26(void)

undefined8 * FUN_14657ff26(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e0630;
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



// FUNCTION 14657ff68 FUN_14657ff68 body=29 status=ok
// SIG undefined FUN_14657ff68(void)

undefined8 FUN_14657ff68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14657ff86 FUN_14657ff86 body=428 status=ok
// SIG undefined FUN_14657ff86(void)

longlong * FUN_14657ff86(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146580066:
    *puVar5 = &PTR_LAB_14b4e4c90;
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
    *puVar5 = &PTR_FUN_14b4e0a00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146580066;
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
    *puVar5 = &PTR_LAB_14b4e4c90;
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
    *puVar5 = &PTR_FUN_14b4e0a00;
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



// FUNCTION 146580132 FUN_146580132 body=29 status=ok
// SIG undefined FUN_146580132(void)

undefined8 FUN_146580132(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146580150 FUN_146580150 body=29 status=ok
// SIG undefined FUN_146580150(void)

undefined8 FUN_146580150(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658016e FUN_14658016e body=24 status=ok
// SIG undefined FUN_14658016e(void)

bool FUN_14658016e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146580186 FUN_146580186 body=93 status=ok
// SIG undefined FUN_146580186(void)

void FUN_146580186(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1465801e4 FUN_1465801e4 body=101 status=ok
// SIG undefined FUN_1465801e4(void)

void FUN_1465801e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14658024a FUN_14658024a body=101 status=ok
// SIG undefined FUN_14658024a(void)

void FUN_14658024a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c990;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4e2bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1465802b0 FUN_1465802b0 body=101 status=ok
// SIG undefined FUN_1465802b0(void)

void FUN_1465802b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e2ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4e2c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146580316 FUN_146580316 body=101 status=ok
// SIG undefined FUN_146580316(void)

void FUN_146580316(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14658037c FUN_14658037c body=101 status=ok
// SIG undefined FUN_14658037c(void)

void FUN_14658037c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e27a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e2d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1465803e2 FUN_1465803e2 body=410 status=ok
// SIG undefined FUN_1465803e2(void)

undefined4 *
FUN_1465803e2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b6d4f8(param_1,local_48);
  plVar6 = (longlong *)*param_3;
  *local_40 = plVar6;
  lVar9 = param_3[1];
  local_40[1] = lVar9;
  if (lVar9 == 0) {
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
  }
  else {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
    plVar2 = (longlong *)local_40[1];
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
    plVar6 = (longlong *)*local_40;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      uVar4 = (**(code **)(*plVar6 + 0x40))();
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
      goto LAB_14658046c;
    }
  }
  local_4c = local_48[0];
  uVar4 = (**(code **)(*plVar6 + 0x40))();
LAB_14658046c:
  local_58 = param_4;
  cVar3 = FUN_140b6d340(param_1,uVar4,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar5 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140b713d0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658057e FUN_14658057e body=29 status=ok
// SIG undefined FUN_14658057e(void)

undefined8 FUN_14658057e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658059c FUN_14658059c body=118 status=ok
// SIG undefined FUN_14658059c(void)

void FUN_14658059c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e31d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e3160;
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



// FUNCTION 146580612 FUN_146580612 body=118 status=ok
// SIG undefined FUN_146580612(void)

void FUN_146580612(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e32b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e3240;
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



// FUNCTION 146580688 FUN_146580688 body=419 status=ok
// SIG undefined FUN_146580688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146580688(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    if (*(longlong *)(param_1 + 0x100) == 0) {
      puVar6 = &DAT_14cb97130;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb97140) && (FUN_144b3d300(&DAT_14cb97140), DAT_14cb97140 == -1))
      {
        DAT_14cb97130 = 0;
        uRam000000014cb97138 = 0;
        atexit((_func_5014 *)&LAB_143f26943);
        _Init_thread_footer(&DAT_14cb97140);
      }
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x128);
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb97128) && (FUN_144b3d300(&DAT_14cb97128), DAT_14cb97128 == -1)) {
      DAT_14cb97118 = 0;
      _DAT_14cb97120 = 0;
      atexit((_func_5014 *)&LAB_143f26932);
      _Init_thread_footer(&DAT_14cb97128);
    }
    bVar9 = (longlong)_DAT_14cb97120 < 0;
    _DAT_14cb97120 = _DAT_14cb97120 & 0xffffffff00000000;
    if (bVar9) {
      FUN_14481578e(&DAT_14cb97118,0);
    }
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0xf0) + 0x28);
    if (lVar5 == 0) {
      puVar6 = &DAT_14cb97118;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x20);
      lVar8 = 0;
      puVar6 = &DAT_14cb97118;
      do {
        uVar3 = _DAT_14cb97120;
        uVar1 = *(undefined4 *)(lVar2 + 0x30 + lVar8);
        lVar7 = (longlong)DAT_14cb97120;
        uVar4 = DAT_14cb97120 + 1;
        _DAT_14cb97120 = CONCAT44(DAT_14cb97124,uVar4);
        if (DAT_14cb97124 < uVar4) {
          FUN_1446f48e2(&DAT_14cb97118,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(DAT_14cb97118 + lVar7 * 4) = uVar1;
        lVar8 = lVar8 + 0x168;
      } while (lVar5 * 0x168 - lVar8 != 0);
    }
  }
  return puVar6;
}



// FUNCTION 14658082c FUN_14658082c body=233 status=ok
// SIG undefined FUN_14658082c(void)

ulonglong FUN_14658082c(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong unaff_RSI;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  cVar3 = FUN_145e34e2c(param_1 + 0x28,DAT_14cb97848);
  if (cVar3 == '\0') {
    unaff_RSI = 0;
  }
  else {
    if ((int)uStack_20 == DAT_14cb97840) {
      unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
      if ((int)uStack_20 < 2) goto LAB_146580862;
      lVar6 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_28 + lVar6);
        uVar4 = (uint)uVar1;
        uVar2 = *(ushort *)(DAT_14cb97838 + lVar6);
        uVar7 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1465808cf;
          }
          iVar5 = uVar4 - uVar7;
          goto LAB_146580912;
        }
        if (uVar1 == 0) break;
LAB_1465808cf:
        lVar6 = lVar6 + 2;
      }
      iVar5 = 0;
LAB_146580912:
      bVar8 = iVar5 == 0;
    }
    else {
      bVar8 = DAT_14cb97840 + (int)uStack_20 == 1;
    }
    unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),bVar8);
  }
LAB_146580862:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return unaff_RSI & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146580916 FUN_146580916 body=423 status=ok
// SIG undefined FUN_146580916(void)

void FUN_146580916(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1465809ec:
    *puVar5 = &PTR_LAB_14b4eadd0;
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
    *puVar5 = &PTR_FUN_14b4ead60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1465809ec;
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
    *puVar5 = &PTR_LAB_14b4eadd0;
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
    *puVar5 = &PTR_FUN_14b4ead60;
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
                    /* WARNING: Could not recover jumptable at 0x000146580aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146580abe FUN_146580abe body=423 status=ok
// SIG undefined FUN_146580abe(void)

void FUN_146580abe(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146580b94:
    *puVar5 = &PTR_LAB_14b4eaeb0;
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
    *puVar5 = &PTR_FUN_14b4eae40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146580b94;
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
    *puVar5 = &PTR_LAB_14b4eaeb0;
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
    *puVar5 = &PTR_FUN_14b4eae40;
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
                    /* WARNING: Could not recover jumptable at 0x000146580c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146580c66 FUN_146580c66 body=423 status=ok
// SIG undefined FUN_146580c66(void)

void FUN_146580c66(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146580d3c:
    *puVar5 = &PTR_LAB_14b4eaf90;
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
    *puVar5 = &PTR_FUN_14b4eaf20;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146580d3c;
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
    *puVar5 = &PTR_LAB_14b4eaf90;
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
    *puVar5 = &PTR_FUN_14b4eaf20;
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
                    /* WARNING: Could not recover jumptable at 0x000146580df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146580e0e FUN_146580e0e body=423 status=ok
// SIG undefined FUN_146580e0e(void)

void FUN_146580e0e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146580ee4:
    *puVar5 = &PTR_LAB_14b4eb070;
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
    *puVar5 = &PTR_FUN_14b4eb000;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146580ee4;
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
    *puVar5 = &PTR_LAB_14b4eb070;
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
    *puVar5 = &PTR_FUN_14b4eb000;
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
                    /* WARNING: Could not recover jumptable at 0x000146580f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146580fb6 FUN_146580fb6 body=423 status=ok
// SIG undefined FUN_146580fb6(void)

void FUN_146580fb6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14658108c:
    *puVar5 = &PTR_LAB_14b4eb150;
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
    *puVar5 = &PTR_FUN_14b4eb0e0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14658108c;
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
    *puVar5 = &PTR_LAB_14b4eb150;
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
    *puVar5 = &PTR_FUN_14b4eb0e0;
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
                    /* WARNING: Could not recover jumptable at 0x000146581145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14658115e FUN_14658115e body=57 status=ok
// SIG undefined FUN_14658115e(void)

undefined8 FUN_14658115e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    lVar1 = FUN_141028a6c();
    if (lVar1 != 0) {
      uVar2 = FUN_140d8a54a(lVar1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146581198 FUN_146581198 body=78 status=ok
// SIG undefined FUN_146581198(void)

undefined8 * FUN_146581198(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140b70aa4(param_2,iVar1,0);
    FUN_140b709f1(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 1465811e6 FUN_1465811e6 body=36 status=ok
// SIG undefined FUN_1465811e6(void)

void FUN_1465811e6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1460695f4();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) {
    FUN_140b7066c();
    return;
  }
  return;
}



// FUNCTION 14658120a FUN_14658120a body=200 status=ok
// SIG undefined FUN_14658120a(void)

longlong *
FUN_14658120a(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14b4eb5c0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  FUN_14009d848(puVar3 + 1,param_4);
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
  puVar3[3] = lVar5;
  *puVar3 = &PTR_FUN_14b4eb550;
  puVar3[4] = 0;
  FUN_14485c47a(puVar3 + 4,param_2);
  *(undefined4 *)(puVar3 + 6) = uVar1;
  puVar3[5] = uVar2;
  return param_1;
}



// FUNCTION 1465812d2 FUN_1465812d2 body=569 status=ok
// SIG undefined FUN_1465812d2(void)

void FUN_1465812d2(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  uint *local_70;
  longlong *local_68;
  longlong *plStack_60;
  uint local_4c;
  uint *local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_4c = param_2;
  if ((int)param_1[0x29] != *(int *)((longlong)param_1 + 0x174)) {
    plVar5 = param_1 + 0x2f;
    if ((longlong *)param_1[0x30] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x30];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x31] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar3 = param_1[0x28];
      do {
        if (*(uint *)(lVar3 + (longlong)iVar6 * 0x18) == param_2) goto LAB_14658145a;
        iVar6 = *(int *)(lVar3 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  FUN_1446f470e(&local_70,L"SHIFT",1);
  (**(code **)(*param_1 + 0x180))(param_1);
  local_48 = local_70;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_68);
    plVar5 = local_68;
    if (local_68 != (longlong *)0x0) {
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      FUN_1446efa72(&local_88,0,3,0x10);
      puVar4 = local_88;
      local_80 = 3;
      *local_88 = &PTR_LAB_14b4e4d10;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_88[2] = lVar7;
      *local_88 = &PTR_FUN_14b4eb7e0;
      local_88[3] = 0;
      FUN_14485c47a(local_88 + 3,param_1);
      puVar4[4] = FUN_143f2a62e;
      *(undefined4 *)(puVar4 + 5) = 0;
      (**(code **)(*plVar5 + 0x28))(plVar5,local_78,param_2,&local_88);
      local_48 = &local_4c;
      local_40 = local_78;
      FUN_146122ba8(param_1 + 0x28,local_34,&local_48,0);
      FUN_1449db362(&local_88);
    }
  }
  plVar5 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_14658145a:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14658150c FUN_14658150c body=118 status=ok
// SIG undefined FUN_14658150c(void)

undefined8 * FUN_14658150c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
  plVar1 = (longlong *)FUN_1401e3228(&local_20);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146581584 FUN_146581584 body=283 status=ok
// SIG undefined FUN_146581584(void)

void FUN_146581584(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_140a68038(1);
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_40);
    if (local_40 != (longlong *)0x0) {
      iVar2 = (**(code **)(*local_40 + 0x138))(local_40,*(undefined4 *)(param_1 + 0x30));
      if (iVar2 == 0) {
        local_50 = FUN_148a7e18c;
        local_48 = 0;
        FUN_148a7e00a(&local_40,param_1);
        (**(code **)(*local_40 + 0x90))
                  (local_40,&local_50,*(undefined4 *)(param_1 + 0x30),&local_40);
        *(code **)(param_1 + 0x78) = local_50;
        FUN_1449db362(&local_40);
        (**(code **)(*local_40 + 0xf8))(local_40,*(undefined4 *)(param_1 + 0x30));
        goto LAB_1465815e5;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x71) = 1;
LAB_1465815e5:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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



// FUNCTION 1465816c4 FUN_1465816c4 body=428 status=ok
// SIG undefined FUN_1465816c4(void)

longlong * FUN_1465816c4(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1465817a4:
    *puVar5 = &PTR_LAB_14b438870;
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
    *puVar5 = &PTR_FUN_14b4ebc00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1465817a4;
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
    *puVar5 = &PTR_LAB_14b438870;
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
    *puVar5 = &PTR_FUN_14b4ebc00;
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



// FUNCTION 1465818a0 FUN_1465818a0 body=111 status=ok
// SIG undefined FUN_1465818a0(void)

void FUN_1465818a0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x38) + 0x70);
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x38) + 0xb8);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
  }
  cVar1 = FUN_1458c7f24(param_1);
  if (cVar1 != '\0') {
    FUN_143f2ac96(param_1,0x17);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 146581978 FUN_146581978 body=428 status=ok
// SIG undefined FUN_146581978(void)

longlong * FUN_146581978(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146581a58:
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
    *puVar5 = &PTR_FUN_14b4ecd50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146581a58;
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
    *puVar5 = &PTR_FUN_14b4ecd50;
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



// FUNCTION 146581b44 FUN_146581b44 body=428 status=ok
// SIG undefined FUN_146581b44(void)

longlong * FUN_146581b44(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146581c24:
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b4ed110;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146581c24;
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
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b4ed110;
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



// FUNCTION 146581d16 FUN_146581d16 body=147 status=ok
// SIG undefined FUN_146581d16(void)

void FUN_146581d16(longlong param_1,int param_2)

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



// FUNCTION 146581daa FUN_146581daa body=101 status=ok
// SIG undefined FUN_146581daa(void)

void FUN_146581daa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e99c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146581e10 FUN_146581e10 body=124 status=ok
// SIG undefined FUN_146581e10(void)

void FUN_146581e10(longlong *param_1,longlong *param_2)

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



// FUNCTION 146581e8e FUN_146581e8e body=101 status=ok
// SIG undefined FUN_146581e8e(void)

void FUN_146581e8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e9b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146581ef4 FUN_146581ef4 body=29 status=ok
// SIG undefined FUN_146581ef4(void)

undefined8 FUN_146581ef4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146581f12 FUN_146581f12 body=101 status=ok
// SIG undefined FUN_146581f12(void)

void FUN_146581f12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e9d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e9ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146581f78 FUN_146581f78 body=29 status=ok
// SIG undefined FUN_146581f78(void)

undefined8 FUN_146581f78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146581f96 FUN_146581f96 body=213 status=ok
// SIG undefined FUN_146581f96(void)

void FUN_146581f96(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  uVar4 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x20) + 0x30) + 0x180))();
  lVar3 = FUN_144a78654(uVar4,uVar2);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x88) != '\x01')) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    uVar4 = FUN_14479d2ce(param_1 + 0x28);
    (**(code **)(*plVar1 + 0x140))(plVar1,uVar4,param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_40 = FUN_148a8807e;
    local_38 = 0;
    FUN_148a881c6(local_30,param_1);
    FUN_141211c46(&DAT_14c9647a0,&local_40,local_30);
    FUN_1449db362(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658206c FUN_14658206c body=63 status=ok
// SIG undefined FUN_14658206c(void)

void FUN_14658206c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14479d2ce(param_1 + 0x28);
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x40), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001465820a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,uVar2,param_1 + 0x30,*(code **)(*plVar1 + 0x60));
    return;
  }
  return;
}



// FUNCTION 1465820ac FUN_1465820ac body=118 status=ok
// SIG undefined FUN_1465820ac(void)

void FUN_1465820ac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4e9ed0;
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



// FUNCTION 146582122 FUN_146582122 body=61 status=ok
// SIG undefined FUN_146582122(void)

void FUN_146582122(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e9f60;
  FUN_1449db362(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014658215b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146582160 FUN_146582160 body=29 status=ok
// SIG undefined FUN_146582160(void)

undefined8 FUN_146582160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658217e FUN_14658217e body=118 status=ok
// SIG undefined FUN_14658217e(void)

void FUN_14658217e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e9f90;
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



// FUNCTION 1465821f4 FUN_1465821f4 body=61 status=ok
// SIG undefined FUN_1465821f4(void)

void FUN_1465821f4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4ea3c0;
  FUN_1449db362(param_1 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014658222d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146582232 FUN_146582232 body=29 status=ok
// SIG undefined FUN_146582232(void)

undefined8 FUN_146582232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582270 FUN_146582270 body=66 status=ok
// SIG undefined FUN_146582270(void)

undefined8 * FUN_146582270(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ea3f0;
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



// FUNCTION 1465822b2 FUN_1465822b2 body=118 status=ok
// SIG undefined FUN_1465822b2(void)

void FUN_1465822b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea3f0;
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



// FUNCTION 146582328 FUN_146582328 body=61 status=ok
// SIG undefined FUN_146582328(void)

void FUN_146582328(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4ea520;
  FUN_1449db362(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146582361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146582366 FUN_146582366 body=29 status=ok
// SIG undefined FUN_146582366(void)

undefined8 FUN_146582366(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582384 FUN_146582384 body=118 status=ok
// SIG undefined FUN_146582384(void)

void FUN_146582384(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ea550;
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



// FUNCTION 1465823fa FUN_1465823fa body=66 status=ok
// SIG undefined FUN_1465823fa(void)

undefined8 * FUN_1465823fa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4eaf20;
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



// FUNCTION 14658243c FUN_14658243c body=29 status=ok
// SIG undefined FUN_14658243c(void)

undefined8 FUN_14658243c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658245a FUN_14658245a body=29 status=ok
// SIG undefined FUN_14658245a(void)

bool FUN_14658245a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146582478 FUN_146582478 body=26 status=ok
// SIG undefined FUN_146582478(void)

bool FUN_146582478(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146582492 FUN_146582492 body=24 status=ok
// SIG undefined FUN_146582492(void)

bool FUN_146582492(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1465824aa FUN_1465824aa body=29 status=ok
// SIG undefined FUN_1465824aa(void)

bool FUN_1465824aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1465824c8 FUN_1465824c8 body=24 status=ok
// SIG undefined FUN_1465824c8(void)

bool FUN_1465824c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1465824e0 FUN_1465824e0 body=54 status=ok
// SIG undefined FUN_1465824e0(void)

undefined8 * FUN_1465824e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4eb3a0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582516 FUN_146582516 body=53 status=ok
// SIG undefined FUN_146582516(void)

void FUN_146582516(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b4e8330;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e83d0;
  FUN_1449db362(param_1 + 0x58);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 14658254c FUN_14658254c body=29 status=ok
// SIG undefined FUN_14658254c(void)

undefined8 FUN_14658254c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658256a FUN_14658256a body=54 status=ok
// SIG undefined FUN_14658256a(void)

undefined8 * FUN_14658256a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4eb5c0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465825a0 FUN_1465825a0 body=129 status=ok
// SIG undefined FUN_1465825a0(void)

void FUN_1465825a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eb5c0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14009d848(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b4eb550;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 146582622 FUN_146582622 body=53 status=ok
// SIG undefined FUN_146582622(void)

void FUN_146582622(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e82b0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e82d8;
  FUN_1449db362(param_1 + 0x50);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 146582658 FUN_146582658 body=29 status=ok
// SIG undefined FUN_146582658(void)

undefined8 FUN_146582658(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582676 FUN_146582676 body=24 status=ok
// SIG undefined FUN_146582676(void)

bool FUN_146582676(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14658268e FUN_14658268e body=101 status=ok
// SIG undefined FUN_14658268e(void)

void FUN_14658268e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eb7e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1465826f4 FUN_1465826f4 body=29 status=ok
// SIG undefined FUN_1465826f4(void)

undefined8 FUN_1465826f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582712 FUN_146582712 body=118 status=ok
// SIG undefined FUN_146582712(void)

void FUN_146582712(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebc00;
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



// FUNCTION 146582788 FUN_146582788 body=118 status=ok
// SIG undefined FUN_146582788(void)

void FUN_146582788(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebce0;
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



// FUNCTION 1465827fe FUN_1465827fe body=118 status=ok
// SIG undefined FUN_1465827fe(void)

void FUN_1465827fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebfc0;
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



// FUNCTION 146582874 FUN_146582874 body=53 status=ok
// SIG undefined FUN_146582874(void)

void FUN_146582874(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e7ef0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e7f18;
  FUN_1449db362(param_1 + 0x50);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 1465828aa FUN_1465828aa body=29 status=ok
// SIG undefined FUN_1465828aa(void)

undefined8 FUN_1465828aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465828c8 FUN_1465828c8 body=118 status=ok
// SIG undefined FUN_1465828c8(void)

void FUN_1465828c8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ecd50;
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



// FUNCTION 14658293e FUN_14658293e body=53 status=ok
// SIG undefined FUN_14658293e(void)

void FUN_14658293e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e7e70;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e7e98;
  FUN_1449db362(param_1 + 0x58);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 146582974 FUN_146582974 body=29 status=ok
// SIG undefined FUN_146582974(void)

undefined8 FUN_146582974(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582992 FUN_146582992 body=118 status=ok
// SIG undefined FUN_146582992(void)

void FUN_146582992(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed110;
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



// FUNCTION 146582a08 FUN_146582a08 body=118 status=ok
// SIG undefined FUN_146582a08(void)

void FUN_146582a08(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ed1f0;
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



// FUNCTION 146582a7e FUN_146582a7e body=29 status=ok
// SIG undefined FUN_146582a7e(void)

undefined8 FUN_146582a7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582a9c FUN_146582a9c body=29 status=ok
// SIG undefined FUN_146582a9c(void)

undefined8 FUN_146582a9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582aba FUN_146582aba body=53 status=ok
// SIG undefined FUN_146582aba(void)

void FUN_146582aba(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e7d30;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e7d58;
  FUN_1449db362(param_1 + 0x50);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 146582af0 FUN_146582af0 body=29 status=ok
// SIG undefined FUN_146582af0(void)

undefined8 FUN_146582af0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582b0e FUN_146582b0e body=29 status=ok
// SIG undefined FUN_146582b0e(void)

undefined8 FUN_146582b0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582b2c FUN_146582b2c body=53 status=ok
// SIG undefined FUN_146582b2c(void)

void FUN_146582b2c(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e7da0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e7dc8;
  FUN_1449db362(param_1 + 0x50);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 146582b62 FUN_146582b62 body=29 status=ok
// SIG undefined FUN_146582b62(void)

undefined8 FUN_146582b62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582b80 FUN_146582b80 body=29 status=ok
// SIG undefined FUN_146582b80(void)

undefined8 FUN_146582b80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582b9e FUN_146582b9e body=53 status=ok
// SIG undefined FUN_146582b9e(void)

void FUN_146582b9e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e7c50;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e7c78;
  FUN_1449db362(param_1 + 0x50);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 146582bd4 FUN_146582bd4 body=29 status=ok
// SIG undefined FUN_146582bd4(void)

undefined8 FUN_146582bd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582bf2 FUN_146582bf2 body=53 status=ok
// SIG undefined FUN_146582bf2(void)

void FUN_146582bf2(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e8060;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e8088;
  FUN_1449db362(param_1 + 0x50);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 146582c28 FUN_146582c28 body=29 status=ok
// SIG undefined FUN_146582c28(void)

undefined8 FUN_146582c28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582c46 FUN_146582c46 body=118 status=ok
// SIG undefined FUN_146582c46(void)

void FUN_146582c46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed590;
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



// FUNCTION 146582cbc FUN_146582cbc body=53 status=ok
// SIG undefined FUN_146582cbc(void)

void FUN_146582cbc(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e7cd0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e7cf8;
  FUN_1449db362(param_1 + 0x50);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 146582cf2 FUN_146582cf2 body=29 status=ok
// SIG undefined FUN_146582cf2(void)

undefined8 FUN_146582cf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582d10 FUN_146582d10 body=53 status=ok
// SIG undefined FUN_146582d10(void)

void FUN_146582d10(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e7f70;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e7f98;
  FUN_1449db362(param_1 + 0x58);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 146582d46 FUN_146582d46 body=29 status=ok
// SIG undefined FUN_146582d46(void)

undefined8 FUN_146582d46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582d64 FUN_146582d64 body=53 status=ok
// SIG undefined FUN_146582d64(void)

void FUN_146582d64(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e7fe0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e8008;
  FUN_1449db362(param_1 + 0x50);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 146582d9a FUN_146582d9a body=29 status=ok
// SIG undefined FUN_146582d9a(void)

undefined8 FUN_146582d9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582db8 FUN_146582db8 body=53 status=ok
// SIG undefined FUN_146582db8(void)

void FUN_146582db8(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e8750;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e8778;
  FUN_1449db362(param_1 + 0x58);
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 146582dee FUN_146582dee body=29 status=ok
// SIG undefined FUN_146582dee(void)

undefined8 FUN_146582dee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146582e0c FUN_146582e0c body=231 status=ok
// SIG undefined FUN_146582e0c(void)

void FUN_146582e0c(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14b4ef9f0;
  local_28[3] = &DAT_14cb973cc;
  local_28[4] = FUN_1459d00fc;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146582ef4 FUN_146582ef4 body=244 status=ok
// SIG undefined FUN_146582ef4(void)

undefined8
FUN_146582ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14b3ecd00;
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
  *local_40 = &PTR_FUN_14b4efb10;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_145ace2c8(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146582fea FUN_146582fea body=239 status=ok
// SIG undefined FUN_146582fea(void)

undefined8 FUN_146582fea(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14b3fc170;
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
  *local_30 = &PTR_FUN_14b4efc60;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_145a44622;
  FUN_1406f6466(&DAT_14cb7df38,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465830da FUN_1465830da body=244 status=ok
// SIG undefined FUN_1465830da(void)

undefined8 FUN_1465830da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b403f60;
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
  *local_38 = &PTR_FUN_14b4efcd0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_14600f530;
  FUN_1457bc922(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465831d0 FUN_1465831d0 body=239 status=ok
// SIG undefined FUN_1465831d0(void)

undefined8 FUN_1465831d0(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14a1e1a40;
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
  *local_30 = &PTR_FUN_14b4efd40;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_145aab8b2;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465832c0 FUN_1465832c0 body=408 status=ok
// SIG undefined FUN_1465832c0(void)

void FUN_1465832c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 1;
  FUN_1446f48e2(&local_58,0);
  *local_58 = param_2;
  local_78 = 0;
  local_70 = 0;
  local_88 = param_1;
  uStack_80 = param_2;
  uStack_7c = param_3;
  FUN_14009d848(&local_78,param_4);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,4,0x10);
  puVar1 = local_68;
  local_60 = 4;
  *local_68 = &PTR_LAB_14b4eddb0;
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
  local_68[2] = lVar3;
  *local_68 = &PTR_FUN_14b4effb0;
  local_68[3] = 0;
  FUN_14485c47a(local_68 + 3,param_1);
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_88._4_4_;
  *(undefined4 *)(puVar1 + 5) = uStack_80;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_7c;
  puVar1[6] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar1 + 7) = local_70;
  local_70 = 0;
  local_98 = 0;
  local_90 = &local_68;
  FUN_145d54248(param_1,&local_58,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff,0
               );
  FUN_1449db362(&local_78);
  if (local_58 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658345a FUN_14658345a body=294 status=ok
// SIG undefined FUN_14658345a(void)

undefined8 FUN_14658345a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x3b8);
  lVar2 = param_1 + 0x3c8;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  iVar4 = 0;
  local_40 = lVar2;
  if (*(int *)(param_1 + 0x3e0) != 0) {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(param_1 + 0x3e0);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (local_40 != lVar2)) {
    do {
      uVar3 = 1;
      if (*(int *)(*local_70 + 4 + (longlong)iStack_54 * 0x10) == 1) goto LAB_146583526;
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (local_60 != lVar2 || iStack_54 != iVar4));
  }
  uVar3 = 0;
LAB_146583526:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146583581 FUN_146583581 body=183 status=ok
// SIG undefined FUN_146583581(void)

longlong * FUN_146583581(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = FUN_14118da1c();
  uVar6 = 0;
  cVar1 = FUN_14063337c(uVar2,L"hotfixversionoverride=",param_1,1,0);
  if ((cVar1 == '\0') || ((int)param_1[1] < 2)) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)FUN_1457baddc();
    if ((longlong)(int)plVar3[1] != 0) {
      lVar4 = *plVar3;
      lVar5 = (longlong)(int)plVar3[1] * 0xf0;
      do {
        if (*(char *)(lVar4 + 0xe9) != '\0') {
          if (lVar4 != 0) {
            FUN_140002266(param_1,L"%d.%d.%d.%d",*(undefined4 *)(lVar4 + 0x58),
                          *(undefined4 *)(lVar4 + 0x5c),
                          CONCAT44(uVar6,*(undefined4 *)(lVar4 + 0x60)),*(undefined4 *)(lVar4 + 100)
                         );
            return param_1;
          }
          break;
        }
        lVar4 = lVar4 + 0xf0;
        lVar5 = lVar5 + -0xf0;
      } while (lVar5 != 0);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}



// FUNCTION 146583638 FUN_146583638 body=173 status=ok
// SIG undefined FUN_146583638(void)

void FUN_146583638(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x350) != 0) && (*(longlong *)(param_1 + 0x358) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x358) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x350);
    local_20 = *(longlong *)(param_1 + 0x358);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x358);
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465836f6 FUN_1465836f6 body=159 status=ok
// SIG undefined FUN_1465836f6(void)

longlong * FUN_1465836f6(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  return param_1;
}



// FUNCTION 146583796 FUN_146583796 body=122 status=ok
// SIG undefined FUN_146583796(void)

byte FUN_146583796(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = local_20;
  FUN_1446f470e(puVar3,L"SHIFT",1);
  plVar2 = (longlong *)FUN_1401e3228(puVar3);
  bVar1 = (byte)puVar3;
  if (plVar2 != (longlong *)0x0) {
    bVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,*param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 != (longlong *)0x0 & bVar1;
}



// FUNCTION 146583812 FUN_146583812 body=125 status=ok
// SIG undefined FUN_146583812(void)

void FUN_146583812(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x78) = param_2;
  FUN_144a787a6(param_1 + 0x88,param_3);
  local_30 = 0;
  local_28 = 0;
  FUN_14114e6dc(&local_30,param_4);
  FUN_141543d2a(param_1,&local_30);
  FUN_1449db362(param_4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146583890 FUN_146583890 body=450 status=ok
// SIG undefined FUN_146583890(void)

void FUN_146583890(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_1446f470e(&local_50,L"SHIFT",1);
    local_70 = local_50;
    plVar4 = (longlong *)FUN_1401e3228();
    if (plVar4 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      plStack_40 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
      if (local_48 != (longlong *)0x0) {
        if (param_2 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(param_2 + 0x1f0);
        }
        local_58 = 0;
        FUN_14485c47a(&local_58,uVar6);
        plVar4 = local_48;
        local_70 = (undefined8 *)0x0;
        local_68 = 0;
        FUN_1446efa72(&local_70,0,3,0x10);
        local_68 = 3;
        *local_70 = &PTR_LAB_14b4f1e80;
        local_70[1] = local_58;
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
        local_70[2] = lVar5;
        *local_70 = &PTR_FUN_14b4f1e10;
        local_70[3] = param_1;
        local_70[4] = FUN_143f3afea;
        (**(code **)(*plVar4 + 0x28))(plVar4,&local_60,param_3,&local_70);
        *(undefined8 *)(param_1 + 0x20) = local_60;
        FUN_1449db362(&local_70);
      }
    }
    plVar4 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146583a54 FUN_146583a54 body=213 status=ok
// SIG undefined FUN_146583a54(void)

void FUN_146583a54(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1446f470e(&local_40,L"SHIFT",1);
    local_28 = local_40;
    plVar3 = (longlong *)FUN_1401e3228();
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x80))(plVar3,&local_38);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x30))(local_38,param_2,(undefined8 *)(param_1 + 0x20));
      }
    }
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
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146583b2a FUN_146583b2a body=422 status=ok
// SIG undefined FUN_146583b2a(void)

longlong * FUN_146583b2a(longlong *param_1,undefined8 *param_2)

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
LAB_146583c00:
    *puVar3 = &PTR_LAB_14b4f21b0;
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
    *puVar3 = &PTR_FUN_14b4f2140;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_141663ea2;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_146583c00;
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
    *puVar3 = &PTR_LAB_14b4f21b0;
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
    *puVar3 = &PTR_FUN_14b4f2140;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_141663ea2;
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



// FUNCTION 146583cd0 FUN_146583cd0 body=422 status=ok
// SIG undefined FUN_146583cd0(void)

longlong * FUN_146583cd0(longlong *param_1,undefined8 *param_2)

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
LAB_146583da6:
    *puVar3 = &PTR_LAB_149e02020;
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
    *puVar3 = &PTR_FUN_14b4f2220;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_14110011c;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_146583da6;
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
    *puVar3 = &PTR_LAB_149e02020;
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
    *puVar3 = &PTR_FUN_14b4f2220;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14110011c;
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



// FUNCTION 146583e76 FUN_146583e76 body=418 status=ok
// SIG undefined FUN_146583e76(void)

undefined8 *
FUN_146583e76(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iVar4;
  size_t _Size;
  
  *param_1 = &PTR_FUN_14b4ef930;
  param_1[1] = 0;
  iVar4 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar4,0);
    memcpy((void *)param_1[1],pvVar3,(longlong)iVar4 * 2);
  }
  param_1[3] = 0;
  iVar4 = *(int *)(param_3 + 1);
  pvVar3 = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar4,0);
    memcpy((void *)param_1[3],pvVar3,(longlong)iVar4 * 2);
  }
  uVar2 = param_4[1];
  param_1[5] = *param_4;
  param_1[6] = uVar2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 3;
  *(undefined4 *)(param_1 + 0x10) = 8;
  _Size = (longlong)*(int *)((longlong)param_1 + 0x34) + 0xb;
  iVar4 = (int)_Size;
  *(int *)((longlong)param_1 + 0x84) = iVar4;
  *(int *)(param_1 + 0x12) = iVar4;
  if (iVar4 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    FUN_1447403be(param_1 + 0x11);
    pvVar3 = (void *)param_1[0x11];
  }
  memset(pvVar3,0,_Size);
  uVar1 = *(uint *)((longlong)param_1 + 0x84);
  iVar4 = *(int *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) = iVar4 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xa4) - iVar4) < uVar1) {
    FUN_1447403be(param_1 + 0x13);
  }
  memset((void *)((longlong)iVar4 + param_1[0x13]),0,(longlong)(int)uVar1);
  return param_1;
}



// FUNCTION 146584018 FUN_146584018 body=578 status=ok
// SIG undefined FUN_146584018(void)

void FUN_146584018(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined8 *local_80;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1465841e5:
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1465841e5;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar4 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
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
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    bVar10 = false;
    local_a8 = uVar4;
    plStack_a0 = plVar3;
  }
  plVar3 = plStack_a0;
  local_90 = (void *)0x0;
  local_88 = *(int *)(param_3 + 1);
  lVar9 = (longlong)local_88;
  pvVar5 = (void *)*param_3;
  local_98 = param_2;
  if (lVar9 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_88,0);
    memcpy(local_90,pvVar5,lVar9 * 2);
  }
  local_78[0] = (code *)0x0;
  puVar8 = (undefined8 *)FUN_14001cc68(0x30,8);
  pvVar5 = local_90;
  *puVar8 = &PTR_LAB_14b4f2310;
  puVar8[1] = local_a8;
  puVar8[2] = plStack_a0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  puVar8[3] = local_98;
  puVar8[4] = 0;
  lVar9 = (longlong)local_88;
  *(int *)(puVar8 + 5) = local_88;
  local_68 = puVar8;
  if (lVar9 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar8 + 4,local_88,0);
    memcpy((void *)puVar8[4],pvVar5,lVar9 * 2);
  }
  if (puVar8 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_143f43346;
  }
  local_b8 = 0x8ff;
  FUN_14014aede(&local_80,local_78);
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_80 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_80)(local_80,1);
    }
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_a0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plStack_a0 + 0x10))();
    }
  }
  if (!bVar10) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14658425b FUN_14658425b body=187 status=ok
// SIG undefined FUN_14658425b(void)

undefined8 * FUN_14658425b(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  
  cVar2 = FUN_144a791f8(param_2,L"spark_",6,1);
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (cVar2 == '\0') {
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    FUN_140c540b4(param_1,L"spark_",6,1);
  }
  return param_1;
}



// FUNCTION 146584316 FUN_146584316 body=233 status=ok
// SIG undefined FUN_146584316(void)

void FUN_146584316(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x50);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (uStack_40 != lVar2)) {
    do {
      do {
        *(undefined1 *)(*local_70 + 0x60 + (longlong)iStack_54 * 0x70) = 1;
        local_58 = local_58 & ~uStack_64;
        FUN_1449c0562(&local_68);
      } while (iStack_54 != iVar3);
    } while ((CONCAT44(uStack_5c,uStack_60) != lVar2) || (local_70 != plVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146584400 FUN_146584400 body=772 status=ok
// SIG undefined FUN_146584400(void)

void FUN_146584400(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [36];
  int local_b4;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x28);
    plVar2 = (longlong *)(param_1 + 0x38);
    local_a8 = 0x100000000;
    local_98 = 0xffffffff;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    uStack_a0 = plVar2;
    if (*(int *)(param_1 + 0x50) == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1449c0562(&local_a8);
      local_b4 = *(int *)(param_1 + 0x50);
    }
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    uStack_50 = uStack_90;
    local_58 = local_98;
    uVar7 = local_58;
    local_58._4_4_ = (int)((ulonglong)local_98 >> 0x20);
    iVar10 = local_58._4_4_;
    local_b0 = plVar2;
    local_70 = plVar1;
    if ((local_58._4_4_ != local_b4) || (local_58 = local_98, uStack_a0 != plVar2)) {
      do {
        local_58 = uVar7;
        lVar6 = *local_70;
        lVar11 = (longlong)iVar10 * 0x70;
        uVar5 = *(undefined4 *)(lVar6 + lVar11);
        local_a8 = *(undefined8 *)*param_2;
        plVar2 = (longlong *)((undefined8 *)*param_2)[1];
        if (plVar2 == (longlong *)0x0) {
          uStack_a0 = (longlong *)0x0;
          cVar8 = FUN_145daf7a6(param_1,uVar5);
        }
        else {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          uStack_a0 = plVar2;
          cVar8 = FUN_145daf7a6(param_1,uVar5);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar2 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar4 = (int *)((longlong)plVar2 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          LOCK();
          plVar3 = plVar2 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar4 = (int *)((longlong)plVar2 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        if (cVar8 != '\0') {
          lVar12 = lVar6 + lVar11 + 8;
          if (*(char *)(lVar6 + lVar11 + 0x60) == '\x01') {
            local_a8 = *(undefined8 *)*param_2;
            plVar2 = (longlong *)((undefined8 *)*param_2)[1];
            uStack_a0 = plVar2;
            if (plVar2 == (longlong *)0x0) {
              cVar8 = FUN_140b6f528(local_a8,lVar12,&local_a8);
            }
            else {
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
              cVar8 = FUN_140b6f528(local_a8,lVar12);
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar2 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar2)(plVar2);
                  LOCK();
                  piVar4 = (int *)((longlong)plVar2 + 0xc);
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  if (*piVar4 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
              }
            }
            if (cVar8 == '\0') {
              FUN_145daf526(param_1,lVar12);
              goto LAB_146584607;
            }
          }
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = (longlong *)0x0;
          local_78 = 0;
          FUN_145dafb08(param_1,param_2,&local_a8);
          cVar8 = FUN_14154e566(param_1,lVar12,&local_a8);
          cVar9 = FUN_145dafdaa(param_1,lVar12);
          if ((cVar8 != '\0') || (cVar9 != '\0')) {
            FUN_141163218(param_1,lVar12);
          }
          FUN_14154e5cc(&local_a8);
        }
LAB_146584607:
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
        FUN_1449c0562(&local_68);
        iVar10 = local_58._4_4_;
        uVar7 = local_58;
      } while (((local_58._4_4_ != local_b4) ||
               ((longlong *)CONCAT44(uStack_5c,uStack_60) != local_b0)) || (local_70 != plVar1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146584706 FUN_146584706 body=129 status=ok
// SIG undefined FUN_146584706(void)

void FUN_146584706(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar5 = (longlong *)FUN_144a7c8f0();
    lVar4 = plVar5[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar3 = *plVar5;
      lVar6 = 0;
      do {
        if ((*(longlong *)(lVar3 + lVar6) != 0) &&
           (iVar1 = *(int *)(*(longlong *)(lVar3 + lVar6) + 0xe0), iVar1 != -1)) {
          iVar2 = *(int *)(param_1 + 0x20);
          *(uint *)(param_1 + 0x20) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
            FUN_1446f48e2((longlong *)(param_1 + 0x18),iVar2);
          }
          *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 4) = iVar1;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 146584788 FUN_146584788 body=210 status=ok
// SIG undefined FUN_146584788(void)

undefined4 FUN_146584788(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      uVar3 = (**(code **)(*plVar4 + 0x378))(plVar4,param_1[2],param_2,DAT_14c892fc4);
      goto LAB_146584805;
    }
  }
  uVar3 = 0;
LAB_146584805:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658485c FUN_14658485c body=93 status=ok
// SIG undefined FUN_14658485c(void)

void FUN_14658485c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ef9f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1465848ba FUN_1465848ba body=29 status=ok
// SIG undefined FUN_1465848ba(void)

undefined8 FUN_1465848ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465848d8 FUN_1465848d8 body=26 status=ok
// SIG undefined FUN_1465848d8(void)

bool FUN_1465848d8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1465848f2 FUN_1465848f2 body=24 status=ok
// SIG undefined FUN_1465848f2(void)

bool FUN_1465848f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14658490a FUN_14658490a body=93 status=ok
// SIG undefined FUN_14658490a(void)

void FUN_14658490a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4efaa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146584968 FUN_146584968 body=29 status=ok
// SIG undefined FUN_146584968(void)

bool FUN_146584968(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146584986 FUN_146584986 body=26 status=ok
// SIG undefined FUN_146584986(void)

bool FUN_146584986(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1465849a0 FUN_1465849a0 body=24 status=ok
// SIG undefined FUN_1465849a0(void)

bool FUN_1465849a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1465849b8 FUN_1465849b8 body=24 status=ok
// SIG undefined FUN_1465849b8(void)

bool FUN_1465849b8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1465849d0 FUN_1465849d0 body=29 status=ok
// SIG undefined FUN_1465849d0(void)

bool FUN_1465849d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1465849ee FUN_1465849ee body=26 status=ok
// SIG undefined FUN_1465849ee(void)

bool FUN_1465849ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146584a08 FUN_146584a08 body=24 status=ok
// SIG undefined FUN_146584a08(void)

bool FUN_146584a08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146584a20 FUN_146584a20 body=24 status=ok
// SIG undefined FUN_146584a20(void)

bool FUN_146584a20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146584a38 FUN_146584a38 body=29 status=ok
// SIG undefined FUN_146584a38(void)

undefined8 FUN_146584a38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146584a56 FUN_146584a56 body=29 status=ok
// SIG undefined FUN_146584a56(void)

undefined8 FUN_146584a56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146584a74 FUN_146584a74 body=132 status=ok
// SIG undefined FUN_146584a74(void)

void FUN_146584a74(longlong param_1,int param_2)

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



// FUNCTION 146584af8 FUN_146584af8 body=29 status=ok
// SIG undefined FUN_146584af8(void)

undefined8 FUN_146584af8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146584b16 FUN_146584b16 body=132 status=ok
// SIG undefined FUN_146584b16(void)

void FUN_146584b16(longlong param_1,int param_2)

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



// FUNCTION 146584b9a FUN_146584b9a body=29 status=ok
// SIG undefined FUN_146584b9a(void)

undefined8 FUN_146584b9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146584bb8 FUN_146584bb8 body=93 status=ok
// SIG undefined FUN_146584bb8(void)

void FUN_146584bb8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f0520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146584c16 FUN_146584c16 body=29 status=ok
// SIG undefined FUN_146584c16(void)

undefined8 FUN_146584c16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146584c34 FUN_146584c34 body=29 status=ok
// SIG undefined FUN_146584c34(void)

undefined8 FUN_146584c34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146584c52 FUN_146584c52 body=118 status=ok
// SIG undefined FUN_146584c52(void)

void FUN_146584c52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146584cc8 FUN_146584cc8 body=29 status=ok
// SIG undefined FUN_146584cc8(void)

undefined8 FUN_146584cc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146584ce6 FUN_146584ce6 body=93 status=ok
// SIG undefined FUN_146584ce6(void)

void FUN_146584ce6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146584d44 FUN_146584d44 body=29 status=ok
// SIG undefined FUN_146584d44(void)

undefined8 FUN_146584d44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146584d62 FUN_146584d62 body=64 status=ok
// SIG undefined FUN_146584d62(void)

void FUN_146584d62(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1414b2f6c();
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x60), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146584d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))
              (plVar1,*(undefined4 *)(param_1 + 0x70),param_1 + 0x78,*(undefined4 *)(param_1 + 0x74)
              );
    return;
  }
  return;
}



// FUNCTION 146584da2 FUN_146584da2 body=29 status=ok
// SIG undefined FUN_146584da2(void)

undefined8 FUN_146584da2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146584dc0 FUN_146584dc0 body=118 status=ok
// SIG undefined FUN_146584dc0(void)

void FUN_146584dc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0e90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146584e36 FUN_146584e36 body=118 status=ok
// SIG undefined FUN_146584e36(void)

void FUN_146584e36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0f40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146584eac FUN_146584eac body=422 status=ok
// SIG undefined FUN_146584eac(void)

longlong * FUN_146584eac(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146584f86:
    *puVar3 = &PTR_LAB_14b4f06a0;
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
    *puVar3 = &PTR_FUN_14b4f0fb0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_146584f86;
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
    *puVar3 = &PTR_LAB_14b4f06a0;
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
    *puVar3 = &PTR_FUN_14b4f0fb0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
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



// FUNCTION 146585052 FUN_146585052 body=118 status=ok
// SIG undefined FUN_146585052(void)

void FUN_146585052(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f06a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0fb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1465850c8 FUN_1465850c8 body=29 status=ok
// SIG undefined FUN_1465850c8(void)

undefined8 FUN_1465850c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465850e6 FUN_1465850e6 body=132 status=ok
// SIG undefined FUN_1465850e6(void)

void FUN_1465850e6(longlong param_1,int param_2)

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



// FUNCTION 14658516a FUN_14658516a body=93 status=ok
// SIG undefined FUN_14658516a(void)

void FUN_14658516a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f10a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1465851c8 FUN_1465851c8 body=53 status=ok
// SIG undefined FUN_1465851c8(void)

void FUN_1465851c8(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4f12f0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4f1318;
  FUN_1449db362(param_1 + 0x40);
  FUN_14589ea1e(param_1 + 0x10);
  return;
}



// FUNCTION 1465851fe FUN_1465851fe body=29 status=ok
// SIG undefined FUN_1465851fe(void)

undefined8 FUN_1465851fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658521c FUN_14658521c body=93 status=ok
// SIG undefined FUN_14658521c(void)

void FUN_14658521c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f1e80;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4f1e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14658527a FUN_14658527a body=101 status=ok
// SIG undefined FUN_14658527a(void)

void FUN_14658527a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f1ef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1465852e0 FUN_1465852e0 body=118 status=ok
// SIG undefined FUN_1465852e0(void)

void FUN_1465852e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f1ff0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b4f1f80;
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



// FUNCTION 146585356 FUN_146585356 body=118 status=ok
// SIG undefined FUN_146585356(void)

void FUN_146585356(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f21b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f2140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1465853cc FUN_1465853cc body=147 status=ok
// SIG undefined FUN_1465853cc(void)

void FUN_1465853cc(longlong param_1,int param_2)

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



// FUNCTION 146585460 FUN_146585460 body=118 status=ok
// SIG undefined FUN_146585460(void)

void FUN_146585460(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f2220;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1465854d6 FUN_1465854d6 body=29 status=ok
// SIG undefined FUN_1465854d6(void)

undefined8 FUN_1465854d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465854f4 FUN_1465854f4 body=29 status=ok
// SIG undefined FUN_1465854f4(void)

undefined8 FUN_1465854f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585512 FUN_146585512 body=29 status=ok
// SIG undefined FUN_146585512(void)

undefined8 FUN_146585512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585530 FUN_146585530 body=147 status=ok
// SIG undefined FUN_146585530(void)

void FUN_146585530(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1465855c4 FUN_1465855c4 body=29 status=ok
// SIG undefined FUN_1465855c4(void)

undefined8 FUN_1465855c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465855e2 FUN_1465855e2 body=134 status=ok
// SIG undefined FUN_1465855e2(void)

int FUN_1465855e2(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    do {
      cVar3 = FUN_1410d3d16(lVar1 + uVar5,param_2);
      if (cVar3 != '\0') {
        iVar4 = (int)(uVar5 >> 3) * -0x49249249;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      uVar5 = uVar5 + 0x38;
    } while ((longlong)(int)lVar2 * 0x38 - uVar5 != 0);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_140cb3cca(param_1,iVar4);
  }
  FUN_14144d64a((longlong)iVar4 * 0x38 + *param_1,param_2);
  return iVar4;
}



// FUNCTION 146585668 FUN_146585668 body=29 status=ok
// SIG undefined FUN_146585668(void)

undefined8 FUN_146585668(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585686 FUN_146585686 body=118 status=ok
// SIG undefined FUN_146585686(void)

void FUN_146585686(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f26f0;
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



// FUNCTION 1465856fc FUN_1465856fc body=53 status=ok
// SIG undefined FUN_1465856fc(void)

void FUN_1465856fc(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4f2780;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4f27a8;
  FUN_1449db362(param_1 + 0x48);
  FUN_1411ebb9a(param_1 + 0x10);
  return;
}



// FUNCTION 146585732 FUN_146585732 body=29 status=ok
// SIG undefined FUN_146585732(void)

undefined8 FUN_146585732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585756 FUN_146585756 body=118 status=ok
// SIG undefined FUN_146585756(void)

void FUN_146585756(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f27b0;
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



// FUNCTION 1465857cc FUN_1465857cc body=93 status=ok
// SIG undefined FUN_1465857cc(void)

void FUN_1465857cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f28a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14658582a FUN_14658582a body=29 status=ok
// SIG undefined FUN_14658582a(void)

undefined8 FUN_14658582a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585872 FUN_146585872 body=29 status=ok
// SIG undefined FUN_146585872(void)

undefined8 FUN_146585872(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585890 FUN_146585890 body=118 status=ok
// SIG undefined FUN_146585890(void)

void FUN_146585890(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f29b0;
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



// FUNCTION 146585906 FUN_146585906 body=118 status=ok
// SIG undefined FUN_146585906(void)

void FUN_146585906(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f2a60;
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



// FUNCTION 14658597c FUN_14658597c body=394 status=ok
// SIG undefined FUN_14658597c(void)

void FUN_14658597c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((-1 < *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x40))) {
    local_58 = FUN_143f43ca4;
    local_50 = 0;
    FUN_148aa3572(&local_48,param_1,&local_58);
    local_58 = *(code **)(param_1 + 0x30);
    FUN_148aa3430(param_1 + 0x20,&local_58,
                  (longlong)*(int *)(param_1 + 0x48) * 0x10 + *(longlong *)(param_1 + 0x38),
                  &local_48);
    FUN_1449db362(&local_48);
    goto LAB_146585a54;
  }
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
LAB_146585a77:
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    if (plVar5 == (longlong *)0x0) goto LAB_146585a77;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    if ((local_48 != (longlong *)0x0) && (iVar3 = *(int *)(param_1 + 0x40), (longlong)iVar3 != 0)) {
      lVar4 = *(longlong *)(param_1 + 0x38);
      lVar8 = 0;
      do {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar6 = 0;
          uVar7 = 0;
        }
        else {
          uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x30) + 0x10);
          uVar6 = uVar7 & 0xffffffff00000000;
        }
        (**(code **)(*local_48 + 0x390))
                  (local_48,uVar7 & 0xffffffff | uVar6,*(undefined8 *)(lVar4 + lVar8),0);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar3 * 0x10 != lVar8);
    }
  }
  plVar5 = plStack_40;
  *(undefined1 *)(param_1 + 0x128) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_146585a54:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146585b08 FUN_146585b08 body=54 status=ok
// SIG undefined FUN_146585b08(void)

undefined8 * FUN_146585b08(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4c34a0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585b3e FUN_146585b3e body=121 status=ok
// SIG undefined FUN_146585b3e(void)

void FUN_146585b3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c34a0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14114e6dc(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b4f2d60;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 146585bb8 FUN_146585bb8 body=29 status=ok
// SIG undefined FUN_146585bb8(void)

undefined8 FUN_146585bb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585bd6 FUN_146585bd6 body=73 status=ok
// SIG undefined FUN_146585bd6(void)

void FUN_146585bd6(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4f2e40;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4f2e68;
  FUN_1449db362(param_1 + 0x128);
  FUN_14124f074(param_1 + 0x48);
  FUN_1411ebb9a(param_1 + 0x10);
  return;
}



// FUNCTION 146585c20 FUN_146585c20 body=29 status=ok
// SIG undefined FUN_146585c20(void)

undefined8 FUN_146585c20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585c3e FUN_146585c3e body=118 status=ok
// SIG undefined FUN_146585c3e(void)

void FUN_146585c3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f2e70;
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



// FUNCTION 146585cb4 FUN_146585cb4 body=118 status=ok
// SIG undefined FUN_146585cb4(void)

void FUN_146585cb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f2f20;
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



// FUNCTION 146585d2a FUN_146585d2a body=54 status=ok
// SIG undefined FUN_146585d2a(void)

undefined8 * FUN_146585d2a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4f3030;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585d60 FUN_146585d60 body=29 status=ok
// SIG undefined FUN_146585d60(void)

undefined8 FUN_146585d60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585d7e FUN_146585d7e body=29 status=ok
// SIG undefined FUN_146585d7e(void)

undefined8 FUN_146585d7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146585d9c FUN_146585d9c body=118 status=ok
// SIG undefined FUN_146585d9c(void)

void FUN_146585d9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c2ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f3140;
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



// FUNCTION 146585e12 FUN_146585e12 body=118 status=ok
// SIG undefined FUN_146585e12(void)

void FUN_146585e12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f31f0;
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



// FUNCTION 146585e88 FUN_146585e88 body=397 status=ok
// SIG undefined FUN_146585e88(void)

void FUN_146585e88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((-1 < *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x40))) {
    local_58 = FUN_143f43e64;
    local_50 = 0;
    FUN_145ef159a(&local_48,param_1,&local_58);
    local_58 = *(code **)(param_1 + 0x30);
    FUN_148aa3430(param_1 + 0x20,&local_58,
                  (longlong)*(int *)(param_1 + 0x48) * 0x10 + *(longlong *)(param_1 + 0x38),
                  &local_48);
    FUN_1449db362(&local_48);
    goto LAB_146585f63;
  }
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
LAB_146585f86:
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    if (plVar5 == (longlong *)0x0) goto LAB_146585f86;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    if ((local_48 != (longlong *)0x0) && (iVar3 = *(int *)(param_1 + 0x40), (longlong)iVar3 != 0)) {
      lVar4 = *(longlong *)(param_1 + 0x38);
      lVar8 = 0;
      do {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar6 = 0;
          uVar7 = 0;
        }
        else {
          uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x30) + 0x10);
          uVar6 = uVar7 & 0xffffffff00000000;
        }
        (**(code **)(*local_48 + 0x390))
                  (local_48,uVar7 & 0xffffffff | uVar6,*(undefined8 *)(lVar4 + lVar8),0);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar3 * 0x10 != lVar8);
    }
  }
  plVar5 = plStack_40;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_146585f63:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146586016 FUN_146586016 body=53 status=ok
// SIG undefined FUN_146586016(void)

void FUN_146586016(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4f3320;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4f3348;
  FUN_1449db362(param_1 + 0x48);
  FUN_1411ebb9a(param_1 + 0x10);
  return;
}



// FUNCTION 14658604c FUN_14658604c body=29 status=ok
// SIG undefined FUN_14658604c(void)

undefined8 FUN_14658604c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658608a FUN_14658608a body=118 status=ok
// SIG undefined FUN_14658608a(void)

void FUN_14658608a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f3350;
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



// FUNCTION 146586100 FUN_146586100 body=140 status=ok
// SIG undefined FUN_146586100(void)

ulonglong FUN_146586100(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = &local_20;
  FUN_14101cf30(param_1,plVar1);
  if ((longlong)local_18 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    lVar2 = 0;
    do {
      bVar3 = *(int *)(*(longlong *)(local_20 + lVar2) + 0x14) == 1;
      plVar1 = (longlong *)CONCAT71((int7)((ulonglong)plVar1 >> 8),bVar3);
      if (bVar3) break;
      bVar3 = (longlong)local_18 * 0x10 + -0x10 != lVar2;
      lVar2 = lVar2 + 0x10;
    } while (bVar3);
  }
  FUN_14101cee4();
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (ulonglong)plVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658618e FUN_14658618e body=83 status=ok
// SIG undefined FUN_14658618e(void)

undefined8 FUN_14658618e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48), lVar1 != 0)) {
    lVar2 = FUN_140b7066c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_1458ff3f0(lVar1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1465861e2 FUN_1465861e2 body=129 status=ok
// SIG undefined FUN_1465861e2(void)

undefined8 FUN_1465861e2(void)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  local_28 = &DAT_14c872ce8;
  cVar1 = FUN_14052bb08(DAT_14c872ce0,L"GbxTextChat",L"bEnabled");
  if ((cVar1 != '\0') && (local_19 != '\x01')) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 146586278 FUN_146586278 body=586 status=ok
// SIG undefined FUN_146586278(void)

void FUN_146586278(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((longlong *)param_1[6] != (longlong *)0x0) && (param_1[0x35] != 0)) {
    uVar4 = (**(code **)(*(longlong *)param_1[6] + 0x68))();
    if (param_1[0x35] != 0) {
      FUN_14480f766(uVar4);
    }
    param_1[0x35] = 0;
  }
  if (((param_1[0x37] != 0) && (param_1[0x38] != 0)) && (0 < *(int *)(param_1[0x38] + 8))) {
    FUN_1401cb356();
    local_30 = param_1[0x37];
    local_28 = param_1[0x38];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    plVar3 = (longlong *)param_1[0x38];
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if (((param_1[0x39] != 0) && (param_1[0x3a] != 0)) && (0 < *(int *)(param_1[0x3a] + 8))) {
    FUN_1401cb356();
    local_40 = param_1[0x39];
    local_38 = param_1[0x3a];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_40);
    plVar3 = (longlong *)param_1[0x3a];
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar5 = FUN_141030f66();
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0)) {
      FUN_140457ffc(lVar5 + 0x20,param_1);
      FUN_140457ffc(lVar5 + 0x38,param_1);
    }
  }
  lVar5 = param_1[0x31];
  plVar3 = (longlong *)param_1[0x32];
  if (plVar3 != (longlong *)0x0) {
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
  if (lVar5 != 0) {
    if (param_1[0x36] != 0) {
      FUN_14480f766(param_1[0x31] + 8);
    }
    param_1[0x36] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000146586384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c0))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465864c4 FUN_1465864c4 body=148 status=ok
// SIG undefined FUN_1465864c4(void)

undefined8 * FUN_1465864c4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  
  iVar5 = *(int *)(param_3 + 1);
  if (iVar5 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar3,puVar6);
  iVar5 = FUN_14131d216((longlong *)(param_1 + 0x138),uVar4,param_3);
  if (iVar5 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar1 = lVar2 + (longlong)iVar5 * 0x28;
    if ((lVar1 != 0) && (lVar2 + (longlong)iVar5 * 0x28 != -0x10)) {
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



// FUNCTION 146586558 FUN_146586558 body=328 status=ok
// SIG undefined FUN_146586558(void)

void FUN_146586558(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14131d034(param_1,&local_28,param_2);
  FUN_145f8388a(param_1,&local_38);
  if ((local_38 != 0) && (plVar2 = *(longlong **)(local_38 + 0x38), plVar2 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2);
    if (*(longlong *)(local_28 + 0x108) != 0) {
      FUN_14480f766(uVar3);
    }
    *(undefined8 *)(local_28 + 0x108) = 0;
    uVar3 = (**(code **)(*plVar2 + 0x140))(plVar2);
    if (*(longlong *)(local_28 + 0x110) != 0) {
      FUN_14480f766(uVar3);
    }
    *(undefined8 *)(local_28 + 0x110) = 0;
    uVar3 = (**(code **)(*plVar2 + 0x150))(plVar2);
    if (*(longlong *)(local_28 + 0x118) != 0) {
      FUN_14480f766(uVar3);
    }
    *(undefined8 *)(local_28 + 0x118) = 0;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465866b2 FUN_1465866b2 body=383 status=ok
// SIG undefined FUN_1465866b2(void)

undefined8 FUN_1465866b2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
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
  plVar1 = (longlong *)(param_1 + 0x138);
  lVar2 = param_1 + 0x148;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x160) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar8 = *(int *)(param_1 + 0x160);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c == iVar8) && (uStack_48 == lVar2)) {
    uVar5 = 0;
  }
  else {
    do {
      lVar4 = *(longlong *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x28);
      if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
        uVar3 = *(uint *)(*param_2 + 0x30);
        lVar7 = lVar4 + 0x48;
        if (*(longlong *)(lVar4 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar4 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar4 + 0x58) - 1U & uVar3) * 4);
        if (iVar6 != -1) {
          do {
            lVar7 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar6 * 0x10;
            if (*(uint *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar6 * 0x10) == uVar3) {
              if (((lVar7 != 0) && ((int *)(lVar7 + 4) != (int *)0x0)) && (*(int *)(lVar7 + 4) == 2)
                 ) {
                uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
                goto LAB_1465867f3;
              }
              break;
            }
            iVar6 = *(int *)(lVar7 + 8);
          } while (iVar6 != -1);
        }
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (((iStack_5c != iVar8) || (CONCAT44(uStack_64,uStack_68) != lVar2)) ||
            (uVar5 = 0, local_78 != plVar1));
  }
LAB_1465867f3:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146586832 FUN_146586832 body=471 status=ok
// SIG undefined FUN_146586832(void)

ulonglong FUN_146586832(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar8 = *(int *)(param_3 + 1);
  if (iVar8 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*param_3;
  }
  uVar12 = 0;
  uVar9 = (ulonglong)(iVar8 - 1);
  if (iVar8 == 0) {
    uVar9 = uVar12;
  }
  uVar7 = FUN_144a49b4a(uVar9,puVar11);
  iVar8 = FUN_14131d216((longlong *)(param_1 + 0x138),uVar7,param_3);
  if (iVar8 != -1) {
    lVar5 = *(longlong *)(param_1 + 0x138);
    lVar10 = lVar5 + (longlong)iVar8 * 0x28;
    uVar12 = 0;
    if ((lVar10 != 0) && (lVar5 + (longlong)iVar8 * 0x28 != -0x10)) {
      lVar5 = *(longlong *)(lVar10 + 0x10);
      plVar6 = *(longlong **)(lVar10 + 0x18);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      lVar10 = *param_2;
      uVar4 = *(uint *)(lVar10 + 0x30);
      if (uVar4 == 0xffffffff) {
        local_38 = *(longlong **)(lVar10 + 0x18);
        local_30 = *(longlong **)(lVar10 + 0x20);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        uVar7 = (**(code **)(*local_38 + 0x40))();
        iVar8 = FUN_140b6c20e(lVar5 + 0x60,uVar7,&local_38);
        plVar1 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_30 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        uVar12 = (ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),iVar8 != -1);
      }
      else {
        if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
          lVar10 = lVar5 + 0x48;
          if (*(longlong *)(lVar5 + 0x50) != 0) {
            lVar10 = *(longlong *)(lVar5 + 0x50);
          }
          iVar8 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar5 + 0x58) - 1U & uVar4) * 4);
          if (iVar8 != -1) {
            do {
              lVar10 = *(longlong *)(lVar5 + 0x10) + (longlong)iVar8 * 0x10;
              if (*(uint *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar8 * 0x10) == uVar4) {
                if (((lVar10 != 0) && ((int *)(lVar10 + 4) != (int *)0x0)) &&
                   (*(int *)(lVar10 + 4) == 2)) {
                  uVar12 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
                  goto LAB_14658692f;
                }
                break;
              }
              iVar8 = *(int *)(lVar10 + 8);
            } while (iVar8 != -1);
          }
        }
        uVar12 = 0;
      }
LAB_14658692f:
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 146586a0a FUN_146586a0a body=77 status=ok
// SIG undefined FUN_146586a0a(void)

undefined8 FUN_146586a0a(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (param_1 = *(longlong **)(lVar2 + 0x1f0), param_1 != (longlong *)0x0)) {
    lVar2 = FUN_141030f66();
    if ((lVar2 != 0) && (param_1 = (longlong *)0x0, *(longlong *)(lVar2 + 0x30) != 0)) {
      uVar3 = FUN_140b645f6(*(longlong *)(lVar2 + 0x30),*param_2);
      bVar5 = (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar1 = 1;
      goto LAB_146586a4b;
    }
  }
  bVar5 = (byte)param_1;
  bVar1 = 0;
  uVar4 = 0;
LAB_146586a4b:
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 146586a58 FUN_146586a58 body=389 status=ok
// SIG undefined FUN_146586a58(void)

void FUN_146586a58(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145af3e6e(param_1,&local_78);
  if ((longlong)local_70 == 0) {
    local_70 = 0;
  }
  else {
    plVar8 = local_78 + (longlong)local_70 * 2;
    plVar6 = local_78;
    do {
      lVar2 = *plVar6;
      lVar1 = lVar2 + 0xc0;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar1;
      if (*(int *)(lVar2 + 0xd8) == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar7 = *(int *)(lVar2 + 0xd8);
      }
      plVar5 = (longlong *)(lVar2 + 0xb0);
      uStack_80 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_58;
      uVar3 = local_88;
      local_98 = (undefined4)local_68;
      uStack_94 = local_68._4_4_;
      uStack_90 = (undefined4)uStack_60;
      uStack_8c = uStack_60._4_4_;
      local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar4 = local_88._4_4_;
      local_a0 = plVar5;
      if ((local_88._4_4_ != iVar7) || (local_88 = uVar3, uStack_60 != lVar1)) {
        do {
          local_88 = uVar3;
          FUN_1414df638(param_1,(longlong)iVar4 * 0x18 + *local_a0);
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
          FUN_1449c0562(&local_98);
          iVar4 = local_88._4_4_;
          uVar3 = local_88;
        } while (local_a0 != plVar5 ||
                 (CONCAT44(uStack_8c,uStack_90) != lVar1 || local_88._4_4_ != iVar7));
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar8);
  }
  FUN_145af3e23(local_78,local_70);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146586bde FUN_146586bde body=189 status=ok
// SIG undefined FUN_146586bde(void)

undefined8 * FUN_146586bde(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
LAB_146586c73:
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    local_28 = 0;
    plVar3 = (longlong *)FUN_1401e3228();
    if (plVar3 == (longlong *)0x0) goto LAB_146586c73;
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x120))(local_38,param_1,param_2);
      goto LAB_146586c41;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_146586c41:
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146586c9c FUN_146586c9c body=422 status=ok
// SIG undefined FUN_146586c9c(void)

longlong * FUN_146586c9c(longlong *param_1,undefined8 *param_2)

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
LAB_146586d72:
    *puVar3 = &PTR_LAB_14b4f7870;
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
    *puVar3 = &PTR_FUN_14b4f6c70;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_141684d38;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_146586d72;
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
    *puVar3 = &PTR_LAB_14b4f7870;
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
    *puVar3 = &PTR_FUN_14b4f6c70;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_141684d38;
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



// FUNCTION 146586e42 FUN_146586e42 body=61 status=ok
// SIG undefined FUN_146586e42(void)

void FUN_146586e42(longlong *param_1)

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



// FUNCTION 146586e80 FUN_146586e80 body=422 status=ok
// SIG undefined FUN_146586e80(void)

longlong * FUN_146586e80(longlong *param_1,undefined8 *param_2)

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
LAB_146586f56:
    *puVar3 = &PTR_LAB_14b4f6e30;
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
    *puVar3 = &PTR_FUN_14b4f6dc0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_141544406;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_146586f56;
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
    *puVar3 = &PTR_LAB_14b4f6e30;
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
    *puVar3 = &PTR_FUN_14b4f6dc0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_141544406;
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



// FUNCTION 146587026 FUN_146587026 body=298 status=ok
// SIG undefined FUN_146587026(void)

longlong * FUN_146587026(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149e063e0;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b4f6ea0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = FUN_1415d732e;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e063e0;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b4f6ea0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1415d732e;
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



// FUNCTION 146587150 FUN_146587150 body=298 status=ok
// SIG undefined FUN_146587150(void)

longlong * FUN_146587150(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_14b4f6e30;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b4f6f10;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = FUN_14159af3e;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4f6e30;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b4f6f10;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14159af3e;
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



// FUNCTION 14658727a FUN_14658727a body=455 status=ok
// SIG undefined FUN_14658727a(void)

void FUN_14658727a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_14101cf30(*(undefined8 *)(param_1 + 8),&local_60);
    lVar5 = local_60;
    lVar9 = (longlong)local_58;
    if (lVar9 == 0) {
      local_58 = 0;
    }
    else {
      lVar8 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar5 + lVar8) + 0x14) == 0) {
          FUN_1446f470e(&local_78,L"SHIFT",1);
          local_50 = local_78;
          plVar7 = (longlong *)FUN_1401e3228(&local_50);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x80))(plVar7,&local_70);
            plVar7 = local_70;
            if (local_70 != (longlong *)0x0) {
              puVar2 = *(undefined8 **)(lVar5 + lVar8);
              uVar3 = *puVar2;
              plVar4 = (longlong *)puVar2[1];
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              (**(code **)(*local_70 + 0x178))(local_70,&local_7c,uVar3);
              uVar6 = (**(code **)(*plVar7 + 0x188))(plVar7,local_7c);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar4 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
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
              FUN_1413f4416(*(undefined8 *)(param_1 + 8),uVar6,&DAT_14cb97920,param_1 + 0x170);
            }
            plVar7 = local_68;
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_68 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
          }
        }
        lVar8 = lVar8 + 0x10;
      } while (lVar9 * 0x10 != lVar8);
    }
    FUN_14101cee4(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146587442 FUN_146587442 body=74 status=ok
// SIG undefined FUN_146587442(void)

void FUN_146587442(void)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = DAT_14cb97968;
  if (DAT_14cb97968 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14cb97968 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1458c3d32(DAT_14cb97950,DAT_14cb97958);
  if (DAT_14cb97950 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14658748c FUN_14658748c body=118 status=ok
// SIG undefined FUN_14658748c(void)

void FUN_14658748c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5420;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146587502 FUN_146587502 body=93 status=ok
// SIG undefined FUN_146587502(void)

void FUN_146587502(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f55b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146587560 FUN_146587560 body=61 status=ok
// SIG undefined FUN_146587560(void)

void FUN_146587560(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4f5950;
  FUN_1449db362(param_1 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146587599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14658759e FUN_14658759e body=29 status=ok
// SIG undefined FUN_14658759e(void)

undefined8 FUN_14658759e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465875bc FUN_1465875bc body=29 status=ok
// SIG undefined FUN_1465875bc(void)

undefined8 FUN_1465875bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465875da FUN_1465875da body=93 status=ok
// SIG undefined FUN_1465875da(void)

void FUN_1465875da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f5c80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146587638 FUN_146587638 body=29 status=ok
// SIG undefined FUN_146587638(void)

undefined8 FUN_146587638(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146587656 FUN_146587656 body=68 status=ok
// SIG undefined FUN_146587656(void)

undefined8 * FUN_146587656(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f5e20;
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



// FUNCTION 14658769a FUN_14658769a body=118 status=ok
// SIG undefined FUN_14658769a(void)

void FUN_14658769a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4ea0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5e20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146587710 FUN_146587710 body=24 status=ok
// SIG undefined FUN_146587710(void)

bool FUN_146587710(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146587728 FUN_146587728 body=93 status=ok
// SIG undefined FUN_146587728(void)

void FUN_146587728(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6110;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4f60a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146587786 FUN_146587786 body=24 status=ok
// SIG undefined FUN_146587786(void)

bool FUN_146587786(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14658779e FUN_14658779e body=29 status=ok
// SIG undefined FUN_14658779e(void)

undefined8 FUN_14658779e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465877bc FUN_1465877bc body=26 status=ok
// SIG undefined FUN_1465877bc(void)

bool FUN_1465877bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1465877d6 FUN_1465877d6 body=24 status=ok
// SIG undefined FUN_1465877d6(void)

bool FUN_1465877d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1465877ee FUN_1465877ee body=93 status=ok
// SIG undefined FUN_1465877ee(void)

void FUN_1465877ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14658784c FUN_14658784c body=29 status=ok
// SIG undefined FUN_14658784c(void)

undefined8 FUN_14658784c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658786a FUN_14658786a body=54 status=ok
// SIG undefined FUN_14658786a(void)

undefined8 * FUN_14658786a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4f6890;
  FUN_1449db362(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465878a0 FUN_1465878a0 body=29 status=ok
// SIG undefined FUN_1465878a0(void)

undefined8 FUN_1465878a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465878be FUN_1465878be body=24 status=ok
// SIG undefined FUN_1465878be(void)

bool FUN_1465878be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}


