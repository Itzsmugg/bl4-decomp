// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146a574b2 FUN_146a574b2 body=313 status=ok
// SIG undefined FUN_146a574b2(void)

longlong * FUN_146a574b2(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a575ae:
    *puVar5 = &PTR_LAB_149ed0600;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f118f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a575ae;
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
    *puVar5 = &PTR_LAB_149ed0600;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f118f0;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 146a575ec FUN_146a575ec body=18 status=ok
// SIG undefined FUN_146a575ec(void)

undefined8 FUN_146a575ec(undefined8 param_1)

{
  FUN_146a565d8(param_1,0);
  return 0;
}



// FUNCTION 146a575fe FUN_146a575fe body=190 status=ok
// SIG undefined FUN_146a575fe(void)

void FUN_146a575fe(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x2a0) != 0) &&
      (plVar5 = *(longlong **)(param_1 + 0x2a8), plVar5 != (longlong *)0x0)) && (0 < (int)plVar5[1])
     ) {
    iVar4 = (int)plVar5[1];
    local_30 = 0;
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146a57656;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar6);
    local_30 = *(undefined8 *)(param_1 + 0x2a0);
LAB_146a57656:
    local_28 = plVar5;
    FUN_14697f106(param_1,&local_30);
    plVar5 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  FUN_14697d97c(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a576be FUN_146a576be body=215 status=ok
// SIG undefined FUN_146a576be(void)

undefined8 FUN_146a576be(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x2a0) != 0) &&
      (plVar5 = *(longlong **)(param_1 + 0x2a8), plVar5 != (longlong *)0x0)) && (0 < (int)plVar5[1])
     ) {
    iVar4 = (int)plVar5[1];
    local_40 = 0;
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146a57720;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar6);
    local_40 = *(undefined8 *)(param_1 + 0x2a0);
LAB_146a57720:
    local_38 = plVar5;
    FUN_14697f106(param_1,&local_40);
    plVar5 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
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
  FUN_14697d9c4(param_1,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a57796 FUN_146a57796 body=369 status=ok
// SIG undefined FUN_146a57796(void)

undefined1 * FUN_146a57796(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar5 = FUN_140591fd6();
  if (cVar5 == '\0') {
    FUN_146a565d8(param_1);
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_146a578b5:
      local_f8 = 0;
      plStack_f0 = (longlong *)0x0;
      bVar8 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_146a578b5;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar8 = iVar6 == iVar4;
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar8);
      uVar7 = *(undefined8 *)(param_1 + 8);
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
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar8 = false;
      local_f8 = uVar7;
      plStack_f0 = plVar3;
    }
    plVar3 = plStack_f0;
    uVar7 = FUN_140592a6e(local_e8,&local_f8);
    FUN_1403d4c6e(param_2,uVar7);
    if (!bVar8) {
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
    FUN_14493db24(local_e8);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a57908 FUN_146a57908 body=226 status=ok
// SIG undefined FUN_146a57908(void)

undefined1 * FUN_146a57908(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar1 = FUN_140591fd6();
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
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x100020702;
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_1403d4c6e(param_2,local_e8);
    FUN_14493db24(local_e8);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a579ec FUN_146a579ec body=234 status=ok
// SIG undefined FUN_146a579ec(void)

void FUN_146a579ec(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d0) = uVar3;
  *(longlong *)(param_1 + 0x2d8) = lVar4;
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
  if (((*(longlong *)(param_1 + 0x328) != 0) &&
      (plVar5 = *(longlong **)(param_1 + 0x330), plVar5 != (longlong *)0x0)) && (0 < (int)plVar5[1])
     ) {
    iVar7 = (int)plVar5[1];
    do {
      if (iVar7 == 0) {
        FUN_1469cd550(0);
        goto LAB_146a57a9f;
      }
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    FUN_1469cd550(*(undefined8 *)(param_1 + 0x328));
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
LAB_146a57a9f:
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000146a57ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a57ad6 FUN_146a57ad6 body=244 status=ok
// SIG undefined FUN_146a57ad6(void)

bool FUN_146a57ad6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = *(longlong **)(param_1 + 0x10);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_146a57b39:
    lVar7 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_146a57b39;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
    bVar3 = false;
  }
  puVar6 = (undefined8 *)FUN_14162fdc4();
  FUN_1469d2296(*puVar6,&local_40);
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
  if (!bVar3) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_40 == lVar7 && local_40 != 0;
}



// FUNCTION 146a57bcc FUN_146a57bcc body=381 status=ok
// SIG undefined FUN_146a57bcc(void)

ulonglong FUN_146a57bcc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  undefined7 uVar7;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (((*(longlong *)(param_1 + 0x328) != 0) && (*(longlong *)(param_1 + 0x330) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x330) + 8))) {
    plVar8 = *(longlong **)(param_1 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_146a57c5b:
      lVar10 = 0;
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar8[1];
      do {
        if (iVar4 == 0) goto LAB_146a57c5b;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar11 = iVar4 == iVar3;
        if (bVar11) {
          *(int *)(plVar8 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar11);
      lVar10 = *(longlong *)(param_1 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    plVar9 = *(longlong **)(param_1 + 0x330);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      uVar5 = 0;
    }
    else {
      iVar4 = (int)plVar9[1];
      uVar5 = 0;
      do {
        if (iVar4 == 0) {
          plVar9 = (longlong *)0x0;
          goto LAB_146a57c90;
        }
        LOCK();
        iVar3 = (int)plVar9[1];
        bVar11 = iVar4 == iVar3;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar11);
      uVar5 = *(undefined8 *)(param_1 + 0x328);
    }
LAB_146a57c90:
    FUN_1469ce078(uVar5,&local_48);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if (plVar9 != (longlong *)0x0) {
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
    uVar6 = CONCAT71(uVar7,local_48 != 0 && local_48 == lVar10);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146a57d4a FUN_146a57d4a body=438 status=ok
// SIG undefined FUN_146a57d4a(void)

undefined4 * FUN_146a57d4a(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146a57f04(param_1,local_38);
  cVar3 = FUN_146a57fa6(local_38);
  if (cVar3 == '\0') {
    pfVar6 = (float *)FUN_146a58012(local_38);
    if ((*pfVar6 != 1.0) || (NAN(*pfVar6))) goto LAB_146a57d7f;
    if ((pfVar6[1] != 0.0) || (NAN(pfVar6[1]))) goto LAB_146a57d7f;
    if ((pfVar6[2] != 1.0) || (NAN(pfVar6[2]))) goto LAB_146a57d7f;
    if ((pfVar6[3] != 1.0) || ((NAN(pfVar6[3]) || (*(char *)(pfVar6 + 4) != '\x04'))))
    goto LAB_146a57d7f;
    cVar3 = FUN_146a57ad6(param_1);
    if (cVar3 == '\0') {
      if (*(char *)(param_1 + 0x3b) != '\x01') {
        cVar3 = FUN_146a57bcc(param_1);
        cVar4 = FUN_146a580d6(param_1);
        lVar2 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar4 != '\0') * 8);
        if (cVar3 == '\0') {
          param_2[4] = *(undefined4 *)(lVar2 + 0xb70);
          uVar7 = *(undefined4 *)(lVar2 + 0xb60);
          uVar8 = *(undefined4 *)(lVar2 + 0xb64);
          uVar9 = *(undefined4 *)(lVar2 + 0xb68);
          uVar10 = *(undefined4 *)(lVar2 + 0xb6c);
        }
        else {
          param_2[4] = *(undefined4 *)(lVar2 + 0xbac);
          uVar7 = *(undefined4 *)(lVar2 + 0xb9c);
          uVar8 = *(undefined4 *)(lVar2 + 0xba0);
          uVar9 = *(undefined4 *)(lVar2 + 0xba4);
          uVar10 = *(undefined4 *)(lVar2 + 0xba8);
        }
        *param_2 = uVar7;
        param_2[1] = uVar8;
        param_2[2] = uVar9;
        param_2[3] = uVar10;
        goto LAB_146a57d95;
      }
      cVar3 = FUN_146a580d6(param_1);
      lVar2 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar3 != '\0') * 8);
      uVar7 = *(undefined4 *)(lVar2 + 0xb78);
      uVar8 = *(undefined4 *)(lVar2 + 0xb7c);
      uVar9 = *(undefined4 *)(lVar2 + 0xb80);
      *param_2 = *(undefined4 *)(lVar2 + 0xb74);
      param_2[1] = uVar7;
      param_2[2] = uVar8;
      param_2[3] = uVar9;
      uVar7 = *(undefined4 *)(lVar2 + 0xb84);
    }
    else {
      cVar3 = FUN_146a580d6(param_1);
      lVar2 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar3 != '\0') * 8);
      uVar7 = *(undefined4 *)(lVar2 + 0xb8c);
      uVar8 = *(undefined4 *)(lVar2 + 0xb90);
      uVar9 = *(undefined4 *)(lVar2 + 0xb94);
      *param_2 = *(undefined4 *)(lVar2 + 0xb88);
      param_2[1] = uVar7;
      param_2[2] = uVar8;
      param_2[3] = uVar9;
      uVar7 = *(undefined4 *)(lVar2 + 0xb98);
    }
  }
  else {
LAB_146a57d7f:
    puVar5 = (undefined4 *)FUN_146a58012(local_38);
    uVar7 = puVar5[1];
    uVar8 = puVar5[2];
    uVar9 = puVar5[3];
    *param_2 = *puVar5;
    param_2[1] = uVar7;
    param_2[2] = uVar8;
    param_2[3] = uVar9;
    uVar7 = puVar5[4];
  }
  param_2[4] = uVar7;
LAB_146a57d95:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a57f04 FUN_146a57f04 body=161 status=ok
// SIG undefined FUN_146a57f04(void)

undefined8 * FUN_146a57f04(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_146a57f87:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = param_1 + 0x250;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a57f87;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + 8);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    param_2[2] = param_1 + 0x250;
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



// FUNCTION 146a57fa6 FUN_146a57fa6 body=107 status=ok
// SIG undefined FUN_146a57fa6(void)

ulonglong FUN_146a57fa6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong unaff_RBX;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_146a58000:
    bVar7 = false;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a58000;
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
    bVar7 = *param_1 != 0;
    if (bVar7) {
      uVar6 = FUN_14020e432(param_1[2],*param_1,0);
      unaff_RBX = (ulonglong)uVar6;
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
  return CONCAT71((int7)(unaff_RBX >> 8),(byte)unaff_RBX & bVar7) & 0xffffffff;
}



// FUNCTION 146a58012 FUN_146a58012 body=188 status=ok
// SIG undefined FUN_146a58012(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146a58012(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined *unaff_RSI;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a58061;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *param_1;
    if (lVar4 != 0) {
      unaff_RSI = (undefined *)param_1[2];
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
    if (lVar4 != 0) {
      return unaff_RSI;
    }
  }
LAB_146a58061:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c98f0a8) && (FUN_144b3d300(&DAT_14c98f0a8), DAT_14c98f0a8 == -1)) {
    _DAT_14c98f094 = 0x3f800000;
    uRam000000014c98f098 = 0;
    uRam000000014c98f09c = 0x3f800000;
    uRam000000014c98f0a0 = 0x3f800000;
    DAT_14c98f0a4 = 0;
    _Init_thread_footer(&DAT_14c98f0a8);
  }
  return &DAT_14c98f094;
}



// FUNCTION 146a580ce FUN_146a580ce body=7 status=ok
// SIG undefined FUN_146a580ce(void)

undefined1 FUN_146a580ce(longlong param_1)

{
  return *(undefined1 *)(param_1 + 800);
}



// FUNCTION 146a580d6 FUN_146a580d6 body=680 status=ok
// SIG undefined FUN_146a580d6(void)

undefined1 FUN_146a580d6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 800) == '\x02') {
    if (*(longlong *)(param_1 + 0x5b8) == 0) {
      if (((*(longlong *)(param_1 + 0x328) != 0) &&
          (plVar8 = *(longlong **)(param_1 + 0x330), plVar8 != (longlong *)0x0)) &&
         (0 < (int)plVar8[1])) {
        iVar7 = (int)plVar8[1];
        do {
          if (iVar7 == 0) goto LAB_146a58371;
          LOCK();
          iVar5 = (int)plVar8[1];
          bVar11 = iVar7 == iVar5;
          if (bVar11) {
            *(int *)(plVar8 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar11);
        if (*(longlong *)(param_1 + 0x328) == 0) {
          bVar11 = false;
        }
        else {
          plVar10 = *(longlong **)(param_1 + 0x330);
          if ((plVar10 == (longlong *)0x0) || ((int)plVar10[1] < 1)) {
LAB_146a58201:
            uVar9 = 0;
            plVar10 = (longlong *)0x0;
          }
          else {
            iVar7 = (int)plVar10[1];
            do {
              if (iVar7 == 0) goto LAB_146a58201;
              LOCK();
              iVar5 = (int)plVar10[1];
              bVar11 = iVar7 == iVar5;
              if (bVar11) {
                *(int *)(plVar10 + 1) = iVar7 + 1;
                iVar5 = iVar7;
              }
              iVar7 = iVar5;
              UNLOCK();
            } while (!bVar11);
            uVar9 = *(undefined8 *)(param_1 + 0x328);
          }
          FUN_1469bd33a(uVar9,&local_50);
          plVar3 = local_48;
          bVar11 = local_50 != 0;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_48 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar10 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
        }
        LOCK();
        plVar10 = plVar8 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        if (bVar11) {
          plVar8 = (longlong *)FUN_14162fdc4();
          if (((*(longlong *)(param_1 + 0x328) == 0) ||
              (plVar10 = *(longlong **)(param_1 + 0x330), plVar10 == (longlong *)0x0)) ||
             ((int)plVar10[1] < 1)) {
            plVar10 = (longlong *)0x0;
            uVar9 = 0;
          }
          else {
            iVar7 = (int)plVar10[1];
            uVar9 = 0;
            do {
              if (iVar7 == 0) {
                plVar10 = (longlong *)0x0;
                goto LAB_146a582d4;
              }
              LOCK();
              iVar5 = (int)plVar10[1];
              bVar11 = iVar7 == iVar5;
              if (bVar11) {
                *(int *)(plVar10 + 1) = iVar7 + 1;
                iVar5 = iVar7;
              }
              iVar7 = iVar5;
              UNLOCK();
            } while (!bVar11);
            uVar9 = *(undefined8 *)(param_1 + 0x328);
          }
LAB_146a582d4:
          FUN_1469bd33a(uVar9,&local_60);
          FUN_1469bcfa6(local_60,&local_50);
          lVar4 = *plVar8;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_48 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
            plVar8 = local_58 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar10 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
          if (local_50 != lVar4) goto LAB_146a5815a;
        }
      }
    }
    else {
      plVar8 = (longlong *)FUN_14162fdc4();
      FUN_1469bcfa6(*(undefined8 *)(param_1 + 0x5b8),&local_50);
      lVar4 = *plVar8;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_48 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      if (local_50 != lVar4) goto LAB_146a5815a;
    }
LAB_146a58371:
    uVar6 = 0;
  }
  else {
LAB_146a5815a:
    uVar6 = *(undefined1 *)(param_1 + 800);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146a58380 FUN_146a58380 body=99 status=ok
// SIG undefined FUN_146a58380(void)

undefined8 * FUN_146a58380(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  if (((*(longlong *)(param_1 + 0x328) == 0) || (lVar2 = *(longlong *)(param_1 + 0x330), lVar2 == 0)
      ) || (*(int *)(lVar2 + 8) < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = lVar2;
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar4 = iVar3 == iVar1;
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar4);
    if (param_2[1] != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x328);
    }
  }
  return param_2;
}



// FUNCTION 146a583e4 FUN_146a583e4 body=39 status=ok
// SIG undefined FUN_146a583e4(void)

longlong FUN_146a583e4(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_146a580d6();
  return *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar1 != '\0') * 8) + 0x6f0;
}



// FUNCTION 146a5840c FUN_146a5840c body=39 status=ok
// SIG undefined FUN_146a5840c(void)

longlong FUN_146a5840c(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_146a580d6();
  return *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar1 != '\0') * 8) + 0x7a0;
}



// FUNCTION 146a58434 FUN_146a58434 body=34 status=ok
// SIG undefined FUN_146a58434(void)

void FUN_146a58434(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x2d0);
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 146a58456 FUN_146a58456 body=34 status=ok
// SIG undefined FUN_146a58456(void)

void FUN_146a58456(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x2e0);
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 146a58478 FUN_146a58478 body=34 status=ok
// SIG undefined FUN_146a58478(void)

void FUN_146a58478(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x2f0);
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 146a5849a FUN_146a5849a body=34 status=ok
// SIG undefined FUN_146a5849a(void)

void FUN_146a5849a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x300);
  lVar1 = *(longlong *)(param_1 + 0x308);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 146a584bc FUN_146a584bc body=35 status=ok
// SIG undefined FUN_146a584bc(void)

undefined8 * FUN_146a584bc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140133f88(param_1 + 0x458);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a584e0 FUN_146a584e0 body=14 status=ok
// SIG undefined FUN_146a584e0(void)

undefined8 * FUN_146a584e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x318);
  *param_2 = *(undefined8 *)(param_1 + 0x310);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a584ee FUN_146a584ee body=142 status=ok
// SIG undefined FUN_146a584ee(void)

void FUN_146a584ee(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x328) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x330);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x330);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x330) = plVar2;
  }
  FUN_146a5857c(param_1);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000146a5856f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a5857c FUN_146a5857c body=266 status=ok
// SIG undefined FUN_146a5857c(void)

void FUN_146a5857c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x2b0) == 0) || (*(longlong *)(param_1 + 0x2b8) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x2b8) + 8) < 1)) {
    local_30 = FUN_146a5c806;
    local_28 = 0;
    FUN_146a574b2(local_40,param_1);
    FUN_14697ef1e(param_1,&local_30,0,local_40);
    *(code **)(param_1 + 0x2b0) = local_30;
    plVar3 = (longlong *)CONCAT44(uStack_24,local_28);
    plVar2 = *(longlong **)(param_1 + 0x2b8);
    if (plVar2 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar2 = *(longlong **)(param_1 + 0x2b8);
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x2b8) = plVar3;
      plVar3 = (longlong *)CONCAT44(uStack_24,local_28);
    }
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
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



// FUNCTION 146a58688 FUN_146a58688 body=129 status=ok
// SIG undefined FUN_146a58688(void)

undefined8 * FUN_146a58688(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x328) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x330), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
LAB_146a586f1:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a586f1;
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
    if (*(longlong *)(param_1 + 0x328) == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      FUN_1469bebd0(*(longlong *)(param_1 + 0x328),param_2);
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
  return param_2;
}



// FUNCTION 146a5870a FUN_146a5870a body=429 status=ok
// SIG undefined FUN_146a5870a(void)

void FUN_146a5870a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 == (longlong *)0x0) {
LAB_146a58737:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_146a58737;
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    local_48 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plStack_40 = plVar7;
    if ((int)*plVar3 == 0) {
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
  FUN_1469fa73c(param_1 + 0x3a8,&local_48);
  if (((*(longlong *)(param_1 + 0x328) != 0) &&
      (plVar7 = *(longlong **)(param_1 + 0x330), plVar7 != (longlong *)0x0)) && (0 < (int)plVar7[1])
     ) {
    uVar8 = 0;
    iVar6 = (int)plVar7[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_146a587e0;
      }
      LOCK();
      iVar6 = (int)plVar7[1];
      bVar9 = iVar5 == iVar6;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar9);
    uVar8 = *(undefined8 *)(param_1 + 0x328);
LAB_146a587e0:
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_146a58830:
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_146a58830;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      local_58 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_50 = plVar3;
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
    FUN_1469d1ed2(uVar8,&local_58,1);
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
    if (iVar5 != 0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a588b8 FUN_146a588b8 body=128 status=ok
// SIG undefined FUN_146a588b8(void)

undefined8 * FUN_146a588b8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x328) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x330), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_1469bd33a(0,param_2);
        return param_2;
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
    FUN_1469bd33a(*(undefined8 *)(param_1 + 0x328),param_2);
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



// FUNCTION 146a58938 FUN_146a58938 body=132 status=ok
// SIG undefined FUN_146a58938(void)

undefined8 * FUN_146a58938(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a588b8(param_1,&local_28);
  if (local_28 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1469c2e94(local_28,param_2);
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a589be FUN_146a589be body=995 status=ok
// SIG undefined FUN_146a589be(void)

undefined8 * FUN_146a589be(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  undefined1 local_249;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined8 local_230;
  longlong *local_228;
  wchar_t *local_220;
  undefined4 local_218;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_140a55e66();
  *param_1 = &PTR_FUN_149f04c60;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FUN_140a50678(&local_220);
  local_258 = &local_249;
  FUN_140a52ce6(local_248,"SSpacer",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",0x17c);
  FUN_140a50c6a(local_248,&local_230,&local_220);
  param_1[0x5a] = local_230;
  param_1[0x5b] = local_228;
  if (local_228 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_228 + 1) = (int)local_228[1] + 1;
    UNLOCK();
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_228 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (local_240 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_240 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_1449db362(local_60);
  FUN_140a4ff8c(&local_220);
  uVar4 = DAT_14c98dec8;
  param_1[0x5c] = DAT_14c98dec8;
  lVar3 = DAT_14c98ded0;
  param_1[0x5d] = DAT_14c98ded0;
  if (lVar3 == 0) {
    param_1[0x5e] = uVar4;
    param_1[0x5f] = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    lVar3 = DAT_14c98ded0;
    uVar4 = DAT_14c98dec8;
    UNLOCK();
    param_1[0x5e] = DAT_14c98dec8;
    param_1[0x5f] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      lVar3 = DAT_14c98ded0;
      UNLOCK();
      param_1[0x60] = DAT_14c98dec8;
      param_1[0x61] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      goto LAB_146a58b74;
    }
  }
  param_1[0x60] = uVar4;
  param_1[0x61] = 0;
LAB_146a58b74:
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 1;
  *(undefined1 *)(param_1 + 100) = 1;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  local_220 = L"DefaultTabTitle";
  local_218 = 0xf;
  FUN_1446e940c(local_248,&local_220);
  local_220 = L"DockTab";
  local_218 = 7;
  FUN_1446e940c(&local_230,&local_220);
  FUN_140208bae(&local_220,&local_230,local_248,L"UNNAMED");
  FUN_14023423e(param_1 + 0x67,&local_220);
  *(undefined1 *)(param_1 + 0x69) = 1;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  if (local_220 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_220 + 0x10))();
  }
  plVar5 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar5;
  param_1[0x6c] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 0x6d) = (int)plVar5[1];
  *(undefined1 *)(param_1 + 0x6e) = 1;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined8 *)((longlong)param_1 + 0x381) = 0;
  *(undefined8 *)((longlong)param_1 + 0x389) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x8c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x40000000;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined1 *)(param_1 + 0x93) = 1;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  FUN_14285ff5a(param_1 + 0x9b);
  FUN_14285ff5a(param_1 + 0xa9);
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  if ((local_50 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a58da2 FUN_146a58da2 body=140 status=ok
// SIG undefined FUN_146a58da2(void)

void FUN_146a58da2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x60))(param_1,&local_20);
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



// FUNCTION 146a58e30 FUN_146a58e30 body=391 status=ok
// SIG undefined FUN_146a58e30(void)

void FUN_146a58e30(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = *(longlong **)(param_1 + 0x2c8);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146a58eaf;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar9 = iVar5 == iVar3;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar9);
    lVar6 = *(longlong *)(param_1 + 0x2c0);
    if ((lVar6 != 0) && (lVar6 != *param_2)) {
      FUN_140457ffc(*(longlong *)(lVar6 + 0x168) + 200,param_1);
    }
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_146a58eaf:
  lVar6 = *param_2;
  *(longlong *)(param_1 + 0x2c0) = lVar6;
  plVar2 = (longlong *)param_2[1];
  plVar7 = *(longlong **)(param_1 + 0x2c8);
  if (plVar7 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x2c8);
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
    *(longlong **)(param_1 + 0x2c8) = plVar2;
    lVar6 = *param_2;
  }
  if (lVar6 != 0) {
    lVar6 = *(longlong *)(lVar6 + 0x168);
    iVar5 = *(int *)(lVar6 + 0xd0);
    if ((longlong)iVar5 != 0) {
      lVar6 = *(longlong *)(lVar6 + 200);
      lVar8 = 0;
      do {
        if (((*(int *)(lVar6 + 8 + lVar8) != 0) &&
            (plVar2 = *(longlong **)(lVar6 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1), cVar4 != '\0'))
        goto LAB_146a58f95;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar5 * 0x10 != lVar8);
      lVar6 = *(longlong *)(*param_2 + 0x168);
    }
    local_50 = FUN_1428ff234;
    local_48 = 0;
    FUN_146a7764c(local_40,param_1);
    FUN_1448b6402(lVar6 + 200,&local_50,local_40);
    FUN_1449db362(local_40);
  }
LAB_146a58f95:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a58fb8 FUN_146a58fb8 body=12 status=ok
// SIG undefined FUN_146a58fb8(void)

void FUN_146a58fb8(longlong param_1)

{
  FUN_1469fa376(param_1 + 0x438);
  return;
}



// FUNCTION 146a58fc4 FUN_146a58fc4 body=230 status=ok
// SIG undefined FUN_146a58fc4(void)

void FUN_146a58fc4(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))();
    if (cVar1 != '\0') goto LAB_146a5908a;
  }
  uVar2 = FUN_14142e2d2(param_1 + 0x338);
  cVar1 = FUN_144a7c5f6(uVar2);
  if (cVar1 != '\0') {
    local_50 = (longlong *)*param_2;
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 8))();
    }
    local_48 = (undefined4)param_2[1];
    local_40 = 1;
    local_38 = 0;
    uStack_30 = 0;
    FUN_140008f88(param_1 + 0x338,&local_50);
    *(undefined1 *)(param_1 + 0x348) = local_40;
    FUN_144a450dc(param_1 + 0x350,&local_38);
    FUN_1449db362(&local_38);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
LAB_146a5908a:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a590ac FUN_146a590ac body=299 status=ok
// SIG undefined FUN_146a590ac(void)

void FUN_146a590ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x388);
  plVar2 = (longlong *)(param_1 + 0x398);
  if ((*(int *)(param_1 + 0x3a0) == 0) || ((longlong *)*plVar2 == (longlong *)0x0))
  goto LAB_146a59132;
  cVar3 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
  if (cVar3 != '\0') goto LAB_146a591aa;
  if ((*(int *)(param_1 + 0x3a0) == 0) || ((longlong *)*plVar2 == (longlong *)0x0)) {
LAB_146a59132:
    lVar4 = *plVar1;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    if (cVar3 == '\0') goto LAB_146a59132;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)*plVar2;
    }
    lVar4 = (**(code **)(*plVar6 + 0x58))();
    *plVar1 = lVar4;
  }
  if (lVar4 != 0) {
    if ((*(int *)(param_1 + 0x3a0) != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
      if (cVar3 == '\0') {
        lVar4 = *plVar1;
      }
      else {
        if (*(int *)(param_1 + 0x3a0) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)*plVar2;
        }
        lVar4 = (**(code **)(*plVar6 + 0x58))();
        *plVar1 = lVar4;
      }
    }
    lVar5 = FUN_141319416();
    if (lVar4 != lVar5) goto LAB_146a591aa;
  }
  local_48 = 1;
  local_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x390) = 1;
  *plVar1 = param_2;
  local_50 = param_2;
  FUN_144a450dc(plVar2,&local_40);
  FUN_1449db362(&local_40);
LAB_146a591aa:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a591d8 FUN_146a591d8 body=176 status=ok
// SIG undefined FUN_146a591d8(void)

