// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1476d67e0 FUN_1476d67e0 body=167 status=ok
// SIG undefined FUN_1476d67e0(void)

void FUN_1476d67e0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0xaf2) = local_19;
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FUN_146a61430();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d6888 FUN_1476d6888 body=44 status=ok
// SIG undefined FUN_1476d6888(void)

void FUN_1476d6888(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0xb08) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x180);
  }
  else {
    uVar1 = FUN_146a60eee();
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 1476d68bc FUN_1476d68bc body=104 status=ok
// SIG undefined FUN_1476d68bc(void)

void FUN_1476d68bc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_988 [32];
  undefined1 local_968 [2384];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_988;
  FUN_141479b70(local_968,param_1 + 0x1a0);
  FUN_1414c3ed0(param_2,local_968);
  FUN_140ffdb16(local_968);
  if ((local_18 ^ (ulonglong)auStack_988) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d6926 FUN_1476d6926 body=58 status=ok
// SIG undefined FUN_1476d6926(void)

void FUN_1476d6926(longlong param_1)

{
  FUN_1414c3ed0(param_1 + 0x1a0);
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FUN_146a61020(*(longlong *)(param_1 + 0xb08),param_1 + 0x1a0);
    return;
  }
  return;
}



// FUNCTION 1476d69e4 FUN_1476d69e4 body=919 status=ok
// SIG undefined FUN_1476d69e4(void)

undefined8 * FUN_1476d69e4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_408 [32];
  undefined1 *local_3e8;
  undefined1 local_3d1;
  undefined1 local_3d0 [8];
  longlong *local_3c8;
  undefined8 *local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  longlong *local_3a0;
  undefined8 local_398;
  longlong *local_390;
  longlong local_1e0;
  undefined1 local_1d0 [40];
  uint local_1a8;
  uint local_170;
  uint local_16c;
  uint local_168;
  undefined1 local_110;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_408;
  FUN_1469f91ec(&local_398);
  local_3b8 = (undefined8 *)0x0;
  local_3b0 = 0;
  FUN_1446efa72(&local_3b8,0,3,0x10);
  puVar5 = local_3b8;
  local_3b0 = 3;
  *local_3b8 = &PTR_LAB_149f04bf0;
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
  local_3b8[2] = lVar7;
  *local_3b8 = &PTR_FUN_14a5093c0;
  local_3b8[3] = 0;
  FUN_14485c47a(local_3b8 + 3,param_1);
  puVar5[4] = FUN_1476d6d7c;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_144a450dc(local_1d0,&local_3b8);
  local_1e0 = param_1 + 0x1a0;
  local_1a8 = (uint)*(byte *)(param_1 + 0xaf0);
  local_170 = (uint)*(byte *)(param_1 + 0xaf1);
  local_16c = (uint)*(byte *)(param_1 + 0xaf2);
  local_168 = (uint)*(byte *)(param_1 + 0xaf3);
  local_110 = *(undefined1 *)(param_1 + 0xaf4);
  local_3e8 = &local_3d1;
  FUN_1469fcac2(local_3d0,"SCheckBox",".\\Runtime/UMG/Private/Components/CheckBox.cpp",0x3b);
  FUN_1469f9992(local_3d0,&local_3a8,&local_398);
  plVar4 = local_3a0;
  if (local_3a0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb08) = local_3a8;
    plVar8 = *(longlong **)(param_1 + 0xb10);
    if (plVar8 == (longlong *)0x0) goto LAB_1476d6b6c;
    *(undefined8 *)(param_1 + 0xb10) = 0;
LAB_1476d6d05:
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1476d6b6c;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_3a0 + 1) = (int)local_3a0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xb08) = local_3a8;
    plVar8 = *(longlong **)(param_1 + 0xb10);
    if (local_3a0 != plVar8) {
      *(longlong **)(param_1 + 0xb10) = local_3a0;
      if (plVar8 == (longlong *)0x0) goto LAB_1476d6b6c;
      goto LAB_1476d6d05;
    }
    LOCK();
    plVar8 = local_3a0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1476d6b6c;
    (**(code **)*local_3a0)(local_3a0);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_1476d6b6c:
  if (local_3a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3a0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_3a0)(local_3a0);
      LOCK();
      piVar1 = (int *)((longlong)local_3a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3a0 + 0x10))(local_3a0);
      }
    }
  }
  if (local_3c8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3c8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_3c8)(local_3c8);
      LOCK();
      piVar1 = (int *)((longlong)local_3c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3c8 + 0x10))(local_3c8);
      }
    }
  }
  FUN_1449db362(&local_3b8);
  FUN_1469f9dde(&local_398);
  if (0 < *(int *)(param_1 + 0x170)) {
    uVar3 = *(undefined8 *)(param_1 + 0xb08);
    lVar6 = FUN_1433335b4(param_1);
    if (*(longlong *)(lVar6 + 0x30) == 0) {
      local_398 = DAT_14c98dec8;
      local_390 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
      }
    }
    else {
      lVar6 = FUN_1433335b4(param_1);
      FUN_143333872(*(undefined8 *)(lVar6 + 0x30),&local_398);
    }
    FUN_146a60fc2(uVar3,&local_398);
    plVar4 = local_390;
    if (local_390 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_390 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_390)(local_390);
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
  uVar3 = *(undefined8 *)(param_1 + 0xb08);
  plVar4 = *(longlong **)(param_1 + 0xb10);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d6d7c FUN_1476d6d7c body=127 status=ok
// SIG undefined FUN_1476d6d7c(void)

void FUN_1476d6d7c(longlong param_1,char param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x180) != param_2) {
    *(char *)(param_1 + 0x180) = param_2;
    local_20 = DAT_14cab73c8;
    local_28 = DAT_14cab73c0;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  local_19 = param_2 != '\0';
  FUN_1447cd2ec(param_1 + 0xaf8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d6dfc FUN_1476d6dfc body=313 status=ok
// SIG undefined FUN_1476d6dfc(void)

void FUN_1476d6dfc(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FUN_146a61020(*(longlong *)(param_1 + 0xb08),param_1 + 0x1a0);
    uVar1 = *(undefined8 *)(param_1 + 0xb08);
    cVar2 = FUN_14113f0c0(param_1 + 0x184);
    if (cVar2 == '\0') {
      local_48 = CONCAT11(1,*(undefined1 *)(param_1 + 0x180));
      local_40 = 0;
      uStack_38 = 0;
    }
    else {
      local_50 = *(undefined8 *)(param_1 + 0x18c);
      uVar3 = FUN_14479d2ce(param_1 + 0x184);
      local_48 = 0x100;
      local_40 = 0;
      uStack_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      uStack_38 = CONCAT44(uStack_38._4_4_,3);
      FUN_147705138(local_40,uVar3,&local_50);
    }
    FUN_146a60f92(uVar1,&local_48);
    FUN_146a61428(*(undefined8 *)(param_1 + 0xb08),*(undefined1 *)(param_1 + 0xaf1));
    FUN_146a61430(*(undefined8 *)(param_1 + 0xb08),*(undefined1 *)(param_1 + 0xaf2));
    FUN_146a61438(*(undefined8 *)(param_1 + 0xb08),*(undefined1 *)(param_1 + 0xaf3));
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d6f36 FUN_1476d6f36 body=170 status=ok
// SIG undefined FUN_1476d6f36(void)

void FUN_1476d6f36(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0xb08);
  if (lVar3 != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      local_28 = DAT_14c98dec8;
      local_20 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
      }
    }
    else {
      FUN_143333872(*(longlong *)(param_2 + 0x30),&local_28);
    }
    FUN_146a60fc2(lVar3,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d701e FUN_1476d701e body=83 status=ok
// SIG undefined FUN_1476d701e(void)

undefined8 FUN_1476d701e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459e50c4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (*(longlong *)(param_2 + 0xb08) == 0) {
        return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),*(undefined1 *)(param_2 + 0x180));
      }
      uVar2 = FUN_146a60eee();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1476d7072 FUN_1476d7072 body=198 status=ok
// SIG undefined FUN_1476d7072(void)

void FUN_1476d7072(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(int *)(param_1 + 0x168) = local_1c;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    iVar2 = 0x19;
    if (local_1c < 0x19) {
      iVar2 = local_1c;
    }
    iVar1 = 1;
    if (1 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_146a5d924(*(longlong *)(param_1 + 0x238),iVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d713a FUN_1476d713a body=181 status=ok
// SIG undefined FUN_1476d713a(void)

void FUN_1476d713a(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  *(float *)(param_1 + 0x16c) = local_1c;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    fVar1 = local_1c;
    if (local_1c <= 1e-08) {
      fVar1 = 1e-08;
    }
    FUN_146a5d93a(*(longlong *)(param_1 + 0x238),fVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d71f0 FUN_1476d71f0 body=173 status=ok
// SIG undefined FUN_1476d71f0(void)

void FUN_1476d71f0(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x170) = local_1c;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_146a5d968();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d733c FUN_1476d733c body=316 status=ok
// SIG undefined FUN_1476d733c(void)

void FUN_1476d733c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = &PTR_FUN_149ed05f0;
  local_e0 = *(undefined4 *)(param_1 + 0x188);
  uStack_dc = *(undefined4 *)(param_1 + 0x18c);
  uStack_d8 = *(undefined4 *)(param_1 + 400);
  uStack_d4 = *(undefined4 *)(param_1 + 0x194);
  local_d0 = *(undefined4 *)(param_1 + 0x198);
  uStack_cc = *(undefined4 *)(param_1 + 0x19c);
  uStack_c8 = *(undefined4 *)(param_1 + 0x1a0);
  uStack_c4 = *(undefined4 *)(param_1 + 0x1a4);
  local_c0 = *(undefined4 *)(param_1 + 0x1a8);
  uStack_bc = *(undefined4 *)(param_1 + 0x1ac);
  uStack_b8 = *(undefined4 *)(param_1 + 0x1b0);
  uStack_b4 = *(undefined4 *)(param_1 + 0x1b4);
  local_b0 = *(longlong *)(param_1 + 0x1b8);
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = (undefined8 *)(param_1 + 0x1c0);
  puVar6 = local_a8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_54 = *(undefined1 *)(param_1 + 0x214);
  local_58 = *(undefined4 *)(param_1 + 0x210);
  local_50 = *(undefined8 *)(param_1 + 0x218);
  local_48 = *(longlong **)(param_1 + 0x220);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_40 = *(undefined8 *)(param_1 + 0x228);
  FUN_140f13d9e(param_2,&local_e8);
  plVar3 = local_48;
  local_e8 = &PTR_FUN_149ed05f0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d747a FUN_1476d747a body=49 status=ok
// SIG undefined FUN_1476d747a(void)

void FUN_1476d747a(longlong param_1)

{
  FUN_140f13d9e(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x238) != 0) {
    thunk_FUN_140163244();
    return;
  }
  return;
}



// FUNCTION 1476d74b6 FUN_1476d74b6 body=569 status=ok
// SIG undefined FUN_1476d74b6(void)

undefined8 * FUN_1476d74b6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  undefined1 local_241;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined8 local_228;
  longlong *local_220;
  undefined1 local_218 [424];
  longlong local_70;
  int local_68;
  float local_64;
  undefined4 local_60;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_146a735e0(local_218);
  local_70 = param_1 + 0x180;
  iVar4 = 0x19;
  if (*(int *)(param_1 + 0x168) < 0x19) {
    iVar4 = *(int *)(param_1 + 0x168);
  }
  local_68 = 1;
  if (1 < iVar4) {
    local_68 = iVar4;
  }
  local_64 = *(float *)(param_1 + 0x16c);
  if (local_64 <= 1e-08) {
    local_64 = 1e-08;
  }
  local_60 = *(undefined4 *)(param_1 + 0x170);
  local_258 = &local_241;
  FUN_146a82d28(local_240,"SCircularThrobber",
                ".\\Runtime/UMG/Private/Components/CircularThrobber.cpp",0x30);
  FUN_146a73810(local_240,&local_228,local_218);
  plVar3 = local_220;
  if (local_220 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x238) = local_228;
    plVar5 = *(longlong **)(param_1 + 0x240);
    if (plVar5 == (longlong *)0x0) goto LAB_1476d761b;
    *(undefined8 *)(param_1 + 0x240) = 0;
LAB_1476d75e3:
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1476d761b;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_220 + 1) = (int)local_220[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x238) = local_228;
    plVar5 = *(longlong **)(param_1 + 0x240);
    if (local_220 != plVar5) {
      *(longlong **)(param_1 + 0x240) = local_220;
      if (plVar5 == (longlong *)0x0) goto LAB_1476d761b;
      goto LAB_1476d75e3;
    }
    LOCK();
    plVar5 = local_220 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1476d761b;
    (**(code **)*local_220)(local_220);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1476d761b:
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_220 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  if (local_238 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_238 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_238)(local_238);
      LOCK();
      piVar1 = (int *)((longlong)local_238 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_238 + 0x10))(local_238);
      }
    }
  }
  FUN_1449db362(local_40);
  FUN_140a4ff8c(local_218);
  uVar2 = *(undefined8 *)(param_1 + 0x238);
  plVar3 = *(longlong **)(param_1 + 0x240);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = uVar2;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = uVar2;
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d76f0 FUN_1476d76f0 body=241 status=ok
// SIG undefined FUN_1476d76f0(void)

void FUN_1476d76f0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x238) != 0) {
    iVar6 = 0x19;
    if (*(int *)(param_1 + 0x168) < 0x19) {
      iVar6 = *(int *)(param_1 + 0x168);
    }
    iVar5 = 1;
    if (1 < iVar6) {
      iVar5 = iVar6;
    }
    FUN_146a5d924(*(longlong *)(param_1 + 0x238),iVar5);
    fVar7 = *(float *)(param_1 + 0x16c);
    if (fVar7 <= 1e-08) {
      fVar7 = 1e-08;
    }
    FUN_146a5d93a(*(undefined8 *)(param_1 + 0x238),fVar7);
    FUN_146a5d968(*(undefined8 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x170));
    FUN_146a5d904(*(undefined8 *)(param_1 + 0x238),param_1 + 0x180);
    thunk_FUN_140163244(*(undefined8 *)(param_1 + 0x238));
    *(undefined1 *)(param_1 + 0x230) = 1;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      uVar4 = FUN_1458f09fa();
      bVar2 = FUN_144a7ca96((longlong *)(param_1 + 0x30),uVar4);
      lVar1 = *(longlong *)(param_1 + 0x30);
      if ((lVar1 != 0 & bVar2) == 1) {
        if (*(longlong *)(lVar1 + 0x80) == 0) {
          cVar3 = *(char *)(lVar1 + 0x78);
        }
        else {
          cVar3 = FUN_140133ebc();
        }
        if (cVar3 == '\0') {
          *(undefined1 *)(param_1 + 0x230) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 1476d77ee FUN_1476d77ee body=973 status=ok
// SIG undefined FUN_1476d77ee(void)

undefined8 * FUN_1476d77ee(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_3d8 [39];
  undefined1 local_3b1;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  undefined8 *local_398;
  undefined4 local_390;
  undefined8 local_388;
  longlong *local_380;
  longlong local_378;
  undefined4 local_370;
  longlong local_1a8;
  longlong local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  longlong *local_138;
  undefined1 local_120 [130];
  undefined1 local_9e;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_378 = *(longlong *)(param_1 + 0x7c0);
  local_370 = *(undefined4 *)(param_1 + 0x7c8);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_14688038e(&local_98);
  FUN_1468f14e6(&local_98,&local_378);
  FUN_1476d7bbc(param_1 + 0x7c0,&local_378);
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  FUN_1476d7c06(&local_378);
  plVar4 = local_138;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  if (local_138 != (longlong *)0x0) {
    local_138 = (longlong *)0x0;
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  local_398 = (undefined8 *)0x0;
  local_390 = 0;
  local_150 = param_1 + 0x7c0;
  FUN_1446efa72(&local_398,0,3,0x10);
  puVar5 = local_398;
  local_390 = 3;
  *local_398 = &PTR_LAB_14a5098e0;
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
  local_398[2] = lVar7;
  *local_398 = &PTR_FUN_14a509870;
  local_398[3] = 0;
  FUN_14485c47a(local_398 + 3,param_1);
  puVar5[4] = FUN_1476d7e0a;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_144a450dc(local_120,&local_398);
  local_9e = *(undefined1 *)(param_1 + 0x7e0);
  local_1a8 = param_1 + 0x170;
  FUN_1477054a0(local_3b0,&local_3b1);
  FUN_1476d804c(local_3b0,&local_388,&local_378);
  plVar4 = local_380;
  if (local_380 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x7e8) = local_388;
    plVar8 = *(longlong **)(param_1 + 0x7f0);
    if (plVar8 == (longlong *)0x0) goto LAB_1476d7a15;
    *(undefined8 *)(param_1 + 0x7f0) = 0;
LAB_1476d7b70:
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1476d7a15;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_380 + 1) = (int)local_380[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x7e8) = local_388;
    plVar8 = *(longlong **)(param_1 + 0x7f0);
    if (local_380 != plVar8) {
      *(longlong **)(param_1 + 0x7f0) = local_380;
      if (plVar8 == (longlong *)0x0) goto LAB_1476d7a15;
      goto LAB_1476d7b70;
    }
    LOCK();
    plVar8 = local_380 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1476d7a15;
    (**(code **)*local_380)(local_380);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_1476d7a15:
  if (local_380 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_380 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_380)(local_380);
      LOCK();
      piVar1 = (int *)((longlong)local_380 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_380 + 0x10))(local_380);
      }
    }
  }
  if (local_3a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3a8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_3a8)(local_3a8);
      LOCK();
      piVar1 = (int *)((longlong)local_3a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3a8 + 0x10))(local_3a8);
      }
    }
  }
  FUN_1449db362(&local_398);
  FUN_1476d80c0(&local_378);
  uVar3 = *(undefined8 *)(param_1 + 0x7e8);
  plVar4 = *(longlong **)(param_1 + 0x7f0);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_98);
  if ((local_40 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d7bbc FUN_1476d7bbc body=74 status=ok
// SIG undefined FUN_1476d7bbc(void)

undefined8 * FUN_1476d7bbc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1402ae8a8(param_1,iVar1);
    FUN_14009c72e(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1476d7c06 FUN_1476d7c06 body=514 status=ok
// SIG undefined FUN_1476d7c06(void)

longlong FUN_1476d7c06(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"ComboBox",1);
  uVar3 = FUN_145817be4(lVar2,local_38,0,0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_40,"ComboBox.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_40,0,0);
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"ScrollBar",1);
  uVar3 = FUN_145817968(lVar2,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x588);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x580);
  *(undefined8 *)(param_1 + 0x1e0) = uVar3;
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x210) = 4;
  *(undefined1 *)(param_1 + 0x214) = 1;
  *(undefined1 *)(param_1 + 0x291) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0x43e10000;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined2 *)(param_1 + 0x2d8) = 1;
  *(undefined1 *)(param_1 + 0x2da) = 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d7e0a FUN_1476d7e0a body=571 status=ok
