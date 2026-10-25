// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149410e7e FUN_149410e7e body=494 status=ok
// SIG undefined FUN_149410e7e(void)

longlong * FUN_149410e7e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_149410ebc:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) goto LAB_149410ebc;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
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
    local_48 = lVar8 + 8;
    if (lVar8 == 0) {
      local_48 = 0;
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_149411b14(lVar5,&local_48);
  *param_2 = lVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ef0b50;
  plVar6[2] = lVar5;
  param_2[1] = (longlong)plVar6;
  if ((lVar5 == 0) ||
     (((*(longlong *)(lVar5 + 8) != 0 && (*(longlong *)(lVar5 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + 8))))) goto LAB_149411019;
  if (plVar6 == (longlong *)0x0) {
    *(longlong *)(lVar5 + 8) = lVar5;
    plVar7 = *(longlong **)(lVar5 + 0x10);
    if (plVar7 == (longlong *)0x0) goto LAB_149411019;
LAB_149410f5f:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar5 + 0x10) = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_149411019;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong *)(lVar5 + 8) = lVar5;
    if (*(longlong **)(lVar5 + 0x10) != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar5 + 0x10);
      if (plVar7 != (longlong *)0x0) goto LAB_149410f5f;
      *(longlong **)(lVar5 + 0x10) = plVar6;
    }
  }
  LOCK();
  plVar7 = plVar6 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_149411019:
  if (!bVar9) {
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



// FUNCTION 149411070 FUN_149411070 body=173 status=ok
// SIG undefined FUN_149411070(void)

void FUN_149411070(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1494120a2(param_1 + -8,param_3,param_5,param_6,param_7);
  uVar1 = FUN_14023976a(param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  FUN_1494122f2(param_1 + -8,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  return;
}



// FUNCTION 14941111e FUN_14941111e body=297 status=ok
// SIG undefined FUN_14941111e(void)

void FUN_14941111e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x360) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar6 = *(longlong **)(param_1 + 0x368);
  if (plVar6 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x368);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x368) = plVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x358);
  if (lVar3 == 0) {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1456f28da(param_1,&local_30);
  }
  else {
    FUN_14149270a(lVar3);
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    *(longlong *)(lVar3 + 0x18) = lVar5;
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
    FUN_140a5503c(lVar3);
  }
  plVar2 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149411248 FUN_149411248 body=119 status=ok
// SIG undefined FUN_149411248(void)

longlong * FUN_149411248(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_149411414(param_1[2],*param_1,param_3);
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



// FUNCTION 1494112c0 FUN_1494112c0 body=338 status=ok
// SIG undefined FUN_1494112c0(void)

longlong * FUN_1494112c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x2d8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f0e410;
  plVar1 = plVar4 + 2;
  FUN_146aec4be(plVar1);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_146a2ba86(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1494113a3;
    param_1[1] = 0;
LAB_14941136d:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1494113a3;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (local_30 != plVar4) {
      param_1[1] = (longlong)local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_1494113a3;
      goto LAB_14941136d;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1494113a3;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1494113a3:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_48 = 0x2c8;
  FUN_140a52e78(*param_1,"SExpanderArrow","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",0xca);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149411414 FUN_149411414 body=134 status=ok
// SIG undefined FUN_149411414(void)

void FUN_149411414(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)*param_1;
  local_18 = (longlong *)((undefined8 *)*param_1)[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_146aec5c0(param_2,param_3,&local_20);
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



// FUNCTION 14941149c FUN_14941149c body=263 status=ok
// SIG undefined FUN_14941149c(void)

void FUN_14941149c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bcc2650;
  param_1[1] = &PTR_FUN_14bcc26f0;
  plVar3 = (longlong *)param_1[0x6e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x6a);
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 0x66);
  FUN_1449db362(param_1 + 100);
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  }
  FUN_1449db362(param_1 + 0x61);
  FUN_1449db362(param_1 + 0x5f);
  FUN_1449db362(param_1 + 0x5d);
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x56];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[1] = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x40);
  FUN_140c057ec(param_1 + 1);
  return;
}



// FUNCTION 1494115a4 FUN_1494115a4 body=265 status=ok
// SIG undefined FUN_1494115a4(void)

longlong FUN_1494115a4(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x24);
  plVar8 = *(longlong **)(lVar2 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1494115ff;
      }
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
    plVar7 = *(longlong **)(lVar2 + 0x2a8);
    bVar3 = false;
  }
LAB_1494115ff:
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x48))(plVar7,lVar2);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    local_40 = *puVar6;
    local_38 = puVar6[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(lVar2 + 0x2f0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(lVar2 + 0x2e8);
    }
    local_48 = &local_40;
    (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_1 + 2,*param_1);
  }
  if (!bVar3) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494116ae FUN_1494116ae body=1125 status=ok
// SIG undefined FUN_1494116ae(void)

undefined1 * FUN_1494116ae(longlong *param_1,undefined1 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 unaff_RBP;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  uint local_1d4;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  int local_1b0;
  byte local_1ac;
  undefined8 local_1a8;
  longlong local_1a0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar5 = *param_1;
  if (((*(int *)(lVar5 + 0x300) != 0) && (*(longlong **)(lVar5 + 0x2f8) != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2f8) + 0x30))(), cVar8 != '\0')) {
    plVar14 = *(longlong **)(lVar5 + 0x2b0);
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
      plVar12 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar14[1];
      plVar12 = (longlong *)0x0;
      do {
        if (iVar9 == 0) {
          plVar14 = (longlong *)0x0;
          goto LAB_149411795;
        }
        LOCK();
        iVar7 = (int)plVar14[1];
        bVar15 = iVar9 == iVar7;
        if (bVar15) {
          *(int *)(plVar14 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar15);
      plVar12 = *(longlong **)(lVar5 + 0x2a8);
      uVar13 = 0;
    }
LAB_149411795:
    if (*(char *)(lVar5 + 0x31c) == '\x01') {
      *(undefined1 *)(lVar5 + 0x31c) = 0;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
    bVar15 = true;
    if (puVar10 != (undefined8 *)0x0) {
      lVar6 = param_1[1];
      fVar17 = *(float *)(param_1[2] + 0x20);
      fVar16 = *(float *)(param_1[2] + 0x24);
      fVar19 = *(float *)(lVar6 + 0x1c);
      fVar18 = *(float *)(lVar6 + 0x20);
      fVar2 = *(float *)(lVar6 + 0x24);
      fVar20 = *(float *)(lVar6 + 0x28);
      fVar21 = 1.0 / (fVar19 * fVar20 - fVar2 * fVar18);
      fVar3 = *(float *)(lVar6 + 0x30);
      fVar4 = *(float *)(lVar6 + 0x2c);
      iVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      local_1d4 = (uint)uVar13;
      if (iVar9 == 0) {
        fVar19 = -fVar2 * fVar21;
        fVar20 = fVar20 * fVar21;
        fVar18 = -fVar4 * fVar20 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar20 + fVar19 * fVar16;
      }
      else {
        fVar19 = fVar19 * fVar21;
        fVar21 = -fVar18 * fVar21;
        fVar18 = -fVar4 * fVar21 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar21 + fVar19 * fVar16;
      }
      uVar13 = *(ulonglong *)param_1[1] >> 0x20;
      if (iVar9 == 0) {
        uVar13 = *(ulonglong *)param_1[1];
      }
      fVar16 = (float)uVar13 * 0.25;
      if (10.0 <= fVar16) {
        fVar16 = 10.0;
      }
      if (fVar16 <= 3.0) {
        fVar16 = 3.0;
      }
      iVar9 = 0;
      if (fVar16 <= fVar17 + fVar18) {
        iVar9 = ((float)uVar13 - fVar16 < fVar17 + fVar18) + 1;
      }
      if (((*(int *)(lVar5 + 0x2f0) == 0) || (*(longlong **)(lVar5 + 0x2e8) == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2e8) + 0x30))(), cVar8 == '\0')) {
        local_1ac = 1;
        local_1b0 = iVar9;
      }
      else {
        local_1a8 = *puVar10;
        local_1a0 = puVar10[1];
        if (local_1a0 != 0) {
          LOCK();
          *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
          UNLOCK();
        }
        if (*(int *)(lVar5 + 0x2f0) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar5 + 0x2e8);
        }
        local_1e8 = &local_1a8;
        (**(code **)(*plVar11 + 0x58))(plVar11,&local_1b0,param_1[2],iVar9);
        if ((local_1ac & 1) == 0) {
          uVar13 = (ulonglong)local_1d4;
          goto LAB_149411a24;
        }
      }
      local_1c0 = *puVar10;
      local_1b8 = puVar10[1];
      uVar13 = (ulonglong)local_1d4;
      if (local_1b8 != 0) {
        LOCK();
        *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(lVar5 + 0x300) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar5 + 0x2f8);
      }
      local_1e8 = &local_1c0;
      (**(code **)(*plVar11 + 0x58))(plVar11,&local_1a8,param_1[2],local_1b0);
      if (((char)local_1a8 == '\x01') && (local_1b0 == 1)) {
        local_1d0 = *puVar10;
        local_1c8 = puVar10[1];
        if (local_1c8 != 0) {
          LOCK();
          *(int *)(local_1c8 + 8) = *(int *)(local_1c8 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar12 + 0x50))(plVar12,&local_1d0,1);
      }
      FUN_1428fd920(param_2);
      FUN_14493db24(&local_1a8);
      if (local_1ac == 1) {
        local_1ac = 0;
      }
      bVar15 = false;
    }
LAB_149411a24:
    if ((char)uVar13 == '\0') {
      LOCK();
      plVar12 = plVar14 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    if (!bVar15) goto LAB_149411a7d;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_149411a7d:
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149411b14 FUN_149411b14 body=143 status=ok
// SIG undefined FUN_149411b14(void)

undefined8 * FUN_149411b14(undefined8 *param_1,undefined8 *param_2)

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
  FUN_14697595a(param_1,&local_28,0xd);
  *param_1 = &PTR_FUN_14bcc2940;
  param_1[0xd] = &PTR_FUN_14bcc2a30;
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



// FUNCTION 149411ba4 FUN_149411ba4 body=38 status=ok
// SIG undefined FUN_149411ba4(void)

undefined8 FUN_149411ba4(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149411bd0 FUN_149411bd0 body=505 status=ok
// SIG undefined FUN_149411bd0(void)

void FUN_149411bd0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x48), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar10 = 0;
    iVar4 = (int)plVar8[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_149411c5c;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar3 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar11);
    lVar10 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar10 = 0;
    }
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
LAB_149411c5c:
    if (((*(longlong *)(lVar10 + 0x2a8) != 0) &&
        (plVar7 = *(longlong **)(lVar10 + 0x2b0), plVar7 != (longlong *)0x0)) &&
       (0 < (int)plVar7[1])) {
      plVar9 = (longlong *)0x0;
      iVar4 = (int)plVar7[1];
      do {
        iVar5 = iVar4;
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          goto LAB_149411caa;
        }
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        UNLOCK();
      } while (!bVar11);
      plVar9 = *(longlong **)(lVar10 + 0x2a8);
LAB_149411caa:
      (**(code **)(*plVar9 + 0xe8))(plVar9,&local_50);
      (**(code **)(*local_50 + 0x198))();
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,lVar10);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,puVar6);
        (**(code **)(*plVar9 + 0x30))(plVar9);
        local_60 = *puVar6;
        local_58 = puVar6[1];
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar9 + 0x28))(plVar9,&local_60,1,1);
        (**(code **)(*plVar9 + 0x40))(plVar9,3);
      }
      if (iVar5 != 0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    if (iVar3 != 0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149411dce FUN_149411dce body=166 status=ok
// SIG undefined FUN_149411dce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_149411dce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149411e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(_DAT_00000000 + 0x30))(0);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    plVar8 = (longlong *)(*(longlong *)(param_1 + -0x50) + -8);
    if (*(longlong *)(param_1 + -0x50) == 0) {
      plVar8 = (longlong *)0x0;
    }
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
    uVar6 = (**(code **)(*plVar8 + 0x30))(plVar8);
    uVar7 = (ulonglong)uVar6;
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  return uVar7;
}



// FUNCTION 149411e74 FUN_149411e74 body=556 status=ok
// SIG undefined FUN_149411e74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149411e74(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar7 = *(longlong **)(param_1 + -0x48), plVar7 != (longlong *)0x0)) && (0 < (int)plVar7[1])
     ) {
    lVar8 = 0;
    iVar6 = (int)plVar7[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_149411f00;
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
    lVar8 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
LAB_149411f00:
    if (((*(longlong *)(lVar8 + 0x2a8) == 0) ||
        (plVar3 = *(longlong **)(lVar8 + 0x2b0), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
       ) {
      bVar9 = false;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          (**(code **)(_DAT_00000000 + 0xe8))(0,&local_48);
          goto LAB_149411fd8;
        }
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
      (**(code **)(**(longlong **)(lVar8 + 0x2a8) + 0xe8))(*(longlong **)(lVar8 + 0x2a8),&local_48);
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
LAB_149411fd8:
      local_68 = local_48;
      local_60 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_146974758(&local_58,&local_68);
      *param_2 = local_58;
      param_2[1] = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
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
      bVar9 = true;
    }
    if (iVar5 != 0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (bVar9) goto LAB_149411f9c;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_149411f9c:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494120a2 FUN_1494120a2 body=590 status=ok
// SIG undefined FUN_1494120a2(void)

int FUN_1494120a2(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4,float *param_5
                 )

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  float *local_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar10 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar10[1];
    plVar11 = (longlong *)0x0;
    do {
      if (iVar9 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_14941210b;
      }
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar12 = iVar9 == iVar5;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar9 + 1;
        iVar5 = iVar9;
      }
      iVar9 = iVar5;
      UNLOCK();
    } while (!bVar12);
    plVar11 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_14941210b:
  local_98 = param_3;
  (**(code **)(*plVar11 + 0xe8))(plVar11,&local_80);
  cVar6 = (**(code **)(*local_80 + 0x198))();
  plVar4 = (longlong *)CONCAT44(uStack_74,local_78);
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
  lVar7 = (**(code **)(*plVar11 + 0x48))(plVar11,param_1);
  iVar9 = param_4;
  if (((cVar6 == '\x01' && lVar7 != 0) && (cVar6 = (**(code **)*plVar11)(plVar11), cVar6 != '\0'))
     && (cVar6 = (**(code **)(*plVar11 + 8))(plVar11,lVar7), cVar6 != '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x2c8);
    pfVar8 = (float *)(lVar7 + 0x18);
    cVar6 = *(char *)(lVar7 + 0x28);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar8 = (float *)FUN_1400c06fe(pfVar8);
        lVar7 = *(longlong *)(param_1 + 0x2c8);
      }
      else if (cVar6 == '\x03') {
        pfVar8 = param_5 + 8;
      }
      else {
        pfVar8 = param_5 + 4;
      }
    }
    local_84 = pfVar8[3] * param_5[3];
    local_88 = pfVar8[2] * param_5[2];
    local_8c = pfVar8[1] * param_5[1];
    local_90 = *pfVar8 * *param_5;
    local_a0 = &local_90;
    local_6c = *param_2;
    local_80 = *(longlong **)((longlong)param_2 + 0xc);
    local_78 = *(undefined4 *)(param_2 + 1);
    uStack_74 = 0;
    uStack_70 = 0;
    local_64 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_60 = *(undefined4 *)(param_2 + 4);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_58 = *(undefined4 *)(param_2 + 5);
    local_54 = *(undefined8 *)((longlong)param_2 + 0x2c);
    local_4c = local_4c & 0xfc | *(char *)((longlong)param_2 + 0x34) * '\x02' & 2U;
    iVar9 = param_4 + 1;
    local_a8 = 0;
    FUN_140239bd2(local_98,param_4,&local_80,lVar7 + 0x10);
  }
  if (!bVar3) {
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 1494122f2 FUN_1494122f2 body=239 status=ok
// SIG undefined FUN_1494122f2(void)

ulonglong FUN_1494122f2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    if ((((int)param_1[0x62] != 0) && ((longlong *)param_1[0x61] != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x61] + 0x30))(), cVar1 != '\0')) {
      if ((int)param_1[0x62] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[0x61];
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))
                        (plVar3,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
      return uVar2;
    }
    uVar2 = (**(code **)(*param_1 + 0x88))
                      (param_1,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
  }
  else {
    uVar2 = (ulonglong)param_6;
  }
  return uVar2;
}



// FUNCTION 1494123e2 FUN_1494123e2 body=171 status=ok
// SIG undefined FUN_1494123e2(void)