void FUN_146a591d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(longlong **)(param_1 + 0x10);
  if (local_18 == (longlong *)0x0) {
    local_18 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    iVar5 = (int)local_18[1];
    local_20 = 0;
    do {
      if (iVar5 == 0) {
        local_18 = (longlong *)0x0;
        goto LAB_146a59222;
      }
      LOCK();
      iVar4 = (int)local_18[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(local_18 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_20 = *(undefined8 *)(param_1 + 8);
  }
LAB_146a59222:
  local_28 = 1;
  FUN_14692f220(param_1 + 0x4d8,&local_20,0,0);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a5928a FUN_146a5928a body=236 status=ok
// SIG undefined FUN_146a5928a(void)

void FUN_146a5928a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong *local_90;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14692f10e(&local_98,0,0x3f800000,0);
  FUN_146980d02(param_1 + 0x548,&local_98);
  FUN_1402bc42a(&local_98);
  local_90 = *(longlong **)(param_1 + 0x10);
  if (local_90 == (longlong *)0x0) {
LAB_146a59306:
    local_98 = 0;
    local_90 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)local_90[1];
    do {
      if (iVar5 == 0) goto LAB_146a59306;
      LOCK();
      iVar4 = (int)local_90[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(local_90 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_98 = *(undefined8 *)(param_1 + 8);
  }
  local_a8 = 1;
  FUN_14692f220(param_1 + 0x548,&local_98,0,0);
  plVar3 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a59378 FUN_146a59378 body=122 status=ok
// SIG undefined FUN_146a59378(void)

void FUN_146a59378(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5b8) = uVar3;
  *(longlong *)(param_1 + 0x5c0) = lVar4;
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
  if ((*(int *)(param_1 + 0x410) != 0) && (*(longlong **)(param_1 + 0x408) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146a593e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x408) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 146a593f2 FUN_146a593f2 body=8004 status=ok
// SIG undefined FUN_146a593f2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146a593f2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  char cVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined1 auStack_2e48 [32];
  undefined1 *local_2e28;
  undefined8 local_2e20;
  longlong *local_2e18;
  longlong local_2e10;
  undefined8 local_2e08;
  undefined8 local_2e00;
  longlong *local_2df8;
  undefined1 local_2de9;
  undefined1 local_2de8 [8];
  longlong *local_2de0;
  undefined1 local_2dc9;
  undefined1 local_2dc8 [8];
  longlong *local_2dc0;
  undefined1 local_2da9;
  undefined1 local_2da8 [8];
  longlong *local_2da0;
  undefined1 local_2d89;
  code *local_2d88;
  undefined4 local_2d80;
  undefined4 uStack_2d7c;
  double local_2d70;
  double dStack_2d68;
  undefined1 local_2d60;
  undefined8 local_2d58;
  undefined8 uStack_2d50;
  undefined8 local_2d48;
  longlong *local_2d40;
  undefined8 local_2d38;
  undefined8 uStack_2d30;
  undefined1 local_2d28;
  undefined8 local_2d20;
  undefined8 uStack_2d18;
  undefined8 local_2d10;
  longlong *local_2d08;
  undefined8 local_2d00;
  longlong *local_2cf8;
  undefined1 local_2ce9;
  undefined1 local_2ce8 [8];
  longlong *local_2ce0;
  undefined1 local_2cc9;
  undefined8 local_2cc8;
  longlong *local_2cc0;
  undefined8 local_2cb0;
  longlong *local_2ca8;
  undefined8 local_2ca0;
  longlong *local_2c98;
  undefined1 local_2c89;
  undefined8 local_2c88;
  longlong *local_2c80;
  undefined8 local_2c70;
  longlong *local_2c68;
  undefined8 local_2c60;
  longlong *local_2c58;
  undefined4 local_2c50;
  undefined1 local_2c4c;
  undefined8 local_2c48;
  undefined8 uStack_2c40;
  longlong local_2c38;
  longlong local_2c30;
  undefined1 local_2c28;
  undefined8 local_2c20;
  undefined4 local_2c18;
  undefined8 local_2c10;
  longlong *local_2c08;
  undefined8 local_2c00;
  longlong *local_2bf8;
  undefined4 local_2bf0;
  undefined1 local_2bec;
  undefined8 local_2be8;
  undefined8 uStack_2be0;
  undefined1 local_2bd1;
  undefined1 local_2bd0 [8];
  longlong *local_2bc8;
  undefined1 local_2bb1;
  undefined8 local_2bb0;
  longlong *local_2ba8;
  undefined8 local_2b98;
  longlong *local_2b90;
  undefined2 local_2b88;
  undefined8 local_2b80;
  undefined8 uStack_2b78;
  undefined8 local_2b70;
  longlong *local_2b68;
  undefined8 local_2b60;
  longlong *local_2b58;
  longlong *local_2b50;
  undefined4 local_2b48;
  undefined1 local_2b40;
  undefined8 local_2b38;
  undefined4 local_2b30;
  longlong local_2b28;
  longlong local_2b20;
  undefined1 local_2b18;
  undefined8 local_2b10;
  undefined4 local_2b08;
  undefined2 local_2b00;
  undefined8 local_2af8;
  undefined8 uStack_2af0;
  undefined8 local_2ae8;
  longlong *local_2ae0;
  undefined8 local_2ad8;
  longlong *local_2ad0;
  undefined1 local_2ac8 [16];
  undefined8 local_2ab8;
  undefined8 uStack_2ab0;
  undefined1 local_2aa8;
  undefined8 local_2aa0;
  undefined4 local_2a98;
  undefined1 local_2a81;
  undefined1 local_2a80 [8];
  longlong *local_2a78;
  undefined2 local_2a68;
  undefined8 local_2a60;
  undefined8 uStack_2a58;
  undefined8 local_2a50;
  longlong *local_2a48;
  undefined8 local_2a40;
  longlong *local_2a38;
  undefined1 local_2a29;
  undefined1 local_2a28 [8];
  longlong *local_2a20;
  undefined1 local_2a10 [40];
  undefined8 local_29e8;
  longlong *local_29e0;
  undefined8 local_29d8;
  longlong *local_29d0;
  undefined1 local_29c1;
  undefined1 local_29c0 [8];
  longlong *plStack_29b8;
  undefined8 local_29a8;
  longlong *local_29a0;
  undefined8 local_2998;
  longlong *local_2990;
  undefined8 local_2988;
  longlong *local_2980;
  undefined4 local_2978;
  undefined4 uStack_2974;
  undefined4 uStack_2970;
  undefined4 uStack_296c;
  undefined4 uStack_2968;
  undefined1 uStack_2964;
  undefined8 local_2960;
  undefined4 local_2958;
  undefined8 local_2950;
  undefined1 local_2948;
  undefined8 local_2940;
  undefined8 uStack_2938;
  undefined8 local_2930;
  undefined8 local_2928;
  undefined8 local_2920;
  undefined1 local_2918 [24];
  undefined4 local_2900;
  undefined4 uStack_28fc;
  undefined4 uStack_28f8;
  undefined4 uStack_28f4;
  undefined1 local_28f0;
  undefined1 local_28e8 [16];
  undefined4 local_28d8;
  undefined1 local_28d4;
  undefined4 local_28d0;
  undefined1 local_28cc;
  undefined1 local_28c0 [88];
  undefined1 local_2868 [64];
  undefined4 local_2828;
  undefined1 local_2824;
  undefined4 local_2820;
  undefined1 local_281c;
  undefined1 local_2810 [88];
  code *local_27b8;
  undefined4 local_27b0;
  double local_2610;
  double dStack_2608;
  undefined1 local_2600;
  undefined1 local_25f8 [16];
  code *local_25e8;
  undefined4 local_25e0;
  undefined8 local_2440;
  longlong *local_2438;
  longlong local_2430;
  undefined4 local_2418;
  undefined4 uStack_2414;
  undefined4 uStack_2410;
  undefined4 uStack_240c;
  undefined1 local_2408;
  undefined1 local_2400 [56];
  undefined1 local_23c8 [336];
  undefined1 local_2278 [192];
  code *local_21b8;
  undefined8 uStack_21b0;
  undefined1 local_21a8;
  undefined8 local_21a0;
  undefined8 uStack_2198;
  longlong local_1fe8;
  undefined1 local_1d48 [192];
  undefined8 local_1c88;
  undefined8 uStack_1c80;
  undefined4 local_1c78;
  undefined4 uStack_1c74;
  undefined8 uStack_1c70;
  undefined8 uStack_1c68;
  undefined4 uStack_1c60;
  undefined4 uStack_1c5c;
  longlong local_1ab8;
  undefined2 local_1830;
  undefined1 local_1810 [192];
  undefined1 local_1750 [40];
  undefined1 local_1728 [400];
  undefined1 local_1598 [192];
  undefined1 local_14d8 [568];
  undefined1 local_12a0 [112];
  undefined2 local_1230;
  undefined1 local_1228 [304];
  undefined8 local_10f8;
  longlong *local_10f0;
  undefined1 local_f70 [192];
  undefined1 local_eb0 [40];
  undefined1 local_e88 [72];
  undefined2 local_e40;
  undefined1 local_e38 [320];
  undefined1 local_cf8 [112];
  undefined2 local_c88;
  undefined1 local_c80 [696];
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined1 local_9b8;
  undefined1 local_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined1 local_998 [520];
  undefined1 local_790 [568];
  undefined1 local_558 [440];
  undefined1 local_3a0 [424];
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  undefined1 local_1c8 [80];
  undefined8 local_178;
  undefined1 local_170;
  undefined1 local_168 [176];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a0 [48];
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x146a59408;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2e48;
  FUN_14692f10e(&local_1c88,0,0x3e19999a,0);
  FUN_146980d02(param_1 + 0x4d8,&local_1c88);
  FUN_1402bc42a(&local_1c88);
  FUN_14285ff8c(param_1 + 0x4d8);
  lVar14 = param_2[0x35];
  lVar15 = param_2[0x36];
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(param_1 + 0x2d8);
  *(longlong *)(param_1 + 0x2d0) = lVar14;
  *(longlong *)(param_1 + 0x2d8) = lVar15;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  lVar14 = param_2[0x37];
  lVar15 = param_2[0x38];
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(param_1 + 0x2e8);
  *(longlong *)(param_1 + 0x2e0) = lVar14;
  *(longlong *)(param_1 + 0x2e8) = lVar15;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  lVar14 = param_2[0x39];
  lVar15 = param_2[0x3a];
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(param_1 + 0x2f8);
  *(longlong *)(param_1 + 0x2f0) = lVar14;
  *(longlong *)(param_1 + 0x2f8) = lVar15;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  *(char *)(param_1 + 800) = (char)param_2[0x40];
  FUN_1469fa376(param_1 + 0x3a8,param_2 + 0x4b);
  FUN_14096c7c0(param_1 + 0x3c8,param_2 + 0x54);
  *(char *)(param_1 + 0x321) = (char)param_2[0x56];
  FUN_14009d848(param_1 + 0x428,param_2 + 0x57);
  FUN_146a26a60(param_1 + 0x418,param_2 + 0x59);
  FUN_14133824c(param_1 + 0x338,param_2 + 0x41);
  FUN_14133824c(param_1 + 0x360,param_2 + 0x46);
  *(char *)(param_1 + 0x480) = (char)param_2[0x53];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2ec);
  lVar14 = param_2[0x5e];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2f4);
  *(int *)(param_1 + 0x488) = (int)param_2[0x5d];
  *(undefined4 *)(param_1 + 0x48c) = uVar6;
  *(int *)(param_1 + 0x490) = (int)lVar14;
  *(undefined4 *)(param_1 + 0x494) = uVar7;
  *(char *)(param_1 + 0x498) = (char)param_2[0x5f];
  FUN_140a5c51c(param_1 + 0x4a0,param_2 + 0x60);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x33c);
  lVar14 = param_2[0x68];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x344);
  *(int *)(param_1 + 0x4b0) = (int)param_2[0x67];
  *(undefined4 *)(param_1 + 0x4b4) = uVar6;
  *(int *)(param_1 + 0x4b8) = (int)lVar14;
  *(undefined4 *)(param_1 + 0x4bc) = uVar7;
  *(char *)(param_1 + 0x4c0) = (char)param_2[0x69];
  FUN_140a5c51c(param_1 + 0x4c8,param_2 + 0x6a);
  FUN_14009d848(param_1 + 0x3d8,param_2 + 0x5b);
  FUN_14009d848(param_1 + 0x3f8,param_2 + 0x4f);
  FUN_14009d848(param_1 + 0x408,param_2 + 0x51);
  plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_2920,"Docking.MajorTab",1);
  uVar12 = FUN_1469f8b50(plVar11,local_2920,0,0);
  *(undefined8 *)(param_1 + 0x448) = uVar12;
  plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_2928,"Docking.Tab",1);
  uVar12 = FUN_1469f8b50(plVar11,local_2928,0,0);
  *(undefined8 *)(param_1 + 0x450) = uVar12;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1dc);
  lVar14 = param_2[0x3c];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1e4);
  *(int *)(param_1 + 0x458) = (int)param_2[0x3b];
  *(undefined4 *)(param_1 + 0x45c) = uVar6;
  *(int *)(param_1 + 0x460) = (int)lVar14;
  *(undefined4 *)(param_1 + 0x464) = uVar7;
  *(char *)(param_1 + 0x468) = (char)param_2[0x3d];
  FUN_140a58be0(param_1 + 0x470,param_2 + 0x3e);
  cVar10 = FUN_146a580d6(param_1);
  local_2e10 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar10 != '\0') * 8);
  FUN_146a580d6(param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98ef24) {
    FUN_144b3d300(&DAT_14c98ef24);
    if (DAT_14c98ef24 == -1) {
      plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = DAT_14c96b350;
      }
      FUN_1446ddc76(&local_2930,"Docking.Tab.ActiveTabIndicatorColor",1);
      local_2e28 = &DAT_14c98de74;
      local_2e20 = 0;
      (**(code **)(*plVar11 + 0x40))(plVar11,&local_1c88,local_2930,0);
      if ((char)local_1c78 == '\x01') {
        puVar17 = (undefined4 *)FUN_1400c06fe(&local_1c88);
        DAT_14c98ef14._0_4_ = *puVar17;
        DAT_14c98ef14._4_4_ = puVar17[1];
        DAT_14c98ef1c = puVar17[2];
        uRam000000014c98ef20 = puVar17[3];
      }
      else {
        DAT_14c98ef14._0_4_ = (undefined4)local_1c88;
        DAT_14c98ef14._4_4_ = local_1c88._4_4_;
        DAT_14c98ef1c = (undefined4)uStack_1c80;
        uRam000000014c98ef20 = uStack_1c80._4_4_;
      }
      _Init_thread_footer(&DAT_14c98ef24);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98ef38) {
    FUN_144b3d300(&DAT_14c98ef38);
    if (DAT_14c98ef38 == -1) {
      _DAT_14c98ef28 = CONCAT44(DAT_14c98ef14._4_4_,(undefined4)DAT_14c98ef14);
      _DAT_14c98ef30 = DAT_14c98ef1c;
      _DAT_14c98ef34 = 0;
      _Init_thread_footer(&DAT_14c98ef38);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98ef50) {
    FUN_144b3d300(&DAT_14c98ef50);
    if (DAT_14c98ef50 == -1) {
      local_1c88 = (code *)_DAT_14c98ef28;
      uStack_1c80 = (undefined1 *)CONCAT44(_DAT_14c98ef34,_DAT_14c98ef30);
      local_1c78 = (undefined4)DAT_14c98ef14;
      uStack_1c74 = DAT_14c98ef14._4_4_;
      uStack_1c70 = CONCAT44(uRam000000014c98ef20,DAT_14c98ef1c);
      uStack_1c68 = _DAT_14c98ef28;
      uStack_1c60 = _DAT_14c98ef30;
      uStack_1c5c = _DAT_14c98ef34;
      DAT_14c98ef40 = (undefined8 *)0x0;
      _DAT_14c98ef48 = 3;
      FUN_14479fa02(&DAT_14c98ef40,3,0);
      puVar9 = DAT_14c98ef40;
      DAT_14c98ef40[4] = uStack_1c68;
      puVar9[5] = CONCAT44(uStack_1c5c,uStack_1c60);
      puVar9[2] = CONCAT44(uStack_1c74,local_1c78);
      puVar9[3] = uStack_1c70;
      *puVar9 = local_1c88;
      puVar9[1] = uStack_1c80;
      atexit((_func_5014 *)&LAB_1428ff2bd);
      _Init_thread_footer(&DAT_14c98ef50);
    }
  }
  FUN_140a562d0(local_3a0);
  local_2950 = FUN_141319416();
  local_2948 = 1;
  local_2940 = 0;
  uStack_2938 = 0;
  local_170 = 1;
  local_178 = local_2950;
  FUN_144a450dc(local_168,&local_2940);
  FUN_1449db362(&local_2940);
  local_1e4 = 3;
  local_1c88 = (code *)0x0;
  uStack_1c80 = (undefined1 *)0x0;
  local_1c78 = CONCAT31(local_1c78._1_3_,1);
  uStack_1c70 = 0;
  uStack_1c68 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 1;
  FUN_144a450dc(local_1c8,&uStack_1c70);
  FUN_1449db362(&uStack_1c70);
  local_2978 = (undefined4)param_2[0x62];
  uStack_2974 = *(undefined4 *)((longlong)param_2 + 0x314);
  uStack_2970 = (undefined4)param_2[99];
  uVar12 = *(undefined8 *)((longlong)param_2 + 0x31d);
  uStack_296c._0_1_ = (undefined1)*(undefined4 *)((longlong)param_2 + 0x31c);
  uStack_296c._1_3_ = (undefined3)uVar12;
  uStack_2968 = (undefined4)((ulonglong)uVar12 >> 0x18);
  uStack_2964 = (undefined1)((ulonglong)uVar12 >> 0x38);
  local_2960 = 0;
  local_2958 = 0;
  FUN_140a5aaa0(&local_2960,param_2 + 0x65);
  local_a8 = uStack_2968;
  local_b8 = local_2978;
  uStack_b4 = uStack_2974;
  uStack_b0 = uStack_2970;
  uStack_ac = uStack_296c;
  local_a4 = uStack_2964;
  FUN_144a450dc(local_a0,&local_2960);
  FUN_1449db362(&local_2960);
  FUN_140a504fe(local_558);
  FUN_140a4fdf2(local_2810,0);
  FUN_140a53334(local_790);
  local_1c88 = FUN_146a5b3ec;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5b338(local_790,param_1,&local_1c88);
  local_2e28 = &local_29c1;
  FUN_140a554b8(local_29c0,"SImage",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",0x25d);
  FUN_140a52c70(local_29c0,&local_29a8,local_790);
  local_2998 = local_29a8;
  local_2990 = local_29a0;
  if (local_29a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_29a0 + 1) = (int)local_29a0[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fd40(local_2810,&local_2998);
  uVar12 = FUN_140a5058c(local_558,uVar12);
  FUN_140a4fdf2(local_2868,0);
  local_2820 = 1;
  local_281c = 1;
  local_2828 = 0;
  local_2824 = 1;
  FUN_1469f9a06(local_998);
  local_1c88 = FUN_146a5b4de;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5b43a(local_998,param_1);
  local_9c8 = 0x3ff0000000000000;
  local_9c0 = 0x3ff0000000000000;
  local_9b8 = 1;
  local_9b0 = 1;
  local_9a8 = 0;
  uStack_9a0 = 0;
  uVar13 = FUN_1469f9ab2(local_998);
  FUN_1469f9b5e(local_2a10,&DAT_14c98ef40);
  lVar14 = FUN_1469f9b26(uVar13,local_2a10);
  *(undefined4 *)(lVar14 + 0x1d4) = 1;
  local_2e28 = &local_2a29;
  FUN_1469fcd5e(local_2a28,"SComplexGradient",
                ".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",0x266);
  FUN_1469f9d1c(local_2a28,&local_29e8,lVar14);
  local_29d8 = local_29e8;
  local_29d0 = local_29e0;
  if (local_29e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_29e0 + 1) = (int)local_29e0[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_2868,&local_29d8);
  uVar12 = FUN_140a5058c(uVar12,uVar13);
  FUN_140a4fdf2(local_28c0,0);
  FUN_140a562d0(local_cf8);
  local_2a68 = CONCAT11(1,DAT_14c96b23a);
  local_2a60 = 0;
  uStack_2a58 = 0;
  local_c88 = local_2a68;
  FUN_144a450dc(local_c80,&local_2a60);
  FUN_1449db362(&local_2a60);
  local_1c88 = FUN_146a5b5d6;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5b51e(local_cf8,param_1,&local_1c88);
  local_1c88 = FUN_146a5b6de;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5b62a(local_cf8,param_1,&local_1c88);
  local_1c88 = FUN_146a5b7ec;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5b722(local_cf8,param_1,&local_1c88);
  local_2e28 = &local_2a81;
  FUN_140a55c32(local_2a80,"SBorder",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",0x270);
  FUN_140a530e4(local_2a80,&local_2a50,local_cf8);
  local_2a40 = local_2a50;
  local_2a38 = local_2a48;
  if (local_2a48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2a48 + 1) = (int)local_2a48[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_28c0,&local_2a40);
  local_2e00 = FUN_140a5058c(uVar12,uVar13);
  FUN_140a4fdf2(local_2918,0);
  local_1c88 = FUN_146a5b5d6;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5b904(local_2ac8,param_1);
  local_2ab8 = 0;
  uStack_2ab0 = 0;
  local_2aa8 = 1;
  local_2aa0 = 0;
  local_2a98 = 0;
  FUN_140a58be0(&local_2aa0,local_2ac8);
  local_28f0 = local_2aa8;
  local_2900 = (undefined4)local_2ab8;
  uStack_28fc = local_2ab8._4_4_;
  uStack_28f8 = (undefined4)uStack_2ab0;
  uStack_28f4 = uStack_2ab0._4_4_;
  FUN_144a450dc(local_28e8,&local_2aa0);
  FUN_1449db362(&local_2aa0);
  local_28d0 = 2;
  local_28cc = 1;
  local_28d8 = 0;
  local_28d4 = 1;
  FUN_140a5296a(local_eb0);
  local_2b00 = CONCAT11(1,DAT_14c96b238);
  local_2af8 = 0;
  uStack_2af0 = 0;
  local_e40 = local_2b00;
  FUN_144a450dc(local_e38,&local_2af8);
  FUN_1449db362(&local_2af8);
  local_2b28 = param_2[5];
  local_2b20 = param_2[6];
  if (local_2b20 != 0) {
    LOCK();
    *(int *)(local_2b20 + 8) = *(int *)(local_2b20 + 8) + 1;
    UNLOCK();
  }
  local_2b18 = (undefined1)param_2[7];
  local_2e18 = param_2 + 8;
  local_2b10 = 0;
  local_2b08 = 0;
  FUN_14698373e();
  FUN_145766fac(local_e88,&local_2b28);
  FUN_14576702a(&local_2b28);
  if ((char)param_2[2] == '\x01') {
    local_2b50 = (longlong *)*param_2;
    local_2b40 = 1;
    if (local_2b50 != (longlong *)0x0) {
      (**(code **)(*local_2b50 + 8))();
      local_2b40 = (undefined1)param_2[2];
    }
    local_2b48 = (undefined4)param_2[1];
    local_2b38 = 0;
    local_2b30 = 0;
    FUN_1413a4324(&local_2b38,param_2 + 3);
  }
  else {
    FUN_144a5dc74(&local_2b50);
    local_2b40 = 1;
    local_1c88 = FUN_146a5ba88;
    uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
    FUN_146a78cb6(&local_2b38,param_1);
  }
  local_2e08 = FUN_146a5ba3e(local_eb0,&local_2b50);
  FUN_140a50426(local_f70);
  lVar14 = FUN_140a52578(local_f70);
  *(undefined4 *)(lVar14 + 0x48) = 2;
  *(undefined1 *)(lVar14 + 0x4c) = 1;
  local_1c88 = (code *)0x0;
  uStack_1c80 = &DAT_40a00000;
  local_1c78 = CONCAT31(local_1c78._1_3_,1);
  uStack_1c70 = 0;
  uStack_1c68 = 0;
  *(undefined1 *)(lVar14 + 0x28) = 1;
  *(undefined4 *)(lVar14 + 0x18) = 0;
  *(undefined4 *)(lVar14 + 0x1c) = 0;
  *(undefined4 *)(lVar14 + 0x20) = 0x40a00000;
  *(undefined4 *)(lVar14 + 0x24) = 0;
  FUN_144a450dc(lVar14 + 0x30,&uStack_1c70);
  FUN_1449db362(&uStack_1c70);
  FUN_140a562d0(local_12a0);
  local_1c88 = FUN_146a5bac2;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5b51e(local_12a0,param_1,&local_1c88);
  local_2b88 = CONCAT11(1,DAT_14c96b23a);
  local_2b80 = 0;
  uStack_2b78 = 0;
  local_1230 = local_2b88;
  FUN_144a450dc(local_1228,&local_2b80);
  FUN_1449db362(&local_2b80);
  local_1c88 = FUN_146a5bb08;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5b62a(local_12a0,param_1,&local_1c88);
  local_1c88 = FUN_146a5bb56;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5b722(local_12a0,param_1,&local_1c88);
  FUN_140a53334(local_14d8);
  local_1c88 = FUN_146a5bc48;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5bb7e(local_14d8,param_1,&local_1c88);
  local_1c88 = FUN_146a5bcc0;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5b338(local_14d8,param_1,&local_1c88);
  local_1c88 = FUN_146a5be04;
  uStack_1c80 = (undefined1 *)((ulonglong)uStack_1c80 & 0xffffffff00000000);
  FUN_146a5bd16(local_14d8,param_1,&local_1c88);
  local_2e28 = &local_2bb1;
  FUN_140a554b8(&local_2bb0,"SImage",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",0x290);
  if (local_2ba8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2ba8 + 1) = (int)local_2ba8[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(param_1 + 0x5f0);
  *(undefined8 *)(param_1 + 0x5e8) = local_2bb0;
  *(longlong **)(param_1 + 0x5f0) = local_2ba8;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  FUN_140a52c70(&local_2bb0,&local_2b98,local_14d8);
  plVar8 = local_10f0;
  plVar11 = local_2b90;
  if (local_2b90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2b90 + 1) = (int)local_2b90[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2b90 + 1) = (int)local_2b90[1] + 1;
    UNLOCK();
  }
  local_10f8 = local_2b98;
  local_10f0 = local_2b90;
  if (plVar8 != (longlong *)0x0) {
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
  local_2e28 = &local_2bd1;
  FUN_140a55c32(local_2bd0,"SBorder",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",0x288);
  FUN_140a530e4(local_2bd0,&local_2b70,local_12a0);
  local_2b60 = local_2b70;
  local_2b58 = local_2b68;
  if (local_2b68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2b68 + 1) = (int)local_2b68[1] + 1;
    UNLOCK();
  }
  local_2df8 = plVar11;
  uVar12 = FUN_140a4fe8e(lVar14,&local_2b60);
  uVar12 = FUN_140a52392(local_2e08,uVar12);
  FUN_140a50426(local_1598);
  local_2bf0 = 0x3f800000;
  local_2bec = 1;
  local_2be8 = 0;
  uStack_2be0 = 0;
  lVar14 = FUN_140a5475a(local_1598);
  local_1c88 = (code *)0x3f80000000000000;
  uStack_1c80 = (undefined1 *)0x3f80000000000000;
  local_1c78._0_1_ = 1;
  uStack_1c70 = 0;
  uStack_1c68 = 0;
  *(undefined1 *)(lVar14 + 0x28) = 1;
  *(undefined4 *)(lVar14 + 0x18) = 0;
  *(undefined4 *)(lVar14 + 0x1c) = 0x3f800000;
  *(undefined4 *)(lVar14 + 0x20) = 0;
  *(undefined4 *)(lVar14 + 0x24) = 0x3f800000;
  FUN_144a450dc(lVar14 + 0x30,&uStack_1c70);
  FUN_1449db362(&uStack_1c70);
  *(undefined4 *)(lVar14 + 0x40) = 1;
  *(undefined1 *)(lVar14 + 0x44) = 1;
  *(undefined4 *)(lVar14 + 0x48) = 2;
  *(undefined1 *)(lVar14 + 0x4c) = 1;
  FUN_140a5296a(local_1750);
  local_2c38 = param_2[5];
  local_2c30 = param_2[6];
  if (local_2c30 != 0) {
    LOCK();
    *(int *)(local_2c30 + 8) = *(int *)(local_2c30 + 8) + 1;
    UNLOCK();
  }
  local_2c28 = (undefined1)param_2[7];
  local_2c20 = 0;
  local_2c18 = 0;
  FUN_14698373e(&local_2c20,local_2e18);
  FUN_145766fac(local_1728,&local_2c38);
  FUN_14576702a(&local_2c38);
  FUN_140a50426(local_1810);
  local_2c50 = 0x3f800000;
  local_2c4c = 1;
  local_2c48 = 0;
  uStack_2c40 = 0;
  lVar15 = FUN_140a5475a(local_1810);
  local_1c88 = (code *)0x3f80000000000000;
  uStack_1c80 = (undefined1 *)0x3f80000000000000;
  local_1c78 = CONCAT31(local_1c78._1_3_,1);
  uStack_1c70 = 0;
  uStack_1c68 = 0;
  *(undefined1 *)(lVar15 + 0x28) = 1;
  *(undefined4 *)(lVar15 + 0x18) = 0;
  *(undefined4 *)(lVar15 + 0x1c) = 0x3f800000;
  *(undefined4 *)(lVar15 + 0x20) = 0;
  *(undefined4 *)(lVar15 + 0x24) = 0x3f800000;
  FUN_144a450dc(lVar15 + 0x30,&uStack_1c70);
  FUN_1449db362(&uStack_1c70);
  *(undefined4 *)(lVar15 + 0x48) = 2;
  *(undefined1 *)(lVar15 + 0x4c) = 1;
  FUN_140a570d8(&local_1c88);
  cVar10 = FUN_146a580d6(param_1);
  local_1ab8 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar10 != '\0') * 8) + 0x850;
  local_21b8 = FUN_146a5ba88;
  uStack_21b0 = (ulonglong)uStack_21b0._4_4_ << 0x20;
  FUN_146a5be4c(&local_1c88,param_1);
  local_1830 = 0x101;
  local_2e28 = &local_2c89;
  FUN_140a54526(&local_2c88,"STextBlock",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",
                0x2a7);
  if (local_2c80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2c80 + 1) = (int)local_2c80[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(param_1 + 0x5d0);
  *(undefined8 *)(param_1 + 0x5c8) = local_2c88;
  *(longlong **)(param_1 + 0x5d0) = local_2c80;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  FUN_140a52852(&local_2c88,&local_2c70,&local_1c88);
  local_2c60 = local_2c70;
  local_2c58 = local_2c68;
  if (local_2c68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2c68 + 1) = (int)local_2c68[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fe8e(lVar15,&local_2c60);
  uVar13 = FUN_140a52392(local_1750,uVar13);
  FUN_140a50426(local_1d48);
  lVar15 = FUN_140a52578(local_1d48);
  local_21b8 = (code *)0x3f80000000000000;
  uStack_21b0 = 0x3f80000000000000;
  local_21a8 = 1;
  local_21a0 = 0;
  uStack_2198 = 0;
  *(undefined1 *)(lVar15 + 0x28) = 1;
  *(undefined4 *)(lVar15 + 0x18) = 0;
  *(undefined4 *)(lVar15 + 0x1c) = 0x3f800000;
  *(undefined4 *)(lVar15 + 0x20) = 0;
  *(undefined4 *)(lVar15 + 0x24) = 0x3f800000;
  FUN_144a450dc(lVar15 + 0x30,&local_21a0);
  FUN_1449db362(&local_21a0);
  *(undefined4 *)(lVar15 + 0x48) = 2;
  *(undefined1 *)(lVar15 + 0x4c) = 1;
  FUN_140a570d8(&local_21b8);
  cVar10 = FUN_146a580d6(param_1);
  local_1fe8 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar10 != '\0') * 8) + 0x850;
  local_25e8 = FUN_146a5bf24;
  local_25e0 = 0;
  FUN_146a5be4c(&local_21b8,param_1);
  local_2e28 = &local_2cc9;
  FUN_140a54526(&local_2cc8,"STextBlock",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",
                0x2b3);
  if (local_2cc0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2cc0 + 1) = (int)local_2cc0[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(param_1 + 0x5e0);
  *(undefined8 *)(param_1 + 0x5d8) = local_2cc8;
  *(longlong **)(param_1 + 0x5e0) = local_2cc0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  FUN_140a52852(&local_2cc8,&local_2cb0,&local_21b8);
  local_2ca0 = local_2cb0;
  local_2c98 = local_2ca8;
  if (local_2ca8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2ca8 + 1) = (int)local_2ca8[1] + 1;
    UNLOCK();
  }
  lVar3 = local_2e10 + 0x10;
  uVar16 = FUN_140a4fe8e(lVar15,&local_2ca0);
  uVar13 = FUN_140a52392(uVar13,uVar16);
  local_2e28 = &local_2ce9;
  FUN_140a541dc(local_2ce8,"SHorizontalBox",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",
                0x29e);
  FUN_140a50ec6(local_2ce8,&local_2c10,uVar13);
  local_2c00 = local_2c10;
  local_2bf8 = local_2c08;
  if (local_2c08 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2c08 + 1) = (int)local_2c08[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fe8e(lVar14,&local_2c00);
  local_2e18 = (longlong *)FUN_140a52392(uVar12,uVar13);
  FUN_140a50426(local_2278);
  lVar14 = FUN_140a52578(local_2278);
  *(undefined4 *)(lVar14 + 0x40) = 3;
  *(undefined1 *)(lVar14 + 0x44) = 1;
  *(undefined4 *)(lVar14 + 0x48) = 2;
  *(undefined1 *)(lVar14 + 0x4c) = 1;
  FUN_145ab3d24(&local_25e8);
  local_2d88 = FUN_146a5bf5e;
  local_2d80 = 0;
  local_2430 = lVar3;
  FUN_146a79684(&local_27b8,param_1);
  FUN_144a450dc(local_23c8,&local_27b8);
  FUN_1449db362(&local_27b8);
  local_2d38 = 0x3fc0000000000000;
  uStack_2d30 = 0;
  local_2d28 = 1;
  local_2d20 = 0;
  uStack_2d18 = 0;
  local_2408 = 1;
  local_2418 = 0;
  uStack_2414 = 0x3fc00000;
  uStack_2410 = 0;
  uStack_240c = 0;
  FUN_144a450dc(local_2400,&local_2d20);
  FUN_1449db362(&local_2d20);
  local_27b8 = FUN_146a5c076;
  local_27b0 = 0;
  FUN_146a5bfa8(&local_25e8,param_1,&local_27b8);
  local_27b8 = FUN_146a5c66a;
  local_27b0 = 0;
  FUN_146a5c5c6(&local_25e8,param_1,&local_27b8);
  FUN_140a50678(&local_27b8);
  dStack_2d68 = (double)*(float *)(local_2e10 + 0x44);
  local_2d70 = (double)*(float *)(local_2e10 + 0x40);
  local_2d60 = 1;
  local_2d58 = 0;
  uStack_2d50 = 0;
  local_2600 = 1;
  local_2610 = local_2d70;
  dStack_2608 = dStack_2d68;
  FUN_144a450dc(local_25f8,&local_2d58);
  FUN_1449db362(&local_2d58);
  local_2e28 = &local_2d89;
  FUN_140a52ce6(&local_2d88,"SSpacer",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",0x2c7)
  ;
  FUN_140a50c6a(&local_2d88,&local_2d48,&local_27b8);
  plVar2 = local_2438;
  plVar8 = local_2d40;
  plVar11 = local_2df8;
  if (local_2d40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2d40 + 1) = (int)local_2d40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2d40 + 1) = (int)local_2d40[1] + 1;
    UNLOCK();
  }
  local_2440 = local_2d48;
  local_2438 = local_2d40;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_2e28 = &local_2da9;
  FUN_145ab3730(local_2da8,"SButton",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",0x2c0);
  FUN_145ab34ca(local_2da8,&local_2d10,&local_25e8);
  local_2d00 = local_2d10;
  local_2cf8 = local_2d08;
  if (local_2d08 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2d08 + 1) = (int)local_2d08[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fe8e(lVar14,&local_2d00);
  uVar12 = FUN_140a52392(local_2e18,uVar12);
  local_2e28 = &local_2dc9;
  FUN_140a541dc(local_2dc8,"SHorizontalBox",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",
                0x27d);
  FUN_140a50ec6(local_2dc8,&local_2ae8,uVar12);
  local_2ad8 = local_2ae8;
  local_2ad0 = local_2ae0;
  if (local_2ae0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2ae0 + 1) = (int)local_2ae0[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fd40(local_2918,&local_2ad8);
  uVar12 = FUN_140a5058c(local_2e00,uVar12);
  local_2e28 = &local_2de9;
  FUN_140a536a8(local_2de8,"SOverlay",".\\Runtime/Slate/Private/Widgets/Docking/SDockTab.cpp",0x25a)
  ;
  FUN_140a4ff16(local_2de8,&local_2988,uVar12);
  plVar4 = local_1f0;
  plVar2 = local_2980;
  if (local_2980 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2980 + 1) = (int)local_2980[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2980 + 1) = (int)local_2980[1] + 1;
    UNLOCK();
  }
  local_1f8 = local_2988;
  local_1f0 = local_2980;
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
  FUN_140a5a2ee(param_1,local_3a0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (local_2980 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2980 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2980)(local_2980);
      LOCK();
      piVar1 = (int *)((longlong)local_2980 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2980 + 0x10))(local_2980);
      }
    }
  }
  if (local_2de0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2de0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2de0)(local_2de0);
      LOCK();
      piVar1 = (int *)((longlong)local_2de0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2de0 + 0x10))(local_2de0);
      }
    }
  }
  plVar2 = local_2ad0;
  if (local_2ad0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2ad0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2ad0)(local_2ad0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_2ae0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2ae0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2ae0)(local_2ae0);
      LOCK();
      piVar1 = (int *)((longlong)local_2ae0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2ae0 + 0x10))(local_2ae0);
      }
    }
  }
  if (local_2dc0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2dc0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2dc0)(local_2dc0);
      LOCK();
      piVar1 = (int *)((longlong)local_2dc0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2dc0 + 0x10))(local_2dc0);
      }
    }
  }
  plVar2 = local_2cf8;
  if (local_2cf8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2cf8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2cf8)(local_2cf8);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_2d08 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2d08 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2d08)(local_2d08);
      LOCK();
      piVar1 = (int *)((longlong)local_2d08 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2d08 + 0x10))(local_2d08);
      }
    }
  }
  if (local_2da0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2da0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2da0)(local_2da0);
      LOCK();
      piVar1 = (int *)((longlong)local_2da0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2da0 + 0x10))(local_2da0);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
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
  if (local_2d40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2d40 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2d40)(local_2d40);
      LOCK();
      piVar1 = (int *)((longlong)local_2d40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2d40 + 0x10))(local_2d40);
      }
    }
  }
  plVar8 = (longlong *)CONCAT44(uStack_2d7c,local_2d80);
  if (plVar8 != (longlong *)0x0) {
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
  FUN_1449db362(local_25f8);
  FUN_140a4ff8c(&local_27b8);
  FUN_145ab35f4(&local_25e8);
  FUN_140a509a6(local_2278);
  plVar8 = local_2bf8;
  if (local_2bf8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2bf8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2bf8)(local_2bf8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_2c08 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2c08 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2c08)(local_2c08);
      LOCK();
      piVar1 = (int *)((longlong)local_2c08 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2c08 + 0x10))(local_2c08);
      }
    }
  }
  if (local_2ce0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2ce0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2ce0)(local_2ce0);
      LOCK();
      piVar1 = (int *)((longlong)local_2ce0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2ce0 + 0x10))(local_2ce0);
      }
    }
  }
  plVar8 = local_2c98;
  if (local_2c98 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2c98 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2c98)(local_2c98);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_2ca8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2ca8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2ca8)(local_2ca8);
      LOCK();
      piVar1 = (int *)((longlong)local_2ca8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2ca8 + 0x10))(local_2ca8);
      }
    }
  }
  if (local_2cc0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2cc0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2cc0)(local_2cc0);
      LOCK();
      piVar1 = (int *)((longlong)local_2cc0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2cc0 + 0x10))(local_2cc0);
      }
    }
  }
  FUN_140a59ae6(&local_21b8);
  FUN_140a509a6(local_1d48);
  plVar8 = local_2c58;
  if (local_2c58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2c58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2c58)(local_2c58);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_2c68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2c68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2c68)(local_2c68);
      LOCK();
      piVar1 = (int *)((longlong)local_2c68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2c68 + 0x10))(local_2c68);
      }
    }
  }
  if (local_2c80 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2c80 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2c80)(local_2c80);
      LOCK();
      piVar1 = (int *)((longlong)local_2c80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2c80 + 0x10))(local_2c80);
      }
    }
  }
  FUN_140a59ae6(&local_1c88);
  FUN_140a509a6(local_1810);
  FUN_145ab33da(local_1750);
  FUN_140a509a6(local_1598);
  plVar8 = local_2b58;
  if (local_2b58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2b58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2b58)(local_2b58);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_2b68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2b68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2b68)(local_2b68);
      LOCK();
      piVar1 = (int *)((longlong)local_2b68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2b68 + 0x10))(local_2b68);
      }
    }
  }
  if (local_2bc8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2bc8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2bc8)(local_2bc8);
      LOCK();
      piVar1 = (int *)((longlong)local_2bc8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2bc8 + 0x10))(local_2bc8);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if (local_2b90 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_2b90 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_2b90)(local_2b90);
      LOCK();
      piVar1 = (int *)((longlong)local_2b90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2b90 + 0x10))(local_2b90);
      }
    }
  }
  if (local_2ba8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_2ba8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_2ba8)(local_2ba8);
      LOCK();
      piVar1 = (int *)((longlong)local_2ba8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2ba8 + 0x10))(local_2ba8);
      }
    }
  }
  FUN_140a55a86(local_14d8);
  FUN_140a59028(local_12a0);
  FUN_140a509a6(local_f70);
  FUN_145ab33da(local_eb0);
  FUN_1449db362(local_2ac8);
  FUN_1415b5e50(local_2918);
  plVar11 = local_2a38;
  if (local_2a38 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2a38 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2a38)(local_2a38);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_2a48 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_2a48 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_2a48)(local_2a48);
      LOCK();
      piVar1 = (int *)((longlong)local_2a48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2a48 + 0x10))(local_2a48);
      }
    }
  }
  if (local_2a78 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_2a78 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_2a78)(local_2a78);
      LOCK();
      piVar1 = (int *)((longlong)local_2a78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2a78 + 0x10))(local_2a78);
      }
    }
  }
  FUN_140a59028(local_cf8);
  FUN_1415b5e50(local_28c0);
  plVar11 = local_29d0;
  if (local_29d0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_29d0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_29d0)(local_29d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_29e0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_29e0 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_29e0)(local_29e0);
      LOCK();
      piVar1 = (int *)((longlong)local_29e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_29e0 + 0x10))(local_29e0);
      }
    }
  }
  if (local_2a20 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_2a20 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_2a20)(local_2a20);
      LOCK();
      piVar1 = (int *)((longlong)local_2a20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2a20 + 0x10))(local_2a20);
      }
    }
  }
  FUN_1469f9d90(local_998);
  FUN_1415b5e50(local_2868);
  plVar11 = local_2990;
  if (local_2990 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2990 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2990)(local_2990);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_29a0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_29a0 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_29a0)(local_29a0);
      LOCK();
      piVar1 = (int *)((longlong)local_29a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_29a0 + 0x10))(local_29a0);
      }
    }
  }
  if (plStack_29b8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_29b8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plStack_29b8)(plStack_29b8);
      LOCK();
      piVar1 = (int *)((longlong)plStack_29b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_29b8 + 0x10))(plStack_29b8);
      }
    }
  }
  FUN_140a55a86(local_790);
  FUN_1415b5e50(local_2810);
  FUN_1415b5e16(local_558);
  FUN_140a59028(local_3a0);
  if ((local_70 ^ (ulonglong)auStack_2e48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5b338 FUN_146a5b338 body=178 status=ok
// SIG undefined FUN_146a5b338(void)

longlong FUN_146a5b338(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_146a77ae8(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1a8) = local_40;
  FUN_144a450dc(param_1 + 0x1b8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5b3ec FUN_146a5b3ec body=77 status=ok
// SIG undefined FUN_146a5b3ec(void)

longlong FUN_146a5b3ec(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_146a580d6();
  lVar1 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar2 != '\0') * 8);
  cVar2 = FUN_146a57bcc(param_1);
  lVar3 = 0x590;
  if ((cVar2 == '\0') && (lVar3 = 0x380, *(char *)(param_1 + 0x3b) != '\0')) {
    lVar3 = 0x640;
  }
  return lVar1 + lVar3;
}



// FUNCTION 146a5b43a FUN_146a5b43a body=163 status=ok
// SIG undefined FUN_146a5b43a(void)

longlong FUN_146a5b43a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a77f86(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5b4de FUN_146a5b4de body=63 status=ok
// SIG undefined FUN_146a5b4de(void)

undefined1 * FUN_146a5b4de(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = FUN_146a57ad6();
  if (cVar1 != '\0') {
    cVar1 = FUN_146a580d6(param_1);
    if (cVar1 != '\0') {
      puVar2 = &DAT_14c96b23a;
      goto LAB_146a5b4fa;
    }
  }
  puVar2 = &DAT_14c96b1e1;
LAB_146a5b4fa:
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 146a5b51e FUN_146a5b51e body=183 status=ok
// SIG undefined FUN_146a5b51e(void)

longlong FUN_146a5b51e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a5b904(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a58be0(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x1d0) = local_38;
  *(undefined4 *)(param_1 + 0x1c0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1c4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1c8) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1cc) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x1d8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5b5d6 FUN_146a5b5d6 body=84 status=ok
// SIG undefined FUN_146a5b5d6(void)

undefined8 * FUN_146a5b5d6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_146a580d6();
  lVar1 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar3 != '\0') * 8);
  uVar2 = *(undefined8 *)(lVar1 + 0xb38);
  *param_2 = *(undefined8 *)(lVar1 + 0xb30);
  param_2[1] = uVar2;
  *(float *)((longlong)param_2 + 4) = *(float *)((longlong)param_2 + 4) * 0.85;
  *(float *)((longlong)param_2 + 0xc) = *(float *)((longlong)param_2 + 0xc) * 0.85;
  return param_2;
}



// FUNCTION 146a5b62a FUN_146a5b62a body=178 status=ok
// SIG undefined FUN_146a5b62a(void)

longlong FUN_146a5b62a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_146a77ae8(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x230) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x228) = local_40;
  FUN_144a450dc(param_1 + 0x238,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5b6de FUN_146a5b6de body=68 status=ok
// SIG undefined FUN_146a5b6de(void)

longlong FUN_146a5b6de(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1459b8360(param_1 + 0x548);
  if (cVar1 == '\0') {
    lVar2 = FUN_141319416();
    return lVar2;
  }
  cVar1 = FUN_146a580d6(param_1);
  return *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar1 != '\0') * 8) + 0x430;
}



// FUNCTION 146a5b722 FUN_146a5b722 body=200 status=ok
// SIG undefined FUN_146a5b722(void)