// SIG undefined FUN_1476d7e0a(void)

undefined8 * FUN_1476d7e0a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_548 [32];
  undefined1 *local_528;
  undefined1 local_519;
  wchar_t *local_518;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined1 local_4fc [4];
  longlong local_4f8 [2];
  longlong *local_4e8 [2];
  undefined1 local_4d8 [16];
  undefined1 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined1 local_4a0 [1136];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_548;
  cVar4 = FUN_14113f0c0(param_1 + 2000);
  if (cVar4 != '\0') {
    lVar5 = FUN_14775a90c(param_1 + 2000,param_3);
    if (lVar5 != 0) {
      FUN_143333872(lVar5,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_548);
    }
  }
  FUN_140a570d8(local_4a0);
  if (param_3 == 0) {
    local_518 = L"null";
    local_510 = 4;
    FUN_1446e940c(local_4f8,&local_518);
    local_518 = L"UMG";
    local_510 = 3;
    FUN_1446e940c(local_4fc,&local_518);
    FUN_140208bae(local_4e8,local_4fc,local_4f8,L"null");
  }
  else {
    local_518 = *(wchar_t **)(param_3 + 0x18);
    FUN_1400021e4(&local_518,local_4f8);
    FUN_140233b1a(local_4e8,local_4f8);
  }
  FUN_14023423e(local_4d8,local_4e8);
  local_4c8 = 1;
  local_4c0 = 0;
  uStack_4b8 = 0;
  uVar6 = FUN_140a54906(local_4a0,local_4d8);
  local_528 = &local_519;
  FUN_140a54526(&local_518,"STextBlock",".\\Runtime/UMG/Private/Components/ComboBox.cpp",0x38);
  FUN_140a52852(&local_518,&local_4b0,uVar6);
  *param_2 = local_4b0;
  param_2[1] = local_4a8;
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4a8 + 1) = (int)local_4a8[1] + 1;
    UNLOCK();
    if (local_4a8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_4a8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_4a8)(local_4a8);
        LOCK();
        piVar1 = (int *)((longlong)local_4a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_4a8 + 0x10))(local_4a8);
        }
      }
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_50c,local_510);
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
  if (local_4e8[0] != (longlong *)0x0) {
    (**(code **)(*local_4e8[0] + 0x10))();
  }
  if ((param_3 != 0) && (local_4f8[0] != 0)) {
    FUN_1400020a8();
  }
  FUN_140a59ae6(local_4a0);
  if ((local_30 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d804c FUN_1476d804c body=115 status=ok
// SIG undefined FUN_1476d804c(void)

longlong * FUN_1476d804c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_147706cb4(*param_1,param_3);
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



// FUNCTION 1476d80c0 FUN_1476d80c0 body=254 status=ok
// SIG undefined FUN_1476d80c0(void)

void FUN_1476d80c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x2d0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d0) = 0;
  }
  if (*(char *)(param_1 + 0x2b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2b0) = 0;
  }
  if (*(char *)(param_1 + 0x291) == '\x01') {
    *(undefined1 *)(param_1 + 0x291) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x280);
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
  FUN_1449db362(param_1 + 0x268);
  FUN_1449db362(param_1 + 600);
  FUN_1449db362(param_1 + 0x248);
  plVar3 = *(longlong **)(param_1 + 0x240);
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
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x1f0);
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1476d81be FUN_1476d81be body=203 status=ok
// SIG undefined FUN_1476d81be(void)

void FUN_1476d81be(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = local_28;
  iVar1 = FUN_140721fbe(param_1 + 0x168);
  if ((-1 < iVar1) && (*(longlong *)(param_1 + 0x1930) != 0)) {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1930) + 0x3f8) + 0x240))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d82a0 FUN_1476d82a0 body=117 status=ok
// SIG undefined FUN_1476d82a0(void)

void FUN_1476d82a0(longlong param_1)

{
  if (*(int *)(param_1 + 0x174) < 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
    FUN_1402191ca(param_1 + 0x168,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  if (*(longlong *)(param_1 + 0x1930) != 0) {
    FUN_14772b540(*(undefined8 *)(*(longlong *)(param_1 + 0x1930) + 0x3f8));
    if (*(longlong *)(param_1 + 0x1930) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476d830e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1930) + 0x3f8) + 0x240))();
      return;
    }
  }
  return;
}



// FUNCTION 1476d8360 FUN_1476d8360 body=53 status=ok
// SIG undefined FUN_1476d8360(void)

void FUN_1476d8360(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1930) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146a62c32();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476d839c FUN_1476d839c body=163 status=ok
// SIG undefined FUN_1476d839c(void)

void FUN_1476d839c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476d8440(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d8440 FUN_1476d8440 body=198 status=ok
// SIG undefined FUN_1476d8440(void)

ulonglong FUN_1476d8440(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x168);
    lVar3 = (longlong)iVar1 * 8;
    lVar5 = 0;
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5 * 8) == param_2) {
        if ((uint)lVar5 != 0xffffffff) {
          memmove((void *)(lVar2 + (lVar6 >> 0x20) * 8),(void *)(lVar2 + (lVar6 >> 0x20) * 8 + 8),
                  (longlong)(int)(~(uint)lVar5 + iVar1) << 3);
          *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
          if ((*(longlong *)(param_1 + 0x178) == param_2) && (*(longlong *)(param_1 + 0x1930) != 0))
          {
            FUN_14772b540(*(undefined8 *)(*(longlong *)(param_1 + 0x1930) + 0x3f8));
          }
          uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          if (*(longlong *)(param_1 + 0x1930) != 0) {
            (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1930) + 0x3f8) + 0x240))();
          }
          goto LAB_1476d848b;
        }
        break;
      }
      lVar6 = lVar6 + 0x100000000;
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  uVar4 = 0;
LAB_1476d848b:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1476d8506 FUN_1476d8506 body=156 status=ok
// SIG undefined FUN_1476d8506(void)

void FUN_1476d8506(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476d85a4(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d85a4 FUN_1476d85a4 body=154 status=ok
// SIG undefined FUN_1476d85a4(void)

void FUN_1476d85a4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x178) != param_2) {
    local_20 = DAT_14cab74b8;
    local_28 = DAT_14cab74b0;
    FUN_140e2f5f4(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x1930) == 0) {
      *(longlong *)(param_1 + 0x178) = param_2;
    }
    else if (param_2 == 0) {
      FUN_14772b540();
    }
    else {
      FUN_1477194fa(*(undefined8 *)(*(longlong *)(param_1 + 0x1930) + 0x3f8),param_2,3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d8640 FUN_1476d8640 body=104 status=ok
// SIG undefined FUN_1476d8640(void)

void FUN_1476d8640(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_5d8 [32];
  undefined1 local_5b8 [1440];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  FUN_1461e857a(local_5b8,param_1 + 0x180);
  FUN_1457c735e(param_2,local_5b8);
  FUN_14588d3b8(local_5b8);
  if ((local_18 ^ (ulonglong)auStack_5d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d86aa FUN_1476d86aa body=51 status=ok
// SIG undefined FUN_1476d86aa(void)

void FUN_1476d86aa(longlong param_1)

{
  FUN_1457c735e(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x1930) != 0) {
    FUN_140163244(*(longlong *)(param_1 + 0x1930),1);
    return;
  }
  return;
}



// FUNCTION 1476d86de FUN_1476d86de body=104 status=ok
// SIG undefined FUN_1476d86de(void)

void FUN_1476d86de(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b88 [32];
  undefined1 local_b68 [2896];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b88;
  FUN_1415bc658(local_b68,param_1 + 0x720);
  FUN_1457c74aa(param_2,local_b68);
  FUN_1415bbd66(local_b68);
  if ((local_18 ^ (ulonglong)auStack_b88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d8748 FUN_1476d8748 body=51 status=ok
// SIG undefined FUN_1476d8748(void)

void FUN_1476d8748(longlong param_1)

{
  FUN_1457c74aa(param_1 + 0x720);
  if (*(longlong *)(param_1 + 0x1930) != 0) {
    FUN_140163244(*(longlong *)(param_1 + 0x1930),1);
    return;
  }
  return;
}



// FUNCTION 1476d877c FUN_1476d877c body=104 status=ok
// SIG undefined FUN_1476d877c(void)

void FUN_1476d877c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_688 [32];
  undefined1 local_668 [1616];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_688;
  FUN_141479436(local_668,param_1 + 0x1270);
  FUN_1412cc8ca(param_2,local_668);
  FUN_140ffd8aa(local_668);
  if ((local_18 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d8806 FUN_1476d8806 body=94 status=ok
// SIG undefined FUN_1476d8806(void)

void FUN_1476d8806(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18d4) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x18d8) = uVar1;
  *(undefined4 *)(param_1 + 0x18dc) = uVar2;
  *(undefined4 *)(param_1 + 0x18e0) = uVar3;
  if (*(longlong *)(param_1 + 0x1930) != 0) {
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_18 = (undefined4)local_28;
    uStack_14 = local_28._4_4_;
    uStack_10 = (undefined4)uStack_20;
    uStack_c = uStack_20._4_4_;
    FUN_146a63410();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d8874 FUN_1476d8874 body=102 status=ok
// SIG undefined FUN_1476d8874(void)

void FUN_1476d8874(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x18e4) = uVar1;
  if (*(longlong *)(param_1 + 0x1930) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_145d09d0c(*(undefined8 *)(*(longlong *)(param_1 + 0x1930) + 0x440));
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d894a FUN_1476d894a body=1336 status=ok
// SIG undefined FUN_1476d894a(void)

undefined8 * FUN_1476d894a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_6c8 [32];
  undefined1 *local_6a8;
  undefined1 local_691;
  undefined1 local_690 [8];
  longlong *local_688;
  undefined1 local_671;
  undefined8 local_670;
  longlong *local_668;
  undefined8 local_658;
  longlong *local_650;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined1 local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined4 local_608;
  undefined1 local_604;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5e8;
  longlong *local_5e0;
  code *local_5d8;
  undefined4 local_5d0;
  undefined1 local_330 [424];
  undefined8 local_188;
  longlong *local_180;
  longlong local_178;
  longlong local_168;
  longlong local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148;
  undefined1 local_140 [16];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined1 local_118 [16];
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_6c8;
  FUN_1476d8e84(local_330);
  local_178 = param_1 + 0x180;
  local_168 = param_1 + 0x720;
  local_618 = *(undefined8 *)(&DAT_000018c0 + param_1);
  uStack_610 = *(undefined8 *)(param_1 + 0x18c8);
  local_608 = *(undefined4 *)(param_1 + 0x18d0);
  local_604 = 1;
  local_600 = 0;
  uStack_5f8 = 0;
  local_130 = *(undefined4 *)(&DAT_000018c0 + param_1);
  uStack_12c = *(undefined4 *)(param_1 + 0x18c4);
  uStack_128 = *(undefined4 *)(param_1 + 0x18c8);
  uStack_124 = *(undefined4 *)(param_1 + 0x18cc);
  local_120 = *(undefined4 *)(param_1 + 0x18d0);
  local_11c = 1;
  FUN_144a450dc(local_118,&local_600);
  FUN_1449db362(&local_600);
  plVar4 = local_f0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  if (local_f0 != (longlong *)0x0) {
    local_f0 = (longlong *)0x0;
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
  local_a8 = *(undefined8 *)(param_1 + 0x178);
  local_648 = *(undefined4 *)(param_1 + 0x18d4);
  uStack_644 = *(undefined4 *)(param_1 + 0x18d8);
  uStack_640 = *(undefined4 *)(param_1 + 0x18dc);
  uStack_63c = *(undefined4 *)(param_1 + 0x18e0);
  local_638 = 1;
  local_630 = 0;
  uStack_628 = 0;
  local_148 = 1;
  local_158 = local_648;
  uStack_154 = uStack_644;
  uStack_150 = uStack_640;
  uStack_14c = uStack_63c;
  local_108 = param_1 + 0x168;
  FUN_144a450dc(local_140,&local_630);
  FUN_1449db362(&local_630);
  local_9c = *(undefined4 *)(param_1 + 0x18e4);
  local_58 = *(undefined1 *)(param_1 + 0x18e8);
  local_57 = *(undefined1 *)(param_1 + 0x18e9);
  local_5d8 = FUN_1476d917e;
  local_5d0 = 0;
  FUN_1476d9088(local_330,param_1,&local_5d8);
  local_5d8 = FUN_1476d95e8;
  local_5d0 = 0;
  FUN_1476d94f2(local_330,param_1,&local_5d8);
  local_5d8 = (code *)&LAB_1476d9770;
  local_5d0 = 0;
  FUN_1476d967a(local_330,param_1,&local_5d8);
  local_56 = *(undefined1 *)(param_1 + 0x18ea);
  local_160 = param_1 + 0x1270;
  FUN_140a53a96(&local_5d8);
  local_6a8 = &local_671;
  FUN_140a53d66(&local_670,&DAT_149efe19f,".\\Runtime/UMG/Private/Components/ComboBoxKey.cpp",0x50);
  if (local_668 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_668 + 1) = (int)local_668[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x1948);
  *(undefined8 *)(param_1 + 0x1940) = local_670;
  *(longlong **)(param_1 + 0x1948) = local_668;
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
  FUN_140a50bf4(&local_670,&local_658,&local_5d8);
  plVar1 = local_180;
  plVar4 = local_650;
  if (local_650 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_650 + 1) = (int)local_650[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_650 + 1) = (int)local_650[1] + 1;
    UNLOCK();
  }
  local_188 = local_658;
  local_180 = local_650;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar1 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_14771890c(local_690,&local_691);
  FUN_1476d977e(local_690,&local_5e8,local_330);
  plVar1 = local_5e0;
  if (local_5e0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1930) = local_5e8;
    plVar6 = *(longlong **)(param_1 + 0x1938);
    if (plVar6 == (longlong *)0x0) goto LAB_1476d8c93;
    *(undefined8 *)(param_1 + 0x1938) = 0;
LAB_1476d8e45:
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1476d8c93;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_5e0 + 1) = (int)local_5e0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1930) = local_5e8;
    plVar6 = *(longlong **)(param_1 + 0x1938);
    if (local_5e0 != plVar6) {
      *(longlong **)(param_1 + 0x1938) = local_5e0;
      if (plVar6 == (longlong *)0x0) goto LAB_1476d8c93;
      goto LAB_1476d8e45;
    }
    LOCK();
    plVar6 = local_5e0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1476d8c93;
    (**(code **)*local_5e0)(local_5e0);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar6 = plVar1;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1476d8c93:
  if (local_5e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5e0)(local_5e0);
      LOCK();
      piVar2 = (int *)((longlong)local_5e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5e0 + 0x10))(local_5e0);
      }
    }
  }
  if (local_688 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_688 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_688)(local_688);
      LOCK();
      piVar2 = (int *)((longlong)local_688 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_688 + 0x10))(local_688);
      }
    }
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
  if (local_650 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_650 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_650)(local_650);
      LOCK();
      piVar2 = (int *)((longlong)local_650 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_650 + 0x10))(local_650);
      }
    }
  }
  if (local_668 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_668 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_668)(local_668);
      LOCK();
      piVar2 = (int *)((longlong)local_668 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_668 + 0x10))(local_668);
      }
    }
  }
  FUN_140a5660c(&local_5d8);
  FUN_1476d97f2(local_330);
  FUN_1476d98f0(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x1930);
  plVar4 = *(longlong **)(param_1 + 0x1938);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar4;
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
  }
  if ((local_50 ^ (ulonglong)auStack_6c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d8e84 FUN_1476d8e84 body=514 status=ok
// SIG undefined FUN_1476d8e84(void)

longlong FUN_1476d8e84(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"ComboBox",1);
  uVar3 = FUN_145817be4(lVar2,local_38,0,0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_40,"ComboBox.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_40,0,0);
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"ScrollBar",1);
  uVar3 = FUN_145817968(lVar2,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x588);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x580);
  *(undefined8 *)(param_1 + 0x1e0) = uVar3;
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x210) = 4;
  *(undefined1 *)(param_1 + 0x214) = 1;
  *(undefined1 *)(param_1 + 0x291) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0x43e10000;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined2 *)(param_1 + 0x2d8) = 1;
  *(undefined1 *)(param_1 + 0x2da) = 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d9088 FUN_1476d9088 body=245 status=ok
