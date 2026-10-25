// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14903b55a FUN_14903b55a body=313 status=ok
// SIG undefined FUN_14903b55a(void)

void FUN_14903b55a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903b65a:
    *puVar5 = &PTR_LAB_14ba6dcd0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6dc60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903b65a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ba6dcd0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6dc60;
    puVar5[3] = uVar10;
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
                    /* WARNING: Could not recover jumptable at 0x00014903b656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903b694 FUN_14903b694 body=91 status=ok
// SIG undefined FUN_14903b694(void)

undefined8 FUN_14903b694(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x368) != 0) && (*(longlong **)(param_1 + 0x360) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x360) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x368) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x360);
      }
                    /* WARNING: Could not recover jumptable at 0x00014903b6df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14903b6f0 FUN_14903b6f0 body=374 status=ok
// SIG undefined FUN_14903b6f0(void)

void FUN_14903b6f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 2) {
    if (*(int *)(param_1 + 0x318) == 0) goto LAB_14903b859;
    lVar5 = *(longlong *)(param_1 + 0x310);
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 0) {
        if ((*(longlong *)(param_1 + 0x268) != 0) && ((longlong)*(int *)(param_1 + 0x2c0) != 0)) {
          puVar6 = *(undefined8 **)(param_1 + 0x2b8);
          puVar7 = puVar6 + (longlong)*(int *)(param_1 + 0x2c0) * 2;
          do {
            plVar3 = (longlong *)*puVar6;
            plVar4 = (longlong *)puVar6[1];
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            local_48 = *(undefined8 *)(param_1 + 0x268);
            local_40 = *(longlong **)(param_1 + 0x270);
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
            plVar3 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_40 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
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
            puVar6 = puVar6 + 2;
          } while (puVar6 != puVar7);
        }
        if ((*(int *)(param_1 + 0x2f8) != 0) && (*(longlong **)(param_1 + 0x2f0) != (longlong *)0x0)
           ) {
          (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x60))();
        }
      }
      goto LAB_14903b859;
    }
    if (*(int *)(param_1 + 0x308) == 0) goto LAB_14903b859;
    lVar5 = *(longlong *)(param_1 + 0x300);
  }
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
LAB_14903b859:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903b87e FUN_14903b87e body=228 status=ok
// SIG undefined FUN_14903b87e(void)

void FUN_14903b87e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c98e618 != 0) && (*(char *)(DAT_14c98e618 + 0x130) == '\x01')) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    puVar3 = local_40;
    local_38 = 2;
    *local_40 = &PTR_LAB_149ed0600;
    uVar4 = FUN_144a3f946();
    puVar3[2] = uVar4;
    *puVar3 = &PTR_FUN_14ba6e770;
    puVar3[3] = param_1;
    FUN_14697ef1e(param_1,local_30,0,&local_40);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903b964 FUN_14903b964 body=127 status=ok
// SIG undefined FUN_14903b964(void)

void FUN_14903b964(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140009b9a(local_28);
  if ((*(int *)(param_1 + 0x328) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 800), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_28);
  }
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903b9e4 FUN_14903b9e4 body=150 status=ok
// SIG undefined FUN_14903b9e4(void)

void FUN_14903b9e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140009b9a(local_38);
  FUN_140008f88(param_1 + 0x2e0,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((*(int *)(param_1 + 0x338) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x330), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1 + 0x2e0);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903ba7c FUN_14903ba7c body=385 status=ok
// SIG undefined FUN_14903ba7c(void)

void FUN_14903ba7c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong *local_78 [2];
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_2[1] < 2) {
    FUN_1469aa896(DAT_14c98e618);
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 1;
    local_40 = 0;
    uStack_38 = 0;
    FUN_14697d4de(param_1,&local_58);
    FUN_14576702a(&local_58);
  }
  else {
    if (((*(int *)(param_1 + 0x3c8) == 0) || (*(longlong **)(param_1 + 0x3c0) == (longlong *)0x0))
       || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x30))(), cVar3 == '\0')) {
      FUN_140009b9a(&local_58,param_2);
      FUN_14697e8c0(param_1,&local_58);
      local_78[0] = local_58;
    }
    else {
      FUN_140009b9a(local_78,param_2);
      if (*(int *)(param_1 + 0x3c8) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x3c0);
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,&local_68,local_78);
      local_58 = local_68;
      plStack_50 = plStack_60;
      local_68 = (longlong *)0x0;
      plStack_60 = (longlong *)0x0;
      local_48 = 1;
      local_40 = 0;
      uStack_38 = 0;
      FUN_14697d4de(param_1,&local_58);
      FUN_14576702a(&local_58);
      plVar4 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_60)(plStack_60);
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
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    FUN_1469aa8f6(DAT_14c98e618,1);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14903bbfe FUN_14903bbfe body=313 status=ok
// SIG undefined FUN_14903bbfe(void)

void FUN_14903bbfe(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903bcfe:
    *puVar5 = &PTR_LAB_14ba6df70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6df00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903bcfe;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ba6df70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6df00;
    puVar5[3] = uVar10;
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
                    /* WARNING: Could not recover jumptable at 0x00014903bcfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903bd38 FUN_14903bd38 body=100 status=ok
// SIG undefined FUN_14903bd38(void)

undefined8 FUN_14903bd38(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x378) != 0) && (*(longlong **)(param_1 + 0x370) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x370) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x378) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x370);
      }
                    /* WARNING: Could not recover jumptable at 0x00014903bd8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14903bd9c FUN_14903bd9c body=313 status=ok
// SIG undefined FUN_14903bd9c(void)

void FUN_14903bd9c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903be9c:
    *puVar5 = &PTR_LAB_14ba6e050;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6dfe0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903be9c;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ba6e050;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6dfe0;
    puVar5[3] = uVar10;
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
                    /* WARNING: Could not recover jumptable at 0x00014903be98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903bed6 FUN_14903bed6 body=113 status=ok
// SIG undefined FUN_14903bed6(void)

undefined8 FUN_14903bed6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x388) != 0) && (*(longlong **)(param_1 + 0x380) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x380) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x388) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x380);
      }
                    /* WARNING: Could not recover jumptable at 0x00014903bf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14903bf48 FUN_14903bf48 body=313 status=ok
// SIG undefined FUN_14903bf48(void)

void FUN_14903bf48(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903c048:
    *puVar5 = &PTR_LAB_14ba6e130;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6e0c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903c048;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ba6e130;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6e0c0;
    puVar5[3] = uVar10;
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
                    /* WARNING: Could not recover jumptable at 0x00014903c044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903c082 FUN_14903c082 body=413 status=ok
// SIG undefined FUN_14903c082(void)

undefined4 FUN_14903c082(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(param_1 + 0x348) != 0) && (*(longlong **)(param_1 + 0x340) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x30))();
    if (cVar4 != '\0') {
      local_68 = (void *)0x0;
      uVar1 = *(uint *)(param_3 + 1);
      pvVar3 = (void *)*param_3;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_60 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_68,uVar1,0);
        memcpy(local_68,pvVar3,(longlong)(int)uVar1 * 2);
      }
      local_78 = (void *)0x0;
      iVar2 = (int)param_2[1];
      pvVar3 = (void *)*param_2;
      uStack_70._0_4_ = iVar2;
      if ((longlong)iVar2 == 0) {
        uStack_70._4_4_ = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar2,0);
        memcpy(local_78,pvVar3,(longlong)iVar2 * 2);
      }
      if (*(int *)(param_1 + 0x348) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x340);
      }
      local_48 = local_68;
      uStack_40 = uStack_60;
      local_68 = (void *)0x0;
      uStack_60 = 0;
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      iStack_50 = (int)uStack_70;
      uStack_4c = uStack_70._4_4_;
      local_78 = (void *)0x0;
      uStack_70 = 0;
      uVar5 = (**(code **)(*plVar6 + 0x58))();
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14903c1be;
    }
  }
  uVar5 = 0;
LAB_14903c1be:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903c220 FUN_14903c220 body=313 status=ok
// SIG undefined FUN_14903c220(void)

void FUN_14903c220(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903c320:
    *puVar5 = &PTR_LAB_14ba6e210;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6e1a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903c320;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ba6e210;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6e1a0;
    puVar5[3] = uVar10;
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
                    /* WARNING: Could not recover jumptable at 0x00014903c31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903c35a FUN_14903c35a body=91 status=ok
// SIG undefined FUN_14903c35a(void)

undefined8 FUN_14903c35a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 1000) != 0) && (*(longlong **)(param_1 + 0x3e0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 1000) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x3e0);
      }
                    /* WARNING: Could not recover jumptable at 0x00014903c3a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14903c3b6 FUN_14903c3b6 body=91 status=ok
// SIG undefined FUN_14903c3b6(void)

undefined8 FUN_14903c3b6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3f8) != 0) && (*(longlong **)(param_1 + 0x3f0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3f8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x3f0);
      }
                    /* WARNING: Could not recover jumptable at 0x00014903c401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14903c412 FUN_14903c412 body=313 status=ok
// SIG undefined FUN_14903c412(void)

void FUN_14903c412(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903c512:
    *puVar5 = &PTR_LAB_14ba6e2f0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6e280;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903c512;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ba6e2f0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6e280;
    puVar5[3] = uVar10;
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
                    /* WARNING: Could not recover jumptable at 0x00014903c50e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903c54c FUN_14903c54c body=91 status=ok
// SIG undefined FUN_14903c54c(void)

undefined8 FUN_14903c54c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x408) != 0) && (*(longlong **)(param_1 + 0x400) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x400) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x408) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x400);
      }
                    /* WARNING: Could not recover jumptable at 0x00014903c597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14903c5a8 FUN_14903c5a8 body=313 status=ok
// SIG undefined FUN_14903c5a8(void)

void FUN_14903c5a8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903c6a8:
    *puVar5 = &PTR_LAB_14ba6e3d0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6e360;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903c6a8;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ba6e3d0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6e360;
    puVar5[3] = uVar10;
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
                    /* WARNING: Could not recover jumptable at 0x00014903c6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903c6e2 FUN_14903c6e2 body=91 status=ok
// SIG undefined FUN_14903c6e2(void)

undefined8 FUN_14903c6e2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x398) != 0) && (*(longlong **)(param_1 + 0x390) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x390) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x398) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x390);
      }
                    /* WARNING: Could not recover jumptable at 0x00014903c72d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14903c73e FUN_14903c73e body=313 status=ok
// SIG undefined FUN_14903c73e(void)

void FUN_14903c73e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903c83e:
    *puVar5 = &PTR_LAB_149e020b0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6de20;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903c83e;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6de20;
    puVar5[3] = uVar10;
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
                    /* WARNING: Could not recover jumptable at 0x00014903c83a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903c896 FUN_14903c896 body=1975 status=ok
// SIG undefined FUN_14903c896(void)

void FUN_14903c896(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 unaff_RBP;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_3a8 [32];
  code **local_388;
  float *local_380;
  undefined4 *local_378;
  undefined1 local_370;
  code **local_368;
  undefined1 *local_360;
  undefined1 local_358;
  float local_344;
  float local_340;
  undefined4 local_33c;
  longlong *local_338;
  longlong *local_330;
  code *local_328;
  longlong *local_320;
  undefined8 local_318;
  longlong *plStack_310;
  undefined8 *local_308;
  longlong *local_300;
  code *local_2f8;
  undefined8 uStack_2f0;
  undefined2 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  double local_2c0;
  double dStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [8];
  longlong *local_290;
  code *local_288;
  undefined4 local_280;
  undefined1 local_272;
  undefined1 local_271;
  undefined1 local_270 [8];
  undefined1 local_268 [104];
  undefined2 local_200;
  undefined1 local_1f8 [176];
  undefined1 *local_148;
  int local_140;
  undefined1 local_9f;
  undefined1 local_9d;
  undefined1 local_9a;
  double local_88;
  double dStack_80;
  undefined1 local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  FUN_145aad25c(local_270);
  local_2c0 = (double)(param_2[2] - *param_2);
  dStack_2b8 = (double)(param_2[3] - param_2[1]);
  local_2b0 = 1;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_78 = 1;
  local_88 = local_2c0;
  dStack_80 = dStack_2b8;
  FUN_144a450dc(local_70,&local_2a8);
  FUN_1449db362(&local_2a8);
  local_9f = 0;
  local_9d = 0;
  local_9a = 1;
  local_2f8 = FUN_14903de34;
  uStack_2f0 = (longlong *)((ulonglong)uStack_2f0._4_4_ << 0x20);
  FUN_14903dd3c(local_270,param_1);
  local_2d8 = CONCAT11(1,DAT_14c96b238);
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_200 = local_2d8;
  FUN_144a450dc(local_1f8,&local_2d0);
  FUN_1449db362(&local_2d0);
  local_388 = &local_288;
  FUN_145aad862(&local_2f8,"SViewport",".\\Runtime/WebBrowser/Private/SWebBrowserView.cpp",0x28c);
  plVar4 = uStack_2f0;
  pcVar3 = local_2f8;
  if (uStack_2f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_2f0 + 1) = (int)uStack_2f0[1] + 1;
    UNLOCK();
  }
  FUN_145aaccd2(&local_2f8,local_298,local_270);
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_290 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar1 = (int *)((longlong)local_290 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_290 + 0x10))(local_290);
      }
    }
  }
  plVar13 = uStack_2f0;
  if (uStack_2f0 != (longlong *)0x0) {
    LOCK();
    plVar10 = uStack_2f0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*uStack_2f0)(uStack_2f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  FUN_145aad09e(local_270);
  puVar9 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar12 = *(undefined8 *)(param_1 + 0x268);
  plVar13 = *(longlong **)(param_1 + 0x270);
  if (plVar13 == (longlong *)0x0) {
    *puVar9 = &PTR_FUN_14ba6cf60;
    puVar9[1] = uVar12;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 1;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    *puVar9 = &PTR_FUN_14ba6cf60;
    puVar9[1] = uVar12;
    puVar9[2] = plVar13;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    *(undefined1 *)(puVar9 + 3) = 1;
    LOCK();
    plVar10 = plVar13 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14ba6e750;
  plVar10[2] = (longlong)puVar9;
  *(undefined8 **)(param_1 + 0x298) = puVar9;
  plVar13 = *(longlong **)(param_1 + 0x2a0);
  if (plVar10 == plVar13) {
    if (plVar10 == (longlong *)0x0) goto LAB_14903cb90;
    LOCK();
    plVar13 = plVar10 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar8 = *piVar1;
      UNLOCK();
      plVar13 = plVar10;
      goto joined_r0x00014903cb76;
    }
  }
  else {
    *(longlong **)(param_1 + 0x2a0) = plVar10;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar13 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x00014903cb76:
        if (iVar8 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x298);
  plVar13 = *(longlong **)(param_1 + 0x2a0);
LAB_14903cb90:
  local_308 = puVar9;
  if (plVar13 == (longlong *)0x0) {
    local_300 = (longlong *)0x0;
    FUN_1456f2bd8(pcVar3);
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    local_300 = plVar13;
    FUN_1456f2bd8(pcVar3);
    LOCK();
    plVar10 = plVar13 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  FUN_144a8759e(local_270);
  uVar12 = DAT_14c98e618;
  uVar14 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),DAT_14c96b238);
  plVar13 = *(longlong **)(param_1 + 0x10);
  if (plVar13 == (longlong *)0x0) {
LAB_14903cca3:
    local_318 = 0;
    plStack_310 = (longlong *)0x0;
    FUN_1407c4cd2(uVar12,&local_318,local_270,uVar14 & 0xffffffff);
  }
  else {
    iVar8 = (int)plVar13[1];
    do {
      if (iVar8 == 0) goto LAB_14903cca3;
      LOCK();
      iVar6 = (int)plVar13[1];
      bVar15 = iVar8 == iVar6;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar15);
    uVar5 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar13 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    local_318 = uVar5;
    plStack_310 = plVar13;
    FUN_1407c4cd2(uVar12,&local_318,local_270,uVar14 & 0xffffffff);
    LOCK();
    plVar10 = plVar13 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  cVar7 = FUN_144b010fc(local_270);
  if (cVar7 != '\0') {
    if (plVar4 == (longlong *)0x0) {
      local_328 = pcVar3;
      local_320 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_328 = pcVar3;
      local_320 = plVar4;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar4 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    uVar12 = DAT_14c98e618;
    if (local_148 == (undefined1 *)0x0) {
      local_148 = local_268;
    }
    lVar11 = (longlong)(local_140 + -1);
    local_340 = *(float *)(local_148 + lVar11 * 0x48 + 0x20) * (float)*param_2 +
                *(float *)(local_148 + lVar11 * 0x48 + 0x28) * (float)param_2[1] +
                *(float *)(local_148 + lVar11 * 0x48 + 0x30);
    local_344 = (float)*param_2 * *(float *)(local_148 + lVar11 * 0x48 + 0x1c) +
                (float)param_2[1] * *(float *)(local_148 + lVar11 * 0x48 + 0x24) +
                *(float *)(local_148 + lVar11 * 0x48 + 0x2c);
    local_271 = 0;
    local_288 = DAT_14c84635c;
    local_33c = 1;
    plVar13 = *(longlong **)(param_1 + 0x10);
    if (plVar13 == (longlong *)0x0) {
LAB_14903cdfb:
      local_2f8 = (code *)0x0;
      uStack_2f0 = (longlong *)0x0;
      bVar15 = true;
    }
    else {
      iVar8 = (int)plVar13[1];
      do {
        if (iVar8 == 0) goto LAB_14903cdfb;
        LOCK();
        iVar6 = (int)plVar13[1];
        bVar15 = iVar8 == iVar6;
        if (bVar15) {
          *(int *)(plVar13 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar15);
      pcVar3 = *(code **)(param_1 + 8);
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar13 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      bVar15 = false;
      local_2f8 = pcVar3;
      uStack_2f0 = plVar13;
    }
    plVar13 = uStack_2f0;
    local_360 = &local_272;
    local_368 = &local_288;
    local_378 = &local_33c;
    local_380 = &local_344;
    local_388 = &local_328;
    local_358 = 1;
    local_370 = 0;
    FUN_1428f4aae(uVar12,&local_338,&local_2f8,local_270);
    plVar10 = uStack_2f0;
    if (uStack_2f0 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_2f0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*uStack_2f0)(uStack_2f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (!bVar15) {
      LOCK();
      plVar10 = plVar13 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    uVar12 = (**(code **)(*local_338 + 0x28))();
    local_288 = FUN_14903df70;
    local_280 = 0;
    FUN_14904eac4(&local_2f8,param_1);
    FUN_1469b1686(uVar12,&local_288,&local_2f8);
    FUN_1449db362(&local_2f8);
    plVar10 = local_330;
    *(longlong **)(param_1 + 0x2c8) = local_338;
    plVar13 = *(longlong **)(param_1 + 0x2d0);
    if (plVar13 != local_330) {
      if (local_330 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_330 + 0xc) = *(int *)((longlong)local_330 + 0xc) + 1;
        UNLOCK();
        plVar13 = *(longlong **)(param_1 + 0x2d0);
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x2d0) = plVar10;
      plVar10 = local_330;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar10 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    plVar13 = local_320;
    if (local_320 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_320 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_320)(local_320);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  FUN_1447fa21a(local_270);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar4 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903d04e FUN_14903d04e body=363 status=ok
// SIG undefined FUN_14903d04e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14903d04e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x2c8) != 0) &&
      (plVar4 = *(longlong **)(param_1 + 0x2d0), plVar4 != (longlong *)0x0)) && (0 < (int)plVar4[1])
     ) {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0);
        goto LAB_14903d0da;
      }
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar9 = iVar8 == iVar7;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar9);
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x38))();
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
LAB_14903d0da:
    uVar6 = DAT_14c98e618;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
LAB_14903d132:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar9 = true;
    }
    else {
      iVar8 = (int)plVar4[1];
      do {
        if (iVar8 == 0) goto LAB_14903d132;
        LOCK();
        iVar7 = (int)plVar4[1];
        bVar9 = iVar8 == iVar7;
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar9);
      uVar5 = *(undefined8 *)(param_1 + 8);
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
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      bVar9 = false;
      local_38 = uVar5;
      plStack_30 = plVar4;
    }
    plVar4 = plStack_30;
    FUN_140d673ae(uVar6,&local_38,2);
    plVar1 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (!bVar9) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14903d1ba FUN_14903d1ba body=313 status=ok
// SIG undefined FUN_14903d1ba(void)

void FUN_14903d1ba(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if (*(int *)(param_1 + 1) != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  param_1 = (undefined8 *)*param_1;
  plVar5 = *(longlong **)(param_2 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_14903d2ba:
    *param_1 = &DAT_149efe500;
    uVar9 = FUN_144a3f946();
    param_1[2] = uVar9;
    *param_1 = &PTR_FUN_14ba6e520;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = uVar4;
    *(undefined4 *)(param_1 + 6) = uVar3;
  }
  else {
    iVar7 = (int)plVar5[1];
    do {
      if (iVar7 == 0) goto LAB_14903d2ba;
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar9 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = &DAT_149efe500;
    uVar8 = FUN_144a3f946();
    param_1[2] = uVar8;
    *param_1 = &PTR_FUN_14ba6e520;
    param_1[3] = uVar9;
    param_1[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(param_1 + 6) = uVar3;
    param_1[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014903d2b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903d2f4 FUN_14903d2f4 body=79 status=ok
// SIG undefined FUN_14903d2f4(void)

undefined8 FUN_14903d2f4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3b8) != 0) && (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3b8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x3b0);
      }
                    /* WARNING: Could not recover jumptable at 0x00014903d333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14903d344 FUN_14903d344 body=313 status=ok
// SIG undefined FUN_14903d344(void)

void FUN_14903d344(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903d444:
    *puVar5 = &PTR_LAB_14ba6e600;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6e590;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903d444;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ba6e600;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6e590;
    puVar5[3] = uVar10;
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
                    /* WARNING: Could not recover jumptable at 0x00014903d440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903d47e FUN_14903d47e body=91 status=ok
// SIG undefined FUN_14903d47e(void)

undefined8 FUN_14903d47e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3d8) != 0) && (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3d8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x3d0);
      }
                    /* WARNING: Could not recover jumptable at 0x00014903d4c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14903d4da FUN_14903d4da body=313 status=ok
// SIG undefined FUN_14903d4da(void)

void FUN_14903d4da(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903d5da:
    *puVar5 = &PTR_LAB_14ba6e6e0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6e670;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903d5da;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ba6e6e0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6e670;
    puVar5[3] = uVar10;
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
                    /* WARNING: Could not recover jumptable at 0x00014903d5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903d634 FUN_14903d634 body=761 status=ok
// SIG undefined FUN_14903d634(void)

void FUN_14903d634(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  plVar9 = DAT_14c98e618;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)(param_1 + 0x278) == 0) || (*(longlong *)(param_1 + 0x280) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x280) + 8) < 1)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 == (longlong *)0x0) {
LAB_14903d6cc:
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      bVar12 = true;
    }
    else {
      iVar8 = (int)plVar2[1];
      do {
        if (iVar8 == 0) goto LAB_14903d6cc;
        LOCK();
        iVar6 = (int)plVar2[1];
        bVar12 = iVar8 == iVar6;
        if (bVar12) {
          *(int *)(plVar2 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar12);
      uVar3 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar2 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      bVar12 = false;
      local_78 = uVar3;
      plStack_70 = plVar2;
    }
    plVar2 = plStack_70;
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_50,&local_78);
    plVar10 = local_48;
    *(undefined8 *)(param_1 + 0x278) = local_50;
    plVar9 = *(longlong **)(param_1 + 0x280);
    if (plVar9 != local_48) {
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
        UNLOCK();
        plVar9 = *(longlong **)(param_1 + 0x280);
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x280) = plVar10;
      plVar10 = local_48;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (!bVar12) {
      LOCK();
      plVar9 = plVar2 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    plVar9 = *(longlong **)(param_1 + 0x280);
    if (plVar9 != (longlong *)0x0) {
      iVar8 = (int)plVar9[1];
      do {
        if (iVar8 == 0) goto LAB_14903d908;
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar12 = iVar8 == iVar6;
        if (bVar12) {
          *(int *)(plVar9 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar12);
      lVar4 = *(longlong *)(param_1 + 0x278);
      if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x268) != 0)) {
        iVar8 = *(int *)(lVar4 + 0x568);
        if ((longlong)iVar8 != 0) {
          lVar5 = *(longlong *)(lVar4 + 0x560);
          lVar11 = 0;
          do {
            if (((*(int *)(lVar5 + 8 + lVar11) != 0) &&
                (plVar2 = *(longlong **)(lVar5 + lVar11), plVar2 != (longlong *)0x0)) &&
               (cVar7 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1), cVar7 != '\0'))
            goto LAB_14903d844;
            lVar11 = lVar11 + 0x10;
          } while ((longlong)iVar8 * 0x10 != lVar11);
        }
        local_60 = FUN_14903db12;
        local_58 = 0;
        FUN_14904b574(&local_50,param_1);
        FUN_1448b6402(lVar4 + 0x560,&local_60,&local_50);
        FUN_1449db362(&local_50);
LAB_14903d844:
        iVar8 = *(int *)(lVar4 + 0x540);
        if ((longlong)iVar8 != 0) {
          lVar5 = *(longlong *)(lVar4 + 0x538);
          lVar11 = 0;
          do {
            if (((*(int *)(lVar5 + 8 + lVar11) != 0) &&
                (plVar2 = *(longlong **)(lVar5 + lVar11), plVar2 != (longlong *)0x0)) &&
               (cVar7 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1), cVar7 != '\0'))
            goto LAB_14903d8cb;
            lVar11 = lVar11 + 0x10;
          } while ((longlong)iVar8 * 0x10 != lVar11);
        }
        local_60 = FUN_14903dcb8;
        local_58 = 0;
        FUN_14904b574(&local_50,param_1);
        FUN_1448b6402(lVar4 + 0x538,&local_60,&local_50);
        FUN_1449db362(&local_50);
LAB_14903d8cb:
        plVar2 = *(longlong **)(param_1 + 0x268);
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_88 = lVar4;
        local_80 = plVar9;
        (**(code **)(*plVar2 + 0x158))();
      }
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
LAB_14903d908:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14903d92e FUN_14903d92e body=483 status=ok
// SIG undefined FUN_14903d92e(void)

undefined4
FUN_14903d92e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(longlong *)(param_1 + 0x278) == 0) || (*(longlong *)(param_1 + 0x280) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x280) + 8) < 1)) {
    FUN_14903d634(param_1);
  }
  local_60 = param_8;
  local_68 = param_7;
  local_70 = param_6;
  local_78 = param_5;
  uVar4 = FUN_1400c0302(param_1,param_2,param_3,param_4);
  if (((*(longlong *)(param_1 + 0x278) == 0) || (*(longlong *)(param_1 + 0x280) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x280) + 8) < 1)) {
    if (((*param_5 == 0) || (param_5[1] == 0)) || (*(int *)(param_5[1] + 8) < 1)) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_5[2];
    }
    plVar8 = *(longlong **)(lVar6 + 0x10);
    bVar2 = true;
    if (plVar8 == (longlong *)0x0) {
LAB_14903da4f:
      uVar9 = 0;
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_14903da4f;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar10 = iVar5 == iVar3;
        if (bVar10) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar10);
      uVar9 = *(undefined8 *)(lVar6 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      bVar2 = false;
    }
    *(undefined8 *)(param_1 + 0x278) = uVar9;
    plVar7 = *(longlong **)(param_1 + 0x280);
    if (plVar7 != plVar8) {
      if (!bVar2) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x280);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x280) = plVar8;
    }
    plVar7 = *(longlong **)(param_1 + 0x268);
    if (plVar7 != (longlong *)0x0) {
      if (!bVar2) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_58 = uVar9;
      local_50 = plVar8;
      (**(code **)(*plVar7 + 0x158))(plVar7,&local_58);
    }
    if (!bVar2) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14903db12 FUN_14903db12 body=82 status=ok
// SIG undefined FUN_14903db12(void)

void FUN_14903db12(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined1 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x288) != (longlong *)0x0) {
    local_10 = 2;
    local_c = 0;
    (**(code **)(**(longlong **)(param_1 + 0x288) + 0x140))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903db66 FUN_14903db66 body=337 status=ok
// SIG undefined FUN_14903db66(void)

undefined1 * FUN_14903db66(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar7 = *param_4;
  if (cVar7 == '\x03') goto LAB_14903dbc1;
  lVar4 = *(longlong *)(param_1 + 0x2a8);
  if (lVar4 == 0) {
    local_40 = *(longlong *)(param_1 + 0x10);
    if (local_40 == 0) {
      local_40 = 0;
      local_48 = 0;
    }
    else {
      iVar5 = *(int *)(local_40 + 8);
      local_48 = 0;
      do {
        if (iVar5 == 0) {
          local_40 = 0;
          goto LAB_14903dc77;
        }
        LOCK();
        iVar3 = *(int *)(local_40 + 8);
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(local_40 + 8) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
      local_48 = *(longlong *)(param_1 + 8);
    }
LAB_14903dc77:
    plVar6 = &local_48;
    cVar7 = '\x02';
LAB_14903dc89:
    FUN_140592b68(param_2,plVar6,cVar7,0);
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x2b0);
    local_38 = lVar4;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = &local_38;
      local_30 = (longlong *)0x0;
      goto LAB_14903dc89;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_30 = plVar6;
    FUN_140592b68(param_2,&local_38,cVar7,0);
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
  plVar6 = *(longlong **)(param_1 + 0x268);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 200))(plVar6,1,0);
  }
LAB_14903dbc1:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14903dcb8 FUN_14903dcb8 body=131 status=ok
// SIG undefined FUN_14903dcb8(void)

void FUN_14903dcb8(longlong param_1)

{
  char cVar1;
  undefined1 auStack_f8 [40];
  undefined1 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [184];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    cVar1 = FUN_14697e0ec();
    if (cVar1 != '\0') {
      local_d0 = 2;
      local_cc = 0;
      (**(code **)(**(longlong **)(param_1 + 0x288) + 0xd8))
                (*(longlong **)(param_1 + 0x288),local_c8);
      FUN_14493db24(local_c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903dd3c FUN_14903dd3c body=246 status=ok
// SIG undefined FUN_14903dd3c(void)

longlong FUN_14903dd3c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_50 = *(undefined4 *)(param_3 + 1);
  local_58 = *param_3;
  FUN_14904e5e6(local_68,param_2,&local_58);
  local_40 = '\0';
  local_3c = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_140a51ef4(&local_38,local_68);
  if (&local_58 != (undefined8 *)(param_1 + 0xb0)) {
    if (local_40 == '\x01') {
      *(undefined8 *)(param_1 + 0xc0) = local_48;
      *(undefined4 *)(param_1 + 0xb0) = (undefined4)local_58;
      *(undefined4 *)(param_1 + 0xb4) = local_58._4_4_;
      *(undefined4 *)(param_1 + 0xb8) = uStack_50;
      *(undefined4 *)(param_1 + 0xbc) = uStack_4c;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 200) != '\x01') goto LAB_14903ddcb;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 200) = uVar1;
  }
LAB_14903ddcb:
  *(undefined1 *)(param_1 + 0xcc) = local_3c;
  FUN_144a450dc(param_1 + 0xd0,&local_38);
  FUN_1449db362(&local_38);
  if (local_40 == '\x01') {
    local_40 = '\0';
  }
  FUN_1449db362(local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903de34 FUN_14903de34 body=314 status=ok
// SIG undefined FUN_14903de34(void)

undefined4 * FUN_14903de34(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [4];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x268);
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 6) = 1;
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xc3) == '\x01')) {
    plVar7 = *(longlong **)(param_1 + 0x2d0);
    bVar3 = true;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar7[1];
      plVar6 = (longlong *)0x0;
      do {
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          goto LAB_14903deba;
        }
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar8 = iVar5 == iVar4;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar8);
      plVar6 = *(longlong **)(param_1 + 0x2c8);
      bVar3 = false;
    }
LAB_14903deba:
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    FUN_144b013c4(local_48,local_38);
    *param_2 = 0x3f800000;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xbf800000;
    param_2[4] = 0;
    param_2[5] = local_34;
    *(undefined1 *)(param_2 + 6) = 1;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    if (!bVar3) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14903df70 FUN_14903df70 body=96 status=ok
// SIG undefined FUN_14903df70(void)

void FUN_14903df70(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014903dfc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903dfd0 FUN_14903dfd0 body=153 status=ok
// SIG undefined FUN_14903dfd0(void)

undefined8 FUN_14903dfd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144a8b586();
  FUN_14626b538(uVar1,&local_28,4);
  local_38 = local_28;
  if (local_20 == 0) {
    local_38 = &DAT_149dfb77a;
  }
  uVar1 = thunk_FUN_145c581c1();
  FUN_140002266(param_1,L"%s/%s UnrealEngine/%s",&DAT_14c764000,uVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14903e06a FUN_14903e06a body=46 status=ok
// SIG undefined FUN_14903e06a(void)

void FUN_14903e06a(void)

{
  if (DAT_14cbf6510 != (undefined8 *)0x0) {
    (**(code **)*DAT_14cbf6510)(DAT_14cbf6510,1);
    DAT_14cbf6510 = (undefined8 *)0x0;
  }
  FUN_14901fd11();
  return;
}



// FUNCTION 14903e098 FUN_14903e098 body=72 status=ok
// SIG undefined FUN_14903e098(void)

bool FUN_14903e098(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_14cbf6510;
  if (DAT_14cbf6510 == 0) {
    lVar2 = FUN_14001cc68(0x150,0x10);
    FUN_1443f49aa(lVar2,param_2);
    DAT_14cbf6510 = lVar2;
  }
  return lVar1 == 0;
}



// FUNCTION 14903e0e0 FUN_14903e0e0 body=136 status=ok
// SIG undefined FUN_14903e0e0(void)

longlong FUN_14903e0e0(void)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbf6510 == 0) {
    lVar1 = FUN_14001cc68(0x150,0x10);
    FUN_14903dfd0(local_28);
    FUN_1443f49aa(lVar1,local_28);
    DAT_14cbf6510 = lVar1;
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14cbf6510;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903e16e FUN_14903e16e body=87 status=ok
// SIG undefined FUN_14903e16e(void)

undefined8 * FUN_14903e16e(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14047ac8c();
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
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



// FUNCTION 14903e1c6 FUN_14903e1c6 body=134 status=ok
// SIG undefined FUN_14903e1c6(void)

undefined8 FUN_14903e1c6(undefined8 param_1,wchar_t *param_2)

{
  size_t sVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  sVar1 = wcslen(param_2);
  FUN_145b284a4(&local_48,param_2,sVar1);
  FUN_1490467a0(param_1,&local_48);
  if (7 < uStack_30) {
    FUN_14600850e(&local_48,local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903e24e FUN_14903e24e body=447 status=ok
// SIG undefined FUN_14903e24e(void)

longlong * FUN_14903e24e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_140d5712e();
  uVar4 = *(undefined8 *)(lVar7 + 0x28);
  plVar5 = *(longlong **)(lVar7 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)FUN_14142d800(uVar4);
  *param_1 = 0;
  iVar3 = *(int *)(puVar8 + 1);
  pvVar6 = (void *)*puVar8;
  *(int *)(param_1 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar3,0);
    memcpy((void *)*param_1,pvVar6,(longlong)iVar3 * 2);
  }
  puVar8 = (undefined8 *)FUN_145934276(uVar4);
  local_40 = (void *)0x0;
  local_38 = *(int *)(puVar8 + 1);
  lVar7 = (longlong)local_38;
  pvVar6 = (void *)*puVar8;
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar6,lVar7 * 2);
    if (1 < local_38) {
      FUN_1449b8608(local_60,param_1,&DAT_149e1419a);
      FUN_144a7dea0(&local_50,local_60,&local_40);
      if (&local_50 == param_1) {
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = local_50;
        local_50 = 0;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_48;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_48._4_4_;
        local_48 = 0;
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903e40e FUN_14903e40e body=268 status=ok
// SIG undefined FUN_14903e40e(void)

undefined8 * FUN_14903e40e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_2 + 1);
  if ((longlong)iVar1 < 2) {
    *param_1 = 0;
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1400b22c2(local_40,&DAT_14ba6c4de);
    FUN_1400b22c2(local_60,L"_Common");
    FUN_1407ec8fc(local_50,param_2,local_60);
    FUN_1401c7f3e(param_1,local_50,local_40);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903e520 FUN_14903e520 body=437 status=ok
// SIG undefined FUN_14903e520(void)

void FUN_14903e520(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  longlong local_b8;
  LARGE_INTEGER local_b0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  lVar2 = FUN_14001cc68(0x80,0x10);
  local_98 = 0;
  local_88 = &PTR_LAB_14ba6e9b0;
  local_a8 = &LAB_1443fc6e6;
  local_c0 = 0;
  local_80 = param_1;
  FUN_1490232f6(lVar2);
  local_b8 = lVar2;
  if (lVar2 != 0) {
    lVar3 = (longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4);
    (*(code *)**(undefined8 **)(lVar2 + 8 + lVar3))(lVar2 + lVar3 + 8);
  }
  FUN_144d731d0(0,&local_b8);
  QueryPerformanceCounter(&local_b0);
  dVar1 = (double)local_b0.QuadPart * DAT_14c83f420;
  do {
    if (*(char *)(param_1 + 0xe9) != '\0') break;
    FUN_14000f986(0x3c23d70a);
    if (DAT_14c98e618 != 0) {
      (**(code **)(*DAT_14c968088 + 0x20))
                (DAT_14c968088,
                 (float)(*(double *)(DAT_14c98e618 + 0x3e0) - *(double *)(DAT_14c98e618 + 1000)));
    }
    cef_do_message_loop_work();
    QueryPerformanceCounter(&local_b0);
  } while (((double)local_b0.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar1 + 16777216.0) <= 1.0);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903e6d6 FUN_14903e6d6 body=1264 status=ok
// SIG undefined FUN_14903e6d6(void)

void FUN_14903e6d6(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14ba6c230;
  param_1[1] = &PTR_FUN_14ba6c2c8;
  if (*(char *)((longlong)param_1 + 0x13b) == '\x01') {
    if (*(char *)(param_1 + 0x1d) == '\x01') {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
      if (0 < *(int *)(param_1 + 0x1f)) {
        lVar11 = 0;
        do {
          lVar3 = param_1[0x1e];
          plVar4 = *(longlong **)(lVar3 + 8 + lVar11 * 0x10);
          if (plVar4 != (longlong *)0x0) {
            iVar10 = (int)plVar4[1];
            do {
              if (iVar10 == 0) goto LAB_14903e7f0;
              LOCK();
              iVar9 = (int)plVar4[1];
              bVar12 = iVar10 == iVar9;
              if (bVar12) {
                *(int *)(plVar4 + 1) = iVar10 + 1;
                iVar9 = iVar10;
              }
              iVar10 = iVar9;
              UNLOCK();
            } while (!bVar12);
            plVar5 = *(longlong **)(lVar3 + lVar11 * 0x10);
            if ((plVar5 != (longlong *)0x0) &&
               (cVar8 = (**(code **)(*plVar5 + 0x28))(plVar5), cVar8 != '\0')) {
              (*(code *)**(undefined8 **)plVar5[8])((undefined8 *)plVar5[8],&local_90);
              (**(code **)(*local_90 + 8))(local_90,1);
              if (local_90 != (longlong *)0x0) {
                (**(code **)(*(longlong *)
                              ((longlong)local_90 + (longlong)*(int *)(local_90[1] + 4) + 8) + 8))()
                ;
              }
            }
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
LAB_14903e7f0:
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(param_1 + 0x1f));
      }
      iVar10 = *(int *)((longlong)param_1 + 0xfc);
      FUN_14904f235(param_1[0x1e]);
      *(undefined4 *)(param_1 + 0x1f) = 0;
      if ((iVar10 < 0) && (*(int *)((longlong)param_1 + 0xfc) != 0)) {
        FUN_14904f370(param_1 + 0x1e);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
      FUN_144d73350();
      plVar4 = param_1 + 7;
      puVar2 = param_1 + 9;
      local_68 = 0x100000000;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_50 = 0;
      iVar10 = 0;
      local_60 = puVar2;
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_1449c0562(&local_68);
        iVar10 = *(int *)(param_1 + 0xc);
      }
      local_78._0_4_ = (uint)local_58;
      local_78._4_4_ = local_58._4_4_;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_90 = plVar4;
      if ((local_58._4_4_ != iVar10) || (local_60 != puVar2)) {
        do {
          (**(code **)(**(longlong **)(*local_90 + 0x10 + (longlong)local_78._4_4_ * 0x20) + 0x38))
                    ();
          local_78._0_4_ = (uint)local_78 & ~local_88._4_4_;
          FUN_1449c0562(&local_88);
        } while (local_90 != plVar4 || (local_80 != puVar2 || local_78._4_4_ != iVar10));
      }
      if (*(int *)(param_1 + 8) != *(int *)((longlong)param_1 + 0x6c)) {
        FUN_14904f3a0(plVar4);
        FUN_14904f4e4(plVar4);
      }
      plVar4 = param_1 + 0x11;
      puVar2 = param_1 + 0x13;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar10 = 0;
      local_60 = puVar2;
      if (*(int *)(param_1 + 0x16) != 0) {
        FUN_1449c0562(&local_68);
        iVar10 = *(int *)(param_1 + 0x16);
      }
      local_78 = local_58;
      uVar7 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar9 = local_78._4_4_;
      local_90 = plVar4;
      if ((local_78._4_4_ != iVar10) || (local_78 = uVar7, local_60 != puVar2)) {
        do {
          local_78 = uVar7;
          lVar11 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar9 * 0x20);
          if (*(int *)(lVar11 + 0x28) != 0) {
            puVar6 = *(undefined8 **)(lVar11 + 0x20);
            if (puVar6 != (undefined8 *)0x0) {
              (**(code **)*puVar6)(puVar6,0);
              FUN_1446efa72((longlong *)(lVar11 + 0x20),0,0,0x10);
              *(undefined4 *)(lVar11 + 0x28) = 0;
            }
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar9 = local_78._4_4_;
          uVar7 = local_78;
        } while (local_90 != plVar4 || (local_80 != puVar2 || local_78._4_4_ != iVar10));
      }
      if (*(int *)(param_1 + 0x12) != *(int *)((longlong)param_1 + 0xbc)) {
        FUN_14904f62a(plVar4);
        FUN_14904f76e(plVar4);
      }
      lVar11 = param_1[6];
      param_1[6] = 0;
      if (lVar11 != 0) {
        (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar11 + 8) + 4) + lVar11 + 8) + 8))();
      }
      FUN_14903e520(param_1);
      cef_shutdown();
    }
    *(undefined1 *)((longlong)param_1 + 0x13b) = 0;
  }
  plVar4 = (longlong *)param_1[0x26];
  if (plVar4 != (longlong *)0x0) {
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  FUN_14904f235(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_149045da1(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_149045e16(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_149045fae(param_1 + 7);
  lVar11 = param_1[6];
  if (lVar11 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar11 + 8) + 4) + lVar11 + 8) + 8))();
  }
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
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
  FUN_145bfbed6(param_1 + 1);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14903ebea FUN_14903ebea body=1495 status=ok
// SIG undefined FUN_14903ebea(void)

longlong * FUN_14903ebea(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *_Src;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  undefined8 unaff_RBP;
  undefined7 uVar14;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined **local_a0;
  longlong local_98;
  char local_90;
  void *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined6 uStack_66;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0xe8) != '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar8 = *param_3;
  uVar2 = *(undefined1 *)(lVar8 + 0xc0);
  uVar14 = (undefined7)((ulonglong)unaff_RBP >> 8);
  local_dc = CONCAT31(local_dc._1_3_,*(undefined1 *)(lVar8 + 0xc1));
  local_dd = *(undefined1 *)(lVar8 + 0xc2);
  local_de = *(undefined1 *)(lVar8 + 0xc3);
  (**(code **)(**(longlong **)*param_4 + 0x68))(*(longlong **)*param_4,&local_a8);
  (**(code **)(*local_a8 + 0x98))(local_a8,&local_a0);
  puVar12 = &local_68;
  FUN_149021a64(&local_a0,puVar12);
  if (7 < local_50) {
    puVar12 = (undefined2 *)CONCAT62(uStack_66,local_68);
  }
  FUN_140056680(&local_88,puVar12);
  if (7 < local_50) {
    FUN_14600850e(&local_68,CONCAT62(uStack_66,local_68));
  }
  local_58 = 0;
  local_50 = 7;
  local_68 = 0;
  local_a0 = &PTR_FUN_14ba6d600;
  if (local_98 != 0) {
    if ((local_90 == '\x01') && (cef_string_utf16_clear(), local_98 != 0)) {
      FUN_1400020a8();
    }
    local_98 = 0;
    local_90 = '\0';
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_a8 + (longlong)*(int *)(local_a8[1] + 4) + 8) + 8))()
    ;
  }
  lVar8 = FUN_14001cc68(0x390,0x10);
  _Src = local_88;
  local_df = *(undefined1 *)(param_1 + 0x139);
  local_78 = 0;
  local_70 = 0xffffffff00000000;
  local_b8 = (void *)0x0;
  local_b0 = local_80;
  if ((longlong)local_80 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_80,0);
    memcpy(local_b8,_Src,(longlong)local_80 * 2);
  }
  plVar9 = (longlong *)*param_4;
  local_c0 = plVar9[1];
  if (local_c0 != 0) {
    (*(code *)**(undefined8 **)(local_c0 + *(int *)(*(longlong *)(local_c0 + 8) + 4) + 8))();
    plVar9 = (longlong *)*param_4;
  }
  local_c8 = *plVar9;
  if (local_c8 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_c8 + 8) + 4) + local_c8 + 8))();
  }
  local_f0 = local_de;
  local_f8 = local_df;
  local_100 = local_dd;
  local_108 = (undefined1)local_dc;
  local_118 = &local_78;
  local_110 = uVar2;
  FUN_14903232e(lVar8,&local_c8,&local_c0,&local_b8);
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14ba6e9d0;
  plVar9[2] = lVar8;
  local_d0 = plVar9;
  if ((lVar8 == 0) ||
     (((*(longlong *)(lVar8 + 0x18) != 0 && (*(longlong *)(lVar8 + 0x20) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar8 + 0x20) + 8))))) {
    uVar10 = *(undefined8 *)(*param_4 + 8);
    uVar13 = (undefined4)CONCAT71(uVar14,1);
    if (plVar9 == (longlong *)0x0) goto LAB_14903efb0;
  }
  else {
    if (plVar9 == (longlong *)0x0) {
      *(longlong *)(lVar8 + 0x18) = lVar8;
      plVar11 = *(longlong **)(lVar8 + 0x20);
      if (plVar11 != (longlong *)0x0) {
LAB_14903f17a:
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        *(longlong **)(lVar8 + 0x20) = plVar9;
        if (plVar9 != (longlong *)0x0) goto LAB_14903ef74;
      }
      uVar10 = *(undefined8 *)(*param_4 + 8);
      local_d0 = (longlong *)0x0;
      uVar13 = (undefined4)CONCAT71(uVar14,1);
      goto LAB_14903efb0;
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(longlong *)(lVar8 + 0x18) = lVar8;
    if (*(longlong **)(lVar8 + 0x20) != plVar9) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar11 = *(longlong **)(lVar8 + 0x20);
      if (plVar11 != (longlong *)0x0) goto LAB_14903f17a;
      *(longlong **)(lVar8 + 0x20) = plVar9;
    }
LAB_14903ef74:
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    uVar10 = *(undefined8 *)(*param_4 + 8);
  }
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
  uVar13 = 0;
LAB_14903efb0:
  local_d8 = lVar8;
  FUN_14902430c(uVar10,&local_d8);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  if ((char)uVar13 == '\0') {
    LOCK();
    *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0xf8);
  *(uint *)(param_1 + 0xf8) = iVar3 + 1U;
  local_dc = uVar13;
  if (*(uint *)(param_1 + 0xfc) < iVar3 + 1U) {
    FUN_14904f8ee((longlong *)(param_1 + 0xf0),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0xf0);
  *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar8;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar9;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  puVar5 = *(undefined8 **)(lVar8 + 0x40);
  if (puVar5 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)((longlong)puVar5 + (longlong)*(int *)(puVar5[1] + 4) + 8))();
  }
  (**(code **)*puVar5)(puVar5,&local_68);
  uVar13 = local_dc;
  plVar11 = (longlong *)CONCAT62(uStack_66,local_68);
  puVar6 = *(undefined8 **)(*param_3 + 0x40);
  if (puVar6 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)((longlong)puVar6 + (longlong)*(int *)(puVar6[1] + 4) + 8))();
  }
  (**(code **)*puVar6)(puVar6,&local_a0);
  uVar7 = (**(code **)(*local_a0 + 0x148))();
  (**(code **)(*plVar11 + 0x150))(plVar11,uVar7);
  if (local_a0 != (undefined **)0x0) {
    (**(code **)(*(longlong *)((longlong)local_a0 + (longlong)*(int *)(local_a0[1] + 4) + 8) + 8))()
    ;
  }
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)((longlong)puVar6 + (longlong)*(int *)(puVar6[1] + 4) + 8) + 8))();
  }
  lVar4 = CONCAT62(uStack_66,local_68);
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)((longlong)puVar5 + (longlong)*(int *)(puVar5[1] + 4) + 8) + 8))();
  }
  *param_2 = lVar8;
  param_2[1] = (longlong)plVar9;
  if ((char)uVar13 == '\0') {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
}



// FUNCTION 14903f1c8 FUN_14903f1c8 body=272 status=ok
// SIG undefined FUN_14903f1c8(void)

undefined8 * FUN_14903f1c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x32) = *(undefined1 *)((longlong)param_2 + 0x32);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_149046146(param_1 + 7,param_2 + 7);
  return param_1;
}



// FUNCTION 14903f2d8 FUN_14903f2d8 body=66 status=ok
// SIG undefined FUN_14903f2d8(void)

void FUN_14903f2d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba6e9e8;
  if (param_1[0xe] != 0) {
    return;
  }
  cef_string_utf16_clear(param_1 + 2);
  cef_string_utf16_clear(param_1 + 7);
  cef_string_utf16_clear(param_1 + 10);
  return;
}



// FUNCTION 14903f31a FUN_14903f31a body=70 status=ok
// SIG undefined FUN_14903f31a(void)

void FUN_14903f31a(longlong *param_1)

{
  FUN_1449db362(param_1 + 7);
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



// FUNCTION 14903f360 FUN_14903f360 body=229 status=ok
// SIG undefined FUN_14903f360(void)

ulonglong FUN_14903f360(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  lVar10 = (longlong)*(int *)(param_1 + 0xf8);
  if (0 < (longlong)*(int *)(param_1 + 0xf8)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0xf0);
      lVar8 = (lVar10 + -1) * 0x10;
      plVar4 = *(longlong **)(lVar3 + 8 + lVar8);
      if (plVar4 != (longlong *)0x0) {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_14903f3ee;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar11 = iVar7 == iVar5;
          if (bVar11) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar3 = *(longlong *)(lVar3 + lVar8);
        if ((lVar3 != 0) &&
           (cVar6 = FUN_149026b00(*(undefined8 *)(lVar3 + 0x48),param_2), cVar6 != '\0')) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
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
          goto LAB_14903f42c;
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
LAB_14903f3ee:
      bVar11 = 1 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar11);
  }
  uVar9 = 0;
LAB_14903f42c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  return uVar9 & 0xffffffff;
}



// FUNCTION 14903f446 FUN_14903f446 body=432 status=ok
// SIG undefined FUN_14903f446(void)

void FUN_14903f446(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  void *local_78;
  int local_70;
  undefined **local_68;
  uint local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = (undefined **)*param_2;
  local_60 = *(int *)(param_2 + 1) - 1;
  if (*(int *)(param_2 + 1) == 0) {
    local_60 = 0;
  }
  local_58 = (void *)*param_3;
  local_50 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_50 = 0;
  }
  FUN_140bee87a(local_88,&local_68,2);
  FUN_14903e40e(&local_78,local_88);
  local_60 = local_60 & 0xffffff00;
  local_68 = &PTR_FUN_14ba6d1b0;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_3 + 1);
  lVar4 = (longlong)local_50;
  pvVar1 = (void *)*param_3;
  if (lVar4 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar1,lVar4 * 2);
  }
  pvVar1 = local_78;
  local_48 = (void *)0x0;
  local_40 = local_70;
  if ((longlong)local_70 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_70,0);
    memcpy(local_48,pvVar1,(longlong)local_70 * 2);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8(local_78);
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)FUN_140e92164();
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  (**(code **)(*plVar2 + 0x130))(plVar2,puVar3,&local_68);
  local_68 = &PTR_FUN_14ba6d1b0;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903f5f8 FUN_14903f5f8 body=182 status=ok
// SIG undefined FUN_14903f5f8(void)

ulonglong FUN_14903f5f8(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = *(char *)(param_1 + 0xe8);
  if (cVar1 == '\x01') {
    local_30 = *param_3;
    *param_3 = 0;
    local_28 = (undefined4)param_3[1];
    local_24 = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    local_40 = *param_2;
    *param_2 = 0;
    local_38 = (undefined4)param_2[1];
    local_34 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    FUN_14903119c(param_1 + 0xd8);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903f6b0 FUN_14903f6b0 body=38 status=ok
// SIG undefined FUN_14903f6b0(void)

ulonglong FUN_14903f6b0(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)(param_1 + 0xe8);
  if (cVar1 == '\x01') {
    FUN_1490313c8(param_1 + 0xd8);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
}



// FUNCTION 14903f6d6 FUN_14903f6d6 body=101 status=ok
// SIG undefined FUN_14903f6d6(void)

undefined8 * FUN_14903f6d6(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                    (*(longlong **)(param_1 + 8),*(undefined1 *)(param_1 + 0x18));
  if (lVar3 == 0) {
    *param_2 = 0;
  }
  else {
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                       (*(longlong **)(param_1 + 8),*(undefined1 *)(param_1 + 0x18));
    uVar1 = (**(code **)(*plVar4 + 8))(plVar4);
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                       (*(longlong **)(param_1 + 8),*(undefined1 *)(param_1 + 0x18));
    uVar2 = (**(code **)*puVar5)(puVar5);
    *(undefined4 *)param_2 = uVar2;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
  }
  return param_2;
}



// FUNCTION 14903f750 FUN_14903f750 body=602 status=ok
// SIG undefined FUN_14903f750(void)

void FUN_14903f750(longlong param_1,float *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x18) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x150))(*(longlong **)(param_1 + 8),&local_40);
    if (local_40 == 0) {
      fVar8 = 1.0;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x150))(*(longlong **)(param_1 + 8),&local_60);
      FUN_14151e938(local_60,&local_50);
      fVar8 = (float)(**(code **)(*local_50 + 0xf8))();
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_58 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    fVar5 = param_2[1] * (param_2[2] / fVar8);
    fVar8 = (param_2[2] / fVar8) * *param_2;
    fVar7 = param_2[8] * (float)DAT_14c84635c + param_2[10] * DAT_14c84635c._4_4_ + param_2[0xc];
    fVar6 = (float)DAT_14c84635c * param_2[7] + DAT_14c84635c._4_4_ * param_2[9] + param_2[0xb];
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(longlong **)(param_1 + 8),
               (ulonglong)(longlong)ROUND(fVar8 + fVar8 + 0.5) >> 1 & 0xffffffff |
               ((longlong)ROUND(fVar5 + fVar5 + 0.5) & 0xfffffffffffffffeU) << 0x1f,
               CONCAT44((int)ROUND(fVar7 + fVar7 + 0.5) >> 1,(int)ROUND(fVar6 + fVar6 + 0.5) >> 1));
    lVar3 = *(longlong *)(param_1 + 8);
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_149027c36(*(undefined8 *)(lVar3 + 0x350),param_2);
    lVar3 = *(longlong *)(lVar3 + 0x380);
    if (lVar3 != 0) {
      FUN_144b00ffc(lVar3 + 8,param_2);
    }
    if (plVar4 != (longlong *)0x0) {
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903f9b0 FUN_14903f9b0 body=30 status=ok
// SIG undefined FUN_14903f9b0(void)

undefined8 FUN_14903f9b0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))();
  return param_2;
}



// FUNCTION 14903f9ce FUN_14903f9ce body=376 status=ok
// SIG undefined FUN_14903f9ce(void)

undefined8 FUN_14903f9ce(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_f8;
  longlong *local_f0;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = *(undefined1 *)(param_1 + 0x18);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),local_e8);
  lVar5 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  lVar7 = DAT_14c966e98;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    lVar7 = DAT_14c966e98;
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
  if (lVar5 == lVar7) {
    lVar5 = *(longlong *)(param_4 + 0x18);
    cVar4 = FUN_144b010fc(lVar5);
    if (cVar4 != '\0') {
      lVar7 = lVar5 + 8;
      if (*(longlong *)(lVar5 + 0x128) != 0) {
        lVar7 = *(longlong *)(lVar5 + 0x128);
      }
      lVar5 = (longlong)(*(int *)(lVar5 + 0x130) + -1);
      local_f8 = *(undefined8 *)(lVar7 + 0x38 + lVar5 * 0x48);
      plVar3 = *(longlong **)(lVar7 + 0x40 + lVar5 * 0x48);
      if (plVar3 == (longlong *)0x0) {
        local_f0 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_f0 = plVar3;
      }
      uVar6 = FUN_140592a6e(local_e8,&local_f8);
      FUN_1403d4c6e(param_2,uVar6);
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
      goto LAB_14903fafe;
    }
  }
  FUN_1428fd920(param_2,local_e8);
LAB_14903fafe:
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14903fb48 FUN_14903fb48 body=258 status=ok
// SIG undefined FUN_14903fb48(void)

undefined8 FUN_14903fb48(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0 [56];
  undefined8 local_a8;
  longlong *plStack_a0;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = *(undefined1 *)(param_1 + 0x18);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),local_e0);
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  plVar5 = plStack_a0;
  lVar6 = DAT_14c966e98;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar6 = DAT_14c966e98;
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
      plVar5 = plStack_a0;
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        plVar5 = plStack_a0;
      }
    }
  }
  if (lVar3 == lVar6) {
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    local_2c = (local_2c & 0xffffffde) + 1;
    FUN_1403d4c6e(param_2);
  }
  else {
    plStack_a0 = plVar5;
    FUN_1428fd920(param_2,local_e0);
  }
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903fc60 FUN_14903fc60 body=41 status=ok
// SIG undefined FUN_14903fc60(void)

undefined8 FUN_14903fc60(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
  return param_2;
}



// FUNCTION 14903fc8a FUN_14903fc8a body=41 status=ok
// SIG undefined FUN_14903fc8a(void)

undefined8 FUN_14903fc8a(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8));
  return param_2;
}



// FUNCTION 14903fcb4 FUN_14903fcb4 body=41 status=ok
// SIG undefined FUN_14903fcb4(void)

undefined8 FUN_14903fcb4(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8));
  return param_2;
}



// FUNCTION 14903fcde FUN_14903fcde body=41 status=ok
// SIG undefined FUN_14903fcde(void)

undefined8 FUN_14903fcde(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8));
  return param_2;
}



// FUNCTION 14903fd08 FUN_14903fd08 body=81 status=ok
// SIG undefined FUN_14903fd08(void)

undefined1 * FUN_14903fd08(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
  *param_2 = uVar1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14903fd5a FUN_14903fd5a body=81 status=ok
// SIG undefined FUN_14903fd5a(void)

undefined1 * FUN_14903fd5a(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))();
  *param_2 = uVar1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14903fdac FUN_14903fdac body=81 status=ok
// SIG undefined FUN_14903fdac(void)

undefined1 * FUN_14903fdac(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  *param_2 = uVar1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14903fdfe FUN_14903fdfe body=92 status=ok
// SIG undefined FUN_14903fdfe(void)

undefined1 * FUN_14903fdfe(longlong param_1,undefined1 *param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 200))
            (*(longlong **)(param_1 + 8),1,*(undefined1 *)(param_1 + 0x18));
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14903fe82 FUN_14903fe82 body=44 status=ok
// SIG undefined FUN_14903fe82(void)

longlong * FUN_14903fe82(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x10;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x18) + 4) + 0x18))();
  return param_2;
}



// FUNCTION 14903fec8 FUN_14903fec8 body=92 status=ok
// SIG undefined FUN_14903fec8(void)

bool FUN_14903fec8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x40 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x60 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x58) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x58 + lVar4) + 0x20))(param_1 + -0x60 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 14903ff58 FUN_14903ff58 body=100 status=ok
// SIG undefined FUN_14903ff58(void)

longlong FUN_14903ff58(longlong param_1,int param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x60) = &PTR_FUN_14ba6aa10;
  *(undefined ***)(param_1 + -0x58 + (longlong)*(int *)(*(longlong *)(param_1 + -0x58) + 4)) =
       &PTR_LAB_14ba6aa40;
  *(undefined ***)(param_1 + -0x50) = &PTR_LAB_14ba6aa70;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x58) + 4);
  *(int *)(param_1 + -0x5c + (longlong)iVar1) = iVar1 + -0x58;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x38));
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x60);
  }
  return param_1 + -0x60;
}



// FUNCTION 14903ffca FUN_14903ffca body=78 status=ok
// SIG undefined FUN_14903ffca(void)

undefined8 FUN_14903ffca(undefined8 param_1,longlong *param_2,undefined1 *param_3,longlong *param_4)

{
  longlong lVar1;
  
  *param_3 = 0;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 149040018 FUN_149040018 body=47 status=ok
// SIG undefined FUN_149040018(void)

undefined8
FUN_149040018(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  
  *param_3 = 0xfffffffffffffffe;
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 149040048 FUN_149040048 body=52 status=ok
// SIG undefined FUN_149040048(void)

undefined8 FUN_149040048(void)

{
  longlong lVar1;
  undefined4 *in_R9;
  longlong *in_stack_00000028;
  
  *in_R9 = 0xffffffff;
  lVar1 = *in_stack_00000028;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 14904008a FUN_14904008a body=92 status=ok
// SIG undefined FUN_14904008a(void)

bool FUN_14904008a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x10 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x40 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x38) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x38 + lVar4) + 0x20))(param_1 + -0x40 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 14904010a FUN_14904010a body=58 status=ok
// SIG undefined FUN_14904010a(void)

longlong FUN_14904010a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -*(int *)(param_1 + -4) + -0x40;
  FUN_149020036(param_1 + -*(int *)(param_1 + -4));
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 149040150 FUN_149040150 body=53 status=ok
// SIG undefined FUN_149040150(void)

longlong * FUN_149040150(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x80;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x88) + 4) + 0x88))();
  return param_2;
}



// FUNCTION 149040186 FUN_149040186 body=53 status=ok
// SIG undefined FUN_149040186(void)

longlong * FUN_149040186(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0xd0;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0xd8) + 4) + 0xd8))();
  return param_2;
}



// FUNCTION 1490401bc FUN_1490401bc body=44 status=ok
// SIG undefined FUN_1490401bc(void)

longlong * FUN_1490401bc(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x10;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x18) + 4) + 0x18))();
  return param_2;
}



// FUNCTION 1490401f4 FUN_1490401f4 body=53 status=ok
// SIG undefined FUN_1490401f4(void)

longlong * FUN_1490401f4(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x90;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x98) + 4) + 0x98))();
  return param_2;
}



// FUNCTION 149040242 FUN_149040242 body=44 status=ok
// SIG undefined FUN_149040242(void)

longlong * FUN_149040242(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x70;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x78) + 4) + 0x78))();
  return param_2;
}



// FUNCTION 14904026e FUN_14904026e body=44 status=ok
// SIG undefined FUN_14904026e(void)

longlong * FUN_14904026e(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x60;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x68) + 4) + 0x68))();
  return param_2;
}



// FUNCTION 14904029a FUN_14904029a body=44 status=ok
// SIG undefined FUN_14904029a(void)

longlong * FUN_14904029a(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x20;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x28) + 4) + 0x28))();
  return param_2;
}



// FUNCTION 1490402c6 FUN_1490402c6 body=44 status=ok
// SIG undefined FUN_1490402c6(void)

longlong * FUN_1490402c6(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x30;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x38) + 4) + 0x38))();
  return param_2;
}



// FUNCTION 1490402fe FUN_1490402fe body=44 status=ok
// SIG undefined FUN_1490402fe(void)

longlong * FUN_1490402fe(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x40;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x48) + 4) + 0x48))();
  return param_2;
}



// FUNCTION 14904032a FUN_14904032a body=44 status=ok
// SIG undefined FUN_14904032a(void)

longlong * FUN_14904032a(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x50;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x58) + 4) + 0x58))();
  return param_2;
}



// FUNCTION 149040364 FUN_149040364 body=101 status=ok
// SIG undefined FUN_149040364(void)

bool FUN_149040364(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x10 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x1e8 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x1e0) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x1e0 + lVar4) + 0x20))(param_1 + -0x1e8 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 1490403ee FUN_1490403ee body=61 status=ok
// SIG undefined FUN_1490403ee(void)

longlong FUN_1490403ee(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -*(int *)(param_1 + -4) + -0x1e8;
  FUN_149050892(param_1 + -*(int *)(param_1 + -4));
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 14904048c FUN_14904048c body=40 status=ok
// SIG undefined FUN_14904048c(void)

undefined8 FUN_14904048c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 1490404d4 FUN_1490404d4 body=333 status=ok
// SIG undefined FUN_1490404d4(void)

undefined4
FUN_1490404d4(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = *param_3;
  if (local_50 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_50 + 8) + 4) + local_50 + 8))();
  }
  local_58 = *param_2;
  if (local_58 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_58 + 8) + 4) + local_58 + 8))();
  }
  local_60 = param_13;
  local_68 = param_11;
  local_70 = param_10;
  local_78 = param_9;
  local_80 = param_8;
  local_88 = param_5;
  uVar2 = (**(code **)(*(longlong *)(param_1 + -0x20) + 0x80))
                    ((longlong *)(param_1 + -0x20),&local_58,&local_50,param_4);
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149040622 FUN_149040622 body=79 status=ok
// SIG undefined FUN_149040622(void)

void FUN_149040622(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149040666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    return;
  }
  return;
}



// FUNCTION 14904067e FUN_14904067e body=40 status=ok
// SIG undefined FUN_14904067e(void)

undefined8 FUN_14904067e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 1490406a6 FUN_1490406a6 body=74 status=ok
// SIG undefined FUN_1490406a6(void)

undefined8 FUN_1490406a6(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 149040770 FUN_149040770 body=74 status=ok
// SIG undefined FUN_149040770(void)

undefined8 FUN_149040770(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 1490407ba FUN_1490407ba body=76 status=ok
// SIG undefined FUN_1490407ba(void)

undefined8 FUN_1490407ba(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *in_stack_00000048;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *in_stack_00000048;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 149040806 FUN_149040806 body=76 status=ok
// SIG undefined FUN_149040806(void)

undefined8
FUN_149040806(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 149040852 FUN_149040852 body=76 status=ok
// SIG undefined FUN_149040852(void)

undefined8 FUN_149040852(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *in_stack_00000038;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *in_stack_00000038;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 1490408fe FUN_1490408fe body=40 status=ok
// SIG undefined FUN_1490408fe(void)

undefined8 FUN_1490408fe(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 149040946 FUN_149040946 body=176 status=ok
// SIG undefined FUN_149040946(void)

undefined8
FUN_149040946(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_6;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 1490409f6 FUN_1490409f6 body=108 status=ok
// SIG undefined FUN_1490409f6(void)

undefined8 FUN_1490409f6(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 149040a62 FUN_149040a62 body=79 status=ok
// SIG undefined FUN_149040a62(void)

void FUN_149040a62(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149040aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    return;
  }
  return;
}



// FUNCTION 149040ab2 FUN_149040ab2 body=74 status=ok
// SIG undefined FUN_149040ab2(void)

undefined8 FUN_149040ab2(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 149040afc FUN_149040afc body=142 status=ok
// SIG undefined FUN_149040afc(void)

undefined8
FUN_149040afc(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 149040b8a FUN_149040b8a body=157 status=ok
// SIG undefined FUN_149040b8a(void)

undefined8 *
FUN_149040b8a(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6)

{
  longlong lVar1;
  
  *param_2 = 0;
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_6;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return param_2;
}



// FUNCTION 149040c28 FUN_149040c28 body=114 status=ok
// SIG undefined FUN_149040c28(void)

void FUN_149040c28(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149040c8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    return;
  }
  return;
}



// FUNCTION 149040cba FUN_149040cba body=45 status=ok
// SIG undefined FUN_149040cba(void)

undefined8 FUN_149040cba(void)

{
  longlong lVar1;
  longlong *in_stack_00000030;
  
  lVar1 = *in_stack_00000030;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 149040ce8 FUN_149040ce8 body=29 status=ok
// SIG undefined FUN_149040ce8(void)

undefined8 FUN_149040ce8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149040d06 FUN_149040d06 body=13 status=ok
// SIG undefined FUN_149040d06(void)

void FUN_149040d06(longlong param_1)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(param_1 + -0x10 + (longlong)-*(int *)(param_1 + -4));
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}



// FUNCTION 149040d14 FUN_149040d14 body=92 status=ok
// SIG undefined FUN_149040d14(void)

bool FUN_149040d14(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x10 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x48 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x40) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x40 + lVar4) + 0x20))(param_1 + -0x48 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 149040da4 FUN_149040da4 body=100 status=ok
// SIG undefined FUN_149040da4(void)

longlong FUN_149040da4(longlong param_1,int param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x48) = &PTR_LAB_14ba6b3e0;
  *(undefined ***)(param_1 + -0x40 + (longlong)*(int *)(*(longlong *)(param_1 + -0x40) + 4)) =
       &PTR_FUN_14ba6b400;
  *(undefined ***)(param_1 + -0x38) = &PTR_FUN_14ba6b430;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x40) + 4);
  *(int *)(param_1 + -0x44 + (longlong)iVar1) = iVar1 + -0x40;
  FUN_1449db362(param_1 + -0x28);
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x48);
  }
  return param_1 + -0x48;
}



// FUNCTION 149040e08 FUN_149040e08 body=123 status=ok
// SIG undefined FUN_149040e08(void)

undefined8 *
FUN_149040e08(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  
  *param_2 = 0;
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return param_2;
}



// FUNCTION 149040e84 FUN_149040e84 body=123 status=ok
// SIG undefined FUN_149040e84(void)

undefined8 *
FUN_149040e84(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  
  *param_2 = 0;
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return param_2;
}



// FUNCTION 149040f00 FUN_149040f00 body=151 status=ok
// SIG undefined FUN_149040f00(void)

void FUN_149040f00(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149040f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    return;
  }
  return;
}



// FUNCTION 149040f98 FUN_149040f98 body=151 status=ok
// SIG undefined FUN_149040f98(void)

void FUN_149040f98(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149041022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    return;
  }
  return;
}



// FUNCTION 149041030 FUN_149041030 body=38 status=ok
// SIG undefined FUN_149041030(void)

undefined8 FUN_149041030(undefined8 param_1,int param_2)

{
  FUN_149050c06();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490410c8 FUN_1490410c8 body=152 status=ok
// SIG undefined FUN_1490410c8(void)

longlong FUN_1490410c8(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  code *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (((param_1 != 0) && (*(int *)(lVar3 + 0x188) != 0)) &&
     (plVar1 = *(longlong **)(lVar3 + 0x180), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    if (cVar2 != '\0') goto LAB_14904110e;
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  local_20 = FUN_149035cd4;
  local_18 = 0;
  FUN_149050cf4(lVar3 + 0x180,param_1);
LAB_14904110e:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1 + 0x158;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149041162 FUN_149041162 body=152 status=ok
// SIG undefined FUN_149041162(void)

longlong FUN_149041162(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  code *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (((param_1 != 0) && (*(int *)(lVar3 + 0x198) != 0)) &&
     (plVar1 = *(longlong **)(lVar3 + 400), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    if (cVar2 != '\0') goto LAB_1490411a8;
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  local_20 = FUN_149035e54;
  local_18 = 0;
  FUN_1490511b6(lVar3 + 400,param_1);
LAB_1490411a8:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1 + 0x168;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490411fc FUN_1490411fc body=152 status=ok
// SIG undefined FUN_1490411fc(void)

longlong FUN_1490411fc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  code *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (((param_1 != 0) && (*(int *)(lVar3 + 0x1a8) != 0)) &&
     (plVar1 = *(longlong **)(lVar3 + 0x1a0), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    if (cVar2 != '\0') goto LAB_149041242;
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  local_20 = FUN_149036030;
  local_18 = 0;
  FUN_149051678(lVar3 + 0x1a0,param_1);
LAB_149041242:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1 + 0x178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490412f6 FUN_1490412f6 body=67 status=ok
// SIG undefined FUN_1490412f6(void)

undefined8 FUN_1490412f6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x000149041329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 14904133a FUN_14904133a body=38 status=ok
// SIG undefined FUN_14904133a(void)

undefined8 FUN_14904133a(undefined8 param_1,int param_2)

{
  FUN_1443f3c5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149041360 FUN_149041360 body=269 status=ok
// SIG undefined FUN_149041360(void)

void FUN_149041360(longlong param_1,longlong *param_2)

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
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar2 = param_1 + 0x30;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x48);
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
      (**(code **)(*param_2 + 0x88))(param_2,(longlong)iStack_5c * 0x18 + *local_78,0,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14904146e FUN_14904146e body=32 status=ok
// SIG undefined FUN_14904146e(void)

undefined8 FUN_14904146e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FWebJSScripting");
  return param_2;
}



// FUNCTION 149041498 FUN_149041498 body=38 status=ok
// SIG undefined FUN_149041498(void)

undefined8 FUN_149041498(undefined8 param_1,int param_2)

{
  FUN_149036d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490414c2 FUN_1490414c2 body=38 status=ok
// SIG undefined FUN_1490414c2(void)

undefined8 FUN_1490414c2(undefined8 param_1,int param_2)

{
  FUN_149039cc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149041518 FUN_149041518 body=38 status=ok
// SIG undefined FUN_149041518(void)

undefined8 FUN_149041518(undefined8 param_1,int param_2)

{
  FUN_14903e6d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149041592 FUN_149041592 body=45 status=ok
// SIG undefined FUN_149041592(void)

longlong FUN_149041592(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14903e6d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490415c2 FUN_1490415c2 body=39 status=ok
// SIG undefined FUN_1490415c2(void)

undefined8 * FUN_1490415c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6c6f0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490415ea FUN_1490415ea body=39 status=ok
// SIG undefined FUN_1490415ea(void)

undefined8 * FUN_1490415ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6c6f0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149041612 FUN_149041612 body=44 status=ok
// SIG undefined FUN_149041612(void)

void FUN_149041612(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x30);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014904163b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14904164c FUN_14904164c body=92 status=ok
// SIG undefined FUN_14904164c(void)

bool FUN_14904164c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x18 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x78 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x70) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x70 + lVar4) + 0x20))(param_1 + -0x78 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 1490416cc FUN_1490416cc body=58 status=ok
// SIG undefined FUN_1490416cc(void)

longlong FUN_1490416cc(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -*(int *)(param_1 + -4) + -0x78;
  FUN_149041706(param_1 + -*(int *)(param_1 + -4));
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 149041706 FUN_149041706 body=110 status=ok
// SIG undefined FUN_149041706(void)

void FUN_149041706(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + -0x78) = &PTR_FUN_14ba6c700;
  *(undefined ***)(param_1 + -0x70 + (longlong)*(int *)(*(longlong *)(param_1 + -0x70) + 4)) =
       &PTR_LAB_14ba6c710;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x70) + 4);
  *(int *)(param_1 + -0x74 + (longlong)iVar1) = iVar1 + -0x70;
  if (*(longlong *)(param_1 + -0x58) != 0) {
    plVar2 = (longlong *)(param_1 + -0x38);
    if (*(longlong **)(param_1 + -0x48) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + -0x48);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong **)(param_1 + -0x68) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149041769. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + -0x68) + 8))();
    return;
  }
  return;
}



// FUNCTION 149041774 FUN_149041774 body=139 status=ok
// SIG undefined FUN_149041774(void)

void FUN_149041774(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      do {
        lVar1 = *plVar2;
        if (lVar1 != 0) {
          (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar3);
      plVar2 = (longlong *)*param_1;
    }
    plVar3 = plVar2;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)plVar2)) &&
       (plVar3 = (longlong *)plVar2[-1],
       0x1f < (ulonglong)((longlong)plVar2 + (-8 - (longlong)plVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(plVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 149041800 FUN_149041800 body=96 status=ok
// SIG undefined FUN_149041800(void)

void FUN_149041800(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x19);
  while (cVar1 == '\0') {
    FUN_149041800(param_1[2]);
    plVar2 = (longlong *)*param_1;
    param_1[7] = (longlong)&PTR_FUN_14ba6d600;
    FUN_149046764(param_1 + 7);
    param_1[4] = (longlong)&PTR_FUN_14ba6d600;
    FUN_149046764(param_1 + 4);
    FUN_1400020a8(param_1);
    param_1 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 149041860 FUN_149041860 body=39 status=ok
// SIG undefined FUN_149041860(void)

undefined8 * FUN_149041860(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6c740;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149041888 FUN_149041888 body=39 status=ok
// SIG undefined FUN_149041888(void)

undefined8 * FUN_149041888(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6c740;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490418b0 FUN_1490418b0 body=59 status=ok
// SIG undefined FUN_1490418b0(void)

undefined8 * FUN_1490418b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6c750;
  if (param_1[0xd] == 0) {
    cef_string_utf16_clear(param_1 + 2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490418ec FUN_1490418ec body=59 status=ok
// SIG undefined FUN_1490418ec(void)

undefined8 * FUN_1490418ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6c750;
  if (param_1[0xd] == 0) {
    cef_string_utf16_clear(param_1 + 2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149041928 FUN_149041928 body=1303 status=ok
// SIG undefined FUN_149041928(void)

void FUN_149041928(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  undefined8 unaff_RBP;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_198 [44];
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  longlong local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined **local_148;
  undefined1 *local_140;
  char local_138;
  undefined **local_130;
  undefined1 local_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  uint local_c8;
  uint local_c4;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar7 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  local_160 = param_1;
  local_158 = param_2;
  if (*param_4 != 0) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    FUN_14904204c(puVar9);
    if (puVar9 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)((longlong)puVar9 + (longlong)*(int *)(puVar9[1] + 4) + 8))
                ((longlong)puVar9 + (longlong)*(int *)(puVar9[1] + 4) + 8);
      uVar7 = 0;
      goto LAB_14904198e;
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_14904198e:
  local_130 = &PTR_FUN_14ba6c7d8;
  memset(local_128,0,0xe0);
  if (*(int *)(param_3 + 1) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*param_3;
  }
  local_148 = &PTR_FUN_14ba6d600;
  local_140 = (undefined1 *)0x0;
  local_138 = '\0';
  if (local_128 != (undefined1 *)0x0) {
    local_140 = local_128;
  }
  FUN_14903e1c6(&local_148,puVar10);
  local_148 = &PTR_FUN_14ba6d600;
  if ((local_140 != (undefined1 *)0x0) && (local_138 == '\x01')) {
    cef_string_utf16_clear();
    if (local_140 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_3 + 3) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)param_3[2];
  }
  local_148 = &PTR_FUN_14ba6d600;
  local_140 = (undefined1 *)0x0;
  local_138 = '\0';
  if (auStack_110 != (undefined1 *)0x0) {
    local_140 = auStack_110;
  }
  FUN_14903e1c6(&local_148,puVar10);
  local_148 = &PTR_FUN_14ba6d600;
  if ((local_140 != (undefined1 *)0x0) && (local_138 == '\x01')) {
    cef_string_utf16_clear();
    if (local_140 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_3 + 5) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)param_3[4];
  }
  local_148 = &PTR_FUN_14ba6d600;
  local_140 = (undefined1 *)0x0;
  local_138 = '\0';
  if (auStack_f8 != (undefined1 *)0x0) {
    local_140 = auStack_f8;
  }
  FUN_14903e1c6(&local_148,puVar10);
  local_148 = &PTR_FUN_14ba6d600;
  if ((local_140 != (undefined1 *)0x0) && (local_138 == '\x01')) {
    cef_string_utf16_clear();
    if (local_140 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_3 + 7) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)param_3[6];
  }
  local_148 = &PTR_FUN_14ba6d600;
  local_140 = (undefined1 *)0x0;
  local_138 = '\0';
  if (auStack_e0 != (undefined1 *)0x0) {
    local_140 = auStack_e0;
  }
  local_164 = uVar7;
  FUN_14903e1c6(&local_148,puVar10);
  local_148 = &PTR_FUN_14ba6d600;
  if ((local_140 != (undefined1 *)0x0) && (local_138 == '\x01')) {
    cef_string_utf16_clear();
    if (local_140 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_c8 = (uint)*(byte *)(param_3 + 8);
  local_c4 = (uint)*(byte *)((longlong)param_3 + 0x41);
  local_80 = (uint)*(byte *)((longlong)param_3 + 0x42);
  puVar1 = param_3 + 9;
  local_168 = FUN_145c31f02(puVar1);
  local_16c = FUN_1458c553e(puVar1);
  uVar7 = FUN_145c31eb8(puVar1);
  lVar2 = param_3[9];
  uVar4 = (uint)((ulonglong)((lVar2 / 36000000000) * 0x2aaaaaab) >> 0x20);
  iVar17 = (int)(lVar2 / 36000000000) + ((uVar4 >> 2) - ((int)uVar4 >> 0x1f)) * -0x18;
  auVar3 = SEXT816(lVar2 / 600000000) * ZEXT816(0x8888888888888889);
  iVar11 = (int)(lVar2 / 600000000) + ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) * -0x3c;
  lVar14 = lVar2 / 10000000 - lVar2 / -0x6769800000000000;
  auVar5 = SEXT816(lVar14) * ZEXT816(0x8888888888888889);
  auVar3 = SEXT816(lVar2 / 10000) * SEXT816(0x20c49ba5e353f7cf);
  iVar13 = (int)lVar14 + ((int)(auVar5._8_8_ >> 5) - (auVar5._12_4_ >> 0x1f)) * -0x3c;
  iVar16 = (int)(lVar2 / 10000) + ((int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f)) * -1000;
  iVar8 = FUN_145c31e70(puVar1);
  local_74 = 0;
  if (iVar8 != 6) {
    local_74 = iVar8 + 1;
  }
  local_7c = local_168;
  local_78 = local_16c;
  plVar15 = *(longlong **)(local_160 + 8);
  cVar12 = (char)local_164;
  local_150 = puVar9;
  local_70 = uVar7;
  local_6c = iVar17;
  local_68 = iVar11;
  local_64 = iVar13;
  local_60 = iVar16;
  if (cVar12 == '\0') {
    (*(code *)**(undefined8 **)((longlong)puVar9 + (longlong)*(int *)(puVar9[1] + 4) + 8))();
  }
  if (*(int *)(local_158 + 1) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*local_158;
  }
  FUN_1490201ba(&local_148,puVar10);
  cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,&local_148,&local_130,&local_150);
  local_148 = &PTR_FUN_14ba6d600;
  if ((local_140 != (undefined1 *)0x0) && (local_138 == '\x01')) {
    cef_string_utf16_clear();
    if (local_140 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (cVar6 == '\0') {
    (**(code **)*puVar9)(puVar9,0);
  }
  FUN_1490420be(&local_130);
  if (cVar12 == '\0') {
    (**(code **)(*(longlong *)((longlong)puVar9 + (longlong)*(int *)(puVar9[1] + 4) + 8) + 8))();
  }
  if (*param_4 != 0) {
    plVar15 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar15 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149041e40 FUN_149041e40 body=449 status=ok
// SIG undefined FUN_149041e40(void)

void FUN_149041e40(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [40];
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined **local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_4 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    FUN_1490424b2(puVar3,param_4);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8))
                ((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8);
      plVar5 = *(longlong **)(param_1 + 8);
      local_50 = puVar3;
      (*(code *)**(undefined8 **)((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8))
                ((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8);
      bVar1 = false;
      goto LAB_149041ea9;
    }
  }
  plVar5 = *(longlong **)(param_1 + 8);
  local_50 = (undefined8 *)0x0;
  bVar1 = true;
  puVar3 = (undefined8 *)0x0;
LAB_149041ea9:
  puVar6 = &DAT_149dfb77a;
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 1) != 0) {
    puVar4 = (undefined2 *)*param_3;
  }
  FUN_1490201ba(&local_68,puVar4);
  if (*(int *)(param_2 + 1) != 0) {
    puVar6 = (undefined2 *)*param_2;
  }
  FUN_1490201ba(&local_80,puVar6);
  cVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,&local_80,&local_68,&local_50);
  local_80 = &PTR_FUN_14ba6d600;
  if ((local_78 != 0) && (local_70 == '\x01')) {
    cef_string_utf16_clear();
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  local_68 = &PTR_FUN_14ba6d600;
  if ((local_60 != 0) && (local_58 == '\x01')) {
    cef_string_utf16_clear();
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if (cVar2 == '\0') {
    (**(code **)*puVar3)(puVar3,0xffffffff);
  }
  if (!bVar1) {
    (**(code **)(*(longlong *)((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8) + 8))();
  }
  if (*param_4 != 0) {
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149042002 FUN_149042002 body=73 status=ok
// SIG undefined FUN_149042002(void)

undefined8 * FUN_149042002(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6c760;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14904204c FUN_14904204c body=114 status=ok
// SIG undefined FUN_14904204c(void)

undefined8 * FUN_14904204c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_1[1] = &DAT_14ba6cdb8;
  *param_1 = &PTR_FUN_14ba6c778;
  param_1[0xd] = &PTR_LAB_14ba6c780;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  lVar1 = *param_2;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 1490420be FUN_1490420be body=78 status=ok
// SIG undefined FUN_1490420be(void)

void FUN_1490420be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba6c7d8;
  if (param_1[0x1c] != 0) {
    return;
  }
  cef_string_utf16_clear(param_1 + 1);
  cef_string_utf16_clear(param_1 + 4);
  cef_string_utf16_clear(param_1 + 7);
  cef_string_utf16_clear(param_1 + 10);
  return;
}



// FUNCTION 14904210c FUN_14904210c body=138 status=ok
// SIG undefined FUN_14904210c(void)

void FUN_14904210c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14001cc68(0x70,0x10);
  FUN_1490422a6(lVar1,param_1 + 0x10,param_2);
  local_28 = lVar1;
  if (lVar1 != 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4);
    (*(code *)**(undefined8 **)(lVar1 + 8 + lVar2))(lVar1 + lVar2 + 8);
  }
  FUN_144d731d0(0,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490421a6 FUN_1490421a6 body=92 status=ok
// SIG undefined FUN_1490421a6(void)

bool FUN_1490421a6(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x18 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x68 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x60) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x60 + lVar4) + 0x20))(param_1 + -0x68 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 149042236 FUN_149042236 body=111 status=ok
// SIG undefined FUN_149042236(void)

longlong FUN_149042236(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + -0x68) = &PTR_FUN_14ba6c778;
  *(undefined ***)(param_1 + -0x60 + (longlong)*(int *)(*(longlong *)(param_1 + -0x60) + 4)) =
       &PTR_LAB_14ba6c780;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x60) + 4);
  *(int *)(param_1 + -100 + (longlong)iVar1) = iVar1 + -0x60;
  if (*(longlong *)(param_1 + -0x58) != 0) {
    plVar2 = (longlong *)(param_1 + -0x38);
    if (*(longlong **)(param_1 + -0x48) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + -0x48);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x68);
  }
  return param_1 + -0x68;
}



// FUNCTION 1490422a6 FUN_1490422a6 body=122 status=ok
// SIG undefined FUN_1490422a6(void)

undefined8 * FUN_1490422a6(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_1[1] = &DAT_14ba6cdb8;
  *param_1 = &PTR_FUN_14ba6c7a8;
  param_1[0xd] = &PTR_LAB_14ba6c7b0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  lVar1 = *param_2;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  *(undefined1 *)(param_1 + 10) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 149042320 FUN_149042320 body=93 status=ok
// SIG undefined FUN_149042320(void)

void FUN_149042320(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = *(undefined1 *)(param_1 + 0x50);
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14904238c FUN_14904238c body=92 status=ok
// SIG undefined FUN_14904238c(void)

bool FUN_14904238c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x14 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x68 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x60) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x60 + lVar4) + 0x20))(param_1 + -0x68 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 14904241c FUN_14904241c body=111 status=ok
// SIG undefined FUN_14904241c(void)

longlong FUN_14904241c(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + -0x68) = &PTR_FUN_14ba6c7a8;
  *(undefined ***)(param_1 + -0x60 + (longlong)*(int *)(*(longlong *)(param_1 + -0x60) + 4)) =
       &PTR_LAB_14ba6c7b0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x60) + 4);
  *(int *)(param_1 + -100 + (longlong)iVar1) = iVar1 + -0x60;
  if (*(longlong *)(param_1 + -0x58) != 0) {
    plVar2 = (longlong *)(param_1 + -0x38);
    if (*(longlong **)(param_1 + -0x48) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + -0x48);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x68);
  }
  return param_1 + -0x68;
}



// FUNCTION 14904248c FUN_14904248c body=38 status=ok
// SIG undefined FUN_14904248c(void)

undefined8 FUN_14904248c(undefined8 param_1,int param_2)

{
  FUN_1490420be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490424b2 FUN_1490424b2 body=114 status=ok
// SIG undefined FUN_1490424b2(void)

undefined8 * FUN_1490424b2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_1[1] = &DAT_14ba6cdb8;
  *param_1 = &PTR_FUN_14ba6c7e0;
  param_1[0xd] = &PTR_LAB_14ba6c7f0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  lVar1 = *param_2;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 149042524 FUN_149042524 body=138 status=ok
// SIG undefined FUN_149042524(void)

void FUN_149042524(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14001cc68(0x70,0x10);
  FUN_1490426be(lVar1,param_1 + 0x10,param_2);
  local_28 = lVar1;
  if (lVar1 != 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4);
    (*(code *)**(undefined8 **)(lVar1 + 8 + lVar2))(lVar1 + lVar2 + 8);
  }
  FUN_144d731d0(0,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490425be FUN_1490425be body=92 status=ok
// SIG undefined FUN_1490425be(void)

bool FUN_1490425be(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x18 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x68 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x60) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x60 + lVar4) + 0x20))(param_1 + -0x68 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 14904264e FUN_14904264e body=111 status=ok
// SIG undefined FUN_14904264e(void)

longlong FUN_14904264e(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + -0x68) = &PTR_FUN_14ba6c7e0;
  *(undefined ***)(param_1 + -0x60 + (longlong)*(int *)(*(longlong *)(param_1 + -0x60) + 4)) =
       &PTR_LAB_14ba6c7f0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x60) + 4);
  *(int *)(param_1 + -100 + (longlong)iVar1) = iVar1 + -0x60;
  if (*(longlong *)(param_1 + -0x58) != 0) {
    plVar2 = (longlong *)(param_1 + -0x38);
    if (*(longlong **)(param_1 + -0x48) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + -0x48);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x68);
  }
  return param_1 + -0x68;
}



// FUNCTION 1490426be FUN_1490426be body=122 status=ok
// SIG undefined FUN_1490426be(void)

undefined8 * FUN_1490426be(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_1[1] = &DAT_14ba6cdb8;
  *param_1 = &PTR_FUN_14ba6c818;
  param_1[0xd] = &PTR_LAB_14ba6c820;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  lVar1 = *param_2;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  *(undefined4 *)(param_1 + 10) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 149042738 FUN_149042738 body=93 status=ok
// SIG undefined FUN_149042738(void)

void FUN_149042738(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = *(undefined4 *)(param_1 + 0x50);
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490427a4 FUN_1490427a4 body=92 status=ok
// SIG undefined FUN_1490427a4(void)

bool FUN_1490427a4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x14 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x68 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x60) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x60 + lVar4) + 0x20))(param_1 + -0x68 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 149042834 FUN_149042834 body=111 status=ok
// SIG undefined FUN_149042834(void)

longlong FUN_149042834(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + -0x68) = &PTR_FUN_14ba6c818;
  *(undefined ***)(param_1 + -0x60 + (longlong)*(int *)(*(longlong *)(param_1 + -0x60) + 4)) =
       &PTR_LAB_14ba6c820;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x60) + 4);
  *(int *)(param_1 + -100 + (longlong)iVar1) = iVar1 + -0x60;
  if (*(longlong *)(param_1 + -0x58) != 0) {
    plVar2 = (longlong *)(param_1 + -0x38);
    if (*(longlong **)(param_1 + -0x48) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + -0x48);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x68);
  }
  return param_1 + -0x68;
}



// FUNCTION 1490428a8 FUN_1490428a8 body=38 status=ok
// SIG undefined FUN_1490428a8(void)

undefined8 FUN_1490428a8(undefined8 param_1,int param_2)

{
  FUN_149028160();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490428ce FUN_1490428ce body=38 status=ok
// SIG undefined FUN_1490428ce(void)

void FUN_1490428ce(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14902f812(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1490428f4 FUN_1490428f4 body=205 status=ok
// SIG undefined FUN_1490428f4(void)

int FUN_1490428f4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_14689c22e(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_14689c22e(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_14689c22e(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1490429c2 FUN_1490429c2 body=383 status=ok
// SIG undefined FUN_1490429c2(void)

undefined4 * FUN_1490429c2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149042b42(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_40 = uVar7;
  if ((uVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(uVar7);
    uVar7 = *local_40;
  }
  bVar2 = DAT_14c950c29;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  if (((bVar2 & 1) != 0) && (uVar7 != 0)) {
    FUN_14689c22e(uVar7);
  }
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_149042c28(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x14) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_149042d3e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149042b42 FUN_149042b42 body=230 status=ok
// SIG undefined FUN_149042b42(void)

int * FUN_149042b42(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 149042c28 FUN_149042c28 body=162 status=ok
// SIG undefined FUN_149042c28(void)

undefined8 FUN_149042c28(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    iVar5 = FUN_1490428f4(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_149042ccc(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_149042c4c;
    }
  }
  uVar6 = 0;
LAB_149042c4c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149042ccc FUN_149042ccc body=114 status=ok
// SIG undefined FUN_149042ccc(void)

void FUN_149042ccc(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 149042d3e FUN_149042d3e body=499 status=ok
// SIG undefined FUN_149042d3e(void)

void FUN_149042d3e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_14689c22e(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149042f32 FUN_149042f32 body=122 status=ok
// SIG undefined FUN_149042f32(void)

longlong FUN_149042f32(longlong param_1,longlong param_2)

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
    FUN_149042fac(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 149042fac FUN_149042fac body=201 status=ok
// SIG undefined FUN_149042fac(void)

undefined8 * FUN_149042fac(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147a8b2d8(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_149043076(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 149043076 FUN_149043076 body=105 status=ok
// SIG undefined FUN_149043076(void)

undefined8 * FUN_149043076(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 1490430e0 FUN_1490430e0 body=260 status=ok
// SIG undefined FUN_1490430e0(void)

undefined8 * FUN_1490430e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
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
  FUN_14904320c(param_1,&local_30);
  *param_1 = &PTR_FUN_14ba6c8e0;
  lVar3 = *param_3;
  param_1[5] = lVar3;
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8))();
    plVar4 = (longlong *)param_1[5];
  }
  param_1[6] = 0xfffffffffffffffe;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  (**(code **)(*plVar4 + 0x48))(0,param_1 + 7);
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
  lVar3 = *param_3;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490431e6 FUN_1490431e6 body=38 status=ok
// SIG undefined FUN_1490431e6(void)

undefined8 FUN_1490431e6(undefined8 param_1,int param_2)

{
  FUN_14902ad5e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14904320c FUN_14904320c body=98 status=ok
// SIG undefined FUN_14904320c(void)

undefined8 * FUN_14904320c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14ba6c900;
  param_1[3] = *param_2;
  lVar3 = param_2[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
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
  }
  return param_1;
}



// FUNCTION 14904326e FUN_14904326e body=38 status=ok
// SIG undefined FUN_14904326e(void)

undefined8 FUN_14904326e(undefined8 param_1,int param_2)

{
  FUN_149043296();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149043296 FUN_149043296 body=70 status=ok
// SIG undefined FUN_149043296(void)

void FUN_149043296(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6c8e0;
  FUN_14904333a(param_1 + 7);
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  FUN_1490432dc(param_1);
  return;
}



// FUNCTION 1490432dc FUN_1490432dc body=93 status=ok
// SIG undefined FUN_1490432dc(void)

void FUN_1490432dc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ba6c900;
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
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014904332d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14904333a FUN_14904333a body=120 status=ok
// SIG undefined FUN_14904333a(void)

void FUN_14904333a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    if (puVar1 != puVar2) {
      do {
        (**(code **)*puVar1)(puVar1,0);
        puVar1 = puVar1 + 3;
      } while (puVar1 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    puVar2 = puVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)puVar1)) &&
       (puVar2 = (undefined8 *)puVar1[-1],
       0x1f < (ulonglong)((longlong)puVar1 + (-8 - (longlong)puVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(puVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1490433b4 FUN_1490433b4 body=24 status=ok
// SIG undefined FUN_1490433b4(void)

void FUN_1490433b4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490433c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1490433cc FUN_1490433cc body=29 status=ok
// SIG undefined FUN_1490433cc(void)

undefined8 FUN_1490433cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490433ea FUN_1490433ea body=711 status=ok
// SIG undefined FUN_1490433ea(void)

/* WARNING: Removing unreachable block (ram,0x00014904352e) */