longlong FUN_146a5b722(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146a78454(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x2d0) = local_38;
  *(undefined4 *)(param_1 + 0x2c0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2c4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2c8) = uStack_40;
  *(undefined4 *)(param_1 + 0x2cc) = uStack_3c;
  *(undefined1 *)(param_1 + 0x2d4) = local_34;
  FUN_144a450dc(param_1 + 0x2d8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5b7ec FUN_146a5b7ec body=278 status=ok
// SIG undefined FUN_146a5b7ec(void)

undefined8 * FUN_146a5b7ec(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_146a580d6();
  if (*(byte *)(*(longlong *)(param_1 + 0x448 + (ulonglong)(cVar2 != '\0') * 8) + 0xb5c) < 2) {
    cVar2 = FUN_146a580d6(param_1);
    lVar1 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar2 != '\0') * 8);
    puVar3 = (undefined8 *)(lVar1 + 0xb4c);
    if (*(char *)(lVar1 + 0xb5c) == '\x01') {
      puVar3 = (undefined8 *)FUN_1400c06fe(puVar3);
    }
    local_38 = *(undefined4 *)(puVar3 + 1);
    local_40 = *puVar3;
    cVar2 = FUN_1459b8360(param_1 + 0x548);
    fVar5 = 0.0;
    if (cVar2 != '\0') {
      fVar5 = (float)FUN_14692f614(param_1 + 0x548);
      fVar4 = sinf(fVar5 * 12.566371);
      fVar5 = (1.0 - fVar5) * (fVar4 + 1.0) * 0.5;
    }
    *(undefined4 *)(param_2 + 1) = local_38;
    *param_2 = local_40;
    *(float *)((longlong)param_2 + 0xc) = fVar5;
  }
  else {
    *(undefined4 *)param_2 = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
  }
  *(undefined1 *)(param_2 + 2) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5b904 FUN_146a5b904 body=313 status=ok
// SIG undefined FUN_146a5b904(void)

longlong * FUN_146a5b904(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a5ba00:
    *puVar5 = &PTR_LAB_149f05530;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f11b20;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a5ba00;
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
    *puVar5 = &PTR_LAB_149f05530;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f11b20;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 146a5ba3e FUN_146a5ba3e body=73 status=ok
// SIG undefined FUN_146a5ba3e(void)

longlong FUN_146a5ba3e(longlong param_1,longlong *param_2)

{
  FUN_140008f88();
  *(char *)(param_1 + 0x10) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x18,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a5ba88 FUN_146a5ba88 body=57 status=ok
// SIG undefined FUN_146a5ba88(void)

longlong * FUN_146a5ba88(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14142e2d2(param_1 + 0x338);
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 146a5bac2 FUN_146a5bac2 body=69 status=ok
// SIG undefined FUN_146a5bac2(void)

undefined4 * FUN_146a5bac2(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = FUN_146a580d6();
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x448 + (ulonglong)(cVar2 != '\0') * 8) + 0xbb0);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return param_2;
}



// FUNCTION 146a5bb08 FUN_146a5bb08 body=77 status=ok
// SIG undefined FUN_146a5bb08(void)

longlong FUN_146a5bb08(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_146a5c9ee(param_1 + 0x488);
  if (*(float *)(lVar2 + 0xc) <= 0.0) {
    lVar2 = FUN_141319416();
    return lVar2;
  }
  cVar1 = FUN_146a580d6(param_1);
  return *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar1 != '\0') * 8) + 0x4e0;
}



// FUNCTION 146a5bb56 FUN_146a5bb56 body=39 status=ok
// SIG undefined FUN_146a5bb56(void)

undefined8 * FUN_146a5bb56(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_146a5c9ee(param_1 + 0x488);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 146a5bb7e FUN_146a5bb7e body=200 status=ok
// SIG undefined FUN_146a5bb7e(void)

longlong FUN_146a5bb7e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146a78454(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x1d8) = local_38;
  *(undefined4 *)(param_1 + 0x1c8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1cc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1d0) = uStack_40;
  *(undefined4 *)(param_1 + 0x1d4) = uStack_3c;
  *(undefined1 *)(param_1 + 0x1dc) = local_34;
  FUN_144a450dc(param_1 + 0x1e0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5bc48 FUN_146a5bc48 body=120 status=ok
// SIG undefined FUN_146a5bc48(void)

undefined8 * FUN_146a5bc48(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x4c0) == '\0') {
    *param_2 = 0x3f800000;
    param_2[1] = &DAT_3f8000003f800000;
    *(undefined2 *)(param_2 + 2) = 2;
  }
  else {
    cVar2 = FUN_146a57bcc();
    if ((cVar2 == '\0') && (*(char *)(param_1 + 0x3b) != '\x01')) {
      puVar3 = (undefined8 *)FUN_146a5c9ee(param_1 + 0x4b0);
      *param_2 = *puVar3;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f333333;
    }
    else {
      puVar3 = (undefined8 *)FUN_146a5c9ee(param_1 + 0x4b0);
      uVar1 = puVar3[1];
      *param_2 = *puVar3;
      param_2[1] = uVar1;
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return param_2;
}



// FUNCTION 146a5bcc0 FUN_146a5bcc0 body=85 status=ok
// SIG undefined FUN_146a5bcc0(void)

undefined8 FUN_146a5bcc0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x398);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined8 *)(param_1 + 0x388) = uVar2;
    }
  }
  return *(undefined8 *)(param_1 + 0x388);
}



// FUNCTION 146a5bd16 FUN_146a5bd16 body=237 status=ok
// SIG undefined FUN_146a5bd16(void)

longlong FUN_146a5bd16(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_50 = *(undefined4 *)(param_3 + 1);
  local_58 = *param_3;
  FUN_146a79198(local_68,param_2,&local_58);
  local_48 = '\0';
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_14697c70c(&local_38,local_68);
  if (&local_58 != (undefined8 *)(param_1 + 0x1f0)) {
    if (local_48 == '\x01') {
      *(undefined4 *)(param_1 + 0x1f0) = (undefined4)local_58;
      *(undefined4 *)(param_1 + 500) = local_58._4_4_;
      *(undefined4 *)(param_1 + 0x1f8) = uStack_50;
      *(undefined4 *)(param_1 + 0x1fc) = uStack_4c;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x200) != '\x01') goto LAB_146a5bd9c;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x200) = uVar1;
  }
LAB_146a5bd9c:
  *(undefined1 *)(param_1 + 0x208) = local_40;
  FUN_144a450dc(param_1 + 0x210,&local_38);
  FUN_1449db362(&local_38);
  if (local_48 == '\x01') {
    local_48 = '\0';
  }
  FUN_1449db362(local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5be04 FUN_146a5be04 body=71 status=ok
// SIG undefined FUN_146a5be04(void)

double * FUN_146a5be04(longlong param_1,double *param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = FUN_146a580d6();
  lVar2 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar3 != '\0') * 8);
  fVar1 = *(float *)(lVar2 + 0xb44);
  *param_2 = (double)*(float *)(lVar2 + 0xb40);
  param_2[1] = (double)fVar1;
  *(undefined1 *)(param_2 + 2) = 1;
  return param_2;
}



// FUNCTION 146a5be4c FUN_146a5be4c body=215 status=ok
// SIG undefined FUN_146a5be4c(void)

longlong FUN_146a5be4c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_146a78cb6(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5bf24 FUN_146a5bf24 body=57 status=ok
// SIG undefined FUN_146a5bf24(void)

longlong * FUN_146a5bf24(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14142e2d2(param_1 + 0x360);
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  return param_2;
}



// FUNCTION 146a5bf5e FUN_146a5bf5e body=74 status=ok
// SIG undefined FUN_146a5bf5e(void)

undefined1 * FUN_146a5bf5e(undefined8 param_1,undefined1 *param_2)

{
  FUN_146a56f5e();
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a5bfa8 FUN_146a5bfa8 body=205 status=ok
// SIG undefined FUN_146a5bfa8(void)

longlong FUN_146a5bfa8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_146a78cb6(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1,&local_50);
  *(undefined1 *)(param_1 + 0x10) = local_40;
  FUN_144a450dc(param_1 + 0x18,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5c076 FUN_146a5c076 body=1359 status=ok
// SIG undefined FUN_146a5c076(void)

undefined8 FUN_146a5c076(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_138 [40];
  undefined1 local_110 [16];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8 [2];
  longlong *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar5 = FUN_146a580d6();
  lVar6 = FUN_1469d256c();
  lVar7 = (ulonglong)(cVar5 != '\0') * 0x10;
  uVar3 = *(undefined8 *)(lVar7 + 0x90 + lVar6);
  plVar4 = *(longlong **)(lVar7 + 0x98 + lVar6);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_68 = L"CloseButtonToolTipLabel";
  local_60 = 0x17;
  FUN_1446e940c(&local_98,&local_68);
  local_68 = L"DockTab";
  local_60 = 7;
  FUN_1446e940c(&local_b8,&local_68);
  FUN_140208bae(&local_78,&local_b8,&local_98,L"Close Tab");
  local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
  FUN_14023423e(&local_58,&local_78);
  FUN_140056680(&local_88,L"Label");
  FUN_140233eec(&local_a8,&local_88,&local_68);
  if (local_88 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  FUN_1469bac48(uVar3,&local_b8);
  cVar5 = FUN_140cac50e(&local_b8);
  if (cVar5 == '\0') {
    local_d8 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))();
    }
    local_d0 = local_b0;
    local_68 = L"CloseButtonInputText";
    local_60 = 0x14;
    FUN_1446e940c(local_fc,&local_68);
    local_68 = L"DockTab";
    local_60 = 7;
    FUN_1446e940c(local_100,&local_68);
    FUN_140208bae(local_f8,local_100,local_fc,L"({0})");
    FUN_14023409e(&local_e8,local_f8,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(&local_58,&local_d8);
    local_80 = &local_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_e8;
    local_90 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_98,&local_78);
    FUN_14007f2db(local_78,local_70);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(&local_58,local_c8);
    FUN_140056680(&local_78,L"InputText");
    FUN_140233eec(&local_a8,&local_78,&local_68);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      local_58 = (longlong *)0x0;
      local_50 = 0;
    }
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
  }
  else {
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    local_58 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))();
    }
    local_50 = local_b0;
    FUN_140056680(&local_78,L"InputText");
    FUN_140233eec(&local_a8,&local_78,&local_68);
    local_f8[0] = local_58;
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
      local_f8[0] = local_58;
    }
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  local_68 = L"CloseButtonToolTipFormat";
  local_60 = 0x18;
  FUN_1446e940c(&local_78,&local_68);
  local_68 = L"DockTab";
  local_60 = 7;
  FUN_1446e940c(&local_88,&local_68);
  FUN_140208bae(&local_68,&local_88,&local_78,L"{Label} {InputText}");
  FUN_14023409e(local_110,&local_68,1);
  FUN_140233c04(param_2,local_110,&local_a8);
  if (local_68 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_68 + 0x10))();
  }
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
  }
  FUN_14010f8af(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a5c5c6 FUN_146a5c5c6 body=163 status=ok
// SIG undefined FUN_146a5c5c6(void)

longlong FUN_146a5c5c6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a77f86(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5c66a FUN_146a5c66a body=411 status=ok
// SIG undefined FUN_146a5c66a(void)

undefined1 * FUN_146a5c66a(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = *(longlong **)(param_1 + 0x2c8);
  bVar4 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    lVar11 = 0;
  }
  else {
    iVar8 = (int)plVar10[1];
    lVar11 = 0;
    do {
      if (iVar8 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_146a5c6c5;
      }
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar12 = iVar8 == iVar5;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      UNLOCK();
    } while (!bVar12);
    lVar11 = *(longlong *)(param_1 + 0x2c0);
    bVar4 = false;
  }
LAB_146a5c6c5:
  if (*(char *)(param_1 + 0x3b) == '\0') {
    bVar7 = FUN_146a57bcc(param_1);
    bVar7 = bVar7 ^ 1;
  }
  else {
    bVar7 = 0;
  }
  if (lVar11 == 0) {
    bVar6 = 0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_146a5c72a:
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
    }
    else {
      iVar8 = (int)plVar3[1];
      do {
        if (iVar8 == 0) goto LAB_146a5c72a;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar12 = iVar8 == iVar5;
        if (bVar12) {
          *(int *)(plVar3 + 1) = iVar8 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        UNLOCK();
      } while (!bVar12);
      local_58 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_50 = plVar3;
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
    bVar6 = FUN_1469de542(lVar11,&local_58);
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
    bVar6 = bVar6 ^ 1;
  }
  puVar9 = &DAT_14c96b238;
  if (*(char *)(param_1 + 0x321) == '\0') {
    puVar9 = &DAT_14c96b23b;
  }
  if (bVar7 != 0) {
    puVar9 = &DAT_14c96b23b;
  }
  if (bVar6 != 0) {
    puVar9 = &DAT_14c96b23b;
  }
  *param_2 = *puVar9;
  if (!bVar4) {
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a5c806 FUN_146a5c806 body=396 status=ok
// SIG undefined FUN_146a5c806(void)

ulonglong FUN_146a5c806(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (((*(longlong *)(param_1 + 0x328) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x330), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146a5c92f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    if (*(longlong *)(param_1 + 0x328) == 0) {
      bVar11 = false;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x330);
      if ((plVar10 == (longlong *)0x0) || ((int)plVar10[1] < 1)) {
LAB_146a5c8a5:
        uVar7 = 0;
        plVar10 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar10[1];
        do {
          if (iVar6 == 0) goto LAB_146a5c8a5;
          LOCK();
          iVar4 = (int)plVar10[1];
          bVar11 = iVar6 == iVar4;
          if (bVar11) {
            *(int *)(plVar10 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar11);
        uVar7 = *(undefined8 *)(param_1 + 0x328);
      }
      FUN_1469bd33a(uVar7,&local_48);
      bVar11 = local_48 != 0;
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
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (bVar11) {
      cVar5 = FUN_146a580d6(param_1);
      lVar9 = *(longlong *)(param_1 + 0x448 + (ulonglong)(cVar5 != '\0') * 8) + 0x850;
      FUN_146aeb4ee(*(undefined8 *)(param_1 + 0x5d8),lVar9);
      FUN_146aeb4ee(*(undefined8 *)(param_1 + 0x5c8),lVar9);
      uVar8 = 0;
    }
  }
LAB_146a5c92f:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146a5c994 FUN_146a5c994 body=29 status=ok
// SIG undefined FUN_146a5c994(void)

void FUN_146a5c994(longlong param_1)

{
  if ((*(int *)(param_1 + 0x3f0) != 0) && (*(longlong **)(param_1 + 1000) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146a5c9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 1000) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 146a5c9b2 FUN_146a5c9b2 body=29 status=ok
// SIG undefined FUN_146a5c9b2(void)

void FUN_146a5c9b2(longlong param_1)

{
  if ((*(int *)(param_1 + 0x3e0) != 0) && (*(longlong **)(param_1 + 0x3d8) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146a5c9ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 146a5c9d0 FUN_146a5c9d0 body=29 status=ok
// SIG undefined FUN_146a5c9d0(void)

void FUN_146a5c9d0(longlong param_1)

{
  if ((*(int *)(param_1 + 0x400) != 0) && (*(longlong **)(param_1 + 0x3f8) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146a5c9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x3f8) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 146a5c9ee FUN_146a5c9ee body=115 status=ok
// SIG undefined FUN_146a5c9ee(void)

undefined4 * FUN_146a5c9ee(undefined4 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[8] != 0) && (*(longlong **)(param_1 + 6) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 6) + 0x30))();
    if (cVar1 != '\0') {
      if (param_1[8] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 6);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_28);
      *param_1 = local_28;
      param_1[1] = uStack_24;
      param_1[2] = uStack_20;
      param_1[3] = uStack_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5ca62 FUN_146a5ca62 body=32 status=ok
// SIG undefined FUN_146a5ca62(void)

void FUN_146a5ca62(longlong param_1)

{
  if ((*(int *)(param_1 + 0x420) != 0) && (*(longlong **)(param_1 + 0x418) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146a5ca7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x418) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 146a5ca82 FUN_146a5ca82 body=7 status=ok
// SIG undefined FUN_146a5ca82(void)

undefined1 FUN_146a5ca82(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x480);
}



// FUNCTION 146a5ca8a FUN_146a5ca8a body=362 status=ok
// SIG undefined FUN_146a5ca8a(void)

undefined8 FUN_146a5ca8a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar9 = *(longlong **)(param_1 + 0x2c8);
  if (plVar9 == (longlong *)0x0) {
LAB_146a5cb91:
    if (((*(int *)(param_1 + 0x3d0) != 0) && (*(longlong **)(param_1 + 0x3c8) != (longlong *)0x0))
       && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x30))(), cVar6 != '\0')) {
      if (*(int *)(param_1 + 0x3d0) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x3c8);
      }
      cVar6 = (**(code **)(*plVar9 + 0x58))();
      if (cVar6 == '\0') goto LAB_146a5cbed;
    }
    uVar8 = 1;
  }
  else {
    iVar7 = (int)plVar9[1];
    do {
      if (iVar7 == 0) goto LAB_146a5cb91;
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar3 = *(longlong *)(param_1 + 0x2c0);
    if (lVar3 == 0) {
      cVar6 = '\x01';
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x10);
      if (plVar4 == (longlong *)0x0) {
LAB_146a5cb2a:
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_146a5cb2a;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar10 = iVar7 == iVar5;
          if (bVar10) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar10);
        local_38 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        plStack_30 = plVar4;
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
      cVar6 = FUN_1469de542(lVar3,&local_38);
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
    }
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if (cVar6 != '\0') goto LAB_146a5cb91;
LAB_146a5cbed:
    uVar8 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5cbf6 FUN_146a5cbf6 body=29 status=ok
// SIG undefined FUN_146a5cbf6(void)

void FUN_146a5cbf6(longlong param_1)

{
  if ((*(int *)(param_1 + 0x430) != 0) && (*(longlong **)(param_1 + 0x428) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146a5cc0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x428) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 146a5cc14 FUN_146a5cc14 body=40 status=ok
// SIG undefined FUN_146a5cc14(void)

void FUN_146a5cc14(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_14c98e618 != (longlong *)0x0) {
    uVar1 = (**(code **)(*DAT_14c98e618 + 0x60))();
    *(undefined8 *)(param_1 + 0x5f8) = uVar1;
  }
  return;
}



// FUNCTION 146a5cc3c FUN_146a5cc3c body=598 status=ok
// SIG undefined FUN_146a5cc3c(void)

void FUN_146a5cc3c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  undefined1 local_209;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x1b4);
  FUN_140a5296a(&local_1e0);
  local_218 = &local_209;
  FUN_140a541dc(local_208,"SHorizontalBox",".\\Runtime/Slate/Private/Widgets/Images/SThrobber.cpp",
                0x10);
  FUN_140a50ec6(local_208,&local_1f0,&local_1e0);
  plVar4 = local_1e8;
  if (local_1e8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x318) = local_1f0;
    plVar5 = *(longlong **)(param_1 + 800);
    if (plVar5 == (longlong *)0x0) goto LAB_146a5ccf5;
    *(undefined8 *)(param_1 + 800) = 0;
LAB_146a5ce57:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a5ccf5;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x318) = local_1f0;
    plVar5 = *(longlong **)(param_1 + 800);
    if (local_1e8 != plVar5) {
      *(longlong **)(param_1 + 800) = local_1e8;
      if (plVar5 == (longlong *)0x0) goto LAB_146a5ccf5;
      goto LAB_146a5ce57;
    }
    LOCK();
    plVar5 = local_1e8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146a5ccf5;
    (**(code **)*local_1e8)(local_1e8);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar5 = plVar4;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_146a5ccf5:
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1e8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e8 + 0x10))(local_1e8);
      }
    }
  }
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_200 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)local_200 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_200 + 0x10))(local_200);
      }
    }
  }
  FUN_145ab33da(&local_1e0);
  local_1e0 = *(undefined8 *)(param_1 + 0x318);
  plVar4 = *(longlong **)(param_1 + 800);
  if (plVar4 == (longlong *)0x0) {
    local_1d8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_1d8 = plVar4;
  }
  FUN_140a58896(param_1 + 0x1e0,&local_1e0);
  plVar5 = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1d8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
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
  FUN_146a5ce94(param_1);
  if ((local_28 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5ce94 FUN_146a5ce94 body=1322 status=ok
// SIG undefined FUN_146a5ce94(void)

void FUN_146a5ce94(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_788 [32];
  undefined1 *local_768;
  longlong local_758;
  undefined1 local_749;
  undefined1 local_748 [8];
  longlong *local_740;
  undefined1 local_729;
  undefined1 *local_728;
  undefined4 local_720;
  undefined4 uStack_71c;
  undefined8 local_710;
  longlong *local_708;
  undefined8 local_700;
  undefined1 local_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  longlong *local_6d8;
  undefined8 local_6d0;
  longlong *local_6c8;
  code *local_6c0;
  undefined4 local_6b8;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined1 *local_2d0;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_250 [248];
  undefined1 local_158 [8];
  undefined1 local_150 [208];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_788;
  lVar4 = param_1 + 0x2d8;
  FUN_146a5d3c0(lVar4,*(undefined4 *)(param_1 + 0x330));
  FUN_14285ff5a(&local_488);
  lVar8 = param_1 + 0x268;
  FUN_146980d02(lVar8);
  FUN_1402bc42a(&local_488);
  FUN_146977a00(*(undefined8 *)(param_1 + 0x318));
  if (0 < *(int *)(param_1 + 0x330)) {
    iVar10 = 0;
    local_758 = lVar8;
    do {
      local_768 = (undefined1 *)((ulonglong)local_768 & 0xffffffffffffff00);
      FUN_14692f186(lVar8,&local_488,(float)iVar10 * 0.05,0x3fc00000);
      iVar6 = *(int *)(param_1 + 0x310);
      *(uint *)(param_1 + 0x310) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x314) < iVar6 + 1U) {
        FUN_146a79c4e(lVar4,iVar6);
      }
      lVar8 = *(longlong *)(param_1 + 0x308);
      if (*(longlong *)(param_1 + 0x308) == 0) {
        lVar8 = lVar4;
      }
      puVar5 = (undefined4 *)(lVar8 + (longlong)iVar6 * 0x10);
      *puVar5 = (undefined4)local_488;
      puVar5[1] = local_488._4_4_;
      puVar5[2] = (undefined4)uStack_480;
      puVar5[3] = uStack_480._4_4_;
      FUN_146a24608(*(undefined8 *)(param_1 + 0x318),local_158,0xffffffff);
      uVar9 = FUN_140a52578(local_150);
      FUN_140a562d0(&local_488);
      local_700 = FUN_141319416();
      local_6f8 = 1;
      local_6f0 = 0;
      uStack_6e8 = 0;
      local_258 = 1;
      local_260 = local_700;
      FUN_144a450dc(local_250,&local_6f0);
      FUN_1449db362(&local_6f0);
      local_6c0 = FUN_146a5d4ae;
      local_6b8 = 0;
      FUN_146a5d3ea(&local_488,param_1,&local_6c0,iVar10);
      local_6c0 = FUN_146a5d5e6;
      local_6b8 = 0;
      FUN_146a5d522(&local_488,param_1,&local_6c0,iVar10);
      local_2d0 = &DAT_200000002;
      FUN_140a53334(&local_6c0);
      local_728 = &LAB_146a5d70e;
      local_720 = 0;
      FUN_146a5d65a(&local_6c0,param_1,&local_728);
      local_768 = &local_729;
      FUN_140a554b8(&local_728,"SImage",".\\Runtime/Slate/Private/Widgets/Images/SThrobber.cpp",0x2d
                   );
      FUN_140a52c70(&local_728,&local_710,&local_6c0);
      plVar3 = local_2d8;
      plVar7 = local_708;
      if (local_708 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_708 + 1) = (int)local_708[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_708 + 1) = (int)local_708[1] + 1;
        UNLOCK();
      }
      local_2e0 = local_710;
      local_2d8 = local_708;
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
      local_768 = &local_749;
      FUN_140a55c32(local_748,"SBorder",".\\Runtime/Slate/Private/Widgets/Images/SThrobber.cpp",0x26
                   );
      FUN_140a530e4(local_748,&local_6e0,&local_488);
      local_6d0 = local_6e0;
      local_6c8 = local_6d8;
      if (local_6d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_6d8 + 1) = (int)local_6d8[1] + 1;
        UNLOCK();
      }
      FUN_140a4fe8e(uVar9);
      plVar3 = local_6c8;
      if (local_6c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_6c8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_6c8)(local_6c8);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = local_6d8;
      if (local_6d8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_6d8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_6d8)(local_6d8);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = local_740;
      if (local_740 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_740 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_740)(local_740);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      plVar7 = local_708;
      if (local_708 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_708 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_708)(local_708);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      lVar8 = local_758;
      plVar7 = (longlong *)CONCAT44(uStack_71c,local_720);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      FUN_140a55a86(&local_6c0);
      FUN_140a59028(&local_488);
      FUN_146a071ac(local_158);
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x330));
  }
  uStack_480 = *(longlong **)(param_1 + 0x10);
  if (uStack_480 == (longlong *)0x0) {
    uStack_480 = (longlong *)0x0;
    local_488 = 0;
  }
  else {
    iVar10 = (int)uStack_480[1];
    local_488 = 0;
    do {
      if (iVar10 == 0) {
        uStack_480 = (longlong *)0x0;
        goto LAB_146a5d326;
      }
      LOCK();
      iVar6 = (int)uStack_480[1];
      bVar11 = iVar10 == iVar6;
      if (bVar11) {
        *(int *)(uStack_480 + 1) = iVar10 + 1;
        iVar6 = iVar10;
      }
      iVar10 = iVar6;
      UNLOCK();
    } while (!bVar11);
    local_488 = *(undefined8 *)(param_1 + 8);
  }
LAB_146a5d326:
  local_768 = (undefined1 *)((ulonglong)local_768 & 0xffffffffffffff00);
  FUN_14692f220(lVar8,&local_488,1,0);
  plVar7 = uStack_480;
  if (uStack_480 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_480 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_480)(uStack_480);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_788) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a5d3c0 FUN_146a5d3c0 body=41 status=ok
// SIG undefined FUN_146a5d3c0(void)

void FUN_146a5d3c0(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_2 <= *(int *)(param_1 + 0x3c)) {
    return;
  }
  FUN_146a79b6c();
  return;
}



// FUNCTION 146a5d3ea FUN_146a5d3ea body=194 status=ok
// SIG undefined FUN_146a5d3ea(void)

longlong FUN_146a5d3ea(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_3;
  uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(param_3 + 1));
  local_24 = param_4;
  FUN_146a79cbe(local_68,param_2,&local_58,&local_24);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_140a51be2(&local_40,local_68);
  *(undefined1 *)(param_1 + 600) = local_48;
  *(undefined4 *)(param_1 + 0x248) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x24c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x250) = (undefined4)uStack_50;
  *(undefined4 *)(param_1 + 0x254) = uStack_50._4_4_;
  FUN_144a450dc(param_1 + 0x260,&local_40);
  FUN_1449db362(&local_40);
  FUN_1449db362(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5d4ae FUN_146a5d4ae body=116 status=ok
// SIG undefined FUN_146a5d4ae(void)

double * FUN_146a5d4ae(longlong param_1,double *param_2,int param_3)

{
  double dVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  
  lVar2 = param_1 + 0x2d8;
  if (*(longlong *)(param_1 + 0x308) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x308);
  }
  fVar3 = (float)FUN_14692ef30((longlong)param_3 * 0x10 + lVar2);
  fVar3 = sinf(fVar3 * 6.2831855);
  dVar1 = 1.0;
  if ((*(uint *)(param_1 + 0x334) & 1) != 0) {
    dVar1 = (double)fVar3;
  }
  dVar4 = 1.0;
  if ((*(uint *)(param_1 + 0x334) & 2) != 0) {
    dVar4 = (double)fVar3;
  }
  *param_2 = dVar4;
  param_2[1] = dVar1;
  return param_2;
}



// FUNCTION 146a5d522 FUN_146a5d522 body=194 status=ok
// SIG undefined FUN_146a5d522(void)

longlong FUN_146a5d522(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_3;
  uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(param_3 + 1));
  local_24 = param_4;
  FUN_146a7a1b4(local_68,param_2,&local_58,&local_24);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_140a5c51c(&local_40,local_68);
  *(undefined1 *)(param_1 + 0x2a8) = local_48;
  *(undefined4 *)(param_1 + 0x298) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x29c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x2a0) = (undefined4)uStack_50;
  *(undefined4 *)(param_1 + 0x2a4) = uStack_50._4_4_;
  FUN_144a450dc(param_1 + 0x2b0,&local_40);
  FUN_1449db362(&local_40);
  FUN_1449db362(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5d5e6 FUN_146a5d5e6 body=116 status=ok
// SIG undefined FUN_146a5d5e6(void)

undefined8 * FUN_146a5d5e6(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0x334) & 4) == 0) {
    *param_2 = &DAT_3f8000003f800000;
    param_2[1] = &DAT_3f8000003f800000;
  }
  else {
    lVar1 = param_1 + 0x2d8;
    if (*(longlong *)(param_1 + 0x308) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x308);
    }
    fVar2 = (float)FUN_14692ef30((longlong)param_3 * 0x10 + lVar1);
    fVar2 = sinf(fVar2 * 6.2831855);
    *param_2 = &DAT_3f8000003f800000;
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    *(float *)((longlong)param_2 + 0xc) = fVar2;
  }
  return param_2;
}



// FUNCTION 146a5d65a FUN_146a5d65a body=178 status=ok
// SIG undefined FUN_146a5d65a(void)

longlong FUN_146a5d65a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_146a7a6aa(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1a8) = local_40;
  FUN_144a450dc(param_1 + 0x1b8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5d722 FUN_146a5d722 body=24 status=ok
// SIG undefined FUN_146a5d722(void)

void FUN_146a5d722(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x328) != param_2) {
    *(longlong *)(param_1 + 0x328) = param_2;
    FUN_140163244(param_1,2);
    return;
  }
  return;
}



// FUNCTION 146a5d73a thunk_FUN_140163244 body=7 status=ok
// SIG undefined thunk_FUN_140163244(void)

void thunk_FUN_140163244(undefined8 param_1)

{
  FUN_140163244(param_1,2);
  return;
}



// FUNCTION 146a5d742 FUN_146a5d742 body=48 status=ok
// SIG undefined FUN_146a5d742(void)

void FUN_146a5d742(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x330) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x330) = param_2;
  FUN_146a5ce94();
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a5d772 FUN_146a5d772 body=22 status=ok
// SIG undefined FUN_146a5d772(void)

void FUN_146a5d772(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x334) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x334) = param_2;
  FUN_140163244(param_1,6);
  return;
}



// FUNCTION 146a5d788 FUN_146a5d788 body=101 status=ok
// SIG undefined FUN_146a5d788(void)

undefined8 * FUN_146a5d788(undefined8 *param_1)

{
  FUN_140a560dc();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  *param_1 = &PTR_FUN_149f0ff40;
  FUN_14285ff5a(param_1 + 0x3c);
  FUN_14692ef24(param_1 + 0x4a,0,0);
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x284) = 0;
  FUN_140a5808e((longlong)param_1 + 0x274,param_1);
  return param_1;
}



// FUNCTION 146a5d7ee FUN_146a5d7ee body=276 status=ok
// SIG undefined FUN_146a5d7ee(void)

void FUN_146a5d7ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14285ff5a(&local_90);
  lVar3 = param_1 + 0x1e0;
  FUN_146980d02(lVar3,&local_90);
  FUN_1402bc42a(&local_90);
  fVar8 = *(float *)(param_1 + 0x26c);
  if (fVar8 <= 1e-08) {
    fVar8 = 1e-08;
  }
  local_98 = 0;
  FUN_14692f186(lVar3,&local_90,0,fVar8);
  *(undefined4 *)(param_1 + 0x250) = (undefined4)local_90;
  *(undefined4 *)(param_1 + 0x254) = local_90._4_4_;
  *(undefined4 *)(param_1 + 600) = (undefined4)uStack_88;
  *(undefined4 *)(param_1 + 0x25c) = uStack_88._4_4_;
  uStack_88 = *(longlong **)(param_1 + 0x10);
  if (uStack_88 == (longlong *)0x0) {
    uStack_88 = (longlong *)0x0;
    local_90 = 0;
  }
  else {
    iVar6 = (int)uStack_88[1];
    local_90 = 0;
    do {
      if (iVar6 == 0) {
        uStack_88 = (longlong *)0x0;
        goto LAB_146a5d892;
      }
      LOCK();
      iVar5 = (int)uStack_88[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(uStack_88 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    local_90 = *(undefined8 *)(param_1 + 8);
  }
LAB_146a5d892:
  local_98 = 0;
  FUN_14692f220(lVar3,&local_90,1,0);
  plVar4 = uStack_88;
  if (uStack_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_88)(uStack_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a5d904 FUN_146a5d904 body=24 status=ok
// SIG undefined FUN_146a5d904(void)

void FUN_146a5d904(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x260) != param_2) {
    *(longlong *)(param_1 + 0x260) = param_2;
    FUN_140163244(param_1,2);
    return;
  }
  return;
}



// FUNCTION 146a5d91c thunk_FUN_140163244 body=7 status=ok
// SIG undefined thunk_FUN_140163244(void)

void thunk_FUN_140163244(undefined8 param_1)

{
  FUN_140163244(param_1,2);
  return;
}



// FUNCTION 146a5d924 FUN_146a5d924 body=22 status=ok
// SIG undefined FUN_146a5d924(void)

void FUN_146a5d924(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x268) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x268) = param_2;
  FUN_140163244(param_1,2);
  return;
}



// FUNCTION 146a5d93a FUN_146a5d93a body=46 status=ok
// SIG undefined FUN_146a5d93a(void)

void FUN_146a5d93a(longlong param_1,float param_2)

{
  if (ABS(*(float *)(param_1 + 0x26c) - param_2) <= 1e-08) {
    return;
  }
  *(float *)(param_1 + 0x26c) = param_2;
  FUN_146a5d7ee();
  return;
}



// FUNCTION 146a5d968 FUN_146a5d968 body=48 status=ok
// SIG undefined FUN_146a5d968(void)

void FUN_146a5d968(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = ABS(*(float *)(param_1 + 0x270) - param_2);
  if (1e-08 < fVar1) {
    *(float *)(param_1 + 0x270) = param_2;
    FUN_140163244(fVar1,1);
    return;
  }
  return;
}



// FUNCTION 146a5d998 FUN_146a5d998 body=1044 status=ok
// SIG undefined FUN_146a5d998(void)

undefined4
FUN_146a5d998(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  float *local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  undefined8 local_114;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  byte local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(char *)(param_1 + 0x288) == '\x01') {
    pfVar7 = (float *)(param_1 + 0x274);
    cVar4 = *(char *)(param_1 + 0x284);
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        pfVar7 = (float *)FUN_1400c06fe(pfVar7);
      }
      else if (cVar4 == '\x03') {
        pfVar7 = param_7 + 8;
      }
      else {
        pfVar7 = param_7 + 4;
      }
    }
    local_138 = *pfVar7;
    fStack_134 = pfVar7[1];
    fStack_130 = pfVar7[2];
    fStack_12c = pfVar7[3];
  }
  else {
    cVar4 = *(char *)(*(longlong *)(param_1 + 0x260) + 0x18);
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x260) + 8);
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        pfVar7 = (float *)FUN_1400c06fe(pfVar7);
      }
      else if (cVar4 == '\x03') {
        pfVar7 = param_7 + 8;
      }
      else {
        pfVar7 = param_7 + 4;
      }
    }
    fStack_12c = pfVar7[3] * param_7[3];
    fStack_130 = pfVar7[2] * param_7[2];
    fStack_134 = pfVar7[1] * param_7[1];
    local_138 = *pfVar7 * *param_7;
  }
  fVar12 = *param_3;
  fVar15 = param_3[1];
  if (*(int *)(param_1 + 0x268) < 1) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = 6.2831855 / (float)*(int *)(param_1 + 0x268);
  }
  fVar10 = *(float *)(*(longlong *)(param_1 + 0x260) + 0x24);
  fVar13 = *(float *)(*(longlong *)(param_1 + 0x260) + 0x20);
  fVar9 = (float)FUN_14692ef30(param_1 + 0x250);
  if (0 < *(int *)(param_1 + 0x268)) {
    fVar15 = (fVar15 - fVar10) * 0.5;
    fVar12 = (fVar12 - fVar13) * 0.5;
    iVar8 = 0;
    do {
      fVar13 = (float)iVar8 * fVar14 + (fVar9 + fVar9) * 3.1415927;
      fVar10 = cosf(fVar13);
      fVar13 = sinf(fVar13);
      iVar8 = iVar8 + 1;
      fVar6 = fVar13 * fVar12 + fVar12;
      fVar11 = (float)iVar8 / (float)*(int *)(param_1 + 0x268);
      fVar5 = fVar10 * fVar15 + fVar15;
      local_114 = *(undefined8 *)(*(longlong *)(param_1 + 0x260) + 0x20);
      fVar10 = param_3[2];
      fVar13 = param_3[7];
      fVar1 = param_3[8];
      fVar2 = param_3[10];
      local_120 = fVar11 * fVar10;
      fVar3 = param_3[9];
      local_f8 = fVar6 * fVar1 + fVar2 * fVar5 + param_3[0xc];
      local_fc = fVar6 * fVar13 + fVar5 * fVar3 + param_3[0xb];
      local_100 = fVar1 * 0.0 + fVar11 * fVar2;
      local_104 = fVar13 * 0.0 + fVar11 * fVar3;
      local_128 = CONCAT44(fVar10 * fVar5 + param_3[4],fVar10 * fVar6 + param_3[3]);
      local_108 = fVar2 * 0.0 + fVar11 * fVar1;
      local_10c = fVar3 * 0.0 + fVar11 * fVar13;
      local_11c = 0;
      local_f4 = local_f4 & 0xfc | *(char *)(param_3 + 0xd) * '\x02' & 2U;
      local_148 = 0;
      local_140 = &local_138;
      FUN_140239bd2(param_5,param_6,&local_128);
    } while (iVar8 < *(int *)(param_1 + 0x268));
  }
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146a5ddd4 FUN_146a5ddd4 body=113 status=ok
// SIG undefined FUN_146a5ddd4(void)

void FUN_146a5ddd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f101b0;
  FUN_1449db362(param_1 + 0x5f);
  FUN_1449db362(param_1 + 0x5d);
  FUN_1449db362(param_1 + 0x5b);
  FUN_1449db362(param_1 + 0x59);
  FUN_1449db362(param_1 + 0x57);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146a5de46 FUN_146a5de46 body=43 status=ok
// SIG undefined FUN_146a5de46(void)

void FUN_146a5de46(longlong param_1,longlong param_2)

{
  FUN_140a58e4a(param_1 + 0x350,param_1,param_2);
  FUN_1449db362(param_2 + 0x18);
  return;
}



// FUNCTION 146a5de72 FUN_146a5de72 body=644 status=ok
// SIG undefined FUN_146a5de72(void)