// SIG undefined FUN_1476d9088(void)

longlong FUN_1476d9088(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a50a260;
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
  *local_40 = &PTR_FUN_14a50a1f0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 600,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d917e FUN_1476d917e body=882 status=ok
// SIG undefined FUN_1476d917e(void)

longlong * FUN_1476d917e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_598 [32];
  wchar_t ***local_578;
  undefined1 local_570 [4];
  undefined1 local_56c [4];
  longlong *local_568 [2];
  undefined8 local_558;
  longlong *local_550;
  longlong *local_548 [2];
  longlong *local_538 [2];
  undefined1 local_528 [16];
  undefined1 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 local_4f8;
  longlong *local_4f0;
  wchar_t **local_4e8;
  ulonglong *local_4e0;
  longlong local_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  longlong local_4c0;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_598;
  local_500 = param_3;
  cVar4 = FUN_14113f0c0(param_1 + 0x18fc);
  if (cVar4 == '\0') {
    FUN_140a570d8(&local_4c8);
    FUN_145715fae(local_548,&local_500);
    local_58 = L"WarningMissingOnGenerateItemWidget";
    local_50 = 0x22;
    FUN_1446e940c(local_56c,&local_58);
    local_58 = L"UMG";
    local_50 = 3;
    FUN_1446e940c(local_570,&local_58);
    FUN_140208bae(local_568,local_570,local_56c,L"{0} Missing OnGenerateItemWidget");
    FUN_14023409e(&local_558,local_568,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_548);
    local_4e0 = &local_38;
    local_4e8 = &local_58;
    FUN_14010d304(&local_4d8,&local_4e8);
    local_4f8 = local_558;
    local_4f0 = local_550;
    if (local_550 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_550 + 1) = (int)local_550[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_538,&local_4f8,&local_4d8);
    FUN_14007f2db(local_4d8,local_4d0);
    if (local_4d8 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_550 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_550 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_550)(local_550);
        LOCK();
        piVar2 = (int *)((longlong)local_550 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_550 + 0x10))(local_550);
        }
      }
    }
    if (local_548[0] != (longlong *)0x0) {
      (**(code **)(*local_548[0] + 0x10))();
    }
    FUN_14023423e(local_528,local_538);
    local_518 = 1;
    local_510 = 0;
    uStack_508 = 0;
    uVar6 = FUN_140a54906(&local_4c8,local_528);
    local_578 = &local_4e8;
    FUN_140a54526(&local_58,"STextBlock",".\\Runtime/UMG/Private/Components/ComboBoxKey.cpp",0x15f);
    FUN_140a52852(&local_58,&local_4d8,uVar6);
    *param_2 = local_4d8;
    lVar3 = CONCAT44(uStack_4cc,local_4d0);
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      plVar5 = (longlong *)CONCAT44(uStack_4cc,local_4d0);
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
    plVar5 = (longlong *)CONCAT44(uStack_4c,local_50);
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
    if (local_538[0] != (longlong *)0x0) {
      (**(code **)(*local_538[0] + 0x10))();
    }
    if (local_568[0] != (longlong *)0x0) {
      (**(code **)(*local_568[0] + 0x10))();
    }
    FUN_140a59ae6(&local_4c8);
  }
  else {
    local_4c0 = 0;
    local_4c8 = param_3;
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x18fc);
    uVar6 = FUN_14477b072(plVar5,*(undefined8 *)(param_1 + 0x1904));
    (**(code **)(*plVar5 + 0x248))(plVar5,uVar6,&local_4c8);
    if (local_4c0 == 0) {
      *param_2 = DAT_14c98dec8;
      lVar3 = DAT_14c98ded0;
      param_2[1] = DAT_14c98ded0;
      if (lVar3 != 0) {
        LOCK();
        piVar2 = (int *)(lVar3 + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
    }
    else {
      FUN_143333872(local_4c0,param_2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d94f2 FUN_1476d94f2 body=245 status=ok
// SIG undefined FUN_1476d94f2(void)

longlong FUN_1476d94f2(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a50a340;
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
  *local_40 = &PTR_FUN_14a50a2d0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x248,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d95e8 FUN_1476d95e8 body=144 status=ok
// SIG undefined FUN_1476d95e8(void)

void FUN_1476d95e8(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x178) != param_2) {
    *(longlong *)(param_1 + 0x178) = param_2;
    local_38 = DAT_14cab74b8;
    local_40 = DAT_14cab74b0;
    FUN_140e2f5f4(param_1 + 0x28);
    local_30 = param_2;
    local_28 = param_3;
    FUN_1447cd2ec(param_1 + 0x1910);
    FUN_1476d98f0(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d967a FUN_1476d967a body=245 status=ok
// SIG undefined FUN_1476d967a(void)

longlong FUN_1476d967a(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_149e020b0;
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
  *local_40 = &PTR_FUN_14a50a3b0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x268,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d977e FUN_1476d977e body=115 status=ok
// SIG undefined FUN_1476d977e(void)

longlong * FUN_1476d977e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14771a56e(*param_1,param_3);
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



// FUNCTION 1476d97f2 FUN_1476d97f2 body=254 status=ok
// SIG undefined FUN_1476d97f2(void)

void FUN_1476d97f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x2d0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d0) = 0;
  }
  if (*(char *)(param_1 + 0x2b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2b0) = 0;
  }
  if (*(char *)(param_1 + 0x291) == '\x01') {
    *(undefined1 *)(param_1 + 0x291) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x280);
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
  FUN_1449db362(param_1 + 0x268);
  FUN_1449db362(param_1 + 600);
  FUN_1449db362(param_1 + 0x248);
  plVar3 = *(longlong **)(param_1 + 0x240);
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
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x1f0);
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1476d98f0 FUN_1476d98f0 body=1012 status=ok
// SIG undefined FUN_1476d98f0(void)

void FUN_1476d98f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_598 [32];
  undefined8 *local_578;
  undefined1 local_568 [4];
  undefined1 local_564 [4];
  longlong *local_560 [2];
  undefined8 local_550;
  longlong *local_548;
  longlong *local_540 [2];
  longlong *local_530 [2];
  undefined1 local_520 [16];
  undefined1 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  longlong *local_4f0;
  wchar_t **local_4e8;
  ulonglong *local_4e0;
  wchar_t **local_4d8;
  ulonglong *local_4d0;
  undefined8 local_4c8;
  longlong *local_4c0;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_598;
  cVar5 = FUN_14113f0c0(param_1 + 0x18ec);
  if (cVar5 == '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0x1940);
    FUN_140a570d8(&local_4c8);
    FUN_145715fae(local_540,param_1 + 0x178);
    local_58 = L"WarningMissingOnGenerateContentWidget";
    local_50 = 0x25;
    FUN_1446e940c(local_564,&local_58);
    local_58 = L"UMG";
    local_50 = 3;
    FUN_1446e940c(local_568,&local_58);
    FUN_140208bae(local_560,local_568,local_564,L"{0} Missing OnGenerateContentWidget");
    FUN_14023409e(&local_550,local_560,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_540);
    local_4e0 = &local_38;
    local_4e8 = &local_58;
    FUN_14010d304(&local_4d8);
    local_4f8 = local_550;
    local_4f0 = local_548;
    if (local_548 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_548 + 1) = (int)local_548[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_530,&local_4f8,&local_4d8);
    FUN_14007f2db(local_4d8,(ulonglong)local_4d0 & 0xffffffff);
    if (local_4d8 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_548 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_548 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_548)(local_548);
        LOCK();
        piVar2 = (int *)((longlong)local_548 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_548 + 0x10))(local_548);
        }
      }
    }
    if (local_540[0] != (longlong *)0x0) {
      (**(code **)(*local_540[0] + 0x10))();
    }
    FUN_14023423e(local_520,local_530);
    local_510 = 1;
    local_508 = 0;
    uStack_500 = 0;
    uVar8 = FUN_140a54906(&local_4c8,local_520);
    local_578 = &local_4f8;
    FUN_140a54526(&local_58,"STextBlock",".\\Runtime/UMG/Private/Components/ComboBoxKey.cpp",0x13a);
    FUN_140a52852(&local_58,&local_4e8,uVar8);
    local_4d8 = local_4e8;
    local_4d0 = local_4e0;
    if (local_4e0 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
      UNLOCK();
    }
    FUN_145cfad50(uVar7,&local_4d8);
    puVar4 = local_4d0;
    if (local_4d0 != (ulonglong *)0x0) {
      LOCK();
      puVar3 = local_4d0 + 1;
      *(int *)puVar3 = (int)*puVar3 + -1;
      UNLOCK();
      if ((int)*puVar3 == 0) {
        (**(code **)*local_4d0)(local_4d0);
        LOCK();
        piVar2 = (int *)((longlong)puVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*puVar4 + 0x10))(puVar4);
        }
      }
    }
    puVar4 = local_4e0;
    if (local_4e0 != (ulonglong *)0x0) {
      LOCK();
      puVar3 = local_4e0 + 1;
      *(int *)puVar3 = (int)*puVar3 + -1;
      UNLOCK();
      if ((int)*puVar3 == 0) {
        (**(code **)*local_4e0)(local_4e0);
        LOCK();
        piVar2 = (int *)((longlong)puVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*puVar4 + 0x10))(puVar4);
        }
      }
    }
    plVar6 = (longlong *)CONCAT44(uStack_4c,local_50);
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
    if (local_530[0] != (longlong *)0x0) {
      (**(code **)(*local_530[0] + 0x10))();
    }
    if (local_560[0] != (longlong *)0x0) {
      (**(code **)(*local_560[0] + 0x10))();
    }
    FUN_140a59ae6(&local_4c8);
  }
  else {
    local_4c8 = *(undefined8 *)(param_1 + 0x178);
    local_4c0 = (longlong *)0x0;
    plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x18ec);
    uVar7 = FUN_14477b072(plVar6,*(undefined8 *)(param_1 + 0x18f4));
    (**(code **)(*plVar6 + 0x248))(plVar6,uVar7,&local_4c8);
    uVar7 = *(undefined8 *)(param_1 + 0x1940);
    if (local_4c0 == (longlong *)0x0) {
      FUN_145cfad50(uVar7,&DAT_14c98dec8);
    }
    else {
      FUN_143333872(local_4c0,&local_4c8);
      FUN_145cfad50(uVar7,&local_4c8);
      plVar6 = local_4c0;
      if (local_4c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_4c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_4c0)(local_4c0);
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
  if ((local_38 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d9ce6 FUN_1476d9ce6 body=105 status=ok
// SIG undefined FUN_1476d9ce6(void)

void FUN_1476d9ce6(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a787a6(local_38);
  local_28 = param_3;
  FUN_1447cd2ec(param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d9d50 FUN_1476d9d50 body=171 status=ok
// SIG undefined FUN_1476d9d50(void)

void FUN_1476d9d50(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c1ce0c(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d9e12 FUN_1476d9e12 body=107 status=ok
// SIG undefined FUN_1476d9e12(void)

void FUN_1476d9e12(longlong param_1)

{
  FUN_1476d9e94();
  FUN_145cf7175(*(undefined8 *)(param_1 + 0x1990),*(undefined4 *)(param_1 + 0x1998));
  *(undefined4 *)(param_1 + 0x1998) = 0;
  if (*(int *)(param_1 + 0x199c) != 0) {
    FUN_146ab8eb4(param_1 + 0x1990,0);
  }
  if (*(longlong *)(param_1 + 0x19a0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476d9e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x19a0) + 0x400) + 0x240))();
    return;
  }
  return;
}



// FUNCTION 1476d9e94 FUN_1476d9e94 body=136 status=ok
// SIG undefined FUN_1476d9e94(void)

void FUN_1476d9e94(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x19d8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x19d8) = 0;
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
  if (*(longlong *)(param_1 + 0x19a0) != 0) {
    FUN_146a87840(*(undefined8 *)(*(longlong *)(param_1 + 0x19a0) + 0x400));
  }
  if (*(longlong *)(param_1 + 0x19b0) != 0) {
    FUN_145cfad50(*(longlong *)(param_1 + 0x19b0),&DAT_14c98dec8);
    return;
  }
  return;
}



// FUNCTION 1476d9f1c FUN_1476d9f1c body=178 status=ok
// SIG undefined FUN_1476d9f1c(void)

void FUN_1476d9f1c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476d9fd0(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d9fd0 FUN_1476d9fd0 body=132 status=ok
// SIG undefined FUN_1476d9fd0(void)

ulonglong FUN_1476d9fd0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x1998);
  if (0 < iVar3) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x1990) + lVar5);
      iVar1 = *(int *)(puVar2 + 1);
      if (iVar1 == *(int *)(param_2 + 1)) {
        if ((iVar1 < 2) || (iVar3 = FUN_144a80a00(*puVar2,*param_2), iVar3 == 0))
        goto LAB_1476da043;
        iVar3 = *(int *)(param_1 + 0x1998);
      }
      else if (*(int *)(param_2 + 1) + iVar1 == 1) {
LAB_1476da043:
        return uVar4 & 0xffffffff;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)uVar4 < (longlong)iVar3);
  }
  return 0xffffffff;
}



// FUNCTION 1476da054 FUN_1476da054 body=225 status=ok
// SIG undefined FUN_1476da054(void)

void FUN_1476da054(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476da136(param_1,&local_38,local_24);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476da136 FUN_1476da136 body=122 status=ok
// SIG undefined FUN_1476da136(void)

undefined8 * FUN_1476da136(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x1998) <= (int)param_3)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x1990) + (ulonglong)param_3 * 0x10);
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
  }
  return param_2;
}



// FUNCTION 1476da21a FUN_1476da21a body=139 status=ok
// SIG undefined FUN_1476da21a(void)

void FUN_1476da21a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476da2a6(param_1,&local_28);
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



// FUNCTION 1476da2a6 FUN_1476da2a6 body=102 status=ok
// SIG undefined FUN_1476da2a6(void)

undefined8 * FUN_1476da2a6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = *(undefined8 **)(param_1 + 0x19d0);
  if (puVar2 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
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
  }
  return param_2;
}



// FUNCTION 1476da310 FUN_1476da310 body=53 status=ok
// SIG undefined FUN_1476da310(void)

void FUN_1476da310(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x19a0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146a62c32();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476da37a FUN_1476da37a body=178 status=ok
// SIG undefined FUN_1476da37a(void)

void FUN_1476da37a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476da42e(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476da42e FUN_1476da42e body=126 status=ok
// SIG undefined FUN_1476da42e(void)

bool FUN_1476da42e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476d9fd0();
  if (iVar1 != -1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x1990) + (longlong)iVar1 * 0x10) ==
        *(longlong *)(param_1 + 0x19d0)) {
      FUN_1476d9e94(param_1);
    }
    FUN_14772bfb4(param_1 + 0x1990,iVar1);
    FUN_14772c02a(param_1 + 0x1990);
    if (*(longlong *)(param_1 + 0x19a0) != 0) {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x19a0) + 0x400) + 0x240))();
    }
  }
  return iVar1 != -1;
}



// FUNCTION 1476da4ac FUN_1476da4ac body=154 status=ok
// SIG undefined FUN_1476da4ac(void)

