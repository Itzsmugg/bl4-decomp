// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147920622 FUN_147920622 body=132 status=ok
// SIG undefined FUN_147920622(void)

void FUN_147920622(longlong param_1,int param_2)

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



// FUNCTION 1479206a8 FUN_1479206a8 body=25 status=ok
// SIG undefined FUN_1479206a8(void)

void FUN_1479206a8(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a79c890;
  lVar1 = *(longlong *)(param_1 + 0x38);
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



// FUNCTION 1479206c2 FUN_1479206c2 body=116 status=ok
// SIG undefined FUN_1479206c2(void)

void FUN_1479206c2(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar4 = 3;
    if (3 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x1c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar4;
    FUN_14791a81e(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147920738 FUN_147920738 body=147 status=ok
// SIG undefined FUN_147920738(void)

void FUN_147920738(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479207cc FUN_1479207cc body=43 status=ok
// SIG undefined FUN_1479207cc(void)

void FUN_1479207cc(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479207f8 FUN_1479207f8 body=143 status=ok
// SIG undefined FUN_1479207f8(void)

void FUN_1479207f8(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_28);
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



// FUNCTION 147920888 FUN_147920888 body=183 status=ok
// SIG undefined FUN_147920888(void)

undefined8 * FUN_147920888(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  
  uVar3 = *param_2;
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar6;
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
  param_1[2] = param_2[2];
  lVar6 = param_2[3];
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[3];
    }
  }
  bVar5 = DAT_14c950c29;
  param_1[3] = lVar6;
  lVar6 = param_2[4];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[4];
    }
  }
  param_1[4] = lVar6;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  return param_1;
}



// FUNCTION 147920948 caseD_5e body=128 status=ok
// SIG undefined caseD_5e(void)

void switchD_143c3d4dc::caseD_5e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 local_2b;
  undefined5 uStack_28;
  undefined8 uStack_23;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  uStack_23 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2b = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x2b0))(0,*param_2,param_2[1],&local_48);
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479209e8 caseD_5b body=146 status=ok
// SIG undefined caseD_5b(void)