undefined8 *
FUN_1490433ea(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined **local_e0;
  longlong local_d8;
  char local_d0;
  undefined1 local_c8 [16];
  undefined **local_b8;
  longlong local_b0;
  char local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined8 local_78;
  ulonglong local_70;
  undefined2 local_68;
  undefined6 uStack_66;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_4;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  plVar1 = *(longlong **)(param_1 + 0x10);
  (**(code **)(*(longlong *)*param_6 + 8))((longlong *)*param_6,&local_b8);
  puVar4 = &local_68;
  FUN_149021a64(&local_b8,puVar4);
  if (7 < local_50) {
    puVar4 = (undefined2 *)CONCAT62(uStack_66,local_68);
  }
  FUN_140056680(local_a0,puVar4);
  (**(code **)(*(longlong *)*param_6 + 0x18))((longlong *)*param_6,&local_e0);
  puVar4 = &local_88;
  FUN_149021a64(&local_e0,puVar4);
  if (7 < local_70) {
    puVar4 = (undefined2 *)CONCAT62(uStack_86,local_88);
  }
  FUN_140056680(local_c8,puVar4);
  (**(code **)(*plVar1 + 8))(plVar1,&local_90,local_c8,local_a0);
  puVar3[1] = &DAT_14ba6c968;
  *puVar3 = &PTR_FUN_14ba6c970;
  puVar3[5] = &PTR_LAB_14ba6c9b0;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  puVar3[2] = local_90;
  local_90 = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
    UNLOCK();
  }
  if (7 < local_70) {
    FUN_14600850e(&local_88,CONCAT62(uStack_86,local_88));
  }
  local_78 = 0;
  local_70 = 7;
  local_88 = 0;
  local_e0 = &PTR_FUN_14ba6d600;
  if (((local_d8 != 0) && (local_d0 == '\x01')) && (cef_string_utf16_clear(), local_d8 != 0)) {
    FUN_1400020a8();
  }
  if (7 < local_50) {
    FUN_14600850e(&local_68,CONCAT62(uStack_66,local_68));
  }
  local_58 = 0;
  local_50 = 7;
  local_68 = 0;
  local_b8 = &PTR_FUN_14ba6d600;
  if (((local_b0 != 0) && (local_a8 == '\x01')) && (cef_string_utf16_clear(), local_b0 != 0)) {
    FUN_1400020a8();
  }
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *local_e8;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_6;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490436b2 FUN_1490436b2 body=13 status=ok
// SIG undefined FUN_1490436b2(void)