void FUN_1476da4ac(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1476da548(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476da548 FUN_1476da548 body=455 status=ok
// SIG undefined FUN_1476da548(void)

void FUN_1476da548(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0x333])) {
    lVar4 = *(longlong *)(param_1[0x332] + (ulonglong)param_2 * 0x10);
    lVar5 = *(longlong *)(param_1[0x332] + 8 + (ulonglong)param_2 * 0x10);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)param_1[0x33b];
    param_1[0x33a] = lVar4;
    param_1[0x33b] = lVar5;
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
    iVar7 = (int)param_1[0x30];
    iVar3 = *(int *)((undefined8 *)param_1[0x33a] + 1);
    if (iVar7 == iVar3) {
      if ((iVar7 < 2) ||
         (iVar7 = FUN_144a80a00(param_1[0x2f],*(undefined8 *)param_1[0x33a]), iVar7 == 0))
      goto LAB_1476da690;
    }
    else if (iVar3 + iVar7 == 1) goto LAB_1476da690;
    local_20 = DAT_14cab7558;
    local_28 = DAT_14cab7550;
    FUN_140e2f5f4(param_1 + 5);
    iVar7 = *(int *)((undefined8 *)param_1[0x33a] + 1);
    iVar3 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_1 + 0x2f,*(undefined8 *)param_1[0x33a],iVar3);
    if (param_1[0x336] == 0) {
      local_58 = param_1[0x33a];
      local_50 = param_1[0x33b];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x308))(param_1,&local_58,3);
    }
    else {
      lVar4 = param_1[0x334];
      local_38 = param_1[0x33a];
      local_30 = param_1[0x33b];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_146a8805a(lVar4,&local_38);
      local_48 = param_1[0x33a];
      local_40 = param_1[0x33b];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FUN_1476db4b0(param_1,&local_48);
    }
  }
LAB_1476da690:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476da710 FUN_1476da710 body=249 status=ok
// SIG undefined FUN_1476da710(void)

void FUN_1476da710(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_1476da80a(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476da80a FUN_1476da80a body=54 status=ok
// SIG undefined FUN_1476da80a(void)

void FUN_1476da80a(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1476d9fd0();
  FUN_1476da548(param_1,uVar1);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476da840 FUN_1476da840 body=104 status=ok
// SIG undefined FUN_1476da840(void)

void FUN_1476da840(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_5d8 [32];
  undefined1 local_5b8 [1440];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  FUN_1461e857a(local_5b8,param_1 + 400);
  FUN_1457c735e(param_2,local_5b8);
  FUN_14588d3b8(local_5b8);
  if ((local_18 ^ (ulonglong)auStack_5d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476da8aa FUN_1476da8aa body=51 status=ok
// SIG undefined FUN_1476da8aa(void)

void FUN_1476da8aa(longlong param_1)

{
  FUN_1457c735e(param_1 + 400);
  if (*(longlong *)(param_1 + 0x19a0) != 0) {
    FUN_140163244(*(longlong *)(param_1 + 0x19a0),1);
    return;
  }
  return;
}



// FUNCTION 1476da8de FUN_1476da8de body=104 status=ok
// SIG undefined FUN_1476da8de(void)

void FUN_1476da8de(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b88 [32];
  undefined1 local_b68 [2896];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b88;
  FUN_1415bc658(local_b68,param_1 + 0x730);
  FUN_1457c74aa(param_2,local_b68);
  FUN_1415bbd66(local_b68);
  if ((local_18 ^ (ulonglong)auStack_b88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476da948 FUN_1476da948 body=51 status=ok
// SIG undefined FUN_1476da948(void)

void FUN_1476da948(longlong param_1)

{
  FUN_1457c74aa(param_1 + 0x730);
  if (*(longlong *)(param_1 + 0x19a0) != 0) {
    FUN_140163244(*(longlong *)(param_1 + 0x19a0),1);
    return;
  }
  return;
}



// FUNCTION 1476da97c FUN_1476da97c body=104 status=ok
// SIG undefined FUN_1476da97c(void)

void FUN_1476da97c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_688 [32];
  undefined1 local_668 [1616];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_688;
  FUN_141479436(local_668,param_1 + 0x1280);
  FUN_1412cc8ca(param_2,local_668);
  FUN_140ffd8aa(local_668);
  if ((local_18 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476da9f2 FUN_1476da9f2 body=94 status=ok
// SIG undefined FUN_1476da9f2(void)

void FUN_1476da9f2(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18d0) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x18d4) = uVar1;
  *(undefined4 *)(param_1 + 0x18d8) = uVar2;
  *(undefined4 *)(param_1 + 0x18dc) = uVar3;
  if (*(longlong *)(param_1 + 0x19a0) != 0) {
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_18 = (undefined4)local_28;
    uStack_14 = local_28._4_4_;
    uStack_10 = (undefined4)uStack_20;
    uStack_c = uStack_20._4_4_;
    FUN_146a63410();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476daa60 FUN_1476daa60 body=102 status=ok
// SIG undefined FUN_1476daa60(void)

void FUN_1476daa60(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x18e0) = uVar1;
  if (*(longlong *)(param_1 + 0x19a0) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_145d09d0c(*(undefined8 *)(*(longlong *)(param_1 + 0x19a0) + 0x448));
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dab12 FUN_1476dab12 body=134 status=ok
// SIG undefined FUN_1476dab12(void)

void FUN_1476dab12(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [56];
  longlong *local_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a87366(local_78,param_1 + 0x18e8);
  FUN_1412cc59c(param_2,local_78);
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
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dabd2 FUN_1476dabd2 body=99 status=ok
// SIG undefined FUN_1476dabd2(void)

void FUN_1476dabd2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dac36 FUN_1476dac36 body=2127 status=ok
// SIG undefined FUN_1476dac36(void)

undefined8 * FUN_1476dac36(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_728 [32];
  undefined1 *local_708;
  undefined8 local_6f8;
  longlong local_6f0;
  undefined1 local_6e1;
  undefined1 local_6e0 [8];
  longlong *local_6d8;
  undefined1 local_6c1;
  undefined8 local_6c0;
  longlong *local_6b8;
  undefined8 local_6a8;
  longlong *local_6a0;
  undefined8 *local_698;
  undefined4 local_690;
  undefined8 *local_688;
  undefined4 local_680;
  undefined8 *local_678;
  undefined4 local_670;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined1 local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_638;
  longlong local_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined4 local_618;
  undefined1 local_614;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  longlong *local_5f8;
  undefined1 local_5f0 [680];
  undefined1 local_348 [440];
  longlong local_190;
  longlong local_180;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_130 [16];
  longlong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  longlong *local_108;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_728;
  iVar8 = FUN_1476d9fd0(param_1,param_1 + 0x178);
  if (iVar8 != -1) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1990) + (longlong)iVar8 * 0x10);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1990) + 8 + (longlong)iVar8 * 0x10);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar3 = *(longlong **)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x19d0) = uVar5;
    *(longlong *)(param_1 + 0x19d8) = lVar6;
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  FUN_146a87b96(local_348);
  local_190 = param_1 + 400;
  local_180 = param_1 + 0x730;
  local_628 = *(undefined8 *)(param_1 + 0x1948);
  uStack_620 = *(undefined8 *)(param_1 + 0x1950);
  local_618 = *(undefined4 *)(param_1 + 0x1958);
  local_614 = 1;
  local_610 = 0;
  uStack_608 = 0;
  local_148 = *(undefined4 *)(param_1 + 0x1948);
  uStack_144 = *(undefined4 *)(param_1 + 0x194c);
  uStack_140 = *(undefined4 *)(param_1 + 0x1950);
  uStack_13c = *(undefined4 *)(param_1 + 0x1954);
  local_138 = *(undefined4 *)(param_1 + 0x1958);
  local_134 = 1;
  FUN_144a450dc(local_130,&local_610);
  FUN_1449db362(&local_610);
  plVar3 = local_108;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  if (local_108 != (longlong *)0x0) {
    local_108 = (longlong *)0x0;
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
  local_638 = *(undefined8 *)(param_1 + 0x19d0);
  local_630 = *(longlong *)(param_1 + 0x19d8);
  if (local_630 != 0) {
    LOCK();
    *(int *)(local_630 + 8) = *(int *)(local_630 + 8) + 1;
    UNLOCK();
  }
  local_120 = param_1 + 0x1990;
  lVar9 = FUN_146a87d9e(local_348,&local_638);
  local_668 = *(undefined4 *)(param_1 + 0x18d0);
  uStack_664 = *(undefined4 *)(param_1 + 0x18d4);
  uStack_660 = *(undefined4 *)(param_1 + 0x18d8);
  uStack_65c = *(undefined4 *)(param_1 + 0x18dc);
  local_658 = 1;
  local_650 = 0;
  uStack_648 = 0;
  *(undefined1 *)(lVar9 + 0x1e8) = 1;
  *(undefined4 *)(lVar9 + 0x1d8) = local_668;
  *(undefined4 *)(lVar9 + 0x1dc) = uStack_664;
  *(undefined4 *)(lVar9 + 0x1e0) = uStack_660;
  *(undefined4 *)(lVar9 + 0x1e4) = uStack_65c;
  FUN_144a450dc(lVar9 + 0x1f0,&local_650);
  FUN_1449db362(&local_650);
  *(undefined4 *)(lVar9 + 0x29c) = *(undefined4 *)(param_1 + 0x18e0);
  *(undefined1 *)(lVar9 + 0x2e0) = *(undefined1 *)(param_1 + 0x18e4);
  *(undefined1 *)(lVar9 + 0x2e1) = *(undefined1 *)(param_1 + 0x18e5);
  local_678 = (undefined8 *)0x0;
  local_670 = 0;
  FUN_1446efa72(&local_678,0,3,0x10);
  puVar7 = local_678;
  local_670 = 3;
  *local_678 = &PTR_LAB_149f18800;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_678[2] = lVar10;
  *local_678 = &PTR_FUN_14a50b660;
  local_678[3] = 0;
  FUN_14485c47a(local_678 + 3,param_1);
  *(undefined4 *)(puVar7 + 5) = 0;
  puVar7[4] = &LAB_1476db486;
  FUN_144a450dc(lVar9 + 600,&local_678);
  local_688 = (undefined8 *)0x0;
  local_680 = 0;
  FUN_1446efa72(&local_688,0,3,0x10);
  puVar7 = local_688;
  local_680 = 3;
  *local_688 = &PTR_LAB_149f18090;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_688[2] = lVar10;
  *local_688 = &PTR_FUN_14a50b6d0;
  local_688[3] = 0;
  FUN_14485c47a(local_688 + 3,param_1);
  *(undefined4 *)(puVar7 + 5) = 0;
  puVar7[4] = &LAB_1476db494;
  FUN_144a450dc(lVar9 + 0x248,&local_688);
  local_698 = (undefined8 *)0x0;
  local_690 = 0;
  FUN_1446efa72(&local_698,0,3,0x10);
  puVar7 = local_698;
  local_690 = 3;
  *local_698 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_698[2] = lVar10;
  *local_698 = &PTR_FUN_14a50b740;
  local_698[3] = 0;
  FUN_14485c47a(local_698 + 3,param_1);
  puVar7[4] = &LAB_1476db4a2;
  *(undefined4 *)(puVar7 + 5) = 0;
  FUN_144a450dc(lVar9 + 0x268,&local_698);
  *(longlong *)(lVar9 + 0x1d0) = param_1 + 0x1280;
  *(undefined1 *)(lVar9 + 0x2e2) = *(undefined1 *)(param_1 + 0x195c);
  FUN_140a53a96(local_5f0);
  local_708 = &local_6c1;
  FUN_140a53d66(&local_6c0,&DAT_149efe19f,".\\Runtime/UMG/Private/Components/ComboBoxString.cpp",
                0x79);
  if (local_6b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6b8 + 1) = (int)local_6b8[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x19b0) = local_6c0;
  *(longlong **)(param_1 + 0x19b8) = local_6b8;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140a50bf4(&local_6c0,&local_6a8,local_5f0);
  plVar3 = local_6a0;
  if (local_6a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6a0 + 1) = (int)local_6a0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_6a0 + 1) = (int)local_6a0[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(lVar9 + 0x1b0);
  *(undefined8 *)(lVar9 + 0x1a8) = local_6a8;
  *(longlong **)(lVar9 + 0x1b0) = local_6a0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  local_708 = &local_6e1;
  FUN_146ab910e(local_6e0,"SComboBox< TSharedPtr<FString> >",
                ".\\Runtime/UMG/Private/Components/ComboBoxString.cpp",0x69);
  FUN_146a87e24(local_6e0,&local_600,lVar9);
  plVar4 = local_5f8;
  if (local_5f8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x19a0) = local_600;
    plVar11 = *(longlong **)(param_1 + 0x19a8);
    if (plVar11 == (longlong *)0x0) goto LAB_1476db16e;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
LAB_1476db3d7:
    LOCK();
    plVar4 = plVar11 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1476db16e;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_5f8 + 1) = (int)local_5f8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x19a0) = local_600;
    plVar11 = *(longlong **)(param_1 + 0x19a8);
    if (local_5f8 != plVar11) {
      *(longlong **)(param_1 + 0x19a8) = local_5f8;
      if (plVar11 == (longlong *)0x0) goto LAB_1476db16e;
      goto LAB_1476db3d7;
    }
    LOCK();
    plVar11 = local_5f8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_1476db16e;
    (**(code **)*local_5f8)(local_5f8);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar11 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
LAB_1476db16e:
  if (local_5f8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_5f8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_5f8)(local_5f8);
      LOCK();
      piVar1 = (int *)((longlong)local_5f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5f8 + 0x10))(local_5f8);
      }
    }
  }
  if (local_6d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_6d8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_6d8)(local_6d8);
      LOCK();
      piVar1 = (int *)((longlong)local_6d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6d8 + 0x10))(local_6d8);
      }
    }
  }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_6a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_6a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_6a0)(local_6a0);
      LOCK();
      piVar1 = (int *)((longlong)local_6a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6a0 + 0x10))(local_6a0);
      }
    }
  }
  if (local_6b8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_6b8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_6b8)(local_6b8);
      LOCK();
      piVar1 = (int *)((longlong)local_6b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6b8 + 0x10))(local_6b8);
      }
    }
  }
  FUN_140a5660c(local_5f0);
  FUN_1449db362(&local_698);
  FUN_1449db362(&local_688);
  FUN_1449db362(&local_678);
  FUN_146a87e98(local_348);
  if (iVar8 != -1) {
    local_6f8 = *(undefined8 *)(param_1 + 0x19d0);
    local_6f0 = *(longlong *)(param_1 + 0x19d8);
    if (local_6f0 != 0) {
      LOCK();
      *(int *)(local_6f0 + 8) = *(int *)(local_6f0 + 8) + 1;
      UNLOCK();
    }
    FUN_1476db4b0(param_1,&local_6f8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x19a0);
  plVar3 = *(longlong **)(param_1 + 0x19a8);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  if ((local_60 ^ (ulonglong)auStack_728) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476db4b0 FUN_1476db4b0 body=620 status=ok
// SIG undefined FUN_1476db4b0(void)

void FUN_1476db4b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *_Src;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong *local_80 [2];
  undefined1 local_70 [16];
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((param_1[0x338] == 0) || (param_1[0x339] == 0)) || (*(int *)(param_1[0x339] + 8) < 1)) ||
     (cVar7 = FUN_14113f0c0(param_1 + 0x32c), cVar7 == '\0')) {
    plVar9 = (longlong *)param_1[0x339];
    param_1[0x338] = 0;
    param_1[0x339] = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    lVar10 = param_1[0x336];
    local_90 = *param_2;
    local_88 = param_2[1];
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x300))(param_1,&local_48,&local_90);
    FUN_145cfad50(lVar10,&local_48);
    plVar9 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
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
  else {
    puVar4 = (undefined8 *)*param_2;
    if (puVar4 == (undefined8 *)0x0) {
      local_48 = (void *)0x0;
      plStack_40 = (longlong *)0x0;
    }
    else {
      local_48 = (void *)0x0;
      uVar3 = *(uint *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      plStack_40 = (longlong *)CONCAT44(plStack_40._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        plStack_40 = (longlong *)(ulonglong)uVar3;
      }
      else {
        FUN_1446dd670(&local_48,uVar3,0);
        memcpy(local_48,_Src,(longlong)(int)uVar3 * 2);
      }
    }
    plVar9 = (longlong *)param_1[0x339];
    bVar5 = true;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      lVar10 = 0;
    }
    else {
      iVar8 = (int)plVar9[1];
      lVar10 = 0;
      do {
        if (iVar8 == 0) {
          plVar9 = (longlong *)0x0;
          goto LAB_1476db687;
        }
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      lVar10 = param_1[0x338];
      bVar5 = false;
    }
LAB_1476db687:
    FUN_140009b9a(local_80,&local_48);
    FUN_14023423e(local_70,local_80);
    local_60 = 1;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140a5cace(lVar10,local_70);
    if (local_80[0] != (longlong *)0x0) {
      (**(code **)(*local_80[0] + 0x10))();
    }
    if (!bVar5) {
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
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar9 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476db71e FUN_1476db71e body=843 status=ok
// SIG undefined FUN_1476db71e(void)

undefined8 * FUN_1476db71e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_608 [32];
  undefined1 *local_5e8;
  undefined1 local_5d1;
  undefined1 local_5d0 [8];
  longlong *local_5c8;
  undefined1 local_5b8 [96];
  undefined1 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  longlong *local_540 [2];
  undefined1 local_530 [16];
  undefined1 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  longlong *local_500;
  void *local_4f8;
  int local_4f0;
  undefined4 local_4ec;
  void *local_4e8;
  ulonglong uStack_4e0;
  undefined1 local_4d0 [1136];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_608;
  puVar4 = (undefined8 *)*param_3;
  if (puVar4 == (undefined8 *)0x0) {
    local_4e8 = (void *)0x0;
    uStack_4e0 = 0;
  }
  else {
    local_4e8 = (void *)0x0;
    uVar3 = *(uint *)(puVar4 + 1);
    pvVar5 = (void *)*puVar4;
    uStack_4e0 = CONCAT44(uStack_4e0._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      uStack_4e0 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_4e8,uVar3,0);
      memcpy(local_4e8,pvVar5,(longlong)(int)uVar3 * 2);
    }
  }
  cVar7 = FUN_14113f0c0(param_1 + 0x1960);
  pvVar5 = local_4e8;
  if (cVar7 != '\0') {
    local_4f8 = (void *)0x0;
    lVar8 = (longlong)(int)uStack_4e0;
    local_4f0 = (int)uStack_4e0;
    if (lVar8 == 0) {
      local_4ec = 0;
    }
    else {
      FUN_1446dd670(&local_4f8,uStack_4e0 & 0xffffffff,0);
      memcpy(local_4f8,pvVar5,lVar8 * 2);
    }
    lVar8 = FUN_14775a87a(param_1 + 0x1960,&local_4f8);
    if (local_4f8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (lVar8 != 0) {
      FUN_143333872(lVar8,param_2);
      goto LAB_1476db9c9;
    }
  }
  FUN_140a570d8(local_4d0);
  FUN_140009b9a(local_540,&local_4e8);
  FUN_14023423e(local_530,local_540);
  local_520 = 1;
  local_518 = 0;
  uStack_510 = 0;
  lVar8 = FUN_140a54906(local_4d0,local_530);
  FUN_144a87366(local_5b8,param_1 + 0x18e8);
  local_558 = 1;
  local_550 = 0;
  uStack_548 = 0;
  FUN_1412cc59c(lVar8 + 0x1d8,local_5b8);
  *(undefined1 *)(lVar8 + 0x238) = local_558;
  FUN_144a450dc(lVar8 + 0x240,&local_550);
  FUN_141515cba(local_5b8);
  local_5e8 = &local_5d1;
  FUN_140a54526(local_5d0,"STextBlock",".\\Runtime/UMG/Private/Components/ComboBoxString.cpp",0x1bf)
  ;
  FUN_140a52852(local_5d0,&local_508,lVar8);
  *param_2 = local_508;
  param_2[1] = local_500;
  if (local_500 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_500 + 1) = (int)local_500[1] + 1;
    UNLOCK();
    if (local_500 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_500 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_500)(local_500);
        LOCK();
        piVar2 = (int *)((longlong)local_500 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_500 + 0x10))(local_500);
        }
      }
    }
  }
  if (local_5c8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_5c8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_5c8)(local_5c8);
      LOCK();
      piVar2 = (int *)((longlong)local_5c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5c8 + 0x10))(local_5c8);
      }
    }
  }
  if (local_540[0] != (longlong *)0x0) {
    (**(code **)(*local_540[0] + 0x10))();
  }
  FUN_140a59ae6(local_4d0);