void FUN_146a5de72(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,float *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  float *pfVar12;
  byte bVar13;
  longlong lVar14;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  float *local_110;
  float *local_108;
  byte local_100;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_8 == '\0') {
    bVar13 = 0;
  }
  else {
    bVar13 = *(byte *)(param_1 + 0x3a);
  }
  cVar9 = *(char *)(*(longlong *)(param_1 + 0x2b0) + 0x23c);
  if (cVar9 == '\0' || bVar13 != 0) {
    lVar14 = *(longlong *)(param_1 + 0x268);
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x2b0) + 0x220;
  }
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x1c) != '\0')) {
    pfVar12 = (float *)(lVar14 + 8);
    cVar10 = *(char *)(lVar14 + 0x18);
    if (cVar10 != '\0') {
      if (cVar10 == '\x01') {
        pfVar12 = (float *)FUN_1400c06fe(pfVar12);
      }
      else if (cVar10 == '\x03') {
        pfVar12 = param_7 + 8;
      }
      else {
        pfVar12 = param_7 + 4;
      }
    }
    fVar1 = pfVar12[1];
    fVar2 = pfVar12[2];
    fVar3 = pfVar12[3];
    fVar4 = param_7[3];
    fVar5 = param_7[2];
    fVar6 = param_7[1];
    fVar7 = *pfVar12;
    fVar8 = *param_7;
    local_e8 = *(uint *)(param_1 + 0x280);
    local_f8 = *(float *)(param_1 + 0x270);
    uStack_f4 = *(undefined4 *)(param_1 + 0x274);
    uStack_f0 = *(undefined4 *)(param_1 + 0x278);
    uStack_ec = *(undefined4 *)(param_1 + 0x27c);
    uVar11 = *(uint *)(param_1 + 0x280) & 0xff;
    if (uVar11 == 0) {
      pfVar12 = &local_f8;
    }
    else if (uVar11 == 1) {
      pfVar12 = (float *)FUN_1400c06fe(&local_f8);
    }
    else if (uVar11 == 3) {
      pfVar12 = param_7 + 8;
    }
    else {
      pfVar12 = param_7 + 4;
    }
    local_cc = fVar3 * fVar4 * pfVar12[3];
    local_d0 = fVar2 * fVar5 * pfVar12[2];
    local_d4 = fVar1 * fVar6 * pfVar12[1];
    local_d8 = fVar7 * fVar8 * *pfVar12;
    local_110 = &local_d8;
    local_b4 = *param_3;
    local_c8 = *(undefined8 *)((longlong)param_3 + 0xc);
    local_c0 = *(undefined4 *)(param_3 + 1);
    local_bc = 0;
    local_ac = *(undefined4 *)((longlong)param_3 + 0x1c);
    uStack_a8 = *(undefined4 *)(param_3 + 4);
    uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_a0 = *(undefined4 *)(param_3 + 5);
    local_9c = *(undefined8 *)((longlong)param_3 + 0x2c);
    local_94 = *(char *)((longlong)param_3 + 0x34) * '\x02' & 2;
    local_118 = CONCAT71(local_118._1_7_,(cVar9 == '\0' & (bVar13 ^ 1)) << 5);
    FUN_140239bd2(param_5,param_6,&local_c8,lVar14);
  }
  local_108 = param_7;
  local_110 = (float *)CONCAT44(local_110._4_4_,param_6);
  local_118 = param_5;
  local_100 = bVar13;
  FUN_1400c0302(param_1,param_2,param_3,param_4);
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5e102 FUN_146a5e102 body=31 status=ok
// SIG undefined FUN_146a5e102(void)

void FUN_146a5e102(longlong *param_1)