void FUN_1490436b2(longlong param_1)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(param_1 + -0x10 + (longlong)-*(int *)(param_1 + -4));
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}



// FUNCTION 1490436c0 FUN_1490436c0 body=92 status=ok
// SIG undefined FUN_1490436c0(void)

bool FUN_1490436c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x10 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x28 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x20) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x20 + lVar4) + 0x20))(param_1 + -0x28 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 149043740 FUN_149043740 body=41 status=ok
// SIG undefined FUN_149043740(void)

longlong FUN_149043740(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -*(int *)(param_1 + -4) + -0x28;
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 14904376a FUN_14904376a body=685 status=ok
// SIG undefined FUN_14904376a(void)

undefined4 FUN_14904376a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_118 [40];
  undefined **local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8 [2];
  undefined **local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0 [2];
  longlong local_a0;
  undefined1 local_98 [16];
  undefined2 local_88;
  undefined6 uStack_86;
  undefined8 local_78;
  ulonglong local_70;
  undefined2 local_68;
  undefined6 uStack_66;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *param_3;
    local_a0 = lVar2;
    if (lVar2 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
    }
    FUN_149043d0e(local_98,&local_a0);
    (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_c8);
    puVar4 = &local_68;
    FUN_149021a64(&local_c8,puVar4);
    if (7 < local_50) {
      puVar4 = (undefined2 *)CONCAT62(uStack_66,local_68);
    }
    FUN_140056680(local_b0,puVar4);
    (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_f0);
    puVar4 = &local_88;
    FUN_149021a64(&local_f0,puVar4);
    if (7 < local_70) {
      puVar4 = (undefined2 *)CONCAT62(uStack_86,local_88);
    }
    FUN_140056680(local_d8,puVar4);
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1,local_d8,local_b0,local_98);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (7 < local_70) {
      FUN_14600850e(&local_88,CONCAT62(uStack_86,local_88));
    }
    local_78 = 0;
    local_70 = 7;
    local_88 = 0;
    local_f0 = &PTR_FUN_14ba6d600;
    if ((local_e8 != 0) && (local_e0 == '\x01')) {
      cef_string_utf16_clear();
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (7 < local_50) {
      FUN_14600850e(&local_68,CONCAT62(uStack_66,local_68));
    }
    local_58 = 0;
    local_50 = 7;
    local_68 = 0;
    local_c8 = &PTR_FUN_14ba6d600;
    if ((local_c0 != 0) && (local_b8 == '\x01')) {
      cef_string_utf16_clear();
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1449db362(local_98);
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
    }
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149043a18 FUN_149043a18 body=220 status=ok
// SIG undefined FUN_149043a18(void)

void FUN_149043a18(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined **local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_78 = &PTR_LAB_14ba6ca50;
    local_50 = 0;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    local_58 = FUN_14001cc68(0x50,0x10);
    *(longlong *)local_58 = local_58;
    *(longlong *)(local_58 + 8) = local_58;
    *(longlong *)(local_58 + 0x10) = local_58;
    *(undefined2 *)(local_58 + 0x18) = 0x101;
    local_48 = &PTR_FUN_14ba6d600;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),&local_78);
    FUN_149043fa2(&local_78);
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149043af6 FUN_149043af6 body=256 status=ok
// SIG undefined FUN_149043af6(void)

undefined4
FUN_149043af6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    *param_4 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = *param_5;
    local_58 = lVar2;
    if (lVar2 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
    }
    FUN_14904468e(local_50,&local_58);
    local_68 = local_50;
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,param_4);
    FUN_1449db362(local_50);
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
    }
  }
  lVar2 = *param_5;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149043c18 FUN_149043c18 body=92 status=ok