LAB_1476db9c9:
  if (local_4e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)param_3[1];
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
  if ((local_60 ^ (ulonglong)auStack_608) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dba6a FUN_1476dba6a body=677 status=ok
// SIG undefined FUN_1476dba6a(void)

void FUN_1476dba6a(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  longlong local_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x19d8);
  *(longlong *)(param_1 + 0x19d0) = lVar4;
  *(longlong *)(param_1 + 0x19d8) = lVar5;
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
  local_50 = DAT_14cab7558;
  local_58 = DAT_14cab7550;
  FUN_140e2f5f4(param_1 + 0x28);
  puVar6 = *(undefined8 **)(param_1 + 0x19d0);
  if (puVar6 == (undefined8 *)0x0) {
    local_68 = (void *)0x0;
    uStack_60 = 0;
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x19d8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_68 = (void *)0x0;
    uVar3 = *(uint *)(puVar6 + 1);
    pvVar7 = (void *)*puVar6;
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      uStack_60 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_68,uVar3,0);
      memcpy(local_68,pvVar7,(longlong)(int)uVar3 * 2);
    }
  }
  if ((void **)(param_1 + 0x178) == &local_68) {
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x178) != 0) {
      FUN_1400020a8();
    }
    *(void **)(param_1 + 0x178) = local_68;
    local_68 = (void *)0x0;
    *(undefined4 *)(param_1 + 0x180) = (undefined4)uStack_60;
    *(undefined4 *)(param_1 + 0x184) = uStack_60._4_4_;
    uStack_60 = 0;
  }
  if (plVar8 != (longlong *)0x0 && puVar6 != (undefined8 *)0x0) {
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
  if (*(longlong *)(param_1 + 0x19b0) != 0) {
    local_78 = *(undefined8 *)(param_1 + 0x19d0);
    local_70 = *(longlong *)(param_1 + 0x19d8);
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    FUN_1476db4b0(param_1,&local_78);
  }
  puVar6 = (undefined8 *)*param_2;
  if (puVar6 == (undefined8 *)0x0) {
    local_88 = (void *)0x0;
    uStack_80 = 0;
  }
  else {
    local_88 = (void *)0x0;
    uVar3 = *(uint *)(puVar6 + 1);
    pvVar7 = (void *)*puVar6;
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      uStack_80 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_88,uVar3,0);
      memcpy(local_88,pvVar7,(longlong)(int)uVar3 * 2);
    }
  }
  FUN_1476d9ce6(param_1 + 0x1970,&local_88,param_3);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dbd3c FUN_1476dbd3c body=45 status=ok
// SIG undefined FUN_1476dbd3c(void)