{
  FUN_14697d5d8();
                    /* WARNING: Could not recover jumptable at 0x000146a5e11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x250))(param_1);
  return;
}



// FUNCTION 146a5e122 FUN_146a5e122 body=336 status=ok
// SIG undefined FUN_146a5e122(void)

undefined1 *
FUN_146a5e122(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0;
  undefined1 local_c8 [136];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)((longlong)param_1 + 0x3a) == '\x01') {
    cVar1 = (**(code **)(*DAT_14c98e618 + 0xb0))();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x248))(param_1);
      if (*(char *)((longlong)param_1 + 0x33a) == '\x01') {
        FUN_146a53614(param_1,local_f0);
        FUN_1403d4924(param_2,local_f0);
      }
      else {
        local_f0[0] = 1;
        local_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        memset(local_c8,0,0x88);
        local_40 = 0x20702;
        FUN_1403d4924(param_2,local_f0);
      }
      goto LAB_146a5e1c2;
    }
  }
  FUN_14171f816(param_1,local_f0,param_3,param_4);
  FUN_1403d4924(param_2,local_f0);
LAB_146a5e1c2:
  FUN_14493db24(local_f0);
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5e274 FUN_146a5e274 body=302 status=ok
// SIG undefined FUN_146a5e274(void)

undefined1 * FUN_146a5e274(longlong *param_1,undefined1 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0;
  undefined1 local_b8 [136];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)((longlong)param_1 + 0x3a) == '\x01') {
    cVar2 = (**(code **)(*DAT_14c98e618 + 0xb0))();
    if (cVar2 == '\0') {
      bVar1 = *(byte *)((longlong)param_1 + 0x33b);
      (**(code **)(*param_1 + 0x250))(param_1);
      if ((*(char *)((longlong)param_1 + 0x33a) == '\x02') ||
         ((*(char *)((longlong)param_1 + 0x33a) == '\0' && ((bVar1 & 2) != 0)))) {
        FUN_146a53614(param_1,local_e0);
        FUN_1403d4924(param_2,local_e0);
      }
      else {
        local_e0[0] = 1;
        local_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        memset(local_b8,0,0x88);
        local_30 = 0x20702;
        FUN_1403d4924(param_2,local_e0);
      }
      FUN_14493db24(local_e0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5e3a4 FUN_146a5e3a4 body=581 status=ok
// SIG undefined FUN_146a5e3a4(void)

undefined1 *
FUN_146a5e3a4(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)((longlong)param_1 + 0x3a) != '\x01') goto LAB_146a5e59f;
  lVar7 = *(longlong *)(param_4 + 0x40);
  plVar8 = *(longlong **)(param_4 + 0x50);
  if (plVar8 == (longlong *)0x0) {
    if ((lVar7 != DAT_14c966e98) && ((*(byte *)(param_4 + 100) & 1) == 0)) goto LAB_146a5e59f;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar11 = lVar7 != DAT_14c966e98;
    bVar5 = *(byte *)(param_4 + 100);
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
    if (bVar11 && (bVar5 & 1) == 0) goto LAB_146a5e59f;
  }
  (**(code **)(*param_1 + 0x248))(param_1);
  fVar3 = *(float *)(param_4 + 0x24);
  param_1[0x54] = (longlong)(double)*(float *)(param_4 + 0x20);
  param_1[0x55] = (longlong)(double)fVar3;
  if (*(char *)(param_4 + 100) == '\x01') {
    cVar6 = *(char *)((longlong)param_1 + 0x339);
    if (cVar6 != '\0') {
      if (cVar6 != '\x02') {
        if (cVar6 != '\x01') goto LAB_146a5e4a2;
        goto LAB_146a5e5ca;
      }
      goto LAB_146a5e52a;
    }
LAB_146a5e4b7:
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    local_34 = 0;
    local_f0 = param_1[2];
    if (local_f0 == 0) {
LAB_146a5e571:
      local_f8 = 0;
      local_f0 = 0;
    }
    else {
      iVar9 = *(int *)(local_f0 + 8);
      do {
        if (iVar9 == 0) goto LAB_146a5e571;
        LOCK();
        iVar4 = *(int *)(local_f0 + 8);
        bVar11 = iVar9 == iVar4;
        if (bVar11) {
          *(int *)(local_f0 + 8) = iVar9 + 1;
          iVar4 = iVar9;
        }
        iVar9 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_f8 = param_1[1];
    }
    uVar10 = FUN_140592a6e(local_e8);
    FUN_1402c17c2(param_2,uVar10);
  }
  else {
LAB_146a5e4a2:
    if ((char)param_1[0x67] == '\x03') {
LAB_146a5e52a:
      local_e8[0] = 1;
      local_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      memset(local_c0,0,0x88);
      local_38 = 0x20702;
      local_34 = 0;
      FUN_1403d4924(param_2,local_e8);
    }
    else {
      if ((char)param_1[0x67] != '\x01') goto LAB_146a5e4b7;
LAB_146a5e5ca:
      FUN_146a53614(param_1,local_e8);
      FUN_1403d4924(param_2,local_e8);
    }
  }
  FUN_14493db24(local_e8);
LAB_146a5e59f:
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a5e5ea FUN_146a5e5ea body=149 status=ok
// SIG undefined FUN_146a5e5ea(void)

undefined8 FUN_146a5e5ea(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_108 [32];
  char local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14697d7de(param_1,local_e8);
  if (local_e8[0] == '\x01') {
    FUN_1428fd920(param_2,local_e8);
  }
  else {
    (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,param_4);
  }
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5e680 FUN_146a5e680 body=973 status=ok
// SIG undefined FUN_146a5e680(void)

char * FUN_146a5e680(longlong *param_1,char *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118;
  undefined1 local_110 [136];
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_2 = '\0';
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
  if (*(char *)(param_4 + 100) == '\x01') {
    cVar7 = *(char *)((longlong)param_1 + 0x339);
    bVar10 = false;
    if (cVar7 != '\0') {
      if (cVar7 == '\x01') goto LAB_146a5e818;
      if (cVar7 != '\x02') goto LAB_146a5e72b;
      cVar7 = '\x03';
      bVar10 = true;
    }
LAB_146a5e746:
    if ((*(byte *)((longlong)param_1 + 0x33b) & 2) != 0) goto LAB_146a5e818;
  }
  else {
LAB_146a5e72b:
    cVar7 = (char)param_1[0x67];
    bVar10 = cVar7 == '\x03';
    if ((bVar10) || (cVar7 == '\0')) goto LAB_146a5e746;
LAB_146a5e818:
    lVar4 = *(longlong *)(param_4 + 0x40);
    plVar3 = *(longlong **)(param_4 + 0x50);
    if (plVar3 == (longlong *)0x0) {
      if (lVar4 == DAT_14c966e98 || *(char *)(param_4 + 100) != '\0') goto LAB_146a5e866;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar11 = lVar4 == DAT_14c966e98;
      bVar6 = *(byte *)(param_4 + 100);
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
      if (bVar11 || (bVar6 & 1) != 0) {
LAB_146a5e866:
        (**(code **)(*param_1 + 0x250))(param_1);
        if ((cVar7 != '\x01') && (*(char *)((longlong)param_1 + 0x3a) != '\0')) {
          if (*(char *)((longlong)param_1 + 0x3b) == '\0') {
            if (*(char *)(param_4 + 100) == '\x01') {
              fVar13 = param_3[8] * 0.0;
              fVar14 = param_3[7] * 0.0;
              fVar12 = param_3[10] * 0.0;
              fVar15 = param_3[9] * 0.0;
              local_138 = CONCAT44(fVar12 + fVar13 + param_3[0xc],fVar15 + fVar14 + param_3[0xb]);
              local_130 = CONCAT44(*param_3 * param_3[8] + fVar12,*param_3 * param_3[7] + fVar15);
              uStack_128 = CONCAT44(param_3[10] * param_3[1] + fVar13,
                                    param_3[1] * param_3[9] + fVar14);
              cVar8 = FUN_1402b2a42();
              if (cVar8 != '\0') goto LAB_146a5e888;
            }
          }
          else {
LAB_146a5e888:
            if ((cVar7 == '\x02') || (bVar6 = FUN_140591fd6(param_1), (bVar10 | bVar6) == 1)) {
              FUN_146a53614(param_1,&local_138);
              FUN_1403d4924(param_2);
              FUN_14493db24(&local_138);
            }
          }
        }
        if (*param_2 == '\0') {
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          local_88 = 0x20702;
          local_84 = 0;
          FUN_1403d4924(param_2,&local_138);
          FUN_14493db24(&local_138);
        }
      }
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x40);
  if (plVar3 == (longlong *)0x0) {
LAB_146a5e797:
    cVar7 = FUN_140591fd6(param_1);
  }
  else {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_146a5e797;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar9 == iVar5;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar5 = iVar9;
      }
      iVar9 = iVar5;
      UNLOCK();
    } while (!bVar10);
    if (*(longlong *)(param_2 + 0x38) != 0) {
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
      goto LAB_146a5e7d0;
    }
    cVar7 = FUN_140591fd6(param_1);
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
  if (cVar7 != '\0') {
    plVar3 = *(longlong **)(param_2 + 0x40);
    param_2[0x38] = '\0';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
    param_2[0x3c] = '\0';
    param_2[0x3d] = '\0';
    param_2[0x3e] = '\0';
    param_2[0x3f] = '\0';
    param_2[0x40] = '\0';
    param_2[0x41] = '\0';
    param_2[0x42] = '\0';
    param_2[0x43] = '\0';
    param_2[0x44] = '\0';
    param_2[0x45] = '\0';
    param_2[0x46] = '\0';
    param_2[0x47] = '\0';
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(uint *)(param_2 + 0xb4) = (*(uint *)(param_2 + 0xb4) & 0xffffffde) + 1;
  }
LAB_146a5e7d0:
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a5ea4e FUN_146a5ea4e body=183 status=ok
// SIG undefined FUN_146a5ea4e(void)

undefined1 *
FUN_146a5ea4e(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  
  if (((*(byte *)((longlong)param_1 + 0x33b) & 2) == 0) && ((char)param_1[0x6c] != '\x01'))
  goto LAB_146a5eac9;
  if (*(char *)(param_4 + 100) == '\x01') {
    if (*(byte *)((longlong)param_1 + 0x339) < 2) goto LAB_146a5eac9;
    if (*(byte *)((longlong)param_1 + 0x339) != 2) goto LAB_146a5ea81;
  }
  else {
LAB_146a5ea81:
    if ((char)param_1[0x67] != '\x03') goto LAB_146a5eac9;
  }
  cVar1 = FUN_1469aaa1a(DAT_14c98e618,param_4,
                        CONCAT44((float)(double)param_1[0x55],(float)(double)param_1[0x54]));
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x250))(param_1);
  }
LAB_146a5eac9:
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a5eb06 FUN_146a5eb06 body=50 status=ok
// SIG undefined FUN_146a5eb06(void)

void FUN_146a5eb06(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x3b);
  FUN_1403d1d7a();
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x3b) == '\x01')) {
    FUN_146a5eb38(param_1,1);
    return;
  }
  return;
}



// FUNCTION 146a5eb38 FUN_146a5eb38 body=98 status=ok
// SIG undefined FUN_146a5eb38(void)

void FUN_146a5eb38(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x3b) == '\x01') {
    if (param_2 != '\0') {
      FUN_1469a9da8(DAT_14c98e618,param_1 + 0x308,0);
    }
    if (*(int *)(param_1 + 0x2f0) == 0) {
      return;
    }
    plVar1 = *(longlong **)(param_1 + 0x2e8);
  }
  else {
    if (*(int *)(param_1 + 0x300) == 0) {
      return;
    }
    plVar1 = *(longlong **)(param_1 + 0x2f8);
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146a5eb8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))();
  return;
}



// FUNCTION 146a5eb9a FUN_146a5eb9a body=104 status=ok
// SIG undefined FUN_146a5eb9a(void)

void FUN_146a5eb9a(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)param_1 + 0x3b);
  FUN_1403d1e68();
  if ((char)param_1[0x67] != '\x01') {
    if (*(char *)(param_2 + 100) == '\x01') {
      if (*(byte *)((longlong)param_1 + 0x339) < 2) goto LAB_146a5ebc5;
      if (*(byte *)((longlong)param_1 + 0x339) == 2) goto LAB_146a5ebb9;
    }
    if ((char)param_1[0x67] != '\x03') goto LAB_146a5ebc5;
  }
LAB_146a5ebb9:
  (**(code **)(*param_1 + 0x250))(param_1);
LAB_146a5ebc5:
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x3b) == '\0')) {
    FUN_146a5eb38(param_1,1);
    return;
  }
  return;
}



// FUNCTION 146a5ec0c FUN_146a5ec0c body=94 status=ok
// SIG undefined FUN_146a5ec0c(void)

void FUN_146a5ec0c(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x33b) & 2) != 0) {
    return;
  }
  *(byte *)(param_1 + 0x33b) = *(byte *)(param_1 + 0x33b) | 2;
  FUN_1469a9da8(DAT_14c98e618,param_1 + 800,0);
  if ((*(int *)(param_1 + 0x2d0) != 0) && (*(longlong **)(param_1 + 0x2c8) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x60))();
  }
  FUN_146a5ec6a(param_1);
  return;
}



// FUNCTION 146a5ec6a FUN_146a5ec6a body=104 status=ok
// SIG undefined FUN_146a5ec6a(void)

void FUN_146a5ec6a(undefined8 param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ab4b0e(param_1,local_40);
  local_30 = 1;
  local_28 = 0;
  uStack_20 = 0;
  FUN_145ab4ba4(param_1,local_40);
  FUN_145ab4c3e(param_1);
  FUN_145ab4d7a(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5ecd4 FUN_146a5ecd4 body=72 status=ok
// SIG undefined FUN_146a5ecd4(void)

void FUN_146a5ecd4(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x33b) & 2) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x33b) = *(byte *)(param_1 + 0x33b) & 0xfd;
  if ((*(int *)(param_1 + 0x2e0) != 0) && (*(longlong **)(param_1 + 0x2d8) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x60))();
  }
  FUN_146a5ec6a(param_1);
  return;
}



// FUNCTION 146a5ed20 FUN_146a5ed20 body=7 status=ok
// SIG undefined FUN_146a5ed20(void)

void FUN_146a5ed20(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x338) = param_2;
  return;
}



// FUNCTION 146a5ed28 FUN_146a5ed28 body=7 status=ok
// SIG undefined FUN_146a5ed28(void)

void FUN_146a5ed28(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x339) = param_2;
  return;
}



// FUNCTION 146a5ed30 FUN_146a5ed30 body=7 status=ok
// SIG undefined FUN_146a5ed30(void)

void FUN_146a5ed30(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x33a) = param_2;
  return;
}



// FUNCTION 146a5ed56 FUN_146a5ed56 body=448 status=ok
// SIG undefined FUN_146a5ed56(void)

longlong * FUN_146a5ed56(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_146a5ed94:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146a5ed94;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_146a4b44c(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_146a5eed0;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_146a5eed0;
LAB_146a5ee33:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_146a5eed0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_146a5ee33;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_146a5eed0:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a5ef18 FUN_146a5ef18 body=212 status=ok
// SIG undefined FUN_146a5ef18(void)

undefined8 * FUN_146a5ef18(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149f10410;
  *(undefined2 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0x3f800000;
  param_1[0x66] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x3f800000;
  param_1[0x6b] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x364) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x7f] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 2;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) & 0xfb;
  return param_1;
}



// FUNCTION 146a5efec FUN_146a5efec body=184 status=ok
// SIG undefined FUN_146a5efec(void)

void FUN_146a5efec(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f10410;
  plVar3 = (longlong *)param_1[0x7f];
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
  FUN_1449db362(param_1 + 0x73);
  if (*(char *)((longlong)param_1 + 0x37c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  }
  FUN_1449db362(param_1 + 0x6d);
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 99);
  FUN_1449db362(param_1 + 0x52);
  FUN_1449db362(param_1 + 0x50);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146a5f0a4 FUN_146a5f0a4 body=962 status=ok
// SIG undefined FUN_146a5f0a4(void)

void FUN_146a5f0a4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x300);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x308);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x328);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x338);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x348);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x358);
  uVar1 = *(undefined4 *)(param_2 + 0x204);
  uVar2 = *(undefined4 *)(param_2 + 0x208);
  uVar3 = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x304) = uVar1;
  *(undefined4 *)(param_1 + 0x308) = uVar2;
  *(undefined4 *)(param_1 + 0x30c) = uVar3;
  *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_2 + 0x210);
  FUN_140a58be0(param_1 + 0x318,param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x248);
  uVar1 = *(undefined4 *)(param_2 + 0x23c);
  uVar2 = *(undefined4 *)(param_2 + 0x240);
  uVar3 = *(undefined4 *)(param_2 + 0x244);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x238);
  *(undefined4 *)(param_1 + 0x32c) = uVar1;
  *(undefined4 *)(param_1 + 0x330) = uVar2;
  *(undefined4 *)(param_1 + 0x334) = uVar3;
  *(undefined1 *)(param_1 + 0x33c) = *(undefined1 *)(param_2 + 0x24c);
  FUN_140a5aaa0(param_1 + 0x340,param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x270);
  uVar1 = *(undefined4 *)(param_2 + 0x264);
  uVar2 = *(undefined4 *)(param_2 + 0x268);
  uVar3 = *(undefined4 *)(param_2 + 0x26c);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x354) = uVar1;
  *(undefined4 *)(param_1 + 0x358) = uVar2;
  *(undefined4 *)(param_1 + 0x35c) = uVar3;
  *(undefined1 *)(param_1 + 0x364) = *(undefined1 *)(param_2 + 0x274);
  FUN_140a5aaa0(param_1 + 0x368,param_2 + 0x278);
  if ((undefined4 *)(param_2 + 0x1c0) != (undefined4 *)(param_1 + 0x378)) {
    if (*(char *)(param_2 + 0x1c4) == '\x01') {
      *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x1c0);
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x37c) != '\x01') goto LAB_146a5f22c;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x37c) = uVar5;
  }
LAB_146a5f22c:
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_2 + 500);
  *(undefined1 *)(param_1 + 0x388) = *(undefined1 *)(param_2 + 0x1f8);
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined1 *)(param_1 + 0x392) = *(undefined1 *)(param_2 + 0x288);
  local_30 = *(undefined8 *)(param_2 + 0x1a8);
  local_28 = *(longlong *)(param_2 + 0x1b0);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_146a5f468(param_1,&local_30);
  *(undefined2 *)(param_1 + 0x278) = *(undefined2 *)(param_2 + 0x1d8);
  FUN_1469eaea6(param_1 + 0x280,param_2 + 0x1e0);
  FUN_146a75c0a(param_1 + 0x290,param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_2 + 0x228);
  *(undefined1 *)(param_1 + 0x390) = *(undefined1 *)(param_2 + 0x22c);
  *(undefined1 *)(param_1 + 0x391) = *(undefined1 *)(param_2 + 0x230);
  FUN_1469fa47e(param_1 + 0x398,param_2 + 0x290);
  plVar7 = (longlong *)(*(longlong *)(param_2 + 0x1b8) + 0x930);
  if (*(char *)(param_2 + 0x2f8) != '\0') {
    plVar7 = (longlong *)(param_2 + 0x2e0);
  }
  lVar6 = *plVar7;
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *plVar7;
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x3a8) = lVar6;
  *(longlong *)(param_1 + 0x3b0) = plVar7[1];
  *(longlong *)(param_1 + 0x3b8) = plVar7[2];
  plVar7 = (longlong *)(*(longlong *)(param_2 + 0x1b8) + 0x900);
  if (*(char *)(param_2 + 0x2b8) != '\0') {
    plVar7 = (longlong *)(param_2 + 0x2a0);
  }
  lVar6 = *plVar7;
  if ((bVar4 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *plVar7;
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x3c0) = lVar6;
  *(longlong *)(param_1 + 0x3c8) = plVar7[1];
  *(longlong *)(param_1 + 0x3d0) = plVar7[2];
  plVar7 = (longlong *)(*(longlong *)(param_2 + 0x1b8) + 0x918);
  if (*(char *)(param_2 + 0x2d8) != '\0') {
    plVar7 = (longlong *)(param_2 + 0x2c0);
  }
  lVar6 = *plVar7;
  if ((bVar4 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *plVar7;
    }
  }
  *(longlong *)(param_1 + 0x3d8) = lVar6;
  *(longlong *)(param_1 + 0x3e0) = plVar7[1];
  *(longlong *)(param_1 + 1000) = plVar7[2];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a5f468 FUN_146a5f468 body=2967 status=ok
// SIG undefined FUN_146a5f468(void)

void FUN_146a5f468(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_f98 [32];
  undefined1 *local_f78;
  undefined1 local_f69;
  undefined1 local_f68 [8];
  longlong *local_f60;
  undefined1 local_f49;
  undefined8 local_f48;
  undefined1 local_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  longlong *local_f20;
  undefined8 local_f18;
  longlong *local_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined1 local_ef8;
  undefined1 local_ef0 [23];
  undefined1 local_ed9;
  undefined1 local_ed8 [8];
  longlong *local_ed0;
  undefined1 local_eb9;
  undefined1 local_eb8 [8];
  longlong *local_eb0;
  undefined8 local_ea0;
  undefined1 *puStack_e98;
  undefined4 local_e90;
  undefined1 local_e8c;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  longlong *local_e70;
  undefined8 local_e68;
  longlong *local_e60;
  undefined1 local_e51;
  undefined1 local_e50 [8];
  longlong *local_e48;
  undefined8 local_e38;
  longlong *local_e30;
  undefined8 local_e28;
  longlong *local_e20;
  undefined8 local_e18;
  longlong *local_e10;
  undefined8 local_e08;
  longlong *local_e00;
  undefined8 local_df8;
  longlong *local_df0;
  undefined8 local_de8;
  longlong *local_de0;
  undefined8 local_dd8;
  longlong local_dd0;
  undefined8 local_dc8;
  longlong *plStack_dc0;
  undefined1 local_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined1 local_da0 [88];
  undefined1 local_d48 [88];
  code *local_cf0;
  undefined4 local_ce8;
  undefined8 local_b48;
  longlong *local_b40;
  undefined4 local_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined1 local_b20;
  undefined1 local_b18 [80];
  undefined8 local_ac8;
  undefined1 local_ac0;
  undefined1 local_ab8 [248];
  undefined8 local_9c0 [3];
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined1 local_998;
  undefined1 local_990 [24];
  undefined4 local_978;
  undefined1 local_974;
  undefined8 local_900;
  longlong *local_8f8;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined1 local_724;
  undefined1 local_720 [88];
  code *local_6c8;
  undefined4 local_6c0;
  undefined4 uStack_6bc;
  undefined1 local_490 [440];
  undefined1 local_2d8 [192];
  undefined8 local_218;
  longlong *local_210;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f98;
  plVar4 = *(longlong **)(param_1 + 0x3f0);
  if (plVar4 != (longlong *)0x0) {
    local_dd8 = DAT_14c98dec8;
    local_dd0 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar4 + 0x240))(plVar4,&local_dd8);
  }
  if (*(char *)(param_1 + 0x37c) == '\x01') {
    uVar6 = *(uint *)(param_1 + 0x378);
  }
  else {
    uVar6 = (uint)*(byte *)(*(longlong *)(param_1 + 0x268) + 8);
  }
  if (uVar6 == 1) {
    FUN_140a562d0(&local_cf0);
    local_6c8 = FUN_146a60d5c;
    local_6c0 = 0;
    FUN_146a611b2(&local_cf0,param_1,&local_6c8);
    local_6c8 = FUN_146a61178;
    local_6c0 = 0;
    FUN_146a61266(&local_cf0,param_1,&local_6c8);
    local_6c8 = FUN_146a613e8;
    local_6c0 = 0;
    FUN_146a6131e(&local_cf0,param_1,&local_6c8);
    local_b38 = *(undefined4 *)(param_1 + 0x380);
    uVar8 = FUN_146a0a36e(&local_cf0,param_2);
    local_f78 = local_490;
    FUN_140a55c32(&local_6c8,"SBorder",".\\Runtime/Slate/Private/Widgets/Input/SCheckBox.cpp",0x234)
    ;
    lVar7 = CONCAT44(uStack_6bc,local_6c0);
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x3f8);
    *(code **)(param_1 + 0x3f0) = local_6c8;
    *(longlong *)(param_1 + 0x3f8) = lVar7;
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
    FUN_140a530e4(&local_6c8,&local_218,uVar8);
    local_900 = local_218;
    local_8f8 = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_210 + 1) = (int)local_210[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + 0x1e0,&local_900);
    plVar4 = local_8f8;
    if (local_8f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_8f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_8f8)(local_8f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_210 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar2 = (int *)((longlong)local_210 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_210 + 0x10))(local_210);
        }
      }
    }
    plVar4 = (longlong *)CONCAT44(uStack_6bc,local_6c0);
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
    FUN_140a59028(&local_cf0);
  }
  else if (uVar6 == 0) {
    FUN_140a5296a(&local_218);
    FUN_140a50426(local_2d8);
    lVar7 = FUN_140a52578(local_2d8);
    *(undefined4 *)(lVar7 + 0x48) = *(undefined4 *)(param_1 + 900);
    *(undefined1 *)(lVar7 + 0x4c) = 1;
    *(undefined4 *)(lVar7 + 0x40) = 2;
    *(undefined1 *)(lVar7 + 0x44) = 1;
    FUN_140a504fe(local_490);
    FUN_140a4fdf2(local_d48,0);
    FUN_140a53334(&local_6c8);
    local_cf0 = (code *)&LAB_146a60e9e;
    local_ce8 = 0;
    FUN_146a610c4(&local_6c8,param_1);
    local_f78 = &local_e51;
    FUN_140a554b8(local_e50,"SImage",".\\Runtime/Slate/Private/Widgets/Input/SCheckBox.cpp",0x213);
    FUN_140a52c70(local_e50,&local_e38,&local_6c8);
    local_e28 = local_e38;
    local_e20 = local_e30;
    if (local_e30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e30 + 1) = (int)local_e30[1] + 1;
      UNLOCK();
    }
    uVar8 = FUN_140a4fd40(local_d48,&local_e28);
    uVar8 = FUN_140a5058c(local_490,uVar8);
    FUN_140a4fdf2(local_da0,0);
    FUN_140a53334(&local_900);
    local_cf0 = FUN_146a60d5c;
    local_ce8 = 0;
    FUN_146a610c4(&local_900,param_1);
    local_ea0 = 0x3f800000;
    puStack_e98 = &DAT_3f8000003f800000;
    local_e90 = CONCAT22(local_e90._2_2_,2);
    local_e8c = 1;
    local_e88 = 0;
    uStack_e80 = 0;
    local_738 = 0x3f800000;
    uStack_734 = 0;
    uStack_730 = 0x3f800000;
    uStack_72c = 0x3f800000;
    local_728 = local_e90;
    local_724 = 1;
    FUN_144a450dc(local_720,&local_e88);
    FUN_1449db362(&local_e88);
    local_f78 = &local_eb9;
    FUN_140a554b8(local_eb8,"SImage",".\\Runtime/Slate/Private/Widgets/Input/SCheckBox.cpp",0x218);
    FUN_140a52c70(local_eb8,&local_e78,&local_900);
    local_e68 = local_e78;
    local_e60 = local_e70;
    if (local_e70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e70 + 1) = (int)local_e70[1] + 1;
      UNLOCK();
    }
    uVar9 = FUN_140a4fd40(local_da0,&local_e68);
    uVar8 = FUN_140a5058c(uVar8,uVar9);
    local_f78 = &local_ed9;
    FUN_140a536a8(local_ed8,"SOverlay",".\\Runtime/Slate/Private/Widgets/Input/SCheckBox.cpp",0x20f)
    ;
    FUN_140a4ff16(local_ed8,&local_e18,uVar8);
    local_e08 = local_e18;
    local_e00 = local_e10;
    if (local_e10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e10 + 1) = (int)local_e10[1] + 1;
      UNLOCK();
    }
    uVar8 = FUN_140a4fe8e(lVar7,&local_e08);
    uVar8 = FUN_140a52392(&local_218,uVar8);
    FUN_140a50426(local_9c0);
    local_f08 = 0;
    uStack_f00 = 0;
    local_ef8 = 1;
    local_cf0 = FUN_146a61178;
    local_ce8 = 0;
    FUN_146a7afe6(local_ef0,param_1);
    local_9a8 = (undefined4)local_f08;
    uStack_9a4 = local_f08._4_4_;
    uStack_9a0 = (undefined4)uStack_f00;
    uStack_99c = uStack_f00._4_4_;
    local_998 = local_ef8;
    FUN_144a450dc(local_990,local_ef0);
    FUN_1449db362(local_ef0);
    local_978 = 2;
    local_974 = 1;
    FUN_140a562d0(&local_cf0);
    local_f48 = FUN_141319416();
    local_f40 = 1;
    local_f38 = 0;
    uStack_f30 = 0;
    local_ac0 = 1;
    local_ac8 = local_f48;
    FUN_144a450dc(local_ab8,&local_f38);
    FUN_1449db362(&local_f38);
    local_dc8 = 0;
    plStack_dc0 = (longlong *)0x0;
    local_db8 = 1;
    local_db0 = 0;
    uStack_da8 = 0;
    local_b30 = 0;
    uStack_b28 = 0;
    local_b20 = 1;
    FUN_144a450dc(local_b18,&local_db0);
    FUN_1449db362(&local_db0);
    plVar1 = local_b40;
    local_b48 = *param_2;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_b40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        puVar5 = (undefined8 *)*local_b40;
        local_b40 = plVar4;
        (*(code *)*puVar5)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = local_b40;
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          plVar4 = local_b40;
        }
      }
    }
    local_b40 = plVar4;
    local_f78 = &local_f49;
    FUN_140a55c32(&local_dc8,"SBorder",".\\Runtime/Slate/Private/Widgets/Input/SCheckBox.cpp",0x222)
    ;
    if (plStack_dc0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_dc0 + 1) = (int)plStack_dc0[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x3f8);
    *(undefined8 *)(param_1 + 0x3f0) = local_dc8;
    *(longlong **)(param_1 + 0x3f8) = plStack_dc0;
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
    FUN_140a530e4(&local_dc8,&local_f28,&local_cf0);
    local_f18 = local_f28;
    local_f10 = local_f20;
    if (local_f20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f20 + 1) = (int)local_f20[1] + 1;
      UNLOCK();
    }
    uVar9 = FUN_140a4fe8e(local_9c0,&local_f18);
    uVar8 = FUN_140a52392(uVar8,uVar9);
    local_f78 = &local_f69;
    FUN_140a541dc(local_f68,"SHorizontalBox",".\\Runtime/Slate/Private/Widgets/Input/SCheckBox.cpp",
                  0x209);
    FUN_140a50ec6(local_f68,&local_df8,uVar8);
    local_de8 = local_df8;
    local_de0 = local_df0;
    if (local_df0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_df0 + 1) = (int)local_df0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + 0x1e0,&local_de8);
    plVar4 = local_de0;
    if (local_de0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_de0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_de0)(local_de0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_df0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_df0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_df0)(local_df0);
        LOCK();
        piVar2 = (int *)((longlong)local_df0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_df0 + 0x10))(local_df0);
        }
      }
    }
    if (local_f60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f60 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_f60)(local_f60);
        LOCK();
        piVar2 = (int *)((longlong)local_f60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_f60 + 0x10))(local_f60);
        }
      }
    }
    plVar4 = local_f10;
    if (local_f10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_f10)(local_f10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_f20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f20 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_f20)(local_f20);
        LOCK();
        piVar2 = (int *)((longlong)local_f20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_f20 + 0x10))(local_f20);
        }
      }
    }
    plVar4 = plStack_dc0;
    if (plStack_dc0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_dc0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_dc0)(plStack_dc0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_140a59028(&local_cf0);
    FUN_140a509a6(local_9c0);
    plVar4 = local_e00;
    if (local_e00 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e00 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e00)(local_e00);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_e10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_e10 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_e10)(local_e10);
        LOCK();
        piVar2 = (int *)((longlong)local_e10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e10 + 0x10))(local_e10);
        }
      }
    }
    if (local_ed0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_ed0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_ed0)(local_ed0);
        LOCK();
        piVar2 = (int *)((longlong)local_ed0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_ed0 + 0x10))(local_ed0);
        }
      }
    }
    plVar4 = local_e60;
    if (local_e60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e60)(local_e60);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_e70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_e70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_e70)(local_e70);
        LOCK();
        piVar2 = (int *)((longlong)local_e70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e70 + 0x10))(local_e70);
        }
      }
    }
    if (local_eb0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_eb0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_eb0)(local_eb0);
        LOCK();
        piVar2 = (int *)((longlong)local_eb0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_eb0 + 0x10))(local_eb0);
        }
      }
    }
    FUN_140a55a86(&local_900);
    FUN_1415b5e50(local_da0);
    plVar4 = local_e20;
    if (local_e20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e20)(local_e20);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_e30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_e30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_e30)(local_e30);
        LOCK();
        piVar2 = (int *)((longlong)local_e30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e30 + 0x10))(local_e30);
        }
      }
    }
    if (local_e48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_e48 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_e48)(local_e48);
        LOCK();
        piVar2 = (int *)((longlong)local_e48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e48 + 0x10))(local_e48);
        }
      }
    }
    FUN_140a55a86(&local_6c8);
    FUN_1415b5e50(local_d48);
    FUN_1415b5e16(local_490);
    FUN_140a509a6(local_2d8);
    FUN_145ab33da(&local_218);
    if (*(char *)(param_1 + 0x388) == '\x01') {
      FUN_146a74a1c(local_9c0[0]);
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
  if ((local_60 ^ (ulonglong)auStack_f98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a60008 FUN_146a60008 body=274 status=ok
// SIG undefined FUN_146a60008(void)

undefined1 *
FUN_146a60008(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  cVar1 = (**(code **)(*DAT_14c98e618 + 0xb0))();
  if (cVar1 != '\0') {
    FUN_14171f816(param_1,param_2,param_3,param_4);
    return param_2;
  }
  *(undefined1 *)(param_1 + 0x270) = 1;
  if (*(char *)(param_1 + 0x391) == '\x01') {
    FUN_146a53838(param_1);
    if (((*(int *)(param_1 + 0x288) == 0) || (*(longlong **)(param_1 + 0x280) == (longlong *)0x0))
       || (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))(), cVar1 == '\0')) {
      cVar1 = *(char *)(param_1 + 0x278);
    }
    else {
      if (*(int *)(param_1 + 0x288) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x280);
      }
      cVar1 = (**(code **)(*plVar3 + 0x58))();
      *(char *)(param_1 + 0x278) = cVar1;
    }
    if (cVar1 == '\x01') {
      lVar2 = 0x3c0;
    }
    else {
      if (cVar1 != '\0') goto LAB_146a60062;
      lVar2 = 0x3d8;
    }
    FUN_1469a9da8(DAT_14c98e618,param_1 + lVar2,0);
  }
LAB_146a60062:
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a6011a FUN_146a6011a body=265 status=ok
// SIG undefined FUN_146a6011a(void)

undefined1 * FUN_146a6011a(longlong param_1,undefined1 *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  
  cVar2 = (**(code **)(*DAT_14c98e618 + 0xb0))();
  if (cVar2 != '\0') {
    uVar5 = 0;
    goto LAB_146a60140;
  }
  bVar1 = *(byte *)(param_1 + 0x270);
  *(undefined1 *)(param_1 + 0x270) = 0;
  uVar5 = 1;
  if ((*(char *)(param_1 + 0x391) != '\x02') && ((*(char *)(param_1 + 0x391) == '\0' & bVar1) == 0))
  goto LAB_146a60140;
  FUN_146a53838(param_1);
  if ((*(int *)(param_1 + 0x288) == 0) || (*(longlong **)(param_1 + 0x280) == (longlong *)0x0)) {
LAB_146a601e4:
    cVar2 = *(char *)(param_1 + 0x278);
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))();
    if (cVar2 == '\0') goto LAB_146a601e4;
    if (*(int *)(param_1 + 0x288) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x280);
    }
    cVar2 = (**(code **)(*plVar4 + 0x58))();
    *(char *)(param_1 + 0x278) = cVar2;
  }
  if (cVar2 == '\x01') {
    lVar3 = 0x3c0;
  }
  else {
    if (cVar2 != '\0') goto LAB_146a60140;
    lVar3 = 0x3d8;
  }
  FUN_1469a9da8(DAT_14c98e618,param_1 + lVar3,0);
LAB_146a60140:
  *param_2 = uVar5;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a60224 FUN_146a60224 body=1508 status=ok
// SIG undefined FUN_146a60224(void)

undefined1 * FUN_146a60224(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  undefined8 *local_250;
  undefined4 *local_248;
  undefined1 local_240;
  undefined8 *local_238;
  undefined1 *local_230;
  undefined1 local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined1 local_1a2;
  undefined1 local_1a1;
  undefined1 local_1a0 [8];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_180;
  undefined1 local_178 [136];
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar9 = *(longlong *)(param_4 + 0x40);
  plVar8 = *(longlong **)(param_4 + 0x50);
  if (plVar8 == (longlong *)0x0) {
    if (lVar9 != DAT_14c966e98) {
LAB_146a60333:
      if (lVar9 == DAT_14c966fa0) {
        bVar10 = true;
        plVar8 = (longlong *)0x0;
LAB_146a60346:
        if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)
           ) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
        }
        if (!bVar10) {
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar8)();
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
        }
        if (cVar5 != '\0') {
          if (*(longlong *)(param_4 + 0x18) == 0) {
            local_1a0[0] = DAT_14c96b238;
            local_78 = 0;
            local_70 = 0x400000000;
            local_68 = 0;
            local_60 = 0;
            uStack_58 = 0;
            local_50 = 0;
            uStack_48 = 0;
          }
          else {
            FUN_1413f6ca8();
          }
          uVar7 = DAT_14c98e618;
          local_1a1 = 0;
          local_1f0 = DAT_14c84635c;
          local_1f4 = 5;
          local_200 = *(undefined8 *)(param_4 + 0x20);
          if (*(int *)(param_1 + 0x3a0) == 0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            plVar8 = *(longlong **)(param_1 + 0x398);
          }
          (**(code **)(*plVar8 + 0x58))();
          local_218 = *(longlong **)(param_1 + 0x10);
          if (local_218 == (longlong *)0x0) {
            local_218 = (longlong *)0x0;
            local_220 = 0;
          }
          else {
            iVar6 = (int)local_218[1];
            local_220 = 0;
            do {
              if (iVar6 == 0) {
                local_218 = (longlong *)0x0;
                goto LAB_146a605cc;
              }
              LOCK();
              iVar3 = (int)local_218[1];
              bVar10 = iVar6 == iVar3;
              if (bVar10) {
                *(int *)(local_218 + 1) = iVar6 + 1;
                iVar3 = iVar6;
              }
              iVar6 = iVar3;
              UNLOCK();
            } while (!bVar10);
            local_220 = *(undefined8 *)(param_1 + 8);
          }
LAB_146a605cc:
          local_228 = 1;
          local_230 = &local_1a2;
          local_238 = &local_1f0;
          local_240 = 1;
          local_248 = &local_1f4;
          local_250 = &local_200;
          local_258 = local_210;
          FUN_1428f4aae(uVar7,local_1e8,&local_220,local_1a0);
          if (local_1e0 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_1e0 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_1e0)(local_1e0);
              LOCK();
              piVar2 = (int *)((longlong)local_1e0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_1e0 + 0x10))(local_1e0);
              }
            }
          }
          plVar8 = local_218;
          if (local_218 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_218 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_218)(local_218);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          if (local_208 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_208 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_208)(local_208);
              LOCK();
              piVar2 = (int *)((longlong)local_208 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_208 + 0x10))(local_208);
              }
            }
          }
          *param_2 = 1;
          param_2[0x20] = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
          memset(param_2 + 0x28,0,0x88);
          *(undefined4 *)(param_2 + 0xb0) = 0x20702;
          param_2[0xb4] = 0;
          FUN_1447fa21a(local_1a0);
          goto LAB_146a6041d;
        }
      }
      goto LAB_146a6053f;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    lVar4 = DAT_14c966e98;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)();
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    if (lVar9 != lVar4) {
      lVar9 = *(longlong *)(param_4 + 0x40);
      plVar8 = *(longlong **)(param_4 + 0x50);
      if (plVar8 == (longlong *)0x0) goto LAB_146a60333;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (lVar9 == DAT_14c966fa0) {
        bVar10 = false;
        goto LAB_146a60346;
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
LAB_146a6053f:
      *param_2 = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
      goto LAB_146a6041d;
    }
  }
  *(undefined1 *)(param_1 + 0x270) = 1;
  if (*(char *)(param_4 + 100) == '\x01') {
    cVar5 = *(char *)(param_1 + 0x390);
    if ((cVar5 != '\0') && (cVar5 != '\x02')) {
      if (cVar5 != '\x01') goto LAB_146a602bb;
      goto LAB_146a606f2;
    }
LAB_146a602c8:
    local_1a0[0] = 1;
    local_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    memset(local_178,0,0x88);
    local_f0 = 0x20702;
    local_ec = 0;
    local_1c0 = *(longlong *)(param_1 + 0x10);
    if (local_1c0 == 0) {
LAB_146a60370:
      local_1c8 = 0;
      local_1c0 = 0;
    }
    else {
      iVar6 = *(int *)(local_1c0 + 8);
      do {
        if (iVar6 == 0) goto LAB_146a60370;
        LOCK();
        iVar3 = *(int *)(local_1c0 + 8);
        bVar10 = iVar6 == iVar3;
        if (bVar10) {
          *(int *)(local_1c0 + 8) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar10);
      local_1c8 = *(undefined8 *)(param_1 + 8);
    }
    uVar7 = FUN_140592a6e(local_1a0);
    local_1d0 = *(longlong *)(param_1 + 0x10);
    if (local_1d0 == 0) {
      local_1d0 = 0;
      local_1d8 = 0;
    }
    else {
      iVar6 = *(int *)(local_1d0 + 8);
      local_1d8 = 0;
      do {
        if (iVar6 == 0) {
          local_1d0 = 0;
          goto LAB_146a603eb;
        }
        LOCK();
        iVar3 = *(int *)(local_1d0 + 8);
        bVar10 = iVar6 == iVar3;
        if (bVar10) {
          *(int *)(local_1d0 + 8) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar10);
      local_1d8 = *(undefined8 *)(param_1 + 8);
    }
LAB_146a603eb:
    uVar7 = FUN_140592b68(uVar7,&local_1d8,0,0);
    FUN_1403d4c6e(param_2,uVar7);
  }
  else {
LAB_146a602bb:
    if (*(char *)(param_1 + 0x38c) != '\x01') goto LAB_146a602c8;
LAB_146a606f2:
    FUN_146a53838(param_1);
    if (((*(int *)(param_1 + 0x288) == 0) || (*(longlong **)(param_1 + 0x280) == (longlong *)0x0))
       || (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))(), cVar5 == '\0')) {
      cVar5 = *(char *)(param_1 + 0x278);
    }
    else {
      if (*(int *)(param_1 + 0x288) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(param_1 + 0x280);
      }
      cVar5 = (**(code **)(*plVar8 + 0x58))();
      *(char *)(param_1 + 0x278) = cVar5;
    }
    if (cVar5 == '\x01') {
      lVar9 = 0x3c0;
LAB_146a60758:
      FUN_1469a9da8(DAT_14c98e618,lVar9 + param_1,0);
    }
    else if (cVar5 == '\0') {
      lVar9 = 0x3d8;
      goto LAB_146a60758;
    }
    local_1a0[0] = 1;
    local_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    memset(local_178,0,0x88);
    local_f0 = 0x20702;
    local_ec = 0;
    local_1b0 = *(longlong *)(param_1 + 0x10);
    if (local_1b0 == 0) {
LAB_146a607c8:
      local_1b8 = 0;
      local_1b0 = 0;
    }
    else {
      iVar6 = *(int *)(local_1b0 + 8);
      do {
        if (iVar6 == 0) goto LAB_146a607c8;
        LOCK();
        iVar3 = *(int *)(local_1b0 + 8);
        bVar10 = iVar6 == iVar3;
        if (bVar10) {
          *(int *)(local_1b0 + 8) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar10);
      local_1b8 = *(undefined8 *)(param_1 + 8);
    }
    uVar7 = FUN_140592b68(local_1a0,&local_1b8,0,0);
    FUN_1403d4c6e(param_2,uVar7);
  }
  FUN_14493db24(local_1a0);
LAB_146a6041d:
  if ((local_40 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a6080a FUN_146a6080a body=23 status=ok
// SIG undefined FUN_146a6080a(void)

undefined8 FUN_146a6080a(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x58))();
  return param_2;
}



// FUNCTION 146a60822 FUN_146a60822 body=801 status=ok
// SIG undefined FUN_146a60822(void)

undefined1 * FUN_146a60822(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_78;
  undefined1 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(char *)(param_4 + 100) == '\x01') {
    bVar3 = *(byte *)(param_1 + 0x390);
    uVar7 = (uint)bVar3;
    if (bVar3 != 0) {
      if (bVar3 == 1) goto LAB_146a608ae;
      if (bVar3 != 2) goto LAB_146a6088e;
      uVar7 = 3;
    }
LAB_146a608a1:
    if (*(char *)(param_1 + 0x270) == '\x01') goto LAB_146a608ae;
LAB_146a60a46:
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_146a60a78;
  }
LAB_146a6088e:
  uVar7 = *(uint *)(param_1 + 0x38c) & 0xff;
  if (((char)*(uint *)(param_1 + 0x38c) == '\x03') || (uVar7 == 0)) goto LAB_146a608a1;
LAB_146a608ae:
  lVar5 = *(longlong *)(param_4 + 0x40);
  plVar6 = *(longlong **)(param_4 + 0x50);
  if (plVar6 == (longlong *)0x0) {
    if (lVar5 != DAT_14c966e98 && *(char *)(param_4 + 100) == '\0') goto LAB_146a60a46;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    bVar8 = lVar5 != DAT_14c966e98;
    bVar3 = *(byte *)(param_4 + 100);
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
    if (bVar8 && (bVar3 & 1) == 0) goto LAB_146a60a46;
  }
  *(undefined1 *)(param_1 + 0x270) = 0;
  if (uVar7 != 1) {
    fVar10 = param_3[8] * 0.0;
    fVar11 = param_3[7] * 0.0;
    fVar9 = param_3[10] * 0.0;
    fVar12 = param_3[9] * 0.0;
    local_128 = CONCAT44(fVar9 + fVar10 + param_3[0xc],fVar12 + fVar11 + param_3[0xb]);
    local_120 = CONCAT44(*param_3 * param_3[8] + fVar9,*param_3 * param_3[7] + fVar12);
    uStack_118 = CONCAT44(param_3[10] * param_3[1] + fVar10,param_3[1] * param_3[9] + fVar11);
    cVar4 = FUN_1402b2a42();
    if (cVar4 != '\0') {
      if (uVar7 != 2) {
        cVar4 = FUN_140591fd6(param_1);
        if (cVar4 == '\0') goto LAB_146a609e1;
      }
      FUN_146a53838(param_1);
      if ((*(int *)(param_1 + 0x288) == 0) || (*(longlong **)(param_1 + 0x280) == (longlong *)0x0))
      {
LAB_146a60b05:
        cVar4 = *(char *)(param_1 + 0x278);
      }
      else {
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))();
        if (cVar4 == '\0') goto LAB_146a60b05;
        if (*(int *)(param_1 + 0x288) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x280);
        }
        cVar4 = (**(code **)(*plVar6 + 0x58))();
        *(char *)(param_1 + 0x278) = cVar4;
      }
      if (cVar4 == '\x01') {
        lVar5 = 0x3c0;
      }
      else {
        if (cVar4 != '\0') goto LAB_146a609e1;
        lVar5 = 0x3d8;
      }
      FUN_1469a9da8(DAT_14c98e618,param_1 + lVar5,0);
    }
  }
LAB_146a609e1:
  local_128 = CONCAT71(local_128._1_7_,1);
  local_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  memset(local_100,0,0x88);
  local_78 = 0x20702;
  local_f0 = 0;
  uStack_e8 = 0;
  local_74 = 1;
  FUN_1403d4c6e(param_2,&local_128);
  FUN_14493db24(&local_128);
LAB_146a60a78:
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a60b44 FUN_146a60b44 body=59 status=ok
// SIG undefined FUN_146a60b44(void)

void FUN_146a60b44(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1469a9da8(DAT_14c98e618,param_1 + 0x3a8,0);
  FUN_1403d1d7a(param_1,param_2,param_3);
  return;
}



// FUNCTION 146a60b80 FUN_146a60b80 body=68 status=ok
// SIG undefined FUN_146a60b80(void)

void FUN_146a60b80(longlong param_1,longlong param_2)

{
  FUN_1403d1e68();
  if (*(int *)(param_1 + 0x38c) != 1) {
    if (*(char *)(param_2 + 100) == '\x01') {
      if (*(byte *)(param_1 + 0x390) < 2) {
        return;
      }
      if (*(byte *)(param_1 + 0x390) == 2) goto LAB_146a60b9c;
    }
    if ((char)*(int *)(param_1 + 0x38c) != '\x03') {
      return;
    }
  }
LAB_146a60b9c:
  *(undefined1 *)(param_1 + 0x270) = 0;
  return;
}



// FUNCTION 146a60bc8 FUN_146a60bc8 body=404 status=ok
// SIG undefined FUN_146a60bc8(void)

float * FUN_146a60bc8(longlong param_1,float *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar4 = (float *)FUN_1400c0682(param_1 + 0x328);
  fVar7 = pfVar4[1];
  fVar8 = pfVar4[2];
  fVar9 = pfVar4[3];
  cVar3 = *(char *)(pfVar4 + 4);
  if ((cVar3 != '\x04' || (fVar9 != 1.0 || fVar8 != 1.0)) || (fVar7 != 0.0 || *pfVar4 != 1.0)) {
    uVar2 = *(undefined2 *)((longlong)pfVar4 + 0x12);
    uVar1 = *(undefined1 *)((longlong)pfVar4 + 0x11);
    *param_2 = *pfVar4;
    param_2[1] = fVar7;
    param_2[2] = fVar8;
    param_2[3] = fVar9;
    *(char *)(param_2 + 4) = cVar3;
    *(undefined1 *)((longlong)param_2 + 0x11) = uVar1;
    *(undefined2 *)((longlong)param_2 + 0x12) = uVar2;
    return param_2;
  }
  if (((*(int *)(param_1 + 0x288) == 0) || (*(longlong **)(param_1 + 0x280) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))(), cVar3 == '\0')) {
    cVar3 = *(char *)(param_1 + 0x278);
  }
  else {
    if (*(int *)(param_1 + 0x288) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x280);
    }
    cVar3 = (**(code **)(*plVar6 + 0x58))();
    *(char *)(param_1 + 0x278) = cVar3;
  }
  if (cVar3 == '\x01') {
    if (*(char *)(param_1 + 0x270) == '\x01') {
      lVar5 = 0x8c4;
LAB_146a60ce0:
      pfVar4 = (float *)(lVar5 + *(longlong *)(param_1 + 0x268));
    }
    else if (*(char *)(param_1 + 0x3b) == '\x01') {
      pfVar4 = (float *)(*(longlong *)(param_1 + 0x268) + 0x8b0);
    }
    else {
      pfVar4 = (float *)(*(longlong *)(param_1 + 0x268) + 0x89c);
    }
  }
  else {
    if (cVar3 != '\0') {
      lVar5 = *(longlong *)(param_1 + 0x268);
      param_2[4] = *(float *)(lVar5 + 0x8e8);
      fVar7 = *(float *)(lVar5 + 0x8d8);
      fVar8 = *(float *)(lVar5 + 0x8dc);
      fVar9 = *(float *)(lVar5 + 0x8e0);
      fVar10 = *(float *)(lVar5 + 0x8e4);
      goto LAB_146a60cf0;
    }
    if (*(char *)(param_1 + 0x270) == '\x01') {
      lVar5 = 0x888;
      goto LAB_146a60ce0;
    }
    if (*(char *)(param_1 + 0x3b) == '\x01') {
      pfVar4 = (float *)(*(longlong *)(param_1 + 0x268) + 0x874);
    }
    else {
      pfVar4 = (float *)(*(longlong *)(param_1 + 0x268) + 0x860);
    }
  }
  param_2[4] = pfVar4[4];
  fVar7 = *pfVar4;
  fVar8 = pfVar4[1];
  fVar9 = pfVar4[2];
  fVar10 = pfVar4[3];
LAB_146a60cf0:
  *param_2 = fVar7;
  param_2[1] = fVar8;
  param_2[2] = fVar9;
  param_2[3] = fVar10;
  return param_2;
}



// FUNCTION 146a60d5c FUN_146a60d5c body=322 status=ok
// SIG undefined FUN_146a60d5c(void)

longlong FUN_146a60d5c(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0x288) == 0) || (*(longlong **)(param_1 + 0x280) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))(), cVar2 == '\0')) {
    cVar2 = *(char *)(param_1 + 0x278);
  }
  else {
    if (*(int *)(param_1 + 0x288) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x280);
    }
    cVar2 = (**(code **)(*plVar4 + 0x58))();
    *(char *)(param_1 + 0x278) = cVar2;
  }
  cVar1 = *(char *)(param_1 + 0x270);
  if (cVar2 == '\x01') {
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x3b) == '\x01') {
        if (*(longlong *)(param_1 + 0x2c0) != 0) {
          return *(longlong *)(param_1 + 0x2c0);
        }
        lVar3 = 0x2d0;
      }
      else {
        if (*(longlong *)(param_1 + 0x2b8) != 0) {
          return *(longlong *)(param_1 + 0x2b8);
        }
        lVar3 = 0x220;
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        return *(longlong *)(param_1 + 0x2c8);
      }
      lVar3 = 0x380;
    }
  }
  else if (cVar2 == '\0') {
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x3b) == '\x01') {
        if (*(longlong *)(param_1 + 0x2a8) != 0) {
          return *(longlong *)(param_1 + 0x2a8);
        }
        lVar3 = 0xc0;
      }
      else {
        if (*(longlong *)(param_1 + 0x2a0) != 0) {
          return *(longlong *)(param_1 + 0x2a0);
        }
        lVar3 = 0x10;
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x2b0) != 0) {
        return *(longlong *)(param_1 + 0x2b0);
      }
      lVar3 = 0x170;
    }
  }
  else if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x3b) == '\x01') {
      if (*(longlong *)(param_1 + 0x2d8) != 0) {
        return *(longlong *)(param_1 + 0x2d8);
      }
      lVar3 = 0x4e0;
    }
    else {
      if (*(longlong *)(param_1 + 0x2d0) != 0) {
        return *(longlong *)(param_1 + 0x2d0);
      }
      lVar3 = 0x430;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      return *(longlong *)(param_1 + 0x2e0);
    }
    lVar3 = 0x590;
  }
  return lVar3 + *(longlong *)(param_1 + 0x268);
}



// FUNCTION 146a60eee FUN_146a60eee body=83 status=ok
// SIG undefined FUN_146a60eee(void)

undefined1 FUN_146a60eee(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x288) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x280);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x278) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x278);
}



// FUNCTION 146a60f42 FUN_146a60f42 body=80 status=ok
// SIG undefined FUN_146a60f42(void)

void FUN_146a60f42(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1 + 8,0,0,0x10);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  *param_1 = *param_2;
  param_1[1] = 1;
  return;
}



// FUNCTION 146a60f92 FUN_146a60f92 body=47 status=ok
// SIG undefined FUN_146a60f92(void)

void FUN_146a60f92(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x278) = *param_2;
  FUN_1469eaea6(param_1 + 0x280,param_2 + 4);
  FUN_1449db362(param_2 + 4);
  return;
}



// FUNCTION 146a60fc2 FUN_146a60fc2 body=93 status=ok
// SIG undefined FUN_146a60fc2(void)

void FUN_146a60fc2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x3f0);
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 0x240))(plVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a61020 FUN_146a61020 body=163 status=ok
// SIG undefined FUN_146a61020(void)

void FUN_146a61020(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  longlong local_380;
  undefined1 local_378 [440];
  undefined8 local_1c0;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  *(longlong *)(param_1 + 0x268) = param_2;
  if (param_2 == 0) {
    FUN_1469f91ec(local_378);
    *(undefined8 *)(param_1 + 0x268) = local_1c0;
    FUN_1469f9dde(local_378);
  }
  puVar1 = (undefined8 *)FUN_146a8b2e8(*(undefined8 *)(param_1 + 0x3f0));
  local_388 = *puVar1;
  local_380 = puVar1[1];
  if (local_380 != 0) {
    LOCK();
    *(int *)(local_380 + 8) = *(int *)(local_380 + 8) + 1;
    UNLOCK();
  }
  FUN_146a5f468(param_1,&local_388);
  if ((local_18 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a610c4 FUN_146a610c4 body=178 status=ok
// SIG undefined FUN_146a610c4(void)

longlong FUN_146a610c4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_146a7ab48(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1a8) = local_40;
  FUN_144a450dc(param_1 + 0x1b8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a61178 FUN_146a61178 body=58 status=ok
// SIG undefined FUN_146a61178(void)

undefined8 * FUN_146a61178(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x310) == '\x01') {
    puVar2 = (undefined8 *)FUN_140133f88(param_1 + 0x300);
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x640);
  }
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a611b2 FUN_146a611b2 body=178 status=ok
// SIG undefined FUN_146a611b2(void)

longlong FUN_146a611b2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_146a7ab48(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x230) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x228) = local_40;
  FUN_144a450dc(param_1 + 0x238,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a61266 FUN_146a61266 body=183 status=ok
// SIG undefined FUN_146a61266(void)

longlong FUN_146a61266(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a7afe6(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a58be0(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x1d0) = local_38;
  *(undefined4 *)(param_1 + 0x1c0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1c4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1c8) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1cc) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x1d8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6131e FUN_146a6131e body=200 status=ok
// SIG undefined FUN_146a6131e(void)

longlong FUN_146a6131e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146a7b4b4(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x2d0) = local_38;
  *(undefined4 *)(param_1 + 0x2c0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2c4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2c8) = uStack_40;
  *(undefined4 *)(param_1 + 0x2cc) = uStack_3c;
  *(undefined1 *)(param_1 + 0x2d4) = local_34;
  FUN_144a450dc(param_1 + 0x2d8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a613e8 FUN_146a613e8 body=64 status=ok
// SIG undefined FUN_146a613e8(void)

undefined8 * FUN_146a613e8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x364) == '\x01') {
    puVar2 = (undefined8 *)FUN_1400c0682(param_1 + 0x350);
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x8ec);
  }
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar2 + 2);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a61428 FUN_146a61428 body=7 status=ok
// SIG undefined FUN_146a61428(void)

void FUN_146a61428(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38c) = param_2;
  return;
}



// FUNCTION 146a61430 FUN_146a61430 body=7 status=ok
// SIG undefined FUN_146a61430(void)

void FUN_146a61430(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x390) = param_2;
  return;
}



// FUNCTION 146a61438 FUN_146a61438 body=7 status=ok
// SIG undefined FUN_146a61438(void)

void FUN_146a61438(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x391) = param_2;
  return;
}



// FUNCTION 146a61440 FUN_146a61440 body=461 status=ok
// SIG undefined FUN_146a61440(void)

longlong * FUN_146a61440(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x78,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_146a6147e:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146a6147e;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_146a61610(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_146a615ba;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_146a615ba;
LAB_146a6151d:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_146a615ba;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_146a6151d;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_146a615ba:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a61610 FUN_146a61610 body=154 status=ok
// SIG undefined FUN_146a61610(void)

undefined8 * FUN_146a61610(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,2);
  *param_1 = &PTR_FUN_149f11290;
  param_1[0xd] = &PTR_FUN_149f11380;
  param_1[0xe] = &PTR_LAB_149f113a0;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a616ac FUN_146a616ac body=4214 status=ok
// SIG undefined FUN_146a616ac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146a616ac(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined1 auStack_1418 [32];
  undefined1 *local_13f8;
  uint local_13e4;
  undefined8 local_13e0;
  longlong local_13d8;
  longlong local_13d0;
  undefined1 local_13c1;
  longlong local_13c0;
  longlong *local_13b8;
  undefined1 local_13a1;
  longlong local_13a0;
  longlong *local_1398;
  undefined1 local_1381;
  undefined1 local_1380 [8];
  longlong *local_1378;
  undefined1 local_1361;
  longlong local_1360;
  longlong *local_1358;
  undefined8 local_1348;
  undefined1 *puStack_1340;
  undefined4 local_1338;
  undefined1 local_1334;
  undefined8 local_1330;
  undefined8 uStack_1328;
  longlong local_1320;
  undefined1 local_1318;
  undefined8 local_1310;
  undefined8 uStack_1308;
  undefined2 local_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  longlong *local_12e0;
  undefined8 local_12d8;
  longlong *local_12d0;
  undefined1 local_12c1;
  longlong local_12c0;
  longlong *local_12b8;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  uint local_1298;
  undefined1 local_1294;
  undefined8 local_1290;
  undefined8 uStack_1288;
  longlong local_1280;
  undefined1 local_1278;
  undefined8 local_1270;
  undefined8 uStack_1268;
  undefined2 local_1260;
  undefined8 local_1258;
  undefined8 uStack_1250;
  undefined8 local_1248;
  longlong *local_1240;
  undefined8 local_1238;
  longlong *local_1230;
  undefined8 local_1228;
  undefined8 local_1220;
  undefined1 local_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  longlong *local_11f8;
  undefined8 local_11f0;
  longlong *local_11e8;
  undefined4 local_11e0;
  undefined4 uStack_11dc;
  undefined4 uStack_11d8;
  undefined4 uStack_11d4;
  undefined1 local_11d0;
  undefined8 local_11c8;
  undefined8 uStack_11c0;
  undefined4 local_11b8;
  undefined1 local_11b4;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 local_11a0;
  longlong *local_1198;
  undefined2 local_1190;
  undefined1 local_118e;
  undefined1 local_1188 [16];
  undefined1 local_1178;
  undefined8 local_1170;
  undefined8 uStack_1168;
  undefined1 local_1160 [16];
  undefined1 local_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined4 local_1138;
  undefined4 uStack_1134;
  undefined4 uStack_1130;
  undefined4 uStack_112c;
  undefined4 uStack_1128;
  undefined1 uStack_1124;
  undefined8 local_1120;
  undefined4 local_1118;
  undefined4 local_1108;
  undefined4 uStack_1104;
  undefined4 uStack_1100;
  undefined4 uStack_10fc;
  undefined4 uStack_10f8;
  undefined1 uStack_10f4;
  undefined8 local_10f0;
  undefined4 local_10e8;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined1 local_10c8;
  undefined8 local_10c0;
  undefined8 uStack_10b8;
  longlong *local_10a8;
  undefined4 local_10a0;
  undefined1 local_1098;
  undefined8 local_1090;
  undefined4 local_1088;
  undefined8 local_1080;
  longlong *local_1078;
  undefined4 local_1070;
  undefined1 local_106c;
  undefined8 local_1068;
  undefined4 local_1060;
  undefined1 local_1058 [72];
  undefined4 local_1010;
  undefined1 local_100c;
  undefined1 local_1000 [24];
  undefined8 local_fe8;
  undefined8 local_fe0;
  undefined1 local_fd8;
  undefined1 local_fd0 [24];
  undefined4 local_fb8;
  undefined1 local_fb4;
  undefined1 *local_fa8;
  undefined4 local_fa0;
  undefined2 local_f38;
  undefined1 local_f30 [304];
  longlong local_e00;
  undefined1 local_df8;
  undefined1 local_df0 [16];
  undefined4 local_de0;
  undefined4 uStack_ddc;
  undefined4 uStack_dd8;
  undefined4 uStack_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc8 [88];
  code *local_d70;
  undefined4 local_d68;
  undefined2 local_d00;
  undefined1 local_cf8 [304];
  longlong local_bc8;
  undefined1 local_bc0;
  undefined1 local_bb8 [16];
  undefined4 local_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  uint local_b98;
  undefined1 local_b94;
  undefined1 local_b90 [88];
  undefined1 local_b38 [440];
  undefined1 local_980 [192];
  longlong local_8c0 [24];
  undefined1 local_800 [440];
  undefined1 local_648 [88];
  char local_5f0;
  undefined1 local_5e8 [272];
  undefined1 local_4d8 [152];
  undefined8 local_440;
  longlong *local_438;
  longlong local_430;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined1 local_408;
  undefined1 local_400 [56];
  undefined1 local_3c8 [80];
  undefined4 local_378;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined1 local_304;
  undefined1 local_300 [16];
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined1 local_2dc;
  undefined1 local_2d8 [16];
  undefined1 local_2c8;
  undefined1 local_278 [424];
  undefined8 local_d0;
  longlong *local_c8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [17];
  undefined1 local_67;
  char local_66;
  undefined1 local_63;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146a616c2;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1418;
  lVar10 = param_2[0x35];
  param_1[0x71] = lVar10;
  lVar16 = lVar10 + 0x10;
  if (param_2[0x36] != 0) {
    lVar16 = param_2[0x36];
  }
  param_1[99] = lVar10 + 0x450;
  lVar10 = param_2[0x35];
  uVar6 = *(undefined4 *)(lVar10 + 0x504);
  uVar7 = *(undefined4 *)(lVar10 + 0x508);
  uVar8 = *(undefined4 *)(lVar10 + 0x50c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar10 + 0x500);
  *(undefined4 *)((longlong)param_1 + 0x324) = uVar6;
  *(undefined4 *)(param_1 + 0x65) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x32c) = uVar8;
  FUN_14009d848(param_1 + 0x5f,param_2 + 0x3f);
  param_1[0x66] = param_2[0x39];
  plVar5 = (longlong *)param_2[0x3a];
  plVar14 = (longlong *)param_1[0x67];
  if (plVar14 != plVar5) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar14 = (longlong *)param_1[0x67];
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    param_1[0x67] = (longlong)plVar5;
  }
  *(char *)(param_1 + 0x68) = (char)param_2[0x41];
  fVar4 = *(float *)(param_2[0x35] + 0x430);
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    local_13e4 = 0;
  }
  else {
    local_13e4 = -(uint)(*(float *)(param_2[0x35] + 0x434) == 0.0) & 1;
  }
  FUN_146a12e26(local_278);
  local_1070 = (undefined4)param_2[0x51];
  local_106c = *(undefined1 *)((longlong)param_2 + 0x28c);
  local_1068 = 0;
  local_1060 = 0;
  FUN_146a74bd4(&local_1068,param_2 + 0x52);
  local_7c = local_106c;
  local_80 = local_1070;
  FUN_144a450dc(local_78,&local_1068);
  FUN_1449db362(&local_1068);
  if (*(char *)((longlong)param_2 + 0x2a9) == '\x01') {
    local_67 = (undefined1)param_2[0x55];
    local_66 = '\x01';
  }
  else if (local_66 == '\x01') {
    local_66 = '\0';
  }
  FUN_14114e6dc(auStack_90,param_2 + 0x3d);
  FUN_1469fa47e(auStack_a0,param_2 + 0x3b);
  local_63 = *(undefined1 *)((longlong)param_2 + 0x2aa);
  FUN_145ab3d24(local_5e8);
  local_378 = 1;
  local_fa8 = &LAB_146a62ab8;
  local_fa0 = 0;
  local_430 = lVar16;
  FUN_146a7b982(&local_d70,param_1);
  FUN_144a450dc(local_3c8,&local_d70);
  FUN_1449db362(&local_d70);
  local_10a8 = (longlong *)*param_2;
  if (local_10a8 != (longlong *)0x0) {
    (**(code **)(*local_10a8 + 8))();
  }
  local_10a0 = (undefined4)param_2[1];
  local_1098 = (undefined1)param_2[2];
  local_1090 = 0;
  local_1088 = 0;
  FUN_1413a4324(&local_1090,param_2 + 3);
  local_d70 = FUN_146a62bb4;
  local_d68 = 0;
  FUN_146a62ac6(local_5e8,param_1,&local_d70,&local_10a8);
  if ((char)param_2[0x4e] == '\x01') {
    local_10c8 = (undefined1)param_2[0x4e];
    local_10d8 = param_2[0x4c];
    uStack_10d0 = param_2[0x4d];
    local_10c0 = 0;
    uStack_10b8 = (ulonglong)uStack_10b8._4_4_ << 0x20;
    FUN_140a58be0(&local_10c0,param_2 + 0x4f);
  }
  else {
    local_10d8 = *(longlong *)(param_2[0x35] + 0x510);
    uStack_10d0 = *(longlong *)(param_2[0x35] + 0x518);
    local_10c8 = 1;
    local_10c0 = 0;
    uStack_10b8 = 0;
  }
  local_408 = local_10c8;
  local_418 = (undefined4)local_10d8;
  uStack_414 = local_10d8._4_4_;
  uStack_410 = (undefined4)uStack_10d0;
  uStack_40c = uStack_10d0._4_4_;
  FUN_144a450dc(local_400,&local_10c0);
  FUN_1449db362(&local_10c0);
  uStack_10f8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x21d) >> 0x18);
  uStack_10f4 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x21d) >> 0x38);
  local_1108 = (undefined4)param_2[0x42];
  uStack_1104 = *(undefined4 *)((longlong)param_2 + 0x214);
  uStack_1100 = (undefined4)param_2[0x43];
  uStack_10fc = *(undefined4 *)((longlong)param_2 + 0x21c);
  local_10f0 = 0;
  local_10e8 = 0;
  FUN_140a5aaa0(&local_10f0,param_2 + 0x45);
  local_2e0 = uStack_10f8;
  local_2f0 = local_1108;
  uStack_2ec = uStack_1104;
  uStack_2e8 = uStack_1100;
  uStack_2e4 = uStack_10fc;
  local_2dc = uStack_10f4;
  FUN_144a450dc(local_2d8,&local_10f0);
  FUN_1449db362(&local_10f0);
  uStack_1128 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x245) >> 0x18);
  uStack_1124 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x245) >> 0x38);
  local_1138 = (undefined4)param_2[0x47];
  uStack_1134 = *(undefined4 *)((longlong)param_2 + 0x23c);
  uStack_1130 = (undefined4)param_2[0x48];
  uStack_112c = *(undefined4 *)((longlong)param_2 + 0x244);
  local_1120 = 0;
  local_1118 = 0;
  FUN_140a5aaa0(&local_1120,param_2 + 0x4a);
  local_308 = uStack_1128;
  local_318 = local_1138;
  uStack_314 = uStack_1134;
  uStack_310 = uStack_1130;
  uStack_30c = uStack_112c;
  local_304 = uStack_1124;
  FUN_144a450dc(local_300,&local_1120);
  FUN_1449db362(&local_1120);
  local_2c8 = (undefined1)param_2[0x41];
  local_1190 = 0;
  local_118e = 0;
  FUN_144a5dc74(local_1188);
  local_1178 = 0;
  local_1170 = 0;
  uStack_1168 = 0;
  FUN_144a5dc74(local_1160);
  local_1150 = 0;
  local_1148 = 0;
  uStack_1140 = 0;
  FUN_146a7c55a(local_648,&local_1190);
  local_5f0 = '\x01';
  FUN_146a7c46c(local_4d8,local_648);
  if (local_5f0 == '\x01') {
    FUN_145766a5a(local_648);
    local_5f0 = '\0';
  }
  FUN_140a5296a(local_800);
  FUN_140a50426(local_8c0);
  param_1[0x5e] = local_8c0[0];
  local_11b8 = 0x3f800000;
  local_11b4 = 1;
  local_11b0 = 0;
  uStack_11a8 = 0;
  lVar10 = FUN_140a5475a(local_8c0);
  *(int *)(lVar10 + 0x40) = (int)param_2[0x54];
  *(undefined1 *)(lVar10 + 0x44) = 1;
  *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x2a4);
  *(undefined1 *)(lVar10 + 0x4c) = 1;
  uVar11 = FUN_146a07044(lVar10,param_2 + 0x37);
  local_13e0 = FUN_140a52392(local_800,uVar11);
  FUN_140a50426(local_980);
  lVar10 = FUN_140a52578(local_980);
  *(undefined4 *)(lVar10 + 0x40) = 3;
  *(undefined1 *)(lVar10 + 0x44) = 1;
  uVar9 = 2;
  if (*(char *)((longlong)param_2 + 0x209) == '\x01') {
    uVar9 = (uint)*(byte *)(param_2[0x35] + 0x530);
  }
  *(uint *)(lVar10 + 0x48) = uVar9;
  *(undefined1 *)(lVar10 + 0x4c) = 1;
  local_11e0 = 0;
  uStack_11dc = 0;
  uStack_11d8 = 0;
  uStack_11d4 = 0;
  if (*(char *)((longlong)param_2 + 0x209) == '\x01') {
    lVar16 = param_2[0x35];
    local_11e0 = *(undefined4 *)(lVar16 + 0x520);
    uStack_11dc = *(undefined4 *)(lVar16 + 0x524);
    uStack_11d8 = *(undefined4 *)(lVar16 + 0x528);
    uStack_11d4 = *(undefined4 *)(lVar16 + 0x52c);
  }
  local_11d0 = 1;
  local_11c8 = 0;
  uStack_11c0 = 0;
  *(undefined1 *)(lVar10 + 0x28) = 1;
  *(undefined4 *)(lVar10 + 0x18) = local_11e0;
  *(undefined4 *)(lVar10 + 0x1c) = uStack_11dc;
  *(undefined4 *)(lVar10 + 0x20) = uStack_11d8;
  *(undefined4 *)(lVar10 + 0x24) = uStack_11d4;
  FUN_144a450dc(lVar10 + 0x30,&local_11c8);
  FUN_1449db362(&local_11c8);
  FUN_140a504fe(local_b38);
  FUN_140a4fdf2(local_1000,0);
  local_fb8 = 1;
  local_fb4 = 1;
  local_1228 = *(undefined8 *)(param_2[0x35] + 0x430);
  local_1220 = 0;
  local_1218 = 1;
  local_1210 = 0;
  uStack_1208 = 0;
  local_fd8 = 1;
  local_fe0 = 0;
  local_fe8 = local_1228;
  FUN_144a450dc(local_fd0,&local_1210);
  FUN_1449db362(&local_1210);
  FUN_140a53334(&local_d70);
  puVar15 = &DAT_14c96b1e1;
  puVar12 = &DAT_14c96b1e1;
  if (*(char *)((longlong)param_2 + 0x209) != '\0') {
    puVar12 = &DAT_14c96b238;
  }
  if ((char)local_13e4 != '\0') {
    puVar12 = &DAT_14c96b1e1;
  }
  local_1260 = CONCAT11(1,*puVar12);
  local_1258 = 0;
  uStack_1250 = 0;
  local_d00 = local_1260;
  FUN_144a450dc(local_cf8,&local_1258);
  FUN_1449db362(&local_1258);
  local_1280 = param_2[0x35] + 0x380;
  local_1278 = 1;
  local_1270 = 0;
  uStack_1268 = 0;
  local_bc0 = 1;
  local_bc8 = local_1280;
  FUN_144a450dc(local_bb8,&local_1270);
  FUN_1449db362(&local_1270);
  uVar11 = *(undefined8 *)(param_2[0x35] + 0x438);
  uVar13 = *(undefined8 *)(param_2[0x35] + 0x440);
  local_1298 = local_1298 & 0xffffff00;
  local_1294 = 1;
  local_1290 = 0;
  uStack_1288 = 0;
  local_12a8._0_4_ = (undefined4)uVar11;
  local_12a8._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
  uStack_12a0._0_4_ = (undefined4)uVar13;
  uStack_12a0._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_ba8 = (undefined4)local_12a8;
  uStack_ba4 = local_12a8._4_4_;
  uStack_ba0 = (undefined4)uStack_12a0;
  uStack_b9c = uStack_12a0._4_4_;
  local_b98 = local_1298;
  local_b94 = 1;
  local_12a8 = uVar11;
  uStack_12a0 = uVar13;
  FUN_144a450dc(local_b90,&local_1290);
  FUN_1449db362(&local_1290);
  local_13f8 = &local_12c1;
  FUN_140a554b8(&local_12c0,"SImage",".\\Runtime/Slate/Private/Widgets/Input/SComboButton.cpp",0x47)
  ;
  if (local_12b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_12b8 + 1) = (int)local_12b8[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x6e];
  param_1[0x6d] = local_12c0;
  param_1[0x6e] = (longlong)local_12b8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar5 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_140a52c70(&local_12c0,&local_1248,&local_d70);
  local_1238 = local_1248;
  local_1230 = local_1240;
  if (local_1240 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1240 + 1) = (int)local_1240[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_140a4fd40(local_1000,&local_1238);
  uVar11 = FUN_140a5058c(local_b38,uVar11);
  FUN_140a4fdf2(local_1058,0);
  local_1010 = 1;
  local_100c = 1;
  FUN_140a53334(&local_fa8);
  if (*(char *)((longlong)param_2 + 0x209) != '\0') {
    puVar15 = &DAT_14c96b238;
  }
  local_1300 = CONCAT11(1,*puVar15);
  local_12f8 = 0;
  uStack_12f0 = 0;
  local_f38 = local_1300;
  FUN_144a450dc(local_f30,&local_12f8);
  FUN_1449db362(&local_12f8);
  local_1320 = param_2[0x35] + 0x380;
  local_1318 = 1;
  local_1310 = 0;
  uStack_1308 = 0;
  local_df8 = 1;
  local_e00 = local_1320;
  FUN_144a450dc(local_df0,&local_1310);
  FUN_1449db362(&local_1310);
  local_1348 = 0x3f800000;
  puStack_1340 = &DAT_3f8000003f800000;
  local_1338 = CONCAT22(local_1338._2_2_,2);
  local_1334 = 1;
  local_1330 = 0;
  uStack_1328 = 0;
  local_de0 = 0x3f800000;
  uStack_ddc = 0;
  uStack_dd8 = 0x3f800000;
  uStack_dd4 = 0x3f800000;
  local_dd0 = local_1338;
  local_dcc = 1;
  FUN_144a450dc(local_dc8,&local_1330);
  FUN_1449db362(&local_1330);
  local_13f8 = &local_1361;
  FUN_140a554b8(&local_1360,"SImage",".\\Runtime/Slate/Private/Widgets/Input/SComboButton.cpp",0x4f)
  ;
  if (local_1358 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1358 + 1) = (int)local_1358[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x70];
  param_1[0x6f] = local_1360;
  param_1[0x70] = (longlong)local_1358;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar5 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_140a52c70(&local_1360,&local_12e8,&local_fa8);
  local_12d8 = local_12e8;
  local_12d0 = local_12e0;
  if (local_12e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_12e0 + 1) = (int)local_12e0[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_1058,&local_12d8);
  uVar11 = FUN_140a5058c(uVar11,uVar13);
  local_13f8 = &local_1381;
  FUN_140a536a8(local_1380,"SOverlay",".\\Runtime/Slate/Private/Widgets/Input/SComboButton.cpp",0x41
               );
  FUN_140a4ff16(local_1380,&local_1200,uVar11);
  local_11f0 = local_1200;
  local_11e8 = local_11f8;
  if (local_11f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_11f8 + 1) = (int)local_11f8[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_140a4fe8e(lVar10,&local_11f0);
  uVar11 = FUN_140a52392(local_13e0,uVar11);
  local_13f8 = &local_13a1;
  FUN_140a541dc(&local_13a0,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Widgets/Input/SComboButton.cpp",0x31);
  if (local_1398 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1398 + 1) = (int)local_1398[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x6c];
  param_1[0x6b] = local_13a0;
  param_1[0x6c] = (longlong)local_1398;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar5 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_140a50ec6(&local_13a0,&local_11a0,uVar11);
  plVar14 = local_438;
  plVar5 = local_1198;
  if (local_1198 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1198 + 1) = (int)local_1198[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1198 + 1) = (int)local_1198[1] + 1;
    UNLOCK();
  }
  local_440 = local_11a0;
  local_438 = local_1198;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  local_13f8 = &local_13c1;
  FUN_145ab3730(&local_13c0,"SButton",".\\Runtime/Slate/Private/Widgets/Input/SComboButton.cpp",0x21
               );
  if (local_13b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_13b8 + 1) = (int)local_13b8[1] + 1;
    UNLOCK();
  }
  plVar14 = (longlong *)param_1[0x6a];
  param_1[0x69] = local_13c0;
  param_1[0x6a] = (longlong)local_13b8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_145ab34ca(&local_13c0,&local_1080,local_5e8);
  plVar2 = local_c8;
  plVar14 = local_1078;
  if (local_1078 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1078 + 1) = (int)local_1078[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1078 + 1) = (int)local_1078[1] + 1;
    UNLOCK();
  }
  local_d0 = local_1080;
  local_c8 = local_1078;
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_146a62724(param_1,local_278);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_1078 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1078 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1078)(local_1078);
      LOCK();
      piVar1 = (int *)((longlong)local_1078 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1078 + 0x10))(local_1078);
      }
    }
  }
  if (local_13b8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_13b8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_13b8)(local_13b8);
      LOCK();
      piVar1 = (int *)((longlong)local_13b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13b8 + 0x10))(local_13b8);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar5 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if (local_1198 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1198 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1198)(local_1198);
      LOCK();
      piVar1 = (int *)((longlong)local_1198 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1198 + 0x10))(local_1198);
      }
    }
  }
  if (local_1398 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1398 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1398)(local_1398);
      LOCK();
      piVar1 = (int *)((longlong)local_1398 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1398 + 0x10))(local_1398);
      }
    }
  }
  plVar5 = local_11e8;
  if (local_11e8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_11e8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_11e8)(local_11e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_11f8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_11f8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_11f8)(local_11f8);
      LOCK();
      piVar1 = (int *)((longlong)local_11f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_11f8 + 0x10))(local_11f8);
      }
    }
  }
  if (local_1378 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1378 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1378)(local_1378);
      LOCK();
      piVar1 = (int *)((longlong)local_1378 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1378 + 0x10))(local_1378);
      }
    }
  }
  plVar5 = local_12d0;
  if (local_12d0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_12d0 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_12d0)(local_12d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_12e0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_12e0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_12e0)(local_12e0);
      LOCK();
      piVar1 = (int *)((longlong)local_12e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_12e0 + 0x10))(local_12e0);
      }
    }
  }
  if (local_1358 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1358 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1358)(local_1358);
      LOCK();
      piVar1 = (int *)((longlong)local_1358 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1358 + 0x10))(local_1358);
      }
    }
  }
  FUN_140a55a86(&local_fa8);
  FUN_1415b5e50(local_1058);
  plVar5 = local_1230;
  if (local_1230 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1230 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1230)(local_1230);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_1240 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1240 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1240)(local_1240);
      LOCK();
      piVar1 = (int *)((longlong)local_1240 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1240 + 0x10))(local_1240);
      }
    }
  }
  if (local_12b8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_12b8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_12b8)(local_12b8);
      LOCK();
      piVar1 = (int *)((longlong)local_12b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_12b8 + 0x10))(local_12b8);
      }
    }
  }
  FUN_140a55a86(&local_d70);
  FUN_1415b5e50(local_1000);
  FUN_1415b5e16(local_b38);
  FUN_140a509a6(local_980);
  FUN_140a509a6(local_8c0);
  FUN_145ab33da(local_800);
  FUN_145766a5a(&local_1190);
  FUN_145ab35f4(local_5e8);
  FUN_146a136ea(local_278);
  local_13d8 = param_2[0x39];
  local_13d0 = param_2[0x3a];
  if (local_13d0 != 0) {
    LOCK();
    *(int *)(local_13d0 + 8) = *(int *)(local_13d0 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x240))(param_1,&local_13d8);
  if ((local_60 ^ (ulonglong)auStack_1418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a62724 FUN_146a62724 body=915 status=ok
// SIG undefined FUN_146a62724(void)

void FUN_146a62724(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_54;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  *local_98 = &PTR_FUN_149edb640;
  local_98[1] = 0;
  local_98[2] = DAT_14c98dec8;
  lVar3 = DAT_14c98ded0;
  local_98[3] = DAT_14c98ded0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  *local_98 = &PTR_FUN_149f13428;
  local_98[4] = &PTR_LAB_149f13430;
  local_54 = '\0';
  local_4c = '\0';
  local_90 = 0;
  uStack_88 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_c8 = *(undefined4 *)(param_2 + 0x1b8);
  uStack_c4 = *(undefined4 *)(param_2 + 0x1bc);
  local_80 = *(undefined8 *)(param_2 + 0x1b8);
  uStack_c0 = *(undefined4 *)(param_2 + 0x1c0);
  uStack_bc = *(undefined4 *)(param_2 + 0x1c4);
  uStack_78 = *(undefined8 *)(param_2 + 0x1c0);
  local_b8 = 1;
  local_b0 = 0;
  uStack_a8 = 0;
  local_70 = 1;
  FUN_144a450dc(&local_68,&local_b0);
  FUN_1449db362(&local_b0);
  uVar6 = FUN_146a6ab32(&local_98,param_2 + 0x1a8);
  FUN_146a6aad8(param_1 + 0x2c8,uVar6);
  if (local_4c == '\x01') {
    local_4c = '\0';
  }
  if (local_54 == '\x01') {
    local_54 = '\0';
  }
  FUN_1449db362(&local_68);
  FUN_146a74ecc(&local_98);
  local_98 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  *local_98 = &PTR_FUN_149edb640;
  local_98[1] = 0;
  local_98[2] = DAT_14c98dec8;
  lVar3 = DAT_14c98ded0;
  local_98[3] = DAT_14c98ded0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  *local_98 = &PTR_FUN_149f13428;
  local_98[4] = &PTR_LAB_149f13430;
  local_54 = '\0';
  local_4c = '\0';
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_146a6aad8(param_1 + 0x2c8,&local_98);
  if (local_4c == '\x01') {
    local_4c = '\0';
  }
  if (local_54 == '\x01') {
    local_54 = '\0';
  }
  FUN_1449db362();
  FUN_146a74ecc(&local_98);
  uVar6 = *(undefined8 *)(param_2 + 0x1c8);
  lVar3 = *(longlong *)(param_2 + 0x1d0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x220) = uVar6;
  *(longlong *)(param_1 + 0x228) = lVar3;
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
  uVar6 = *(undefined8 *)(param_2 + 0x1c8);
  lVar3 = *(longlong *)(param_2 + 0x1d0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = uVar6;
  *(longlong *)(param_1 + 0x238) = lVar3;
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
  FUN_1469fa47e(param_1 + 0x240,param_2 + 0x1d8);
  FUN_14114e6dc(param_1 + 0x250,param_2 + 0x1e8);
  *(undefined1 *)(param_1 + 0x264) = *(undefined1 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x1f8);
  FUN_146a74bd4(param_1 + 0x268,param_2 + 0x200);
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x210);
  if ((undefined1 *)(param_2 + 0x211) != (undefined1 *)(param_1 + 0x27b)) {
    if (*(char *)(param_2 + 0x212) == '\x01') {
      *(undefined1 *)(param_1 + 0x27b) = *(undefined1 *)(param_2 + 0x211);
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x27c) != '\x01') goto LAB_146a62a4d;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x27c) = uVar5;
  }
LAB_146a62a4d:
  *(undefined1 *)(param_1 + 0x2a0) = *(undefined1 *)(param_2 + 0x213);
  *(undefined1 *)(param_1 + 0x2a1) = *(undefined1 *)(param_2 + 0x214);
  *(undefined1 *)(param_1 + 0x27a) = *(undefined1 *)(param_2 + 0x215);
  *(undefined1 *)(param_1 + 0x2a2) = *(undefined1 *)(param_2 + 0x216);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a62ac6 FUN_146a62ac6 body=236 status=ok
// SIG undefined FUN_146a62ac6(void)

longlong FUN_146a62ac6(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined4 *)(param_3 + 1);
  local_58 = (longlong *)*param_3;
  FUN_146a7be6a(local_68);
  FUN_144a5dc74(&local_58);
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_1413a4324(&local_40,local_68);
  FUN_140008f88(param_1,&local_58);
  *(undefined1 *)(param_1 + 0x10) = local_48;
  FUN_144a450dc(param_1 + 0x18,&local_40);
  FUN_1449db362(&local_40);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  FUN_1449db362(local_68);
  FUN_1449db362(param_4 + 3);
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a62bb4 FUN_146a62bb4 body=125 status=ok
// SIG undefined FUN_146a62bb4(void)

longlong * FUN_146a62bb4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((((*(char *)(param_1 + 0x280) == '\x01') && (*(longlong *)(param_1 + 0x200) != 0)) &&
      (*(longlong *)(param_1 + 0x208) != 0)) && (0 < *(int *)(*(longlong *)(param_1 + 0x208) + 8)))
  {
    plVar2 = (longlong *)FUN_140e82300();
  }
  else {
    plVar2 = (longlong *)FUN_14142e2d2(param_3);
  }
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  FUN_1449db362(param_3 + 3);
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  return param_2;
}



// FUNCTION 146a62c32 FUN_146a62c32 body=43 status=ok
// SIG undefined FUN_146a62c32(void)

undefined8 FUN_146a62c32(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(char *)(param_1 + 0x280) == '\x01') && (*(longlong *)(param_1 + 0x200) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x208), lVar1 != 0)) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 8));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 146a62c5e FUN_146a62c5e body=965 status=ok
// SIG undefined FUN_146a62c5e(void)

undefined1 * FUN_146a62c5e(longlong *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((char)param_1[0x50] == '\x01') && (param_1[0x40] != 0)) && (param_1[0x41] != 0)) &&
     (0 < *(int *)(param_1[0x41] + 8))) {
    uVar10 = 0;
  }
  else {
    uVar10 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)((longlong)param_1 + 0x279)) ^
             1;
  }
  (**(code **)(*param_1 + 0x248))(param_1,uVar10,0,0);
  if (((((char)param_1[0x50] == '\x01') && (param_1[0x40] != 0)) &&
      ((param_1[0x41] != 0 && ((0 < *(int *)(param_1[0x41] + 8) && ((int)param_1[0x60] != 0)))))) &&
     (((longlong *)param_1[0x5f] != (longlong *)0x0 &&
      (cVar5 = (**(code **)(*(longlong *)param_1[0x5f] + 0x30))(), cVar5 != '\0')))) {
    if ((int)param_1[0x60] == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)param_1[0x5f];
    }
    (**(code **)(*plVar9 + 0x58))();
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (((((char)param_1[0x50] != '\x01') || (param_1[0x40] == 0)) || (param_1[0x41] == 0)) ||
     (*(int *)(param_1[0x41] + 8) < 1)) goto LAB_146a62ff7;
  plVar9 = (longlong *)param_1[0x62];
  bVar3 = 1;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    lVar12 = 0;
  }
  else {
    iVar6 = (int)plVar9[1];
    lVar12 = 0;
    do {
      if (iVar6 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_146a62dbb;
      }
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar13 = iVar6 == iVar4;
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar13);
    lVar12 = param_1[0x61];
    bVar3 = 0;
  }
LAB_146a62dbb:
  plVar8 = plVar9;
  if ((char)param_1[0x68] == '\x01') {
    if (lVar12 == 0) {
      if ((longlong *)param_1[0x46] != (longlong *)0x0) {
        puVar7 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x46] + 0x180))();
        iVar6 = (**(code **)*puVar7)(puVar7);
        if (iVar6 == 1) {
          plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[0x46] + 0x180))();
          (**(code **)(*plVar8 + 0x10))(plVar8,&local_50,0);
          plVar8 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          plVar11 = (longlong *)0x0;
          if (local_48 == plVar9) {
            plVar11 = local_48;
          }
          if ((bool)(bVar3 | local_48 == plVar9)) {
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar11 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar6 = *piVar2;
                UNLOCK();
                plVar9 = plVar8;
                goto joined_r0x000146a62f0c;
              }
            }
          }
          else {
            LOCK();
            plVar11 = plVar9 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar6 = *piVar2;
              UNLOCK();
joined_r0x000146a62f0c:
              if (iVar6 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_48 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar2 = (int *)((longlong)local_48 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
              }
            }
          }
          lVar12 = local_50;
          plVar9 = plVar8;
          if (local_50 != 0) goto LAB_146a62fac;
        }
      }
      lVar12 = param_1[0x44];
      plVar9 = (longlong *)param_1[0x45];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      if (lVar12 == 0) {
        plVar11 = (longlong *)param_1[0x67];
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
          lVar12 = 0;
        }
        else {
          iVar6 = (int)plVar11[1];
          lVar12 = 0;
          do {
            if (iVar6 == 0) {
              plVar11 = (longlong *)0x0;
              goto LAB_146a62f4d;
            }
            LOCK();
            iVar4 = (int)plVar11[1];
            bVar13 = iVar6 == iVar4;
            if (bVar13) {
              *(int *)(plVar11 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
          } while (!bVar13);
          lVar12 = param_1[0x66];
        }
LAB_146a62f4d:
        if (plVar11 == plVar9) {
          if (plVar9 == (longlong *)0x0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            plVar8 = plVar9;
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar6 = *piVar2;
              UNLOCK();
              plVar9 = plVar11;
              goto joined_r0x000146a62f93;
            }
          }
        }
        else {
          plVar8 = plVar11;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar9 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar6 = *piVar2;
              UNLOCK();
joined_r0x000146a62f93:
              if (iVar6 == 0) {
                (**(code **)(*plVar9 + 0x10))();
              }
            }
          }
        }
        goto LAB_146a62fa4;
      }
    }
LAB_146a62fac:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_60 = lVar12;
    local_58 = plVar9;
    FUN_140592b68(param_2,&local_60,2,0);
    plVar8 = plVar9;
  }
  else {
LAB_146a62fa4:
    plVar9 = plVar8;
    if (lVar12 != 0) goto LAB_146a62fac;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_146a62ff7:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a63024 FUN_146a63024 body=50 status=ok
// SIG undefined FUN_146a63024(void)

ulonglong FUN_146a63024(longlong param_1)

{
  longlong in_RAX;
  ulonglong uVar1;
  
  if ((((*(char *)(param_1 + 0x280) == '\x01') && (*(longlong *)(param_1 + 0x200) != 0)) &&
      (in_RAX = *(longlong *)(param_1 + 0x208), in_RAX != 0)) && (0 < *(int *)(in_RAX + 8))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x279)) ^ 1;
  }
  return uVar1;
}



// FUNCTION 146a63056 FUN_146a63056 body=190 status=ok
// SIG undefined FUN_146a63056(void)

undefined1 *
FUN_146a63056(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar1 = (**(code **)(*DAT_14c98e618 + 0xb0))(DAT_14c98e618,param_4);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x250))(param_1,local_e0);
    FUN_1403d4924(param_2,local_e0);
    FUN_14493db24(local_e0);
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a63116 FUN_146a63116 body=726 status=ok
// SIG undefined FUN_146a63116(void)

void FUN_146a63116(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_428 [32];
  undefined1 *local_408;
  undefined1 local_3f1;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  longlong *local_388;
  undefined1 local_380 [424];
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 local_1b0;
  undefined1 local_1a8 [80];
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_148 [248];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_428;
  FUN_140a562d0(local_380);
  local_3b0 = *(undefined8 *)(param_1 + 0x318);
  local_3a8 = 1;
  local_3a0 = 0;
  uStack_398 = 0;
  local_150 = 1;
  local_158 = local_3b0;
  FUN_144a450dc(local_148,&local_3a0);
  FUN_1449db362(&local_3a0);
  local_3d8 = *(undefined4 *)(param_1 + 800);
  uStack_3d4 = *(undefined4 *)(param_1 + 0x324);
  uStack_3d0 = *(undefined4 *)(param_1 + 0x328);
  uStack_3cc = *(undefined4 *)(param_1 + 0x32c);
  local_3c8 = 1;
  local_3c0 = 0;
  uStack_3b8 = 0;
  local_1b0 = 1;
  local_1c0 = local_3d8;
  uStack_1bc = uStack_3d4;
  uStack_1b8 = uStack_3d0;
  uStack_1b4 = uStack_3cc;
  FUN_144a450dc(local_1a8,&local_3c0);
  FUN_1449db362(&local_3c0);
  plVar4 = local_1d0;
  local_1d8 = *param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar2 + 8) = *(int *)((longlong)plVar2 + 8) + 1;
    UNLOCK();
  }
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1d0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      puVar3 = (undefined8 *)*local_1d0;
      local_1d0 = plVar2;
      (*(code *)*puVar3)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar2 = local_1d0;
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        plVar2 = local_1d0;
      }
    }
  }
  local_1d0 = plVar2;
  local_408 = &local_3f1;
  FUN_140a55c32(local_3f0,"SBorder",".\\Runtime/Slate/Private/Widgets/Input/SComboButton.cpp",0xb3);
  FUN_140a530e4(local_3f0,&local_390,local_380);
  if (local_388 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_388 + 1) = (int)local_388[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x220) = local_390;
  plVar2 = *(longlong **)(param_1 + 0x228);
  plVar4 = local_388;
  plVar5 = plVar2;
  if (local_388 != plVar2) {
    *(longlong **)(param_1 + 0x228) = local_388;
    plVar5 = local_388;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar2 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      local_390 = *(undefined8 *)(param_1 + 0x220);
      plVar5 = *(longlong **)(param_1 + 0x228);
    }
    plVar4 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar2 = *(longlong **)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = local_390;
  *(longlong **)(param_1 + 0x238) = plVar5;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (local_388 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_388 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_388)(local_388);
      LOCK();
      piVar1 = (int *)((longlong)local_388 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_388 + 0x10))(local_388);
      }
    }
  }
  if (local_3e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_3e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_3e8)(local_3e8);
      LOCK();
      piVar1 = (int *)((longlong)local_3e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3e8 + 0x10))(local_3e8);
      }
    }
  }
  FUN_140a59028(local_380);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a633ee FUN_146a633ee body=33 status=ok
// SIG undefined FUN_146a633ee(void)

void FUN_146a633ee(longlong param_1,undefined8 param_2)

{
  FUN_1469fa47e(param_1 + 0x240);
  FUN_1449db362(param_2);
  return;
}



// FUNCTION 146a63410 FUN_146a63410 body=105 status=ok
// SIG undefined FUN_146a63410(void)

void FUN_146a63410(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_28 = 1;
  local_20 = 0;
  uStack_18 = 0;
  FUN_140a58e4a(*(longlong *)(param_1 + 0x348) + 0x350,*(longlong *)(param_1 + 0x348),&local_38);
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6347a FUN_146a6347a body=440 status=ok
// SIG undefined FUN_146a6347a(void)

void FUN_146a6347a(longlong param_1,char param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x388) + 0x430);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    bVar3 = false;
  }
  else {
    bVar3 = *(float *)(*(longlong *)(param_1 + 0x388) + 0x434) == 0.0;
  }
  lVar4 = FUN_1469779a4(*(undefined8 *)(param_1 + 0x358),1);
  uVar5 = 2;
  if (param_2 != '\0') {
    uVar5 = (uint)*(byte *)(*(longlong *)(param_1 + 0x388) + 0x530);
  }
  if (*(uint *)(lVar4 + 0x3c) != uVar5) {
    *(uint *)(lVar4 + 0x3c) = uVar5;
    FUN_14156c56c(lVar4,1);
  }
  lVar4 = FUN_1469779a4(*(undefined8 *)(param_1 + 0x358),1);
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  puVar6 = &DAT_14c96b1e1;
  if (param_2 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x388);
    local_78 = *(undefined4 *)(lVar2 + 0x520);
    local_74 = *(undefined4 *)(lVar2 + 0x524);
    local_70 = *(undefined4 *)(lVar2 + 0x528);
    local_6c = *(undefined4 *)(lVar2 + 0x52c);
    puVar6 = &DAT_14c96b238;
  }
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  FUN_140a55872(lVar4 + 0x28,lVar4 + 0x20,&local_78);
  FUN_1449db362(&local_60);
  local_90 = *puVar6;
  local_8f = 1;
  local_88 = 0;
  uStack_80 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x378) + 0x1c0))();
  puVar6 = &DAT_14c96b238;
  if (param_2 == '\0') {
    puVar6 = &DAT_14c96b1e1;
  }
  if (bVar3) {
    puVar6 = &DAT_14c96b1e1;
  }
  local_a8 = *puVar6;
  local_a7 = 1;
  local_a0 = 0;
  uStack_98 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x368) + 0x1c0))();
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a63634 FUN_146a63634 body=788 status=ok
// SIG undefined FUN_146a63634(void)

longlong FUN_146a63634(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  FUN_144a5dc74(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  FUN_144a5dc74(param_1 + 0x1d0);
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  FUN_144a5dc74(param_1 + 0x1f8);
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"NormalEditableText",1);
  uVar2 = FUN_145817c5e(lVar1,local_48,0,0);
  *(undefined8 *)(param_1 + 0x220) = uVar2;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x237) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x27c) = 2;
  *(undefined1 *)(param_1 + 0x27e) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2ac) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  *(undefined1 *)(param_1 + 0x2b4) = 0;
  *(undefined8 *)(param_1 + 0x2c1) = 0;
  *(undefined8 *)(param_1 + 0x2c9) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e1) = 0;
  *(undefined8 *)(param_1 + 0x2e9) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x301) = 0;
  *(undefined8 *)(param_1 + 0x309) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined2 *)(param_1 + 0x328) = 0x100;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined2 *)(param_1 + 0x340) = 0x100;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined2 *)(param_1 + 0x358) = 0x101;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined2 *)(param_1 + 0x370) = 0x100;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined2 *)(param_1 + 0x388) = 0x101;
  *(undefined1 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined1 *)(param_1 + 0x3a1) = 1;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined2 *)(param_1 + 0x3b8) = 0x101;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined1 *)(param_1 + 0x3d4) = 1;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined2 *)(param_1 + 1000) = 0x101;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x3fc) = 0;
  *(undefined8 *)(param_1 + 0x404) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined1 *)(param_1 + 0x444) = 1;
  *(undefined1 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0x459) = 1;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x46c) = 0;
  *(undefined8 *)(param_1 + 0x474) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined1 *)(param_1 + 0x4a4) = 1;
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined1 *)(param_1 + 0x4c1) = 1;
  *(undefined1 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined1 *)(param_1 + 0x4d9) = 1;
  *(undefined1 *)(param_1 + 0x4f1) = 0;
  *(undefined1 *)(param_1 + 0x4f3) = 0;
  *(undefined1 *)(param_1 + 0x4f5) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6394a FUN_146a6394a body=86 status=ok
// SIG undefined FUN_146a6394a(void)

longlong FUN_146a6394a(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1a8);
  *(char *)(param_1 + 0x1b8) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x1c0,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a639a0 FUN_146a639a0 body=115 status=ok
// SIG undefined FUN_146a639a0(void)

longlong * FUN_146a639a0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a63fc8(*param_1,param_3);
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



// FUNCTION 146a63a14 FUN_146a63a14 body=471 status=ok
// SIG undefined FUN_146a63a14(void)

void FUN_146a63a14(longlong param_1)

{
  if (*(char *)(param_1 + 0x4f5) == '\x01') {
    *(undefined1 *)(param_1 + 0x4f5) = 0;
  }
  if (*(char *)(param_1 + 0x4f3) == '\x01') {
    *(undefined1 *)(param_1 + 0x4f3) = 0;
  }
  if (*(char *)(param_1 + 0x4f1) == '\x01') {
    *(undefined1 *)(param_1 + 0x4f1) = 0;
  }
  FUN_1449db362(param_1 + 0x4e0);
  FUN_1449db362(param_1 + 0x4c8);
  FUN_1449db362(param_1 + 0x4a8);
  FUN_1449db362(param_1 + 0x490);
  FUN_1449db362(param_1 + 0x480);
  FUN_1449db362(param_1 + 0x470);
  FUN_1449db362(param_1 + 0x460);
  FUN_1449db362(param_1 + 0x448);
  FUN_1449db362(param_1 + 0x430);
  FUN_1449db362(param_1 + 0x420);
  FUN_1449db362(param_1 + 0x410);
  FUN_1449db362(param_1 + 0x400);
  FUN_1449db362(param_1 + 0x3f0);
  FUN_1449db362(param_1 + 0x3d8);
  FUN_1449db362(param_1 + 0x3c0);
  FUN_1449db362(param_1 + 0x3a8);
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x378);
  FUN_1449db362(param_1 + 0x360);
  FUN_1449db362(param_1 + 0x348);
  FUN_1449db362(param_1 + 0x330);
  FUN_1449db362(param_1 + 0x318);
  FUN_1449db362(param_1 + 0x2f8);
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2b8);
  FUN_141515cba(param_1 + 0x228);
  FUN_1449db362(param_1 + 0x210);
  if (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1e8);
  if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1c0);
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a63bec FUN_146a63bec body=502 status=ok
// SIG undefined FUN_146a63bec(void)

undefined8 * FUN_146a63bec(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f106d0;
  param_1[0x3c] = &PTR_FUN_149f10910;
  param_1[0x43] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x207) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20f) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0x3f80000000000000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0x41c00000;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 2;
  *(undefined1 *)((longlong)param_1 + 0x256) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0x3f800000;
  param_1[0x50] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x444) = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x299) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a1) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined2 *)(param_1 + 0x5b) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined2 *)(param_1 + 0x61) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined2 *)(param_1 + 100) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined2 *)(param_1 + 0x67) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined2 *)(param_1 + 0x8f) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) & 0xfb;
  return param_1;
}



// FUNCTION 146a63de2 FUN_146a63de2 body=486 status=ok
// SIG undefined FUN_146a63de2(void)

void FUN_146a63de2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_149f106d0;
  param_1[0x3c] = &PTR_FUN_149f10910;
  FUN_1449db362(param_1 + 0x90);
  FUN_1449db362(param_1 + 0x8d);
  FUN_1449db362(param_1 + 0x89);
  FUN_1449db362(param_1 + 0x86);
  FUN_1449db362(param_1 + 0x84);
  plVar3 = (longlong *)param_1[0x83];
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
  plVar3 = (longlong *)param_1[0x81];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x7f];
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
  FUN_1449db362(param_1 + 0x7c);
  FUN_1449db362(param_1 + 0x79);
  FUN_1449db362(param_1 + 0x77);
  FUN_1449db362(param_1 + 0x75);
  FUN_1449db362(param_1 + 0x73);
  FUN_1449db362(param_1 + 0x71);
  FUN_1449db362(param_1 + 0x6e);
  FUN_1449db362(param_1 + 0x6b);
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 0x65);
  FUN_1449db362(param_1 + 0x62);
  FUN_1449db362(param_1 + 0x5f);
  FUN_1449db362(param_1 + 0x5c);
  FUN_1449db362(param_1 + 0x59);
  FUN_1449db362(param_1 + 0x56);
  FUN_1449db362(param_1 + 0x52);
  FUN_141515cba(param_1 + 0x40);
  lVar4 = param_1[0x3f];
  if (lVar4 != 0) {
    FUN_146adac58(lVar4);
    FUN_1400020a8(lVar4);
  }
  plVar3 = (longlong *)param_1[0x3e];
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
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146a63fc8 FUN_146a63fc8 body=2726 status=ok
// SIG undefined FUN_146a63fc8(void)

void FUN_146a63fc8(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_6b8 [32];
  longlong **local_698;
  undefined1 *local_690;
  undefined8 *local_688;
  undefined8 *local_680;
  undefined8 **local_678;
  undefined8 local_670;
  undefined1 local_668 [8];
  longlong *local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 *local_648;
  longlong *local_640;
  undefined8 local_638;
  undefined8 local_630;
  longlong *local_628;
  undefined8 *local_620;
  longlong *local_618;
  undefined1 local_60e;
  char local_60d;
  undefined1 local_60c;
  char local_60b;
  undefined1 local_60a;
  char local_609;
  undefined1 local_608 [8];
  undefined1 local_600 [96];
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 local_590;
  undefined1 local_548 [544];
  longlong *local_328;
  longlong *plStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  *(undefined2 *)(param_1 + 0x2c0) = *(undefined2 *)(param_2 + 0x328);
  FUN_14096c7c0(param_1 + 0x2c8,param_2 + 0x330);
  *(undefined2 *)(param_1 + 0x2d8) = *(undefined2 *)(param_2 + 0x340);
  FUN_14096c7c0(param_1 + 0x2e0,param_2 + 0x348);
  *(undefined2 *)(param_1 + 0x2f0) = *(undefined2 *)(param_2 + 0x358);
  FUN_14096c7c0(param_1 + 0x2f8,param_2 + 0x360);
  *(undefined2 *)(param_1 + 0x308) = *(undefined2 *)(param_2 + 0x370);
  FUN_14096c7c0(param_1 + 0x310,param_2 + 0x378);
  *(undefined2 *)(param_1 + 800) = *(undefined2 *)(param_2 + 0x3a0);
  FUN_14096c7c0(param_1 + 0x328,param_2 + 0x3a8);
  *(undefined2 *)(param_1 + 0x338) = *(undefined2 *)(param_2 + 0x3b8);
  FUN_14096c7c0(param_1 + 0x340,param_2 + 0x3c0);
  *(undefined2 *)(param_1 + 0x380) = *(undefined2 *)(param_2 + 1000);
  FUN_14096c7c0(param_1 + 0x388,param_2 + 0x3f0);
  FUN_146a3c65e(param_1 + 0x398,param_2 + 0x400);
  FUN_146a75c8e(param_1 + 0x3a8,param_2 + 0x410);
  FUN_14628081e(param_1 + 0x3b8,param_2 + 0x420);
  FUN_146a25078(param_1 + 0x3c8,param_2 + 0x430);
  *(undefined1 *)(param_1 + 0x3dc) = *(undefined1 *)(param_2 + 0x444);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x440);
  FUN_140a52b3c(param_1 + 0x3e0,param_2 + 0x448);
  *(undefined2 *)(param_1 + 0x350) = *(undefined2 *)(param_2 + 0x458);
  FUN_14096c7c0(param_1 + 0x358,param_2 + 0x460);
  *(undefined2 *)(param_1 + 0x368) = *(undefined2 *)(param_2 + 0x388);
  FUN_14096c7c0(param_1 + 0x370,param_2 + 0x390);
  *(undefined1 *)(param_1 + 0x444) = *(undefined1 *)(param_2 + 0x4a4);
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x4a0);
  FUN_146a74c58(param_1 + 0x448,param_2 + 0x4a8);
  *(undefined1 *)(param_1 + 0x458) = *(undefined1 *)(param_2 + 0x4b8);
  *(undefined2 *)(param_1 + 0x460) = *(undefined2 *)(param_2 + 0x4c0);
  FUN_146a74cdc(param_1 + 0x468,param_2 + 0x4c8);
  *(undefined2 *)(param_1 + 0x478) = *(undefined2 *)(param_2 + 0x4d8);
  FUN_146a74d60(param_1 + 0x480,param_2 + 0x4e0);
  FUN_146a75d12(param_1 + 0x420,param_2 + 0x470);
  FUN_14603678a(param_1 + 0x430,param_2 + 0x480);
  FUN_1412cc59c(param_1 + 0x200,param_2 + 0x228);
  *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 0x288);
  FUN_140a5d470(param_1 + 0x268,param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x2b0);
  uVar3 = *(undefined4 *)(param_2 + 0x2a4);
  uVar4 = *(undefined4 *)(param_2 + 0x2a8);
  uVar5 = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x27c) = uVar3;
  *(undefined4 *)(param_1 + 0x280) = uVar4;
  *(undefined4 *)(param_1 + 0x284) = uVar5;
  *(undefined1 *)(param_1 + 0x28c) = *(undefined1 *)(param_2 + 0x2b4);
  FUN_140a5aaa0(param_1 + 0x290,param_2 + 0x2b8);
  *(undefined1 *)(param_1 + 0x2a8) = *(undefined1 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x2c8);
  FUN_140a5c3e8(param_1 + 0x2b0,param_2 + 0x2d8);
  lVar6 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar6 == 0) {
    lVar6 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_638,"NormalText",1);
  uVar7 = FUN_140a57516(lVar6,local_638,0,0);
  FUN_140e9ea3a(local_608,uVar7);
  FUN_1412cc59c(local_600,*(longlong *)(param_2 + 0x220) + 8);
  lVar6 = *(longlong *)(param_2 + 0x220);
  local_5a0 = *(undefined4 *)(lVar6 + 0x68);
  uStack_59c = *(undefined4 *)(lVar6 + 0x6c);
  uStack_598 = *(undefined4 *)(lVar6 + 0x70);
  uStack_594 = *(undefined4 *)(lVar6 + 0x74);
  local_590 = *(undefined4 *)(lVar6 + 0x78);
  FUN_140f13d9e(local_548,lVar6 + 0x80);
  FUN_140a5c830(&local_328);
  plVar11 = plStack_320;
  if (plStack_320 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x1e8) = local_328;
    plVar10 = *(longlong **)(param_1 + 0x1f0);
    if (plVar10 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1f0) = 0;
LAB_146a64a34:
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000146a64618:
        if (iVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plStack_320 + 1) = (int)plStack_320[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x1e8) = local_328;
    plVar10 = *(longlong **)(param_1 + 0x1f0);
    if (plStack_320 == plVar10) {
      LOCK();
      plVar10 = plStack_320 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plStack_320)(plStack_320);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar10 = plVar11;
        goto joined_r0x000146a64618;
      }
    }
    else {
      *(longlong **)(param_1 + 0x1f0) = plStack_320;
      if (plVar10 != (longlong *)0x0) goto LAB_146a64a34;
    }
  }
  plVar11 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_320 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_320)(plStack_320);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_146a207fc(*(undefined8 *)(param_1 + 0x1e8),param_1 + 0x2d8);
  FUN_140a5c830(&local_648);
  local_630 = *(undefined8 *)(param_1 + 0x1e8);
  plVar11 = *(longlong **)(param_1 + 0x1f0);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_658 = 0;
  uStack_650 = 0;
  uVar7 = FUN_14001cc68(0x9e0,0x10);
  local_620 = local_648;
  local_618 = local_640;
  if (local_640 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_640 + 1) = (int)local_640[1] + 1;
    UNLOCK();
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_609 = *(char *)(param_2 + 0x4f3);
  if (local_609 == '\x01') {
    local_60a = *(undefined1 *)(param_2 + 0x4f2);
  }
  local_60b = *(char *)(param_2 + 0x4f1);
  if (local_60b == '\x01') {
    local_60c = *(undefined1 *)(param_2 + 0x4f0);
  }
  local_628 = plVar11;
  FUN_140e9ea3a(&local_328,local_608);
  local_678 = &local_620;
  local_680 = &local_630;
  local_688 = &local_658;
  local_690 = &local_60a;
  local_698 = (longlong **)&local_60c;
  FUN_146ad84f4(uVar7,param_1 + 0x1e0,param_2 + 0x1a8,&local_328);
  lVar6 = *(longlong *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = uVar7;
  if (lVar6 != 0) {
    FUN_146adac58(lVar6);
    FUN_1400020a8(lVar6);
  }
  FUN_1449db362(&local_658);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  FUN_146adc2f4(*(undefined8 *)(param_1 + 0x1f8),param_2 + 0x1d0);
  FUN_146adc5c8(*(undefined8 *)(param_1 + 0x1f8),param_2 + 0x1f8);
  uVar7 = *(undefined8 *)(param_1 + 0x1f8);
  if (*(char *)(param_2 + 0x310) == '\x01') {
    plStack_320._0_1_ = *(undefined1 *)(param_2 + 0x310);
    local_328 = *(longlong **)(param_2 + 0x308);
    local_318 = 0;
    uStack_310 = (ulonglong)uStack_310._4_4_ << 0x20;
    FUN_140a5c3e8(&local_318,param_2 + 0x318);
  }
  else {
    local_328 = (longlong *)(*(longlong *)(param_2 + 0x220) + 0x1e0);
    plStack_320._0_1_ = 1;
    local_318 = 0;
    uStack_310 = 0;
  }
  FUN_146adc7c4(uVar7,&local_328);
  FUN_1449db362(&local_318);
  uVar7 = *(undefined8 *)(param_1 + 0x1f8);
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    plStack_320 = (longlong *)CONCAT71(plStack_320._1_7_,*(undefined1 *)(param_2 + 0x2f0));
    local_328 = *(longlong **)(param_2 + 0x2e8);
    local_318 = 0;
    uStack_310 = uStack_310 & 0xffffffff00000000;
    FUN_140a5c3e8(&local_318,param_2 + 0x2f8);
  }
  else {
    local_328 = (longlong *)(*(longlong *)(param_2 + 0x220) + 0x130);
    plStack_320 = (longlong *)CONCAT71(plStack_320._1_7_,1);
    local_318 = 0;
    uStack_310 = 0;
  }
  FUN_146adc7e6(uVar7,&local_328);
  FUN_1449db362(&local_318);
  uVar7 = *(undefined8 *)(param_1 + 0x1f8);
  local_620 = (undefined8 *)0x0;
  local_618 = (longlong *)((ulonglong)local_618 & 0xffffffff00000000);
  FUN_1446efa72(&local_620,0,2,0x10);
  puVar9 = local_620;
  local_618 = (longlong *)CONCAT44(local_618._4_4_,2);
  *local_620 = &PTR_LAB_149f134c0;
  uVar8 = FUN_144a3f946();
  puVar9[2] = uVar8;
  *puVar9 = &PTR_FUN_149f12400;
  puVar9[3] = param_1;
  local_328 = (longlong *)0x0;
  plStack_320 = (longlong *)0x0;
  local_318 = CONCAT71(local_318._1_7_,1);
  uStack_310 = 0;
  local_308 = 0;
  FUN_140a5cea4(&uStack_310,&local_620);
  FUN_146adde3a(uVar7,&local_328);
  FUN_1449db362(&uStack_310);
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_620);
  FUN_146add9b6(*(undefined8 *)(param_1 + 0x1f8),param_2 + 0x3d0);
  local_60d = *(char *)(param_2 + 0x4f5);
  if (local_60d == '\x01') {
    local_60e = *(undefined1 *)(param_2 + 0x4f4);
  }
  FUN_146addc80(*(undefined8 *)(param_1 + 0x1f8),&local_60e);
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = 0;
  puVar9[1] = 0;
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_149f13530;
  plVar10[2] = (longlong)puVar9;
  *(undefined8 **)(param_1 + 0x3f0) = puVar9;
  plVar11 = *(longlong **)(param_1 + 0x3f8);
  if (plVar10 == plVar11) {
    if (plVar10 == (longlong *)0x0) goto LAB_146a64899;
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_146a64899;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    *(longlong **)(param_1 + 0x3f8) = plVar10;
    if (plVar11 == (longlong *)0x0) goto LAB_146a64899;
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_146a64899;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar10 = plVar11;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_146a64899:
  uVar7 = *(undefined8 *)(param_1 + 0x3f0);
  local_328 = (longlong *)0x0;
  plStack_320 = (longlong *)0x0;
  FUN_1446ddc76(&local_670,"EditText",1);
  local_698 = &local_328;
  local_690 = (undefined1 *)(param_2 + 0x490);
  FUN_146a0e9c0(uVar7,local_668,local_670,0);
  if (local_660 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_660 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_660)(local_660);
      LOCK();
      piVar1 = (int *)((longlong)local_660 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_660 + 0x10))(local_660);
      }
    }
  }
  plVar11 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_320 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_320)(plStack_320);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_1446f470e(&local_620,L"EditableText",1);
  plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_149f13550;
  FUN_14697426c(plVar11 + 2,param_1,local_620);
  local_328 = plVar11 + 2;
  plStack_320 = plVar11;
  FUN_146a64a70(param_1,&local_328);
  plVar11 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_320 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_320)(plStack_320);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_640 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_640 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_640)(local_640);
      LOCK();
      piVar1 = (int *)((longlong)local_640 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_640 + 0x10))(local_640);
      }
    }
  }
  FUN_140e9e952(local_608);
  if ((local_40 ^ (ulonglong)auStack_6b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a64a70 FUN_146a64a70 body=125 status=ok
// SIG undefined FUN_146a64a70(void)

void FUN_146a64a70(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = (longlong *)param_2[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_14287bbd4(param_1,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
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



// FUNCTION 146a64aee FUN_146a64aee body=68 status=ok
// SIG undefined FUN_146a64aee(void)

void FUN_146a64aee(longlong param_1,longlong param_2)

{
  FUN_1412cc59c(param_1 + 0x200);
  *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 0x60);
  FUN_140a5d470(param_1 + 0x268,param_2 + 0x68);
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a64b32 FUN_146a64b32 body=170 status=ok
// SIG undefined FUN_146a64b32(void)

longlong FUN_146a64b32(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [56];
  longlong *local_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(param_1 + 0x70) != 0) && (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x70) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x68);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,local_78);
      FUN_1412cc59c(param_1,local_78);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a64bde FUN_146a64bde body=324 status=ok
// SIG undefined FUN_146a64bde(void)

void FUN_146a64bde(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144a87366(&local_b8,param_2 + 8);
  local_58 = 1;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1412cc59c(param_1 + 0x200,&local_b8);
  *(undefined1 *)(param_1 + 0x260) = local_58;
  FUN_144a450dc(param_1 + 0x268,&local_50);
  FUN_141515cba(&local_b8);
  local_b8 = *(longlong *)(param_2 + 0x68);
  uStack_b0 = *(undefined8 *)(param_2 + 0x70);
  local_a8._0_5_ = CONCAT14(1,*(undefined4 *)(param_2 + 0x78));
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  uVar2 = *(undefined4 *)(param_2 + 0x6c);
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x278) = uVar1;
  *(undefined4 *)(param_1 + 0x27c) = uVar2;
  *(undefined4 *)(param_1 + 0x280) = uVar3;
  *(undefined4 *)(param_1 + 0x284) = uVar4;
  *(undefined1 *)(param_1 + 0x28c) = 1;
  FUN_144a450dc(param_1 + 0x290,&uStack_a0);
  FUN_1449db362(&uStack_a0);
  local_b8 = param_2 + 0x80;
  uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
  local_a8 = 0;
  uStack_a0 = 0;
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  *(longlong *)(param_1 + 0x2a0) = local_b8;
  FUN_144a450dc(param_1 + 0x2b0,&local_a8);
  FUN_1449db362(&local_a8);
  FUN_140163244(param_1,1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a64d30 FUN_146a64d30 body=350 status=ok
// SIG undefined FUN_146a64d30(void)

void FUN_146a64d30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 *param_7,char param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 *local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  float local_7c;
  undefined8 local_78;
  undefined4 local_70;
  float local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_146adc7be(*(undefined8 *)(param_1 + 0x1f8));
  cVar1 = *(char *)(lVar2 + 0x78);
  puVar3 = (undefined8 *)(lVar2 + 0x68);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      puVar3 = (undefined8 *)FUN_1400c06fe(puVar3);
    }
    else if (cVar1 == '\x03') {
      puVar3 = (undefined8 *)(param_7 + 8);
    }
    else {
      puVar3 = (undefined8 *)(param_7 + 4);
    }
  }
  local_80 = *(undefined4 *)(puVar3 + 1);
  local_88 = *puVar3;
  local_7c = *(float *)((longlong)puVar3 + 0xc);
  local_98 = *param_7;
  uStack_94 = param_7[1];
  uStack_90 = param_7[2];
  uStack_8c = param_7[3];
  local_6c = local_7c * 0.6;
  if (param_8 == '\0') {
    local_a0 = 0;
  }
  else {
    local_a0 = *(undefined1 *)(param_1 + 0x3a);
  }
  local_a8 = &local_98;
  local_b0 = param_6;
  local_b8 = param_5;
  local_78 = local_88;
  local_70 = local_80;
  local_68 = local_88;
  local_60 = local_80;
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_48 = local_88;
  local_40 = local_80;
  FUN_146ae3ca4(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a64e90 FUN_146a64e90 body=57 status=ok
// SIG undefined FUN_146a64e90(void)

void FUN_146a64e90(longlong param_1,undefined4 param_2)

{
  FUN_146a64eca();
  FUN_146ae3ebe(*(undefined8 *)(param_1 + 0x1f8),param_2);
  FUN_14697dd72(param_1,param_2);
  return;
}



// FUNCTION 146a64eca FUN_146a64eca body=535 status=ok
// SIG undefined FUN_146a64eca(void)

void FUN_146a64eca(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_338 [32];
  longlong *local_318 [2];
  undefined1 local_308 [8];
  undefined1 local_300 [96];
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  undefined4 local_290;
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar3 = FUN_146adc7be(*(undefined8 *)(param_1 + 0x1f8));
  FUN_140e9ea3a(local_308,uVar3);
  if (*(char *)(param_1 + 0x260) == '\x01') {
    uVar3 = FUN_146a64b32(param_1 + 0x200);
    cVar2 = FUN_1408640d6(local_300,uVar3);
    if (cVar2 != '\0') goto LAB_146a64f10;
    FUN_1412cc59c(local_300,uVar3);
    bVar1 = true;
  }
  else {
LAB_146a64f10:
    bVar1 = false;
  }
  if (*(char *)(param_1 + 0x28c) == '\x01') {
    pfVar4 = (float *)FUN_1400c0682(param_1 + 0x278);
    if (((((local_2a0 == *pfVar4) && (!NAN(local_2a0) && !NAN(*pfVar4))) &&
         (fStack_29c == pfVar4[1])) &&
        ((!NAN(fStack_29c) && !NAN(pfVar4[1]) && (fStack_298 == pfVar4[2])))) &&
       (!NAN(fStack_298) && !NAN(pfVar4[2]))) {
      if (((fStack_294 == pfVar4[3]) && (!NAN(fStack_294) && !NAN(pfVar4[3]))) &&
         (((char)local_290 == *(char *)(pfVar4 + 4) &&
          (((char)local_290 != '\x01' || (local_290._1_1_ == *(char *)((longlong)pfVar4 + 0x11))))))
         ) goto LAB_146a64fa2;
    }
    local_290 = pfVar4[4];
    local_2a0 = *pfVar4;
    fStack_29c = pfVar4[1];
    fStack_298 = pfVar4[2];
    fStack_294 = pfVar4[3];
    bVar1 = true;
  }
LAB_146a64fa2:
  if (*(char *)(param_1 + 0x2a8) == '\x01') {
    if ((*(int *)(param_1 + 0x2b8) == 0) || (*(longlong **)(param_1 + 0x2b0) == (longlong *)0x0)) {
LAB_146a64ff0:
      lVar5 = *(longlong *)(param_1 + 0x2a0);
    }
    else {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x30))();
      if (cVar2 == '\0') goto LAB_146a64ff0;
      if (*(int *)(param_1 + 0x2b8) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x2b0);
      }
      lVar5 = (**(code **)(*plVar6 + 0x58))();
      *(longlong *)(param_1 + 0x2a0) = lVar5;
    }
    if (lVar5 == 0) goto LAB_146a65000;
    cVar2 = FUN_1469688aa(local_248,lVar5);
    if (cVar2 != '\0') goto LAB_146a65000;
    FUN_140f13d9e(local_248,lVar5);
  }
  else {
LAB_146a65000:
    if (!bVar1) goto LAB_146a65046;
  }
  FUN_146adc734(*(undefined8 *)(param_1 + 0x1f8),local_308);
  uVar3 = *(undefined8 *)(param_1 + 0x1f8);
  FUN_146adb77e(uVar3,local_318);
  FUN_146ade2ee(uVar3,local_318);
  if (local_318[0] != (longlong *)0x0) {
    (**(code **)(*local_318[0] + 0x10))();
  }
LAB_146a65046:
  FUN_140e9e952(local_308);
  if ((local_28 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a650e2 FUN_146a650e2 body=122 status=ok
// SIG undefined FUN_146a650e2(void)

double * FUN_146a650e2(longlong param_1,double *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  double dVar4;
  
  FUN_146ae4348(*(undefined8 *)(param_1 + 0x1f8));
  if ((*(int *)(param_1 + 1000) != 0) && (*(longlong **)(param_1 + 0x3e0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 1000) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x3e0);
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *(undefined4 *)(param_1 + 0x3d8) = uVar3;
    }
  }
  dVar4 = *param_2;
  if (*param_2 <= (double)*(float *)(param_1 + 0x3d8)) {
    dVar4 = (double)*(float *)(param_1 + 0x3d8);
  }
  *param_2 = dVar4;
  return param_2;
}



// FUNCTION 146a65174 FUN_146a65174 body=182 status=ok
// SIG undefined FUN_146a65174(void)

byte * FUN_146a65174(undefined8 param_1,byte *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_4 + 0x78);
  if (plVar6 != (longlong *)0x0) {
    FUN_14694bfbc();
    cVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
    if (cVar4 != '\0') {
      lVar3 = *(longlong *)(param_4 + 0x78);
      plVar6 = *(longlong **)(param_4 + 0x80);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (lVar3 == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = *(byte *)(lVar3 + 0x60) & 1;
      }
      goto LAB_146a6518b;
    }
  }
  bVar5 = 0;
  plVar6 = (longlong *)0x0;
LAB_146a6518b:
  *param_2 = bVar5;
  param_2[0x20] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = 2;
  param_2[0xb1] = 7;
  param_2[0xb2] = 2;
  param_2[0xb3] = 0;
  param_2[0xb4] = 0;
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
  return param_2;
}



// FUNCTION 146a6522a FUN_146a6522a body=344 status=ok
// SIG undefined FUN_146a6522a(void)

undefined1 * FUN_146a6522a(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  longlong *local_58 [2];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = *(longlong **)(param_4 + 0x78);
  if (plVar7 != (longlong *)0x0) {
    FUN_14694bfbc();
    cVar6 = (**(code **)(*plVar7 + 0x50))(plVar7);
    if (cVar6 != '\0') {
      lVar3 = *(longlong *)(param_4 + 0x78);
      plVar7 = *(longlong **)(param_4 + 0x80);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x60) & 1) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x1f8);
        FUN_140009b9a(local_68,lVar3 + 0x40);
        FUN_14023423e(local_58,local_68);
        local_48 = 1;
        local_40 = 0;
        uStack_38 = 0;
        FUN_146adb44a(uVar4);
        FUN_1449db362(&local_40);
        if (local_58[0] != (longlong *)0x0) {
          (**(code **)(*local_58[0] + 0x10))();
        }
        if (local_68[0] != (longlong *)0x0) {
          (**(code **)(*local_68[0] + 0x10))();
        }
        uVar5 = 1;
      }
      goto LAB_146a65254;
    }
  }
  uVar5 = 0;
  plVar7 = (longlong *)0x0;
LAB_146a65254:
  *param_2 = uVar5;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (plVar7 != (longlong *)0x0) {
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65388 FUN_146a65388 body=84 status=ok
// SIG undefined FUN_146a65388(void)

undefined1 * FUN_146a65388(longlong param_1,undefined1 *param_2)

{
  FUN_146adea14(*(undefined8 *)(param_1 + 0x1f8));
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a653e8 FUN_146a653e8 body=283 status=ok
// SIG undefined FUN_146a653e8(void)

char * FUN_146a653e8(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [184];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = '\0';
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
  if ((*(int *)(param_1 + 0x428) != 0) && (*(longlong **)(param_1 + 0x420) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x428) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x420);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,local_f0,param_3,param_4);
      FUN_1403d4924(param_2,local_f0);
      FUN_14493db24(local_f0);
    }
  }
  if (*param_2 == '\0') {
    FUN_146adef86(*(undefined8 *)(param_1 + 0x1f8),local_f0,param_4);
    FUN_1403d4924(param_2,local_f0);
    FUN_14493db24(local_f0);
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65504 FUN_146a65504 body=331 status=ok
// SIG undefined FUN_146a65504(void)

char * FUN_146a65504(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [184];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = '\0';
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
  if ((*(int *)(param_1 + 0x438) != 0) && (*(longlong **)(param_1 + 0x430) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x438) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x430);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,local_f0,param_3,param_4);
      FUN_1403d4924(param_2,local_f0);
      FUN_14493db24(local_f0);
    }
  }
  if (*param_2 == '\0') {
    FUN_146adf3a6(*(undefined8 *)(param_1 + 0x1f8),local_f0,param_4);
    FUN_1403d4924(param_2,local_f0);
    FUN_14493db24(local_f0);
    if (*param_2 == '\0') {
      FUN_14171f816(param_1,local_f0,param_3,param_4);
      FUN_1403d4924(param_2,local_f0);
      FUN_14493db24(local_f0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65650 FUN_146a65650 body=32 status=ok
// SIG undefined FUN_146a65650(void)

undefined8 FUN_146a65650(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_146ae06fa(*(undefined8 *)(param_1 + 0x1f8),param_2,param_4);
  return param_2;
}



// FUNCTION 146a65670 FUN_146a65670 body=29 status=ok
// SIG undefined FUN_146a65670(void)

undefined8 FUN_146a65670(longlong param_1,undefined8 param_2)

{
  FUN_146ae07dc(*(undefined8 *)(param_1 + 0x1f8));
  return param_2;
}



// FUNCTION 146a6568e FUN_146a6568e body=29 status=ok
// SIG undefined FUN_146a6568e(void)

undefined8 FUN_146a6568e(longlong param_1,undefined8 param_2)

{
  FUN_146ae1020(*(undefined8 *)(param_1 + 0x1f8));
  return param_2;
}



// FUNCTION 146a656ac FUN_146a656ac body=29 status=ok
// SIG undefined FUN_146a656ac(void)

undefined8 FUN_146a656ac(longlong param_1,undefined8 param_2)

{
  FUN_146ae1a02(*(undefined8 *)(param_1 + 0x1f8));
  return param_2;
}



// FUNCTION 146a656ca FUN_146a656ca body=29 status=ok
// SIG undefined FUN_146a656ca(void)

undefined8 FUN_146a656ca(longlong param_1,undefined8 param_2)

{
  FUN_146ae1c4e(*(undefined8 *)(param_1 + 0x1f8));
  return param_2;
}



// FUNCTION 146a6570e FUN_146a6570e body=254 status=ok
// SIG undefined FUN_146a6570e(void)

ulonglong FUN_146a6570e(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  
  cVar1 = (**(code **)(*param_1 + 0x198))();
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 == '\0') {
    cVar1 = FUN_146ae3430(param_1[0x3f]);
    if (cVar1 == '\0') {
      if (((int)param_1[0x4e] != 0) && ((longlong *)param_1[0x4d] != (longlong *)0x0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x4d] + 0x30))();
        if (cVar1 != '\0') goto LAB_146a65737;
      }
      if (((int)param_1[0x53] != 0) && ((longlong *)param_1[0x52] != (longlong *)0x0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x52] + 0x30))();
        if (cVar1 != '\0') goto LAB_146a65737;
      }
      if (((int)param_1[0x57] != 0) && ((longlong *)param_1[0x56] != (longlong *)0x0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x56] + 0x30))();
        if (cVar1 != '\0') goto LAB_146a65737;
      }
      if (((int)param_1[0x5a] != 0) && ((longlong *)param_1[0x59] != (longlong *)0x0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x59] + 0x30))();
        if (cVar1 != '\0') goto LAB_146a65737;
      }
      if (((int)param_1[0x5d] != 0) && ((longlong *)param_1[0x5c] != (longlong *)0x0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x5c] + 0x30))();
        if (cVar1 != '\0') goto LAB_146a65737;
      }
      if (((int)param_1[0x7d] != 0) && ((longlong *)param_1[0x7c] != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146a65801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*(longlong *)param_1[0x7c] + 0x30))();
        return uVar2;
      }
      uVar2 = 0;
    }
  }
LAB_146a65737:
  return uVar2 & 0xffffffff;
}



// FUNCTION 146a6580c FUN_146a6580c body=12 status=ok
// SIG undefined FUN_146a6580c(void)

void FUN_146a6580c(longlong param_1)

{
  FUN_146adc2f4(*(undefined8 *)(param_1 + 0x1f8));
  return;
}



// FUNCTION 146a65818 FUN_146a65818 body=29 status=ok
// SIG undefined FUN_146a65818(void)

undefined8 FUN_146a65818(longlong param_1,undefined8 param_2)

{
  FUN_146adc578(*(undefined8 *)(param_1 + 0x1f8));
  return param_2;
}



// FUNCTION 146a65836 FUN_146a65836 body=47 status=ok
// SIG undefined FUN_146a65836(void)

void FUN_146a65836(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x2c0) = *param_2;
  FUN_14096c7c0(param_1 + 0x2c8,param_2 + 4);
  FUN_1449db362(param_2 + 4);
  return;
}



// FUNCTION 146a65866 FUN_146a65866 body=76 status=ok
// SIG undefined FUN_146a65866(void)

void FUN_146a65866(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x2d8) = *param_2;
  FUN_14096c7c0(param_1 + 0x2e0,param_2 + 4);
  FUN_146a207fc(*(undefined8 *)(param_1 + 0x1e8),param_1 + 0x2d8);
  FUN_1449db362(param_2 + 4);
  return;
}



// FUNCTION 146a658b2 FUN_146a658b2 body=33 status=ok
// SIG undefined FUN_146a658b2(void)

void FUN_146a658b2(longlong param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_1 + 0x3dc) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x3d8) = *param_2;
  FUN_140a52b3c(param_1 + 0x3e0,param_2 + 2);
  return;
}



// FUNCTION 146a658d4 FUN_146a658d4 body=26 status=ok
// SIG undefined FUN_146a658d4(void)

void FUN_146a658d4(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x2f0) = *param_2;
  FUN_14096c7c0(param_1 + 0x2f8,param_2 + 4);
  return;
}



// FUNCTION 146a658ee FUN_146a658ee body=26 status=ok
// SIG undefined FUN_146a658ee(void)

void FUN_146a658ee(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x308) = *param_2;
  FUN_14096c7c0(param_1 + 0x310,param_2 + 4);
  return;
}



// FUNCTION 146a65908 FUN_146a65908 body=26 status=ok
// SIG undefined FUN_146a65908(void)

void FUN_146a65908(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 800) = *param_2;
  FUN_14096c7c0(param_1 + 0x328,param_2 + 4);
  return;
}



// FUNCTION 146a65922 FUN_146a65922 body=26 status=ok
// SIG undefined FUN_146a65922(void)

void FUN_146a65922(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x338) = *param_2;
  FUN_14096c7c0(param_1 + 0x340,param_2 + 4);
  return;
}



// FUNCTION 146a6593c FUN_146a6593c body=26 status=ok
// SIG undefined FUN_146a6593c(void)

void FUN_146a6593c(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x350) = *param_2;
  FUN_14096c7c0(param_1 + 0x358,param_2 + 4);
  return;
}



// FUNCTION 146a65956 FUN_146a65956 body=12 status=ok
// SIG undefined FUN_146a65956(void)

void FUN_146a65956(longlong param_1)

{
  FUN_146add9b6(*(undefined8 *)(param_1 + 0x1f8));
  return;
}



// FUNCTION 146a65962 FUN_146a65962 body=26 status=ok
// SIG undefined FUN_146a65962(void)

void FUN_146a65962(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x380) = *param_2;
  FUN_14096c7c0(param_1 + 0x388,param_2 + 4);
  return;
}



// FUNCTION 146a6597c FUN_146a6597c body=47 status=ok
// SIG undefined FUN_146a6597c(void)

void FUN_146a6597c(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x478) = *param_2;
  FUN_146a74d60(param_1 + 0x480,param_2 + 4);
  FUN_1449db362(param_2 + 4);
  return;
}



// FUNCTION 146a659ac FUN_146a659ac body=12 status=ok
// SIG undefined FUN_146a659ac(void)

void FUN_146a659ac(longlong param_1)

{
  FUN_146add60e(*(undefined8 *)(param_1 + 0x1f8));
  return;
}



// FUNCTION 146a659b8 FUN_146a659b8 body=12 status=ok
// SIG undefined FUN_146a659b8(void)

void FUN_146a659b8(longlong param_1)

{
  FUN_146add646(*(undefined8 *)(param_1 + 0x1f8));
  return;
}



// FUNCTION 146a659c4 FUN_146a659c4 body=95 status=ok
// SIG undefined FUN_146a659c4(void)

void FUN_146a659c4(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_38 [38];
  undefined1 local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = param_2[1];
  if (local_11 == '\x01') {
    local_12 = *param_2;
  }
  FUN_146addc80(*(undefined8 *)(param_1 + 0x1f8),&local_12);
  if (param_2[1] == '\x01') {
    param_2[1] = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65a24 FUN_146a65a24 body=68 status=ok
// SIG undefined FUN_146a65a24(void)

undefined1 FUN_146a65a24(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 0xe0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65a6a FUN_146a65a6a body=68 status=ok
// SIG undefined FUN_146a65a6a(void)

undefined1 FUN_146a65a6a(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 0xf8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65ab4 FUN_146a65ab4 body=68 status=ok
// SIG undefined FUN_146a65ab4(void)

undefined1 FUN_146a65ab4(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 0x110);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65afa FUN_146a65afa body=68 status=ok
// SIG undefined FUN_146a65afa(void)

undefined1 FUN_146a65afa(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 0x128);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65b44 FUN_146a65b44 body=68 status=ok
// SIG undefined FUN_146a65b44(void)

undefined1 FUN_146a65b44(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 0x140);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65b8a FUN_146a65b8a body=68 status=ok
// SIG undefined FUN_146a65b8a(void)

undefined1 FUN_146a65b8a(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 0x158);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65bd0 FUN_146a65bd0 body=68 status=ok
// SIG undefined FUN_146a65bd0(void)

undefined1 FUN_146a65bd0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 0x170);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65c16 FUN_146a65c16 body=68 status=ok
// SIG undefined FUN_146a65c16(void)

undefined1 FUN_146a65c16(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 1;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 0x188);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a65c60 FUN_146a65c60 body=94 status=ok
// SIG undefined FUN_146a65c60(void)

bool FUN_146a65c60(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x1d0) != 0) && (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x1d0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x1c8);
      }
                    /* WARNING: Could not recover jumptable at 0x000146a65ca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
      return (bool)uVar2;
    }
  }
  return (short)param_2 != 9;
}



// FUNCTION 146a65cbe FUN_146a65cbe body=374 status=ok
// SIG undefined FUN_146a65cbe(void)

void FUN_146a65cbe(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x228);
  bVar2 = true;
  if (plVar9 == (longlong *)0x0) {
LAB_146a65d0e:
    plVar9 = (longlong *)0x0;
LAB_146a65d10:
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,2,0x10);
    puVar3 = local_58;
    local_50 = 2;
    *local_58 = &PTR_LAB_149ed0600;
    uVar6 = FUN_144a3f946();
    puVar3[2] = uVar6;
    *puVar3 = &PTR_FUN_149f12470;
    puVar3[3] = param_1 + -0x1e0;
    FUN_14697ef1e(param_1 + -0x1e0,&local_48,0x3f000000,&local_58);
    plVar8 = local_40;
    *(undefined8 *)(param_1 + 0x220) = local_48;
    plVar7 = *(longlong **)(param_1 + 0x228);
    if (plVar7 != local_40) {
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x228);
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
      *(longlong **)(param_1 + 0x228) = plVar8;
      plVar8 = local_40;
    }
    if (plVar8 != (longlong *)0x0) {
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
    if (bVar2) goto LAB_146a65e11;
  }
  else {
    iVar5 = (int)plVar9[1];
    do {
      if (iVar5 == 0) goto LAB_146a65d0e;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    if (*(longlong *)(param_1 + 0x220) == 0) {
      bVar2 = false;
      goto LAB_146a65d10;
    }
  }
  LOCK();
  plVar7 = plVar9 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_146a65e11:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a65e36 FUN_146a65e36 body=83 status=ok
// SIG undefined FUN_146a65e36(void)

undefined4 FUN_146a65e36(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x270) != 0) && (*(longlong **)(param_1 + 0x268) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x270) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x268);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(param_1 + 0x260) = uVar2;
    }
  }
  return *(undefined4 *)(param_1 + 0x260);
}



// FUNCTION 146a65e96 FUN_146a65e96 body=83 status=ok
// SIG undefined FUN_146a65e96(void)

undefined1 FUN_146a65e96(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x290) != 0) && (*(longlong **)(param_1 + 0x288) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x290) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x288);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x280) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x280);
}



// FUNCTION 146a65eea FUN_146a65eea body=83 status=ok
// SIG undefined FUN_146a65eea(void)

undefined1 FUN_146a65eea(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x2a8) != 0) && (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x2a8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x2a0);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x298) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x298);
}



// FUNCTION 146a65f80 FUN_146a65f80 body=119 status=ok
// SIG undefined FUN_146a65f80(void)

undefined8 * FUN_146a65f80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + -0x1d8) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x1d0), plVar3 == (longlong *)0x0)) ||
     ((int)plVar3[1] < 1)) {
LAB_146a65fe7:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146a65fe7;
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
    *param_2 = *(undefined8 *)(param_1 + -0x1d8);
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



// FUNCTION 146a65ff8 FUN_146a65ff8 body=317 status=ok
// SIG undefined FUN_146a65ff8(void)

undefined8 * FUN_146a65ff8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1b0) != 0) && (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x1b0) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x1a8);
      }
      uVar3 = (**(code **)(*plVar4 + 0x58))();
      *(undefined1 *)(param_1 + 0x1a0) = uVar3;
    }
  }
  if (*(char *)(param_1 + 0x1a0) != '\0') {
    if ((*(int *)(param_1 + 0x1c0) != 0) && (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x30))();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x1c0) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x1b8);
        }
        (**(code **)(*plVar4 + 0x58))(plVar4,param_2);
        goto LAB_146a660a0;
      }
    }
    FUN_146ae4930(*(undefined8 *)(param_1 + 0x18),&local_30,param_1 + 0x210);
    *param_2 = local_30;
    param_2[1] = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_28 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    }
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_146a660a0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 146a66184 FUN_146a66184 body=69 status=ok
// SIG undefined FUN_146a66184(void)

void FUN_146a66184(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_146ade9b2(*(undefined8 *)(param_1 + 0x18),local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18[0]);
}



// FUNCTION 146a661ce FUN_146a661ce body=461 status=ok
// SIG undefined FUN_146a661ce(void)

longlong * FUN_146a661ce(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x78,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_146a6620c:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146a6620c;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_146a6639e(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_146a66348;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_146a66348;
LAB_146a662ab:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_146a66348;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_146a662ab;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_146a66348:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a6639e FUN_146a6639e body=154 status=ok
// SIG undefined FUN_146a6639e(void)

undefined8 * FUN_146a6639e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,10);
  *param_1 = &PTR_FUN_149f113e0;
  param_1[0xd] = &PTR_FUN_149f114d0;
  param_1[0xe] = &PTR_FUN_149f114e0;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6643a FUN_146a6643a body=101 status=ok
// SIG undefined FUN_146a6643a(void)

undefined8 FUN_146a6643a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146adc578(*(undefined8 *)(param_1 + 0x1f8),local_28);
  FUN_14023423e(param_2,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a664a0 FUN_146a664a0 body=341 status=ok
// SIG undefined FUN_146a664a0(void)

undefined8 * FUN_146a664a0(undefined8 *param_1)

{
  FUN_140a55e66();
  *param_1 = &PTR_FUN_149f109e0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x61] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ff) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0x3f80000000000000;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0x41c00000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x344) = 2;
  *(undefined1 *)((longlong)param_1 + 0x346) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0x3f800000;
  param_1[0x6e] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0x3f800000;
  param_1[0x73] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a4) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0x3f800000;
  param_1[0x78] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0x3f800000;
  param_1[0x7d] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) & 0xfb;
  return param_1;
}



// FUNCTION 146a665f6 FUN_146a665f6 body=327 status=ok
// SIG undefined FUN_146a665f6(void)

void FUN_146a665f6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f109e0;
  FUN_1449db362(param_1 + 0x89);
  FUN_1449db362(param_1 + 0x87);
  FUN_1449db362(param_1 + 0x85);
  plVar3 = (longlong *)param_1[0x84];
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
  plVar3 = (longlong *)param_1[0x82];
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
  FUN_1449db362(param_1 + 0x7f);
  FUN_1449db362(param_1 + 0x7a);
  FUN_1449db362(param_1 + 0x75);
  FUN_1449db362(param_1 + 0x70);
  FUN_141515cba(param_1 + 0x5e);
  FUN_1449db362(param_1 + 0x5c);
  plVar3 = (longlong *)param_1[0x58];
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
  plVar3 = (longlong *)param_1[0x56];
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146a6673e FUN_146a6673e body=4175 status=ok
// SIG undefined FUN_146a6673e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146a6673e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 auStack_1068 [32];
  undefined1 *local_1048;
  longlong local_1038;
  undefined8 local_1030;
  undefined1 local_1021;
  undefined8 local_1020;
  longlong *local_1018;
  undefined1 local_1001;
  code *local_1000;
  undefined4 local_ff8;
  undefined4 uStack_ff4;
  undefined1 local_fe1;
  code *local_fe0;
  undefined4 local_fd8;
  undefined4 uStack_fd4;
  undefined2 local_fc8;
  undefined8 local_fc0;
  undefined4 local_fb8;
  undefined2 local_fb0;
  undefined8 local_fa8;
  undefined4 local_fa0;
  undefined4 local_f98;
  undefined1 local_f94;
  undefined8 local_f90;
  undefined4 local_f88;
  undefined2 local_f80;
  undefined8 local_f78;
  undefined4 local_f70;
  undefined2 local_f68;
  undefined8 local_f60;
  undefined4 local_f58;
  undefined4 local_f50;
  undefined1 local_f4c;
  undefined8 local_f48;
  undefined4 local_f40;
  undefined2 local_f38;
  undefined8 local_f30;
  undefined4 local_f28;
  undefined4 local_f20;
  undefined1 local_f1c;
  undefined8 local_f18;
  undefined4 local_f10;
  undefined2 local_f08;
  undefined8 local_f00;
  undefined4 local_ef8;
  undefined2 local_ef0;
  undefined8 local_ee8;
  undefined4 local_ee0;
  undefined2 local_ed8;
  undefined8 local_ed0;
  undefined4 local_ec8;
  undefined2 local_ec0;
  undefined8 local_eb8;
  undefined4 local_eb0;
  undefined2 local_ea8;
  undefined8 local_ea0;
  undefined4 local_e98;
  undefined2 local_e90;
  undefined8 local_e88;
  undefined4 local_e80;
  longlong *local_e78;
  undefined4 local_e70;
  undefined1 local_e68;
  undefined8 local_e60;
  undefined4 local_e58;
  longlong *local_e50;
  undefined4 local_e48;
  undefined1 local_e40;
  undefined8 local_e38;
  undefined4 local_e30;
  longlong *local_e28;
  undefined4 local_e20;
  undefined1 local_e18;
  undefined8 local_e10;
  undefined4 local_e08;
  undefined8 local_e00;
  longlong *local_df8;
  undefined8 local_df0;
  longlong *local_de8;
  undefined8 local_de0;
  longlong *local_dd8;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  longlong *local_db0;
  code *local_da8;
  undefined8 uStack_da0;
  undefined1 local_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined2 local_a80;
  undefined1 local_a78 [16];
  undefined2 local_a68;
  undefined1 local_a60 [16];
  undefined2 local_a50;
  undefined1 local_a48 [16];
  undefined2 local_a38;
  undefined1 local_a30 [16];
  undefined2 local_a20;
  undefined1 local_a18 [16];
  undefined2 local_a08;
  undefined1 local_a00 [16];
  undefined2 local_9f0;
  undefined1 local_9e8 [16];
  undefined4 local_9d8;
  undefined1 local_9d4;
  undefined1 local_9d0 [16];
  undefined2 local_9c0;
  undefined1 local_9b8 [16];
  undefined1 local_9a8 [32];
  undefined1 local_988 [16];
  undefined1 local_978 [16];
  undefined4 local_968;
  undefined1 local_964;
  undefined1 local_960 [16];
  undefined2 local_950;
  undefined1 local_948 [16];
  undefined1 auStack_938 [16];
  undefined1 auStack_928 [16];
  undefined1 local_918 [16];
  undefined4 local_908;
  undefined1 local_904;
  undefined1 local_900 [16];
  undefined1 local_8f0;
  undefined2 local_8e8;
  undefined1 local_8e0 [16];
  undefined2 local_8d0;
  undefined1 local_8c8 [16];
  undefined1 local_8b8;
  char local_8b7;
  undefined1 local_8b6;
  char local_8b5;
  undefined1 local_8b4;
  char local_8b3;
  undefined1 local_8b0 [428];
  undefined4 local_704;
  undefined8 uStack_6d8;
  longlong *local_6d0;
  undefined1 local_608 [64];
  undefined4 local_5c8;
  undefined1 local_5c4;
  undefined4 local_5c0;
  undefined1 local_5bc;
  undefined1 local_548 [440];
  undefined8 local_390;
  longlong *plStack_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8 [344];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146a66754;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1068;
  FUN_146a6778e(param_1,*(undefined8 *)(param_2 + 0x1a8));
  uVar7 = *(undefined4 *)(param_2 + 0x4bc);
  uVar8 = *(undefined4 *)(param_2 + 0x4c0);
  uVar9 = *(undefined4 *)(param_2 + 0x4c4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x4b8);
  *(undefined4 *)(param_1 + 0x2cc) = uVar7;
  *(undefined4 *)(param_1 + 0x2d0) = uVar8;
  *(undefined4 *)(param_1 + 0x2d4) = uVar9;
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x4c8);
  FUN_140a58be0(param_1 + 0x2e0,param_2 + 0x4d0);
  FUN_1412cc59c(param_1 + 0x2f0,param_2 + 0x228);
  *(undefined1 *)(param_1 + 0x350) = *(undefined1 *)(param_2 + 0x288);
  FUN_140a5d470(param_1 + 0x358,param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x2b0);
  uVar7 = *(undefined4 *)(param_2 + 0x2a4);
  uVar8 = *(undefined4 *)(param_2 + 0x2a8);
  uVar9 = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x36c) = uVar7;
  *(undefined4 *)(param_1 + 0x370) = uVar8;
  *(undefined4 *)(param_1 + 0x374) = uVar9;
  *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x2b4);
  FUN_140a5aaa0(param_1 + 0x380,param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x4a0);
  uVar7 = *(undefined4 *)(param_2 + 0x494);
  uVar8 = *(undefined4 *)(param_2 + 0x498);
  uVar9 = *(undefined4 *)(param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x394) = uVar7;
  *(undefined4 *)(param_1 + 0x398) = uVar8;
  *(undefined4 *)(param_1 + 0x39c) = uVar9;
  *(undefined1 *)(param_1 + 0x3a4) = *(undefined1 *)(param_2 + 0x4a4);
  FUN_140a5aaa0(param_1 + 0x3a8,param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x2d8);
  uVar7 = *(undefined4 *)(param_2 + 0x2cc);
  uVar8 = *(undefined4 *)(param_2 + 0x2d0);
  uVar9 = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x3bc) = uVar7;
  *(undefined4 *)(param_1 + 0x3c0) = uVar8;
  *(undefined4 *)(param_1 + 0x3c4) = uVar9;
  *(undefined1 *)(param_1 + 0x3cc) = *(undefined1 *)(param_2 + 0x2dc);
  FUN_140a5aaa0(param_1 + 0x3d0,param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x300);
  uVar7 = *(undefined4 *)(param_2 + 0x2f4);
  uVar8 = *(undefined4 *)(param_2 + 0x2f8);
  uVar9 = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x3e4) = uVar7;
  *(undefined4 *)(param_1 + 1000) = uVar8;
  *(undefined4 *)(param_1 + 0x3ec) = uVar9;
  *(undefined1 *)(param_1 + 0x3f4) = *(undefined1 *)(param_2 + 0x304);
  FUN_140a5aaa0(param_1 + 0x3f8,param_2 + 0x308);
  FUN_14628081e(param_1 + 0x428,param_2 + 0x3f8);
  FUN_146a24ff4(param_1 + 0x448,param_2 + 0x418);
  FUN_146a25078(param_1 + 0x438,param_2 + 0x408);
  FUN_140a562d0(&local_390);
  local_da8 = FUN_146a6792a;
  uStack_da0._0_4_ = 0;
  FUN_146a67876(&local_390,param_1,&local_da8);
  local_da8 = FUN_146a67a52;
  uStack_da0._0_4_ = 0;
  FUN_146a67988(&local_390,param_1,&local_da8);
  local_da8 = FUN_146a67b5c;
  uStack_da0 = (ulonglong)uStack_da0._4_4_ << 0x20;
  FUN_146a67a92(&local_390,param_1,&local_da8);
  local_da8 = (code *)0x0;
  uStack_da0 = 0;
  local_d98 = 1;
  local_d90 = 0;
  uStack_d88 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 1;
  FUN_144a450dc(local_1b8,&local_d90);
  FUN_1449db362(&local_d90);
  FUN_140a5296a(local_548);
  FUN_140a50426(local_608);
  local_5c0 = 0;
  local_5bc = 1;
  local_5c8 = 0;
  local_5c4 = 1;
  local_dd0 = 0x3f800000;
  local_dcc = 1;
  local_dc8 = 0;
  uStack_dc0 = 0;
  local_1030 = FUN_140a5475a(local_608);
  FUN_140a53a96(local_8b0);
  local_da8 = FUN_146a67cf4;
  uStack_da0 = uStack_da0 & 0xffffffff00000000;
  FUN_146a67c3c(local_8b0,param_1,&local_da8);
  local_704 = 2;
  FUN_146a63634(&local_da8);
  local_e28 = *(longlong **)(param_2 + 0x1b0);
  if (local_e28 != (longlong *)0x0) {
    (**(code **)(*local_e28 + 8))();
  }
  local_e20 = *(undefined4 *)(param_2 + 0x1b8);
  local_e18 = *(undefined1 *)(param_2 + 0x1c0);
  local_e10 = 0;
  local_e08 = 0;
  FUN_1413a4324(&local_e10,param_2 + 0x1c8);
  FUN_146a6394a(&local_da8,&local_e28);
  local_e50 = *(longlong **)(param_2 + 0x1d8);
  if (local_e50 != (longlong *)0x0) {
    (**(code **)(*local_e50 + 8))();
  }
  local_e48 = *(undefined4 *)(param_2 + 0x1e0);
  local_e40 = *(undefined1 *)(param_2 + 0x1e8);
  local_e38 = 0;
  local_e30 = 0;
  FUN_1413a4324(&local_e38,param_2 + 0x1f0);
  FUN_146a67d2e(&local_da8,&local_e50);
  local_e78 = *(longlong **)(param_2 + 0x200);
  if (local_e78 != (longlong *)0x0) {
    (**(code **)(*local_e78 + 8))();
  }
  local_e70 = *(undefined4 *)(param_2 + 0x208);
  local_e68 = *(undefined1 *)(param_2 + 0x210);
  local_e60 = 0;
  local_e58 = 0;
  FUN_1413a4324(&local_e60,param_2 + 0x218);
  FUN_146a67d84(&local_da8,&local_e78);
  local_fe0 = FUN_146a67ee0;
  local_fd8 = 0;
  FUN_146a67dda(&local_da8,param_1);
  local_e90 = *(undefined2 *)(param_2 + 0x318);
  local_e88 = 0;
  local_e80 = 0;
  FUN_14096c7c0(&local_e88,param_2 + 800);
  local_a80 = local_e90;
  local_1038 = param_1;
  FUN_144a450dc(local_a78,&local_e88);
  FUN_1449db362(&local_e88);
  local_ea8 = *(undefined2 *)(param_2 + 0x330);
  local_ea0 = 0;
  local_e98 = 0;
  FUN_14096c7c0(&local_ea0,param_2 + 0x338);
  local_a68 = local_ea8;
  FUN_144a450dc(local_a60,&local_ea0);
  FUN_1449db362(&local_ea0);
  local_ec0 = *(undefined2 *)(param_2 + 0x348);
  local_eb8 = 0;
  local_eb0 = 0;
  FUN_14096c7c0(&local_eb8,param_2 + 0x350);
  local_a50 = local_ec0;
  FUN_144a450dc(local_a48,&local_eb8);
  FUN_1449db362(&local_eb8);
  local_ed8 = *(undefined2 *)(param_2 + 0x360);
  local_ed0 = 0;
  local_ec8 = 0;
  FUN_14096c7c0(&local_ed0,param_2 + 0x368);
  local_a38 = local_ed8;
  FUN_144a450dc(local_a30,&local_ed0);
  FUN_1449db362(&local_ed0);
  local_ef0 = *(undefined2 *)(param_2 + 0x378);
  local_ee8 = 0;
  local_ee0 = 0;
  FUN_14096c7c0(&local_ee8,param_2 + 0x380);
  local_a08 = local_ef0;
  FUN_144a450dc(local_a00,&local_ee8);
  FUN_1449db362(&local_ee8);
  local_f08 = *(undefined2 *)(param_2 + 0x390);
  local_f00 = 0;
  local_ef8 = 0;
  FUN_14096c7c0(&local_f00,param_2 + 0x398);
  local_9f0 = local_f08;
  FUN_144a450dc(local_9e8,&local_f00);
  FUN_1449db362(&local_f00);
  local_f1c = *(undefined1 *)(param_2 + 0x3ac);
  local_f20 = *(undefined4 *)(param_2 + 0x3a8);
  local_f18 = 0;
  local_f10 = 0;
  FUN_140a5d648(&local_f18,param_2 + 0x3b0);
  local_9d4 = local_f1c;
  local_9d8 = local_f20;
  FUN_144a450dc(local_9d0,&local_f18);
  FUN_1449db362(&local_f18);
  local_f38 = *(undefined2 *)(param_2 + 0x3c0);
  local_f30 = 0;
  local_f28 = 0;
  FUN_14096c7c0(&local_f30,param_2 + 0x3c8);
  local_9c0 = local_f38;
  FUN_144a450dc(local_9b8,&local_f30);
  FUN_1449db362(&local_f30);
  FUN_146a3c65e(local_9a8,param_2 + 0x3d8);
  FUN_146a26a60(local_918,param_2 + 1000);
  lVar10 = local_1038;
  local_1000 = FUN_146a67f20;
  local_ff8 = 0;
  FUN_146a7dc08(&local_fe0,local_1038,&local_1000);
  FUN_144a450dc(local_988,&local_fe0);
  FUN_1449db362(&local_fe0);
  local_1000 = FUN_146a67ff8;
  local_ff8 = 0;
  FUN_146a7e0aa(&local_fe0,lVar10,&local_1000);
  FUN_144a450dc(local_978,&local_fe0);
  FUN_1449db362(&local_fe0);
  local_f50 = *(undefined4 *)(param_2 + 0x428);
  local_f4c = *(undefined1 *)(param_2 + 0x42c);
  local_f48 = 0;
  local_f40 = 0;
  FUN_140a52b3c(&local_f48,param_2 + 0x430);
  local_964 = local_f4c;
  local_968 = local_f50;
  FUN_144a450dc(local_960,&local_f48);
  FUN_1449db362(&local_f48);
  local_f68 = *(undefined2 *)(param_2 + 0x440);
  local_f60 = 0;
  local_f58 = 0;
  FUN_14096c7c0(&local_f60,param_2 + 0x448);
  local_950 = local_f68;
  FUN_144a450dc(local_948,&local_f60);
  FUN_1449db362(&local_f60);
  local_f80 = *(undefined2 *)(param_2 + 0x458);
  local_f78 = 0;
  local_f70 = 0;
  FUN_14096c7c0(&local_f78,param_2 + 0x460);
  local_a20 = local_f80;
  FUN_144a450dc(local_a18,&local_f78);
  FUN_1449db362(&local_f78);
  FUN_146a75d12(auStack_938,param_2 + 0x470);
  FUN_14603678a(auStack_928,param_2 + 0x480);
  local_f94 = *(undefined1 *)(param_2 + 0x4f4);
  local_f98 = *(undefined4 *)(param_2 + 0x4f0);
  local_f90 = 0;
  local_f88 = 0;
  FUN_146a74c58(&local_f90,param_2 + 0x4f8);
  local_904 = local_f94;
  local_908 = local_f98;
  FUN_144a450dc(local_900,&local_f90);
  FUN_1449db362(&local_f90);
  local_8f0 = *(undefined1 *)(param_2 + 0x508);
  local_fb0 = *(undefined2 *)(param_2 + 0x510);
  local_fa8 = 0;
  local_fa0 = 0;
  FUN_146a74cdc(&local_fa8,param_2 + 0x518);
  local_8e8 = local_fb0;
  FUN_144a450dc(local_8e0,&local_fa8);
  FUN_1449db362(&local_fa8);
  local_fc8 = *(undefined2 *)(param_2 + 0x528);
  local_fc0 = 0;
  local_fb8 = 0;
  FUN_146a74d60(&local_fc0,param_2 + 0x530);
  local_8d0 = local_fc8;
  FUN_144a450dc(local_8c8,&local_fc0);
  FUN_1449db362(&local_fc0);
  lVar10 = local_1038;
  if (*(char *)(param_2 + 0x541) == '\0') {
    if (local_8b7 == '\x01') {
      local_8b7 = '\0';
    }
  }
  else {
    local_8b8 = *(undefined1 *)(param_2 + 0x540);
    local_8b7 = '\x01';
  }
  if (*(char *)(param_2 + 0x543) == '\0') {
    if (local_8b5 == '\x01') {
      local_8b5 = '\0';
    }
  }
  else {
    local_8b6 = *(undefined1 *)(param_2 + 0x542);
    local_8b5 = '\x01';
  }
  if (*(char *)(param_2 + 0x545) == '\0') {
    if (local_8b3 == '\x01') {
      local_8b3 = '\0';
    }
  }
  else {
    local_8b4 = *(undefined1 *)(param_2 + 0x544);
    local_8b3 = '\x01';
  }
  local_1048 = &local_fe1;
  FUN_146a7c5de(&local_fe0,"SEditableText",
                ".\\Runtime/Slate/Private/Widgets/Input/SEditableTextBox.cpp",0x3b);
  lVar12 = CONCAT44(uStack_fd4,local_fd8);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(lVar10 + 0x2c0);
  *(code **)(lVar10 + 0x2b8) = local_fe0;
  *(longlong *)(lVar10 + 0x2c0) = lVar12;
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
  FUN_146a639a0(&local_fe0,&local_e00,&local_da8);
  plVar5 = local_6d0;
  plVar4 = local_df8;
  if (local_df8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_df8 + 1) = (int)local_df8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_df8 + 1) = (int)local_df8[1] + 1;
    UNLOCK();
  }
  uStack_6d8 = local_e00;
  local_6d0 = local_df8;
  if (plVar5 != (longlong *)0x0) {
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
  local_1048 = &local_1001;
  FUN_140a53d66(&local_1000,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Widgets/Input/SEditableTextBox.cpp",0x37);
  lVar12 = CONCAT44(uStack_ff4,local_ff8);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar10 + 0x2b0);
  *(code **)(lVar10 + 0x2a8) = local_1000;
  *(longlong *)(lVar10 + 0x2b0) = lVar12;
  if (plVar5 != (longlong *)0x0) {
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
  FUN_140a50bf4(&local_1000,&local_df0,local_8b0);
  local_de0 = local_df0;
  local_dd8 = local_de8;
  if (local_de8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_de8 + 1) = (int)local_de8[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_140a4fe8e(local_1030,&local_de0);
  uVar11 = FUN_140a52392(local_548,uVar11);
  local_1048 = &local_1021;
  FUN_140a541dc(&local_1020,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Widgets/Input/SEditableTextBox.cpp",0x30);
  if (local_1018 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1018 + 1) = (int)local_1018[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar10 + 0x410);
  *(undefined8 *)(lVar10 + 0x408) = local_1020;
  *(longlong **)(lVar10 + 0x410) = local_1018;
  if (plVar5 != (longlong *)0x0) {
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
  FUN_140a50ec6(&local_1020,&local_db8,uVar11);
  plVar2 = local_1e0;
  plVar5 = local_db0;
  if (local_db0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_db0 + 1) = (int)local_db0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_db0 + 1) = (int)local_db0[1] + 1;
    UNLOCK();
  }
  local_1e8 = local_db8;
  local_1e0 = local_db0;
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_140a5a2ee(lVar10,&local_390);
  if (plVar5 != (longlong *)0x0) {
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
  if (local_db0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_db0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_db0)(local_db0);
      LOCK();
      piVar1 = (int *)((longlong)local_db0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_db0 + 0x10))(local_db0);
      }
    }
  }
  if (local_1018 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1018 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1018)(local_1018);
      LOCK();
      piVar1 = (int *)((longlong)local_1018 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1018 + 0x10))(local_1018);
      }
    }
  }
  plVar5 = local_dd8;
  if (local_dd8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_dd8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_dd8)(local_dd8);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_de8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_de8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_de8)(local_de8);
      LOCK();
      piVar1 = (int *)((longlong)local_de8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_de8 + 0x10))(local_de8);
      }
    }
  }
  plVar5 = (longlong *)CONCAT44(uStack_ff4,local_ff8);
  if (plVar5 != (longlong *)0x0) {
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
  if (local_df8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_df8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_df8)(local_df8);
      LOCK();
      piVar1 = (int *)((longlong)local_df8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_df8 + 0x10))(local_df8);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_fd4,local_fd8);
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
  FUN_146a63a14(&local_da8);
  FUN_140a5660c(local_8b0);
  FUN_140a509a6(local_608);
  FUN_145ab33da(local_548);
  FUN_140a59028(&local_390);
  lVar12 = *(longlong *)(param_2 + 0x4e0);
  lVar6 = *(longlong *)(param_2 + 0x4e8);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(lVar10 + 0x420);
  *(longlong *)(lVar10 + 0x418) = lVar12;
  *(longlong *)(lVar10 + 0x420) = lVar6;
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
    lVar12 = *(longlong *)(lVar10 + 0x418);
  }
  if (lVar12 == 0) {
    uVar11 = FUN_140e82300();
    uVar11 = FUN_1447a1f4a(uVar11);
    FUN_146a6811e(lVar10,uVar11);
  }
  else {
    FUN_146a24608(*(undefined8 *)(lVar10 + 0x408),&local_da8,0xffffffff);
    lVar12 = FUN_140a52578(&uStack_da0);
    local_390 = 0x40400000;
    plStack_388 = (longlong *)0x40400000;
    local_380 = 1;
    local_378 = 0;
    uStack_370 = 0;
    *(undefined1 *)(lVar12 + 0x28) = 1;
    *(undefined4 *)(lVar12 + 0x18) = 0x40400000;
    *(undefined4 *)(lVar12 + 0x1c) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0x40400000;
    *(undefined4 *)(lVar12 + 0x24) = 0;
    FUN_144a450dc(lVar12 + 0x30,&local_378);
    FUN_1449db362(&local_378);
    (**(code **)(**(longlong **)(lVar10 + 0x418) + 0x18))(*(longlong **)(lVar10 + 0x418),&local_390)
    ;
    FUN_140a4fe8e(lVar12,&local_390);
    plVar4 = plStack_388;
    if (plStack_388 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_388 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_388)(plStack_388);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_146a071ac(&local_da8);
  }
  if ((local_60 ^ (ulonglong)auStack_1068) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6778e FUN_146a6778e body=230 status=ok
// SIG undefined FUN_146a6778e(void)

void FUN_146a6778e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_588 [40];
  undefined1 local_560 [424];
  undefined8 local_3b8;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_588;
  *(longlong *)(param_1 + 0x2a0) = param_2;
  if (param_2 == 0) {
    FUN_146a10de6(local_560);
    *(undefined8 *)(param_1 + 0x2a0) = local_3b8;
    FUN_146a111d2(local_560);
    param_2 = *(longlong *)(param_1 + 0x2a0);
  }
  *(longlong *)(param_1 + 0x458) = param_2 + 0x10;
  *(longlong *)(param_1 + 0x460) = param_2 + 0xc0;
  *(longlong *)(param_1 + 0x468) = param_2 + 0x170;
  *(longlong *)(param_1 + 0x470) = param_2 + 0x220;
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  if (param_2 != -0x2e0 && lVar1 != 0) {
    FUN_146adc734(*(undefined8 *)(lVar1 + 0x1f8));
    FUN_140163244(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a67876 FUN_146a67876 body=178 status=ok
// SIG undefined FUN_146a67876(void)

longlong FUN_146a67876(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_146a7c8ba(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x230) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x228) = local_40;
  FUN_144a450dc(param_1 + 0x238,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6792a FUN_146a6792a body=94 status=ok
// SIG undefined FUN_146a6792a(void)

undefined8 FUN_146a6792a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x2b8) + 0x1e0))
                    (*(longlong *)(param_1 + 0x2b8) + 0x1e0);
  lVar2 = 0x470;
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x198))();
    lVar2 = 0x468;
    if (cVar1 == '\0') {
      lVar2 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x2b8) + 0x3b) * 8 + 0x458;
    }
  }
  return *(undefined8 *)(param_1 + lVar2);
}



// FUNCTION 146a67988 FUN_146a67988 body=200 status=ok
// SIG undefined FUN_146a67988(void)

longlong FUN_146a67988(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146a7cd58(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x2d0) = local_38;
  *(undefined4 *)(param_1 + 0x2c0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2c4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2c8) = uStack_40;
  *(undefined4 *)(param_1 + 0x2cc) = uStack_3c;
  *(undefined1 *)(param_1 + 0x2d4) = local_34;
  FUN_144a450dc(param_1 + 0x2d8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a67a52 FUN_146a67a52 body=64 status=ok
// SIG undefined FUN_146a67a52(void)

undefined8 * FUN_146a67a52(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x3a4) == '\x01') {
    puVar2 = (undefined8 *)FUN_1400c0682(param_1 + 0x390);
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x5d4);
  }
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar2 + 2);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a67a92 FUN_146a67a92 body=200 status=ok
// SIG undefined FUN_146a67a92(void)

longlong FUN_146a67a92(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146a7cd58(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x2f8) = local_38;
  *(undefined4 *)(param_1 + 0x2e8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2ec) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2f0) = uStack_40;
  *(undefined4 *)(param_1 + 0x2f4) = uStack_3c;
  *(undefined1 *)(param_1 + 0x2fc) = local_34;
  FUN_144a450dc(param_1 + 0x300,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a67b5c FUN_146a67b5c body=224 status=ok
// SIG undefined FUN_146a67b5c(void)

undefined8 * FUN_146a67b5c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  cVar2 = (*(code *)**(undefined8 **)(param_1[0x57] + 0x1e0))(param_1[0x57] + 0x1e0);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x198))(param_1);
    if (cVar2 == '\0') {
      if (*(char *)((longlong)param_1 + 0x37c) != '\x01') {
        lVar5 = 0x5c0;
        goto LAB_146a67c1f;
      }
      param_1 = param_1 + 0x6d;
LAB_146a67bf0:
      puVar4 = (undefined4 *)FUN_1400c0682(param_1);
    }
    else {
      if (*(char *)((longlong)param_1 + 0x3f4) == '\x01') {
        param_1 = param_1 + 0x7c;
        goto LAB_146a67bf0;
      }
      lVar5 = 0x5fc;
LAB_146a67c1f:
      puVar4 = (undefined4 *)(lVar5 + param_1[0x54]);
    }
    *(undefined4 *)(param_2 + 2) = puVar4[4];
    uVar6 = *puVar4;
    uVar7 = puVar4[1];
    uVar8 = puVar4[2];
    uVar9 = puVar4[3];
LAB_146a67c2f:
    *(undefined4 *)param_2 = uVar6;
    *(undefined4 *)((longlong)param_2 + 4) = uVar7;
    *(undefined4 *)(param_2 + 1) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar9;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x3cc) == '\x01') {
      param_1 = param_1 + 0x77;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x37c) != '\x01') {
        lVar5 = param_1[0x54];
        *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar5 + 0x5f8);
        uVar6 = *(undefined4 *)(lVar5 + 0x5e8);
        uVar7 = *(undefined4 *)(lVar5 + 0x5ec);
        uVar8 = *(undefined4 *)(lVar5 + 0x5f0);
        uVar9 = *(undefined4 *)(lVar5 + 0x5f4);
        goto LAB_146a67c2f;
      }
      param_1 = param_1 + 0x6d;
    }
    puVar3 = (undefined8 *)FUN_1400c0682(param_1);
    uVar1 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar1;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar3 + 2);
  }
  return param_2;
}



// FUNCTION 146a67c3c FUN_146a67c3c body=183 status=ok
// SIG undefined FUN_146a67c3c(void)

longlong FUN_146a67c3c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a7d226(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a58be0(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x1c0) = local_38;
  *(undefined4 *)(param_1 + 0x1b0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1b4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1b8) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1bc) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x1c8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a67cf4 FUN_146a67cf4 body=58 status=ok
// SIG undefined FUN_146a67cf4(void)

undefined8 * FUN_146a67cf4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x2d8) == '\x01') {
    puVar2 = (undefined8 *)FUN_140133f88(param_1 + 0x2c8);
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x2d0);
  }
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a67d2e FUN_146a67d2e body=86 status=ok
// SIG undefined FUN_146a67d2e(void)

longlong FUN_146a67d2e(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1d0);
  *(char *)(param_1 + 0x1e0) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x1e8,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a67d84 FUN_146a67d84 body=86 status=ok
// SIG undefined FUN_146a67d84(void)

longlong FUN_146a67d84(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1f8);
  *(char *)(param_1 + 0x208) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x210,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a67dda FUN_146a67dda body=261 status=ok
// SIG undefined FUN_146a67dda(void)

longlong FUN_146a67dda(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined7 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uStack_a0 = *(undefined4 *)(param_3 + 1);
  local_a8 = *param_3;
  FUN_146a7d6f4(local_b8,param_2,&local_a8);
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3f800000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0x41c00000;
  local_58 = 0;
  local_54 = 2;
  local_52 = 0;
  local_50 = 0x3f800000;
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_140a5d470(&local_40,local_b8);
  FUN_1412cc59c(param_1 + 0x228,&local_a8);
  *(undefined1 *)(param_1 + 0x288) = local_48;
  FUN_144a450dc(param_1 + 0x290,&local_40);
  FUN_141515cba(&local_a8);
  FUN_1449db362(local_b8);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a67ee0 FUN_146a67ee0 body=63 status=ok
// SIG undefined FUN_146a67ee0(void)

undefined8 FUN_146a67ee0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x350) == '\x01') {
    lVar1 = FUN_146a64b32(param_1 + 0x2f0);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x2a0) + 0x2e8;
  }
  FUN_144a87366(param_2,lVar1);
  return param_2;
}



// FUNCTION 146a67f20 FUN_146a67f20 body=214 status=ok
// SIG undefined FUN_146a67f20(void)

void FUN_146a67f20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x430) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x428), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
  }
  if ((*(int *)(param_1 + 0x450) != 0) && (*(longlong **)(param_1 + 0x448) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x448) + 0x30))();
    if (cVar1 != '\0') {
      FUN_144a5dc74();
      if (*(int *)(param_1 + 0x450) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x448);
      }
      cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4,param_2,local_28);
      if (cVar1 == '\0') {
        pplVar2 = local_28;
      }
      else {
        pplVar2 = (longlong **)FUN_140e82300();
      }
      uVar3 = FUN_1447a1f4a(pplVar2);
      FUN_146a6811e(param_1,uVar3);
      if (local_28[0] != (longlong *)0x0) {
        (**(code **)(*local_28[0] + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a67ff8 FUN_146a67ff8 body=260 status=ok
// SIG undefined FUN_146a67ff8(void)

void FUN_146a67ff8(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x450) != 0) && (*(longlong **)(param_1 + 0x448) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x448) + 0x30))();
    if (cVar1 != '\0') {
      FUN_144a5dc74();
      if (*(int *)(param_1 + 0x450) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x448);
      }
      cVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2,local_38);
      if ((param_3 == 1) && (cVar1 == '\0')) {
        uVar2 = FUN_1447a1f4a(local_38);
        FUN_146a6811e(param_1,uVar2);
      }
      if (local_38[0] != (longlong *)0x0) {
        (**(code **)(*local_38[0] + 0x10))();
      }
      if (cVar1 == '\0') goto LAB_146a68084;
    }
  }
  uVar2 = FUN_140e82300();
  uVar2 = FUN_1447a1f4a(uVar2);
  FUN_146a6811e(param_1,uVar2);
  if ((*(int *)(param_1 + 0x440) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x438), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3);
  }
LAB_146a68084:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a680fe FUN_146a680fe body=32 status=ok
// SIG undefined FUN_146a680fe(void)

void FUN_146a680fe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447a1f4a(param_2);
  FUN_146a6811e(param_1,uVar1);
  return;
}



// FUNCTION 146a6811e FUN_146a6811e body=698 status=ok
// SIG undefined FUN_146a6811e(void)

void FUN_146a6811e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_398 [39];
  undefined1 local_371;
  longlong local_370;
  longlong *local_368;
  undefined8 local_358;
  longlong *local_350;
  undefined8 local_348;
  longlong *local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined1 local_188 [120];
  undefined1 local_110 [8];
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (*(longlong *)(param_1 + 0x418) != 0) goto LAB_146a68150;
  FUN_146a24608(*(undefined8 *)(param_1 + 0x408),local_110,0xffffffff);
  lVar4 = FUN_140a52578(local_108);
  local_338 = 0x40400000;
  uStack_330 = 0x40400000;
  local_328 = 1;
  local_320 = 0;
  uStack_318 = 0;
  *(undefined1 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x18) = 0x40400000;
  *(undefined4 *)(lVar4 + 0x1c) = 0;
  *(undefined4 *)(lVar4 + 0x20) = 0x40400000;
  *(undefined4 *)(lVar4 + 0x24) = 0;
  FUN_144a450dc(lVar4 + 0x30,&local_320);
  FUN_1449db362(&local_320);
  FUN_146a683da(&local_338);
  FUN_146a7e54c(&local_370,".\\Runtime/Slate/Private/Widgets/Input/SEditableTextBox.cpp",0xa8,
                &local_371);
  plVar3 = local_368;
  if (local_368 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_368 + 1) = (int)local_368[1] + 1;
    UNLOCK();
  }
  FUN_146a68468(&local_370,&local_358,&local_338);
  local_348 = local_358;
  local_340 = local_350;
  if (local_350 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_350 + 1) = (int)local_350[1] + 1;
    UNLOCK();
  }
  FUN_140a4fe8e(lVar4,&local_348);
  plVar5 = local_340;
  if (local_340 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_340 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_350 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_350 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_350)(local_350);
      LOCK();
      piVar2 = (int *)((longlong)local_350 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_350 + 0x10))(local_350);
      }
    }
  }
  if (local_368 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_368 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_368)(local_368);
      LOCK();
      piVar2 = (int *)((longlong)local_368 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_368 + 0x10))(local_368);
      }
    }
  }
  FUN_141515cba(local_188);
  FUN_140a4ff8c(&local_338);
  FUN_146a071ac(local_110);
  lVar4 = local_370 + 0x390;
  if (local_370 == 0) {
    lVar4 = 0;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x418) = lVar4;
    plVar5 = *(longlong **)(param_1 + 0x420);
    if (plVar5 == (longlong *)0x0) goto LAB_146a68150;
    *(undefined8 *)(param_1 + 0x420) = 0;
LAB_146a68344:
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
    if (plVar3 == (longlong *)0x0) goto LAB_146a68150;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x418) = lVar4;
    plVar5 = *(longlong **)(param_1 + 0x420);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x420) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_146a68344;
    }
  }
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_146a68150:
  (**(code **)(**(longlong **)(param_1 + 0x418) + 8))(*(longlong **)(param_1 + 0x418),param_2);
  if ((local_38 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a683da FUN_146a683da body=141 status=ok
// SIG undefined FUN_146a683da(void)

longlong FUN_146a683da(longlong param_1)

{
  FUN_140a5071c();
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1bf) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined2 *)(param_1 + 0x204) = 2;
  *(undefined1 *)(param_1 + 0x206) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  return param_1;
}



// FUNCTION 146a68468 FUN_146a68468 body=119 status=ok
// SIG undefined FUN_146a68468(void)

longlong * FUN_146a68468(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  (**(code **)(*(longlong *)*param_1 + 600))((longlong *)*param_1,param_3);
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



// FUNCTION 146a684e0 FUN_146a684e0 body=19 status=ok
// SIG undefined FUN_146a684e0(void)

void FUN_146a684e0(longlong param_1)

{
  FUN_146add60e(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8));
  return;
}



// FUNCTION 146a684f4 FUN_146a684f4 body=19 status=ok
// SIG undefined FUN_146a684f4(void)

void FUN_146a684f4(longlong param_1)

{
  FUN_146add646(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8));
  return;
}



// FUNCTION 146a68508 FUN_146a68508 body=110 status=ok
// SIG undefined FUN_146a68508(void)

void FUN_146a68508(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [38];
  undefined1 local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = param_2[1];
  if (local_11 == '\x01') {
    local_12 = *param_2;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8);
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8);
  }
  FUN_146addc80(uVar1);
  if (param_2[1] == '\x01') {
    param_2[1] = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a68578 FUN_146a68578 body=22 status=ok
// SIG undefined FUN_146a68578(void)

undefined8 FUN_146a68578(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x418) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a68587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x418) + 0x10))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 146a6858e FUN_146a6858e body=97 status=ok
// SIG undefined FUN_146a6858e(void)

ulonglong FUN_146a6858e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x2b8);
  plVar3 = *(longlong **)(param_1 + 0x2c0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar4 = (**(code **)(*plVar2 + 400))();
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
    return (ulonglong)uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000146a685e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar2 + 400))();
  return uVar5;
}



// FUNCTION 146a685f0 FUN_146a685f0 body=47 status=ok
// SIG undefined FUN_146a685f0(void)

undefined8 FUN_146a685f0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14697dddc();
  if (cVar1 != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146a68618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x198))();
  return uVar2;
}



// FUNCTION 146a68620 FUN_146a68620 body=238 status=ok
// SIG undefined FUN_146a68620(void)

undefined1 * FUN_146a68620(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar3 = *param_4;
  if (cVar3 != '\x03') {
    local_38 = *(undefined8 *)(param_1 + 0x2b8);
    plVar4 = *(longlong **)(param_1 + 0x2c0);
    if (plVar4 == (longlong *)0x0) {
      local_30 = (longlong *)0x0;
      FUN_140592b68(param_2,&local_38,cVar3,0);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_30 = plVar4;
      FUN_140592b68(param_2,&local_38,cVar3,0);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a68710 FUN_146a68710 body=468 status=ok
// SIG undefined FUN_146a68710(void)

undefined1 * FUN_146a68710(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((lVar3 == DAT_14c964dd0) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x198))(), cVar7 != '\0')) {
    local_f8[0] = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    local_44 = 0;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
LAB_146a6888a:
      local_108 = 0;
      plStack_100 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar8 = (int)plVar5[1];
      do {
        if (iVar8 == 0) goto LAB_146a6888a;
        LOCK();
        iVar6 = (int)plVar5[1];
        bVar10 = iVar8 == iVar6;
        if (bVar10) {
          *(int *)(plVar5 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar10);
      uVar9 = *(undefined8 *)(param_1 + 8);
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
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_108 = uVar9;
      plStack_100 = plVar5;
    }
    plVar5 = plStack_100;
    uVar9 = FUN_140592b68(local_f8,&local_108,3,0);
    FUN_1403d4c6e(param_2,uVar9);
    if (!bVar10) {
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
    FUN_14493db24(local_f8);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