// SIG undefined FUN_149043c18(void)

bool FUN_149043c18(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x10 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x28 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x20) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x20 + lVar4) + 0x20))(param_1 + -0x28 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 149043ca8 FUN_149043ca8 body=102 status=ok
// SIG undefined FUN_149043ca8(void)

longlong FUN_149043ca8(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_14ba6c970;
  *(undefined ***)(param_1 + -0x20 + (longlong)*(int *)(*(longlong *)(param_1 + -0x20) + 4)) =
       &PTR_LAB_14ba6c9b0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x20) + 4);
  *(int *)(param_1 + -0x24 + (longlong)iVar1) = iVar1 + -0x20;
  puVar2 = *(undefined8 **)(param_1 + -0x18);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x28);
  }
  return param_1 + -0x28;
}



// FUNCTION 149043d0e FUN_149043d0e body=128 status=ok
// SIG undefined FUN_149043d0e(void)

longlong * FUN_149043d0e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,2,0x10);
  *(undefined4 *)(param_1 + 1) = 2;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149e020b0;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ba6c9e0;
  lVar2 = *param_2;
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
  }
  return param_1;
}



// FUNCTION 149043d8e FUN_149043d8e body=73 status=ok
// SIG undefined FUN_149043d8e(void)

undefined8 * FUN_149043d8e(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6c9e0;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149043dec FUN_149043dec body=126 status=ok
// SIG undefined FUN_149043dec(void)

void FUN_149043dec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba6c9e0;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149043e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
    return;
  }
  return;
}