longlong FUN_1476dbd3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_145898044(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbd78 FUN_1476dbd78 body=48 status=ok
// SIG undefined FUN_1476dbd78(void)

longlong FUN_1476dbd78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_145936702(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbdb0 FUN_1476dbdb0 body=48 status=ok
// SIG undefined FUN_1476dbdb0(void)

longlong FUN_1476dbdb0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_145ce6478(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbe28 FUN_1476dbe28 body=45 status=ok
// SIG undefined FUN_1476dbe28(void)

longlong FUN_1476dbe28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145fe4714(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbe5e FUN_1476dbe5e body=45 status=ok
// SIG undefined FUN_1476dbe5e(void)

longlong FUN_1476dbe5e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c1985c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbe9a FUN_1476dbe9a body=45 status=ok
// SIG undefined FUN_1476dbe9a(void)

longlong FUN_1476dbe9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14110b6d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbec8 FUN_1476dbec8 body=45 status=ok
// SIG undefined FUN_1476dbec8(void)

longlong FUN_1476dbec8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140f8610c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbef6 FUN_1476dbef6 body=45 status=ok
// SIG undefined FUN_1476dbef6(void)

longlong FUN_1476dbef6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458dcdc4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbf24 FUN_1476dbf24 body=45 status=ok
// SIG undefined FUN_1476dbf24(void)

longlong FUN_1476dbf24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14584c146(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbf5a FUN_1476dbf5a body=45 status=ok
// SIG undefined FUN_1476dbf5a(void)

longlong FUN_1476dbf5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c19914(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbf88 FUN_1476dbf88 body=45 status=ok
// SIG undefined FUN_1476dbf88(void)

longlong FUN_1476dbf88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d62eec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbfb6 FUN_1476dbfb6 body=45 status=ok
// SIG undefined FUN_1476dbfb6(void)

longlong FUN_1476dbfb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14588d2b6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dbfec FUN_1476dbfec body=45 status=ok
// SIG undefined FUN_1476dbfec(void)

longlong FUN_1476dbfec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cf6f80(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dc0b2 FUN_1476dc0b2 body=59 status=ok
// SIG undefined FUN_1476dc0b2(void)

undefined8 FUN_1476dc0b2(longlong *param_1)

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



// FUNCTION 1476dc154 FUN_1476dc154 body=66 status=ok
// SIG undefined FUN_1476dc154(void)

void FUN_1476dc154(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return;
}



// FUNCTION 1476dc196 FUN_1476dc196 body=66 status=ok
// SIG undefined FUN_1476dc196(void)

void FUN_1476dc196(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return;
}



// FUNCTION 1476dc1f6 FUN_1476dc1f6 body=63 status=ok
// SIG undefined FUN_1476dc1f6(void)

undefined1 FUN_1476dc1f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1402c17c2(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 1476dc25e FUN_1476dc25e body=59 status=ok
// SIG undefined FUN_1476dc25e(void)

undefined8 FUN_1476dc25e(longlong *param_1)

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



// FUNCTION 1476dc2aa FUN_1476dc2aa body=38 status=ok
// SIG undefined FUN_1476dc2aa(void)

void FUN_1476dc2aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14493db24(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 1476dc394 FUN_1476dc394 body=59 status=ok
// SIG undefined FUN_1476dc394(void)

undefined8 FUN_1476dc394(longlong *param_1)

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



// FUNCTION 1476dc45e FUN_1476dc45e body=101 status=ok
// SIG undefined FUN_1476dc45e(void)

undefined1 FUN_1476dc45e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1476dc4ec FUN_1476dc4ec body=59 status=ok
// SIG undefined FUN_1476dc4ec(void)

undefined8 FUN_1476dc4ec(longlong *param_1)

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



// FUNCTION 1476dc5de FUN_1476dc5de body=59 status=ok
// SIG undefined FUN_1476dc5de(void)

undefined8 FUN_1476dc5de(longlong *param_1)

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



// FUNCTION 1476dc6c8 FUN_1476dc6c8 body=59 status=ok
// SIG undefined FUN_1476dc6c8(void)

undefined8 FUN_1476dc6c8(longlong *param_1)

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



// FUNCTION 1476dc7fc FUN_1476dc7fc body=59 status=ok
// SIG undefined FUN_1476dc7fc(void)

undefined8 FUN_1476dc7fc(longlong *param_1)

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



// FUNCTION 1476dc92e FUN_1476dc92e body=59 status=ok
// SIG undefined FUN_1476dc92e(void)

undefined8 FUN_1476dc92e(longlong *param_1)

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



// FUNCTION 1476dca3c FUN_1476dca3c body=59 status=ok
// SIG undefined FUN_1476dca3c(void)

undefined8 FUN_1476dca3c(longlong *param_1)

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



// FUNCTION 1476dcade FUN_1476dcade body=115 status=ok
// SIG undefined FUN_1476dcade(void)

void FUN_1476dcade(longlong param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1476dcb52 FUN_1476dcb52 body=52 status=ok
// SIG undefined FUN_1476dcb52(void)

undefined8 * FUN_1476dcb52(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5073d0;
  FUN_1476dcade(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dcb86 FUN_1476dcb86 body=78 status=ok
// SIG undefined FUN_1476dcb86(void)

undefined8 FUN_1476dcb86(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476dcc84();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dcbd6 FUN_1476dcbd6 body=85 status=ok
// SIG undefined FUN_1476dcbd6(void)

void FUN_1476dcbd6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476dcdbc(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dcc2c FUN_1476dcc2c body=86 status=ok
// SIG undefined FUN_1476dcc2c(void)

void FUN_1476dcc2c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476dce90(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dcc84 FUN_1476dcc84 body=311 status=ok
// SIG undefined FUN_1476dcc84(void)

undefined2 * FUN_1476dcc84(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476dcdbc(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xf0) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476dce90(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dcdbc FUN_1476dcdbc body=212 status=ok
// SIG undefined FUN_1476dcdbc(void)

void FUN_1476dcdbc(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0xf) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xe]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
  }
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x4c]);
  }
  if (*(char *)(param_2 + 0x59) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x58]);
  }
  if (*(char *)(param_2 + 0x65) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[100]);
  }
  FUN_140dba9e6(*param_1,param_2[0x70]);
  return;
}



// FUNCTION 1476dce90 FUN_1476dce90 body=176 status=ok
// SIG undefined FUN_1476dce90(void)

void FUN_1476dce90(undefined8 *param_1,longlong param_2)

{
  FUN_140659bfa(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x1c,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x98,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xb0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 200,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476dcf40 FUN_1476dcf40 body=115 status=ok
// SIG undefined FUN_1476dcf40(void)

void FUN_1476dcf40(longlong param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1476dcfb4 FUN_1476dcfb4 body=52 status=ok
// SIG undefined FUN_1476dcfb4(void)

undefined8 * FUN_1476dcfb4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5073f0;
  FUN_1476dcf40(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dcfe8 FUN_1476dcfe8 body=78 status=ok
// SIG undefined FUN_1476dcfe8(void)

undefined8 FUN_1476dcfe8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476dd0e6();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd038 FUN_1476dd038 body=85 status=ok
// SIG undefined FUN_1476dd038(void)

void FUN_1476dd038(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476dd21e(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd08e FUN_1476dd08e body=86 status=ok
// SIG undefined FUN_1476dd08e(void)

void FUN_1476dd08e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476dd2ec(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd0e6 FUN_1476dd0e6 body=311 status=ok
// SIG undefined FUN_1476dd0e6(void)

undefined2 * FUN_1476dd0e6(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476dd21e(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xe8) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476dd2ec(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd21e FUN_1476dd21e body=205 status=ok
// SIG undefined FUN_1476dd21e(void)

void FUN_1476dd21e(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0xf) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xe]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
  }
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x4c]);
  }
  if (*(char *)(param_2 + 0x59) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x58]);
  }
  if (*(char *)(param_2 + 0x65) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[100]);
    return;
  }
  return;
}



// FUNCTION 1476dd2ec FUN_1476dd2ec body=176 status=ok
// SIG undefined FUN_1476dd2ec(void)

void FUN_1476dd2ec(undefined8 *param_1,longlong param_2)

{
  FUN_140659bfa(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x1c,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x98,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xb0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 200,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476dd39c FUN_1476dd39c body=99 status=ok
// SIG undefined FUN_1476dd39c(void)

void FUN_1476dd39c(longlong param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1476dd400 FUN_1476dd400 body=52 status=ok
// SIG undefined FUN_1476dd400(void)

undefined8 * FUN_1476dd400(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a507410;
  FUN_1476dd39c(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dd434 FUN_1476dd434 body=78 status=ok
// SIG undefined FUN_1476dd434(void)

undefined8 FUN_1476dd434(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476dd532();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd484 FUN_1476dd484 body=85 status=ok
// SIG undefined FUN_1476dd484(void)

void FUN_1476dd484(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476dd66a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd4da FUN_1476dd4da body=86 status=ok
// SIG undefined FUN_1476dd4da(void)

void FUN_1476dd4da(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476dd720(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd532 FUN_1476dd532 body=311 status=ok
// SIG undefined FUN_1476dd532(void)

undefined2 * FUN_1476dd532(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476dd66a(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xd0) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476dd720(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd66a FUN_1476dd66a body=181 status=ok
// SIG undefined FUN_1476dd66a(void)

void FUN_1476dd66a(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0xf) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xe]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
  }
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x4c]);
  }
  if (*(char *)(param_2 + 0x59) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x58]);
    return;
  }
  return;
}



// FUNCTION 1476dd720 FUN_1476dd720 body=157 status=ok
// SIG undefined FUN_1476dd720(void)

void FUN_1476dd720(undefined8 *param_1,longlong param_2)

{
  FUN_140659bfa(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x1c,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x98,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xb0,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476dd7be FUN_1476dd7be body=38 status=ok
// SIG undefined FUN_1476dd7be(void)

undefined8 FUN_1476dd7be(undefined8 param_1,int param_2)

{
  FUN_1476c4e02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dd7e4 FUN_1476dd7e4 body=78 status=ok
// SIG undefined FUN_1476dd7e4(void)

undefined8 FUN_1476dd7e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476dd8e2();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd834 FUN_1476dd834 body=85 status=ok
// SIG undefined FUN_1476dd834(void)

void FUN_1476dd834(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476dda1a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd88a FUN_1476dd88a body=86 status=ok
// SIG undefined FUN_1476dd88a(void)

void FUN_1476dd88a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476ddab8(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dd8e2 FUN_1476dd8e2 body=311 status=ok
// SIG undefined FUN_1476dd8e2(void)

undefined2 * FUN_1476dd8e2(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476dda1a(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xb8) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476ddab8(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dda1a FUN_1476dda1a body=157 status=ok
// SIG undefined FUN_1476dda1a(void)

void FUN_1476dda1a(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0xf) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xe]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
  }
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x4c]);
    return;
  }
  return;
}



// FUNCTION 1476ddab8 FUN_1476ddab8 body=138 status=ok
// SIG undefined FUN_1476ddab8(void)

void FUN_1476ddab8(undefined8 *param_1,longlong param_2)

{
  FUN_140659bfa(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x1c,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x98,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476ddb42 FUN_1476ddb42 body=111 status=ok
// SIG undefined FUN_1476ddb42(void)

undefined8 * FUN_1476ddb42(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a507450;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ddbb2 FUN_1476ddbb2 body=78 status=ok
// SIG undefined FUN_1476ddbb2(void)

undefined8 FUN_1476ddbb2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476ddcb0();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ddc02 FUN_1476ddc02 body=85 status=ok
// SIG undefined FUN_1476ddc02(void)

void FUN_1476ddc02(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476ddde8(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ddc58 FUN_1476ddc58 body=86 status=ok
// SIG undefined FUN_1476ddc58(void)

void FUN_1476ddc58(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476dde6e(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ddcb0 FUN_1476ddcb0 body=311 status=ok
// SIG undefined FUN_1476ddcb0(void)

undefined2 * FUN_1476ddcb0(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476ddde8(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xa0) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476dde6e(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ddde8 FUN_1476ddde8 body=133 status=ok
// SIG undefined FUN_1476ddde8(void)

void FUN_1476ddde8(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0xf) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xe]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
    return;
  }
  return;
}



// FUNCTION 1476dde6e FUN_1476dde6e body=116 status=ok
// SIG undefined FUN_1476dde6e(void)

void FUN_1476dde6e(undefined8 *param_1,longlong param_2)

{
  FUN_140659bfa(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x1c,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476ddee2 FUN_1476ddee2 body=95 status=ok
// SIG undefined FUN_1476ddee2(void)

undefined8 * FUN_1476ddee2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a507470;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ddf42 FUN_1476ddf42 body=78 status=ok
// SIG undefined FUN_1476ddf42(void)

undefined8 FUN_1476ddf42(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476de040();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ddf92 FUN_1476ddf92 body=85 status=ok
// SIG undefined FUN_1476ddf92(void)

void FUN_1476ddf92(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476de178(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ddfe8 FUN_1476ddfe8 body=86 status=ok
// SIG undefined FUN_1476ddfe8(void)

void FUN_1476ddfe8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476de1e6(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476de040 FUN_1476de040 body=311 status=ok
// SIG undefined FUN_1476de040(void)

undefined2 * FUN_1476de040(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476de178(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x88) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476de1e6(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476de178 FUN_1476de178 body=109 status=ok
// SIG undefined FUN_1476de178(void)

void FUN_1476de178(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0xf) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xe]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
    return;
  }
  return;
}



// FUNCTION 1476de1e6 FUN_1476de1e6 body=100 status=ok
// SIG undefined FUN_1476de1e6(void)

void FUN_1476de1e6(undefined8 *param_1,longlong param_2)

{
  FUN_140659bfa(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x1c,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476de24a FUN_1476de24a body=79 status=ok
// SIG undefined FUN_1476de24a(void)

undefined8 * FUN_1476de24a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a507490;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476de29a FUN_1476de29a body=78 status=ok
// SIG undefined FUN_1476de29a(void)

undefined8 FUN_1476de29a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476de396();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476de2ea FUN_1476de2ea body=82 status=ok
// SIG undefined FUN_1476de2ea(void)

void FUN_1476de2ea(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476de4cc(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476de33e FUN_1476de33e body=86 status=ok
// SIG undefined FUN_1476de33e(void)

void FUN_1476de33e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476de528(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476de396 FUN_1476de396 body=308 status=ok
// SIG undefined FUN_1476de396(void)

undefined2 * FUN_1476de396(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476de4cc(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x70) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476de528(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476de4cc FUN_1476de4cc body=91 status=ok
// SIG undefined FUN_1476de4cc(void)

void FUN_1476de4cc(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0xf) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xe]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
    return;
  }
  return;
}



// FUNCTION 1476de528 FUN_1476de528 body=84 status=ok
// SIG undefined FUN_1476de528(void)

void FUN_1476de528(undefined8 *param_1,longlong param_2)

{
  FUN_140659bfa(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x1c,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476de57c FUN_1476de57c body=57 status=ok
// SIG undefined FUN_1476de57c(void)

undefined8 * FUN_1476de57c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5074b0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476de5da FUN_1476de5da body=57 status=ok
// SIG undefined FUN_1476de5da(void)

undefined8 * FUN_1476de5da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5074c0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476de638 FUN_1476de638 body=67 status=ok
// SIG undefined FUN_1476de638(void)

undefined8 * FUN_1476de638(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5074f0;
  if (*(char *)(param_1 + 6) == '\x01') {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476de67c FUN_1476de67c body=78 status=ok
// SIG undefined FUN_1476de67c(void)

undefined8 FUN_1476de67c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476de722();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476de6cc FUN_1476de6cc body=63 status=ok
// SIG undefined FUN_1476de6cc(void)

void FUN_1476de6cc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1476de722 FUN_1476de722 body=287 status=ok
// SIG undefined FUN_1476de722(void)

undefined2 * FUN_1476de722(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x38));
  }
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x40) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_1476de842(param_1 + 8,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476de842 FUN_1476de842 body=175 status=ok
// SIG undefined FUN_1476de842(void)

void FUN_1476de842(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1476de85b;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_1476de85b:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  FUN_1476de8f2((longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c) + *plVar3,
                param_1 + 4);
  if ((char)param_1[0x14] == '\x01') {
    if (*(longlong *)(param_1 + 0xc) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476de8bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476de8f2 FUN_1476de8f2 body=96 status=ok
// SIG undefined FUN_1476de8f2(void)

undefined4 * FUN_1476de8f2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_2 + 4) == 0) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *(undefined8 *)(param_2 + 6) = 0x200000000;
  }
  return param_1;
}



// FUNCTION 1476de9bc FUN_1476de9bc body=59 status=ok
// SIG undefined FUN_1476de9bc(void)

undefined8 FUN_1476de9bc(longlong *param_1)

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



// FUNCTION 1476deaba FUN_1476deaba body=86 status=ok
// SIG undefined FUN_1476deaba(void)

undefined1 FUN_1476deaba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar10);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(puVar1 + 8);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      *(undefined4 *)(lVar2 + -0x18) = puVar1[4];
      *(undefined4 *)(lVar2 + -0x14) = uVar7;
      *(undefined4 *)(lVar2 + -0x10) = uVar8;
      *(undefined4 *)(lVar2 + -0xc) = uVar9;
      *(undefined4 *)(lVar2 + -0x28) = uVar3;
      *(undefined4 *)(lVar2 + -0x24) = uVar4;
      *(undefined4 *)(lVar2 + -0x20) = uVar5;
      *(undefined4 *)(lVar2 + -0x1c) = uVar6;
      FUN_1475798da();
      lVar10 = lVar10 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1476deb38 FUN_1476deb38 body=59 status=ok
// SIG undefined FUN_1476deb38(void)

undefined8 FUN_1476deb38(longlong *param_1)

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



// FUNCTION 1476deb7e FUN_1476deb7e body=38 status=ok
// SIG undefined FUN_1476deb7e(void)

void FUN_1476deb7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1476dec84 FUN_1476dec84 body=59 status=ok
// SIG undefined FUN_1476dec84(void)

undefined8 FUN_1476dec84(longlong *param_1)

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



// FUNCTION 1476ded54 FUN_1476ded54 body=54 status=ok
// SIG undefined FUN_1476ded54(void)

undefined1 FUN_1476ded54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14702ac0a(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1476dedb2 FUN_1476dedb2 body=59 status=ok
// SIG undefined FUN_1476dedb2(void)

undefined8 FUN_1476dedb2(longlong *param_1)

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



// FUNCTION 1476dedf8 FUN_1476dedf8 body=32 status=ok
// SIG undefined FUN_1476dedf8(void)

void FUN_1476dedf8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_141318128(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1476deed4 FUN_1476deed4 body=59 status=ok
// SIG undefined FUN_1476deed4(void)

undefined8 FUN_1476deed4(longlong *param_1)

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



// FUNCTION 1476deff2 FUN_1476deff2 body=39 status=ok
// SIG undefined FUN_1476deff2(void)

undefined8 FUN_1476deff2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1476df042 FUN_1476df042 body=59 status=ok
// SIG undefined FUN_1476df042(void)

undefined8 FUN_1476df042(longlong *param_1)

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



// FUNCTION 1476df0e4 FUN_1476df0e4 body=201 status=ok
// SIG undefined FUN_1476df0e4(void)

uint FUN_1476df0e4(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  
  uVar6 = FUN_146afa8b0(param_2,param_3);
  if ((char)uVar6 == '\0') {
    if (*(longlong **)(param_2 + 6) == (longlong *)0x0 || param_2[8] == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (**(code **)(**(longlong **)(param_2 + 6) + 0x30))();
    }
    if (*(longlong **)(param_3 + 6) == (longlong *)0x0 || param_3[8] == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = (**(code **)(**(longlong **)(param_3 + 6) + 0x30))();
    }
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    FUN_140a58be0(param_2 + 6,param_3 + 6);
    bVar7 = param_4 | 4;
    if (cVar4 == cVar5) {
      bVar7 = param_4;
    }
    FUN_14156c56c(param_1,bVar7);
  }
  return uVar6 ^ 1;
}



// FUNCTION 1476df1ae FUN_1476df1ae body=189 status=ok
// SIG undefined FUN_1476df1ae(void)

uint FUN_1476df1ae(undefined8 param_1,undefined2 *param_2,undefined2 *param_3,byte param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = FUN_146afa5ec(param_2,param_3);
  if ((char)uVar3 == '\0') {
    if (*(longlong **)(param_2 + 4) == (longlong *)0x0 || *(int *)(param_2 + 8) == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_2 + 4) + 0x30))();
    }
    if (*(longlong **)(param_3 + 4) == (longlong *)0x0 || *(int *)(param_3 + 8) == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (**(code **)(**(longlong **)(param_3 + 4) + 0x30))();
    }
    *param_2 = *param_3;
    FUN_14096c7c0(param_2 + 4,param_3 + 4);
    bVar4 = param_4 | 4;
    if (cVar1 == cVar2) {
      bVar4 = param_4;
    }
    FUN_14156c56c(param_1,bVar4);
  }
  return uVar3 ^ 1;
}



// FUNCTION 1476df26c FUN_1476df26c body=212 status=ok
// SIG undefined FUN_1476df26c(void)

uint FUN_1476df26c(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  byte bVar11;
  
  uVar10 = FUN_1476df340(param_2,param_3);
  if ((char)uVar10 == '\0') {
    if (*(longlong **)(param_2 + 10) == (longlong *)0x0 || param_2[0xc] == 0) {
      cVar8 = '\0';
    }
    else {
      cVar8 = (**(code **)(**(longlong **)(param_2 + 10) + 0x30))();
    }
    if (*(longlong **)(param_3 + 10) == (longlong *)0x0 || param_3[0xc] == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = (**(code **)(**(longlong **)(param_3 + 10) + 0x30))();
    }
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[5];
    uVar6 = param_3[6];
    uVar7 = param_3[7];
    param_2[4] = param_3[4];
    param_2[5] = uVar5;
    param_2[6] = uVar6;
    param_2[7] = uVar7;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_3 + 8);
    FUN_1476df468(param_2 + 10,param_3 + 10);
    bVar11 = param_4 | 4;
    if (cVar8 == cVar9) {
      bVar11 = param_4;
    }
    FUN_14156c56c(param_1,bVar11);
  }
  return uVar10 ^ 1;
}



// FUNCTION 1476df340 FUN_1476df340 body=295 status=ok
// SIG undefined FUN_1476df340(void)

bool FUN_1476df340(double *param_1,double *param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 6) == 0) || ((longlong *)param_1[5] == (longlong *)0x0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x30))();
  }
  if ((longlong *)param_2[5] == (longlong *)0x0 || *(int *)(param_2 + 6) == 0) {
    if (cVar2 == '\0') {
LAB_1476df3e0:
      if (*(char *)(param_1 + 4) == *(char *)(param_2 + 4)) {
        if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
          if ((param_1[1] == param_2[1]) && (!NAN(param_1[1]) && !NAN(param_2[1]))) {
            if ((param_1[2] == param_2[2]) && (!NAN(param_1[2]) && !NAN(param_2[2]))) {
              bVar4 = (bool)(-(param_2[3] == param_1[3]) & 1);
              goto LAB_1476df3a1;
            }
          }
        }
      }
    }
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x30))();
    if (cVar2 == cVar3) {
      if (cVar2 != '\0') {
        if ((*(int *)(param_1 + 6) == 0) ||
           (plVar1 = (longlong *)param_1[5], plVar1 == (longlong *)0x0)) {
          local_28 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        }
        plVar1 = (longlong *)param_2[5];
        if (plVar1 == (longlong *)0x0 || *(int *)(param_2 + 6) == 0) {
          local_30 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_30);
        }
        bVar4 = local_28 == local_30;
        goto LAB_1476df3a1;
      }
      goto LAB_1476df3e0;
    }
  }
  bVar4 = false;
LAB_1476df3a1:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 1476df468 FUN_1476df468 body=130 status=ok
// SIG undefined FUN_1476df468(void)

void FUN_1476df468(longlong *param_1,longlong *param_2)

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



// FUNCTION 1476df4ec FUN_1476df4ec body=201 status=ok
// SIG undefined FUN_1476df4ec(void)

uint FUN_1476df4ec(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  
  uVar6 = FUN_146ad4cdc(param_2,param_3);
  if ((char)uVar6 == '\0') {
    if (*(longlong **)(param_2 + 6) == (longlong *)0x0 || param_2[8] == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (**(code **)(**(longlong **)(param_2 + 6) + 0x30))();
    }
    if (*(longlong **)(param_3 + 6) == (longlong *)0x0 || param_3[8] == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = (**(code **)(**(longlong **)(param_3 + 6) + 0x30))();
    }
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    FUN_140a51be2(param_2 + 6,param_3 + 6);
    bVar7 = param_4 | 4;
    if (cVar4 == cVar5) {
      bVar7 = param_4;
    }
    FUN_14156c56c(param_1,bVar7);
  }
  return uVar6 ^ 1;
}



// FUNCTION 1476df5b6 FUN_1476df5b6 body=180 status=ok
// SIG undefined FUN_1476df5b6(void)

int FUN_1476df5b6(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_1476df66c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1476df644;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1476df644:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476df66c FUN_1476df66c body=53 status=ok
// SIG undefined FUN_1476df66c(void)

ulonglong FUN_1476df66c(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1476df6a2 FUN_1476df6a2 body=44 status=ok
// SIG undefined FUN_1476df6a2(void)

void FUN_1476df6a2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined8 *)((longlong)param_2 + 100) = 0xffffffff00000080;
  return;
}



// FUNCTION 1476df728 FUN_1476df728 body=136 status=ok
// SIG undefined FUN_1476df728(void)

undefined8 FUN_1476df728(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_1476df898(param_2 + lVar6,param_3 + lVar6);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_1476df898(lVar1 + 0x10,lVar2 + 0x10);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
      FUN_1476df99c(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      lVar6 = lVar6 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1476df7d8 FUN_1476df7d8 body=59 status=ok
// SIG undefined FUN_1476df7d8(void)

undefined8 FUN_1476df7d8(longlong *param_1)

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



// FUNCTION 1476df824 FUN_1476df824 body=38 status=ok
// SIG undefined FUN_1476df824(void)

void FUN_1476df824(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14122e0b2(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1476df898 FUN_1476df898 body=79 status=ok
// SIG undefined FUN_1476df898(void)

undefined8 * FUN_1476df898(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1476df8e8(param_1,iVar1);
      FUN_1476df94a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1476df8e8 FUN_1476df8e8 body=98 status=ok
// SIG undefined FUN_1476df8e8(void)

void FUN_1476df8e8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1476df94a FUN_1476df94a body=82 status=ok
// SIG undefined FUN_1476df94a(void)

void FUN_1476df94a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1476df99c FUN_1476df99c body=122 status=ok
// SIG undefined FUN_1476df99c(void)

longlong FUN_1476df99c(longlong param_1,longlong param_2)

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
    FUN_1476dfa16(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1476dfa16 FUN_1476dfa16 body=229 status=ok
// SIG undefined FUN_1476dfa16(void)

longlong * FUN_1476dfa16(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14122e1b2(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x10 + lVar5);
          *(longlong *)(lVar4 + 0x10 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x18 + lVar5) = *(undefined8 *)(lVar2 + 0x18 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1476dfbae FUN_1476dfbae body=59 status=ok
// SIG undefined FUN_1476dfbae(void)

undefined8 FUN_1476dfbae(longlong *param_1)

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



// FUNCTION 1476dfc50 FUN_1476dfc50 body=155 status=ok
// SIG undefined FUN_1476dfc50(void)

undefined8 * FUN_1476dfc50(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar9 = FUN_1406f977c(local_48);
  if ((lVar9 == 0) ||
     (puVar10 = (undefined8 *)(*(int *)(lVar9 + 0x44) + local_20), puVar10 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(puVar10 + 6);
    uVar2 = *(undefined4 *)((longlong)puVar10 + 0x34);
    uVar3 = *puVar10;
    uVar4 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    uVar7 = puVar10[5];
    param_1[4] = puVar10[4];
    param_1[5] = uVar7;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    *(undefined4 *)(param_1 + 6) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
    uVar8 = 1;
  }
  *(undefined1 *)(param_1 + 7) = uVar8;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476dfcec FUN_1476dfcec body=79 status=ok
// SIG undefined FUN_1476dfcec(void)

undefined8 * FUN_1476dfcec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a507490;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dfd3c FUN_1476dfd3c body=95 status=ok
// SIG undefined FUN_1476dfd3c(void)

undefined8 * FUN_1476dfd3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a507470;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dfd9c FUN_1476dfd9c body=151 status=ok
// SIG undefined FUN_1476dfd9c(void)

void FUN_1476dfd9c(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xe) = *param_3;
  cVar1 = *(char *)(param_3 + 5);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 3);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_6 + 2);
  }
  return;
}



// FUNCTION 1476dfe34 FUN_1476dfe34 body=111 status=ok
// SIG undefined FUN_1476dfe34(void)

undefined8 * FUN_1476dfe34(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a507450;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dfea4 FUN_1476dfea4 body=194 status=ok
// SIG undefined FUN_1476dfea4(void)

void FUN_1476dfea4(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xe) = *param_3;
  cVar1 = *(char *)(param_3 + 5);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 3);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_7 + 2);
  }
  return;
}



// FUNCTION 1476dff66 FUN_1476dff66 body=38 status=ok
// SIG undefined FUN_1476dff66(void)

undefined8 FUN_1476dff66(undefined8 param_1,int param_2)

{
  FUN_1476c4e02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476dff8c FUN_1476dff8c body=237 status=ok
// SIG undefined FUN_1476dff8c(void)

void FUN_1476dff8c(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xe) = *param_3;
  cVar1 = *(char *)(param_3 + 5);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 3);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x4c) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_8 + 2);
  }
  return;
}



// FUNCTION 1476e007a FUN_1476e007a body=52 status=ok
// SIG undefined FUN_1476e007a(void)

undefined8 * FUN_1476e007a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a507410;
  FUN_1476dd39c(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e00ae FUN_1476e00ae body=280 status=ok
// SIG undefined FUN_1476e00ae(void)

void FUN_1476e00ae(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xe) = *param_3;
  cVar1 = *(char *)(param_3 + 5);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 3);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x4c) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_8 + 2);
  }
  *(undefined4 *)(param_1 + 0x58) = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x60) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_9 + 2);
  }
  return;
}



// FUNCTION 1476e01c6 FUN_1476e01c6 body=52 status=ok
// SIG undefined FUN_1476e01c6(void)

undefined8 * FUN_1476e01c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5073f0;
  FUN_1476dcf40(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e01fa FUN_1476e01fa body=323 status=ok
// SIG undefined FUN_1476e01fa(void)

void FUN_1476e01fa(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xe) = *param_3;
  cVar1 = *(char *)(param_3 + 5);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 3);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x4c) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_8 + 2);
  }
  *(undefined4 *)(param_1 + 0x58) = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x60) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_9 + 2);
  }
  *(undefined4 *)(param_1 + 100) = *param_10;
  cVar1 = *(char *)(param_10 + 4);
  *(char *)(param_1 + 0x6c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_10 + 2);
  }
  return;
}



// FUNCTION 1476e033e FUN_1476e033e body=52 status=ok
// SIG undefined FUN_1476e033e(void)

undefined8 * FUN_1476e033e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5073d0;
  FUN_1476dcade(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e0372 FUN_1476e0372 body=104 status=ok
// SIG undefined FUN_1476e0372(void)

void FUN_1476e0372(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0xf8,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a5073d0;
  FUN_1476e03da(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0xf0);
  *param_1 = &PTR_FUN_14a5080f0;
  return;
}



// FUNCTION 1476e03da FUN_1476e03da body=321 status=ok
// SIG undefined FUN_1476e03da(void)

void FUN_1476e03da(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  cVar1 = *(char *)(param_2 + 0x3c);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  cVar1 = *(char *)(param_2 + 0x48);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  cVar1 = *(char *)(param_2 + 0x54);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  cVar1 = *(char *)(param_2 + 0x60);
  *(char *)(param_1 + 0x60) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  cVar1 = *(char *)(param_2 + 0x6c);
  *(char *)(param_1 + 0x6c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  }
  param_1[0x70] = param_2[0x70];
  return;
}



// FUNCTION 1476e051c FUN_1476e051c body=29 status=ok
// SIG undefined FUN_1476e051c(void)

undefined8 FUN_1476e051c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e05a8 FUN_1476e05a8 body=29 status=ok
// SIG undefined FUN_1476e05a8(void)

undefined8 FUN_1476e05a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e05c6 FUN_1476e05c6 body=309 status=ok
// SIG undefined FUN_1476e05c6(void)

void FUN_1476e05c6(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_3 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476e0605;
      plVar14 = plVar14 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_1476e0605:
  iVar3 = *(int *)(param_3 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  lVar10 = *param_2;
  if (*(ushort *)(lVar10 + 0xc) != 0) {
    plVar15 = *(longlong **)(lVar10 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476e0648;
      plVar15 = plVar15 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_1476e0648:
  lVar12 = *plVar14;
  iVar4 = *(int *)(lVar10 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
  }
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar11 = (undefined4 *)((longlong)(int)param_2[1] * 0x20 + *plVar15);
    lVar10 = 0;
    do {
      lVar13 = (longlong)*(int *)(*param_4 + lVar10 * 4) * 0x20;
      puVar1 = (undefined4 *)(lVar12 + lVar13);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar13);
      uVar9 = puVar2[1];
      *(undefined8 *)(puVar11 + 4) = *puVar2;
      *(undefined8 *)(puVar11 + 6) = uVar9;
      *puVar11 = uVar5;
      puVar11[1] = uVar6;
      puVar11[2] = uVar7;
      puVar11[3] = uVar8;
      lVar10 = lVar10 + 1;
      puVar11 = puVar11 + 8;
    } while (lVar10 < (int)param_4[1]);
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 3) = (int)plVar14[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476e06e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476e06fc FUN_1476e06fc body=29 status=ok
// SIG undefined FUN_1476e06fc(void)

undefined8 FUN_1476e06fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e07b4 FUN_1476e07b4 body=29 status=ok
// SIG undefined FUN_1476e07b4(void)

undefined8 FUN_1476e07b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e07d2 FUN_1476e07d2 body=328 status=ok
// SIG undefined FUN_1476e07d2(void)

void FUN_1476e07d2(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_3 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476e0811;
      plVar16 = plVar16 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_1476e0811:
  iVar3 = *(int *)(param_3 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  lVar12 = *param_2;
  if (*(ushort *)(lVar12 + 0xc) != 0) {
    plVar17 = *(longlong **)(lVar12 + 0x28);
    lVar14 = (ulonglong)*(ushort *)(lVar12 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476e0854;
      plVar17 = plVar17 + 4;
      lVar14 = lVar14 + -0x20;
    } while (lVar14 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_1476e0854:
  lVar14 = *plVar16;
  iVar4 = *(int *)(lVar12 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar13 = (undefined4 *)((longlong)(int)param_2[1] * 0x38 + *plVar17);
    lVar12 = 0;
    do {
      lVar15 = (longlong)*(int *)(*param_4 + lVar12 * 4) * 0x38;
      *(undefined8 *)(puVar13 + 0xc) = *(undefined8 *)(lVar14 + 0x30 + lVar15);
      puVar1 = (undefined4 *)(lVar14 + lVar15);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined8 *)(lVar14 + 0x10 + lVar15);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar14 + 0x20 + lVar15);
      uVar11 = puVar2[1];
      *(undefined8 *)(puVar13 + 8) = *puVar2;
      *(undefined8 *)(puVar13 + 10) = uVar11;
      *(undefined8 *)(puVar13 + 4) = uVar9;
      *(undefined8 *)(puVar13 + 6) = uVar10;
      *puVar13 = uVar5;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar8;
      lVar12 = lVar12 + 1;
      puVar13 = puVar13 + 0xe;
    } while (lVar12 < (int)param_4[1]);
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476e0903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476e091a FUN_1476e091a body=29 status=ok
// SIG undefined FUN_1476e091a(void)

undefined8 FUN_1476e091a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e0950 FUN_1476e0950 body=57 status=ok
// SIG undefined FUN_1476e0950(void)

void FUN_1476e0950(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_140b177d4(param_2,param_3);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + 0x20;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 1476e098a FUN_1476e098a body=171 status=ok
// SIG undefined FUN_1476e098a(void)

void FUN_1476e098a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    uVar6 = param_4 + 1;
    lVar7 = 0x1c;
    do {
      *(undefined8 *)(param_2 + -0xc + lVar7) = 0;
      lVar5 = *(longlong *)(param_3 + -0xc + lVar7);
      if (lVar5 == 0) {
        lVar5 = param_3 + lVar7;
        lVar1 = param_2 + lVar7;
        uVar2 = *(undefined4 *)(lVar5 + -0x18);
        uVar3 = *(undefined4 *)(lVar5 + -0x14);
        uVar4 = *(undefined4 *)(lVar5 + -0x10);
        *(undefined4 *)(lVar1 + -0x1c) = *(undefined4 *)(lVar5 + -0x1c);
        *(undefined4 *)(lVar1 + -0x18) = uVar2;
        *(undefined4 *)(lVar1 + -0x14) = uVar3;
        *(undefined4 *)(lVar1 + -0x10) = uVar4;
        lVar5 = *(longlong *)(param_3 + lVar7 + -0xc);
      }
      *(longlong *)(param_2 + -0xc + lVar7) = lVar5;
      *(undefined8 *)(param_3 + -0xc + lVar7) = 0;
      *(undefined4 *)(param_2 + -4 + lVar7) = *(undefined4 *)(param_3 + -4 + lVar7);
      *(undefined4 *)(param_2 + lVar7) = *(undefined4 *)(param_3 + lVar7);
      *(undefined8 *)(param_3 + -4 + lVar7) = 0x200000000;
      if (*(longlong *)(param_3 + -0xc + lVar7) != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x20;
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  return;
}



// FUNCTION 1476e0a6d FUN_1476e0a6d body=47 status=ok
// SIG undefined FUN_1476e0a6d(void)

void FUN_1476e0a6d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1476e0a9e FUN_1476e0a9e body=31 status=ok
// SIG undefined FUN_1476e0a9e(void)

undefined8 FUN_1476e0a9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e0abe FUN_1476e0abe body=309 status=ok
// SIG undefined FUN_1476e0abe(void)

void FUN_1476e0abe(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_3 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476e0aff;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_1476e0aff:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar7 = *(longlong **)(lVar3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476e0b42;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476e0b42:
  lVar4 = *plVar5;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = (longlong)(int)param_2[1] * 0x20 + *plVar7;
    lVar6 = 0;
    do {
      FUN_140b177d4(lVar3,(longlong)*(int *)(*param_4 + lVar6 * 4) * 0x20 + lVar4);
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476e0bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476e0bf4 FUN_1476e0bf4 body=29 status=ok
// SIG undefined FUN_1476e0bf4(void)

undefined8 FUN_1476e0bf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e0c8a FUN_1476e0c8a body=29 status=ok
// SIG undefined FUN_1476e0c8a(void)

undefined8 FUN_1476e0c8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e0ca8 FUN_1476e0ca8 body=299 status=ok
// SIG undefined FUN_1476e0ca8(void)

void FUN_1476e0ca8(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476e0ce7;
      plVar10 = plVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1476e0ce7:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar11 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476e0d2a;
      plVar11 = plVar11 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1476e0d2a:
  lVar9 = *plVar10;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *plVar11);
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(lVar9 + (longlong)*(int *)(*param_4 + lVar7 * 4) * 0x10);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 4;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476e0dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476e0dd4 FUN_1476e0dd4 body=139 status=ok
// SIG undefined FUN_1476e0dd4(void)

void FUN_1476e0dd4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x34) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x28,0);
      iVar5 = (int)(uVar4 / 0x28);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x34) = iVar6;
    FUN_1476e0e60(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476e0e60 FUN_1476e0e60 body=140 status=ok
// SIG undefined FUN_1476e0e60(void)

void FUN_1476e0e60(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x28);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x28,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x28),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x28,param_2,param_3,0x28);
  return;
}



// FUNCTION 1476e0eec FUN_1476e0eec body=139 status=ok
// SIG undefined FUN_1476e0eec(void)

void FUN_1476e0eec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x34) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x28,0);
      iVar5 = (int)(uVar4 / 0x28);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x34) = iVar6;
    FUN_1476e0f78(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476e0f78 FUN_1476e0f78 body=140 status=ok
// SIG undefined FUN_1476e0f78(void)

void FUN_1476e0f78(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x28);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x28,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x28),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x28,param_2,param_3,0x28);
  return;
}



// FUNCTION 1476e1004 FUN_1476e1004 body=31 status=ok
// SIG undefined FUN_1476e1004(void)

undefined8 FUN_1476e1004(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e1024 FUN_1476e1024 body=808 status=ok
// SIG undefined FUN_1476e1024(void)

void FUN_1476e1024(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_1d8 [32];
  ushort *local_1b8;
  code **local_1b0;
  longlong local_1a8;
  undefined8 *local_1a0;
  ushort local_18c [2];
  ushort *local_188;
  undefined8 *local_180;
  undefined2 local_174;
  ushort local_172;
  undefined8 local_170;
  undefined2 local_168;
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined1 local_15f;
  undefined4 local_15c;
  undefined1 local_158;
  undefined2 local_150;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined2 local_142;
  undefined1 local_13f;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 local_118;
  byte bStack_117;
  uint local_114;
  undefined1 local_108 [80];
  longlong local_b8;
  code *local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar2 = FUN_14009d2a0();
  local_150 = *(undefined2 *)(lVar2 + 0x4a);
  local_14a = *(undefined2 *)(lVar2 + 0x108);
  local_14e = *(undefined4 *)(lVar2 + 0x104);
  puVar5 = (undefined2 *)*param_3;
  local_142 = puVar5[6];
  local_144 = puVar5[4];
  local_148 = *puVar5;
  local_146 = puVar5[2];
  local_13f = 0;
  local_13c = 0x6ff;
  local_138 = 0;
  local_172 = *(ushort *)(param_2 + 0x14);
  local_188 = &local_172;
  local_180 = &local_170;
  FUN_1475ebd9c(&local_150,local_128);
  local_114 = *(uint *)(param_6 + 0x290);
  bVar3 = bStack_117 & 0xfe | (local_114 & 0xfffffeff) == 1;
  _local_118 = CONCAT11(bVar3,local_118);
  local_1b8 = local_18c;
  local_18c[0] = CONCAT11(bVar3,local_118) & 0xfdff;
  local_1b0 = (code **)&local_170;
  local_170 = FUN_1476e1ffe;
  local_168 = CONCAT11(local_168._1_1_,3);
  local_1a8 = param_2;
  FUN_1476e1dd6(local_128,&local_58,param_6 + 0x28,param_5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_130 = 0x10000000000;
    puVar5 = (undefined2 *)*param_3;
    iVar1 = *(int *)(param_3 + 1);
    if ((longlong)iVar1 != 0) {
      lVar4 = 0;
      do {
        FUN_140dba9e6(&local_150,*(undefined2 *)((longlong)puVar5 + lVar4));
        lVar4 = lVar4 + 4;
      } while ((longlong)iVar1 * 4 != lVar4);
      puVar5 = (undefined2 *)*param_3;
    }
    local_162 = puVar5[6];
    local_164 = puVar5[4];
    local_168 = *puVar5;
    local_166 = puVar5[2];
    local_170 = (code *)CONCAT26(*(undefined2 *)(lVar2 + 0x108),
                                 CONCAT42(*(undefined4 *)(lVar2 + 0x104),
                                          *(undefined2 *)(lVar2 + 0x4a)));
    local_15f = 0;
    local_15c = 0x6ff;
    local_158 = 0;
    FUN_1475ec91c(local_128);
    FUN_140dad9c2(local_108,&local_150,2);
    local_174 = *(undefined2 *)(param_2 + 0x14);
    local_50 = &local_172;
    local_58 = (code *)&local_174;
    FUN_1447c44f6(local_108,&local_58);
    FUN_140dad9c2(local_108,&local_150,0x84);
    local_114 = *(uint *)(param_6 + 0x290);
    bVar3 = bStack_117 & 0xfe | (local_114 & 0xfffffeff) == 1;
    _local_118 = CONCAT11(bVar3,local_118);
    local_172 = CONCAT11(bVar3,local_118) & 0xfdff;
    local_58 = FUN_1476e291c;
    local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
    local_1b8 = &local_172;
    local_1b0 = &local_58;
    local_1a8 = param_2;
    local_1a0 = param_3;
    FUN_1476e26f6(local_128,local_18c,param_6 + 0x28,param_5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e134e FUN_1476e134e body=805 status=ok
// SIG undefined FUN_1476e134e(void)

void FUN_1476e134e(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined2 *local_188;
  uint *local_180;
  undefined8 *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  undefined2 local_15e;
  undefined2 local_15c;
  uint local_15a;
  undefined2 local_156;
  undefined2 local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined1 local_14b;
  undefined4 local_148;
  undefined1 local_144;
  undefined2 local_140;
  undefined4 local_13e;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined1 local_12f;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118 [17];
  byte local_107;
  uint local_104;
  undefined1 local_f8 [80];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar4 = FUN_14009d2a0();
  local_140 = *(undefined2 *)(lVar4 + 0x4a);
  local_13a = *(undefined2 *)(lVar4 + 0x108);
  local_13e = *(undefined4 *)(lVar4 + 0x104);
  puVar6 = (undefined2 *)*param_3;
  local_132 = puVar6[6];
  local_134 = puVar6[4];
  local_138 = *puVar6;
  local_136 = puVar6[2];
  local_12f = 0;
  local_12c = 0x6ff;
  local_128 = 0;
  local_15c = *(undefined2 *)(param_2 + 0x14);
  local_188 = &local_15c;
  local_180 = &local_15a;
  local_198 = param_3;
  FUN_1475ebd9c(&local_140,local_118);
  local_104 = *(uint *)(param_7 + 0x290);
  local_107 = local_107 & 0xfe | (local_104 & 0xfffffeff) == 1;
  local_1b8 = param_6;
  local_1b0 = param_2;
  FUN_14332f4ba(local_118,&local_178,param_7 + 0x28,param_5);
  if (local_178 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_178 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_178)(local_178,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_120 = 0x10000000000;
    puVar6 = (undefined2 *)*local_198;
    iVar2 = *(int *)(local_198 + 1);
    if ((longlong)iVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_140,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar2 * 4 != lVar5);
      puVar6 = (undefined2 *)*local_198;
    }
    puVar3 = local_198;
    local_15c = *(undefined2 *)(lVar4 + 0x4a);
    local_156 = *(undefined2 *)(lVar4 + 0x108);
    local_15a = *(uint *)(lVar4 + 0x104);
    local_14e = puVar6[6];
    local_150 = puVar6[4];
    local_154 = *puVar6;
    local_152 = puVar6[2];
    local_14b = 0;
    local_148 = 0x6ff;
    local_144 = 0;
    FUN_1475ec91c(local_118);
    FUN_140dad9c2(local_f8,&local_140,2);
    local_15e = *(undefined2 *)(param_2 + 0x14);
    local_168 = &local_15c;
    local_170 = &local_15e;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_140,0x84);
    local_104 = *(uint *)(param_7 + 0x290);
    local_107 = local_107 & 0xfe | (local_104 & 0xfffffeff) == 1;
    local_1a8 = puVar3;
    local_1b8 = param_6;
    local_1b0 = param_2;
    FUN_14332f972(local_118,&local_190,param_7 + 0x28,param_5);
    if (local_190 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_190 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_190)(local_190,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e1674 FUN_1476e1674 body=520 status=ok
// SIG undefined FUN_1476e1674(void)

longlong * FUN_1476e1674(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1476e3c72(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_1476e16b8;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a5083c0;
  plVar5 = plVar4 + 2;
  FUN_1476e3de0(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_1476e57d2(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_1476e1843:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001476e1832:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x0001476e1832;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_1476e1843;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_1476e3d26(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_1476e16b8:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e1880 FUN_1476e1880 body=130 status=ok
// SIG undefined FUN_1476e1880(void)

void FUN_1476e1880(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1476e587a(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e1904 FUN_1476e1904 body=616 status=ok
// SIG undefined FUN_1476e1904(void)

void FUN_1476e1904(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_1476e5c00(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e1b6e FUN_1476e1b6e body=615 status=ok
// SIG undefined FUN_1476e1b6e(void)

void FUN_1476e1b6e(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = (int)param_4[1];
  local_b8 = param_3;
  if (0 < iVar3) {
    lVar8 = *param_6;
    local_c0 = param_5 + 0x28;
    lVar6 = 0;
    do {
      if (*(short *)(*param_4 + lVar6 * 2) != -1) {
        FUN_1432d4ca4(local_c0,&local_60);
        lVar2 = local_60;
        lVar4 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)(*param_3 + 0xc));
        local_b0 = (undefined8 *)(local_50 + lVar4 * 8);
        if (local_50 == 0) {
          local_b0 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_78,*(undefined2 *)(*param_3 + 8));
        puVar7 = (undefined8 *)(local_68 + lVar4 * 8);
        if (local_68 == 0) {
          puVar7 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_90,*(undefined2 *)(*param_3 + 4));
        puVar5 = (undefined8 *)(local_80 + lVar4 * 8);
        if (local_80 == 0) {
          puVar5 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_a8,*(undefined2 *)*param_3);
        lVar2 = *param_3;
        if ((local_98 != 0) &&
           (puVar1 = (undefined8 *)(local_98 + lVar4 * 8), puVar1 != (undefined8 *)0x0)) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 2)) = *puVar1;
        }
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 6)) = *puVar5;
        }
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 10)) = *puVar7;
        }
        if (local_b0 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 0xe)) = *local_b0;
        }
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
          UNLOCK();
          if (local_a0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
          }
        }
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
          UNLOCK();
          if (local_88 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
          }
        }
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
          UNLOCK();
          if (local_70 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
          }
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar3 = (int)param_4[1];
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x20;
    } while (lVar6 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e1dd6 FUN_1476e1dd6 body=550 status=ok
// SIG undefined FUN_1476e1dd6(void)

int * FUN_1476e1dd6(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[4] == -1)) || (param_1[5] == -1)) ||
     (((param_1[6] == -1 || (param_1[7] == -1)) ||
      (cVar4 = FUN_1475ec19e(param_1,param_3), cVar4 == '\0')))) {
    *param_2 = -1;
    goto LAB_1476e1e2c;
  }
  plVar5 = (longlong *)FUN_1476e204f(param_1,param_7);
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_1475ec2aa(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476e2142;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476e1f89;
    }
  }
  else {
LAB_1476e1f89:
    thunk_FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1476e1e2c:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476e1ffe FUN_1476e1ffe body=80 status=ok
// SIG undefined FUN_1476e1ffe(void)

void FUN_1476e1ffe(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1476e215a(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e204f FUN_1476e204f body=180 status=ok
// SIG undefined FUN_1476e204f(void)

undefined8 * FUN_1476e204f(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14a508360;
  puVar8[2] = &PTR_FUN_14a508378;
  param_2 = (longlong *)*param_2;
  puVar8[3] = param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar8[4] = local_38;
    puVar8[5] = uStack_30;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  *(undefined4 *)((longlong)puVar8 + 0x3c) = param_1[3];
  *(undefined4 *)(puVar8 + 8) = uVar5;
  *(undefined4 *)((longlong)puVar8 + 0x44) = uVar6;
  *(undefined4 *)(puVar8 + 9) = uVar7;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
  *(undefined4 *)(puVar8 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e2106 FUN_1476e2106 body=29 status=ok
// SIG undefined FUN_1476e2106(void)

undefined8 FUN_1476e2106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e2124 FUN_1476e2124 body=29 status=ok
// SIG undefined FUN_1476e2124(void)

undefined8 FUN_1476e2124(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e215a FUN_1476e215a body=256 status=ok
// SIG undefined FUN_1476e215a(void)

void FUN_1476e215a(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar5 = 0;
  local_60 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_60 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_58 = lVar5;
  }
  local_50 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_50 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_88 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_88 = lVar5;
  }
  local_80 = lVar3 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    local_80 = lVar5;
  }
  local_78 = lVar3 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    local_78 = lVar5;
  }
  local_70 = lVar3 + (ulonglong)puVar2[7];
  if ((ulonglong)puVar2[7] == 0xffffffff) {
    local_70 = lVar5;
  }
  FUN_1476e225c(param_1,lVar1,lVar4);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e225c FUN_1476e225c body=524 status=ok
// SIG undefined FUN_1476e225c(void)

void FUN_1476e225c(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = *(ushort *)(param_2 + 0xe);
  uVar7 = (ulonglong)uVar4;
  lVar5 = *param_4;
  if (lVar5 == 0) {
    lVar5 = param_4[1];
    if (lVar5 == 0) {
      lVar5 = param_4[2];
      if (uVar4 != 0 && lVar5 != 0) {
        lVar8 = 0;
        do {
          local_60 = CONCAT44((float)*(double *)(param_8 + lVar8),
                              (float)*(double *)(param_7 + lVar8));
          local_68 = CONCAT44((float)*(double *)(param_6 + lVar8),
                              (float)*(double *)(param_5 + lVar8));
          FUN_1476e246a(*(undefined8 *)(lVar5 + lVar8 * 2),*(undefined8 *)(param_3 + lVar8),
                        &local_68);
          lVar8 = lVar8 + 8;
        } while ((ulonglong)uVar4 << 3 != lVar8);
      }
    }
    else if (uVar7 != 0) {
      uVar9 = 0;
      do {
        uVar6 = (ulonglong)*(ushort *)(lVar5 + uVar9 * 2);
        if (uVar6 != 0) {
          dVar1 = *(double *)(param_7 + uVar9 * 8);
          dVar2 = *(double *)(param_8 + uVar9 * 8);
          lVar8 = *(longlong *)(param_3 + uVar9 * 8);
          dVar3 = *(double *)(param_5 + uVar9 * 8);
          *(float *)(lVar8 + 4 + uVar6) = (float)*(double *)(param_6 + uVar9 * 8);
          *(float *)(lVar8 + 8 + uVar6) = (float)dVar1;
          *(float *)(lVar8 + 0xc + uVar6) = (float)dVar2;
          *(float *)(lVar8 + uVar6) = (float)dVar3;
        }
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
    }
  }
  else if (uVar7 != 0) {
    uVar9 = 0;
    local_70 = param_1;
    do {
      local_50 = *(undefined8 *)(param_8 + uVar9 * 8);
      local_58 = *(undefined8 *)(param_7 + uVar9 * 8);
      local_60 = *(undefined8 *)(param_6 + uVar9 * 8);
      local_68 = *(undefined8 *)(param_5 + uVar9 * 8);
      (**(code **)(*(longlong *)(local_70 + 8) + 0x20 +
                  (longlong)*(int *)(local_70 + 0x14) * (ulonglong)*(ushort *)(lVar5 + uVar9 * 2)))
                (*(undefined8 *)(param_3 + uVar9 * 8),&local_68);
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e246a FUN_1476e246a body=244 status=ok
// SIG undefined FUN_1476e246a(void)

void FUN_1476e246a(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar5 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar5 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar5 + 0x80))(plVar5);
    if (cVar4 != '\0') {
      (**(code **)(*plVar5 + 0x98))(plVar5,param_2,param_3);
      goto LAB_1476e24cb;
    }
  }
  lVar6 = FUN_14479d2ce(local_30);
  if (lVar6 == 0) {
    lVar6 = FUN_1406f977c(local_60);
    if ((lVar6 != 0) &&
       (puVar7 = (undefined4 *)(*(int *)(lVar6 + 0x44) + local_38), puVar7 != (undefined4 *)0x0)) {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar7 = *param_3;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
    }
  }
  else {
    FUN_1476e2560(param_2,lVar6,param_3);
  }
LAB_1476e24cb:
  lVar6 = FUN_14479d2ce(local_28);
  if (lVar6 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar6,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e2560 FUN_1476e2560 body=401 status=ok
// SIG undefined FUN_1476e2560(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1476e2560(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476e25ff;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476e2616;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x10) goto LAB_1476e26b0;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476e2667;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476e267f;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 4);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476e26ac;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1476e26b0:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1476e26da;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e26f6 FUN_1476e26f6 body=549 status=ok
// SIG undefined FUN_1476e26f6(void)

int * FUN_1476e26f6(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*param_1 == -1) || (cVar4 = FUN_1475ecc38(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1476e272a;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_1476e296e(plVar5,param_1,param_7,param_8);
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_1475ecc6e(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476e2a5e;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476e28a8;
    }
  }
  else {
LAB_1476e28a8:
    thunk_FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1476e272a:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476e291c FUN_1476e291c body=80 status=ok
// SIG undefined FUN_1476e291c(void)

void FUN_1476e291c(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1476e2a76(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e296e FUN_1476e296e body=177 status=ok
// SIG undefined FUN_1476e296e(void)

undefined8 *
FUN_1476e296e(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a508380;
  param_1[2] = &PTR_FUN_14a508398;
  param_3 = (longlong *)*param_3;
  uVar8 = *param_4;
  uVar9 = param_4[1];
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48._0_4_ = (undefined4)uVar8;
  local_48._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar9;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_40._4_4_;
  local_48 = uVar8;
  uStack_40 = uVar9;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3,&local_38);
    param_1[4] = local_38;
    param_1[5] = uStack_30;
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_2[3];
  *(undefined4 *)(param_1 + 10) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0xb) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e2a22 FUN_1476e2a22 body=29 status=ok
// SIG undefined FUN_1476e2a22(void)

undefined8 FUN_1476e2a22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e2a40 FUN_1476e2a40 body=29 status=ok
// SIG undefined FUN_1476e2a40(void)

undefined8 FUN_1476e2a40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e2a76 FUN_1476e2a76 body=256 status=ok
// SIG undefined FUN_1476e2a76(void)

void FUN_1476e2a76(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar5 = 0;
  local_60 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_60 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_58 = lVar5;
  }
  local_50 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_50 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_88 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_88 = lVar5;
  }
  local_80 = lVar3 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    local_80 = lVar5;
  }
  local_78 = lVar3 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    local_78 = lVar5;
  }
  local_70 = lVar3 + (ulonglong)puVar2[7];
  if ((ulonglong)puVar2[7] == 0xffffffff) {
    local_70 = lVar5;
  }
  FUN_1476e2b78(param_1,lVar1,lVar4);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e2b78 FUN_1476e2b78 body=142 status=ok
// SIG undefined FUN_1476e2b78(void)

void FUN_1476e2b78(void)

{
  longlong *in_R9;
  
  if (*in_R9 == 0) {
    if (in_R9[1] == 0) {
      if (in_R9[2] != 0) {
        FUN_1476e2f6e();
      }
    }
    else {
      FUN_1476e2da6();
    }
    return;
  }
  FUN_1476e2c06();
  return;
}



// FUNCTION 1476e2c06 FUN_1476e2c06 body=415 status=ok
// SIG undefined FUN_1476e2c06(void)

void FUN_1476e2c06(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8 [5];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b0 = param_4;
  if (local_b8 != 0) {
    uVar9 = 0;
    puVar4 = param_7;
    puVar7 = param_8;
    puVar8 = param_6;
    do {
      uVar6 = (ulonglong)*(ushort *)(local_b0 + uVar9 * 2);
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      (**(code **)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)*(int *)(param_1 + 0x14) * uVar6))
                (local_80,*(undefined8 *)(param_3 + uVar9 * 8));
      puVar2 = puVar7;
      if (param_8 == (undefined8 *)0x0) {
        puVar2 = param_8;
      }
      puVar3 = puVar4;
      if (param_7 == (undefined8 *)0x0) {
        puVar3 = param_7;
      }
      puVar5 = puVar8;
      if (param_6 == (undefined8 *)0x0) {
        puVar5 = param_6;
      }
      lVar1 = *(longlong *)(param_1 + 0x18);
      if (param_5 != 0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 2)) =
             *(undefined8 *)(param_5 + uVar9 * 8);
      }
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 6)) = *puVar5;
      }
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 10)) = *puVar3;
      }
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 0xe)) = *puVar2;
      }
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 + (longlong)*(int *)(param_1 + 0x14) * uVar6))
                (*(undefined8 *)(param_3 + uVar9 * 8),local_a8);
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 1;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (local_b8 != uVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