void FUN_1494123e2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_149412461;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_149412461;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_149412461:
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
                    /* WARNING: Could not recover jumptable at 0x000149412481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14941248e FUN_14941248e body=198 status=ok
// SIG undefined FUN_14941248e(void)

void FUN_14941248e(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)*param_1;
  local_30 = (undefined8 *)((longlong *)*param_1)[1];
  if (local_30 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = *(int *)(local_30 + 1) + 1;
    UNLOCK();
    puVar3 = local_30;
  }
  local_38 = lVar2;
  FUN_149412568(param_2,param_3,&local_38);
  (**(code **)(*param_2 + 0x80))
            (param_2,*(undefined4 *)(lVar2 + 0x270),param_3 + 0x228,param_3 + 600);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149412568 FUN_149412568 body=488 status=ok
// SIG undefined FUN_149412568(void)

void FUN_149412568(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x37a) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x1b0);
  local_78 = 0;
  local_70 = 1;
  local_58 = (code *)&LAB_149412752;
  local_50 = 0;
  FUN_149412948(local_68,param_1,&local_58);
  FUN_145ab4d4e(param_1 + 8,&local_78);
  local_a0 = 0x3f800000;
  uStack_9c = 0;
  uStack_98 = 0x3f800000;
  uStack_94 = 0x3f800000;
  local_90 = 0;
  local_8c = 1;
  local_58 = FUN_149412760;
  local_50 = 0;
  FUN_149412df0(local_88,param_1,&local_58);
  FUN_140a5c8a2(param_1 + 600,param_1 + 8,&local_a0);
  FUN_1449db362(local_88);
  FUN_1494132c8(param_1 + 0x2e8,param_2 + 0x1b8);
  FUN_14941334c(param_1 + 0x2f8,param_2 + 0x1c8);
  FUN_145767132(param_1 + 800,param_2 + 0x1e8);
  FUN_14697937e(param_1 + 0x330,param_2 + 0x1f8);
  FUN_14697937e(param_1 + 0x340,param_2 + 0x208);
  FUN_146979402(param_1 + 0x350,param_2 + 0x218);
  local_b0 = *param_3;
  local_a8 = param_3[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_149412862(param_1,&local_b0);
  *(undefined1 *)(param_1 + 700) = *(undefined1 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x254);
  *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x251);
  *(undefined1 *)(param_1 + 0x37b) = *(undefined1 *)(param_2 + 0x252);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149412760 FUN_149412760 body=257 status=ok
// SIG undefined FUN_149412760(void)

undefined8 * FUN_149412760(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  bool bVar15;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 == (longlong *)0x0) {
LAB_149412836:
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar5 + 0x7c0);
    uVar9 = *(undefined8 *)(lVar5 + 0x7b8);
    *param_2 = *(undefined8 *)(lVar5 + 0x7b0);
    param_2[1] = uVar9;
  }
  else {
    iVar12 = (int)plVar3[1];
    do {
      if (iVar12 == 0) goto LAB_149412836;
      LOCK();
      iVar10 = (int)plVar3[1];
      bVar15 = iVar12 == iVar10;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar12 + 1;
        iVar10 = iVar12;
      }
      iVar12 = iVar10;
      UNLOCK();
    } while (!bVar15);
    plVar4 = *(longlong **)(param_1 + 0x2a8);
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    puVar14 = (undefined4 *)(lVar5 + 0x7b0);
    if ((plVar4 != (longlong *)0x0 & *(byte *)(param_1 + 700)) == 1) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar13 = (**(code **)(*plVar4 + 0x48))(plVar4);
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
      if (lVar13 != 0) {
        cVar11 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar13);
        if (cVar11 != '\0') {
          puVar14 = (undefined4 *)(lVar5 + 0x7c4);
        }
      }
    }
    *(undefined4 *)(param_2 + 2) = puVar14[4];
    uVar6 = puVar14[1];
    uVar7 = puVar14[2];
    uVar8 = puVar14[3];
    *(undefined4 *)param_2 = *puVar14;
    *(undefined4 *)((longlong)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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



// FUNCTION 149412862 FUN_149412862 body=229 status=ok
// SIG undefined FUN_149412862(void)

void FUN_149412862(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar5 = lVar2 + 0x4d8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    plVar4 = *(longlong **)(param_1 + 0x2b0);
    if (plVar4 == (longlong *)0x0) goto LAB_149412910;
LAB_1494128b0:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(param_1 + 0x2b0) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_149412910;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar5 = lVar2 + 0x4d8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    if (*(longlong **)(param_1 + 0x2b0) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x2b0);
      if (plVar4 != (longlong *)0x0) goto LAB_1494128b0;
      *(longlong **)(param_1 + 0x2b0) = plVar3;
    }
  }
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
LAB_149412910:
  plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014941293a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149412948 FUN_149412948 body=324 status=ok
// SIG undefined FUN_149412948(void)

longlong * FUN_149412948(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  longlong lVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_149412a4f:
    *puVar5 = &PTR_LAB_149f056a0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14bcc2a60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_149412a4f;
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
    lVar10 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f056a0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14bcc2a60;
    puVar5[3] = lVar10;
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



// FUNCTION 149412a8c FUN_149412a8c body=64 status=ok
// SIG undefined FUN_149412a8c(void)

undefined8 * FUN_149412a8c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bcc2a60;
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



// FUNCTION 149412ad0 FUN_149412ad0 body=81 status=ok
// SIG undefined FUN_149412ad0(void)

undefined8 FUN_149412ad0(longlong param_1)

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



// FUNCTION 149412b28 FUN_149412b28 body=89 status=ok
// SIG undefined FUN_149412b28(void)

bool FUN_149412b28(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_149412b73;
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
LAB_149412b73:
  return lVar6 == param_2;
}



// FUNCTION 149412b9e FUN_149412b9e body=118 status=ok
// SIG undefined FUN_149412b9e(void)

void FUN_149412b9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2a60;
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



// FUNCTION 149412c14 FUN_149412c14 body=118 status=ok
// SIG undefined FUN_149412c14(void)

void FUN_149412c14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2a60;
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



// FUNCTION 149412c8a FUN_149412c8a body=156 status=ok
// SIG undefined FUN_149412c8a(void)

void FUN_149412c8a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f056a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc2a60;
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
                    /* WARNING: Could not recover jumptable at 0x000149412d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149412d26 FUN_149412d26 body=102 status=ok
// SIG undefined FUN_149412d26(void)

undefined8 FUN_149412d26(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar7) {
        uVar6 = (**(code **)(param_1 + 0x28))
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        return uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149412d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 149412d8c FUN_149412d8c body=100 status=ok
// SIG undefined FUN_149412d8c(void)

ulonglong FUN_149412d8c(longlong param_1)

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
LAB_149412de5:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149412de5;
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



// FUNCTION 149412df0 FUN_149412df0 body=324 status=ok
// SIG undefined FUN_149412df0(void)

longlong * FUN_149412df0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  longlong lVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_149412ef7:
    *puVar5 = &PTR_LAB_149f05990;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14bcc2ad0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_149412ef7;
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
    lVar10 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05990;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14bcc2ad0;
    puVar5[3] = lVar10;
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



// FUNCTION 149412f34 FUN_149412f34 body=64 status=ok
// SIG undefined FUN_149412f34(void)

undefined8 * FUN_149412f34(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bcc2ad0;
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



// FUNCTION 149412f78 FUN_149412f78 body=81 status=ok
// SIG undefined FUN_149412f78(void)

undefined8 FUN_149412f78(longlong param_1)

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



// FUNCTION 149412fd0 FUN_149412fd0 body=89 status=ok
// SIG undefined FUN_149412fd0(void)

bool FUN_149412fd0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14941301b;
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
LAB_14941301b:
  return lVar6 == param_2;
}



// FUNCTION 149413046 FUN_149413046 body=118 status=ok
// SIG undefined FUN_149413046(void)

void FUN_149413046(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2ad0;
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



// FUNCTION 1494130bc FUN_1494130bc body=118 status=ok
// SIG undefined FUN_1494130bc(void)

void FUN_1494130bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2ad0;
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



// FUNCTION 149413132 FUN_149413132 body=156 status=ok
// SIG undefined FUN_149413132(void)

void FUN_149413132(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc2ad0;
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
                    /* WARNING: Could not recover jumptable at 0x0001494131be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1494131ce FUN_1494131ce body=105 status=ok
// SIG undefined FUN_1494131ce(void)

undefined8 FUN_1494131ce(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_149413222:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_149413222;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 149413238 FUN_149413238 body=143 status=ok
// SIG undefined FUN_149413238(void)

ulonglong FUN_149413238(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1494132a6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1494132a6;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_2c);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1494132c8 FUN_1494132c8 body=130 status=ok
// SIG undefined FUN_1494132c8(void)

void FUN_1494132c8(longlong *param_1,longlong *param_2)

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



// FUNCTION 14941334c FUN_14941334c body=130 status=ok
// SIG undefined FUN_14941334c(void)

void FUN_14941334c(longlong *param_1,longlong *param_2)

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



// FUNCTION 1494133d0 FUN_1494133d0 body=843 status=ok
// SIG undefined FUN_1494133d0(void)

longlong * FUN_1494133d0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *param_3;
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (((*(int *)(param_1 + 0x810) == 0) || (*(longlong **)(param_1 + 0x808) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x30))(), cVar3 == '\0'))
  goto LAB_14941345a;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x810) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x808);
  }
  local_68 = lVar4;
  local_60 = plVar6;
  cVar3 = (**(code **)(*plVar5 + 0x58))();
  if (cVar3 != '\0') goto LAB_14941345a;
  if (*(longlong **)(param_1 + 0x8b0) == (longlong *)0x0) {
    local_78 = 0;
    local_70 = 0;
    uVar8 = 0xffffffff;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x8b0) + 8))();
    uVar8 = 0xffffffff;
    if ((longlong)local_70 != 0) {
      lVar7 = 0;
      uVar9 = 0;
      do {
        uVar8 = uVar9;
        if (*(longlong *)(local_78 + lVar7) == lVar4) break;
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x10;
        uVar8 = 0xffffffff;
      } while ((longlong)local_70 * 0x10 != lVar7);
    }
  }
  iVar11 = 1;
  if (*(int *)(param_1 + 0x708) - *(int *)(param_1 + 0x734) == 1) {
    local_60 = (longlong *)(param_1 + 0x710);
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(param_1 + 0x728) == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      lVar4 = (longlong)local_58._4_4_;
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x700) + lVar4 * 0x18);
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 8 + lVar4 * 0x18);
    if (plVar5 == (longlong *)0x0) {
      if (lVar7 != 0) goto LAB_1494135ab;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      if (lVar7 == 0) {
        iVar11 = 1;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
LAB_1494135ab:
        iVar11 = -1;
        if ((longlong)local_70 != 0) {
          lVar4 = 0;
          iVar10 = 0;
          do {
            iVar11 = iVar10;
            if (*(longlong *)(local_78 + lVar4) == lVar7) break;
            iVar10 = iVar10 + 1;
            lVar4 = lVar4 + 0x10;
            iVar11 = -1;
          } while ((longlong)local_70 * 0x10 != lVar4);
        }
        if (plVar5 == (longlong *)0x0) {
          iVar11 = (uint)(iVar11 < (int)uVar8) * 2 + -1;
          goto LAB_149413661;
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
        iVar11 = (uint)(iVar11 < (int)uVar8) * 2 + -1;
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
LAB_149413661:
  do {
    uVar8 = uVar8 + iVar11;
    if (((int)uVar8 < 0) || (local_70 <= (int)uVar8)) {
      *param_2 = -1;
      param_2[1] = 0;
      if (plVar6 == (longlong *)0x0) goto LAB_14941348b;
      goto LAB_14941346e;
    }
    lVar4 = *(longlong *)(local_78 + (ulonglong)uVar8 * 0x10);
    plVar5 = *(longlong **)(local_78 + 8 + (ulonglong)uVar8 * 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)();
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x810) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x808);
    }
    local_68 = lVar4;
    local_60 = plVar5;
    cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,&local_68);
    plVar6 = plVar5;
  } while (cVar3 == '\0');
LAB_14941345a:
  *param_2 = lVar4;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
LAB_14941346e:
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_14941348b:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14941371c FUN_14941371c body=141 status=ok
// SIG undefined FUN_14941371c(void)

void FUN_14941371c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x869) = 1;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14940a616(param_1,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
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



// FUNCTION 1494137ba FUN_1494137ba body=88 status=ok
// SIG undefined FUN_1494137ba(void)

void FUN_1494137ba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_149413812(param_1 + 0x700);
  FUN_149413856(param_1,param_2);
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000149413806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149413812 FUN_149413812 body=67 status=ok
// SIG undefined FUN_149413812(void)

void FUN_149413812(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_149409642(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14940d176(param_1);
    return;
  }
  FUN_149413922(param_1);
  FUN_149409642(param_1,0);
  return;
}



// FUNCTION 149413856 FUN_149413856 body=202 status=ok
// SIG undefined FUN_149413856(void)

void FUN_149413856(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x398);
      }
      iVar2 = (**(code **)(*plVar3 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar2;
      goto LAB_1494138b8;
    }
  }
  iVar2 = *(int *)(param_1 + 0x390);
LAB_1494138b8:
  if (iVar2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x4d8);
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_28,1,1);
    (**(code **)(*plVar3 + 0x40))(plVar3,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149413922 FUN_149413922 body=322 status=ok
// SIG undefined FUN_149413922(void)

void FUN_149413922(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 149413a66 FUN_149413a66 body=391 status=ok
// SIG undefined FUN_149413a66(void)

void FUN_149413a66(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x18 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar9;
        plVar4 = (longlong *)puVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        if (uVar3 == uVar8) {
          FUN_149413bee(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[2];
        puVar10 = puVar9 + 2;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149413ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149413bee FUN_149413bee body=87 status=ok
// SIG undefined FUN_149413bee(void)

void FUN_149413bee(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_149413c46();
  return;
}



// FUNCTION 149413c46 FUN_149413c46 body=78 status=ok
// SIG undefined FUN_149413c46(void)

void FUN_149413c46(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 8 + (longlong)param_2 * 0x18);
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
  FUN_14940d104(param_1,param_2);
  return;
}



// FUNCTION 149413c94 FUN_149413c94 body=134 status=ok
// SIG undefined FUN_149413c94(void)

void FUN_149413c94(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 149413d1c FUN_149413d1c body=152 status=ok
// SIG undefined FUN_149413d1c(void)

ulonglong FUN_149413d1c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte unaff_BL;
  byte bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] == 0) || (param_1 = (longlong *)*param_1, param_1 == (longlong *)0x0)) {
    bVar4 = 0;
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    unaff_BL = (**(code **)(*param_1 + 0x60))();
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
    bVar4 = 1;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar4 & unaff_BL) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149413db6 FUN_149413db6 body=167 status=ok
// SIG undefined FUN_149413db6(void)

void FUN_149413db6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_149413e31;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_149413e31;
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
LAB_149413e31:
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
                    /* WARNING: Could not recover jumptable at 0x000149413e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 149413e5e FUN_149413e5e body=313 status=ok
// SIG undefined FUN_149413e5e(void)

longlong * FUN_149413e5e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_149413f5a:
    *puVar5 = &PTR_LAB_14bcc2bb0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14bcc2b40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_149413f5a;
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
    *puVar5 = &PTR_LAB_14bcc2bb0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14bcc2b40;
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



// FUNCTION 149413f98 FUN_149413f98 body=64 status=ok
// SIG undefined FUN_149413f98(void)

undefined8 * FUN_149413f98(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bcc2b40;
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



// FUNCTION 149413fdc FUN_149413fdc body=81 status=ok
// SIG undefined FUN_149413fdc(void)

undefined8 FUN_149413fdc(longlong param_1)

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



// FUNCTION 149414034 FUN_149414034 body=89 status=ok
// SIG undefined FUN_149414034(void)

bool FUN_149414034(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14941407f;
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
LAB_14941407f:
  return lVar6 == param_2;
}



// FUNCTION 1494140b6 FUN_1494140b6 body=118 status=ok
// SIG undefined FUN_1494140b6(void)

void FUN_1494140b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcc2bb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2b40;
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



// FUNCTION 14941412c FUN_14941412c body=118 status=ok
// SIG undefined FUN_14941412c(void)

void FUN_14941412c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcc2bb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2b40;
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



// FUNCTION 1494141a2 FUN_1494141a2 body=156 status=ok
// SIG undefined FUN_1494141a2(void)

void FUN_1494141a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bcc2bb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc2b40;
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
                    /* WARNING: Could not recover jumptable at 0x00014941422e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14941423e FUN_14941423e body=232 status=ok
// SIG undefined FUN_14941423e(void)

undefined8 FUN_14941423e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14941428c;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_14941428c:
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  local_38 = *param_3;
  local_30 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  (*pcVar3)(iVar6 + lVar7,param_2);
  if (!bVar4) {
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
  plVar8 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149414328 FUN_149414328 body=293 status=ok
// SIG undefined FUN_149414328(void)

ulonglong FUN_149414328(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_149414405;
      iVar1 = iVar8 + 1;
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 != 0) {
      pcVar6 = *(code **)(param_1 + 0x28);
      iVar8 = *(int *)(param_1 + 0x30);
      local_30 = *param_2;
      local_28 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar6)(lVar5 + iVar8,local_40);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_38 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      uVar9 = CONCAT71((int7)((ulonglong)local_38 >> 8),1);
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
      goto LAB_149414407;
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4,iVar1,param_3,param_3);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_149414405:
  uVar9 = 0;
LAB_149414407:
  plVar4 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 149414450 FUN_149414450 body=2250 status=ok
// SIG undefined FUN_149414450(void)

void FUN_149414450(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_5c8 [32];
  undefined1 *local_5a8;
  longlong local_5a0;
  undefined4 local_598;
  longlong local_590;
  undefined8 local_588;
  undefined1 local_580;
  undefined2 local_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined8 local_558;
  longlong *local_550;
  undefined8 uStack_548;
  undefined1 local_539;
  undefined8 local_538;
  longlong *plStack_530;
  undefined8 uStack_528;
  longlong *local_520 [2];
  undefined1 local_510 [16];
  undefined1 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  longlong *local_4e0;
  longlong local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  longlong *plStack_4c0;
  undefined1 local_4b0 [8];
  longlong *local_4a8;
  longlong *local_4a0;
  undefined8 uStack_498;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0xa2);
  FUN_1494150e4((longlong *)(param_1 + 0x690),param_2 + 0x1b0);
  FUN_1494150e4(param_1 + 0x6a0,param_2 + 0x1c0);
  FUN_149415168(param_1 + 0x680,param_2 + 0x1d0);
  FUN_146a3ba92(param_1 + 0x6d0,param_2 + 0x1e0);
  FUN_1494151ec(param_1 + 0x6e0,param_2 + 0x200);
  FUN_14009d848(param_1 + 0x6f0,param_2 + 0x210);
  plVar9 = *(longlong **)(param_1 + 0x10);
  if (plVar9 == (longlong *)0x0) {
LAB_149414502:
    local_4c8 = 0;
    plStack_4c0 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar6 = (int)plVar9[1];
    do {
      if (iVar6 == 0) goto LAB_149414502;
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar10 = iVar6 == iVar3;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar10);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    bVar10 = false;
    local_4c8 = uVar8;
    plStack_4c0 = plVar9;
  }
  plVar9 = plStack_4c0;
  FUN_149414e2e(param_2,local_4b0,&local_4c8);
  FUN_149414d1c(param_1,local_4b0);
  if (!bVar10) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_146a3c65e(param_1 + 0x370,param_2 + 0x270);
  FUN_14009d848(param_1 + 0x380,param_2 + 0x280);
  FUN_149415ce4(param_1 + 0x818,param_2 + 0x290);
  FUN_149415ce4(param_1 + 0x828,param_2 + 0x2a0);
  FUN_149415d68(param_1 + 0x7f8,param_2 + 0x2b0);
  FUN_149415dec(param_1 + 0x808,param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x2d0);
  FUN_146a3c86e(param_1 + 0x398,param_2 + 0x2d8);
  *(undefined1 *)(param_1 + 0x864) = *(undefined1 *)(param_2 + 0x2f8);
  *(undefined1 *)(param_1 + 0x4c8) = *(undefined1 *)(param_2 + 0x341);
  *(undefined1 *)(param_1 + 0x4c9) = *(undefined1 *)(param_2 + 0x351);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_2 + 0x358);
  *(undefined1 *)(param_1 + 0x865) = *(undefined1 *)(param_2 + 0x36c);
  *(undefined1 *)(param_1 + 0x866) = *(undefined1 *)(param_2 + 0x36d);
  *(undefined1 *)(param_1 + 0x867) = *(undefined1 *)(param_2 + 0x36e);
  *(undefined2 *)(param_1 + 0x848) = *(undefined2 *)(param_2 + 0x370);
  FUN_14096c7c0(param_1 + 0x850,param_2 + 0x378);
  *(undefined1 *)(param_1 + 0x868) = *(undefined1 *)(param_2 + 0x388);
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x315);
  if ((undefined8 *)(param_2 + 0x318) != (undefined8 *)(param_1 + 0x2c8)) {
    if (*(char *)(param_2 + 800) == '\x01') {
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x318);
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x2d0) != '\x01') goto LAB_1494146b2;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x2d0) = uVar5;
  }
LAB_1494146b2:
  *(undefined1 *)(param_1 + 0x7f0) = *(undefined1 *)(param_2 + 0x314);
  if (*(longlong **)(param_2 + 0x390) != (longlong *)0x0 && *(int *)(param_2 + 0x398) != 0) {
    cVar4 = (**(code **)(**(longlong **)(param_2 + 0x390) + 0x30))();
    if (cVar4 != '\0') {
      local_4a8 = (longlong *)0x0;
      local_4a0 = (longlong *)((ulonglong)local_4a0 & 0xffffffff00000000);
      FUN_149415e70(&local_4a8,param_2 + 0x390);
      goto LAB_149414767;
    }
  }
  local_4a8 = (longlong *)0x0;
  local_4a0._0_4_ = 0;
  FUN_1446efa72(&local_4a8,0,2,0x10);
  plVar9 = local_4a8;
  local_4a0 = (longlong *)CONCAT44(local_4a0._4_4_,2);
  *local_4a8 = (longlong)&PTR_LAB_14bcc2e40;
  lVar7 = FUN_144a3f946();
  plVar9[2] = lVar7;
  *plVar9 = (longlong)&PTR_FUN_14bcc2dd0;
  plVar9[3] = (longlong)FUN_149415ef4;
LAB_149414767:
  FUN_149415e70(param_1 + 0x6b0,&local_4a8);
  FUN_1449db362(&local_4a8);
  FUN_14009d848(param_1 + 0x6c0,param_2 + 0x3a0);
  FUN_14603678a(param_1 + 0x838,param_2 + 0x3b0);
  FUN_149414fee(param_1,*(undefined8 *)(param_2 + 0x1a8));
  *(undefined1 *)(param_1 + 0x87c) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_2 + 600);
  FUN_146a24854(param_1 + 0x880,param_2 + 0x260);
  *(undefined1 *)(param_1 + 0x894) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(param_2 + 600);
  FUN_146a24854(param_1 + 0x898,param_2 + 0x260);
  uVar8 = *(undefined8 *)(param_2 + 0x364);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x35c);
  *(undefined8 *)(param_1 + 0x2b0) = uVar8;
  local_4d8 = 0;
  uStack_4d0 = 0;
  if (((*(int *)(param_1 + 0x698) == 0) ||
      (plVar9 = *(longlong **)(param_1 + 0x690), plVar9 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar9 + 0x30))(), cVar4 == '\0')) {
    FUN_1400020e8(&local_4d8,L"Please specify an OnGenerateRow. \n",0x22);
  }
  if (*(longlong *)(param_1 + 0x8b0) == 0) {
    FUN_1400020e8(&local_4d8,L"Please specify a ListItemsSource. \n",0x23);
  }
  if ((int)uStack_4d0 - 2U < 0x7fffffff) {
    *(undefined1 **)(param_1 + 0x228) = &DAT_200000002;
    FUN_140a570d8(&local_4a8);
    FUN_140009b9a(local_520,&local_4d8);
    FUN_14023423e(local_510,local_520);
    local_500 = 1;
    local_4f8 = 0;
    uStack_4f0 = 0;
    uVar8 = FUN_140a54906(&local_4a8,local_510);
    local_5a8 = &local_539;
    FUN_140a54526(&local_538,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x122)
    ;
    FUN_140a52852(&local_538,&local_4e8,uVar8);
    local_558 = local_4e8;
    local_550 = local_4e0;
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + 0x1e0,&local_558);
    plVar9 = local_550;
    if (local_550 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_550 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_550)(local_550);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_4e0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_4e0)(local_4e0);
        LOCK();
        piVar2 = (int *)((longlong)local_4e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4e0 + 0x10))(local_4e0);
        }
      }
    }
    plVar9 = plStack_530;
    if (plStack_530 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_530 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_530)(plStack_530);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_520[0] != (longlong *)0x0) {
      (**(code **)(*local_520[0] + 0x10))();
    }
    FUN_140a59ae6(&local_4a8);
  }
  else {
    local_580 = *(undefined1 *)(param_2 + 0x350);
    local_588 = *(undefined8 *)(param_2 + 0x348);
    local_590 = param_2 + 0x1f0;
    local_598 = *(undefined4 *)(param_2 + 0x310);
    local_5a0 = param_2 + 0x300;
    local_5a8 = (undefined1 *)(param_2 + 0x2e8);
    local_4a8 = (longlong *)CONCAT62(local_4a8._2_6_,0x103);
    local_4a0 = (longlong *)0x0;
    uStack_498 = 0;
    local_538 = CONCAT35((int3)((ulonglong)local_538 >> 0x28),0x100000000);
    plStack_530 = (longlong *)0x0;
    uStack_528 = 0;
    local_558 = CONCAT35(local_558._5_3_,0x100000000);
    local_550 = (longlong *)0x0;
    uStack_548 = 0;
    FUN_1429092be(param_1,&local_558,&local_538,&local_4a8);
    FUN_1449db362(&local_550);
    FUN_1449db362(&plStack_530);
    FUN_1449db362(&local_4a0);
    if (*(longlong *)(param_1 + 0x298) != 0) {
      FUN_146a92d5a(*(longlong *)(param_1 + 0x298),*(undefined1 *)(param_2 + 0x340));
      lVar7 = *(longlong *)(param_1 + 0x298);
      local_570 = *(undefined2 *)(param_2 + 0x328);
      local_568 = 0;
      local_560 = 0;
      FUN_140fe25fc(&local_568,param_2 + 0x330);
      *(undefined1 *)(lVar7 + 0x2a0) = (undefined1)local_570;
      *(undefined1 *)(lVar7 + 0x2a1) = local_570._1_1_;
      FUN_140fe25fc(lVar7 + 0x2a8,&local_568);
      FUN_1449db362(&local_568);
    }
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_149414c1f:
      local_538 = 0;
      plStack_530 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_149414c1f;
        LOCK();
        iVar3 = (int)plVar9[1];
        bVar10 = iVar6 == iVar3;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar10);
      local_538 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_530 = plVar9;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = (longlong *)FUN_14001cc68(0x28,0x10);
    FUN_1494161ec(plVar9,&local_538);
    local_4a8 = plVar9 + 2;
    local_4a0 = plVar9;
    FUN_149415066(param_1);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = plStack_530;
    if (plStack_530 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_530 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_530)(plStack_530);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if (local_4d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_5c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149414d1c FUN_149414d1c body=273 status=ok
// SIG undefined FUN_149414d1c(void)

void FUN_149414d1c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if ((*(byte *)((longlong)param_1 + 0x31) & 4) == 0) {
    param_1 = param_1 + 0x116;
    if (param_1 != param_2) {
      puVar3 = (undefined8 *)*param_1;
      *param_1 = *param_2;
      *param_2 = 0;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  else {
    (**(code **)(param_1[0x9b] + 0x30))(param_1 + 0x9b);
    *(undefined4 *)(param_1 + 0xfb) = 0;
    *(undefined1 *)((longlong)param_1 + 0x869) = 0;
    param_1[0xf9] = 0;
    plVar4 = (longlong *)param_1[0xfa];
    if (plVar4 != (longlong *)0x0) {
      param_1[0xfa] = 0;
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
    FUN_146af6b36(param_1);
    plVar4 = param_1 + 0x116;
    if (plVar4 != param_2) {
      puVar3 = (undefined8 *)*plVar4;
      *plVar4 = *param_2;
      *param_2 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    (**(code **)(*param_1 + 0x248))(param_1);
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149414e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 149414e2e FUN_149414e2e body=445 status=ok
// SIG undefined FUN_149414e2e(void)

undefined8 * FUN_149414e2e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x220);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x228);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x230);
      if (lVar3 == 0) {
        *param_2 = 0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x238);
        if (plVar4 == (longlong *)0x0) {
          uVar6 = FUN_14001cc68(0x30,0x10);
          local_38 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          uVar6 = FUN_14001cc68(0x30,0x10);
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_38 = plVar4;
        }
        local_50 = *param_3;
        local_48 = param_3[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        local_40 = lVar3;
        FUN_149415810(uVar6,&local_50,&local_40);
        *param_2 = uVar6;
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
    }
    else {
      uVar6 = FUN_14001cc68(0x28,0x10);
      local_40 = *param_3;
      local_38 = (longlong *)param_3[1];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_1494152aa(uVar6,&local_40,lVar3);
      *param_2 = uVar6;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar5 = &PTR_FUN_14bcc2c20;
    puVar5[1] = lVar3;
    *param_2 = puVar5;
  }
  plVar4 = (longlong *)param_3[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149414fee FUN_149414fee body=119 status=ok
// SIG undefined FUN_149414fee(void)

void FUN_149414fee(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x870) = param_2;
  if (param_2 == 0) {
    local_38 = FUN_141319416();
  }
  else {
    local_38 = param_2 + 0x10;
  }
  local_30 = 1;
  local_28 = 0;
  uStack_20 = 0;
  FUN_146af67b6(param_1,&local_38);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149415066 FUN_149415066 body=125 status=ok
// SIG undefined FUN_149415066(void)

void FUN_149415066(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 1494150e4 FUN_1494150e4 body=130 status=ok
// SIG undefined FUN_1494150e4(void)

void FUN_1494150e4(longlong *param_1,longlong *param_2)

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



// FUNCTION 149415168 FUN_149415168 body=130 status=ok
// SIG undefined FUN_149415168(void)

void FUN_149415168(longlong *param_1,longlong *param_2)

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



// FUNCTION 1494151ec FUN_1494151ec body=130 status=ok
// SIG undefined FUN_1494151ec(void)

void FUN_1494151ec(longlong *param_1,longlong *param_2)

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



// FUNCTION 149415270 FUN_149415270 body=29 status=ok
// SIG undefined FUN_149415270(void)

undefined8 FUN_149415270(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494152aa FUN_1494152aa body=175 status=ok
// SIG undefined FUN_1494152aa(void)

undefined8 * FUN_1494152aa(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bcc2c40;
  param_1[1] = param_3;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  FUN_14941535a(param_3 + 0x10,&local_28,param_1);
  param_1[4] = local_28;
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
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941535a FUN_14941535a body=189 status=ok
// SIG undefined FUN_14941535a(void)

undefined8 FUN_14941535a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_40 = &PTR_LAB_14bcc2cd0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bcc2c60;
  puVar1[3] = param_3;
  puVar1[4] = FUN_149415418;
  FUN_1494154ba(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149415418 FUN_149415418 body=91 status=ok
// SIG undefined FUN_149415418(void)

void FUN_149415418(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
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
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x240))();
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
                    /* WARNING: Could not recover jumptable at 0x000149415468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149415474 FUN_149415474 body=38 status=ok
// SIG undefined FUN_149415474(void)

undefined8 FUN_149415474(undefined8 param_1,int param_2)

{
  FUN_1494157c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494154ba FUN_1494154ba body=230 status=ok
// SIG undefined FUN_1494154ba(void)

undefined8 * FUN_1494154ba(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1494155a2 FUN_1494155a2 body=29 status=ok
// SIG undefined FUN_1494155a2(void)

undefined8 FUN_1494155a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494155e8 FUN_1494155e8 body=93 status=ok
// SIG undefined FUN_1494155e8(void)

void FUN_1494155e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcc2cd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149415646 FUN_149415646 body=93 status=ok
// SIG undefined FUN_149415646(void)

void FUN_149415646(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcc2cd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1494156a4 FUN_1494156a4 body=126 status=ok
// SIG undefined FUN_1494156a4(void)

void FUN_1494156a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bcc2cd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc2c60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149415713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149415722 FUN_149415722 body=79 status=ok
// SIG undefined FUN_149415722(void)

void FUN_149415722(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149415772 FUN_149415772 body=81 status=ok
// SIG undefined FUN_149415772(void)

undefined8 FUN_149415772(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494157c6 FUN_1494157c6 body=74 status=ok
// SIG undefined FUN_1494157c6(void)

void FUN_1494157c6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bcc2c40;
  if (param_1[4] != 0) {
    FUN_14480f766(param_1[1] + 0x10);
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149415805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 149415810 FUN_149415810 body=240 status=ok
// SIG undefined FUN_149415810(void)

undefined8 * FUN_149415810(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14bcc2d40;
  param_1[1] = *param_3;
  lVar3 = param_3[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = *param_2;
  lVar3 = param_2[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  FUN_149415902(*param_3 + 0x10,&local_30,param_1);
  param_1[5] = local_30;
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149415902 FUN_149415902 body=189 status=ok
// SIG undefined FUN_149415902(void)

undefined8 FUN_149415902(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_40 = &PTR_LAB_14bcc2cd0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bcc2d60;
  puVar1[3] = param_3;
  puVar1[4] = FUN_1494159c0;
  FUN_1494154ba(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494159c0 FUN_1494159c0 body=91 status=ok
// SIG undefined FUN_1494159c0(void)

void FUN_1494159c0(longlong param_1)

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
    do {
      if (iVar5 == 0) {
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
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x240))();
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
                    /* WARNING: Could not recover jumptable at 0x000149415a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149415a1c FUN_149415a1c body=38 status=ok
// SIG undefined FUN_149415a1c(void)

undefined8 FUN_149415a1c(undefined8 param_1,int param_2)

{
  FUN_149415c74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149415a5e FUN_149415a5e body=29 status=ok
// SIG undefined FUN_149415a5e(void)

undefined8 FUN_149415a5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149415a98 FUN_149415a98 body=93 status=ok
// SIG undefined FUN_149415a98(void)

void FUN_149415a98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcc2cd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2d60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149415af6 FUN_149415af6 body=93 status=ok
// SIG undefined FUN_149415af6(void)

void FUN_149415af6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcc2cd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2d60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149415b54 FUN_149415b54 body=126 status=ok
// SIG undefined FUN_149415b54(void)

void FUN_149415b54(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bcc2cd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc2d60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149415bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149415bd2 FUN_149415bd2 body=79 status=ok
// SIG undefined FUN_149415bd2(void)

void FUN_149415bd2(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149415c22 FUN_149415c22 body=81 status=ok
// SIG undefined FUN_149415c22(void)

undefined8 FUN_149415c22(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149415c74 FUN_149415c74 body=112 status=ok
// SIG undefined FUN_149415c74(void)

void FUN_149415c74(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bcc2d40;
  if (param_1[5] != 0) {
    FUN_14480f766(param_1[1] + 0x10);
  }
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000149415cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149415ce4 FUN_149415ce4 body=130 status=ok
// SIG undefined FUN_149415ce4(void)

void FUN_149415ce4(longlong *param_1,longlong *param_2)

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



// FUNCTION 149415d68 FUN_149415d68 body=130 status=ok
// SIG undefined FUN_149415d68(void)

void FUN_149415d68(longlong *param_1,longlong *param_2)

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



// FUNCTION 149415dec FUN_149415dec body=130 status=ok
// SIG undefined FUN_149415dec(void)

void FUN_149415dec(longlong *param_1,longlong *param_2)

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



// FUNCTION 149415e70 FUN_149415e70 body=130 status=ok
// SIG undefined FUN_149415e70(void)

void FUN_149415e70(longlong *param_1,longlong *param_2)

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



// FUNCTION 149415ef4 FUN_149415ef4 body=100 status=ok
// SIG undefined FUN_149415ef4(void)

undefined8 FUN_149415ef4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_2 == 0) {
    FUN_140056680(param_1,&DAT_149e2b65a);
  }
  else {
    FUN_140002266(param_1,L"0x%08llx");
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
  return param_1;
}



// FUNCTION 149415f58 FUN_149415f58 body=29 status=ok
// SIG undefined FUN_149415f58(void)

undefined8 FUN_149415f58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149415f98 FUN_149415f98 body=93 status=ok
// SIG undefined FUN_149415f98(void)

void FUN_149415f98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcc2e40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2dd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 149415ff6 FUN_149415ff6 body=93 status=ok
// SIG undefined FUN_149415ff6(void)

void FUN_149415ff6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcc2e40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2dd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 149416054 FUN_149416054 body=126 status=ok
// SIG undefined FUN_149416054(void)

void FUN_149416054(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bcc2e40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc2dd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001494160c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1494160d2 FUN_1494160d2 body=132 status=ok
// SIG undefined FUN_1494160d2(void)

undefined8 FUN_1494160d2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar3 = *(code **)(param_1 + 0x18);
  local_28 = *param_3;
  local_20 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  (*pcVar3)(param_2);
  plVar4 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149416158 FUN_149416158 body=145 status=ok
// SIG undefined FUN_149416158(void)

undefined8 FUN_149416158(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar3 = *(code **)(param_1 + 0x18);
  local_28 = *param_2;
  local_20 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494161ec FUN_1494161ec body=150 status=ok
// SIG undefined FUN_1494161ec(void)

undefined8 * FUN_1494161ec(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bcc2eb0;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_2 + 0x4d8;
  if (*param_2 == 0) {
    lVar4 = 0;
  }
  if (plVar3 == (longlong *)0x0) {
    param_1[2] = &PTR_FUN_14bcc2ed0;
    param_1[3] = lVar4;
    param_1[4] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[2] = &PTR_FUN_14bcc2ed0;
    param_1[3] = lVar4;
    param_1[4] = plVar3;
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
  }
  return param_1;
}



// FUNCTION 1494162a4 FUN_1494162a4 body=29 status=ok
// SIG undefined FUN_1494162a4(void)

undefined8 FUN_1494162a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494162c2 FUN_1494162c2 body=64 status=ok
// SIG undefined FUN_1494162c2(void)

undefined8 * FUN_1494162c2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bcc2ed0;
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



// FUNCTION 149416302 FUN_149416302 body=49 status=ok
// SIG undefined FUN_149416302(void)

bool FUN_149416302(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  FUN_1494164b8();
  bVar2 = true;
  if (DAT_14cc15538 != *param_2) {
    plVar1 = (longlong *)FUN_146a3cf3e();
    bVar2 = *plVar1 == *param_2;
  }
  return bVar2;
}



// FUNCTION 149416334 FUN_149416334 body=386 status=ok
// SIG undefined FUN_149416334(void)

longlong * FUN_149416334(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_14941639b;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    plVar4 = *(longlong **)(param_1 + 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0xd0))(plVar4,&local_50);
      iVar8 = 0;
      if ((longlong)local_48 != 0) {
        lVar9 = (longlong)local_48 << 4;
        lVar10 = local_50;
        do {
          (**(code **)(*plVar4 + 0xd8))(plVar4,&local_60,lVar10);
          if (local_60 != 0) {
            iVar8 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
              FUN_146a3d014(param_2,iVar8);
            }
            lVar5 = *param_2;
            *(longlong *)(lVar5 + (longlong)iVar8 * 0x10) = local_60;
            *(longlong **)(lVar5 + 8 + (longlong)iVar8 * 0x10) = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
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
          lVar10 = lVar10 + 0x10;
          lVar9 = lVar9 + -0x10;
          iVar8 = local_48;
        } while (lVar9 != 0);
      }
      FUN_14940386c(local_50,iVar8);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
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
LAB_14941639b:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494164b8 FUN_1494164b8 body=104 status=ok
// SIG undefined FUN_1494164b8(void)

void FUN_1494164b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc15540) {
    FUN_144b3d300(&DAT_14cc15540);
    if (DAT_14cc15540 == -1) {
      FUN_1446f470e(&DAT_14cc15538,L"TTableViewMetadata",1);
      _Init_thread_footer(&DAT_14cc15540);
      return;
    }
  }
  return;
}



// FUNCTION 149416520 FUN_149416520 body=313 status=ok
// SIG undefined FUN_149416520(void)

longlong * FUN_149416520(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14941661c:
    *puVar5 = &PTR_LAB_149f05630;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14bcc2ef0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14941661c;
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
    *puVar5 = &PTR_LAB_149f05630;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14bcc2ef0;
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



// FUNCTION 14941665a FUN_14941665a body=64 status=ok
// SIG undefined FUN_14941665a(void)

undefined8 * FUN_14941665a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bcc2ef0;
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



// FUNCTION 14941669e FUN_14941669e body=81 status=ok
// SIG undefined FUN_14941669e(void)

undefined8 FUN_14941669e(longlong param_1)

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



// FUNCTION 1494166f6 FUN_1494166f6 body=89 status=ok
// SIG undefined FUN_1494166f6(void)

bool FUN_1494166f6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_149416741;
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
LAB_149416741:
  return lVar6 == param_2;
}



// FUNCTION 14941676c FUN_14941676c body=118 status=ok
// SIG undefined FUN_14941676c(void)

void FUN_14941676c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2ef0;
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



// FUNCTION 1494167e2 FUN_1494167e2 body=118 status=ok
// SIG undefined FUN_1494167e2(void)

void FUN_1494167e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc2ef0;
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



// FUNCTION 149416858 FUN_149416858 body=156 status=ok
// SIG undefined FUN_149416858(void)

void FUN_149416858(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc2ef0;
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
                    /* WARNING: Could not recover jumptable at 0x0001494168e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1494168f4 FUN_1494168f4 body=105 status=ok
// SIG undefined FUN_1494168f4(void)

undefined8 FUN_1494168f4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_149416948:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_149416948;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 14941695e FUN_14941695e body=168 status=ok
// SIG undefined FUN_14941695e(void)

ulonglong FUN_14941695e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1494169de:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1494169de;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_d8);
      FUN_14493db24(local_d8);
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
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 149416a08 FUN_149416a08 body=304 status=ok
// SIG undefined FUN_149416a08(void)

longlong * FUN_149416a08(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x400,0x10);
  FUN_149416b3a(plVar3);
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_149417692(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_149416ac7;
    param_1[1] = 0;
LAB_149416a91:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_149416ac7;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_149416ac7;
      goto LAB_149416a91;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_149416ac7;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_149416ac7:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x3f0;
  FUN_140a52e78(*param_1 + 8,"SInterchangeGenericAssetMaterialConflictListRow",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x6fa);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149416b3a FUN_149416b3a body=170 status=ok
// SIG undefined FUN_149416b3a(void)

undefined8 * FUN_149416b3a(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bcc2f60;
  memset(param_1 + 2,0,0x3f0);
  FUN_14940de30(param_1 + 2);
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[2] = &PTR_LAB_14bcc2f80;
  param_1[3] = &PTR_FUN_14bcc3030;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  return param_1;
}



// FUNCTION 149416bee FUN_149416bee body=29 status=ok
// SIG undefined FUN_149416bee(void)

undefined8 FUN_149416bee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149416c0c FUN_149416c0c body=207 status=ok
// SIG undefined FUN_149416c0c(void)

void FUN_149416c0c(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x368) = *param_4;
  plVar2 = (longlong *)param_4[1];
  plVar4 = *(longlong **)(param_1 + 0x370);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x370);
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
    *(longlong **)(param_1 + 0x370) = plVar2;
  }
  local_48 = *(undefined1 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_40 = 0;
  local_38 = 0;
  FUN_140a58be0(&local_40,param_3 + 6);
  uVar3 = FUN_140a58d14(param_1 + 0x220,&local_58);
  FUN_140a58896(uVar3,param_4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149416cdc FUN_149416cdc body=2223 status=ok
// SIG undefined FUN_149416cdc(void)

undefined8 * FUN_149416cdc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_8f8 [32];
  longlong **local_8d8;
  undefined1 local_8c8 [16];
  undefined1 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined1 local_899;
  longlong *local_898;
  longlong *local_890;
  undefined1 local_879;
  longlong local_878;
  longlong *plStack_870;
  undefined4 local_860;
  undefined4 uStack_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined4 local_850;
  undefined1 local_84c;
  undefined8 local_848;
  undefined8 uStack_840;
  longlong *local_838;
  undefined4 local_830;
  undefined1 local_828;
  undefined8 local_820;
  undefined8 uStack_818;
  longlong *local_810 [2];
  undefined1 local_800 [16];
  undefined1 local_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  longlong *local_7d8;
  longlong *local_7d0;
  longlong *local_7c8;
  longlong *local_7c0;
  longlong *local_7b8;
  undefined4 local_7b0;
  undefined4 uStack_7ac;
  wchar_t *local_7a8;
  undefined8 uStack_7a0;
  undefined1 local_798;
  undefined8 local_790;
  undefined8 uStack_788;
  longlong local_338 [53];
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178;
  undefined1 local_170 [16];
  longlong *local_160;
  longlong *local_158;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_8f8;
  if (*param_3 == DAT_14cc15478) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x3e0) + 0x10);
    FUN_144a5dc74(&local_7b8);
    if (iVar4 == -1) {
      local_7a8 = L"SInterchangeGenericAssetMaterialConflictListRow_Conflict_unmatched";
      uStack_7a0._0_4_ = 0x42;
      FUN_1446e940c(local_338,&local_7a8);
      local_7a8 = L"InterchangeGenericAssetPipeline";
      uStack_7a0 = CONCAT44(uStack_7a0._4_4_,0x1f);
      FUN_1446e940c(&local_878,&local_7a8);
      FUN_140208bae(&local_7a8,&local_878,local_338,L"Import material is unmatched");
      FUN_140008f88(&local_7b8,&local_7a8);
      if (local_7a8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_7a8 + 0x10))();
      }
      uVar9 = 0x3e99999a;
      uVar11 = 0x3f333333;
      uVar10 = 0;
      bVar8 = 0;
    }
    else {
      local_878 = 0;
      plStack_870 = (longlong *)0x0;
      FUN_144a83b10(&local_878,*(undefined4 *)(*(longlong *)(param_1 + 0x3e0) + 0x10));
      local_7a8 = L"SInterchangeGenericAssetMaterialConflictListRow_Conflict_matched";
      uStack_7a0._0_4_ = 0x40;
      FUN_1446e940c(&local_7c8,&local_7a8);
      local_7a8 = L"InterchangeGenericAssetPipeline";
      uStack_7a0 = CONCAT44(uStack_7a0._4_4_,0x1f);
      FUN_1446e940c(&local_7d8,&local_7a8);
      FUN_140208bae(&local_898,&local_7d8,&local_7c8,
                    L"Import material is matched with original asset index: ");
      uVar6 = FUN_1447a1f4a(&local_898);
      FUN_1407ec8fc(local_338,uVar6,&local_878);
      FUN_140233b1a(&local_7a8,local_338);
      FUN_140008f88(&local_7b8,&local_7a8);
      if (local_7a8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_7a8 + 0x10))();
      }
      if (local_338[0] != 0) {
        FUN_1400020a8();
      }
      if (local_898 != (longlong *)0x0) {
        (**(code **)(*local_898 + 0x10))();
      }
      if (local_878 != 0) {
        FUN_1400020a8();
      }
      uVar9 = 0;
      uVar10 = 0x3f800000;
      bVar8 = 2;
      uVar11 = 0x3f800000;
    }
    FUN_140a53a96(local_338);
    local_7a8 = (wchar_t *)0x4000000040000000;
    uStack_7a0 = 0x4000000040000000;
    local_798 = 1;
    local_790 = 0;
    uStack_788 = 0;
    local_178 = 1;
    local_188 = 0x40000000;
    uStack_184 = 0x40000000;
    uStack_180 = 0x40000000;
    uStack_17c = 0x40000000;
    FUN_144a450dc(local_170,&local_790);
    FUN_1449db362(&local_790);
    local_190 = 0x200000001;
    FUN_140a570d8(&local_7a8);
    FUN_140009b9a(local_810,*(undefined8 *)(param_1 + 0x3e0));
    FUN_14023423e(local_800,local_810);
    local_7f0 = 1;
    local_7e8 = 0;
    uStack_7e0 = 0;
    uVar6 = FUN_140a54906(&local_7a8,local_800);
    local_838 = local_7b8;
    if (local_7b8 != (longlong *)0x0) {
      (**(code **)(*local_7b8 + 8))();
    }
    local_830 = local_7b0;
    local_828 = 1;
    local_820 = 0;
    uStack_818 = 0;
    lVar7 = FUN_146a10d9c(uVar6);
    local_854 = 0x3f800000;
    local_850._0_2_ = (ushort)bVar8;
    local_84c = 1;
    local_848 = 0;
    uStack_840 = 0;
    *(ulonglong *)(lVar7 + 0x270) = CONCAT44(uVar9,uVar11);
    *(undefined4 *)(lVar7 + 0x278) = uVar10;
    *(undefined4 *)(lVar7 + 0x27c) = 0x3f800000;
    *(undefined4 *)(lVar7 + 0x280) = local_850;
    *(undefined1 *)(lVar7 + 0x284) = 1;
    local_860 = uVar11;
    uStack_85c = uVar9;
    local_858 = uVar10;
    FUN_144a450dc(lVar7 + 0x288,&local_848);
    FUN_1449db362(&local_848);
    local_8d8 = (longlong **)&local_879;
    FUN_140a54526(&local_878,"STextBlock",
                  ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                  ,0x699);
    FUN_140a52852(&local_878,&local_7d8,lVar7);
    plVar5 = local_158;
    plVar3 = local_7d0;
    if (local_7d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_7d0 + 1) = (int)local_7d0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_7d0 + 1) = (int)local_7d0[1] + 1;
      UNLOCK();
    }
    local_160 = local_7d8;
    local_158 = local_7d0;
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
    local_8d8 = (longlong **)&local_899;
    FUN_140a53d66(&local_898,&DAT_149efe19f,
                  ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                  ,0x694);
    FUN_140a50bf4(&local_898,&local_7c8,local_338);
    *param_2 = local_7c8;
    param_2[1] = local_7c0;
    if (local_7c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_7c0 + 1) = (int)local_7c0[1] + 1;
      UNLOCK();
      if (local_7c0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_7c0 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_7c0)(local_7c0);
          LOCK();
          piVar2 = (int *)((longlong)local_7c0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_7c0 + 0x10))(local_7c0);
          }
        }
      }
    }
    if (local_890 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_890 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_890)(local_890);
        LOCK();
        piVar2 = (int *)((longlong)local_890 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_890 + 0x10))(local_890);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
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
    if (local_7d0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_7d0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_7d0)(local_7d0);
        LOCK();
        piVar2 = (int *)((longlong)local_7d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_7d0 + 0x10))(local_7d0);
        }
      }
    }
    plVar3 = plStack_870;
    if (plStack_870 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_870 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_870)(plStack_870);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_810[0] != (longlong *)0x0) {
      (**(code **)(*local_810[0] + 0x10))();
    }
    FUN_140a59ae6(&local_7a8);
    FUN_140a5660c(local_338);
    if (local_7b8 != (longlong *)0x0) {
      (**(code **)(*local_7b8 + 0x10))();
    }
  }
  else {
    FUN_140a53a96(local_338);
    local_7a8 = (wchar_t *)0x4000000040000000;
    uStack_7a0 = 0x4000000040000000;
    local_798 = 1;
    local_790 = 0;
    uStack_788 = 0;
    local_178 = 1;
    local_188 = 0x40000000;
    uStack_184 = 0x40000000;
    uStack_180 = 0x40000000;
    uStack_17c = 0x40000000;
    FUN_144a450dc(local_170,&local_790);
    FUN_1449db362(&local_790);
    local_190 = 0x200000001;
    FUN_140a570d8(&local_7a8);
    FUN_140009b9a(&local_7d8,*(longlong *)(param_1 + 0x3e0) + 0x28);
    FUN_14023423e(local_8c8,&local_7d8);
    local_8b8 = 1;
    local_8b0 = 0;
    uStack_8a8 = 0;
    uVar6 = FUN_140a54906(&local_7a8,local_8c8);
    local_8d8 = local_810;
    FUN_140a54526(&local_878,"STextBlock",
                  ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                  ,0x6a6);
    FUN_140a52852(&local_878,&local_7c8,uVar6);
    plVar5 = local_158;
    plVar3 = local_7c0;
    if (local_7c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_7c0 + 1) = (int)local_7c0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_7c0 + 1) = (int)local_7c0[1] + 1;
      UNLOCK();
    }
    local_160 = local_7c8;
    local_158 = local_7c0;
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
    local_8d8 = (longlong **)&local_879;
    FUN_140a53d66(&local_898,&DAT_149efe19f,
                  ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                  ,0x6a1);
    FUN_140a50bf4(&local_898,&local_7b8,local_338);
    *param_2 = local_7b8;
    lVar7 = CONCAT44(uStack_7ac,local_7b0);
    param_2[1] = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      plVar5 = (longlong *)CONCAT44(uStack_7ac,local_7b0);
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
    }
    if (local_890 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_890 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_890)(local_890);
        LOCK();
        piVar2 = (int *)((longlong)local_890 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_890 + 0x10))(local_890);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
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
    if (local_7c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_7c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_7c0)(local_7c0);
        LOCK();
        piVar2 = (int *)((longlong)local_7c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_7c0 + 0x10))(local_7c0);
        }
      }
    }
    plVar3 = plStack_870;
    if (plStack_870 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_870 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_870)(plStack_870);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_7d8 != (longlong *)0x0) {
      (**(code **)(*local_7d8 + 0x10))();
    }
    FUN_140a59ae6(&local_7a8);
    FUN_140a5660c(local_338);
  }
  if ((local_90 ^ (ulonglong)auStack_8f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941758c FUN_14941758c body=45 status=ok
// SIG undefined FUN_14941758c(void)

longlong FUN_14941758c(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1494175bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494175bc FUN_1494175bc body=85 status=ok
// SIG undefined FUN_1494175bc(void)

void FUN_1494175bc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bcc2f80;
  param_1[1] = &PTR_FUN_14bcc3030;
  plVar3 = (longlong *)param_1[0x7d];
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
  FUN_149417612(param_1);
  return;
}



// FUNCTION 149417612 FUN_149417612 body=127 status=ok
// SIG undefined FUN_149417612(void)

void FUN_149417612(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bcc3280;
  param_1[1] = &PTR_LAB_14bcc3330;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_147da3520(param_1 + 0x72);
  plVar3 = (longlong *)param_1[0x71];
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
  FUN_14941149c(param_1);
  return;
}



// FUNCTION 149417692 FUN_149417692 body=171 status=ok
// SIG undefined FUN_149417692(void)

void FUN_149417692(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_149417711;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_149417711;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_149417711:
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
                    /* WARNING: Could not recover jumptable at 0x000149417731. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14941773e FUN_14941773e body=257 status=ok
// SIG undefined FUN_14941773e(void)

void FUN_14941773e(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_2b8 [40];
  undefined8 local_290;
  undefined1 local_288 [424];
  undefined8 local_e0;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar3 = *(undefined8 *)(param_2 + 0x1a8);
  lVar5 = *(longlong *)(param_2 + 0x1b0);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 1000);
  *(undefined8 *)(param_1 + 0x3e0) = uVar3;
  *(longlong *)(param_1 + 1000) = lVar5;
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
  FUN_14940da5c(local_288);
  FUN_1446ddc76(&local_290,"DataTableEditor.CellListViewRow",1);
  lVar5 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar5 == 0) {
    lVar5 = DAT_14c96b350;
  }
  local_e0 = FUN_145817f3a(lVar5,local_290,0,0);
  FUN_149417840(param_1,local_288,param_3);
  FUN_14940dc42(local_288);
  if ((local_20 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149417840 FUN_149417840 body=1015 status=ok
// SIG undefined FUN_149417840(void)

void FUN_149417840(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_4e8 [32];
  undefined1 *local_4c8;
  undefined1 local_4b1;
  longlong local_4b0;
  longlong *local_4a8;
  undefined8 local_498;
  longlong *local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined1 local_478;
  undefined8 local_470;
  undefined4 local_468;
  code *local_458;
  undefined4 local_450;
  longlong local_2a0;
  longlong *local_298;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined1 auStack_60 [16];
  undefined1 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  FUN_14940da5c(&local_2a0);
  local_f8 = *(undefined8 *)(param_2 + 0x1a8);
  local_f0 = *(undefined8 *)(param_2 + 0x1b0);
  local_478 = *(undefined1 *)(param_2 + 0x238);
  local_488 = *(undefined4 *)(param_2 + 0x228);
  uStack_484 = *(undefined4 *)(param_2 + 0x22c);
  uStack_480 = *(undefined4 *)(param_2 + 0x230);
  uStack_47c = *(undefined4 *)(param_2 + 0x234);
  local_470 = 0;
  local_468 = 0;
  FUN_140a58be0(&local_470,param_2 + 0x240);
  local_68 = local_478;
  local_78 = local_488;
  uStack_74 = uStack_484;
  uStack_70 = uStack_480;
  uStack_6c = uStack_47c;
  FUN_144a450dc(auStack_60,&local_470);
  FUN_1449db362(&local_470);
  local_50 = *(undefined1 *)(param_2 + 0x250);
  FUN_1494132c8(auStack_e8,param_2 + 0x1b8);
  FUN_14941334c(auStack_d8,param_2 + 0x1c8);
  FUN_145767132(auStack_b8,param_2 + 0x1e8);
  FUN_14697937e(auStack_a8,param_2 + 0x1f8);
  FUN_14697937e(auStack_98,param_2 + 0x208);
  FUN_146979402(auStack_88,param_2 + 0x218);
  FUN_140a5296a(&local_458);
  local_4c8 = &local_4b1;
  FUN_140a541dc(&local_4b0,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                0x538);
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4a8 + 1) = (int)local_4a8[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x71];
  param_1[0x70] = local_4b0;
  param_1[0x71] = (longlong)local_4a8;
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
  FUN_140a50ec6(&local_4b0,&local_498,&local_458);
  plVar1 = local_40;
  plVar4 = local_490;
  if (local_490 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_490 + 1) = (int)local_490[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_490 + 1) = (int)local_490[1] + 1;
    UNLOCK();
  }
  local_48 = local_498;
  local_40 = local_490;
  if (plVar1 != (longlong *)0x0) {
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
  FUN_149412568(param_1,&local_2a0,param_3);
  (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)(*param_3 + 0x270),&local_78,&local_48);
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
  if (local_490 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_490 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_490)(local_490);
      LOCK();
      piVar2 = (int *)((longlong)local_490 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_490 + 0x10))(local_490);
      }
    }
  }
  plVar4 = local_4a8;
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4a8)(local_4a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_145ab33da(&local_458);
  FUN_14940dc42(&local_2a0);
  FUN_146af5c44(*param_3,&local_4b0);
  lVar5 = local_4b0 + 0x2e8;
  local_458 = FUN_149417c38;
  local_450 = 0;
  FUN_149418632(&local_2a0,param_1,&local_458);
  FUN_146afcdca(lVar5,&local_458,&local_2a0);
  FUN_1449db362(&local_2a0);
  plVar4 = local_4a8;
  local_2a0 = local_4b0;
  local_298 = local_4a8;
  if (local_4a8 == (longlong *)0x0) {
    FUN_149417c38(param_1,&local_2a0);
  }
  else {
    LOCK();
    *(int *)(local_4a8 + 1) = (int)local_4a8[1] + 1;
    UNLOCK();
    FUN_149417c38(param_1);
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
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_4a8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_4a8)(local_4a8);
      LOCK();
      piVar2 = (int *)((longlong)local_4a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4a8 + 0x10))(local_4a8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149417c38 FUN_149417c38 body=2553 status=ok
// SIG undefined FUN_149417c38(void)

void FUN_149417c38(longlong *param_1,undefined8 *param_2)

{
  longlong **pplVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  longlong **pplVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_548 [32];
  undefined8 *local_528;
  longlong *local_518;
  undefined1 *local_510;
  undefined4 *local_508;
  longlong *local_500;
  undefined1 local_4f1;
  undefined8 local_4f0;
  longlong *local_4e8;
  undefined4 local_4d8;
  undefined1 local_4d4;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c0;
  longlong *local_4b8;
  undefined4 local_4b0;
  undefined1 local_4ac;
  longlong *local_4a8;
  undefined8 uStack_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  longlong *local_478;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_468;
  undefined4 local_460;
  longlong *local_458;
  longlong **pplStack_450;
  longlong *local_448;
  longlong **applStack_440 [8];
  undefined4 local_400;
  undefined1 local_3fc;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined1 local_3a6;
  undefined4 local_2a0;
  undefined4 local_29c;
  longlong *local_270;
  longlong **local_268;
  undefined4 local_260 [2];
  undefined1 local_258 [184];
  undefined4 local_1a0;
  undefined1 local_19c;
  longlong *local_198;
  undefined8 uStack_190;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_548;
  FUN_146977a00(param_1[0x70]);
  plVar8 = (longlong *)FUN_146af054a();
  lVar6 = plVar8[1];
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  if (0 < (longlong)(int)lVar6) {
    local_500 = param_1 + 0x79;
    local_508 = local_260;
    local_510 = local_258;
    lVar16 = 0;
    local_518 = param_1;
    do {
      plVar4 = *(longlong **)(*plVar8 + lVar16 * 8);
      cVar7 = FUN_146af0cd6(*param_2,plVar4);
      pplVar14 = DAT_14c98ded0;
      if (cVar7 != '\0') {
        if ((int)param_1[0x73] != *(int *)((longlong)param_1 + 0x3c4)) {
          lVar10 = *plVar4;
          uVar5 = (uint)((ulonglong)lVar10 >> 0x10);
          uVar15 = (uint)lVar10 & 0xffff;
          plVar9 = (longlong *)param_1[0x7a];
          if ((longlong *)param_1[0x7a] == (longlong *)0x0) {
            plVar9 = local_500;
          }
          iVar12 = *(int *)((longlong)plVar9 +
                           (ulonglong)
                           ((int)param_1[0x7b] - 1U &
                           (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar15) +
                           (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4)) * 4);
          if (iVar12 != -1) {
            do {
              lVar13 = param_1[0x72] + (longlong)iVar12 * 0x20;
              if (*(longlong *)(param_1[0x72] + (longlong)iVar12 * 0x20) == lVar10)
              goto LAB_149417d93;
              iVar12 = *(int *)(lVar13 + 0x18);
            } while (iVar12 != -1);
          }
        }
        lVar13 = 0;
LAB_149417d93:
        plVar9 = (longlong *)(lVar13 + 8);
        if (lVar13 == 0) {
          plVar9 = (longlong *)0x0;
        }
        local_458 = DAT_14c98dec8;
        pplStack_450 = DAT_14c98ded0;
        if (DAT_14c98ded0 != (longlong **)0x0) {
          LOCK();
          *(int *)(DAT_14c98ded0 + 1) = *(int *)(DAT_14c98ded0 + 1) + 1;
          UNLOCK();
        }
        if (plVar9 == (longlong *)0x0) {
          (**(code **)(*param_1 + 0xa0))(param_1,&local_448,plVar4);
          pplVar14 = pplStack_450;
          plVar9 = local_458;
          local_458 = local_448;
          pplStack_450 = applStack_440[0];
          local_448 = plVar9;
          applStack_440[0] = pplVar14;
          if (pplVar14 != (longlong **)0x0) {
            LOCK();
            pplVar1 = pplVar14 + 1;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            UNLOCK();
            if (*(int *)pplVar1 == 0) {
              (*(code *)**pplVar14)(pplVar14);
              LOCK();
              piVar2 = (int *)((longlong)pplVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                plVar9 = *pplVar14;
LAB_149417e74:
                (*(code *)plVar9[2])(pplVar14);
              }
            }
          }
        }
        else {
          local_458 = (longlong *)*plVar9;
          pplStack_450 = (longlong **)plVar9[1];
          if (pplStack_450 != (longlong **)0x0) {
            LOCK();
            *(int *)(pplStack_450 + 1) = *(int *)(pplStack_450 + 1) + 1;
            UNLOCK();
          }
          if (pplVar14 != (longlong **)0x0) {
            LOCK();
            pplVar1 = pplVar14 + 1;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            UNLOCK();
            if (*(int *)pplVar1 == 0) {
              (*(code *)**pplVar14)(pplVar14);
              LOCK();
              piVar2 = (int *)((longlong)pplVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                plVar9 = *pplVar14;
                goto LAB_149417e74;
              }
            }
          }
        }
        if (local_458 != DAT_14c98dec8) {
          FUN_140cbdc98(local_458,4);
        }
        iVar12 = (int)plVar4[0x16];
        if (iVar12 - 2U < 2) {
          local_4b0 = 0xbf800000;
          local_4ac = 0;
          local_4a8 = (longlong *)0x0;
          uStack_4a0 = 0;
          local_448 = (longlong *)0x0;
          applStack_440[0] = (longlong **)((ulonglong)applStack_440[0] & 0xffffffff00000000);
          FUN_1446efa72(&local_448,0,2,0x10);
          plVar9 = local_448;
          applStack_440[0] = (longlong **)CONCAT44(applStack_440[0]._4_4_,2);
          *local_448 = (longlong)&PTR_LAB_149f201b0;
          lVar10 = FUN_144a3f946();
          plVar9[2] = lVar10;
          *plVar9 = (longlong)&PTR_FUN_14bcc3800;
          plVar9[3] = (longlong)plVar4;
          local_4ac = 1;
          FUN_144a450dc(&local_4a8,&local_448);
          FUN_1449db362(&local_448);
          FUN_146a24608(param_1[0x70],&local_1a0,0xffffffff);
          uVar11 = FUN_140a52578(&local_198);
          FUN_140a53a96(&local_448);
          local_4d8 = local_4b0;
          local_4d4 = local_4ac;
          local_4d0 = 0;
          local_4c8 = 0;
          FUN_140a58922(&local_4d0,&local_4a8);
          *(undefined1 *)(local_508 + 1) = local_4d4;
          *local_508 = local_4d8;
          FUN_144a450dc(local_510,&local_4d0);
          FUN_1449db362(&local_4d0);
          pplVar14 = local_268;
          local_2a0 = (undefined4)plVar4[0x21];
          local_29c = *(undefined4 *)((longlong)plVar4 + 0x10c);
          local_3a6 = 4;
          if (pplStack_450 != (longlong **)0x0) {
            LOCK();
            *(int *)(pplStack_450 + 1) = *(int *)(pplStack_450 + 1) + 1;
            UNLOCK();
          }
          local_270 = local_458;
          local_268 = pplStack_450;
          if (pplVar14 != (longlong **)0x0) {
            LOCK();
            pplVar1 = pplVar14 + 1;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            UNLOCK();
            if (*(int *)pplVar1 == 0) {
              (*(code *)**pplVar14)(pplVar14);
              LOCK();
              piVar2 = (int *)((longlong)pplVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pplVar14)[2])(pplVar14);
              }
            }
          }
          local_528 = (undefined8 *)&local_4f1;
          FUN_140a53d66(&local_4f0,&DAT_149efe19f,
                        "Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",0x59f);
          FUN_140a50bf4(&local_4f0,&local_4c0,&local_448);
          param_1 = local_518;
          local_480 = local_4c0;
          local_478 = local_4b8;
          if (local_4b8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_4b8 + 1) = (int)local_4b8[1] + 1;
            UNLOCK();
          }
          FUN_140a4fe8e(uVar11,&local_480);
          plVar9 = local_478;
          if (local_478 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_478 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_478)(local_478);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          plVar9 = local_4b8;
          if (local_4b8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_4b8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_4b8)(local_4b8);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          plVar9 = local_4e8;
          if (local_4e8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_4e8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_4e8)(local_4e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          FUN_140a5660c(&local_448);
          FUN_146a071ac(&local_1a0);
          pplVar14 = &local_4a8;
LAB_1494182c5:
          FUN_1449db362(pplVar14);
        }
        else if (iVar12 == 1) {
          FUN_146a24608(param_1[0x70],&local_1a0,0xffffffff);
          uVar11 = FUN_140a52578(&local_198);
          FUN_140a53a96(&local_448);
          if ((((int)plVar4[0x12] != 0) && ((longlong *)plVar4[0x11] != (longlong *)0x0)) &&
             (cVar7 = (**(code **)(*(longlong *)plVar4[0x11] + 0x30))(), cVar7 != '\0')) {
            if ((int)plVar4[0x12] == 0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = (longlong *)plVar4[0x11];
            }
            uVar17 = (**(code **)(*plVar9 + 0x58))();
            *(undefined4 *)(plVar4 + 0x10) = uVar17;
          }
          local_498 = (undefined4)plVar4[0x10];
          local_494 = 1;
          local_490 = 0;
          uStack_488 = 0;
          *(undefined1 *)(local_508 + 1) = 1;
          *local_508 = local_498;
          FUN_144a450dc(local_510,&local_490);
          FUN_1449db362(&local_490);
          pplVar14 = local_268;
          local_2a0 = (undefined4)plVar4[0x21];
          local_29c = *(undefined4 *)((longlong)plVar4 + 0x10c);
          local_3a6 = 4;
          if (pplStack_450 != (longlong **)0x0) {
            LOCK();
            *(int *)(pplStack_450 + 1) = *(int *)(pplStack_450 + 1) + 1;
            UNLOCK();
          }
          local_270 = local_458;
          local_268 = pplStack_450;
          if (pplVar14 != (longlong **)0x0) {
            LOCK();
            pplVar1 = pplVar14 + 1;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            UNLOCK();
            if (*(int *)pplVar1 == 0) {
              (*(code *)**pplVar14)(pplVar14);
              LOCK();
              piVar2 = (int *)((longlong)pplVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pplVar14)[2])(pplVar14);
              }
            }
          }
          local_528 = &local_4c0;
          FUN_140a53d66(&local_4b0,&DAT_149efe19f,
                        "Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",0x584);
          FUN_140a50bf4(&local_4b0,&local_480,&local_448);
          local_4f0 = local_480;
          local_4e8 = local_478;
          if (local_478 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_478 + 1) = (int)local_478[1] + 1;
            UNLOCK();
          }
          FUN_140a4fe8e(uVar11,&local_4f0);
          plVar9 = local_4e8;
          if (local_4e8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_4e8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_4e8)(local_4e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          plVar9 = local_478;
          if (local_478 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_478 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_478)(local_478);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          plVar9 = local_4a8;
          if (local_4a8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_4a8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_4a8)(local_4a8);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          FUN_140a5660c(&local_448);
          FUN_146a071ac(&local_1a0);
        }
        else if (iVar12 == 0) {
          local_1a0 = 0;
          local_198 = (longlong *)0x0;
          uStack_190 = 0;
          local_19c = 1;
          FUN_1446efa72(&local_198,0,3,0x10);
          plVar9 = local_198;
          uStack_190 = CONCAT44(uStack_190._4_4_,3);
          *local_198 = (longlong)&PTR_LAB_149f05210;
          lVar10 = FUN_144a3f946();
          plVar9[2] = lVar10;
          *plVar9 = (longlong)&PTR_FUN_149f20140;
          plVar9[3] = (longlong)plVar4;
          plVar9[4] = (longlong)FUN_146af18b8;
          FUN_146a24608(local_518[0x70],&local_448,0xffffffff);
          param_1 = local_518;
          local_400 = (undefined4)plVar4[0x21];
          local_3fc = 1;
          local_3f8 = *(undefined4 *)((longlong)plVar4 + 0x10c);
          local_3f4 = 1;
          local_470 = local_1a0;
          local_46c = local_19c;
          local_468 = 0;
          local_460 = 0;
          pplVar14 = &local_198;
          FUN_140a52b3c(&local_468,pplVar14);
          uVar11 = FUN_140a5475a(applStack_440,&local_470);
          FUN_146a07044(uVar11,&local_458);
          FUN_146a071ac(&local_448);
          goto LAB_1494182c5;
        }
        applStack_440[0] = &local_458;
        local_448 = plVar4;
        FUN_147da36e8(&local_c8,&local_1a0,&local_448,0);
        pplVar14 = pplStack_450;
        if (pplStack_450 != (longlong **)0x0) {
          LOCK();
          pplVar1 = pplStack_450 + 1;
          *(int *)pplVar1 = *(int *)pplVar1 + -1;
          UNLOCK();
          if (*(int *)pplVar1 == 0) {
            (*(code *)**pplStack_450)(pplStack_450);
            LOCK();
            piVar2 = (int *)((longlong)pplVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*pplVar14)[2])(pplVar14);
            }
          }
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != (int)lVar6);
  }
  FUN_147da3c88(param_1 + 0x72,&local_c8);
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_147da3520(&local_c8);
  if ((local_60 ^ (ulonglong)auStack_548) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149418632 FUN_149418632 body=324 status=ok
// SIG undefined FUN_149418632(void)

longlong * FUN_149418632(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  longlong lVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_149418739:
    *puVar5 = &PTR_LAB_14aaf94e0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14bcc3790;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_149418739;
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
    lVar10 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14aaf94e0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14bcc3790;
    puVar5[3] = lVar10;
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



// FUNCTION 149418776 FUN_149418776 body=64 status=ok
// SIG undefined FUN_149418776(void)

undefined8 * FUN_149418776(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bcc3790;
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



// FUNCTION 1494187ba FUN_1494187ba body=81 status=ok
// SIG undefined FUN_1494187ba(void)

undefined8 FUN_1494187ba(longlong param_1)

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



// FUNCTION 149418812 FUN_149418812 body=89 status=ok
// SIG undefined FUN_149418812(void)

bool FUN_149418812(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14941885d;
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
LAB_14941885d:
  return lVar6 == param_2;
}



// FUNCTION 149418888 FUN_149418888 body=118 status=ok
// SIG undefined FUN_149418888(void)

void FUN_149418888(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aaf94e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc3790;
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



// FUNCTION 1494188fe FUN_1494188fe body=118 status=ok
// SIG undefined FUN_1494188fe(void)

void FUN_1494188fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aaf94e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc3790;
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



// FUNCTION 149418974 FUN_149418974 body=156 status=ok
// SIG undefined FUN_149418974(void)

void FUN_149418974(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aaf94e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc3790;
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
                    /* WARNING: Could not recover jumptable at 0x000149418a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149418a10 FUN_149418a10 body=104 status=ok
// SIG undefined FUN_149418a10(void)

void FUN_149418a10(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000149418a5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149418a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 149418a78 FUN_149418a78 body=101 status=ok
// SIG undefined FUN_149418a78(void)

ulonglong FUN_149418a78(longlong param_1)

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
LAB_149418ad2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149418ad2;
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



// FUNCTION 149418ade FUN_149418ade body=29 status=ok
// SIG undefined FUN_149418ade(void)

undefined8 FUN_149418ade(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149418b10 FUN_149418b10 body=93 status=ok
// SIG undefined FUN_149418b10(void)

void FUN_149418b10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc3800;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 149418b6e FUN_149418b6e body=93 status=ok
// SIG undefined FUN_149418b6e(void)

void FUN_149418b6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc3800;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 149418bcc FUN_149418bcc body=126 status=ok
// SIG undefined FUN_149418bcc(void)

void FUN_149418bcc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f201b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc3800;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149418c3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149418c4a FUN_149418c4a body=26 status=ok
// SIG undefined FUN_149418c4a(void)

undefined8 FUN_149418c4a(longlong param_1,undefined8 param_2)

{
  FUN_149418cb6(param_1 + 0x18);
  return param_2;
}



// FUNCTION 149418c64 FUN_149418c64 body=82 status=ok
// SIG undefined FUN_149418c64(void)

undefined8 FUN_149418c64(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(int *)(lVar1 + 0x90) != 0) && (*(longlong **)(lVar1 + 0x88) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x88) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x90) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(lVar1 + 0x88);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(lVar1 + 0x80) = uVar4;
    }
  }
  return 1;
}



// FUNCTION 149418cb6 FUN_149418cb6 body=99 status=ok
// SIG undefined FUN_149418cb6(void)

undefined4 * FUN_149418cb6(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  if ((*(int *)(lVar1 + 0x90) != 0) && (*(longlong **)(lVar1 + 0x88) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x88) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x90) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(lVar1 + 0x88);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(lVar1 + 0x80) = uVar4;
    }
  }
  *param_2 = *(undefined4 *)(lVar1 + 0x80);
  return param_2;
}



// FUNCTION 149418d1a FUN_149418d1a body=313 status=ok
// SIG undefined FUN_149418d1a(void)

longlong * FUN_149418d1a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_149418e16:
    *puVar5 = &PTR_LAB_149f05630;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14bcc3870;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_149418e16;
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
    *puVar5 = &PTR_LAB_149f05630;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14bcc3870;
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



// FUNCTION 149418e54 FUN_149418e54 body=64 status=ok
// SIG undefined FUN_149418e54(void)

undefined8 * FUN_149418e54(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bcc3870;
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



// FUNCTION 149418e98 FUN_149418e98 body=81 status=ok
// SIG undefined FUN_149418e98(void)

undefined8 FUN_149418e98(longlong param_1)

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



// FUNCTION 149418ef0 FUN_149418ef0 body=89 status=ok
// SIG undefined FUN_149418ef0(void)

bool FUN_149418ef0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_149418f3b;
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
LAB_149418f3b:
  return lVar6 == param_2;
}



// FUNCTION 149418f66 FUN_149418f66 body=118 status=ok
// SIG undefined FUN_149418f66(void)

void FUN_149418f66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc3870;
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



// FUNCTION 149418fdc FUN_149418fdc body=118 status=ok
// SIG undefined FUN_149418fdc(void)

void FUN_149418fdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcc3870;
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



// FUNCTION 149419052 FUN_149419052 body=156 status=ok
// SIG undefined FUN_149419052(void)

void FUN_149419052(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcc3870;
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
                    /* WARNING: Could not recover jumptable at 0x0001494190de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1494190ee FUN_1494190ee body=105 status=ok
// SIG undefined FUN_1494190ee(void)

undefined8 FUN_1494190ee(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_149419142:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_149419142;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 149419158 FUN_149419158 body=168 status=ok
// SIG undefined FUN_149419158(void)

ulonglong FUN_149419158(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1494191d8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1494191d8;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_d8);
      FUN_14493db24(local_d8);
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
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 149419202 FUN_149419202 body=324 status=ok
// SIG undefined FUN_149419202(void)

longlong * FUN_149419202(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x9a0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bcc38e0;
  plVar4 = plVar3 + 2;
  FUN_149419348(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14942d7c8(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1494192d9;
    param_1[1] = 0;
LAB_1494192a3:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1494192d9;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1494192d9;
      goto LAB_1494192a3;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1494192d9;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1494192d9:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x990;
  FUN_140a52e78(*param_1,"STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint>>",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x791);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149419348 FUN_149419348 body=222 status=ok
// SIG undefined FUN_149419348(void)

undefined8 * FUN_149419348(undefined8 *param_1)

{
  FUN_14941944e();
  *param_1 = &PTR_FUN_14bcc3900;
  param_1[0x4d] = &PTR_FUN_14bcc3c00;
  param_1[0x9b] = &PTR_LAB_14bcc3c20;
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x121) = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x90c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x914) = 0;
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0;
  param_1[0x12d] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x954) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x972) = 0;
  *(undefined2 *)(param_1 + 0x12f) = 0x100;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  FUN_149419706(param_1,param_1 + 0x128);
  return param_1;
}



// FUNCTION 149419426 FUN_149419426 body=9 status=ok
// SIG undefined FUN_149419426(void)

void FUN_149419426(longlong param_1)

{
  FUN_149427e6c(param_1 + 0x10);
  return;
}



// FUNCTION 149419430 FUN_149419430 body=29 status=ok
// SIG undefined FUN_149419430(void)

undefined8 FUN_149419430(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14941944e FUN_14941944e body=695 status=ok
// SIG undefined FUN_14941944e(void)

undefined8 * FUN_14941944e(undefined8 *param_1)

{
  FUN_146af608e(param_1,2);
  *param_1 = &PTR_FUN_14bcc3d10;
  param_1[0x4d] = &PTR_FUN_14bcc3ff0;
  param_1[0x9b] = &PTR_LAB_14bcc4010;
  param_1[0x9c] = param_1;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = param_1;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  *(undefined1 *)(param_1 + 0xfe) = 2;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x109) = 0x101;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x867) = 0;
  *(undefined1 *)((longlong)param_1 + 0x869) = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x87c) = 0;
  param_1[0x116] = 0;
  *(undefined8 *)((longlong)param_1 + 0x88d) = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined1 *)(param_1 + 0x115) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 4;
  return param_1;
}



// FUNCTION 149419706 FUN_149419706 body=147 status=ok
// SIG undefined FUN_149419706(void)

void FUN_149419706(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x8b0);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if (cVar2 != '\0') goto LAB_14941973a;
  }
  if (param_2 == 0) {
    local_20 = 0;
  }
  else {
    local_28 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_28 = &PTR_FUN_14bcc4610;
    local_28[1] = param_2;
  }
  FUN_149427d20(param_1);
LAB_14941973a:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941979a FUN_14941979a body=38 status=ok
// SIG undefined FUN_14941979a(void)

undefined8 FUN_14941979a(undefined8 param_1,int param_2)

{
  FUN_149427e6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494197c0 FUN_1494197c0 body=1742 status=ok
// SIG undefined FUN_1494197c0(void)

void FUN_1494197c0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  undefined8 *local_230;
  undefined8 *local_228;
  undefined1 local_220;
  undefined4 local_218;
  ulonglong local_208;
  longlong *local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  undefined1 local_1c8 [8];
  int local_1c0;
  int local_194;
  longlong local_188;
  undefined4 local_180;
  undefined1 local_178 [8];
  int local_170;
  int local_144;
  longlong local_138;
  undefined4 local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (((((char)param_1[0x12e] != '\x01') || (param_1[0x4f] == 0)) ||
      (*(undefined1 *)(param_1 + 0x12e) = 0, (int)param_1[0x118] == 0)) ||
     ((((longlong *)param_1[0x117] == (longlong *)0x0 ||
       (cVar9 = (**(code **)(*(longlong *)param_1[0x117] + 0x30))(), cVar9 == '\0')) ||
      (param_1[0x12d] == 0)))) goto LAB_149419842;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_149403159(param_1[0x128],(int)param_1[0x129]);
  *(undefined4 *)(param_1 + 0x129) = 0;
  if (*(int *)((longlong)param_1 + 0x94c) != 0) {
    FUN_14940395e(param_1 + 0x128,0);
  }
  local_118 = 0;
  local_110 = 0x8000000000;
  plVar12 = (longlong *)param_1[0x12d];
  if (plVar12 == (longlong *)0x0) {
    local_1e8 = 0;
    local_1e0 = 0;
  }
  else {
    (**(code **)(*plVar12 + 8))(plVar12,&local_1e8);
  }
  local_228 = &local_108;
  local_230 = &local_b8;
  local_238 = local_128;
  local_218 = 0xffffffff;
  local_220 = 1;
  FUN_1494280e6(param_1,&local_1e8,param_1 + 0x128,&local_1d8);
  if (*(char *)((longlong)param_1 + 0x971) == '\0') {
    plVar12 = param_1 + 0xe0;
    if ((int)param_1[0xe1] - *(int *)((longlong)param_1 + 0x734) == (int)uStack_b0 - local_84) {
      FUN_1494286a2(plVar12,local_178,&local_b8);
      bVar8 = true;
      if (local_170 <= local_144) {
        FUN_1494286a2(&local_b8,local_1c8,plVar12);
        bVar8 = local_194 < local_1c0;
        local_180 = 0;
        if (local_188 != 0) {
          FUN_1400020a8();
        }
        FUN_14941f3cc(local_1c8);
      }
      local_130 = 0;
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      FUN_14941f3cc(local_178);
      if (!bVar8) goto LAB_1494199eb;
    }
    FUN_14942891c(plVar12,&local_b8);
    uVar4 = param_1[0xec];
    if (uVar4 == 0) {
LAB_149419b91:
      param_1[0xec] = 0;
      plVar12 = (longlong *)param_1[0xed];
      if (plVar12 != (longlong *)0x0) {
        param_1[0xed] = 0;
        LOCK();
        plVar5 = plVar12 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      param_1[0xea] = 0;
      plVar12 = (longlong *)param_1[0xeb];
      if (plVar12 != (longlong *)0x0) {
        param_1[0xeb] = 0;
LAB_149419d04:
        LOCK();
        plVar5 = plVar12 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    else {
      plVar5 = (longlong *)param_1[0xed];
      local_1f8 = uVar4;
      if (plVar5 == (longlong *)0x0) {
        local_1f0 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_1f0 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar5 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      uVar10 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      iVar11 = FUN_149428e94(plVar12,uVar10 >> 0x10 ^ uVar10,&local_1f8);
      plVar3 = local_1f0;
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1f0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_1f0)(local_1f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (iVar11 == -1) goto LAB_149419b91;
      uVar4 = param_1[0xea];
      if (uVar4 == 0) {
LAB_149419cc2:
        lVar6 = param_1[0xec];
        lVar7 = param_1[0xed];
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        plVar12 = (longlong *)param_1[0xeb];
        param_1[0xea] = lVar6;
        param_1[0xeb] = lVar7;
        if (plVar12 == (longlong *)0x0) goto LAB_149419beb;
        goto LAB_149419d04;
      }
      plVar5 = (longlong *)param_1[0xeb];
      local_208 = uVar4;
      if (plVar5 == (longlong *)0x0) {
        local_200 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_200 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar5 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      uVar10 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      iVar11 = FUN_149428e94(plVar12,uVar10 >> 0x10 ^ uVar10,&local_208);
      plVar12 = local_200;
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_200 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_200)(local_200);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar5 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      if (iVar11 == -1) goto LAB_149419cc2;
    }
LAB_149419beb:
    (**(code **)(param_1[0x9b] + 0x40))(param_1 + 0x9b,3);
  }
LAB_1494199eb:
  FUN_149429ab4(param_1 + 0x11c,&local_108);
  FUN_14777db0e(param_1 + 0x126,&local_1d8);
  if (*(char *)((longlong)param_1 + 0x972) == '\x01') {
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  FUN_14777d502(local_1d8,uStack_1d0 & 0xffffffff);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_149427f5a(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14941f3cc(&local_b8);
LAB_149419842:
  FUN_146af4380(param_1,param_2,param_3,param_4);
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149419e90 FUN_149419e90 body=1011 status=ok
// SIG undefined FUN_149419e90(void)

char * FUN_149419e90(longlong *param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((int)param_1[0x108] != 0) && ((longlong *)param_1[0x107] != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[0x107] + 0x30))(), cVar3 != '\0')) {
    if ((int)param_1[0x108] == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)param_1[0x107];
    }
    (**(code **)(*plVar6 + 0x58))();
    if (*param_2 != '\0') goto LAB_14941a227;
    FUN_14493db24(param_2);
  }
  if ((param_1[0xea] == 0) || ((*(byte *)(param_4 + 8) & 0x30) != 0)) goto LAB_14941a0a6;
  lVar7 = *(longlong *)(param_4 + 0x20);
  plVar6 = *(longlong **)(param_4 + 0x30);
  if (plVar6 == (longlong *)0x0) {
    if (lVar7 == DAT_14c964e60) goto LAB_149419f6b;
LAB_149419fe4:
    if (lVar7 != DAT_14c964e90) {
LAB_14941a0a6:
      FUN_14941f8de(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
LAB_149419ff1:
    lVar7 = param_1[0xea];
    if (lVar7 != 0) {
      local_50 = (longlong *)param_1[0xeb];
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      iVar4 = -1;
      if ((longlong)(int)param_1[0x129] != 0) {
        lVar9 = 0;
        iVar5 = 0;
        do {
          iVar4 = iVar5;
          if (*(longlong *)(param_1[0x128] + lVar9) == lVar7) break;
          iVar5 = iVar5 + 1;
          lVar9 = lVar9 + 0x10;
          iVar4 = -1;
        } while ((longlong)(int)param_1[0x129] * 0x10 != lVar9);
      }
      plVar6 = param_1 + 0x9b;
      local_58 = lVar7;
      cVar3 = (**(code **)(param_1[0x9b] + 0x68))(plVar6);
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*plVar6 + 0x60))(plVar6);
        if (cVar3 == '\0') {
          local_78 = local_58;
          local_70 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          lVar7 = *plVar6;
          plVar6 = &local_78;
          uVar10 = 1;
LAB_14941a123:
          (**(code **)(lVar7 + 0x50))(param_1 + 0x9b,plVar6,uVar10);
        }
        else if (iVar4 < (int)param_1[0x129] + -1) {
          lVar7 = param_1[0x128] + (longlong)iVar4 * 0x10 + 0x10;
          goto LAB_14941a166;
        }
      }
LAB_14941a1ce:
      plVar6 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    lVar9 = DAT_14c964e60;
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
    if (lVar7 != lVar9) {
      lVar7 = *(longlong *)(param_4 + 0x20);
      plVar6 = *(longlong **)(param_4 + 0x30);
      if (plVar6 == (longlong *)0x0) goto LAB_149419fe4;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      lVar9 = DAT_14c964e90;
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
      if (lVar7 != lVar9) goto LAB_14941a0a6;
      goto LAB_149419ff1;
    }
LAB_149419f6b:
    lVar7 = param_1[0xea];
    if (lVar7 != 0) {
      local_50 = (longlong *)param_1[0xeb];
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      uVar8 = 0xffffffff;
      if ((longlong)(int)param_1[0x129] != 0) {
        lVar9 = 0;
        uVar11 = 0;
        do {
          uVar8 = uVar11;
          if (*(longlong *)(param_1[0x128] + lVar9) == lVar7) break;
          uVar11 = uVar11 + 1;
          lVar9 = lVar9 + 0x10;
          uVar8 = 0xffffffff;
        } while ((longlong)(int)param_1[0x129] * 0x10 != lVar9);
      }
      plVar6 = param_1 + 0x9b;
      local_58 = lVar7;
      cVar3 = (**(code **)(param_1[0x9b] + 0x68))(plVar6,uVar8);
      if ((cVar3 != '\0') &&
         (cVar3 = (**(code **)(*plVar6 + 0x60))(plVar6,&local_58), cVar3 != '\0')) {
        local_68 = local_58;
        local_60 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        lVar7 = *plVar6;
        plVar6 = &local_68;
        uVar10 = 0;
        goto LAB_14941a123;
      }
      iVar4 = (**(code **)(*plVar6 + 0x88))(plVar6);
      do {
        if ((int)uVar8 < 1) goto LAB_14941a1ce;
        uVar8 = uVar8 - 1;
        iVar5 = (**(code **)(*plVar6 + 0x88))(plVar6);
      } while (iVar4 <= iVar5);
      lVar7 = (ulonglong)uVar8 * 0x10 + param_1[0x128];
LAB_14941a166:
      (**(code **)(*param_1 + 0x2d8))(param_1,lVar7,param_4);
      goto LAB_14941a1ce;
    }
  }
  *param_2 = '\x01';
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
LAB_14941a227:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14941a28a FUN_14941a28a body=348 status=ok
// SIG undefined FUN_14941a28a(void)

undefined1 * FUN_14941a28a(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x864) == '\x01') {
    if (((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0))
       || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar4 == '\0')) {
      iVar5 = *(int *)(param_1 + 0x390);
    }
    else {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x398);
      }
      iVar5 = (**(code **)(*plVar6 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar5;
    }
    if (iVar5 != 0) {
      lVar3 = *(longlong *)(param_4 + 0x40);
      plVar6 = *(longlong **)(param_4 + 0x50);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if ((lVar3 == DAT_14c966e98) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) {
        bVar7 = (*(ushort *)(param_4 + 8) & 3) == 0;
      }
      else {
        bVar7 = false;
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
      if (bVar7) {
        plVar6 = (longlong *)(param_1 + 0x4d8);
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x70))(plVar6);
        if (0 < iVar5) {
          (**(code **)(*plVar6 + 0x30))(plVar6);
          (**(code **)(*plVar6 + 0x40))(plVar6);
        }
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        return param_2;
      }
    }
  }
  FUN_146af49bc(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14941a3e6 FUN_14941a3e6 body=298 status=ok
// SIG undefined FUN_14941a3e6(void)

undefined8 FUN_14941a3e6(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(char *)(param_1 + 0x864) != '\x01') goto LAB_14941a4d5;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_14941a44f:
    iVar6 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar4 == '\0') goto LAB_14941a44f;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x398);
    }
    iVar6 = (**(code **)(*plVar7 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar6;
  }
  if (iVar6 != 0) {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar7 = *(longlong **)(param_4 + 0x50);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if ((lVar3 == DAT_14c966fa0) && ((*(byte *)(param_4 + 8) & 0xf) == 0)) {
      bVar5 = FUN_146af41be(param_1);
      bVar5 = bVar5 ^ 1;
    }
    else {
      bVar5 = 0;
    }
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
    if (bVar5 != 0) {
      plVar7 = (longlong *)(param_1 + 0x4d8);
      iVar6 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x70))(plVar7);
      if (0 < iVar6) {
        (**(code **)(*plVar7 + 0x30))(plVar7);
        (**(code **)(*plVar7 + 0x40))(plVar7,2);
      }
    }
  }
LAB_14941a4d5:
  FUN_146af4b8a(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14941a510 FUN_14941a510 body=709 status=ok
// SIG undefined FUN_14941a510(void)

undefined8 FUN_14941a510(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  int local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)param_1[0x116];
  if (((plVar4 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x866) == '\x01')) &&
     ((*(char *)((longlong)param_1 + 0x865) != '\0' || (*(char *)(param_4 + 0x21) != '\x01')))) {
    (**(code **)(*plVar4 + 8))(plVar4,&local_60);
    iVar6 = (**(code **)(*param_1 + 0x268))(param_1);
    lVar5 = param_1[0xea];
    if (lVar5 == 0) {
      iVar11 = -1;
    }
    else {
      plVar4 = (longlong *)param_1[0xeb];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      iVar11 = -1;
      if ((longlong)local_58 != 0) {
        lVar7 = 0;
        iVar8 = 0;
        do {
          iVar11 = iVar8;
          if (*(longlong *)(local_60 + lVar7) == lVar5) break;
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 0x10;
          iVar11 = -1;
        } while ((longlong)local_58 * 0x10 != lVar7);
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
    }
    cVar3 = *(char *)(param_4 + 0x20);
    iVar8 = *(int *)((longlong)param_1 + 0x3ec);
    if ((cVar3 == '\x02' && iVar8 == 1) || (cVar3 == '\0' && iVar8 == 0)) {
      uVar10 = (ulonglong)(uint)(iVar11 - iVar6);
    }
    else {
      if ((cVar3 != '\x03' || iVar8 != 1) && (cVar3 != '\x01' || iVar8 != 0)) goto LAB_14941a55d;
      uVar9 = iVar11 + iVar6;
      uVar10 = (ulonglong)uVar9;
      if (0 < local_58 && (local_58 <= (int)uVar9 || (int)uVar9 < 0)) {
        fVar12 = (float)local_58 / (float)iVar6;
        fVar13 = (float)(iVar11 + 1) / (float)iVar6;
        if ((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1 < (int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1) {
          uVar9 = local_58 - 1;
        }
        uVar10 = (ulonglong)uVar9;
      }
    }
    iVar6 = (int)uVar10;
    if (((-1 < iVar6) && (iVar6 < local_58)) && (*(char *)((longlong)param_1 + 0x3e9) == '\x01')) {
      local_88 = iVar11 <= iVar6;
      FUN_149429cb6(param_1,&local_50,uVar10 * 0x10 + local_60);
      if (local_50 != -1) {
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_50,param_4);
        local_78 = 0;
        uStack_70 = 0;
        FUN_146a35cca(param_2);
        if ((local_50 != -1) && (local_48 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_48 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        goto LAB_14941a56e;
      }
    }
  }
LAB_14941a55d:
  FUN_145bff8f6(param_1,param_2,param_3,param_4);
LAB_14941a56e:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14941a7d6 FUN_14941a7d6 body=461 status=ok
// SIG undefined FUN_14941a7d6(void)

longlong * FUN_14941a7d6(longlong param_1,longlong *param_2)

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
LAB_14941a814:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_14941a814;
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
  FUN_149429e6a(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_14941a950;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_14941a950;
LAB_14941a8b3:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_14941a950;
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
      if (plVar8 != (longlong *)0x0) goto LAB_14941a8b3;
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
LAB_14941a950:
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



// FUNCTION 14941a9a6 FUN_14941a9a6 body=83 status=ok
// SIG undefined FUN_14941a9a6(void)

undefined1 FUN_14941a9a6(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x858) != 0) && (*(longlong **)(param_1 + 0x850) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x858) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x850);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x848) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x848);
}



// FUNCTION 14941a9fa FUN_14941a9fa body=203 status=ok
// SIG undefined FUN_14941a9fa(void)

undefined8 FUN_14941a9fa(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc15568) {
    FUN_144b3d300(&DAT_14cc15568);
    if (DAT_14cc15568 == -1) {
      FUN_140056680(&DAT_14cc15558,L"List");
      atexit((_func_5014 *)&LAB_14451029a);
      _Init_thread_footer(&DAT_14cc15568);
    }
  }
  FUN_140009b9a(local_28,&DAT_14cc15558);
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



// FUNCTION 14941aadc FUN_14941aadc body=101 status=ok
// SIG undefined FUN_14941aadc(void)

void FUN_14941aadc(longlong *param_1)

{
  FUN_149403159(param_1[0x128],(int)param_1[0x129]);
  *(undefined4 *)(param_1 + 0x129) = 0;
  if (*(int *)((longlong)param_1 + 0x94c) != 0) {
    FUN_14940395e(param_1 + 0x128,0);
  }
  FUN_14942055e(param_1 + 0x9c);
  FUN_14942055e(param_1 + 0xb6);
                    /* WARNING: Could not recover jumptable at 0x00014941ab3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x240))(param_1);
  return;
}



// FUNCTION 14941ab42 FUN_14941ab42 body=1893 status=ok
// SIG undefined FUN_14941ab42(void)

void FUN_14941ab42(longlong *param_1,undefined8 param_2,float param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_15c [4];
  float local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar13 = (double)param_1[0x5e];
  if ((param_4 != '\x01') ||
     (((0.0 <= param_3 || (9.999999747378752e-05 <= dVar13)) &&
      ((param_3 <= 0.0 || ((char)param_1[0x66] == '\0')))))) {
    fVar18 = ABS(param_3);
    if ((dVar13 != 0.0) || (NAN(dVar13))) {
      cVar6 = '\0';
    }
    else {
      cVar6 = (char)param_1[0x66];
    }
    uVar7 = (uint)(double)param_1[0x5d];
    if (param_4 == '\0') {
      cVar5 = FUN_1469ffeec((longlong)param_1 + 0x4c4,-(dVar13 == 0.0) & 1,(char)param_1[0x66]);
      if (cVar5 != '\0') {
        fVar18 = (float)FUN_1469ffd82((longlong)param_1 + 0x4c4,param_2);
        if ((fVar18 != 0.0) || (NAN(fVar18))) {
          FUN_146af42a2(param_1);
        }
        goto LAB_14941af1f;
      }
    }
    if (cVar6 == '\0') {
      plVar3 = (longlong *)param_1[0x116];
      if (plVar3 == (longlong *)0x0) {
        local_100 = 0;
        local_f8 = 0;
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3,&local_100);
        if (0 < (int)local_f8) {
          do {
            if ((((fVar18 == 0.0) && (!NAN(fVar18))) || ((int)uVar7 < 0)) ||
               ((int)local_f8 <= (int)uVar7)) break;
            if (*(longlong *)(local_100 + (ulonglong)uVar7 * 0x10) == 0) {
              uVar7 = uVar7 + 1;
              iVar8 = 2;
            }
            else {
              puVar9 = (undefined8 *)(local_100 + (ulonglong)uVar7 * 0x10);
              FUN_149420228(param_1 + 0x9c,&local_110,puVar9);
              if (local_110 == (longlong *)0x0) {
                local_130 = *puVar9;
                local_128 = puVar9[1];
                if (local_128 != 0) {
                  LOCK();
                  *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*param_1 + 0x2c0))(param_1,&local_120,&local_130);
                plVar3 = local_108;
                plVar1 = local_118;
                local_110 = local_120;
                if (local_118 == (longlong *)0x0) {
                  if (local_108 != (longlong *)0x0) {
                    local_108 = (longlong *)0x0;
LAB_14941b267:
                    local_110 = local_120;
                    LOCK();
                    plVar1 = plVar3 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar3)(plVar3);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar3 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar8 = *piVar2;
                      UNLOCK();
joined_r0x00014941b253:
                      if (iVar8 == 0) {
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                      }
                    }
                  }
                }
                else {
                  LOCK();
                  *(int *)(local_118 + 1) = (int)local_118[1] + 1;
                  UNLOCK();
                  if (local_118 == local_108) {
                    LOCK();
                    plVar3 = local_118 + 1;
                    *(int *)plVar3 = (int)*plVar3 + -1;
                    UNLOCK();
                    if ((int)*plVar3 == 0) {
                      (**(code **)*local_118)(local_118);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar1 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar8 = *piVar2;
                      UNLOCK();
                      plVar3 = plVar1;
                      goto joined_r0x00014941b253;
                    }
                  }
                  else {
                    bVar10 = local_108 != (longlong *)0x0;
                    local_108 = local_118;
                    if (bVar10) goto LAB_14941b267;
                  }
                }
                plVar3 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar3 + 0x10))(plVar3);
                    }
                  }
                }
                plVar3 = local_110;
                (**(code **)(*local_110 + 0x10))(local_110,uVar7);
                local_140 = plVar3;
                local_138 = local_108;
                if (local_108 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_108 + 1) = (int)local_108[1] + 1;
                  UNLOCK();
                }
                local_150 = *puVar9;
                local_148 = puVar9[1];
                if (local_148 != 0) {
                  LOCK();
                  *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
                  UNLOCK();
                }
                FUN_14942160c(param_1 + 0x9c,&local_150,&local_140);
                (**(code **)(*local_110 + 0x58))(local_110,&local_120);
                FUN_1405d299c(local_120);
                plVar3 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
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
              (**(code **)(*local_110 + 0x58))(local_110,&local_120);
              FUN_144b013c4(local_120,&local_170);
              local_168 = local_170;
              FUN_146af3580(local_15c,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_168);
              plVar3 = local_118;
              if (local_118 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_118 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_118)(local_118);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              plVar3 = local_108;
              if (param_3 <= 0.0) {
                auVar15 = roundss(ZEXT816(0),ZEXT416((uint)(float)dVar13),0xb);
                fVar17 = (float)dVar13 - auVar15._0_4_;
                fVar12 = ABS(fVar17);
                dVar4 = dVar13 + -1.0;
                if (1e-08 < fVar12) {
                  dVar4 = dVar13;
                }
                uVar11 = -(uint)(fVar12 <= 1e-08);
                fVar12 = (float)(uVar11 & 0x3f800000 | ~uVar11 & (uint)fVar17) * local_158;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)((fVar12 - fVar18) / local_158 + (float)(int)dVar4);
                    goto LAB_14941ae21;
                  }
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = dVar4;
                  auVar15 = roundpd(auVar15,auVar15,3);
                  dVar13 = auVar15._0_8_;
                  iVar8 = 3;
                }
                else {
                  if (uVar7 == 0) {
                    iVar8 = 3;
                    dVar13 = 0.0;
                    uVar7 = 0;
                    goto LAB_14941ae27;
                  }
                  fVar18 = fVar18 - fVar12;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = dVar4;
                  auVar15 = roundpd(auVar16,auVar16,3);
                  dVar13 = auVar15._0_8_;
                  uVar7 = uVar7 - 1;
                  iVar8 = 0;
                }
                dVar13 = dVar4 - (dVar4 - dVar13);
              }
              else {
                auVar14._8_8_ = 0;
                auVar14._0_8_ = dVar13;
                auVar15 = roundpd(auVar14,auVar14,3);
                fVar12 = (float)((auVar15._0_8_ - dVar13) + 1.0) * local_158;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)(int)dVar13 + (1.0 - (double)((fVar12 - fVar18) / local_158));
                  }
                  else {
                    dVar13 = (double)(int)dVar13 + 1.0;
                  }
                }
                else {
                  if (uVar7 != local_f8) {
                    fVar18 = fVar18 - fVar12;
                    dVar13 = (double)(int)dVar13 + 1.0;
                    uVar7 = uVar7 + 1;
                    iVar8 = 0;
                    goto LAB_14941ae27;
                  }
                  dVar13 = (double)(int)uVar7;
                }
LAB_14941ae21:
                iVar8 = 3;
              }
LAB_14941ae27:
              if (local_108 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_108 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_108)(local_108);
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
          } while (iVar8 != 3);
        }
      }
      (**(code **)(*param_1 + 600))(param_1,(float)dVar13);
    }
  }
LAB_14941af1f:
  if ((local_f0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941b2a8 FUN_14941b2a8 body=747 status=ok
// SIG undefined FUN_14941b2a8(void)

void FUN_14941b2a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [44];
  undefined1 local_10c [4];
  ulonglong local_108;
  longlong *local_100;
  longlong local_f8;
  int local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_1 + 0x270) != 2) {
    plVar3 = *(longlong **)(param_1 + 0x8b0);
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
    }
    else {
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      (**(code **)(*plVar3 + 8))(plVar3,&local_f8);
      if (0 < local_f0) {
        lVar7 = 8;
        lVar8 = 0;
        do {
          uVar4 = *(ulonglong *)(local_f8 + -8 + lVar7);
          plVar3 = *(longlong **)(local_f8 + lVar7);
          local_108 = uVar4;
          local_e8 = uVar4;
          local_e0 = plVar3;
          if (plVar3 == (longlong *)0x0) {
            local_100 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            local_100 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
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
            }
          }
          uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          iVar6 = FUN_149428e94((longlong *)(param_1 + 0x700),uVar5 >> 0x10 ^ uVar5,&local_108);
          plVar3 = local_100;
          if (iVar6 == -1) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)iVar6 * 0x18 + *(longlong *)(param_1 + 0x700);
          }
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_100 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (lVar9 != 0) {
            FUN_149428afc(&local_98,local_10c,&local_e8);
          }
          plVar3 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x10;
        } while (lVar8 < local_f0);
      }
      FUN_1494286a2(param_1 + 0x700,&local_e8,&local_98);
      iVar6 = (int)local_e0;
      FUN_14942891c(param_1 + 0x700,&local_98);
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_14941f3cc(&local_e8);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14941f3cc(&local_98);
      if (iVar6 <= local_b4) goto LAB_14941b30f;
    }
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,3);
  }
LAB_14941b30f:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14941b594 FUN_14941b594 body=241 status=ok
// SIG undefined FUN_14941b594(void)

undefined8 FUN_14941b594(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14941e60a();
  if ((*(int *)(param_1 + 0x988) != 0) && (*(longlong **)(param_1 + 0x980) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x980) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x988) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x980);
      }
      uVar2 = (**(code **)(*plVar4 + 0x58))();
      *(undefined1 *)(param_1 + 0x978) = uVar2;
    }
  }
  if (*(char *)(param_1 + 0x978) != '\x01') {
    FUN_146af6ce2(param_1);
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_38 = 0;
  uStack_30 = 0;
  uVar3 = FUN_14942a36e(param_1,param_1 + 0x940,&local_38,param_2);
  FUN_14942a5a6(param_1,&local_38,param_3,uVar3);
  FUN_149403159(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 14941b688 FUN_14941b688 body=81 status=ok
// SIG undefined FUN_14941b688(void)

undefined4 FUN_14941b688(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x8b0);
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0;
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941b6da FUN_14941b6da body=2059 status=ok
// SIG undefined FUN_14941b6da(void)

undefined1 FUN_14941b6da(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  double dVar5;
  char cVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 uVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  float local_f4;
  float local_f0;
  undefined1 local_ec [4];
  float local_e8;
  undefined1 local_e0 [4];
  float local_dc;
  undefined1 local_d4 [4];
  float local_d0;
  undefined1 local_c8 [4];
  float local_c4;
  undefined1 local_bc [4];
  float local_b8;
  float local_b0;
  float fStack_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  int local_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar3 = (longlong *)param_1[0x116];
  if ((plVar3 != (longlong *)0x0) && (param_1[0xf9] != 0)) {
    (**(code **)(*plVar3 + 8))(plVar3,&local_90);
    lVar8 = param_1[0xf9];
    plVar3 = (longlong *)param_1[0xfa];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    iVar9 = -1;
    if ((longlong)local_88 != 0) {
      lVar10 = 0;
      iVar11 = 0;
      do {
        iVar9 = iVar11;
        if (*(longlong *)(local_90 + lVar10) == lVar8) break;
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 0x10;
        iVar9 = -1;
      } while ((longlong)local_88 * 0x10 != lVar10);
    }
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
    if (iVar9 != -1) {
      fVar13 = (float)(**(code **)(*param_1 + 0x260))(param_1);
      dVar5 = (double)fVar13;
      if (((fVar13 == 0.0) && (!NAN(fVar13))) && (cVar6 = FUN_146af5c6c(param_1), cVar6 != '\0')) {
        dVar5 = (double)param_1[100];
        if ((dVar5 == 0.0) && (!NAN(dVar5))) {
          uVar12 = 1;
          goto LAB_14941ba46;
        }
      }
      FUN_146af65f2(param_1);
      dVar19 = (double)param_1[0x5d];
      auVar15._0_8_ = dVar5 + dVar19;
      auVar15._8_8_ = 0;
      auVar20 = roundpd(in_XMM2,auVar15,1);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = param_1[0x5d];
      auVar16 = roundpd(auVar15,auVar16,2);
      dVar14 = auVar16._0_8_;
      dVar18 = (double)(int)(auVar20._0_8_ - dVar14);
      if (*(char *)((longlong)param_1 + 0x869) == '\x01') {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1[0x5d];
        auVar16 = roundpd(auVar16,auVar4,1);
        dVar14 = auVar16._0_8_;
        auVar17._0_8_ = dVar19 + dVar18;
        auVar17._8_8_ = 0;
        auVar16 = roundpd(auVar17,auVar17,2);
        dVar19 = auVar16._0_8_;
      }
      else {
        auVar20._0_8_ = dVar19 + dVar18;
        auVar20._8_8_ = 0;
        auVar16 = roundpd(auVar20,auVar20,1);
        dVar19 = auVar16._0_8_;
      }
      dVar18 = (double)iVar9;
      cVar6 = (char)param_1[0xfe];
      if ((dVar18 < dVar14) || (dVar19 < dVar18)) {
        if (cVar6 == '\0') {
          if (dVar19 < dVar18) goto LAB_14941b8a7;
        }
        else if (cVar6 == '\x03') {
LAB_14941b8a7:
          dVar18 = dVar18 - (dVar5 + -1.0);
        }
        else if (cVar6 == '\x02') {
          dVar18 = dVar18 + dVar5 * -0.5;
        }
LAB_14941b8b7:
        dVar19 = 0.0;
        if (0.0 <= (double)local_88 - dVar5) {
          dVar19 = (double)local_88 - dVar5;
        }
        if (dVar19 <= dVar18) {
          dVar18 = dVar19;
        }
        if (dVar18 <= 0.0) {
          dVar18 = 0.0;
        }
        FUN_146af48d8(param_1,(float)dVar18);
      }
      else {
        if (cVar6 == '\x01') goto LAB_14941b8b7;
        if (cVar6 == '\x03') goto LAB_14941b8a7;
        if (*(char *)((longlong)param_1 + 0x869) != '\0') {
          (**(code **)(param_1[0x9b] + 0xd8))
                    (param_1 + 0x9b,&local_a0,(longlong)iVar9 * 0x10 + local_90);
          if (local_a0 != (longlong *)0x0) {
            (**(code **)(*local_a0 + 0x58))(local_a0,&local_b0);
            pfVar7 = (float *)FUN_144b013e4(CONCAT44(fStack_ac,local_b0));
            plVar3 = local_a8;
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_a8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            fStack_ac = pfVar7[8] * (float)DAT_14c8463f0 * *pfVar7 +
                        pfVar7[10] * (float)DAT_14c8463f8 * pfVar7[1] + pfVar7[0xc];
            local_b0 = (float)DAT_14c8463f0 * *pfVar7 * pfVar7[7] +
                       (float)DAT_14c8463f8 * pfVar7[1] * pfVar7[9] + pfVar7[0xb];
            FUN_146af3580(local_bc,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
            fStack_ac = param_2[8] * (float)DAT_14c8463f0 * *param_2 +
                        param_2[10] * (float)DAT_14c8463f8 * param_2[1] + param_2[0xc];
            local_b0 = (float)DAT_14c8463f0 * *param_2 * param_2[7] +
                       (float)DAT_14c8463f8 * param_2[1] * param_2[9] + param_2[0xb];
            FUN_146af3580(local_c8,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
            if (local_c4 <= local_b8) {
              dVar18 = (double)param_1[0x5e];
              fStack_ac = pfVar7[8] * *pfVar7 + pfVar7[10] * pfVar7[1] + pfVar7[0xc];
              local_b0 = *pfVar7 * pfVar7[7] + pfVar7[1] * pfVar7[9] + pfVar7[0xb];
              FUN_146af3580(local_d4,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
              fStack_ac = param_2[8] * *param_2 + param_2[10] * param_2[1] + param_2[0xc];
              local_b0 = *param_2 * param_2[7] + param_2[1] * param_2[9] + param_2[0xb];
              FUN_146af3580(local_e0,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
              if (local_dc < local_d0) {
                if ((longlong)(int)param_1[0xb2] == 0) {
                  fVar13 = 0.0;
                }
                else {
                  lVar8 = param_1[0xb1];
                  fVar21 = local_d0 - local_dc;
                  lVar10 = (longlong)(int)param_1[0xb2] * 0x10;
                  fVar13 = 0.0;
                  do {
                    lVar10 = lVar10 + -0x10;
                    FUN_149420228(param_1 + 0x9c,&local_108,lVar8);
                    (**(code **)(*local_108 + 0x58))(local_108,&local_b0);
                    pfVar7 = (float *)FUN_144b013e4(CONCAT44(fStack_ac,local_b0));
                    local_f0 = pfVar7[8] * *pfVar7 + pfVar7[10] * pfVar7[1];
                    local_f4 = *pfVar7 * pfVar7[7] + pfVar7[1] * pfVar7[9];
                    FUN_146af3580(local_ec,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_f4);
                    plVar3 = local_a8;
                    if (local_a8 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_a8 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_a8)(local_a8);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                    plVar3 = local_100;
                    if (local_100 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_100 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_100)(local_100);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                    fVar13 = fVar13 + (float)(~-(uint)(fVar21 <= local_e8) & 0x3f800000 |
                                             (uint)(fVar21 / local_e8) & -(uint)(fVar21 <= local_e8)
                                             );
                    if (fVar21 <= local_e8) break;
                    lVar8 = lVar8 + 0x10;
                    fVar21 = fVar21 - local_e8;
                  } while (lVar10 != 0);
                }
                dVar18 = 0.0;
                if ((char)param_1[0x5a] == '\0') {
                  dVar18 = (double)*(float *)(param_1 + 0x10c);
                }
                dVar18 = (double)fVar13 + (double)param_1[0x5e] + dVar18;
              }
            }
            else {
              dVar18 = dVar18 - (double)*(float *)(param_1 + 0x10c);
            }
            FUN_146af48d8(param_1,(float)dVar18);
          }
          plVar3 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_98 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_98)(local_98);
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
      FUN_146af42a2(param_1);
      lVar8 = param_1[0xf9];
      lVar10 = param_1[0xfa];
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_1[0xfd];
      param_1[0xfc] = lVar8;
      param_1[0xfd] = lVar10;
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
    param_1[0xf9] = 0;
    plVar3 = (longlong *)param_1[0xfa];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xfa] = 0;
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
  plVar3 = (longlong *)param_1[0xfc];
  if (plVar3 == (longlong *)0x0) {
    uVar12 = 2;
  }
  else {
    uVar12 = 0;
    if ((char)param_1[0x5b] == '\x01') {
      local_98 = (longlong *)param_1[0xfd];
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      local_a0 = plVar3;
      (**(code **)(param_1[0x9b] + 0xd8))(param_1 + 0x9b,&local_90,&local_a0);
      plVar3 = (longlong *)CONCAT44(uStack_84,local_88);
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
      plVar3 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uVar12 = local_90 == 0;
    }
  }
LAB_14941ba46:
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 14941bee6 FUN_14941bee6 body=581 status=ok
// SIG undefined FUN_14941bee6(void)

void FUN_14941bee6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x7e0);
  if (lVar3 != 0) {
    local_20 = *(longlong **)(param_1 + 0x7e8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    local_28 = lVar3;
    FUN_149420228(param_1 + 0x4e0,&local_38,&local_28);
    if (local_38 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x869) == '\x01') {
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(param_1 + 0x758);
        *(longlong *)(param_1 + 0x750) = local_28;
        *(longlong **)(param_1 + 0x758) = local_20;
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
        (**(code **)(*local_38 + 0x58))(local_38,&local_58);
        local_48 = local_58;
        local_40 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_146af6ffc(param_1,*(undefined4 *)(param_1 + 0x7d8),&local_48,0);
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
      local_68 = local_28;
      local_60 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_14942cab8(param_1 + 0x6e0,&local_68,&local_38);
    }
    *(undefined1 *)(param_1 + 0x869) = 0;
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    plVar4 = *(longlong **)(param_1 + 0x7e8);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x7e8) = 0;
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
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
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14941c14a FUN_14941c14a body=1264 status=ok
// SIG undefined FUN_14941c14a(void)

undefined8 * FUN_14941c14a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_808 [32];
  undefined1 *local_7e8;
  undefined8 local_7d8;
  longlong *plStack_7d0;
  undefined8 *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a1;
  wchar_t *local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  longlong *local_780 [2];
  undefined1 local_770 [16];
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong local_720;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_808;
  if (((*(int *)(param_1 + 0x6a8) == 0) || (*(longlong **)(param_1 + 0x6a0) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x30))(), cVar5 == '\0')) {
    FUN_149422324(&local_2b8);
    FUN_140a570d8(&local_728);
    local_7a0 = L"OnGeneratePinnedRowNotAssignedMessage";
    local_798 = 0x25;
    FUN_1446e940c(local_784,&local_7a0);
    local_7a0 = L"SListView";
    local_798 = 9;
    FUN_1446e940c(local_788,&local_7a0);
    FUN_140208bae(local_780,local_788,local_784,L"OnGeneratePinnedRow() not assigned.");
    FUN_14023423e(local_770,local_780);
    local_760 = 1;
    local_758 = 0;
    uStack_750 = 0;
    uVar8 = FUN_140a54906(&local_728,local_770);
    local_7e8 = &local_7a1;
    FUN_140a54526(&local_7a0,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x666)
    ;
    FUN_140a52852(&local_7a0,&local_748,uVar8);
    plVar9 = local_58;
    plVar3 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
    }
    local_60 = local_748;
    local_58 = local_740;
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
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_14941c45b:
      local_7d8 = 0;
      plStack_7d0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_14941c45b;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7d8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7d0 = plVar9;
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
    local_7c8 = &local_7d8;
    FUN_1494225aa(local_7c0,0x663);
    FUN_14942248c(local_7c0,&local_738,&local_2b8);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7b8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7b8 + 0x10))(local_7b8);
        }
      }
    }
    plVar9 = plStack_7d0;
    if (plStack_7d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7d0)(plStack_7d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_740 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar1 = (int *)((longlong)local_740 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_740 + 0x10))(local_740);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_794,local_798);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_780[0] != (longlong *)0x0) {
      (**(code **)(*local_780[0] + 0x10))();
    }
    FUN_140a59ae6(&local_728);
    FUN_14942250a(&local_2b8);
    *param_2 = local_738;
    param_2[1] = local_730;
    if (local_730 == (longlong *)0x0) goto LAB_14941c2a2;
    LOCK();
    *(int *)(local_730 + 1) = (int)local_730[1] + 1;
    UNLOCK();
    if (local_730 == (longlong *)0x0) goto LAB_14941c2a2;
    LOCK();
    plVar3 = local_730 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14941c2a2;
    (**(code **)*local_730)(local_730);
    LOCK();
    piVar1 = (int *)((longlong)local_730 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14941c2a2;
    lVar7 = *local_730;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_14941c200:
      local_2b8 = 0;
      plStack_2b0 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_14941c200;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_2b8 = uVar8;
      plStack_2b0 = plVar3;
    }
    plVar3 = plStack_2b0;
    local_728 = *param_3;
    local_720 = param_3[1];
    if (local_720 != 0) {
      LOCK();
      *(int *)(local_720 + 8) = *(int *)(local_720 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x6a8) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x6a0);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,&local_728,&local_2b8);
    plVar9 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_14941c2a2;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14941c2a2;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14941c2a2;
    lVar7 = *plVar3;
    local_730 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_730);
LAB_14941c2a2:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14941c63c FUN_14941c63c body=1205 status=ok
// SIG undefined FUN_14941c63c(void)

undefined8 * FUN_14941c63c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_7f8 [32];
  undefined1 *local_7d8;
  undefined8 *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a1;
  wchar_t *local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  longlong *local_780 [2];
  undefined1 local_770 [16];
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong *plStack_720;
  undefined8 local_718;
  longlong local_710;
  undefined8 local_2a8;
  longlong *plStack_2a0;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_7f8;
  if (((*(int *)(param_1 + 0x698) == 0) || (*(longlong **)(param_1 + 0x690) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x690) + 0x30))(), cVar4 == '\0')) {
    plVar8 = *(longlong **)(param_1 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_14941c7f5:
      local_728 = 0;
      plStack_720 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_14941c7f5;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
      local_728 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plStack_720 = plVar8;
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
    FUN_149422324(&local_2a8);
    FUN_140a570d8(&local_718);
    local_7a0 = L"BrokenSetupMessage";
    local_798 = 0x12;
    FUN_1446e940c(local_784,&local_7a0);
    local_7a0 = L"STreeView";
    local_798 = 9;
    FUN_1446e940c(local_788,&local_7a0);
    FUN_140208bae(local_780,local_788,local_784,L"OnGenerateWidget() not assigned.");
    FUN_14023423e(local_770,local_780);
    local_760 = 1;
    local_758 = 0;
    uStack_750 = 0;
    uVar6 = FUN_140a54906(&local_718,local_770);
    local_7d8 = &local_7a1;
    FUN_140a54526(&local_7a0,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/STreeView.h",0x348)
    ;
    FUN_140a52852(&local_7a0,&local_748,uVar6);
    plVar7 = local_48;
    plVar8 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
    }
    local_50 = local_748;
    local_48 = local_740;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    local_7c8 = &local_728;
    FUN_14942cbbe(local_7c0);
    FUN_14942cb40(local_7c0,&local_738,&local_2a8);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_7b8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7b8 + 0x10))(local_7b8);
        }
      }
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
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_740 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar1 = (int *)((longlong)local_740 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_740 + 0x10))(local_740);
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_794,local_798);
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
    if (local_780[0] != (longlong *)0x0) {
      (**(code **)(*local_780[0] + 0x10))();
    }
    FUN_140a59ae6(&local_718);
    FUN_14942250a(&local_2a8);
    *param_2 = local_738;
    param_2[1] = local_730;
    if (local_730 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_730 + 1) = (int)local_730[1] + 1;
      UNLOCK();
      if (local_730 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_730 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_730)(local_730);
          LOCK();
          piVar1 = (int *)((longlong)local_730 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_730 + 0x10))(local_730);
          }
        }
      }
    }
    plVar8 = plStack_720;
    if (plStack_720 == (longlong *)0x0) goto LAB_14941c78c;
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_14941c6ea:
      local_2a8 = 0;
      plStack_2a0 = (longlong *)0x0;
      bVar9 = true;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_14941c6ea;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
      uVar6 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)();
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      bVar9 = false;
      local_2a8 = uVar6;
      plStack_2a0 = plVar8;
    }
    plVar8 = plStack_2a0;
    local_718 = *param_3;
    local_710 = param_3[1];
    if (local_710 != 0) {
      LOCK();
      *(int *)(local_710 + 8) = *(int *)(local_710 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x698) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x690);
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,param_2,&local_718,&local_2a8);
    plVar7 = plStack_2a0;
    if (plStack_2a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2a0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_2a0)(plStack_2a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (bVar9) goto LAB_14941c78c;
  }
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
LAB_14941c78c:
  plVar8 = (longlong *)param_3[1];
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
  if ((local_40 ^ (ulonglong)auStack_7f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14941caf4 FUN_14941caf4 body=32 status=ok
// SIG undefined FUN_14941caf4(void)

undefined8 FUN_14941caf4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SListView");
  return param_2;
}



// FUNCTION 14941cb14 FUN_14941cb14 body=563 status=ok
// SIG undefined FUN_14941cb14(void)

void FUN_14941cb14(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14942cde2(param_1,&local_40,param_2);
  lVar5 = local_40;
  if (local_40 == -1) goto LAB_14941cbc8;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_14941cb8f:
    iVar7 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar6 == '\0') goto LAB_14941cb8f;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0x398);
    }
    iVar7 = (**(code **)(*plVar8 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar7;
  }
  if (iVar7 != 0) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    plVar8 = *(longlong **)(param_1 + 0x758);
    *(longlong *)(param_1 + 0x750) = lVar5;
    *(longlong **)(param_1 + 0x758) = local_38;
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
    uVar4 = *(undefined4 *)(param_3 + 0xc);
    local_50 = local_40;
    local_48 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_14942d12e(param_1,&local_50,uVar4);
    if ((iVar7 == 3) && (uVar3 = *(ushort *)(param_3 + 8), (uVar3 & 0xf) != 0)) {
      if ((uVar3 & 3) == 0) {
        local_70 = local_40;
        local_68 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x28))
                  ((longlong *)(param_1 + 0x4d8),&local_70,1,1);
      }
      else {
        if ((uVar3 & 0xc) == 0) {
          (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
        }
        local_60 = local_40;
        local_58 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x38))
                  ((longlong *)(param_1 + 0x4d8),&local_60);
      }
      (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,1);
    }
    else {
      local_80 = local_40;
      local_78 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_14942d1cc(param_1,&local_80);
    }
  }
  if ((local_40 != -1) && (local_38 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_38 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_14941cbc8:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941cd48 FUN_14941cd48 body=458 status=ok
// SIG undefined FUN_14941cd48(void)

void FUN_14941cd48(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x80))(param_1 + 0x4d8);
  local_78 = (longlong *)(param_1 + 0x700);
  local_48 = param_1 + 0x710;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x728) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      if ((longlong)*(int *)(param_1 + 0x948) != 0) {
        lVar3 = 0;
        uVar1 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x940) + lVar3) ==
              *(longlong *)(*local_78 + (longlong)iStack_5c * 0x18)) {
            if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x938))) {
              for (iVar2 = *(int *)(*(longlong *)(param_1 + 0x930) + 0x24 +
                                   (ulonglong)(uVar1 & 0x7fffffff) * 0x28); iVar2 != -1;
                  iVar2 = *(int *)(*(longlong *)(param_1 + 0x930) + 0x24 + (longlong)iVar2 * 0x28))
              {
                lVar3 = (longlong)iVar2 * 0x10;
                local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0x940) + lVar3);
                local_80 = *(longlong *)(*(longlong *)(param_1 + 0x940) + 8 + lVar3);
                if (local_80 != 0) {
                  LOCK();
                  *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x78))(param_1 + 0x4d8,&local_88,1);
              }
            }
            break;
          }
          uVar1 = uVar1 + 1;
          lVar3 = lVar3 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x948) * 0x10 != lVar3);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14941cf1e FUN_14941cf1e body=94 status=ok
// SIG undefined FUN_14941cf1e(void)

void FUN_14941cf1e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x50))(param_1 + 0x4d8,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941cfa6 FUN_14941cfa6 body=339 status=ok
// SIG undefined FUN_14941cfa6(void)

ulonglong FUN_14941cfa6(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)(param_1 + 0x228);
  uVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_38 = uVar7;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
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
    }
  }
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_149428e94(plVar6,uVar4 >> 0x10 ^ uVar4,&local_38);
  plVar2 = local_30;
  if (iVar5 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),(longlong)iVar5 * 0x18 + *plVar6 != 0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941d0fa FUN_14941d0fa body=150 status=ok
// SIG undefined FUN_14941d0fa(void)

ulonglong FUN_14941d0fa(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((*(int *)(param_1 + 0x338) != 0) && (*(longlong **)(param_1 + 0x330) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x30))();
    if (cVar1 != '\0') {
      local_30 = *param_2;
      local_28 = param_2[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x338) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x330);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      uVar4 = (ulonglong)uVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941d192 FUN_14941d192 body=339 status=ok
// SIG undefined FUN_14941d192(void)

ulonglong FUN_14941d192(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)(param_1 + 0x298);
  uVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_38 = uVar7;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
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
    }
  }
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_149428e94(plVar6,uVar4 >> 0x10 ^ uVar4,&local_38);
  plVar2 = local_30;
  if (iVar5 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),(longlong)iVar5 * 0x18 + *plVar6 != 0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941d2e6 FUN_14941d2e6 body=945 status=ok
// SIG undefined FUN_14941d2e6(void)

void FUN_14941d2e6(longlong *param_1,longlong *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_100;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [80];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((int)param_1[-0x27] == 0) || ((longlong *)param_1[-0x28] == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))(), cVar6 == '\0')) {
    iVar7 = (int)param_1[-0x29];
  }
  else {
    if ((int)param_1[-0x27] == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)param_1[-0x28];
    }
    iVar7 = (**(code **)(*plVar8 + 0x58))();
    *(int *)(param_1 + -0x29) = iVar7;
  }
  if (iVar7 == 0) goto LAB_14941d358;
  if (param_3 == '\0') {
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_14942d478(param_1 + 0x45,&local_40);
  }
  else {
    FUN_149428afc(param_1 + 0x45,local_b0,param_2);
  }
  if (param_4 == '\0') {
    if ((((int)param_1[-0x27] == 0) || ((longlong *)param_1[-0x28] == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))(), cVar6 == '\0')) {
      iVar7 = (int)param_1[-0x29];
    }
    else {
      if ((int)param_1[-0x27] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)param_1[-0x28];
      }
      iVar7 = (**(code **)(*plVar8 + 0x58))();
      *(int *)(param_1 + -0x29) = iVar7;
    }
    if (iVar7 == 1) goto LAB_14941d3fa;
    if (((int)param_1[-0x27] != 0) && ((longlong *)param_1[-0x28] != (longlong *)0x0)) {
      cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))();
      if (cVar6 == '\0') {
        iVar7 = (int)param_1[-0x29];
      }
      else {
        if ((int)param_1[-0x27] == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)param_1[-0x28];
        }
        iVar7 = (**(code **)(*plVar8 + 0x58))();
        *(int *)(param_1 + -0x29) = iVar7;
      }
    }
    if (iVar7 == 2) goto LAB_14941d3fa;
  }
  else {
LAB_14941d3fa:
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)param_1[0x50];
    param_1[0x4f] = lVar3;
    param_1[0x50] = lVar4;
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
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)param_1[0x52];
    param_1[0x51] = lVar3;
    param_1[0x52] = lVar4;
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
  }
  FUN_1469ffd58(param_1 + -0x24,0);
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,&local_50,param_2);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x58))(local_50,&local_60);
      uVar5 = *(undefined8 *)(DAT_14c968098 + 200);
      plVar8 = *(longlong **)(DAT_14c968098 + 0xd0);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      FUN_14171d2aa(local_c8,1);
      FUN_14171d2aa(local_e0,0);
      local_f0 = local_60;
      local_e8 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      local_100 = 0;
      local_108 = local_c8;
      FUN_14171f2ba(local_b0,&local_f0,0,local_e0);
      FUN_1428785ec(uVar5,local_b0);
      FUN_1417211dc(local_b0);
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
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_58 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_48 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  }
LAB_14941d358:
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14941d698 FUN_14941d698 body=42 status=ok
// SIG undefined FUN_14941d698(void)

void FUN_14941d698(longlong param_1)

{
  FUN_14942d224(param_1 + 0x228);
  FUN_1469ffd58(param_1 + -0x120,0);
  return;
}



// FUNCTION 14941d6c2 FUN_14941d6c2 body=621 status=ok
// SIG undefined FUN_14941d6c2(void)

void FUN_14941d6c2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined1 local_5c [4];
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + -0x138) == 0) || (*(longlong **)(param_1 + -0x140) == (longlong *)0x0))
     || (cVar2 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))(), cVar2 == '\0')) {
    iVar3 = *(int *)(param_1 + -0x148);
  }
  else {
    if (*(int *)(param_1 + -0x138) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + -0x140);
    }
    iVar3 = (**(code **)(*plVar5 + 0x58))();
    *(int *)(param_1 + -0x148) = iVar3;
  }
  if (iVar3 == 0) goto LAB_14941d766;
  plVar5 = *(longlong **)(param_1 + 0x3d8);
  if (plVar5 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    (**(code **)(*plVar5 + 8))(plVar5,&local_58);
    if (local_50 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x288);
      uVar8 = 0;
      if (lVar11 != 0) {
        plVar5 = *(longlong **)(param_1 + 0x290);
        if (plVar5 == (longlong *)0x0) {
LAB_14941d8ab:
          uVar8 = 0;
          plVar7 = local_58;
          do {
            if (*plVar7 == lVar11) goto LAB_14941d8ce;
            plVar7 = plVar7 + 2;
            uVar8 = uVar8 + 1;
          } while (plVar7 != local_58 + (longlong)local_50 * 2);
          uVar8 = 0xffffffff;
LAB_14941d8ce:
          if (plVar5 == (longlong *)0x0) goto LAB_14941d7e0;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          uVar8 = 0xffffffff;
          if (local_50 != 0) goto LAB_14941d8ab;
        }
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
LAB_14941d7e0:
      uVar6 = 0xffffffff;
      if ((longlong)local_50 != 0) {
        lVar11 = 0;
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          if (*(longlong *)((longlong)local_58 + lVar11) == *param_2) break;
          uVar4 = uVar4 + 1;
          lVar11 = lVar11 + 0x10;
          uVar6 = 0xffffffff;
        } while ((longlong)local_50 << 4 != lVar11);
      }
      uVar4 = local_50 - 1;
      if ((int)uVar4 <= (int)uVar8) {
        uVar8 = uVar4;
      }
      uVar9 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar9 = 0;
      }
      uVar8 = (uint)uVar9;
      if ((int)uVar6 < (int)uVar4) {
        uVar4 = uVar6;
      }
      uVar6 = 0;
      if (0 < (int)uVar4) {
        uVar6 = uVar4;
      }
      iVar3 = uVar8 - uVar6;
      if (iVar3 != 0) {
        lVar11 = (ulonglong)((int)uVar8 < (int)uVar4) * 2 + -1;
        lVar10 = uVar9 << 4;
        local_60 = uVar6;
        do {
          FUN_149428afc(param_1 + 0x228,local_5c,(longlong)local_58 + lVar10);
          lVar10 = lVar10 + lVar11 * 0x10;
          iVar3 = iVar3 + (int)lVar11;
          uVar8 = local_60;
        } while (iVar3 != 0);
      }
      FUN_149428afc(param_1 + 0x228,local_5c,local_58 + (ulonglong)uVar8 * 2);
    }
  }
  FUN_1469ffd58(param_1 + -0x120,0);
LAB_14941d766:
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14941d930 FUN_14941d930 body=58 status=ok
// SIG undefined FUN_14941d930(void)

void FUN_14941d930(longlong param_1)

{
  FUN_14941ef00();
  if (*(char *)(param_1 + 0x49a) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014941d95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x2e0))(param_1 + -0x4d8);
    return;
  }
  return;
}



// FUNCTION 14941dab6 FUN_14941dab6 body=583 status=ok
// SIG undefined FUN_14941dab6(void)

void FUN_14941dab6(longlong param_1,ulonglong *param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  undefined2 local_62;
  ulonglong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)(param_1 + 0x408);
  puVar5 = (ulonglong *)*param_2;
  plVar6 = (longlong *)param_2[1];
  local_60 = puVar5;
  if (plVar6 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_58 = plVar6;
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
        piVar4 = (int *)((longlong)plVar6 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  uVar7 = ((uint)((ulonglong)puVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar5 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  iVar8 = FUN_149428a18(plVar2,uVar7 >> 0x10 ^ uVar7,&local_60);
  plVar1 = local_58;
  if (iVar8 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar8 * 0x20 + *plVar2;
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar4 = (int *)((longlong)plVar1 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar4 = (int *)((longlong)plVar6 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (lVar9 == 0) {
    uVar7 = 0;
    if ((char)param_3 == '\0') goto LAB_14941dbae;
    local_62 = 1;
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)*(byte *)(lVar9 + 0x10);
    local_62 = CONCAT11(*(undefined1 *)(lVar9 + 0x11),(char)param_3);
  }
  local_58 = (longlong *)&local_62;
  local_60 = param_2;
  FUN_1494291fa(plVar2,local_4c);
LAB_14941dbae:
  if (uVar7 != (param_3 & 0xff)) {
    local_78 = *param_2;
    local_70 = param_2[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    FUN_14942d6a6(param_1 + 0x478,&local_78,param_3);
    (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x2e8))((longlong *)(param_1 + -0x4d8));
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941dcfe FUN_14941dcfe body=211 status=ok
// SIG undefined FUN_14941dcfe(void)

void FUN_14941dcfe(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x3f8) != 0) && (*(longlong **)(param_1 + 0x3f0) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x30))();
    if (cVar3 != '\0') {
      local_38 = *param_2;
      local_30 = param_2[1];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x3f8) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x3f0);
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,&local_38,param_3);
      (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x2e8))((longlong *)(param_1 + -0x4d8));
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941ddd2 FUN_14941ddd2 body=382 status=ok
// SIG undefined FUN_14941ddd2(void)

undefined1 FUN_14941ddd2(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  local_38 = uVar4;
  if (plVar5 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_30 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  uVar7 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  iVar8 = FUN_149428a18((longlong *)(param_1 + 0x408),uVar7 >> 0x10 ^ uVar7,&local_38);
  plVar3 = local_30;
  if (iVar8 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x408);
  }
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (lVar9 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined1 *)(lVar9 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941df84 FUN_14941df84 body=161 status=ok
// SIG undefined FUN_14941df84(void)

void FUN_14941df84(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_14942d478(param_1 + 0x298,&local_30);
  }
  else {
    FUN_149428afc(param_1 + 0x298,local_1c,param_2);
  }
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
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



// FUNCTION 14941e0b0 FUN_14941e0b0 body=82 status=ok
// SIG undefined FUN_14941e0b0(void)

void FUN_14941e0b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x280))(param_1 + -0x4d8,param_3);
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014941e0f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14941e102 FUN_14941e102 body=138 status=ok
// SIG undefined FUN_14941e102(void)

undefined4 FUN_14941e102(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_14942d72e(param_1 + 0x340,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941e18e FUN_14941e18e body=138 status=ok
// SIG undefined FUN_14941e18e(void)

undefined4 FUN_14941e18e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_14942d72e(param_1 + 0x350,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941e21a FUN_14941e21a body=83 status=ok
// SIG undefined FUN_14941e21a(void)

undefined4 FUN_14941e21a(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + -0x138) != 0) && (*(longlong **)(param_1 + -0x140) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x138) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + -0x140);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(param_1 + -0x148) = uVar2;
    }
  }
  return *(undefined4 *)(param_1 + -0x148);
}



// FUNCTION 14941e282 FUN_14941e282 body=343 status=ok
// SIG undefined FUN_14941e282(void)

longlong * FUN_14941e282(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
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
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1494205ba(param_2,*(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x25c));
  local_40 = param_1 + 0x238;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x250) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = (longlong *)(param_1 + 0x228);
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      puVar4 = (undefined8 *)((longlong)iStack_54 * 0x18 + *local_70);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1494039be(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *puVar4;
      lVar3 = puVar4[1];
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14941e3da FUN_14941e3da body=189 status=ok
// SIG undefined FUN_14941e3da(void)

longlong * FUN_14941e3da(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_149420228(param_1 + 8,&local_38);
  if (local_38 == 0) {
    FUN_149420228(param_1 + 0xd8,param_2,param_3);
  }
  else {
    *param_2 = local_38;
    param_2[1] = (longlong)local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
  }
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941e4a2 FUN_14941e4a2 body=138 status=ok
// SIG undefined FUN_14941e4a2(void)

undefined8 * FUN_14941e4a2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + -0x4c8);
  if (plVar3 == (longlong *)0x0) {
LAB_14941e51b:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14941e51b;
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
    uVar4 = *(undefined8 *)(param_1 + -0x4d0);
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



// FUNCTION 14941e52c FUN_14941e52c body=38 status=ok
// SIG undefined FUN_14941e52c(void)

undefined8 FUN_14941e52c(undefined8 param_1,int param_2)

{
  FUN_14941f10e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14941e552 FUN_14941e552 body=133 status=ok
// SIG undefined FUN_14941e552(void)

char * FUN_14941e552(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x840) != 0) && (*(longlong **)(param_1 + 0x838) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x840) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x838);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4);
    if (*param_2 != '\0') {
      return param_2;
    }
    FUN_14493db24(param_2);
  }
  FUN_14941f8de(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14941e5d8 FUN_14941e5d8 body=50 status=ok
// SIG undefined FUN_14941e5d8(void)

void FUN_14941e5d8(longlong *param_1)

{
  FUN_14942055e(param_1 + 0x9c);
  FUN_14942055e(param_1 + 0xb6);
                    /* WARNING: Could not recover jumptable at 0x00014941e603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x240))(param_1);
  return;
}



// FUNCTION 14941e60a FUN_14941e60a body=1026 status=ok
// SIG undefined FUN_14941e60a(void)

double * FUN_14941e60a(longlong param_1,double *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  double *local_100;
  undefined8 local_f8;
  undefined1 local_ec [4];
  float local_e8;
  longlong local_e0;
  uint local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_146af6b36();
  lVar1 = param_1 + 0x4e0;
  FUN_1494215b0(lVar1);
  plVar4 = *(longlong **)(param_1 + 0x8b0);
  if ((plVar4 == (longlong *)0x0) ||
     ((**(code **)(*plVar4 + 8))(plVar4,&local_e0), (int)local_d8 < 1)) {
    *(undefined8 *)((longlong)param_2 + 9) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11) = 0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    goto LAB_14941e86c;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
  auVar19 = roundpd(auVar19,auVar19,1);
  uVar5 = local_d8 - 1;
  if ((int)auVar19._0_8_ < (int)(local_d8 - 1)) {
    uVar5 = (int)auVar19._0_8_;
  }
  uVar11 = 0;
  if (0 < (int)uVar5) {
    uVar11 = uVar5;
  }
  uVar2 = *(undefined4 *)(param_3 + 1);
  local_f8 = *param_3;
  FUN_146af3580(local_ec,*(undefined4 *)(param_1 + 0x3ec));
  uVar8 = (ulonglong)local_d8;
  if ((int)uVar11 < (int)local_d8) {
    uVar15 = (ulonglong)uVar11;
    lVar13 = uVar15 << 4;
    fVar25 = 0.0;
    lVar12 = 0;
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    bVar9 = false;
    uVar14 = uVar15;
    local_100 = param_2;
    do {
      if (*(longlong *)(local_e0 + lVar13) == 0) {
        bVar10 = false;
      }
      else {
        local_108 = uVar2;
        uVar17 = FUN_149421234(param_1,local_e0 + lVar13,uVar14 & 0xffffffff,uVar11);
        fVar16 = (float)uVar17;
        if (lVar12 == 0) {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
          auVar19 = roundpd(auVar21,auVar21,3);
          dVar18 = *(double *)(param_1 + 0x2e8) - auVar19._0_8_;
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          fVar23 = 1.0 - (float)dVar18;
          fVar20 = local_e8 / (fVar16 * fVar23);
          fVar27 = fVar16;
          if (fVar23 <= fVar20) {
            fVar20 = fVar23;
          }
        }
        else if (fVar26 + fVar16 <= local_e8) {
          fVar20 = 1.0;
        }
        else {
          fVar20 = (local_e8 - fVar26) / fVar16;
        }
        fVar25 = fVar25 + fVar20;
        auVar22._8_4_ = (int)extraout_XMM0_Qb;
        auVar22._0_8_ = uVar17;
        auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        if (lVar12 == 0) {
          auVar22._0_4_ = fVar16 * fVar25;
        }
        fVar26 = fVar26 + auVar22._0_4_;
        uVar8 = (ulonglong)(int)local_d8;
        bVar9 = (longlong)(uVar8 - 1) <= (longlong)uVar14;
        fVar24 = fVar24 + fVar16;
        bVar10 = local_e8 + 0.001 <= fVar26 || lVar12 == 0 && local_e8 <= fVar26;
      }
      param_2 = local_100;
      uVar7 = (uint)uVar8;
      if (bVar10) break;
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + -1;
      lVar13 = lVar13 + 0x10;
    } while ((int)uVar14 < (int)uVar7);
    if (bVar10 || bVar9 != true) {
      dVar18 = (double)fVar25;
      goto LAB_14941e8f1;
    }
    dVar3 = (double)((fVar24 - local_e8) / fVar27) + (double)(int)uVar11;
    if ((0 < (int)uVar5) && (fVar24 < local_e8)) {
      lVar12 = uVar15 << 4;
      fVar27 = local_e8;
      do {
        lVar12 = lVar12 + -0x10;
        if (*(longlong *)(local_e0 + lVar12) != 0) {
          local_108 = uVar2;
          fVar25 = (float)FUN_149421234(param_1,local_e0 + lVar12,uVar15 - 1 & 0xffffffff,uVar11);
          fVar24 = fVar24 + fVar25;
          fVar27 = local_e8;
          if ((0.0 < fVar25) && (local_e8 < fVar24)) {
            dVar3 = (double)((fVar24 - local_e8) / fVar25) + (double)(int)(uVar15 - 1);
          }
        }
        uVar7 = local_d8;
      } while ((1 < uVar15) && (uVar15 = uVar15 - 1, fVar24 < fVar27));
    }
    dVar18 = (double)(int)uVar7 - dVar3;
    uVar6 = 1;
  }
  else {
    fVar24 = 0.0;
    dVar18 = 0.0;
LAB_14941e8f1:
    dVar3 = *(double *)(param_1 + 0x2e8);
    uVar6 = 0;
  }
  *param_2 = dVar3;
  param_2[1] = (double)fVar24;
  param_2[2] = dVar18;
  *(undefined1 *)(param_2 + 3) = uVar6;
LAB_14941e86c:
  FUN_149420600(lVar1);
  FUN_144510066(lVar1);
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941ea0e FUN_14941ea0e body=1264 status=ok
// SIG undefined FUN_14941ea0e(void)

undefined8 * FUN_14941ea0e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_808 [32];
  undefined1 *local_7e8;
  undefined8 local_7d8;
  longlong *plStack_7d0;
  undefined8 *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a1;
  wchar_t *local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  longlong *local_780 [2];
  undefined1 local_770 [16];
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong local_720;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_808;
  if (((*(int *)(param_1 + 0x698) == 0) || (*(longlong **)(param_1 + 0x690) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x690) + 0x30))(), cVar5 == '\0')) {
    FUN_149422324(&local_2b8);
    FUN_140a570d8(&local_728);
    local_7a0 = L"OnGenerateWidgetNotAssignedMessage";
    local_798 = 0x22;
    FUN_1446e940c(local_784,&local_7a0);
    local_7a0 = L"SListView";
    local_798 = 9;
    FUN_1446e940c(local_788,&local_7a0);
    FUN_140208bae(local_780,local_788,local_784,L"OnGenerateWidget() not assigned.");
    FUN_14023423e(local_770,local_780);
    local_760 = 1;
    local_758 = 0;
    uStack_750 = 0;
    uVar8 = FUN_140a54906(&local_728,local_770);
    local_7e8 = &local_7a1;
    FUN_140a54526(&local_7a0,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x682)
    ;
    FUN_140a52852(&local_7a0,&local_748,uVar8);
    plVar9 = local_58;
    plVar3 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
    }
    local_60 = local_748;
    local_58 = local_740;
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
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_14941ed1f:
      local_7d8 = 0;
      plStack_7d0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_14941ed1f;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7d8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7d0 = plVar9;
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
    local_7c8 = &local_7d8;
    FUN_1494225aa(local_7c0,0x67f);
    FUN_14942248c(local_7c0,&local_738,&local_2b8);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7b8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7b8 + 0x10))(local_7b8);
        }
      }
    }
    plVar9 = plStack_7d0;
    if (plStack_7d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7d0)(plStack_7d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_740 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar1 = (int *)((longlong)local_740 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_740 + 0x10))(local_740);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_794,local_798);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_780[0] != (longlong *)0x0) {
      (**(code **)(*local_780[0] + 0x10))();
    }
    FUN_140a59ae6(&local_728);
    FUN_14942250a(&local_2b8);
    *param_2 = local_738;
    param_2[1] = local_730;
    if (local_730 == (longlong *)0x0) goto LAB_14941eb66;
    LOCK();
    *(int *)(local_730 + 1) = (int)local_730[1] + 1;
    UNLOCK();
    if (local_730 == (longlong *)0x0) goto LAB_14941eb66;
    LOCK();
    plVar3 = local_730 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14941eb66;
    (**(code **)*local_730)(local_730);
    LOCK();
    piVar1 = (int *)((longlong)local_730 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14941eb66;
    lVar7 = *local_730;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_14941eac4:
      local_2b8 = 0;
      plStack_2b0 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_14941eac4;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_2b8 = uVar8;
      plStack_2b0 = plVar3;
    }
    plVar3 = plStack_2b0;
    local_728 = *param_3;
    local_720 = param_3[1];
    if (local_720 != 0) {
      LOCK();
      *(int *)(local_720 + 8) = *(int *)(local_720 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x698) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x690);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,&local_728,&local_2b8);
    plVar9 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_14941eb66;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14941eb66;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14941eb66;
    lVar7 = *plVar3;
    local_730 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_730);
LAB_14941eb66:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14941ef00 FUN_14941ef00 body=391 status=ok
// SIG undefined FUN_14941ef00(void)

void FUN_14941ef00(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + -0x138) == 0) || (*(longlong **)(param_1 + -0x140) == (longlong *)0x0)) {
LAB_14941ef5a:
    iVar4 = *(int *)(param_1 + -0x148);
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))();
    if (cVar3 == '\0') goto LAB_14941ef5a;
    if (*(int *)(param_1 + -0x138) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + -0x140);
    }
    iVar4 = (**(code **)(*plVar6 + 0x58))();
    *(int *)(param_1 + -0x148) = iVar4;
  }
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x328) != 0)) {
    plVar6 = (longlong *)(param_1 + 800);
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)*plVar6 + 0x30))();
      if (cVar3 != '\0') {
        if (*(int *)(param_1 + 0x25c) < *(int *)(param_1 + 0x230)) {
          local_40 = param_1 + 0x238;
          local_48 = 0x100000000;
          local_38 = 0xffffffff;
          local_30 = 0;
          if (*(int *)(param_1 + 0x250) == 0) {
            lVar5 = 0;
          }
          else {
            FUN_1449c0562(&local_48);
            lVar5 = (longlong)local_38._4_4_;
          }
          local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x228) + lVar5 * 0x18);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 8 + lVar5 * 0x18);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            local_50 = plVar2;
            FUN_149427c98(plVar6,&local_58,param_2);
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
            goto LAB_14941ef86;
          }
        }
        else {
          local_58 = 0;
        }
        local_50 = (longlong *)0x0;
        FUN_149427c98(plVar6,&local_58,param_2);
      }
    }
  }
LAB_14941ef86:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14941f088 FUN_14941f088 body=56 status=ok
// SIG undefined FUN_14941f088(void)

void FUN_14941f088(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014941f0b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14941f0c0 FUN_14941f0c0 body=56 status=ok
// SIG undefined FUN_14941f0c0(void)

void FUN_14941f0c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014941f0ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14941f10e FUN_14941f10e body=544 status=ok
// SIG undefined FUN_14941f10e(void)

void FUN_14941f10e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bcc3d10;
  param_1[0x4d] = &PTR_FUN_14bcc3ff0;
  param_1[0x9b] = &PTR_LAB_14bcc4010;
  puVar3 = (undefined8 *)param_1[0x116];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_1449db362(param_1 + 0x113);
  FUN_1449db362(param_1 + 0x110);
  FUN_1449db362(param_1 + 0x10a);
  FUN_1449db362(param_1 + 0x107);
  FUN_1449db362(param_1 + 0x105);
  FUN_1449db362(param_1 + 0x103);
  FUN_1449db362(param_1 + 0x101);
  FUN_1449db362(param_1 + 0xff);
  plVar4 = (longlong *)param_1[0xfd];
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
  plVar4 = (longlong *)param_1[0xfa];
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
  *(undefined4 *)(param_1 + 0xf7) = 0;
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_14941f3cc(param_1 + 0xee);
  plVar4 = (longlong *)param_1[0xed];
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
  plVar4 = (longlong *)param_1[0xeb];
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
  *(undefined4 *)(param_1 + 0xe9) = 0;
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  FUN_14941f3cc(param_1 + 0xe0);
  FUN_1449db362(param_1 + 0xde);
  FUN_1449db362(param_1 + 0xdc);
  FUN_1449db362(param_1 + 0xda);
  FUN_1449db362(param_1 + 0xd8);
  FUN_1449db362(param_1 + 0xd6);
  FUN_1449db362(param_1 + 0xd4);
  FUN_1449db362(param_1 + 0xd2);
  FUN_1449db362(param_1 + 0xd0);
  FUN_14941f32e(param_1 + 0xb6);
  FUN_14941f32e(param_1 + 0x9c);
  FUN_146af62c8(param_1);
  return;
}



// FUNCTION 14941f32e FUN_14941f32e body=157 status=ok
// SIG undefined FUN_14941f32e(void)

void FUN_14941f32e(longlong param_1)

{
  FUN_149403159(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_149403159(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14941f586(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14941f712(param_1 + 8);
  return;
}



// FUNCTION 14941f3cc FUN_14941f3cc body=54 status=ok
// SIG undefined FUN_14941f3cc(void)

void FUN_14941f3cc(longlong *param_1)

{
  FUN_14941f402(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14941f402 FUN_14941f402 body=386 status=ok
// SIG undefined FUN_14941f402(void)

void FUN_14941f402(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14941f586 FUN_14941f586 body=52 status=ok
// SIG undefined FUN_14941f586(void)

void FUN_14941f586(longlong *param_1)

{
  FUN_14941f5ba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14941f5ba FUN_14941f5ba body=343 status=ok
// SIG undefined FUN_14941f5ba(void)

void FUN_14941f5ba(longlong *param_1)

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



// FUNCTION 14941f712 FUN_14941f712 body=52 status=ok
// SIG undefined FUN_14941f712(void)

void FUN_14941f712(longlong *param_1)

{
  FUN_14941f746();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14941f746 FUN_14941f746 body=307 status=ok
// SIG undefined FUN_14941f746(void)

void FUN_14941f746(longlong *param_1)

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
      FUN_14941f87a((longlong)iStack_4c * 0x28 + *local_68);
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



// FUNCTION 14941f87a FUN_14941f87a body=100 status=ok
// SIG undefined FUN_14941f87a(void)

void FUN_14941f87a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014941f8d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14941f8de FUN_14941f8de body=2377 status=ok
// SIG undefined FUN_14941f8de(void)

undefined1 *
FUN_14941f8de(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_R13;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong *)param_1[0x116] == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x116] + 8))();
    if ((0 < local_50) && ((*(byte *)(param_4 + 8) & 0x30) == 0)) {
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        unaff_R13 = DAT_14c964e48;
        UNLOCK();
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (lVar9 == unaff_R13) goto LAB_14941f98a;
        lVar9 = *(longlong *)(param_4 + 0x20);
        plVar12 = *(longlong **)(param_4 + 0x30);
        if (plVar12 == (longlong *)0x0) goto LAB_14941fa81;
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        unaff_R13 = DAT_14c964e30;
        UNLOCK();
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (lVar9 != unaff_R13) goto LAB_14941fbf1;
LAB_14941fa95:
        lVar9 = (longlong)(local_50 + -1);
LAB_14941faa2:
        lVar11 = local_58[lVar9 * 2];
        plVar12 = (longlong *)local_58[lVar9 * 2 + 1];
LAB_14941f999:
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (lVar11 == 0) {
          uVar10 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
          goto LAB_14941fabf;
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_68 = lVar11;
        local_60 = plVar12;
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_68,param_4);
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
LAB_14941fb45:
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar12 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        goto LAB_14941fa43;
      }
      if (lVar9 == DAT_14c964e48) {
LAB_14941f98a:
        lVar11 = *local_58;
        plVar12 = (longlong *)local_58[1];
        goto LAB_14941f999;
      }
LAB_14941fa81:
      if (lVar9 == DAT_14c964e30) goto LAB_14941fa95;
LAB_14941fbf1:
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 == (longlong *)0x0) {
        if (lVar9 != DAT_14c964e00) {
LAB_14941fdc9:
          if (lVar9 != DAT_14c964e18) goto LAB_14941fe7c;
LAB_14941fdd6:
          lVar9 = param_1[0xea];
          if (lVar9 == 0) {
            iVar5 = 0;
          }
          else {
            plVar12 = (longlong *)param_1[0xeb];
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            iVar5 = -1;
            if ((longlong)local_50 != 0) {
              lVar11 = 0;
              iVar8 = 0;
              do {
                iVar5 = iVar8;
                if (*(longlong *)((longlong)local_58 + lVar11) == lVar9) break;
                iVar8 = iVar8 + 1;
                lVar11 = lVar11 + 0x10;
                iVar5 = -1;
              } while ((longlong)local_50 * 0x10 != lVar11);
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar6 = plVar12 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          fVar14 = (float)(**(code **)(*param_1 + 0x260))(param_1);
          iVar8 = (**(code **)(*param_1 + 0x268))(param_1);
          iVar8 = (int)fVar14 - (int)fVar14 % iVar8;
          if (local_50 - iVar8 <= iVar5) goto LAB_14941fa95;
          lVar9 = (longlong)(iVar8 + iVar5);
          goto LAB_14941faa2;
        }
LAB_14941fc36:
        lVar9 = param_1[0xea];
        if (lVar9 == 0) {
          iVar5 = 0;
        }
        else {
          plVar12 = (longlong *)param_1[0xeb];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          iVar5 = -1;
          if ((longlong)local_50 != 0) {
            lVar11 = 0;
            iVar8 = 0;
            do {
              iVar5 = iVar8;
              if (*(longlong *)((longlong)local_58 + lVar11) == lVar9) break;
              iVar8 = iVar8 + 1;
              lVar11 = lVar11 + 0x10;
              iVar5 = -1;
            } while ((longlong)local_50 * 0x10 != lVar11);
          }
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar12 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
        }
        fVar14 = (float)(**(code **)(*param_1 + 0x260))(param_1);
        iVar8 = (**(code **)(*param_1 + 0x268))(param_1);
        iVar8 = (int)fVar14 - (int)fVar14 % iVar8;
        if (iVar8 <= iVar5) {
          lVar9 = (longlong)(iVar5 - iVar8);
          goto LAB_14941faa2;
        }
        goto LAB_14941f98a;
      }
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      unaff_R13 = DAT_14c964e00;
      UNLOCK();
      LOCK();
      plVar6 = plVar12 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (lVar9 == unaff_R13) goto LAB_14941fc36;
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 == (longlong *)0x0) goto LAB_14941fdc9;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      unaff_R13 = DAT_14c964e18;
      UNLOCK();
      LOCK();
      plVar6 = plVar12 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (lVar9 == unaff_R13) goto LAB_14941fdd6;
LAB_14941fe7c:
      uVar10 = 0;
      plVar12 = (longlong *)0x0;
LAB_14941fabf:
      if ((*(char *)((longlong)param_1 + 0x867) == '\x01') && (param_1[0xea] != 0)) {
        lVar9 = *(longlong *)(param_4 + 0x20);
        plVar6 = *(longlong **)(param_4 + 0x30);
        lVar11 = DAT_14c964de8;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          lVar11 = DAT_14c964de8;
          UNLOCK();
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          local_c0 = uVar10;
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            uVar10 = local_c0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              uVar10 = local_c0;
            }
          }
        }
        if (lVar9 != lVar11) goto LAB_14941fb26;
        local_68 = param_1[0xea];
        local_60 = (longlong *)param_1[0xeb];
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if ((*(byte *)(param_4 + 8) & 0xc) == 0) {
          if ((((int)param_1[0x74] == 0) || ((longlong *)param_1[0x73] == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar2 == '\0')) {
            iVar5 = (int)param_1[0x72];
          }
          else {
            if ((int)param_1[0x74] == 0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = (longlong *)param_1[0x73];
            }
            iVar5 = (**(code **)(*plVar6 + 0x58))();
            *(int *)(param_1 + 0x72) = iVar5;
          }
          if (iVar5 == 2) goto LAB_14941fffc;
          plVar6 = param_1 + 0x9b;
          cVar2 = (**(code **)(param_1[0x9b] + 0x10))(plVar6,&local_68);
          if (cVar2 == '\0') {
            local_88 = local_68;
            local_80 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar6 + 0x28))(plVar6,&local_88,1,1);
            goto LAB_14942004e;
          }
          bVar13 = false;
        }
        else {
LAB_14941fffc:
          plVar6 = param_1 + 0x9b;
          uVar4 = (**(code **)(param_1[0x9b] + 0x10))(plVar6,&local_68);
          local_78 = local_68;
          local_70 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar6 + 0x28))(plVar6,&local_78,uVar4 ^ 1,1);
LAB_14942004e:
          (**(code **)(param_1[0x9b] + 0x40))(param_1 + 0x9b,0);
          bVar13 = true;
        }
        lVar9 = param_1[0xea];
        lVar11 = param_1[0xeb];
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        plVar6 = (longlong *)param_1[0xed];
        param_1[0xec] = lVar9;
        param_1[0xed] = lVar11;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
        FUN_149420228(param_1 + 0x9c,&local_98,&local_68);
        if (local_98 == 0) {
          uVar3 = *(undefined4 *)(param_4 + 0xc);
          local_a8 = local_68;
          local_a0 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          FUN_1494203d6(param_1,&local_a8,uVar3);
        }
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_90 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_90 + 0x10))(local_90);
            }
          }
        }
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (bVar13) goto LAB_14941fb45;
      }
      else {
LAB_14941fb26:
        if ((*(ushort *)(param_4 + 8) & 0xc) != 0 && (*(ushort *)(param_4 + 8) & 0x33) == 0) {
          lVar9 = *(longlong *)(param_4 + 0x20);
          plVar6 = *(longlong **)(param_4 + 0x30);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          if (lVar9 == DAT_14c966f88) {
            if ((((int)param_1[0x74] != 0) && ((longlong *)param_1[0x73] != (longlong *)0x0)) &&
               (cVar2 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar2 != '\0')) {
              if ((int)param_1[0x74] == 0) {
                plVar7 = (longlong *)0x0;
              }
              else {
                plVar7 = (longlong *)param_1[0x73];
              }
              uVar3 = (**(code **)(*plVar7 + 0x58))();
              *(undefined4 *)(param_1 + 0x72) = uVar3;
            }
            bVar13 = (int)param_1[0x72] == 3;
          }
          else {
            bVar13 = false;
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
          if (bVar13) {
            plVar6 = param_1 + 0x9b;
            (**(code **)(param_1[0x9b] + 0x30))(plVar6);
            if (0 < local_50) {
              lVar11 = 8;
              lVar9 = 0;
              do {
                local_b8 = *(undefined8 *)((longlong)local_58 + lVar11 + -8);
                local_b0 = *(longlong *)((longlong)local_58 + lVar11);
                if (local_b0 != 0) {
                  LOCK();
                  *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*plVar6 + 0x28))(plVar6,&local_b8,1,0);
                lVar9 = lVar9 + 1;
                lVar11 = lVar11 + 0x10;
              } while (lVar9 < local_50);
            }
            (**(code **)(*plVar6 + 0x40))(plVar6);
            goto LAB_14941fb45;
          }
        }
        if ((char)uVar10 != '\0') goto LAB_14941fb45;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
  }
  FUN_146af5694(param_1,param_2,param_3,param_4);
LAB_14941fa43:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149420228 FUN_149420228 body=429 status=ok
// SIG undefined FUN_149420228(void)

undefined8 * FUN_149420228(longlong param_1,undefined8 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *param_3;
  plVar5 = (longlong *)param_3[1];
  local_40 = uVar4;
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_38 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar7 = FUN_14942047a((longlong *)(param_1 + 8),uVar6 >> 0x10 ^ uVar6,&local_40);
  plVar3 = local_38;
  if (iVar7 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 8);
  }
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
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (lVar8 != 0) {
    *param_2 = *(undefined8 *)(lVar8 + 0x10);
    lVar8 = *(longlong *)(lVar8 + 0x18);
    param_2[1] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1494203d6 FUN_1494203d6 body=164 status=ok
// SIG undefined FUN_1494203d6(void)

void FUN_1494203d6(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  plVar5 = *(longlong **)(param_1 + 2000);
  *(undefined8 *)(param_1 + 0x7c8) = uVar3;
  *(longlong *)(param_1 + 2000) = lVar4;
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
  *(undefined4 *)(param_1 + 0x7d8) = param_3;
  FUN_146af42a2(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00014942046b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14942047a FUN_14942047a body=228 status=ok
// SIG undefined FUN_14942047a(void)

int FUN_14942047a(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 14942055e FUN_14942055e body=92 status=ok
// SIG undefined FUN_14942055e(void)

void FUN_14942055e(longlong param_1)

{
  FUN_1493f0bf6(param_1 + 0xc0,param_1 + 0xa8);
  FUN_149403159(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_14940395e(param_1 + 0xa8,0);
  }
  FUN_149420600(param_1);
  return;
}



// FUNCTION 1494205ba FUN_1494205ba body=68 status=ok
// SIG undefined FUN_1494205ba(void)

void FUN_1494205ba(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_149403159(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14940395e(param_1,param_2);
  return;
}



// FUNCTION 149420600 FUN_149420600 body=1238 status=ok
// SIG undefined FUN_149420600(void)

void FUN_149420600(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = param_1 + 0x18;
  if (0 < (int)param_1[0x19]) {
    plVar1 = param_1 + 1;
    local_d0 = param_1 + 0xb;
    local_c0 = param_1 + 3;
    lVar11 = 0;
    do {
      plVar8 = *(longlong **)(*local_c8 + lVar11 * 0x10);
      plVar9 = *(longlong **)(*local_c8 + 8 + lVar11 * 0x10);
      local_b8 = plVar8;
      local_78 = plVar8;
      local_70 = plVar9;
      if (plVar9 == (longlong *)0x0) {
LAB_1494206aa:
        local_b0 = (longlong *)0x0;
        bVar4 = true;
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        if (plVar9 == (longlong *)0x0) goto LAB_1494206aa;
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_b0 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        bVar4 = false;
      }
      uVar6 = ((uint)((ulonglong)plVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar8 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar7 = FUN_14942047a(plVar1,uVar6 >> 0x10 ^ uVar6,&local_b8);
      plVar8 = local_b0;
      if (iVar7 == -1) {
        lVar10 = 0;
      }
      else {
        lVar10 = (longlong)iVar7 * 0x28 + *plVar1;
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (!bVar4) {
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar8 = local_70;
      if (lVar10 == 0) {
        if ((local_78 == (longlong *)0x0) &&
           (plVar8 = (longlong *)FUN_149420ad8(local_d0,&local_78), plVar8 != (longlong *)0x0)) {
          local_68 = (longlong *)&DAT_100000000;
          local_60 = local_c0;
          local_58 = 0xffffffff;
          local_50 = 0;
          if ((int)param_1[6] != 0) {
            FUN_1449c0562(&local_68);
          }
          local_a0 = local_58;
          uVar5 = local_a0;
          local_98 = local_50;
          local_94 = local_4c;
          local_b0 = local_68;
          local_a8 = local_60;
          local_80 = 0;
          local_a0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          bVar4 = local_a0._4_4_ < (int)local_60[3];
          iVar7 = local_a0._4_4_;
          local_b8 = plVar1;
          local_a0 = uVar5;
          local_90 = plVar1;
          local_88 = plVar1;
          if (bVar4) {
            do {
              if (*(longlong *)(*local_b8 + 0x10 + (longlong)iVar7 * 0x28) == *plVar8) {
                FUN_149420d5a(local_90);
                local_80 = CONCAT11(local_80._1_1_,1);
                goto LAB_149420a0c;
              }
              local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
              FUN_1449c0562(&local_b0);
              iVar7 = local_a0._4_4_;
            } while (local_a0._4_4_ < (int)local_a8[3]);
            if ((local_80 & 1) != 0) {
LAB_149420a0c:
              if (local_80._1_1_ == '\x01') {
                FUN_149420fe0(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34));
              }
            }
          }
          FUN_149420e42(local_d0,*plVar8);
        }
      }
      else {
        local_68 = *(longlong **)(lVar10 + 0x10);
        local_60 = *(longlong **)(lVar10 + 0x18);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if (local_70 == (longlong *)0x0) {
          local_b8 = local_78;
          local_b0 = (longlong *)0x0;
          FUN_149420bd2(plVar1,&local_b8);
        }
        else {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
          local_b8 = local_78;
          local_b0 = local_70;
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
          FUN_149420bd2(plVar1,&local_b8);
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        FUN_149420e42(local_d0,local_68);
        if (*param_1 != 0) {
          (**(code **)(*local_68 + 8))();
          if ((*(int *)(*param_1 + 0x6d8) != 0) &&
             (plVar8 = *(longlong **)(*param_1 + 0x6d0), plVar8 != (longlong *)0x0)) {
            (**(code **)(*plVar8 + 0x60))(plVar8,&local_68);
          }
        }
        plVar8 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_60 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      plVar8 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_70 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x19]);
  }
  iVar7 = *(int *)((longlong)param_1 + 0xcc);
  FUN_149403159(param_1[0x18]);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0xcc) != 0)) {
    FUN_14940395e(local_c8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149420ad8 FUN_149420ad8 body=248 status=ok
// SIG undefined FUN_149420ad8(void)

longlong FUN_149420ad8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) == *param_2) {
        lVar1 = *local_60 + (longlong)iStack_44 * 0x20;
        goto LAB_149420bae;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  lVar1 = 0;
LAB_149420bae:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149420bd2 FUN_149420bd2 body=391 status=ok
// SIG undefined FUN_149420bd2(void)

void FUN_149420bd2(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x28 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar9;
        plVar4 = (longlong *)puVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        if (uVar3 == uVar8) {
          FUN_149420d5a(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[4];
        puVar10 = puVar9 + 4;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149420c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149420d5a FUN_149420d5a body=117 status=ok
// SIG undefined FUN_149420d5a(void)

void FUN_149420d5a(longlong *param_1,int param_2)

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
  FUN_14941f87a((longlong)param_2 * 0x28 + *param_1);
  FUN_149420dd0(param_1,param_2);
  return;
}



// FUNCTION 149420dd0 FUN_149420dd0 body=114 status=ok
// SIG undefined FUN_149420dd0(void)

void FUN_149420dd0(longlong *param_1,int param_2)

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



// FUNCTION 149420e42 FUN_149420e42 body=132 status=ok
// SIG undefined FUN_149420e42(void)

void FUN_149420e42(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_149420ec6(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 149420ec6 FUN_149420ec6 body=90 status=ok
// SIG undefined FUN_149420ec6(void)

void FUN_149420ec6(longlong *param_1,int param_2)

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
  FUN_149420f20();
  return;
}



// FUNCTION 149420f20 FUN_149420f20 body=78 status=ok
// SIG undefined FUN_149420f20(void)

void FUN_149420f20(longlong *param_1,int param_2)

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
  FUN_149420f6e(param_1,param_2);
  return;
}



// FUNCTION 149420f6e FUN_149420f6e body=114 status=ok
// SIG undefined FUN_149420f6e(void)

void FUN_149420f6e(longlong *param_1,int param_2)

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



// FUNCTION 149420fe0 FUN_149420fe0 body=68 status=ok
// SIG undefined FUN_149420fe0(void)

void FUN_149420fe0(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_149421024(param_1);
  return;
}



// FUNCTION 149421024 FUN_149421024 body=527 status=ok
// SIG undefined FUN_149421024(void)

void FUN_149421024(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x28);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x28);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        lVar4 = lVar4 + lVar6 * 0x28;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149421234 FUN_149421234 body=891 status=ok
// SIG undefined FUN_149421234(void)

undefined4
FUN_149421234(longlong *param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 auStack_e8 [40];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_149420228(param_1 + 0x9c,&local_60,param_2);
  if (local_60 != (longlong *)0x0) goto LAB_14942132c;
  local_80 = *param_2;
  local_78 = param_2[1];
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_70,&local_80);
  plVar1 = local_58;
  plVar2 = local_68;
  local_60 = local_70;
  if (local_68 == (longlong *)0x0) {
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)0x0;
LAB_14942156d:
      local_60 = local_70;
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000149421559:
        if (iVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    if (local_68 == local_58) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar1 = plVar2;
        goto joined_r0x000149421559;
      }
    }
    else {
      bVar6 = local_58 != (longlong *)0x0;
      local_58 = local_68;
      if (bVar6) goto LAB_14942156d;
    }
  }
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_14942132c:
  plVar1 = local_60;
  (**(code **)(*local_60 + 0x10))(local_60,param_3);
  local_90 = plVar1;
  local_88 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_a0 = *param_2;
  local_98 = param_2[1];
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  FUN_14942160c(param_1 + 0x9c,&local_a0,&local_90);
  plVar1 = local_60;
  (**(code **)(*local_60 + 0x58))(local_60,&local_70);
  *(byte *)(local_70 + 6) = *(byte *)(local_70 + 6) | 0x80;
  FUN_1405d299c(local_70,param_5);
  if (param_3 < param_4) {
    local_b0 = plVar1;
    local_a8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af67c8(param_1,&local_b0);
  }
  else {
    local_b0 = plVar1;
    local_a8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af6a2a(param_1,&local_b0);
  }
  plVar1 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((*(byte *)((longlong)local_70 + 0x39) & 0x19) == 0) {
    local_bc = (float)DAT_14c8463f8;
    local_c0 = (float)DAT_14c8463f0;
  }
  else {
    FUN_144b013c4(local_70,&local_c0);
  }
  local_b8 = local_c0;
  local_b4 = local_bc;
  FUN_146af3580(&local_b0,*(undefined4 *)((longlong)param_1 + 0x3ec));
  uVar5 = local_b0._4_4_;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)local_68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494215b0 FUN_1494215b0 body=91 status=ok
// SIG undefined FUN_1494215b0(void)

void FUN_1494215b0(longlong param_1)

{
  FUN_1493f0bf6(param_1 + 0xc0,param_1 + 0xa8);
  FUN_149403159(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    return;
  }
  FUN_14940395e(param_1 + 0xa8,0);
  return;
}



// FUNCTION 14942160c FUN_14942160c body=663 status=ok
// SIG undefined FUN_14942160c(void)

void FUN_14942160c(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (ulonglong *)*param_2;
  puVar5 = (ulonglong *)param_2[1];
  plVar9 = param_1 + 1;
  local_60 = puVar4;
  if (puVar5 == (ulonglong *)0x0) {
    local_58 = (ulonglong *)0x0;
  }
  else {
    LOCK();
    *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
    UNLOCK();
    local_58 = puVar5;
    if (puVar5 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
      UNLOCK();
      LOCK();
      puVar2 = puVar5 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar3 = (int *)((longlong)puVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*puVar5 + 0x10))(puVar5);
        }
      }
    }
  }
  uVar10 = ((uint)((ulonglong)puVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar4 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  iVar11 = FUN_14942047a(plVar9,uVar10 >> 0x10 ^ uVar10,&local_60);
  puVar4 = local_58;
  bVar12 = true;
  if (iVar11 != -1) {
    bVar12 = (longlong)iVar11 * 0x28 + *plVar9 == 0;
  }
  if (local_58 != (ulonglong *)0x0) {
    LOCK();
    puVar2 = local_58 + 1;
    *(int *)puVar2 = (int)*puVar2 + -1;
    UNLOCK();
    if ((int)*puVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)puVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*puVar4 + 0x10))(puVar4);
      }
    }
  }
  if (puVar5 != (ulonglong *)0x0) {
    LOCK();
    puVar4 = puVar5 + 1;
    *(int *)puVar4 = (int)*puVar4 + -1;
    UNLOCK();
    if ((int)*puVar4 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar3 = (int *)((longlong)puVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*puVar5 + 0x10))(puVar5);
      }
    }
  }
  if (bVar12) {
    local_60 = param_2;
    local_58 = param_3;
    FUN_149421942(plVar9,&local_68,&local_60);
    local_68 = *param_3;
    local_60 = &local_68;
    local_58 = param_2;
    FUN_149421cb8(param_1 + 0xb,local_4c,&local_60);
    (*(code *)**(undefined8 **)*param_3)();
    uVar6 = *param_1;
    local_78 = *param_2;
    local_70 = param_2[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    FUN_1494218a4(uVar6,&local_78,param_3);
  }
  local_60 = param_2;
  FUN_14942221c(param_1 + 0x18);
  iVar11 = *(int *)(param_1 + 0x16);
  *(uint *)(param_1 + 0x16) = iVar11 + 1U;
  if (*(uint *)((longlong)param_1 + 0xb4) < iVar11 + 1U) {
    FUN_1494039be(param_1 + 0x15,iVar11);
  }
  lVar7 = param_1[0x15];
  *(ulonglong *)(lVar7 + (longlong)iVar11 * 0x10) = *param_2;
  uVar8 = param_2[1];
  *(ulonglong *)(lVar7 + 8 + (longlong)iVar11 * 0x10) = uVar8;
  if (uVar8 != 0) {
    LOCK();
    *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
    UNLOCK();
    plVar9 = (longlong *)param_2[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494218a4 FUN_1494218a4 body=141 status=ok
// SIG undefined FUN_1494218a4(void)

void FUN_1494218a4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_149422194(param_1 + 0x680,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
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



// FUNCTION 149421942 FUN_149421942 body=412 status=ok
// SIG undefined FUN_149421942(void)

undefined4 * FUN_149421942(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149421ae0(param_1,local_48);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *local_40 = *puVar3;
  uVar10 = puVar3[1];
  local_40[1] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  local_40[2] = *puVar4;
  uVar10 = puVar4[1];
  local_40[3] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = *local_40;
  plVar5 = (longlong *)local_40[1];
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
  uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  cVar7 = FUN_149421bc6(param_1,uVar8,local_40,&local_4c);
  uVar6 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_149421024(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149421ae0 FUN_149421ae0 body=230 status=ok
// SIG undefined FUN_149421ae0(void)

int * FUN_149421ae0(longlong *param_1,int *param_2)

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



// FUNCTION 149421bc6 FUN_149421bc6 body=240 status=ok
// SIG undefined FUN_149421bc6(void)

undefined8 FUN_149421bc6(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

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
      iVar12 = FUN_14942047a(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_14942047a(param_1);
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
      FUN_14941f87a(puVar3);
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
      FUN_149420dd0(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_149421bec;
    }
  }
  uVar13 = 0;
LAB_149421bec:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149421cb8 FUN_149421cb8 body=343 status=ok
// SIG undefined FUN_149421cb8(void)

undefined4 * FUN_149421cb8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149421e10(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_38 = uVar7;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_149421ef6(param_1,uVar5,local_38,&local_44);
  uVar3 = local_44;
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
      *(uint *)((longlong)local_38 + 0x1c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_149421fb6(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149421e10 FUN_149421e10 body=229 status=ok
// SIG undefined FUN_149421e10(void)

int * FUN_149421e10(longlong *param_1,int *param_2)

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



// FUNCTION 149421ef6 FUN_149421ef6 body=191 status=ok
// SIG undefined FUN_149421ef6(void)

undefined8 FUN_149421ef6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
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
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_149420f6e(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 149421fb6 FUN_149421fb6 body=477 status=ok
// SIG undefined FUN_149421fb6(void)

void FUN_149421fb6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149422194 FUN_149422194 body=134 status=ok
// SIG undefined FUN_149422194(void)

void FUN_149422194(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 14942221c FUN_14942221c body=263 status=ok
// SIG undefined FUN_14942221c(void)

void FUN_14942221c(longlong *param_1,undefined8 *param_2)

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
        FUN_149403159(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}


