// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145affb7a FUN_145affb7a body=156 status=ok
// SIG undefined FUN_145affb7a(void)

undefined4 FUN_145affb7a(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448729ea(param_1 + 0x90,local_40,param_2);
  uVar2 = FUN_1405d5f74(local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145affc18 FUN_145affc18 body=122 status=ok
// SIG undefined FUN_145affc18(void)

void FUN_145affc18(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1414bc74c();
  if (param_2 != 0) {
    lVar1 = FUN_140859b94();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_2 + 0x990), lVar1 != 0)) {
      *(undefined1 *)(lVar1 + 0x988) = *(undefined1 *)(param_1 + 0xa9);
      lVar1 = *(longlong *)(lVar1 + 0x1a0);
      if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0xf0))) {
        *(undefined1 *)(*(longlong *)(lVar1 + 0xe8) + 0x30) = *(undefined1 *)(param_1 + 0xa8);
      }
    }
  }
  return;
}



// FUNCTION 145affc92 FUN_145affc92 body=145 status=ok
// SIG undefined FUN_145affc92(void)

void FUN_145affc92(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1405f1eac();
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_145b002e2(param_1);
  }
  (**(code **)(*(longlong *)(param_1 + 0x390) + 0x10))(param_1 + 0x390,local_28);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145affd24 FUN_145affd24 body=285 status=ok
// SIG undefined FUN_145affd24(void)

longlong * FUN_145affd24(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 0x1b0);
  if (lVar5 != 0) goto LAB_145affdbc;
  uVar4 = FUN_1447210f0(param_1 + -0x390);
  local_50 = 0;
  local_48 = 0xaaad1010;
  local_40 = 0;
  FUN_145affe42(&local_38,&local_50,param_1,uVar4);
  plVar1 = local_30;
  *(undefined8 *)(param_1 + 0x1b0) = local_38;
  local_38 = 0;
  plVar3 = *(longlong **)(param_1 + 0x1b8);
  if (local_30 == plVar3) {
LAB_145affe1b:
    plVar3 = local_30;
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
  }
  else {
    local_30 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x1b8) = plVar1;
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
      goto LAB_145affe1b;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x1b0);
LAB_145affdbc:
  *param_2 = lVar5;
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145affe42 FUN_145affe42 body=884 status=ok
// SIG undefined FUN_145affe42(void)