// FUNCTION 149043e6a FUN_149043e6a body=126 status=ok
// SIG undefined FUN_149043e6a(void)

void FUN_149043e6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba6c9e0;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149043edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
    return;
  }
  return;
}



// FUNCTION 149043ee8 FUN_149043ee8 body=156 status=ok
// SIG undefined FUN_149043ee8(void)

void FUN_149043ee8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba6c9e0;
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x18);
  (p_Var1->ProcessLocksList).Blink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)&p_Var2->Blink + (longlong)*(int *)((longlong)&p_Var2->Blink->Flink + 4))
    )();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149043f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149043f8e FUN_149043f8e body=20 status=ok
// SIG undefined FUN_149043f8e(void)

undefined8 FUN_149043f8e(longlong param_1)

{
  (**(code **)**(undefined8 **)(param_1 + 0x18))();
  return 1;
}



// FUNCTION 149043fa2 FUN_149043fa2 body=149 status=ok
// SIG undefined FUN_149043fa2(void)

void FUN_149043fa2(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14ba6ca50;
  plVar1 = param_1 + 4;
  if (param_1[5] != 0) {
    (**(code **)(**(longlong **)param_1[1] + 0x70))(*(longlong **)param_1[1],plVar1);
  }
  if (*(int *)(param_1 + 9) != -1) {
    (**(code **)(**(longlong **)param_1[1] + 0x20))();
  }
  puVar2 = param_1 + 6;
  if ((param_1[7] != 0) && (*(longlong *)(param_1[7] + 8) != 0)) {
    (**(code **)(**(longlong **)param_1[1] + 0x40))(*(longlong **)param_1[1],puVar2);
  }
  *puVar2 = &PTR_FUN_14ba6d600;
  FUN_149046764(puVar2);
  FUN_149041800(*(undefined8 *)(*plVar1 + 8));
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14904405c FUN_14904405c body=349 status=ok
// SIG undefined FUN_14904405c(void)

void FUN_14904405c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  undefined **local_98;
  longlong local_90;
  char local_88;
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined **local_68;
  longlong local_60;
  char local_58;
  undefined **local_50;
  longlong local_48;
  char local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1490201ba(&local_80,param_3);
  FUN_1490201ba(&local_98,param_2);
  FUN_149044608(&local_68,&local_98,&local_80);
  FUN_1490441e0(param_1 + 0x20,local_38,&local_68);
  local_50 = &PTR_FUN_14ba6d600;
  if (local_48 != 0) {
    if (local_40 == '\x01') {
      cef_string_utf16_clear();
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    local_48 = 0;
    local_40 = '\0';
  }
  local_68 = &PTR_FUN_14ba6d600;
  if (local_60 != 0) {
    if (local_58 == '\x01') {
      cef_string_utf16_clear();
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    local_60 = 0;
    local_58 = '\0';
  }
  local_98 = &PTR_FUN_14ba6d600;
  if ((local_90 != 0) && (local_88 == '\x01')) {
    cef_string_utf16_clear();
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  local_80 = &PTR_FUN_14ba6d600;
  if ((local_78 != 0) && (local_70 == '\x01')) {
    cef_string_utf16_clear();
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490441ba FUN_1490441ba body=38 status=ok
// SIG undefined FUN_1490441ba(void)

undefined8 FUN_1490441ba(undefined8 param_1,int param_2)

{
  FUN_149043fa2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490441e0 FUN_1490441e0 body=262 status=ok
// SIG undefined FUN_1490441e0(void)

undefined8 * FUN_1490441e0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint local_58;
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *param_1;
  local_50 = param_1;
  plVar3 = (longlong *)FUN_14001cc68(0x50,0x10);
  FUN_149044490(plVar3 + 4,param_3);
  *plVar3 = lVar4;
  plVar3[1] = lVar4;
  plVar3[2] = lVar4;
  *(undefined2 *)(plVar3 + 3) = 0;
  lVar4 = *(longlong *)(*param_1 + 8);
  uVar2 = 0;
  lVar1 = lVar4;
  if (*(char *)(lVar4 + 0x19) == '\0') {
    do {
      lVar4 = lVar1;
      uVar2 = FUN_149044516(plVar3 + 4,lVar4 + 0x20);
      lVar1 = *(longlong *)(lVar4 + (ulonglong)(~uVar2 >> 0x1b & 0xfffffff0));
    } while (*(char *)(lVar1 + 0x19) == '\0');
    uVar2 = uVar2 >> 0x1f;
  }
  if (param_1[1] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a938d();
  }
  local_48 = 0;
  FUN_1490442e8();
  local_60 = lVar4;
  local_58 = uVar2;
  FUN_149044342(param_1,&local_60,plVar3);
  *param_2 = plVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490442e8 FUN_1490442e8 body=90 status=ok
// SIG undefined FUN_1490442e8(void)

void FUN_1490442e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_FUN_14ba6d600;
    FUN_149046764(lVar1 + 0x38);
    *(undefined ***)(lVar1 + 0x20) = &PTR_FUN_14ba6d600;
    FUN_149046764(lVar1 + 0x20);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 149044342 FUN_149044342 body=333 status=ok
// SIG undefined FUN_149044342(void)

longlong * FUN_149044342(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  param_1[1] = param_1[1] + 1;
  plVar3 = (longlong *)*param_1;
  plVar4 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar4;
  if (plVar4 == plVar3) {
    *plVar3 = (longlong)param_3;
    plVar3[1] = (longlong)param_3;
    plVar3[2] = (longlong)param_3;
    plVar3 = param_3;
    goto LAB_1490443b2;
  }
  plVar1 = param_3 + 1;
  if ((int)param_2[1] == 0) {
    plVar4[2] = (longlong)param_3;
    if (*param_2 == plVar3[2]) {
      plVar4 = plVar3 + 2;
      goto LAB_1490443a2;
    }
  }
  else {
    *plVar4 = (longlong)param_3;
    plVar4 = plVar3;
    if (*param_2 == *plVar3) {
LAB_1490443a2:
      *plVar4 = (longlong)param_3;
    }
  }
  plVar4 = (longlong *)*plVar1;
  cVar2 = (char)plVar4[3];
  plVar6 = param_3;
  while (cVar2 == '\0') {
    plVar5 = *(longlong **)plVar4[1];
    if (plVar4 == plVar5) {
      plVar5 = (longlong *)((longlong *)plVar4[1])[2];
      if ((char)plVar5[3] == '\0') goto LAB_1490443e2;
      if (plVar6 == (longlong *)plVar4[2]) {
        FUN_14904457e(param_1,plVar4);
        plVar6 = plVar4;
      }
      *(undefined1 *)(plVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      FUN_1490445c4(param_1,*(undefined8 *)(plVar6[1] + 8));
    }
    else if ((char)plVar5[3] == '\0') {
LAB_1490443e2:
      *(undefined1 *)(plVar4 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar1 + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(*plVar1 + 8);
    }
    else {
      if (plVar6 == (longlong *)*plVar4) {
        FUN_1490445c4(param_1,plVar4);
        plVar6 = plVar4;
      }
      *(undefined1 *)(plVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      FUN_14904457e(param_1,*(undefined8 *)(plVar6[1] + 8));
    }
    plVar1 = plVar6 + 1;
    plVar4 = (longlong *)plVar6[1];
    cVar2 = (char)plVar4[3];
  }
  plVar3 = (longlong *)plVar3[1];
LAB_1490443b2:
  *(undefined1 *)(plVar3 + 3) = 1;
  return param_3;
}



// FUNCTION 149044490 FUN_149044490 body=133 status=ok
// SIG undefined FUN_149044490(void)

undefined8 * FUN_149044490(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_14ba6d600;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar3 = 0;
  uVar2 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
  }
  FUN_149048250(param_1,uVar2,uVar3,1);
  param_1[3] = &PTR_FUN_14ba6d600;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar3 = 0;
  uVar2 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
  }
  FUN_149048250(param_1 + 3,uVar2,uVar3,1);
  return param_1;
}



// FUNCTION 149044516 FUN_149044516 body=103 status=ok
// SIG undefined FUN_149044516(void)

ulonglong FUN_149044516(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) {
    lVar3 = *(longlong *)(param_2 + 8);
    if (lVar3 == 0) {
      return 0;
    }
    bVar4 = *(longlong *)(lVar3 + 8) != 0;
    if (!bVar4 || lVar1 == 0) {
      return (ulonglong)-(uint)bVar4;
    }
    if (*(longlong *)(lVar1 + 8) == 0) {
      return 0xffffffff;
    }
  }
  else {
    lVar3 = *(longlong *)(param_2 + 8);
    if (lVar3 == 0) {
      return 1;
    }
  }
  if (*(longlong *)(lVar3 + 8) == 0) {
    return 1;
  }
  uVar2 = cef_string_utf16_cmp();
  return uVar2;
}



// FUNCTION 14904457e FUN_14904457e body=70 status=ok
// SIG undefined FUN_14904457e(void)

void FUN_14904457e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar2 = *plVar1;
  *(longlong *)(param_2 + 0x10) = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong *)(lVar2 + 8) = param_2;
  }
  plVar3 = *(longlong **)(param_2 + 8);
  plVar1[1] = (longlong)plVar3;
  if (*(longlong *)(*param_1 + 8) == param_2) {
    plVar3 = (longlong *)(*param_1 + 8);
  }
  else {
    plVar3 = plVar3 + (ulonglong)(*plVar3 != param_2) * 2;
  }
  *plVar3 = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// FUNCTION 1490445c4 FUN_1490445c4 body=68 status=ok
// SIG undefined FUN_1490445c4(void)

void FUN_1490445c4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x10);
  *param_2 = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong **)(lVar2 + 8) = param_2;
  }
  plVar3 = (longlong *)param_2[1];
  *(longlong **)(lVar1 + 8) = plVar3;
  if (*(longlong **)(*param_1 + 8) == param_2) {
    plVar4 = (longlong *)(*param_1 + 8);
  }
  else {
    plVar4 = plVar3 + 2;
    if ((longlong *)plVar3[2] != param_2) {
      plVar4 = plVar3;
    }
  }
  *plVar4 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// FUNCTION 149044608 FUN_149044608 body=133 status=ok
// SIG undefined FUN_149044608(void)

undefined8 * FUN_149044608(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_14ba6d600;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar3 = 0;
  uVar2 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
  }
  FUN_149048250(param_1,uVar2,uVar3,1);
  param_1[3] = &PTR_FUN_14ba6d600;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  puVar1 = *(undefined8 **)(param_3 + 8);
  uVar3 = 0;
  uVar2 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
  }
  FUN_149048250(param_1 + 3,uVar2,uVar3,1);
  return param_1;
}



