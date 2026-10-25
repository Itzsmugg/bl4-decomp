// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14612b596 FUN_14612b596 body=254 status=ok
// SIG undefined FUN_14612b596(void)

longlong *
FUN_14612b596(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_14612b698(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14612b710(&local_30,plVar1);
  plVar2 = local_28;
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
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612b698 FUN_14612b698 body=120 status=ok
// SIG undefined FUN_14612b698(void)

undefined8 * FUN_14612b698(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99e4f0;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99e510;
  param_1[6] = &PTR_FUN_14b99e550;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14612b710 FUN_14612b710 body=162 status=ok
// SIG undefined FUN_14612b710(void)

void FUN_14612b710(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_14612b74f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_14612b74f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14612b74f:
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
                    /* WARNING: Could not recover jumptable at 0x00014612b7ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14612b7b2 FUN_14612b7b2 body=138 status=ok
// SIG undefined FUN_14612b7b2(void)

code * FUN_14612b7b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d00000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804440a;
}



// FUNCTION 14612b83c FUN_14612b83c body=138 status=ok
// SIG undefined FUN_14612b83c(void)

code * FUN_14612b83c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultDynamicMaterialParameter1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f00000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14645fb34;
}



// FUNCTION 14612b8c6 FUN_14612b8c6 body=138 status=ok
// SIG undefined FUN_14612b8c6(void)

code * FUN_14612b8c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaterialParam1DataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b000000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480446bc;
}



// FUNCTION 14612b950 FUN_14612b950 body=290 status=ok
// SIG undefined FUN_14612b950(void)

void FUN_14612b950(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1410c2f26();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    local_40 = &LAB_145a3fe64;
    local_38 = 0;
    FUN_14612ba74(local_50,param_1);
    FUN_1446ddc76(&local_58,"PauseGame_End",1);
    FUN_140391af6(lVar1,&local_40,local_58,local_50);
    *(undefined1 **)(param_1 + 0x2b0) = local_40;
    FUN_1449db362(local_50);
    local_40 = &LAB_145a3fe6a;
    local_38 = 0;
    FUN_14612ba74(local_50,param_1,&local_40);
    FUN_1446ddc76(&local_60,"MenuClosed",1);
    FUN_140391af6(lVar1,&local_40,local_60,local_50);
    *(undefined1 **)(param_1 + 0x2b8) = local_40;
    FUN_1449db362(local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612ba74 FUN_14612ba74 body=428 status=ok
// SIG undefined FUN_14612ba74(void)

longlong * FUN_14612ba74(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14612bb54:
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9ccb00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14612bb54;
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
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9ccb00;
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



// FUNCTION 14612bc20 FUN_14612bc20 body=290 status=ok
// SIG undefined FUN_14612bc20(void)

void FUN_14612bc20(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1410c2f26();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    local_40 = &LAB_148eadbf4;
    local_38 = 0;
    FUN_14612bd44(local_50,param_1);
    FUN_1446ddc76(&local_58,"FOakUIEvent_SkillTree_ResetSkillTree",1);
    FUN_140391af6(lVar1,&local_40,local_58,local_50);
    *(undefined1 **)(param_1 + 0x298) = local_40;
    FUN_1449db362(local_50);
    local_40 = &LAB_148eadbfa;
    local_38 = 0;
    FUN_14612bd44(local_50,param_1,&local_40);
    FUN_1446ddc76(&local_60,"FOakUIEvent_SkillTree_ResetSpecializations",1);
    FUN_140391af6(lVar1,&local_40,local_60,local_50);
    *(undefined1 **)(param_1 + 0x2a0) = local_40;
    FUN_1449db362(local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612bd44 FUN_14612bd44 body=428 status=ok
// SIG undefined FUN_14612bd44(void)

longlong * FUN_14612bd44(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14612be24:
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9ccdb0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14612be24;
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
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9ccdb0;
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



// FUNCTION 14612bef0 FUN_14612bef0 body=284 status=ok
// SIG undefined FUN_14612bef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612bef0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca19de8) {
    FUN_144b3d300(&DAT_14ca19de8);
    if (DAT_14ca19de8 == -1) {
      FUN_14612c00c();
      FUN_140db5666(&DAT_14ca19d40,0,&DAT_14ca19cd8,L"FVisualizeClearTilesCS",
                    L"/Engine/Private/Nanite/NaniteFastClear.usf",L"VisualizeClearTilesCS",5,1,
                    FUN_147262fca,FUN_147262fa2,&LAB_147262f82,&LAB_147262f7e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14ca19d40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e4d3cc);
      _Init_thread_footer(&DAT_14ca19de8);
    }
  }
  return &DAT_14ca19d40;
}



// FUNCTION 14612c00c FUN_14612c00c body=313 status=ok
// SIG undefined FUN_14612c00c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612c00c(void)

{
  if ((DAT_14ca19d3f & 2) == 0) {
    DAT_14ca19d3f = DAT_14ca19d3f | 2;
    _DAT_14ca19ce0 = L"FVisualizeClearTilesCS";
    _DAT_14ca19cf8 = FUN_146826540;
    _DAT_14ca19d00 = FUN_146825d77;
    _DAT_14ca19d08 = FUN_146825fd6;
    _DAT_14ca19d10 = FUN_1407e02ea;
    _DAT_14ca19d18 = FUN_146826273;
    _DAT_14ca19cf0 = FUN_147262f50;
    _DAT_14ca19d30 = 0xffffffff000000e8;
    _DAT_14ca19d38 = 8;
    DAT_14ca19d3c = 0;
    _DAT_14ca19d20 = &LAB_147262f7a;
    _DAT_14ca1b3b8 = L"PlatformDataParam";
    DAT_14ca1b3e2 = FUN_140850cc5();
    _DAT_14ca1b3c0 = FUN_140ec6960();
    _DAT_14ca1b3d0 = &LAB_14682652b;
    _DAT_14ca1b3d8 = 0x1000000e0;
    _DAT_14ca1b3e0 = 0;
    _DAT_14ca1b3c8 = DAT_14ca19ce8;
    DAT_14ca19ce8 = &DAT_14ca1b3b8;
    FUN_14612c146();
    FUN_1407e00cc(&DAT_14ca19cd8);
    return;
  }
  return;
}



// FUNCTION 14612c146 FUN_14612c146 body=123 status=ok
// SIG undefined FUN_14612c146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612c146(void)

{
  _DAT_14ca1bdc0 = L"BASE";
  DAT_14ca1bdea = 4;
  _DAT_14ca1bdc8 = FUN_140b35ae4();
  _DAT_14ca1bdd0 = DAT_14ca19ce8;
  _DAT_14ca1bdd8 = &LAB_14682652b;
  DAT_14ca19ce8 = &DAT_14ca1bdc0;
  DAT_14ca19d3d = DAT_14ca19d3d + '\x01';
  _DAT_14ca1bde0 = 0x100000000;
  if (*(char *)(_DAT_14ca1bdc8 + 100) != '\0') {
    DAT_14ca19d3e = DAT_14ca19d3e + '\x01';
  }
  return;
}



// FUNCTION 14612c1c2 FUN_14612c1c2 body=284 status=ok
// SIG undefined FUN_14612c1c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612c1c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca44ef8) {
    FUN_144b3d300(&DAT_14ca44ef8);
    if (DAT_14ca44ef8 == -1) {
      FUN_14612c2de();
      FUN_140db5666(&DAT_14ca44e50,0,&DAT_14ca44de8,L"FRTWriteMaskDecodeCS",
                    L"/Engine/Private/RTWriteMaskDecode.usf",L"RTWriteMaskDecodeMain",5,4,
                    FUN_1472d906a,FUN_1472d9042,&LAB_1472d900e,&LAB_1472d900a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14ca44e50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fd111d);
      _Init_thread_footer(&DAT_14ca44ef8);
    }
  }
  return &DAT_14ca44e50;
}



// FUNCTION 14612c2de FUN_14612c2de body=313 status=ok
// SIG undefined FUN_14612c2de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612c2de(void)

{
  if ((DAT_14ca44e4f & 2) == 0) {
    DAT_14ca44e4f = DAT_14ca44e4f | 2;
    _DAT_14ca44df0 = L"FRTWriteMaskDecodeCS";
    _DAT_14ca44e08 = FUN_146826540;
    _DAT_14ca44e10 = FUN_146825d77;
    _DAT_14ca44e18 = FUN_146825fd6;
    _DAT_14ca44e20 = FUN_1407e02ea;
    _DAT_14ca44e28 = FUN_146826273;
    _DAT_14ca44e00 = FUN_1472d8fdc;
    _DAT_14ca44e40 = 0xffffffff000000e8;
    _DAT_14ca44e48 = 8;
    DAT_14ca44e4c = 0;
    _DAT_14ca44e30 = &LAB_1472d9006;
    _DAT_14ca46ac8 = L"PlatformDataParam";
    DAT_14ca46af2 = FUN_140850cc5();
    _DAT_14ca46ad0 = FUN_140ec6960();
    _DAT_14ca46ae0 = &LAB_14682652b;
    _DAT_14ca46ae8 = 0x1000000e0;
    _DAT_14ca46af0 = 0;
    _DAT_14ca46ad8 = DAT_14ca44df8;
    DAT_14ca44df8 = &DAT_14ca46ac8;
    FUN_14612c418();
    FUN_1407e00cc(&DAT_14ca44de8);
    return;
  }
  return;
}



// FUNCTION 14612c418 FUN_14612c418 body=123 status=ok
// SIG undefined FUN_14612c418(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612c418(void)

{
  _DAT_14ca47070 = L"BASE";
  DAT_14ca4709a = 4;
  _DAT_14ca47078 = FUN_140b35ae4();
  _DAT_14ca47080 = DAT_14ca44df8;
  _DAT_14ca47088 = &LAB_14682652b;
  DAT_14ca44df8 = &DAT_14ca47070;
  DAT_14ca44e4d = DAT_14ca44e4d + '\x01';
  _DAT_14ca47090 = 0x100000000;
  if (*(char *)(_DAT_14ca47078 + 100) != '\0') {
    DAT_14ca44e4e = DAT_14ca44e4e + '\x01';
  }
  return;
}



// FUNCTION 14612c494 FUN_14612c494 body=313 status=ok
// SIG undefined FUN_14612c494(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612c494(void)

{
  if ((DAT_14ca6a627 & 2) == 0) {
    DAT_14ca6a627 = DAT_14ca6a627 | 2;
    _DAT_14ca6a5c8 = L"FRenderVolumetricCloudRenderViewCS";
    _DAT_14ca6a5e0 = FUN_146826540;
    _DAT_14ca6a5e8 = FUN_146825d77;
    _DAT_14ca6a5f0 = FUN_146825fd6;
    _DAT_14ca6a5f8 = FUN_1407e02ea;
    _DAT_14ca6a600 = FUN_146826273;
    _DAT_14ca6a5d8 = FUN_14733432e;
    _DAT_14ca6a618 = 0xffffffff00000110;
    _DAT_14ca6a620 = 8;
    DAT_14ca6a624 = 0;
    _DAT_14ca6a608 = &LAB_147334364;
    _DAT_14ca6c770 = L"StartTracingDistanceTextureParameter";
    DAT_14ca6c79a = FUN_140850cc5();
    _DAT_14ca6c778 = FUN_140fb78d0();
    _DAT_14ca6c788 = &LAB_14682652b;
    _DAT_14ca6c790 = &DAT_100000108;
    _DAT_14ca6c798 = 0;
    _DAT_14ca6c780 = DAT_14ca6a5d0;
    DAT_14ca6a5d0 = &DAT_14ca6c770;
    FUN_14612c5ce();
    FUN_1407e00cc(&DAT_14ca6a5c0);
    return;
  }
  return;
}



// FUNCTION 14612c5ce FUN_14612c5ce body=123 status=ok
// SIG undefined FUN_14612c5ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612c5ce(void)

{
  _DAT_14ca6d348 = L"BASE";
  DAT_14ca6d372 = 4;
  _DAT_14ca6d350 = FUN_141092e92();
  _DAT_14ca6d358 = DAT_14ca6a5d0;
  _DAT_14ca6d360 = &LAB_14682652b;
  DAT_14ca6a5d0 = &DAT_14ca6d348;
  DAT_14ca6a625 = DAT_14ca6a625 + '\x01';
  _DAT_14ca6d368 = 0x100000000;
  if (*(char *)(_DAT_14ca6d350 + 100) != '\0') {
    DAT_14ca6a626 = DAT_14ca6a626 + '\x01';
  }
  return;
}



// FUNCTION 14612c64a FUN_14612c64a body=284 status=ok
// SIG undefined FUN_14612c64a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612c64a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca989e8) {
    FUN_144b3d300(&DAT_14ca989e8);
    if (DAT_14ca989e8 == -1) {
      FUN_14612c766();
      FUN_140db5666(&DAT_14ca98940,0,&DAT_14ca988d8,L"FDispatchShaderBundleWorkGraph",
                    L"/Engine/Private/ShaderBundleWorkGraphDispatch.usf",L"WorkGraphMainCS",10,1,
                    FUN_147433b4e,FUN_147433af6,&LAB_147433ade,&LAB_147433ada,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14ca98940 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432270af);
      _Init_thread_footer(&DAT_14ca989e8);
    }
  }
  return &DAT_14ca98940;
}



// FUNCTION 14612c766 FUN_14612c766 body=313 status=ok
// SIG undefined FUN_14612c766(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612c766(void)

{
  if ((DAT_14ca9893f & 2) == 0) {
    DAT_14ca9893f = DAT_14ca9893f | 2;
    _DAT_14ca988e0 = L"FDispatchShaderBundleWorkGraph";
    _DAT_14ca988f8 = FUN_146826540;
    _DAT_14ca98900 = FUN_146825d77;
    _DAT_14ca98908 = FUN_146825fd6;
    _DAT_14ca98910 = FUN_1407e02ea;
    _DAT_14ca98918 = FUN_146826273;
    _DAT_14ca988f0 = FUN_147433aaa;
    _DAT_14ca98930 = 0xffffffff000000e8;
    _DAT_14ca98938 = 8;
    DAT_14ca9893c = 0;
    _DAT_14ca98920 = &LAB_147433ad6;
    _DAT_14ca99f68 = L"RecordArgBufferParam";
    DAT_14ca99f92 = FUN_140850cc5();
    _DAT_14ca99f70 = FUN_140fb78d0();
    _DAT_14ca99f80 = &LAB_14682652b;
    _DAT_14ca99f88 = 0x1000000e0;
    _DAT_14ca99f90 = 0;
    _DAT_14ca99f78 = DAT_14ca988e8;
    DAT_14ca988e8 = &DAT_14ca99f68;
    FUN_14612c8a0();
    FUN_1407e00cc(&DAT_14ca988d8);
    return;
  }
  return;
}



// FUNCTION 14612c8a0 FUN_14612c8a0 body=123 status=ok
// SIG undefined FUN_14612c8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612c8a0(void)

{
  _DAT_14ca9a248 = L"BASE";
  DAT_14ca9a272 = 4;
  _DAT_14ca9a250 = FUN_140b35ae4();
  _DAT_14ca9a258 = DAT_14ca988e8;
  _DAT_14ca9a260 = &LAB_14682652b;
  DAT_14ca988e8 = &DAT_14ca9a248;
  DAT_14ca9893d = DAT_14ca9893d + '\x01';
  _DAT_14ca9a268 = 0x100000000;
  if (*(char *)(_DAT_14ca9a250 + 100) != '\0') {
    DAT_14ca9893e = DAT_14ca9893e + '\x01';
  }
  return;
}



// FUNCTION 14612c91c FUN_14612c91c body=284 status=ok
// SIG undefined FUN_14612c91c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612c91c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa2ca0) {
    FUN_144b3d300(&DAT_14caa2ca0);
    if (DAT_14caa2ca0 == -1) {
      FUN_14612ca38();
      FUN_140db5666(&DAT_14caa2bf8,0,&DAT_14caa2b90,L"FLandscapeLayersVS",
                    L"/Engine/Private/LandscapeLayersVS.usf",L"VSMain",0,1,FUN_14745e714,
                    FUN_14745e6b8,&LAB_1463248fc,&LAB_14745e6b4,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14caa2bf8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e040);
      _Init_thread_footer(&DAT_14caa2ca0);
    }
  }
  return &DAT_14caa2bf8;
}



// FUNCTION 14612ca38 FUN_14612ca38 body=313 status=ok
// SIG undefined FUN_14612ca38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612ca38(void)

{
  if ((DAT_14caa2bf7 & 2) == 0) {
    DAT_14caa2bf7 = DAT_14caa2bf7 | 2;
    _DAT_14caa2b98 = L"FLandscapeLayersVS";
    _DAT_14caa2bb0 = FUN_146826540;
    _DAT_14caa2bb8 = FUN_146825d77;
    _DAT_14caa2bc0 = FUN_146825fd6;
    _DAT_14caa2bc8 = FUN_1407e02ea;
    _DAT_14caa2bd0 = FUN_146826273;
    _DAT_14caa2ba8 = FUN_14745e686;
    _DAT_14caa2be8 = 0xffffffff000000e8;
    _DAT_14caa2bf0 = 8;
    DAT_14caa2bf4 = 0;
    _DAT_14caa2bd8 = &LAB_14745e6b0;
    _DAT_14caa4860 = L"TransformParam";
    DAT_14caa488a = FUN_140850cc5();
    _DAT_14caa4868 = FUN_140ec6960();
    _DAT_14caa4878 = &LAB_14682652b;
    _DAT_14caa4880 = 0x1000000e0;
    _DAT_14caa4888 = 0;
    _DAT_14caa4870 = DAT_14caa2ba0;
    DAT_14caa2ba0 = &DAT_14caa4860;
    FUN_14612cb72();
    FUN_1407e00cc(&DAT_14caa2b90);
    return;
  }
  return;
}



// FUNCTION 14612cb72 FUN_14612cb72 body=123 status=ok
// SIG undefined FUN_14612cb72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612cb72(void)

{
  _DAT_14caa5868 = L"BASE";
  DAT_14caa5892 = 4;
  _DAT_14caa5870 = FUN_140b35ae4();
  _DAT_14caa5878 = DAT_14caa2ba0;
  _DAT_14caa5880 = &LAB_14682652b;
  DAT_14caa2ba0 = &DAT_14caa5868;
  DAT_14caa2bf5 = DAT_14caa2bf5 + '\x01';
  _DAT_14caa5888 = 0x100000000;
  if (*(char *)(_DAT_14caa5870 + 100) != '\0') {
    DAT_14caa2bf6 = DAT_14caa2bf6 + '\x01';
  }
  return;
}



// FUNCTION 14612cbf8 FUN_14612cbf8 body=349 status=ok
// SIG undefined FUN_14612cbf8(void)

undefined8 * FUN_14612cbf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_140ffc8f2();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  *param_1 = &PTR_FUN_14a6ce700;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xd] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x10] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x11] = uVar1;
  param_1[0x12] = DAT_14c8464f0;
  param_1[0x13] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbd) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1a] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1b] = uVar1;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1d) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar4;
  param_1[0x1f] = DAT_14c8464f0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x125) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf33c0) {
    FUN_144b3d300(&DAT_14caf33c0);
    if (DAT_14caf33c0 == -1) {
      FUN_1446f470e(&DAT_14caf33b8,&DAT_149e01fe8,1);
      _Init_thread_footer(&DAT_14caf33c0);
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = DAT_14caf33b8;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x41200000;
  return param_1;
}



// FUNCTION 14612cd56 FUN_14612cd56 body=284 status=ok
// SIG undefined FUN_14612cd56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612cd56(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad3e40) {
    FUN_144b3d300(&DAT_14cad3e40);
    if (DAT_14cad3e40 == -1) {
      FUN_14612ce72();
      FUN_140db5666(&DAT_14cad3d98,0,&DAT_14cad3d30,L"FCubemapTexturePropertiesVS",
                    L"/Engine/Private/SimpleElementVertexShader.usf",L"Main",0,1,FUN_147a3c42c,
                    FUN_147a3c3cc,&LAB_147a3c3b4,&LAB_147a3c3b0,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14cad3d98 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1434a7238);
      _Init_thread_footer(&DAT_14cad3e40);
    }
  }
  return &DAT_14cad3d98;
}



// FUNCTION 14612ce72 FUN_14612ce72 body=313 status=ok
// SIG undefined FUN_14612ce72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612ce72(void)

{
  if ((DAT_14cad3d97 & 2) == 0) {
    DAT_14cad3d97 = DAT_14cad3d97 | 2;
    _DAT_14cad3d38 = L"FCubemapTexturePropertiesVS";
    _DAT_14cad3d50 = FUN_146826540;
    _DAT_14cad3d58 = FUN_146825d77;
    _DAT_14cad3d60 = FUN_146825fd6;
    _DAT_14cad3d68 = FUN_1407e02ea;
    _DAT_14cad3d70 = FUN_146826273;
    _DAT_14cad3d48 = FUN_147a3c382;
    _DAT_14cad3d88 = 0xffffffff000000e8;
    _DAT_14cad3d90 = 8;
    DAT_14cad3d94 = 0;
    _DAT_14cad3d78 = &LAB_147a3c3ac;
    _DAT_14cad5628 = L"Transform";
    DAT_14cad5652 = FUN_140850cc5();
    _DAT_14cad5630 = FUN_140ec6960();
    _DAT_14cad5640 = &LAB_14682652b;
    _DAT_14cad5648 = 0x1000000e0;
    _DAT_14cad5650 = 0;
    _DAT_14cad5638 = DAT_14cad3d40;
    DAT_14cad3d40 = &DAT_14cad5628;
    FUN_14612cfac();
    FUN_1407e00cc(&DAT_14cad3d30);
    return;
  }
  return;
}



// FUNCTION 14612cfac FUN_14612cfac body=123 status=ok
// SIG undefined FUN_14612cfac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612cfac(void)

{
  _DAT_14cad5868 = L"BASE";
  DAT_14cad5892 = 4;
  _DAT_14cad5870 = FUN_140b35ae4();
  _DAT_14cad5878 = DAT_14cad3d40;
  _DAT_14cad5880 = &LAB_14682652b;
  DAT_14cad3d40 = &DAT_14cad5868;
  DAT_14cad3d95 = DAT_14cad3d95 + '\x01';
  _DAT_14cad5888 = 0x100000000;
  if (*(char *)(_DAT_14cad5870 + 100) != '\0') {
    DAT_14cad3d96 = DAT_14cad3d96 + '\x01';
  }
  return;
}



// FUNCTION 14612d028 FUN_14612d028 body=165 status=ok
// SIG undefined FUN_14612d028(void)

bool FUN_14612d028(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 14612d0dc FUN_14612d0dc body=613 status=ok
// SIG undefined FUN_14612d0dc(void)

void FUN_14612d0dc(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
  }
  lVar2 = param_1 + 0x38;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  uStack_b0 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar8 = *(int *)(param_1 + 0x50);
  }
  local_78 = local_a8;
  lVar6 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar8) || (uStack_b0 != lVar2)) {
    iVar3 = local_78._4_4_;
    local_78 = lVar6;
    do {
      lVar6 = *local_90;
      lVar5 = (longlong)iVar3 * 0x68 + 0x20 + lVar6;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar5;
      if (*(int *)(lVar5 + 0x18) != 0) {
        FUN_1449c0562(&local_68);
      }
      lVar6 = lVar6 + (longlong)iVar3 * 0x68;
      plVar7 = (longlong *)(lVar6 + 0x10);
      uStack_a0 = local_58;
      local_98 = local_50;
      local_94 = local_4c;
      uStack_b0 = local_68;
      local_a8 = local_60;
      uVar4 = *(uint *)(lVar6 + 0x38);
      local_68 = CONCAT44(1 << ((byte)uVar4 & 0x1f),(int)uVar4 >> 5);
      local_58 = CONCAT44(uVar4,-1 << ((byte)uVar4 & 0x1f));
      local_50 = uVar4 & 0xffffffe0;
      local_b8 = plVar7;
      local_60 = lVar5;
      if (*(uint *)(lVar6 + 0x38) != uVar4) {
        FUN_1449c0562(&local_68);
        uVar4 = local_58._4_4_;
      }
      lVar6 = local_60;
      while (((uStack_a0._4_4_ != uVar4 || (local_a8 != lVar6)) || (local_b8 != plVar7))) {
        *(undefined1 *)(*local_b8 + 0x10 + (longlong)(int)uStack_a0._4_4_ * 0x38) = 0;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
        FUN_1449c0562(&uStack_b0);
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar3 = local_78._4_4_;
      lVar6 = local_78;
    } while (local_90 != plVar1 ||
             (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar8));
  }
  local_78 = lVar6;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612d3a2 FUN_14612d3a2 body=223 status=ok
// SIG undefined FUN_14612d3a2(void)

void FUN_14612d3a2(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1415e0a78();
  FUN_14612d492(&local_28);
  plVar3 = plStack_20;
  local_38 = local_28;
  local_30 = plStack_20;
  if (plStack_20 == (longlong *)0x0) {
    FUN_14612d53c(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
    FUN_14612d53c(param_1);
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
    plVar3 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
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



// FUNCTION 14612d492 FUN_14612d492 body=169 status=ok
// SIG undefined FUN_14612d492(void)

undefined8 * FUN_14612d492(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (((DAT_14cb86b90 == 0) || (DAT_14cb86b88 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*DAT_14cb86b88 + 0x30))(), cVar1 == '\0')) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = &PTR_FUN_14b366bd0;
    puVar2[1] = 0;
    *(undefined8 *)((longlong)puVar2 + 0xd) = 0;
  }
  else {
    plVar4 = DAT_14cb86b88;
    if (DAT_14cb86b90 == 0) {
      plVar4 = (longlong *)0x0;
    }
    puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x58))();
  }
  *param_1 = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14b41b9e0;
  puVar3[2] = puVar2;
  param_1[1] = puVar3;
  return param_1;
}



// FUNCTION 14612d53c FUN_14612d53c body=933 status=ok
// SIG undefined FUN_14612d53c(void)

void FUN_14612d53c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined3 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar11 = *param_2;
  piVar14 = (int *)(lVar11 + 8);
  piVar15 = (int *)&DAT_14c948618;
  if (lVar11 == 0) {
    piVar14 = (int *)&DAT_14c948618;
  }
  iVar1 = *piVar14;
  lVar7 = param_1[0x19];
  if (lVar7 == 0) {
    piVar12 = &DAT_14c948620;
  }
  else {
    piVar15 = (int *)(lVar7 + 8);
    piVar12 = (int *)(lVar7 + 0x10);
  }
  iVar2 = piVar14[1];
  iVar3 = piVar14[2];
  if ((*piVar15 == iVar1) && (*piVar12 == iVar3)) goto LAB_14612d5a5;
  lVar7 = param_2[1];
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_1[0x1a];
  param_1[0x19] = lVar11;
  param_1[0x1a] = lVar7;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar14 = (int *)((longlong)plVar6 + 0xc);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  local_a8 = FUN_140c05e56(param_1);
  if (local_a8 == 0) goto LAB_14612d5a5;
  lVar11 = (longlong)param_1 + 0xac;
  plVar6 = (longlong *)FUN_14479d2ce(lVar11);
  if (plVar6 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (**(code **)(*plVar6 + 0x2b0))(plVar6);
  }
  cVar5 = FUN_144729dda(lVar11);
  uVar4 = (undefined3)((uint)iVar1 >> 8);
  if ((cVar5 == '\0') || (lVar8 = FUN_14479d2ce(lVar11), *(int *)(lVar8 + 0x4c) != 3)) {
    lVar8 = param_1[0x19];
    if (lVar8 == 0) {
      local_78 = DAT_14c948620;
      local_80 = DAT_14c948618;
    }
    else {
      local_78 = *(undefined4 *)(lVar8 + 0x10);
      local_80 = *(undefined8 *)(lVar8 + 8);
    }
    FUN_1448075d0(&local_70,&local_80);
    lVar8 = FUN_14060eaf6(&local_70);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((lVar7 == 0) || (lVar8 == 0)) goto LAB_14612d66e;
    plVar6 = (longlong *)FUN_14883d4ba(lVar7);
    plVar9 = (longlong *)FUN_1412d7224(lVar7);
    if (plVar6 == (longlong *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*plVar6 + 0xb0))(plVar6);
    }
    if ((plVar9 != (longlong *)0x0) &&
       (lVar10 = (**(code **)(*plVar9 + 0xb0))(plVar9), lVar10 != 0 && lVar8 != 0)) {
      local_8c = iVar1;
      local_88 = iVar2;
      local_84 = iVar3;
      FUN_143d3668e(lVar8,&local_8c,lVar10);
    }
    piVar14 = (int *)&DAT_14c948618;
    if (param_1[0x19] != 0) {
      piVar14 = (int *)(param_1[0x19] + 8);
    }
    uVar13 = CONCAT31(uVar4,*piVar14 != 0);
LAB_14612d77f:
    FUN_14612d8e2(lVar7,uVar13);
  }
  else {
LAB_14612d66e:
    piVar14 = (int *)&DAT_14c948618;
    if (param_1[0x19] != 0) {
      piVar14 = (int *)(param_1[0x19] + 8);
    }
    uVar13 = CONCAT31(uVar4,*piVar14 != 0);
    if (lVar7 != 0) goto LAB_14612d77f;
  }
  (**(code **)(*param_1 + 0x70))(param_1);
  FUN_140898514(param_1 + 1,uVar13);
  cVar5 = FUN_144729dda(lVar11);
  if ((cVar5 == '\0') || (lVar11 = FUN_14479d2ce(lVar11), *(int *)(lVar11 + 0x4c) != 3)) {
    FUN_1488414b8(&local_70);
    if (local_70 != 0) {
      lVar11 = param_1[0x19];
      lVar7 = param_1[0x1a];
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(local_70 + 0x18);
      *(longlong *)(local_70 + 0x10) = lVar11;
      *(longlong *)(local_70 + 0x18) = lVar7;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar14 = (int *)((longlong)plVar6 + 0xc);
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (*piVar14 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      local_a0 = local_70;
      local_98 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      FUN_141000642(local_a8,&local_a0);
      plVar6 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_98 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar14 = (int *)((longlong)plVar6 + 0xc);
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (*piVar14 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_68 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar14 = (int *)((longlong)local_68 + 0xc);
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (*piVar14 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
  }
LAB_14612d5a5:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14612d8e2 FUN_14612d8e2 body=253 status=ok
// SIG undefined FUN_14612d8e2(void)

void FUN_14612d8e2(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x168) != param_2) {
    *(char *)(param_1 + 0x168) = param_2;
    FUN_1414ef458();
    cVar4 = FUN_144729dda(param_1 + 0x60);
    if ((cVar4 == '\0') || (lVar6 = FUN_14479d2ce(param_1 + 0x60), *(int *)(lVar6 + 0x4c) != 3)) {
      uVar7 = FUN_140983b3e(param_1);
      FUN_1403679b6(&local_28,uVar7);
      if (local_20 != (longlong *)0x0) {
        iVar5 = (int)local_20[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_20[1];
          bVar9 = iVar5 == iVar3;
          if (bVar9) {
            *(int *)(local_20 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
          plVar8 = local_20;
        } while (!bVar9);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))();
        }
        if (plVar8 != (longlong *)0x0) {
          if (local_28 != 0) {
            FUN_147e2582a(local_28,2 - (uint)*(byte *)(param_1 + 0x168));
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14612d9e0 FUN_14612d9e0 body=121 status=ok
// SIG undefined FUN_14612d9e0(void)

void FUN_14612d9e0(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_14cb25a18;
  lVar2 = (longlong)DAT_14cb25a18;
  if (lVar2 < 1000) {
    DAT_14cb25a18 = 1000;
    if ((uint)(DAT_14cb25a1c - iVar1) < 1000U - iVar1) {
      FUN_14612da5a(iVar1);
    }
    FUN_1415e0aeb(lVar2 * 0x2c0 + DAT_14cb25a10,1000U - iVar1);
    return;
  }
  if (DAT_14cb25a18 == 1000) {
    return;
  }
  FUN_147f7e6b4(DAT_14cb25a18 + -1000);
  FUN_147f7e712();
  return;
}



// FUNCTION 14612da5a FUN_14612da5a body=154 status=ok
// SIG undefined FUN_14612da5a(void)

void FUN_14612da5a(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14cb25a18;
  if (param_1 <= (int)DAT_14cb25a18) {
    if (DAT_14cb25a1c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb25a18) {
        uVar2 = DAT_14cb25a18;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb25a18 * 3) >> 3) + (longlong)(int)DAT_14cb25a18 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x2c0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2c0)) {
      uVar5 = uVar4 / 0x2c0 & 0xffffffff;
    }
    DAT_14cb25a1c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb25a10,param_1,uVar5,0x2c0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14612daf4 FUN_14612daf4 body=1808 status=ok
// SIG undefined FUN_14612daf4(void)

void FUN_14612daf4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446ddc76(&local_28,"AssetRegistry",1);
  uVar4 = FUN_144a52528();
  FUN_14493e38c(uVar4,local_28);
  uVar4 = FUN_1409ffe1d();
  lVar5 = FUN_14612e21d(uVar4);
  *(longlong *)(param_1 + 8) = lVar5;
  if (lVar5 == 0) goto LAB_14612e09a;
  FUN_1415e0caa(lVar5,param_1);
  if (DAT_14c83f350 != 2) {
    FUN_1446efa72(&DAT_14c83f348,0,2,0x10);
    DAT_14c83f350 = 2;
  }
  puVar3 = DAT_14c83f348;
  *DAT_14c83f348 = &PTR_LAB_14a1763f0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_14a176380;
  puVar3[3] = FUN_1470a1a5c;
  if (DAT_14c83f360 != 2) {
    FUN_1446efa72(&DAT_14c83f358,0,2,0x10);
    DAT_14c83f360 = 2;
  }
  puVar3 = DAT_14c83f358;
  *DAT_14c83f358 = &PTR_LAB_14a1764d0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_14a176460;
  puVar3[3] = FUN_1470a1d70;
  if (DAT_14c83f370 != 2) {
    FUN_1446efa72(&DAT_14c83f368,0,2,0x10);
    DAT_14c83f370 = 2;
  }
  puVar3 = DAT_14c83f368;
  *DAT_14c83f368 = &PTR_LAB_14a1765b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_14a176540;
  puVar3[3] = FUN_1470a1788;
  if (DAT_14c83f380 != 2) {
    FUN_1446efa72(&DAT_14c83f378,0,2,0x10);
    DAT_14c83f380 = 2;
  }
  puVar3 = DAT_14c83f378;
  *DAT_14c83f378 = &PTR_LAB_14a176690;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_14a176620;
  puVar3[3] = FUN_1470a17e6;
  if (DAT_14c83f390 != 2) {
    FUN_1446efa72(&DAT_14c83f388,0,2,0x10);
    DAT_14c83f390 = 2;
  }
  puVar3 = DAT_14c83f388;
  *DAT_14c83f388 = &PTR_LAB_14a176770;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_14a176700;
  puVar3[3] = FUN_1459a1302;
  if (DAT_14c83f3a0 != 2) {
    FUN_1446efa72(&DAT_14c83f398,0,2,0x10);
    DAT_14c83f3a0 = 2;
  }
  puVar3 = DAT_14c83f398;
  *DAT_14c83f398 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_149e062c0;
  puVar3[3] = &LAB_1470a1dc4;
  if (DAT_14c83f3b0 != 2) {
    FUN_1446efa72(&DAT_14c83f3a8,0,2,0x10);
    DAT_14c83f3b0 = 2;
  }
  puVar3 = DAT_14c83f3a8;
  *DAT_14c83f3a8 = &PTR_LAB_14a176850;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_14a1767e0;
  puVar3[3] = FUN_1470a186e;
  if (DAT_14c83f3c0 != 2) {
    FUN_1446efa72(&DAT_14c83f3b8,0,2,0x10);
    DAT_14c83f3c0 = 2;
  }
  puVar3 = DAT_14c83f3b8;
  *DAT_14c83f3b8 = &PTR_LAB_14a176930;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_14a1768c0;
  puVar3[3] = FUN_1470a18ee;
  if (DAT_14c83f3d0 != 2) {
    FUN_1446efa72(&DAT_14c83f3c8,0,2,0x10);
    DAT_14c83f3d0 = 2;
  }
  puVar3 = DAT_14c83f3c8;
  *DAT_14c83f3c8 = &PTR_LAB_14a176a10;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_14a1769a0;
  puVar3[3] = FUN_1447d6ed4;
  plVar6 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a176a80;
  plVar8 = plVar6 + 2;
  FUN_14612e208(plVar8);
  local_38 = plVar8;
  local_30 = plVar6;
  FUN_14612e2b4(&local_38,plVar8);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0x10;
    plVar8 = *(longlong **)(param_1 + 0x18);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
LAB_14612e186:
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
joined_r0x00014612e1bd:
        if (iVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x10) = plVar8;
    plVar8 = *(longlong **)(param_1 + 0x18);
    if (plVar6 == plVar8) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar8 = plVar6;
        goto joined_r0x00014612e1bd;
      }
    }
    else {
      *(longlong **)(param_1 + 0x18) = plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_14612e186;
    }
  }
  plVar8 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  local_38 = (longlong *)0x0;
  local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = (longlong *)CONCAT44(local_30._4_4_,2);
  *local_38 = (longlong)&PTR_LAB_14a176b10;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_38[2] = lVar7;
  *local_38 = (longlong)&PTR_FUN_14a176aa0;
  local_38[3] = (longlong)FUN_14709a56e;
  FUN_14612e466(&local_40,&local_38);
  *(undefined8 *)(param_1 + 0x20) = local_40;
  FUN_1449db362(&local_38);
  FUN_14612e206(*(undefined8 *)(param_1 + 0x10),param_1);
  FUN_14612e356();
LAB_14612e09a:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612e206 FUN_14612e206 body=1 status=ok
// SIG undefined FUN_14612e206(void)

void FUN_14612e206(void)

{
  return;
}



// FUNCTION 14612e208 FUN_14612e208 body=21 status=ok
// SIG undefined FUN_14612e208(void)

void FUN_14612e208(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a178bf0;
  return;
}



// FUNCTION 14612e21d FUN_14612e21d body=150 status=ok
// SIG undefined FUN_14612e21d(void)

undefined8 FUN_14612e21d(undefined8 param_1)

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
  uVar1 = FUN_145986272();
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



// FUNCTION 14612e2b4 FUN_14612e2b4 body=162 status=ok
// SIG undefined FUN_14612e2b4(void)

void FUN_14612e2b4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14612e2f3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14612e2f3;
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
LAB_14612e2f3:
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
                    /* WARNING: Could not recover jumptable at 0x00014612e352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14612e356 FUN_14612e356 body=272 status=ok
// SIG undefined FUN_14612e356(void)

void FUN_14612e356(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_14c9485a0 != 2) {
    FUN_1446efa72(&DAT_14c948598,0,2,0x10);
    DAT_14c9485a0 = 2;
  }
  puVar1 = DAT_14c948598;
  *DAT_14c948598 = &PTR_LAB_14a1793f0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14a179380;
  puVar1[3] = FUN_14015322d;
  if (DAT_14c9485b0 != 2) {
    FUN_1446efa72(&DAT_14c9485a8,0,2,0x10);
    DAT_14c9485b0 = 2;
  }
  puVar1 = DAT_14c9485a8;
  *DAT_14c9485a8 = &PTR_LAB_14a1794d0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14a179460;
  puVar1[3] = FUN_1470a23b2;
  return;
}



// FUNCTION 14612e466 FUN_14612e466 body=384 status=ok
// SIG undefined FUN_14612e466(void)

undefined8 * FUN_14612e466(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1447c1074(DAT_14c99ded8);
  if (lVar3 != 0) {
    if (((int)param_2[1] == 0) || (plVar2 = (longlong *)*param_2, plVar2 == (longlong *)0x0)) {
      local_58 = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_58);
    }
    lVar5 = local_58;
    iVar1 = *(int *)(lVar3 + 0x18);
    iVar8 = 0;
    if ((longlong)iVar1 != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x10);
      lVar7 = 0;
      do {
        plVar2 = *(longlong **)(lVar6 + lVar7);
        if (plVar2 == (longlong *)0x0 || *(int *)(lVar6 + 8 + lVar7) == 0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
          lVar4 = local_50;
        }
        if (lVar4 == lVar5) goto LAB_14612e5db;
        lVar7 = lVar7 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar7);
      iVar8 = *(int *)(lVar3 + 0x18);
    }
    *(uint *)(lVar3 + 0x18) = iVar8 + 1U;
    if (*(uint *)(lVar3 + 0x1c) < iVar8 + 1U) {
      FUN_14612e666(lVar3 + 0x10,iVar8);
    }
    lVar5 = *(longlong *)(lVar3 + 0x10);
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar5 + lVar6) = 0;
    *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
    FUN_14612e5e8(lVar5 + lVar6,param_2);
    lVar5 = (longlong)(*(int *)(lVar3 + 0x18) + -1) * 0x10;
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar5) != 0) &&
       (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + lVar5), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
      goto LAB_14612e54f;
    }
  }
LAB_14612e5db:
  *param_1 = 0;
LAB_14612e54f:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612e5e8 FUN_14612e5e8 body=124 status=ok
// SIG undefined FUN_14612e5e8(void)

void FUN_14612e5e8(longlong *param_1,longlong *param_2)

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



// FUNCTION 14612e666 FUN_14612e666 body=132 status=ok
// SIG undefined FUN_14612e666(void)

void FUN_14612e666(longlong param_1,int param_2)

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



// FUNCTION 14612e6ea FUN_14612e6ea body=106 status=ok
// SIG undefined FUN_14612e6ea(void)

undefined * FUN_14612e6ea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c975190) {
    FUN_144b3d300(&DAT_14c975190);
    if (DAT_14c975190 == -1) {
      FUN_14612e754(&DAT_14c973b90);
      atexit((_func_5014 *)&LAB_1428744dc);
      _Init_thread_footer(&DAT_14c975190);
    }
  }
  return &DAT_14c973b90;
}



// FUNCTION 14612e754 FUN_14612e754 body=255 status=ok
// SIG undefined FUN_14612e754(void)

undefined8 * FUN_14612e754(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ee36c0;
  FUN_140ca8d78(param_1 + 2);
  FUN_140ca8d78(param_1 + 0x70);
  FUN_140ca8d78(param_1 + 0xde);
  FUN_140ca8d78(param_1 + 0x14c);
  FUN_140a581a0(param_1 + 0x1ba);
  FUN_140ca8f8e(param_1 + 0x216);
  FUN_140ca8f8e(param_1 + 0x22c);
  FUN_140ca8f8e(param_1 + 0x242);
  param_1[600] = &DAT_3f8000003f800000;
  param_1[0x259] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x25a) = 0;
  FUN_140ca8f8e(param_1 + 0x25c);
  param_1[0x272] = &DAT_3f8000003f800000;
  param_1[0x273] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x274) = 0;
  FUN_140ca8f8e(param_1 + 0x276);
  param_1[0x28c] = &DAT_3f8000003f800000;
  param_1[0x28d] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x28e) = 0;
  FUN_140ca8f8e(param_1 + 0x290);
  FUN_140ca8f8e(param_1 + 0x2a6);
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e4) = 0x40a0000040a00000;
  *(undefined8 *)((longlong)param_1 + 0x15ec) = 0x40a0000040a00000;
  return param_1;
}



// FUNCTION 14612e854 FUN_14612e854 body=264 status=ok
// SIG undefined FUN_14612e854(void)

void FUN_14612e854(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar7 = (longlong *)FUN_14001cc68(0x248);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a176210;
  plVar6 = plVar7 + 2;
  memset(plVar6,0,0x238);
  FUN_14612e9e2(plVar6);
  iVar3 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
    FUN_14612e95c((longlong *)(param_1 + 0x60),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  lVar8 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar4 + lVar8) = plVar6;
  *(longlong **)(lVar4 + 8 + lVar8) = plVar7;
  if (plVar7 == (longlong *)0x0) {
    DAT_00000052 = 1;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    lVar5 = *(longlong *)(lVar4 + lVar8);
    plVar6 = (longlong *)((longlong *)(lVar4 + lVar8))[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    *(undefined1 *)(lVar5 + 0x42) = 1;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014612e958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14612e95c FUN_14612e95c body=132 status=ok
// SIG undefined FUN_14612e95c(void)

void FUN_14612e95c(longlong param_1,int param_2)

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



// FUNCTION 14612e9e2 FUN_14612e9e2 body=325 status=ok
// SIG undefined FUN_14612e9e2(void)

void FUN_14612e9e2(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[9] = &DAT_14a171d50;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = &DAT_14a171d50;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = &DAT_14a171d50;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = &DAT_14a171d50;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = &DAT_14a171d50;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe1) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  return;
}



// FUNCTION 14612eb32 FUN_14612eb32 body=349 status=ok
// SIG undefined FUN_14612eb32(void)

undefined8 * FUN_14612eb32(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abff910;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar2 = FUN_145a75a20();
  FUN_1446f470e(&local_40,L"ProvideSingleActor",1);
  lVar3 = FUN_1400796d0(param_1[2],local_40,1);
  lVar3 = *(longlong *)(lVar3 + 0x20);
  FUN_1446f470e(&local_48,L"ProvideSingleLocation",1);
  lVar4 = FUN_1400796d0(param_1[2],local_48,1);
  lVar4 = *(longlong *)(lVar4 + 0x20);
  FUN_1446f470e(&local_50,L"ProvideActorsSet",1);
  lVar5 = FUN_1400796d0(param_1[2],local_50,1);
  lVar5 = *(longlong *)(lVar5 + 0x20);
  FUN_1446f470e(&local_58,L"ProvideLocationsSet",1);
  lVar6 = FUN_1400796d0(param_1[2],local_58,1);
  if ((((lVar3 != lVar2) || (lVar4 != lVar2)) || (lVar5 != lVar2)) ||
     (*(longlong *)(lVar6 + 0x20) != lVar2)) {
    iVar7 = 3;
    if (lVar5 == lVar2) {
      iVar7 = (lVar4 != lVar2) + 1;
    }
    iVar1 = 4;
    if (*(longlong *)(lVar6 + 0x20) == lVar2) {
      iVar1 = iVar7;
    }
    *(int *)(param_1 + 5) = iVar1;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612ec90 FUN_14612ec90 body=293 status=ok
// SIG undefined FUN_14612ec90(void)

undefined4 * FUN_14612ec90(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1403d1430(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 1) = *puVar1;
  local_40[3] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar3 = FUN_1403d11cc(param_1,uVar5,local_40,&local_4c);
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
      local_40[4] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[3] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_14612edb6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612edb6 FUN_14612edb6 body=428 status=ok
// SIG undefined FUN_14612edb6(void)

void FUN_14612edb6(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x14);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 14612ef64 FUN_14612ef64 body=287 status=ok
// SIG undefined FUN_14612ef64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612ef64(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1e1e8) {
    FUN_144b3d300(&DAT_14ca1e1e8);
    if (DAT_14ca1e1e8 == -1) {
      FUN_14612f084();
      FUN_140db5666(&DAT_14ca1e140,1,&DAT_14ca1e0d8,L"FPathTracingVolumetricCloudMaterial",
                    L"/Engine/Private/PathTracing/PathTracingVolumetricCloudMaterialShader.usf",
                    L"PathTracingVolumetricCloudMaterialShader",9,1,FUN_147272aaa,FUN_147272a56,
                    FUN_1417739aa,&LAB_147272a52,&LAB_147272a4c,&LAB_14712ac08,0x100,0);
      _DAT_14ca1e140 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142e70b07);
      _Init_thread_footer(&DAT_14ca1e1e8);
    }
  }
  return &DAT_14ca1e140;
}



// FUNCTION 14612f084 FUN_14612f084 body=313 status=ok
// SIG undefined FUN_14612f084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612f084(void)

{
  if ((DAT_14ca1e13f & 2) == 0) {
    DAT_14ca1e13f = DAT_14ca1e13f | 2;
    _DAT_14ca1e0e0 = L"FPathTracingVolumetricCloudMaterial";
    _DAT_14ca1e0f8 = FUN_146826540;
    _DAT_14ca1e100 = FUN_146825d77;
    _DAT_14ca1e108 = FUN_146825fd6;
    _DAT_14ca1e110 = FUN_1407e02ea;
    _DAT_14ca1e118 = FUN_146826273;
    _DAT_14ca1e0f0 = FUN_147272a10;
    _DAT_14ca1e130 = 0xffffffff00000100;
    _DAT_14ca1e138 = 8;
    DAT_14ca1e13c = 0;
    _DAT_14ca1e120 = &LAB_147272a48;
    _DAT_14ca22008 = L"CloudParameter";
    DAT_14ca22032 = FUN_140850cc5();
    _DAT_14ca22010 = FUN_14106a12a();
    _DAT_14ca22020 = &LAB_14682652b;
    _DAT_14ca22028 = 0x1000000f8;
    _DAT_14ca22030 = 0;
    _DAT_14ca22018 = DAT_14ca1e0e8;
    DAT_14ca1e0e8 = &DAT_14ca22008;
    FUN_14612f1be();
    FUN_1407e00cc(&DAT_14ca1e0d8);
    return;
  }
  return;
}



// FUNCTION 14612f1be FUN_14612f1be body=123 status=ok
// SIG undefined FUN_14612f1be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612f1be(void)

{
  _DAT_14ca24990 = L"BASE";
  DAT_14ca249ba = 4;
  _DAT_14ca24998 = FUN_141526006();
  _DAT_14ca249a0 = DAT_14ca1e0e8;
  _DAT_14ca249a8 = &LAB_14682652b;
  DAT_14ca1e0e8 = &DAT_14ca24990;
  DAT_14ca1e13d = DAT_14ca1e13d + '\x01';
  _DAT_14ca249b0 = 0x100000000;
  if (*(char *)(_DAT_14ca24998 + 100) != '\0') {
    DAT_14ca1e13e = DAT_14ca1e13e + '\x01';
  }
  return;
}



// FUNCTION 14612f23a FUN_14612f23a body=287 status=ok
// SIG undefined FUN_14612f23a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612f23a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1e848) {
    FUN_144b3d300(&DAT_14ca1e848);
    if (DAT_14ca1e848 == -1) {
      FUN_14612f35a();
      FUN_140db5666(&DAT_14ca1e7a0,1,&DAT_14ca1e738,L"FPathTracingLightingMS",
                    L"/Engine/Private/PathTracing/PathTracingLightingMissShader.usf",
                    L"PathTracingLightingMS",7,1,FUN_147273934,FUN_1472738e0,&LAB_141773a62,
                    &LAB_1472738dc,&LAB_1472738d6,&LAB_14712ac08,0x100,0);
      _DAT_14ca1e7a0 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142e70b4f);
      _Init_thread_footer(&DAT_14ca1e848);
    }
  }
  return &DAT_14ca1e7a0;
}



// FUNCTION 14612f35a FUN_14612f35a body=313 status=ok
// SIG undefined FUN_14612f35a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612f35a(void)

{
  if ((DAT_14ca1e79f & 2) == 0) {
    DAT_14ca1e79f = DAT_14ca1e79f | 2;
    _DAT_14ca1e740 = L"FPathTracingLightingMS";
    _DAT_14ca1e758 = FUN_146826540;
    _DAT_14ca1e760 = FUN_146825d77;
    _DAT_14ca1e768 = FUN_146825fd6;
    _DAT_14ca1e770 = FUN_1407e02ea;
    _DAT_14ca1e778 = FUN_146826273;
    _DAT_14ca1e750 = FUN_14727389a;
    _DAT_14ca1e790 = 0xffffffff00000100;
    _DAT_14ca1e798 = 8;
    DAT_14ca1e79c = 0;
    _DAT_14ca1e780 = &LAB_1472738d2;
    _DAT_14ca22148 = L"LightMaterialsParameter";
    DAT_14ca22172 = FUN_140850cc5();
    _DAT_14ca22150 = FUN_14106a12a();
    _DAT_14ca22160 = &LAB_14682652b;
    _DAT_14ca22168 = 0x1000000f8;
    _DAT_14ca22170 = 0;
    _DAT_14ca22158 = DAT_14ca1e748;
    DAT_14ca1e748 = &DAT_14ca22148;
    FUN_14612f494();
    FUN_1407e00cc(&DAT_14ca1e738);
    return;
  }
  return;
}



// FUNCTION 14612f494 FUN_14612f494 body=123 status=ok
// SIG undefined FUN_14612f494(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612f494(void)

{
  _DAT_14ca24a80 = L"BASE";
  DAT_14ca24aaa = 4;
  _DAT_14ca24a88 = FUN_141526006();
  _DAT_14ca24a90 = DAT_14ca1e748;
  _DAT_14ca24a98 = &LAB_14682652b;
  DAT_14ca1e748 = &DAT_14ca24a80;
  DAT_14ca1e79d = DAT_14ca1e79d + '\x01';
  _DAT_14ca24aa0 = 0x100000000;
  if (*(char *)(_DAT_14ca24a88 + 100) != '\0') {
    DAT_14ca1e79e = DAT_14ca1e79e + '\x01';
  }
  return;
}



// FUNCTION 14612f510 FUN_14612f510 body=287 status=ok
// SIG undefined FUN_14612f510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612f510(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3a2a8) {
    FUN_144b3d300(&DAT_14ca3a2a8);
    if (DAT_14ca3a2a8 == -1) {
      FUN_14612f630();
      FUN_140db5666(&DAT_14ca3a200,1,&DAT_14ca3a198,L"FRayTracingDecalMaterialShader",
                    L"/Engine/Private/RayTracing/RayTracingDecalMaterialShader.usf",
                    L"RayTracingDecalMaterialShader",9,1,FUN_1472b2552,FUN_1472b24fe,FUN_141775736,
                    &LAB_1472b24fa,&LAB_1472b24f4,&LAB_14712ac08,0x100,0);
      _DAT_14ca3a200 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142f66b95);
      _Init_thread_footer(&DAT_14ca3a2a8);
    }
  }
  return &DAT_14ca3a200;
}



// FUNCTION 14612f630 FUN_14612f630 body=313 status=ok
// SIG undefined FUN_14612f630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612f630(void)

{
  if ((DAT_14ca3a1ff & 2) == 0) {
    DAT_14ca3a1ff = DAT_14ca3a1ff | 2;
    _DAT_14ca3a1a0 = L"FRayTracingDecalMaterialShader";
    _DAT_14ca3a1b8 = FUN_146826540;
    _DAT_14ca3a1c0 = FUN_146825d77;
    _DAT_14ca3a1c8 = FUN_146825fd6;
    _DAT_14ca3a1d0 = FUN_1407e02ea;
    _DAT_14ca3a1d8 = FUN_146826273;
    _DAT_14ca3a1b0 = FUN_1472b24ba;
    _DAT_14ca3a1f0 = 0xffffffff00000100;
    _DAT_14ca3a1f8 = 8;
    DAT_14ca3a1fc = 0;
    _DAT_14ca3a1e0 = &LAB_1472b24f0;
    _DAT_14ca3ef40 = L"DecalParameter";
    DAT_14ca3ef6a = FUN_140850cc5();
    _DAT_14ca3ef48 = FUN_14106a12a();
    _DAT_14ca3ef58 = &LAB_14682652b;
    _DAT_14ca3ef60 = 0x1000000f8;
    _DAT_14ca3ef68 = 0;
    _DAT_14ca3ef50 = DAT_14ca3a1a8;
    DAT_14ca3a1a8 = &DAT_14ca3ef40;
    FUN_14612f76a();
    FUN_1407e00cc(&DAT_14ca3a198);
    return;
  }
  return;
}



// FUNCTION 14612f76a FUN_14612f76a body=123 status=ok
// SIG undefined FUN_14612f76a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612f76a(void)

{
  _DAT_14ca3f7a0 = L"BASE";
  DAT_14ca3f7ca = 4;
  _DAT_14ca3f7a8 = FUN_141526006();
  _DAT_14ca3f7b0 = DAT_14ca3a1a8;
  _DAT_14ca3f7b8 = &LAB_14682652b;
  DAT_14ca3a1a8 = &DAT_14ca3f7a0;
  DAT_14ca3a1fd = DAT_14ca3a1fd + '\x01';
  _DAT_14ca3f7c0 = 0x100000000;
  if (*(char *)(_DAT_14ca3f7a8 + 100) != '\0') {
    DAT_14ca3a1fe = DAT_14ca3a1fe + '\x01';
  }
  return;
}



// FUNCTION 14612f7e6 FUN_14612f7e6 body=287 status=ok
// SIG undefined FUN_14612f7e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612f7e6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca45790) {
    FUN_144b3d300(&DAT_14ca45790);
    if (DAT_14ca45790 == -1) {
      FUN_14612f906();
      FUN_140db5666(&DAT_14ca456e8,2,&DAT_14ca45680,L"FHitProxyVS",
                    L"/Engine/Private/HitProxyVertexShader.usf",L"Main",0,1,FUN_1472d9b76,
                    FUN_1472d9b22,&LAB_142fda9f0,&LAB_1472d9b1e,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca456e8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142fdaa2a);
      _Init_thread_footer(&DAT_14ca45790);
    }
  }
  return &DAT_14ca456e8;
}



// FUNCTION 14612f906 FUN_14612f906 body=313 status=ok
// SIG undefined FUN_14612f906(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612f906(void)

{
  if ((DAT_14ca456e7 & 2) == 0) {
    DAT_14ca456e7 = DAT_14ca456e7 | 2;
    _DAT_14ca45688 = L"FHitProxyVS";
    _DAT_14ca456a0 = FUN_146826540;
    _DAT_14ca456a8 = FUN_146825d77;
    _DAT_14ca456b0 = FUN_146825fd6;
    _DAT_14ca456b8 = FUN_1407e02ea;
    _DAT_14ca456c0 = FUN_146826273;
    _DAT_14ca45698 = FUN_1472d9ad6;
    _DAT_14ca456d8 = 0xffffffff00000110;
    _DAT_14ca456e0 = 8;
    DAT_14ca456e4 = 0;
    _DAT_14ca456c8 = &LAB_1472d9b1a;
    _DAT_14ca46e18 = L"VertexFetch_HitProxyIdBuffer";
    DAT_14ca46e42 = FUN_140850cc5();
    _DAT_14ca46e20 = FUN_140fb78d0();
    _DAT_14ca46e30 = &LAB_14682652b;
    _DAT_14ca46e38 = &DAT_100000108;
    _DAT_14ca46e40 = 0;
    _DAT_14ca46e28 = DAT_14ca45690;
    DAT_14ca45690 = &DAT_14ca46e18;
    FUN_14612fa40();
    FUN_1407e00cc(&DAT_14ca45680);
    return;
  }
  return;
}



// FUNCTION 14612fa40 FUN_14612fa40 body=123 status=ok
// SIG undefined FUN_14612fa40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612fa40(void)

{
  _DAT_14ca47170 = L"BASE";
  DAT_14ca4719a = 4;
  _DAT_14ca47178 = FUN_141092e92();
  _DAT_14ca47180 = DAT_14ca45690;
  _DAT_14ca47188 = &LAB_14682652b;
  DAT_14ca45690 = &DAT_14ca47170;
  DAT_14ca456e5 = DAT_14ca456e5 + '\x01';
  _DAT_14ca47190 = 0x100000000;
  if (*(char *)(_DAT_14ca47178 + 100) != '\0') {
    DAT_14ca456e6 = DAT_14ca456e6 + '\x01';
  }
  return;
}



// FUNCTION 14612fabc FUN_14612fabc body=287 status=ok
// SIG undefined FUN_14612fabc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612fabc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca458b8) {
    FUN_144b3d300(&DAT_14ca458b8);
    if (DAT_14ca458b8 == -1) {
      FUN_14612fbdc();
      FUN_140db5666(&DAT_14ca45810,2,&DAT_14ca457a8,L"FHitProxyPS",
                    L"/Engine/Private/HitProxyPixelShader.usf",L"Main",3,1,FUN_1472d9c66,
                    FUN_1472d9c08,&LAB_142fdaa36,&LAB_1472d9c04,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca45810 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142fdaa6a);
      _Init_thread_footer(&DAT_14ca458b8);
    }
  }
  return &DAT_14ca45810;
}



// FUNCTION 14612fbdc FUN_14612fbdc body=313 status=ok
// SIG undefined FUN_14612fbdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612fbdc(void)

{
  if ((DAT_14ca4580f & 2) == 0) {
    DAT_14ca4580f = DAT_14ca4580f | 2;
    _DAT_14ca457b0 = L"FHitProxyPS";
    _DAT_14ca457c8 = FUN_146826540;
    _DAT_14ca457d0 = FUN_146825d77;
    _DAT_14ca457d8 = FUN_146825fd6;
    _DAT_14ca457e0 = FUN_1407e02ea;
    _DAT_14ca457e8 = FUN_146826273;
    _DAT_14ca457c0 = FUN_1472d9bbc;
    _DAT_14ca45800 = 0xffffffff00000110;
    _DAT_14ca45808 = 8;
    DAT_14ca4580c = 0;
    _DAT_14ca457f0 = &LAB_1472d9c00;
    _DAT_14ca46e48 = L"HitProxyId";
    DAT_14ca46e72 = FUN_140850cc5();
    _DAT_14ca46e50 = FUN_140ec6960();
    _DAT_14ca46e60 = &LAB_14682652b;
    _DAT_14ca46e68 = &DAT_100000108;
    _DAT_14ca46e70 = 0;
    _DAT_14ca46e58 = DAT_14ca457b8;
    DAT_14ca457b8 = &DAT_14ca46e48;
    FUN_14612fd16();
    FUN_1407e00cc(&DAT_14ca457a8);
    return;
  }
  return;
}



// FUNCTION 14612fd16 FUN_14612fd16 body=123 status=ok
// SIG undefined FUN_14612fd16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612fd16(void)

{
  _DAT_14ca471a0 = L"BASE";
  DAT_14ca471ca = 4;
  _DAT_14ca471a8 = FUN_141092e92();
  _DAT_14ca471b0 = DAT_14ca457b8;
  _DAT_14ca471b8 = &LAB_14682652b;
  DAT_14ca457b8 = &DAT_14ca471a0;
  DAT_14ca4580d = DAT_14ca4580d + '\x01';
  _DAT_14ca471c0 = 0x100000000;
  if (*(char *)(_DAT_14ca471a8 + 100) != '\0') {
    DAT_14ca4580e = DAT_14ca4580e + '\x01';
  }
  return;
}



// FUNCTION 14612fd9c FUN_14612fd9c body=711 status=ok
// SIG undefined FUN_14612fd9c(void)

undefined8 * FUN_14612fd9c(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_c8 [8];
  undefined4 local_c0;
  undefined3 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined2 *local_a0;
  int local_98;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a511410;
  param_1[5] = &PTR_FUN_14a511720;
  FUN_144a5dc74(param_1 + 0x2d);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_1412cd24a(param_1 + 0x32);
  FUN_144a5dc74(param_1 + 0x1c2);
  *(undefined1 *)((longlong)param_1 + 0xe3f) = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  *(undefined2 *)((longlong)param_1 + 0xe45) = 0;
  *(byte *)((longlong)param_1 + 0xe44) = *(byte *)((longlong)param_1 + 0xe44) & 0xfc;
  *(undefined2 *)(param_1 + 0x1c6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe34) = 0x100000100000000;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  *(undefined2 *)((longlong)param_1 + 0xe3c) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xe41) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe43) = 0;
  lVar6 = FUN_140bcc93a();
  FUN_1458a2fee(param_1 + 0x32,lVar6 + 0x15a0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab79e8) && (FUN_144b3d300(&DAT_14cab79e8), DAT_14cab79e8 == -1)) {
    FUN_140056680(&local_a0,L"/Engine/EngineFonts/Roboto");
    local_d8 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"SlateStyle",L"DefaultFontName",&local_a0);
    puVar7 = local_a0;
    if (local_98 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_145b0497c(&DAT_14cab79d0,puVar7,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    atexit(FUN_143333905);
    _Init_thread_footer(&DAT_14cab79e8);
  }
  local_b8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0x3f800000;
  FUN_1446ddc76(local_c8,"Regular",1);
  local_d8 = (undefined8 *)&local_c0;
  FUN_140324f46(&local_a0,DAT_14cab79e0,0x41c00000,local_c8);
  plVar1 = local_68;
  local_70 = param_1[0x95];
  plVar4 = (longlong *)param_1[0x96];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar5 = (undefined8 *)*local_68;
      local_68 = plVar4;
      (*(code *)*puVar5)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      plVar4 = local_68;
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        plVar4 = local_68;
      }
    }
  }
  local_68 = plVar4;
  FUN_1412cc59c(param_1 + 0x8f,&local_a0);
  plVar4 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146130064 FUN_146130064 body=178 status=ok
// SIG undefined FUN_146130064(void)

undefined8 *
FUN_146130064(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT71(local_50._1_7_,param_5);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,param_4);
  FUN_145c115c8(param_1,param_2,param_3,DAT_14c873488);
  *param_1 = &PTR_FUN_14a450b20;
  uVar1 = FUN_14001cc68(0x58,0x10);
  local_58 = &local_38;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 1;
  local_50 = 0x10;
  FUN_1415e0d68(uVar1,param_2 & 0xffffffff,param_3 & 0xffffffff,2);
  param_1[9] = uVar1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146130122 FUN_146130122 body=351 status=ok
// SIG undefined FUN_146130122(void)

undefined8 * FUN_146130122(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6e0dd0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  param_1[0x12] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x10] = DAT_14c8464e0;
  param_1[0x11] = uVar1;
  param_1[0x13] = 0;
  *(uint *)(param_1 + 0x14) = (*(uint *)(param_1 + 0x14) & 0xfffffff8) + 1;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbd) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1a] = DAT_14c8464e0;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1d] = DAT_14c8464e0;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = DAT_14c8464f0;
  param_1[0x20] = 0;
  *(uint *)(param_1 + 0x21) = (*(uint *)(param_1 + 0x21) & 0xfffffff8) + 1;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x125) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x29] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x27] = DAT_14c8464e0;
  param_1[0x28] = uVar1;
  param_1[0x2c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2a] = DAT_14c8464e0;
  param_1[0x2b] = uVar1;
  param_1[0x2d] = 0;
  *(uint *)(param_1 + 0x2e) = (*(uint *)(param_1 + 0x2e) & 0xfffffff8) + 1;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 14613028c FUN_14613028c body=712 status=ok
// SIG undefined FUN_14613028c(void)

undefined8 * FUN_14613028c(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar3);
  *param_1 = &PTR_FUN_14ab64eb0;
  *(undefined4 *)(param_1 + 0x16) = 0xaf;
  param_1[0x17] = "taggedanim";
  FUN_1400b22c2(local_58,"Animation.TaggedAnims");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145723f28();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    FUN_1446f8bcc(param_1 + 0x5d,0);
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
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
        goto LAB_14613038f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_14613038f:
  lVar4 = FUN_145723f28();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    FUN_1446f8bcc(param_1 + 0x62,0);
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_146130424;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_146130424:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146130560 FUN_146130560 body=350 status=ok
// SIG undefined FUN_146130560(void)

undefined8 * FUN_146130560(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abed7e0;
  param_1[5] = &PTR_FUN_14abedb10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffff;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0xfe;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_1400b22c2(&local_30,"Gameplay Tag Condition");
  if (param_1 + 6 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 7) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_24;
  }
  local_38 = FUN_144a6c4d8();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  FUN_1446f470e(&local_40,L"ActorToCheck",1);
  FUN_1458b8c86(param_1 + 0xd,param_1,local_40,&local_38);
  param_1[0xf] = DAT_14cb1f058;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf8;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461306c0 FUN_1461306c0 body=26 status=ok
// SIG undefined FUN_1461306c0(void)

undefined8 FUN_1461306c0(longlong param_1,undefined8 param_2)

{
  FUN_1461306da(param_1 + 0x18);
  return param_2;
}



// FUNCTION 1461306da FUN_1461306da body=438 status=ok
// SIG undefined FUN_1461306da(void)

undefined8 * FUN_1461306da(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  void *_Dst;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb23ef8 != (longlong *)0x0 && DAT_14cb23f00 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb23ef8 + 0x30))(), cVar2 != '\0')) {
    plVar3 = DAT_14cb23ef8;
    if (DAT_14cb23f00 == 0) {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_38);
    goto LAB_1461307bb;
  }
  _Dst = (void *)FUN_14001cc68(0x170);
  memset(_Dst,0,0x170);
  FUN_146130892(_Dst);
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ac8b320;
  plVar3[2] = (longlong)_Dst;
  local_30 = plVar3;
  if (_Dst == (void *)0x0) {
    local_38 = (void *)0x0;
    goto LAB_1461307bb;
  }
  local_38 = _Dst;
  if (((*(longlong *)((longlong)_Dst + 0x10) != 0) && (*(longlong *)((longlong)_Dst + 0x18) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)_Dst + 0x18) + 8))) goto LAB_1461307bb;
  if (plVar3 == (longlong *)0x0) {
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    plVar4 = *(longlong **)((longlong)_Dst + 0x18);
    if (plVar4 != (longlong *)0x0) {
LAB_146130836:
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_1461307b1;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    if (*(longlong **)((longlong)_Dst + 0x18) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)((longlong)_Dst + 0x18);
      if (plVar4 != (longlong *)0x0) goto LAB_146130836;
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
    }
LAB_1461307b1:
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
LAB_1461307bb:
  *param_2 = local_38;
  param_2[1] = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146130892 FUN_146130892 body=259 status=ok
// SIG undefined FUN_146130892(void)

undefined8 * FUN_146130892(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14ac8b300;
  FUN_1409e1656(param_1 + 4);
  *param_1 = &PTR_FUN_14ac8b290;
  param_1[4] = &PTR_FUN_14ac8b2b0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 146130996 FUN_146130996 body=26 status=ok
// SIG undefined FUN_146130996(void)

void FUN_146130996(undefined8 param_1)

{
  FUN_1461309b0();
  FUN_1461309fa(param_1);
  return;
}



// FUNCTION 1461309b0 FUN_1461309b0 body=73 status=ok
// SIG undefined FUN_1461309b0(void)

void FUN_1461309b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 1000) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 1000) + 0x708))();
  }
  cVar1 = FUN_1459c7f3e(param_1);
  if (cVar1 != '\0') {
    return;
  }
  plVar2 = (longlong *)FUN_14093f908(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001461309f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x680))(plVar2);
  return;
}



// FUNCTION 1461309fa FUN_1461309fa body=805 status=ok
// SIG undefined FUN_1461309fa(void)

void FUN_1461309fa(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined1 uStack_60;
  undefined7 local_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14034eff0();
  if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) &&
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360) != 0)) &&
     (iVar2 = FUN_14490d72a(), iVar2 != 3)) {
    uStack_58 = 0;
    uStack_57 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_5f = 0;
    lVar6 = *(longlong *)(lVar3 + 0x30);
    if (lVar6 != 0) {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (wchar_t *)0x0;
      uStack_80 = 0;
      if ((longlong)*(int *)(lVar6 + 0x1b0) == 0) {
        iVar2 = -1;
        bVar10 = false;
      }
      else {
        lVar11 = *(longlong *)(lVar6 + 0x1a8);
        lVar6 = (longlong)*(int *)(lVar6 + 0x1b0) * 0x10 + lVar11;
        iVar2 = -1;
        bVar10 = false;
        do {
          FUN_14126d676(lVar11,&local_78);
          if ((int)uStack_70 == DAT_14cb7d9b0) {
            if (1 < (int)uStack_70) {
              lVar7 = 0;
              while( true ) {
                uVar4 = *(ushort *)(local_78 + lVar7);
                uVar5 = (ulonglong)uVar4;
                uVar8 = *(ushort *)(DAT_14cb7d9a8 + lVar7);
                if (uVar4 != uVar8) break;
                if (uVar4 == 0) goto LAB_146130c5e;
LAB_146130c2e:
                lVar7 = lVar7 + 2;
              }
              if ((uVar8 | uVar4) < 0x80) {
                uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                uVar9 = (ulonglong)uVar8;
                uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_146130c2e;
              }
              if (uVar4 != uVar8) goto LAB_146130adb;
            }
LAB_146130c5e:
            bVar10 = true;
            if (1 < (int)uStack_80) {
              iVar2 = _wtoi(local_88);
            }
          }
          else {
            if (DAT_14cb7d9b0 + (int)uStack_70 == 1) goto LAB_146130c5e;
LAB_146130adb:
            if ((int)uStack_70 == DAT_14cb7d9c0) {
              if (1 < (int)uStack_70) {
                lVar7 = 0;
                while( true ) {
                  uVar4 = *(ushort *)(local_78 + lVar7);
                  uVar5 = (ulonglong)uVar4;
                  uVar8 = *(ushort *)(DAT_14cb7d9b8 + lVar7);
                  if (uVar4 != uVar8) break;
                  if (uVar4 == 0) goto LAB_146130cd7;
LAB_146130ca7:
                  lVar7 = lVar7 + 2;
                }
                if ((uVar8 | uVar4) < 0x80) {
                  uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                  uVar9 = (ulonglong)uVar8;
                  uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                  if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_146130ca7;
                }
                if (uVar4 != uVar8) goto LAB_146130af4;
              }
LAB_146130cd7:
              uStack_57 = CONCAT17(1,(undefined7)uStack_57);
            }
            else {
              if (DAT_14cb7d9c0 + (int)uStack_70 == 1) goto LAB_146130cd7;
LAB_146130af4:
              if ((int)uStack_70 == DAT_14cb7d9a0) {
                if (1 < (int)uStack_70) {
                  lVar7 = 0;
                  while( true ) {
                    uVar4 = *(ushort *)(local_78 + lVar7);
                    uVar5 = (ulonglong)uVar4;
                    uVar8 = *(ushort *)(DAT_14cb7d998 + lVar7);
                    if (uVar4 != uVar8) break;
                    if (uVar4 == 0) goto LAB_146130b64;
LAB_146130b38:
                    lVar7 = lVar7 + 2;
                  }
                  if ((uVar8 | uVar4) < 0x80) {
                    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                    uVar9 = (ulonglong)uVar8;
                    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_146130b38;
                  }
                  if (uVar4 != uVar8) goto LAB_146130b05;
                }
LAB_146130b64:
                iVar1 = (int)uStack_80 + -1;
                if ((int)uStack_80 == 0) {
                  iVar1 = 0;
                }
                FUN_1446f82e2(&uStack_58,iVar1,local_88,1);
              }
              else if (DAT_14cb7d9a0 + (int)uStack_70 == 1) goto LAB_146130b64;
            }
          }
LAB_146130b05:
          lVar11 = lVar11 + 0x10;
        } while (lVar11 != lVar6);
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (bVar10) {
        if (iVar2 < 0) {
          FUN_14885c08e(lVar3,&local_68);
        }
        else if (iVar2 != 0) {
          do {
            FUN_14885bd50(lVar3,&local_68);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146130d20 FUN_146130d20 body=222 status=ok
// SIG undefined FUN_146130d20(void)

void FUN_146130d20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (*(char *)(param_1 + 0x198) == '\0') {
    cVar5 = FUN_144729dda(param_1 + 0x58);
    if (cVar5 == '\0') {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0x58);
      lVar8 = (**(code **)(*plVar7 + 0x2b8))(plVar7);
    }
    plVar7 = *(longlong **)(param_1 + 400);
    if (plVar7 != (longlong *)0x0) {
      iVar6 = (int)plVar7[1];
      do {
        if (iVar6 == 0) {
          return;
        }
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar7 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      if (((lVar8 != 0) && (lVar3 = *(longlong *)(param_1 + 0x188), lVar3 != 0)) &&
         (*(char *)(lVar3 + 0x150) == '\x01')) {
        lVar9 = FUN_140c05ec4(lVar8);
        lVar8 = FUN_146130dfe(lVar8);
        if (((lVar9 != 0) && (lVar8 != 0)) && (lVar8 == lVar3)) {
          FUN_146130e3c(lVar8,lVar9);
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
                    /* WARNING: Could not recover jumptable at 0x000146130dfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x10))(plVar7);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146130dfe FUN_146130dfe body=61 status=ok
// SIG undefined FUN_146130dfe(void)

undefined8 FUN_146130dfe(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = FUN_140c05e56();
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1412d7224(lVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146130e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar3 + 0xb0))(plVar3);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 146130e3c FUN_146130e3c body=79 status=ok
// SIG undefined FUN_146130e3c(void)

void FUN_146130e3c(longlong param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0x150) == '\x04') && (*(char *)(param_1 + 0x150) == '\x01')) {
    FUN_1447f69b6(param_1 + 8);
    *(undefined1 *)(param_1 + 0x155) = 1;
    FUN_141045628(param_1,param_2);
    FUN_141042ee2(param_1);
    return;
  }
  return;
}



// FUNCTION 146130e8c FUN_146130e8c body=97 status=ok
// SIG undefined FUN_146130e8c(void)

undefined1 FUN_146130e8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      FUN_146130eee(param_2 + -0x30,param_3 + -0x30);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146130eee FUN_146130eee body=84 status=ok
// SIG undefined FUN_146130eee(void)

longlong * FUN_146130eee(longlong *param_1,longlong *param_2)

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



// FUNCTION 146130f42 FUN_146130f42 body=112 status=ok
// SIG undefined FUN_146130f42(void)

void FUN_146130f42(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145bfb464();
  if (*(longlong *)(param_1 + 0x18) == 0) {
    local_30 = &LAB_145dddc6a;
    local_28 = 0;
    FUN_146130fb4(&local_20,param_1 + -0x30);
    *(undefined8 *)(param_1 + 0x18) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146130fb4 FUN_146130fb4 body=248 status=ok
// SIG undefined FUN_146130fb4(void)

undefined8 FUN_146130fb4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14b3ecf50;
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
  *local_40 = &PTR_FUN_14b9a84f0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1412a3750(&DAT_14cb7df98,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461310ae FUN_1461310ae body=48 status=ok
// SIG undefined FUN_1461310ae(void)

void FUN_1461310ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1461310ea FUN_1461310ea body=351 status=ok
// SIG undefined FUN_1461310ea(void)

undefined8 * FUN_1461310ea(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145dee94a();
  *param_1 = &PTR_FUN_14ac8fb90;
  param_1[0x72] = &PTR_FUN_14ac901d0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  param_1[0xb6] = 0;
  param_1[0xb8] = 0;
  FUN_1446f470e(&local_30,L"DefaultStaticGeometryComponent",1);
  uVar1 = FUN_14595a802();
  local_50 = 0;
  local_58 = 1;
  lVar2 = FUN_14048696c(param_1,local_30,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0xb8] = lVar2;
  FUN_1446f470e(&local_38,L"DefaultFieldSystemComponent",1);
  uVar1 = FUN_14595739c();
  local_50 = 0;
  local_58 = 1;
  uVar1 = FUN_14048696c(param_1,local_38,uVar1,uVar1);
  param_1[0xb7] = uVar1;
  FUN_1446f470e(&local_40,L"DefaultDebugDrawComponent",1);
  uVar1 = FUN_14580cc34();
  local_50 = 0;
  local_58 = 1;
  uVar1 = FUN_14048696c(param_1,local_40,uVar1,uVar1);
  param_1[0xb9] = uVar1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613124a FUN_14613124a body=38 status=ok
// SIG undefined FUN_14613124a(void)

undefined8 FUN_14613124a(undefined8 param_1,int param_2)

{
  FUN_146131270();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146131270 FUN_146131270 body=245 status=ok
// SIG undefined FUN_146131270(void)

void FUN_146131270(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14bea9a50;
  FUN_146131365(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_146131365(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xf] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xe] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xe] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x38))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x38))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x38))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x38))();
  }
  FUN_144a94e2a(param_1);
  return;
}



// FUNCTION 146131365 FUN_146131365 body=69 status=ok
// SIG undefined FUN_146131365(void)

void FUN_146131365(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar4 * 8);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  return;
}



// FUNCTION 1461313aa FUN_1461313aa body=287 status=ok
// SIG undefined FUN_1461313aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461313aa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e86d8) {
    FUN_144b3d300(&DAT_14c9e86d8);
    if (DAT_14c9e86d8 == -1) {
      FUN_1461314ca();
      FUN_140db5666(&DAT_14c9e8630,2,&DAT_14c9e85c8,L"TLightMapDensityVSFNoLightMapPolicy",
                    L"/Engine/Private/LightMapDensityShader.usf",L"MainVertexShader",0,1,
                    FUN_1471d108e,FUN_1471d1066,FUN_14042c2fe,&LAB_1471d1062,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14c9e8630 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ce7020);
      _Init_thread_footer(&DAT_14c9e86d8);
    }
  }
  return &DAT_14c9e8630;
}



// FUNCTION 1461314ca FUN_1461314ca body=205 status=ok
// SIG undefined FUN_1461314ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461314ca(void)

{
  if ((DAT_14c9e862f & 2) == 0) {
    DAT_14c9e862f = DAT_14c9e862f | 2;
    _DAT_14c9e85d0 = L"TLightMapDensityVSFNoLightMapPolicy";
    _DAT_14c9e85e8 = FUN_146826540;
    _DAT_14c9e85f0 = FUN_146825d77;
    _DAT_14c9e85f8 = FUN_146825fd6;
    _DAT_14c9e8600 = FUN_1407e02ea;
    _DAT_14c9e8608 = FUN_146826273;
    _DAT_14c9e85e0 = FUN_1471d1028;
    _DAT_14c9e8620 = 0xffffffff00000110;
    _DAT_14c9e8628 = 8;
    DAT_14c9e862c = 0;
    _DAT_14c9e8610 = &LAB_1471d105e;
    FUN_146131598();
    FUN_1407e00cc(&DAT_14c9e85c8);
    return;
  }
  return;
}



// FUNCTION 146131598 FUN_146131598 body=235 status=ok
// SIG undefined FUN_146131598(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146131598(void)

{
  _DAT_14c9eb310 = L"BASE";
  DAT_14c9eb33a = 4;
  FUN_1411cad6c();
  _DAT_14c9eb320 = DAT_14c9e85d8;
  _DAT_14c9eb318 = &DAT_14c9e8fa8;
  _DAT_14c9eb328 = &LAB_14682652b;
  DAT_14c9e85d8 = &DAT_14c9eb310;
  DAT_14c9e862d = DAT_14c9e862d + '\x01';
  _DAT_14c9eb330 = &DAT_100000108;
  if (DAT_14c9e900c != '\0') {
    DAT_14c9e862e = DAT_14c9e862e + '\x01';
  }
  _DAT_14c9eb340 = L"BASE";
  DAT_14c9eb36a = 4;
  _DAT_14c9eb348 = FUN_141092e92();
  _DAT_14c9eb350 = DAT_14c9e85d8;
  _DAT_14c9eb358 = &LAB_14682652b;
  DAT_14c9e85d8 = &DAT_14c9eb340;
  DAT_14c9e862d = DAT_14c9e862d + '\x01';
  _DAT_14c9eb360 = 0x100000000;
  if (*(char *)(_DAT_14c9eb348 + 100) != '\0') {
    DAT_14c9e862e = DAT_14c9e862e + '\x01';
  }
  return;
}



// FUNCTION 146131684 FUN_146131684 body=287 status=ok
// SIG undefined FUN_146131684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146131684(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8928) {
    FUN_144b3d300(&DAT_14c9e8928);
    if (DAT_14c9e8928 == -1) {
      FUN_1461317a4();
      FUN_140db5666(&DAT_14c9e8880,2,&DAT_14c9e8818,L"TLightMapDensityVSFDummyLightMapPolicy",
                    L"/Engine/Private/LightMapDensityShader.usf",L"MainVertexShader",0,1,
                    FUN_1471d120c,FUN_1471d11e4,FUN_141765e8c,&LAB_1471d11e0,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14c9e8880 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ce7038);
      _Init_thread_footer(&DAT_14c9e8928);
    }
  }
  return &DAT_14c9e8880;
}



// FUNCTION 1461317a4 FUN_1461317a4 body=205 status=ok
// SIG undefined FUN_1461317a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461317a4(void)

{
  if ((DAT_14c9e887f & 2) == 0) {
    DAT_14c9e887f = DAT_14c9e887f | 2;
    _DAT_14c9e8820 = L"TLightMapDensityVSFDummyLightMapPolicy";
    _DAT_14c9e8838 = FUN_146826540;
    _DAT_14c9e8840 = FUN_146825d77;
    _DAT_14c9e8848 = FUN_146825fd6;
    _DAT_14c9e8850 = FUN_1407e02ea;
    _DAT_14c9e8858 = FUN_146826273;
    _DAT_14c9e8830 = FUN_1471d11a6;
    _DAT_14c9e8870 = 0xffffffff00000110;
    _DAT_14c9e8878 = 8;
    DAT_14c9e887c = 0;
    _DAT_14c9e8860 = &LAB_1471d11dc;
    FUN_146131872();
    FUN_1407e00cc(&DAT_14c9e8818);
    return;
  }
  return;
}



// FUNCTION 146131872 FUN_146131872 body=235 status=ok
// SIG undefined FUN_146131872(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146131872(void)

{
  _DAT_14c9eb460 = L"BASE";
  DAT_14c9eb48a = 4;
  FUN_1411cad6c();
  _DAT_14c9eb470 = DAT_14c9e8828;
  _DAT_14c9eb468 = &DAT_14c9e8fa8;
  _DAT_14c9eb478 = &LAB_14682652b;
  DAT_14c9e8828 = &DAT_14c9eb460;
  DAT_14c9e887d = DAT_14c9e887d + '\x01';
  _DAT_14c9eb480 = &DAT_100000108;
  if (DAT_14c9e900c != '\0') {
    DAT_14c9e887e = DAT_14c9e887e + '\x01';
  }
  _DAT_14c9eb490 = L"BASE";
  DAT_14c9eb4ba = 4;
  _DAT_14c9eb498 = FUN_141092e92();
  _DAT_14c9eb4a0 = DAT_14c9e8828;
  _DAT_14c9eb4a8 = &LAB_14682652b;
  DAT_14c9e8828 = &DAT_14c9eb490;
  DAT_14c9e887d = DAT_14c9e887d + '\x01';
  _DAT_14c9eb4b0 = 0x100000000;
  if (*(char *)(_DAT_14c9eb498 + 100) != '\0') {
    DAT_14c9e887e = DAT_14c9e887e + '\x01';
  }
  return;
}



// FUNCTION 14613195e FUN_14613195e body=287 status=ok
// SIG undefined FUN_14613195e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613195e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8b78) {
    FUN_144b3d300(&DAT_14c9e8b78);
    if (DAT_14c9e8b78 == -1) {
      FUN_146131a7e();
      FUN_140db5666(&DAT_14c9e8ad0,2,&DAT_14c9e8a68,L"TLightMapDensityVSTLightMapPolicyLQ",
                    L"/Engine/Private/LightMapDensityShader.usf",L"MainVertexShader",0,1,
                    FUN_1471d138a,FUN_1471d1362,FUN_141765f38,&LAB_1471d135e,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14c9e8ad0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ce7050);
      _Init_thread_footer(&DAT_14c9e8b78);
    }
  }
  return &DAT_14c9e8ad0;
}



// FUNCTION 146131a7e FUN_146131a7e body=205 status=ok
// SIG undefined FUN_146131a7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146131a7e(void)

{
  if ((DAT_14c9e8acf & 2) == 0) {
    DAT_14c9e8acf = DAT_14c9e8acf | 2;
    _DAT_14c9e8a70 = L"TLightMapDensityVSTLightMapPolicyLQ";
    _DAT_14c9e8a88 = FUN_146826540;
    _DAT_14c9e8a90 = FUN_146825d77;
    _DAT_14c9e8a98 = FUN_146825fd6;
    _DAT_14c9e8aa0 = FUN_1407e02ea;
    _DAT_14c9e8aa8 = FUN_146826273;
    _DAT_14c9e8a80 = FUN_1471d1324;
    _DAT_14c9e8ac0 = 0xffffffff00000110;
    _DAT_14c9e8ac8 = 8;
    DAT_14c9e8acc = 0;
    _DAT_14c9e8ab0 = &LAB_1471d135a;
    FUN_146131b4c();
    FUN_1407e00cc(&DAT_14c9e8a68);
    return;
  }
  return;
}



// FUNCTION 146131b4c FUN_146131b4c body=235 status=ok
// SIG undefined FUN_146131b4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146131b4c(void)

{
  _DAT_14c9eb5b0 = L"BASE";
  DAT_14c9eb5da = 4;
  FUN_1411cad6c();
  _DAT_14c9eb5c0 = DAT_14c9e8a78;
  _DAT_14c9eb5b8 = &DAT_14c9e8fa8;
  _DAT_14c9eb5c8 = &LAB_14682652b;
  DAT_14c9e8a78 = &DAT_14c9eb5b0;
  DAT_14c9e8acd = DAT_14c9e8acd + '\x01';
  _DAT_14c9eb5d0 = &DAT_100000108;
  if (DAT_14c9e900c != '\0') {
    DAT_14c9e8ace = DAT_14c9e8ace + '\x01';
  }
  _DAT_14c9eb5e0 = L"BASE";
  DAT_14c9eb60a = 4;
  _DAT_14c9eb5e8 = FUN_141092e92();
  _DAT_14c9eb5f0 = DAT_14c9e8a78;
  _DAT_14c9eb5f8 = &LAB_14682652b;
  DAT_14c9e8a78 = &DAT_14c9eb5e0;
  DAT_14c9e8acd = DAT_14c9e8acd + '\x01';
  _DAT_14c9eb600 = 0x100000000;
  if (*(char *)(_DAT_14c9eb5e8 + 100) != '\0') {
    DAT_14c9e8ace = DAT_14c9e8ace + '\x01';
  }
  return;
}



// FUNCTION 146131c38 FUN_146131c38 body=287 status=ok
// SIG undefined FUN_146131c38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146131c38(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8dc8) {
    FUN_144b3d300(&DAT_14c9e8dc8);
    if (DAT_14c9e8dc8 == -1) {
      FUN_146131d58();
      FUN_140db5666(&DAT_14c9e8d20,2,&DAT_14c9e8cb8,L"TLightMapDensityVSTLightMapPolicyHQ",
                    L"/Engine/Private/LightMapDensityShader.usf",L"MainVertexShader",0,1,
                    FUN_1471d1508,FUN_1471d14e0,FUN_141765ff0,&LAB_1471d14dc,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14c9e8d20 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ce7068);
      _Init_thread_footer(&DAT_14c9e8dc8);
    }
  }
  return &DAT_14c9e8d20;
}



// FUNCTION 146131d58 FUN_146131d58 body=205 status=ok
// SIG undefined FUN_146131d58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146131d58(void)

{
  if ((DAT_14c9e8d1f & 2) == 0) {
    DAT_14c9e8d1f = DAT_14c9e8d1f | 2;
    _DAT_14c9e8cc0 = L"TLightMapDensityVSTLightMapPolicyHQ";
    _DAT_14c9e8cd8 = FUN_146826540;
    _DAT_14c9e8ce0 = FUN_146825d77;
    _DAT_14c9e8ce8 = FUN_146825fd6;
    _DAT_14c9e8cf0 = FUN_1407e02ea;
    _DAT_14c9e8cf8 = FUN_146826273;
    _DAT_14c9e8cd0 = FUN_1471d14a2;
    _DAT_14c9e8d10 = 0xffffffff00000110;
    _DAT_14c9e8d18 = 8;
    DAT_14c9e8d1c = 0;
    _DAT_14c9e8d00 = &LAB_1471d14d8;
    FUN_146131e26();
    FUN_1407e00cc(&DAT_14c9e8cb8);
    return;
  }
  return;
}



// FUNCTION 146131e26 FUN_146131e26 body=235 status=ok
// SIG undefined FUN_146131e26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146131e26(void)

{
  _DAT_14c9eb700 = L"BASE";
  DAT_14c9eb72a = 4;
  FUN_1411cad6c();
  _DAT_14c9eb710 = DAT_14c9e8cc8;
  _DAT_14c9eb708 = &DAT_14c9e8fa8;
  _DAT_14c9eb718 = &LAB_14682652b;
  DAT_14c9e8cc8 = &DAT_14c9eb700;
  DAT_14c9e8d1d = DAT_14c9e8d1d + '\x01';
  _DAT_14c9eb720 = &DAT_100000108;
  if (DAT_14c9e900c != '\0') {
    DAT_14c9e8d1e = DAT_14c9e8d1e + '\x01';
  }
  _DAT_14c9eb730 = L"BASE";
  DAT_14c9eb75a = 4;
  _DAT_14c9eb738 = FUN_141092e92();
  _DAT_14c9eb740 = DAT_14c9e8cc8;
  _DAT_14c9eb748 = &LAB_14682652b;
  DAT_14c9e8cc8 = &DAT_14c9eb730;
  DAT_14c9e8d1d = DAT_14c9e8d1d + '\x01';
  _DAT_14c9eb750 = 0x100000000;
  if (*(char *)(_DAT_14c9eb738 + 100) != '\0') {
    DAT_14c9e8d1e = DAT_14c9e8d1e + '\x01';
  }
  return;
}



// FUNCTION 146131f12 FUN_146131f12 body=313 status=ok
// SIG undefined FUN_146131f12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146131f12(void)

{
  if ((DAT_14ca876d7 & 2) == 0) {
    DAT_14ca876d7 = DAT_14ca876d7 | 2;
    _DAT_14ca87678 = L"FClearReplacementCS_Texture2DArray_Float4_Bounds";
    _DAT_14ca87690 = FUN_146826540;
    _DAT_14ca87698 = FUN_146825d77;
    _DAT_14ca876a0 = FUN_146825fd6;
    _DAT_14ca876a8 = FUN_1407e02ea;
    _DAT_14ca876b0 = FUN_146826273;
    _DAT_14ca87688 = FUN_147417660;
    _DAT_14ca876c8 = 0xffffffff00000100;
    _DAT_14ca876d0 = 8;
    DAT_14ca876d4 = 0;
    _DAT_14ca876b8 = &LAB_14741768c;
    _DAT_14ca92fd8 = L"ClearResourceParam";
    DAT_14ca93002 = FUN_140850cc5();
    _DAT_14ca92fe0 = FUN_140fb78d0();
    _DAT_14ca92ff0 = &LAB_14682652b;
    _DAT_14ca92ff8 = 0x1000000f8;
    _DAT_14ca93000 = 0;
    _DAT_14ca92fe8 = DAT_14ca87680;
    DAT_14ca87680 = &DAT_14ca92fd8;
    FUN_14613204c();
    FUN_1407e00cc(&DAT_14ca87670);
  }
  return &DAT_14ca87670;
}



// FUNCTION 14613204c FUN_14613204c body=133 status=ok
// SIG undefined FUN_14613204c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613204c(void)

{
  _DAT_14ca93008 = L"BASE";
  DAT_14ca93032 = 4;
  FUN_145ccacd6();
  _DAT_14ca93018 = DAT_14ca87680;
  _DAT_14ca93010 = &DAT_14ca92a90;
  _DAT_14ca93020 = &LAB_14682652b;
  DAT_14ca87680 = &DAT_14ca93008;
  DAT_14ca876d5 = DAT_14ca876d5 + '\x01';
  _DAT_14ca93028 = 0x100000000;
  if (DAT_14ca92af4 != '\0') {
    DAT_14ca876d6 = DAT_14ca876d6 + '\x01';
  }
  return;
}



// FUNCTION 1461320d2 FUN_1461320d2 body=313 status=ok
// SIG undefined FUN_1461320d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461320d2(void)

{
  if ((DAT_14ca877ff & 2) == 0) {
    DAT_14ca877ff = DAT_14ca877ff | 2;
    _DAT_14ca877a0 = L"FClearReplacementCS_Texture2D_Float4_Bounds";
    _DAT_14ca877b8 = FUN_146826540;
    _DAT_14ca877c0 = FUN_146825d77;
    _DAT_14ca877c8 = FUN_146825fd6;
    _DAT_14ca877d0 = FUN_1407e02ea;
    _DAT_14ca877d8 = FUN_146826273;
    _DAT_14ca877b0 = FUN_147417792;
    _DAT_14ca877f0 = 0xffffffff00000100;
    _DAT_14ca877f8 = 8;
    DAT_14ca877fc = 0;
    _DAT_14ca877e0 = &LAB_1474177be;
    _DAT_14ca93038 = L"ClearResourceParam";
    DAT_14ca93062 = FUN_140850cc5();
    _DAT_14ca93040 = FUN_140fb78d0();
    _DAT_14ca93050 = &LAB_14682652b;
    _DAT_14ca93058 = 0x1000000f8;
    _DAT_14ca93060 = 0;
    _DAT_14ca93048 = DAT_14ca877a8;
    DAT_14ca877a8 = &DAT_14ca93038;
    FUN_14613220c();
    FUN_1407e00cc(&DAT_14ca87798);
  }
  return &DAT_14ca87798;
}



// FUNCTION 14613220c FUN_14613220c body=133 status=ok
// SIG undefined FUN_14613220c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613220c(void)

{
  _DAT_14ca93068 = L"BASE";
  DAT_14ca93092 = 4;
  FUN_145ccacd6();
  _DAT_14ca93078 = DAT_14ca877a8;
  _DAT_14ca93070 = &DAT_14ca92a90;
  _DAT_14ca93080 = &LAB_14682652b;
  DAT_14ca877a8 = &DAT_14ca93068;
  DAT_14ca877fd = DAT_14ca877fd + '\x01';
  _DAT_14ca93088 = 0x100000000;
  if (DAT_14ca92af4 != '\0') {
    DAT_14ca877fe = DAT_14ca877fe + '\x01';
  }
  return;
}



// FUNCTION 146132292 FUN_146132292 body=313 status=ok
// SIG undefined FUN_146132292(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146132292(void)

{
  if ((DAT_14ca8882f & 2) == 0) {
    DAT_14ca8882f = DAT_14ca8882f | 2;
    _DAT_14ca887d0 = L"FClearReplacementCS_Texture3D_Uint4_Bounds";
    _DAT_14ca887e8 = FUN_146826540;
    _DAT_14ca887f0 = FUN_146825d77;
    _DAT_14ca887f8 = FUN_146825fd6;
    _DAT_14ca88800 = FUN_1407e02ea;
    _DAT_14ca88808 = FUN_146826273;
    _DAT_14ca887e0 = FUN_1474185de;
    _DAT_14ca88820 = 0xffffffff00000100;
    _DAT_14ca88828 = 8;
    DAT_14ca8882c = 0;
    _DAT_14ca88810 = &LAB_14741860a;
    _DAT_14ca937c8 = L"ClearResourceParam";
    DAT_14ca937f2 = FUN_140850cc5();
    _DAT_14ca937d0 = FUN_140fb78d0();
    _DAT_14ca937e0 = &LAB_14682652b;
    _DAT_14ca937e8 = 0x1000000f8;
    _DAT_14ca937f0 = 0;
    _DAT_14ca937d8 = DAT_14ca887d8;
    DAT_14ca887d8 = &DAT_14ca937c8;
    FUN_1461323cc();
    FUN_1407e00cc(&DAT_14ca887c8);
  }
  return &DAT_14ca887c8;
}



// FUNCTION 1461323cc FUN_1461323cc body=133 status=ok
// SIG undefined FUN_1461323cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461323cc(void)

{
  _DAT_14ca937f8 = L"BASE";
  DAT_14ca93822 = 4;
  FUN_145cc9294();
  _DAT_14ca93808 = DAT_14ca887d8;
  _DAT_14ca93800 = &DAT_14ca925f8;
  _DAT_14ca93810 = &LAB_14682652b;
  DAT_14ca887d8 = &DAT_14ca937f8;
  DAT_14ca8882d = DAT_14ca8882d + '\x01';
  _DAT_14ca93818 = 0x100000000;
  if (DAT_14ca9265c != '\0') {
    DAT_14ca8882e = DAT_14ca8882e + '\x01';
  }
  return;
}



// FUNCTION 146132452 FUN_146132452 body=313 status=ok
// SIG undefined FUN_146132452(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146132452(void)

{
  if ((DAT_14ca88957 & 2) == 0) {
    DAT_14ca88957 = DAT_14ca88957 | 2;
    _DAT_14ca888f8 = L"FClearReplacementCS_Texture2D_Uint4_Bounds";
    _DAT_14ca88910 = FUN_146826540;
    _DAT_14ca88918 = FUN_146825d77;
    _DAT_14ca88920 = FUN_146825fd6;
    _DAT_14ca88928 = FUN_1407e02ea;
    _DAT_14ca88930 = FUN_146826273;
    _DAT_14ca88908 = FUN_147418710;
    _DAT_14ca88948 = 0xffffffff00000100;
    _DAT_14ca88950 = 8;
    DAT_14ca88954 = 0;
    _DAT_14ca88938 = &LAB_14741873c;
    _DAT_14ca93828 = L"ClearResourceParam";
    DAT_14ca93852 = FUN_140850cc5();
    _DAT_14ca93830 = FUN_140fb78d0();
    _DAT_14ca93840 = &LAB_14682652b;
    _DAT_14ca93848 = 0x1000000f8;
    _DAT_14ca93850 = 0;
    _DAT_14ca93838 = DAT_14ca88900;
    DAT_14ca88900 = &DAT_14ca93828;
    FUN_14613258c();
    FUN_1407e00cc(&DAT_14ca888f0);
  }
  return &DAT_14ca888f0;
}



// FUNCTION 14613258c FUN_14613258c body=133 status=ok
// SIG undefined FUN_14613258c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613258c(void)

{
  _DAT_14ca93858 = L"BASE";
  DAT_14ca93882 = 4;
  FUN_145cc9294();
  _DAT_14ca93868 = DAT_14ca88900;
  _DAT_14ca93860 = &DAT_14ca925f8;
  _DAT_14ca93870 = &LAB_14682652b;
  DAT_14ca88900 = &DAT_14ca93858;
  DAT_14ca88955 = DAT_14ca88955 + '\x01';
  _DAT_14ca93878 = 0x100000000;
  if (DAT_14ca9265c != '\0') {
    DAT_14ca88956 = DAT_14ca88956 + '\x01';
  }
  return;
}



// FUNCTION 146132612 FUN_146132612 body=313 status=ok
// SIG undefined FUN_146132612(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146132612(void)

{
  if ((DAT_14ca9090f & 2) == 0) {
    DAT_14ca9090f = DAT_14ca9090f | 2;
    _DAT_14ca908b0 = L"TOneColorVStruefalse";
    _DAT_14ca908c8 = FUN_146826540;
    _DAT_14ca908d0 = FUN_146825d77;
    _DAT_14ca908d8 = FUN_146825fd6;
    _DAT_14ca908e0 = FUN_1407e02ea;
    _DAT_14ca908e8 = FUN_146826273;
    _DAT_14ca908c0 = FUN_1474219c6;
    _DAT_14ca90900 = 0xffffffff000000e8;
    _DAT_14ca90908 = 8;
    DAT_14ca9090c = 0;
    _DAT_14ca908f0 = &LAB_1474219f2;
    _DAT_14ca94c68 = L"DepthParameter";
    DAT_14ca94c92 = FUN_140850cc5();
    _DAT_14ca94c70 = FUN_140ec6960();
    _DAT_14ca94c80 = &LAB_14682652b;
    _DAT_14ca94c88 = 0x1000000e0;
    _DAT_14ca94c90 = 0;
    _DAT_14ca94c78 = DAT_14ca908b8;
    DAT_14ca908b8 = &DAT_14ca94c68;
    FUN_14613274c();
    FUN_1407e00cc(&DAT_14ca908a8);
  }
  return &DAT_14ca908a8;
}



// FUNCTION 14613274c FUN_14613274c body=133 status=ok
// SIG undefined FUN_14613274c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613274c(void)

{
  _DAT_14ca94c98 = L"BASE";
  DAT_14ca94cc2 = 4;
  FUN_140b35ae4();
  _DAT_14ca94ca8 = DAT_14ca908b8;
  _DAT_14ca94ca0 = &DAT_14ca8c6c8;
  _DAT_14ca94cb0 = &LAB_14682652b;
  DAT_14ca908b8 = &DAT_14ca94c98;
  DAT_14ca9090d = DAT_14ca9090d + '\x01';
  _DAT_14ca94cb8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca9090e = DAT_14ca9090e + '\x01';
  }
  return;
}



// FUNCTION 1461327d2 FUN_1461327d2 body=97 status=ok
// SIG undefined FUN_1461327d2(void)

void FUN_1461327d2(longlong param_1)

{
  longlong lVar1;
  
  FUN_1405f1eac();
  if (*(char *)(param_1 + 0x178) != '\x03') {
    lVar1 = FUN_1447210f0(param_1);
    if (lVar1 != 0) {
      lVar1 = FUN_140115352(lVar1);
      if (lVar1 != 0) {
        if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_1);
        }
        *(longlong *)(lVar1 + 0x180) = param_1;
      }
    }
  }
  FUN_146132834(param_1);
  return;
}



// FUNCTION 146132834 FUN_146132834 body=266 status=ok
// SIG undefined FUN_146132834(void)

void FUN_146132834(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x398) == 0) {
    uVar4 = FUN_1447210f0();
    local_48 = 0;
    local_40 = 0xaaad1010;
    local_38 = 0;
    local_58 = 1;
    FUN_14078bff4(&local_30,&local_48,param_1 + 0x390,uVar4);
    plVar1 = local_28;
    if ((undefined8 *)(param_1 + 0x398) != &local_30) {
      *(undefined8 *)(param_1 + 0x398) = local_30;
      local_30 = 0;
      plVar3 = *(longlong **)(param_1 + 0x3a0);
      if (local_28 != plVar3) {
        local_28 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x3a0) = plVar1;
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
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146132940 FUN_146132940 body=84 status=ok
// SIG undefined FUN_146132940(void)

void FUN_146132940(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_146132996(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146132996 FUN_146132996 body=97 status=ok
// SIG undefined FUN_146132996(void)

void FUN_146132996(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[8]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x2c]);
    return;
  }
  return;
}



// FUNCTION 1461329f8 FUN_1461329f8 body=117 status=ok
// SIG undefined FUN_1461329f8(void)

void FUN_1461329f8(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined1 *)((longlong)param_1 + 0x2043) = 1;
  uVar2 = (**(code **)(param_1[-1] + 0x18))(param_1 + -1);
  cVar1 = FUN_1403ae2fa(uVar2,1,0);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000146132a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))(param_1,0,1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146132a3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// FUNCTION 146132a6e FUN_146132a6e body=313 status=ok
// SIG undefined FUN_146132a6e(void)

void FUN_146132a6e(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  plVar5 = param_1 + -0xa3;
  if (plVar5 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar5 + 0x700))(plVar5);
    if (cVar2 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x2042) = 1;
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
      if (plVar3 != (longlong *)0x0) {
        cVar2 = (**(code **)(*param_1 + 0x40))(param_1);
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*param_1 + 0x48))(param_1,0);
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(*param_1 + 0x48))(param_1,1);
            if (cVar2 == '\0') {
              uVar8 = *(undefined4 *)((longlong)param_1 + 0x204c);
              fVar6 = (float)(**(code **)(*plVar3 + 0x10))(plVar3,0);
              fVar7 = (float)(**(code **)(*plVar3 + 0x58))(plVar3);
              uVar8 = FUN_14114c86e(param_1,fVar6 * fVar7,uVar8);
              *(undefined4 *)((longlong)param_1 + 0x204c) = uVar8;
            }
            FUN_14596b788(plVar5,1,0);
            if (param_1[-0x2b] != 0) {
              lVar4 = FUN_144a5dd5e();
              if ((((param_1[-0x2b] != 0) && (lVar4 != 0)) &&
                  (lVar1 = *(longlong *)(param_1[-0x2b] + 0x10), lVar1 != 0)) &&
                 ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
                  (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                   == lVar4 + 0x30)))) {
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146132bb0 FUN_146132bb0 body=132 status=ok
// SIG undefined FUN_146132bb0(void)

undefined8 FUN_146132bb0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + -8);
  uVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x10))(plVar4);
  cVar1 = FUN_1403ae2fa(uVar2,1,0);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (0 < *(int *)(lVar3 + 0xa8)) {
    plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (plVar4 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar4);
    }
    else if (plVar4 == (longlong *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*plVar4 + 0x840))(plVar4);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 146132c34 FUN_146132c34 body=371 status=ok
// SIG undefined FUN_146132c34(void)

void FUN_146132c34(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_146132da8(local_18,local_20,&local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146132da8 FUN_146132da8 body=357 status=ok
// SIG undefined FUN_146132da8(void)

void FUN_146132da8(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar5 = (longlong *)FUN_14114f501(param_2);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar9 = param_3[1];
  if (lVar9 == 0) {
    uVar7 = FUN_145c05732();
    lVar9 = FUN_14477b664(uVar7);
    param_3[1] = lVar9;
  }
  uVar8 = param_3[2];
  if (((uVar8 == 0) && (uVar8 = 0, lVar9 != 0)) && (*param_3 != 0)) {
    plVar5 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar3 == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
      uVar8 = FUN_144aff482(uVar7,param_3);
    }
    param_3[2] = uVar8;
  }
  if (*(int *)(lVar6 + 0x100) != *(int *)(lVar6 + 300)) {
    uVar4 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar9 = lVar6 + 0x130;
    if (*(longlong *)(lVar6 + 0x138) != 0) {
      lVar9 = *(longlong *)(lVar6 + 0x138);
    }
    iVar2 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar6 + 0x140) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4
                    );
    if (iVar2 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(lVar6 + 0xf8) + (longlong)iVar2 * 0x28);
        if (*puVar1 == uVar8) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (puVar1 + 1 == (ulonglong *)0x0) {
            return;
          }
          FUN_140457ffc(puVar1 + 1,param_1);
          return;
        }
        iVar2 = (int)puVar1[4];
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146132f0e FUN_146132f0e body=144 status=ok
// SIG undefined FUN_146132f0e(void)

void FUN_146132f0e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 0x10b6) = 0;
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_1447f69b6(lVar1 + 0x6078);
      if (*(char *)(param_1 + 0x178) != '\x03') {
        iVar2 = FUN_14042831e(lVar1);
        iVar3 = FUN_1403ae46b();
        if (iVar2 == iVar3) {
          uVar4 = FUN_146229be8(lVar1);
          FUN_141020220(lVar1,uVar4);
        }
      }
    }
  }
  FUN_1415e157e(param_1,param_2);
  return;
}



// FUNCTION 146132f9e FUN_146132f9e body=287 status=ok
// SIG undefined FUN_146132f9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146132f9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dea38) {
    FUN_144b3d300(&DAT_14c9dea38);
    if (DAT_14c9dea38 == -1) {
      FUN_1461330be();
      FUN_140db5666(&DAT_14c9de990,2,&DAT_14c9de928,L"FRenderAmbientOcclusionWithLiveShadingCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesAmbientOcclusionPipeline.usf"
                    ,L"RenderAmbientOcclusionWithLiveShadingCS",5,4,FUN_14719af22,FUN_14719aefa,
                    &LAB_142c98b56,&LAB_14719aef6,&LAB_14712ac0c,&LAB_14712ac08,0x110,0);
      _DAT_14c9de990 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142c98baa);
      _Init_thread_footer(&DAT_14c9dea38);
    }
  }
  return &DAT_14c9de990;
}



// FUNCTION 1461330be FUN_1461330be body=320 status=ok
// SIG undefined FUN_1461330be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461330be(void)

{
  if ((DAT_14c9de98f & 2) == 0) {
    DAT_14c9de98f = DAT_14c9de98f | 2;
    _DAT_14c9de930 = L"FRenderAmbientOcclusionWithLiveShadingCS";
    _DAT_14c9de948 = FUN_146826540;
    _DAT_14c9de950 = FUN_146825d77;
    _DAT_14c9de958 = FUN_146825fd6;
    _DAT_14c9de960 = FUN_1407e02ea;
    _DAT_14c9de968 = FUN_146826273;
    _DAT_14c9de940 = FUN_14719aebc;
    _DAT_14c9de980 = 0xffffffff00000110;
    _DAT_14c9de988 = 8;
    DAT_14c9de98c = 0;
    _DAT_14c9de970 = &LAB_14719aef2;
    _DAT_14c9e0880 = L"ShaderLooseBindings";
    DAT_14c9e08aa = FUN_140850cc5();
    FUN_14601a66c();
    _DAT_14c9e0888 = &DAT_14c9de668;
    _DAT_14c9e0898 = &LAB_14682652b;
    _DAT_14c9e08a0 = &DAT_100000108;
    _DAT_14c9e08a8 = 0;
    _DAT_14c9e0890 = DAT_14c9de938;
    DAT_14c9de938 = &DAT_14c9e0880;
    FUN_1461331fe();
    FUN_1407e00cc(&DAT_14c9de928);
    return;
  }
  return;
}



// FUNCTION 1461331fe FUN_1461331fe body=123 status=ok
// SIG undefined FUN_1461331fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461331fe(void)

{
  _DAT_14c9e1930 = L"BASE";
  DAT_14c9e195a = 4;
  _DAT_14c9e1938 = FUN_141092e92();
  _DAT_14c9e1940 = DAT_14c9de938;
  _DAT_14c9e1948 = &LAB_14682652b;
  DAT_14c9de938 = &DAT_14c9e1930;
  DAT_14c9de98d = DAT_14c9de98d + '\x01';
  _DAT_14c9e1950 = 0x100000000;
  if (*(char *)(_DAT_14c9e1938 + 100) != '\0') {
    DAT_14c9de98e = DAT_14c9de98e + '\x01';
  }
  return;
}



// FUNCTION 14613327a FUN_14613327a body=287 status=ok
// SIG undefined FUN_14613327a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613327a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9df478) {
    FUN_144b3d300(&DAT_14c9df478);
    if (DAT_14c9df478 == -1) {
      FUN_14613339a();
      FUN_140db5666(&DAT_14c9df3d0,2,&DAT_14c9df368,
                    L"FRenderSingleScatteringWithLiveShadingDirectCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesLiveShadingPipeline.usf"
                    ,L"RenderSingleScatteringWithLiveShadingCS",5,0x240,FUN_14719c374,FUN_14719c34c,
                    &LAB_144b10e74,&LAB_14719c348,&LAB_14712ac0c,&LAB_14712ac08,0x130,0);
      _DAT_14c9df3d0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142c9b914);
      _Init_thread_footer(&DAT_14c9df478);
    }
  }
  return &DAT_14c9df3d0;
}



// FUNCTION 14613339a FUN_14613339a body=320 status=ok
// SIG undefined FUN_14613339a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613339a(void)

{
  if ((DAT_14c9df3cf & 2) == 0) {
    DAT_14c9df3cf = DAT_14c9df3cf | 2;
    _DAT_14c9df370 = L"FRenderSingleScatteringWithLiveShadingDirectCS";
    _DAT_14c9df388 = FUN_146826540;
    _DAT_14c9df390 = FUN_146825d77;
    _DAT_14c9df398 = FUN_146825fd6;
    _DAT_14c9df3a0 = FUN_1407e02ea;
    _DAT_14c9df3a8 = FUN_146826273;
    _DAT_14c9df380 = FUN_14719c30e;
    _DAT_14c9df3c0 = 0xffffffff00000130;
    _DAT_14c9df3c8 = 8;
    DAT_14c9df3cc = 0;
    _DAT_14c9df3b0 = &LAB_14719c344;
    _DAT_14c9e1b38 = L"ShaderLooseBindings";
    DAT_14c9e1b62 = FUN_140850cc5();
    FUN_145dae884();
    _DAT_14c9e1b40 = &DAT_14c9df1d0;
    _DAT_14c9e1b50 = &LAB_14682652b;
    _DAT_14c9e1b58 = &DAT_100000108;
    _DAT_14c9e1b60 = 0;
    _DAT_14c9e1b48 = DAT_14c9df378;
    DAT_14c9df378 = &DAT_14c9e1b38;
    FUN_1461334da();
    FUN_1407e00cc(&DAT_14c9df368);
    return;
  }
  return;
}



// FUNCTION 1461334da FUN_1461334da body=123 status=ok
// SIG undefined FUN_1461334da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461334da(void)

{
  _DAT_14c9e1b68 = L"BASE";
  DAT_14c9e1b92 = 4;
  _DAT_14c9e1b70 = FUN_141092e92();
  _DAT_14c9e1b78 = DAT_14c9df378;
  _DAT_14c9e1b80 = &LAB_14682652b;
  DAT_14c9df378 = &DAT_14c9e1b68;
  DAT_14c9df3cd = DAT_14c9df3cd + '\x01';
  _DAT_14c9e1b88 = 0x100000000;
  if (*(char *)(_DAT_14c9e1b70 + 100) != '\0') {
    DAT_14c9df3ce = DAT_14c9df3ce + '\x01';
  }
  return;
}



// FUNCTION 146133556 FUN_146133556 body=284 status=ok
// SIG undefined FUN_146133556(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146133556(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca54148) {
    FUN_144b3d300(&DAT_14ca54148);
    if (DAT_14ca54148 == -1) {
      FUN_146133672();
      FUN_140db5666(&DAT_14ca540a0,0,&DAT_14ca54038,
                    L"TDirectionalPercentageCloserShadowProjectionPS5false",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f3e8a,
                    FUN_1472f3e2c,&LAB_1458f7c9a,&LAB_1472f3e28,&LAB_14712ac0c,&LAB_14712ac08,0x150,
                    0);
      _DAT_14ca540a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049d36);
      _Init_thread_footer(&DAT_14ca54148);
    }
  }
  return &DAT_14ca540a0;
}



// FUNCTION 146133672 FUN_146133672 body=313 status=ok
// SIG undefined FUN_146133672(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146133672(void)

{
  if ((DAT_14ca5409f & 2) == 0) {
    DAT_14ca5409f = DAT_14ca5409f | 2;
    _DAT_14ca54040 = L"TDirectionalPercentageCloserShadowProjectionPS5false";
    _DAT_14ca54058 = FUN_146826540;
    _DAT_14ca54060 = FUN_146825d77;
    _DAT_14ca54068 = FUN_146825fd6;
    _DAT_14ca54070 = FUN_1407e02ea;
    _DAT_14ca54078 = FUN_146826273;
    _DAT_14ca54050 = FUN_1472f3df8;
    _DAT_14ca54090 = 0xffffffff00000150;
    _DAT_14ca54098 = 8;
    DAT_14ca5409c = 0;
    _DAT_14ca54080 = &LAB_1472f3e24;
    _DAT_14ca5ad50 = L"PCSSParameters";
    DAT_14ca5ad7a = FUN_140850cc5();
    _DAT_14ca5ad58 = FUN_140ec6960();
    _DAT_14ca5ad68 = &LAB_14682652b;
    _DAT_14ca5ad70 = 0x100000148;
    _DAT_14ca5ad78 = 0;
    _DAT_14ca5ad60 = DAT_14ca54048;
    DAT_14ca54048 = &DAT_14ca5ad50;
    FUN_1461337ac();
    FUN_1407e00cc(&DAT_14ca54038);
    return;
  }
  return;
}



// FUNCTION 1461337ac FUN_1461337ac body=133 status=ok
// SIG undefined FUN_1461337ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461337ac(void)

{
  _DAT_14ca5ad80 = L"BASE";
  DAT_14ca5adaa = 4;
  FUN_145cee52c();
  _DAT_14ca5ad90 = DAT_14ca54048;
  _DAT_14ca5ad88 = &DAT_14ca506f8;
  _DAT_14ca5ad98 = &LAB_14682652b;
  DAT_14ca54048 = &DAT_14ca5ad80;
  DAT_14ca5409d = DAT_14ca5409d + '\x01';
  _DAT_14ca5ada0 = 0x100000000;
  if (DAT_14ca5075c != '\0') {
    DAT_14ca5409e = DAT_14ca5409e + '\x01';
  }
  return;
}



// FUNCTION 146133832 FUN_146133832 body=284 status=ok
// SIG undefined FUN_146133832(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146133832(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca54270) {
    FUN_144b3d300(&DAT_14ca54270);
    if (DAT_14ca54270 == -1) {
      FUN_14613394e();
      FUN_140db5666(&DAT_14ca541c8,0,&DAT_14ca54160,
                    L"TDirectionalPercentageCloserShadowProjectionPS5true",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f3fec,
                    FUN_1472f3f8e,&LAB_1458f7d06,&LAB_1472f3f8a,&LAB_14712ac0c,&LAB_14712ac08,0x150,
                    0);
      _DAT_14ca541c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049d42);
      _Init_thread_footer(&DAT_14ca54270);
    }
  }
  return &DAT_14ca541c8;
}



// FUNCTION 14613394e FUN_14613394e body=313 status=ok
// SIG undefined FUN_14613394e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613394e(void)

{
  if ((DAT_14ca541c7 & 2) == 0) {
    DAT_14ca541c7 = DAT_14ca541c7 | 2;
    _DAT_14ca54168 = L"TDirectionalPercentageCloserShadowProjectionPS5true";
    _DAT_14ca54180 = FUN_146826540;
    _DAT_14ca54188 = FUN_146825d77;
    _DAT_14ca54190 = FUN_146825fd6;
    _DAT_14ca54198 = FUN_1407e02ea;
    _DAT_14ca541a0 = FUN_146826273;
    _DAT_14ca54178 = FUN_1472f3f5a;
    _DAT_14ca541b8 = 0xffffffff00000150;
    _DAT_14ca541c0 = 8;
    DAT_14ca541c4 = 0;
    _DAT_14ca541a8 = &LAB_1472f3f86;
    _DAT_14ca5adb0 = L"PCSSParameters";
    DAT_14ca5adda = FUN_140850cc5();
    _DAT_14ca5adb8 = FUN_140ec6960();
    _DAT_14ca5adc8 = &LAB_14682652b;
    _DAT_14ca5add0 = 0x100000148;
    _DAT_14ca5add8 = 0;
    _DAT_14ca5adc0 = DAT_14ca54170;
    DAT_14ca54170 = &DAT_14ca5adb0;
    FUN_146133a88();
    FUN_1407e00cc(&DAT_14ca54160);
    return;
  }
  return;
}



// FUNCTION 146133a88 FUN_146133a88 body=133 status=ok
// SIG undefined FUN_146133a88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146133a88(void)

{
  _DAT_14ca5ade0 = L"BASE";
  DAT_14ca5ae0a = 4;
  FUN_145d4a72a();
  _DAT_14ca5adf0 = DAT_14ca54170;
  _DAT_14ca5ade8 = &DAT_14ca51288;
  _DAT_14ca5adf8 = &LAB_14682652b;
  DAT_14ca54170 = &DAT_14ca5ade0;
  DAT_14ca541c5 = DAT_14ca541c5 + '\x01';
  _DAT_14ca5ae00 = 0x100000000;
  if (DAT_14ca512ec != '\0') {
    DAT_14ca541c6 = DAT_14ca541c6 + '\x01';
  }
  return;
}



// FUNCTION 146133b0e FUN_146133b0e body=284 status=ok
// SIG undefined FUN_146133b0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146133b0e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca54398) {
    FUN_144b3d300(&DAT_14ca54398);
    if (DAT_14ca54398 == -1) {
      FUN_146133c2a();
      FUN_140db5666(&DAT_14ca542f0,0,&DAT_14ca54288,L"TSpotPercentageCloserShadowProjectionPS5false"
                    ,L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f419c,
                    FUN_1472f413e,&LAB_1472f40f0,&LAB_1472f40ec,&LAB_14712ac0c,&LAB_14712ac08,0x150,
                    0);
      _DAT_14ca542f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049d4e);
      _Init_thread_footer(&DAT_14ca54398);
    }
  }
  return &DAT_14ca542f0;
}



// FUNCTION 146133c2a FUN_146133c2a body=313 status=ok
// SIG undefined FUN_146133c2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146133c2a(void)

{
  if ((DAT_14ca542ef & 2) == 0) {
    DAT_14ca542ef = DAT_14ca542ef | 2;
    _DAT_14ca54290 = L"TSpotPercentageCloserShadowProjectionPS5false";
    _DAT_14ca542a8 = FUN_146826540;
    _DAT_14ca542b0 = FUN_146825d77;
    _DAT_14ca542b8 = FUN_146825fd6;
    _DAT_14ca542c0 = FUN_1407e02ea;
    _DAT_14ca542c8 = FUN_146826273;
    _DAT_14ca542a0 = FUN_1472f40bc;
    _DAT_14ca542e0 = 0xffffffff00000150;
    _DAT_14ca542e8 = 8;
    DAT_14ca542ec = 0;
    _DAT_14ca542d0 = &LAB_1472f40e8;
    _DAT_14ca5ae10 = L"PCSSParameters";
    DAT_14ca5ae3a = FUN_140850cc5();
    _DAT_14ca5ae18 = FUN_140ec6960();
    _DAT_14ca5ae28 = &LAB_14682652b;
    _DAT_14ca5ae30 = 0x100000148;
    _DAT_14ca5ae38 = 0;
    _DAT_14ca5ae20 = DAT_14ca54298;
    DAT_14ca54298 = &DAT_14ca5ae10;
    FUN_146133d64();
    FUN_1407e00cc(&DAT_14ca54288);
    return;
  }
  return;
}



// FUNCTION 146133d64 FUN_146133d64 body=133 status=ok
// SIG undefined FUN_146133d64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146133d64(void)

{
  _DAT_14ca5ae40 = L"BASE";
  DAT_14ca5ae6a = 4;
  FUN_145cee52c();
  _DAT_14ca5ae50 = DAT_14ca54298;
  _DAT_14ca5ae48 = &DAT_14ca506f8;
  _DAT_14ca5ae58 = &LAB_14682652b;
  DAT_14ca54298 = &DAT_14ca5ae40;
  DAT_14ca542ed = DAT_14ca542ed + '\x01';
  _DAT_14ca5ae60 = 0x100000000;
  if (DAT_14ca5075c != '\0') {
    DAT_14ca542ee = DAT_14ca542ee + '\x01';
  }
  return;
}



// FUNCTION 146133dea FUN_146133dea body=284 status=ok
// SIG undefined FUN_146133dea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146133dea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca544c0) {
    FUN_144b3d300(&DAT_14ca544c0);
    if (DAT_14ca544c0 == -1) {
      FUN_146133f06();
      FUN_140db5666(&DAT_14ca54418,0,&DAT_14ca543b0,L"TSpotPercentageCloserShadowProjectionPS5true",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f434c,
                    FUN_1472f42ee,&LAB_1472f42a0,&LAB_1472f429c,&LAB_14712ac0c,&LAB_14712ac08,0x150,
                    0);
      _DAT_14ca54418 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049d5a);
      _Init_thread_footer(&DAT_14ca544c0);
    }
  }
  return &DAT_14ca54418;
}



// FUNCTION 146133f06 FUN_146133f06 body=313 status=ok
// SIG undefined FUN_146133f06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146133f06(void)

{
  if ((DAT_14ca54417 & 2) == 0) {
    DAT_14ca54417 = DAT_14ca54417 | 2;
    _DAT_14ca543b8 = L"TSpotPercentageCloserShadowProjectionPS5true";
    _DAT_14ca543d0 = FUN_146826540;
    _DAT_14ca543d8 = FUN_146825d77;
    _DAT_14ca543e0 = FUN_146825fd6;
    _DAT_14ca543e8 = FUN_1407e02ea;
    _DAT_14ca543f0 = FUN_146826273;
    _DAT_14ca543c8 = FUN_1472f426c;
    _DAT_14ca54408 = 0xffffffff00000150;
    _DAT_14ca54410 = 8;
    DAT_14ca54414 = 0;
    _DAT_14ca543f8 = &LAB_1472f4298;
    _DAT_14ca5ae70 = L"PCSSParameters";
    DAT_14ca5ae9a = FUN_140850cc5();
    _DAT_14ca5ae78 = FUN_140ec6960();
    _DAT_14ca5ae88 = &LAB_14682652b;
    _DAT_14ca5ae90 = 0x100000148;
    _DAT_14ca5ae98 = 0;
    _DAT_14ca5ae80 = DAT_14ca543c0;
    DAT_14ca543c0 = &DAT_14ca5ae70;
    FUN_146134040();
    FUN_1407e00cc(&DAT_14ca543b0);
    return;
  }
  return;
}



// FUNCTION 146134040 FUN_146134040 body=133 status=ok
// SIG undefined FUN_146134040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146134040(void)

{
  _DAT_14ca5aea0 = L"BASE";
  DAT_14ca5aeca = 4;
  FUN_145d4a72a();
  _DAT_14ca5aeb0 = DAT_14ca543c0;
  _DAT_14ca5aea8 = &DAT_14ca51288;
  _DAT_14ca5aeb8 = &LAB_14682652b;
  DAT_14ca543c0 = &DAT_14ca5aea0;
  DAT_14ca54415 = DAT_14ca54415 + '\x01';
  _DAT_14ca5aec0 = 0x100000000;
  if (DAT_14ca512ec != '\0') {
    DAT_14ca54416 = DAT_14ca54416 + '\x01';
  }
  return;
}



// FUNCTION 1461340c6 FUN_1461340c6 body=284 status=ok
// SIG undefined FUN_1461340c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461340c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86060) {
    FUN_144b3d300(&DAT_14ca86060);
    if (DAT_14ca86060 == -1) {
      FUN_1461341e2();
      FUN_140db5666(&DAT_14ca85fb8,0,&DAT_14ca85f50,L"FClearReplacementVS_Depth",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearVS",0,1,FUN_147415faa,
                    FUN_147415f82,&LAB_147415f7e,&LAB_147415f7a,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca85fb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e27);
      _Init_thread_footer(&DAT_14ca86060);
    }
  }
  return &DAT_14ca85fb8;
}



// FUNCTION 1461341e2 FUN_1461341e2 body=313 status=ok
// SIG undefined FUN_1461341e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461341e2(void)

{
  if ((DAT_14ca85fb7 & 2) == 0) {
    DAT_14ca85fb7 = DAT_14ca85fb7 | 2;
    _DAT_14ca85f58 = L"FClearReplacementVS_Depth";
    _DAT_14ca85f70 = FUN_146826540;
    _DAT_14ca85f78 = FUN_146825d77;
    _DAT_14ca85f80 = FUN_146825fd6;
    _DAT_14ca85f88 = FUN_1407e02ea;
    _DAT_14ca85f90 = FUN_146826273;
    _DAT_14ca85f68 = FUN_147415f4a;
    _DAT_14ca85fa8 = 0xffffffff00000100;
    _DAT_14ca85fb0 = 8;
    DAT_14ca85fb4 = 0;
    _DAT_14ca85f98 = &LAB_147415f76;
    _DAT_14ca921f8 = L"DepthParam";
    DAT_14ca92222 = FUN_140850cc5();
    _DAT_14ca92200 = FUN_140ec6960();
    _DAT_14ca92210 = &LAB_14682652b;
    _DAT_14ca92218 = 0x1000000f8;
    _DAT_14ca92220 = 0;
    _DAT_14ca92208 = DAT_14ca85f60;
    DAT_14ca85f60 = &DAT_14ca921f8;
    FUN_14613431c();
    FUN_1407e00cc(&DAT_14ca85f50);
    return;
  }
  return;
}



// FUNCTION 14613431c FUN_14613431c body=133 status=ok
// SIG undefined FUN_14613431c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613431c(void)

{
  _DAT_14ca92228 = L"BASE";
  DAT_14ca92252 = 4;
  FUN_145ddfa10();
  _DAT_14ca92238 = DAT_14ca85f60;
  _DAT_14ca92230 = &DAT_14ca91f48;
  _DAT_14ca92240 = &LAB_14682652b;
  DAT_14ca85f60 = &DAT_14ca92228;
  DAT_14ca85fb5 = DAT_14ca85fb5 + '\x01';
  _DAT_14ca92248 = 0x100000000;
  if (DAT_14ca91fac != '\0') {
    DAT_14ca85fb6 = DAT_14ca85fb6 + '\x01';
  }
  return;
}



// FUNCTION 1461343a2 FUN_1461343a2 body=284 status=ok
// SIG undefined FUN_1461343a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461343a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86ac8) {
    FUN_144b3d300(&DAT_14ca86ac8);
    if (DAT_14ca86ac8 == -1) {
      FUN_1461344be();
      FUN_140db5666(&DAT_14ca86a20,0,&DAT_14ca869b8,L"FClearReplacementCS_LargeBuffer_Uint_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147416a2a,
                    FUN_1474169d2,&LAB_1474169ce,&LAB_1474169ca,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca86a20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e93);
      _Init_thread_footer(&DAT_14ca86ac8);
    }
  }
  return &DAT_14ca86a20;
}



// FUNCTION 1461344be FUN_1461344be body=313 status=ok
// SIG undefined FUN_1461344be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461344be(void)

{
  if ((DAT_14ca86a1f & 2) == 0) {
    DAT_14ca86a1f = DAT_14ca86a1f | 2;
    _DAT_14ca869c0 = L"FClearReplacementCS_LargeBuffer_Uint_Bounds";
    _DAT_14ca869d8 = FUN_146826540;
    _DAT_14ca869e0 = FUN_146825d77;
    _DAT_14ca869e8 = FUN_146825fd6;
    _DAT_14ca869f0 = FUN_1407e02ea;
    _DAT_14ca869f8 = FUN_146826273;
    _DAT_14ca869d0 = FUN_14741699a;
    _DAT_14ca86a10 = 0xffffffff00000100;
    _DAT_14ca86a18 = 8;
    DAT_14ca86a1c = 0;
    _DAT_14ca86a00 = &LAB_1474169c6;
    _DAT_14ca92bb8 = L"ClearResourceParam";
    DAT_14ca92be2 = FUN_140850cc5();
    _DAT_14ca92bc0 = FUN_140fb78d0();
    _DAT_14ca92bd0 = &LAB_14682652b;
    _DAT_14ca92bd8 = 0x1000000f8;
    _DAT_14ca92be0 = 0;
    _DAT_14ca92bc8 = DAT_14ca869c8;
    DAT_14ca869c8 = &DAT_14ca92bb8;
    FUN_1461345f8();
    FUN_1407e00cc(&DAT_14ca869b8);
    return;
  }
  return;
}



// FUNCTION 1461345f8 FUN_1461345f8 body=133 status=ok
// SIG undefined FUN_1461345f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461345f8(void)

{
  _DAT_14ca92be8 = L"BASE";
  DAT_14ca92c12 = 4;
  FUN_145ddff92();
  _DAT_14ca92bf8 = DAT_14ca869c8;
  _DAT_14ca92bf0 = &DAT_14ca92470;
  _DAT_14ca92c00 = &LAB_14682652b;
  DAT_14ca869c8 = &DAT_14ca92be8;
  DAT_14ca86a1d = DAT_14ca86a1d + '\x01';
  _DAT_14ca92c08 = 0x100000000;
  if (DAT_14ca924d4 != '\0') {
    DAT_14ca86a1e = DAT_14ca86a1e + '\x01';
  }
  return;
}



// FUNCTION 14613467e FUN_14613467e body=284 status=ok
// SIG undefined FUN_14613467e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613467e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86bf0) {
    FUN_144b3d300(&DAT_14ca86bf0);
    if (DAT_14ca86bf0 == -1) {
      FUN_14613479a();
      FUN_140db5666(&DAT_14ca86b48,0,&DAT_14ca86ae0,L"FClearReplacementCS_LargeBuffer_Uint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147416b5c,
                    FUN_147416b04,&LAB_147416b00,&LAB_147416afc,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca86b48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e9f);
      _Init_thread_footer(&DAT_14ca86bf0);
    }
  }
  return &DAT_14ca86b48;
}



// FUNCTION 14613479a FUN_14613479a body=313 status=ok
// SIG undefined FUN_14613479a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613479a(void)

{
  if ((DAT_14ca86b47 & 2) == 0) {
    DAT_14ca86b47 = DAT_14ca86b47 | 2;
    _DAT_14ca86ae8 = L"FClearReplacementCS_LargeBuffer_Uint4_Bounds";
    _DAT_14ca86b00 = FUN_146826540;
    _DAT_14ca86b08 = FUN_146825d77;
    _DAT_14ca86b10 = FUN_146825fd6;
    _DAT_14ca86b18 = FUN_1407e02ea;
    _DAT_14ca86b20 = FUN_146826273;
    _DAT_14ca86af8 = FUN_147416acc;
    _DAT_14ca86b38 = 0xffffffff00000100;
    _DAT_14ca86b40 = 8;
    DAT_14ca86b44 = 0;
    _DAT_14ca86b28 = &LAB_147416af8;
    _DAT_14ca92c18 = L"ClearResourceParam";
    DAT_14ca92c42 = FUN_140850cc5();
    _DAT_14ca92c20 = FUN_140fb78d0();
    _DAT_14ca92c30 = &LAB_14682652b;
    _DAT_14ca92c38 = 0x1000000f8;
    _DAT_14ca92c40 = 0;
    _DAT_14ca92c28 = DAT_14ca86af0;
    DAT_14ca86af0 = &DAT_14ca92c18;
    FUN_1461348d4();
    FUN_1407e00cc(&DAT_14ca86ae0);
  }
  return &DAT_14ca86ae0;
}



// FUNCTION 1461348d4 FUN_1461348d4 body=133 status=ok
// SIG undefined FUN_1461348d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461348d4(void)

{
  _DAT_14ca92c48 = L"BASE";
  DAT_14ca92c72 = 4;
  FUN_145cc9294();
  _DAT_14ca92c58 = DAT_14ca86af0;
  _DAT_14ca92c50 = &DAT_14ca925f8;
  _DAT_14ca92c60 = &LAB_14682652b;
  DAT_14ca86af0 = &DAT_14ca92c48;
  DAT_14ca86b45 = DAT_14ca86b45 + '\x01';
  _DAT_14ca92c68 = 0x100000000;
  if (DAT_14ca9265c != '\0') {
    DAT_14ca86b46 = DAT_14ca86b46 + '\x01';
  }
  return;
}



// FUNCTION 14613495a FUN_14613495a body=284 status=ok
// SIG undefined FUN_14613495a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613495a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86d18) {
    FUN_144b3d300(&DAT_14ca86d18);
    if (DAT_14ca86d18 == -1) {
      FUN_146134a76();
      FUN_140db5666(&DAT_14ca86c70,0,&DAT_14ca86c08,L"FClearReplacementCS_LargeBuffer_Uint4",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147416c5e,
                    FUN_147416c36,&LAB_147416c32,&LAB_147416c2e,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca86c70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1eab);
      _Init_thread_footer(&DAT_14ca86d18);
    }
  }
  return &DAT_14ca86c70;
}



// FUNCTION 146134a76 FUN_146134a76 body=313 status=ok
// SIG undefined FUN_146134a76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146134a76(void)

{
  if ((DAT_14ca86c6f & 2) == 0) {
    DAT_14ca86c6f = DAT_14ca86c6f | 2;
    _DAT_14ca86c10 = L"FClearReplacementCS_LargeBuffer_Uint4";
    _DAT_14ca86c28 = FUN_146826540;
    _DAT_14ca86c30 = FUN_146825d77;
    _DAT_14ca86c38 = FUN_146825fd6;
    _DAT_14ca86c40 = FUN_1407e02ea;
    _DAT_14ca86c48 = FUN_146826273;
    _DAT_14ca86c20 = FUN_147416bfe;
    _DAT_14ca86c60 = 0xffffffff00000100;
    _DAT_14ca86c68 = 8;
    DAT_14ca86c6c = 0;
    _DAT_14ca86c50 = &LAB_147416c2a;
    _DAT_14ca92c78 = L"ClearResourceParam";
    DAT_14ca92ca2 = FUN_140850cc5();
    _DAT_14ca92c80 = FUN_140fb78d0();
    _DAT_14ca92c90 = &LAB_14682652b;
    _DAT_14ca92c98 = 0x1000000f8;
    _DAT_14ca92ca0 = 0;
    _DAT_14ca92c88 = DAT_14ca86c18;
    DAT_14ca86c18 = &DAT_14ca92c78;
    FUN_146134bb0();
    FUN_1407e00cc(&DAT_14ca86c08);
    return;
  }
  return;
}



// FUNCTION 146134bb0 FUN_146134bb0 body=133 status=ok
// SIG undefined FUN_146134bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146134bb0(void)

{
  _DAT_14ca92ca8 = L"BASE";
  DAT_14ca92cd2 = 4;
  FUN_145cca754();
  _DAT_14ca92cb8 = DAT_14ca86c18;
  _DAT_14ca92cb0 = &DAT_14ca92780;
  _DAT_14ca92cc0 = &LAB_14682652b;
  DAT_14ca86c18 = &DAT_14ca92ca8;
  DAT_14ca86c6d = DAT_14ca86c6d + '\x01';
  _DAT_14ca92cc8 = 0x100000000;
  if (DAT_14ca927e4 != '\0') {
    DAT_14ca86c6e = DAT_14ca86c6e + '\x01';
  }
  return;
}



// FUNCTION 146134c36 FUN_146134c36 body=284 status=ok
// SIG undefined FUN_146134c36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146134c36(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86e40) {
    FUN_144b3d300(&DAT_14ca86e40);
    if (DAT_14ca86e40 == -1) {
      FUN_146134d52();
      FUN_140db5666(&DAT_14ca86d98,0,&DAT_14ca86d30,L"FClearReplacementCS_LargeBuffer_Float_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147416d90,
                    FUN_147416d38,&LAB_147416d34,&LAB_147416d30,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca86d98 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1eb7);
      _Init_thread_footer(&DAT_14ca86e40);
    }
  }
  return &DAT_14ca86d98;
}



// FUNCTION 146134d52 FUN_146134d52 body=313 status=ok
// SIG undefined FUN_146134d52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146134d52(void)

{
  if ((DAT_14ca86d97 & 2) == 0) {
    DAT_14ca86d97 = DAT_14ca86d97 | 2;
    _DAT_14ca86d38 = L"FClearReplacementCS_LargeBuffer_Float_Bounds";
    _DAT_14ca86d50 = FUN_146826540;
    _DAT_14ca86d58 = FUN_146825d77;
    _DAT_14ca86d60 = FUN_146825fd6;
    _DAT_14ca86d68 = FUN_1407e02ea;
    _DAT_14ca86d70 = FUN_146826273;
    _DAT_14ca86d48 = FUN_147416d00;
    _DAT_14ca86d88 = 0xffffffff00000100;
    _DAT_14ca86d90 = 8;
    DAT_14ca86d94 = 0;
    _DAT_14ca86d78 = &LAB_147416d2c;
    _DAT_14ca92cd8 = L"ClearResourceParam";
    DAT_14ca92d02 = FUN_140850cc5();
    _DAT_14ca92ce0 = FUN_140fb78d0();
    _DAT_14ca92cf0 = &LAB_14682652b;
    _DAT_14ca92cf8 = 0x1000000f8;
    _DAT_14ca92d00 = 0;
    _DAT_14ca92ce8 = DAT_14ca86d40;
    DAT_14ca86d40 = &DAT_14ca92cd8;
    FUN_146134e8c();
    FUN_1407e00cc(&DAT_14ca86d30);
    return;
  }
  return;
}



// FUNCTION 146134e8c FUN_146134e8c body=133 status=ok
// SIG undefined FUN_146134e8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146134e8c(void)

{
  _DAT_14ca92d08 = L"BASE";
  DAT_14ca92d32 = 4;
  FUN_145de0514();
  _DAT_14ca92d18 = DAT_14ca86d40;
  _DAT_14ca92d10 = &DAT_14ca92908;
  _DAT_14ca92d20 = &LAB_14682652b;
  DAT_14ca86d40 = &DAT_14ca92d08;
  DAT_14ca86d95 = DAT_14ca86d95 + '\x01';
  _DAT_14ca92d28 = 0x100000000;
  if (DAT_14ca9296c != '\0') {
    DAT_14ca86d96 = DAT_14ca86d96 + '\x01';
  }
  return;
}



// FUNCTION 146134f12 FUN_146134f12 body=284 status=ok
// SIG undefined FUN_146134f12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146134f12(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86f68) {
    FUN_144b3d300(&DAT_14ca86f68);
    if (DAT_14ca86f68 == -1) {
      FUN_14613502e();
      FUN_140db5666(&DAT_14ca86ec0,0,&DAT_14ca86e58,L"FClearReplacementCS_LargeBuffer_Float4_Bounds"
                    ,L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147416ec2,
                    FUN_147416e6a,&LAB_147416e66,&LAB_147416e62,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca86ec0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1ec3);
      _Init_thread_footer(&DAT_14ca86f68);
    }
  }
  return &DAT_14ca86ec0;
}



// FUNCTION 14613502e FUN_14613502e body=313 status=ok
// SIG undefined FUN_14613502e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613502e(void)

{
  if ((DAT_14ca86ebf & 2) == 0) {
    DAT_14ca86ebf = DAT_14ca86ebf | 2;
    _DAT_14ca86e60 = L"FClearReplacementCS_LargeBuffer_Float4_Bounds";
    _DAT_14ca86e78 = FUN_146826540;
    _DAT_14ca86e80 = FUN_146825d77;
    _DAT_14ca86e88 = FUN_146825fd6;
    _DAT_14ca86e90 = FUN_1407e02ea;
    _DAT_14ca86e98 = FUN_146826273;
    _DAT_14ca86e70 = FUN_147416e32;
    _DAT_14ca86eb0 = 0xffffffff00000100;
    _DAT_14ca86eb8 = 8;
    DAT_14ca86ebc = 0;
    _DAT_14ca86ea0 = &LAB_147416e5e;
    _DAT_14ca92d38 = L"ClearResourceParam";
    DAT_14ca92d62 = FUN_140850cc5();
    _DAT_14ca92d40 = FUN_140fb78d0();
    _DAT_14ca92d50 = &LAB_14682652b;
    _DAT_14ca92d58 = 0x1000000f8;
    _DAT_14ca92d60 = 0;
    _DAT_14ca92d48 = DAT_14ca86e68;
    DAT_14ca86e68 = &DAT_14ca92d38;
    FUN_146135168();
    FUN_1407e00cc(&DAT_14ca86e58);
  }
  return &DAT_14ca86e58;
}



// FUNCTION 146135168 FUN_146135168 body=133 status=ok
// SIG undefined FUN_146135168(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146135168(void)

{
  _DAT_14ca92d68 = L"BASE";
  DAT_14ca92d92 = 4;
  FUN_145ccacd6();
  _DAT_14ca92d78 = DAT_14ca86e68;
  _DAT_14ca92d70 = &DAT_14ca92a90;
  _DAT_14ca92d80 = &LAB_14682652b;
  DAT_14ca86e68 = &DAT_14ca92d68;
  DAT_14ca86ebd = DAT_14ca86ebd + '\x01';
  _DAT_14ca92d88 = 0x100000000;
  if (DAT_14ca92af4 != '\0') {
    DAT_14ca86ebe = DAT_14ca86ebe + '\x01';
  }
  return;
}



// FUNCTION 1461351ee FUN_1461351ee body=284 status=ok
// SIG undefined FUN_1461351ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461351ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca87090) {
    FUN_144b3d300(&DAT_14ca87090);
    if (DAT_14ca87090 == -1) {
      FUN_14613530a();
      FUN_140db5666(&DAT_14ca86fe8,0,&DAT_14ca86f80,
                    L"FClearReplacementCS_StructuredBuffer_Uint_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147416ff4,
                    FUN_147416f9c,&LAB_147416f98,&LAB_147416f94,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca86fe8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1ecf);
      _Init_thread_footer(&DAT_14ca87090);
    }
  }
  return &DAT_14ca86fe8;
}



// FUNCTION 14613530a FUN_14613530a body=313 status=ok
// SIG undefined FUN_14613530a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613530a(void)

{
  if ((DAT_14ca86fe7 & 2) == 0) {
    DAT_14ca86fe7 = DAT_14ca86fe7 | 2;
    _DAT_14ca86f88 = L"FClearReplacementCS_StructuredBuffer_Uint_Bounds";
    _DAT_14ca86fa0 = FUN_146826540;
    _DAT_14ca86fa8 = FUN_146825d77;
    _DAT_14ca86fb0 = FUN_146825fd6;
    _DAT_14ca86fb8 = FUN_1407e02ea;
    _DAT_14ca86fc0 = FUN_146826273;
    _DAT_14ca86f98 = FUN_147416f64;
    _DAT_14ca86fd8 = 0xffffffff00000100;
    _DAT_14ca86fe0 = 8;
    DAT_14ca86fe4 = 0;
    _DAT_14ca86fc8 = &LAB_147416f90;
    _DAT_14ca92d98 = L"ClearResourceParam";
    DAT_14ca92dc2 = FUN_140850cc5();
    _DAT_14ca92da0 = FUN_140fb78d0();
    _DAT_14ca92db0 = &LAB_14682652b;
    _DAT_14ca92db8 = 0x1000000f8;
    _DAT_14ca92dc0 = 0;
    _DAT_14ca92da8 = DAT_14ca86f90;
    DAT_14ca86f90 = &DAT_14ca92d98;
    FUN_146135444();
    FUN_1407e00cc(&DAT_14ca86f80);
  }
  return &DAT_14ca86f80;
}



// FUNCTION 146135444 FUN_146135444 body=133 status=ok
// SIG undefined FUN_146135444(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146135444(void)

{
  _DAT_14ca92dc8 = L"BASE";
  DAT_14ca92df2 = 4;
  FUN_145ddff92();
  _DAT_14ca92dd8 = DAT_14ca86f90;
  _DAT_14ca92dd0 = &DAT_14ca92470;
  _DAT_14ca92de0 = &LAB_14682652b;
  DAT_14ca86f90 = &DAT_14ca92dc8;
  DAT_14ca86fe5 = DAT_14ca86fe5 + '\x01';
  _DAT_14ca92de8 = 0x100000000;
  if (DAT_14ca924d4 != '\0') {
    DAT_14ca86fe6 = DAT_14ca86fe6 + '\x01';
  }
  return;
}



// FUNCTION 1461354ca FUN_1461354ca body=284 status=ok
// SIG undefined FUN_1461354ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461354ca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca871b8) {
    FUN_144b3d300(&DAT_14ca871b8);
    if (DAT_14ca871b8 == -1) {
      FUN_1461355e6();
      FUN_140db5666(&DAT_14ca87110,0,&DAT_14ca870a8,
                    L"FClearReplacementCS_StructuredBuffer_Uint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147417126,
                    FUN_1474170ce,&LAB_1474170ca,&LAB_1474170c6,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87110 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1edb);
      _Init_thread_footer(&DAT_14ca871b8);
    }
  }
  return &DAT_14ca87110;
}



// FUNCTION 1461355e6 FUN_1461355e6 body=313 status=ok
// SIG undefined FUN_1461355e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461355e6(void)

{
  if ((DAT_14ca8710f & 2) == 0) {
    DAT_14ca8710f = DAT_14ca8710f | 2;
    _DAT_14ca870b0 = L"FClearReplacementCS_StructuredBuffer_Uint4_Bounds";
    _DAT_14ca870c8 = FUN_146826540;
    _DAT_14ca870d0 = FUN_146825d77;
    _DAT_14ca870d8 = FUN_146825fd6;
    _DAT_14ca870e0 = FUN_1407e02ea;
    _DAT_14ca870e8 = FUN_146826273;
    _DAT_14ca870c0 = FUN_147417096;
    _DAT_14ca87100 = 0xffffffff00000100;
    _DAT_14ca87108 = 8;
    DAT_14ca8710c = 0;
    _DAT_14ca870f0 = &LAB_1474170c2;
    _DAT_14ca92df8 = L"ClearResourceParam";
    DAT_14ca92e22 = FUN_140850cc5();
    _DAT_14ca92e00 = FUN_140fb78d0();
    _DAT_14ca92e10 = &LAB_14682652b;
    _DAT_14ca92e18 = 0x1000000f8;
    _DAT_14ca92e20 = 0;
    _DAT_14ca92e08 = DAT_14ca870b8;
    DAT_14ca870b8 = &DAT_14ca92df8;
    FUN_146135720();
    FUN_1407e00cc(&DAT_14ca870a8);
    return;
  }
  return;
}



// FUNCTION 146135720 FUN_146135720 body=133 status=ok
// SIG undefined FUN_146135720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146135720(void)

{
  _DAT_14ca92e28 = L"BASE";
  DAT_14ca92e52 = 4;
  FUN_145cc9294();
  _DAT_14ca92e38 = DAT_14ca870b8;
  _DAT_14ca92e30 = &DAT_14ca925f8;
  _DAT_14ca92e40 = &LAB_14682652b;
  DAT_14ca870b8 = &DAT_14ca92e28;
  DAT_14ca8710d = DAT_14ca8710d + '\x01';
  _DAT_14ca92e48 = 0x100000000;
  if (DAT_14ca9265c != '\0') {
    DAT_14ca8710e = DAT_14ca8710e + '\x01';
  }
  return;
}



// FUNCTION 1461357a6 FUN_1461357a6 body=284 status=ok
// SIG undefined FUN_1461357a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461357a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca872e0) {
    FUN_144b3d300(&DAT_14ca872e0);
    if (DAT_14ca872e0 == -1) {
      FUN_1461358c2();
      FUN_140db5666(&DAT_14ca87238,0,&DAT_14ca871d0,L"FClearReplacementCS_StructuredBuffer_Uint4",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147417228,
                    FUN_147417200,&LAB_1474171fc,&LAB_1474171f8,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87238 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1ee7);
      _Init_thread_footer(&DAT_14ca872e0);
    }
  }
  return &DAT_14ca87238;
}



// FUNCTION 1461358c2 FUN_1461358c2 body=313 status=ok
// SIG undefined FUN_1461358c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461358c2(void)

{
  if ((DAT_14ca87237 & 2) == 0) {
    DAT_14ca87237 = DAT_14ca87237 | 2;
    _DAT_14ca871d8 = L"FClearReplacementCS_StructuredBuffer_Uint4";
    _DAT_14ca871f0 = FUN_146826540;
    _DAT_14ca871f8 = FUN_146825d77;
    _DAT_14ca87200 = FUN_146825fd6;
    _DAT_14ca87208 = FUN_1407e02ea;
    _DAT_14ca87210 = FUN_146826273;
    _DAT_14ca871e8 = FUN_1474171c8;
    _DAT_14ca87228 = 0xffffffff00000100;
    _DAT_14ca87230 = 8;
    DAT_14ca87234 = 0;
    _DAT_14ca87218 = &LAB_1474171f4;
    _DAT_14ca92e58 = L"ClearResourceParam";
    DAT_14ca92e82 = FUN_140850cc5();
    _DAT_14ca92e60 = FUN_140fb78d0();
    _DAT_14ca92e70 = &LAB_14682652b;
    _DAT_14ca92e78 = 0x1000000f8;
    _DAT_14ca92e80 = 0;
    _DAT_14ca92e68 = DAT_14ca871e0;
    DAT_14ca871e0 = &DAT_14ca92e58;
    FUN_1461359fc();
    FUN_1407e00cc(&DAT_14ca871d0);
    return;
  }
  return;
}



// FUNCTION 1461359fc FUN_1461359fc body=133 status=ok
// SIG undefined FUN_1461359fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461359fc(void)

{
  _DAT_14ca92e88 = L"BASE";
  DAT_14ca92eb2 = 4;
  FUN_145cca754();
  _DAT_14ca92e98 = DAT_14ca871e0;
  _DAT_14ca92e90 = &DAT_14ca92780;
  _DAT_14ca92ea0 = &LAB_14682652b;
  DAT_14ca871e0 = &DAT_14ca92e88;
  DAT_14ca87235 = DAT_14ca87235 + '\x01';
  _DAT_14ca92ea8 = 0x100000000;
  if (DAT_14ca927e4 != '\0') {
    DAT_14ca87236 = DAT_14ca87236 + '\x01';
  }
  return;
}



// FUNCTION 146135a82 FUN_146135a82 body=284 status=ok
// SIG undefined FUN_146135a82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146135a82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca87408) {
    FUN_144b3d300(&DAT_14ca87408);
    if (DAT_14ca87408 == -1) {
      FUN_146135b9e();
      FUN_140db5666(&DAT_14ca87360,0,&DAT_14ca872f8,
                    L"FClearReplacementCS_StructuredBuffer_Float_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_14741735a,
                    FUN_147417302,&LAB_1474172fe,&LAB_1474172fa,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87360 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1ef3);
      _Init_thread_footer(&DAT_14ca87408);
    }
  }
  return &DAT_14ca87360;
}



// FUNCTION 146135b9e FUN_146135b9e body=313 status=ok
// SIG undefined FUN_146135b9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146135b9e(void)

{
  if ((DAT_14ca8735f & 2) == 0) {
    DAT_14ca8735f = DAT_14ca8735f | 2;
    _DAT_14ca87300 = L"FClearReplacementCS_StructuredBuffer_Float_Bounds";
    _DAT_14ca87318 = FUN_146826540;
    _DAT_14ca87320 = FUN_146825d77;
    _DAT_14ca87328 = FUN_146825fd6;
    _DAT_14ca87330 = FUN_1407e02ea;
    _DAT_14ca87338 = FUN_146826273;
    _DAT_14ca87310 = FUN_1474172ca;
    _DAT_14ca87350 = 0xffffffff00000100;
    _DAT_14ca87358 = 8;
    DAT_14ca8735c = 0;
    _DAT_14ca87340 = &LAB_1474172f6;
    _DAT_14ca92eb8 = L"ClearResourceParam";
    DAT_14ca92ee2 = FUN_140850cc5();
    _DAT_14ca92ec0 = FUN_140fb78d0();
    _DAT_14ca92ed0 = &LAB_14682652b;
    _DAT_14ca92ed8 = 0x1000000f8;
    _DAT_14ca92ee0 = 0;
    _DAT_14ca92ec8 = DAT_14ca87308;
    DAT_14ca87308 = &DAT_14ca92eb8;
    FUN_146135cd8();
    FUN_1407e00cc(&DAT_14ca872f8);
  }
  return &DAT_14ca872f8;
}



// FUNCTION 146135cd8 FUN_146135cd8 body=133 status=ok
// SIG undefined FUN_146135cd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146135cd8(void)

{
  _DAT_14ca92ee8 = L"BASE";
  DAT_14ca92f12 = 4;
  FUN_145de0514();
  _DAT_14ca92ef8 = DAT_14ca87308;
  _DAT_14ca92ef0 = &DAT_14ca92908;
  _DAT_14ca92f00 = &LAB_14682652b;
  DAT_14ca87308 = &DAT_14ca92ee8;
  DAT_14ca8735d = DAT_14ca8735d + '\x01';
  _DAT_14ca92f08 = 0x100000000;
  if (DAT_14ca9296c != '\0') {
    DAT_14ca8735e = DAT_14ca8735e + '\x01';
  }
  return;
}



// FUNCTION 146135d5e FUN_146135d5e body=284 status=ok
// SIG undefined FUN_146135d5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146135d5e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca87530) {
    FUN_144b3d300(&DAT_14ca87530);
    if (DAT_14ca87530 == -1) {
      FUN_146135e7a();
      FUN_140db5666(&DAT_14ca87488,0,&DAT_14ca87420,
                    L"FClearReplacementCS_StructuredBuffer_Float4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_14741748c,
                    FUN_147417434,&LAB_147417430,&LAB_14741742c,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87488 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1eff);
      _Init_thread_footer(&DAT_14ca87530);
    }
  }
  return &DAT_14ca87488;
}



// FUNCTION 146135e7a FUN_146135e7a body=313 status=ok
// SIG undefined FUN_146135e7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146135e7a(void)

{
  if ((DAT_14ca87487 & 2) == 0) {
    DAT_14ca87487 = DAT_14ca87487 | 2;
    _DAT_14ca87428 = L"FClearReplacementCS_StructuredBuffer_Float4_Bounds";
    _DAT_14ca87440 = FUN_146826540;
    _DAT_14ca87448 = FUN_146825d77;
    _DAT_14ca87450 = FUN_146825fd6;
    _DAT_14ca87458 = FUN_1407e02ea;
    _DAT_14ca87460 = FUN_146826273;
    _DAT_14ca87438 = FUN_1474173fc;
    _DAT_14ca87478 = 0xffffffff00000100;
    _DAT_14ca87480 = 8;
    DAT_14ca87484 = 0;
    _DAT_14ca87468 = &LAB_147417428;
    _DAT_14ca92f18 = L"ClearResourceParam";
    DAT_14ca92f42 = FUN_140850cc5();
    _DAT_14ca92f20 = FUN_140fb78d0();
    _DAT_14ca92f30 = &LAB_14682652b;
    _DAT_14ca92f38 = 0x1000000f8;
    _DAT_14ca92f40 = 0;
    _DAT_14ca92f28 = DAT_14ca87430;
    DAT_14ca87430 = &DAT_14ca92f18;
    FUN_146135fb4();
    FUN_1407e00cc(&DAT_14ca87420);
    return;
  }
  return;
}



// FUNCTION 146135fb4 FUN_146135fb4 body=133 status=ok
// SIG undefined FUN_146135fb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146135fb4(void)

{
  _DAT_14ca92f48 = L"BASE";
  DAT_14ca92f72 = 4;
  FUN_145ccacd6();
  _DAT_14ca92f58 = DAT_14ca87430;
  _DAT_14ca92f50 = &DAT_14ca92a90;
  _DAT_14ca92f60 = &LAB_14682652b;
  DAT_14ca87430 = &DAT_14ca92f48;
  DAT_14ca87485 = DAT_14ca87485 + '\x01';
  _DAT_14ca92f68 = 0x100000000;
  if (DAT_14ca92af4 != '\0') {
    DAT_14ca87486 = DAT_14ca87486 + '\x01';
  }
  return;
}



// FUNCTION 14613603a FUN_14613603a body=284 status=ok
// SIG undefined FUN_14613603a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613603a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca87658) {
    FUN_144b3d300(&DAT_14ca87658);
    if (DAT_14ca87658 == -1) {
      FUN_146136156();
      FUN_140db5666(&DAT_14ca875b0,0,&DAT_14ca87548,L"FClearReplacementCS_Texture3D_Float4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_1474175be,
                    FUN_147417566,&LAB_147417562,&LAB_14741755e,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca875b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f0b);
      _Init_thread_footer(&DAT_14ca87658);
    }
  }
  return &DAT_14ca875b0;
}



// FUNCTION 146136156 FUN_146136156 body=313 status=ok
// SIG undefined FUN_146136156(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146136156(void)

{
  if ((DAT_14ca875af & 2) == 0) {
    DAT_14ca875af = DAT_14ca875af | 2;
    _DAT_14ca87550 = L"FClearReplacementCS_Texture3D_Float4_Bounds";
    _DAT_14ca87568 = FUN_146826540;
    _DAT_14ca87570 = FUN_146825d77;
    _DAT_14ca87578 = FUN_146825fd6;
    _DAT_14ca87580 = FUN_1407e02ea;
    _DAT_14ca87588 = FUN_146826273;
    _DAT_14ca87560 = FUN_14741752e;
    _DAT_14ca875a0 = 0xffffffff00000100;
    _DAT_14ca875a8 = 8;
    DAT_14ca875ac = 0;
    _DAT_14ca87590 = &LAB_14741755a;
    _DAT_14ca92f78 = L"ClearResourceParam";
    DAT_14ca92fa2 = FUN_140850cc5();
    _DAT_14ca92f80 = FUN_140fb78d0();
    _DAT_14ca92f90 = &LAB_14682652b;
    _DAT_14ca92f98 = 0x1000000f8;
    _DAT_14ca92fa0 = 0;
    _DAT_14ca92f88 = DAT_14ca87558;
    DAT_14ca87558 = &DAT_14ca92f78;
    FUN_146136290();
    FUN_1407e00cc(&DAT_14ca87548);
  }
  return &DAT_14ca87548;
}



// FUNCTION 146136290 FUN_146136290 body=133 status=ok
// SIG undefined FUN_146136290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146136290(void)

{
  _DAT_14ca92fa8 = L"BASE";
  DAT_14ca92fd2 = 4;
  FUN_145ccacd6();
  _DAT_14ca92fb8 = DAT_14ca87558;
  _DAT_14ca92fb0 = &DAT_14ca92a90;
  _DAT_14ca92fc0 = &LAB_14682652b;
  DAT_14ca87558 = &DAT_14ca92fa8;
  DAT_14ca875ad = DAT_14ca875ad + '\x01';
  _DAT_14ca92fc8 = 0x100000000;
  if (DAT_14ca92af4 != '\0') {
    DAT_14ca875ae = DAT_14ca875ae + '\x01';
  }
  return;
}



// FUNCTION 146136316 FUN_146136316 body=284 status=ok
// SIG undefined FUN_146136316(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146136316(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca87af8) {
    FUN_144b3d300(&DAT_14ca87af8);
    if (DAT_14ca87af8 == -1) {
      FUN_146136432();
      FUN_140db5666(&DAT_14ca87a50,0,&DAT_14ca879e8,
                    L"FClearReplacementCS_StructuredBuffer_Uint_Zero",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147417a26,
                    FUN_1474179fe,&LAB_1474179fa,&LAB_1474179f6,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87a50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f3b);
      _Init_thread_footer(&DAT_14ca87af8);
    }
  }
  return &DAT_14ca87a50;
}



// FUNCTION 146136432 FUN_146136432 body=313 status=ok
// SIG undefined FUN_146136432(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146136432(void)

{
  if ((DAT_14ca87a4f & 2) == 0) {
    DAT_14ca87a4f = DAT_14ca87a4f | 2;
    _DAT_14ca879f0 = L"FClearReplacementCS_StructuredBuffer_Uint_Zero";
    _DAT_14ca87a08 = FUN_146826540;
    _DAT_14ca87a10 = FUN_146825d77;
    _DAT_14ca87a18 = FUN_146825fd6;
    _DAT_14ca87a20 = FUN_1407e02ea;
    _DAT_14ca87a28 = FUN_146826273;
    _DAT_14ca87a00 = FUN_1474179c6;
    _DAT_14ca87a40 = 0xffffffff00000100;
    _DAT_14ca87a48 = 8;
    DAT_14ca87a4c = 0;
    _DAT_14ca87a30 = &LAB_1474179f2;
    _DAT_14ca93220 = L"ClearResourceParam";
    DAT_14ca9324a = FUN_140850cc5();
    _DAT_14ca93228 = FUN_140fb78d0();
    _DAT_14ca93238 = &LAB_14682652b;
    _DAT_14ca93240 = 0x1000000f8;
    _DAT_14ca93248 = 0;
    _DAT_14ca93230 = DAT_14ca879f8;
    DAT_14ca879f8 = &DAT_14ca93220;
    FUN_14613656c();
    FUN_1407e00cc(&DAT_14ca879e8);
    return;
  }
  return;
}



// FUNCTION 14613656c FUN_14613656c body=133 status=ok
// SIG undefined FUN_14613656c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613656c(void)

{
  _DAT_14ca93250 = L"BASE";
  DAT_14ca9327a = 4;
  FUN_145de0a96();
  _DAT_14ca93260 = DAT_14ca879f8;
  _DAT_14ca93258 = &DAT_14ca930f8;
  _DAT_14ca93268 = &LAB_14682652b;
  DAT_14ca879f8 = &DAT_14ca93250;
  DAT_14ca87a4d = DAT_14ca87a4d + '\x01';
  _DAT_14ca93270 = 0x100000000;
  if (DAT_14ca9315c != '\0') {
    DAT_14ca87a4e = DAT_14ca87a4e + '\x01';
  }
  return;
}



// FUNCTION 1461365f2 FUN_1461365f2 body=284 status=ok
// SIG undefined FUN_1461365f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461365f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca87c20) {
    FUN_144b3d300(&DAT_14ca87c20);
    if (DAT_14ca87c20 == -1) {
      FUN_14613670e();
      FUN_140db5666(&DAT_14ca87b78,0,&DAT_14ca87b10,L"FClearReplacementCS_Texture2DArray_Uint_Zero",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147417b28,
                    FUN_147417b00,&LAB_147417afc,&LAB_147417af8,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87b78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f47);
      _Init_thread_footer(&DAT_14ca87c20);
    }
  }
  return &DAT_14ca87b78;
}



// FUNCTION 14613670e FUN_14613670e body=313 status=ok
// SIG undefined FUN_14613670e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613670e(void)

{
  if ((DAT_14ca87b77 & 2) == 0) {
    DAT_14ca87b77 = DAT_14ca87b77 | 2;
    _DAT_14ca87b18 = L"FClearReplacementCS_Texture2DArray_Uint_Zero";
    _DAT_14ca87b30 = FUN_146826540;
    _DAT_14ca87b38 = FUN_146825d77;
    _DAT_14ca87b40 = FUN_146825fd6;
    _DAT_14ca87b48 = FUN_1407e02ea;
    _DAT_14ca87b50 = FUN_146826273;
    _DAT_14ca87b28 = FUN_147417ac8;
    _DAT_14ca87b68 = 0xffffffff00000100;
    _DAT_14ca87b70 = 8;
    DAT_14ca87b74 = 0;
    _DAT_14ca87b58 = &LAB_147417af4;
    _DAT_14ca93280 = L"ClearResourceParam";
    DAT_14ca932aa = FUN_140850cc5();
    _DAT_14ca93288 = FUN_140fb78d0();
    _DAT_14ca93298 = &LAB_14682652b;
    _DAT_14ca932a0 = 0x1000000f8;
    _DAT_14ca932a8 = 0;
    _DAT_14ca93290 = DAT_14ca87b20;
    DAT_14ca87b20 = &DAT_14ca93280;
    FUN_146136848();
    FUN_1407e00cc(&DAT_14ca87b10);
    return;
  }
  return;
}



// FUNCTION 146136848 FUN_146136848 body=133 status=ok
// SIG undefined FUN_146136848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146136848(void)

{
  _DAT_14ca932b0 = L"BASE";
  DAT_14ca932da = 4;
  FUN_145de0a96();
  _DAT_14ca932c0 = DAT_14ca87b20;
  _DAT_14ca932b8 = &DAT_14ca930f8;
  _DAT_14ca932c8 = &LAB_14682652b;
  DAT_14ca87b20 = &DAT_14ca932b0;
  DAT_14ca87b75 = DAT_14ca87b75 + '\x01';
  _DAT_14ca932d0 = 0x100000000;
  if (DAT_14ca9315c != '\0') {
    DAT_14ca87b76 = DAT_14ca87b76 + '\x01';
  }
  return;
}



// FUNCTION 1461368ce FUN_1461368ce body=284 status=ok
// SIG undefined FUN_1461368ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461368ce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca87e70) {
    FUN_144b3d300(&DAT_14ca87e70);
    if (DAT_14ca87e70 == -1) {
      FUN_1461369ea();
      FUN_140db5666(&DAT_14ca87dc8,0,&DAT_14ca87d60,L"FClearReplacementCS_LargeBuffer_Uint",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147417d2c,
                    FUN_147417d04,&LAB_147417d00,&LAB_147417cfc,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87dc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f5f);
      _Init_thread_footer(&DAT_14ca87e70);
    }
  }
  return &DAT_14ca87dc8;
}



// FUNCTION 1461369ea FUN_1461369ea body=313 status=ok
// SIG undefined FUN_1461369ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461369ea(void)

{
  if ((DAT_14ca87dc7 & 2) == 0) {
    DAT_14ca87dc7 = DAT_14ca87dc7 | 2;
    _DAT_14ca87d68 = L"FClearReplacementCS_LargeBuffer_Uint";
    _DAT_14ca87d80 = FUN_146826540;
    _DAT_14ca87d88 = FUN_146825d77;
    _DAT_14ca87d90 = FUN_146825fd6;
    _DAT_14ca87d98 = FUN_1407e02ea;
    _DAT_14ca87da0 = FUN_146826273;
    _DAT_14ca87d78 = FUN_147417ccc;
    _DAT_14ca87db8 = 0xffffffff00000100;
    _DAT_14ca87dc0 = 8;
    DAT_14ca87dc4 = 0;
    _DAT_14ca87da8 = &LAB_147417cf8;
    _DAT_14ca93468 = L"ClearResourceParam";
    DAT_14ca93492 = FUN_140850cc5();
    _DAT_14ca93470 = FUN_140fb78d0();
    _DAT_14ca93480 = &LAB_14682652b;
    _DAT_14ca93488 = 0x1000000f8;
    _DAT_14ca93490 = 0;
    _DAT_14ca93478 = DAT_14ca87d70;
    DAT_14ca87d70 = &DAT_14ca93468;
    FUN_146136b24();
    FUN_1407e00cc(&DAT_14ca87d60);
    return;
  }
  return;
}



// FUNCTION 146136b24 FUN_146136b24 body=133 status=ok
// SIG undefined FUN_146136b24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146136b24(void)

{
  _DAT_14ca93498 = L"BASE";
  DAT_14ca934c2 = 4;
  FUN_145d58434();
  _DAT_14ca934a8 = DAT_14ca87d70;
  _DAT_14ca934a0 = &DAT_14ca93340;
  _DAT_14ca934b0 = &LAB_14682652b;
  DAT_14ca87d70 = &DAT_14ca93498;
  DAT_14ca87dc5 = DAT_14ca87dc5 + '\x01';
  _DAT_14ca934b8 = 0x100000000;
  if (DAT_14ca933a4 != '\0') {
    DAT_14ca87dc6 = DAT_14ca87dc6 + '\x01';
  }
  return;
}



// FUNCTION 146136baa FUN_146136baa body=284 status=ok
// SIG undefined FUN_146136baa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146136baa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca87f98) {
    FUN_144b3d300(&DAT_14ca87f98);
    if (DAT_14ca87f98 == -1) {
      FUN_146136cc6();
      FUN_140db5666(&DAT_14ca87ef0,0,&DAT_14ca87e88,L"FClearReplacementCS_StructuredBuffer_Uint",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147417e2e,
                    FUN_147417e06,&LAB_147417e02,&LAB_147417dfe,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87ef0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f6b);
      _Init_thread_footer(&DAT_14ca87f98);
    }
  }
  return &DAT_14ca87ef0;
}



// FUNCTION 146136cc6 FUN_146136cc6 body=313 status=ok
// SIG undefined FUN_146136cc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146136cc6(void)

{
  if ((DAT_14ca87eef & 2) == 0) {
    DAT_14ca87eef = DAT_14ca87eef | 2;
    _DAT_14ca87e90 = L"FClearReplacementCS_StructuredBuffer_Uint";
    _DAT_14ca87ea8 = FUN_146826540;
    _DAT_14ca87eb0 = FUN_146825d77;
    _DAT_14ca87eb8 = FUN_146825fd6;
    _DAT_14ca87ec0 = FUN_1407e02ea;
    _DAT_14ca87ec8 = FUN_146826273;
    _DAT_14ca87ea0 = FUN_147417dce;
    _DAT_14ca87ee0 = 0xffffffff00000100;
    _DAT_14ca87ee8 = 8;
    DAT_14ca87eec = 0;
    _DAT_14ca87ed0 = &LAB_147417dfa;
    _DAT_14ca934c8 = L"ClearResourceParam";
    DAT_14ca934f2 = FUN_140850cc5();
    _DAT_14ca934d0 = FUN_140fb78d0();
    _DAT_14ca934e0 = &LAB_14682652b;
    _DAT_14ca934e8 = 0x1000000f8;
    _DAT_14ca934f0 = 0;
    _DAT_14ca934d8 = DAT_14ca87e98;
    DAT_14ca87e98 = &DAT_14ca934c8;
    FUN_146136e00();
    FUN_1407e00cc(&DAT_14ca87e88);
    return;
  }
  return;
}



// FUNCTION 146136e00 FUN_146136e00 body=133 status=ok
// SIG undefined FUN_146136e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146136e00(void)

{
  _DAT_14ca934f8 = L"BASE";
  DAT_14ca93522 = 4;
  FUN_145d58434();
  _DAT_14ca93508 = DAT_14ca87e98;
  _DAT_14ca93500 = &DAT_14ca93340;
  _DAT_14ca93510 = &LAB_14682652b;
  DAT_14ca87e98 = &DAT_14ca934f8;
  DAT_14ca87eed = DAT_14ca87eed + '\x01';
  _DAT_14ca93518 = 0x100000000;
  if (DAT_14ca933a4 != '\0') {
    DAT_14ca87eee = DAT_14ca87eee + '\x01';
  }
  return;
}



// FUNCTION 146136e86 FUN_146136e86 body=284 status=ok
// SIG undefined FUN_146136e86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146136e86(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca880c0) {
    FUN_144b3d300(&DAT_14ca880c0);
    if (DAT_14ca880c0 == -1) {
      FUN_146136fa2();
      FUN_140db5666(&DAT_14ca88018,0,&DAT_14ca87fb0,L"FClearReplacementCS_Texture2DArray_Uint",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147417f30,
                    FUN_147417f08,&LAB_147417f04,&LAB_147417f00,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88018 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f77);
      _Init_thread_footer(&DAT_14ca880c0);
    }
  }
  return &DAT_14ca88018;
}



// FUNCTION 146136fa2 FUN_146136fa2 body=313 status=ok
// SIG undefined FUN_146136fa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146136fa2(void)

{
  if ((DAT_14ca88017 & 2) == 0) {
    DAT_14ca88017 = DAT_14ca88017 | 2;
    _DAT_14ca87fb8 = L"FClearReplacementCS_Texture2DArray_Uint";
    _DAT_14ca87fd0 = FUN_146826540;
    _DAT_14ca87fd8 = FUN_146825d77;
    _DAT_14ca87fe0 = FUN_146825fd6;
    _DAT_14ca87fe8 = FUN_1407e02ea;
    _DAT_14ca87ff0 = FUN_146826273;
    _DAT_14ca87fc8 = FUN_147417ed0;
    _DAT_14ca88008 = 0xffffffff00000100;
    _DAT_14ca88010 = 8;
    DAT_14ca88014 = 0;
    _DAT_14ca87ff8 = &LAB_147417efc;
    _DAT_14ca93528 = L"ClearResourceParam";
    DAT_14ca93552 = FUN_140850cc5();
    _DAT_14ca93530 = FUN_140fb78d0();
    _DAT_14ca93540 = &LAB_14682652b;
    _DAT_14ca93548 = 0x1000000f8;
    _DAT_14ca93550 = 0;
    _DAT_14ca93538 = DAT_14ca87fc0;
    DAT_14ca87fc0 = &DAT_14ca93528;
    FUN_1461370dc();
    FUN_1407e00cc(&DAT_14ca87fb0);
    return;
  }
  return;
}



// FUNCTION 1461370dc FUN_1461370dc body=133 status=ok
// SIG undefined FUN_1461370dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461370dc(void)

{
  _DAT_14ca93558 = L"BASE";
  DAT_14ca93582 = 4;
  FUN_145d58434();
  _DAT_14ca93568 = DAT_14ca87fc0;
  _DAT_14ca93560 = &DAT_14ca93340;
  _DAT_14ca93570 = &LAB_14682652b;
  DAT_14ca87fc0 = &DAT_14ca93558;
  DAT_14ca88015 = DAT_14ca88015 + '\x01';
  _DAT_14ca93578 = 0x100000000;
  if (DAT_14ca933a4 != '\0') {
    DAT_14ca88016 = DAT_14ca88016 + '\x01';
  }
  return;
}



// FUNCTION 146137162 FUN_146137162 body=284 status=ok
// SIG undefined FUN_146137162(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146137162(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca881e8) {
    FUN_144b3d300(&DAT_14ca881e8);
    if (DAT_14ca881e8 == -1) {
      FUN_14613727e();
      FUN_140db5666(&DAT_14ca88140,0,&DAT_14ca880d8,L"FClearReplacementCS_Texture3D_Float4",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147418032,
                    FUN_14741800a,&LAB_147418006,&LAB_147418002,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88140 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f83);
      _Init_thread_footer(&DAT_14ca881e8);
    }
  }
  return &DAT_14ca88140;
}



// FUNCTION 14613727e FUN_14613727e body=313 status=ok
// SIG undefined FUN_14613727e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613727e(void)

{
  if ((DAT_14ca8813f & 2) == 0) {
    DAT_14ca8813f = DAT_14ca8813f | 2;
    _DAT_14ca880e0 = L"FClearReplacementCS_Texture3D_Float4";
    _DAT_14ca880f8 = FUN_146826540;
    _DAT_14ca88100 = FUN_146825d77;
    _DAT_14ca88108 = FUN_146825fd6;
    _DAT_14ca88110 = FUN_1407e02ea;
    _DAT_14ca88118 = FUN_146826273;
    _DAT_14ca880f0 = FUN_147417fd2;
    _DAT_14ca88130 = 0xffffffff00000100;
    _DAT_14ca88138 = 8;
    DAT_14ca8813c = 0;
    _DAT_14ca88120 = &LAB_147417ffe;
    _DAT_14ca93588 = L"ClearResourceParam";
    DAT_14ca935b2 = FUN_140850cc5();
    _DAT_14ca93590 = FUN_140fb78d0();
    _DAT_14ca935a0 = &LAB_14682652b;
    _DAT_14ca935a8 = 0x1000000f8;
    _DAT_14ca935b0 = 0;
    _DAT_14ca93598 = DAT_14ca880e8;
    DAT_14ca880e8 = &DAT_14ca93588;
    FUN_1461373b8();
    FUN_1407e00cc(&DAT_14ca880d8);
    return;
  }
  return;
}



// FUNCTION 1461373b8 FUN_1461373b8 body=133 status=ok
// SIG undefined FUN_1461373b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461373b8(void)

{
  _DAT_14ca935b8 = L"BASE";
  DAT_14ca935e2 = 4;
  FUN_145cd3bd2();
  _DAT_14ca935c8 = DAT_14ca880e8;
  _DAT_14ca935c0 = &DAT_14ca92288;
  _DAT_14ca935d0 = &LAB_14682652b;
  DAT_14ca880e8 = &DAT_14ca935b8;
  DAT_14ca8813d = DAT_14ca8813d + '\x01';
  _DAT_14ca935d8 = 0x100000000;
  if (DAT_14ca922ec != '\0') {
    DAT_14ca8813e = DAT_14ca8813e + '\x01';
  }
  return;
}



// FUNCTION 14613743e FUN_14613743e body=284 status=ok
// SIG undefined FUN_14613743e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613743e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca88310) {
    FUN_144b3d300(&DAT_14ca88310);
    if (DAT_14ca88310 == -1) {
      FUN_14613755a();
      FUN_140db5666(&DAT_14ca88268,0,&DAT_14ca88200,L"FClearReplacementCS_Texture2D_Float4",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147418134,
                    FUN_14741810c,&LAB_147418108,&LAB_147418104,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88268 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f8f);
      _Init_thread_footer(&DAT_14ca88310);
    }
  }
  return &DAT_14ca88268;
}



// FUNCTION 14613755a FUN_14613755a body=313 status=ok
// SIG undefined FUN_14613755a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613755a(void)

{
  if ((DAT_14ca88267 & 2) == 0) {
    DAT_14ca88267 = DAT_14ca88267 | 2;
    _DAT_14ca88208 = L"FClearReplacementCS_Texture2D_Float4";
    _DAT_14ca88220 = FUN_146826540;
    _DAT_14ca88228 = FUN_146825d77;
    _DAT_14ca88230 = FUN_146825fd6;
    _DAT_14ca88238 = FUN_1407e02ea;
    _DAT_14ca88240 = FUN_146826273;
    _DAT_14ca88218 = FUN_1474180d4;
    _DAT_14ca88258 = 0xffffffff00000100;
    _DAT_14ca88260 = 8;
    DAT_14ca88264 = 0;
    _DAT_14ca88248 = &LAB_147418100;
    _DAT_14ca935e8 = L"ClearResourceParam";
    DAT_14ca93612 = FUN_140850cc5();
    _DAT_14ca935f0 = FUN_140fb78d0();
    _DAT_14ca93600 = &LAB_14682652b;
    _DAT_14ca93608 = 0x1000000f8;
    _DAT_14ca93610 = 0;
    _DAT_14ca935f8 = DAT_14ca88210;
    DAT_14ca88210 = &DAT_14ca935e8;
    FUN_146137694();
    FUN_1407e00cc(&DAT_14ca88200);
    return;
  }
  return;
}



// FUNCTION 146137694 FUN_146137694 body=133 status=ok
// SIG undefined FUN_146137694(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146137694(void)

{
  _DAT_14ca93618 = L"BASE";
  DAT_14ca93642 = 4;
  FUN_145cd3bd2();
  _DAT_14ca93628 = DAT_14ca88210;
  _DAT_14ca93620 = &DAT_14ca92288;
  _DAT_14ca93630 = &LAB_14682652b;
  DAT_14ca88210 = &DAT_14ca93618;
  DAT_14ca88265 = DAT_14ca88265 + '\x01';
  _DAT_14ca93638 = 0x100000000;
  if (DAT_14ca922ec != '\0') {
    DAT_14ca88266 = DAT_14ca88266 + '\x01';
  }
  return;
}



// FUNCTION 14613771a FUN_14613771a body=284 status=ok
// SIG undefined FUN_14613771a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613771a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca88438) {
    FUN_144b3d300(&DAT_14ca88438);
    if (DAT_14ca88438 == -1) {
      FUN_146137836();
      FUN_140db5666(&DAT_14ca88390,0,&DAT_14ca88328,L"FClearReplacementCS_Texture2DArray_Float4",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147418236,
                    FUN_14741820e,&LAB_14741820a,&LAB_147418206,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88390 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f9b);
      _Init_thread_footer(&DAT_14ca88438);
    }
  }
  return &DAT_14ca88390;
}



// FUNCTION 146137836 FUN_146137836 body=313 status=ok
// SIG undefined FUN_146137836(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146137836(void)

{
  if ((DAT_14ca8838f & 2) == 0) {
    DAT_14ca8838f = DAT_14ca8838f | 2;
    _DAT_14ca88330 = L"FClearReplacementCS_Texture2DArray_Float4";
    _DAT_14ca88348 = FUN_146826540;
    _DAT_14ca88350 = FUN_146825d77;
    _DAT_14ca88358 = FUN_146825fd6;
    _DAT_14ca88360 = FUN_1407e02ea;
    _DAT_14ca88368 = FUN_146826273;
    _DAT_14ca88340 = FUN_1474181d6;
    _DAT_14ca88380 = 0xffffffff00000100;
    _DAT_14ca88388 = 8;
    DAT_14ca8838c = 0;
    _DAT_14ca88370 = &LAB_147418202;
    _DAT_14ca93648 = L"ClearResourceParam";
    DAT_14ca93672 = FUN_140850cc5();
    _DAT_14ca93650 = FUN_140fb78d0();
    _DAT_14ca93660 = &LAB_14682652b;
    _DAT_14ca93668 = 0x1000000f8;
    _DAT_14ca93670 = 0;
    _DAT_14ca93658 = DAT_14ca88338;
    DAT_14ca88338 = &DAT_14ca93648;
    FUN_146137970();
    FUN_1407e00cc(&DAT_14ca88328);
    return;
  }
  return;
}



// FUNCTION 146137970 FUN_146137970 body=133 status=ok
// SIG undefined FUN_146137970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146137970(void)

{
  _DAT_14ca93678 = L"BASE";
  DAT_14ca936a2 = 4;
  FUN_145cd3bd2();
  _DAT_14ca93688 = DAT_14ca88338;
  _DAT_14ca93680 = &DAT_14ca92288;
  _DAT_14ca93690 = &LAB_14682652b;
  DAT_14ca88338 = &DAT_14ca93678;
  DAT_14ca8838d = DAT_14ca8838d + '\x01';
  _DAT_14ca93698 = 0x100000000;
  if (DAT_14ca922ec != '\0') {
    DAT_14ca8838e = DAT_14ca8838e + '\x01';
  }
  return;
}



// FUNCTION 1461379f6 FUN_1461379f6 body=284 status=ok
// SIG undefined FUN_1461379f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461379f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca88560) {
    FUN_144b3d300(&DAT_14ca88560);
    if (DAT_14ca88560 == -1) {
      FUN_146137b12();
      FUN_140db5666(&DAT_14ca884b8,0,&DAT_14ca88450,L"FClearReplacementCS_Texture3D_Uint4",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147418338,
                    FUN_147418310,&LAB_14741830c,&LAB_147418308,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca884b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1fa7);
      _Init_thread_footer(&DAT_14ca88560);
    }
  }
  return &DAT_14ca884b8;
}



// FUNCTION 146137b12 FUN_146137b12 body=313 status=ok
// SIG undefined FUN_146137b12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146137b12(void)

{
  if ((DAT_14ca884b7 & 2) == 0) {
    DAT_14ca884b7 = DAT_14ca884b7 | 2;
    _DAT_14ca88458 = L"FClearReplacementCS_Texture3D_Uint4";
    _DAT_14ca88470 = FUN_146826540;
    _DAT_14ca88478 = FUN_146825d77;
    _DAT_14ca88480 = FUN_146825fd6;
    _DAT_14ca88488 = FUN_1407e02ea;
    _DAT_14ca88490 = FUN_146826273;
    _DAT_14ca88468 = FUN_1474182d8;
    _DAT_14ca884a8 = 0xffffffff00000100;
    _DAT_14ca884b0 = 8;
    DAT_14ca884b4 = 0;
    _DAT_14ca88498 = &LAB_147418304;
    _DAT_14ca936a8 = L"ClearResourceParam";
    DAT_14ca936d2 = FUN_140850cc5();
    _DAT_14ca936b0 = FUN_140fb78d0();
    _DAT_14ca936c0 = &LAB_14682652b;
    _DAT_14ca936c8 = 0x1000000f8;
    _DAT_14ca936d0 = 0;
    _DAT_14ca936b8 = DAT_14ca88460;
    DAT_14ca88460 = &DAT_14ca936a8;
    FUN_146137c4c();
    FUN_1407e00cc(&DAT_14ca88450);
    return;
  }
  return;
}



// FUNCTION 146137c4c FUN_146137c4c body=133 status=ok
// SIG undefined FUN_146137c4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146137c4c(void)

{
  _DAT_14ca936d8 = L"BASE";
  DAT_14ca93702 = 4;
  FUN_145cca754();
  _DAT_14ca936e8 = DAT_14ca88460;
  _DAT_14ca936e0 = &DAT_14ca92780;
  _DAT_14ca936f0 = &LAB_14682652b;
  DAT_14ca88460 = &DAT_14ca936d8;
  DAT_14ca884b5 = DAT_14ca884b5 + '\x01';
  _DAT_14ca936f8 = 0x100000000;
  if (DAT_14ca927e4 != '\0') {
    DAT_14ca884b6 = DAT_14ca884b6 + '\x01';
  }
  return;
}



// FUNCTION 146137cd2 FUN_146137cd2 body=284 status=ok
// SIG undefined FUN_146137cd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146137cd2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca88688) {
    FUN_144b3d300(&DAT_14ca88688);
    if (DAT_14ca88688 == -1) {
      FUN_146137dee();
      FUN_140db5666(&DAT_14ca885e0,0,&DAT_14ca88578,L"FClearReplacementCS_Texture2D_Uint4",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_14741843a,
                    FUN_147418412,&LAB_14741840e,&LAB_14741840a,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca885e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1fb3);
      _Init_thread_footer(&DAT_14ca88688);
    }
  }
  return &DAT_14ca885e0;
}



// FUNCTION 146137dee FUN_146137dee body=313 status=ok
// SIG undefined FUN_146137dee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146137dee(void)

{
  if ((DAT_14ca885df & 2) == 0) {
    DAT_14ca885df = DAT_14ca885df | 2;
    _DAT_14ca88580 = L"FClearReplacementCS_Texture2D_Uint4";
    _DAT_14ca88598 = FUN_146826540;
    _DAT_14ca885a0 = FUN_146825d77;
    _DAT_14ca885a8 = FUN_146825fd6;
    _DAT_14ca885b0 = FUN_1407e02ea;
    _DAT_14ca885b8 = FUN_146826273;
    _DAT_14ca88590 = FUN_1474183da;
    _DAT_14ca885d0 = 0xffffffff00000100;
    _DAT_14ca885d8 = 8;
    DAT_14ca885dc = 0;
    _DAT_14ca885c0 = &LAB_147418406;
    _DAT_14ca93708 = L"ClearResourceParam";
    DAT_14ca93732 = FUN_140850cc5();
    _DAT_14ca93710 = FUN_140fb78d0();
    _DAT_14ca93720 = &LAB_14682652b;
    _DAT_14ca93728 = 0x1000000f8;
    _DAT_14ca93730 = 0;
    _DAT_14ca93718 = DAT_14ca88588;
    DAT_14ca88588 = &DAT_14ca93708;
    FUN_146137f28();
    FUN_1407e00cc(&DAT_14ca88578);
    return;
  }
  return;
}



// FUNCTION 146137f28 FUN_146137f28 body=133 status=ok
// SIG undefined FUN_146137f28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146137f28(void)

{
  _DAT_14ca93738 = L"BASE";
  DAT_14ca93762 = 4;
  FUN_145cca754();
  _DAT_14ca93748 = DAT_14ca88588;
  _DAT_14ca93740 = &DAT_14ca92780;
  _DAT_14ca93750 = &LAB_14682652b;
  DAT_14ca88588 = &DAT_14ca93738;
  DAT_14ca885dd = DAT_14ca885dd + '\x01';
  _DAT_14ca93758 = 0x100000000;
  if (DAT_14ca927e4 != '\0') {
    DAT_14ca885de = DAT_14ca885de + '\x01';
  }
  return;
}



// FUNCTION 146137fae FUN_146137fae body=284 status=ok
// SIG undefined FUN_146137fae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146137fae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca887b0) {
    FUN_144b3d300(&DAT_14ca887b0);
    if (DAT_14ca887b0 == -1) {
      FUN_1461380ca();
      FUN_140db5666(&DAT_14ca88708,0,&DAT_14ca886a0,L"FClearReplacementCS_Texture2DArray_Uint4",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_14741853c,
                    FUN_147418514,&LAB_147418510,&LAB_14741850c,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88708 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1fbf);
      _Init_thread_footer(&DAT_14ca887b0);
    }
  }
  return &DAT_14ca88708;
}



// FUNCTION 1461380ca FUN_1461380ca body=313 status=ok
// SIG undefined FUN_1461380ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461380ca(void)

{
  if ((DAT_14ca88707 & 2) == 0) {
    DAT_14ca88707 = DAT_14ca88707 | 2;
    _DAT_14ca886a8 = L"FClearReplacementCS_Texture2DArray_Uint4";
    _DAT_14ca886c0 = FUN_146826540;
    _DAT_14ca886c8 = FUN_146825d77;
    _DAT_14ca886d0 = FUN_146825fd6;
    _DAT_14ca886d8 = FUN_1407e02ea;
    _DAT_14ca886e0 = FUN_146826273;
    _DAT_14ca886b8 = FUN_1474184dc;
    _DAT_14ca886f8 = 0xffffffff00000100;
    _DAT_14ca88700 = 8;
    DAT_14ca88704 = 0;
    _DAT_14ca886e8 = &LAB_147418508;
    _DAT_14ca93768 = L"ClearResourceParam";
    DAT_14ca93792 = FUN_140850cc5();
    _DAT_14ca93770 = FUN_140fb78d0();
    _DAT_14ca93780 = &LAB_14682652b;
    _DAT_14ca93788 = 0x1000000f8;
    _DAT_14ca93790 = 0;
    _DAT_14ca93778 = DAT_14ca886b0;
    DAT_14ca886b0 = &DAT_14ca93768;
    FUN_146138204();
    FUN_1407e00cc(&DAT_14ca886a0);
    return;
  }
  return;
}



// FUNCTION 146138204 FUN_146138204 body=133 status=ok
// SIG undefined FUN_146138204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146138204(void)

{
  _DAT_14ca93798 = L"BASE";
  DAT_14ca937c2 = 4;
  FUN_145cca754();
  _DAT_14ca937a8 = DAT_14ca886b0;
  _DAT_14ca937a0 = &DAT_14ca92780;
  _DAT_14ca937b0 = &LAB_14682652b;
  DAT_14ca886b0 = &DAT_14ca93798;
  DAT_14ca88705 = DAT_14ca88705 + '\x01';
  _DAT_14ca937b8 = 0x100000000;
  if (DAT_14ca927e4 != '\0') {
    DAT_14ca88706 = DAT_14ca88706 + '\x01';
  }
  return;
}



// FUNCTION 14613828a FUN_14613828a body=284 status=ok
// SIG undefined FUN_14613828a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613828a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca88b28) {
    FUN_144b3d300(&DAT_14ca88b28);
    if (DAT_14ca88b28 == -1) {
      FUN_1461383a6();
      FUN_140db5666(&DAT_14ca88a80,0,&DAT_14ca88a18,
                    L"FClearReplacementCS_Texture2DArray_Uint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_1474188d2,
                    FUN_14741887a,&LAB_147418876,&LAB_147418872,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88a80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1fe3);
      _Init_thread_footer(&DAT_14ca88b28);
    }
  }
  return &DAT_14ca88a80;
}



// FUNCTION 1461383a6 FUN_1461383a6 body=313 status=ok
// SIG undefined FUN_1461383a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461383a6(void)

{
  if ((DAT_14ca88a7f & 2) == 0) {
    DAT_14ca88a7f = DAT_14ca88a7f | 2;
    _DAT_14ca88a20 = L"FClearReplacementCS_Texture2DArray_Uint4_Bounds";
    _DAT_14ca88a38 = FUN_146826540;
    _DAT_14ca88a40 = FUN_146825d77;
    _DAT_14ca88a48 = FUN_146825fd6;
    _DAT_14ca88a50 = FUN_1407e02ea;
    _DAT_14ca88a58 = FUN_146826273;
    _DAT_14ca88a30 = FUN_147418842;
    _DAT_14ca88a70 = 0xffffffff00000100;
    _DAT_14ca88a78 = 8;
    DAT_14ca88a7c = 0;
    _DAT_14ca88a60 = &LAB_14741886e;
    _DAT_14ca93888 = L"ClearResourceParam";
    DAT_14ca938b2 = FUN_140850cc5();
    _DAT_14ca93890 = FUN_140fb78d0();
    _DAT_14ca938a0 = &LAB_14682652b;
    _DAT_14ca938a8 = 0x1000000f8;
    _DAT_14ca938b0 = 0;
    _DAT_14ca93898 = DAT_14ca88a28;
    DAT_14ca88a28 = &DAT_14ca93888;
    FUN_1461384e0();
    FUN_1407e00cc(&DAT_14ca88a18);
  }
  return &DAT_14ca88a18;
}



// FUNCTION 1461384e0 FUN_1461384e0 body=133 status=ok
// SIG undefined FUN_1461384e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461384e0(void)

{
  _DAT_14ca938b8 = L"BASE";
  DAT_14ca938e2 = 4;
  FUN_145cc9294();
  _DAT_14ca938c8 = DAT_14ca88a28;
  _DAT_14ca938c0 = &DAT_14ca925f8;
  _DAT_14ca938d0 = &LAB_14682652b;
  DAT_14ca88a28 = &DAT_14ca938b8;
  DAT_14ca88a7d = DAT_14ca88a7d + '\x01';
  _DAT_14ca938d8 = 0x100000000;
  if (DAT_14ca9265c != '\0') {
    DAT_14ca88a7e = DAT_14ca88a7e + '\x01';
  }
  return;
}



// FUNCTION 146138566 FUN_146138566 body=284 status=ok
// SIG undefined FUN_146138566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146138566(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca88d78) {
    FUN_144b3d300(&DAT_14ca88d78);
    if (DAT_14ca88d78 == -1) {
      FUN_146138682();
      FUN_140db5666(&DAT_14ca88cd0,0,&DAT_14ca88c68,L"FClearReplacementCS_LargeBuffer_Sint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147418b36,
                    FUN_147418ade,&LAB_147418ada,&LAB_147418ad6,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88cd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1ffb);
      _Init_thread_footer(&DAT_14ca88d78);
    }
  }
  return &DAT_14ca88cd0;
}



// FUNCTION 146138682 FUN_146138682 body=313 status=ok
// SIG undefined FUN_146138682(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146138682(void)

{
  if ((DAT_14ca88ccf & 2) == 0) {
    DAT_14ca88ccf = DAT_14ca88ccf | 2;
    _DAT_14ca88c70 = L"FClearReplacementCS_LargeBuffer_Sint4_Bounds";
    _DAT_14ca88c88 = FUN_146826540;
    _DAT_14ca88c90 = FUN_146825d77;
    _DAT_14ca88c98 = FUN_146825fd6;
    _DAT_14ca88ca0 = FUN_1407e02ea;
    _DAT_14ca88ca8 = FUN_146826273;
    _DAT_14ca88c80 = FUN_147418aa6;
    _DAT_14ca88cc0 = 0xffffffff00000100;
    _DAT_14ca88cc8 = 8;
    DAT_14ca88ccc = 0;
    _DAT_14ca88cb0 = &LAB_147418ad2;
    _DAT_14ca93a70 = L"ClearResourceParam";
    DAT_14ca93a9a = FUN_140850cc5();
    _DAT_14ca93a78 = FUN_140fb78d0();
    _DAT_14ca93a88 = &LAB_14682652b;
    _DAT_14ca93a90 = 0x1000000f8;
    _DAT_14ca93a98 = 0;
    _DAT_14ca93a80 = DAT_14ca88c78;
    DAT_14ca88c78 = &DAT_14ca93a70;
    FUN_1461387bc();
    FUN_1407e00cc(&DAT_14ca88c68);
  }
  return &DAT_14ca88c68;
}



// FUNCTION 1461387bc FUN_1461387bc body=133 status=ok
// SIG undefined FUN_1461387bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461387bc(void)

{
  _DAT_14ca93aa0 = L"BASE";
  DAT_14ca93aca = 4;
  FUN_145ccb258();
  _DAT_14ca93ab0 = DAT_14ca88c78;
  _DAT_14ca93aa8 = &DAT_14ca93948;
  _DAT_14ca93ab8 = &LAB_14682652b;
  DAT_14ca88c78 = &DAT_14ca93aa0;
  DAT_14ca88ccd = DAT_14ca88ccd + '\x01';
  _DAT_14ca93ac0 = 0x100000000;
  if (DAT_14ca939ac != '\0') {
    DAT_14ca88cce = DAT_14ca88cce + '\x01';
  }
  return;
}



// FUNCTION 146138842 FUN_146138842 body=284 status=ok
// SIG undefined FUN_146138842(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146138842(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca88ea0) {
    FUN_144b3d300(&DAT_14ca88ea0);
    if (DAT_14ca88ea0 == -1) {
      FUN_14613895e();
      FUN_140db5666(&DAT_14ca88df8,0,&DAT_14ca88d90,
                    L"FClearReplacementCS_StructuredBuffer_Sint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147418c68,
                    FUN_147418c10,&LAB_147418c0c,&LAB_147418c08,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88df8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2007);
      _Init_thread_footer(&DAT_14ca88ea0);
    }
  }
  return &DAT_14ca88df8;
}



// FUNCTION 14613895e FUN_14613895e body=313 status=ok
// SIG undefined FUN_14613895e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613895e(void)

{
  if ((DAT_14ca88df7 & 2) == 0) {
    DAT_14ca88df7 = DAT_14ca88df7 | 2;
    _DAT_14ca88d98 = L"FClearReplacementCS_StructuredBuffer_Sint4_Bounds";
    _DAT_14ca88db0 = FUN_146826540;
    _DAT_14ca88db8 = FUN_146825d77;
    _DAT_14ca88dc0 = FUN_146825fd6;
    _DAT_14ca88dc8 = FUN_1407e02ea;
    _DAT_14ca88dd0 = FUN_146826273;
    _DAT_14ca88da8 = FUN_147418bd8;
    _DAT_14ca88de8 = 0xffffffff00000100;
    _DAT_14ca88df0 = 8;
    DAT_14ca88df4 = 0;
    _DAT_14ca88dd8 = &LAB_147418c04;
    _DAT_14ca93ad0 = L"ClearResourceParam";
    DAT_14ca93afa = FUN_140850cc5();
    _DAT_14ca93ad8 = FUN_140fb78d0();
    _DAT_14ca93ae8 = &LAB_14682652b;
    _DAT_14ca93af0 = 0x1000000f8;
    _DAT_14ca93af8 = 0;
    _DAT_14ca93ae0 = DAT_14ca88da0;
    DAT_14ca88da0 = &DAT_14ca93ad0;
    FUN_146138a98();
    FUN_1407e00cc(&DAT_14ca88d90);
    return;
  }
  return;
}



// FUNCTION 146138a98 FUN_146138a98 body=133 status=ok
// SIG undefined FUN_146138a98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146138a98(void)

{
  _DAT_14ca93b00 = L"BASE";
  DAT_14ca93b2a = 4;
  FUN_145ccb258();
  _DAT_14ca93b10 = DAT_14ca88da0;
  _DAT_14ca93b08 = &DAT_14ca93948;
  _DAT_14ca93b18 = &LAB_14682652b;
  DAT_14ca88da0 = &DAT_14ca93b00;
  DAT_14ca88df5 = DAT_14ca88df5 + '\x01';
  _DAT_14ca93b20 = 0x100000000;
  if (DAT_14ca939ac != '\0') {
    DAT_14ca88df6 = DAT_14ca88df6 + '\x01';
  }
  return;
}



// FUNCTION 146138b1e FUN_146138b1e body=284 status=ok
// SIG undefined FUN_146138b1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146138b1e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca88fc8) {
    FUN_144b3d300(&DAT_14ca88fc8);
    if (DAT_14ca88fc8 == -1) {
      FUN_146138c3a();
      FUN_140db5666(&DAT_14ca88f20,0,&DAT_14ca88eb8,L"FClearReplacementCS_Texture3D_Sint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147418d9a,
                    FUN_147418d42,&LAB_147418d3e,&LAB_147418d3a,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88f20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2013);
      _Init_thread_footer(&DAT_14ca88fc8);
    }
  }
  return &DAT_14ca88f20;
}



// FUNCTION 146138c3a FUN_146138c3a body=313 status=ok
// SIG undefined FUN_146138c3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146138c3a(void)

{
  if ((DAT_14ca88f1f & 2) == 0) {
    DAT_14ca88f1f = DAT_14ca88f1f | 2;
    _DAT_14ca88ec0 = L"FClearReplacementCS_Texture3D_Sint4_Bounds";
    _DAT_14ca88ed8 = FUN_146826540;
    _DAT_14ca88ee0 = FUN_146825d77;
    _DAT_14ca88ee8 = FUN_146825fd6;
    _DAT_14ca88ef0 = FUN_1407e02ea;
    _DAT_14ca88ef8 = FUN_146826273;
    _DAT_14ca88ed0 = FUN_147418d0a;
    _DAT_14ca88f10 = 0xffffffff00000100;
    _DAT_14ca88f18 = 8;
    DAT_14ca88f1c = 0;
    _DAT_14ca88f00 = &LAB_147418d36;
    _DAT_14ca93b30 = L"ClearResourceParam";
    DAT_14ca93b5a = FUN_140850cc5();
    _DAT_14ca93b38 = FUN_140fb78d0();
    _DAT_14ca93b48 = &LAB_14682652b;
    _DAT_14ca93b50 = 0x1000000f8;
    _DAT_14ca93b58 = 0;
    _DAT_14ca93b40 = DAT_14ca88ec8;
    DAT_14ca88ec8 = &DAT_14ca93b30;
    FUN_146138d74();
    FUN_1407e00cc(&DAT_14ca88eb8);
  }
  return &DAT_14ca88eb8;
}



// FUNCTION 146138d74 FUN_146138d74 body=133 status=ok
// SIG undefined FUN_146138d74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146138d74(void)

{
  _DAT_14ca93b60 = L"BASE";
  DAT_14ca93b8a = 4;
  FUN_145ccb258();
  _DAT_14ca93b70 = DAT_14ca88ec8;
  _DAT_14ca93b68 = &DAT_14ca93948;
  _DAT_14ca93b78 = &LAB_14682652b;
  DAT_14ca88ec8 = &DAT_14ca93b60;
  DAT_14ca88f1d = DAT_14ca88f1d + '\x01';
  _DAT_14ca93b80 = 0x100000000;
  if (DAT_14ca939ac != '\0') {
    DAT_14ca88f1e = DAT_14ca88f1e + '\x01';
  }
  return;
}



// FUNCTION 146138dfa FUN_146138dfa body=284 status=ok
// SIG undefined FUN_146138dfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146138dfa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca890f0) {
    FUN_144b3d300(&DAT_14ca890f0);
    if (DAT_14ca890f0 == -1) {
      FUN_146138f16();
      FUN_140db5666(&DAT_14ca89048,0,&DAT_14ca88fe0,L"FClearReplacementCS_Texture2D_Sint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147418ecc,
                    FUN_147418e74,&LAB_147418e70,&LAB_147418e6c,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca89048 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f201f);
      _Init_thread_footer(&DAT_14ca890f0);
    }
  }
  return &DAT_14ca89048;
}



// FUNCTION 146138f16 FUN_146138f16 body=313 status=ok
// SIG undefined FUN_146138f16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146138f16(void)

{
  if ((DAT_14ca89047 & 2) == 0) {
    DAT_14ca89047 = DAT_14ca89047 | 2;
    _DAT_14ca88fe8 = L"FClearReplacementCS_Texture2D_Sint4_Bounds";
    _DAT_14ca89000 = FUN_146826540;
    _DAT_14ca89008 = FUN_146825d77;
    _DAT_14ca89010 = FUN_146825fd6;
    _DAT_14ca89018 = FUN_1407e02ea;
    _DAT_14ca89020 = FUN_146826273;
    _DAT_14ca88ff8 = FUN_147418e3c;
    _DAT_14ca89038 = 0xffffffff00000100;
    _DAT_14ca89040 = 8;
    DAT_14ca89044 = 0;
    _DAT_14ca89028 = &LAB_147418e68;
    _DAT_14ca93b90 = L"ClearResourceParam";
    DAT_14ca93bba = FUN_140850cc5();
    _DAT_14ca93b98 = FUN_140fb78d0();
    _DAT_14ca93ba8 = &LAB_14682652b;
    _DAT_14ca93bb0 = 0x1000000f8;
    _DAT_14ca93bb8 = 0;
    _DAT_14ca93ba0 = DAT_14ca88ff0;
    DAT_14ca88ff0 = &DAT_14ca93b90;
    FUN_146139050();
    FUN_1407e00cc(&DAT_14ca88fe0);
  }
  return &DAT_14ca88fe0;
}



// FUNCTION 146139050 FUN_146139050 body=133 status=ok
// SIG undefined FUN_146139050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146139050(void)

{
  _DAT_14ca93bc0 = L"BASE";
  DAT_14ca93bea = 4;
  FUN_145ccb258();
  _DAT_14ca93bd0 = DAT_14ca88ff0;
  _DAT_14ca93bc8 = &DAT_14ca93948;
  _DAT_14ca93bd8 = &LAB_14682652b;
  DAT_14ca88ff0 = &DAT_14ca93bc0;
  DAT_14ca89045 = DAT_14ca89045 + '\x01';
  _DAT_14ca93be0 = 0x100000000;
  if (DAT_14ca939ac != '\0') {
    DAT_14ca89046 = DAT_14ca89046 + '\x01';
  }
  return;
}



// FUNCTION 1461390d6 FUN_1461390d6 body=284 status=ok
// SIG undefined FUN_1461390d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461390d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca89218) {
    FUN_144b3d300(&DAT_14ca89218);
    if (DAT_14ca89218 == -1) {
      FUN_1461391f2();
      FUN_140db5666(&DAT_14ca89170,0,&DAT_14ca89108,
                    L"FClearReplacementCS_Texture2DArray_Sint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147418ffe,
                    FUN_147418fa6,&LAB_147418fa2,&LAB_147418f9e,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca89170 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f202b);
      _Init_thread_footer(&DAT_14ca89218);
    }
  }
  return &DAT_14ca89170;
}



// FUNCTION 1461391f2 FUN_1461391f2 body=313 status=ok
// SIG undefined FUN_1461391f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461391f2(void)

{
  if ((DAT_14ca8916f & 2) == 0) {
    DAT_14ca8916f = DAT_14ca8916f | 2;
    _DAT_14ca89110 = L"FClearReplacementCS_Texture2DArray_Sint4_Bounds";
    _DAT_14ca89128 = FUN_146826540;
    _DAT_14ca89130 = FUN_146825d77;
    _DAT_14ca89138 = FUN_146825fd6;
    _DAT_14ca89140 = FUN_1407e02ea;
    _DAT_14ca89148 = FUN_146826273;
    _DAT_14ca89120 = FUN_147418f6e;
    _DAT_14ca89160 = 0xffffffff00000100;
    _DAT_14ca89168 = 8;
    DAT_14ca8916c = 0;
    _DAT_14ca89150 = &LAB_147418f9a;
    _DAT_14ca93bf0 = L"ClearResourceParam";
    DAT_14ca93c1a = FUN_140850cc5();
    _DAT_14ca93bf8 = FUN_140fb78d0();
    _DAT_14ca93c08 = &LAB_14682652b;
    _DAT_14ca93c10 = 0x1000000f8;
    _DAT_14ca93c18 = 0;
    _DAT_14ca93c00 = DAT_14ca89118;
    DAT_14ca89118 = &DAT_14ca93bf0;
    FUN_14613932c();
    FUN_1407e00cc(&DAT_14ca89108);
  }
  return &DAT_14ca89108;
}



// FUNCTION 14613932c FUN_14613932c body=133 status=ok
// SIG undefined FUN_14613932c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613932c(void)

{
  _DAT_14ca93c20 = L"BASE";
  DAT_14ca93c4a = 4;
  FUN_145ccb258();
  _DAT_14ca93c30 = DAT_14ca89118;
  _DAT_14ca93c28 = &DAT_14ca93948;
  _DAT_14ca93c38 = &LAB_14682652b;
  DAT_14ca89118 = &DAT_14ca93c20;
  DAT_14ca8916d = DAT_14ca8916d + '\x01';
  _DAT_14ca93c40 = 0x100000000;
  if (DAT_14ca939ac != '\0') {
    DAT_14ca8916e = DAT_14ca8916e + '\x01';
  }
  return;
}



// FUNCTION 1461393b2 FUN_1461393b2 body=284 status=ok
// SIG undefined FUN_1461393b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461393b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8fa18) {
    FUN_144b3d300(&DAT_14ca8fa18);
    if (DAT_14ca8fa18 == -1) {
      FUN_1461394ce();
      FUN_140db5666(&DAT_14ca8f970,0,&DAT_14ca8f908,L"FReadTextureExternalPS",
                    L"/Engine/Private/MediaShaders.usf",L"ReadTextureExternalPS",3,1,FUN_1474207dc,
                    FUN_147420784,&LAB_147420780,&LAB_14742077c,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14ca8f970 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7f86);
      _Init_thread_footer(&DAT_14ca8fa18);
    }
  }
  return &DAT_14ca8f970;
}



// FUNCTION 1461394ce FUN_1461394ce body=313 status=ok
// SIG undefined FUN_1461394ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461394ce(void)

{
  if ((DAT_14ca8f96f & 2) == 0) {
    DAT_14ca8f96f = DAT_14ca8f96f | 2;
    _DAT_14ca8f910 = L"FReadTextureExternalPS";
    _DAT_14ca8f928 = FUN_146826540;
    _DAT_14ca8f930 = FUN_146825d77;
    _DAT_14ca8f938 = FUN_146825fd6;
    _DAT_14ca8f940 = FUN_1407e02ea;
    _DAT_14ca8f948 = FUN_146826273;
    _DAT_14ca8f920 = FUN_14742074c;
    _DAT_14ca8f960 = 0xffffffff000000e8;
    _DAT_14ca8f968 = 8;
    DAT_14ca8f96c = 0;
    _DAT_14ca8f950 = &LAB_147420778;
    _DAT_14ca91998 = L"InTexture";
    DAT_14ca919c2 = FUN_140850cc5();
    _DAT_14ca919a0 = FUN_140fb78d0();
    _DAT_14ca919b0 = &LAB_14682652b;
    _DAT_14ca919b8 = 0x1000000e0;
    _DAT_14ca919c0 = 0;
    _DAT_14ca919a8 = DAT_14ca8f918;
    DAT_14ca8f918 = &DAT_14ca91998;
    FUN_146139608();
    FUN_1407e00cc(&DAT_14ca8f908);
  }
  return &DAT_14ca8f908;
}



// FUNCTION 146139608 FUN_146139608 body=133 status=ok
// SIG undefined FUN_146139608(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146139608(void)

{
  _DAT_14ca94968 = L"BASE";
  DAT_14ca94992 = 4;
  FUN_140b35ae4();
  _DAT_14ca94978 = DAT_14ca8f918;
  _DAT_14ca94970 = &DAT_14ca8c6c8;
  _DAT_14ca94980 = &LAB_14682652b;
  DAT_14ca8f918 = &DAT_14ca94968;
  DAT_14ca8f96d = DAT_14ca8f96d + '\x01';
  _DAT_14ca94988 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8f96e = DAT_14ca8f96e + '\x01';
  }
  return;
}



// FUNCTION 14613968e FUN_14613968e body=284 status=ok
// SIG undefined FUN_14613968e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613968e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90640) {
    FUN_144b3d300(&DAT_14ca90640);
    if (DAT_14ca90640 == -1) {
      FUN_1461397aa();
      FUN_140db5666(&DAT_14ca90598,0,&DAT_14ca90530,L"TOneColorVSfalsefalse",
                    L"/Engine/Private/OneColorShader.usf",L"MainVertexShader",0,1,FUN_1474216c8,
                    FUN_147421668,&LAB_147421664,&LAB_147421660,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14ca90598 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f81f2);
      _Init_thread_footer(&DAT_14ca90640);
    }
  }
  return &DAT_14ca90598;
}



// FUNCTION 1461397aa FUN_1461397aa body=313 status=ok
// SIG undefined FUN_1461397aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461397aa(void)

{
  if ((DAT_14ca90597 & 2) == 0) {
    DAT_14ca90597 = DAT_14ca90597 | 2;
    _DAT_14ca90538 = L"TOneColorVSfalsefalse";
    _DAT_14ca90550 = FUN_146826540;
    _DAT_14ca90558 = FUN_146825d77;
    _DAT_14ca90560 = FUN_146825fd6;
    _DAT_14ca90568 = FUN_1407e02ea;
    _DAT_14ca90570 = FUN_146826273;
    _DAT_14ca90548 = FUN_147421630;
    _DAT_14ca90588 = 0xffffffff000000e8;
    _DAT_14ca90590 = 8;
    DAT_14ca90594 = 0;
    _DAT_14ca90578 = &LAB_14742165c;
    _DAT_14ca94b48 = L"DepthParameter";
    DAT_14ca94b72 = FUN_140850cc5();
    _DAT_14ca94b50 = FUN_140ec6960();
    _DAT_14ca94b60 = &LAB_14682652b;
    _DAT_14ca94b68 = 0x1000000e0;
    _DAT_14ca94b70 = 0;
    _DAT_14ca94b58 = DAT_14ca90540;
    DAT_14ca90540 = &DAT_14ca94b48;
    FUN_1461398e4();
    FUN_1407e00cc(&DAT_14ca90530);
    return;
  }
  return;
}



// FUNCTION 1461398e4 FUN_1461398e4 body=133 status=ok
// SIG undefined FUN_1461398e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461398e4(void)

{
  _DAT_14ca94b78 = L"BASE";
  DAT_14ca94ba2 = 4;
  FUN_140b35ae4();
  _DAT_14ca94b88 = DAT_14ca90540;
  _DAT_14ca94b80 = &DAT_14ca8c6c8;
  _DAT_14ca94b90 = &LAB_14682652b;
  DAT_14ca90540 = &DAT_14ca94b78;
  DAT_14ca90595 = DAT_14ca90595 + '\x01';
  _DAT_14ca94b98 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca90596 = DAT_14ca90596 + '\x01';
  }
  return;
}



// FUNCTION 14613996a FUN_14613996a body=284 status=ok
// SIG undefined FUN_14613996a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14613996a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90768) {
    FUN_144b3d300(&DAT_14ca90768);
    if (DAT_14ca90768 == -1) {
      FUN_146139a86();
      FUN_140db5666(&DAT_14ca906c0,0,&DAT_14ca90658,L"TOneColorVSfalsetrue",
                    L"/Engine/Private/OneColorShader.usf",L"MainVertexShader",0,1,FUN_1474217fa,
                    FUN_14742179a,&LAB_147421796,&LAB_147421792,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14ca906c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f81fe);
      _Init_thread_footer(&DAT_14ca90768);
    }
  }
  return &DAT_14ca906c0;
}



// FUNCTION 146139a86 FUN_146139a86 body=313 status=ok
// SIG undefined FUN_146139a86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146139a86(void)

{
  if ((DAT_14ca906bf & 2) == 0) {
    DAT_14ca906bf = DAT_14ca906bf | 2;
    _DAT_14ca90660 = L"TOneColorVSfalsetrue";
    _DAT_14ca90678 = FUN_146826540;
    _DAT_14ca90680 = FUN_146825d77;
    _DAT_14ca90688 = FUN_146825fd6;
    _DAT_14ca90690 = FUN_1407e02ea;
    _DAT_14ca90698 = FUN_146826273;
    _DAT_14ca90670 = FUN_147421762;
    _DAT_14ca906b0 = 0xffffffff000000e8;
    _DAT_14ca906b8 = 8;
    DAT_14ca906bc = 0;
    _DAT_14ca906a0 = &LAB_14742178e;
    _DAT_14ca94ba8 = L"DepthParameter";
    DAT_14ca94bd2 = FUN_140850cc5();
    _DAT_14ca94bb0 = FUN_140ec6960();
    _DAT_14ca94bc0 = &LAB_14682652b;
    _DAT_14ca94bc8 = 0x1000000e0;
    _DAT_14ca94bd0 = 0;
    _DAT_14ca94bb8 = DAT_14ca90668;
    DAT_14ca90668 = &DAT_14ca94ba8;
    FUN_146139bc0();
    FUN_1407e00cc(&DAT_14ca90658);
    return;
  }
  return;
}



// FUNCTION 146139bc0 FUN_146139bc0 body=133 status=ok
// SIG undefined FUN_146139bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146139bc0(void)

{
  _DAT_14ca94bd8 = L"BASE";
  DAT_14ca94c02 = 4;
  FUN_140b35ae4();
  _DAT_14ca94be8 = DAT_14ca90668;
  _DAT_14ca94be0 = &DAT_14ca8c6c8;
  _DAT_14ca94bf0 = &LAB_14682652b;
  DAT_14ca90668 = &DAT_14ca94bd8;
  DAT_14ca906bd = DAT_14ca906bd + '\x01';
  _DAT_14ca94bf8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca906be = DAT_14ca906be + '\x01';
  }
  return;
}



// FUNCTION 146139c46 FUN_146139c46 body=284 status=ok
// SIG undefined FUN_146139c46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146139c46(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90890) {
    FUN_144b3d300(&DAT_14ca90890);
    if (DAT_14ca90890 == -1) {
      FUN_146139d62();
      FUN_140db5666(&DAT_14ca907e8,0,&DAT_14ca90780,L"TOneColorVStruetrue",
                    L"/Engine/Private/OneColorShader.usf",L"MainVertexShader",0,1,FUN_14742192c,
                    FUN_1474218cc,&LAB_1474218c8,&LAB_1474218c4,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14ca907e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f820a);
      _Init_thread_footer(&DAT_14ca90890);
    }
  }
  return &DAT_14ca907e8;
}



// FUNCTION 146139d62 FUN_146139d62 body=313 status=ok
// SIG undefined FUN_146139d62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146139d62(void)

{
  if ((DAT_14ca907e7 & 2) == 0) {
    DAT_14ca907e7 = DAT_14ca907e7 | 2;
    _DAT_14ca90788 = L"TOneColorVStruetrue";
    _DAT_14ca907a0 = FUN_146826540;
    _DAT_14ca907a8 = FUN_146825d77;
    _DAT_14ca907b0 = FUN_146825fd6;
    _DAT_14ca907b8 = FUN_1407e02ea;
    _DAT_14ca907c0 = FUN_146826273;
    _DAT_14ca90798 = FUN_147421894;
    _DAT_14ca907d8 = 0xffffffff000000e8;
    _DAT_14ca907e0 = 8;
    DAT_14ca907e4 = 0;
    _DAT_14ca907c8 = &LAB_1474218c0;
    _DAT_14ca94c08 = L"DepthParameter";
    DAT_14ca94c32 = FUN_140850cc5();
    _DAT_14ca94c10 = FUN_140ec6960();
    _DAT_14ca94c20 = &LAB_14682652b;
    _DAT_14ca94c28 = 0x1000000e0;
    _DAT_14ca94c30 = 0;
    _DAT_14ca94c18 = DAT_14ca90790;
    DAT_14ca90790 = &DAT_14ca94c08;
    FUN_146139e9c();
    FUN_1407e00cc(&DAT_14ca90780);
    return;
  }
  return;
}



// FUNCTION 146139e9c FUN_146139e9c body=133 status=ok
// SIG undefined FUN_146139e9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146139e9c(void)

{
  _DAT_14ca94c38 = L"BASE";
  DAT_14ca94c62 = 4;
  FUN_140b35ae4();
  _DAT_14ca94c48 = DAT_14ca90790;
  _DAT_14ca94c40 = &DAT_14ca8c6c8;
  _DAT_14ca94c50 = &LAB_14682652b;
  DAT_14ca90790 = &DAT_14ca94c38;
  DAT_14ca907e5 = DAT_14ca907e5 + '\x01';
  _DAT_14ca94c58 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca907e6 = DAT_14ca907e6 + '\x01';
  }
  return;
}



// FUNCTION 146139f22 FUN_146139f22 body=284 status=ok
// SIG undefined FUN_146139f22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146139f22(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caada00) {
    FUN_144b3d300(&DAT_14caada00);
    if (DAT_14caada00 == -1) {
      FUN_14613a03e();
      FUN_140db5666(&DAT_14caad958,0,&DAT_14caad8f0,L"FSlateDebugBatchingPS",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"DebugBatchingMain",3,1,
                    FUN_14750f284,FUN_14750f226,&LAB_14750f222,&LAB_14750f21e,&LAB_14712ac0c,
                    &LAB_14712ac08,0x120,0);
      _DAT_14caad958 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c5fbf);
      _Init_thread_footer(&DAT_14caada00);
    }
  }
  return &DAT_14caad958;
}



// FUNCTION 14613a03e FUN_14613a03e body=313 status=ok
// SIG undefined FUN_14613a03e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613a03e(void)

{
  if ((DAT_14caad957 & 2) == 0) {
    DAT_14caad957 = DAT_14caad957 | 2;
    _DAT_14caad8f8 = L"FSlateDebugBatchingPS";
    _DAT_14caad910 = FUN_146826540;
    _DAT_14caad918 = FUN_146825d77;
    _DAT_14caad920 = FUN_146825fd6;
    _DAT_14caad928 = FUN_1407e02ea;
    _DAT_14caad930 = FUN_146826273;
    _DAT_14caad908 = FUN_14750f1f0;
    _DAT_14caad948 = 0xffffffff00000120;
    _DAT_14caad950 = 8;
    DAT_14caad954 = 0;
    _DAT_14caad938 = &LAB_14750f21a;
    _DAT_14cab0aa8 = L"BatchColor";
    DAT_14cab0ad2 = FUN_140850cc5();
    _DAT_14cab0ab0 = FUN_140ec6960();
    _DAT_14cab0ac0 = &LAB_14682652b;
    _DAT_14cab0ac8 = 0x100000118;
    _DAT_14cab0ad0 = 0;
    _DAT_14cab0ab8 = DAT_14caad900;
    DAT_14caad900 = &DAT_14cab0aa8;
    FUN_14613a178();
    FUN_1407e00cc(&DAT_14caad8f0);
    return;
  }
  return;
}



// FUNCTION 14613a178 FUN_14613a178 body=133 status=ok
// SIG undefined FUN_14613a178(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14613a178(void)

{
  _DAT_14cab0f90 = L"BASE";
  DAT_14cab0fba = 4;
  FUN_1413f4858();
  _DAT_14cab0fa0 = DAT_14caad900;
  _DAT_14cab0f98 = &DAT_14caad3e0;
  _DAT_14cab0fa8 = &LAB_14682652b;
  DAT_14caad900 = &DAT_14cab0f90;
  DAT_14caad955 = DAT_14caad955 + '\x01';
  _DAT_14cab0fb0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caad956 = DAT_14caad956 + '\x01';
  }
  return;
}



// FUNCTION 14613a1fe FUN_14613a1fe body=134 status=ok
// SIG undefined FUN_14613a1fe(void)

void FUN_14613a1fe(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_1414b3267(param_2);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar5 = (ulonglong)
            *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (uVar5 != 0xffffffffffffffff) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1414b3116(uVar5 * 0x78 + lVar1,param_2);
        if (cVar2 != '\0') {
          FUN_14613a284(param_1,uVar5 & 0xffffffff);
          return;
        }
        uVar5 = (ulonglong)*(int *)(lVar1 + 0x70 + uVar5 * 0x78);
      } while (uVar5 != 0xffffffffffffffff);
    }
  }
  return;
}



// FUNCTION 14613a284 FUN_14613a284 body=113 status=ok
// SIG undefined FUN_14613a284(void)

void FUN_14613a284(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x78;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x74 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x78 + 0x70);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x70);
  FUN_140d5fbf2(lVar2 + *param_1);
  FUN_14613a2f6(param_1,param_2);
  return;
}



// FUNCTION 14613a2f6 FUN_14613a2f6 body=118 status=ok
// SIG undefined FUN_14613a2f6(void)

void FUN_14613a2f6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
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



// FUNCTION 14613a36c FUN_14613a36c body=135 status=ok
// SIG undefined FUN_14613a36c(void)

void FUN_14613a36c(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &LAB_1459a1f08;
  local_60 = 0;
  FUN_14613a3f4(local_58,param_1);
  FUN_14126834e(&DAT_14cb10ae8,&local_68,local_58);
  FUN_1401cb1ee(local_58);
  *(undefined1 **)(param_1 + 0xa0) = local_68;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14613a3f4 FUN_14613a3f4 body=229 status=ok
// SIG undefined FUN_14613a3f4(void)

LPCRITICAL_SECTION FUN_14613a3f4(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 *param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  _LIST_ENTRY *p_Var5;
  
  DVar1 = *(DWORD *)(param_3 + 1);
  uVar2 = *param_3;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var3 = param_1[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var3 = &PTR_FUN_14b5a3840;
  (p_Var3->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var3->ProcessLocksList).Blink,param_2);
  p_Var3->Flags = DVar1;
  p_Var3->EntryCount = (int)uVar2;
  p_Var3->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14613a4da FUN_14613a4da body=214 status=ok
// SIG undefined FUN_14613a4da(void)

void FUN_14613a4da(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_14613a5b0();
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar3);
  }
  *(longlong **)(param_1 + 0x1e0) = plVar3;
  (**(code **)(*plVar3 + 0x2a0))(plVar3);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    lVar4 = FUN_1400f6e4c();
    lVar5 = *(longlong *)(param_1 + 0x1e0);
    if ((((lVar5 != 0) && (lVar4 != 0)) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar5);
      }
      bVar2 = DAT_14c950c29;
      *(longlong *)(param_1 + 0x518) = lVar5;
      if ((bVar2 & 1) != 0) {
        FUN_1456cec3c(lVar5);
        lVar5 = *(longlong *)(param_1 + 0x518);
      }
      goto LAB_14613a565;
    }
  }
  *(undefined8 *)(param_1 + 0x518) = 0;
  lVar5 = 0;
LAB_14613a565:
  *(longlong *)(param_1 + 0x438) = lVar5;
  return;
}



// FUNCTION 14613a5b0 FUN_14613a5b0 body=150 status=ok
// SIG undefined FUN_14613a5b0(void)

undefined8 FUN_14613a5b0(undefined8 param_1)

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
  uVar1 = FUN_1400f6e4c();
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