longlong * FUN_145affe42(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_14cb259f8;
  if (((param_3 == 0) || (param_4 == 0)) || (DAT_14cb259f8 == 0)) goto LAB_145afff6d;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
LAB_145affea1:
    plVar5 = (longlong *)FUN_145b001b7();
    plVar8 = plVar5 + 2;
    local_78 = plVar8;
    local_70 = plVar5;
    FUN_145b00240(&local_78,plVar8);
    plVar5[7] = param_4;
    FUN_14078c658(&local_50,param_3);
    *(undefined4 *)(plVar5 + 5) = local_50;
    *(undefined4 *)((longlong)plVar5 + 0x2c) = uStack_4c;
    *(undefined4 *)(plVar5 + 6) = uStack_48;
    *(undefined4 *)((longlong)plVar5 + 0x34) = uStack_44;
    FUN_14485c47a(plVar5 + 8,param_4);
    if (plVar5 == (longlong *)0x0) {
      *param_1 = 0x10;
      plVar8 = (longlong *)param_1[1];
      if (plVar8 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_145b00081:
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000145b000ba:
          if (iVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *param_1 = (longlong)plVar8;
      plVar8 = (longlong *)param_1[1];
      if (plVar5 == plVar8) {
        LOCK();
        plVar8 = plVar5 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar8 = plVar5;
          goto joined_r0x000145b000ba;
        }
      }
      else {
        param_1[1] = (longlong)plVar5;
        if (plVar8 != (longlong *)0x0) goto LAB_145b00081;
      }
    }
    plVar8 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_145afff6d;
  }
  else {
    uVar6 = FUN_14653cad2();
    local_68 = *param_2;
    local_60 = (undefined4)param_2[1];
    local_58 = 0;
    local_98 = param_4;
    FUN_140e775d2(&local_50,&local_68,uVar6,param_3);
    lVar7 = CONCAT44(uStack_4c,local_50);
    if (lVar7 != 0) {
      uVar6 = FUN_14653cad2();
      cVar4 = FUN_1448093f4(lVar7,uVar6);
      if (cVar4 != '\0') {
        plVar8 = (longlong *)CONCAT44(uStack_44,uStack_48);
        if (plVar8 == (longlong *)0x0) {
          *param_1 = CONCAT44(uStack_4c,local_50);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          plVar5 = (longlong *)param_1[1];
          *param_1 = CONCAT44(uStack_4c,local_50);
          if (plVar8 == plVar5) {
            LOCK();
            plVar5 = plVar8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar7 = *plVar8;
LAB_145b00061:
                (**(code **)(lVar7 + 0x10))(plVar8);
              }
            }
          }
          else {
            param_1[1] = (longlong)plVar8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar5 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar7 = *plVar5;
                  plVar8 = plVar5;
                  goto LAB_145b00061;
                }
              }
            }
          }
        }
        lVar7 = CONCAT44(uStack_4c,local_50);
        if ((*(longlong *)(lVar7 + 0x40) != *param_2) || (*(int *)(lVar7 + 0x48) != (int)param_2[1])
           ) {
          *(longlong *)(lVar7 + 0x40) = *param_2;
          *(int *)(lVar7 + 0x48) = (int)param_2[1];
          *(undefined8 *)(lVar7 + 0x50) = 0;
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_44,uStack_48);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_145affea1;
  }
  plVar8 = (longlong *)param_1[1];
  local_88 = lVar7;
  if (plVar8 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    FUN_1408f6a5c(lVar3);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_80 = plVar8;
    FUN_1408f6a5c(lVar3);
    LOCK();
    plVar5 = plVar8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_140d01a6a(*param_1);
LAB_145afff6d:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b001b7 FUN_145b001b7 body=137 status=ok
// SIG undefined FUN_145b001b7(void)

undefined8 * FUN_145b001b7(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x350);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b4164d0;
  memset(puVar1 + 2,0,0x340);
  FUN_14126c416(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14b3b8090;
  puVar1[0x62] = 0;
  puVar1[99] = 0;
  puVar1[100] = 0;
  puVar1[0x65] = 0;
  puVar1[0x66] = 0x447a000040a00000;
  puVar1[0x67] = 0x47742400;
  *(undefined2 *)(puVar1 + 0x68) = 0;
  return puVar1;
}



// FUNCTION 145b00240 FUN_145b00240 body=162 status=ok
// SIG undefined FUN_145b00240(void)

void FUN_145b00240(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145b0027f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145b0027f;
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
LAB_145b0027f:
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
                    /* WARNING: Could not recover jumptable at 0x000145b002de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145b002e2 FUN_145b002e2 body=103 status=ok
// SIG undefined FUN_145b002e2(void)

void FUN_145b002e2(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1;
  if (param_1 != 0) {
    local_30 = FUN_1447210f0();
    if (local_30 != 0) {
      local_20 = &local_30;
      local_18 = &local_28;
      FUN_1457507c6(local_c);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b0034a FUN_145b0034a body=429 status=ok
// SIG undefined FUN_145b0034a(void)

void FUN_145b0034a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [3];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 1) - 2U < 0x7fffffff) {
    FUN_14006620a(&local_40,*param_1,1);
  }
  else {
    FUN_140056680(&local_40,&DAT_149dfb77a);
  }
  iVar5 = local_38 + -1;
  if (local_38 == 0) {
    iVar5 = 0;
  }
  FUN_1402980a2(param_2,local_40,iVar5);
  local_58[0] = 0;
  local_58[1] = 0;
  iVar5 = 0;
  if (local_38 - 2U < 0x7fffffff) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    lVar2 = FUN_145b004f8(*puVar4);
    iVar5 = 0;
    if (lVar2 != 0) {
      uVar3 = FUN_14682e48f(*(undefined1 *)(lVar2 + 0x18));
      FUN_14020fad6(local_58,uVar3);
      iVar5 = (int)local_58[1];
    }
  }
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    FUN_1402980a2(param_3,local_58[0]);
  }
  local_60 = 0;
  local_68 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  FUN_140056680(local_78,puVar4);
  cVar1 = FUN_145b0052c(local_78,&local_60,&local_68);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    *param_4 = local_60;
    *param_5 = local_68;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b004f8 FUN_145b004f8 body=52 status=ok
// SIG undefined FUN_145b004f8(void)

short * FUN_145b004f8(short param_1)

{
  short *psVar1;
  longlong lVar2;
  
  if ((longlong)DAT_14c8c26f0 == 0) {
    return (short *)0x0;
  }
  psVar1 = (short *)(DAT_14c8c26e8 + 0x18);
  lVar2 = (longlong)DAT_14c8c26f0 * 0x38;
  do {
    if (*psVar1 == param_1) {
      return psVar1;
    }
    psVar1 = psVar1 + 0x1c;
    lVar2 = lVar2 + -0x38;
  } while (lVar2 != 0);
  return (short *)0x0;
}



// FUNCTION 145b0052c FUN_145b0052c body=181 status=ok
// SIG undefined FUN_145b0052c(void)

bool FUN_145b0052c(undefined8 param_1,PULARGE_INTEGER param_2,PULARGE_INTEGER param_3)

{
  BOOL BVar1;
  LPCWSTR lpDirectoryName;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40 [2];
  LPCWSTR local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401aea18(local_40,param_1);
  local_48 = 1;
  FUN_1414bc8e4(local_40,&local_30,&DAT_149e065c6,&DAT_149e01f64);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  lpDirectoryName = local_30;
  if (local_28 == 0) {
    lpDirectoryName = L"";
  }
  BVar1 = GetDiskFreeSpaceExW(lpDirectoryName,(PULARGE_INTEGER)0x0,param_2,param_3);
  if (local_30 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return BVar1 != 0;
}



// FUNCTION 145b005e2 FUN_145b005e2 body=181 status=ok
// SIG undefined FUN_145b005e2(void)

void FUN_145b005e2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 **local_38;
  undefined1 local_30;
  undefined1 *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145b00698();
  if (*(longlong *)(param_1 + 0xbe0) != 0) {
    lVar4 = FUN_1410decb6();
    lVar2 = *(longlong *)(param_1 + 0xbe0);
    if (((lVar2 != 0) && (lVar4 != 0)) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) {
      iVar1 = *(int *)(lVar4 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar4 + 0x30)) {
        *(undefined4 *)(lVar2 + 400) = 0xfffffffd;
        local_38 = &local_20;
        local_20 = &LAB_1441dfdb4;
        local_18 = 0;
        local_30 = 0;
        FUN_1414b9ad6(lVar2,&DAT_14cbc9bc8,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),param_1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b00698 FUN_145b00698 body=1 status=ok
// SIG undefined FUN_145b00698(void)

void FUN_145b00698(void)

{
  return;
}



// FUNCTION 145b0069a FUN_145b0069a body=131 status=ok
// SIG undefined FUN_145b0069a(void)

undefined8 * FUN_145b0069a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_145b0071e(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145b006bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined8 *)(**(code **)(lVar1 + 0x38))();
    return puVar2;
  }
  puVar2 = (undefined8 *)FUN_1414bc928(&DAT_14c9a7bb8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *puVar2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar2 + 1);
  *puVar2 = &PTR_FUN_14a18c5f0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return puVar2;
}



// FUNCTION 145b0071e FUN_145b0071e body=191 status=ok
// SIG undefined FUN_145b0071e(void)

longlong FUN_145b0071e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145b007de();
  lVar3 = *param_1;
  if (DAT_14c9a7b68 != DAT_14c9a7b94) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14c9a7b98;
    if (DAT_14c9a7ba0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a7ba0;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14c9a7ba8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14c9a7b60 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14c9a7b58;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145b007de FUN_145b007de body=152 status=ok
// SIG undefined FUN_145b007de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145b007de(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a7bb0) {
    FUN_144b3d300(&DAT_14c9a7bb0);
    if (DAT_14c9a7bb0 == -1) {
      DAT_14c9a7b80 = 0;
      DAT_14c9a7b88 = 0;
      DAT_14c9a7b60 = 0;
      _DAT_14c9a7b68 = 0;
      _DAT_14c9a7b8c = 0xffffffff00000080;
      DAT_14c9a7b94 = 0;
      DAT_14c9a7ba0 = 0;
      DAT_14c9a7ba8 = 0;
      atexit(FUN_142b3fd2c);
      _Init_thread_footer(&DAT_14c9a7bb0);
      return;
    }
  }
  return;
}



// FUNCTION 145b00876 FUN_145b00876 body=103 status=ok
// SIG undefined FUN_145b00876(void)

undefined8 * FUN_145b00876(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414bc928(&DAT_14c9a7bb8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14a18c5f0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar1;
}



// FUNCTION 145b008dd FUN_145b008dd body=117 status=ok
// SIG undefined FUN_145b008dd(void)

void FUN_145b008dd(void)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_28 = 0;
  uStack_24 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_144b499b0(&local_38);
  uStack_24 = CONCAT44(uStack_24._4_4_,9);
  FUN_144b499f0(&local_38);
  FUN_144b49a30(&LAB_142745e82,&LAB_142745e7d);
  FUN_144b499a0(FUN_142745e87);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b00954 FUN_145b00954 body=105 status=ok
// SIG undefined FUN_145b00954(void)

void FUN_145b00954(longlong param_1)

{
  longlong *plVar1;
  
  FUN_145b009bd();
  if (*(longlong *)(param_1 + 0x270) != 0) {
    plVar1 = (longlong *)(param_1 + 0x290);
    if (*(longlong **)(param_1 + 0x280) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x280);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1);
  return;
}



// FUNCTION 145b009bd FUN_145b009bd body=334 status=ok
// SIG undefined FUN_145b009bd(void)

void FUN_145b009bd(longlong param_1)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0x100000000;
  local_30 = &DAT_14c948e88;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14c948ea0 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_78 = &DAT_14c948e78;
  local_50 = &DAT_14c948e78;
  local_48 = &DAT_14c948e78;
  local_40 = 0;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      if (*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) == param_1) {
        FUN_146897976(local_50);
        local_40 = CONCAT11(local_40._1_1_,1);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_14689778e(local_48,*(int *)(local_48 + 1) - *(int *)((longlong)local_48 + 0x34));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b00b0c FUN_145b00b0c body=347 status=ok
// SIG undefined FUN_145b00b0c(void)

void FUN_145b00b0c(longlong param_1,char param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c))) {
    uVar5 = (uint)(ushort)((ulonglong)param_4 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_4 >> 0x20) +
                             ((int)param_4 << 0x10 | (uint)(ushort)param_4) +
                             (uVar5 << 0x13 | uVar5) + (uint)(ushort)((ushort)param_4 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x20) == param_4) {
          if (((lVar6 != 0) && (lVar6 + 8 != 0)) && ((longlong)*(int *)(param_3 + 1) != 0)) {
            puVar8 = (undefined8 *)*param_3;
            lVar9 = (longlong)*(int *)(param_3 + 1) << 4;
            do {
              cVar4 = FUN_1414bd16c(lVar6 + 8,puVar8);
              if (cVar4 != '\0') {
                local_48 = *puVar8;
                local_40 = (longlong *)puVar8[1];
                if (local_40 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_40 + 1) = (int)local_40[1] + 1;
                  UNLOCK();
                }
                if ((*(int *)(param_1 + 0x60) != 0) &&
                   (plVar3 = *(longlong **)(param_1 + 0x58), plVar3 != (longlong *)0x0)) {
                  (**(code **)(*plVar3 + 0x60))(plVar3,&local_48);
                }
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
              }
              puVar8 = puVar8 + 2;
              lVar9 = lVar9 + -0x10;
            } while (lVar9 != 0);
          }
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x18);
      } while (iVar7 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b00c68 FUN_145b00c68 body=106 status=ok
// SIG undefined FUN_145b00c68(void)

void FUN_145b00c68(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1414bd24a();
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x000145b00cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145b00cd2 FUN_145b00cd2 body=29 status=ok
// SIG undefined FUN_145b00cd2(void)

undefined8 FUN_145b00cd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b00cf0 FUN_145b00cf0 body=184 status=ok
// SIG undefined FUN_145b00cf0(void)

void FUN_145b00cf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1414bd35c();
  lVar1 = FUN_14060e84c(param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_145b00daa(lVar1 + 0x2250,&local_28,param_1);
      *(undefined8 *)(param_1 + 0xb8) = local_28;
      local_40 = *(undefined8 *)(lVar1 + 0x23c0);
      local_38 = *(undefined4 *)(lVar1 + 0x23c8);
      local_30 = 0;
      FUN_145b00fb6(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b00daa FUN_145b00daa body=244 status=ok
// SIG undefined FUN_145b00daa(void)

undefined8 FUN_145b00daa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b968bc0;
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
  *local_38 = &PTR_FUN_14b967e10;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_141488f7c;
  FUN_145b00ea0(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b00ea0 FUN_145b00ea0 body=216 status=ok
// SIG undefined FUN_145b00ea0(void)

undefined8 * FUN_145b00ea0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145b00f86 FUN_145b00f86 body=24 status=ok
// SIG undefined FUN_145b00f86(void)

bool FUN_145b00f86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145b00f9e FUN_145b00f9e body=24 status=ok
// SIG undefined FUN_145b00f9e(void)

bool FUN_145b00f9e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145b00fb6 FUN_145b00fb6 body=272 status=ok
// SIG undefined FUN_145b00fb6(void)

void FUN_145b00fb6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_2 != 0) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    iVar2 = FUN_145b010c8();
    if (iVar2 - 1U < 2) {
      local_40 = *param_2;
      local_38 = (undefined4)param_2[1];
      local_30 = 0;
      lVar3 = FUN_1414bd2c4();
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x228) != 0) {
          lVar3 = FUN_1414bd494(lVar3);
          if (lVar3 == 0) goto LAB_145b01013;
        }
        lVar1 = *(longlong *)(param_1 + 0x30);
        if (lVar1 != 0) {
          FUN_14073f620(local_70,lVar3);
          iVar2 = FUN_1406ba864(lVar1,local_70,0);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if (iVar2 < 2) {
            FUN_14073f620(local_70,lVar3);
            FUN_14027a97e(lVar1,local_70,2);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
LAB_145b01013:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b010c8 FUN_145b010c8 body=19 status=ok
// SIG undefined FUN_145b010c8(void)

undefined4 FUN_145b010c8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x120);
  }
  return 0;
}



// FUNCTION 145b010dc FUN_145b010dc body=239 status=ok
// SIG undefined FUN_145b010dc(void)

undefined8 FUN_145b010dc(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14b3f8d60;
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
  *local_30 = &PTR_FUN_14b3fafe0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_14882e6f6;
  FUN_145ccdfd8(&DAT_14cb7bad8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b011cc FUN_145b011cc body=244 status=ok
// SIG undefined FUN_145b011cc(void)

undefined8 FUN_145b011cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b3faf70;
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
  *local_38 = &PTR_FUN_14b3faf00;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_140f8e940;
  FUN_145b012c2(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b012c2 FUN_145b012c2 body=216 status=ok
// SIG undefined FUN_145b012c2(void)

undefined8 * FUN_145b012c2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145b013a8 FUN_145b013a8 body=24 status=ok
// SIG undefined FUN_145b013a8(void)

bool FUN_145b013a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145b013ca FUN_145b013ca body=97 status=ok
// SIG undefined FUN_145b013ca(void)

void FUN_145b013ca(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b26bb40;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145b0142c(param_1 + 5);
  *param_1 = &PTR_FUN_14b258290;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145b01427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145b0142c FUN_145b0142c body=55 status=ok
// SIG undefined FUN_145b0142c(void)

void FUN_145b0142c(longlong *param_1)

{
  FUN_145b01464(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b01464 FUN_145b01464 body=388 status=ok
// SIG undefined FUN_145b01464(void)

void FUN_145b01464(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
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
      lVar2 = *local_78 + (longlong)iStack_5c * 0x50;
      FUN_1404e4a88(lVar2 + 0x28);
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140e9549c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
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



// FUNCTION 145b015ea FUN_145b015ea body=9 status=ok
// SIG undefined FUN_145b015ea(void)

void FUN_145b015ea(longlong param_1)

{
  FUN_145b015f4(param_1 + 0x10);
  return;
}



// FUNCTION 145b015f4 FUN_145b015f4 body=138 status=ok
// SIG undefined FUN_145b015f4(void)

void FUN_145b015f4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb910;
  param_1[0x18] = &PTR_FUN_149ed05f0;
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x000145b0167a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145b0167e FUN_145b0167e body=46 status=ok
// SIG undefined FUN_145b0167e(void)

void FUN_145b0167e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145b016ac(puVar1,param_1);
  *puVar1 = &PTR_FUN_14abcaa70;
  FUN_145b016cc(puVar1 + 5);
  return;
}



// FUNCTION 145b016ac FUN_145b016ac body=32 status=ok
// SIG undefined FUN_145b016ac(void)

undefined8 * FUN_145b016ac(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ac1d290;
  return param_1;
}



// FUNCTION 145b016cc FUN_145b016cc body=69 status=ok
// SIG undefined FUN_145b016cc(void)

void FUN_145b016cc(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x3f800000;
  uVar1 = DAT_14cb203d8;
  *(undefined8 *)(param_1 + 2) = DAT_14cb203d0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = DAT_14cb203e0;
  uVar1 = DAT_14cb203d8;
  *(undefined8 *)(param_1 + 8) = DAT_14cb203d0;
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = DAT_14cb203e0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  return;
}



// FUNCTION 145b01711 FUN_145b01711 body=35 status=ok
// SIG undefined FUN_145b01711(void)

void FUN_145b01711(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145b01734(puVar1,param_1);
  *puVar1 = &PTR_FUN_14acfe270;
  return;
}



// FUNCTION 145b01734 FUN_145b01734 body=112 status=ok
// SIG undefined FUN_145b01734(void)

undefined8 * FUN_145b01734(undefined8 *param_1)

{
  FUN_1409dad0c();
  *param_1 = &PTR_FUN_14ad01d40;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return param_1;
}



// FUNCTION 145b017b0 FUN_145b017b0 body=135 status=ok
// SIG undefined FUN_145b017b0(void)

undefined8 * FUN_145b017b0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1410fb170();
  *param_1 = &PTR_FUN_14b389c70;
  *(undefined4 *)(param_1 + 0x16) = 0xbf4216c9;
  param_1[0x17] = "source";
  FUN_1400b22c2(local_28,"GbxGame.MissionSource");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b01838 FUN_145b01838 body=127 status=ok
// SIG undefined FUN_145b01838(void)

void FUN_145b01838(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145b018b8(&DAT_14cafa528,&local_20,param_1,FUN_1457c4086);
  *(undefined8 *)(param_1 + 8) = local_20;
  FUN_145b018b8(&DAT_14cafa540,&local_20,param_1,FUN_1457c40ae);
  *(undefined8 *)(param_1 + 0x10) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b018b8 FUN_145b018b8 body=228 status=ok
// SIG undefined FUN_145b018b8(void)

undefined8
FUN_145b018b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b521ba0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b521b30;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_145b0199e(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b0199e FUN_145b0199e body=216 status=ok
// SIG undefined FUN_145b0199e(void)

undefined8 * FUN_145b0199e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145b01a88 FUN_145b01a88 body=40 status=ok
// SIG undefined FUN_145b01a88(void)

undefined8 FUN_145b01a88(undefined8 param_1,int param_2)

{
  FUN_145b01ab0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b01ab0 FUN_145b01ab0 body=62 status=ok
// SIG undefined FUN_145b01ab0(void)

void FUN_145b01ab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc404f0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145b01aee(param_1);
  return;
}



// FUNCTION 145b01aee FUN_145b01aee body=45 status=ok
// SIG undefined FUN_145b01aee(void)

void FUN_145b01aee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc53600;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 145b01b1b FUN_145b01b1b body=93 status=ok
// SIG undefined FUN_145b01b1b(void)

void FUN_145b01b1b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145b01b78(puVar1);
  *puVar1 = &PTR_FUN_14a617a90;
  puVar1[0x28] = 0;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x154) = 0;
  puVar1[0x2c] = 0;
  *(undefined4 *)(puVar1 + 0x2d) = 0;
  return;
}



// FUNCTION 145b01b78 FUN_145b01b78 body=183 status=ok
// SIG undefined FUN_145b01b78(void)

undefined8 * FUN_145b01b78(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a5dc260;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 2;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 2;
  return param_1;
}



// FUNCTION 145b01c30 FUN_145b01c30 body=244 status=ok
// SIG undefined FUN_145b01c30(void)

undefined8
FUN_145b01c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14a8ea840;
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
  *local_40 = &PTR_FUN_14a8ea7d0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_145b01d26(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b01d26 FUN_145b01d26 body=216 status=ok
// SIG undefined FUN_145b01d26(void)

undefined8 * FUN_145b01d26(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145b01e0c FUN_145b01e0c body=24 status=ok
// SIG undefined FUN_145b01e0c(void)

bool FUN_145b01e0c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145b01e24 FUN_145b01e24 body=244 status=ok
// SIG undefined FUN_145b01e24(void)

undefined8
FUN_145b01e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14a8eaa00;
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
  *local_40 = &PTR_FUN_14a8ea990;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_145b01f1a(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b01f1a FUN_145b01f1a body=216 status=ok
// SIG undefined FUN_145b01f1a(void)

undefined8 * FUN_145b01f1a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145b02000 FUN_145b02000 body=24 status=ok
// SIG undefined FUN_145b02000(void)

bool FUN_145b02000(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145b02024 FUN_145b02024 body=353 status=ok
// SIG undefined FUN_145b02024(void)

undefined8 * FUN_145b02024(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145b02186();
  *param_1 = &PTR_FUN_14adc9d90;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  uVar2 = FUN_144830b78(param_1 + 0x10,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(byte *)((longlong)param_1 + 0x99) = *(byte *)((longlong)param_1 + 0x99) & 0xfe;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adcd0a0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_48 = FUN_140f1f190();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_48);
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar2 = FUN_144830b78(local_34);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b02186 FUN_145b02186 body=77 status=ok
// SIG undefined FUN_145b02186(void)

undefined8 * FUN_145b02186(undefined8 *param_1)

{
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14add8c80;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x300000003;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f80000000000003;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 10;
  param_1[0xb] = 0x4059000000000000;
  param_1[0xc] = 0x4059000000000000;
  param_1[0xd] = 0x4059000000000000;
  return param_1;
}



// FUNCTION 145b021d4 FUN_145b021d4 body=40 status=ok
// SIG undefined FUN_145b021d4(void)

undefined8 FUN_145b021d4(undefined8 param_1,int param_2)

{
  FUN_145b021fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b021fc FUN_145b021fc body=138 status=ok
// SIG undefined FUN_145b021fc(void)

void FUN_145b021fc(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aeb0130;
  param_1[5] = &PTR_FUN_14aeb0410;
  param_1[7] = &PTR_FUN_14aeb0430;
  param_1[8] = &PTR_FUN_14aeb0470;
  if (param_1[0x1a] != 0) {
    plVar1 = param_1 + 0x1e;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1c];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b02292 FUN_145b02292 body=31 status=ok
// SIG undefined FUN_145b02292(void)

undefined8 FUN_145b02292(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b022b2 FUN_145b022b2 body=40 status=ok
// SIG undefined FUN_145b022b2(void)

undefined8 FUN_145b022b2(undefined8 param_1,int param_2)

{
  FUN_145b022da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b022da FUN_145b022da body=138 status=ok
// SIG undefined FUN_145b022da(void)

void FUN_145b022da(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aeb0d10;
  param_1[5] = &PTR_FUN_14aeb0ff0;
  param_1[7] = &PTR_FUN_14aeb1010;
  param_1[8] = &PTR_FUN_14aeb1050;
  if (param_1[0x1c] != 0) {
    plVar1 = param_1 + 0x20;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b02370 FUN_145b02370 body=31 status=ok
// SIG undefined FUN_145b02370(void)

undefined8 FUN_145b02370(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b0238f FUN_145b0238f body=82 status=ok
// SIG undefined FUN_145b0238f(void)

void FUN_145b0238f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145b023e2(puVar1);
  *puVar1 = &PTR_FUN_14bdd3750;
  puVar1[5] = &PTR_FUN_14bdd3b70;
  puVar1[0x13] = &PTR_FUN_14bdd3b90;
  puVar1[0x17] = &PTR_FUN_14bdd3bc0;
  puVar1[0x24] = 0;
  return;
}



// FUNCTION 145b023e2 FUN_145b023e2 body=139 status=ok
// SIG undefined FUN_145b023e2(void)

undefined8 * FUN_145b023e2(undefined8 *param_1)

{
  FUN_140fe66fa();
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_14aef7740;
  param_1[5] = &PTR_FUN_14aef7b60;
  param_1[0x13] = &PTR_FUN_14aef7b80;
  param_1[0x17] = &PTR_FUN_14aef7bb0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 145b0246e FUN_145b0246e body=295 status=ok
// SIG undefined FUN_145b0246e(void)

undefined4 * FUN_145b0246e(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145b02596(local_38);
  puVar1 = (undefined4 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *local_30 = *puVar1;
  local_30[1] = uVar4;
  local_30[2] = uVar5;
  local_30[3] = uVar6;
  *(undefined8 *)(local_30 + 4) = *puVar2;
  local_30[6] = 0xffffffff;
  uVar7 = FUN_1447addd0(local_30,0x10);
  uVar10 = DAT_14caf15a0 - DAT_14caf15cc;
  if (uVar10 < 4) {
    iVar11 = 1;
  }
  else {
    uVar9 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar10 < 1) || (iVar11 <= DAT_14caf15e0)) {
    uVar7 = DAT_14caf15e0 - 1U & uVar7;
    local_30[7] = uVar7;
    puVar8 = DAT_14caf15d8;
    if (DAT_14caf15d8 == (undefined *)0x0) {
      puVar8 = &DAT_14caf15d0;
    }
    local_30[6] = *(undefined4 *)
                   (puVar8 + ((longlong)DAT_14caf15e0 - 1U & (longlong)(int)uVar7) * 4);
    puVar8 = DAT_14caf15d8;
    if (DAT_14caf15d8 == (undefined *)0x0) {
      puVar8 = &DAT_14caf15d0;
    }
    *(undefined4 *)(puVar8 + ((longlong)DAT_14caf15e0 - 1U & (longlong)(int)uVar7) * 4) =
         local_38[0];
  }
  else {
    DAT_14caf15e0 = iVar11;
    FUN_1414bd552();
  }
  *param_1 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b02596 FUN_145b02596 body=278 status=ok
// SIG undefined FUN_145b02596(void)

int * FUN_145b02596(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14caf15c8;
  iVar3 = DAT_14caf15a0;
  if (DAT_14caf15cc == 0) {
    iVar2 = DAT_14caf15a0 + 1;
    bVar7 = DAT_14caf15a4 == DAT_14caf15a0;
    DAT_14caf15a0 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14caf1598,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14caf15a8,1);
    puVar4 = DAT_14caf15b8;
    if (DAT_14caf15b8 == (undefined4 *)0x0) {
      puVar4 = &DAT_14caf15a8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14caf15c8;
    DAT_14caf15c8 = *(int *)(DAT_14caf1598 + 4 + lVar6 * 0x20);
    DAT_14caf15cc = DAT_14caf15cc + -1;
    if (DAT_14caf15cc != 0) {
      *(undefined4 *)(DAT_14caf1598 + (longlong)DAT_14caf15c8 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14caf15a8;
  if (DAT_14caf15b8 != (undefined4 *)0x0) {
    puVar4 = DAT_14caf15b8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14caf1598;
  return param_1;
}



// FUNCTION 145b026b4 FUN_145b026b4 body=462 status=ok
// SIG undefined FUN_145b026b4(void)

void FUN_145b026b4(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar3 = FUN_1447210f0();
    if (lVar3 != 0) {
      lVar4 = FUN_144a886c2(*(longlong *)(param_1 + 0x18) + 0x1108);
      FUN_1400bc96c(lVar4 + 0xe0,&DAT_14cbe7208);
      local_a8 = 0;
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar5;
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      local_b8 = (undefined8 *)0x0;
      local_b0 = 0;
      FUN_1446efa72(&local_b8,0,3,0x10);
      puVar5 = local_b8;
      local_b0 = 3;
      *local_b8 = &PTR_LAB_14a1c8830;
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
      local_b8[2] = lVar6;
      *local_b8 = &PTR_FUN_14b9de320;
      local_b8[3] = 0;
      FUN_14485c47a(local_b8 + 3,uVar2);
      puVar5[4] = lVar4;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b8);
      local_58 = 1;
      local_c8 = local_a0;
      local_a0[0] = 0;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar1,&local_a8,&local_98,param_2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_b8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b02884 FUN_145b02884 body=128 status=ok
// SIG undefined FUN_145b02884(void)

undefined8 FUN_145b02884(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar1 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30)) {
    if (param_2 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x38c3) != '\0') {
      return 0;
    }
  }
  else {
    if (param_2 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x38c3) != '\0') {
      return 0;
    }
    if (*(char *)(param_3 + 0x5d30) == '\x02') {
      return 0;
    }
  }
  uVar2 = FUN_145b02904(param_2,param_3,param_1 + -0x3b28);
  return uVar2;
}



// FUNCTION 145b02904 FUN_145b02904 body=2656 status=ok
// SIG undefined FUN_145b02904(void)

bool FUN_145b02904(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  double *pdVar10;
  undefined8 unaff_RBP;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined1 auStack_388 [32];
  double *local_368;
  double local_358;
  float local_34c;
  double local_348;
  double dStack_340;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  float local_300 [46];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined1 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  char local_200;
  undefined1 local_1f8 [173];
  byte local_14b;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  bVar12 = false;
  if ((param_2 == 0) || (param_3 == (longlong *)0x0)) goto LAB_145b02fda;
  lVar9 = param_3[0x87];
  lVar6 = FUN_144a78b9e();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (lVar11 = param_2,
     *(longlong *)
      (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
     != lVar6 + 0x30)) {
    lVar11 = 0;
  }
  lVar6 = param_3[0x23d];
  lVar7 = FUN_1447210f0(param_3);
  if (lVar7 != 0) {
    if (lVar6 == 0) {
      lVar7 = 0x36;
      uVar14 = 0;
    }
    else {
      uVar14 = (undefined4)
               CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(&DAT_00001100)[lVar6] != '\x01');
      lVar7 = 0x36;
      if ((&DAT_00001100)[lVar6] != '\x01') {
        lVar7 = 0xc0;
      }
    }
    if (*(char *)((longlong)param_1 + lVar7) == '\x01') {
      lVar7 = 0x38;
      if ((char)uVar14 != '\0') {
        lVar7 = 200;
      }
      cVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
      if (cVar5 != '\0') {
        lVar1 = param_3[0x39];
        uVar15 = SUB84(DAT_14c8464f0,0);
        uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        if (lVar1 == 0) {
          pdVar8 = &DAT_14c8464e0;
          uVar26 = uVar15;
          uVar27 = uVar29;
        }
        else {
          pdVar8 = (double *)(lVar1 + 0x260);
          uVar26 = (int)*(undefined8 *)(lVar1 + 0x270);
          uVar27 = (int)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
        }
        lVar1 = *(longlong *)(param_2 + 0x1c8);
        if (lVar1 == 0) {
          pdVar10 = &DAT_14c8464e0;
        }
        else {
          uVar15 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
          uVar29 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
          pdVar10 = (double *)(lVar1 + 0x260);
        }
        fVar28 = (float)*(double *)(lVar9 + 0x290) * *(float *)(lVar9 + 0x640);
        dVar20 = *pdVar8;
        dVar2 = pdVar8[1];
        dVar19 = *pdVar10;
        dVar4 = pdVar10[1];
        if ((lVar11 != 0) && (lVar11 = *(longlong *)(lVar11 + 0x438), lVar11 != 0)) {
          fVar13 = *(float *)((longlong)param_1 + lVar7 + 0x80);
          dVar16 = (double)fVar28;
          dVar17 = (double)((float)*(double *)(lVar11 + 0x290) * *(float *)(lVar11 + 0x640));
          if (((0.0 < fVar13) &&
              (fVar13 < (float)((double)CONCAT44(uVar29,uVar15) - dVar17) -
                        (float)((double)CONCAT44(uVar27,uVar26) + dVar16))) ||
             ((fVar13 = *(float *)((longlong)param_1 + lVar7 + 0x7c), 0.0 < fVar13 &&
              (fVar13 < (float)((double)CONCAT44(uVar27,uVar26) - dVar16) -
                        (float)(dVar17 + (double)CONCAT44(uVar29,uVar15)))))) goto LAB_145b03280;
        }
        local_358 = (double)CONCAT44(uVar27,uVar26);
        fVar13 = (float)FUN_145ecda8a(param_1,uVar14,param_3);
        bVar12 = true;
        if (fVar13 <= 0.0) goto LAB_145b02fda;
        dVar21 = dVar4 - dVar2;
        dVar17 = dVar19 - dVar20;
        dVar23 = (double)CONCAT44(uVar29,uVar15) - local_358;
        dVar16 = dVar17 * dVar17 + dVar21 * dVar21;
        dVar23 = dVar23 * dVar23 + dVar16;
        local_348 = dVar20;
        dStack_340 = dVar2;
        if (dVar23 <= (double)(fVar13 * fVar13)) goto LAB_145b02fda;
        if (*(char *)((longlong)param_1 + 0x34) == '\0') {
          local_f8 = '\0';
          (**(code **)(*param_3 + 0x528))(param_3,local_300,&local_318);
          local_34c = (float)((double)local_300[0] + (SQRT(dVar23) - (double)fVar13));
          if (lVar6 != 0) {
            local_318 = local_348;
            local_308 = (double)*(float *)(lVar6 + 0x1fc) + (local_358 - (double)fVar28);
            dVar20 = (double)CONCAT44(uVar29,uVar15) - local_308;
            dVar16 = dVar20 * dVar20 + dVar16;
            if (((dVar16 != 1.0) || (dVar25 = dVar17, dVar18 = dVar21, dVar3 = dVar20, NAN(dVar16)))
               && (dVar25 = DAT_14c8464e0, dVar18 = DAT_14c8464e8, dVar3 = DAT_14c8464f0,
                  9.99999993922529e-09 <= dVar16)) {
              dVar16 = 1.0 / SQRT(dVar16);
              dVar25 = dVar16 * dVar17;
              dVar18 = dVar21 * dVar16;
              dVar3 = dVar20 * dVar16;
            }
            dVar20 = (double)local_34c;
            local_320 = local_308 + dVar3 * dVar20;
            local_328 = dVar18 * dVar20 + dVar2;
            local_330 = dVar25 * dVar20 + local_348;
            local_368 = &local_330;
            local_310 = dVar2;
            FUN_145b03366(local_300,3,param_3,&local_318);
            if (local_200 == '\0') {
              if (local_f8 == '\x01') {
                local_f8 = '\0';
              }
            }
            else {
              memcpy(local_1f8,local_300,0xb8);
              local_140 = local_248;
              local_138 = local_240;
              uStack_130 = uStack_238;
              local_128 = local_230;
              local_124 = local_22c;
              local_120 = local_228;
              uStack_118 = uStack_220;
              local_110 = local_218;
              uStack_10c = uStack_214;
              uStack_108 = uStack_210;
              uStack_104 = uStack_20c;
              local_100 = local_208;
              local_f8 = '\x01';
              if (((local_14b & 3) == 1) && (lVar6 = FUN_14485cccc(&local_140), lVar6 != param_2))
              goto LAB_145b03280;
            }
          }
          dVar20 = local_348;
          if (((dVar23 != 1.0) || (dVar3 = dVar21, dVar16 = dVar17, NAN(dVar23))) &&
             (dVar3 = DAT_14c8464e8, dVar16 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar23)) {
            dVar16 = 1.0 / SQRT(dVar23);
            dVar3 = dVar21 * dVar16;
            dVar16 = dVar17 * dVar16;
          }
          dVar17 = *(double *)(lVar9 + 0x280);
          uVar14 = SUB84(dVar17,0);
          uVar15 = (undefined4)((ulonglong)dVar17 >> 0x20);
          dVar21 = *(double *)(lVar9 + 0x288);
          if (dVar21 <= dVar17) {
            uVar14 = SUB84(dVar21,0);
            uVar15 = (undefined4)((ulonglong)dVar21 >> 0x20);
          }
          dVar17 = (double)((float)(double)CONCAT44(uVar15,uVar14) * *(float *)(lVar9 + 0x644));
          dVar3 = dVar3 * dVar17;
          dVar16 = dVar16 * dVar17;
          local_318 = local_348 + dVar3;
          local_310 = dVar2 - dVar16;
          local_308 = local_358;
          dVar23 = local_358 - local_358;
          dVar21 = (dVar4 - dVar16) - local_310;
          dVar17 = (dVar19 + dVar3) - local_318;
          dVar25 = dVar23 * dVar23 + dVar17 * dVar17 + dVar21 * dVar21;
          if (((dVar25 != 1.0) || (dVar18 = dVar17, dVar22 = dVar21, dVar24 = dVar23, NAN(dVar25)))
             && (dVar18 = DAT_14c8464e0, dVar22 = DAT_14c8464e8, dVar24 = DAT_14c8464f0,
                9.99999993922529e-09 <= dVar25)) {
            dVar25 = 1.0 / SQRT(dVar25);
            dVar18 = dVar17 * dVar25;
            dVar22 = dVar21 * dVar25;
            dVar24 = dVar23 * dVar25;
          }
          dVar17 = (double)local_34c;
          local_320 = local_358 + dVar24 * dVar17;
          local_328 = local_310 + dVar22 * dVar17;
          local_330 = local_318 + dVar18 * dVar17;
          local_368 = &local_330;
          FUN_145b03366(local_300,3,param_3,&local_318);
          if (local_200 == '\0') {
            if (local_f8 == '\x01') {
              local_f8 = '\0';
            }
          }
          else {
            memcpy(local_1f8,local_300,0xb8);
            local_140 = local_248;
            local_138 = local_240;
            uStack_130 = uStack_238;
            local_128 = local_230;
            local_124 = local_22c;
            local_120 = local_228;
            uStack_118 = uStack_220;
            local_110 = local_218;
            uStack_10c = uStack_214;
            uStack_108 = uStack_210;
            uStack_104 = uStack_20c;
            local_100 = local_208;
            local_f8 = '\x01';
            if (((local_14b & 3) == 1) && (lVar9 = FUN_14485cccc(&local_140), lVar9 != param_2))
            goto LAB_145b03280;
          }
          local_318 = dVar20 - dVar3;
          local_310 = dVar2 + dVar16;
          local_320 = local_320 - local_308;
          dVar20 = (dVar4 + dVar16) - local_310;
          dVar2 = (dVar19 - dVar3) - local_318;
          dVar19 = local_320 * local_320 + dVar2 * dVar2 + dVar20 * dVar20;
          if (((dVar19 != 1.0) || (dVar21 = local_320, dVar4 = dVar20, dVar16 = dVar2, NAN(dVar19)))
             && (dVar21 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar16 = DAT_14c8464e0,
                9.99999993922529e-09 <= dVar19)) {
            dVar19 = 1.0 / SQRT(dVar19);
            dVar21 = local_320 * dVar19;
            dVar4 = dVar20 * dVar19;
            dVar16 = dVar2 * dVar19;
          }
          local_320 = local_308 + dVar21 * dVar17;
          local_328 = local_310 + dVar4 * dVar17;
          local_330 = local_318 + dVar16 * dVar17;
          local_368 = &local_330;
          FUN_145b03366(local_300,3,param_3,&local_318);
          if (local_200 == '\0') {
            bVar12 = true;
          }
          else {
            memcpy(local_1f8,local_300,0xb8);
            local_140 = local_248;
            local_138 = local_240;
            uStack_130 = uStack_238;
            local_128 = local_230;
            local_124 = local_22c;
            local_120 = local_228;
            uStack_118 = uStack_220;
            local_110 = local_218;
            uStack_10c = uStack_214;
            uStack_108 = uStack_210;
            uStack_104 = uStack_20c;
            local_100 = local_208;
            local_f8 = '\x01';
            bVar12 = true;
            if ((local_14b & 3) == 1) {
              lVar9 = FUN_14485cccc(&local_140);
              bVar12 = lVar9 == param_2;
            }
          }
          goto LAB_145b02fda;
        }
      }
    }
  }
LAB_145b03280:
  bVar12 = false;
LAB_145b02fda:
  if ((local_f0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar12;
}



// FUNCTION 145b03366 FUN_145b03366 body=443 status=ok
// SIG undefined FUN_145b03366(void)

void * FUN_145b03366(void *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 local_1c0 [4];
  undefined4 local_1bc;
  undefined4 local_11c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [16];
  undefined1 local_a8;
  undefined1 local_a5;
  longlong local_68;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  memset(local_1c0,0,0x100);
  local_f0 = 0xffffffff;
  local_1bc = 0x3f800000;
  local_11c = 0xffffffff;
  local_1d8 = param_3;
  FUN_144a886e6(local_b8,0,&local_b9,0);
  uVar4 = 2;
  if (param_2 == 1) {
    local_a5 = 1;
    local_a8 = 1;
    uVar4 = 0x10;
  }
  lVar3 = FUN_1447210f0(param_3);
  if (lVar3 != 0) {
    local_1c8 = &DAT_14cad0f10;
    local_1d8 = CONCAT44(local_1d8._4_4_,uVar4);
    local_1d0 = local_b8;
    cVar1 = FUN_1400b50cc(lVar3,local_1c0,param_4,param_5);
    if (cVar1 != '\0') {
      memcpy(param_1,local_1c0,0xb8);
      *(undefined8 *)((longlong)param_1 + 0xb8) = local_108;
      *(undefined8 *)((longlong)param_1 + 0xc0) = local_100;
      *(undefined8 *)((longlong)param_1 + 200) = uStack_f8;
      *(undefined4 *)((longlong)param_1 + 0xd0) = local_f0;
      *(undefined1 *)((longlong)param_1 + 0xd4) = local_ec;
      *(undefined8 *)((longlong)param_1 + 0xf8) = local_c8;
      *(undefined8 *)((longlong)param_1 + 0xe8) = local_d8;
      *(undefined8 *)((longlong)param_1 + 0xf0) = uStack_d0;
      *(undefined4 *)((longlong)param_1 + 0xd8) = local_e8;
      *(undefined4 *)((longlong)param_1 + 0xdc) = uStack_e4;
      *(undefined4 *)((longlong)param_1 + 0xe0) = uStack_e0;
      *(undefined4 *)((longlong)param_1 + 0xe4) = uStack_dc;
      uVar2 = 1;
      goto LAB_145b03434;
    }
  }
  uVar2 = 0;
LAB_145b03434:
  *(undefined1 *)((longlong)param_1 + 0x100) = uVar2;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b03522 FUN_145b03522 body=40 status=ok
// SIG undefined FUN_145b03522(void)

undefined8 FUN_145b03522(undefined8 param_1,int param_2)

{
  thunk_FUN_145b03550();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b0354a thunk_FUN_145b03550 body=5 status=ok
// SIG undefined thunk_FUN_145b03550(void)

void thunk_FUN_145b03550(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4e4690;
  FUN_144760e21(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x3a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x38];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x32];
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
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145b0372a(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145b03760(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 9);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b03550 FUN_145b03550 body=474 status=ok
// SIG undefined FUN_145b03550(void)

void FUN_145b03550(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4e4690;
  FUN_144760e21(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x3a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x38];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x32];
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
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145b0372a(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145b03760(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 9);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b0372a FUN_145b0372a body=53 status=ok
// SIG undefined FUN_145b0372a(void)

void FUN_145b0372a(longlong *param_1)

{
  FUN_145b03796();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b03760 FUN_145b03760 body=53 status=ok
// SIG undefined FUN_145b03760(void)

void FUN_145b03760(longlong *param_1)

{
  FUN_145b038d2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b03796 FUN_145b03796 body=315 status=ok
// SIG undefined FUN_145b03796(void)

void FUN_145b03796(longlong *param_1)

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
      FUN_145cc7df2((longlong)iStack_4c * 0x28 + *local_68);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b038d2 FUN_145b038d2 body=315 status=ok
// SIG undefined FUN_145b038d2(void)

void FUN_145b038d2(longlong *param_1)

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
      FUN_145ad1d1e((longlong)iStack_4c * 0x28 + *local_68);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b03a0e FUN_145b03a0e body=282 status=ok
// SIG undefined FUN_145b03a0e(void)

undefined4 * FUN_145b03a0e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145b03bb0(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_145b03b2a(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145b03d84(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b03b2a FUN_145b03b2a body=132 status=ok
// SIG undefined FUN_145b03b2a(void)

undefined8 FUN_145b03b2a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_145b03c96();
    if (iVar1 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_145e42e7a(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_145b03b6c;
    }
  }
  uVar2 = 0;
LAB_145b03b6c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b03bb0 FUN_145b03bb0 body=230 status=ok
// SIG undefined FUN_145b03bb0(void)

int * FUN_145b03bb0(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 145b03c96 FUN_145b03c96 body=180 status=ok
// SIG undefined FUN_145b03c96(void)

int FUN_145b03c96(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_145b03d4c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145b03d24;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145b03d24:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b03d4c FUN_145b03d4c body=55 status=ok
// SIG undefined FUN_145b03d4c(void)

ulonglong FUN_145b03d4c(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 != *param_2) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != param_2[1])) {
    cVar1 = FUN_144729dda();
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(param_2);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 145b03d84 FUN_145b03d84 body=448 status=ok
// SIG undefined FUN_145b03d84(void)

void FUN_145b03d84(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145b03f4e FUN_145b03f4e body=66 status=ok
// SIG undefined FUN_145b03f4e(void)

undefined8 * FUN_145b03f4e(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_149f8f1b0;
  param_1[5] = &PTR_FUN_149f8f460;
  FUN_145974a76(param_1 + 9);
  return param_1;
}



// FUNCTION 145b03f90 FUN_145b03f90 body=40 status=ok
// SIG undefined FUN_145b03f90(void)

undefined8 FUN_145b03f90(undefined8 param_1,int param_2)

{
  FUN_145b03fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b03fb8 FUN_145b03fb8 body=59 status=ok
// SIG undefined FUN_145b03fb8(void)

void FUN_145b03fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a173f50;
  FUN_145b03ff3(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b03ff3 FUN_145b03ff3 body=49 status=ok
// SIG undefined FUN_145b03ff3(void)

void FUN_145b03ff3(longlong param_1,int param_2)

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



// FUNCTION 145b04030 FUN_145b04030 body=63 status=ok
// SIG undefined FUN_145b04030(void)

undefined8 * FUN_145b04030(undefined8 *param_1)

{
  FUN_140312256();
  *param_1 = &PTR_FUN_14a646f70;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e9) = 0;
  return param_1;
}



// FUNCTION 145b04070 FUN_145b04070 body=40 status=ok
// SIG undefined FUN_145b04070(void)

undefined8 FUN_145b04070(undefined8 param_1,int param_2)

{
  FUN_145b04098();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b04098 FUN_145b04098 body=59 status=ok
// SIG undefined FUN_145b04098(void)

void FUN_145b04098(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d2f70;
  FUN_145b040d3(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b040d3 FUN_145b040d3 body=49 status=ok
// SIG undefined FUN_145b040d3(void)

void FUN_145b040d3(longlong param_1,int param_2)

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



// FUNCTION 145b04104 FUN_145b04104 body=53 status=ok
// SIG undefined FUN_145b04104(void)

void FUN_145b04104(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x000145b04136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
            (*(longlong **)(param_1 + 0x10),param_2,param_3);
  return;
}



// FUNCTION 145b0413c FUN_145b0413c body=40 status=ok
// SIG undefined FUN_145b0413c(void)

undefined8 FUN_145b0413c(undefined8 param_1,int param_2)

{
  FUN_145b04164();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b04164 FUN_145b04164 body=59 status=ok
// SIG undefined FUN_145b04164(void)

void FUN_145b04164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab33b70;
  FUN_145b0419f(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b0419f FUN_145b0419f body=49 status=ok
// SIG undefined FUN_145b0419f(void)

void FUN_145b0419f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145b041d0 FUN_145b041d0 body=43 status=ok
// SIG undefined FUN_145b041d0(void)

undefined8 FUN_145b041d0(undefined8 param_1,int param_2)

{
  FUN_145b041fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 145b041fc FUN_145b041fc body=67 status=ok
// SIG undefined FUN_145b041fc(void)

void FUN_145b041fc(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14afcbf20;
  if ((HMODULE)param_1[6] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[6]);
    param_1[6] = 0;
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145b0424e FUN_145b0424e body=45 status=ok
// SIG undefined FUN_145b0424e(void)

undefined8 FUN_145b0424e(undefined8 param_1,int param_2)

{
  FUN_145b0427c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 145b0427c FUN_145b0427c body=163 status=ok
// SIG undefined FUN_145b0427c(void)

void FUN_145b0427c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b181c00;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 4);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 145b04328 FUN_145b04328 body=66 status=ok
// SIG undefined FUN_145b04328(void)

undefined8 * FUN_145b04328(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a6cc0;
  param_1[5] = DAT_14cb8c6b0;
  return param_1;
}



// FUNCTION 145b04372 FUN_145b04372 body=66 status=ok
// SIG undefined FUN_145b04372(void)

undefined8 * FUN_145b04372(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a7240;
  param_1[5] = DAT_14cb8c6c0;
  return param_1;
}



// FUNCTION 145b043bc FUN_145b043bc body=66 status=ok
// SIG undefined FUN_145b043bc(void)

undefined8 * FUN_145b043bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a6f80;
  param_1[5] = DAT_14cb8c6b8;
  return param_1;
}



// FUNCTION 145b04406 FUN_145b04406 body=66 status=ok
// SIG undefined FUN_145b04406(void)

undefined8 * FUN_145b04406(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b2a82c0;
  param_1[5] = DAT_14cb8c6f8;
  return param_1;
}



// FUNCTION 145b04448 FUN_145b04448 body=73 status=ok
// SIG undefined FUN_145b04448(void)

void FUN_145b04448(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1458c7f24();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x40))(param_1);
    FUN_145d7c4e6(param_1);
    return;
  }
  uVar2 = FUN_143f2ac96(param_1,0x17);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000145b0448a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}



// FUNCTION 145b04494 FUN_145b04494 body=9 status=ok
// SIG undefined FUN_145b04494(void)

void FUN_145b04494(longlong param_1)

{
  FUN_145b0449e(param_1 + 0x10);
  return;
}



// FUNCTION 145b0449e FUN_145b0449e body=65 status=ok
// SIG undefined FUN_145b0449e(void)

void FUN_145b0449e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4f0e60;
  param_1[4] = &PTR_FUN_14b4f0e88;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 10);
  FUN_14589ea1e(param_1);
  return;
}



// FUNCTION 145b044e0 FUN_145b044e0 body=21 status=ok
// SIG undefined FUN_145b044e0(void)

undefined8 FUN_145b044e0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145b044f6 FUN_145b044f6 body=90 status=ok
// SIG undefined FUN_145b044f6(void)

void FUN_145b044f6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14147686c(*param_1);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x30) == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x360);
  }
  if (param_2 != 0) {
    lVar2 = FUN_1447210f0(param_2);
    if (lVar2 == lVar1) {
      FUN_145a458fa(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145b04558 FUN_145b04558 body=139 status=ok
// SIG undefined FUN_145b04558(void)

undefined8 * FUN_145b04558(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14007ca06();
  FUN_140fabcfe(param_1,uVar1);
  *param_1 = &PTR_FUN_14b6b2490;
  *(undefined4 *)(param_1 + 0x16) = 0xabcd0123;
  param_1[0x17] = "ui_challenge_list";
  FUN_1400b22c2(local_28,"OakUI.ChallengeList");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b045e4 FUN_145b045e4 body=69 status=ok
// SIG undefined FUN_145b045e4(void)

undefined8 * FUN_145b045e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd127a0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b0462a thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 145b0462f FUN_145b0462f body=46 status=ok
// SIG undefined FUN_145b0462f(void)

void FUN_145b0462f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145b0465e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b56a090;
  puVar1[5] = &PTR_FUN_14b56a3b0;
  return;
}



// FUNCTION 145b0465e FUN_145b0465e body=797 status=ok
// SIG undefined FUN_145b0465e(void)

undefined8 * FUN_145b0465e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined3 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 *local_c0;
  int local_b8;
  longlong *local_88;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a5060f0;
  param_1[5] = &PTR_FUN_14a506410;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_1457c71ee(param_1 + 0x32);
  FUN_1457c724e(param_1 + 0xe6);
  FUN_1412cd7de(param_1 + 0x250);
  param_1[0x31a] = 0;
  param_1[0x31b] = 0;
  param_1[800] = 0;
  param_1[0x31d] = 0;
  param_1[0x31e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18f7) = 0;
  param_1[0x321] = 0;
  param_1[0x322] = 0x3f80000000000000;
  param_1[0x323] = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 0x41c00000;
  *(undefined4 *)(param_1 + 0x327) = 0;
  *(undefined2 *)((longlong)param_1 + 0x193c) = 2;
  *(undefined1 *)((longlong)param_1 + 0x193e) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x329) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x194c) = 0;
  *(undefined4 *)(param_1 + 0x32a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1954) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x32b) = 0;
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  param_1[0x338] = 0;
  param_1[0x339] = 0;
  param_1[0x336] = 0;
  param_1[0x337] = 0;
  param_1[0x334] = 0;
  param_1[0x335] = 0;
  param_1[0x332] = 0;
  param_1[0x333] = 0;
  param_1[0x330] = 0;
  param_1[0x331] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  lVar3 = FUN_140bcc93a();
  FUN_1457c735e(param_1 + 0x32,lVar3 + 0xd70);
  lVar3 = FUN_140bcc93a();
  FUN_1457c74aa(param_1 + 0xe6,lVar3 + 0x39e0);
  lVar3 = FUN_140bcc93a();
  FUN_1412cc8ca(param_1 + 0x250,lVar3 + 0x2740);
  param_1[0x329] = param_1[0x1dc];
  param_1[0x32a] = param_1[0x1dd];
  *(undefined4 *)(param_1 + 0x32b) = *(undefined4 *)(param_1 + 0x1de);
  *(undefined1 *)((longlong)param_1 + 0x195c) = 1;
  *(undefined4 *)(param_1 + 0x31a) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x18d4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x31b) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x18dc) = 0x40000000;
  *(undefined4 *)(param_1 + 0x31c) = 0x43e10000;
  *(undefined2 *)((longlong)param_1 + 0x18e4) = 0x101;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab7578) && (FUN_144b3d300(&DAT_14cab7578), DAT_14cab7578 == -1)) {
    FUN_145b04a56(&local_c0);
    puVar4 = local_c0;
    if (local_b8 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_145b0497c(&DAT_14cab7560,puVar4,0);
    if (local_c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    atexit(FUN_14332f084);
    _Init_thread_footer(&DAT_14cab7578);
  }
  local_d8 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  local_d0 = 0;
  uStack_c8 = 0x3f80000000000000;
  FUN_1446ddc76(local_e8,&DAT_149eea5a7,1);
  local_f8 = &local_e0;
  FUN_140324f46(&local_c0,DAT_14cab7570,0x41800000,local_e8);
  FUN_1412cc59c(param_1 + 0x31d,&local_c0);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145b0497c FUN_145b0497c body=216 status=ok
// SIG undefined FUN_145b0497c(void)

undefined8 * FUN_145b0497c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14a50b9f0;
  param_1[2] = 0;
  FUN_141247186(param_2);
  FUN_140056680(local_38,param_2);
  FUN_14124722a(local_38,1);
  lVar1 = FUN_1414bd8e4(local_38,param_3);
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[2] = lVar1;
    if (lVar1 == 0) {
      FUN_14283f6fe(param_2);
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[2] = lVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b04a56 FUN_145b04a56 body=70 status=ok
// SIG undefined FUN_145b04a56(void)

undefined8 FUN_145b04a56(undefined8 param_1)

{
  FUN_140056680(param_1,L"/Engine/EngineFonts/Roboto");
  FUN_1449da20c(DAT_14c872ce0,L"SlateStyle",L"DefaultFontName",param_1,&DAT_14c872ce8);
  return param_1;
}



// FUNCTION 145b04a9c FUN_145b04a9c body=75 status=ok
// SIG undefined FUN_145b04a9c(void)

void FUN_145b04a9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4fb5f0;
  param_1[5] = &PTR_LAB_14b4fbba0;
  param_1[0x38] = &PTR_LAB_14b4fbbd0;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  FUN_145b04ae8(param_1);
  return;
}



// FUNCTION 145b04ae8 FUN_145b04ae8 body=498 status=ok
// SIG undefined FUN_145b04ae8(void)

void FUN_145b04ae8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b1582c0;
  param_1[5] = &PTR_FUN_14b158850;
  param_1[0x38] = &PTR_FUN_14b158880;
  puVar3 = (undefined8 *)param_1[0x80];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x71);
  FUN_144760e21(param_1[0x6d],*(undefined4 *)(param_1 + 0x6e));
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x68],*(undefined4 *)(param_1 + 0x69));
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x65],*(undefined4 *)(param_1 + 0x66));
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[100];
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
  plVar4 = (longlong *)param_1[0x62];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_1[0x60];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_145b04df8(param_1 + 0x40);
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_145b04cda(param_1);
  return;
}



// FUNCTION 145b04cda FUN_145b04cda body=285 status=ok
// SIG undefined FUN_145b04cda(void)

void FUN_145b04cda(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8e33b0;
  param_1[5] = &PTR_FUN_14a8e3820;
  FUN_14079057a(param_1 + 0x20);
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6bc(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b04df8 FUN_145b04df8 body=401 status=ok
// SIG undefined FUN_145b04df8(void)

void FUN_145b04df8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_140115c12(param_1 + 0x78,0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_140115c12(param_1 + 0x98,0);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_144760e21(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x88) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_140115c12(param_1 + 0x98,0);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x68) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_140115c12(param_1 + 0x78,0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x18);
  return;
}



// FUNCTION 145b04f8a FUN_145b04f8a body=667 status=ok
// SIG undefined FUN_145b04f8a(void)

void FUN_145b04f8a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  undefined2 local_60;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != 0) {
    lVar2 = FUN_145b05226();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) goto LAB_145b04fe3;
  }
  param_1 = 0;
LAB_145b04fe3:
  plVar1 = (longlong *)(param_1 + 0x30);
  local_50 = param_1 + 0x40;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1449c0562(&local_58);
  }
  local_80 = local_48;
  iStack_7c = iStack_44;
  local_78 = local_40;
  local_74 = local_3c;
  local_90 = local_58;
  local_88 = local_50;
  local_60 = 0;
  local_98 = plVar1;
  local_70 = plVar1;
  local_68 = plVar1;
  if (iStack_44 < *(int *)(local_50 + 0x18)) {
    do {
      lVar2 = *local_98;
      lVar3 = (longlong)iStack_7c;
      plVar1 = *(longlong **)(lVar2 + 0x10 + lVar3 * 0x50);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,param_2);
      }
      plVar1 = *(longlong **)(lVar2 + 0x18 + lVar3 * 0x50);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,param_2);
      }
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (iStack_7c < *(int *)(local_88 + 0x18));
    if (((local_60 & 1) != 0) && (local_60._1_1_ == '\x01')) {
      FUN_147ba9cdc(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34));
    }
  }
  lVar2 = param_1 + 0x170;
  local_50 = param_1 + 0x180;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x198) != 0) {
    FUN_1449c0562(&local_58);
  }
  local_80 = local_48;
  iStack_7c = iStack_44;
  local_78 = local_40;
  local_74 = local_3c;
  local_90 = local_58;
  local_88 = local_50;
  local_60 = 0;
  local_98 = (longlong *)lVar2;
  local_70 = (longlong *)lVar2;
  local_68 = (longlong *)lVar2;
  if (iStack_44 < *(int *)(local_50 + 0x18)) {
    do {
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (iStack_7c < *(int *)(local_88 + 0x18));
    if (((local_60 & 1) != 0) && (local_60._1_1_ == '\x01')) {
      FUN_147bab1ba(local_68,*(int *)((longlong)local_68 + 8) - *(int *)((longlong)local_68 + 0x34))
      ;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b05226 FUN_145b05226 body=221 status=ok
// SIG undefined FUN_145b05226(void)

longlong FUN_145b05226(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac2478 == 0) {
    local_30 = &local_10;
    local_10 = FUN_145b04f8a;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14787fbf5;
    local_40 = &LAB_146178701;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"MapBuildDataRegistry",&DAT_14cac2478,&DAT_14787fbf4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac2478;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b05304 FUN_145b05304 body=82 status=ok
// SIG undefined FUN_145b05304(void)

void FUN_145b05304(longlong param_1,undefined8 param_2)

{
  FUN_1449e2820();
  FUN_140bcc8a6(param_2,param_1 + 0x148,param_1,0);
  if ((*(byte *)(param_1 + 0x220) & 0xfb) != 2) {
    FUN_145b05356(param_2,param_1 + 0x570,param_1);
    return;
  }
  return;
}



// FUNCTION 145b05356 FUN_145b05356 body=288 status=ok
// SIG undefined FUN_145b05356(void)

void FUN_145b05356(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar2 = 0;
  local_50 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar2 = (int)param_2[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_2;
  if ((iStack_44 != iVar2) || (local_50 != plVar1)) {
    do {
      do {
        (**(code **)(*param_1 + 0x88))(param_1,(longlong)iStack_64 * 0x10 + *local_80,param_3,0);
        local_68 = local_68 & ~local_78._4_4_;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar2);
    } while ((local_70 != plVar1) || (local_80 != param_2));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b05478 FUN_145b05478 body=93 status=ok
// SIG undefined FUN_145b05478(void)

undefined8 * FUN_145b05478(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145b054d5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145b055ea(param_1,iVar1);
      FUN_145b05526(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145b054d5 FUN_145b054d5 body=81 status=ok
// SIG undefined FUN_145b054d5(void)

void FUN_145b054d5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if ((longlong *)plVar1[-3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-3] + 0x10))();
      }
      if (plVar1[-7] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145b05526 FUN_145b05526 body=60 status=ok
// SIG undefined FUN_145b05526(void)

void FUN_145b05526(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145b05562(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 145b05562 FUN_145b05562 body=135 status=ok
// SIG undefined FUN_145b05562(void)

undefined8 * FUN_145b05562(undefined8 *param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1447715ec();
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  FUN_140dd90de(param_1 + 7,param_2 + 0x38);
  FUN_140dd90de(param_1 + 10,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 145b055ea FUN_145b055ea body=98 status=ok
// SIG undefined FUN_145b055ea(void)

void FUN_145b055ea(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,8);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145b0564c FUN_145b0564c body=1882 status=ok
// SIG undefined FUN_145b0564c(void)

void FUN_145b0564c(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ushort *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 != 0) {
    local_110 = lVar4 + 0xf8;
    iVar3 = *(int *)(lVar4 + 0x104);
    FUN_145b05dea(*(undefined8 *)(lVar4 + 0xf8),*(undefined4 *)(lVar4 + 0x100));
    *(undefined4 *)(lVar4 + 0x100) = 0;
    if ((iVar3 < 0) && (*(int *)(lVar4 + 0x104) != 0)) {
      FUN_148ed328a(local_110);
    }
    if (*(char *)(lVar4 + 0xb3) == '\x01') {
      FUN_144a5dc74(local_c8);
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1446ddda2(&local_88,"PartyLevelText",0);
      FUN_140ac6c96(&local_88,local_c8);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      lVar15 = *(longlong *)(param_1 + 0x2d0);
      *(int *)(param_1 + 0x2e0) = *(int *)(param_1 + 0x2e0) + 2;
      if ((longlong)*(int *)(param_1 + 0x2d8) != 0) {
        lVar17 = (longlong)*(int *)(param_1 + 0x2d8) * 0x80 + lVar15;
        do {
          plVar13 = (longlong *)FUN_145b05da8(local_110);
          FUN_1447325ac(lVar15,&local_88,1);
          *plVar13 = local_88;
          local_88 = 0;
          uStack_80 = 0;
          FUN_1400b2348(lVar15,&local_88,1);
          lVar8 = local_88;
          iVar3 = (int)uStack_80;
          uVar10 = (int)uStack_80 - 1;
          if ((int)uStack_80 == 0) {
            uVar10 = 0;
          }
          if (0 < (int)uVar10) {
            uVar14 = 0;
            do {
              uVar2 = *(ushort *)(local_88 + uVar14 * 2);
              *(ushort *)(local_88 + uVar14 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
              uVar14 = uVar14 + 1;
            } while (uVar10 != uVar14);
          }
          uVar9 = uStack_80._4_4_;
          local_88 = 0;
          uStack_80 = 0;
          if (plVar13[1] == 0) {
            plVar13[1] = lVar8;
            *(int *)(plVar13 + 2) = iVar3;
            *(undefined4 *)((longlong)plVar13 + 0x14) = uVar9;
          }
          else {
            FUN_1400020a8();
            plVar13[1] = lVar8;
            *(int *)(plVar13 + 2) = iVar3;
            *(undefined4 *)((longlong)plVar13 + 0x14) = uVar9;
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          local_88 = 0;
          uStack_80 = 0;
          FUN_1400b2348(lVar15,&local_88,1);
          lVar8 = local_88;
          iVar3 = (int)uStack_80;
          uVar10 = (int)uStack_80 - 1;
          if ((int)uStack_80 == 0) {
            uVar10 = 0;
          }
          if (0 < (int)uVar10) {
            uVar14 = 0;
            do {
              uVar2 = *(ushort *)(local_88 + uVar14 * 2);
              *(ushort *)(local_88 + uVar14 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
              uVar14 = uVar14 + 1;
            } while (uVar10 != uVar14);
          }
          uVar9 = uStack_80._4_4_;
          local_88 = 0;
          uStack_80 = 0;
          if (plVar13[3] == 0) {
            plVar13[3] = lVar8;
            *(int *)(plVar13 + 4) = iVar3;
            *(undefined4 *)((longlong)plVar13 + 0x24) = uVar9;
          }
          else {
            FUN_1400020a8();
            plVar13[3] = lVar8;
            *(int *)(plVar13 + 4) = iVar3;
            *(undefined4 *)((longlong)plVar13 + 0x24) = uVar9;
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          plVar13[5] = *(longlong *)(lVar15 + 0x70);
          plVar16 = *(longlong **)(lVar15 + 0x38);
          plVar11 = (longlong *)plVar13[6];
          if (plVar11 != plVar16) {
            plVar13[6] = (longlong)plVar16;
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 8))();
            }
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          *(undefined4 *)(plVar13 + 7) = *(undefined4 *)(lVar15 + 0x40);
          plVar16 = *(longlong **)(lVar15 + 0x50);
          plVar11 = (longlong *)plVar13[8];
          if (plVar11 != plVar16) {
            plVar13[8] = (longlong)plVar16;
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 8))();
            }
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          *(undefined4 *)(plVar13 + 9) = *(undefined4 *)(lVar15 + 0x58);
          local_f8 = 0;
          plStack_f0 = (longlong *)0x0;
          FUN_1413a454c(local_e8,*(undefined4 *)(lVar15 + 0x30),0,&local_f8);
          FUN_14023409e(&local_108,local_c8,1);
          local_88 = CONCAT44(local_88._4_4_,4);
          FUN_14023423e(&local_78,local_e8);
          local_a0 = &uStack_68;
          local_a8 = &local_88;
          FUN_14010d304(&local_98,&local_a8);
          local_b8 = local_108;
          local_b0 = local_100;
          if (local_100 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_100 + 1) = (int)local_100[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_d8,&local_b8,&local_98);
          FUN_14007f2db(local_98,local_90);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
          }
          plVar16 = local_100;
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_100 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          if (local_e8[0] != (longlong *)0x0) {
            (**(code **)(*local_e8[0] + 0x10))();
          }
          FUN_140008f88(plVar13 + 0xc,local_d8);
          if (local_d8[0] != (longlong *)0x0) {
            (**(code **)(*local_d8[0] + 0x10))();
          }
          plVar16 = plStack_f0;
          if (plStack_f0 != (longlong *)0x0) {
            LOCK();
            plVar11 = plStack_f0 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plStack_f0)(plStack_f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          *(bool *)(plVar13 + 0xe) = *(int *)(lVar4 + 0x100) == 1;
          *(undefined1 *)((longlong)plVar13 + 0x71) = 0;
          *(undefined1 *)((longlong)plVar13 + 0x72) = *(undefined1 *)(lVar15 + 0x68);
          lVar15 = lVar15 + 0x80;
        } while (lVar15 != lVar17);
      }
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
    }
    else {
      plVar13 = *(longlong **)(param_1 + 0x2b8);
      *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 2;
      if ((longlong)*(int *)(param_1 + 0x2c0) != 0) {
        plVar16 = plVar13 + (longlong)*(int *)(param_1 + 0x2c0) * 0x12;
        do {
          plVar11 = (longlong *)FUN_145b05da8(local_110);
          *plVar11 = *plVar13;
          FUN_1400021e4(plVar13,&local_88);
          lVar15 = local_88;
          iVar3 = (int)uStack_80;
          uVar10 = (int)uStack_80 - 1;
          if ((int)uStack_80 == 0) {
            uVar10 = 0;
          }
          if (0 < (int)uVar10) {
            uVar14 = 0;
            do {
              uVar2 = *(ushort *)(local_88 + uVar14 * 2);
              *(ushort *)(local_88 + uVar14 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
              uVar14 = uVar14 + 1;
            } while (uVar10 != uVar14);
          }
          uVar9 = uStack_80._4_4_;
          local_88 = 0;
          uStack_80 = 0;
          if (plVar11[1] == 0) {
            plVar11[1] = lVar15;
            *(int *)(plVar11 + 2) = iVar3;
            *(undefined4 *)((longlong)plVar11 + 0x14) = uVar9;
          }
          else {
            FUN_1400020a8();
            plVar11[1] = lVar15;
            *(int *)(plVar11 + 2) = iVar3;
            *(undefined4 *)((longlong)plVar11 + 0x14) = uVar9;
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          plVar5 = (longlong *)plVar13[8];
          plVar6 = (longlong *)plVar11[6];
          if (plVar6 != plVar5) {
            plVar11[6] = (longlong)plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))();
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          *(int *)(plVar11 + 7) = (int)plVar13[9];
          plVar5 = (longlong *)plVar13[0xb];
          plVar6 = (longlong *)plVar11[8];
          if (plVar6 != plVar5) {
            plVar11[8] = (longlong)plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))();
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          *(int *)(plVar11 + 9) = (int)plVar13[0xc];
          plVar5 = (longlong *)plVar13[0xe];
          plVar6 = (longlong *)plVar11[10];
          if (plVar6 != plVar5) {
            plVar11[10] = (longlong)plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))();
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          *(int *)(plVar11 + 0xb) = (int)plVar13[0xf];
          plVar12 = (longlong *)FUN_140e82300();
          plVar5 = (longlong *)*plVar12;
          plVar6 = (longlong *)plVar11[0xc];
          if (plVar6 != plVar5) {
            plVar11[0xc] = (longlong)plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))();
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          *(int *)(plVar11 + 0xd) = (int)plVar12[1];
          *(bool *)(plVar11 + 0xe) = *plVar13 == DAT_14cbe0200;
          *(undefined2 *)((longlong)plVar11 + 0x71) = 1;
          plVar13 = plVar13 + 0x12;
        } while (plVar13 != plVar16);
      }
    }
    puVar7 = *(ushort **)(lVar4 + 0x80);
    if (puVar7 != (ushort *)0x0) {
      *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b05da8 FUN_145b05da8 body=61 status=ok
// SIG undefined FUN_145b05da8(void)

longlong FUN_145b05da8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145b05f46(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x78 + *param_1;
  thunk_FUN_145b05e7e(lVar2);
  return lVar2;
}



// FUNCTION 145b05de5 thunk_FUN_145b05e7e body=5 status=ok
// SIG undefined thunk_FUN_145b05e7e(void)

undefined8 * thunk_FUN_145b05e7e(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FUN_140056680(param_1 + 1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 3,&DAT_149dfb77a);
  param_1[5] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[6] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 7) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[8] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 9) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[10] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0xb) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0xc] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0xd) = (int)plVar2[1];
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  return param_1;
}



// FUNCTION 145b05dea FUN_145b05dea body=38 status=ok
// SIG undefined FUN_145b05dea(void)

void FUN_145b05dea(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145b05e10(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 145b05e10 FUN_145b05e10 body=109 status=ok
// SIG undefined FUN_145b05e10(void)

void FUN_145b05e10(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145b05e7e FUN_145b05e7e body=199 status=ok
// SIG undefined FUN_145b05e7e(void)

undefined8 * FUN_145b05e7e(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FUN_140056680(param_1 + 1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 3,&DAT_149dfb77a);
  param_1[5] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[6] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 7) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[8] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 9) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[10] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0xb) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0xc] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0xd) = (int)plVar2[1];
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  return param_1;
}



// FUNCTION 145b05f46 FUN_145b05f46 body=143 status=ok
// SIG undefined FUN_145b05f46(void)

void FUN_145b05f46(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145b05fd6 FUN_145b05fd6 body=74 status=ok
// SIG undefined FUN_145b05fd6(void)

void FUN_145b05fd6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = &local_18;
  local_18 = param_2;
  FUN_145b06022(param_1 + 0xa8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b06022 FUN_145b06022 body=222 status=ok
// SIG undefined FUN_145b06022(void)

void FUN_145b06022(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 145b06100 FUN_145b06100 body=236 status=ok
// SIG undefined FUN_145b06100(void)

longlong * FUN_145b06100(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a515e6(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  uVar2 = **(undefined8 **)param_1[2];
  FUN_1414be5e0(plVar1,param_3);
  local_58 = DAT_14c96b23a;
  local_57 = 1;
  local_50 = 0;
  uStack_48 = 0;
  (**(code **)(*plVar1 + 0x1c0))(plVar1);
  FUN_14485c47a(plVar1 + 0x60,uVar2);
  plVar1 = (longlong *)*param_1;
  bVar5 = *(byte *)(plVar1 + 6);
  if ((bVar5 & 0x10) == 0) {
    cVar3 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar4 = cVar3 << 5;
    bVar5 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar4 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar5 & 0xdf | bVar4;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b061ee FUN_145b061ee body=338 status=ok
// SIG undefined FUN_145b061ee(void)

undefined4 *
FUN_145b061ee(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d08188(param_1,local_50);
  iVar6 = 0;
  FUN_145b06342(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  local_54 = local_50[0];
  if (*(int *)(local_48 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*local_48;
    iVar6 = *(int *)(local_48 + 1) + -1;
  }
  uVar2 = FUN_144a49b4a(iVar6,puVar5);
  local_68 = param_4;
  cVar1 = FUN_140d08036(param_1,uVar2,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0x24) = uVar2;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140d0836e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145b06342 FUN_145b06342 body=103 status=ok
// SIG undefined FUN_145b06342(void)

undefined8 *
FUN_145b06342(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_145b063aa(param_1 + 2,0,param_4);
  return param_1;
}



// FUNCTION 145b063aa FUN_145b063aa body=78 status=ok
// SIG undefined FUN_145b063aa(void)

undefined8 * FUN_145b063aa(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_1,iVar1,0);
    FUN_140b8566a(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145b063f8 FUN_145b063f8 body=102 status=ok
// SIG undefined FUN_145b063f8(void)

ulonglong FUN_145b063f8(longlong param_1)

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
LAB_145b06441:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145b06441;
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



// FUNCTION 145b0645e FUN_145b0645e body=28 status=ok
// SIG undefined FUN_145b0645e(void)

void FUN_145b0645e(undefined8 param_1)

{
  FUN_145ff9aea();
  FUN_140163244(param_1,0x80);
  return;
}



// FUNCTION 145b06482 FUN_145b06482 body=122 status=ok
// SIG undefined FUN_145b06482(void)

void FUN_145b06482(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b064fc FUN_145b064fc body=40 status=ok
// SIG undefined FUN_145b064fc(void)

undefined8 FUN_145b064fc(undefined8 param_1,int param_2)

{
  FUN_145b06524();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b06524 FUN_145b06524 body=272 status=ok
// SIG undefined FUN_145b06524(void)

void FUN_145b06524(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9b6460;
  param_1[6] = &PTR_FUN_14a9b6740;
  if (*(char *)((longlong)param_1 + 0x1c9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c9) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_145b06634(param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_145b0666a(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1414be89a(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1414be89a(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1414be826(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b06634 FUN_145b06634 body=53 status=ok
// SIG undefined FUN_145b06634(void)

void FUN_145b06634(longlong *param_1)

{
  FUN_145b066a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b0666a FUN_145b0666a body=53 status=ok
// SIG undefined FUN_145b0666a(void)

void FUN_145b0666a(longlong *param_1)

{
  FUN_1414bea7c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b066a0 FUN_145b066a0 body=319 status=ok
// SIG undefined FUN_145b066a0(void)

void FUN_145b066a0(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x20 + (longlong)iStack_4c * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b067e8 FUN_145b067e8 body=46 status=ok
// SIG undefined FUN_145b067e8(void)

void FUN_145b067e8(longlong param_1)

{
  FUN_1414bf41f(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145b06820 FUN_145b06820 body=84 status=ok
// SIG undefined FUN_145b06820(void)

void FUN_145b06820(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145b06874 FUN_145b06874 body=61 status=ok
// SIG undefined FUN_145b06874(void)

void FUN_145b06874(void)

{
  FUN_145b068b2(&DAT_14caa81e8);
  if (DAT_14caa8208 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caa81e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b068b2 FUN_145b068b2 body=88 status=ok
// SIG undefined FUN_145b068b2(void)

void FUN_145b068b2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 145b0690a FUN_145b0690a body=40 status=ok
// SIG undefined FUN_145b0690a(void)

undefined8 FUN_145b0690a(undefined8 param_1,int param_2)

{
  FUN_145b06932();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b06932 FUN_145b06932 body=59 status=ok
// SIG undefined FUN_145b06932(void)

void FUN_145b06932(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af1c9d0;
  FUN_145b0696d(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b0696d FUN_145b0696d body=50 status=ok
// SIG undefined FUN_145b0696d(void)

void FUN_145b0696d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145b069a0 FUN_145b069a0 body=40 status=ok
// SIG undefined FUN_145b069a0(void)

undefined8 FUN_145b069a0(undefined8 param_1,int param_2)

{
  FUN_145b069c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b069c8 FUN_145b069c8 body=72 status=ok
// SIG undefined FUN_145b069c8(void)

void FUN_145b069c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b370400;
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_145b06a10(param_1 + 0x68);
  FUN_1406d02ae(param_1);
  return;
}



// FUNCTION 145b06a10 FUN_145b06a10 body=55 status=ok
// SIG undefined FUN_145b06a10(void)

void FUN_145b06a10(longlong *param_1)

{
  FUN_145b06a48(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b06a48 FUN_145b06a48 body=353 status=ok
// SIG undefined FUN_145b06a48(void)

void FUN_145b06a48(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_145b06bac((longlong)iStack_54 * 0x40 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b06bac FUN_145b06bac body=74 status=ok
// SIG undefined FUN_145b06bac(void)

void FUN_145b06bac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b06bfe FUN_145b06bfe body=141 status=ok
// SIG undefined FUN_145b06bfe(void)

undefined8 * FUN_145b06bfe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1412fe974(param_1,uVar1);
  *param_1 = &PTR_FUN_14b3d90d0;
  param_1[0x20] = 0;
  param_1[0x10] = DAT_14cb8d6d0;
  *(undefined1 *)((longlong)param_1 + 0xe9) = 1;
  *param_1 = &PTR_FUN_14b3d93b0;
  FUN_1447715ec(param_1 + 5,&DAT_14cb8d630);
  FUN_1447715ec(param_1 + 10,&DAT_14cb8d658);
  param_1[0x20] = DAT_14cb8dce8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41a80000;
  return param_1;
}



// FUNCTION 145b06c94 FUN_145b06c94 body=141 status=ok
// SIG undefined FUN_145b06c94(void)

undefined8 * FUN_145b06c94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1412fe974(param_1,uVar1);
  *param_1 = &PTR_FUN_14b3d90d0;
  param_1[0x20] = 0;
  param_1[0x10] = DAT_14cb8d6d0;
  *(undefined1 *)((longlong)param_1 + 0xe9) = 1;
  *param_1 = &PTR_FUN_14b3d9690;
  FUN_1447715ec(param_1 + 5,&DAT_14cb8d680);
  FUN_1447715ec(param_1 + 10,&DAT_14cb8d6a8);
  param_1[0x20] = DAT_14cb8dcf0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41a8cccd;
  return param_1;
}



// FUNCTION 145b06d22 FUN_145b06d22 body=38 status=ok
// SIG undefined FUN_145b06d22(void)

undefined8 FUN_145b06d22(undefined8 param_1,int param_2)

{
  FUN_145b06d48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b06d48 FUN_145b06d48 body=68 status=ok
// SIG undefined FUN_145b06d48(void)

void FUN_145b06d48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8977c0;
  FUN_145b06d8c(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145b06d8c FUN_145b06d8c body=43 status=ok
// SIG undefined FUN_145b06d8c(void)

void FUN_145b06d8c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c6fe72(param_1);
    param_1 = param_1 + 0x208;
  }
  return;
}



// FUNCTION 145b06db8 FUN_145b06db8 body=38 status=ok
// SIG undefined FUN_145b06db8(void)

undefined8 FUN_145b06db8(undefined8 param_1,int param_2)

{
  FUN_145b06dde();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b06dde FUN_145b06dde body=68 status=ok
// SIG undefined FUN_145b06dde(void)

void FUN_145b06dde(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a23e0;
  FUN_145b06e22(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145b06e22 FUN_145b06e22 body=43 status=ok
// SIG undefined FUN_145b06e22(void)

void FUN_145b06e22(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c7719a(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 145b06e64 FUN_145b06e64 body=59 status=ok
// SIG undefined FUN_145b06e64(void)

longlong FUN_145b06e64(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145b06eb6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_145b06e9f(lVar2);
  return lVar2;
}



// FUNCTION 145b06e9f FUN_145b06e9f body=22 status=ok
// SIG undefined FUN_145b06e9f(void)

void FUN_145b06e9f(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xf00000d0;
  param_1[3] = 0;
  return;
}



// FUNCTION 145b06eb6 FUN_145b06eb6 body=132 status=ok
// SIG undefined FUN_145b06eb6(void)

void FUN_145b06eb6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145b06f3a FUN_145b06f3a body=40 status=ok
// SIG undefined FUN_145b06f3a(void)

undefined8 FUN_145b06f3a(undefined8 param_1,int param_2)

{
  FUN_145b06f62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b06f62 FUN_145b06f62 body=165 status=ok
// SIG undefined FUN_145b06f62(void)

void FUN_145b06f62(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b7eb490;
  param_1[5] = &PTR_FUN_14b7eb930;
  param_1[6] = &PTR_LAB_14b7eb970;
  if (*(char *)((longlong)param_1 + 0x24c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24c) = 0;
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1 + 0x24);
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



// FUNCTION 145b07008 FUN_145b07008 body=9 status=ok
// SIG undefined FUN_145b07008(void)

void FUN_145b07008(longlong param_1)

{
  FUN_145b07012(param_1 + 0x10);
  return;
}



// FUNCTION 145b07012 FUN_145b07012 body=513 status=ok
// SIG undefined FUN_145b07012(void)

void FUN_145b07012(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb890;
  FUN_140e9e952(param_1 + 0x10a);
  param_1[0xf4] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x108];
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
  param_1[0xde] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xf2];
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
  param_1[200] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xdc];
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
  param_1[0xb2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xc6];
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
  param_1[0x9c] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xb0];
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
  param_1[0x86] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x9a];
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
  param_1[0x70] = &PTR_FUN_149ed05f0;
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
  FUN_140ffd6b6(param_1 + 2);
  return;
}



// FUNCTION 145b07214 FUN_145b07214 body=9 status=ok
// SIG undefined FUN_145b07214(void)

void FUN_145b07214(longlong param_1)

{
  FUN_1414bf8ec(param_1 + 0x10);
  return;
}



// FUNCTION 145b0721e FUN_145b0721e body=9 status=ok
// SIG undefined FUN_145b0721e(void)

void FUN_145b0721e(longlong param_1)

{
  FUN_145b07228(param_1 + 0x10);
  return;
}



// FUNCTION 145b07228 FUN_145b07228 body=103 status=ok
// SIG undefined FUN_145b07228(void)

void FUN_145b07228(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4f5ab0;
  FUN_1449db362(param_1 + 7);
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145b0728b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145b07290 FUN_145b07290 body=108 status=ok
// SIG undefined FUN_145b07290(void)

void FUN_145b07290(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = *param_2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    if (param_1[2] == 0) {
      param_1[1] = (longlong)puVar1;
    }
    else {
      *(undefined8 **)(param_1[2] + 8) = puVar1;
      puVar1[2] = param_1[2];
    }
    param_1[2] = (longlong)puVar1;
                    /* WARNING: Could not recover jumptable at 0x000145b072e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
    return;
  }
  return;
}



// FUNCTION 145b072fc FUN_145b072fc body=4 status=ok
// SIG undefined FUN_145b072fc(void)

void FUN_145b072fc(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 145b07300 FUN_145b07300 body=64 status=ok
// SIG undefined FUN_145b07300(void)

void FUN_145b07300(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_145b07340(*param_2,param_1);
  return;
}



// FUNCTION 145b07340 FUN_145b07340 body=160 status=ok
// SIG undefined FUN_145b07340(void)

undefined8 * FUN_145b07340(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_LAB_14b528ec0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14b528e50;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar3;
  return param_1;
}



// FUNCTION 145b073e8 FUN_145b073e8 body=150 status=ok
// SIG undefined FUN_145b073e8(void)

undefined8 * FUN_145b073e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a175400;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = DAT_14c9a2028;
  FUN_140608954(param_1 + 4,&DAT_14c9a2028);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 9) = 1;
  FUN_145b0747e(param_1 + 8);
  puVar1 = (undefined8 *)param_1[8];
  *puVar1 = param_1[3];
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1403de7ba(puVar1 + 1,param_1 + 4);
  return param_1;
}



// FUNCTION 145b0747e FUN_145b0747e body=141 status=ok
// SIG undefined FUN_145b0747e(void)

void FUN_145b0747e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 * 0x28,8);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 / 0x28)) {
      uVar3 = uVar2 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 145b0750c FUN_145b0750c body=40 status=ok
// SIG undefined FUN_145b0750c(void)

undefined8 FUN_145b0750c(undefined8 param_1,int param_2)

{
  FUN_145b07534();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b07534 FUN_145b07534 body=181 status=ok
// SIG undefined FUN_145b07534(void)

void FUN_145b07534(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a3e2b80;
  if (param_1[9] != 0) {
    lVar2 = *(longlong *)(param_1[9] + 0x58);
    if ((DAT_14c950c29 & lVar2 != 0) == 0) {
      if (lVar2 == 0) goto LAB_145b07550;
    }
    else {
      FUN_1456cec3c(lVar2);
      if (param_1[9] == 0) goto LAB_145b07550;
      lVar2 = *(longlong *)(param_1[9] + 0x58);
    }
    if (((DAT_14c950c29 & 1) == 0) || (lVar2 == 0)) {
      if (lVar2 == 0) goto LAB_145b07550;
    }
    else {
      FUN_1456cec3c(lVar2);
    }
    uVar1 = FUN_145a65598();
    lVar2 = FUN_144718840(lVar2,uVar1);
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2 + 8,param_1);
    }
  }
LAB_145b07550:
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145b075ea(param_1);
  return;
}



// FUNCTION 145b075ea FUN_145b075ea body=153 status=ok
// SIG undefined FUN_145b075ea(void)

void FUN_145b075ea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a3e3580;
  plVar3 = (longlong *)param_1[0xd];
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
  plVar3 = (longlong *)param_1[10];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b07684 FUN_145b07684 body=40 status=ok
// SIG undefined FUN_145b07684(void)

undefined8 FUN_145b07684(undefined8 param_1,int param_2)

{
  FUN_145b076ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b076ac FUN_145b076ac body=191 status=ok
// SIG undefined FUN_145b076ac(void)

void FUN_145b076ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7d54d0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145b0776c(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145b0776c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b0776c FUN_145b0776c body=53 status=ok
// SIG undefined FUN_145b0776c(void)

void FUN_145b0776c(longlong *param_1)

{
  FUN_145b077a2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b077a2 FUN_145b077a2 body=90 status=ok
// SIG undefined FUN_145b077a2(void)

void FUN_145b077a2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14074f60a(param_1,0);
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



// FUNCTION 145b07804 FUN_145b07804 body=42 status=ok
// SIG undefined FUN_145b07804(void)

void FUN_145b07804(undefined8 param_1)

{
  FUN_14110d204();
  FUN_145b0782e(param_1);
  FUN_144a126be(param_1);
  FUN_145b07a20(param_1);
  return;
}



// FUNCTION 145b0782e FUN_145b0782e body=211 status=ok
// SIG undefined FUN_145b0782e(void)

void FUN_145b0782e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_144a126be();
  lVar6 = FUN_1411db1ae(uVar5);
  if (lVar6 != 0) {
    if ((*(longlong *)(param_1 + 0x188) != 0) &&
       (iVar1 = *(int *)(lVar6 + 0x28), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(lVar6 + 0x20);
      lVar7 = 0;
      do {
        if ((*(int *)(lVar2 + 8 + lVar7) != 0) &&
           (plVar3 = *(longlong **)(lVar2 + lVar7), plVar3 != (longlong *)0x0)) {
          cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
          if (cVar4 != '\0') goto LAB_145b0789c;
        }
        lVar7 = lVar7 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar7);
    }
    local_48 = FUN_140e428c4;
    local_40 = 0;
    FUN_145b07920(lVar6 + 0x20,&local_38,param_1);
    *(undefined8 *)(param_1 + 0x188) = local_38;
  }
LAB_145b0789c:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b07902 FUN_145b07902 body=29 status=ok
// SIG undefined FUN_145b07902(void)

bool FUN_145b07902(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 145b07920 FUN_145b07920 body=254 status=ok
// SIG undefined FUN_145b07920(void)

undefined8
FUN_145b07920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b403ee0;
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
  *local_48 = &PTR_FUN_14b406d80;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145afc42c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b07a20 FUN_145b07a20 body=488 status=ok
// SIG undefined FUN_145b07a20(void)

void FUN_145b07a20(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x1d0);
  *puVar2 = FUN_145a2890f;
  memset(puVar2 + 1,0,0x1c0);
  FUN_145b07c4c(puVar2 + 2);
  lVar1 = *(longlong *)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = puVar2 + 2;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x270);
  *puVar2 = FUN_145a288f1;
  memset(puVar2 + 1,0,0x260);
  *(undefined4 *)((longlong)puVar2 + 0x22c) = 0x40;
  puVar2[0x4d] = 0;
  puVar2[0x46] = 0;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  puVar2[0x49] = 0;
  puVar2[0x4a] = 0;
  puVar2[0x4b] = 0;
  *(undefined1 *)(puVar2 + 0x4c) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  *(undefined8 **)(param_1 + 0x48) = puVar2 + 2;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0xe0);
  *puVar2 = FUN_145a288d3;
  memset(puVar2 + 1,0,0xd0);
  *(undefined8 *)((longlong)puVar2 + 0x4c) = 0xffffffff00000080;
  puVar2[0x14] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)(puVar2 + 0x1a) = 0;
  puVar2[0x1b] = 0;
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x50) = puVar2 + 2;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  FUN_145b07c08(*(undefined8 *)(param_1 + 0x48),param_1);
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar3 = FUN_144a126be(param_1);
  FUN_14485c47a(lVar1 + 0x1a8,uVar3);
  *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(lVar1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1e0);
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  puVar2[1] = *(undefined8 *)(param_1 + 0x40);
  *puVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar2[0x19] = *(undefined8 *)(param_1 + 0x1e0);
  return;
}



// FUNCTION 145b07c08 FUN_145b07c08 body=67 status=ok
// SIG undefined FUN_145b07c08(void)

void FUN_145b07c08(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a126be(param_2);
  FUN_14485c47a(param_1 + 0x248,uVar1);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 0x1e0);
  return;
}



// FUNCTION 145b07c4c FUN_145b07c4c body=235 status=ok
// SIG undefined FUN_145b07c4c(void)

void FUN_145b07c4c(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd5) = 0;
  param_1[0x1a] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  return;
}



// FUNCTION 145b07d38 FUN_145b07d38 body=254 status=ok
// SIG undefined FUN_145b07d38(void)

void FUN_145b07d38(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a63f30();
  FUN_1414c0540(param_1 + 0x60);
  FUN_1414c0540(param_1 + 0x70);
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    uVar1 = FUN_145a290b8();
    FUN_1446f470e(&local_30,L"shift",1);
    FUN_145a290ec(uVar1,local_30,param_1);
    if (DAT_14cb97a40 == 0) {
      FUN_1402160b8(&local_38);
      local_40 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = 0;
      FUN_14021300e(&local_28,0x7b2,1,1);
      DAT_14cb97a40 = (local_38 - local_28) / 10000000;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b07e38 FUN_145b07e38 body=541 status=ok
// SIG undefined FUN_145b07e38(void)

undefined8 FUN_145b07e38(int *param_1,int param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_108 [32];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  int local_d8;
  int local_d4;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar3 = param_1[1];
  iVar6 = 1;
  if (1 < iVar3) {
    iVar6 = iVar3;
  }
  iVar7 = *param_1;
  fVar12 = (float)iVar7 / (float)iVar6;
  iVar6 = iVar3;
  if (iVar3 < iVar7) {
    iVar6 = iVar7;
  }
  if (iVar7 < iVar3) {
    fVar12 = 1.0 / fVar12;
    iVar3 = iVar7;
  }
  if (param_2 < 1) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    (**(code **)(*DAT_14c98e618 + 0x1c8))();
    iVar7 = local_d4;
    iVar10 = local_d8;
    if (param_3 != '\0') {
      lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
      plVar5 = *(longlong **)(lVar4 + 0x118);
      if (plVar5 == (longlong *)0x0) {
LAB_145b08018:
        FUN_145b08056(0,&local_e8);
      }
      else {
        iVar7 = (int)plVar5[1];
        do {
          if (iVar7 == 0) goto LAB_145b08018;
          LOCK();
          iVar10 = (int)plVar5[1];
          bVar11 = iVar7 == iVar10;
          if (bVar11) {
            *(int *)(plVar5 + 1) = iVar7 + 1;
            iVar10 = iVar7;
          }
          iVar7 = iVar10;
          UNLOCK();
        } while (!bVar11);
        FUN_145b08056(*(undefined8 *)(lVar4 + 0x110),&local_e8);
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
      iVar7 = (int)(local_dc - local_e4);
      iVar10 = (int)(local_e0 - local_e8);
    }
    fVar13 = fVar12;
    if (0 < (int)uStack_c8) {
      iVar8 = 1;
      if (1 < iVar7) {
        iVar8 = iVar7;
      }
      fVar13 = (float)iVar10 / (float)iVar8;
    }
    FUN_140ecb711(local_d0);
    if (((0.0001 < ABS(fVar13 - fVar12)) || (iVar10 < iVar6)) || (iVar7 < iVar3)) {
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      uVar9 = 0;
      goto LAB_145b07fba;
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((1 < param_2) || ((uVar9 = 0, 0x4ff < iVar6 && (0x2cf < iVar3)))) {
    uVar9 = 1;
  }
LAB_145b07fba:
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b08056 FUN_145b08056 body=168 status=ok
// SIG undefined FUN_145b08056(void)

float * FUN_145b08056(longlong param_1,float *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x510);
  if (plVar1 != (longlong *)0x0) {
    local_28 = &local_20;
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_14,&local_18,&local_1c);
    if (cVar2 != '\0') {
      *param_2 = (float)local_14;
      param_2[1] = (float)local_18;
      param_2[2] = (float)(local_1c + local_14);
      param_2[3] = (float)(local_20 + local_18);
      goto LAB_145b080d3;
    }
  }
  *param_2 = -1.0;
  param_2[1] = -1.0;
  param_2[2] = -1.0;
  param_2[3] = -1.0;
LAB_145b080d3:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b08100 FUN_145b08100 body=282 status=ok
// SIG undefined FUN_145b08100(void)

void FUN_145b08100(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  longlong local_58;
  longlong local_50;
  undefined1 *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_39;
  lVar6 = param_2 + 8;
  if (*(longlong *)(param_2 + 0x128) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x128);
  }
  lVar6 = lVar6 + (longlong)(*(int *)(param_2 + 0x130) + -1) * 0x48;
  puVar8 = (undefined8 *)(lVar6 + 0x38);
  iVar2 = *(int *)(param_1 + 0x318);
  local_60 = puVar8;
  local_58 = param_1;
  local_50 = param_2;
  local_39 = param_3;
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x310);
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x20) != 0)) {
        FUN_1414c0580(&local_60);
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar9);
  }
  *(undefined8 *)(param_1 + 0x330) = *puVar8;
  plVar5 = *(longlong **)(lVar6 + 0x40);
  plVar7 = *(longlong **)(param_1 + 0x338);
  if (plVar7 != plVar5) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x338);
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
    *(longlong **)(param_1 + 0x338) = plVar5;
  }
  *(undefined1 *)(param_1 + 0x340) = local_39;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b0821c FUN_145b0821c body=38 status=ok
// SIG undefined FUN_145b0821c(void)

undefined8 FUN_145b0821c(undefined8 param_1,int param_2)

{
  FUN_145b08242();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b08242 FUN_145b08242 body=150 status=ok
// SIG undefined FUN_145b08242(void)

void FUN_145b08242(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae9e120;
  plVar3 = (longlong *)param_1[0x1b];
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
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145b082e2(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145b08318(param_1 + 6);
  FUN_145806982(param_1);
  return;
}



// FUNCTION 145b082e2 FUN_145b082e2 body=53 status=ok
// SIG undefined FUN_145b082e2(void)

void FUN_145b082e2(longlong *param_1)

{
  FUN_145b083ee();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b08318 FUN_145b08318 body=53 status=ok
// SIG undefined FUN_145b08318(void)

void FUN_145b08318(longlong *param_1)

{
  FUN_1407020d8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b0834e FUN_145b0834e body=160 status=ok
// SIG undefined FUN_145b0834e(void)

void FUN_145b0834e(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 145b083ee FUN_145b083ee body=323 status=ok
// SIG undefined FUN_145b083ee(void)

void FUN_145b083ee(longlong *param_1)

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
      if (*(char *)(*local_68 + 0x30 + (longlong)iStack_4c * 0x40) == '\x01') {
        *(undefined1 *)((longlong)iStack_4c * 0x40 + *local_68 + 0x30) = 0;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b08532 FUN_145b08532 body=21 status=ok
// SIG undefined FUN_145b08532(void)

undefined8 FUN_145b08532(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145b08548 FUN_145b08548 body=54 status=ok
// SIG undefined FUN_145b08548(void)

undefined1 FUN_145b08548(longlong param_1)

{
  undefined1 uVar1;
  
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = 1;
  UNLOCK();
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return uVar1;
}



// FUNCTION 145b0857e FUN_145b0857e body=40 status=ok
// SIG undefined FUN_145b0857e(void)

undefined8 FUN_145b0857e(undefined8 param_1,int param_2)

{
  FUN_145b085a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b085a6 FUN_145b085a6 body=179 status=ok
// SIG undefined FUN_145b085a6(void)

void FUN_145b085a6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a3edb60;
  param_1[0x72] = &PTR_FUN_14a3ee1a0;
  param_1[0x9b] = &PTR_FUN_14a3ef280;
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  FUN_145b0865a(param_1 + 0x9b);
  plVar3 = (longlong *)param_1[0x9a];
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
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x8f);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145b0865a FUN_145b0865a body=81 status=ok
// SIG undefined FUN_145b0865a(void)

void FUN_145b0865a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3e7f20;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 5);
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b086b6 FUN_145b086b6 body=64 status=ok
// SIG undefined FUN_145b086b6(void)

undefined8 * FUN_145b086b6(undefined8 *param_1)

{
  FUN_1406078d6();
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x11;
  *param_1 = &PTR_FUN_14a4ab850;
  *(undefined1 *)(param_1 + 0xd) = 0x1f;
  return param_1;
}



// FUNCTION 145b086f6 FUN_145b086f6 body=9 status=ok
// SIG undefined FUN_145b086f6(void)

void FUN_145b086f6(longlong param_1)

{
  FUN_1414c05ca(param_1 + 0x10);
  return;
}



// FUNCTION 145b08700 FUN_145b08700 body=70 status=ok
// SIG undefined FUN_145b08700(void)

undefined8 * FUN_145b08700(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa37350;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b08746 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 145b0874c FUN_145b0874c body=9 status=ok
// SIG undefined FUN_145b0874c(void)

void FUN_145b0874c(longlong param_1)

{
  FUN_1414c060c(param_1 + 0x10);
  return;
}



// FUNCTION 145b08755 FUN_145b08755 body=46 status=ok
// SIG undefined FUN_145b08755(void)

void FUN_145b08755(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ea038(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aaa1450;
  FUN_145b08784(puVar1 + 9);
  return;
}



// FUNCTION 145b08784 FUN_145b08784 body=54 status=ok
// SIG undefined FUN_145b08784(void)

undefined8 * FUN_145b08784(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  FUN_145b087ba(param_1 + 2);
  *(undefined8 *)param_1[2] = 0;
  return param_1;
}



// FUNCTION 145b087ba FUN_145b087ba body=125 status=ok
// SIG undefined FUN_145b087ba(void)

void FUN_145b087ba(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 << 3,8);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 3)) {
      uVar3 = uVar2 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 145b08838 FUN_145b08838 body=40 status=ok
// SIG undefined FUN_145b08838(void)

undefined8 FUN_145b08838(undefined8 param_1,int param_2)

{
  FUN_1414c064e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b08860 FUN_145b08860 body=40 status=ok
// SIG undefined FUN_145b08860(void)

undefined8 FUN_145b08860(undefined8 param_1,int param_2)

{
  FUN_145b08888();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b08888 FUN_145b08888 body=110 status=ok
// SIG undefined FUN_145b08888(void)

void FUN_145b08888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3918f0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd50c4(param_1 + 0x75);
  FUN_140bd5056(param_1[0x73],*(undefined4 *)(param_1 + 0x74));
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 145b08904 FUN_145b08904 body=61 status=ok
// SIG undefined FUN_145b08904(void)

undefined8 * FUN_145b08904(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9573b0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b0894c FUN_145b0894c body=66 status=ok
// SIG undefined FUN_145b0894c(void)

void FUN_145b0894c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b9a0500;
  lVar1 = FUN_145afdfc4();
  if ((lVar1 != 0) && (param_1[0xd] != 0)) {
    FUN_14480f766(lVar1 + 0x6868);
  }
  FUN_1459008ee(param_1);
  return;
}



// FUNCTION 145b0899a FUN_145b0899a body=64 status=ok
// SIG undefined FUN_145b0899a(void)

undefined8 * FUN_145b0899a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_141435472(puVar1);
  *puVar1 = &PTR_FUN_14ba34840;
  return puVar1;
}



// FUNCTION 145b089da FUN_145b089da body=112 status=ok
// SIG undefined FUN_145b089da(void)

void FUN_145b089da(longlong param_1,uint param_2)

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
  if ((iVar3 <= *(int *)(param_1 + 0x48) || (int)param_2 < 1) && *(int *)(param_1 + 0x48) <= iVar3)
  {
    FUN_145b08a4a(param_1);
    FUN_140d6e0d2(param_1,param_2);
    return;
  }
  FUN_140d6e0d2(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1414c06bc(param_1);
  return;
}



// FUNCTION 145b08a4a FUN_145b08a4a body=335 status=ok
// SIG undefined FUN_145b08a4a(void)

void FUN_145b08a4a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 145b08b9a FUN_145b08b9a body=47 status=ok
// SIG undefined FUN_145b08b9a(void)

undefined8 FUN_145b08b9a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x38);
  lVar2 = FUN_14040226a(uVar1,0);
  if (lVar2 != 0) {
    uVar1 = FUN_145b08bca(lVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 145b08bca FUN_145b08bca body=88 status=ok
// SIG undefined FUN_145b08bca(void)

undefined8 FUN_145b08bca(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  while( true ) {
    cVar1 = FUN_144729dda(param_1 + 0x60);
    if (cVar1 == '\0') break;
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x60);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f8))(plVar2);
    if (plVar2 == (longlong *)0x0) break;
    param_1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x158);
}



// FUNCTION 145b08c22 FUN_145b08c22 body=170 status=ok
// SIG undefined FUN_145b08c22(void)

void FUN_145b08c22(longlong *param_1)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)((longlong)param_1 + 0x3de) = 0;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(*param_1 + 0x348))(0,&local_58);
  local_58 = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
  FUN_145b08cce(param_1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b08cce FUN_145b08cce body=1 status=ok
// SIG undefined FUN_145b08cce(void)

void FUN_145b08cce(void)

{
  return;
}



// FUNCTION 145b08cd0 FUN_145b08cd0 body=169 status=ok
// SIG undefined FUN_145b08cd0(void)

void FUN_145b08cd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145b08d7a();
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80), lVar1 != 0)) {
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30 && (*(longlong *)(lVar1 + 0x1e0) != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1e0) + 0x68), lVar1 != 0)))) {
      FUN_1414c0ef2(lVar1,local_24,param_1);
      FUN_1413d927c(lVar1,local_28,local_24);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b08d7a FUN_145b08d7a body=184 status=ok
// SIG undefined FUN_145b08d7a(void)

void FUN_145b08d7a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145b08e34();
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80), lVar1 != 0)) {
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30 && (*(longlong *)(lVar1 + 0x1e0) != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1e0) + 0x68), lVar1 != 0)))) {
      FUN_1414c0ef2(lVar1,local_2c,param_1);
      local_38 = 1;
      FUN_1414c1098(lVar1,local_30,local_2c,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b08e34 FUN_145b08e34 body=9 status=ok
// SIG undefined FUN_145b08e34(void)

void FUN_145b08e34(longlong param_1)

{
  FUN_141238a10(param_1 + 0x48);
  return;
}



// FUNCTION 145b08e46 FUN_145b08e46 body=274 status=ok
// SIG undefined FUN_145b08e46(void)

undefined8 * FUN_145b08e46(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar3 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar3);
  *param_1 = &PTR_FUN_14ab8fb40;
  param_1[5] = &PTR_LAB_14ab90540;
  param_1[6] = &PTR_LAB_14ab90580;
  param_1[0x55] = &PTR_LAB_14ab905d0;
  param_1[0x56] = &PTR_LAB_14ab90650;
  param_1[0x57] = &PTR_LAB_14ab90660;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined1 *)(param_1 + 200) = 1;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0x42c8000042c80000;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  puVar2 = param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      plVar1 = param_1 + 0xc4;
      param_1[199] = &DAT_14cb1cfa0;
      param_1[0xc6] = param_1;
      lVar4 = DAT_14cb1cfa0;
      while( true ) {
        param_1[0xc4] = lVar4;
        LOCK();
        lVar5 = *(longlong *)param_1[199];
        bVar6 = lVar4 == lVar5;
        if (bVar6) {
          *(longlong *)param_1[199] = (longlong)plVar1;
          lVar5 = lVar4;
        }
        UNLOCK();
        if (bVar6) break;
        param_1[0xc4] = lVar5;
        lVar4 = *(longlong *)param_1[199];
      }
      if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
      return param_1;
    }
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) break;
    puVar2 = (undefined8 *)puVar2[4];
  }
  return param_1;
}



// FUNCTION 145b08f58 FUN_145b08f58 body=24 status=ok
// SIG undefined FUN_145b08f58(void)

void FUN_145b08f58(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145b08f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145b08f70 FUN_145b08f70 body=70 status=ok
// SIG undefined FUN_145b08f70(void)

undefined8 * FUN_145b08f70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afa9ef0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145806982(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b08fb6 FUN_145b08fb6 body=40 status=ok
// SIG undefined FUN_145b08fb6(void)

undefined8 FUN_145b08fb6(undefined8 param_1,int param_2)

{
  FUN_145b08fde();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b08fde FUN_145b08fde body=336 status=ok
// SIG undefined FUN_145b08fde(void)

void FUN_145b08fde(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd1ffa0;
  param_1[5] = &PTR_FUN_14bd20240;
  param_1[0x12] = &PTR_FUN_14bd202b0;
  FUN_144760e21(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14585c5fc(param_1);
  return;
}



// FUNCTION 145b0912e FUN_145b0912e body=38 status=ok
// SIG undefined FUN_145b0912e(void)

undefined8 FUN_145b0912e(undefined8 param_1,int param_2)

{
  FUN_145b09154();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b09154 FUN_145b09154 body=364 status=ok
// SIG undefined FUN_145b09154(void)

void FUN_145b09154(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  *param_1 = &PTR_FUN_14b52a830;
  param_1[1] = &PTR_FUN_14b52a8a0;
  puVar1 = param_1 + 8;
  plVar2 = param_1 + 9;
  puVar7 = (undefined8 *)param_1[9];
  if (puVar7 != (undefined8 *)0x0) {
    do {
      FUN_14152a900(param_1,*puVar7);
      puVar7 = (undefined8 *)puVar7[1];
    } while (puVar7 != (undefined8 *)0x0);
    lVar8 = *plVar2;
    while (lVar8 != 0) {
      lVar8 = *(longlong *)(lVar8 + 8);
      FUN_1400020a8();
      *plVar2 = lVar8;
    }
  }
  *plVar2 = 0;
  param_1[10] = 0;
  (**(code **)(param_1[8] + 8))(puVar1,0);
  plVar3 = param_1 + 0xe;
  iVar5 = *(int *)(param_1 + 0xf);
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(*plVar3 + lVar8 * 8);
      if (lVar4 != 0) {
        FUN_145b092c0(lVar4);
        FUN_1400020a8(lVar4);
        iVar5 = *(int *)(param_1 + 0xf);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_14619689a(plVar3,0);
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  ppuVar6 = &PTR_FUN_14b52aa30;
  *puVar1 = &PTR_FUN_14b52aa30;
  lVar8 = *plVar2;
  if (lVar8 != 0) {
    do {
      lVar8 = *(longlong *)(lVar8 + 8);
      FUN_1400020a8();
      *plVar2 = lVar8;
    } while (lVar8 != 0);
    ppuVar6 = (undefined **)*puVar1;
  }
  *plVar2 = 0;
  param_1[10] = 0;
  (*(code *)ppuVar6[1])(puVar1,0);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 1);
  return;
}



// FUNCTION 145b092c0 FUN_145b092c0 body=61 status=ok
// SIG undefined FUN_145b092c0(void)

void FUN_145b092c0(longlong param_1)

{
  FUN_1414c13d6(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