// FUNCTION 14904468e FUN_14904468e body=128 status=ok
// SIG undefined FUN_14904468e(void)

longlong * FUN_14904468e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,2,0x10);
  *(undefined4 *)(param_1 + 1) = 2;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149e020b0;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ba6ca80;
  lVar2 = *param_2;
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
  }
  return param_1;
}



// FUNCTION 14904470e FUN_14904470e body=73 status=ok
// SIG undefined FUN_14904470e(void)

undefined8 * FUN_14904470e(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6ca80;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14904476c FUN_14904476c body=126 status=ok
// SIG undefined FUN_14904476c(void)

void FUN_14904476c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba6ca80;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001490447df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
    return;
  }
  return;
}



// FUNCTION 1490447ea FUN_1490447ea body=126 status=ok
// SIG undefined FUN_1490447ea(void)

void FUN_1490447ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba6ca80;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014904485d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
    return;
  }
  return;
}



// FUNCTION 149044868 FUN_149044868 body=156 status=ok
// SIG undefined FUN_149044868(void)

void FUN_149044868(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba6ca80;
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x18);
  (p_Var1->ProcessLocksList).Blink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)&p_Var2->Blink + (longlong)*(int *)((longlong)&p_Var2->Blink->Flink + 4))
    )();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490448f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14904490e FUN_14904490e body=20 status=ok