undefined8 * switchD_143c3d4dc::caseD_5b(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  if ((undefined8 *)&local_30 == param_2) {
    if (CONCAT44(uStack_2c,local_30) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_30;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_2c;
    *(undefined4 *)(param_2 + 1) = uStack_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
  }
  FUN_1448097c4(param_2,L"AnimNotify_",&DAT_149dfb77a,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147920a8c caseD_17 body=68 status=ok
// SIG undefined caseD_17(void)

void switchD_143c3d4dc::caseD_17(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147920ad2 FUN_147920ad2 body=216 status=ok
// SIG undefined FUN_147920ad2(void)

void FUN_147920ad2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined8 uStack_33;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_33 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = FUN_147920bac(puVar4);
  plVar3 = plStack_50;
  *param_3 = uVar5;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147920bac FUN_147920bac body=154 status=ok
// SIG undefined FUN_147920bac(void)

float FUN_147920bac(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  fVar4 = 0.0;
  if (lVar1 != 0 && *(longlong *)(param_1 + 0x20) != 0) {
    fVar3 = 0.0;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      fVar3 = (float)FUN_144b1ffa4(lVar1 + 0x60,0);
      fVar4 = (float)FUN_144b1ffa4(lVar1,0);
      fVar3 = fVar3 - fVar4;
    }
    fVar4 = *(float *)(param_1 + 0x28);
    fVar2 = (float)FUN_144b1ffa4(lVar1,0);
    fVar4 = fVar4 - (fVar2 + *(float *)(lVar1 + 0x30));
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  return fVar4;
}



// FUNCTION 147920c46 FUN_147920c46 body=216 status=ok
// SIG undefined FUN_147920c46(void)

void FUN_147920c46(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined8 uStack_33;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_33 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = FUN_147920d20(puVar4);
  plVar3 = plStack_50;
  *param_3 = uVar5;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147920d20 FUN_147920d20 body=146 status=ok
// SIG undefined FUN_147920d20(void)

float FUN_147920d20(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  fVar4 = 0.0;
  if ((lVar1 != 0 && *(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(lVar1 + 0x50) != 0)) {
    fVar2 = (float)FUN_144b1ffa4(lVar1 + 0x60,0);
    fVar3 = (float)FUN_144b1ffa4(lVar1,0);
    if (fVar3 < fVar2) {
      fVar4 = (*(float *)(param_1 + 0x28) - (*(float *)(lVar1 + 0x30) + fVar3)) / (fVar2 - fVar3);
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
    }
  }
  return fVar4;
}



// FUNCTION 147920db2 FUN_147920db2 body=217 status=ok
// SIG undefined FUN_147920db2(void)

void FUN_147920db2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 local_2b;
  undefined5 uStack_28;
  undefined8 uStack_23;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  uStack_23 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2b = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar3 = plStack_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_48;
  }
  *param_3 = *(undefined4 *)(puVar4 + 5);
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147920e8c FUN_147920e8c body=216 status=ok
// SIG undefined FUN_147920e8c(void)

void FUN_147920e8c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined8 uStack_33;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_33 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = FUN_147920f66(puVar4);
  plVar3 = plStack_50;
  *param_3 = uVar5;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147920f66 FUN_147920f66 body=131 status=ok
// SIG undefined FUN_147920f66(void)

float FUN_147920f66(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  fVar4 = 0.0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14063d1f6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      fVar3 = (float)(**(code **)(*plVar1 + 0x2b0))(plVar1);
      fVar4 = 0.0;
      if (0.0 < fVar3) {
        fVar4 = *(float *)(param_1 + 0x28);
        fVar3 = (float)(**(code **)(*plVar1 + 0x2b0))(plVar1);
        fVar4 = fVar4 / fVar3;
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
      }
    }
  }
  return fVar4;
}



// FUNCTION 147920ff0 FUN_147920ff0 body=216 status=ok
// SIG undefined FUN_147920ff0(void)

void FUN_147920ff0(undefined8 param_1,longlong param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 local_2b;
  undefined5 uStack_28;
  undefined8 uStack_23;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  uStack_23 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2b = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar3 = plStack_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_48;
  }
  *param_3 = *(byte *)((longlong)puVar4 + 0x2c) ^ 1;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479210d0 FUN_1479210d0 body=214 status=ok
// SIG undefined FUN_1479210d0(void)

void FUN_1479210d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined8 uStack_33;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_33 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1479211a8(puVar5);
  plVar3 = plStack_50;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479211a8 FUN_1479211a8 body=140 status=ok
// SIG undefined FUN_1479211a8(void)

undefined8 FUN_1479211a8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (lVar3 = param_1[1], (longlong)(int)lVar3 != 0)) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      (**(code **)(*plVar2 + 8))(plVar2,&local_30);
      if (local_30 == DAT_14cacc3e8) {
        lVar3 = *(longlong *)(lVar1 + lVar5);
        if (lVar3 != 0) {
          uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 8));
          goto LAB_147921206;
        }
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  uVar4 = 0;
LAB_147921206:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147921238 FUN_147921238 body=215 status=ok
// SIG undefined FUN_147921238(void)

void FUN_147921238(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined8 uStack_33;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_33 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147921310(puVar5);
  plVar3 = plStack_50;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147921310 FUN_147921310 body=160 status=ok
// SIG undefined FUN_147921310(void)

undefined8 FUN_147921310(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = (longlong *)*param_1;
  if ((param_1 == (longlong *)0x0) || (lVar3 = param_1[1], (longlong)(int)lVar3 == 0)) {
LAB_147921389:
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    uVar4 = 0;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      (**(code **)(*plVar2 + 8))(plVar2,&local_38);
      if (local_38 == DAT_14cacd700) {
        lVar3 = *(longlong *)(lVar1 + lVar5);
        if (lVar3 == 0) goto LAB_147921389;
        uVar4 = FUN_14479d2ce(lVar3 + 0xc);
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1479213b8 FUN_1479213b8 body=214 status=ok
// SIG undefined FUN_1479213b8(void)

void FUN_1479213b8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined8 uStack_33;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_33 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147921490(puVar5);
  plVar3 = plStack_50;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147921490 FUN_147921490 body=140 status=ok
// SIG undefined FUN_147921490(void)

undefined8 FUN_147921490(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (lVar3 = param_1[1], (longlong)(int)lVar3 != 0)) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      (**(code **)(*plVar2 + 8))(plVar2,&local_30);
      if (local_30 == DAT_14cacd700) {
        lVar3 = *(longlong *)(lVar1 + lVar5);
        if (lVar3 != 0) {
          uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 8));
          goto LAB_1479214ee;
        }
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  uVar4 = 0;
LAB_1479214ee:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147921520 FUN_147921520 body=276 status=ok
// SIG undefined FUN_147921520(void)

void FUN_147921520(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar5 = (undefined8 *)*param_2;
    lVar6 = (longlong)*(int *)(param_2 + 1) * 0x30;
    do {
      if ((puVar5[4] != 0) && (puVar5[2] != 0)) {
        if (*(longlong *)(puVar5[2] + 0x50) == 0) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_140166dde(param_3,iVar1);
          }
          lVar7 = *param_3;
          lVar4 = (longlong)iVar1 * 0x30;
          *(undefined8 *)(lVar7 + lVar4) = *puVar5;
          lVar2 = puVar5[1];
          *(longlong *)(lVar7 + 8 + lVar4) = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          lVar7 = lVar7 + lVar4;
          *(undefined8 *)(lVar7 + 0x10) = puVar5[2];
          lVar2 = puVar5[3];
          *(longlong *)(lVar7 + 0x18) = lVar2;
          if ((lVar2 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          bVar3 = DAT_14c950c29;
          lVar2 = puVar5[4];
          *(longlong *)(lVar7 + 0x20) = lVar2;
          if ((lVar2 != 0 & bVar3) == 1) {
            FUN_1456cec3c();
          }
          *(undefined1 *)(lVar7 + 0x2c) = *(undefined1 *)((longlong)puVar5 + 0x2c);
          *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(puVar5 + 5);
        }
        else {
          FUN_140210480(param_3,puVar5);
        }
      }
      puVar5 = puVar5 + 6;
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 147921634 FUN_147921634 body=391 status=ok
// SIG undefined FUN_147921634(void)

void FUN_147921634(longlong param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = param_3 + 2;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  uStack_68 = 0;
  uStack_78 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    iVar5 = (int)param_3[5];
  }
  uStack_88 = CONCAT44(uStack_64,uStack_68);
  local_90 = local_70;
  iStack_8c = iStack_6c;
  local_a0 = (undefined4)local_80;
  uStack_9c = local_80._4_4_;
  uStack_98 = (undefined4)uStack_78;
  uStack_94 = uStack_78._4_4_;
  local_a8 = param_3;
  if ((iStack_6c != iVar5) || (uStack_78 != plVar1)) {
    do {
      puVar2 = (undefined8 *)(*local_a8 + (longlong)iStack_8c * 0x20);
      uVar4 = *puVar2;
      uVar3 = (uint)((ulonglong)uVar4 >> 0x10);
      uVar6 = (uint)uVar4 & 0xffff;
      uVar4 = FUN_1479349d0(param_1 + 0x20,
                            ((uint)uVar4 << 0x10 | uVar6) + (int)((ulonglong)uVar4 >> 0x20) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4),
                            *local_a8 + (longlong)iStack_8c * 0x20);
      local_b8 = param_4;
      FUN_14094ddd6(param_1,param_2,puVar2 + 1,uVar4);
      local_90 = local_90 & ~uStack_9c;
      FUN_1449c0562(&local_a0);
    } while (local_a8 != param_3 ||
             ((longlong *)CONCAT44(uStack_94,uStack_98) != plVar1 || iStack_8c != iVar5));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479217bc FUN_1479217bc body=43 status=ok
// SIG undefined FUN_1479217bc(void)

void FUN_1479217bc(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479217e8 FUN_1479217e8 body=143 status=ok
// SIG undefined FUN_1479217e8(void)

void FUN_1479217e8(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_28);
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



// FUNCTION 14792188c FUN_14792188c body=209 status=ok
// SIG undefined FUN_14792188c(void)

void FUN_14792188c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 local_4b;
  undefined5 uStack_48;
  undefined8 uStack_43;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_48 = 0;
  uStack_43 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_4b = 0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  lVar3 = param_2[2];
  fVar6 = 0.0;
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x50) != 0)) {
    fVar6 = (float)FUN_144b1ffa4(lVar3 + 0x60,0);
    fVar5 = (float)FUN_144b1ffa4(lVar3,0);
    fVar6 = fVar6 - fVar5;
  }
  local_78 = &local_68;
  (**(code **)(*param_1 + 0x2b0))(param_1,*param_2,param_2[1],fVar6);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792195e FUN_14792195e body=133 status=ok
// SIG undefined FUN_14792195e(void)

void FUN_14792195e(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 local_2b;
  undefined5 uStack_28;
  undefined8 uStack_23;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &local_48;
  uStack_28 = 0;
  uStack_23 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2b = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x2c0))(0,*param_2,param_2[1],param_3);
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479219e4 FUN_1479219e4 body=168 status=ok
// SIG undefined FUN_1479219e4(void)

void FUN_1479219e4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_49;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 local_2b;
  undefined5 uStack_28;
  undefined8 uStack_23;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_28 = 0;
  uStack_23 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2b = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  if (*(char *)((longlong)param_2 + 0x1c) == '\x01') {
    local_49 = 1;
    FUN_140166ef2(&local_48);
  }
  local_58 = 0;
  (**(code **)(*param_1 + 0x2d0))(param_1,*param_2,param_2[1],&local_48);
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147921a8e FUN_147921a8e body=146 status=ok
// SIG undefined FUN_147921a8e(void)

undefined8 * FUN_147921a8e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  if ((undefined8 *)&local_30 == param_2) {
    if (CONCAT44(uStack_2c,local_30) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_30;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_2c;
    *(undefined4 *)(param_2 + 1) = uStack_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
  }
  FUN_1448097c4(param_2,L"AnimNotifyState_",&DAT_149dfb77a,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147921b2c FUN_147921b2c body=68 status=ok
// SIG undefined FUN_147921b2c(void)

void FUN_147921b2c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147921b78 FUN_147921b78 body=370 status=ok
// SIG undefined FUN_147921b78(void)

void FUN_147921b78(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined8 uStack_33;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_38 = 0;
  uStack_33 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar5 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147921cec(puVar5,local_60,local_68);
  plVar3 = plStack_50;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147921cec FUN_147921cec body=222 status=ok
// SIG undefined FUN_147921cec(void)

bool FUN_147921cec(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_2 != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) &&
     (lVar3 = param_1[1], (longlong)(int)lVar3 != 0)) {
    lVar2 = *param_1;
    lVar7 = 0;
    do {
      plVar5 = *(longlong **)(lVar2 + lVar7);
      (**(code **)(*plVar5 + 8))(plVar5,&local_40);
      if (local_40 == DAT_14cacb0d0) {
        lVar3 = *(longlong *)(lVar2 + lVar7);
        if (lVar3 != 0) {
          puVar6 = (undefined4 *)(lVar3 + 8);
          if (*(undefined4 **)(lVar3 + 0x28) != (undefined4 *)0x0) {
            puVar6 = *(undefined4 **)(lVar3 + 0x28);
          }
          if ((longlong)*(int *)(lVar3 + 0x30) != 0) {
            puVar1 = puVar6 + (longlong)*(int *)(lVar3 + 0x30) * 2;
            goto LAB_147921da3;
          }
        }
        break;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  bVar8 = false;
  goto LAB_147921d59;
  while (puVar6 = puVar6 + 2, puVar6 != puVar1) {
LAB_147921da3:
    uVar4 = FUN_1478f80ee(param_2,*puVar6);
    plVar5 = (longlong *)FUN_1479027c6(uVar4,puVar6[1]);
    bVar8 = *plVar5 == param_3;
    if (bVar8) break;
  }
LAB_147921d59:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar8;
}



// FUNCTION 147921dd2 FUN_147921dd2 body=452 status=ok
// SIG undefined FUN_147921dd2(void)

void FUN_147921dd2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined8 uStack_33;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_38 = 0;
  uStack_33 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar5 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
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
  local_70 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147921f98(puVar5,local_60,local_68,local_70);
  plVar3 = plStack_50;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147921f98 FUN_147921f98 body=180 status=ok
// SIG undefined FUN_147921f98(void)

undefined8 FUN_147921f98(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_38 = 0;
    FUN_1478f826c(param_2,param_3,&local_2c,&local_38);
    if (local_38 != 0 && local_2c != -1) {
      uVar3 = 0xffffffff;
      if (0 < (longlong)*(int *)(local_38 + 0x18)) {
        plVar4 = *(longlong **)(local_38 + 0x10);
        uVar2 = 0;
        do {
          if (*plVar4 == param_4) {
            uVar3 = uVar2 & 0xffffffff;
            break;
          }
          uVar2 = uVar2 + 1;
          plVar4 = plVar4 + 0xf;
        } while ((longlong)*(int *)(local_38 + 0x18) != uVar2);
      }
      uVar1 = FUN_1479222d8(param_1,local_2c,uVar3);
      goto LAB_147921ff7;
    }
  }
  uVar1 = 0;
LAB_147921ff7:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147922054 FUN_147922054 body=370 status=ok
// SIG undefined FUN_147922054(void)

void FUN_147922054(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined8 uStack_33;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_38 = 0;
  uStack_33 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar5 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1479221c8(puVar5,local_60,local_68);
  plVar3 = plStack_50;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479221c8 FUN_1479221c8 body=108 status=ok
// SIG undefined FUN_1479221c8(void)

undefined8 FUN_1479221c8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_1478f826c(param_2,param_3,&local_1c);
    if (local_1c != -1) {
      uVar1 = FUN_147922238(param_1);
      goto LAB_14792220d;
    }
  }
  uVar1 = 0;
LAB_14792220d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147922238 FUN_147922238 body=158 status=ok
// SIG undefined FUN_147922238(void)

undefined8 FUN_147922238(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (lVar3 = param_1[1], (longlong)(int)lVar3 != 0)) {
    lVar1 = *param_1;
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      (**(code **)(*plVar2 + 8))(plVar2,&local_38);
      if (local_38 == DAT_14cacb0d0) {
        lVar3 = *(longlong *)(lVar1 + lVar6);
        if (lVar3 != 0) {
          cVar4 = FUN_1478d08a6(lVar3,param_2);
          uVar5 = 1;
          if (cVar4 != '\0') goto LAB_14792229a;
        }
        break;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  uVar5 = 0;
LAB_14792229a:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1479222d8 FUN_1479222d8 body=168 status=ok
// SIG undefined FUN_1479222d8(void)

undefined8 FUN_1479222d8(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (lVar3 = param_1[1], (longlong)(int)lVar3 != 0)) {
    lVar1 = *param_1;
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      (**(code **)(*plVar2 + 8))(plVar2,&local_40);
      if (local_40 == DAT_14cacb0d0) {
        lVar3 = *(longlong *)(lVar1 + lVar6);
        if (lVar3 != 0) {
          cVar4 = FUN_1478d08e4(lVar3,param_2,param_3);
          uVar5 = 1;
          if (cVar4 != '\0') goto LAB_14792233f;
        }
        break;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  uVar5 = 0;
LAB_14792233f:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147922386 FUN_147922386 body=58 status=ok
// SIG undefined FUN_147922386(void)

void FUN_147922386(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_14792188c();
  if ((*param_2 != 0) && (lVar1 = *(longlong *)(*param_2 + 0xae8), lVar1 != 0)) {
    lVar1 = FUN_1478f7d4e(lVar1,(int)param_2[3]);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x1b4) = *(int *)(lVar1 + 0x1b4) + 1;
    }
  }
  return;
}



// FUNCTION 1479223c0 FUN_1479223c0 body=58 status=ok
// SIG undefined FUN_1479223c0(void)

void FUN_1479223c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_1479219e4();
  if ((*param_2 != 0) && (lVar1 = *(longlong *)(*param_2 + 0xae8), lVar1 != 0)) {
    lVar1 = FUN_1478f7d4e(lVar1,(int)param_2[3]);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x1b4) = *(int *)(lVar1 + 0x1b4) + -1;
    }
  }
  return;
}



// FUNCTION 147922406 FUN_147922406 body=268 status=ok
// SIG undefined FUN_147922406(void)

void FUN_147922406(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_a0;
  byte local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x2b8))();
  if (param_1[6] != 0) {
    cVar1 = (**(code **)(*param_2 + 0x4c8))(param_2,param_1[7]);
    if (cVar1 == '\0') {
      iVar2 = FUN_144909502(param_2,param_1[7]);
      if (iVar2 == -1) goto LAB_1479224ce;
    }
    local_98 = *(byte *)(param_1 + 0xe) ^ 1;
    local_48 = param_1[0xd];
    local_a8 = &local_58;
    local_58 = param_1[0xb];
    lStack_50 = param_1[0xc];
    local_78 = (undefined4)param_1[8];
    uStack_74 = *(undefined4 *)((longlong)param_1 + 0x44);
    uStack_70 = (undefined4)param_1[9];
    uStack_6c = *(undefined4 *)((longlong)param_1 + 0x4c);
    local_68 = param_1[10];
    local_88 = 1;
    local_90 = 0;
    local_a0 = 0;
    FUN_147ac7290(param_1[6],param_2,param_1[7]);
  }
LAB_1479224ce:
  local_a8 = (longlong *)param_5;
  FUN_140bbc088(param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147922516 FUN_147922516 body=62 status=ok
// SIG undefined FUN_147922516(void)

void FUN_147922516(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x2c8))();
  FUN_1405013be(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147922556 FUN_147922556 body=357 status=ok
// SIG undefined FUN_147922556(void)

void FUN_147922556(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_3;
  local_60 = param_4;
  (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_3,param_5);
  local_58 = 0;
  uStack_50 = 0;
  local_70 = param_2;
  FUN_1407329d4(param_2,0,&local_58);
  lVar4 = local_58;
  lVar7 = (longlong)(int)uStack_50;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + lVar6);
      if (plVar1 != (longlong *)0x0) {
        lVar5 = FUN_140791f3e();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          lVar5 = plVar1[0x25];
          lVar2 = param_1[6];
          lVar3 = param_1[7];
          if ((lVar2 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar2);
          }
          if (((lVar5 == lVar3) && (plVar1[0xcd] == lVar2)) &&
             ((*(byte *)(plVar1 + 0xd2) & 0x10) == 0)) {
            if ((char)param_1[0xe] == '\x01') {
              (**(code **)(*plVar1 + 0x420))(plVar1,0);
            }
            else {
              FUN_1435c33e2(plVar1);
            }
            break;
          }
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  local_78 = param_5;
  FUN_140bc0c12(param_1,local_70,local_68,local_60);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479226bc FUN_1479226bc body=104 status=ok
// SIG undefined FUN_1479226bc(void)

undefined8 FUN_1479226bc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  FUN_147921a8e(param_1,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147922730 FUN_147922730 body=108 status=ok
// SIG undefined FUN_147922730(void)

undefined8 FUN_147922730(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_30 = param_2;
  local_28 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cacc588);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792279e FUN_14792279e body=116 status=ok
// SIG undefined FUN_14792279e(void)

void FUN_14792279e(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0x3f800000;
  if ((*(longlong *)(param_2 + 0xae8) == 0 || *(longlong *)(param_1 + 0x4c) == 0) ||
     (cVar1 = FUN_1448f9132(*(longlong *)(param_2 + 0xae8),*(longlong *)(param_1 + 0x4c),&local_c),
     uVar2 = local_c, cVar1 == '\0')) {
    uVar2 = 0x3f800000;
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar2);
  }
  return;
}



// FUNCTION 147922815 FUN_147922815 body=175 status=ok
// SIG undefined FUN_147922815(void)

undefined8 FUN_147922815(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140791f3e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479228c8 FUN_1479228c8 body=507 status=ok
// SIG undefined FUN_1479228c8(void)

void FUN_1479228c8(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_118;
  undefined1 local_110 [64];
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0 [8];
  longlong *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  (**(code **)(*param_1 + 0x2c8))();
  lVar3 = *(longlong *)(param_2 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_2);
  }
  iVar2 = FUN_14490d72a(lVar3);
  if (iVar2 != 1) {
    local_80 = (longlong *)0x0;
    local_78 = 0x800000000;
    local_118 = param_3;
    FUN_1433e4f20(param_2,local_c0);
    uVar8 = (**(code **)(*param_1 + 0x310))(param_1,param_2);
    plVar6 = local_80;
    if (local_80 == (longlong *)0x0) {
      plVar6 = local_c0;
    }
    if ((longlong)(int)local_78 != 0) {
      plVar4 = plVar6 + (int)local_78;
      do {
        plVar1 = (longlong *)*plVar6;
        if ((*(byte *)((longlong)plVar1 + 0x9e) & 0x10) != 0) {
          local_d0 = (undefined1 *)0x0;
          local_c8 = 0x800000000;
          (**(code **)(*plVar1 + 0xb70))(plVar1,local_110,param_1,0);
          puVar7 = local_d0;
          if (local_d0 == (undefined1 *)0x0) {
            puVar7 = local_110;
          }
          lVar3 = (longlong)(int)local_c8;
          if (lVar3 != 0) {
            lVar5 = 0;
            do {
              local_128 = CONCAT44(local_128._4_4_,uVar8);
              (**(code **)(**(longlong **)(puVar7 + lVar5) + 0x208))
                        (*(longlong **)(puVar7 + lVar5),param_1[7],param_1[8]);
              lVar5 = lVar5 + 8;
            } while (lVar3 * 8 != lVar5);
          }
          if (local_d0 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar4);
    }
    local_128 = param_5;
    FUN_1405013be(param_1,param_2,local_118,param_4);
    if (local_80 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147922ac6 FUN_147922ac6 body=460 status=ok
// SIG undefined FUN_147922ac6(void)

void FUN_147922ac6(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [64];
  undefined1 *local_a8;
  undefined8 local_a0;
  longlong local_98 [8];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  (**(code **)(*param_1 + 0x2d8))();
  lVar3 = *(longlong *)(param_2 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_2);
  }
  iVar2 = FUN_14490d72a(lVar3);
  if (iVar2 != 1) {
    local_58 = (longlong *)0x0;
    local_50 = 0x800000000;
    local_f8 = param_3;
    local_f0 = param_4;
    FUN_1433e4f20(param_2,local_98);
    plVar7 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar7 = local_98;
    }
    if ((longlong)(int)local_50 != 0) {
      plVar4 = plVar7 + (int)local_50;
      do {
        plVar1 = (longlong *)*plVar7;
        if ((*(byte *)((longlong)plVar1 + 0x9e) & 0x10) != 0) {
          local_a8 = (undefined1 *)0x0;
          local_a0 = 0x800000000;
          (**(code **)(*plVar1 + 0xb70))(plVar1,local_e8,param_1,0);
          puVar5 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar5 = local_e8;
          }
          lVar3 = (longlong)(int)local_a0;
          if (lVar3 != 0) {
            lVar6 = 0;
            do {
              (**(code **)(**(longlong **)(puVar5 + lVar6) + 0x200))();
              lVar6 = lVar6 + 8;
            } while (lVar3 * 8 != lVar6);
          }
          if (local_a8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar4);
    }
    local_108 = param_5;
    FUN_140bc0c12(param_1,param_2,local_f8,local_f0);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147922c9a FUN_147922c9a body=30 status=ok
// SIG undefined FUN_147922c9a(void)

void FUN_147922c9a(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2b8))();
  FUN_147a0b752(param_2);
  return;
}



// FUNCTION 147922cb8 FUN_147922cb8 body=32 status=ok
// SIG undefined FUN_147922cb8(void)

undefined8 FUN_147922cb8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Pause Clothing Sim");
  return param_2;
}



// FUNCTION 147922ce4 FUN_147922ce4 body=96 status=ok
// SIG undefined FUN_147922ce4(void)

void FUN_147922ce4(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446e0b6e();
  FUN_144a7484c(param_1 + 0x58,&local_38);
  *(undefined4 *)(param_1 + 0xa0) = local_28;
  *(undefined4 *)(param_1 + 0xa4) = uStack_24;
  *(undefined4 *)(param_1 + 0xa8) = uStack_20;
  *(undefined4 *)(param_1 + 0xac) = uStack_1c;
  *(undefined4 *)(param_1 + 0x90) = local_38;
  *(undefined4 *)(param_1 + 0x94) = uStack_34;
  *(undefined4 *)(param_1 + 0x98) = uStack_30;
  *(undefined4 *)(param_1 + 0x9c) = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147922d48 FUN_147922d48 body=54 status=ok
// SIG undefined FUN_147922d48(void)

void FUN_147922d48(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x2b8))();
                    /* WARNING: Could not recover jumptable at 0x000147922d7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_3);
  return;
}



// FUNCTION 147922d7e FUN_147922d7e body=104 status=ok
// SIG undefined FUN_147922d7e(void)

undefined8 FUN_147922d7e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  switchD_143c3d4dc::caseD_5b(param_1,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147922df4 FUN_147922df4 body=104 status=ok
// SIG undefined FUN_147922df4(void)

undefined8 FUN_147922df4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  switchD_143c3d4dc::caseD_5b(param_1,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147922e64 FUN_147922e64 body=30 status=ok
// SIG undefined FUN_147922e64(void)

void FUN_147922e64(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2b8))();
  FUN_147d1c4c8(param_2);
  return;
}



// FUNCTION 147922e82 FUN_147922e82 body=32 status=ok
// SIG undefined FUN_147922e82(void)

undefined8 FUN_147922e82(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Reset Clothing Sim");
  return param_2;
}



// FUNCTION 147922ea8 FUN_147922ea8 body=32 status=ok
// SIG undefined FUN_147922ea8(void)

void FUN_147922ea8(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2b8))();
  FUN_140090446(param_2,2);
  return;
}



// FUNCTION 147922ec8 FUN_147922ec8 body=32 status=ok
// SIG undefined FUN_147922ec8(void)

undefined8 FUN_147922ec8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Reset Dynamics");
  return param_2;
}



// FUNCTION 147922eee FUN_147922eee body=30 status=ok
// SIG undefined FUN_147922eee(void)

void FUN_147922eee(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2b8))();
  FUN_147a08eec(param_2);
  return;
}



// FUNCTION 147922f0c FUN_147922f0c body=32 status=ok
// SIG undefined FUN_147922f0c(void)

undefined8 FUN_147922f0c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Resume Clothing Sim");
  return param_2;
}



// FUNCTION 147922f2c FUN_147922f2c body=250 status=ok
// SIG undefined FUN_147922f2c(void)

undefined8 * FUN_147922f2c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1405b70fe(param_1,iVar2,0);
    memcpy((void *)*param_1,pvVar3,(longlong)iVar2 * 0x18);
  }
  puVar1 = param_1 + 2;
  param_1[2] = 0;
  iVar2 = *(int *)(param_3 + 1);
  pvVar3 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_146287c4e(puVar1,iVar2,0);
    memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 0xc);
  }
  uVar4 = FUN_147923028(param_1,puVar1);
  *(undefined4 *)(param_1 + 4) = uVar4;
  FUN_147923128(&local_40,param_1,puVar1);
  param_1[7] = local_30;
  *(undefined4 *)(param_1 + 5) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_3c;
  *(undefined4 *)(param_1 + 6) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_34;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147923028 FUN_147923028 body=256 status=ok
// SIG undefined FUN_147923028(void)

undefined8 FUN_147923028(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  undefined4 uVar14;
  
  if ((longlong)(int)param_2[1] == 0) {
    fVar12 = 0.0;
    uVar14 = 0;
  }
  else {
    lVar6 = *param_2;
    lVar7 = *param_1;
    fVar12 = 0.0;
    lVar8 = 0;
    do {
      lVar9 = (longlong)*(int *)(lVar6 + 8 + lVar8);
      lVar10 = (longlong)*(int *)(lVar6 + 4 + lVar8);
      lVar11 = (longlong)*(int *)(lVar6 + lVar8);
      dVar13 = *(double *)(lVar7 + 8 + lVar11 * 0x18);
      dVar1 = *(double *)(lVar7 + 0x10 + lVar11 * 0x18);
      dVar2 = *(double *)(lVar7 + 8 + lVar10 * 0x18);
      dVar3 = *(double *)(lVar7 + 0x10 + lVar10 * 0x18);
      dVar4 = *(double *)(lVar7 + 8 + lVar9 * 0x18);
      dVar5 = *(double *)(lVar7 + 0x10 + lVar9 * 0x18);
      dVar13 = (double)fVar12 +
               (dVar13 * dVar3 - dVar2 * dVar1) * *(double *)(lVar7 + lVar9 * 0x18) +
               ((dVar2 * dVar5 - dVar4 * dVar3) * *(double *)(lVar7 + lVar11 * 0x18) -
               (dVar5 * dVar13 - dVar4 * dVar1) * *(double *)(lVar7 + lVar10 * 0x18));
      uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
      fVar12 = (float)dVar13;
      lVar8 = lVar8 + 0xc;
    } while ((longlong)(int)param_2[1] * 0xc != lVar8);
  }
  return CONCAT44(uVar14,fVar12 / 6.0);
}



// FUNCTION 147923128 FUN_147923128 body=523 status=ok
// SIG undefined FUN_147923128(void)

void FUN_147923128(double *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  int *piVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  
  if ((longlong)*(int *)(param_3 + 1) == 0) {
    dVar14 = 0.0;
    dVar16 = 0.0;
    dVar15 = 0.0;
    dVar18 = 0.0;
  }
  else {
    piVar12 = (int *)*param_3;
    piVar1 = piVar12 + (longlong)*(int *)(param_3 + 1) * 3;
    lVar10 = *param_2;
    dVar15 = 0.0;
    fVar17 = 0.0;
    dVar16 = 0.0;
    dVar14 = 0.0;
    do {
      lVar13 = (longlong)*piVar12;
      dVar18 = *(double *)(lVar10 + lVar13 * 0x18);
      dVar2 = *(double *)(lVar10 + 8 + lVar13 * 0x18);
      dVar3 = *(double *)(lVar10 + 0x10 + lVar13 * 0x18);
      lVar13 = (longlong)piVar12[1];
      dVar4 = *(double *)(lVar10 + lVar13 * 0x18);
      dVar5 = *(double *)(lVar10 + 8 + lVar13 * 0x18);
      dVar6 = *(double *)(lVar10 + 0x10 + lVar13 * 0x18);
      lVar13 = (longlong)piVar12[2];
      dVar7 = *(double *)(lVar10 + lVar13 * 0x18);
      dVar8 = *(double *)(lVar10 + 8 + lVar13 * 0x18);
      dVar9 = *(double *)(lVar10 + 0x10 + lVar13 * 0x18);
      fVar19 = (float)((dVar2 * dVar6 - dVar5 * dVar3) * dVar7 +
                      ((dVar5 * dVar9 - dVar8 * dVar6) * dVar18 -
                      (dVar2 * dVar9 - dVar8 * dVar3) * dVar4));
      dVar11 = (double)fVar19;
      dVar14 = dVar14 + (dVar3 + dVar6 + dVar9) * dVar11;
      dVar16 = dVar16 + (dVar2 + dVar5 + dVar8) * dVar11;
      dVar15 = dVar15 + (dVar18 + dVar4 + dVar7) * dVar11;
      fVar17 = fVar17 + fVar19;
      piVar12 = piVar12 + 3;
    } while (piVar12 != piVar1);
    dVar18 = (double)(fVar17 * 4.0);
  }
  dVar18 = 1.0 / dVar18;
  *param_1 = dVar15 * dVar18;
  param_1[1] = dVar16 * dVar18;
  param_1[2] = dVar18 * dVar14;
  return;
}



// FUNCTION 147923334 FUN_147923334 body=1584 status=ok
// SIG undefined FUN_147923334(void)

undefined8 FUN_147923334(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar1 = param_2[2];
  dVar4 = 0.5;
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar10 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
  uVar9 = -(ulonglong)(9.99999993922529e-09 < dVar10);
  uVar9 = ~uVar9 & 0x3fe0000000000000 | (ulonglong)(dVar2 * 0.5) & uVar9;
  dVar2 = dVar4;
  if (9.99999993922529e-09 < dVar10) {
    dVar4 = dVar1 * 0.5;
    dVar2 = dVar3 * 0.5;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1447a8aa0(&local_98,8);
  FUN_146ea3024(&local_a8,0xc);
  dVar1 = -dVar2;
  uVar5 = uVar9 ^ 0x8000000000000000;
  lVar8 = (longlong)(int)(uint)uStack_90;
  uVar6 = (uint)uStack_90 + 1;
  if (uStack_90._4_4_ < uVar6) {
    uVar7 = uStack_90 & 0xffffffff;
    uStack_90._0_4_ = uVar6;
    FUN_1403e3958(&local_98,uVar7);
    uVar6 = (uint)uStack_90;
  }
  uStack_90._0_4_ = uVar6;
  uVar6 = (uint)uStack_90;
  *(ulonglong *)(local_98 + lVar8 * 0x18) = uVar5;
  *(double *)(local_98 + 8 + lVar8 * 0x18) = dVar1;
  *(double *)(local_98 + 0x10 + lVar8 * 0x18) = dVar4;
  lVar8 = (longlong)(int)(uint)uStack_90;
  uStack_90._0_4_ = (uint)uStack_90 + 1;
  if (uStack_90._4_4_ < (uint)uStack_90) {
    FUN_1403e3958(&local_98,uVar6);
  }
  uVar6 = (uint)uStack_90;
  *(ulonglong *)(local_98 + lVar8 * 0x18) = uVar9;
  *(double *)(local_98 + 8 + lVar8 * 0x18) = dVar1;
  *(double *)(local_98 + 0x10 + lVar8 * 0x18) = dVar4;
  dVar3 = -dVar4;
  lVar8 = (longlong)(int)(uint)uStack_90;
  uStack_90._0_4_ = (uint)uStack_90 + 1;
  if (uStack_90._4_4_ < (uint)uStack_90) {
    FUN_1403e3958(&local_98,uVar6);
  }
  uVar6 = (uint)uStack_90;
  *(ulonglong *)(local_98 + lVar8 * 0x18) = uVar9;
  *(double *)(local_98 + 8 + lVar8 * 0x18) = dVar1;
  *(double *)(local_98 + 0x10 + lVar8 * 0x18) = dVar3;
  lVar8 = (longlong)(int)(uint)uStack_90;
  uStack_90._0_4_ = (uint)uStack_90 + 1;
  if (uStack_90._4_4_ < (uint)uStack_90) {
    FUN_1403e3958(&local_98,uVar6);
  }
  uVar6 = (uint)uStack_90;
  *(ulonglong *)(local_98 + lVar8 * 0x18) = uVar5;
  *(double *)(local_98 + 8 + lVar8 * 0x18) = dVar1;
  *(double *)(local_98 + 0x10 + lVar8 * 0x18) = dVar3;
  lVar8 = (longlong)(int)(uint)uStack_90;
  uStack_90._0_4_ = (uint)uStack_90 + 1;
  if (uStack_90._4_4_ < (uint)uStack_90) {
    FUN_1403e3958(&local_98,uVar6);
  }
  uVar6 = (uint)uStack_90;
  *(ulonglong *)(local_98 + lVar8 * 0x18) = uVar9;
  *(double *)(local_98 + 8 + lVar8 * 0x18) = dVar2;
  *(double *)(local_98 + 0x10 + lVar8 * 0x18) = dVar4;
  lVar8 = (longlong)(int)(uint)uStack_90;
  uStack_90._0_4_ = (uint)uStack_90 + 1;
  if (uStack_90._4_4_ < (uint)uStack_90) {
    FUN_1403e3958(&local_98,uVar6);
  }
  uVar6 = (uint)uStack_90;
  *(ulonglong *)(local_98 + lVar8 * 0x18) = uVar5;
  *(double *)(local_98 + 8 + lVar8 * 0x18) = dVar2;
  *(double *)(local_98 + 0x10 + lVar8 * 0x18) = dVar4;
  lVar8 = (longlong)(int)(uint)uStack_90;
  uStack_90._0_4_ = (uint)uStack_90 + 1;
  if (uStack_90._4_4_ < (uint)uStack_90) {
    FUN_1403e3958(&local_98,uVar6);
  }
  uVar6 = (uint)uStack_90;
  *(ulonglong *)(local_98 + lVar8 * 0x18) = uVar5;
  *(double *)(local_98 + 8 + lVar8 * 0x18) = dVar2;
  *(double *)(local_98 + 0x10 + lVar8 * 0x18) = dVar3;
  lVar8 = (longlong)(int)(uint)uStack_90;
  uStack_90._0_4_ = (uint)uStack_90 + 1;
  if (uStack_90._4_4_ < (uint)uStack_90) {
    FUN_1403e3958(&local_98,uVar6);
  }
  *(ulonglong *)(local_98 + lVar8 * 0x18) = uVar9;
  *(double *)(local_98 + 8 + lVar8 * 0x18) = dVar2;
  *(double *)(local_98 + 0x10 + lVar8 * 0x18) = dVar3;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uVar6 = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < uVar6) {
    uVar9 = uStack_a0 & 0xffffffff;
    uStack_a0._0_4_ = uVar6;
    FUN_146ddc768(&local_a8,uVar9);
    uVar6 = (uint)uStack_a0;
  }
  uStack_a0._0_4_ = uVar6;
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x100000000;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 3;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x200000001;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 3;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x500000004;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 7;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x600000005;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 7;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x500000000;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 1;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x400000005;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 1;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x400000001;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 2;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x400000002;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 7;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x300000000;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 5;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x300000005;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 6;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  uVar6 = (uint)uStack_a0;
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x200000003;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 6;
  lVar8 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_146ddc768(&local_a8,uVar6);
  }
  *(undefined8 *)(local_a8 + lVar8 * 0xc) = 0x700000002;
  *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = 6;
  FUN_147922f2c(param_1,&local_98,&local_a8);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147923966 FUN_147923966 body=1041 status=ok
// SIG undefined FUN_147923966(void)

double * FUN_147923966(double *param_1,undefined8 *param_2,double *param_3)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  undefined1 auStack_168 [8];
  double adStack_160 [36];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  param_1[2] = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = dVar3;
  dVar3 = (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_1[6] = (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  param_1[7] = dVar3;
  dVar3 = DAT_14c8463d8;
  param_1[4] = DAT_14c8463d0;
  param_1[5] = dVar3;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = (double)&DAT_3f8000003f800000;
  pdVar12 = (double *)&DAT_14c846400;
  pdVar13 = param_1 + 0x10;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar13 = *pdVar12;
    pdVar12 = pdVar12 + 1;
    pdVar13 = pdVar13 + 1;
  }
  pdVar12 = (double *)&DAT_14c846400;
  pdVar13 = param_1 + 0x20;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar13 = *pdVar12;
    pdVar12 = pdVar12 + 1;
    pdVar13 = pdVar13 + 1;
  }
  dVar3 = (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_1[0x36] = (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  param_1[0x37] = dVar3;
  dVar3 = DAT_14c8463d8;
  param_1[0x34] = DAT_14c8463d0;
  param_1[0x35] = dVar3;
  dVar3 = DAT_14c8463d8;
  param_1[0x3c] = DAT_14c8463d0;
  param_1[0x3d] = dVar3;
  dVar3 = (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_1[0x3e] = (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  param_1[0x3f] = dVar3;
  dVar3 = DAT_14c8463d8;
  param_1[0x44] = DAT_14c8463d0;
  param_1[0x45] = dVar3;
  dVar3 = (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_1[0x46] = (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  param_1[0x47] = dVar3;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x53] = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  param_1[0x51] = DAT_14c8464e0;
  param_1[0x52] = dVar3;
  param_1[0x56] = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  param_1[0x54] = DAT_14c8464e0;
  param_1[0x55] = dVar3;
  dVar3 = DAT_14c8463d8;
  param_1[0x58] = DAT_14c8463d0;
  param_1[0x59] = dVar3;
  uVar6 = DAT_14c8463e8._4_4_;
  uVar5 = (undefined4)DAT_14c8463e8;
  uVar4 = DAT_14c8463e0._4_4_;
  *(undefined4 *)(param_1 + 0x5a) = (undefined4)DAT_14c8463e0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = uVar4;
  *(undefined4 *)(param_1 + 0x5b) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uVar6;
  pdVar12 = param_1 + 0x66;
  param_1[0x66] = 0.0;
  param_1[0x5c] = 0.0;
  param_1[0x5d] = 0.0;
  param_1[0x5e] = 0.0;
  param_1[0x5f] = 0.0;
  param_1[0x60] = 0.0;
  param_1[0x61] = 0.0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 0x67) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  }
  else {
    FUN_1474f84a6(pdVar12,iVar1,0);
    FUN_1474f8508(*pdVar12,uVar2,iVar1);
  }
  param_1[0x42] = param_3[2];
  dVar3 = param_3[1];
  param_1[0x40] = *param_3;
  param_1[0x41] = dVar3;
  param_1[0x3a] = param_3[2];
  dVar3 = param_3[1];
  param_1[0x38] = *param_3;
  param_1[0x39] = dVar3;
  param_1[0x32] = param_3[2];
  dVar3 = param_3[1];
  param_1[0x30] = *param_3;
  param_1[0x31] = dVar3;
  uVar4 = *(undefined4 *)((longlong)param_3 + 4);
  uVar5 = *(undefined4 *)(param_3 + 1);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar4;
  *(undefined4 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  param_1[2] = param_3[2];
  FUN_147923d78(adStack_160 + 0x13,pdVar12);
  param_1[100] = adStack_160[0x15];
  param_1[0x62] = adStack_160[0x13];
  param_1[99] = adStack_160[0x14];
  *param_1 = param_1[0x62] + *param_1;
  param_1[1] = param_1[99] + param_1[1];
  param_1[2] = param_1[100] + param_1[2];
  uVar4 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)((longlong)param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 1);
  uVar7 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x204) = uVar5;
  *(undefined4 *)(param_1 + 0x41) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x20c) = uVar7;
  dVar3 = param_1[2];
  param_1[0x42] = dVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar5;
  *(undefined4 *)(param_1 + 0x39) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar7;
  param_1[0x3a] = dVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar5;
  *(undefined4 *)(param_1 + 0x31) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar7;
  param_1[0x32] = dVar3;
  if ((longlong)*(int *)(param_1 + 0x67) != 0) {
    puVar10 = (undefined8 *)param_1[0x66];
    puVar8 = puVar10 + (longlong)*(int *)(param_1 + 0x67) * 8;
    do {
      if ((longlong)*(int *)(puVar10 + 1) != 0) {
        pdVar11 = (double *)*puVar10;
        pdVar13 = pdVar11 + (longlong)*(int *)(puVar10 + 1) * 3;
        do {
          *pdVar11 = *pdVar11 - param_1[0x62];
          pdVar11[1] = pdVar11[1] - param_1[99];
          pdVar11[2] = pdVar11[2] - param_1[100];
          pdVar11 = pdVar11 + 3;
        } while (pdVar11 != pdVar13);
      }
      puVar10 = puVar10 + 8;
    } while (puVar10 != puVar8);
  }
  FUN_147923ed2(adStack_160 + 0x13,pdVar12);
  *(float *)((longlong)param_1 + 0x74) = 1.0 / *(float *)(param_1 + 0xe);
  FUN_14007522e(adStack_160 + 3,adStack_160 + 0x13);
  pdVar12 = adStack_160 + 3;
  pdVar13 = param_1 + 0x10;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar13 = *pdVar12;
    pdVar12 = pdVar12 + 1;
    pdVar13 = pdVar13 + 1;
  }
  dVar3 = (double)*(float *)((longlong)param_1 + 0x74);
  lVar9 = 0x18;
  do {
    *(double *)((longlong)adStack_160 + lVar9) =
         *(double *)((longlong)param_1 + lVar9 + 0x68) * dVar3;
    *(double *)((longlong)adStack_160 + lVar9 + 8) =
         *(double *)((longlong)param_1 + lVar9 + 0x70) * dVar3;
    *(double *)((longlong)adStack_160 + lVar9 + 0x10) =
         *(double *)((longlong)param_1 + lVar9 + 0x78) * dVar3;
    *(double *)((longlong)adStack_160 + lVar9 + 0x18) =
         *(double *)((longlong)param_1 + lVar9 + 0x80) * dVar3;
    lVar9 = lVar9 + 0x20;
  } while (lVar9 != 0x98);
  pdVar12 = adStack_160 + 3;
  pdVar13 = param_1 + 0x20;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar13 = *pdVar12;
    pdVar12 = pdVar12 + 1;
    pdVar13 = pdVar13 + 1;
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147923d78 FUN_147923d78 body=345 status=ok
// SIG undefined FUN_147923d78(void)

double * FUN_147923d78(double *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if ((longlong)(int)param_2[1] == 0) {
    dVar1 = 0.0;
    dVar3 = 0.0;
    dVar2 = 0.0;
    dVar7 = 0.0;
  }
  else {
    lVar4 = *param_2;
    lVar5 = (longlong)(int)param_2[1] * 0x40 + lVar4;
    dVar2 = 0.0;
    fVar8 = 0.0;
    dVar3 = 0.0;
    dVar1 = 0.0;
    do {
      FUN_147923128(&local_88,lVar4,lVar4 + 0x10);
      fVar6 = (float)FUN_147923028(lVar4,lVar4 + 0x10);
      fVar8 = fVar8 + fVar6;
      dVar7 = (double)fVar6;
      dVar1 = dVar1 + local_78 * dVar7;
      dVar3 = dVar3 + local_80 * dVar7;
      dVar2 = dVar2 + dVar7 * local_88;
      *param_1 = dVar2;
      param_1[1] = dVar3;
      param_1[2] = dVar1;
      lVar4 = lVar4 + 0x40;
    } while (lVar4 != lVar5);
    dVar7 = (double)fVar8;
  }
  dVar7 = 1.0 / dVar7;
  *param_1 = dVar2 * dVar7;
  param_1[1] = dVar3 * dVar7;
  param_1[2] = dVar7 * dVar1;
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147923ed2 FUN_147923ed2 body=615 status=ok
// SIG undefined FUN_147923ed2(void)

double * FUN_147923ed2(double *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_208 [8];
  double adStack_200 [52];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  if ((longlong)(int)param_2[1] == 0) {
    fVar9 = 0.0;
  }
  else {
    lVar7 = *param_2;
    lVar6 = (longlong)(int)param_2[1] * 0x40 + lVar7;
    fVar9 = 0.0;
    do {
      fVar8 = (float)FUN_147923028(lVar7,lVar7 + 0x10);
      FUN_147924fdc(adStack_200 + 3,lVar7,lVar7 + 0x10);
      dVar2 = (double)fVar8;
      lVar3 = 0x18;
      do {
        *(double *)((longlong)adStack_200 + lVar3 + 0x80) =
             *(double *)((longlong)adStack_200 + lVar3) * dVar2;
        *(double *)((longlong)adStack_200 + lVar3 + 0x88) =
             *(double *)((longlong)adStack_200 + lVar3 + 8) * dVar2;
        *(double *)((longlong)adStack_200 + lVar3 + 0x90) =
             *(double *)((longlong)adStack_200 + lVar3 + 0x10) * dVar2;
        *(double *)((longlong)adStack_200 + lVar3 + 0x98) =
             *(double *)((longlong)adStack_200 + lVar3 + 0x18) * dVar2;
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != 0x98);
      lVar3 = 0x18;
      do {
        dVar2 = *(double *)((longlong)param_1 + lVar3 + -0x10);
        *(double *)((longlong)adStack_200 + lVar3 + 0x100) =
             *(double *)((longlong)param_1 + lVar3 + -0x18) +
             *(double *)((longlong)adStack_200 + lVar3 + 0x80);
        dVar1 = *(double *)((longlong)param_1 + lVar3 + -8);
        *(double *)((longlong)adStack_200 + lVar3 + 0x108) =
             dVar2 + *(double *)((longlong)adStack_200 + lVar3 + 0x88);
        dVar2 = *(double *)((longlong)param_1 + lVar3);
        *(double *)((longlong)adStack_200 + lVar3 + 0x110) =
             dVar1 + *(double *)((longlong)adStack_200 + lVar3 + 0x90);
        *(double *)((longlong)adStack_200 + lVar3 + 0x118) =
             dVar2 + *(double *)((longlong)adStack_200 + lVar3 + 0x98);
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != 0x98);
      pdVar4 = adStack_200 + 0x23;
      pdVar5 = param_1;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pdVar5 = *pdVar4;
        pdVar4 = pdVar4 + 1;
        pdVar5 = pdVar5 + 1;
      }
      fVar9 = fVar9 + fVar8;
      lVar7 = lVar7 + 0x40;
    } while (lVar7 != lVar6);
  }
  dVar2 = (double)(1.0 / fVar9);
  lVar7 = 0x18;
  do {
    *(double *)((longlong)adStack_200 + lVar7 + 0x100) =
         *(double *)((longlong)param_1 + lVar7 + -0x18) * dVar2;
    *(double *)((longlong)adStack_200 + lVar7 + 0x108) =
         *(double *)((longlong)param_1 + lVar7 + -0x10) * dVar2;
    *(double *)((longlong)adStack_200 + lVar7 + 0x110) =
         *(double *)((longlong)param_1 + lVar7 + -8) * dVar2;
    *(double *)((longlong)adStack_200 + lVar7 + 0x118) =
         *(double *)((longlong)param_1 + lVar7) * dVar2;
    lVar7 = lVar7 + 0x20;
  } while (lVar7 != 0x98);
  pdVar4 = adStack_200 + 0x23;
  pdVar5 = param_1;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pdVar5 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar5 = pdVar5 + 1;
  }
  param_1[0xf] = 1.0;
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792413a FUN_14792413a body=500 status=ok
// SIG undefined FUN_14792413a(void)

void FUN_14792413a(longlong *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = *param_1;
  dVar5 = 0.0;
  dVar4 = 0.0;
  if (lVar3 != 0) {
    dVar4 = (double)param_1[4];
    dVar1 = (double)param_1[2];
    dVar2 = (double)param_1[3];
    dVar4 = (*(double *)(lVar3 + 0x110) * dVar1 + *(double *)(lVar3 + 0x130) * dVar2 +
             *(double *)(lVar3 + 0x150) * dVar4 + *(double *)(lVar3 + 0x170) * 0.0) * dVar4 +
            (*(double *)(lVar3 + 0x160) * 0.0 +
            dVar4 * *(double *)(lVar3 + 0x140) +
            dVar2 * *(double *)(lVar3 + 0x120) + dVar1 * *(double *)(lVar3 + 0x100)) * dVar1 +
            (*(double *)(lVar3 + 0x168) * 0.0 +
            dVar4 * *(double *)(lVar3 + 0x148) +
            dVar2 * *(double *)(lVar3 + 0x128) + dVar1 * *(double *)(lVar3 + 0x108)) * dVar2;
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    dVar5 = (double)param_1[4];
    dVar1 = (double)param_1[2];
    dVar2 = (double)param_1[3];
    dVar5 = (*(double *)(lVar3 + 0x110) * dVar1 + *(double *)(lVar3 + 0x130) * dVar2 +
             *(double *)(lVar3 + 0x150) * dVar5 + *(double *)(lVar3 + 0x170) * 0.0) * dVar5 +
            (*(double *)(lVar3 + 0x160) * 0.0 +
            dVar5 * *(double *)(lVar3 + 0x140) +
            dVar2 * *(double *)(lVar3 + 0x120) + dVar1 * *(double *)(lVar3 + 0x100)) * dVar1 +
            (*(double *)(lVar3 + 0x168) * 0.0 +
            dVar5 * *(double *)(lVar3 + 0x148) +
            dVar2 * *(double *)(lVar3 + 0x128) + dVar1 * *(double *)(lVar3 + 0x108)) * dVar2;
  }
  *(float *)(param_1 + 7) = (float)(1.0 / (dVar4 + dVar5));
  return;
}



// FUNCTION 14792432e FUN_14792432e body=690 status=ok
// SIG undefined FUN_14792432e(void)

void FUN_14792432e(longlong *param_1,float param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  fVar4 = *(float *)((longlong)param_1 + 0x2c);
  if ((fVar4 != -3.4028235e+38) || (NAN(fVar4))) {
    lVar3 = param_1[1];
    dVar8 = 0.0;
    dVar6 = 0.0;
    if (lVar3 != 0) {
      dVar6 = *(double *)(lVar3 + 0x68);
      dVar5 = *(double *)(lVar3 + 0x58);
      dVar1 = *(double *)(lVar3 + 0x60);
      dVar6 = (dVar5 * *(double *)(lVar3 + 0x110) + dVar1 * *(double *)(lVar3 + 0x130) +
               dVar6 * *(double *)(lVar3 + 0x150) + *(double *)(lVar3 + 0x170) * 0.0) *
              (double)param_1[4] +
              (double)param_1[2] *
              (*(double *)(lVar3 + 0x160) * 0.0 +
              dVar6 * *(double *)(lVar3 + 0x140) +
              dVar1 * *(double *)(lVar3 + 0x120) + dVar5 * *(double *)(lVar3 + 0x100)) +
              (*(double *)(lVar3 + 0x168) * 0.0 +
              dVar6 * *(double *)(lVar3 + 0x148) +
              dVar1 * *(double *)(lVar3 + 0x128) + dVar5 * *(double *)(lVar3 + 0x108)) *
              (double)param_1[3];
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
      dVar8 = *(double *)(lVar2 + 0x68);
      dVar5 = *(double *)(lVar2 + 0x58);
      dVar1 = *(double *)(lVar2 + 0x60);
      dVar8 = (dVar5 * *(double *)(lVar2 + 0x110) + dVar1 * *(double *)(lVar2 + 0x130) +
               dVar8 * *(double *)(lVar2 + 0x150) + *(double *)(lVar2 + 0x170) * 0.0) *
              (double)param_1[4] +
              (double)param_1[2] *
              (*(double *)(lVar2 + 0x160) * 0.0 +
              dVar8 * *(double *)(lVar2 + 0x140) +
              dVar1 * *(double *)(lVar2 + 0x120) + dVar5 * *(double *)(lVar2 + 0x100)) +
              (*(double *)(lVar2 + 0x168) * 0.0 +
              dVar8 * *(double *)(lVar2 + 0x148) +
              dVar1 * *(double *)(lVar2 + 0x128) + dVar5 * *(double *)(lVar2 + 0x108)) *
              (double)param_1[3];
    }
    fVar4 = (fVar4 - (float)(dVar6 - dVar8)) * *(float *)(param_1 + 7);
    fVar7 = *(float *)((longlong)param_1 + 0x34) * param_2 - *(float *)(param_1 + 5);
    if (fVar7 <= fVar4) {
      fVar4 = fVar7;
    }
    fVar7 = param_2 * *(float *)(param_1 + 6) - *(float *)(param_1 + 5);
    if (fVar4 <= fVar7) {
      fVar4 = fVar7;
    }
    if (lVar2 != 0) {
      dVar5 = (double)fVar4;
      dVar6 = (double)param_1[4];
      dVar8 = (double)param_1[3];
      *(double *)(lVar2 + 0x58) = *(double *)(lVar2 + 0x58) - dVar5 * (double)param_1[2];
      *(double *)(lVar2 + 0x60) = *(double *)(lVar2 + 0x60) - dVar8 * dVar5;
      *(double *)(lVar2 + 0x68) = *(double *)(lVar2 + 0x68) - dVar6 * dVar5;
      lVar3 = param_1[1];
    }
    if (lVar3 != 0) {
      dVar5 = (double)fVar4;
      dVar6 = (double)param_1[4];
      dVar8 = (double)param_1[3];
      *(double *)(lVar3 + 0x58) = dVar5 * (double)param_1[2] + *(double *)(lVar3 + 0x58);
      *(double *)(lVar3 + 0x60) = dVar8 * dVar5 + *(double *)(lVar3 + 0x60);
      *(double *)(lVar3 + 0x68) = dVar6 * dVar5 + *(double *)(lVar3 + 0x68);
    }
    *(float *)(param_1 + 5) = fVar4 + *(float *)(param_1 + 5);
  }
  return;
}



// FUNCTION 1479245e0 FUN_1479245e0 body=1415 status=ok
// SIG undefined FUN_1479245e0(void)

void FUN_1479245e0(longlong *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    dVar13 = (double)param_1[2];
    dVar17 = (double)param_1[3];
    dVar12 = (double)param_1[4];
  }
  else {
    dVar13 = (double)param_1[2];
    dVar17 = (double)param_1[3];
    dVar12 = (double)param_1[4];
    dVar16 = *(double *)(lVar3 + 0x30);
    dVar1 = *(double *)(lVar3 + 0x20);
    dVar14 = *(double *)(lVar3 + 0x28);
    dVar5 = dVar14 * dVar12 - dVar17 * dVar16;
    dVar5 = dVar5 + dVar5;
    dVar2 = *(double *)(lVar3 + 0x38);
    dVar8 = dVar1 * dVar17 - dVar13 * dVar14;
    dVar8 = dVar8 + dVar8;
    dVar15 = dVar16 * dVar13 - dVar12 * dVar1;
    dVar15 = dVar15 + dVar15;
    dVar12 = (dVar1 * dVar15 - dVar5 * dVar14) + dVar2 * dVar8 + dVar12;
    dVar17 = (dVar16 * dVar5 - dVar8 * dVar1) + dVar2 * dVar15 + dVar17;
    dVar13 = (dVar14 * dVar8 - dVar15 * dVar16) + dVar5 * dVar2 + dVar13;
  }
  param_1[0xe] = (longlong)dVar13;
  param_1[0xf] = (longlong)dVar17;
  param_1[0x10] = (longlong)dVar12;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    dVar16 = (double)param_1[5];
    dVar1 = (double)param_1[6];
    dVar14 = (double)param_1[7];
  }
  else {
    dVar16 = (double)param_1[5];
    dVar1 = (double)param_1[6];
    dVar14 = (double)param_1[7];
    dVar2 = *(double *)(lVar4 + 0x30);
    dVar5 = *(double *)(lVar4 + 0x20);
    dVar8 = *(double *)(lVar4 + 0x28);
    dVar7 = dVar8 * dVar14 - dVar1 * dVar2;
    dVar7 = dVar7 + dVar7;
    dVar15 = *(double *)(lVar4 + 0x38);
    dVar9 = dVar5 * dVar1 - dVar16 * dVar8;
    dVar9 = dVar9 + dVar9;
    dVar6 = dVar2 * dVar16 - dVar14 * dVar5;
    dVar6 = dVar6 + dVar6;
    dVar14 = (dVar5 * dVar6 - dVar7 * dVar8) + dVar15 * dVar9 + dVar14;
    dVar1 = (dVar2 * dVar7 - dVar9 * dVar5) + dVar15 * dVar6 + dVar1;
    dVar16 = (dVar8 * dVar9 - dVar6 * dVar2) + dVar7 * dVar15 + dVar16;
  }
  param_1[0x11] = (longlong)dVar16;
  param_1[0x12] = (longlong)dVar1;
  param_1[0x13] = (longlong)dVar14;
  dVar5 = 0.0;
  dVar2 = 0.0;
  if (lVar3 != 0) {
    dVar2 = (double)param_1[8];
    dVar8 = (double)param_1[9];
    dVar10 = dVar13 * dVar8 - dVar2 * dVar17;
    dVar15 = (double)param_1[10];
    dVar11 = dVar12 * dVar2 - dVar15 * dVar13;
    dVar9 = dVar17 * dVar15 - dVar8 * dVar12;
    dVar6 = *(double *)(lVar3 + 0x160) * 0.0 +
            dVar10 * *(double *)(lVar3 + 0x140) +
            dVar11 * *(double *)(lVar3 + 0x120) + dVar9 * *(double *)(lVar3 + 0x100);
    dVar7 = *(double *)(lVar3 + 0x168) * 0.0 +
            dVar10 * *(double *)(lVar3 + 0x148) +
            dVar11 * *(double *)(lVar3 + 0x128) + dVar9 * *(double *)(lVar3 + 0x108);
    dVar9 = dVar9 * *(double *)(lVar3 + 0x110) + dVar11 * *(double *)(lVar3 + 0x130) +
            dVar10 * *(double *)(lVar3 + 0x150) + *(double *)(lVar3 + 0x170) * 0.0;
    dVar2 = (dVar6 * dVar17 - dVar13 * dVar7) * dVar15 +
            (dVar7 * dVar12 - dVar9 * dVar17) * dVar2 + (dVar9 * dVar13 - dVar12 * dVar6) * dVar8 +
            (double)*(float *)(lVar3 + 0x74);
  }
  if (lVar4 != 0) {
    dVar13 = (double)param_1[8];
    dVar17 = (double)param_1[9];
    dVar6 = dVar16 * dVar17 - dVar13 * dVar1;
    dVar12 = (double)param_1[10];
    dVar7 = dVar14 * dVar13 - dVar12 * dVar16;
    dVar15 = dVar1 * dVar12 - dVar17 * dVar14;
    dVar5 = *(double *)(lVar4 + 0x160) * 0.0 +
            dVar6 * *(double *)(lVar4 + 0x140) +
            dVar7 * *(double *)(lVar4 + 0x120) + dVar15 * *(double *)(lVar4 + 0x100);
    dVar8 = *(double *)(lVar4 + 0x168) * 0.0 +
            dVar6 * *(double *)(lVar4 + 0x148) +
            dVar7 * *(double *)(lVar4 + 0x128) + dVar15 * *(double *)(lVar4 + 0x108);
    dVar15 = dVar15 * *(double *)(lVar4 + 0x110) + dVar7 * *(double *)(lVar4 + 0x130) +
             dVar6 * *(double *)(lVar4 + 0x150) + *(double *)(lVar4 + 0x170) * 0.0;
    dVar5 = (dVar5 * dVar1 - dVar16 * dVar8) * dVar12 +
            (dVar8 * dVar14 - dVar15 * dVar1) * dVar13 + (dVar15 * dVar16 - dVar14 * dVar5) * dVar17
            + (double)*(float *)(lVar4 + 0x74);
  }
  *(float *)((longlong)param_1 + 0x6c) = (float)(1.0 / (dVar2 + dVar5));
  return;
}



// FUNCTION 147924b68 FUN_147924b68 body=1140 status=ok
// SIG undefined FUN_147924b68(void)

void FUN_147924b68(longlong *param_1,float param_2)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  
  lVar1 = *param_1;
  dVar4 = 0.0;
  dVar7 = 0.0;
  dVar9 = 0.0;
  dVar6 = 0.0;
  if (lVar1 != 0) {
    dVar6 = *(double *)(lVar1 + 0x68);
    dVar7 = *(double *)(lVar1 + 0x58);
    dVar9 = *(double *)(lVar1 + 0x60);
    dVar10 = *(double *)(lVar1 + 0x160) * 0.0 +
             dVar6 * *(double *)(lVar1 + 0x140) +
             dVar9 * *(double *)(lVar1 + 0x120) + dVar7 * *(double *)(lVar1 + 0x100);
    dVar11 = *(double *)(lVar1 + 0x168) * 0.0 +
             dVar6 * *(double *)(lVar1 + 0x148) +
             dVar9 * *(double *)(lVar1 + 0x128) + dVar7 * *(double *)(lVar1 + 0x108);
    dVar7 = dVar7 * *(double *)(lVar1 + 0x110) + dVar9 * *(double *)(lVar1 + 0x130) +
            dVar6 * *(double *)(lVar1 + 0x150) + *(double *)(lVar1 + 0x170) * 0.0;
    dVar8 = (double)*(float *)(lVar1 + 0x74);
    dVar6 = *(double *)(lVar1 + 0x50) * dVar8 +
            (dVar10 * (double)param_1[0xf] - (double)param_1[0xe] * dVar11);
    dVar9 = *(double *)(lVar1 + 0x48) * dVar8 +
            (dVar7 * (double)param_1[0xe] - dVar10 * (double)param_1[0x10]);
    dVar7 = dVar8 * *(double *)(lVar1 + 0x40) +
            (dVar11 * (double)param_1[0x10] - dVar7 * (double)param_1[0xf]);
  }
  lVar3 = param_1[1];
  dVar10 = 0.0;
  dVar8 = 0.0;
  if (lVar3 != 0) {
    dVar4 = *(double *)(lVar3 + 0x68);
    dVar8 = *(double *)(lVar3 + 0x58);
    dVar10 = *(double *)(lVar3 + 0x60);
    dVar11 = *(double *)(lVar3 + 0x160) * 0.0 +
             dVar4 * *(double *)(lVar3 + 0x140) +
             dVar10 * *(double *)(lVar3 + 0x120) + dVar8 * *(double *)(lVar3 + 0x100);
    dVar2 = *(double *)(lVar3 + 0x168) * 0.0 +
            dVar4 * *(double *)(lVar3 + 0x148) +
            dVar10 * *(double *)(lVar3 + 0x128) + dVar8 * *(double *)(lVar3 + 0x108);
    dVar4 = dVar8 * *(double *)(lVar3 + 0x110) + dVar10 * *(double *)(lVar3 + 0x130) +
            dVar4 * *(double *)(lVar3 + 0x150) + *(double *)(lVar3 + 0x170) * 0.0;
    dVar5 = (double)*(float *)(lVar3 + 0x74);
    dVar8 = *(double *)(lVar3 + 0x50) * dVar5 +
            (dVar11 * (double)param_1[0x12] - (double)param_1[0x11] * dVar2);
    dVar10 = *(double *)(lVar3 + 0x48) * dVar5 +
             (dVar4 * (double)param_1[0x11] - dVar11 * (double)param_1[0x13]);
    dVar4 = dVar5 * *(double *)(lVar3 + 0x40) +
            (dVar2 * (double)param_1[0x13] - dVar4 * (double)param_1[0x12]);
  }
  fVar12 = (-*(float *)(param_1 + 0xb) -
           (float)((dVar8 - dVar6) * (double)param_1[10] +
                  (dVar4 - dVar7) * (double)param_1[8] + (dVar10 - dVar9) * (double)param_1[9])) *
           *(float *)((longlong)param_1 + 0x6c);
  fVar13 = *(float *)((longlong)param_1 + 100) * param_2 - *(float *)(param_1 + 0xd);
  if (fVar12 <= fVar13) {
    fVar13 = fVar12;
  }
  fVar12 = param_2 * *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xd);
  if (fVar12 <= fVar13) {
    fVar12 = fVar13;
  }
  if (lVar1 != 0) {
    dVar9 = (double)-fVar12;
    dVar10 = (double)param_1[10] * dVar9;
    dVar8 = (double)param_1[9] * dVar9;
    dVar9 = (double)param_1[8] * dVar9;
    *(double *)(lVar1 + 0x40) = *(double *)(lVar1 + 0x40) + dVar9;
    *(double *)(lVar1 + 0x48) = *(double *)(lVar1 + 0x48) + dVar8;
    *(double *)(lVar1 + 0x50) = *(double *)(lVar1 + 0x50) + dVar10;
    dVar4 = (double)param_1[0xe];
    dVar6 = (double)param_1[0xf];
    dVar7 = (double)param_1[0x10];
    *(double *)(lVar1 + 0x58) = (dVar6 * dVar10 - dVar8 * dVar7) + *(double *)(lVar1 + 0x58);
    *(double *)(lVar1 + 0x60) = (dVar9 * dVar7 - dVar10 * dVar4) + *(double *)(lVar1 + 0x60);
    *(double *)(lVar1 + 0x68) = (dVar4 * dVar8 - dVar9 * dVar6) + *(double *)(lVar1 + 0x68);
    lVar3 = param_1[1];
  }
  if (lVar3 != 0) {
    dVar9 = (double)fVar12;
    dVar8 = (double)param_1[10] * dVar9;
    dVar10 = (double)param_1[9] * dVar9;
    dVar9 = dVar9 * (double)param_1[8];
    *(double *)(lVar3 + 0x40) = *(double *)(lVar3 + 0x40) + dVar9;
    *(double *)(lVar3 + 0x48) = *(double *)(lVar3 + 0x48) + dVar10;
    *(double *)(lVar3 + 0x50) = *(double *)(lVar3 + 0x50) + dVar8;
    dVar4 = (double)param_1[0x11];
    dVar6 = (double)param_1[0x12];
    dVar7 = (double)param_1[0x13];
    *(double *)(lVar3 + 0x58) = (dVar6 * dVar8 - dVar10 * dVar7) + *(double *)(lVar3 + 0x58);
    *(double *)(lVar3 + 0x60) = (dVar9 * dVar7 - dVar8 * dVar4) + *(double *)(lVar3 + 0x60);
    *(double *)(lVar3 + 0x68) = (dVar4 * dVar10 - dVar9 * dVar6) + *(double *)(lVar3 + 0x68);
  }
  *(float *)(param_1 + 0xd) = fVar12 + *(float *)(param_1 + 0xd);
  return;
}



// FUNCTION 147924fdc FUN_147924fdc body=1080 status=ok
// SIG undefined FUN_147924fdc(void)

double * FUN_147924fdc(double *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int *piVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_138 [32];
  double local_118 [4];
  double local_f8 [4];
  double local_d8 [9];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8[2] = 0.0;
  local_f8[0] = 0.0;
  local_f8[1] = 0.0;
  local_118[2] = 0.0;
  local_118[0] = 0.0;
  local_118[1] = 0.0;
  if ((longlong)*(int *)(param_3 + 1) == 0) {
    fVar18 = 0.0;
    uVar23 = 0;
    uVar24 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar25 = 0;
    uVar26 = 0;
  }
  else {
    piVar14 = (int *)*param_3;
    piVar2 = piVar14 + (longlong)*(int *)(param_3 + 1) * 3;
    lVar13 = *param_2;
    fVar18 = 0.0;
    do {
      local_d8[2] = *(double *)(lVar13 + 0x10 + (longlong)*piVar14 * 0x18);
      pdVar3 = (double *)(lVar13 + (longlong)*piVar14 * 0x18);
      local_d8[0] = *pdVar3;
      local_d8[1] = pdVar3[1];
      pdVar3 = (double *)(lVar13 + (longlong)piVar14[1] * 0x18);
      local_d8[3] = *pdVar3;
      local_d8[4] = pdVar3[1];
      local_d8[5] = *(double *)(lVar13 + 0x10 + (longlong)piVar14[1] * 0x18);
      local_d8[8] = *(double *)(lVar13 + 0x10 + (longlong)piVar14[2] * 0x18);
      pdVar3 = (double *)(lVar13 + (longlong)piVar14[2] * 0x18);
      local_d8[6] = *pdVar3;
      local_d8[7] = pdVar3[1];
      fVar19 = (float)((local_d8[1] * local_d8[5] - local_d8[4] * local_d8[2]) * local_d8[6] +
                      ((local_d8[4] * local_d8[8] - local_d8[7] * local_d8[5]) * local_d8[0] -
                      (local_d8[8] * local_d8[1] - local_d8[7] * local_d8[2]) * local_d8[3]));
      dVar22 = (double)fVar19;
      lVar17 = 0;
      do {
        lVar1 = lVar17 + 1;
        uVar15 = (ulonglong)((int)lVar17 - 1);
        lVar16 = 0;
        if (lVar17 != 2) {
          lVar16 = lVar1;
        }
        dVar4 = local_d8[lVar17];
        dVar5 = local_d8[lVar17 + 3];
        dVar6 = local_d8[lVar17 + 6];
        if (lVar17 == 0) {
          uVar15 = 2;
        }
        dVar7 = local_d8[uVar15];
        dVar8 = local_d8[uVar15 + 3];
        dVar9 = local_d8[lVar16];
        dVar10 = local_d8[lVar16 + 3];
        dVar11 = local_d8[uVar15 + 6];
        dVar12 = local_d8[lVar16 + 6];
        local_f8[lVar17] =
             (dVar6 * dVar6 +
             dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar4 + dVar4 * dVar5 + dVar5 * dVar6) * dVar22
             + local_f8[lVar17];
        local_118[lVar17] =
             (dVar11 * dVar12 + dVar11 * dVar12 +
             dVar8 * dVar10 + dVar8 * dVar10 +
             dVar9 * dVar7 + dVar9 * dVar7 +
             dVar12 * dVar8 +
             dVar10 * dVar7 + dVar9 * dVar11 + dVar12 * dVar7 + dVar9 * dVar8 + dVar10 * dVar11) *
             dVar22 + local_118[lVar17];
        lVar17 = lVar1;
      } while (lVar1 != 3);
      fVar18 = fVar18 + fVar19;
      piVar14 = piVar14 + 3;
    } while (piVar14 != piVar2);
    uVar25 = SUB84(local_f8[2],0);
    uVar26 = (undefined4)((ulonglong)local_f8[2] >> 0x20);
    uVar20 = SUB84(local_118[0],0);
    uVar21 = (undefined4)((ulonglong)local_118[0] >> 0x20);
    uVar23 = SUB84(local_118[2],0);
    uVar24 = (undefined4)((ulonglong)local_118[2] >> 0x20);
  }
  dVar6 = 1.0 / (double)(fVar18 * 10.0);
  dVar7 = dVar6 * (double)CONCAT44(uVar26,uVar25);
  dVar4 = -1.0 / (double)(fVar18 * 20.0);
  dVar22 = (double)CONCAT44(uVar21,uVar20) * dVar4;
  dVar5 = dVar4 * (double)CONCAT44(uVar24,uVar23);
  *param_1 = dVar7 + local_f8[1] * dVar6;
  param_1[1] = dVar5;
  param_1[2] = local_118[1] * dVar4;
  param_1[3] = 0.0;
  param_1[4] = dVar5;
  param_1[5] = local_f8[0] * dVar6 + dVar7;
  param_1[6] = dVar22;
  param_1[7] = 0.0;
  param_1[8] = local_118[1] * dVar4;
  param_1[9] = dVar22;
  param_1[10] = local_f8[0] * dVar6 + local_f8[1] * dVar6;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  uVar15 = local_90 ^ (ulonglong)auStack_138;
  if (uVar15 == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar15);
}



// FUNCTION 147925416 FUN_147925416 body=1102 status=ok
// SIG undefined FUN_147925416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147925416(double *param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar7;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_2d8 [32];
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined8 local_280;
  double local_278;
  double local_270;
  double local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [128];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  dVar8 = *param_2;
  dVar10 = param_2[1];
  dVar12 = param_2[2];
  dVar1 = param_2[3];
  dVar3 = dVar12 * dVar12 + dVar8 * dVar8;
  dVar7 = dVar1 * dVar1 + dVar10 * dVar10;
  auVar4._0_8_ = dVar3 + dVar7;
  auVar4._8_8_ = dVar3 + dVar7;
  uVar2 = -(ulonglong)(9.99999993922529e-09 <= auVar4._8_8_);
  auVar5 = sqrtpd(auVar4,auVar4);
  auVar5 = divpd(_DAT_149934d80,auVar5);
  auVar9._0_8_ = auVar5._0_8_ * dVar12;
  auVar9._8_8_ = auVar5._8_8_ * dVar1;
  dVar3 = (double)((ulonglong)(dVar8 * auVar5._0_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar4._0_8_));
  dVar7 = (double)((ulonglong)(dVar10 * auVar5._8_8_) & uVar2);
  auVar5._8_4_ = (int)uVar2;
  auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar4._0_8_);
  auVar5._12_4_ = (int)(uVar2 >> 0x20);
  auVar5 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar9,auVar5);
  dVar12 = dVar7 + dVar7;
  dVar13 = auVar5._0_8_;
  dVar8 = dVar13 + dVar13;
  dVar10 = dVar3 * (dVar3 + dVar3);
  dVar14 = auVar5._8_8_;
  local_108 = (dVar3 + dVar3) * dVar14;
  local_138 = 1.0 - (dVar7 * dVar12 + dVar13 * dVar8);
  local_118 = dVar3 * dVar12 - dVar14 * dVar8;
  local_130 = dVar14 * dVar8 + dVar3 * dVar12;
  local_110 = 1.0 - (dVar13 * dVar8 + dVar10);
  local_f8 = dVar3 * dVar8 + dVar12 * dVar14;
  local_128 = dVar3 * dVar8 - dVar12 * dVar14;
  local_f0 = dVar7 * dVar8 - local_108;
  local_108 = local_108 + dVar7 * dVar8;
  local_e8 = 1.0 - (dVar7 * dVar12 + dVar10);
  local_120 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_d8 = DAT_14c8464e0;
  uStack_d0 = DAT_14c8464e8;
  local_c8 = DAT_14c8464f0;
  local_c0 = 0x3ff0000000000000;
  FUN_1447fea8d(local_238,&local_138);
  local_2b8 = local_138;
  local_2b0 = local_118;
  local_2a8 = local_f8;
  local_2a0 = local_d8;
  local_298 = local_130;
  local_290 = local_110;
  local_288 = local_f0;
  local_280 = uStack_d0;
  local_278 = local_128;
  local_270 = local_108;
  local_268 = local_e8;
  local_260 = local_c8;
  local_258 = local_120;
  local_250 = local_100;
  local_248 = local_e0;
  local_240 = local_c0;
  FUN_1447fea8d(&local_1b8,local_238);
  dVar8 = param_4[2];
  dVar10 = *param_4;
  dVar12 = param_4[1];
  dVar1 = (dVar10 * local_1a8 + dVar12 * local_188 + dVar8 * local_168 + local_148 * 0.0) * 0.5;
  dVar11 = (dStack_150 * 0.0 + dVar8 * dStack_170 + dVar12 * dStack_190 + dVar10 * dStack_1b0) * 0.5
  ;
  dVar8 = (local_158 * 0.0 + dVar8 * local_178 + dVar12 * local_198 + dVar10 * local_1b8) * 0.5;
  auVar6._8_4_ = SUB84(dVar3,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_1 = dVar7 * dVar1 * -1.0 + dVar13 * dVar11 + dVar14 * dVar8 * 1.0 + dVar3 * 0.0;
  param_1[1] = auVar6._8_8_ * dVar1 * 1.0 + dVar14 * dVar11 + dVar13 * dVar8 * -1.0 + dVar7 * 0.0;
  param_1[2] = dVar14 * dVar1 * 1.0 + ((dVar8 * dVar7 * 1.0 + dVar13 * 0.0) - dVar3 * dVar11);
  param_1[3] = dVar13 * dVar1 * -1.0 +
               ((dVar8 * auVar6._8_8_ * -1.0 + dVar14 * 0.0) - dVar7 * dVar11);
  if ((local_b0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147925866 FUN_147925866 body=690 status=ok
// SIG undefined FUN_147925866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_147925866(ulonglong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,float param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_168 [32];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_147925416(&local_c8);
  dVar5 = (double)(param_5 * 0.5);
  dVar8 = dVar5 * dStack_c0 + param_2[1];
  local_f8 = dVar5 * local_b8 + param_2[2];
  dStack_f0 = dVar5 * dStack_b0 + param_2[3];
  local_108._8_4_ = SUB84(dVar8,0);
  local_108._0_8_ = dVar5 * local_c8 + *param_2;
  local_108._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  FUN_147925416(&local_e8,local_108,param_3,param_4);
  dVar8 = dVar5 * dStack_e0 + param_2[1];
  dVar4 = dVar5 * dStack_d0 + param_2[3];
  local_128._8_4_ = SUB84(dVar8,0);
  local_128._0_8_ = dVar5 * local_e8 + *param_2;
  local_128._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_118._8_4_ = SUB84(dVar4,0);
  local_118._0_8_ = dVar5 * local_d8 + param_2[2];
  local_118._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  FUN_147925416(local_108,local_128,param_3,param_4);
  dVar11 = dStack_f0;
  dVar4 = local_f8;
  uVar1 = local_108._0_8_;
  uVar2 = local_108._8_8_;
  dVar5 = (double)param_5;
  local_148 = dVar5 * (double)local_108._0_8_ + *param_2;
  dStack_140 = dVar5 * (double)local_108._8_8_ + param_2[1];
  dVar8 = dVar5 * dStack_f0 + param_2[3];
  local_138._8_4_ = SUB84(dVar8,0);
  local_138._0_8_ = dVar5 * local_f8 + param_2[2];
  local_138._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  FUN_147925416(local_128,&local_148,param_3,param_4);
  dVar5 = (double)(param_5 / 6.0);
  dVar8 = (double)(param_5 / 3.0);
  dVar6 = (double)local_128._0_8_ * dVar5 +
          (double)uVar1 * dVar8 + local_e8 * dVar8 + local_c8 * dVar5 + *param_2;
  dVar7 = (double)local_128._8_8_ * dVar5 +
          (double)uVar2 * dVar8 + dStack_e0 * dVar8 + dStack_c0 * dVar5 + param_2[1];
  dVar4 = dVar5 * (double)local_118._0_8_ +
          dVar8 * dVar4 + local_d8 * dVar8 + local_b8 * dVar5 + param_2[2];
  dVar5 = dVar5 * (double)local_118._8_8_ +
          dVar8 * dVar11 + dStack_d0 * dVar8 + dStack_b0 * dVar5 + param_2[3];
  dVar8 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar11 = dVar5 * dVar5 + dVar7 * dVar7;
  auVar9._0_8_ = dVar8 + dVar11;
  auVar9._8_8_ = dVar8 + dVar11;
  uVar3 = -(ulonglong)(9.99999993922529e-09 <= auVar9._8_8_);
  auVar10 = sqrtpd(auVar9,auVar9);
  auVar10 = divpd(_DAT_149934d80,auVar10);
  auVar12._0_8_ = auVar10._0_8_ * dVar4;
  auVar12._8_8_ = auVar10._8_8_ * dVar5;
  *param_1 = (ulonglong)(dVar6 * auVar10._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar9._0_8_)
  ;
  param_1[1] = (ulonglong)(dVar7 * auVar10._8_8_) & uVar3;
  auVar10._8_4_ = (int)uVar3;
  auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar9._0_8_);
  auVar10._12_4_ = (int)(uVar3 >> 0x20);
  auVar10 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar12,auVar10);
  *(undefined1 (*) [16])(param_1 + 2) = auVar10;
  if ((local_a0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147925b1a FUN_147925b1a body=880 status=ok
// SIG undefined FUN_147925b1a(void)

void FUN_147925b1a(float param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5,double *param_6,double *param_7,double *param_8,float param_9,
                  float param_10)

{
  int iVar1;
  double dVar2;
  float fVar3;
  undefined1 auStack_168 [32];
  double local_148;
  double dStack_140;
  double local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_3 == 0) {
    local_118 = (double)param_4[2];
    local_128 = *(undefined4 *)param_4;
    uStack_124 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_120 = *(undefined4 *)(param_4 + 1);
    uStack_11c = *(undefined4 *)((longlong)param_4 + 0xc);
  }
  else {
    FUN_147925e8c(param_3,&local_128,param_4);
  }
  if (param_5 == 0) {
    local_138 = param_6[2];
    local_148 = *param_6;
    dStack_140 = param_6[1];
  }
  else {
    FUN_147925e8c(param_5,&local_148,param_6);
  }
  local_b4 = (float)((local_138 - local_118) * param_7[2] +
                    (local_148 - (double)CONCAT44(uStack_124,local_128)) * *param_7 +
                    (dStack_140 - (double)CONCAT44(uStack_11c,uStack_120)) * param_7[1]);
  if (9.99999993922529e-09 <= ABS(*param_8 - param_8[1])) {
    dVar2 = (double)local_b4;
    local_b8 = (float)((dVar2 - *param_8) / (double)param_1);
    fVar3 = (float)((dVar2 - param_8[1]) / (double)param_1);
    local_108 = param_5;
    local_f0 = param_4[2];
    local_100 = *param_4;
    uStack_f8 = param_4[1];
    local_e8 = *param_6;
    dStack_e0 = param_6[1];
    local_d8 = param_6[2];
    local_d0 = *param_7;
    dStack_c8 = param_7[1];
    local_c0 = param_7[2];
    local_b0 = 0.0;
    if (param_10 <= 0.0) {
      local_b0 = param_10;
    }
    local_ac = 0.0;
    if (0.0 <= param_10) {
      local_ac = param_10;
    }
    local_a8 = 0;
    local_110 = param_3;
    local_b4 = local_b8;
    FUN_1479245e0();
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_14793549a(param_2,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 0xa0 + *param_2),&local_110,0xa0);
    local_f0 = param_4[2];
    local_100 = *param_4;
    uStack_f8 = param_4[1];
    local_e8 = *param_6;
    dStack_e0 = param_6[1];
    local_d8 = param_6[2];
    local_d0 = *param_7;
    dStack_c8 = param_7[1];
    local_c0 = param_7[2];
    local_b0 = param_9;
    if (0.0 <= param_9) {
      local_b0 = 0.0;
    }
    local_b4 = fVar3;
    local_ac = param_9;
    if (param_9 <= 0.0) {
      local_ac = 0.0;
    }
  }
  else {
    local_b4 = local_b4 / param_1;
    local_f0 = param_4[2];
    local_100 = *param_4;
    uStack_f8 = param_4[1];
    local_e8 = *param_6;
    dStack_e0 = param_6[1];
    local_d8 = param_6[2];
    local_d0 = *param_7;
    dStack_c8 = param_7[1];
    local_c0 = param_7[2];
    local_b0 = param_9;
    if (param_10 <= param_9) {
      local_b0 = param_10;
    }
    local_ac = param_9;
    if (param_9 <= param_10) {
      local_ac = param_10;
    }
  }
  local_a8 = 0;
  local_108 = param_5;
  local_110 = param_3;
  local_b8 = local_b4;
  FUN_1479245e0(&local_110);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14793549a(param_2,iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0xa0 + *param_2),&local_110,0xa0);
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147925e8c FUN_147925e8c body=298 status=ok
// SIG undefined FUN_147925e8c(void)

double * FUN_147925e8c(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = param_1[6];
  dVar5 = param_1[4];
  dVar6 = param_1[5];
  dVar10 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar10 = dVar10 + dVar10;
  dVar7 = param_1[7];
  dVar11 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar12 = dVar12 + dVar12;
  dVar8 = param_1[2];
  dVar9 = param_1[1];
  *param_2 = (dVar6 * dVar11 - dVar12 * dVar4) + dVar10 * dVar7 + dVar1 + *param_1;
  param_2[1] = (dVar4 * dVar10 - dVar11 * dVar5) + dVar7 * dVar12 + dVar2 + dVar9;
  param_2[2] = (dVar5 * dVar12 - dVar10 * dVar6) + dVar7 * dVar11 + dVar3 + dVar8;
  return param_2;
}



// FUNCTION 147925fb6 FUN_147925fb6 body=770 status=ok
// SIG undefined FUN_147925fb6(void)

void FUN_147925fb6(float param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5,double *param_6)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_178 [32];
  double local_158;
  double dStack_150;
  double local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_3 == 0) {
    local_128 = (double)param_4[2];
    local_138 = *(undefined4 *)param_4;
    uStack_134 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_130 = *(undefined4 *)(param_4 + 1);
    uStack_12c = *(undefined4 *)((longlong)param_4 + 0xc);
  }
  else {
    FUN_147925e8c(param_3,&local_138,param_4);
  }
  if (param_5 == 0) {
    local_148 = param_6[2];
    local_158 = *param_6;
    dStack_150 = param_6[1];
  }
  else {
    FUN_147925e8c(param_5,&local_158,param_6);
  }
  dVar4 = local_148 - local_128;
  dVar3 = dStack_150 - (double)CONCAT44(uStack_12c,uStack_130);
  dVar2 = 1.0 / (double)param_1;
  local_c8 = (float)((local_158 - (double)CONCAT44(uStack_134,local_138)) * dVar2);
  local_118 = param_5;
  local_110 = *param_4;
  uStack_108 = param_4[1];
  local_100 = param_4[2];
  local_f8 = *param_6;
  dStack_f0 = param_6[1];
  local_e8 = param_6[2];
  local_e0 = 0x3ff0000000000000;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_c4 = 0xff7fffff00000000;
  uStack_bc = 0x7f7fffff;
  local_120 = param_3;
  FUN_1479245e0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14793549a(param_2,iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0xa0 + *param_2),&local_120,0xa0);
  local_c8 = (float)(dVar3 * dVar2);
  local_118 = param_5;
  local_110 = *param_4;
  uStack_108 = param_4[1];
  local_100 = param_4[2];
  local_f8 = *param_6;
  dStack_f0 = param_6[1];
  local_e8 = param_6[2];
  local_e0 = 0;
  uStack_d8 = 0x3ff0000000000000;
  uStack_d0 = 0;
  local_c4 = 0xff7fffff00000000;
  uStack_bc = 0x7f7fffff;
  local_120 = param_3;
  FUN_1479245e0(&local_120);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14793549a(param_2,iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0xa0 + *param_2),&local_120,0xa0);
  local_c8 = (float)(dVar2 * dVar4);
  local_118 = param_5;
  local_110 = *param_4;
  uStack_108 = param_4[1];
  local_100 = param_4[2];
  local_f8 = *param_6;
  dStack_f0 = param_6[1];
  local_e8 = param_6[2];
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0x3ff0000000000000;
  local_c4 = 0xff7fffff00000000;
  uStack_bc = 0x7f7fffff;
  local_120 = param_3;
  FUN_1479245e0(&local_120);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14793549a(param_2,iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0xa0 + *param_2),&local_120,0xa0);
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479262ba FUN_1479262ba body=5251 status=ok
// SIG undefined FUN_1479262ba(void)

void FUN_1479262ba(float param_1,longlong *param_2,undefined8 param_3,double *param_4,
                  undefined8 param_5,double *param_6,char param_7,double *param_8,double *param_9,
                  float param_10)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_258 [36];
  float local_234;
  double local_230;
  double local_228;
  double local_220;
  undefined1 local_218 [16];
  float local_208;
  uint uStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  uint uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 local_178;
  uint uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined1 local_168 [16];
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [12];
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 uStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  dVar6 = param_4[2] * -1.0;
  dVar17 = param_4[3] * 1.0;
  dVar16 = *param_6;
  dVar8 = param_6[1];
  dVar13 = param_6[2];
  dVar18 = param_6[3];
  dVar3 = param_4[1];
  dVar20 = param_4[1];
  dVar9 = dVar8 * dVar6 * -1.0 + ((dVar16 * dVar17 - *param_4 * dVar18 * 1.0) - dVar13 * dVar3);
  dVar10 = dVar16 * dVar6 * 1.0 + ((dVar8 * dVar17 - *param_4 * dVar13 * -1.0) - dVar18 * dVar20);
  dVar3 = dVar18 * dVar6 * 1.0 + dVar3 * dVar16 + (dVar17 * dVar13 - *param_4 * dVar8 * 1.0);
  dVar20 = dVar13 * dVar6 * -1.0 + dVar20 * dVar8 + (dVar17 * dVar18 - *param_4 * dVar16 * -1.0);
  if (param_7 == '\x02') {
    local_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0x3ff0000000000000;
    dVar16 = dVar9 * 0.0 + dVar10 * -0.0;
    dVar17 = dVar10 - dVar3 * 0.0;
    dVar6 = dVar3 * 0.0 - dVar9;
    dVar16 = dVar16 + dVar16;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    local_140 = (dVar9 * dVar6 - dVar17 * dVar10) + dVar20 * dVar16 + 1.0;
    local_148 = (dVar3 * dVar17 - dVar16 * dVar9) + dVar20 * dVar6 + 0.0;
    local_150 = (dVar10 * dVar16 - dVar6 * dVar3) + dVar20 * dVar17 + 0.0;
  }
  else if (param_7 == '\x01') {
    local_138 = 0;
    uStack_130 = 0x3ff0000000000000;
    uStack_128 = 0;
    dVar17 = dVar9 - dVar10 * 0.0;
    dVar6 = dVar3 * 0.0 + dVar9 * -0.0;
    dVar16 = dVar10 * 0.0 - dVar3;
    dVar17 = dVar17 + dVar17;
    dVar6 = dVar6 + dVar6;
    dVar16 = dVar16 + dVar16;
    local_140 = (dVar9 * dVar6 - dVar16 * dVar10) + dVar20 * dVar17 + 0.0;
    local_148 = (dVar3 * dVar16 - dVar17 * dVar9) + dVar20 * dVar6 + 1.0;
    local_150 = (dVar10 * dVar17 - dVar6 * dVar3) + dVar20 * dVar16 + 0.0;
  }
  else if (param_7 == '\0') {
    local_138 = 0x3ff0000000000000;
    dVar6 = dVar3 - dVar9 * 0.0;
    dVar16 = dVar9 * 0.0 - dVar10;
    dVar17 = dVar10 * 0.0 + dVar3 * -0.0;
    dVar16 = dVar16 + dVar16;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    local_140 = (dVar9 * dVar6 - dVar17 * dVar10) + dVar20 * dVar16 + 0.0;
    local_148 = (dVar3 * dVar17 - dVar16 * dVar9) + dVar20 * dVar6 + 0.0;
    local_150 = (dVar10 * dVar16 - dVar6 * dVar3) + dVar20 * dVar17 + 1.0;
    uStack_130 = 0;
    uStack_128 = 0;
  }
  local_220 = param_8[2] * 0.01745329238474369;
  dVar8 = param_8[1] * 0.01745329238474369;
  local_230 = *param_8 * 0.01745329238474369;
  local_1a0 = param_9[2] * 0.01745329238474369;
  dVar16 = param_9[1] * 0.01745329238474369;
  dVar13 = *param_9 * 0.01745329238474369;
  local_234 = param_1;
  FUN_14022d702(&local_178,&local_138,&local_150);
  uVar25 = local_168._0_4_;
  uVar27 = local_168._4_4_;
  uVar28 = local_168._8_4_;
  uVar29 = local_168._12_4_;
  dVar6 = local_168._0_8_ * -1.0;
  dVar17 = local_168._8_8_ * 1.0;
  dVar18 = (double)CONCAT44(uStack_174,local_178);
  dVar11 = (double)CONCAT44(uStack_174,local_178);
  dVar12 = (double)CONCAT44(uStack_16c,uStack_170);
  dVar19 = (double)CONCAT44(uStack_16c,uStack_170);
  dVar21 = dVar20 * dVar6 * 1.0 + dVar9 * dVar12 + (dVar17 * dVar3 - dVar18 * dVar10 * 1.0);
  dVar22 = dVar3 * dVar6 * -1.0 + dVar10 * dVar19 + (dVar17 * dVar20 - dVar11 * dVar9 * -1.0);
  local_1c8 = 0.0;
  if (local_168._8_8_ < 0.0) {
    uStack_174 = uStack_174 ^ 0x80000000;
    uStack_16c = uStack_16c ^ 0x80000000;
    dVar7 = -local_168._0_8_;
    uVar27 = (undefined4)((ulonglong)dVar7 >> 0x20);
    uVar29 = uVar29 ^ 0x80000000;
    local_168._8_4_ = uVar28;
    local_168._0_8_ = dVar7;
    local_168._12_4_ = uVar29;
  }
  _uStack_200 = CONCAT44(uStack_16c,uStack_170);
  dVar18 = dVar10 * dVar6 * -1.0 + ((dVar9 * dVar17 - dVar20 * dVar18 * 1.0) - dVar3 * dVar12);
  dVar20 = dVar9 * dVar6 * 1.0 + ((dVar10 * dVar17 - dVar3 * dVar11 * -1.0) - dVar20 * dVar19);
  local_1e8 = (double)CONCAT44(uVar27,uVar25);
  uStack_1e0 = CONCAT44(uVar29,uVar28);
  if (dVar22 < 0.0) {
    dVar18 = -dVar18;
    dVar20 = -dVar20;
  }
  local_228 = dVar8;
  uStack_204 = uStack_174;
  if (param_7 == '\x02') {
    local_188 = uStack_170;
    uStack_180 = uStack_170;
    if (dVar22 < 0.0) {
      dVar21 = -dVar21;
    }
    local_220 = param_6[2];
    dVar20 = *param_6;
    dVar3 = param_6[1];
    dVar17 = local_220 + dVar20 * -0.0;
    dVar9 = dVar3 * 0.0 + local_220 * -0.0;
    dVar17 = dVar17 + dVar17;
    dVar9 = dVar9 + dVar9;
    dVar10 = dVar20 + dVar3 * -0.0;
    dVar19 = dVar3 * -0.0 + dVar20 * 0.0;
    dVar18 = dVar20 * 0.0 - dVar3;
    dVar18 = dVar18 + dVar18;
    dVar6 = param_6[3];
    local_1c8 = (dVar20 * dVar17 - dVar9 * dVar3) + dVar6 * dVar18 + 0.0;
    local_198 = (local_220 * dVar9 - dVar18 * dVar20) + dVar6 * dVar17 + 0.0;
    dVar9 = (dVar3 * dVar18 - dVar17 * local_220) + dVar9 * dVar6 + 1.0;
    dVar17 = dVar20 * -0.0 + local_220 * 0.0;
    dVar18 = dVar3 * 0.0 - local_220;
    dVar17 = dVar17 + dVar17;
    dVar18 = dVar18 + dVar18;
    dVar10 = dVar10 + dVar10;
    local_1d8 = (dVar20 * dVar17 - dVar18 * dVar3) + dVar6 * dVar10 + 0.0;
    local_1b8 = (local_220 * dVar18 - dVar10 * dVar20) + dVar6 * dVar17 + 1.0;
    dVar12 = (dVar3 * dVar10 - dVar17 * local_220) + dVar18 * dVar6 + 0.0;
    dVar19 = dVar19 + dVar19;
    dVar17 = local_220 * 0.0 - dVar20;
    dVar18 = local_220 * -0.0 + dVar3;
    dVar17 = dVar17 + dVar17;
    dVar18 = dVar18 + dVar18;
    dVar10 = (dVar20 * dVar17 - dVar18 * dVar3) + dVar6 * dVar19 + 1.0;
    dVar11 = (local_220 * dVar18 - dVar19 * dVar20) + dVar6 * dVar17 + 0.0;
    dVar3 = (dVar3 * dVar19 - dVar17 * local_220) + dVar18 * dVar6 + 0.0;
    local_1e8 = (double)CONCAT44(uStack_16c,uStack_170);
    uStack_1e0 = CONCAT44(uStack_16c,uStack_170);
    dVar18 = dVar21;
    local_1f0 = dVar16;
    uStack_184 = uStack_16c;
    uStack_17c = uStack_16c;
LAB_1479270f6:
    local_218._0_8_ = dVar13;
    dVar20 = (double)CONCAT44(uStack_174,local_178);
    dVar6 = local_230;
LAB_147927101:
    uStack_190 = 0;
    uStack_1b0 = 0;
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    fVar15 = (float)dVar6;
    fVar26 = (float)dVar13;
    fVar23 = (float)dVar8;
    local_208 = (float)dVar16;
    fVar24 = (float)dVar20;
    local_230 = (double)CONCAT44(local_230._4_4_,(float)local_1e8);
    fVar30 = (float)dVar18;
    if ((fVar15 == fVar26) && (!NAN(fVar15) && !NAN(fVar26))) {
      local_218 = ZEXT416((uint)fVar30);
      uVar25 = (undefined4)local_198;
      uVar27 = local_198._4_4_;
      goto LAB_14792716d;
    }
    fVar31 = local_234;
    if (fVar26 - fVar15 < 6.2831855) {
      local_218 = ZEXT416((uint)fVar30);
      local_1e8 = dVar10;
      fVar30 = sinf(fVar15 * 0.5);
      fVar15 = local_234;
      fVar31 = ((fVar30 - fVar24) + (fVar30 - fVar24)) / local_234;
      fVar30 = sinf(fVar26 * 0.5);
      dVar20 = local_198;
      uStack_118 = param_5;
      stack0xfffffffffffffef8 = local_198;
      local_110._0_8_ = dVar9;
      local_100 = local_1c8;
      uStack_f8 = 0;
      local_f0 = 0x7f7fffff00000000;
      local_120 = param_3;
      fStack_f4 = fVar31;
      FUN_14792413a();
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_14793552e(param_2,iVar4);
      }
      lVar5 = *param_2;
      lVar14 = (longlong)iVar4 * 0x40;
      puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar14);
      *puVar1 = (undefined4)local_f0;
      puVar1[1] = local_f0._4_4_;
      puVar1[2] = uStack_e8;
      puVar1[3] = uStack_e4;
      puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar14);
      *puVar1 = (undefined4)local_100;
      puVar1[1] = local_100._4_4_;
      puVar1[2] = uStack_f8;
      puVar1[3] = fStack_f4;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_110._0_8_;
      puVar2[1] = stack0xfffffffffffffef8;
      *(undefined8 *)(lVar5 + lVar14) = local_120;
      ((undefined8 *)(lVar5 + lVar14))[1] = uStack_118;
      local_100 = -local_1c8;
      uStack_118 = param_5;
      local_110._8_4_ = SUB84(dVar20,0);
      local_110._0_8_ = -dVar9;
      uStack_104 = (uint)((ulonglong)dVar20 >> 0x20) ^ 0x80000000;
      uStack_f8 = 0;
      local_f0 = 0x7f7fffff00000000;
      local_120 = param_3;
      fStack_f4 = ((fVar24 - fVar30) + (fVar24 - fVar30)) / fVar15;
      FUN_14792413a();
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_14793552e(param_2,iVar4);
      }
      lVar5 = *param_2;
      lVar14 = (longlong)iVar4 * 0x40;
      puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar14);
      *puVar1 = (undefined4)local_f0;
      puVar1[1] = local_f0._4_4_;
      puVar1[2] = uStack_e8;
      puVar1[3] = uStack_e4;
      puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar14);
      *puVar1 = (undefined4)local_100;
      puVar1[1] = local_100._4_4_;
      puVar1[2] = uStack_f8;
      puVar1[3] = fStack_f4;
      puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar14);
      *puVar1 = local_110._0_4_;
      puVar1[1] = local_110._4_4_;
      puVar1[2] = local_110._8_4_;
      puVar1[3] = uStack_104;
      *(undefined8 *)(lVar5 + lVar14) = local_120;
      ((undefined8 *)(lVar5 + lVar14))[1] = uStack_118;
      fVar31 = local_234;
      dVar10 = local_1e8;
      goto LAB_147927220;
    }
  }
  else {
    if (param_7 == '\x01') {
      dVar3 = param_6[2];
      dVar6 = *param_6;
      dVar17 = param_6[1];
      dVar8 = dVar6 * 0.0 - dVar17;
      local_228 = dVar6 * -0.0;
      dVar10 = dVar17 * 0.0 + dVar3 * -0.0;
      dVar8 = dVar8 + dVar8;
      dVar9 = dVar3 + local_228 + dVar3 + local_228;
      dVar10 = dVar10 + dVar10;
      dVar16 = param_6[3];
      local_1c8 = (dVar6 * dVar9 - dVar10 * dVar17) + dVar16 * dVar8 + 0.0;
      local_198 = (dVar3 * dVar10 - dVar8 * dVar6) + dVar16 * dVar9 + 0.0;
      dVar9 = (dVar17 * dVar8 - dVar9 * dVar3) + dVar10 * dVar16 + 1.0;
      dVar10 = dVar3 * 0.0 - dVar6;
      dVar18 = dVar3 * -0.0 + dVar17;
      dVar10 = dVar10 + dVar10;
      dVar18 = dVar18 + dVar18;
      dVar8 = dVar6 * 0.0 + dVar17 * -0.0;
      dVar8 = dVar8 + dVar8;
      local_1d8 = (dVar6 * dVar10 - dVar18 * dVar17) + dVar16 * dVar8 + 1.0;
      local_1b8 = (dVar3 * dVar18 - dVar8 * dVar6) + dVar16 * dVar10 + 0.0;
      dVar12 = (dVar17 * dVar8 - dVar10 * dVar3) + dVar18 * dVar16 + 0.0;
      dVar19 = dVar3 * 0.0 + local_228;
      dVar18 = dVar17 * 0.0 - dVar3;
      dVar19 = dVar19 + dVar19;
      dVar18 = dVar18 + dVar18;
      dVar8 = dVar17 * -0.0 + dVar6;
      dVar8 = dVar8 + dVar8;
      dVar10 = (dVar6 * dVar19 - dVar18 * dVar17) + dVar16 * dVar8 + 0.0;
      dVar11 = (dVar3 * dVar18 - dVar8 * dVar6) + dVar16 * dVar19 + 1.0;
      dVar3 = (dVar17 * dVar8 - dVar19 * dVar3) + dVar18 * dVar16 + 0.0;
      dVar18 = dVar20;
      dVar16 = local_1a0;
      dVar8 = local_220;
      goto LAB_1479270f6;
    }
    fVar15 = 0.0;
    fVar23 = 0.0;
    local_208 = 0.0;
    fVar24 = 0.0;
    local_230 = (double)((ulonglong)local_230 & 0xffffffff00000000);
    local_218 = ZEXT816(0);
    dVar9 = 0.0;
    local_1d8 = 0.0;
    local_1b8 = 0.0;
    dVar12 = 0.0;
    dVar10 = 0.0;
    dVar11 = 0.0;
    dVar3 = 0.0;
    uVar25 = 0;
    uVar27 = 0;
    local_1f0 = dVar16;
    if (param_7 == '\0') {
      dVar20 = param_6[2];
      dVar3 = *param_6;
      dVar6 = param_6[1];
      dVar11 = dVar20 * 0.0 + dVar3 * -0.0;
      dVar13 = dVar6 + dVar20 * -0.0;
      dVar21 = dVar20 * -0.0 + dVar6 * 0.0;
      dVar9 = dVar6 * 0.0 - dVar20;
      dVar11 = dVar11 + dVar11;
      dVar9 = dVar9 + dVar9;
      dVar10 = dVar3 + dVar6 * -0.0;
      dVar10 = dVar10 + dVar10;
      local_188 = uStack_170;
      uStack_180 = uStack_170;
      dVar17 = param_6[3];
      local_1c8 = (dVar3 * dVar11 - dVar9 * dVar6) + dVar17 * dVar10 + 0.0;
      local_198 = (dVar20 * dVar9 - dVar10 * dVar3) + dVar17 * dVar11 + 1.0;
      dVar9 = (dVar6 * dVar10 - dVar11 * dVar20) + dVar9 * dVar17 + 0.0;
      dVar11 = dVar20 * 0.0 - dVar3;
      dVar11 = dVar11 + dVar11;
      dVar13 = dVar13 + dVar13;
      dVar10 = dVar6 * -0.0 + dVar3 * 0.0;
      dVar10 = dVar10 + dVar10;
      local_1d8 = (dVar3 * dVar11 - dVar13 * dVar6) + dVar17 * dVar10 + 1.0;
      local_1b8 = (dVar20 * dVar13 - dVar10 * dVar3) + dVar17 * dVar11 + 0.0;
      dVar12 = (dVar6 * dVar10 - dVar11 * dVar20) + dVar13 * dVar17 + 0.0;
      dVar19 = dVar3 * 0.0 - dVar6;
      dVar13 = dVar3 * -0.0 + dVar20;
      dVar19 = dVar19 + dVar19;
      dVar13 = dVar13 + dVar13;
      dVar21 = dVar21 + dVar21;
      dVar10 = (dVar3 * dVar13 - dVar21 * dVar6) + dVar17 * dVar19 + 0.0;
      dVar11 = (dVar20 * dVar21 - dVar19 * dVar3) + dVar17 * dVar13 + 0.0;
      dVar3 = (dVar6 * dVar19 - dVar13 * dVar20) + dVar21 * dVar17 + 1.0;
      dVar20 = (double)CONCAT44(uStack_16c,uStack_170);
      uStack_184 = uStack_16c;
      uStack_17c = uStack_16c;
      dVar13 = dVar16;
      dVar6 = dVar8;
      dVar16 = local_1a0;
      dVar8 = local_220;
      goto LAB_147927101;
    }
LAB_14792716d:
    uStack_1b0 = 0;
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    fVar15 = sinf(fVar15 * 0.5);
    fVar31 = local_234;
    fStack_f4 = ((fVar15 - fVar24) + (fVar15 - fVar24)) / local_234;
    uStack_118 = param_5;
    uStack_104 = uVar27;
    local_110._8_4_ = uVar25;
    local_110._0_8_ = dVar9;
    local_100 = local_1c8;
    uStack_f8 = 0;
    local_f0 = 0x7f7fffffff7fffff;
    local_120 = param_3;
    FUN_14792413a();
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_14793552e(param_2,iVar4);
    }
    lVar5 = *param_2;
    lVar14 = (longlong)iVar4 * 0x40;
    puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar14);
    *puVar1 = (undefined4)local_f0;
    puVar1[1] = local_f0._4_4_;
    puVar1[2] = uStack_e8;
    puVar1[3] = uStack_e4;
    puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar14);
    *puVar1 = (undefined4)local_100;
    puVar1[1] = local_100._4_4_;
    puVar1[2] = uStack_f8;
    puVar1[3] = fStack_f4;
    puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar14);
    *puVar1 = local_110._0_4_;
    puVar1[1] = local_110._4_4_;
    puVar1[2] = local_110._8_4_;
    puVar1[3] = uStack_104;
    *(undefined8 *)(lVar5 + lVar14) = local_120;
    ((undefined8 *)(lVar5 + lVar14))[1] = uStack_118;
LAB_147927220:
    fVar30 = (float)local_218._0_4_;
  }
  fVar24 = local_208;
  fVar15 = local_230._0_4_;
  if ((fVar23 != local_208) || (NAN(fVar23) || NAN(local_208))) {
    if (6.2831855 <= local_208 - fVar23) goto LAB_1479272f0;
    fVar23 = sinf(fVar23 * 0.5);
    fVar31 = local_234;
    fVar23 = fVar23 - fVar15;
    fVar26 = (fVar23 + fVar23) / local_234;
    fVar23 = sinf(fVar24 * 0.5);
    dVar20 = local_1b8;
    fVar15 = fVar15 - fVar23;
    uStack_118 = param_5;
    stack0xfffffffffffffef8 = local_1b8;
    local_110._0_8_ = dVar12;
    local_100 = local_1d8;
    uStack_f8 = 0;
    local_f0 = 0x7f7fffff00000000;
    local_120 = param_3;
    fStack_f4 = fVar26;
    FUN_14792413a();
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_14793552e(param_2,iVar4);
    }
    lVar5 = *param_2;
    lVar14 = (longlong)iVar4 * 0x40;
    puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar14);
    *puVar1 = (undefined4)local_f0;
    puVar1[1] = local_f0._4_4_;
    puVar1[2] = uStack_e8;
    puVar1[3] = uStack_e4;
    puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar14);
    *puVar1 = (undefined4)local_100;
    puVar1[1] = local_100._4_4_;
    puVar1[2] = uStack_f8;
    puVar1[3] = fStack_f4;
    puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
    *puVar2 = local_110._0_8_;
    puVar2[1] = stack0xfffffffffffffef8;
    *(undefined8 *)(lVar5 + lVar14) = local_120;
    ((undefined8 *)(lVar5 + lVar14))[1] = uStack_118;
    local_100 = -local_1d8;
    local_110._8_4_ = SUB84(dVar20,0);
    local_110._0_8_ = -dVar12;
    uStack_104 = (uint)((ulonglong)dVar20 >> 0x20) ^ 0x80000000;
    local_f0 = 0x7f7fffff00000000;
    fStack_f4 = (fVar15 + fVar15) / fVar31;
  }
  else {
    stack0xfffffffffffffef8 = local_1b8;
    local_110._0_8_ = dVar12;
    local_100 = local_1d8;
    local_f0 = 0x7f7fffffff7fffff;
    fStack_f4 = ((fVar23 - local_230._0_4_) * (param_10 + param_10)) / fVar31;
  }
  uStack_118 = param_5;
  uStack_f8 = 0;
  local_120 = param_3;
  FUN_14792413a();
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_14793552e(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar14 = (longlong)iVar4 * 0x40;
  puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar14);
  *puVar1 = (undefined4)local_f0;
  puVar1[1] = local_f0._4_4_;
  puVar1[2] = uStack_e8;
  puVar1[3] = uStack_e4;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar14);
  *puVar1 = (undefined4)local_100;
  puVar1[1] = local_100._4_4_;
  puVar1[2] = uStack_f8;
  puVar1[3] = fStack_f4;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar14);
  *puVar1 = local_110._0_4_;
  puVar1[1] = local_110._4_4_;
  puVar1[2] = local_110._8_4_;
  puVar1[3] = uStack_104;
  puVar1 = (undefined4 *)(lVar5 + lVar14);
  *puVar1 = (undefined4)local_120;
  puVar1[1] = local_120._4_4_;
  puVar1[2] = (undefined4)uStack_118;
  puVar1[3] = uStack_118._4_4_;
LAB_1479272f0:
  fStack_f4 = ((param_10 + param_10) * -fVar30) / fVar31;
  uStack_118 = param_5;
  stack0xfffffffffffffef8 = dVar11;
  local_110._0_8_ = dVar3;
  uStack_f8 = 0;
  local_f0 = 0x7f7fffffff7fffff;
  local_120 = param_3;
  local_100 = dVar10;
  FUN_14792413a();
  iVar4 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_14793552e(param_2,iVar4);
  }
  lVar5 = *param_2;
  lVar14 = (longlong)iVar4 * 0x40;
  puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar14);
  *puVar1 = (undefined4)local_f0;
  puVar1[1] = local_f0._4_4_;
  puVar1[2] = uStack_e8;
  puVar1[3] = uStack_e4;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar14);
  *puVar1 = (undefined4)local_100;
  puVar1[1] = local_100._4_4_;
  puVar1[2] = uStack_f8;
  puVar1[3] = fStack_f4;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar14);
  *puVar1 = local_110._0_4_;
  puVar1[1] = local_110._4_4_;
  puVar1[2] = local_110._8_4_;
  puVar1[3] = uStack_104;
  puVar1 = (undefined4 *)(lVar5 + lVar14);
  *puVar1 = (undefined4)local_120;
  puVar1[1] = local_120._4_4_;
  puVar1[2] = (undefined4)uStack_118;
  puVar1[3] = uStack_118._4_4_;
  if ((local_e0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14792773e FUN_14792773e body=474 status=ok
// SIG undefined FUN_14792773e(void)

void FUN_14792773e(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined1 (*param_5) [16],undefined1 param_6,undefined8 param_7,
                  undefined8 param_8,undefined4 param_9)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 *puVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 *local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_60;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    local_88 = *param_5;
    local_78 = param_5[1];
  }
  else {
    dVar10 = *(double *)*param_5;
    dVar11 = *(double *)(*param_5 + 8);
    dVar12 = *(double *)param_5[1];
    dVar13 = *(double *)(param_5[1] + 8);
    dVar1 = *(double *)(param_3 + 0x38);
    dVar2 = *(double *)(param_3 + 0x38);
    dVar3 = *(double *)(param_3 + 0x28);
    dVar4 = *(double *)(param_3 + 0x28);
    dVar5 = *(double *)(param_3 + 0x20);
    dVar6 = *(double *)(param_3 + 0x20);
    dVar7 = *(double *)(param_3 + 0x30);
    dVar8 = *(double *)(param_3 + 0x30);
    dVar9 = dVar10 * dVar8 * 1.0 + dVar13 * dVar4 + dVar6 * dVar12 * -1.0 + dVar2 * dVar11;
    dVar2 = dVar12 * dVar8 * -1.0 + ((dVar6 * dVar10 * -1.0 + dVar2 * dVar13) - dVar4 * dVar11);
    local_88._8_4_ = SUB84(dVar9,0);
    local_88._0_8_ = dVar11 * dVar7 * -1.0 + dVar12 * dVar3 + dVar5 * dVar13 * 1.0 + dVar1 * dVar10;
    local_88._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_78._8_4_ = SUB84(dVar2,0);
    local_78._0_8_ =
         dVar13 * dVar7 * 1.0 + ((dVar5 * dVar11 * 1.0 + dVar1 * dVar12) - dVar3 * dVar10);
    local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  }
  puVar14 = &DAT_14c8463d0;
  if (param_4 != 0) {
    puVar14 = (undefined8 *)(param_4 + 0x20);
  }
  local_a8 = *(undefined4 *)puVar14;
  uStack_a4 = *(undefined4 *)((longlong)puVar14 + 4);
  uStack_a0 = *(undefined4 *)(puVar14 + 1);
  uStack_9c = *(undefined4 *)((longlong)puVar14 + 0xc);
  local_98 = *(undefined4 *)(puVar14 + 2);
  uStack_94 = *(undefined4 *)((longlong)puVar14 + 0x14);
  uStack_90 = *(undefined4 *)(puVar14 + 3);
  uStack_8c = *(undefined4 *)((longlong)puVar14 + 0x1c);
  local_d0 = &local_a8;
  local_b0 = param_9;
  local_b8 = param_8;
  local_c0 = param_7;
  local_c8 = param_6;
  local_d8 = param_4;
  FUN_1479262ba();
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792791a FUN_14792791a body=1197 status=ok
// SIG undefined FUN_14792791a(void)

void FUN_14792791a(float param_1,longlong *param_2,longlong param_3,double *param_4,longlong param_5
                  ,double *param_6,float param_7,uint param_8)

{
  uint *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_3 == 0) {
    dVar4 = *param_4;
    dVar17 = param_4[1];
    dVar5 = param_4[2];
  }
  else {
    dVar4 = *param_4;
    dVar17 = param_4[1];
    dVar5 = param_4[2];
    dVar6 = *(double *)(param_3 + 0x30);
    dVar7 = *(double *)(param_3 + 0x20);
    dVar8 = *(double *)(param_3 + 0x28);
    dVar10 = dVar8 * dVar5 - dVar17 * dVar6;
    dVar10 = dVar10 + dVar10;
    dVar9 = *(double *)(param_3 + 0x38);
    dVar19 = dVar7 * dVar17 - dVar4 * dVar8;
    dVar19 = dVar19 + dVar19;
    dVar18 = dVar6 * dVar4 - dVar5 * dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = (dVar7 * dVar18 - dVar10 * dVar8) + dVar9 * dVar19 + dVar5;
    dVar17 = (dVar6 * dVar10 - dVar19 * dVar7) + dVar9 * dVar18 + dVar17;
    dVar4 = (dVar8 * dVar19 - dVar18 * dVar6) + dVar10 * dVar9 + dVar4;
  }
  dVar6 = *param_6;
  dVar7 = param_6[1];
  dVar8 = param_6[2];
  dVar9 = *(double *)(param_5 + 0x30);
  dVar10 = *(double *)(param_5 + 0x20);
  dVar19 = *(double *)(param_5 + 0x28);
  dVar14 = dVar19 * dVar8 - dVar7 * dVar9;
  dVar14 = dVar14 + dVar14;
  dVar18 = *(double *)(param_5 + 0x38);
  dVar15 = dVar10 * dVar7 - dVar6 * dVar19;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar9 * dVar6 - dVar8 * dVar10;
  dVar13 = dVar13 + dVar13;
  dVar8 = (dVar10 * dVar13 - dVar14 * dVar19) + dVar18 * dVar15 + dVar8;
  dVar20 = (dVar9 * dVar14 - dVar15 * dVar10) + dVar18 * dVar13 + dVar7;
  dVar19 = (dVar19 * dVar15 - dVar13 * dVar9) + dVar14 * dVar18 + dVar6;
  dVar6 = dVar19 * dVar17 - dVar4 * dVar20;
  dVar7 = dVar8 * dVar4 - dVar5 * dVar19;
  dVar9 = dVar20 * dVar5 - dVar17 * dVar8;
  dVar10 = dVar6 * dVar6 + dVar9 * dVar9 + dVar7 * dVar7;
  if (((dVar10 != 1.0) || (dVar18 = dVar6, dVar13 = dVar7, dVar14 = dVar9, NAN(dVar10))) &&
     (dVar18 = DAT_14c8464f0, dVar13 = DAT_14c8464e8, dVar14 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar18 = dVar6 * dVar10;
    dVar13 = dVar7 * dVar10;
    dVar14 = dVar9 * dVar10;
  }
  dVar4 = dVar5 * dVar8 + dVar4 * dVar19 + dVar17 * dVar20;
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  dVar4 = acos(dVar4);
  uStack_c4 = -(uint)(param_7 == 0.0) & param_8 |
              ~-(uint)(param_7 == 0.0) & (uint)(((float)dVar4 + param_7 * -0.017453292) / param_1);
  local_c0 = ~-(uint)(0.0 < param_7) & 0xff7fffff;
  uStack_e8 = param_5;
  uStack_c8 = 0;
  uStack_bc = 0x7f7fffff;
  local_f0 = param_3;
  local_e0 = dVar14;
  uStack_d8 = dVar13;
  local_d0 = dVar18;
  FUN_14792413a();
  iVar11 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
    FUN_14793552e(param_2,iVar11);
  }
  lVar12 = *param_2;
  lVar16 = (longlong)iVar11 * 0x40;
  puVar1 = (uint *)(lVar12 + 0x30 + lVar16);
  *puVar1 = local_c0;
  puVar1[1] = uStack_bc;
  puVar1[2] = uStack_b8;
  puVar1[3] = uStack_b4;
  pdVar2 = (double *)(lVar12 + 0x20 + lVar16);
  *pdVar2 = local_d0;
  pdVar2[1] = (double)CONCAT44(uStack_c4,uStack_c8);
  puVar3 = (undefined4 *)(lVar12 + 0x10 + lVar16);
  *puVar3 = (undefined4)local_e0;
  puVar3[1] = local_e0._4_4_;
  puVar3[2] = (undefined4)uStack_d8;
  puVar3[3] = uStack_d8._4_4_;
  puVar3 = (undefined4 *)(lVar12 + lVar16);
  *puVar3 = (undefined4)local_f0;
  puVar3[1] = local_f0._4_4_;
  puVar3[2] = (undefined4)uStack_e8;
  puVar3[3] = uStack_e8._4_4_;
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147927dc8 FUN_147927dc8 body=798 status=ok
// SIG undefined FUN_147927dc8(void)

void FUN_147927dc8(float param_1,longlong *param_2,double *param_3,double *param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  double *local_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar8 = param_4[3];
  dVar4 = *param_4;
  dVar5 = param_4[1];
  dVar6 = param_4[2];
  local_110 = param_4[4];
  dStack_108 = param_4[5];
  dVar7 = dVar4 * 0.0 - dVar5 * 0.0;
  dVar2 = dVar5 * 1.0 - dVar6 * 0.0;
  dVar3 = dVar4 * -1.0 + dVar6 * 0.0;
  dVar2 = dVar2 + dVar2;
  dVar3 = dVar3 + dVar3;
  dVar7 = dVar7 + dVar7;
  local_d0 = dVar7 * dVar8 + 1.0 + (dVar3 * dVar4 - dVar2 * dVar5);
  local_e0 = (dVar7 * dVar5 - dVar3 * dVar6) + dVar8 * dVar2 + 0.0;
  local_d8 = (dVar6 * dVar2 - dVar4 * dVar7) + param_4[3] * dVar3 + 0.0;
  local_100 = param_4[6];
  local_c8 = (float)((param_3[2] * local_d0 + *param_3 * local_e0 + param_3[1] * local_d8) -
                    (local_100 * local_d0 + local_e0 * local_110 + dStack_108 * local_d8));
  if (*(char *)(param_3 + 0x65) != '\0') {
    local_c8 = local_c8 - *(float *)((longlong)param_3 + 0x32c);
  }
  local_c8 = local_c8 / param_1;
  dVar8 = local_d0 * local_d0 + local_e0 * local_e0 + local_d8 * local_d8;
  if ((dVar8 != 1.0) || (NAN(dVar8))) {
    if (9.99999993922529e-09 <= dVar8) {
      dVar8 = 1.0 / SQRT(dVar8);
      local_d0 = local_d0 * dVar8;
      local_d8 = local_d8 * dVar8;
      local_e0 = local_e0 * dVar8;
    }
    else {
      local_e0 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      local_d8 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_d0 = DAT_14c8464f0;
    }
  }
  local_120 = 0;
  local_f8 = (undefined4)DAT_14c8464e0;
  uStack_f4 = DAT_14c8464e0._4_4_;
  uStack_f0 = (undefined4)DAT_14c8464e8;
  uStack_ec = DAT_14c8464e8._4_4_;
  local_e8 = DAT_14c8464f0;
  local_c0 = 0x7f7fffff00000000;
  local_b8 = 0;
  local_118 = param_3;
  local_c4 = local_c8;
  FUN_1479245e0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14793549a(param_2,iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0xa0 + *param_2),&local_120,0xa0);
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479280e8 FUN_1479280e8 body=527 status=ok
// SIG undefined FUN_1479280e8(void)

void FUN_1479280e8(float param_1,longlong *param_2,double *param_3,longlong param_4,float param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  double *local_f8;
  double local_f0;
  undefined8 uStack_e8;
  double local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f0 = *(double *)(param_4 + 0x20);
  uStack_e8 = *(undefined8 *)(param_4 + 0x28);
  local_e0 = *(double *)(param_4 + 0x30);
  local_b0 = param_3[2] - local_e0;
  local_b8 = param_3[1] - *(double *)(param_4 + 0x28);
  local_c0 = *param_3 - local_f0;
  dVar2 = local_b0 * local_b0 + local_c0 * local_c0 + local_b8 * local_b8;
  if ((dVar2 != 1.0) || (NAN(dVar2))) {
    if (9.99999993922529e-09 <= dVar2) {
      dVar3 = 1.0 / SQRT(dVar2);
      local_b0 = local_b0 * dVar3;
      local_b8 = local_b8 * dVar3;
      local_c0 = local_c0 * dVar3;
    }
    else {
      local_c0 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      local_b8 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_b0 = DAT_14c8464f0;
    }
  }
  local_a8 = (float)(SQRT(dVar2) - (double)param_5);
  if (*(char *)(param_3 + 0x65) != '\0') {
    local_a8 = local_a8 + *(float *)((longlong)param_3 + 0x32c);
  }
  local_a8 = local_a8 / param_1;
  local_c8 = DAT_14c8464f0;
  local_d8 = (undefined4)DAT_14c8464e0;
  uStack_d4 = DAT_14c8464e0._4_4_;
  uStack_d0 = (undefined4)DAT_14c8464e8;
  uStack_cc = DAT_14c8464e8._4_4_;
  local_100 = 0;
  local_a0 = 0xff7fffff;
  local_98 = 0;
  local_f8 = param_3;
  local_a4 = local_a8;
  FUN_1479245e0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14793549a(param_2,iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0xa0 + *param_2),&local_100,0xa0);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479282f8 FUN_1479282f8 body=526 status=ok
// SIG undefined FUN_1479282f8(void)

void FUN_1479282f8(float param_1,longlong *param_2,double *param_3,longlong param_4,float param_5)

{
  int iVar1;
  double dVar2;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  double *local_f8;
  double local_f0;
  undefined8 uStack_e8;
  double local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f0 = *(double *)(param_4 + 0x20);
  uStack_e8 = *(undefined8 *)(param_4 + 0x28);
  local_e0 = *(double *)(param_4 + 0x30);
  local_b0 = param_3[2] - local_e0;
  local_b8 = param_3[1] - *(double *)(param_4 + 0x28);
  local_c0 = *param_3 - local_f0;
  dVar2 = local_b0 * local_b0 + local_c0 * local_c0 + local_b8 * local_b8;
  local_a8 = (float)(SQRT(dVar2) - (double)param_5);
  if (*(char *)(param_3 + 0x65) != '\0') {
    local_a8 = local_a8 - *(float *)((longlong)param_3 + 0x32c);
  }
  local_a8 = local_a8 / param_1;
  if ((dVar2 != 1.0) || (NAN(dVar2))) {
    if (9.99999993922529e-09 <= dVar2) {
      dVar2 = 1.0 / SQRT(dVar2);
      local_b0 = local_b0 * dVar2;
      local_b8 = local_b8 * dVar2;
      local_c0 = local_c0 * dVar2;
    }
    else {
      local_c0 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      local_b8 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_b0 = DAT_14c8464f0;
    }
  }
  local_100 = 0;
  local_d8 = (undefined4)DAT_14c8464e0;
  uStack_d4 = DAT_14c8464e0._4_4_;
  uStack_d0 = (undefined4)DAT_14c8464e8;
  uStack_cc = DAT_14c8464e8._4_4_;
  local_c8 = DAT_14c8464f0;
  local_a0 = 0x7f7fffff00000000;
  local_98 = 0;
  local_f8 = param_3;
  local_a4 = local_a8;
  FUN_1479245e0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14793549a(param_2,iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0xa0 + *param_2),&local_100,0xa0);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147928508 FUN_147928508 body=229 status=ok
// SIG undefined FUN_147928508(void)

void FUN_147928508(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = param_3[2];
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_a8 = *param_5;
  uStack_a4 = param_5[1];
  uStack_a0 = param_5[2];
  uStack_9c = param_5[3];
  local_98 = *(undefined8 *)(param_5 + 4);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1479355b4(param_1,iVar1);
  }
  puVar2 = (undefined8 *)(*param_1 + (longlong)iVar1 * 0x90);
  *puVar2 = param_2;
  puVar2[1] = param_4;
  puVar4 = local_88;
  puVar5 = puVar2 + 2;
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2[0xf] = local_98;
  *(undefined4 *)(puVar2 + 0xd) = local_a8;
  *(undefined4 *)((longlong)puVar2 + 0x6c) = uStack_a4;
  *(undefined4 *)(puVar2 + 0xe) = uStack_a0;
  *(undefined4 *)((longlong)puVar2 + 0x74) = uStack_9c;
  puVar2[0x10] = 0x4080000041400000;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479285ee FUN_1479285ee body=1179 status=ok
// SIG undefined FUN_1479285ee(void)

void FUN_1479285ee(float param_1,undefined8 *param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  double local_280 [19];
  undefined1 local_1e8 [128];
  undefined8 local_168 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_308;
  param_2[0x56] = param_2[2];
  param_2[0x54] = *param_2;
  param_2[0x55] = param_2[1];
  param_2[0x58] = param_2[4];
  param_2[0x59] = param_2[5];
  param_2[0x5a] = param_2[6];
  param_2[0x5b] = param_2[7];
  fVar13 = 0.7;
  fVar5 = 0.7;
  if (*(char *)(param_2 + 0x4f) == '\x01') {
    fVar5 = *(float *)((longlong)param_2 + 0x27c);
  }
  if (*(char *)(param_2 + 0x4e) == '\x01') {
    fVar13 = *(float *)((longlong)param_2 + 0x274);
  }
  fVar5 = powf(1.0 - fVar5,param_1);
  fVar13 = powf(1.0 - fVar13,param_1);
  dVar6 = (double)fVar5;
  param_2[8] = (double)param_2[8] * dVar6;
  param_2[9] = (double)param_2[9] * dVar6;
  param_2[10] = dVar6 * (double)param_2[10];
  dVar6 = (double)fVar13;
  param_2[0xb] = (double)param_2[0xb] * dVar6;
  param_2[0xc] = (double)param_2[0xc] * dVar6;
  param_2[0xd] = dVar6 * (double)param_2[0xd];
  if (*(char *)((longlong)param_2 + 0x284) == '\x01') {
    dVar7 = (double)*(float *)(param_2 + 0xe);
    dVar6 = (double)param_2[0x53] * dVar7;
    dVar8 = (double)param_2[0x52] * dVar7;
    dVar7 = dVar7 * (double)param_2[0x51];
  }
  else {
    plVar1 = (longlong *)FUN_144800528();
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    dVar11 = (double)ABS(*(float *)(lVar2 + 0x38));
    dVar9 = (double)*(float *)(param_2 + 0xe);
    dVar7 = (double)*(float *)(param_2 + 0x50);
    dVar6 = param_3[2] * dVar11 * dVar9 * dVar7;
    dVar8 = param_3[1] * dVar11 * dVar9 * dVar7;
    dVar7 = dVar11 * *param_3 * dVar9 * dVar7;
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    dVar10 = (double)*(float *)((longlong)param_2 + 0x24c);
    dVar11 = (double)*(float *)(param_2 + 0x49);
    dVar9 = (double)param_2[0x4c] * dVar10 * 250.0 * dVar11;
    dVar12 = (double)param_2[0x4b] * dVar10 * 250.0 * dVar11;
    dVar11 = dVar10 * (double)param_2[0x4a] * 250.0 * dVar11;
    if (9.99999993922529e-09 < dVar9 * dVar9 + dVar11 * dVar11 + dVar12 * dVar12) {
      dVar10 = (double)*(float *)(param_2 + 0x4d);
      dVar7 = dVar7 + dVar11 * dVar10;
      dVar8 = dVar8 + dVar12 * dVar10;
      dVar6 = dVar6 + dVar9 * dVar10;
    }
  }
  dVar11 = (double)param_1;
  param_2[8] = dVar7 * dVar11 + (double)param_2[8];
  param_2[9] = dVar8 * dVar11 + (double)param_2[9];
  param_2[10] = dVar6 * dVar11 + (double)param_2[10];
  dVar11 = dVar11 * 0.0;
  param_2[0xb] = (double)param_2[0xb] + dVar11;
  param_2[0xc] = (double)param_2[0xc] + dVar11;
  param_2[0xd] = dVar11 + (double)param_2[0xd];
  FUN_1403d6372(&local_e8,param_2 + 4);
  dVar6 = (double)*(float *)((longlong)param_2 + 0x74);
  lVar2 = 0x18;
  do {
    *(double *)((longlong)local_280 + lVar2) = *(double *)((longlong)param_2 + lVar2 + 0x68) * dVar6
    ;
    *(double *)((longlong)local_280 + lVar2 + 8) =
         *(double *)((longlong)param_2 + lVar2 + 0x70) * dVar6;
    *(double *)((longlong)local_280 + lVar2 + 0x10) =
         *(double *)((longlong)param_2 + lVar2 + 0x78) * dVar6;
    *(double *)((longlong)local_280 + lVar2 + 0x18) =
         *(double *)((longlong)param_2 + lVar2 + 0x80) * dVar6;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x98);
  FUN_1447fea8d(local_1e8,&local_e8,local_280 + 3);
  local_2e8 = local_e8;
  local_2e0 = local_c8;
  local_2d8 = local_a8;
  local_2d0 = local_88;
  local_2c8 = local_e0;
  local_2c0 = local_c0;
  local_2b8 = local_a0;
  local_2b0 = local_80;
  local_2a8 = local_d8;
  local_2a0 = local_b8;
  local_298 = local_98;
  local_290 = local_78;
  local_288 = local_d0;
  local_280[0] = local_b0;
  local_280[1] = (double)local_90;
  local_280[2] = (double)local_70;
  FUN_1447fea8d(local_168,local_1e8);
  puVar3 = local_168;
  puVar4 = param_2 + 0x20;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((local_60 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147928a8a FUN_147928a8a body=288 status=ok
// SIG undefined FUN_147928a8a(void)

void FUN_147928a8a(float param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_e8 [32];
  float local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar1 = (double)*(float *)((longlong)param_2 + 0x74);
  dVar3 = (double)param_1;
  param_2[0x30] = param_2[8] * dVar1 * dVar3 + *param_2;
  param_2[0x31] = param_2[9] * dVar1 * dVar3 + param_2[1];
  param_2[0x32] = param_2[10] * dVar1 * dVar3 + param_2[2];
  lVar2 = 0x18;
  do {
    *(double *)((longlong)&uStack_b0 + lVar2) =
         *(double *)((longlong)param_2 + lVar2 + 0x68) * dVar1;
    *(double *)((longlong)&local_a8 + lVar2) = *(double *)((longlong)param_2 + lVar2 + 0x70) * dVar1
    ;
    *(double *)((longlong)&uStack_a0 + lVar2) =
         *(double *)((longlong)param_2 + lVar2 + 0x78) * dVar1;
    *(double *)((longlong)local_98 + lVar2) = *(double *)((longlong)param_2 + lVar2 + 0x80) * dVar1;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x98);
  local_c8 = param_1;
  FUN_147925866(&local_b8,param_2 + 4,local_98,param_2 + 0xb);
  *(undefined4 *)(param_2 + 0x36) = local_a8;
  *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_a4;
  *(undefined4 *)(param_2 + 0x37) = uStack_a0;
  *(undefined4 *)((longlong)param_2 + 0x1bc) = uStack_9c;
  *(undefined4 *)(param_2 + 0x34) = local_b8;
  *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_b4;
  *(undefined4 *)(param_2 + 0x35) = uStack_b0;
  *(undefined4 *)((longlong)param_2 + 0x1ac) = uStack_ac;
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147928bac FUN_147928bac body=2512 status=ok
// SIG undefined FUN_147928bac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147928bac(longlong *param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_128 [32];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((char)param_1[0x11] == '\x01') {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      local_f8 = (double)param_1[0xc];
      local_108 = (double)param_1[10];
      dStack_100 = (double)param_1[0xb];
    }
    else {
      FUN_147925e8c(lVar2,&local_108);
    }
    lVar6 = param_1[1];
    if (lVar6 == 0) {
      local_b8 = (double)param_1[0xf];
      local_c8 = (double)param_1[0xd];
      dStack_c0 = (double)param_1[0xe];
    }
    else {
      FUN_147925e8c(lVar6,&local_c8);
    }
    if (lVar2 == 0) {
      dVar7 = (double)param_1[10];
      dVar13 = (double)param_1[0xb];
      dVar9 = (double)param_1[0xc];
    }
    else {
      dVar7 = (double)param_1[10];
      dVar13 = (double)param_1[0xb];
      dVar9 = (double)param_1[0xc];
      dVar10 = *(double *)(lVar2 + 0x30);
      dVar18 = *(double *)(lVar2 + 0x20);
      dVar15 = *(double *)(lVar2 + 0x28);
      dVar20 = dVar15 * dVar9 - dVar13 * dVar10;
      dVar20 = dVar20 + dVar20;
      dVar16 = *(double *)(lVar2 + 0x38);
      dVar19 = dVar18 * dVar13 - dVar7 * dVar15;
      dVar19 = dVar19 + dVar19;
      dVar14 = dVar10 * dVar7 - dVar9 * dVar18;
      dVar14 = dVar14 + dVar14;
      dVar9 = (dVar18 * dVar14 - dVar20 * dVar15) + dVar16 * dVar19 + dVar9;
      dVar13 = (dVar10 * dVar20 - dVar19 * dVar18) + dVar16 * dVar14 + dVar13;
      dVar7 = (dVar15 * dVar19 - dVar14 * dVar10) + dVar20 * dVar16 + dVar7;
    }
    if (lVar6 == 0) {
      dVar10 = (double)param_1[0xd];
      dVar18 = (double)param_1[0xe];
      dVar15 = (double)param_1[0xf];
    }
    else {
      dVar10 = (double)param_1[0xd];
      dVar18 = (double)param_1[0xe];
      dVar15 = (double)param_1[0xf];
      dVar16 = *(double *)(lVar6 + 0x30);
      dVar20 = *(double *)(lVar6 + 0x20);
      dVar19 = *(double *)(lVar6 + 0x28);
      dVar4 = dVar19 * dVar15 - dVar18 * dVar16;
      dVar4 = dVar4 + dVar4;
      dVar14 = *(double *)(lVar6 + 0x38);
      dVar5 = dVar20 * dVar18 - dVar10 * dVar19;
      dVar5 = dVar5 + dVar5;
      dVar3 = dVar16 * dVar10 - dVar15 * dVar20;
      dVar3 = dVar3 + dVar3;
      dVar15 = (dVar20 * dVar3 - dVar4 * dVar19) + dVar14 * dVar5 + dVar15;
      dVar18 = (dVar16 * dVar4 - dVar5 * dVar20) + dVar14 * dVar3 + dVar18;
      dVar10 = (dVar19 * dVar5 - dVar3 * dVar16) + dVar4 * dVar14 + dVar10;
    }
    dVar16 = local_b8 - local_f8;
    dVar20 = dStack_c0 - dStack_100;
    dVar19 = local_c8 - local_108;
    dVar14 = dVar16 * dVar16 + dVar19 * dVar19 + dVar20 * dVar20;
    if (((dVar14 != 1.0) || (dVar3 = dVar16, dVar4 = dVar20, dVar5 = dVar19, NAN(dVar14))) &&
       (dVar3 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar14)) {
      dVar5 = 1.0 / SQRT(dVar14);
      dVar3 = dVar16 * dVar5;
      dVar4 = dVar20 * dVar5;
      dVar5 = dVar19 * dVar5;
    }
    dVar16 = (double)(-*(float *)(param_1 + 0x10) * (float)SQRT(dVar14) * param_2);
    dVar3 = dVar3 * dVar16;
    dVar4 = dVar4 * dVar16;
    dVar5 = dVar5 * dVar16;
    if (lVar2 != 0) {
      *(double *)(lVar2 + 0x40) = *(double *)(lVar2 + 0x40) - dVar5;
      *(double *)(lVar2 + 0x48) = *(double *)(lVar2 + 0x48) - dVar4;
      *(double *)(lVar2 + 0x50) = *(double *)(lVar2 + 0x50) - dVar3;
      *(double *)(lVar2 + 0x58) = (dVar9 * dVar4 - dVar13 * dVar3) + *(double *)(lVar2 + 0x58);
      *(double *)(lVar2 + 0x60) = (dVar7 * dVar3 - dVar9 * dVar5) + *(double *)(lVar2 + 0x60);
      *(double *)(lVar2 + 0x68) = (dVar13 * dVar5 - dVar7 * dVar4) + *(double *)(lVar2 + 0x68);
      lVar6 = param_1[1];
    }
    if (lVar6 != 0) {
      *(double *)(lVar6 + 0x40) = *(double *)(lVar6 + 0x40) + dVar5;
      *(double *)(lVar6 + 0x48) = *(double *)(lVar6 + 0x48) + dVar4;
      *(double *)(lVar6 + 0x50) = *(double *)(lVar6 + 0x50) + dVar3;
      *(double *)(lVar6 + 0x58) = (dVar18 * dVar3 - dVar4 * dVar15) + *(double *)(lVar6 + 0x58);
      *(double *)(lVar6 + 0x60) = (dVar15 * dVar5 - dVar3 * dVar10) + *(double *)(lVar6 + 0x60);
      *(double *)(lVar6 + 0x68) = (dVar10 * dVar4 - dVar5 * dVar18) + *(double *)(lVar6 + 0x68);
    }
  }
  if (*(char *)((longlong)param_1 + 0x89) != '\x01') goto LAB_147929413;
  local_c8 = 0.0;
  dStack_c0 = 0.0;
  local_b8 = 0.0;
  cVar1 = (char)param_1[9];
  if (cVar1 == '\x02') {
    lVar2 = param_1[1];
    dVar7 = *(double *)(lVar2 + 0x30);
    dVar13 = *(double *)(lVar2 + 0x20);
    dVar9 = *(double *)(lVar2 + 0x28);
    dVar20 = dVar13 * 0.0 + dVar9 * -0.0;
    dVar18 = dVar9 - dVar7 * 0.0;
    dVar16 = dVar7 * 0.0 - dVar13;
    dVar20 = dVar20 + dVar20;
    dVar16 = dVar16 + dVar16;
    dVar18 = dVar18 + dVar18;
    dVar10 = *(double *)(lVar2 + 0x38);
    local_c8 = dVar18 * dVar10 + 0.0;
    dVar15 = dVar9 * dVar20;
    local_b8 = (dVar13 * dVar16 - dVar18 * dVar9) + dVar10 * dVar20 + 1.0;
    dStack_c0 = (dVar7 * dVar18 - dVar20 * dVar13) + dVar10 * dVar16 + 0.0;
LAB_1479291be:
    local_c8 = (dVar15 - dVar16 * dVar7) + local_c8;
  }
  else {
    if (cVar1 == '\x01') {
      lVar2 = param_1[1];
      dVar7 = *(double *)(lVar2 + 0x30);
      dVar10 = *(double *)(lVar2 + 0x20);
      dVar9 = *(double *)(lVar2 + 0x28);
      dVar19 = dVar10 - dVar9 * 0.0;
      dVar16 = dVar7 * 0.0 + dVar10 * -0.0;
      dVar18 = dVar9 * 0.0 - dVar7;
      dVar19 = dVar19 + dVar19;
      dVar16 = dVar16 + dVar16;
      dVar18 = dVar18 + dVar18;
      dVar13 = *(double *)(lVar2 + 0x38);
      dVar20 = dVar13 * dVar19;
      dStack_c0 = dVar13 * dVar16 + 1.0;
      local_c8 = dVar18 * dVar13 + 0.0;
LAB_147929194:
      dVar15 = dVar9 * dVar19;
      local_b8 = (dVar10 * dVar16 - dVar18 * dVar9) + dVar20 + 0.0;
      dStack_c0 = (dVar7 * dVar18 - dVar19 * dVar10) + dStack_c0;
      goto LAB_1479291be;
    }
    if (cVar1 == '\0') {
      lVar2 = param_1[1];
      dVar7 = *(double *)(lVar2 + 0x30);
      dVar10 = *(double *)(lVar2 + 0x20);
      dVar9 = *(double *)(lVar2 + 0x28);
      dVar16 = dVar7 - dVar10 * 0.0;
      dVar19 = dVar10 * 0.0 - dVar9;
      dVar18 = dVar9 * 0.0 + dVar7 * -0.0;
      dVar19 = dVar19 + dVar19;
      dVar16 = dVar16 + dVar16;
      dVar18 = dVar18 + dVar18;
      dVar13 = *(double *)(lVar2 + 0x38);
      dVar20 = dVar13 * dVar19;
      dStack_c0 = dVar13 * dVar16 + 0.0;
      local_c8 = dVar18 * dVar13 + 1.0;
      goto LAB_147929194;
    }
  }
  dVar7 = (double)param_1[6];
  dVar13 = (double)param_1[7];
  dVar9 = (double)param_1[8];
  dVar10 = (double)param_1[4];
  dVar18 = (double)param_1[2];
  dVar15 = (double)param_1[3];
  dVar20 = dVar15 * dVar9 - dVar13 * dVar10;
  dVar20 = dVar20 + dVar20;
  dVar16 = (double)param_1[5];
  dVar19 = dVar18 * dVar13 - dVar7 * dVar15;
  dVar19 = dVar19 + dVar19;
  dVar14 = dVar10 * dVar7 - dVar9 * dVar18;
  dVar14 = dVar14 + dVar14;
  local_d0 = (dVar18 * dVar14 - dVar20 * dVar15) + dVar16 * dVar19 + dVar9;
  local_d8 = (dVar10 * dVar20 - dVar19 * dVar18) + dVar16 * dVar14 + dVar13;
  local_e0 = (dVar15 * dVar19 - dVar14 * dVar10) + dVar20 * dVar16 + dVar7;
  FUN_14022d702(&local_108,&local_c8);
  dVar7 = dStack_f0;
  if (1.0 <= dStack_f0) {
    dVar7 = 1.0;
  }
  dVar7 = acos((double)(~-(ulonglong)(dStack_f0 < -1.0) & (ulonglong)dVar7 |
                       -(ulonglong)(dStack_f0 < -1.0) & 0xbff0000000000000));
  dVar13 = local_f8 * local_f8 + local_108 * local_108;
  dVar9 = dStack_100 * dStack_100 + 0.0;
  auVar11._0_8_ = dVar13 + dVar9;
  auVar11._8_8_ = dVar13 + dVar9;
  auVar8._8_8_ = -(ulonglong)(1e-08 <= auVar11._8_8_);
  auVar8._0_8_ = -(ulonglong)(1e-08 <= auVar11._0_8_);
  auVar12 = sqrtpd(auVar11,auVar11);
  auVar17 = divpd(_DAT_149934d80,auVar12);
  auVar12._8_8_ = dStack_100 * auVar17._8_8_;
  auVar12._0_8_ = local_108 * auVar17._0_8_;
  auVar12 = blendvpd(ZEXT816(0x3ff0000000000000),auVar12,auVar8);
  if ((-(ulonglong)(1e-08 <= auVar11._0_8_) & 1) == 0) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = local_f8 * auVar17._0_8_;
  }
  dVar10 = (double)((float)(dVar7 + dVar7) * -*(float *)((longlong)param_1 + 0x84));
  dVar9 = (double)param_2;
  dVar13 = dVar13 * dVar10 * dVar9;
  dVar7 = auVar12._8_8_ * dVar10 * dVar9;
  dVar9 = auVar12._0_8_ * dVar10 * dVar9;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    *(double *)(lVar2 + 0x58) = *(double *)(lVar2 + 0x58) + dVar9;
    *(double *)(lVar2 + 0x60) = *(double *)(lVar2 + 0x60) + dVar7;
    *(double *)(lVar2 + 0x68) = *(double *)(lVar2 + 0x68) + dVar13;
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    *(double *)(lVar2 + 0x58) = *(double *)(lVar2 + 0x58) - dVar9;
    *(double *)(lVar2 + 0x60) = *(double *)(lVar2 + 0x60) - dVar7;
    *(double *)(lVar2 + 0x68) = *(double *)(lVar2 + 0x68) - dVar13;
  }
LAB_147929413:
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14792957e FUN_14792957e body=120 status=ok
// SIG undefined FUN_14792957e(void)

undefined8 * FUN_14792957e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacc660) {
    FUN_144b3d300(&DAT_14cacc660);
    if (DAT_14cacc660 == -1) {
      FUN_1446f470e(&DAT_14cacc658,L"AnimPoseSearch",1);
      _Init_thread_footer(&DAT_14cacc660);
    }
  }
  *param_1 = DAT_14cacc658;
  return param_1;
}



// FUNCTION 1479295f6 FUN_1479295f6 body=165 status=ok
// SIG undefined FUN_1479295f6(void)

longlong FUN_1479295f6(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar2 + 8))(plVar2);
  plVar2 = (longlong *)FUN_1448c2e86();
  FUN_14792957e(&local_20);
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,local_20);
  if (iVar1 < 1) {
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_1448c2e86();
    FUN_14792957e(&local_28);
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,local_28,0);
    lVar3 = lVar3 + -8;
  }
  plVar2 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar2 + 0x10))(plVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479296d2 FUN_1479296d2 body=399 status=ok
// SIG undefined FUN_1479296d2(void)

void FUN_1479296d2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong **)(param_1 + 0x128) == (longlong *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x20))();
  }
  FUN_140002266(&local_70,L"%.02f",
                (double)((float)(iVar1 + *(int *)(param_1 + 0x120)) * 0.0009765625));
  FUN_1446f470e(&local_78,L"Compressed Size (KB)",1);
  local_60 = local_78;
  local_58 = (undefined4)local_70;
  uStack_54 = local_70._4_4_;
  uStack_50 = (undefined4)uStack_68;
  uStack_4c = uStack_68._4_4_;
  local_70 = 0;
  uStack_68 = 0;
  local_48 = 2;
  FUN_1407c67d8(param_2);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_70,L"%.2f",
                (double)*(int *)(param_1 + 0x1a0) / (double)*(int *)(param_1 + 0x1a4));
  FUN_1446f470e(&local_a0,L"Target Frame Rate",1);
  local_98 = local_a0;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 2;
  FUN_1407c67d8(param_2);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_a8,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_a8);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147929862 FUN_147929862 body=78 status=ok
// SIG undefined FUN_147929862(void)

longlong * FUN_147929862(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14040f326(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1479298b0 FUN_1479298b0 body=162 status=ok
// SIG undefined FUN_1479298b0(void)

void FUN_1479298b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  switchD_143c3d4dc::caseD_2e();
  lVar2 = *(longlong *)(param_1 + 0xc0);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  lVar2 = *(longlong *)(param_1 + 0xb8);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  lVar2 = *(longlong *)(param_1 + 0x148);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 147929958 FUN_147929958 body=68 status=ok
// SIG undefined FUN_147929958(void)

void FUN_147929958(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792999e FUN_14792999e body=474 status=ok
// SIG undefined FUN_14792999e(void)

void FUN_14792999e(longlong *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d0 [8];
  double local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  double dStack_90;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  fVar1 = (float)(**(code **)(*param_1 + 0x2b0))();
  fVar6 = 0.0;
  if (0.0 <= fVar1) {
    fVar1 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    if (0.0 < fVar1) {
      fVar6 = 0.0;
      fVar1 = 0.0;
      do {
        fVar5 = fVar1 + 0.01;
        FUN_1409cd860(param_1,&local_b8,fVar1,fVar5);
        fVar6 = (float)((double)fVar6 + SQRT(local_98 * local_98 + dStack_90 * dStack_90));
        fVar2 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
        fVar1 = fVar5;
      } while (fVar5 < fVar2);
    }
    fVar1 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    *(float *)(param_1 + 0x3f) = fVar6 / fVar1;
    uVar4 = (**(code **)(*param_1 + 0x2b0))(param_1);
    FUN_1409cd860(param_1,&local_b8,0,uVar4);
    dVar3 = local_98 * local_98 + dStack_90 * dStack_90;
    if (9.99999993922529e-09 < dVar3) {
      local_98 = local_98 * (1.0 / SQRT(dVar3));
    }
    else {
      local_98 = 0.0;
    }
    param_1[0x40] = (longlong)local_98;
    param_1[0x41] =
         -(ulonglong)(9.99999993922529e-09 < dVar3) & (ulonglong)(dStack_90 * (1.0 / SQRT(dVar3)));
    local_f8 = local_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    local_e8 = local_a8;
    uStack_e4 = uStack_a4;
    uStack_e0 = uStack_a0;
    uStack_dc = uStack_9c;
    FUN_1448052ee(&local_f8,local_d0);
    *(float *)(param_1 + 0x42) = (float)local_c8;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147929b7a FUN_147929b7a body=442 status=ok
// SIG undefined FUN_147929b7a(void)

undefined8 *
FUN_147929b7a(longlong *param_1,undefined8 *param_2,float param_3,float param_4,byte param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_188 [32];
  undefined1 local_168 [96];
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_108[0] = 0;
  local_104 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  if ((param_4 != 0.0) || (NAN(param_4))) {
    fVar7 = param_4;
    while( true ) {
      fVar4 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      fVar6 = fVar7 + param_3;
      bVar5 = -(fVar6 < 0.0 || fVar4 < fVar6);
      if ((bVar5 & 1) != 0) {
        if (fVar4 <= fVar6) {
          fVar6 = fVar4;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
      }
      FUN_1409cd860(param_1,local_168);
      FUN_140167042(local_108,local_168);
      if ((bVar5 & param_5) != 1) break;
      fVar7 = fVar7 - (fVar6 - param_3);
      param_3 = 0.0;
      if (param_4 < 0.0) {
        param_3 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      }
    }
  }
  puVar2 = local_f8;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_90 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147929d36 FUN_147929d36 body=365 status=ok
// SIG undefined FUN_147929d36(void)

void FUN_147929d36(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *param_2;
  puVar2 = (undefined8 *)param_2[1];
  lVar3 = param_2[2];
  cVar4 = (**(code **)(*param_1 + 0x2c0))();
  if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  FUN_1433e6492(param_1,param_2,param_3,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_144717630(&local_68,*(undefined8 *)(lVar1 + 0x10));
  if (puVar2 != &local_88) {
    uStack_80 = uStack_80 & 0xffffffff00000000;
    local_70 = puVar2[3];
    local_78 = 0;
  }
  FUN_1447166a4(local_e0,&local_68,&local_88,&local_c8);
  FUN_14792a07c(param_1,local_e0,param_3);
  FUN_1433cebfc(lVar1,&local_68);
  FUN_14092124e(puVar2,&local_88);
  FUN_140921370(&local_c8,lVar3);
  FUN_1447166b4(&local_c8);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147929ec2 FUN_147929ec2 body=413 status=ok
// SIG undefined FUN_147929ec2(void)

void FUN_147929ec2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *param_2;
  puVar2 = (undefined8 *)param_2[1];
  lVar3 = param_2[2];
  cVar4 = (**(code **)(*param_1 + 0x2c0))();
  if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
  }
  uVar5 = (**(code **)(*param_1 + 1000))(param_1);
  FUN_1433e6492(param_1,param_2,param_3,uVar5);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1447166a4(local_d0,&local_58,&local_78);
  FUN_144717630(&local_58,*(undefined8 *)(lVar1 + 0x10));
  if (puVar2 != &local_78) {
    bVar6 = (longlong)uStack_70 < 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if (bVar6) {
      FUN_14480ffb8(&local_78,0);
    }
    local_68 = 0;
    local_60 = puVar2[3];
  }
  FUN_14792a07c(param_1,local_d0,param_3);
  FUN_1433cec0c(lVar1);
  FUN_1433cec0c(&local_58);
  FUN_1433cebfc(lVar1,&local_58);
  FUN_14092124e(puVar2,&local_78);
  FUN_140921370(&local_b8,lVar3);
  FUN_1447166b4(&local_b8);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792a07c FUN_14792a07c body=433 status=ok
// SIG undefined FUN_14792a07c(void)

void FUN_14792a07c(longlong *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  double local_98 [4];
  longlong local_78;
  longlong local_68;
  char local_57;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar2 = *(char *)((longlong)param_1 + 0x151);
  if (cVar2 == '\x04') {
    local_a8 = (**(code **)(*param_1 + 1000))(param_1);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x154);
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 != '\x02') {
        if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
          FUN_1448859f0();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8,*(undefined8 *)(*param_2 + 0x10));
      }
      fVar5 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      dVar1 = 0.0;
      if (0.0 < fVar5) {
        dVar1 = *param_3;
        fVar5 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
        dVar1 = dVar1 / (double)fVar5;
        if (1.0 <= dVar1) {
          dVar1 = 1.0;
        }
        if (dVar1 <= 0.0) {
          dVar1 = 0.0;
        }
      }
      fVar5 = (float)(**(code **)(*(longlong *)param_1[0x2b] + 0x2b0))();
      FUN_1433e36f6(local_98,param_3);
      lVar3 = param_1[0x2b];
      local_98[0] = (double)fVar5 * dVar1;
      uVar4 = (**(code **)(*param_1 + 1000))(param_1);
      FUN_1433e6492(lVar3,param_2,local_98,uVar4);
      if (local_57 == '\x01') {
        local_57 = '\0';
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14792a1df;
    }
    local_a8 = (**(code **)(*param_1 + 1000))(param_1);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x154);
    param_1 = (longlong *)param_1[0x2b];
  }
  FUN_1433e722f(param_2,param_3,param_1,uVar4);
LAB_14792a1df:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14792a294 FUN_14792a294 body=174 status=ok
// SIG undefined FUN_14792a294(void)

longlong FUN_14792a294(longlong *param_1,longlong param_2,byte param_3)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x17f);
  cVar2 = (**(code **)(*param_1 + 1000))();
  if ((((bVar1 | param_3) & 1) == 0) || (cVar2 == '\0')) {
    if ((param_1[0x27] != 0) && (lVar5 = (longlong)(int)param_1[0x1e], lVar5 != 0)) {
      lVar4 = lVar5 * 3;
      lVar6 = 0;
      do {
        bVar7 = *(longlong *)(param_1[0x1d] + lVar6) == param_2;
        lVar4 = CONCAT71((int7)((ulonglong)lVar4 >> 8),bVar7);
        if (bVar7) {
          return lVar4;
        }
        bVar7 = lVar5 * 0xc + -0xc != lVar6;
        lVar6 = lVar6 + 0xc;
      } while (bVar7);
      return lVar4;
    }
  }
  else if ((longlong)(int)param_1[0x15] != 0) {
    plVar3 = (longlong *)param_1[0x14];
    lVar5 = (longlong)(int)param_1[0x15] * 0x90;
    do {
      if (*plVar3 == param_2) goto LAB_14792a2ed;
      plVar3 = plVar3 + 0x12;
      lVar5 = lVar5 + -0x90;
    } while (lVar5 != 0);
    plVar3 = (longlong *)0x0;
LAB_14792a2ed:
    return CONCAT71((int7)((ulonglong)plVar3 >> 8),plVar3 != (longlong *)0x0);
  }
  return 0;
}



// FUNCTION 14792a37e FUN_14792a37e body=284 status=ok
// SIG undefined FUN_14792a37e(void)

void FUN_14792a37e(uint *param_1,longlong param_2,byte param_3,longlong *param_4,undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_4[1];
  uVar3 = *param_1;
  uVar4 = (ulonglong)(int)uVar3;
  FUN_145c71ac8(&local_50,*(undefined8 *)(*param_4 + uVar4 * 0xc),param_5);
  if (local_50 != param_2) {
    iVar2 = (int)lVar1 + 1;
    do {
      uVar3 = (uint)uVar4;
      iVar2 = iVar2 + -1;
      if (iVar2 < 1) break;
      uVar3 = uVar3 + 1;
      *param_1 = uVar3;
      if ((uVar3 == *(uint *)(param_4 + 1) & (param_3 ^ 1)) != 0) break;
      uVar4 = (longlong)(int)uVar3 % (longlong)(int)*(uint *)(param_4 + 1);
      uVar3 = (uint)uVar4;
      uVar4 = uVar4 & 0xffffffff;
      *param_1 = uVar3;
      FUN_145c71ac8(&local_50,*(undefined8 *)(*param_4 + (longlong)(int)uVar3 * 0xc),param_5);
    } while (local_50 != param_2);
  }
  if ((((int)uVar3 < 0) || ((int)param_4[1] <= (int)uVar3)) ||
     (FUN_145c71ac8(&local_50,*(undefined8 *)(*param_4 + (ulonglong)uVar3 * 0xc),param_5),
     local_50 != param_2)) {
    *param_1 = 0xffffffff;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14792a49b FUN_14792a49b body=306 status=ok
// SIG undefined FUN_14792a49b(void)

void FUN_14792a49b(uint *param_1,longlong param_2,byte param_3,longlong *param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = (int)param_4[1];
  uVar3 = *param_1;
  uVar4 = (ulonglong)(int)uVar3;
  lVar5 = *param_4;
  FUN_145c71ac8(&local_50,*(undefined8 *)(lVar5 + uVar4 * 0xc),param_5);
  local_58 = param_2;
  if ((local_50 != param_2) && (0 < iVar1)) {
    uVar6 = ~uVar3 + iVar1;
    iVar2 = iVar1 + 1;
    while (((int)uVar4 == 0 & (param_3 ^ 1)) == 0) {
      uVar6 = (int)(uVar6 + 1) % iVar1;
      uVar3 = ~uVar6 + iVar1;
      uVar4 = (ulonglong)uVar3;
      *param_1 = uVar3;
      lVar5 = *param_4;
      FUN_145c71ac8(&local_50,*(undefined8 *)(lVar5 + (longlong)(int)uVar3 * 0xc),param_5);
      if ((local_50 == local_58) || (iVar2 = iVar2 + -1, iVar2 < 2)) goto LAB_14792a568;
    }
    uVar3 = 0;
  }
LAB_14792a568:
  if (((int)uVar3 < 0) ||
     (((int)param_4[1] <= (int)uVar3 ||
      (FUN_145c71ac8(&local_50,*(undefined8 *)(lVar5 + (ulonglong)uVar3 * 0xc),param_5),
      local_50 != local_58)))) {
    *param_1 = 0xffffffff;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14792a5ce FUN_14792a5ce body=562 status=ok
// SIG undefined FUN_14792a5ce(void)

void FUN_14792a5ce(longlong param_1,longlong *param_2,char param_3,undefined4 param_4,
                  undefined4 *param_5,int *param_6,int *param_7,undefined8 param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == '\0') {
    if ((longlong)*param_7 == -1) {
LAB_14792a67b:
      iVar3 = *param_6;
    }
    else {
      lVar1 = param_2[1];
      FUN_145c71ac8(&local_50,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x180) + (longlong)*param_7 * 0xc),
                    param_8);
      if (local_50 == lVar1) goto LAB_14792a67b;
      local_58 = param_8;
      FUN_14792a49b(param_7,lVar1,param_4,param_1 + 0x180);
      iVar3 = *param_7;
      if ((iVar3 == -1) || ((iVar3 == 0 && ((char)param_4 != '\0')))) {
        iVar3 = *(int *)(param_1 + 0x188);
      }
      iVar3 = iVar3 + -1;
      *param_6 = iVar3;
    }
    if (iVar3 != -1) {
      lVar1 = *param_2;
      FUN_145c71ac8(&local_50,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar3 * 0xc),param_8)
      ;
      if (local_50 != lVar1) {
        local_58 = param_8;
        FUN_14792a49b(param_6,lVar1,param_4,param_1 + 0x180);
      }
    }
    goto LAB_14792a687;
  }
  if ((longlong)*param_6 == -1) {
LAB_14792a620:
    iVar3 = *param_7;
  }
  else {
    lVar1 = *param_2;
    FUN_145c71ac8(&local_50,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x180) + (longlong)*param_6 * 0xc),param_8
                 );
    if (local_50 == lVar1) goto LAB_14792a620;
    local_58 = param_8;
    FUN_14792a37e(param_6,lVar1,param_4,param_1 + 0x180);
    iVar3 = *param_6 + 1;
    *param_7 = iVar3;
    if (*(int *)(param_1 + 0x188) <= iVar3) {
      iVar2 = -1;
      if ((char)param_4 != '\0') {
        iVar2 = iVar3 % *(int *)(param_1 + 0x188);
      }
      iVar3 = iVar2;
      *param_7 = iVar3;
    }
  }
  if (iVar3 != -1) {
    lVar1 = param_2[1];
    FUN_145c71ac8(&local_50,*(undefined8 *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar3 * 0xc),
                  param_8);
    if (local_50 != lVar1) {
      local_58 = param_8;
      FUN_14792a37e(param_7,lVar1,param_4,param_1 + 0x180);
    }
  }
LAB_14792a687:
  if ((*param_6 != -1) && (*param_7 != -1)) {
    uVar4 = FUN_14792a802(param_1,param_6,param_7,(int)param_2[2]);
    *param_5 = uVar4;
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792a802 FUN_14792a802 body=256 status=ok
// SIG undefined FUN_14792a802(void)

float FUN_14792a802(longlong *param_1,int *param_2,int *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((longlong)*param_2 == -1) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(param_1[0x30] + 8 + (longlong)*param_2 * 0xc);
  }
  if ((longlong)*param_3 == -1) {
    fVar2 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  }
  else {
    fVar2 = *(float *)(param_1[0x30] + 8 + (longlong)*param_3 * 0xc);
  }
  if (fVar2 <= fVar3) {
    fVar1 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    fVar3 = fVar3 - fVar1;
  }
  fVar1 = param_4 * (fVar2 - fVar3) + fVar3;
  param_2[1] = (int)(fVar3 - fVar1);
  param_3[1] = (int)(fVar2 - fVar1);
  if (fVar1 < 0.0) {
    fVar3 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    fVar1 = fVar1 + fVar3;
  }
  fVar3 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  if (fVar3 <= fVar1) {
    fVar1 = fVar3;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 14792a902 FUN_14792a902 body=420 status=ok
// SIG undefined FUN_14792a902(void)

undefined8 FUN_14792a902(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = FUN_147935920();
  lVar2 = param_1[2];
  lVar13 = (longlong)iVar5 * 0x10;
  lVar9 = *(longlong *)(lVar2 + lVar13);
  iVar5 = *(int *)(lVar2 + 8 + lVar13);
  lVar11 = (longlong)iVar5;
  if (lVar11 != 0) {
    lVar6 = 0;
    do {
      if (((*(int *)(lVar9 + 0x10 + lVar6) == (int)param_3[2]) &&
          (*(longlong *)(lVar9 + 8 + lVar6) == param_3[1])) &&
         (*(longlong *)(lVar9 + lVar6) == *param_3)) {
        iVar7 = (int)(lVar6 >> 2) * -0x33333333;
        plVar12 = (longlong *)(param_1[4] + lVar13);
        if (iVar7 == -1) goto LAB_14792a986;
        puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar12);
        goto LAB_14792aa6e;
      }
      lVar6 = lVar6 + 0x14;
    } while (lVar11 * 0x14 != lVar6);
  }
  plVar12 = (longlong *)(param_1[4] + lVar13);
LAB_14792a986:
  plVar10 = (longlong *)(lVar2 + lVar13);
  *(uint *)(plVar10 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar10 + 0xc) < iVar5 + 1U) {
    FUN_147935bd4(plVar10,iVar5);
    lVar9 = *plVar10;
  }
  *(int *)(lVar9 + 0x10 + lVar11 * 0x14) = (int)param_3[2];
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar2 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  puVar1 = (undefined4 *)(lVar9 + lVar11 * 0x14);
  *puVar1 = (int)*param_3;
  puVar1[1] = uVar3;
  puVar1[2] = (int)lVar2;
  puVar1[3] = uVar4;
  local_50 = CONCAT44(local_50._4_4_,(int)param_3[2]);
  FUN_144aa221c(lVar13 + *param_1);
  FUN_14791f98e(&local_50,param_2);
  iVar5 = (int)plVar12[1];
  *(uint *)(plVar12 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar12 + 0xc) < iVar5 + 1U) {
    FUN_14791fac6(plVar12,iVar5);
  }
  lVar2 = *plVar12;
  lVar9 = (longlong)iVar5 * 0x10;
  *(undefined8 *)(lVar2 + lVar9) = 0;
  *(undefined8 *)(lVar2 + lVar9) = local_50;
  local_50 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar9) = local_48;
  *(undefined4 *)(lVar2 + 0xc + lVar9) = local_44;
  puVar8 = (undefined8 *)(*plVar12 + lVar9);
  (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(*plVar12 + lVar9),1);
LAB_14792aa6e:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return *puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792aaa8 FUN_14792aaa8 body=639 status=ok
// SIG undefined FUN_14792aaa8(void)

void FUN_14792aaa8(longlong *param_1,longlong *param_2,float param_3,ulonglong param_4,
                  float *param_5,int *param_6,int *param_7,undefined8 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = param_4 & 0xffffffff;
  FUN_14792a5ce(param_1,param_2 + 2,0.0 <= param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1 = param_1 + 0x30;
  if (param_3 < 0.0) {
    iVar3 = *param_6;
    iVar6 = 0;
    do {
      if (iVar3 == -1) {
        param_3 = param_3 + *param_5;
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        *param_5 = param_3;
        break;
      }
      iVar4 = (int)param_2[1];
      if (iVar6 < iVar4) {
        *param_7 = iVar3;
        lVar2 = *param_2;
        FUN_14792a49b(param_6,*(undefined8 *)(lVar2 + (longlong)iVar6 * 0xc),uVar5,plVar1,param_8);
        iVar3 = *param_6;
        if (iVar3 == -1) {
          param_3 = *(float *)(lVar2 + 8 + (longlong)iVar6 * 0xc);
        }
        iVar6 = iVar6 + 1;
        iVar4 = (int)param_2[1];
      }
    } while (iVar6 < iVar4);
    if (*(longlong *)((longlong)param_2 + 0x24) == 0) {
      *param_6 = -1;
      return;
    }
    iVar3 = *param_6;
    if ((iVar3 != -1) && (0 < (int)param_2[1])) {
      *param_7 = iVar3;
      FUN_14792a49b(param_6,*(undefined8 *)((longlong)param_2 + 0x24),uVar5,plVar1,param_8);
      iVar3 = *param_6;
    }
    if (iVar3 == -1) {
      return;
    }
    iVar3 = *param_7;
  }
  else {
    iVar3 = *param_7;
    iVar6 = 0;
    do {
      if (iVar3 == -1) {
        fVar7 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
        fVar8 = param_3 + *param_5;
        if (fVar7 <= param_3 + *param_5) {
          fVar8 = fVar7;
        }
        *param_5 = fVar8;
        break;
      }
      iVar4 = (int)param_2[1];
      if (iVar6 < iVar4) {
        *param_6 = iVar3;
        lVar2 = *param_2;
        FUN_14792a37e(param_7,*(undefined8 *)(lVar2 + (longlong)iVar6 * 0xc),uVar5,plVar1,param_8);
        iVar3 = *param_7;
        if (iVar3 == -1) {
          param_3 = *(float *)(lVar2 + 8 + (longlong)iVar6 * 0xc);
        }
        iVar6 = iVar6 + 1;
        iVar4 = (int)param_2[1];
      }
    } while (iVar6 < iVar4);
    if (*(longlong *)((longlong)param_2 + 0x2c) == 0) {
      *param_7 = -1;
      return;
    }
    iVar3 = *param_7;
    if ((iVar3 != -1) && (0 < (int)param_2[1])) {
      *param_6 = iVar3;
      FUN_14792a37e(param_7,*(undefined8 *)((longlong)param_2 + 0x2c),uVar5,plVar1,param_8);
      iVar3 = *param_7;
    }
    if (*param_6 == -1) {
      return;
    }
  }
  if (iVar3 != -1) {
    fVar8 = (float)FUN_14792a802(param_1,param_6,param_7,*(undefined4 *)((longlong)param_2 + 0x34));
    *param_5 = fVar8;
  }
  return;
}



// FUNCTION 14792ad28 FUN_14792ad28 body=1292 status=ok
// SIG undefined FUN_14792ad28(void)

void FUN_14792ad28(longlong *param_1,longlong *param_2,char param_3,uint *param_4,uint *param_5,
                  float *param_6,undefined8 param_7)

{
  float *pfVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  uint *local_c8;
  longlong local_c0;
  uint *local_b8;
  int local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  
  local_e0 = param_7;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_2;
  if (param_3 != '\0') {
    lVar6 = param_2[1];
    if (*param_2 != 0 || lVar6 != 0) {
      local_c8 = param_5;
      if (*param_2 == 0) {
        *param_4 = 0xffffffff;
        lVar10 = param_1[0x31];
        if ((longlong)(int)lVar10 < 1) {
          lVar6 = param_2[1];
        }
        else {
          puVar9 = (undefined8 *)param_1[0x30];
          lVar6 = param_2[1];
          lVar13 = 0;
          do {
            FUN_145c71ac8(&local_98,*puVar9,local_e0);
            if (local_98 == lVar6) {
              *local_c8 = (uint)lVar13;
              goto LAB_14792b24f;
            }
            lVar13 = lVar13 + 1;
            puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
          } while ((int)lVar10 != lVar13);
        }
      }
      puVar8 = local_c8;
      if (lVar6 != 0) {
        uVar4 = (ulonglong)*(uint *)(param_1 + 0x31);
LAB_14792af37:
        if (0 < (int)uVar4) {
          fVar15 = *param_6;
          fVar17 = 3.4028235e+38;
          uVar12 = 1;
          lVar6 = 0x14;
          uVar11 = 0;
          do {
            lVar10 = param_1[0x30];
            local_d8 = uVar12;
            FUN_145c71ac8(&local_98,*(undefined8 *)(lVar10 + uVar11 * 0xc),local_e0);
            uVar5 = uVar11 + 1;
            uVar12 = local_d8;
            if (local_98 == *local_e8) {
              local_a8 = lVar10 + uVar11 * 0xc;
              iVar3 = (int)uVar4;
              if (0 < iVar3) {
                local_ac = iVar3 + (int)uVar5;
                local_a0 = local_e8[1];
                uVar4 = uVar5 & 0xffffffff;
                local_d0 = uVar5;
                local_c0 = lVar6;
                local_b8 = param_4;
                do {
                  uVar2 = (longlong)(int)uVar4 % (longlong)iVar3;
                  uVar12 = uVar2 & 0xffffffff;
                  FUN_145c71ac8(&local_98,*(undefined8 *)(lVar10 + uVar12 * 0xc),local_e0);
                  lVar6 = local_a8;
                  if (local_98 == local_a0) {
                    fVar18 = *(float *)(lVar10 + 8 + uVar12 * 0xc);
                    fVar14 = *(float *)(local_a8 + 8);
                    if (fVar18 < fVar14) {
                      fVar14 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
                      fVar18 = fVar18 + fVar14;
                      fVar14 = *(float *)(lVar6 + 8);
                    }
                    param_4 = local_b8;
                    lVar6 = local_c0;
                    uVar12 = local_d8;
                    fVar14 = (fVar18 - fVar14) * *(float *)(local_e8 + 2) + fVar14;
                    fVar18 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
                    if (fVar18 < fVar14) {
                      fVar18 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
                      fVar14 = fVar14 - fVar18;
                    }
                    uVar5 = local_d0;
                    if (ABS(fVar14 - fVar15) < fVar17) {
                      *param_4 = (uint)uVar11;
                      *local_c8 = (uint)uVar2;
                      fVar17 = (float)FUN_14792a802(param_1,param_4,local_c8,(int)local_e8[2]);
                      *param_6 = fVar17;
                      uVar5 = local_d0;
                      fVar17 = ABS(fVar14 - fVar15);
                    }
                    break;
                  }
                  uVar7 = (int)uVar4 + 1;
                  uVar4 = (ulonglong)uVar7;
                  uVar5 = local_d0;
                  lVar6 = local_c0;
                  param_4 = local_b8;
                  uVar12 = local_d8;
                } while ((int)uVar7 < local_ac);
              }
              if (*param_4 == 0xfffffffe) {
                fVar15 = *param_6;
                if (fVar15 < *(float *)(local_a8 + 8) || fVar15 == *(float *)(local_a8 + 8))
                goto LAB_14792b243;
                uVar7 = *(uint *)(param_1 + 0x31);
                uVar5 = uVar12 & 0xffffffff;
                if ((int)uVar12 < (int)uVar7) {
                  uVar5 = (ulonglong)uVar7;
                }
                goto LAB_14792b227;
              }
              uVar4 = (ulonglong)*(uint *)(param_1 + 0x31);
            }
            uVar12 = uVar12 + 1;
            lVar6 = lVar6 + 0xc;
            uVar11 = uVar5;
          } while ((longlong)uVar5 < (longlong)(int)uVar4);
        }
        goto LAB_14792ae76;
      }
      *local_c8 = 0xffffffff;
      uVar7 = *(uint *)(param_1 + 0x31);
      uVar4 = (ulonglong)uVar7;
      lVar10 = *local_e8;
      lVar6 = uVar4 * 0xc;
      do {
        lVar6 = lVar6 + -0xc;
        if ((int)uVar7 < 1) goto LAB_14792af37;
        FUN_145c71ac8(&local_98,*(undefined8 *)(param_1[0x30] + lVar6),local_e0);
        uVar7 = uVar7 - 1;
      } while (local_98 != lVar10);
      *param_4 = uVar7;
      uVar16 = (undefined4)local_e8[2];
      goto LAB_14792b25f;
    }
  }
  *param_4 = 0xffffffff;
  *param_5 = 0xffffffff;
  iVar3 = (int)param_1[0x31];
  if (0 < iVar3) {
    lVar6 = 0;
    lVar10 = 0;
    do {
      lVar13 = param_1[0x30];
      fVar15 = *(float *)(lVar13 + 8 + lVar6);
      fVar17 = *param_6;
      if ((fVar17 <= fVar15) ||
         (FUN_145c71ac8(&local_98,*(undefined8 *)(lVar13 + lVar6),local_e0), local_98 != *local_e8))
      {
        if ((fVar17 < fVar15) &&
           (FUN_145c71ac8(&local_98,*(undefined8 *)(lVar13 + lVar6),local_e0),
           local_98 == local_e8[1])) {
          *param_5 = (uint)lVar10;
          param_5[1] = (uint)(fVar15 - *param_6);
          break;
        }
      }
      else {
        *param_4 = (uint)lVar10;
        param_4[1] = (uint)(fVar15 - *param_6);
        iVar3 = (int)param_1[0x31];
      }
      lVar10 = lVar10 + 1;
      lVar6 = lVar6 + 0xc;
    } while (lVar10 < iVar3);
  }
  if (0.0 <= *param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_108);
  }
  goto LAB_14792ae76;
  while( true ) {
    uVar12 = uVar12 + 1;
    pfVar1 = (float *)(param_1[0x30] + lVar6);
    lVar6 = lVar6 + 0xc;
    if (fVar15 < *pfVar1 || fVar15 == *pfVar1) break;
LAB_14792b227:
    if ((longlong)(int)uVar7 <= (longlong)uVar12) goto LAB_14792b243;
  }
  uVar5 = uVar12 & 0xffffffff;
LAB_14792b243:
  *param_4 = (int)uVar5 - 1;
  *local_c8 = 0xffffffff;
LAB_14792b24f:
  uVar16 = (undefined4)local_e8[2];
  puVar8 = local_c8;
LAB_14792b25f:
  fVar15 = (float)FUN_14792a802(param_1,param_4,puVar8,uVar16);
  *param_6 = fVar15;
LAB_14792ae76:
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14792b2e2 FUN_14792b2e2 body=169 status=ok
// SIG undefined FUN_14792b2e2(void)

float FUN_14792b2e2(longlong param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    fVar7 = *param_3;
  }
  else {
    fVar1 = *param_3;
    fVar7 = fVar1;
    if (1 < *(int *)(param_1 + 0x188)) {
      uVar3 = (ulonglong)(*(int *)(param_1 + 0x188) - 1);
      pfVar2 = (float *)(*(longlong *)(param_1 + 0x180) + 0x14);
      bVar5 = true;
      uVar4 = 1;
      do {
        fVar7 = *pfVar2;
        if ((((fVar1 <= fVar7) && (*(longlong *)(pfVar2 + -5) == *param_2)) &&
            (*(longlong *)(pfVar2 + -2) == param_2[1])) &&
           (fVar7 = (fVar7 - pfVar2[-3]) * *(float *)(param_2 + 2) + pfVar2[-3], fVar1 <= fVar7))
        break;
        bVar5 = uVar4 < uVar3;
        pfVar2 = pfVar2 + 3;
        bVar6 = uVar4 != uVar3;
        uVar4 = uVar4 + 1;
      } while (bVar6);
      if (!bVar5) {
        fVar7 = fVar1;
      }
    }
  }
  return fVar7;
}



// FUNCTION 14792b432 FUN_14792b432 body=101 status=ok
// SIG undefined FUN_14792b432(void)

void FUN_14792b432(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  switchD_143c3d4dc::caseD_38();
  lVar1 = (**(code **)(*param_1 + 0x2f0))(param_1);
  lVar2 = FUN_14636c908();
  if (lVar2 != 0) {
    FUN_14484255c(param_2,(longlong)
                          (int)(-*(int *)(lVar2 + 0x5c) &
                               (*(int *)(lVar2 + 0x58) + *(int *)(lVar2 + 0x5c)) - 1U));
    FUN_14484255c(param_2,(longlong)*(int *)(lVar1 + 0xc) * 0x90);
    return;
  }
  return;
}



// FUNCTION 14792b4ac FUN_14792b4ac body=231 status=ok
// SIG undefined FUN_14792b4ac(void)

void FUN_14792b4ac(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined6 local_44;
  undefined2 uStack_3e;
  undefined6 uStack_3c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = &local_b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0x3f800000;
  uStack_a4 = 0;
  uStack_a0 = 0x3f800000;
  uStack_9c = 0;
  local_98 = 0x100;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (longlong *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_44 = 0;
  uStack_3e = 0;
  uStack_3c = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  (**(code **)(*param_1 + 0x2c8))();
  local_28 = (undefined4)local_c8;
  uStack_24 = local_c8._4_4_;
  uStack_20 = (undefined4)uStack_c0;
  uStack_1c = uStack_c0._4_4_;
  lVar3 = *param_4;
  lVar5 = param_4[1];
  lVar4 = param_4[1];
  *(undefined4 *)param_4 = (undefined4)local_c8;
  *(undefined4 *)((longlong)param_4 + 4) = local_c8._4_4_;
  *(undefined4 *)(param_4 + 1) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)param_4 + 0xc) = uStack_c0._4_4_;
  local_c8 = lVar3;
  uStack_c0 = lVar4;
  FUN_1448262fc(lVar3,(int)lVar5);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  plVar6 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792b59e FUN_14792b59e body=237 status=ok
// SIG undefined FUN_14792b59e(void)

int FUN_14792b59e(longlong *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x318))(param_1,&local_20);
  fVar2 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  dVar6 = ((double)local_20 * (double)fVar2) / (double)local_1c;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6;
  auVar5 = roundpd(auVar5,auVar5,1);
  dVar4 = auVar5._0_8_;
  dVar6 = dVar6 - dVar4;
  if (2147483647.0 <= dVar4) {
    dVar4 = 2147483647.0;
  }
  if (dVar4 <= -2147483648.0) {
    dVar4 = -2147483648.0;
  }
  iVar1 = (int)dVar6;
  fVar3 = (float)dVar6 - (float)iVar1;
  fVar2 = fVar3;
  if (0.99999994 <= fVar3) {
    fVar2 = 0.99999994;
  }
  fVar2 = (float)(~-(uint)(0.0 < fVar3) & (uint)fVar3 | (uint)fVar2 & -(uint)(0.0 < fVar3)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar2) {
    fVar2 = 0.99999994;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (uint)(0.5 <= fVar2) + (int)dVar4 + iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792b68c FUN_14792b68c body=151 status=ok
// SIG undefined FUN_14792b68c(void)

undefined8 * FUN_14792b68c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacc798) {
    FUN_144b3d300(&DAT_14cacc798);
    if (DAT_14cacc798 == -1) {
      plVar1 = (longlong *)FUN_14143f0c0();
      lVar3 = plVar1[0x22];
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 1000))(plVar1);
        lVar3 = plVar1[0x22];
      }
      puVar2 = (undefined8 *)FUN_1478d4a86(lVar3);
      DAT_14cacc790 = *puVar2;
      _Init_thread_footer(&DAT_14cacc798);
    }
  }
  *param_2 = DAT_14cacc790;
  return param_2;
}



// FUNCTION 14792b72c FUN_14792b72c body=139 status=ok
// SIG undefined FUN_14792b72c(void)

void FUN_14792b72c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1447166a4(local_80,param_2,param_3,&local_68);
  (**(code **)(*param_1 + 0x328))(param_1,local_80,param_4);
  FUN_1447166b4(&local_68);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792b7c8 FUN_14792b7c8 body=399 status=ok
// SIG undefined FUN_14792b7c8(void)

int FUN_14792b7c8(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58;
  longlong *local_50;
  int *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14010318a(param_2,&local_50,0);
  plVar6 = local_50;
  if ((int)local_48 == 0) {
    plVar6 = (longlong *)&DAT_149dfb77a;
  }
  FUN_1446f470e(&local_58,plVar6,1);
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    uVar2 = (uint)((ulonglong)local_58 >> 0x10);
    uVar4 = (uint)local_58 & 0xffff;
    lVar3 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xe8) - 1U &
                             (int)((ulonglong)local_58 >> 0x20) + ((uint)local_58 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar5 * 0x14);
        if (*plVar6 == local_58) {
          if ((plVar6 != (longlong *)0x0) && (plVar6 + 1 != (longlong *)0x0)) {
            iVar5 = (int)plVar6[1];
            goto LAB_14792b934;
          }
          break;
        }
        iVar5 = *(int *)((longlong)plVar6 + 0xc);
      } while (iVar5 != -1);
    }
  }
  iVar5 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar5 + 1U) {
    FUN_1479360a4(param_1 + 0x40,iVar5);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar5 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  local_48 = &local_5c;
  local_5c = iVar5;
  local_50 = &local_58;
  FUN_140171856((longlong *)(param_1 + 0xa0),local_3c,&local_50,0);
  FUN_14792b958((longlong)local_5c * 0x10 + *(longlong *)(param_1 + 0x40),param_2,param_1);
  iVar5 = local_5c;
LAB_14792b934:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 14792b958 FUN_14792b958 body=494 status=ok
// SIG undefined FUN_14792b958(void)

void FUN_14792b958(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar4 = (**(code **)(*param_2 + 0x310))(param_2);
  uVar2 = *(uint *)(lVar4 + 0x28);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  iVar7 = 0;
  uVar3 = uVar2;
  if (*(uint *)((longlong)param_1 + 0xc) != uVar2) {
    FUN_14481578e(param_1,uVar2);
    iVar7 = (int)param_1[1];
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
  }
  *(uint *)(param_1 + 1) = iVar7 + uVar2;
  if (uVar3 - iVar7 < uVar2) {
    FUN_1446f48e2(param_1);
  }
  else if (uVar2 == 0) goto LAB_14792ba15;
  uVar10 = 0;
  do {
    lVar4 = (**(code **)(*param_2 + 0x310))(param_2);
    uVar5 = 0xffffffff;
    if ((longlong)*(int *)(param_3 + 0x38) != 0) {
      lVar8 = (longlong)*(int *)(param_3 + 0x38) << 3;
      lVar9 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_3 + 0x30) + lVar9 * 8) ==
            *(longlong *)(*(longlong *)(lVar4 + 0x20) + uVar10 * 0xc)) {
          uVar5 = (undefined4)lVar9;
          break;
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    *(undefined4 *)(*param_1 + uVar10 * 4) = uVar5;
    uVar10 = uVar10 + 1;
  } while (uVar10 != uVar2);
LAB_14792ba15:
  uVar2 = *(uint *)(param_3 + 0x38);
  if (*(uint *)(param_3 + 0x58) != uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((ulonglong)uVar2);
    }
    *(undefined4 *)(param_3 + 0x58) = 0;
    iVar7 = 0;
    uVar3 = uVar2;
    if (*(uint *)(param_3 + 0x5c) != uVar2) {
      FUN_144893a1c(param_3 + 0x50,uVar2);
      iVar7 = *(int *)(param_3 + 0x58);
      uVar3 = *(uint *)(param_3 + 0x5c);
    }
    *(uint *)(param_3 + 0x58) = iVar7 + uVar2;
    if (uVar3 - iVar7 < uVar2) {
      FUN_1447403be(param_3 + 0x50);
    }
    plVar1 = (longlong *)(param_3 + 0x60);
    *(undefined4 *)(param_3 + 0x68) = 0;
    iVar7 = 0;
    uVar3 = uVar2;
    if (*(uint *)(param_3 + 0x6c) != uVar2) {
      FUN_144893a1c(plVar1,uVar2);
      iVar7 = *(int *)(param_3 + 0x68);
      uVar3 = *(uint *)(param_3 + 0x6c);
    }
    *(uint *)(param_3 + 0x68) = iVar7 + uVar2;
    if (uVar3 - iVar7 < uVar2) {
      FUN_1447403be(plVar1);
    }
    else if (uVar2 == 0) {
      return;
    }
    uVar10 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x30) + uVar10 * 8);
      if ((longlong)*(int *)(param_3 + 0x78) != 0) {
        lVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_3 + 0x70) + lVar8) == lVar4) {
            uVar6 = 1;
            goto LAB_14792badb;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(param_3 + 0x78) * 8 != lVar8);
      }
      uVar6 = 0;
LAB_14792badb:
      *(undefined1 *)(*(longlong *)(param_3 + 0x50) + uVar10) = uVar6;
      if ((longlong)*(int *)(param_3 + 0x88) != 0) {
        lVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_3 + 0x80) + lVar8) == lVar4) {
            uVar6 = 1;
            goto LAB_14792bb0e;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(param_3 + 0x88) * 8 != lVar8);
      }
      uVar6 = 0;
LAB_14792bb0e:
      *(undefined1 *)(*plVar1 + uVar10) = uVar6;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar2);
  }
  return;
}



// FUNCTION 14792bb48 FUN_14792bb48 body=42 status=ok
// SIG undefined FUN_14792bb48(void)

void FUN_14792bb48(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x390))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14792bb72 FUN_14792bb72 body=39 status=ok
// SIG undefined FUN_14792bb72(void)

void FUN_14792bb72(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140cc018c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14792bb9a FUN_14792bb9a body=38 status=ok
// SIG undefined FUN_14792bb9a(void)

void FUN_14792bb9a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14792bbc0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14792bbc0 FUN_14792bbc0 body=88 status=ok
// SIG undefined FUN_14792bbc0(void)

undefined8 FUN_14792bbc0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      FUN_14036294a(param_1[4],1,1);
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  return *(undefined8 *)(lVar2 + 0x900);
}



// FUNCTION 14792bc1c FUN_14792bc1c body=313 status=ok
// SIG undefined FUN_14792bc1c(void)

void FUN_14792bc1c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14792bd56(param_1,iVar1 != 0,local_28,local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792bd56 FUN_14792bd56 body=85 status=ok
// SIG undefined FUN_14792bd56(void)

void FUN_14792bd56(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_140cbfb16(param_1,1);
  FUN_140cbf890(param_1,param_2);
  FUN_140cbf6c6(param_1,param_3);
  FUN_140cbf542(param_1,param_4,1);
  return;
}



// FUNCTION 14792bdb2 FUN_14792bdb2 body=339 status=ok
// SIG undefined FUN_14792bdb2(void)

void FUN_14792bdb2(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x388))(param_1,local_28,iVar1 != 0,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792bf06 FUN_14792bf06 body=160 status=ok
// SIG undefined FUN_14792bf06(void)

void FUN_14792bf06(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14792bfa8(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792bfa8 FUN_14792bfa8 body=107 status=ok
// SIG undefined FUN_14792bfa8(void)

void FUN_14792bfa8(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    cVar2 = FUN_144966fca(param_1[4]);
    if (cVar2 != '\0') {
      FUN_14036294a(param_1[4],1,1);
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  *(undefined8 *)(lVar3 + 0x950) = param_2[2];
  uVar1 = param_2[1];
  *(undefined8 *)(lVar3 + 0x940) = *param_2;
  *(undefined8 *)(lVar3 + 0x948) = uVar1;
  return;
}



// FUNCTION 14792c018 FUN_14792c018 body=158 status=ok
// SIG undefined FUN_14792c018(void)

void FUN_14792c018(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140cbf890(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792c0b8 FUN_14792c0b8 body=156 status=ok
// SIG undefined FUN_14792c0b8(void)

void FUN_14792c0b8(undefined8 param_1,longlong param_2)

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
  FUN_14792c156(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792c156 FUN_14792c156 body=93 status=ok
// SIG undefined FUN_14792c156(void)

void FUN_14792c156(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      FUN_14036294a(param_1[4],1,1);
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  *(undefined8 *)(lVar2 + 0x900) = param_2;
  return;
}



// FUNCTION 14792c1b8 FUN_14792c1b8 body=158 status=ok
// SIG undefined FUN_14792c1b8(void)

void FUN_14792c1b8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140cbfb16(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792c258 FUN_14792c258 body=156 status=ok
// SIG undefined FUN_14792c258(void)

void FUN_14792c258(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140cbf6c6(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792c2fc FUN_14792c2fc body=241 status=ok
// SIG undefined FUN_14792c2fc(void)

void FUN_14792c2fc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140cbf542(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792c3f4 FUN_14792c3f4 body=332 status=ok
// SIG undefined FUN_14792c3f4(void)

void FUN_14792c3f4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140cbfdec(param_1,local_1c,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792c548 FUN_14792c548 body=326 status=ok
// SIG undefined FUN_14792c548(void)

void FUN_14792c548(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14792c690(param_1,puVar2,local_2c,local_30 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792c690 FUN_14792c690 body=120 status=ok
// SIG undefined FUN_14792c690(void)

void FUN_14792c690(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      FUN_14036294a(param_1[4],1,1);
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  FUN_14792c870(lVar2,param_2,param_3,param_4);
  return;
}



// FUNCTION 14792c70c FUN_14792c70c body=158 status=ok
// SIG undefined FUN_14792c70c(void)

void FUN_14792c70c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14792c7ac(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792c7ac FUN_14792c7ac body=161 status=ok
// SIG undefined FUN_14792c7ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14792c7ac(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      FUN_14036294a(param_1[4],1,1);
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  *(char *)(lVar2 + 0x9aa) = param_2;
  if (param_2 == '\0') {
    uVar3 = *(uint *)(lVar2 + 0x9a4) & 0x7fffffff;
  }
  else {
    uVar3 = *(uint *)(lVar2 + 0x9a4) | DAT_1499319e0;
  }
  *(uint *)(lVar2 + 0x9a4) = uVar3;
  lVar2 = FUN_1433d6ab4(param_1);
  if (lVar2 != 0) {
    uVar4 = FUN_140edf788(param_1);
    *(undefined4 *)(lVar2 + 0x14c) = uVar4;
  }
  return;
}



// FUNCTION 14792c870 FUN_14792c870 body=305 status=ok
// SIG undefined FUN_14792c870(void)

void FUN_14792c870(longlong param_1,longlong *param_2,float param_3,byte param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  uint uVar7;
  undefined1 auStack_58 [36];
  float local_34;
  longlong *local_30;
  float *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (*(int *)(param_1 + 0x8b0) != *(int *)(param_1 + 0x8dc)) {
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8e8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8e8);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x8f0) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x8a8) + (longlong)iVar3 * 0x14);
        if (*plVar4 == lVar1) goto LAB_14792c8a5;
        iVar3 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar3 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14792c8a5:
  pfVar6 = (float *)(plVar4 + 1);
  if (plVar4 == (longlong *)0x0) {
    pfVar6 = (float *)0x0;
  }
  local_34 = param_3;
  if ((ABS(param_3) <= 1e-05 & param_4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if (pfVar6 == (float *)0x0) {
    local_28 = &local_34;
    local_30 = param_2;
    FUN_144a405ac((longlong *)(param_1 + 0x8a8),local_1c,&local_30,0);
  }
  else {
    *pfVar6 = param_3;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14792c9b4 FUN_14792c9b4 body=203 status=ok
// SIG undefined FUN_14792c9b4(void)

void FUN_14792c9b4(undefined8 param_1,longlong param_2,char param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_2 + 0x160);
  if (0 < iVar3) {
    if (param_4 == 0) {
      param_4 = *(longlong *)(*(longlong *)(param_2 + 0x158) + 0x30);
    }
    iVar2 = FUN_147903c94(param_2,param_4);
    iVar3 = iVar3 + 1;
    lVar4 = param_4;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x158) + 0x38 + (longlong)iVar2 * 0x50);
      iVar2 = FUN_147903c94(param_2,lVar1);
      if (iVar2 == -1) {
        if (param_3 == '\0') {
          param_4 = 0;
        }
        FUN_1478f2b30(param_1,lVar4,param_4,0);
        return;
      }
      FUN_1478f2b30(param_1,lVar4,lVar1,0);
      iVar3 = iVar3 + -1;
      lVar4 = lVar1;
    } while (1 < iVar3);
  }
  return;
}



// FUNCTION 14792ca80 FUN_14792ca80 body=302 status=ok
// SIG undefined FUN_14792ca80(void)

void FUN_14792ca80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2d8))();
  if (param_1[0x87] != 0) {
    lVar4 = FUN_144a718e6();
    lVar1 = param_1[0x87];
    if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      if (param_1 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        cVar3 = FUN_144966fca(param_1[4]);
        if (cVar3 != '\0') {
          FUN_14036294a(param_1[4],1,1);
        }
        lVar4 = param_1[0x7c];
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
          param_1[0x7c] = lVar4;
        }
      }
      FUN_1433d5ad2(param_1);
      if (0 < *(int *)(lVar1 + 0x170)) {
        local_28 = **(undefined8 **)(lVar1 + 0x168);
        local_38 = lVar4 + 0x980;
        FUN_14485024e(lVar4,&local_28,lVar4 + 0x97c,lVar4 + 0x978);
        FUN_144b1fe86(lVar4,&local_28,*(undefined4 *)(lVar4 + 0x97c),0x3f800000);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792cbb0 FUN_14792cbb0 body=122 status=ok
// SIG undefined FUN_14792cbb0(void)

void FUN_14792cbb0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1 + 0x980;
  local_20 = param_2;
  FUN_14485024e(param_1,&local_20,param_1 + 0x97c,param_1 + 0x978);
  FUN_144b1fe86(param_1,&local_20,*(undefined4 *)(param_1 + 0x97c),0x3f800000);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792cc2c FUN_14792cc2c body=240 status=ok
// SIG undefined FUN_14792cc2c(void)

void FUN_14792cc2c(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1[0x87] != param_2) {
    return;
  }
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      FUN_14036294a(param_1[4],1,1);
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  *(undefined8 *)(lVar2 + 0x978) = 0;
  *(undefined4 *)(lVar2 + 0x980) = 0;
  FUN_1478f2168(param_1,param_2,*(undefined4 *)(lVar2 + 0x9a4),0,0,1);
  if (param_3 != 0) {
    FUN_1478f1bb6(param_1,param_3,0);
  }
  FUN_14792c9b4(param_1,param_2,*(undefined1 *)(lVar2 + 0x9a8),param_3);
  FUN_14792ca80(param_1,*(undefined4 *)(param_2 + 0xd0));
  return;
}



// FUNCTION 14792cd1c FUN_14792cd1c body=193 status=ok
// SIG undefined FUN_14792cd1c(void)

void FUN_14792cd1c(longlong *param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if (param_1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    cVar3 = FUN_144966fca(param_1[4]);
    if (cVar3 != '\0') {
      FUN_14036294a(param_1[4],1,1);
    }
    lVar4 = param_1[0x7c];
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar4;
    }
  }
  lVar2 = param_1[0x87];
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  if (*param_2 == lVar2) {
    fVar1 = *(float *)(param_2 + 0x29);
    if ((*(float *)(lVar4 + 0x984) != fVar1) || (NAN(*(float *)(lVar4 + 0x984)) || NAN(fVar1))) {
      *(undefined4 *)(lVar4 + 0x994) = 0xfffffffe;
      *(undefined4 *)(lVar4 + 0x99c) = 0xfffffffe;
    }
    *(float *)(lVar4 + 0x984) = fVar1;
  }
  thunk_FUN_1433d54a2(param_1,param_2);
  return;
}



// FUNCTION 14792ce06 FUN_14792ce06 body=130 status=ok
// SIG undefined FUN_14792ce06(void)

ulonglong FUN_14792ce06(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  lVar5 = (longlong)*(int *)(param_1 + 0x18);
  if (lVar5 < 1) {
    return 0xffffffff;
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  lVar4 = 0;
  plVar3 = plVar6;
  do {
    if (*plVar3 == *param_3) goto LAB_14792ce39;
    lVar4 = lVar4 + 1;
    plVar3 = plVar3 + 0xf;
  } while (lVar5 != lVar4);
  lVar4 = 0xffffffff;
LAB_14792ce39:
  lVar2 = 0;
  while (*plVar6 != *param_2) {
    lVar2 = lVar2 + 1;
    plVar6 = plVar6 + 0xf;
    if (lVar5 == lVar2) {
      return 0xffffffff;
    }
  }
  if ((int)lVar4 == -1) {
    return 0xffffffff;
  }
  if ((longlong)*(int *)(param_1 + 0x28) < 1) {
    return 0xffffffff;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0xc);
  uVar7 = 0;
  while ((piVar1[-1] != (int)lVar2 || (*piVar1 != (int)lVar4))) {
    uVar7 = uVar7 + 1;
    piVar1 = piVar1 + 0x10;
    if ((longlong)*(int *)(param_1 + 0x28) == uVar7) {
      return 0xffffffff;
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14792ceb0 FUN_14792ceb0 body=288 status=ok
// SIG undefined FUN_14792ceb0(void)

void FUN_14792ceb0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  uint local_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140191926();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  uVar3 = 0;
  if (param_2[0xd] != 0) {
    uVar3 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_30 = uVar3;
    (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
    uVar3 = local_30;
    if (1 < local_30) {
      FUN_14572541c(param_2);
      uVar3 = local_30;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar3 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_144750a86(param_1,&local_30,0,0);
      if (local_28 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)CONCAT44(uStack_2c,local_30);
      }
      FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimStreamable.cpp",0xb4,
                    L"This platform requires cooked packages, and animation data was not cooked into %s."
                    ,puVar4);
      if (CONCAT44(uStack_2c,local_30) != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_14792cfd2(param_1 + 0xd0,param_2,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792cfd2 FUN_14792cfd2 body=238 status=ok
// SIG undefined FUN_14792cfd2(void)

void FUN_14792cfd2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = (int)param_1[1];
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    }
    else {
      FUN_14572512c(param_2,&local_34);
    }
  }
  else {
    local_34 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_14792d0c2(param_1);
    FUN_14792d100(param_1,local_34);
  }
  if (0 < local_34) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      FUN_1433e7f50(*param_1 + lVar4,param_2,param_3,uVar3 & 0xffffffff);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x40;
    } while ((longlong)uVar3 < (longlong)local_34);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792d0c2 FUN_14792d0c2 body=61 status=ok
// SIG undefined FUN_14792d0c2(void)

void FUN_14792d0c2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_147935648(param_1);
    return;
  }
  FUN_145c12a97(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14792d100 FUN_14792d100 body=65 status=ok
// SIG undefined FUN_14792d100(void)

void FUN_14792d100(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1479361f6(param_1,iVar1);
  }
  FUN_1479361af((longlong)iVar1 * 0x40 + *param_1,param_2);
  return;
}



// FUNCTION 14792d148 FUN_14792d148 body=68 status=ok
// SIG undefined FUN_14792d148(void)

void FUN_14792d148(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792d18e FUN_14792d18e body=168 status=ok
// SIG undefined FUN_14792d18e(void)

void FUN_14792d18e(longlong param_1,undefined8 param_2,float param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  
  FUN_140e3f312();
  uVar1 = *(uint *)(param_1 + 0xd8);
  if ((int)uVar1 < 1) {
    iVar5 = uVar1 - 1;
  }
  else {
    fVar7 = *(float *)(*(longlong *)(param_1 + 0xd0) + 4);
    if (param_3 < fVar7) {
      bVar6 = true;
      uVar2 = 0;
    }
    else {
      pfVar4 = (float *)(*(longlong *)(param_1 + 0xd0) + 0x44);
      uVar2 = 0;
      do {
        if ((ulonglong)uVar1 - 1 == uVar2) {
          bVar6 = false;
          uVar2 = (ulonglong)uVar1;
          goto LAB_14792d1ff;
        }
        param_3 = param_3 - fVar7;
        fVar7 = *pfVar4;
        pfVar4 = pfVar4 + 0x10;
        uVar2 = uVar2 + 1;
      } while (fVar7 <= param_3);
      bVar6 = uVar2 < uVar1;
    }
LAB_14792d1ff:
    iVar5 = uVar1 - 1;
    if (bVar6) {
      iVar5 = (int)uVar2;
    }
  }
  lVar3 = FUN_140083894();
                    /* WARNING: Could not recover jumptable at 0x00014792d22d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar3 + 0x40) + 0xb0))(*(longlong **)(lVar3 + 0x40),param_1,iVar5,1);
  return;
}



// FUNCTION 14792d236 FUN_14792d236 body=55 status=ok
// SIG undefined FUN_14792d236(void)

void FUN_14792d236(longlong *param_1)

{
  longlong lVar1;
  
  FUN_140d77aa8();
  (**(code **)(*param_1 + 800))(param_1);
  lVar1 = FUN_140083894();
                    /* WARNING: Could not recover jumptable at 0x00014792d26a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x98))(*(longlong **)(lVar1 + 0x40),param_1);
  return;
}



// FUNCTION 14792d26e FUN_14792d26e body=159 status=ok
// SIG undefined FUN_14792d26e(void)

void FUN_14792d26e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_14792b432();
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 == 0) {
    lVar5 = 0x10;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar6 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x10 + lVar6) == 0) {
        lVar3 = 0x40;
      }
      else {
        lVar3 = FUN_1478e022c();
        lVar3 = lVar3 + 0x40;
      }
      lVar5 = lVar5 + lVar3;
      lVar6 = lVar6 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar6);
    lVar5 = lVar5 + 0x10;
  }
  FUN_14484255c(param_2,lVar5);
  lVar5 = FUN_140083894();
  uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x40) + 0xa8))(*(longlong **)(lVar5 + 0x40),param_1);
  FUN_14484255c(param_2,uVar4);
  return;
}



// FUNCTION 14792d318 FUN_14792d318 body=339 status=ok
// SIG undefined FUN_14792d318(void)

longlong * FUN_14792d318(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  short sVar6;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_20 = param_4;
  plVar4 = (longlong *)FUN_147936610(param_1 + 8,uVar3 >> 0x10 ^ uVar3);
  sVar1 = (short)plVar4[1];
  lVar2 = *plVar4;
  if (lVar2 == -1 || sVar1 == -1) {
    *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
    lVar5 = *param_3;
    if (lVar2 != -1 && sVar1 != -1) goto LAB_14792d3fb;
    sVar6 = *(short *)(lVar5 + 0x5e8);
  }
  else {
    lVar5 = *param_3;
    if (sVar1 != *(short *)(lVar5 + 0x5e8)) {
      sVar6 = sVar1 + 2;
      if ((short)(sVar1 + 1) != -1) {
        sVar6 = sVar1 + 1;
      }
      if (((sVar6 != *(short *)(lVar5 + 0x5e8)) || (sVar6 == -1)) || (DAT_14c872be0 == -1)) {
        *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
        lVar5 = *param_3;
      }
    }
LAB_14792d3fb:
    sVar6 = *(short *)(lVar5 + 0x5e8);
    if ((sVar1 == sVar6) && (sVar6 = sVar1, lVar2 == *(longlong *)(lVar5 + 0x5e0)))
    goto LAB_14792d444;
  }
  *(short *)(plVar4 + 1) = sVar6;
  *plVar4 = *(longlong *)(lVar5 + 0x5e0);
  *(undefined2 *)((longlong)plVar4 + 10) = *(undefined2 *)(lVar5 + 0x5ea);
  *(undefined4 *)(plVar4 + 2) = *(undefined4 *)((longlong)plVar4 + 0x14);
  *(int *)((longlong)plVar4 + 0x14) = (int)param_3[4];
LAB_14792d444:
  *param_2 = plVar4[2];
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14792d46c FUN_14792d46c body=127 status=ok
// SIG undefined FUN_14792d46c(void)

void FUN_14792d46c(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 auStack_38 [40];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_10 = param_3;
  piVar1 = (int *)FUN_1479369d0(param_1 + 0x58,uVar2 >> 0x10 ^ uVar2,&local_10);
  *piVar1 = 2 - (uint)(*piVar1 == 0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792d4ec FUN_14792d4ec body=759 status=ok
// SIG undefined FUN_14792d4ec(void)

longlong * FUN_14792d4ec(longlong *param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_2 + 0x20);
  local_60 = param_3;
  if ((longlong)(int)param_1[2] != 0) {
    plVar4 = (longlong *)param_1[1];
    plVar3 = plVar4 + (longlong)(int)param_1[2] * 0xc;
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    uVar8 = (uint)param_3 & 0xffff;
    do {
      if ((int)plVar4[2] == *(int *)((longlong)plVar4 + 0x3c)) {
        if ((char)plVar4[0xb] == '\x01') {
          FUN_14072a850(*plVar4);
          iVar9 = *(int *)(lVar5 + 0xb80);
          *(uint *)(lVar5 + 0xb80) = iVar9 + 1U;
          if (*(uint *)(lVar5 + 0xb84) < iVar9 + 1U) {
            FUN_1478fec76((longlong *)(lVar5 + 0xb78),iVar9);
          }
          lVar7 = *plVar4;
          *(longlong *)(*(longlong *)(lVar5 + 0xb78) + (longlong)iVar9 * 8) = lVar7;
          if ((lVar7 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
        }
LAB_14792d779:
        *param_4 = 0;
        local_68 = 0;
        FUN_14485c47a(&local_68,*plVar4);
        local_58 = &local_60;
        local_50 = &local_68;
        FUN_147936f50(plVar4 + 1,local_44);
        plVar4 = (longlong *)*plVar4;
        goto LAB_14792d7ba;
      }
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar9 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)plVar4[10] - 1U &
                      ((uint)param_3 << 0x10 | uVar8) + (int)((ulonglong)param_3 >> 0x20) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar9 == -1) goto LAB_14792d779;
      lVar7 = plVar4[1];
      while (*(longlong *)(lVar7 + (longlong)iVar9 * 0x18) != param_3) {
        iVar9 = *(int *)(lVar7 + (longlong)iVar9 * 0x18 + 0x10);
        if (iVar9 == -1) goto LAB_14792d779;
      }
      plVar4 = plVar4 + 0xc;
    } while (plVar4 != plVar3);
  }
  *param_4 = 1;
  lVar7 = *param_1;
  if ((((lVar7 == 0) || (lVar2 = FUN_1402e44f4(), lVar2 == 0)) ||
      (*(int *)(lVar7 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *param_1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = 0;
  plVar4 = (longlong *)FUN_1417b484e(lVar5,lVar7,0,0);
  *(byte *)((longlong)plVar4 + 0x31) = *(byte *)((longlong)plVar4 + 0x31) | 8;
  FUN_140737aec(plVar4,0);
  if ((*(byte *)(lVar5 + 0x9f) & 0x20) != 0) {
    (**(code **)(*plVar4 + 0x330))(plVar4);
    FUN_1417b45f8(plVar4);
  }
  lVar5 = FUN_14792d7e4(param_1,plVar4);
  local_68 = 0;
  FUN_14485c47a(&local_68,plVar4);
  local_58 = &local_60;
  local_50 = &local_68;
  FUN_147936f50(lVar5 + 8,local_44);
  lVar5 = *(longlong *)(param_2 + 0x20);
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar4);
  }
  iVar9 = *(int *)(lVar5 + 0xb80);
  *(uint *)(lVar5 + 0xb80) = iVar9 + 1U;
  if (*(uint *)(lVar5 + 0xb84) < iVar9 + 1U) {
    FUN_1478fec76((longlong *)(lVar5 + 0xb78),iVar9);
  }
  *(longlong **)(*(longlong *)(lVar5 + 0xb78) + (longlong)iVar9 * 8) = plVar4;
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar4);
  }
LAB_14792d7ba:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 14792d7e4 FUN_14792d7e4 body=281 status=ok
// SIG undefined FUN_14792d7e4(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_14792d7e4(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  longlong local_88 [5];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar2 = false;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    bVar2 = *(int *)(param_1 + 0x10) == 0;
  }
  local_60 = 0;
  local_58 = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  local_88[0] = param_2;
  local_30 = bVar2;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_147937572((longlong *)(param_1 + 8),iVar1);
  }
  FUN_14793752e((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 8),local_88);
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_147933fd6(local_88 + 1);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return (longlong)(*(int *)(param_1 + 0x10) + -1) * 0x60 + *(longlong *)(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792d8fe FUN_14792d8fe body=216 status=ok
// SIG undefined FUN_14792d8fe(void)

void FUN_14792d8fe(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    lVar1 = (longlong)*(int *)(param_1 + 0x10) * 0x60;
    do {
      if (*plVar2 == param_2) {
        if ((plVar2 != (longlong *)0x0) &&
           (FUN_147937452(plVar2 + 1,param_3), (int)plVar2[2] == *(int *)((longlong)plVar2 + 0x3c)))
        {
          lVar1 = *(longlong *)(*plVar2 + 0x20);
          if (lVar1 != 0) {
            local_38 = param_2;
            if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(param_2);
            }
            local_30 = &local_38;
            FUN_14791b116(lVar1 + 0xb78);
          }
          if ((char)plVar2[0xb] == '\0') {
            FUN_14792d9d8(param_1,param_2);
          }
        }
        break;
      }
      plVar2 = plVar2 + 0xc;
      lVar1 = lVar1 + -0x60;
    } while (lVar1 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14792d9d8 FUN_14792d9d8 body=165 status=ok
// SIG undefined FUN_14792d9d8(void)

ulonglong FUN_14792d9d8(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0x10);
  if ((longlong)uVar3 < 1) {
    return uVar3;
  }
  puVar7 = (undefined8 *)(param_1 + 8);
  plVar4 = (longlong *)*puVar7;
  uVar6 = 0;
  do {
    if (*plVar4 == param_2) {
      FUN_147937714(puVar7);
      FUN_147937782(puVar7);
      uVar3 = FUN_140107fd2(param_2);
      if (DAT_14caccab0 == 0) {
        return uVar3;
      }
      FUN_144757f48(param_2,0x40000000);
      uVar2 = *(uint *)(param_2 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      do {
        uVar2 = *(uint *)(lVar5 + 8);
        uVar3 = (ulonglong)uVar2;
        if ((uVar2 >> 0x15 & 1) != 0) {
          return uVar3;
        }
        LOCK();
        uVar1 = *(uint *)(lVar5 + 8);
        if (uVar2 == uVar1) {
          *(uint *)(lVar5 + 8) = uVar2 | 0x200000;
        }
        else {
          uVar3 = (ulonglong)uVar1;
        }
        UNLOCK();
      } while (uVar2 != uVar1);
      return uVar3;
    }
    uVar6 = uVar6 + 1;
    plVar4 = plVar4 + 0xc;
  } while (uVar3 != uVar6);
  return uVar3;
}



// FUNCTION 14792da7e FUN_14792da7e body=52 status=ok
// SIG undefined FUN_14792da7e(void)

void FUN_14792da7e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_147937830(param_1 + 0x18,0);
  }
  FUN_14792dab2(param_1 + 8,*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14792dab2 FUN_14792dab2 body=68 status=ok
// SIG undefined FUN_14792dab2(void)

void FUN_14792dab2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_147933d1e(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147937890(param_1,param_2);
  return;
}



// FUNCTION 14792daf8 FUN_14792daf8 body=140 status=ok
// SIG undefined FUN_14792daf8(void)

longlong * FUN_14792daf8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(longlong *)(param_2 + 0x10);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  lVar1 = FUN_14792db86(param_1,&local_20);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    lVar1 = (longlong)*(int *)(lVar1 + 0x10) * 0x60;
    do {
      if (*plVar2 == param_2) goto LAB_14792db67;
      plVar2 = plVar2 + 0xc;
      lVar1 = lVar1 + -0x60;
    } while (lVar1 != 0);
  }
  plVar2 = (longlong *)0x0;
LAB_14792db67:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792db86 FUN_14792db86 body=230 status=ok
// SIG undefined FUN_14792db86(void)

longlong * FUN_14792db86(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar5 = *(longlong **)(param_1 + 8);
    lVar6 = (longlong)*(int *)(param_1 + 0x10) << 5;
    do {
      lVar4 = *plVar5;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
LAB_14792dbdb:
        lVar2 = FUN_1402e44f4();
        if ((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) goto LAB_14792dbee;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30) {
          lVar4 = 0;
        }
      }
      else {
        if (lVar4 != 0) goto LAB_14792dbdb;
LAB_14792dbee:
        lVar4 = 0;
      }
      if (((lVar1 == 0) || (lVar2 = FUN_1402e44f4(), lVar2 == 0)) ||
         (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar3 = lVar1;
        }
      }
      if (lVar4 == lVar3) {
        return plVar5;
      }
      plVar5 = plVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 14792dc6c FUN_14792dc6c body=298 status=ok
// SIG undefined FUN_14792dc6c(void)

longlong FUN_14792dc6c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar5 = FUN_14792db86(param_1,&local_38);
  if (lVar5 == 0) {
    iVar4 = FUN_14792dd98(param_1 + 0x18,param_2);
    lVar5 = *param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar2 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
      FUN_1479378f0((longlong *)(param_1 + 8),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 8);
    lVar1 = lVar3 + (longlong)iVar2 * 0x20;
    *(longlong *)(lVar3 + (longlong)iVar2 * 0x20) = lVar5;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(bool *)(lVar1 + 0x18) = iVar4 != -1;
    FUN_1479339af(0,0);
    lVar5 = (longlong)(*(int *)(param_1 + 0x10) + -1) * 0x20 + *(longlong *)(param_1 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792dd98 FUN_14792dd98 body=186 status=ok
// SIG undefined FUN_14792dd98(void)

ulonglong FUN_14792dd98(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    uVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      if ((((lVar5 == 0) || (lVar2 = FUN_1402e44f4(), lVar2 == 0)) ||
          (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      }
      lVar2 = *param_2;
      if (((lVar2 == 0) || (lVar3 = FUN_1402e44f4(), lVar3 == 0)) ||
         ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar2 = 0;
      }
      else {
        lVar2 = *param_2;
      }
      if (lVar5 == lVar2) {
        return uVar6 & 0xffffffff;
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 14792de52 FUN_14792de52 body=131 status=ok
// SIG undefined FUN_14792de52(void)

void FUN_14792de52(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_14792dc6c(param_1,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14792d4ec(uVar1,param_2,param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792ded6 FUN_14792ded6 body=281 status=ok
// SIG undefined FUN_14792ded6(void)

void FUN_14792ded6(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    plVar3 = (longlong *)(param_1 + 8);
    lVar7 = 0;
    iVar6 = 0;
    lVar9 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar8 = *(longlong *)(lVar2 + lVar7);
      if ((lVar8 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar8);
LAB_14792df3c:
        lVar4 = FUN_1402e44f4();
        bVar5 = DAT_14c950c29;
        if (((lVar4 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar4 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) goto LAB_14792df64;
      }
      else {
        if (lVar8 != 0) goto LAB_14792df3c;
LAB_14792df64:
        lVar8 = 0;
      }
      if (lVar8 == *(longlong *)(param_2 + 0x10)) {
        if (iVar6 == 1) {
          return;
        }
        lVar2 = *plVar3;
        lVar7 = (lVar9 >> 0x20) * 0x20;
        FUN_14792d8fe(lVar2 + lVar7,param_2,param_3);
        if (*(int *)(lVar2 + 0x10 + lVar7) != 0) {
          return;
        }
        FUN_147937976(plVar3,-iVar6);
        FUN_1479379de(plVar3);
        return;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar7);
  }
  return;
}



// FUNCTION 14792dff0 FUN_14792dff0 body=282 status=ok
// SIG undefined FUN_14792dff0(void)

longlong FUN_14792dff0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  FUN_1408b8ca0(*(undefined8 *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      while (plVar4 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar6 * 0x14),
            *plVar4 != param_2) {
        iVar6 = *(int *)((longlong)plVar4 + 0xc);
        if (iVar6 == -1) {
          return 0;
        }
      }
      if ((uint *)(plVar4 + 1) != (uint *)0x0 && plVar4 != (longlong *)0x0) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))();
        uVar1 = *(uint *)(plVar4 + 1);
        iVar6 = *(int *)(lVar3 + 8);
        plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))();
        if (param_4 != 0) {
          lVar3 = *(longlong *)(*plVar4 + (longlong)(int)(~uVar1 + iVar6) * 8);
          lVar2 = *(longlong *)(lVar3 + 0x70);
          if ((*(int *)(param_4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(param_4 + 0x38) * 8) ==
              param_4 + 0x30)) {
            return param_3 + *(int *)(lVar3 + 0x44);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14792e10a FUN_14792e10a body=31 status=ok
// SIG undefined FUN_14792e10a(void)

void FUN_14792e10a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140721bac(*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10));
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}



// FUNCTION 14792e12a FUN_14792e12a body=761 status=ok
// SIG undefined FUN_14792e12a(void)

void FUN_14792e12a(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  
  lVar14 = *param_3;
  if (lVar14 == 0) {
    lVar14 = (longlong)*(int *)(param_1 + 200) * 0x10;
    iVar1 = *(int *)(param_1 + 8 + lVar14);
    *(uint *)(param_1 + 8 + lVar14) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xc + lVar14) < iVar1 + 1U) {
      FUN_14015f5ee((longlong *)(param_1 + lVar14),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + lVar14);
    lVar14 = lVar2 + (longlong)iVar1 * 0x88;
    lVar3 = *param_2;
    *(longlong *)(lVar2 + (longlong)iVar1 * 0x88) = lVar3;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(longlong *)(lVar14 + 0x28) = param_2[5];
    lVar2 = param_2[1];
    lVar3 = param_2[2];
    lVar11 = param_2[4];
    *(longlong *)(lVar14 + 0x18) = param_2[3];
    *(longlong *)(lVar14 + 0x20) = lVar11;
    *(longlong *)(lVar14 + 8) = lVar2;
    *(longlong *)(lVar14 + 0x10) = lVar3;
    *(longlong *)(lVar14 + 0x30) = param_2[6];
    lVar2 = param_2[7];
    *(longlong *)(lVar14 + 0x38) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(longlong *)(lVar14 + 0x70) = param_2[0xe];
    lVar2 = param_2[8];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
    lVar3 = param_2[9];
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x4c);
    lVar11 = param_2[10];
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
    lVar12 = param_2[0xb];
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x5c);
    uVar9 = *(undefined4 *)((longlong)param_2 + 100);
    lVar13 = param_2[0xd];
    uVar10 = *(undefined4 *)((longlong)param_2 + 0x6c);
    *(int *)(lVar14 + 0x60) = (int)param_2[0xc];
    *(undefined4 *)(lVar14 + 100) = uVar9;
    *(int *)(lVar14 + 0x68) = (int)lVar13;
    *(undefined4 *)(lVar14 + 0x6c) = uVar10;
    *(int *)(lVar14 + 0x50) = (int)lVar11;
    *(undefined4 *)(lVar14 + 0x54) = uVar7;
    *(int *)(lVar14 + 0x58) = (int)lVar12;
    *(undefined4 *)(lVar14 + 0x5c) = uVar8;
    *(int *)(lVar14 + 0x40) = (int)lVar2;
    *(undefined4 *)(lVar14 + 0x44) = uVar5;
    *(int *)(lVar14 + 0x48) = (int)lVar3;
    *(undefined4 *)(lVar14 + 0x4c) = uVar6;
    lVar2 = param_2[0xf];
    *(longlong *)(lVar14 + 0x78) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(short *)(lVar14 + 0x80) = (short)param_2[0x10];
    lVar14 = (longlong)*(int *)(param_1 + 200) * 0x10;
    *(undefined8 *)
     (*(longlong *)(param_1 + lVar14) + 0x28 +
     (longlong)(*(int *)(param_1 + 8 + lVar14) + -1) * 0x88) = *(undefined8 *)(param_1 + 0xc0);
    return;
  }
  uVar4 = (uint)((ulonglong)lVar14 >> 0x10);
  uVar16 = (uint)lVar14 & 0xffff;
  plVar15 = (longlong *)
            FUN_14015e712(param_1 + (longlong)*(int *)(param_1 + 200) * 0x50 + 0x20,
                          ((uint)lVar14 << 0x10 | uVar16) + (int)((ulonglong)lVar14 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar16 >> 4),param_3);
  iVar1 = (int)plVar15[1];
  *(uint *)(plVar15 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar15 + 0xc) < iVar1 + 1U) {
    FUN_14015f5ee(plVar15,iVar1);
  }
  lVar14 = *plVar15 + (longlong)iVar1 * 0x88;
  lVar2 = *param_2;
  *(longlong *)(*plVar15 + (longlong)iVar1 * 0x88) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(lVar14 + 0x28) = param_2[5];
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  lVar11 = param_2[4];
  *(longlong *)(lVar14 + 0x18) = param_2[3];
  *(longlong *)(lVar14 + 0x20) = lVar11;
  *(longlong *)(lVar14 + 8) = lVar2;
  *(longlong *)(lVar14 + 0x10) = lVar3;
  *(longlong *)(lVar14 + 0x30) = param_2[6];
  lVar2 = param_2[7];
  *(longlong *)(lVar14 + 0x38) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(longlong *)(lVar14 + 0x70) = param_2[0xe];
  lVar2 = param_2[8];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar3 = param_2[9];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x4c);
  lVar11 = param_2[10];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
  lVar12 = param_2[0xb];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar9 = *(undefined4 *)((longlong)param_2 + 100);
  lVar13 = param_2[0xd];
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(int *)(lVar14 + 0x60) = (int)param_2[0xc];
  *(undefined4 *)(lVar14 + 100) = uVar9;
  *(int *)(lVar14 + 0x68) = (int)lVar13;
  *(undefined4 *)(lVar14 + 0x6c) = uVar10;
  *(int *)(lVar14 + 0x50) = (int)lVar11;
  *(undefined4 *)(lVar14 + 0x54) = uVar7;
  *(int *)(lVar14 + 0x58) = (int)lVar12;
  *(undefined4 *)(lVar14 + 0x5c) = uVar8;
  *(int *)(lVar14 + 0x40) = (int)lVar2;
  *(undefined4 *)(lVar14 + 0x44) = uVar5;
  *(int *)(lVar14 + 0x48) = (int)lVar3;
  *(undefined4 *)(lVar14 + 0x4c) = uVar6;
  lVar2 = param_2[0xf];
  *(longlong *)(lVar14 + 0x78) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(short *)(lVar14 + 0x80) = (short)param_2[0x10];
  *(undefined8 *)(*plVar15 + 0x28 + (longlong)((int)plVar15[1] + -1) * 0x88) =
       *(undefined8 *)(param_1 + 0xc0);
  *(undefined1 *)(*plVar15 + 0x1f + (longlong)((int)plVar15[1] + -1) * 0x88) =
       *(undefined1 *)((longlong)param_3 + 0xd);
  *(bool *)(*plVar15 + 0x20 + (longlong)((int)plVar15[1] + -1) * 0x88) = (int)param_3[1] == 5;
  FUN_14015eac4(plVar15,(int)param_3[1]);
  return;
}



// FUNCTION 14792e424 FUN_14792e424 body=289 status=ok
// SIG undefined FUN_14792e424(void)

undefined8 FUN_14792e424(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  lVar2 = (1 - (longlong)*(int *)(param_1 + 200)) * 0x50;
  if (*(int *)(param_1 + 0x28 + lVar2) != *(int *)(param_1 + 0x54 + lVar2)) {
    lVar2 = lVar2 + param_1;
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    lVar3 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x60);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar5 * 0x88;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar5 * 0x88) == param_2) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          if (*(char *)(lVar3 + 0x30) != '\x01') {
            return 0;
          }
          iVar5 = *(int *)(lVar3 + 0x18);
          if ((longlong)iVar5 < 0) {
            return 0;
          }
          if (*(int *)(lVar3 + 0x10) <= iVar5) {
            return 0;
          }
          lVar2 = 4;
          if ((*(longlong *)(lVar3 + 0x5c) != param_3) &&
             (lVar2 = 0xc, *(longlong *)(lVar3 + 100) != param_3)) {
            return 0;
          }
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x68 + (longlong)iVar5 * 0x88);
          *param_4 = *(undefined4 *)(lVar3 + lVar2);
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        }
        iVar5 = *(int *)(lVar3 + 0x80);
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 14792e546 FUN_14792e546 body=260 status=ok
// SIG undefined FUN_14792e546(void)

undefined8 FUN_14792e546(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  plVar2 = (longlong *)((1 - (longlong)*(int *)(param_1 + 200)) * 0x50);
  plVar3 = plVar2;
  if (*(int *)(param_1 + 0x28 + (longlong)plVar2) != *(int *)(param_1 + 0x54 + (longlong)plVar2)) {
    plVar3 = (longlong *)((longlong)plVar2 + param_1 + 0x20);
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar6 = *(longlong *)((longlong)plVar2 + param_1 + 0x60);
    lVar5 = (longlong)plVar2 + param_1 + 0x58;
    if (lVar6 != 0) {
      lVar5 = lVar6;
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)plVar2 + param_1 + 0x68) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      lVar6 = *plVar3;
      do {
        plVar3 = (longlong *)(lVar6 + (longlong)iVar8 * 0x88);
        if (*(longlong *)(lVar6 + (longlong)iVar8 * 0x88) == param_2) {
          if ((((ulonglong)(plVar3 + 1) & 0xfffffffffffffff7) != 0) && ((char)plVar3[6] == '\x01'))
          {
            bVar4 = 1;
            if ((longlong)(int)plVar3[8] == 0) {
              plVar3 = (longlong *)0x0;
              goto LAB_14792e56c;
            }
            plVar2 = (longlong *)plVar3[7];
            lVar6 = (longlong)(int)plVar3[8] * 0xc;
            goto LAB_14792e627;
          }
          break;
        }
        iVar8 = (int)plVar3[0x10];
      } while (iVar8 != -1);
    }
  }
  bVar4 = 0;
  goto LAB_14792e56c;
  while( true ) {
    plVar2 = (longlong *)((longlong)plVar2 + 0xc);
    lVar6 = lVar6 + -0xc;
    if (lVar6 == 0) break;
LAB_14792e627:
    if (*plVar2 == param_3) goto LAB_14792e638;
  }
  plVar2 = (longlong *)0x0;
LAB_14792e638:
  plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),plVar2 != (longlong *)0x0);
LAB_14792e56c:
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),(byte)plVar3 & bVar4);
}



// FUNCTION 14792e64a FUN_14792e64a body=141 status=ok
// SIG undefined FUN_14792e64a(void)

bool FUN_14792e64a(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  bool bVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14792e6d8(param_1,&local_40,param_2);
  if (local_40 == param_3) {
    bVar1 = local_38 == param_4;
    if (param_5 != '\0' || bVar1) goto LAB_14792e6b8;
    if (param_3 != param_4) goto LAB_14792e6a9;
  }
  else if (param_5 != '\0' || local_40 != param_4) {
LAB_14792e6a9:
    bVar1 = false;
    goto LAB_14792e6b8;
  }
  bVar1 = local_38 == param_3;
LAB_14792e6b8:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 14792e6d8 FUN_14792e6d8 body=260 status=ok
// SIG undefined FUN_14792e6d8(void)

void FUN_14792e6d8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = (1 - (longlong)*(int *)(param_1 + 200)) * 0x50;
  if (*(int *)(param_1 + 0x28 + lVar3) != *(int *)(param_1 + 0x54 + lVar3)) {
    param_1 = param_1 + lVar3;
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x88;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x88) == param_3) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) {
            if (((*(char *)(lVar3 + 0x30) == '\x01') && (*(longlong *)(lVar3 + 0x5c) != 0)) &&
               (*(longlong *)(lVar3 + 100) != 0)) {
              *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar3 + 0x6c);
              uVar1 = *(undefined8 *)(lVar3 + 100);
              *param_2 = *(undefined8 *)(lVar3 + 0x5c);
              param_2[1] = uVar1;
              return;
            }
            *param_2 = 0;
            param_2[1] = 0;
            *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar3 + 0x7c);
            return;
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x80);
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 14792e7dc FUN_14792e7dc body=222 status=ok
// SIG undefined FUN_14792e7dc(void)

undefined8 FUN_14792e7dc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined7 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = (1 - (longlong)*(int *)(param_1 + 200)) * 0x50;
  if (*(int *)(param_1 + 0x28 + lVar1) != *(int *)(param_1 + 0x54 + lVar1)) {
    lVar1 = lVar1 + param_1;
    uVar3 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar5 = lVar1 + 0x58;
    if (*(longlong *)(lVar1 + 0x60) != 0) {
      lVar5 = *(longlong *)(lVar1 + 0x60);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar1 + 0x68) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar1 + 0x20) + (longlong)iVar4 * 0x88;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar4 * 0x88) == param_2) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          uVar2 = (undefined7)(lVar5 + 8U >> 8);
          if (*(char *)(lVar5 + 0x30) == '\x01') {
            if (*(longlong *)(lVar5 + 0x5c) == 0) {
              return 0;
            }
            return CONCAT71(uVar2,*(longlong *)(lVar5 + 100) != 0);
          }
          return CONCAT71(uVar2,1);
        }
        iVar4 = *(int *)(lVar5 + 0x80);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 14792e8ba FUN_14792e8ba body=250 status=ok
// SIG undefined FUN_14792e8ba(void)

void FUN_14792e8ba(longlong *param_1,float param_2,byte param_3,longlong *param_4,int *param_5,
                  int *param_6,float param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  
  uVar5 = -(uint)param_3;
  *param_5 = -1;
  param_5[1] = (int)-param_2;
  *param_6 = -1;
  param_6[1] = (int)(param_7 - param_2);
  iVar6 = (int)param_1[1];
  do {
    if (0 < iVar6) {
      lVar4 = *param_1;
      lVar2 = *param_4;
      lVar3 = 0;
      do {
        if ((longlong)(int)param_4[1] != 0) {
          plVar1 = (longlong *)(lVar4 + lVar3 * 0xc);
          lVar7 = 0;
          do {
            if (*(longlong *)(lVar2 + lVar7) == *plVar1) {
              fVar8 = *(float *)(plVar1 + 1) + (float)(int)uVar5 * param_7;
              if (param_2 <= fVar8) {
                if (param_2 <= fVar8) {
                  *param_6 = (int)lVar3;
                  param_6[1] = (int)(fVar8 - param_2);
                  return;
                }
              }
              else {
                *param_5 = (int)lVar3;
                param_5[1] = (int)(fVar8 - param_2);
                iVar6 = (int)param_1[1];
                lVar4 = *param_1;
                lVar2 = *param_4;
              }
              break;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)(int)param_4[1] * 8 != lVar7);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar6);
      if (*param_6 != -1) {
        return;
      }
    }
    uVar5 = uVar5 + 1;
    if (param_3 + 1 <= uVar5) {
      return;
    }
  } while( true );
}



// FUNCTION 14792e9b4 FUN_14792e9b4 body=616 status=ok
// SIG undefined FUN_14792e9b4(void)

void FUN_14792e9b4(longlong *param_1,longlong *param_2,uint param_3,uint param_4,float param_5,
                  float param_6,longlong param_7)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  fVar7 = 0.0;
  if ((-1 < (int)param_3) && ((int)param_3 < (int)param_1[1])) {
    fVar7 = *(float *)(*param_1 + 8 + (ulonglong)param_3 * 0xc);
    lVar2 = *(longlong *)(*param_1 + (ulonglong)param_3 * 0xc);
    *param_2 = lVar2;
    if ((param_7 != 0) && (*(int *)(param_7 + 0x1a8) != *(int *)(param_7 + 0x1d4))) {
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar5 = (uint)lVar2 & 0xffff;
      lVar4 = param_7 + 0x1d8;
      if (*(longlong *)(param_7 + 0x1e0) != 0) {
        lVar4 = *(longlong *)(param_7 + 0x1e0);
      }
      iVar6 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_7 + 0x1e8) - 1U &
                               (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_7 + 0x1a0) + (longlong)iVar6 * 0x18);
          if (*plVar1 == lVar2) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              *param_2 = plVar1[1];
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
  }
  fVar8 = param_6;
  if ((-1 < (int)param_4) && ((int)param_4 < (int)param_1[1])) {
    fVar8 = *(float *)(*param_1 + 8 + (ulonglong)param_4 * 0xc);
    lVar2 = *(longlong *)(*param_1 + (ulonglong)param_4 * 0xc);
    param_2[1] = lVar2;
    if ((param_7 != 0) && (*(int *)(param_7 + 0x1a8) != *(int *)(param_7 + 0x1d4))) {
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar5 = (uint)lVar2 & 0xffff;
      lVar4 = param_7 + 0x1d8;
      if (*(longlong *)(param_7 + 0x1e0) != 0) {
        lVar4 = *(longlong *)(param_7 + 0x1e0);
      }
      iVar6 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_7 + 0x1e8) - 1U &
                               (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_7 + 0x1a0) + (longlong)iVar6 * 0x18);
          if (*plVar1 == lVar2) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              param_2[1] = plVar1[1];
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
  }
  if (fVar7 <= fVar8) {
    if (param_5 < fVar7) {
      param_5 = param_5 + param_6;
    }
  }
  else {
    fVar7 = (float)(~-(uint)(param_5 < fVar7) & (uint)fVar7 |
                   (uint)(fVar7 - param_6) & -(uint)(param_5 < fVar7));
    fVar8 = (float)(~-(uint)(fVar8 < param_5) & (uint)fVar8 |
                   (uint)(fVar8 + param_6) & -(uint)(fVar8 < param_5));
  }
  fVar7 = (float)(~-(uint)(fVar7 == fVar8) & (uint)fVar7 |
                 (uint)(fVar7 - param_6) & -(uint)(fVar7 == fVar8));
  *(float *)(param_2 + 2) = (param_5 - fVar7) / (fVar8 - fVar7);
  return;
}



// FUNCTION 14792ec1c FUN_14792ec1c body=210 status=ok
// SIG undefined FUN_14792ec1c(void)

void FUN_14792ec1c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] < 1) {
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  else {
    FUN_14089ad16(*param_1,(int)param_1[1],param_3,&local_21);
    plVar1 = param_1 + 2;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) < 0) {
      FUN_1402191ca(plVar1,0);
    }
    iVar2 = (int)param_1[1];
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (*(int *)((longlong)param_1 + 0x1c) < iVar2) {
      FUN_1402191ca(plVar1);
      iVar2 = (int)param_1[1];
    }
    if (iVar2 != 0) {
      lVar4 = *param_1;
      lVar3 = (longlong)iVar2 * 0xc;
      do {
        FUN_140721fbe(plVar1,lVar4);
        lVar4 = lVar4 + 0xc;
        lVar3 = lVar3 + -0xc;
      } while (lVar3 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14792ed02 FUN_14792ed02 body=231 status=ok
// SIG undefined FUN_14792ed02(void)

void FUN_14792ed02(longlong *param_1,float param_2,float param_3,longlong *param_4,float param_5)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_1;
    lVar7 = 0;
    do {
      fVar1 = *(float *)(lVar3 + 8 + lVar7);
      if ((param_2 <= fVar1) && (fVar1 < param_3)) {
        iVar2 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
          FUN_14624c384(param_4,iVar2);
        }
        lVar4 = *param_4;
        lVar5 = (longlong)iVar2 * 0xc;
        *(undefined8 *)(lVar4 + lVar5) = 0;
        *(undefined4 *)(lVar4 + 8 + lVar5) = 0;
        *(undefined8 *)(*param_4 + lVar5) = *(undefined8 *)(lVar3 + lVar7);
        *(float *)(*param_4 + 8 + lVar5) = param_5 - (fVar1 - param_2);
      }
      lVar7 = lVar7 + 0xc;
    } while ((longlong)(int)lVar6 * 0xc != lVar7);
  }
  return;
}



// FUNCTION 14792edee FUN_14792edee body=160 status=ok
// SIG undefined FUN_14792edee(void)

undefined8 *
FUN_14792edee(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 5) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      FUN_14792ee8e(param_1,*param_2 + lVar5,uVar4 & 0xffffffff,param_4);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x40;
    } while ((longlong)uVar4 < (longlong)(int)param_2[1]);
  }
  return param_1;
}



// FUNCTION 14792ee8e FUN_14792ee8e body=819 status=ok
// SIG undefined FUN_14792ee8e(void)

void FUN_14792ee8e(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar7 = *(int *)(param_2 + 0x38);
  local_7c = param_3;
  local_68 = param_1;
  if ((longlong)iVar7 != 0) {
    lVar17 = *(longlong *)(param_2 + 0x30);
    uVar19 = 0;
    lVar16 = 0;
    do {
      cVar6 = FUN_1400063ec(lVar17 + uVar19,param_4);
      if (cVar6 != '\0') {
        if ((int)(~uVar19 >> 3) != 0) {
          lVar17 = (lVar16 >> 0x20) * 0x10;
          if (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8 + lVar17)) {
            plVar14 = (longlong *)(*(longlong *)(param_2 + 0x10) + lVar17);
            plVar18 = (longlong *)(lVar17 + *(longlong *)(param_2 + 0x20));
            local_70 = param_1 + 2;
            lVar17 = 0;
            local_78 = plVar14;
            do {
              plVar5 = local_70;
              lVar16 = *plVar14;
              lVar2 = *(longlong *)(lVar16 + lVar17 * 0x14);
              lVar3 = *(longlong *)(lVar16 + 8 + lVar17 * 0x14);
              iVar7 = *(int *)(lVar16 + 0x10 + lVar17 * 0x14);
              lVar8 = *param_1;
              iVar10 = (int)param_1[1];
              lVar20 = (longlong)iVar10;
              if (lVar20 != 0) {
                lVar13 = 0;
                do {
                  plVar4 = *(longlong **)(lVar8 + 0x20 + lVar13);
                  if ((((int)plVar4[2] == iVar7) && (plVar4[1] == lVar3)) && (*plVar4 == lVar2)) {
                    iVar12 = (int)(lVar13 >> 4) * -0x55555555;
                    if (iVar12 != -1) {
                      FUN_1433e9a0e(&local_68,lVar8 + (longlong)iVar12 * 0x30,
                                    *(undefined8 *)(*plVar18 + lVar17 * 0x10),local_7c);
                      goto LAB_14792f04b;
                    }
                    break;
                  }
                  lVar13 = lVar13 + 0x30;
                } while (lVar20 * 0x30 != lVar13);
              }
              lVar16 = lVar16 + lVar17 * 0x14;
              lVar13 = param_1[2];
              iVar12 = (int)param_1[3];
              lVar15 = (longlong)iVar12;
              if (lVar15 != 0) {
                lVar11 = 0;
                do {
                  plVar14 = *(longlong **)(lVar13 + lVar11);
                  if ((((int)plVar14[2] == iVar7) && (plVar14[1] == lVar3)) && (*plVar14 == lVar2))
                  {
                    uVar9 = (int)(lVar11 >> 3) * -0x55555555;
                    if (uVar9 != 0xffffffff) {
                      *(uint *)(param_1 + 1) = iVar10 + 1U;
                      if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
                        FUN_147937afa(param_1,iVar10);
                        lVar8 = *param_1;
                      }
                      lVar13 = (longlong)(int)uVar9 * 0x18 + lVar13;
                      lVar20 = lVar20 * 0x30;
                      puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar20);
                      *puVar1 = 0;
                      puVar1[1] = 0;
                      *(undefined8 *)(lVar8 + lVar20) = 0;
                      ((undefined8 *)(lVar8 + lVar20))[1] = 0;
                      *(longlong *)(lVar8 + 0x20 + lVar20) = lVar16;
                      *(undefined8 *)(lVar8 + 0x28 + lVar20) = 0xffffffffbf800000;
                      FUN_1433e9a0e(&local_68,lVar8 + lVar20,*(undefined8 *)(lVar13 + 0x10),
                                    *(undefined4 *)(lVar13 + 8));
                      FUN_1433e9a0e(&local_68,lVar8 + lVar20,
                                    *(undefined8 *)(*plVar18 + lVar17 * 0x10),local_7c);
                      iVar7 = (int)param_1[3];
                      iVar10 = ~uVar9 + iVar7;
                      if (iVar10 != 0) {
                        if (0 < iVar10) {
                          iVar10 = 1;
                        }
                        memmove((void *)(param_1[2] + (longlong)(int)uVar9 * 0x18),
                                (void *)(param_1[2] + (longlong)(iVar7 - iVar10) * 0x18),
                                (longlong)iVar10 * 0x18);
                        iVar7 = (int)param_1[3];
                      }
                      plVar14 = local_78;
                      *(int *)(param_1 + 3) = iVar7 + -1;
                      FUN_147937b8e(local_70);
                      goto LAB_14792f04b;
                    }
                    break;
                  }
                  lVar11 = lVar11 + 0x18;
                } while (lVar15 * 0x18 != lVar11);
              }
              *(uint *)(param_1 + 3) = iVar12 + 1U;
              if (*(uint *)((longlong)param_1 + 0x1c) < iVar12 + 1U) {
                FUN_147937c3c(local_70,iVar12);
                lVar13 = *plVar5;
              }
              *(undefined4 *)(lVar13 + 0x14 + lVar15 * 0x18) = 0;
              *(undefined8 *)(lVar13 + 0xc + lVar15 * 0x18) = 0;
              *(longlong *)(lVar13 + lVar15 * 0x18) = lVar16;
              *(undefined4 *)(lVar13 + 8 + lVar15 * 0x18) = local_7c;
              *(undefined8 *)(lVar13 + 0x10 + lVar15 * 0x18) =
                   *(undefined8 *)(*plVar18 + lVar17 * 0x10);
              plVar14 = local_78;
LAB_14792f04b:
              lVar17 = lVar17 + 1;
            } while (lVar17 < (int)plVar14[1]);
          }
        }
        break;
      }
      lVar16 = lVar16 + 0x100000000;
      uVar19 = uVar19 + 8;
    } while ((longlong)iVar7 * 8 != uVar19);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14792f1c2 FUN_14792f1c2 body=150 status=ok
// SIG undefined FUN_14792f1c2(void)

undefined8 *
FUN_14792f1c2(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 5) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  if (0 < (int)param_2[1]) {
    uVar4 = 0;
    do {
      FUN_14792ee8e(param_1,*(undefined8 *)(*param_2 + uVar4 * 8),uVar4 & 0xffffffff,param_4);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)(int)param_2[1]);
  }
  return param_1;
}



// FUNCTION 14792f258 FUN_14792f258 body=144 status=ok
// SIG undefined FUN_14792f258(void)

undefined8 *
FUN_14792f258(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (0 < (int)param_2[1]) {
    uVar1 = 0;
    do {
      FUN_14792ee8e(param_1,*(undefined8 *)(*param_2 + uVar1 * 8),uVar1 & 0xffffffff,param_4);
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)(int)param_2[1]);
  }
  return param_1;
}



// FUNCTION 14792f2e8 FUN_14792f2e8 body=147 status=ok
// SIG undefined FUN_14792f2e8(void)

undefined8 *
FUN_14792f2e8(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = param_4;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (0 < (int)param_2[1]) {
    uVar1 = 0;
    do {
      FUN_14792ee8e(param_1,*(undefined8 *)(*param_2 + uVar1 * 8),uVar1 & 0xffffffff,param_5);
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)(int)param_2[1]);
  }
  return param_1;
}



// FUNCTION 14792f37c FUN_14792f37c body=373 status=ok
// SIG undefined FUN_14792f37c(void)

undefined8 *
FUN_14792f37c(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar6 = param_3[1];
  param_1[0xf] = *param_3;
  param_1[0x10] = uVar6;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *(undefined4 *)(param_1 + 0x11) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
  *(undefined4 *)(param_1 + 0x12) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar5;
  if (0 < (int)param_2[1]) {
    lVar8 = 0;
    uVar12 = 0;
    do {
      FUN_14792ee8e(param_1,*param_2 + lVar8,uVar12 & 0xffffffff,param_5);
      uVar12 = uVar12 + 1;
      lVar8 = lVar8 + 0x40;
    } while ((longlong)uVar12 < (longlong)(int)param_2[1]);
  }
  iVar9 = *(int *)(param_3 + 1);
  if (-1 < iVar9) {
    plVar1 = param_1 + 0xc;
    if (*(int *)((longlong)param_1 + 0x6c) < iVar9) {
      FUN_14481578e(plVar1);
      iVar9 = *(int *)(param_3 + 1);
    }
    if (0 < iVar9) {
      iVar9 = 0;
      do {
        lVar8 = param_2[1];
        iVar2 = *(int *)(param_1 + 0xd);
        iVar10 = -1;
        if (0 < (int)lVar8) {
          iVar7 = 0;
          fVar14 = -1.0;
          iVar11 = -1;
          do {
            fVar13 = (float)FUN_14792f4f2(param_1,iVar7,iVar2);
            iVar10 = iVar7;
            if (fVar13 <= fVar14) {
              fVar13 = fVar14;
              iVar10 = iVar11;
            }
            iVar7 = iVar7 + 1;
            fVar14 = fVar13;
            iVar11 = iVar10;
          } while ((int)lVar8 != iVar7);
        }
        *(uint *)(param_1 + 0xd) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x6c) < iVar2 + 1U) {
          FUN_1446f48e2(plVar1,iVar2);
        }
        *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar10;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_3 + 1));
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 14792f4f2 FUN_14792f4f2 body=207 status=ok
// SIG undefined FUN_14792f4f2(void)

float FUN_14792f4f2(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar3 = (longlong)param_3;
    if (*(int *)(lVar2 + lVar3 * 8) + 1 == param_2) {
      return *(float *)(lVar2 + 4 + lVar3 * 8);
    }
    if (param_2 == 0) {
      return 1.0 - *(float *)(lVar2 + 4 + lVar3 * 8);
    }
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*(int *)(param_1 + 0x90) == 0) {
      return 0.0;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      param_2 = *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 4);
    }
    lVar2 = (longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0x88);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x78) + (longlong)param_3 * 4);
    if ((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
       ((int)uVar1 < *(int *)(lVar2 + 0x48))) {
      return *(float *)(*(longlong *)(lVar2 + 0x40) + (ulonglong)uVar1 * 4);
    }
    fVar4 = *(float *)(lVar2 + 0x10);
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  else {
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x28) + (longlong)param_3 * 4);
    if (param_2 == 0) {
      return 1.0 - fVar4;
    }
  }
  return fVar4;
}



// FUNCTION 14792f5c2 FUN_14792f5c2 body=388 status=ok
// SIG undefined FUN_14792f5c2(void)

undefined8 *
FUN_14792f5c2(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar6 = param_3[1];
  param_1[0xf] = *param_3;
  param_1[0x10] = uVar6;
  uVar6 = param_4[1];
  param_1[0x11] = *param_4;
  param_1[0x12] = uVar6;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined4 *)(param_1 + 7) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  if (0 < (int)param_2[1]) {
    lVar8 = 0;
    uVar12 = 0;
    do {
      FUN_14792ee8e(param_1,*param_2 + lVar8,uVar12 & 0xffffffff,param_6);
      uVar12 = uVar12 + 1;
      lVar8 = lVar8 + 0x40;
    } while ((longlong)uVar12 < (longlong)(int)param_2[1]);
  }
  iVar9 = *(int *)(param_3 + 1);
  if (-1 < iVar9) {
    plVar1 = param_1 + 0xc;
    if (*(int *)((longlong)param_1 + 0x6c) < iVar9) {
      FUN_14481578e(plVar1);
      iVar9 = *(int *)(param_3 + 1);
    }
    if (0 < iVar9) {
      iVar9 = 0;
      do {
        lVar8 = param_2[1];
        iVar2 = *(int *)(param_1 + 0xd);
        iVar10 = -1;
        if (0 < (int)lVar8) {
          iVar7 = 0;
          fVar14 = -1.0;
          iVar11 = -1;
          do {
            fVar13 = (float)FUN_14792f4f2(param_1,iVar7,iVar2);
            iVar10 = iVar7;
            if (fVar13 <= fVar14) {
              fVar13 = fVar14;
              iVar10 = iVar11;
            }
            iVar7 = iVar7 + 1;
            fVar14 = fVar13;
            iVar11 = iVar10;
          } while ((int)lVar8 != iVar7);
        }
        *(uint *)(param_1 + 0xd) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x6c) < iVar2 + 1U) {
          FUN_1446f48e2(plVar1,iVar2);
        }
        *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar10;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_3 + 1));
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 14792f748 FUN_14792f748 body=341 status=ok
// SIG undefined FUN_14792f748(void)

undefined8 *
FUN_14792f748(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  lVar8 = *param_4;
  uVar2 = *(undefined4 *)((longlong)param_4 + 4);
  lVar9 = param_4[1];
  uVar3 = *(undefined4 *)((longlong)param_4 + 0xc);
  *(int *)(param_1 + 10) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
  *(int *)(param_1 + 0xb) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
  FUN_14792ee8e((int)lVar8,param_2,0,param_5);
  if (0 < (int)param_3[1]) {
    lVar8 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      FUN_14792ee8e(param_1,*param_3 + lVar8,uVar10 & 0xffffffff,param_5);
      lVar8 = lVar8 + 0x40;
    } while ((longlong)uVar10 < (longlong)(int)param_3[1]);
  }
  iVar5 = (int)param_4[1];
  if (-1 < iVar5) {
    plVar1 = param_1 + 0xc;
    if (*(int *)((longlong)param_1 + 0x6c) < iVar5) {
      FUN_14481578e(plVar1);
      iVar5 = (int)param_4[1];
    }
    if (iVar5 != 0) {
      lVar8 = *param_4;
      lVar9 = 0;
      do {
        if (*(float *)(lVar8 + 4 + lVar9) <= 0.5) {
          iVar7 = *(int *)(param_1 + 0xd);
          uVar4 = iVar7 + 1;
          *(uint *)(param_1 + 0xd) = uVar4;
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(lVar8 + lVar9) + 1;
          iVar7 = *(int *)(param_1 + 0xd);
          uVar4 = iVar7 + 1;
          *(uint *)(param_1 + 0xd) = uVar4;
        }
        if (*(uint *)((longlong)param_1 + 0x6c) < uVar4) {
          FUN_1446f48e2(plVar1,iVar7);
        }
        *(int *)(*plVar1 + (longlong)iVar7 * 4) = iVar6;
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar5 * 8 != lVar9);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 14792f89e FUN_14792f89e body=317 status=ok
// SIG undefined FUN_14792f89e(void)

undefined8 *
FUN_14792f89e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar5 = *(undefined4 *)((longlong)param_4 + 4);
  lVar7 = param_4[1];
  uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
  *(int *)(param_1 + 5) = (int)*param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(int *)(param_1 + 6) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  iVar3 = (int)param_4[1];
  if (-1 < iVar3) {
    if (iVar3 != 0) {
      plVar1 = param_1 + 0xc;
      FUN_14481578e(plVar1);
      lVar7 = param_4[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar4 = *param_4;
        lVar8 = 0;
        do {
          fVar2 = *(float *)(lVar4 + lVar8);
          iVar3 = *(int *)(param_1 + 0xd);
          *(uint *)(param_1 + 0xd) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 0x6c) < iVar3 + 1U) {
            FUN_1446f48e2(plVar1,iVar3);
          }
          *(uint *)(*plVar1 + (longlong)iVar3 * 4) = (uint)(0.5 < fVar2);
          lVar8 = lVar8 + 4;
        } while ((longlong)(int)lVar7 * 4 != lVar8);
      }
    }
    FUN_14792ee8e(param_1,param_2,0,param_5);
    FUN_14792ee8e(param_1,param_3,1,param_5);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 14792f9dc FUN_14792f9dc body=170 status=ok
// SIG undefined FUN_14792f9dc(void)

undefined8 *
FUN_14792f9dc(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar4 = param_3[1];
  param_1[5] = *param_3;
  param_1[6] = uVar4;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 7) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      FUN_14792ee8e(param_1,*param_2 + lVar6,uVar5 & 0xffffffff,param_5);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x40;
    } while ((longlong)uVar5 < (longlong)(int)param_2[1]);
  }
  return param_1;
}



// FUNCTION 14792fa86 FUN_14792fa86 body=47 status=ok
// SIG undefined FUN_14792fa86(void)

undefined4 FUN_14792fa86(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    puVar1 = (undefined4 *)(param_1 + 0x20);
  }
  else {
    if (*(int *)(param_1 + 0x40) != 0) {
      param_2 = *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 4);
    }
    puVar1 = (undefined4 *)((longlong)param_2 * 4 + *(longlong *)(param_1 + 0x28));
  }
  return *puVar1;
}



// FUNCTION 14792fabe FUN_14792fabe body=43 status=ok
// SIG undefined FUN_14792fabe(void)

undefined8 FUN_14792fabe(undefined8 param_1,undefined8 param_2)

{
  FUN_145c71962();
  return param_2;
}



// FUNCTION 14792faea FUN_14792faea body=45 status=ok
// SIG undefined FUN_14792faea(void)

longlong FUN_14792faea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14040ef40(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14792fb18 FUN_14792fb18 body=45 status=ok
// SIG undefined FUN_14792fb18(void)

longlong FUN_14792fb18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14040ef40(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14792fb46 FUN_14792fb46 body=45 status=ok
// SIG undefined FUN_14792fb46(void)

longlong FUN_14792fb46(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14040ef40(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14792fb7c FUN_14792fb7c body=45 status=ok
// SIG undefined FUN_14792fb7c(void)

longlong FUN_14792fb7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c12a32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14792fbaa FUN_14792fbaa body=45 status=ok
// SIG undefined FUN_14792fbaa(void)

longlong FUN_14792fbaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c12a32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14792fbd8 FUN_14792fbd8 body=45 status=ok
// SIG undefined FUN_14792fbd8(void)

longlong FUN_14792fbd8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145c12a32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14792fc06 FUN_14792fc06 body=29 status=ok
// SIG undefined FUN_14792fc06(void)

undefined8 FUN_14792fc06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14792fcc0 FUN_14792fcc0 body=59 status=ok
// SIG undefined FUN_14792fcc0(void)

undefined8 FUN_14792fcc0(longlong *param_1)

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



// FUNCTION 14792fd82 FUN_14792fd82 body=56 status=ok
// SIG undefined FUN_14792fd82(void)

void FUN_14792fd82(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00014792fdaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14792fdd0 FUN_14792fdd0 body=54 status=ok
// SIG undefined FUN_14792fdd0(void)

undefined1 FUN_14792fdd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147920888(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 14792fe2e FUN_14792fe2e body=59 status=ok
// SIG undefined FUN_14792fe2e(void)

undefined8 FUN_14792fe2e(longlong *param_1)

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



// FUNCTION 14792fe74 FUN_14792fe74 body=64 status=ok
// SIG undefined FUN_14792fe74(void)

void FUN_14792fe74(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14792ff14 FUN_14792ff14 body=44 status=ok
// SIG undefined FUN_14792ff14(void)

void FUN_14792ff14(undefined8 param_1,longlong *param_2)

{
  FUN_1448262fc(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14792ff56 FUN_14792ff56 body=54 status=ok
// SIG undefined FUN_14792ff56(void)

undefined1 FUN_14792ff56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140dc6b1e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14792ffb4 FUN_14792ffb4 body=59 status=ok
// SIG undefined FUN_14792ffb4(void)

undefined8 FUN_14792ffb4(longlong *param_1)

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



// FUNCTION 147930052 FUN_147930052 body=48 status=ok
// SIG undefined FUN_147930052(void)

void FUN_147930052(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1448262fc(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1479300a2 FUN_1479300a2 body=46 status=ok
// SIG undefined FUN_1479300a2(void)

void FUN_1479300a2(undefined8 param_1,longlong param_2)

{
  FUN_1448262fc(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479300e6 FUN_1479300e6 body=75 status=ok
// SIG undefined FUN_1479300e6(void)

undefined8 FUN_1479300e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_140dc6b1e();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14793015a FUN_14793015a body=59 status=ok
// SIG undefined FUN_14793015a(void)

undefined8 FUN_14793015a(longlong *param_1)

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



// FUNCTION 1479301f8 FUN_1479301f8 body=50 status=ok
// SIG undefined FUN_1479301f8(void)

void FUN_1479301f8(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1448262fc(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147930348 FUN_147930348 body=59 status=ok
// SIG undefined FUN_147930348(void)

undefined8 FUN_147930348(longlong *param_1)

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



// FUNCTION 147930394 FUN_147930394 body=38 status=ok
// SIG undefined FUN_147930394(void)

void FUN_147930394(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1404dc37a(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 147930488 FUN_147930488 body=204 status=ok
// SIG undefined FUN_147930488(void)

void FUN_147930488(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1479304db;
    }
  }
  lVar2 = 0;
LAB_1479304db:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14793077c(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793056a FUN_14793056a body=75 status=ok
// SIG undefined FUN_14793056a(void)

void FUN_14793056a(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x40),
              (longlong)*(int *)((longlong)param_1 + 0x48) << 3);
      FUN_1446efa72((longlong)param_1 + 0x40,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1479305b6 FUN_1479305b6 body=132 status=ok
// SIG undefined FUN_1479305b6(void)

void FUN_1479305b6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 14793077c FUN_14793077c body=450 status=ok
// SIG undefined FUN_14793077c(void)

void FUN_14793077c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_14793089c:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1479308b4;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_14793089c;
LAB_1479308b4:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 0x48);
          *(uint *)(param_3 + 0x48) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0x4c) < iVar3 + 1U) {
            FUN_147930940(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0x40);
          if (*(longlong *)(param_3 + 0x40) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147930940 FUN_147930940 body=110 status=ok
// SIG undefined FUN_147930940(void)

void FUN_147930940(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1479305b6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1479309e6 FUN_1479309e6 body=87 status=ok
// SIG undefined FUN_1479309e6(void)

undefined1 FUN_1479309e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147930b7c(param_2,param_3);
    FUN_1406fa324(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147930a66 FUN_147930a66 body=59 status=ok
// SIG undefined FUN_147930a66(void)

undefined8 FUN_147930a66(longlong *param_1)

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



// FUNCTION 147930aac FUN_147930aac body=34 status=ok
// SIG undefined FUN_147930aac(void)

void FUN_147930aac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_147930b1c(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147930b1c FUN_147930b1c body=58 status=ok
// SIG undefined FUN_147930b1c(void)

void FUN_147930b1c(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_147930b56(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147930b56 FUN_147930b56 body=38 status=ok
// SIG undefined FUN_147930b56(void)

void FUN_147930b56(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1478571f4(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 147930b7c FUN_147930b7c body=95 status=ok
// SIG undefined FUN_147930b7c(void)

undefined8 * FUN_147930b7c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147930b56(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147930bdc(param_1,iVar1);
      FUN_147930c4f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147930bdc FUN_147930bdc body=115 status=ok
// SIG undefined FUN_147930bdc(void)

void FUN_147930bdc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147930c4f FUN_147930c4f body=52 status=ok
// SIG undefined FUN_147930c4f(void)

void FUN_147930c4f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478775c0(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 147930c9c FUN_147930c9c body=47 status=ok
// SIG undefined FUN_147930c9c(void)

void FUN_147930c9c(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147930ce2 FUN_147930ce2 body=67 status=ok
// SIG undefined FUN_147930ce2(void)

undefined1 FUN_147930ce2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140de4b5e(param_2,param_3);
    FUN_144a67f5c(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147930d4e FUN_147930d4e body=59 status=ok
// SIG undefined FUN_147930d4e(void)

undefined8 FUN_147930d4e(longlong *param_1)

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



// FUNCTION 147930dec FUN_147930dec body=51 status=ok
// SIG undefined FUN_147930dec(void)

void FUN_147930dec(longlong *param_1)

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



// FUNCTION 147930e38 FUN_147930e38 body=47 status=ok
// SIG undefined FUN_147930e38(void)

void FUN_147930e38(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147930e7e FUN_147930e7e body=67 status=ok
// SIG undefined FUN_147930e7e(void)

undefined1 FUN_147930e7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785c646(param_2,param_3);
    FUN_144a67f5c(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147930eea FUN_147930eea body=59 status=ok
// SIG undefined FUN_147930eea(void)

undefined8 FUN_147930eea(longlong *param_1)

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



// FUNCTION 147930f88 FUN_147930f88 body=51 status=ok
// SIG undefined FUN_147930f88(void)

void FUN_147930f88(longlong *param_1)

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



// FUNCTION 147930fd4 FUN_147930fd4 body=47 status=ok
// SIG undefined FUN_147930fd4(void)

void FUN_147930fd4(undefined8 param_1,longlong *param_2)

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



// FUNCTION 14793101a FUN_14793101a body=67 status=ok
// SIG undefined FUN_14793101a(void)

undefined1 FUN_14793101a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140de4b5e(param_2,param_3);
    FUN_144a67f5c(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147931086 FUN_147931086 body=59 status=ok
// SIG undefined FUN_147931086(void)

undefined8 FUN_147931086(longlong *param_1)

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



// FUNCTION 147931124 FUN_147931124 body=51 status=ok
// SIG undefined FUN_147931124(void)

void FUN_147931124(longlong *param_1)

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



// FUNCTION 14793119c FUN_14793119c body=75 status=ok
// SIG undefined FUN_14793119c(void)

undefined8 FUN_14793119c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a67f5c();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147931210 FUN_147931210 body=59 status=ok
// SIG undefined FUN_147931210(void)

undefined8 FUN_147931210(longlong *param_1)

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



// FUNCTION 147931256 FUN_147931256 body=38 status=ok
// SIG undefined FUN_147931256(void)

void FUN_147931256(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1479312fc FUN_1479312fc body=47 status=ok
// SIG undefined FUN_1479312fc(void)

void FUN_1479312fc(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147931342 FUN_147931342 body=83 status=ok
// SIG undefined FUN_147931342(void)

undefined8 FUN_147931342(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    FUN_144a67f5c(param_2 + 0x10,param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 1479313be FUN_1479313be body=59 status=ok
// SIG undefined FUN_1479313be(void)

undefined8 FUN_1479313be(longlong *param_1)

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



// FUNCTION 14793145c FUN_14793145c body=51 status=ok
// SIG undefined FUN_14793145c(void)

void FUN_14793145c(longlong *param_1)

{
  if ((char)param_1[7] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 1479314c4 FUN_1479314c4 body=54 status=ok
// SIG undefined FUN_1479314c4(void)

undefined1 FUN_1479314c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147931522 FUN_147931522 body=59 status=ok
// SIG undefined FUN_147931522(void)

undefined8 FUN_147931522(longlong *param_1)

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



// FUNCTION 147931568 FUN_147931568 body=37 status=ok
// SIG undefined FUN_147931568(void)

void FUN_147931568(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1479315de FUN_1479315de body=29 status=ok
// SIG undefined FUN_1479315de(void)

undefined8 FUN_1479315de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