// SIG undefined FUN_14904490e(void)

undefined8 FUN_14904490e(longlong param_1)

{
  (**(code **)**(undefined8 **)(param_1 + 0x18))();
  return 1;
}



// FUNCTION 149044922 FUN_149044922 body=327 status=ok
// SIG undefined FUN_149044922(void)

void FUN_149044922(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar10 = (undefined8 *)*param_1;
  if ((ulonglong)(param_1[2] - (longlong)puVar10 >> 5) < param_3) {
    FUN_149044a6a(param_1,param_3);
    puVar12 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)(param_2 + 8);
    do {
      *puVar12 = &PTR_FUN_14ba6c6f0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      uVar6 = puVar10[1];
      puVar12[1] = *puVar10;
      puVar12[2] = uVar6;
      *puVar12 = &PTR_FUN_14ba6c6e8;
      puVar12 = puVar12 + 4;
      puVar10 = puVar10 + 4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  else {
    puVar11 = (undefined8 *)param_1[1];
    uVar9 = (longlong)puVar11 - (longlong)puVar10 >> 5;
    lVar8 = uVar9 - param_3;
    puVar12 = puVar11;
    if (uVar9 < param_3) {
      for (; puVar10 != puVar12; puVar10 = puVar10 + 4) {
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        puVar10[1] = *(undefined8 *)(param_2 + 8);
        puVar10[2] = uVar6;
        param_2 = param_2 + 0x20;
        puVar12 = (undefined8 *)param_1[1];
      }
      if (param_3 != uVar9) {
        puVar10 = (undefined8 *)(param_2 + 8);
        do {
          *puVar12 = &PTR_FUN_14ba6c6f0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          puVar12[3] = 0;
          uVar6 = puVar10[1];
          puVar12[1] = *puVar10;
          puVar12[2] = uVar6;
          *puVar12 = &PTR_FUN_14ba6c6e8;
          puVar12 = puVar12 + 4;
          puVar10 = puVar10 + 4;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0);
      }
    }
    else {
      puVar12 = puVar10 + param_3 * 4;
      puVar7 = puVar12;
      if (param_3 != 0) {
        lVar8 = 8;
        do {
          puVar1 = (undefined4 *)(param_2 + lVar8);
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          puVar2 = (undefined4 *)((longlong)puVar10 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          lVar8 = lVar8 + 0x20;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        puVar11 = (undefined8 *)param_1[1];
      }
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        (**(code **)*puVar7)(puVar7,0);
      }
    }
  }
  param_1[1] = (longlong)puVar12;
  return;
}



// FUNCTION 149044a6a FUN_149044a6a body=238 status=ok
// SIG undefined FUN_149044a6a(void)

void FUN_149044a6a(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 >> 0x3b != 0) {
    FUN_149044b5a();
LAB_149044b52:
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  puVar1 = (undefined8 *)*param_1;
  lVar3 = param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[1];
    lVar2 = lVar3;
    puVar4 = puVar1;
    if (puVar1 != puVar5) {
      do {
        (**(code **)*puVar4)(puVar4,0);
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar5);
      puVar4 = (undefined8 *)*param_1;
      lVar2 = param_1[2];
    }
    puVar5 = puVar4;
    if ((0xfff < (ulonglong)(lVar2 - (longlong)puVar4)) &&
       (puVar5 = (undefined8 *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar5)))) goto LAB_149044b52;
    FUN_1400020a8(puVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar7 = lVar3 - (longlong)puVar1 >> 5;
  uVar6 = (uVar7 >> 1) + uVar7;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if (0x7ffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar6 = 0x7ffffffffffffff;
  }
  lVar3 = FUN_149044b6c(param_1,uVar6);
  *param_1 = lVar3;
  param_1[1] = lVar3;
  param_1[2] = uVar6 * 0x20 + lVar3;
  return;
}



// FUNCTION 149044b5a FUN_149044b5a body=16 status=ok
// SIG undefined FUN_149044b5a(void)

void FUN_149044b5a(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 149044b6c FUN_149044b6c body=69 status=ok
// SIG undefined FUN_149044b6c(void)

undefined8 FUN_149044b6c(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x7f < param_2) {
    uVar1 = FUN_140c1ca1d();
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = FUN_14001cc68(param_2 << 5,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 149044bb2 FUN_149044bb2 body=39 status=ok
// SIG undefined FUN_149044bb2(void)

undefined8 * FUN_149044bb2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6caf0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149044bda FUN_149044bda body=39 status=ok
// SIG undefined FUN_149044bda(void)

undefined8 * FUN_149044bda(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6caf0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149044c02 FUN_149044c02 body=120 status=ok
// SIG undefined FUN_149044c02(void)

void FUN_149044c02(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    if (puVar1 != puVar2) {
      do {
        (**(code **)*puVar1)(puVar1,0);
        puVar1 = puVar1 + 5;
      } while (puVar1 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    puVar2 = puVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)puVar1)) &&
       (puVar2 = (undefined8 *)puVar1[-1],
       0x1f < (ulonglong)((longlong)puVar1 + (-8 - (longlong)puVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(puVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 149044c7e FUN_149044c7e body=38 status=ok
// SIG undefined FUN_149044c7e(void)

undefined8 FUN_149044c7e(undefined8 param_1,int param_2)

{
  FUN_149044ca4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149044ca4 FUN_149044ca4 body=88 status=ok
// SIG undefined FUN_149044ca4(void)

void FUN_149044ca4(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba6cd30;
  lVar2 = param_1[0x1b];
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  plVar3 = (longlong *)param_1[0x1a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_149044cfc(param_1);
  return;
}



// FUNCTION 149044cfc FUN_149044cfc body=112 status=ok
// SIG undefined FUN_149044cfc(void)

void FUN_149044cfc(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ba6cd70;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b2a2(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_149044d6e(param_1 + 4);
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 149044d6e FUN_149044d6e body=52 status=ok
// SIG undefined FUN_149044d6e(void)

void FUN_149044d6e(longlong *param_1)

{
  FUN_149044da2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149044da2 FUN_149044da2 body=89 status=ok
// SIG undefined FUN_149044da2(void)

void FUN_149044da2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 149044dfc FUN_149044dfc body=29 status=ok
// SIG undefined FUN_149044dfc(void)

undefined8 FUN_149044dfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149044e1a FUN_149044e1a body=38 status=ok
// SIG undefined FUN_149044e1a(void)

undefined8 FUN_149044e1a(undefined8 param_1,int param_2)

{
  FUN_149044ef2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149044e44 FUN_149044e44 body=156 status=ok
// SIG undefined FUN_149044e44(void)

void FUN_149044e44(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined **local_38;
  longlong local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar2 = (undefined8 *)FUN_1447a1f4a(param_3);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  FUN_1490201ba(&local_38,puVar3);
  (**(code **)*puVar1)(puVar1,param_2,&local_38);
  local_38 = &PTR_FUN_14ba6d600;
  if ((local_30 != 0) && (local_28 == '\x01')) {
    cef_string_utf16_clear();
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149044ef2 FUN_149044ef2 body=91 status=ok
// SIG undefined FUN_149044ef2(void)

void FUN_149044ef2(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6ce00;
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149044f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 149044f4e FUN_149044f4e body=83 status=ok
// SIG undefined FUN_149044f4e(void)

undefined8 * FUN_149044f4e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba6ce30;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149044fa2 FUN_149044fa2 body=85 status=ok
// SIG undefined FUN_149044fa2(void)

void FUN_149044fa2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ba6ce70;
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
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149044ff8 FUN_149044ff8 body=38 status=ok
// SIG undefined FUN_149044ff8(void)

undefined8 FUN_149044ff8(undefined8 param_1,int param_2)

{
  FUN_149044fa2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14904501e FUN_14904501e body=154 status=ok
// SIG undefined FUN_14904501e(void)

undefined8 * FUN_14904501e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = &PTR_FUN_149e447a0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 1;
  *(undefined2 *)(puVar1 + 0xd) = 0;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14ba6cec0;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1490450d0 FUN_1490450d0 body=29 status=ok
// SIG undefined FUN_1490450d0(void)

undefined8 FUN_1490450d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490450ee FUN_1490450ee body=57 status=ok
// SIG undefined FUN_1490450ee(void)

undefined8 * FUN_1490450ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6cee0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149045146 FUN_149045146 body=158 status=ok
// SIG undefined FUN_149045146(void)

void FUN_149045146(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_48 = CONCAT62(local_48._2_6_,0x22);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_48,2);
  local_48 = uVar1;
  local_40 = iVar2;
  FUN_149045302(param_1,&local_48);
  local_32 = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_32,2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490451e6 FUN_1490451e6 body=140 status=ok
// SIG undefined FUN_1490451e6(void)

void FUN_1490451e6(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2a = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_2a,2);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_149045302(param_1);
  local_2a = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_2a,2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149045274 FUN_149045274 body=140 status=ok
// SIG undefined FUN_149045274(void)

void FUN_149045274(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2a = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_2a,2);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14904575e(param_1);
  local_2a = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_2a,2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149045302 FUN_149045302 body=813 status=ok
// SIG undefined FUN_149045302(void)

void FUN_149045302(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined2 **ppuVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  int local_f8;
  undefined2 *local_f0;
  undefined4 local_e8;
  undefined2 *local_e0;
  undefined4 local_d8;
  undefined2 *local_d0;
  undefined4 local_c8;
  undefined2 *local_c0;
  undefined4 local_b8;
  undefined2 *local_b0;
  undefined4 local_a8;
  undefined2 *local_a0;
  undefined4 local_98;
  undefined2 *local_90;
  undefined4 local_88;
  longlong local_80;
  uint local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulonglong *local_60;
  undefined1 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 != 0) {
    lVar3 = *param_2;
    do {
      uVar8 = 0;
      if (0 < (int)uVar2) {
        uVar8 = uVar2 - 1;
        if (0x7fe < uVar8) {
          uVar8 = 0x7ff;
        }
        uVar8 = uVar8 + 1;
        uVar5 = 0;
        do {
          uVar1 = *(ushort *)(lVar3 + uVar5 * 2);
          if (((((ulonglong)uVar1 < 0x23) && ((0x400003700U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0))
              || (uVar1 == 0x5c)) || (uVar1 < 0x20)) {
            uVar8 = (uint)uVar5;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar8 != uVar5);
      }
      uVar7 = uVar2;
      if ((int)uVar8 < (int)uVar2) {
        uVar7 = uVar8;
      }
      if (0 < (int)uVar7) {
        local_80 = lVar3;
        local_78 = uVar7;
        FUN_147dea178(*(undefined8 *)(param_1 + 8),&local_80);
        uVar2 = *(uint *)(param_2 + 1);
        lVar3 = *param_2;
      }
      uVar7 = uVar2 - uVar8;
      if ((int)uVar2 <= (int)(uVar2 - uVar8)) {
        uVar7 = uVar2;
      }
      lVar9 = 0;
      uVar5 = 0;
      if (0 < (int)uVar7) {
        uVar5 = (ulonglong)uVar7;
      }
      uVar8 = (uint)uVar5;
      lVar3 = (lVar3 + (longlong)(int)uVar2 * 2) - (ulonglong)(uVar8 * 2);
      *param_2 = lVar3;
      *(uint *)(param_2 + 1) = uVar8;
      if (0 < (int)uVar7) {
        lVar9 = 0;
        do {
          uVar8 = (uint)uVar5;
          lVar3 = *param_2;
          uVar1 = *(ushort *)(lVar3 + lVar9 * 2);
          switch(uVar1) {
          case 8:
            local_c0 = (undefined2 *)&DAT_149e38588;
            local_b8 = 2;
            uVar4 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_c0;
            break;
          case 9:
            local_b0 = (undefined2 *)&DAT_149e01ffe;
            local_a8 = 2;
            uVar4 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_b0;
            break;
          case 10:
            local_a0 = (undefined2 *)&DAT_149e01ff8;
            local_98 = 2;
            uVar4 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_a0;
            break;
          case 0xb:
switchD_149045409_caseD_b:
            if (uVar1 < 0x20) {
              local_58 = 0;
              local_60 = &local_48;
              local_70 = local_50;
              local_68 = local_50;
              FUN_14089c9ba(&local_70,"\\u%04x");
              local_f8 = (int)local_68 - (int)local_70;
              local_100 = local_70;
              FUN_149045630(*(undefined8 *)(param_1 + 8),&local_100);
              FUN_144aa0d5a(&local_70);
              goto LAB_1490454b3;
            }
            goto LAB_1490455cd;
          case 0xc:
            local_d0 = (undefined2 *)&DAT_149e3858e;
            local_c8 = 2;
            uVar4 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_d0;
            break;
          case 0xd:
            local_e0 = (undefined2 *)&DAT_149e02004;
            local_d8 = 2;
            uVar4 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_e0;
            break;
          default:
            if (uVar1 == 0x22) {
              local_f0 = (undefined2 *)&DAT_149e0200a;
              local_e8 = 2;
              uVar4 = *(undefined8 *)(param_1 + 8);
              ppuVar6 = &local_f0;
            }
            else {
              if (uVar1 != 0x5c) goto switchD_149045409_caseD_b;
              local_90 = &DAT_149e01ff2;
              local_88 = 2;
              uVar4 = *(undefined8 *)(param_1 + 8);
              ppuVar6 = &local_90;
            }
          }
          FUN_147dea178(uVar4,ppuVar6);
LAB_1490454b3:
          lVar9 = lVar9 + 1;
          uVar8 = *(uint *)(param_2 + 1);
          uVar5 = (ulonglong)(int)uVar8;
        } while (lVar9 < (longlong)uVar5);
        lVar3 = *param_2;
      }
LAB_1490455cd:
      uVar7 = uVar8 - (int)lVar9;
      if ((int)uVar8 <= (int)uVar7) {
        uVar7 = uVar8;
      }
      uVar2 = 0;
      if (0 < (int)uVar7) {
        uVar2 = uVar7;
      }
      lVar3 = (lVar3 + (longlong)(int)uVar8 * 2) - (ulonglong)(uVar2 * 2);
      *param_2 = lVar3;
      *(uint *)(param_2 + 1) = uVar2;
    } while (0 < (int)uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149045630 FUN_149045630 body=131 status=ok
// SIG undefined FUN_149045630(void)

void FUN_149045630(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_158 [40];
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1490456b4(local_130,*param_2,*(undefined4 *)(param_2 + 1));
  (**(code **)(*param_1 + 0x170))(param_1,local_28,(longlong)local_20 * 2);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490456b4 FUN_1490456b4 body=170 status=ok
// SIG undefined FUN_1490456b4(void)

longlong FUN_1490456b4(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else {
    uVar3 = 0;
    if (0 < (int)param_3) {
      bVar5 = *(char *)(param_2 + (ulonglong)(param_3 - 1)) == '\0';
      uVar3 = (uint)bVar5;
      if (bVar5) {
        param_3 = param_3 - 1;
      }
    }
    *(uint *)(param_1 + 0x110) = param_3;
    FUN_146f1bf34(param_1,0,uVar3 + param_3,2);
    lVar1 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar1 = param_1;
    }
    *(longlong *)(param_1 + 0x108) = lVar1;
    uVar4 = uVar3 + param_3;
    if (uVar4 != 0 && SCARRY4(uVar3,param_3) == (int)uVar4 < 0) {
      uVar2 = 0;
      do {
        *(short *)(lVar1 + uVar2 * 2) = (short)*(char *)(param_2 + uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
  }
  return param_1;
}



// FUNCTION 14904575e FUN_14904575e body=803 status=ok
// SIG undefined FUN_14904575e(void)

void FUN_14904575e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 **ppuVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  int local_f8;
  undefined2 *local_f0;
  undefined4 local_e8;
  undefined2 *local_e0;
  undefined4 local_d8;
  undefined2 *local_d0;
  undefined4 local_c8;
  undefined2 *local_c0;
  undefined4 local_b8;
  undefined2 *local_b0;
  undefined4 local_a8;
  undefined2 *local_a0;
  undefined4 local_98;
  undefined2 *local_90;
  undefined4 local_88;
  longlong local_80;
  uint local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulonglong *local_60;
  undefined1 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (*(uint *)(param_2 + 1) != 0) {
    lVar7 = *param_2;
    do {
      uVar10 = 0;
      uVar8 = (uint)uVar5;
      if (0 < (int)uVar8) {
        uVar10 = uVar8 - 1;
        if (0x7fe < uVar10) {
          uVar10 = 0x7ff;
        }
        uVar10 = uVar10 + 1;
        uVar5 = 0;
        do {
          bVar1 = *(byte *)(lVar7 + uVar5);
          if (((((ulonglong)bVar1 < 0x23) && ((0x400003700U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0))
              || (bVar1 == 0x5c)) || ((char)bVar1 < ' ')) {
            uVar10 = (uint)uVar5;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar10 != uVar5);
      }
      uVar3 = uVar8;
      if ((int)uVar10 < (int)uVar8) {
        uVar3 = uVar10;
      }
      if (0 < (int)uVar3) {
        local_80 = lVar7;
        local_78 = uVar3;
        FUN_149045630(*(undefined8 *)(param_1 + 8),&local_80);
        uVar8 = *(uint *)(param_2 + 1);
        lVar7 = *param_2;
      }
      uVar3 = uVar8 - uVar10;
      if ((int)uVar8 <= (int)(uVar8 - uVar10)) {
        uVar3 = uVar8;
      }
      lVar11 = 0;
      uVar5 = 0;
      if (0 < (int)uVar3) {
        uVar5 = (ulonglong)uVar3;
      }
      lVar7 = ((int)uVar8 + lVar7) - uVar5;
      *param_2 = lVar7;
      *(int *)(param_2 + 1) = (int)uVar5;
      if (0 < (int)uVar3) {
        lVar11 = 0;
        do {
          lVar7 = *param_2;
          bVar1 = *(byte *)(lVar7 + lVar11);
          switch(bVar1) {
          case 8:
            local_c0 = (undefined2 *)&DAT_149e38588;
            local_b8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_c0;
            break;
          case 9:
            local_b0 = (undefined2 *)&DAT_149e01ffe;
            local_a8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_b0;
            break;
          case 10:
            local_a0 = (undefined2 *)&DAT_149e01ff8;
            local_98 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_a0;
            break;
          case 0xb:
switchD_149045860_caseD_b:
            if (bVar1 < 0x20) {
              local_58 = 0;
              local_60 = &local_48;
              local_70 = local_50;
              local_68 = local_50;
              FUN_14089c9ba(&local_70,"\\u%04x",(int)(char)bVar1);
              local_f8 = (int)local_68 - (int)local_70;
              local_100 = local_70;
              FUN_149045630(*(undefined8 *)(param_1 + 8),&local_100);
              FUN_144aa0d5a(&local_70);
              goto LAB_149045909;
            }
            goto LAB_149045a23;
          case 0xc:
            local_d0 = (undefined2 *)&DAT_149e3858e;
            local_c8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_d0;
            break;
          case 0xd:
            local_e0 = (undefined2 *)&DAT_149e02004;
            local_d8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_e0;
            break;
          default:
            if (bVar1 == 0x22) {
              local_f0 = (undefined2 *)&DAT_149e0200a;
              local_e8 = 2;
              uVar2 = *(undefined8 *)(param_1 + 8);
              ppuVar6 = &local_f0;
            }
            else {
              if (bVar1 != 0x5c) goto switchD_149045860_caseD_b;
              local_90 = &DAT_149e01ff2;
              local_88 = 2;
              uVar2 = *(undefined8 *)(param_1 + 8);
              ppuVar6 = &local_90;
            }
          }
          FUN_147dea178(uVar2,ppuVar6);
LAB_149045909:
          lVar11 = lVar11 + 1;
          uVar5 = (ulonglong)(int)param_2[1];
        } while (lVar11 < (longlong)uVar5);
        lVar7 = *param_2;
      }
LAB_149045a23:
      iVar4 = (int)uVar5;
      uVar8 = iVar4 - (int)lVar11;
      uVar9 = (ulonglong)uVar8;
      if (iVar4 <= (int)uVar8) {
        uVar9 = uVar5 & 0xffffffff;
      }
      uVar5 = 0;
      if (0 < (int)uVar9) {
        uVar5 = uVar9;
      }
      lVar7 = (iVar4 + lVar7) - uVar5;
      *param_2 = lVar7;
      *(int *)(param_2 + 1) = (int)uVar5;
    } while (0 < (int)uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149045a82 FUN_149045a82 body=24 status=ok
// SIG undefined FUN_149045a82(void)

void FUN_149045a82(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149045a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149045a9a FUN_149045a9a body=29 status=ok
// SIG undefined FUN_149045a9a(void)

undefined8 FUN_149045a9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149045ab8 FUN_149045ab8 body=83 status=ok
// SIG undefined FUN_149045ab8(void)

undefined8 * FUN_149045ab8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba6cf60;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149045b0e FUN_149045b0e body=406 status=ok
// SIG undefined FUN_149045b0e(void)

undefined8
FUN_149045b0e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,longlong *param_8,
             undefined1 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong lStack_d8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e0 = 0;
  lStack_d8 = 0;
  local_cf = 1;
  local_c8 = 0;
  local_c0 = 0xffffffff00000000;
  local_b8 = 1;
  local_b4 = 0x18ffffffff;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (&local_e0 != param_4) {
    local_e0 = *param_4;
    *param_4 = 0;
    lStack_d8 = param_4[1];
    param_4[1] = 0;
  }
  local_d0 = param_5;
  local_ce = param_6;
  local_e8 = param_3;
  FUN_140bc2be4(&local_c8,param_8);
  local_b8 = param_9;
  local_b4 = CONCAT44(local_b4._4_4_,param_10);
  local_cf = param_7;
  FUN_1446ddc76(&local_f0,"WebBrowser",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_14493e38c(uVar1,local_f0);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x48))(plVar2);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2,&local_e8);
  FUN_14903b332(&local_e8);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)((longlong)param_8 + 0xc) != -1) {
    if (*param_8 != 0) {
      FUN_1400020a8();
    }
    *param_8 = 0;
    param_8[1] = -0x100000000;
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149045ca6 FUN_149045ca6 body=141 status=ok
// SIG undefined FUN_149045ca6(void)

undefined8
FUN_149045ca6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"WebBrowser",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_14493e38c(uVar1,local_30);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x48))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149045d34 FUN_149045d34 body=29 status=ok
// SIG undefined FUN_149045d34(void)

undefined8 FUN_149045d34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149045d52 FUN_149045d52 body=39 status=ok
// SIG undefined FUN_149045d52(void)

undefined8 * FUN_149045d52(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6d1a0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149045d7a FUN_149045d7a body=39 status=ok
// SIG undefined FUN_149045d7a(void)

undefined8 * FUN_149045d7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6d1a0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149045da1 FUN_149045da1 body=38 status=ok
// SIG undefined FUN_149045da1(void)

void FUN_149045da1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149045dc8(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 149045dc8 FUN_149045dc8 body=77 status=ok
// SIG undefined FUN_149045dc8(void)

void FUN_149045dc8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
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



// FUNCTION 149045e16 FUN_149045e16 body=52 status=ok
// SIG undefined FUN_149045e16(void)

void FUN_149045e16(longlong *param_1)

{
  FUN_149045e4a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


