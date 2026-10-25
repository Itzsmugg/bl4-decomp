// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148d8c616 FUN_148d8c616 body=93 status=ok
// SIG undefined FUN_148d8c616(void)

void FUN_148d8c616(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b981f00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b981e90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148d8c674 FUN_148d8c674 body=126 status=ok
// SIG undefined FUN_148d8c674(void)

void FUN_148d8c674(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b981f00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b981e90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d8c6e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d8c6f2 FUN_148d8c6f2 body=23 status=ok
// SIG undefined FUN_148d8c6f2(void)

undefined8 FUN_148d8c6f2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 148d8c70c FUN_148d8c70c body=31 status=ok
// SIG undefined FUN_148d8c70c(void)

undefined8 FUN_148d8c70c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d8c74a FUN_148d8c74a body=93 status=ok
// SIG undefined FUN_148d8c74a(void)

void FUN_148d8c74a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b981fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b981f70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148d8c7a8 FUN_148d8c7a8 body=93 status=ok
// SIG undefined FUN_148d8c7a8(void)

void FUN_148d8c7a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b981fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b981f70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148d8c806 FUN_148d8c806 body=126 status=ok
// SIG undefined FUN_148d8c806(void)

void FUN_148d8c806(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b981fe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b981f70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d8c875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d8c884 FUN_148d8c884 body=20 status=ok
// SIG undefined FUN_148d8c884(void)

undefined8 FUN_148d8c884(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 148d8c89a FUN_148d8c89a body=62 status=ok
// SIG undefined FUN_148d8c89a(void)

longlong FUN_148d8c89a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_145c03c5c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d8c8d8 FUN_148d8c8d8 body=162 status=ok
// SIG undefined FUN_148d8c8d8(void)

void FUN_148d8c8d8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d8c917;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d8c917;
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
LAB_148d8c917:
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
                    /* WARNING: Could not recover jumptable at 0x000148d8c976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d8c97a FUN_148d8c97a body=38 status=ok
// SIG undefined FUN_148d8c97a(void)

undefined8 FUN_148d8c97a(undefined8 param_1,int param_2)

{
  FUN_145c03c5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d8c9a0 FUN_148d8c9a0 body=162 status=ok
// SIG undefined FUN_148d8c9a0(void)

void FUN_148d8c9a0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d8c9df;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d8c9df;
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
LAB_148d8c9df:
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
                    /* WARNING: Could not recover jumptable at 0x000148d8ca3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d8ca42 FUN_148d8ca42 body=196 status=ok
// SIG undefined FUN_148d8ca42(void)

void FUN_148d8ca42(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x28);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x30) * 2;
    bVar6 = false;
    do {
      lVar3 = *plVar7;
      plVar4 = (longlong *)plVar7[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0xb0) == '\x01')) {
        cVar5 = FUN_14493b798(lVar3 + 0xf0,param_2);
        if (cVar5 != '\0') {
          FUN_140b75744(lVar3);
          bVar6 = true;
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
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
    if (bVar6) {
      FUN_140b758c4(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d8cb06 FUN_148d8cb06 body=26 status=ok
// SIG undefined FUN_148d8cb06(void)

void FUN_148d8cb06(undefined8 param_1)

{
  FUN_1405f1eac();
  FUN_148d8cb20(param_1);
  return;
}



// FUNCTION 148d8cb20 FUN_148d8cb20 body=1245 status=ok
// SIG undefined FUN_148d8cb20(void)

void FUN_148d8cb20(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined4 local_140;
  undefined1 local_134 [4];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined4 local_118;
  longlong local_f8;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined4 local_b8;
  undefined8 local_b0;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = FUN_1447210f0();
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_145838d74(lVar3);
    if (plVar4 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
      if (cVar2 != '\0') {
        uStack_e4 = 0;
        uStack_e0 = 0;
        FUN_14052b5e0(&local_e8,"Mission_Main_PrisonPrologue",0);
        lVar5 = (**(code **)(*plVar4 + 8))(plVar4,&local_e8);
        if (lVar5 != 0) {
          lVar8 = 0;
          do {
            local_130 = 0;
            FUN_14052b5e0(local_134,
                          *(undefined8 *)((longlong)&PTR_s_HallOfHorrors_14b9823b0 + lVar8),0);
            lVar6 = FUN_140f54c6c(lVar5,local_134);
            if (lVar6 != 0) {
              cVar2 = FUN_14890eb82(lVar6);
              if (cVar2 == '\x04') {
                uVar7 = FUN_148d8d098();
                local_128 = 0;
                FUN_14485c47a(&local_128,uVar7);
                cVar2 = FUN_144729dda(&local_128);
                if (cVar2 != '\0') {
                  lVar5 = FUN_14479d2ce(&local_128);
                  local_120._0_5_ = (uint5)(uint)local_120;
                  local_e8 = (uint)DAT_14cbc18c8;
                  uStack_e4 = (undefined4)((ulonglong)DAT_14cbc18c8 >> 0x20);
                  uStack_e0 = 0xffffffff;
                  FUN_141094e00(lVar5 + 0x4d8,&local_e8,0);
                  lVar5 = FUN_14479d2ce(&local_128);
                  lVar8 = (**(code **)(*(longlong *)(lVar5 + 0x398) + 0x18))(lVar5 + 0x398);
                  uVar7 = local_128;
                  local_e8 = 0;
                  uStack_e4 = 0;
                  uStack_e0 = 0;
                  FUN_1446efa72(&local_e8,0,3,0x10);
                  uStack_e0 = 3;
                  puVar1 = (undefined8 *)CONCAT44(uStack_e4,local_e8);
                  *puVar1 = &PTR_LAB_14b3f7600;
                  LOCK();
                  UNLOCK();
                  lVar6 = DAT_14c758608 + 1;
                  lVar5 = DAT_14c758608 + 1;
                  if (lVar6 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar6 = DAT_14c758608 + 2;
                    lVar5 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar5;
                  puVar1[2] = lVar6;
                  *puVar1 = &PTR_FUN_14b988e50;
                  puVar1[3] = 0;
                  FUN_14485c47a(puVar1 + 3,param_1);
                  puVar1[4] = uVar7;
                  FUN_140740a5e(lVar8 + 0x58,&local_120,&local_e8);
                  FUN_1449db362(&local_e8);
                  uVar7 = local_128;
                  local_e8 = local_e8 & 0xffffff00;
                  uStack_e4 = 0;
                  uStack_e0 = 0;
                  local_dc = 0;
                  local_d8 = 0;
                  local_d4 = 0;
                  uStack_cc = 0;
                  local_c4 = 0;
                  local_b8 = 0xc69c4000;
                  local_68 = 0;
                  local_60 = 0;
                  local_58 = 0;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  local_a0 = 0;
                  uStack_98 = 0;
                  local_90 = 0;
                  uStack_88 = 0;
                  local_80 = 0;
                  uStack_78 = 0;
                  local_70 = 0;
                  local_57 = 1;
                  local_55 = 0;
                  local_54 = 0;
                  local_120 = (undefined8 *)0x0;
                  local_118 = 0;
                  FUN_1446efa72(&local_120,0,3,0x10);
                  puVar1 = local_120;
                  local_118 = 3;
                  *local_120 = &PTR_LAB_14b3e6310;
                  LOCK();
                  UNLOCK();
                  lVar8 = DAT_14c758608 + 1;
                  lVar5 = DAT_14c758608 + 1;
                  if (lVar8 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar8 = DAT_14c758608 + 2;
                    lVar5 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar5;
                  local_120[2] = lVar8;
                  *local_120 = &PTR_FUN_14b988ec0;
                  local_120[3] = 0;
                  FUN_14485c47a(local_120 + 3,param_1);
                  puVar1[4] = param_1;
                  puVar1[5] = uVar7;
                  FUN_144a450dc((longlong)&uStack_cc + 4,&local_120);
                  FUN_1449db362(&local_120);
                  FUN_146626474(&local_120);
                  lVar3 = FUN_140149a73(lVar3,0);
                  if (lVar3 == 0) {
                    local_54 = 2;
                  }
                  else {
                    FUN_140983ba6(&local_120,lVar3,&local_e8);
                  }
                  if (local_f8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1409838b8(&local_e8);
                }
                goto LAB_148d8cb52;
              }
            }
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0x28);
        }
        (**(code **)(*param_1 + 0x5c8))(param_1,0);
        goto LAB_148d8cb52;
      }
    }
    local_128 = 0;
    uVar7 = FUN_144a88394(lVar3);
    local_120 = (undefined8 *)0x0;
    local_118 = 0;
    FUN_1446efa72(&local_120,0,3,0x10);
    puVar1 = local_120;
    local_118 = 3;
    *local_120 = &PTR_LAB_14a1c8830;
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
    local_120[2] = lVar5;
    *local_120 = &PTR_FUN_14b988de0;
    local_120[3] = 0;
    FUN_14485c47a(local_120 + 3,param_1);
    puVar1[4] = FUN_148d8cb20;
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    FUN_14487d8d8(&local_e8,&local_120);
    uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
    local_140 = 0xbf800000;
    local_148 = 0;
    FUN_1406f3fee(uVar7,&local_128,&local_e8,0x3f800000);
    (*(code *)(&PTR_LAB_14a1c87a0)[uStack_a8 & 0xff])(&local_e8);
    FUN_1449db362(&local_120);
  }
LAB_148d8cb52:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8cffe FUN_148d8cffe body=154 status=ok
// SIG undefined FUN_148d8cffe(void)

void FUN_148d8cffe(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1404df0da();
  cVar1 = FUN_14167dc04();
  if (param_2 != 0 && cVar1 == '\0') {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      cVar1 = FUN_1449ce97a(param_2);
      if (cVar1 != '\0') {
        lVar2 = FUN_1447210f0(param_1);
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x1f0), lVar2 != 0)) {
          lVar3 = FUN_1403ca142();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            FUN_14414427a(lVar2);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148d8d098 FUN_148d8d098 body=75 status=ok
// SIG undefined FUN_148d8d098(void)

longlong FUN_148d8d098(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140277b32(0,0,
                        L"/Game/Maps/WorldLevels/Intro/Intro_P.Intro_P:PersistentLevel.InteractiveDoor_UAID_025041000001E00002_1159200940"
                        ,0);
  if (lVar1 != 0) {
    lVar2 = FUN_140cc5b26();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148d8d0e4 FUN_148d8d0e4 body=96 status=ok
// SIG undefined FUN_148d8d0e4(void)

void FUN_148d8d0e4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_148d8d144(param_1,(longlong *)(param_1 + 0x98));
  if (cVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x98);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x98);
      }
    }
    *(longlong *)(param_1 + 0x80) = lVar2;
    FUN_148ab744e(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 148d8d144 FUN_148d8d144 body=69 status=ok
// SIG undefined FUN_148d8d144(void)

ulonglong FUN_148d8d144(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    lVar1 = FUN_148d9a5f9();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar1 != 0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_2 = lVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148d8d190 FUN_148d8d190 body=175 status=ok
// SIG undefined FUN_148d8d190(void)

void FUN_148d8d190(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  local_24 = param_2;
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d8d1fc;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (((*(longlong *)(param_1 + 0x18) != 0) && (cVar5 = FUN_1414e62ca(), cVar5 == '\0')) &&
       (*(char *)(param_1 + 0x78) == '\0')) {
      FUN_1447cbafe(param_1 + 0x28,local_28,&local_24,0);
      FUN_148d8d240(param_1,local_24);
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
LAB_148d8d1fc:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d8d240 FUN_148d8d240 body=453 status=ok
// SIG undefined FUN_148d8d240(void)

void FUN_148d8d240(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,4,0x10);
  local_28 = 4;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_148d8d297:
    *local_30 = &PTR_LAB_14b98d0c0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_30[2] = lVar8;
    *local_30 = &PTR_FUN_14b989070;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = param_1;
    *(undefined4 *)(local_30 + 6) = param_2;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_148d8d297;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    uVar4 = *param_1;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_30 = &PTR_LAB_14b98d0c0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_30[2] = lVar8;
    *local_30 = &PTR_FUN_14b989070;
    local_30[3] = uVar4;
    local_30[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_30[5] = param_1;
    *(undefined4 *)(local_30 + 6) = param_2;
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
  FUN_148d8d5f4(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d8d406 FUN_148d8d406 body=99 status=ok
// SIG undefined FUN_148d8d406(void)

void FUN_148d8d406(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x360);
    }
    lVar1 = FUN_145bd65c8(param_1);
    if (lVar2 == lVar1) {
      FUN_148d8d46a(param_1);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_14480f766(&DAT_14cb7df98);
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
  }
  return;
}



// FUNCTION 148d8d46a FUN_148d8d46a body=392 status=ok
// SIG undefined FUN_148d8d46a(void)

void FUN_148d8d46a(longlong param_1)

{
  int iVar1;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_145c3f772(local_88,param_1 + 0x28);
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  local_90 = 0;
  iVar1 = 0;
  local_a0 = local_78;
  if (local_60 != 0) {
    FUN_1449c0562(&local_a8);
    iVar1 = local_60;
  }
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_b0 = local_90;
  local_ac = local_8c;
  local_c8 = local_a8;
  local_c0 = local_a0;
  local_d0 = local_88;
  if ((iStack_94 != iVar1) || (local_a0 != local_78)) {
    do {
      FUN_148d8d240(param_1,*(undefined4 *)(*local_d0 + (longlong)iStack_b4 * 0xc));
      local_b8 = local_b8 & ~local_c8._4_4_;
      FUN_1449c0562(&local_c8);
    } while (local_d0 != local_88 || (local_c0 != local_78 || iStack_b4 != iVar1));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_88);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8d5f4 FUN_148d8d5f4 body=943 status=ok
// SIG undefined FUN_148d8d5f4(void)

void FUN_148d8d5f4(uint *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  uint *local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [4];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_44 = param_2;
  lVar6 = FUN_14479d2ce(param_1 + 4);
  if (lVar6 != 0) {
    lVar7 = FUN_1403ca142();
    if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) && (lVar6 = *(longlong *)(lVar6 + 0x1e0), lVar6 != 0)) &&
       (lVar7 = *(longlong *)(lVar6 + 0x30), lVar7 != 0)) {
      lVar6 = *(longlong *)(lVar6 + 0x68);
      lVar8 = FUN_14130c5c8();
      if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) && (lVar6 != 0))
         && (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
        FUN_140ceec26(lVar6,local_48,param_2);
        if (param_1[0x24] != param_1[0x2f]) {
          puVar9 = param_1 + 0x30;
          if (*(uint **)(param_1 + 0x32) != (uint *)0x0) {
            puVar9 = *(uint **)(param_1 + 0x32);
          }
          uVar10 = puVar9[param_1[0x34] - 1 & param_2];
          if (uVar10 != 0xffffffff) {
            lVar6 = *(longlong *)(param_1 + 0x22);
            do {
              if (*(uint *)(lVar6 + (longlong)(int)uVar10 * 0x18) == param_2) {
                local_88 = (uint *)0x0;
                puStack_80 = (undefined1 *)0x0;
                plVar12 = (longlong *)*param_3;
                if (plVar12 == (longlong *)0x0 || (int)param_3[1] == 0) {
                  uVar11 = 0;
                }
                else {
                  (**(code **)(*plVar12 + 0x60))(plVar12,&local_88);
                  uVar11 = (ulonglong)puStack_80 & 0xffffffff;
                }
                FUN_14117dadb(local_88,uVar11);
                if (local_88 != (uint *)0x0) {
                  FUN_1400020a8();
                }
                goto LAB_148d8d64e;
              }
              uVar10 = *(uint *)(lVar6 + (longlong)(int)uVar10 * 0x18 + 0x10);
            } while (uVar10 != 0xffffffff);
          }
        }
        puStack_80 = (undefined1 *)CONCAT44(puStack_80._4_4_,param_2);
        local_78 = 0;
        local_70 = 0;
        local_88 = param_1;
        FUN_1458e1848(&local_78,param_3);
        local_60 = (undefined8 *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,5,0x10);
        local_58 = 5;
        plVar12 = *(longlong **)(param_1 + 2);
        if (plVar12 == (longlong *)0x0) {
LAB_148d8d77b:
          *local_60 = &PTR_LAB_14b98d0c0;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_60[2] = lVar8;
          *local_60 = &PTR_FUN_14b989150;
          local_60[3] = 0;
          local_60[4] = 0;
          bVar13 = true;
          plVar12 = (longlong *)0x0;
        }
        else {
          iVar5 = (int)plVar12[1];
          do {
            if (iVar5 == 0) goto LAB_148d8d77b;
            LOCK();
            iVar4 = (int)plVar12[1];
            bVar13 = iVar5 == iVar4;
            if (bVar13) {
              *(int *)(plVar12 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar13);
          uVar3 = *(undefined8 *)param_1;
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          *local_60 = &PTR_LAB_14b98d0c0;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_60[2] = lVar8;
          *local_60 = &PTR_FUN_14b989150;
          local_60[3] = uVar3;
          local_60[4] = plVar12;
          LOCK();
          *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
          UNLOCK();
          bVar13 = false;
        }
        *(undefined4 *)(local_60 + 6) = puStack_80._0_4_;
        local_60[5] = local_88;
        local_60[7] = 0;
        *(undefined4 *)(local_60 + 8) = 0;
        FUN_1458e1848(local_60 + 7,&local_78);
        if (!bVar13) {
          LOCK();
          plVar1 = plVar12 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
          LOCK();
          plVar1 = plVar12 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
          LOCK();
          plVar1 = plVar12 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        FUN_1458e16ec(lVar7,local_50,local_48,&local_60);
        FUN_1449db362(&local_60);
        FUN_1449db362(&local_78);
        local_88 = &local_44;
        puStack_80 = local_50;
        FUN_14580a48e(param_1 + 0x22,&local_60,&local_88,0);
        FUN_1458e1650(lVar7,local_48);
      }
    }
  }
LAB_148d8d64e:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d8d9a4 FUN_148d8d9a4 body=1086 status=ok
// SIG undefined FUN_148d8d9a4(void)

ulonglong FUN_148d8d9a4(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
                       longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_278 [36];
  undefined1 local_254 [4];
  undefined8 local_250;
  longlong local_248;
  undefined8 uStack_240;
  longlong local_230;
  int local_228;
  undefined1 local_220 [176];
  undefined1 local_170 [264];
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  plVar5 = *(longlong **)(param_1 + 0x20);
  if (plVar5 == (longlong *)0x0) {
LAB_148d8da40:
    uVar12 = 0;
    goto LAB_148d8da42;
  }
  iVar9 = (int)plVar5[1];
  do {
    if (iVar9 == 0) goto LAB_148d8da40;
    LOCK();
    iVar6 = (int)plVar5[1];
    bVar16 = iVar9 == iVar6;
    if (bVar16) {
      *(int *)(plVar5 + 1) = iVar9 + 1;
      iVar6 = iVar9;
    }
    iVar9 = iVar6;
    UNLOCK();
  } while (!bVar16);
  lVar11 = *(longlong *)(param_1 + 0x18);
  if (((lVar11 == 0) || (cVar7 = FUN_1441df6ac(lVar11), cVar7 != '\0')) ||
     (cVar7 = FUN_1414e62ca(lVar11), cVar7 != '\0')) {
LAB_148d8da1f:
    uVar12 = 0;
  }
  else {
    uVar10 = FUN_145bd65c8(param_1);
    lVar11 = FUN_14127aa70(uVar10,param_2);
    if ((lVar11 == 0) || (*(char *)(lVar11 + 0x130) != '\0')) goto LAB_148d8da1f;
    FUN_145e1a8dc(param_1,&local_230,param_2);
    if (local_228 < 2) {
LAB_148d8dab4:
      if (local_230 != 0) {
        FUN_1400020a8();
      }
      goto LAB_148d8da1f;
    }
    FUN_14596feca(param_1,local_220);
    if (local_68 != '\x01') {
LAB_148d8db95:
      if (local_68 == '\x01') {
        FUN_141072d6a(local_220);
      }
      goto LAB_148d8dab4;
    }
    local_248 = 0;
    uStack_240 = 0;
    FUN_1407c869a(local_170,&local_248);
    if ((int)uStack_240 == local_228) {
      bVar16 = true;
      if (1 < (int)uStack_240) {
        lVar11 = 0;
        while( true ) {
          uVar3 = *(ushort *)(local_248 + lVar11);
          uVar8 = (uint)uVar3;
          uVar4 = *(ushort *)(local_230 + lVar11);
          uVar14 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_148d8db4c;
            }
            iVar9 = uVar8 - uVar14;
            goto LAB_148d8ddc7;
          }
          if (uVar3 == 0) break;
LAB_148d8db4c:
          lVar11 = lVar11 + 2;
        }
        iVar9 = 0;
LAB_148d8ddc7:
        bVar16 = iVar9 == 0;
      }
    }
    else {
      bVar16 = local_228 + (int)uStack_240 == 1;
    }
    if (local_248 != 0) {
      FUN_1400020a8();
    }
    if (bVar16) goto LAB_148d8db95;
    local_250 = 0;
    if ((longlong)(int)param_3[1] != 0) {
      lVar11 = *param_3;
      lVar15 = (longlong)(int)param_3[1] * 0x1b8 + lVar11;
      do {
        local_248 = 0;
        uStack_240 = 0;
        FUN_1407c869a(lVar11 + 0xb0,&local_248);
        if ((int)uStack_240 == local_228) {
          bVar16 = true;
          if (1 < (int)uStack_240) {
            lVar13 = 0;
            while( true ) {
              uVar3 = *(ushort *)(local_248 + lVar13);
              uVar8 = (uint)uVar3;
              uVar4 = *(ushort *)(local_230 + lVar13);
              uVar14 = (uint)uVar4;
              if (uVar3 != uVar4) {
                if ((uVar4 | uVar3) < 0x80) {
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                  if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_148d8dc28;
                }
                iVar9 = uVar8 - uVar14;
                goto LAB_148d8dc9d;
              }
              if (uVar3 == 0) break;
LAB_148d8dc28:
              lVar13 = lVar13 + 2;
            }
            iVar9 = 0;
LAB_148d8dc9d:
            bVar16 = iVar9 == 0;
          }
        }
        else {
          bVar16 = local_228 + (int)uStack_240 == 1;
        }
        if (local_248 != 0) {
          FUN_1400020a8();
        }
        if (bVar16) {
          FUN_1447325ac(lVar11 + 0x88,&local_250);
        }
        lVar11 = lVar11 + 0x1b8;
      } while (lVar11 != lVar15);
    }
    lVar11 = FUN_14479d2ce(param_1 + 0x10);
    if (lVar11 == 0) goto LAB_148d8db95;
    lVar15 = FUN_1403ca142();
    if (((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar15 + 0x38) * 8) != lVar15 + 0x30)) ||
       (lVar11 = *(longlong *)(lVar11 + 0x1e0), lVar11 == 0)) goto LAB_148d8db95;
    lVar15 = *(longlong *)(lVar11 + 0x30);
    if (lVar15 == 0 || *(longlong *)(lVar11 + 0x68) == 0) goto LAB_148d8db95;
    FUN_140ceec26(*(longlong *)(lVar11 + 0x68),local_254,param_2);
    cVar7 = FUN_1489b0dae(lVar15,local_254,&local_250);
    if (cVar7 == '\0') goto LAB_148d8db95;
    iVar9 = local_228 + -1;
    if (local_228 == 0) {
      iVar9 = 0;
    }
    FUN_1402980a2(param_4,local_230,iVar9);
    FUN_1400021e4(&local_250,&local_248);
    if (&local_248 == param_5) {
      if (local_248 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_5 != 0) {
        FUN_1400020a8();
      }
      *param_5 = local_248;
      local_248 = 0;
      *(int *)(param_5 + 1) = (int)uStack_240;
      *(undefined4 *)((longlong)param_5 + 0xc) = uStack_240._4_4_;
    }
    if (local_68 == '\x01') {
      FUN_141072d6a(local_220);
    }
    if (local_230 != 0) {
      FUN_1400020a8();
    }
    uVar12 = CONCAT71((int7)((ulonglong)&local_248 >> 8),1);
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
LAB_148d8da42:
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 148d8dde4 FUN_148d8dde4 body=2356 status=ok
// SIG undefined FUN_148d8dde4(void)

void FUN_148d8dde4(wchar_t *param_1,int param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  longlong local_108 [2];
  longlong local_f8;
  longlong *plStack_f0;
  longlong *local_e8 [2];
  longlong local_d8;
  ulonglong uStack_d0;
  longlong *local_c8 [2];
  longlong *local_b8 [2];
  wchar_t *local_a8;
  int local_a0;
  undefined4 local_9c;
  wchar_t *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_1403ca142();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      if (*(code **)(*plVar4 + 0x498) == (code *)&LAB_14015c36e) {
        cVar3 = (char)plVar4[0x42];
      }
      else {
        cVar3 = (**(code **)(*plVar4 + 0x498))(plVar4);
      }
      if (cVar3 != '\b') {
        lVar5 = FUN_145bd65c8(param_1);
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
          local_130 = FUN_14583d3ae();
          if (local_130 != 0) {
            FUN_14432176c(&local_78,param_3 + 0xd0);
            FUN_14432176c(&local_88,param_5 + 0xd0);
            FUN_148eea346(&local_98,*(undefined8 *)(param_3 + 0xd0));
            FUN_148eea346(&local_a8,*(undefined8 *)(param_5 + 0xd0));
            if (local_90 < 2) {
              FUN_140b6da64(&local_68,param_3 + 0xd0);
              if (local_98 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              local_98 = local_68;
              local_90 = local_60;
              local_8c = local_5c;
            }
            if (local_a0 < 2) {
              FUN_140b6da64(&local_68,param_5 + 0xd0);
              if (local_a8 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              local_a8 = local_68;
              local_a0 = local_60;
              local_9c = local_5c;
            }
            if ((((1 < local_70) && (1 < local_90)) &&
                (1 < local_a0 && (1 < local_80 && 0 < *(int *)(param_3 + 0xd8)))) &&
               (0 < *(int *)(param_5 + 0xd8))) {
              local_68 = L"ConfirmMemoryCharacterChangeHeader";
              local_60 = 0x22;
              FUN_1446e940c(local_c8,&local_68);
              local_68 = L"OakNetwork";
              local_60 = 10;
              FUN_1446e940c(&local_d8,&local_68);
              FUN_140208bae(local_b8,&local_d8,local_c8,L"Swap Character");
              local_68 = L"ConfirmMemoryCharacterChangeBody";
              local_60 = 0x20;
              FUN_1446e940c(&local_d8,&local_68);
              local_68 = L"OakNetwork";
              local_60 = 10;
              FUN_1446e940c(local_e8,&local_68);
              FUN_140208bae(local_c8,local_e8,&local_d8,
                            L"Do you want to swap from your current character, \'{CurrentClassIcon} {CurrentCharacterName} - Level {CurrentCharacterLevel}\', to the last character played with this party leader, \'{SavedClassIcon} {SavedCharacterName} - Level {SavedCharacterLevel}\'?"
                           );
              local_d8 = 0;
              uStack_d0 = 0;
              FUN_140009b9a(local_e8,&local_98);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(&local_58,local_e8);
              FUN_140056680(&local_f8,L"CurrentClassIcon");
              FUN_140233eec(&local_d8,&local_f8,&local_68);
              if (local_f8 != 0) {
                FUN_1400020a8();
              }
              if (local_58 != (longlong *)0x0) {
                (**(code **)(*local_58 + 0x10))();
                local_58 = (longlong *)0x0;
                local_50 = 0;
              }
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
              FUN_140009b9a(local_e8,&local_78);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(&local_58,local_e8);
              FUN_140056680(&local_f8,L"CurrentCharacterName");
              FUN_140233eec(&local_d8,&local_f8,&local_68);
              if (local_f8 != 0) {
                FUN_1400020a8();
              }
              if (local_58 != (longlong *)0x0) {
                (**(code **)(*local_58 + 0x10))();
                local_58 = (longlong *)0x0;
                local_50 = 0;
              }
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
              local_f8 = 0;
              plStack_f0 = (longlong *)0x0;
              FUN_1413a454c(local_e8,*(undefined4 *)(param_3 + 0xd8),0);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(&local_58,local_e8);
              FUN_140056680(local_108,L"CurrentCharacterLevel");
              FUN_140233eec(&local_d8,local_108,&local_68);
              if (local_108[0] != 0) {
                FUN_1400020a8();
              }
              if (local_58 != (longlong *)0x0) {
                (**(code **)(*local_58 + 0x10))();
                local_58 = (longlong *)0x0;
                local_50 = 0;
              }
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
              plVar4 = plStack_f0;
              if (plStack_f0 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_f0 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_f0)(plStack_f0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
              FUN_140009b9a(local_e8,&local_a8);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(&local_58,local_e8);
              FUN_140056680(&local_f8,L"SavedClassIcon");
              FUN_140233eec(&local_d8,&local_f8,&local_68);
              if (local_f8 != 0) {
                FUN_1400020a8();
              }
              if (local_58 != (longlong *)0x0) {
                (**(code **)(*local_58 + 0x10))();
                local_58 = (longlong *)0x0;
                local_50 = 0;
              }
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
              FUN_140009b9a(local_e8,&local_88);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(&local_58,local_e8);
              FUN_140056680(&local_f8,L"SavedCharacterName");
              FUN_140233eec(&local_d8,&local_f8,&local_68);
              if (local_f8 != 0) {
                FUN_1400020a8();
              }
              if (local_58 != (longlong *)0x0) {
                (**(code **)(*local_58 + 0x10))();
                local_58 = (longlong *)0x0;
                local_50 = 0;
              }
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
              local_f8 = 0;
              plStack_f0 = (longlong *)0x0;
              FUN_1413a454c(local_e8,*(undefined4 *)(param_5 + 0xd8),0);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(&local_58,local_e8);
              FUN_140056680(local_108,L"SavedCharacterLevel");
              FUN_140233eec(&local_d8,local_108,&local_68);
              if (local_108[0] != 0) {
                FUN_1400020a8();
              }
              if (local_58 != (longlong *)0x0) {
                (**(code **)(*local_58 + 0x10))();
                local_58 = (longlong *)0x0;
                local_50 = 0;
              }
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
              plVar4 = plStack_f0;
              if (plStack_f0 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_f0 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_f0)(plStack_f0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
              FUN_14023409e(local_118,local_c8,1);
              FUN_140233c04(local_e8,local_118,&local_d8);
              uVar6 = FUN_140e82300();
              uVar7 = FUN_140e82300();
              local_58 = (longlong *)0x0;
              local_50 = *(int *)(param_4 + 1);
              lVar5 = (longlong)local_50;
              _Src = (void *)*param_4;
              local_68 = param_1;
              local_60 = param_2;
              if (lVar5 == 0) {
                local_4c = 0;
              }
              else {
                FUN_1446dd670(&local_58,local_50,0);
                memcpy(local_58,_Src,lVar5 * 2);
              }
              FUN_1441b4c06(local_128,param_1,&local_68);
              local_148 = local_128;
              local_140 = uVar7;
              local_138 = uVar6;
              FUN_148d8e71a(local_130,param_2,local_b8,local_e8);
              if (local_58 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_e8[0] != (longlong *)0x0) {
                (**(code **)(*local_e8[0] + 0x10))();
              }
              FUN_14010f8af(local_d8,uStack_d0 & 0xffffffff);
              if (local_d8 != 0) {
                FUN_1400020a8();
              }
              if (local_c8[0] != (longlong *)0x0) {
                (**(code **)(*local_c8[0] + 0x10))();
              }
              if (local_b8[0] != (longlong *)0x0) {
                (**(code **)(*local_b8[0] + 0x10))();
              }
            }
            if (local_a8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_98 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            if (local_78 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8e71a FUN_148d8e71a body=226 status=ok
// SIG undefined FUN_148d8e71a(void)

undefined4
FUN_148d8e71a(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_144a7c5f6(param_4);
  uVar2 = 0xffffffff;
  if (cVar1 == '\0') {
    lVar3 = FUN_1458d9664(param_1,param_2);
    if (lVar3 != 0) {
      lVar3 = FUN_145da44aa(lVar3);
      if (lVar3 != 0) {
        FUN_148d92660(local_58,param_1,param_5);
        local_60 = param_7;
        local_68 = param_6;
        uVar2 = FUN_14615e246(lVar3,param_3,param_4,local_58);
        FUN_1449db362(local_58);
      }
    }
  }
  FUN_1449db362(param_5);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8e7fe FUN_148d8e7fe body=205 status=ok
// SIG undefined FUN_148d8e7fe(void)

void FUN_148d8e7fe(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145bd65c8();
  lVar2 = FUN_14128aaf8(uVar1);
  lVar3 = FUN_145bd65c8(param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_1400f6f32(lVar3);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x68) != 0 && lVar2 != 0)) {
      FUN_140ceec26(*(longlong *)(lVar3 + 0x68),local_2c,param_2);
      if (-1 < local_2c[0]) {
        if (*(int *)(param_3 + 1) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)*param_3;
        }
        FUN_1446f470e(&local_38,puVar4,1);
        FUN_146242444(lVar2,local_2c,local_38,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8e8cc FUN_148d8e8cc body=220 status=ok
// SIG undefined FUN_148d8e8cc(void)

undefined8 FUN_148d8e8cc(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_28 = local_30;
  iVar2 = FUN_148a72ae6((longlong *)(param_1 + 0xe8),
                        (uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0xe8);
    lVar3 = (longlong)iVar2;
    if ((lVar1 + lVar3 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
      lVar1 = lVar1 + lVar3 * 0x48;
      lVar5 = (longlong)*(int *)(lVar1 + 0x10);
      uVar4 = CONCAT71((int7)((ulonglong)(lVar3 * 9) >> 8),lVar5 != 0);
      if ((param_3 & lVar5 != 0) == 1) {
        lVar3 = 0;
        do {
          bVar6 = (*(byte *)(*(longlong *)(lVar1 + 8) + 0x88 + lVar3) & 1) == 0;
          uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar6);
          if (bVar6) break;
          bVar6 = lVar5 * 0x90 + -0x90 != lVar3;
          lVar3 = lVar3 + 0x90;
        } while (bVar6);
      }
      goto LAB_148d8e940;
    }
  }
  uVar4 = 0;
LAB_148d8e940:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148d8e9aa FUN_148d8e9aa body=358 status=ok
// SIG undefined FUN_148d8e9aa(void)

undefined8 FUN_148d8e9aa(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  FUN_14485c47a(&local_50);
  local_48 = local_50;
  iVar4 = FUN_148a72ae6((longlong *)(param_1 + 0xe8),
                        (uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
  if (iVar4 == -1) {
    uVar5 = 4;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    uVar5 = 4;
    if ((lVar2 + (longlong)iVar4 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
      lVar2 = lVar2 + (longlong)iVar4 * 0x48;
      FUN_148d8eb12(param_3,*(undefined4 *)(lVar2 + 0x10));
      iVar4 = *(int *)(lVar2 + 0x10);
      if ((longlong)iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        lVar8 = 0;
        do {
          if (((param_4 == '\0') || ((*(byte *)(lVar2 + 0x88 + lVar8) & 1) == 0)) &&
             (plVar3 = *(longlong **)(lVar2 + 0x50 + lVar8), plVar3 != (longlong *)0x0)) {
            lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
            lVar7 = FUN_14117daa2();
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              iVar1 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
                FUN_148d9af60(param_3,iVar1);
              }
              FUN_14112ded2((longlong)iVar1 * 0x1b8 + *param_3,plVar3);
            }
          }
          lVar8 = lVar8 + 0x90;
          uVar5 = 0;
        } while ((longlong)iVar4 * 0x90 != lVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148d8eb12 FUN_148d8eb12 body=68 status=ok
// SIG undefined FUN_148d8eb12(void)

void FUN_148d8eb12(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14117dadb(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_145821cae(param_1,param_2);
  return;
}



// FUNCTION 148d8eb58 FUN_148d8eb58 body=252 status=ok
// SIG undefined FUN_148d8eb58(void)

void FUN_148d8eb58(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148a6d0c4();
  if (*(int *)(param_1 + 0x688) != *(int *)(param_1 + 0x6b4)) {
    lVar2 = param_1 + 0x6b8;
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x6c0);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x6c8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x680) + (longlong)iVar3 * 0x60;
        if (*(uint *)(*(longlong *)(param_1 + 0x680) + (longlong)iVar3 * 0x60) == param_2) {
          if (lVar2 != -8 && lVar2 != 0) {
            local_28 = *(longlong *)(param_3 + 0x10);
            if (local_28 == 0) goto LAB_148d8ec1b;
            iVar3 = *(int *)(local_28 + 8);
            goto LAB_148d8ec44;
          }
          break;
        }
        iVar3 = *(int *)(lVar2 + 0x58);
      } while (iVar3 != -1);
    }
  }
  goto LAB_148d8ebb0;
LAB_148d8ec1b:
  local_28 = 0;
  goto LAB_148d8ec1e;
  while( true ) {
    LOCK();
    iVar1 = *(int *)(local_28 + 8);
    bVar4 = iVar3 == iVar1;
    if (bVar4) {
      *(int *)(local_28 + 8) = iVar3 + 1;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
    UNLOCK();
    if (bVar4) break;
LAB_148d8ec44:
    if (iVar3 == 0) goto LAB_148d8ec1b;
  }
LAB_148d8ec1e:
  local_30 = 0;
  if (local_28 != 0) {
    local_30 = *(undefined8 *)(param_3 + 8);
  }
  FUN_1459b6cd8();
LAB_148d8ebb0:
  FUN_14662e1ca(param_1,param_2,0);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d8ec56 FUN_148d8ec56 body=515 status=ok
// SIG undefined FUN_148d8ec56(void)

void FUN_148d8ec56(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *plStack_58;
  undefined8 local_50;
  longlong local_48 [2];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_140b708a0();
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
    lVar4 = FUN_14583d3ae();
    if (lVar4 != 0) {
      local_48[0] = 0;
      local_48[1] = 0;
      (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,&local_38,local_48);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (1 < (int)plStack_30) {
        (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_60);
        (**(code **)(*local_60 + 0x10))(local_60,&local_50);
        FUN_140b6e92a(local_48,local_50);
        plVar3 = plStack_58;
        if (plStack_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_58)(plStack_58);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        FUN_145d1c6f4(local_48,&local_38);
        (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_80);
        local_70 = local_80;
        local_68 = local_78;
        if (local_78 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_78 + 1) = (int)local_78[1] + 1;
          UNLOCK();
        }
        FUN_140b6e028(&local_60,&local_38,&local_70,1);
        if (local_38 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        plVar3 = local_68;
        local_38 = local_60;
        plStack_30 = plStack_58;
        local_60 = (longlong *)0x0;
        plStack_58 = (longlong *)0x0;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_78 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar2 = (int *)((longlong)local_78 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_78 + 0x10))(local_78);
            }
          }
        }
        FUN_1446f470e(&local_60,L"friend_request_received",1);
        FUN_148d8ee5a(lVar4,&local_60,&local_38);
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_38 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8ee5a FUN_148d8ee5a body=111 status=ok
// SIG undefined FUN_148d8ee5a(void)

void FUN_148d8ee5a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a846f6(*param_2);
  if (cVar1 != '\0') {
    lVar2 = FUN_1458d9604(param_1,0xffffffff);
    if (lVar2 != 0) {
      FUN_148e4b47a(lVar2,local_24,param_2,param_3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8eeca FUN_148d8eeca body=808 status=ok
// SIG undefined FUN_148d8eeca(void)

void FUN_148d8eeca(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_44;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_1;
  local_44 = param_2;
  (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_40);
  (**(code **)(*local_40 + 0x10))(local_40,&local_58);
  FUN_1446f470e(&local_60,L"SHIFT",1);
  lVar8 = local_58;
  plVar7 = (longlong *)CONCAT44(uStack_34,local_38);
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
  if (lVar8 == local_60) {
    plVar7 = (longlong *)FUN_1415ca610(param_1);
    if (plVar7 != (longlong *)0x0) {
      lVar8 = FUN_1403ca142();
      if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) &&
         (bVar5 = (**(code **)(*plVar7 + 0x498))(plVar7), lVar8 = local_50, bVar5 < 5)) {
        if (*(longlong *)(param_1 + 0x6e0) == 0) {
          local_40 = (longlong *)0x0;
          local_38 = 0;
          FUN_1446efa72(&local_40,0,4,0x10);
          local_38 = 4;
          plVar7 = *(longlong **)(param_1 + 0x10);
          if (plVar7 == (longlong *)0x0) {
LAB_148d8f027:
            *local_40 = (longlong)&PTR_LAB_14b3ecf50;
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
            local_40[2] = lVar9;
            *local_40 = (longlong)&PTR_FUN_14b989430;
            local_40[3] = 0;
            local_40[4] = 0;
            local_40[5] = param_1;
            local_40[6] = lVar8;
          }
          else {
            iVar6 = (int)plVar7[1];
            do {
              if (iVar6 == 0) goto LAB_148d8f027;
              LOCK();
              iVar4 = (int)plVar7[1];
              bVar11 = iVar6 == iVar4;
              if (bVar11) {
                *(int *)(plVar7 + 1) = iVar6 + 1;
                iVar4 = iVar6;
              }
              iVar6 = iVar4;
              UNLOCK();
            } while (!bVar11);
            lVar3 = *(longlong *)(param_1 + 8);
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            *local_40 = (longlong)&PTR_LAB_14b3ecf50;
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
            local_40[2] = lVar10;
            *local_40 = (longlong)&PTR_FUN_14b989430;
            local_40[3] = lVar3;
            local_40[4] = (longlong)plVar7;
            LOCK();
            *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
            UNLOCK();
            local_40[5] = param_1;
            local_40[6] = lVar8;
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
          FUN_1412a3750(&DAT_14cb7df98,&local_58,&local_40);
          FUN_1449db362(&local_40);
          *(longlong *)(param_1 + 0x6e0) = local_58;
        }
        plVar7 = (longlong *)FUN_148d9aff8(param_1 + 0x6e8,local_44);
        iVar6 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar6 + 1U) {
          FUN_148d9b578(plVar7,iVar6);
        }
        lVar8 = *plVar7;
        *(undefined8 *)(lVar8 + (longlong)iVar6 * 0x10) = *param_3;
        lVar3 = param_3[1];
        *(longlong *)(lVar8 + 8 + (longlong)iVar6 * 0x10) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        goto LAB_148d8efb1;
      }
    }
    FUN_1441bbdd4(&local_50,local_44,param_3);
  }
LAB_148d8efb1:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d8f1f4 FUN_148d8f1f4 body=95 status=ok
// SIG undefined FUN_148d8f1f4(void)

void FUN_148d8f1f4(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_14127aaaa();
  if (cVar2 != '\0') {
    uVar1 = FUN_140b708a0(param_1);
    lVar3 = FUN_14127aa70(uVar1,param_2);
    if (lVar3 != 0) {
      cVar2 = FUN_148a95778(lVar3,param_3);
      if (cVar2 != '\0') {
        FUN_1401861f4(param_1 + 0x668,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d8f254 FUN_148d8f254 body=95 status=ok
// SIG undefined FUN_148d8f254(void)

void FUN_148d8f254(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_14127aaaa();
  if (cVar2 != '\0') {
    uVar1 = FUN_140b708a0(param_1);
    lVar3 = FUN_14127aa70(uVar1,param_2);
    if (lVar3 != 0) {
      cVar2 = FUN_148a95842(lVar3,param_3);
      if (cVar2 != '\0') {
        FUN_1401861f4(param_1 + 0x668,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d8f2c8 FUN_148d8f2c8 body=74 status=ok
// SIG undefined FUN_148d8f2c8(void)

void FUN_148d8f2c8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_148a783be();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1441c12ac(lVar1,0xffffffff,param_2,&DAT_14c9485f0);
      return;
    }
  }
  return;
}



// FUNCTION 148d8f312 FUN_148d8f312 body=134 status=ok
// SIG undefined FUN_148d8f312(void)

void FUN_148d8f312(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_148a7aca6();
  FUN_145dd6c28(param_1);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_1458774f4();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      FUN_145bd62c2(lVar3);
      plVar2 = *(longlong **)(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      *(undefined1 *)(lVar3 + 0x78) = 0;
    }
  }
  FUN_145bd6256(param_1 + 0x180);
  return;
}



// FUNCTION 148d8f398 FUN_148d8f398 body=995 status=ok
// SIG undefined FUN_148d8f398(void)

void FUN_148d8f398(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined **local_78;
  longlong *plStack_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = FUN_145d53b76();
  if ((cVar4 == '\0') && (cVar4 = FUN_143f2812e(param_1), cVar4 == '\0')) {
    plVar10 = *(longlong **)(param_2 + 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_148d8f418:
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar10[1];
      do {
        if (iVar5 == 0) goto LAB_148d8f418;
        LOCK();
        iVar3 = (int)plVar10[1];
        bVar11 = iVar5 == iVar3;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar11);
    }
    plStack_70 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
      plStack_70 = *(longlong **)(param_2 + 8);
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_60 = 0;
    local_78 = &PTR_FUN_14a5af930;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = plVar10;
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    plVar7 = (longlong *)FUN_1463ce09c(uVar6,&local_78);
    if (plVar7 == (longlong *)0x0) {
LAB_148d8f4a5:
      plVar7 = (longlong *)0x0;
    }
    else {
      lVar8 = FUN_144a5dd5e();
      if ((*(int *)(plVar7[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar8 + 0x30)) goto LAB_148d8f4a5;
    }
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&plStack_70);
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
    if ((plVar7 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar7 + 0x6c8))(plVar7), cVar4 != '\0')) goto LAB_148d8f3d5;
    if (param_3 < 3) {
      puVar9 = (undefined2 *)(&PTR_DAT_14b98d2a0)[param_3];
    }
    else {
      puVar9 = &DAT_149dfb77a;
    }
    FUN_140056680(&local_78,puVar9);
    FUN_1486dc278(plVar7,&local_78);
  }
  else {
LAB_148d8f3d5:
    if ((*(longlong *)(param_1 + 0x50) == 0) || (cVar4 = FUN_1414e62ca(), cVar4 == '\0'))
    goto LAB_148d8f5d2;
    if (param_3 < 3) {
      puVar9 = (undefined2 *)(&PTR_DAT_14b98d2a0)[param_3];
    }
    else {
      puVar9 = &DAT_149dfb77a;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    FUN_140056680(&local_78,puVar9);
    local_80 = *(longlong **)(param_2 + 0x10);
    if (local_80 == (longlong *)0x0) {
LAB_148d8f573:
      local_80 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)local_80[1];
      do {
        if (iVar5 == 0) goto LAB_148d8f573;
        LOCK();
        iVar3 = (int)local_80[1];
        bVar11 = iVar5 == iVar3;
        if (bVar11) {
          *(int *)(local_80 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar11);
    }
    local_88 = 0;
    if (local_80 != (longlong *)0x0) {
      local_88 = *(longlong *)(param_2 + 8);
    }
    FUN_143f38cc2(uVar6,&local_88,&local_78);
    plVar10 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_80 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_80)(local_80);
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
  if (local_78 != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_148d8f5d2:
  plVar10 = *(longlong **)(param_2 + 0x10);
  if (plVar10 == (longlong *)0x0) {
LAB_148d8f5db:
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar10[1];
    do {
      if (iVar5 == 0) goto LAB_148d8f5db;
      LOCK();
      iVar3 = (int)plVar10[1];
      bVar11 = iVar5 == iVar3;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar11);
  }
  local_78 = (undefined **)0x0;
  if (plVar10 != (longlong *)0x0) {
    local_78 = *(undefined ***)(param_2 + 8);
  }
  plStack_70 = plVar10;
  cVar4 = FUN_145dd6d36(param_1 + 0x1f8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar10 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (cVar4 != '\0') {
    plStack_70 = *(longlong **)(param_2 + 0x10);
    if (plStack_70 == (longlong *)0x0) {
LAB_148d8f68f:
      local_78 = (undefined **)0x0;
      plStack_70 = (longlong *)0x0;
      bVar11 = true;
    }
    else {
      iVar5 = (int)plStack_70[1];
      do {
        if (iVar5 == 0) goto LAB_148d8f68f;
        LOCK();
        iVar3 = (int)plStack_70[1];
        bVar11 = iVar5 == iVar3;
        if (bVar11) {
          *(int *)(plStack_70 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar11);
      local_78 = *(undefined ***)(param_2 + 8);
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
      bVar11 = false;
    }
    plVar10 = plStack_70;
    FUN_140056680(&local_88,L"player_kicked");
    FUN_145c29a14(param_1,&local_88,&local_78);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    plVar7 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (!bVar11) {
      LOCK();
      plVar7 = plVar10 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8f8d2 FUN_148d8f8d2 body=413 status=ok
// SIG undefined FUN_148d8f8d2(void)

void FUN_148d8f8d2(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d53b76();
  if (*(longlong *)(param_1 + 0x1f0) == 0) {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    FUN_1410d53f0(&local_50,uVar8);
    plVar10 = (longlong *)CONCAT44(uStack_44,local_48);
    if (plVar10 != (longlong *)0x0) {
      iVar7 = (int)plVar10[1];
      do {
        if (iVar7 == 0) {
          plVar10 = (longlong *)0x0;
          break;
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
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_44,local_48) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x10))();
      }
      puVar4 = local_50;
      if (plVar10 != (longlong *)0x0) {
        if (local_50 != (undefined8 *)0x0) {
          puVar2 = local_50 + 0xb;
          local_50 = (undefined8 *)0x0;
          local_48 = 0;
          FUN_1446efa72(&local_50,0,2,0x10);
          local_48 = 2;
          *local_50 = &PTR_LAB_149e06450;
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar9 == 0) {
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_50[2] = lVar9;
          *local_50 = &PTR_FUN_14b98a010;
          local_50[3] = param_1;
          FUN_140c6314c(puVar2,&local_58,&local_50);
          FUN_1449db362(&local_50);
          *(undefined8 *)(param_1 + 0x1f0) = local_58;
          FUN_148e0bd24(puVar4,param_2);
        }
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
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d8fa70 FUN_148d8fa70 body=45 status=ok
// SIG undefined FUN_148d8fa70(void)

void FUN_148d8fa70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_145d53b76();
  if (cVar1 != '\0') {
    return;
  }
  FUN_148d8f8d2(param_1,param_2);
  return;
}



// FUNCTION 148d8fa9e FUN_148d8fa9e body=45 status=ok
// SIG undefined FUN_148d8fa9e(void)

void FUN_148d8fa9e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_145d53b76();
  if (cVar1 != '\0') {
    return;
  }
  FUN_148d8fb58(param_1,param_2);
  return;
}



// FUNCTION 148d8facc FUN_148d8facc body=140 status=ok
// SIG undefined FUN_148d8facc(void)

void FUN_148d8facc(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x178);
  if (plVar3 == (longlong *)0x0) {
LAB_148d8fb44:
    cVar5 = FUN_1414e62ca(0);
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d8fb44;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar7);
    cVar5 = FUN_1414e62ca(*(undefined8 *)(param_1 + 0x170));
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
  if (cVar5 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148d8fb41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x168) + 0x3d8))(*(longlong **)(param_1 + 0x168),param_2);
  return;
}



// FUNCTION 148d8fb58 FUN_148d8fb58 body=246 status=ok
// SIG undefined FUN_148d8fb58(void)

void FUN_148d8fb58(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    FUN_1410d53f0(&local_38,uVar5);
    if (local_30 != (longlong *)0x0) {
      iVar4 = (int)local_30[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_30[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_30 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_30;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_38 != 0) {
          FUN_148e0bfb8(local_38,param_2);
          if (*(longlong *)(param_1 + 0x1f0) != 0) {
            FUN_14480f766(local_38 + 0x58);
          }
          *(undefined8 *)(param_1 + 0x1f0) = 0;
        }
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d8fc50 FUN_148d8fc50 body=49 status=ok
// SIG undefined FUN_148d8fc50(void)

void FUN_148d8fc50(longlong param_1)

{
  char cVar1;
  
  FUN_148a7c43a();
  cVar1 = FUN_1414e62ca(*(undefined8 *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    return;
  }
  FUN_141521da0(*(undefined8 *)(param_1 + 0x168));
  return;
}



// FUNCTION 148d8fc82 FUN_148d8fc82 body=158 status=ok
// SIG undefined FUN_148d8fc82(void)

void FUN_148d8fc82(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_148a7c49e();
  cVar2 = FUN_1414e62ca(*(undefined8 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    uVar3 = FUN_145c29970(*(undefined8 *)(param_1 + 0x50));
    *(char *)(param_1 + 0x22c) = (char)uVar3;
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x178) != 0)) {
      lVar5 = FUN_14041aabe();
      plVar1 = *(longlong **)(lVar4 + 0x178);
      if (((plVar1 != (longlong *)0x0) &&
          (((lVar5 != 0 && (lVar4 = plVar1[2], lVar4 != 0)) &&
           (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148d8fd1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x778))(plVar1,uVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d8fd20 FUN_148d8fd20 body=237 status=ok
// SIG undefined FUN_148d8fd20(void)

undefined8
FUN_148d8fd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14b412d70;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b989f60;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_14127bc3c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d8fe0e FUN_148d8fe0e body=219 status=ok
// SIG undefined FUN_148d8fe0e(void)

void FUN_148d8fe0e(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4))) {
    uVar1 = *(uint *)(param_2 + 0xe0);
    lVar2 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1e0);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x1a0);
      do {
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0xc) == uVar1) {
          lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
          if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) &&
              (lVar2 = FUN_1458774f4(), lVar2 != 0)) && (*(longlong *)(lVar2 + 0x30) != 0)) {
            FUN_148d8d190(*(longlong *)(lVar2 + 0x30),uVar1);
          }
          FUN_144a7cc9e((longlong *)(param_1 + 0x1a0),uVar1);
          if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
            return;
          }
          FUN_145dd6c28(param_1);
          return;
        }
        iVar3 = *(int *)(lVar2 + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 148d8feea FUN_148d8feea body=545 status=ok
// SIG undefined FUN_148d8feea(void)

void FUN_148d8feea(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_54;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_148a7c5fe();
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_1458774f4();
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
      FUN_145c2a68e();
    }
  }
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0x14) != 0)) {
    memset(&local_c8,0,0x98);
    local_54 = 0xffffffff00000080;
    FUN_145c29df8(param_1 + 0x1f8,&local_c8);
    FUN_145cbdc62(&local_c8);
  }
  else if ((*param_3 == 0) || (*(int *)(*param_3 + 0x14) != 0)) {
    memset(&local_c8,0,0x98);
    local_54 = 0xffffffff00000080;
    lVar3 = param_1 + 0x1f8;
    FUN_145c29df8(lVar3,&local_c8);
    FUN_145cbdc62(&local_c8);
    FUN_1459da824(*(undefined8 *)(param_1 + 0x50),&local_c8);
    FUN_145c29d58(lVar3,&local_c8);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x218) = 1;
    bVar1 = FUN_145d53b76(param_1);
    *(byte *)(param_1 + 0x219) = bVar1 ^ 1;
    uVar2 = FUN_145c29970(*(undefined8 *)(param_1 + 0x50));
    *(undefined1 *)(param_1 + 0x22c) = uVar2;
    FUN_14101cf30(*(undefined8 *)(param_1 + 0x50),&local_c8);
    uVar4 = 0;
    if ((longlong)(int)uStack_c0 != 0) {
      lVar6 = (longlong)(int)uStack_c0 << 4;
      lVar5 = local_c8;
      do {
        FUN_145c29b92(lVar3,lVar5);
        lVar5 = lVar5 + 0x10;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
      uVar4 = (int)uStack_c0;
    }
    FUN_14101cee4(local_c8,uVar4);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_140056680(local_d8,L"leader_assigned");
    FUN_145c29a14(param_1,local_d8,&local_c8);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d90112 FUN_148d90112 body=73 status=ok
// SIG undefined FUN_148d90112(void)

void FUN_148d90112(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if (lVar1 != 0) {
    FUN_145bd6256(param_1 + 0x180);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    FUN_147dab866(uVar2,0);
    return;
  }
  return;
}



// FUNCTION 148d90164 FUN_148d90164 body=114 status=ok
// SIG undefined FUN_148d90164(void)

void FUN_148d90164(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  local_28 = param_2;
  FUN_1400b22c2(local_38,&DAT_149e02088);
  FUN_148d901d8(uVar1,&local_28,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d901d8 FUN_148d901d8 body=75 status=ok
// SIG undefined FUN_148d901d8(void)

void FUN_148d901d8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_148d8ee5a(lVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148d90230 FUN_148d90230 body=78 status=ok
// SIG undefined FUN_148d90230(void)

void FUN_148d90230(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1441c12ac(lVar1,0xffffffff,param_2,&DAT_14c9485f0);
      return;
    }
  }
  return;
}



// FUNCTION 148d9027e FUN_148d9027e body=267 status=ok
// SIG undefined FUN_148d9027e(void)

ulonglong FUN_148d9027e(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined7 uVar6;
  void *_Src;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar7 = (longlong)local_30;
  _Src = (void *)*param_2;
  uVar6 = (undefined7)((ulonglong)_Src >> 8);
  if (lVar7 == 0) {
    local_2c = 0;
    iVar4 = (int)param_1[1];
    if (iVar4 == 0) {
      _Src = (void *)CONCAT71(uVar6,1);
      goto LAB_148d9035d;
    }
    iVar5 = 0;
LAB_148d9034b:
    bVar9 = iVar4 + iVar5 == 1;
LAB_148d90350:
    _Src = (void *)CONCAT71((int7)((ulonglong)_Src >> 8),bVar9);
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar7 * 2);
    iVar4 = (int)param_1[1];
    iVar5 = local_30;
    if (iVar4 != local_30) goto LAB_148d9034b;
    _Src = (void *)CONCAT71(uVar6,1);
    if (1 < local_30) {
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*param_1 + lVar7);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)local_38 + lVar7);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148d9030f;
          }
          iVar4 = uVar3 - uVar8;
          goto LAB_148d90382;
        }
        if (uVar1 == 0) break;
LAB_148d9030f:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
LAB_148d90382:
      bVar9 = iVar4 == 0;
      goto LAB_148d90350;
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148d9035d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)_Src & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d9038a FUN_148d9038a body=624 status=ok
// SIG undefined FUN_148d9038a(void)

undefined8 FUN_148d9038a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + 0x170) != 0) &&
      (plVar8 = *(longlong **)(param_1 + 0x178), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    iVar6 = (int)plVar8[1];
    uVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_148d90416;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar12 = iVar6 == iVar4;
      if (bVar12) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_1 + 0x170);
LAB_148d90416:
    FUN_146048f14(uVar7,&local_58);
    local_68 = (void *)0x0;
    local_60 = *(int *)(param_2 + 1);
    lVar10 = (longlong)local_60;
    _Src = (void *)*param_2;
    if (lVar10 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,_Src,lVar10 * 2);
    }
    cVar5 = FUN_148d9027e(&local_58,&local_68);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
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
    if (cVar5 != '\0') {
      FUN_14127b1cd(*param_3,(int)param_3[1]);
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != 0) {
        FUN_1459b6c3c(param_3,0);
      }
      plVar8 = *(longlong **)(param_1 + 0x178);
      if (plVar8 == (longlong *)0x0) {
LAB_148d9052d:
        FUN_14101cf30(0,&local_58);
      }
      else {
        iVar6 = (int)plVar8[1];
        do {
          if (iVar6 == 0) goto LAB_148d9052d;
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar12 = iVar6 == iVar4;
          if (bVar12) {
            *(int *)(plVar8 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar12);
        FUN_14101cf30(*(undefined8 *)(param_1 + 0x170),&local_58);
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
      lVar10 = local_58;
      lVar11 = (longlong)local_50;
      if (lVar11 == 0) {
        local_50 = 0;
      }
      else {
        lVar9 = 0;
        do {
          uVar7 = **(undefined8 **)(lVar10 + lVar9);
          plVar8 = (longlong *)(*(undefined8 **)(lVar10 + lVar9))[1];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          iVar6 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
            FUN_1413eac7e(param_3,iVar6);
          }
          lVar3 = *param_3;
          *(undefined8 *)(lVar3 + (longlong)iVar6 * 0x10) = uVar7;
          *(longlong **)(lVar3 + 8 + (longlong)iVar6 * 0x10) = plVar8;
          if (plVar8 != (longlong *)0x0) {
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
          }
          lVar9 = lVar9 + 0x10;
        } while (lVar11 * 0x10 != lVar9);
      }
      FUN_14101cee4(local_58,local_50);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar7 = 1;
      goto LAB_148d903ca;
    }
  }
  uVar7 = 0;
LAB_148d903ca:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148d905fc FUN_148d905fc body=439 status=ok
// SIG undefined FUN_148d905fc(void)

undefined4 FUN_148d905fc(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + 0x170) != 0) &&
      (plVar9 = *(longlong **)(param_1 + 0x178), plVar9 != (longlong *)0x0)) && (0 < (int)plVar9[1])
     ) {
    iVar5 = (int)plVar9[1];
    uVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_148d90691;
      }
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    uVar7 = *(undefined8 *)(param_1 + 0x170);
LAB_148d90691:
    FUN_146048f14(uVar7,local_58);
    local_68 = (void *)0x0;
    local_60 = *(int *)(param_2 + 1);
    lVar8 = (longlong)local_60;
    _Src = (void *)*param_2;
    if (lVar8 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,_Src,lVar8 * 2);
    }
    cVar4 = FUN_148d9027e(local_58,&local_68);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
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
    if (cVar4 != '\0') {
      plVar9 = *(longlong **)(param_1 + 0x178);
      if (plVar9 == (longlong *)0x0) {
LAB_148d907a0:
        uVar6 = FUN_148daa616(0,param_3,param_4);
      }
      else {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) goto LAB_148d907a0;
          LOCK();
          iVar3 = (int)plVar9[1];
          bVar10 = iVar5 == iVar3;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar10);
        uVar6 = FUN_148daa616(*(undefined8 *)(param_1 + 0x170),param_3,param_4);
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
      goto LAB_148d9063d;
    }
  }
  uVar6 = 0;
LAB_148d9063d:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148d907b4 FUN_148d907b4 body=516 status=ok
// SIG undefined FUN_148d907b4(void)

ulonglong FUN_148d907b4(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4
                       )

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + 0x170) != 0) &&
      (plVar11 = *(longlong **)(param_1 + 0x178), plVar11 != (longlong *)0x0)) &&
     (0 < (int)plVar11[1])) {
    iVar5 = (int)plVar11[1];
    uVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar11 = (longlong *)0x0;
        goto LAB_148d90849;
      }
      LOCK();
      iVar3 = (int)plVar11[1];
      bVar12 = iVar5 == iVar3;
      if (bVar12) {
        *(int *)(plVar11 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_1 + 0x170);
LAB_148d90849:
    FUN_146048f14(uVar7,local_58);
    local_68 = (void *)0x0;
    local_60 = *(int *)(param_2 + 1);
    lVar10 = (longlong)local_60;
    _Src = (void *)*param_2;
    if (lVar10 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,_Src,lVar10 * 2);
    }
    cVar4 = FUN_148d9027e(local_58,&local_68);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (plVar11 != (longlong *)0x0) {
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
    if (cVar4 != '\0') {
      plVar11 = *(longlong **)(param_1 + 0x178);
      if (plVar11 == (longlong *)0x0) {
LAB_148d90947:
        uVar6 = FUN_143f38cb2(0);
        *param_3 = uVar6;
      }
      else {
        iVar5 = (int)plVar11[1];
        do {
          if (iVar5 == 0) goto LAB_148d90947;
          LOCK();
          iVar3 = (int)plVar11[1];
          bVar12 = iVar5 == iVar3;
          if (bVar12) {
            *(int *)(plVar11 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar12);
        uVar6 = FUN_143f38cb2(*(undefined8 *)(param_1 + 0x170));
        *param_3 = uVar6;
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
      plVar11 = *(longlong **)(param_1 + 0x178);
      uVar9 = (undefined7)((ulonglong)param_4 >> 8);
      if (plVar11 == (longlong *)0x0) {
LAB_148d909a8:
        uVar6 = FUN_14148f09a(0);
        *param_4 = uVar6;
        uVar8 = CONCAT71(uVar9,1);
      }
      else {
        iVar5 = (int)plVar11[1];
        do {
          if (iVar5 == 0) goto LAB_148d909a8;
          LOCK();
          iVar3 = (int)plVar11[1];
          bVar12 = iVar5 == iVar3;
          if (bVar12) {
            *(int *)(plVar11 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar12);
        uVar6 = FUN_14148f09a(*(undefined8 *)(param_1 + 0x170));
        *param_4 = uVar6;
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        uVar8 = CONCAT71(uVar9,1);
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
      goto LAB_148d907f5;
    }
  }
  uVar8 = 0;
LAB_148d907f5:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 148d909ba FUN_148d909ba body=443 status=ok
// SIG undefined FUN_148d909ba(void)

undefined4 FUN_148d909ba(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = 0;
  if (((*(longlong *)(param_1 + 0x170) != 0) &&
      (plVar9 = *(longlong **)(param_1 + 0x178), plVar9 != (longlong *)0x0)) && (0 < (int)plVar9[1])
     ) {
    iVar5 = (int)plVar9[1];
    uVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_148d90a4f;
      }
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    uVar7 = *(undefined8 *)(param_1 + 0x170);
LAB_148d90a4f:
    FUN_146048f14(uVar7,local_58);
    local_68 = (void *)0x0;
    local_60 = *(int *)(param_2 + 1);
    lVar8 = (longlong)local_60;
    _Src = (void *)*param_2;
    if (lVar8 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,_Src,lVar8 * 2);
    }
    cVar4 = FUN_148d9027e(local_58,&local_68);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
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
    uVar6 = 0;
    if (cVar4 != '\0') {
      plVar9 = *(longlong **)(param_1 + 0x178);
      if (plVar9 == (longlong *)0x0) {
LAB_148d90b62:
        uVar6 = FUN_148daa62a(0,param_3,param_4);
      }
      else {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) goto LAB_148d90b62;
          LOCK();
          iVar3 = (int)plVar9[1];
          bVar10 = iVar5 == iVar3;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar10);
        uVar6 = FUN_148daa62a(*(undefined8 *)(param_1 + 0x170),param_3,param_4);
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
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148d90b76 FUN_148d90b76 body=309 status=ok
// SIG undefined FUN_148d90b76(void)

void FUN_148d90b76(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_145d53b76();
  if (cVar2 == '\0') {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
    if (lVar3 != 0) {
      lVar4 = FUN_1403ca142();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        FUN_145bd6256(param_1 + 0x180);
        plVar1 = *(longlong **)(param_1 + 0x20);
        local_40 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1);
        }
        local_38 = *(undefined4 *)(param_1 + 0x28);
        FUN_144a5dc74(local_50);
        FUN_140008f88(param_1 + 0x20,local_50);
        if (local_50[0] != (longlong *)0x0) {
          (**(code **)(*local_50[0] + 0x10))();
        }
        FUN_148d31758(lVar3,1,&local_40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_1458774f4();
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
        *(undefined1 *)(*(longlong *)(lVar3 + 0x30) + 0x78) = 0;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d90cac FUN_148d90cac body=200 status=ok
// SIG undefined FUN_148d90cac(void)

void FUN_148d90cac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((((*(longlong *)(param_1 + 0x170) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) &&
      (0 < *(int *)(*(longlong *)(param_1 + 0x178) + 8))) &&
     (((lVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))(), lVar6 != 0 &&
       (*(longlong *)(lVar6 + 0x1f0) != 0)) &&
      ((lVar6 = FUN_141060562(), lVar6 != 0 && (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0)))))
     ) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    plVar3 = *(longlong **)(param_1 + 0x178);
    if (plVar3 == (longlong *)0x0) {
LAB_148d90d67:
      FUN_143f26238(lVar6,0);
      return;
    }
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d90d67;
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
    FUN_143f26238(lVar6,*(undefined8 *)(param_1 + 0x170));
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
                    /* WARNING: Could not recover jumptable at 0x000148d90d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d90d74 FUN_148d90d74 body=297 status=ok
// SIG undefined FUN_148d90d74(void)

void FUN_148d90d74(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar7 = FUN_1414e62ca();
    if (cVar7 != '\0') {
      FUN_14101cf30(*(undefined8 *)(param_1 + 0x50),&local_50);
      lVar6 = local_50;
      lVar8 = (longlong)local_48;
      if (lVar8 == 0) {
        local_48 = 0;
      }
      else {
        lVar9 = 0;
        do {
          cVar7 = FUN_14101cfac(param_1,*(undefined8 *)(lVar6 + lVar9));
          if (cVar7 == '\0') {
            puVar3 = *(undefined8 **)(lVar6 + lVar9);
            uVar4 = *puVar3;
            plVar5 = (longlong *)puVar3[1];
            if (plVar5 == (longlong *)0x0) {
              FUN_148d8f398(param_1,uVar4,1);
            }
            else {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              FUN_148d8f398(param_1,uVar4,1);
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
          lVar9 = lVar9 + 0x10;
        } while (lVar8 * 0x10 != lVar9);
      }
      FUN_14101cee4(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_148a9956a(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d90e9e FUN_148d90e9e body=341 status=ok
// SIG undefined FUN_148d90e9e(void)

void FUN_148d90e9e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + 0x170) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x178), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    return;
  }
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) {
      cVar5 = FUN_1414e62ca(0);
      goto joined_r0x000148d90f6b;
    }
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
  cVar5 = FUN_1414e62ca(*(undefined8 *)(param_1 + 0x170));
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
joined_r0x000148d90f6b:
  if (cVar5 == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x178);
    if (plVar3 != (longlong *)0x0) {
      iVar6 = (int)plVar3[1];
      while (iVar6 != 0) {
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        if (bVar10) {
          FUN_1441df376(*(undefined8 *)(param_1 + 0x170));
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return;
          }
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000148d90f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
    FUN_1441df376(0);
    return;
  }
  cVar5 = FUN_145d53b76(param_1);
  if (cVar5 != '\0') {
    return;
  }
  lVar7 = FUN_148a7b16c(param_1);
  if (lVar7 == 0) {
    return;
  }
  uVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  lVar7 = FUN_140334a94(lVar7,uVar8);
  if (lVar7 != 0) {
    lVar9 = FUN_144a5dd5e();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) goto LAB_148d90fe1;
  }
  lVar7 = 0;
LAB_148d90fe1:
  FUN_148d8fb58(param_1,lVar7);
  return;
}



// FUNCTION 148d90ff4 FUN_148d90ff4 body=120 status=ok
// SIG undefined FUN_148d90ff4(void)

ulonglong FUN_148d90ff4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (((*(longlong *)(param_1 + 0x170) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x178), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar7 = FUN_1441df6ac(0);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar6 = FUN_1441df6ac(*(undefined8 *)(param_1 + 0x170));
    uVar7 = (ulonglong)uVar6;
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
  return uVar7;
}



// FUNCTION 148d9106e FUN_148d9106e body=107 status=ok
// SIG undefined FUN_148d9106e(void)

undefined8 FUN_148d9106e(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_143f28fea();
  if (((cVar1 != '\0') && (lVar3 = FUN_1400b465c(param_1), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 != 0)) {
    lVar4 = FUN_140b6d0be();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) &&
       ((iVar2 = FUN_14133cd66(lVar3), iVar2 < 1 || (iVar2 = FUN_143f377a6(lVar3), 0 < iVar2)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148d910da FUN_148d910da body=1094 status=ok
// SIG undefined FUN_148d910da(void)

void FUN_148d910da(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8 [2];
  longlong *local_a8 [2];
  wchar_t **local_98;
  ulonglong *puStack_90;
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *puStack_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar3 = (**(code **)(*param_1 + 0x318))();
  if (cVar3 == '\0') goto LAB_148d9110e;
  cVar3 = FUN_146060a14(param_1,param_2);
  if (cVar3 != '\0') goto LAB_148d9110e;
  cVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (cVar3 == '\0') goto LAB_148d9110e;
  local_98 = (wchar_t **)0x0;
  puStack_90 = (ulonglong *)0x0;
  plVar4 = (longlong *)FUN_140a68038(1);
  if (plVar4 == (longlong *)0x0) {
LAB_148d9116f:
    local_58 = L"PlayerWantsSplitscreenJoinTitle";
    local_50 = 0x1f;
    FUN_1446e940c(local_e4,&local_58);
    local_58 = L"OakOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_e8,&local_58);
    FUN_140208bae(local_a8,local_e8,local_e4,L"A player wants to join!");
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x110))(local_58,&local_68,param_2);
      (**(code **)(*(longlong *)local_58 + 0x148))(local_58,&local_78,param_2);
      if (local_98 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      local_98 = local_78;
      FUN_14614ca90(&local_78,&local_98,&local_68);
      if (local_98 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      local_98 = local_78;
      puStack_90 = puStack_70;
      plVar4 = (longlong *)CONCAT44(uStack_5c,local_60);
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
    plVar4 = (longlong *)CONCAT44(uStack_4c,local_50);
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
    if ((int)puStack_90 < 2) goto LAB_148d9116f;
    FUN_140009b9a(local_b8,&local_98);
    local_58 = L"PlayerWantsSplitscreenJoinTitleSpecific";
    local_50 = 0x27;
    FUN_1446e940c(local_dc,&local_58);
    local_58 = L"OakOnlineLoginManager";
    local_50 = 0x15;
    FUN_1446e940c(local_e0,&local_58);
    FUN_140208bae(local_d8,local_e0,local_dc,L"{0} wants to join!");
    FUN_14023409e(&local_c8,local_d8,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_b8);
    puStack_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_c8;
    local_80 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a8,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
  }
  local_58 = L"PlayerWantsSplitscreenJoinText_Game";
  local_50 = 0x23;
  FUN_1446e940c(&local_68,&local_58);
  local_58 = L"OakOnlineLoginManager";
  local_50 = 0x15;
  FUN_1446e940c(&local_78,&local_58);
  FUN_140208bae(&local_58,&local_78,&local_68,L"Join from the pause menu.");
  FUN_148d91522(param_1,local_a8,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (local_98 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
LAB_148d9110e:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d91522 FUN_148d91522 body=75 status=ok
// SIG undefined FUN_148d91522(void)

void FUN_148d91522(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1458d9546(lVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148d9156e FUN_148d9156e body=70 status=ok
// SIG undefined FUN_148d9156e(void)

undefined8 FUN_148d9156e(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*(char *)(lVar1 + 0x4d9) != '\0');
    }
  }
  return 0;
}



// FUNCTION 148d915b4 FUN_148d915b4 body=78 status=ok
// SIG undefined FUN_148d915b4(void)

void FUN_148d915b4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148d31420(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148d91602 FUN_148d91602 body=69 status=ok
// SIG undefined FUN_148d91602(void)

void FUN_148d91602(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148d313a4(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148d91648 FUN_148d91648 body=84 status=ok
// SIG undefined FUN_148d91648(void)

void FUN_148d91648(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1400b465c();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148d91699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x450))(plVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148d9169c FUN_148d9169c body=76 status=ok
// SIG undefined FUN_148d9169c(void)

void FUN_148d9169c(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148d318f0(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148d916e8 FUN_148d916e8 body=80 status=ok
// SIG undefined FUN_148d916e8(void)

void FUN_148d916e8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      uVar2 = FUN_140e82300();
      FUN_1458d9546(lVar1,uVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148d91738 FUN_148d91738 body=37 status=ok
// SIG undefined FUN_148d91738(void)

void FUN_148d91738(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e82300();
  FUN_1458d9546(param_1,uVar1,param_2);
  return;
}



// FUNCTION 148d9175e FUN_148d9175e body=129 status=ok
// SIG undefined FUN_148d9175e(void)

void FUN_148d9175e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      FUN_148d8ee5a(lVar1,param_2,local_28);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d917e0 FUN_148d917e0 body=78 status=ok
// SIG undefined FUN_148d917e0(void)

void FUN_148d917e0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1441c12ac(lVar1,0xffffffff,param_2,&DAT_14c9485f0);
      return;
    }
  }
  return;
}



// FUNCTION 148d9182e FUN_148d9182e body=73 status=ok
// SIG undefined FUN_148d9182e(void)

void FUN_148d9182e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1441bed2c(lVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148d91878 FUN_148d91878 body=33 status=ok
// SIG undefined FUN_148d91878(void)

undefined8 FUN_148d91878(undefined8 param_1,undefined8 param_2,byte param_3)

{
  FUN_148d9189a(param_2,param_3 ^ 1);
  return param_2;
}



// FUNCTION 148d9189a FUN_148d9189a body=245 status=ok
// SIG undefined FUN_148d9189a(void)

undefined8 FUN_148d9189a(undefined8 param_1,int param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    local_30 = L"ServiceLost_Spark";
    local_28 = 0x11;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"OakOnlineMessaging";
    local_28 = 0x12;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"Your connection to Gearbox Software SHiFT has been lost.";
  }
  else {
    local_30 = L"ServiceLost";
    local_28 = 0xb;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"OakOnlineMessaging";
    local_28 = 0x12;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"Your connection to the online service was lost.";
  }
  FUN_140208bae(param_1,local_38,local_34,pwVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d91990 FUN_148d91990 body=68 status=ok
// SIG undefined FUN_148d91990(void)

void FUN_148d91990(longlong *param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_148d919d4(lVar1,param_2 ^ 1);
      return;
    }
  }
  return;
}



// FUNCTION 148d919d4 FUN_148d919d4 body=244 status=ok
// SIG undefined FUN_148d919d4(void)

void FUN_148d919d4(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong *local_50 [2];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_148d929ba(param_1,param_2,0);
  if (cVar1 != '\0') {
    FUN_148d9189a(local_50,param_2 & 0xffffffff);
    local_40 = L"ServiceLostHeader";
    local_38 = 0x11;
    FUN_1446e940c(local_54,&local_40);
    local_40 = L"OakOnlineMessaging";
    local_38 = 0x12;
    FUN_1446e940c(local_58,&local_40);
    FUN_140208bae(&local_40,local_58,local_54,L"Connection Lost");
    FUN_1458d9546(param_1,&local_40,local_50);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d91aca FUN_148d91aca body=68 status=ok
// SIG undefined FUN_148d91aca(void)

void FUN_148d91aca(longlong *param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_148d91b0e(lVar1,param_2 ^ 1);
      return;
    }
  }
  return;
}



// FUNCTION 148d91b0e FUN_148d91b0e body=247 status=ok
// SIG undefined FUN_148d91b0e(void)

void FUN_148d91b0e(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong *local_50 [2];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_148d929ba(param_1,param_2,1);
  if (cVar1 != '\0') {
    FUN_148d928c4(local_50,param_2 & 0xffffffff);
    local_40 = L"ServiceRestoredHeader";
    local_38 = 0x15;
    FUN_1446e940c(local_54,&local_40);
    local_40 = L"OakOnlineMessaging";
    local_38 = 0x12;
    FUN_1446e940c(local_58,&local_40);
    FUN_140208bae(&local_40,local_58,local_54,L"Connection Active");
    FUN_1458d9546(param_1,&local_40,local_50);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d91c06 FUN_148d91c06 body=265 status=ok
// SIG undefined FUN_148d91c06(void)

void FUN_148d91c06(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[0x45] == '\0') {
    *(undefined1 *)(param_1 + 0x45) = 1;
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar2 = FUN_14583d3ae();
      if (lVar2 != 0) {
        local_40 = L"AddingSplitscreenPlayer_NoName";
        local_38 = 0x1e;
        FUN_1446e940c(local_44,&local_40);
        local_40 = L"OakOnlineLoginManager";
        local_38 = 0x15;
        FUN_1446e940c(local_48,&local_40);
        FUN_140208bae(&local_40,local_48,local_44,L"Logging in splitscreen player...");
        uVar3 = FUN_140e82300();
        uVar1 = FUN_1441c1730(lVar2,uVar3,&local_40);
        *(undefined4 *)((longlong)param_1 + 0x22c) = uVar1;
        if (local_40 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_40 + 0x10))();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d91d10 FUN_148d91d10 body=538 status=ok
// SIG undefined FUN_148d91d10(void)

void FUN_148d91d10(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_14583d3ae();
    if (lVar3 != 0) {
      FUN_140009b9a(local_b0,param_2);
      local_60 = L"AddingSplitscreenPlayer";
      local_58 = 0x17;
      FUN_1446e940c(local_d4,&local_60);
      local_60 = L"OakOnlineLoginManager";
      local_58 = 0x15;
      FUN_1446e940c(local_d8,&local_60);
      FUN_140208bae(local_d0,local_d8,local_d4,L"Logging in {0}...");
      FUN_14023409e(&local_c0,local_d0,1);
      local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
      FUN_14023423e(local_50,local_b0);
      local_78 = &local_40;
      local_80 = &local_60;
      FUN_14010d304(&local_70);
      local_90 = local_c0;
      local_88 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_a0,&local_90,&local_70);
      FUN_14007f2db(local_70,local_68);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar2 = (int *)((longlong)local_b8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_b8 + 0x10))(local_b8);
          }
        }
      }
      if (local_b0[0] != (longlong *)0x0) {
        (**(code **)(*local_b0[0] + 0x10))();
      }
      FUN_1441bfab6(lVar3,*(undefined4 *)((longlong)param_1 + 0x22c),local_a0);
      if (local_a0[0] != (longlong *)0x0) {
        (**(code **)(*local_a0[0] + 0x10))();
      }
      if (local_d0[0] != (longlong *)0x0) {
        (**(code **)(*local_d0[0] + 0x10))();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d91f2c FUN_148d91f2c body=213 status=ok
// SIG undefined FUN_148d91f2c(void)

void FUN_148d91f2c(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_145a420f6(lVar1);
      if (lVar2 != 0) {
        FUN_148a7d2e0(param_1,local_38);
        FUN_148d308c2(lVar1,local_48);
        FUN_148d91522(param_1,local_38,local_48);
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        if (local_38[0] != (longlong *)0x0) {
          (**(code **)(*local_38[0] + 0x10))();
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_148a7d37a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d9200e FUN_148d9200e body=64 status=ok
// SIG undefined FUN_148d9200e(void)

void FUN_148d9200e(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_148d9275a(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148d9204e FUN_148d9204e body=560 status=ok
// SIG undefined FUN_148d9204e(void)

void FUN_148d9204e(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_78 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = FUN_1400b465c();
  lVar7 = FUN_14119d4d6(uVar6);
  if (lVar7 == 0) {
    local_78[0] = 1;
  }
  else {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar5 = FUN_14054d46e(&DAT_14c846b20,L"autopatch");
    if (cVar5 == '\0') {
      lVar7 = FUN_145da44aa(lVar7);
      if (lVar7 != 0) {
        lVar2 = *param_2;
        lVar3 = param_2[2];
        param_2[2] = 0;
        local_48 = param_2[6];
        uStack_40 = param_2[7];
        local_58 = (undefined4)param_2[4];
        uStack_54 = *(undefined4 *)((longlong)param_2 + 0x24);
        uStack_50 = (undefined4)param_2[5];
        uStack_4c = *(undefined4 *)((longlong)param_2 + 0x2c);
        if (lVar2 != 0) {
          *param_2 = 0;
        }
        local_88 = (undefined8 *)0x0;
        local_80 = 0;
        FUN_1446efa72(&local_88,0,6,0x10);
        local_80 = 6;
        *local_88 = &PTR_LAB_14b972ed0;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_88[2] = lVar8;
        *local_88 = &PTR_FUN_14b98a6b0;
        local_88[4] = lVar2;
        local_88[6] = lVar3;
        *(undefined4 *)(local_88 + 8) = local_58;
        *(undefined4 *)((longlong)local_88 + 0x44) = uStack_54;
        *(undefined4 *)(local_88 + 9) = uStack_50;
        *(undefined4 *)((longlong)local_88 + 0x4c) = uStack_4c;
        *(undefined4 *)(local_88 + 10) = (undefined4)local_48;
        *(undefined4 *)((longlong)local_88 + 0x54) = local_48._4_4_;
        *(undefined4 *)(local_88 + 0xb) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)local_88 + 0x5c) = uStack_40._4_4_;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cbce228) {
          FUN_144b3d300(&DAT_14cbce228);
          if (DAT_14cbce228 == -1) {
            FUN_1446ddc76(&DAT_14cbce220,"to_patch_or_not_to_patch",1);
            _Init_thread_footer(&DAT_14cbce228);
          }
        }
        FUN_144268f62(lVar7,&DAT_14cbce220,&local_88,0);
        FUN_1449db362(&local_88);
      }
      goto LAB_148d920d5;
    }
    local_78[0] = 0;
  }
  pcVar1 = (code *)*param_2;
  plVar9 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar9 = (longlong *)param_2[2];
  }
  uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
  (*pcVar1)(uVar6,local_78);
LAB_148d920d5:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d92280 FUN_148d92280 body=71 status=ok
// SIG undefined FUN_148d92280(void)

void FUN_148d92280(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14094c9c2();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_145ac0972(*(longlong *)(lVar1 + 0x30),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148d922c8 FUN_148d922c8 body=71 status=ok
// SIG undefined FUN_148d922c8(void)

void FUN_148d922c8(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14094c9c2();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_1441deb98(*(longlong *)(lVar1 + 0x30),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148d92310 FUN_148d92310 body=75 status=ok
// SIG undefined FUN_148d92310(void)

undefined8 FUN_148d92310(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (param_1 = *(longlong **)(lVar2 + 0x1f0), param_1 != (longlong *)0x0)) {
    lVar2 = FUN_14094c9c2();
    if ((lVar2 != 0) && (param_1 = (longlong *)0x0, *(longlong *)(lVar2 + 0x30) != 0)) {
      uVar3 = FUN_148da8294(*(longlong *)(lVar2 + 0x30),param_2);
      bVar5 = (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar1 = 1;
      goto LAB_148d9234f;
    }
  }
  bVar5 = (byte)param_1;
  bVar1 = 0;
  uVar4 = 0;
LAB_148d9234f:
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 148d9235c FUN_148d9235c body=79 status=ok
// SIG undefined FUN_148d9235c(void)

void FUN_148d9235c(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14094c9c2();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_148da82f8(*(longlong *)(lVar1 + 0x30),param_2);
    }
  }
  FUN_148a7daf2(param_1,param_2);
  return;
}



// FUNCTION 148d923ac FUN_148d923ac body=258 status=ok
// SIG undefined FUN_148d923ac(void)

undefined8 * FUN_148d923ac(undefined8 param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == -1) {
LAB_148d92458:
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)FUN_140a68038(1);
    if (plVar3 == (longlong *)0x0) goto LAB_148d92458;
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_38);
    if (local_38 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      plVar4 = (longlong *)0x0;
    }
    else {
      (**(code **)(*local_38 + 0x110))(local_38,&local_48,param_3);
      plVar4 = local_48;
      plVar3 = local_40;
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
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
      goto LAB_148d92460;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148d92460:
  if (plVar3 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d924b0 FUN_148d924b0 body=430 status=ok
// SIG undefined FUN_148d924b0(void)

undefined4 FUN_148d924b0(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 unaff_EBX;
  int iVar5;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90 [2];
  undefined1 local_80 [24];
  int local_68;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar2 = FUN_14144bed0();
  if (cVar2 == '\0') {
    FUN_148a7d4a2(param_1,local_90);
    local_b0 = 0x100000000;
    local_a0 = 0xffffffff;
    uStack_98 = 0;
    uStack_a8 = local_80;
    if (local_68 == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_b0);
      iVar5 = local_68;
    }
    uStack_b8 = CONCAT44(uStack_94,uStack_98);
    local_c0 = local_a0;
    uVar1 = local_c0;
    local_d0 = (undefined4)local_b0;
    uStack_cc = local_b0._4_4_;
    uStack_c8 = (undefined4)uStack_a8;
    uStack_c4 = uStack_a8._4_4_;
    local_c0._4_4_ = (int)((ulonglong)local_a0 >> 0x20);
    local_d8 = local_90;
    local_c0 = uVar1;
    if ((local_c0._4_4_ == iVar5) && (uStack_a8 == local_80)) {
      cVar2 = '\x01';
    }
    else {
      iVar3 = local_c0._4_4_;
      do {
        unaff_EBX = *(undefined4 *)(*local_d8 + (longlong)iVar3 * 0xc);
        cVar2 = FUN_143f2ac1a(param_1,unaff_EBX);
        if (cVar2 == '\0') break;
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~uStack_cc);
        FUN_1449c0562(&local_d0);
        iVar3 = local_c0._4_4_;
      } while (local_d8 != local_90 ||
               ((undefined1 *)CONCAT44(uStack_c4,uStack_c8) != local_80 || local_c0._4_4_ != iVar5))
      ;
    }
    local_48 = 0;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(local_90);
    if (cVar2 == '\0') goto LAB_148d925c1;
  }
  else {
    lVar4 = FUN_1400b465c(param_1);
    if ((lVar4 != 0) && (lVar4 = FUN_14119d4d6(lVar4), lVar4 != 0)) {
      unaff_EBX = *(undefined4 *)(lVar4 + 0xe0);
      goto LAB_148d925c1;
    }
  }
  unaff_EBX = 0xffffffff;
LAB_148d925c1:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBX;
}



// FUNCTION 148d92660 FUN_148d92660 body=190 status=ok
// SIG undefined FUN_148d92660(void)

longlong * FUN_148d92660(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14b98a8e0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_148d9de0a(puVar1 + 1,param_3);
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
  puVar1[3] = lVar3;
  *puVar1 = &PTR_FUN_14b98a870;
  puVar1[4] = 0;
  FUN_14485c47a(puVar1 + 4,param_2);
  puVar1[5] = FUN_148d9271e;
  return param_1;
}



// FUNCTION 148d9271e FUN_148d9271e body=59 status=ok
// SIG undefined FUN_148d9271e(void)

void FUN_148d9271e(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  
  if (((int)param_4[1] != 0) && (plVar1 = (longlong *)*param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*param_2 != DAT_14cbce268);
  }
  FUN_1449db362(param_4);
  return;
}



// FUNCTION 148d9275a FUN_148d9275a body=56 status=ok
// SIG undefined FUN_148d9275a(void)

void FUN_148d9275a(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1458d9664(param_1,0xffffffff);
  if (lVar1 != 0) {
    lVar1 = FUN_145da44aa(lVar1);
    if (lVar1 != 0) {
      FUN_146142a30(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148d92792 FUN_148d92792 body=304 status=ok
// SIG undefined FUN_148d92792(void)

void FUN_148d92792(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x38)) {
    plVar1 = (longlong *)(param_1 + 0x30);
    local_40 = param_1 + 0x40;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_1449c0562(&local_48);
    }
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_68 = local_48;
    local_60 = local_40;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = plVar1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x18)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        uVar2 = *(undefined4 *)(*local_70 + 4 + (longlong)iVar4 * 0x10);
        lVar5 = FUN_1458d9664(param_1,*(undefined4 *)(*local_70 + (longlong)iVar4 * 0x10));
        if ((lVar5 != 0) && (lVar5 = FUN_145da44aa(lVar5), lVar5 != 0)) {
          FUN_146142a30(lVar5,uVar2);
        }
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x18));
    }
    local_58 = uVar3;
    FUN_14010afec(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d928c4 FUN_148d928c4 body=245 status=ok
// SIG undefined FUN_148d928c4(void)

undefined8 FUN_148d928c4(undefined8 param_1,int param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    local_30 = L"ServiceRestored_Spark";
    local_28 = 0x15;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"OakOnlineMessaging";
    local_28 = 0x12;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"You are now connected to Gearbox Software SHiFT.";
  }
  else {
    local_30 = L"ServiceRestored";
    local_28 = 0xf;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"OakOnlineMessaging";
    local_28 = 0x12;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"You are now connected to the online service.";
  }
  FUN_140208bae(param_1,local_38,local_34,pwVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d929ba FUN_148d929ba body=208 status=ok
// SIG undefined FUN_148d929ba(void)

undefined8 FUN_148d929ba(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  uint *local_20;
  int *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_24 = param_3;
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar5 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x118);
    }
    iVar2 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x120) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar5 = *(longlong *)(param_1 + 0xd8);
      do {
        lVar1 = lVar5 + (longlong)iVar2 * 0x10;
        if (*(uint *)(lVar5 + (longlong)iVar2 * 0x10) == param_2) {
          if ((lVar1 != 0) && (piVar3 = (int *)(lVar1 + 4), piVar3 != (int *)0x0)) {
            if (*piVar3 == param_3) {
              uVar4 = 0;
              goto LAB_148d92a6f;
            }
            *piVar3 = param_3;
            goto LAB_148d92a6d;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  local_20 = &local_28;
  local_18 = &local_24;
  FUN_148d9e4c8((longlong *)(param_1 + 0xd8),local_c);
LAB_148d92a6d:
  uVar4 = 1;
LAB_148d92a6f:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d92a8c FUN_148d92a8c body=3327 status=ok
// SIG undefined FUN_148d92a8c(void)

void FUN_148d92a8c(wchar_t ******param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  wchar_t *****pppppwVar14;
  wchar_t ******ppppppwVar15;
  longlong **pplVar16;
  longlong *plVar17;
  wchar_t *******pppppppwVar18;
  ulonglong uVar19;
  wchar_t ******ppppppwVar20;
  longlong *plVar21;
  wchar_t *****pppppwVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_208 [32];
  wchar_t ******local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  uint local_1bc;
  wchar_t ****local_1b8;
  undefined1 local_1ac [4];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  wchar_t ******local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined8 uStack_160;
  wchar_t *****local_158;
  longlong *plStack_150;
  longlong local_148;
  ulonglong uStack_140;
  wchar_t ******local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  wchar_t *****local_118;
  undefined8 uStack_110;
  longlong local_108;
  ulonglong uStack_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  longlong *local_b8 [2];
  longlong *local_a8 [2];
  wchar_t *****local_98;
  undefined8 uStack_90;
  wchar_t *****local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar10 = FUN_1458d9664(param_1,param_3);
  if (lVar10 == 0) goto LAB_148d92afa;
  lVar11 = FUN_14030d4a0();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
      != lVar11 + 0x30)) goto LAB_148d92afa;
  local_98 = (wchar_t *****)0x14b984a66;
  uStack_90._0_4_ = 0x22;
  FUN_1446e940c(local_b8,&local_98);
  local_98 = (wchar_t *****)0x14b984070;
  uStack_90._0_4_ = 0x12;
  FUN_1446e940c(local_c8,&local_98);
  FUN_140208bae(local_a8,local_c8,local_b8,
                L"You can view the profile of the following previous party member:[newline] 1. {Friend1}"
               );
  local_98 = (wchar_t *****)0x14b984b8a;
  uStack_90._0_4_ = 0x23;
  FUN_1446e940c(local_c8,&local_98);
  local_98 = (wchar_t *****)0x14b984070;
  uStack_90._0_4_ = 0x12;
  FUN_1446e940c(local_d8,&local_98);
  FUN_140208bae(local_b8,local_d8,local_c8,
                L"You can view the profiles of the following previous party members:[newline] 1. {Friend1}[newline] 2. {Friend2}"
               );
  local_98 = (wchar_t *****)0x14b984cdc;
  uStack_90._0_4_ = 0x25;
  FUN_1446e940c(local_d8,&local_98);
  local_98 = (wchar_t *****)0x14b984070;
  uStack_90._0_4_ = 0x12;
  FUN_1446e940c(local_e8,&local_98);
  FUN_140208bae(local_c8,local_e8,local_d8,
                L"You can view the profiles of the following previous party members:[newline] 1. {Friend1}[newline] 2. {Friend2}[newline] 3. {Friend3}"
               );
  local_98 = (wchar_t *****)0x14b984d46;
  uStack_90._0_4_ = 0x27;
  FUN_1446e940c(local_e8,&local_98);
  local_98 = (wchar_t *****)0x14b984070;
  uStack_90._0_4_ = 0x12;
  FUN_1446e940c(local_f8,&local_98);
  FUN_140208bae(local_d8,local_f8,local_e8,L"View Profile 1");
  local_98 = (wchar_t *****)0x14b984db4;
  uStack_90._0_4_ = 0x27;
  FUN_1446e940c(local_f8,&local_98);
  local_98 = (wchar_t *****)0x14b984070;
  uStack_90._0_4_ = 0x12;
  FUN_1446e940c(&local_108,&local_98);
  FUN_140208bae(local_e8,&local_108,local_f8,L"View Profile 2");
  local_98 = (wchar_t *****)0x14b984e22;
  uStack_90._0_4_ = 0x29;
  FUN_1446e940c(&local_108,&local_98);
  local_98 = (wchar_t *****)0x14b984070;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x12);
  FUN_1446e940c(&local_118,&local_98);
  FUN_140208bae(local_f8,&local_118,&local_108,L"View Profile 3");
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (wchar_t *****)0x0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uVar12 = (*(code *)(*param_1)[0x30])(param_1);
  lVar11 = FUN_140b70372(uVar12);
  if ((lVar11 != 0) && ((longlong)(int)param_2[1] != 0)) {
    plVar17 = (longlong *)*param_2;
    plVar21 = plVar17 + (longlong)(int)param_2[1] * 7;
    do {
      if (((plVar17[2] != 0) && (*plVar17 != 0)) && (cVar6 = FUN_145976d86(lVar10), cVar6 != '\0'))
      {
        cVar6 = FUN_140b70752(lVar11,param_3,*plVar17);
        if (cVar6 == '\0') {
          bVar7 = 0;
        }
        else {
          bVar7 = FUN_140b70752(lVar11,param_3,plVar17[2]);
          bVar7 = bVar7 ^ 1;
        }
        local_138 = (wchar_t ******)0x0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = (wchar_t *****)0x0;
        plStack_150 = (longlong *)0x0;
        pppppppwVar18 = &local_138;
        local_1e8 = &local_158;
        cVar6 = FUN_1418bfe34(lVar10,plVar17,pppppppwVar18,&local_148);
        if (cVar6 != '\0') {
          FUN_145d1c6f4(&local_148,&local_138);
          if (bVar7 != 0) {
            local_98 = (wchar_t *****)0x0;
            uStack_90 = 0;
            local_168 = (longlong *)0x0;
            uStack_160 = 0;
            pppppppwVar18 = (wchar_t *******)&local_98;
            local_1e8 = &local_158;
            cVar6 = FUN_148a95f9e(lVar10,plVar17,pppppppwVar18,&local_168);
            if (cVar6 != '\0') {
              FUN_145d1c6f4(&local_168,&local_98);
              ppppppwVar20 = (wchar_t ******)&DAT_149dfb77a;
              if ((int)uStack_90 != 0) {
                ppppppwVar20 = (wchar_t ******)local_98;
              }
              pppppppwVar18 = (wchar_t *******)&DAT_149dfb77a;
              if ((int)uStack_130 != 0) {
                pppppppwVar18 = (wchar_t *******)local_138;
              }
              FUN_140002266(&local_178,L"[nowrap]%s(%s)[/nowrap]",pppppppwVar18,ppppppwVar20);
              if ((wchar_t *******)local_138 != (wchar_t *******)0x0) {
                FUN_1400020a8();
              }
              local_138 = local_178;
              uStack_130 = CONCAT44(uStack_16c,uStack_170);
            }
            if (local_168 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if ((wchar_t ******)local_98 != (wchar_t ******)0x0) {
              FUN_1400020a8();
            }
          }
          uVar5 = uStack_120;
          pppppwVar22 = (wchar_t *****)local_158[2];
          uVar19 = CONCAT71((int7)((ulonglong)pppppppwVar18 >> 8),1);
          if (pppppwVar22 == (wchar_t *****)0x0) {
LAB_148d930e4:
            pppppwVar22 = (wchar_t *****)0x0;
            pppppwVar14 = (wchar_t *****)0x0;
          }
          else {
            iVar9 = *(int *)(pppppwVar22 + 1);
            do {
              if (iVar9 == 0) goto LAB_148d930e4;
              LOCK();
              iVar3 = *(int *)(pppppwVar22 + 1);
              bVar24 = iVar9 == iVar3;
              if (bVar24) {
                *(int *)(pppppwVar22 + 1) = iVar9 + 1;
                iVar3 = iVar9;
              }
              iVar9 = iVar3;
              UNLOCK();
            } while (!bVar24);
            pppppwVar14 = (wchar_t *****)local_158[1];
            uVar19 = 0;
          }
          lVar23 = (longlong)(int)uStack_120;
          uVar8 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar8);
          if (uStack_120._4_4_ < uVar8) {
            local_1bc = (uint)uVar19;
            local_1b8 = (wchar_t ****)pppppwVar14;
            FUN_1413eac7e(&local_128,uVar5 & 0xffffffff);
            uVar19 = (ulonglong)local_1bc;
            pppppwVar14 = (wchar_t *****)local_1b8;
          }
          *(wchar_t ******)(local_128 + lVar23 * 0x10) = pppppwVar14;
          *(wchar_t ******)(local_128 + 8 + lVar23 * 0x10) = pppppwVar22;
          if ((char)uVar19 == '\0') {
            LOCK();
            *(int *)(pppppwVar22 + 1) = *(int *)(pppppwVar22 + 1) + 1;
            UNLOCK();
            LOCK();
            pppppwVar14 = pppppwVar22 + 1;
            *(int *)pppppwVar14 = *(int *)pppppwVar14 + -1;
            UNLOCK();
            if (*(int *)pppppwVar14 == 0) {
              (*(code *)**pppppwVar22)(pppppwVar22);
              LOCK();
              piVar2 = (int *)((longlong)pppppwVar22 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pppppwVar22)[2])(pppppwVar22);
              }
            }
          }
          FUN_140002266(&local_98,L"Friend%d",(int)uStack_100 + 1);
          if ((wchar_t ******)local_118 != (wchar_t ******)0x0) {
            FUN_1400020a8();
          }
          local_118 = local_98;
          uStack_110 = uStack_90;
          FUN_140009b9a(&local_168,&local_138);
          local_98 = (wchar_t *****)CONCAT44(local_98._4_4_,4);
          FUN_14023423e(&local_88,&local_168);
          FUN_1467e355c(&local_108,&local_118,&local_98);
          if (local_88 != (wchar_t *****)0x0) {
            (*(code *)(*local_88)[2])();
            local_88 = (wchar_t *****)0x0;
            local_80 = local_80 & 0xffffffff00000000;
          }
          if (local_168 != (longlong *)0x0) {
            (**(code **)(*local_168 + 0x10))();
          }
        }
        plVar4 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_150 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_150)(plStack_150);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        if ((wchar_t *******)local_138 != (wchar_t *******)0x0) {
          FUN_1400020a8();
        }
      }
      plVar17 = plVar17 + 7;
    } while (plVar17 != plVar21);
  }
  FUN_144a5dc74(&local_138);
  local_148 = 0;
  uStack_140 = 0;
  if (((int)uStack_100 != 0) && ((int)uStack_100 == (int)uStack_120)) {
    if ((int)uStack_100 == 3) {
      FUN_14023409e(local_1a8,local_c8,1);
      FUN_140233c04(&local_98,local_1a8,&local_108);
      FUN_140008f88(&local_138,&local_98);
      if ((wchar_t ******)local_98 != (wchar_t ******)0x0) {
        (*(code *)(*local_98)[2])();
      }
      FUN_1441c1dba(&local_148,local_d8,DAT_14cbce290);
      FUN_1441c1dba(&local_148,local_e8,DAT_14cbce298);
      puVar13 = &DAT_14cbce2a0;
      pplVar16 = local_f8;
    }
    else if ((int)uStack_100 == 2) {
      FUN_14023409e(local_198,local_b8,1);
      FUN_140233c04(&local_98,local_198,&local_108);
      FUN_140008f88(&local_138,&local_98);
      if ((wchar_t ******)local_98 != (wchar_t ******)0x0) {
        (*(code *)(*local_98)[2])();
      }
      FUN_1441c1dba(&local_148,local_d8,DAT_14cbce290);
      puVar13 = &DAT_14cbce298;
      pplVar16 = local_e8;
    }
    else {
      if ((int)uStack_100 != 1) goto LAB_148d93390;
      FUN_14023409e(local_188,local_a8,1);
      FUN_140233c04(&local_98,local_188,&local_108);
      FUN_140008f88(&local_138,&local_98);
      if ((wchar_t ******)local_98 != (wchar_t ******)0x0) {
        (*(code *)(*local_98)[2])();
      }
      puVar13 = &DAT_14cbce290;
      pplVar16 = local_d8;
    }
    FUN_1441c1dba(&local_148,pplVar16,*puVar13);
  }
LAB_148d93390:
  local_98 = (wchar_t *****)0x14b984ea6;
  uStack_90._0_4_ = 0x1f;
  FUN_1446e940c(&local_168,&local_98);
  local_98 = (wchar_t *****)0x14b984070;
  uStack_90._0_4_ = 0x12;
  FUN_1446e940c(&local_178,&local_98);
  FUN_140208bae(&local_158,&local_178,&local_168,L"View Profiles");
  local_98 = (wchar_t *****)0x14b98d144;
  uStack_90._0_4_ = 0xd;
  FUN_1446e940c(&local_178,&local_98);
  local_98 = (wchar_t *****)0x14b984070;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x12);
  FUN_1446e940c(local_1ac,&local_98);
  FUN_140208bae(&local_168,local_1ac,&local_178,L"Cancel");
  FUN_1441c1dba(&local_148,&local_168,DAT_14cbce278);
  lVar10 = FUN_1458d9664(param_1,0xffffffff);
  if ((lVar10 != 0) &&
     (lVar11 = FUN_145da44aa(lVar10), uVar5 = uStack_120, lVar10 = local_128, lVar11 != 0)) {
    uStack_90 = CONCAT44(uStack_90._4_4_,param_3);
    local_88 = (wchar_t *****)0x0;
    local_80 = CONCAT44(local_80._4_4_,(int)uStack_120);
    local_98 = (wchar_t *****)param_1;
    if ((int)uStack_120 == 0) {
      local_80 = uStack_120 & 0xffffffff;
    }
    else {
      FUN_1413eadba(&local_88,uStack_120 & 0xffffffff,0);
      FUN_1413ead8c(local_88,lVar10,uVar5 & 0xffffffff);
    }
    local_178 = (wchar_t ******)0x0;
    uStack_170 = 0;
    FUN_1446efa72(&local_178,0,4,0x10);
    ppppppwVar20 = local_178;
    uStack_170 = 4;
    *local_178 = (wchar_t *****)&PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    ppppppwVar15 = (wchar_t ******)(DAT_14c758608 + 1);
    lVar10 = DAT_14c758608 + 1;
    if (ppppppwVar15 == (wchar_t ******)0x0) {
      LOCK();
      UNLOCK();
      ppppppwVar15 = (wchar_t ******)(DAT_14c758608 + 2);
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_178[2] = (wchar_t *****)ppppppwVar15;
    *local_178 = (wchar_t *****)&PTR_FUN_14b98aa30;
    local_178[3] = (wchar_t *****)0x0;
    FUN_14485c47a(local_178 + 3,param_1);
    *(int *)(ppppppwVar20 + 5) = (int)uStack_90;
    ppppppwVar20[4] = local_98;
    ppppppwVar20[6] = local_88;
    local_88 = (wchar_t *****)0x0;
    *(undefined4 *)(ppppppwVar20 + 7) = (undefined4)local_80;
    *(undefined4 *)((longlong)ppppppwVar20 + 0x3c) = local_80._4_4_;
    local_80 = 0;
    local_1e0 = 0;
    local_1d0 = 1;
    local_1d8 = 0;
    local_1e8 = (wchar_t ******)&local_178;
    FUN_1459dd948(lVar11,&local_158,&local_138,&local_148);
    FUN_1449db362(&local_178);
    FUN_14127b1cd(local_88,local_80 & 0xffffffff);
    if (local_88 != (wchar_t *****)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x10))();
  }
  if ((wchar_t ******)local_158 != (wchar_t ******)0x0) {
    (*(code *)(*local_158)[2])();
  }
  FUN_140e0067b(local_148,uStack_140 & 0xffffffff);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((wchar_t *******)local_138 != (wchar_t *******)0x0) {
    (*(code *)(*local_138)[2])();
  }
  FUN_14127b1cd(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if ((wchar_t ******)local_118 != (wchar_t ******)0x0) {
    FUN_1400020a8();
  }
  FUN_14010f8af(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
LAB_148d92afa:
  if ((local_70 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d9378c FUN_148d9378c body=11 status=ok
// SIG undefined FUN_148d9378c(void)

void FUN_148d9378c(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x130) = param_2;
  FUN_1459703e8();
  return;
}



// FUNCTION 148d93798 FUN_148d93798 body=149 status=ok
// SIG undefined FUN_148d93798(void)

byte FUN_148d93798(longlong param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(&local_30,L"XMPP");
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == local_28) {
    bVar2 = true;
    if (1 < iVar1) {
      iVar1 = wcscmp(*(wchar_t **)(param_1 + 8),local_30);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = local_28 + iVar1 == 1;
  }
  if (local_30 != (wchar_t *)0x0) {
    FUN_1400020a8(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2 ^ 1;
}



// FUNCTION 148d9382e FUN_148d9382e body=35 status=ok
// SIG undefined FUN_148d9382e(void)

undefined8 FUN_148d9382e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_148d93798(param_3);
  FUN_148d9189a(param_2,uVar1);
  return param_2;
}



// FUNCTION 148d93852 FUN_148d93852 body=79 status=ok
// SIG undefined FUN_148d93852(void)

void FUN_148d93852(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_14583d3ae();
    if (lVar2 != 0) {
      uVar1 = FUN_148d93798(param_2);
      FUN_148d919d4(lVar2,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148d938a2 FUN_148d938a2 body=79 status=ok
// SIG undefined FUN_148d938a2(void)

void FUN_148d938a2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_14583d3ae();
    if (lVar2 != 0) {
      uVar1 = FUN_148d93798(param_2);
      FUN_148d91b0e(lVar2,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148d938f2 FUN_148d938f2 body=350 status=ok
// SIG undefined FUN_148d938f2(void)

ulonglong FUN_148d938f2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = &local_28;
  local_28 = 0;
  uStack_20 = 0;
  FUN_145e34e2c(param_1 + 0x28,DAT_14cb97848);
  if ((int)uStack_20 == DAT_14cb97808) {
    if (1 < (int)uStack_20) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(local_28 + lVar5);
        uVar4 = (ulonglong)uVar6;
        uVar8 = *(ushort *)(DAT_14cb97800 + lVar5);
        if (uVar6 != uVar8) break;
        if (uVar6 == 0) goto LAB_148d93a0c;
LAB_148d9396d:
        lVar5 = lVar5 + 2;
      }
      plVar3 = (longlong *)(ulonglong)(uint)(uVar8 | uVar6);
      if ((uVar8 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar9 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar9]) goto LAB_148d9396d;
      }
      if (uVar6 != uVar8) goto LAB_148d93998;
    }
  }
  else if (DAT_14cb97808 + (int)uStack_20 != 1) {
LAB_148d93998:
    if ((int)uStack_20 == DAT_14cb97840) {
      plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
      if (1 < (int)uStack_20) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(local_28 + lVar5);
          uVar1 = (uint)uVar6;
          uVar8 = *(ushort *)(DAT_14cb97838 + lVar5);
          uVar7 = (uint)uVar8;
          if (uVar6 != uVar8) {
            if ((uVar8 | uVar6) < 0x80) {
              uVar1 = (uint)(byte)(&DAT_149e05da0)[uVar6];
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148d939dc;
            }
            iVar2 = uVar1 - uVar7;
            goto LAB_148d93a4d;
          }
          if (uVar6 == 0) break;
LAB_148d939dc:
          lVar5 = lVar5 + 2;
        }
        iVar2 = 0;
LAB_148d93a4d:
        bVar10 = iVar2 == 0;
        goto LAB_148d93a41;
      }
    }
    else {
      bVar10 = DAT_14cb97840 + (int)uStack_20 == 1;
LAB_148d93a41:
      plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),bVar10);
    }
    uVar4 = (ulonglong)plVar3 ^ 1;
    goto LAB_148d93a0e;
  }
LAB_148d93a0c:
  uVar4 = 0;
LAB_148d93a0e:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d93a52 FUN_148d93a52 body=150 status=ok
// SIG undefined FUN_148d93a52(void)

undefined8 * FUN_148d93a52(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14a5af930;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[6] = &PTR_FUN_14a5af930;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &PTR_FUN_14b4c3b18;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_145ad316c(param_1 + 0x13);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 9999;
  param_1[0x32] = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  return param_1;
}



// FUNCTION 148d93ae8 FUN_148d93ae8 body=502 status=ok
// SIG undefined FUN_148d93ae8(void)

void FUN_148d93ae8(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [40];
  longlong local_80 [2];
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = param_1;
  FUN_1402160b8(&local_70);
  uVar6 = (ulonglong)(int)param_1[0xe0];
  if (0 < (longlong)uVar6) {
    plVar1 = param_1 + 0xdf;
    lVar5 = uVar6 * 0x1a0;
    do {
      lVar5 = lVar5 + -0x1a0;
      if (1200.0 <= (double)(local_70 - *(longlong *)(*plVar1 + 400 + lVar5)) / 10000000.0) {
        FUN_1405e6804(*plVar1 + lVar5 + 0x30,local_80);
        uVar3 = FUN_1441c4e3c(&local_68,param_1[0xdf] + lVar5);
        lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
          lVar4 = FUN_14094c9c2();
          if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
            FUN_148da8358(*(longlong *)(lVar4 + 0x30),uVar3,local_80);
          }
        }
        if (local_80[0] != 0) {
          FUN_1400020a8();
        }
        FUN_148d93ce0(plVar1,(int)uVar6 + -1);
      }
      bVar2 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar2);
    if (0x19 < (int)param_1[0xe0]) {
      do {
        FUN_1405e6804(param_1[0xdf] + 0x30,local_80);
        uVar3 = FUN_1441c4e3c(&local_68,param_1[0xdf]);
        lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
          lVar5 = FUN_14094c9c2();
          if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x30) != 0)) {
            FUN_148da8358(*(longlong *)(lVar5 + 0x30),uVar3,local_80);
          }
        }
        if (local_80[0] != 0) {
          FUN_1400020a8();
        }
        FUN_148d93ce0(plVar1,0);
      } while (0x19 < (int)param_1[0xe0]);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d93ce0 FUN_148d93ce0 body=88 status=ok
// SIG undefined FUN_148d93ce0(void)

void FUN_148d93ce0(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x1a0 + *param_1);
  FUN_148c5ce08(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x1a0),(longlong)(int)(~param_2 + iVar1) * 0x1a0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_148da089a(param_1);
  return;
}



// FUNCTION 148d93d3e FUN_148d93d3e body=228 status=ok
// SIG undefined FUN_148d93d3e(void)

bool FUN_148d93d3e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_70 [64];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  uStack_80 = 0;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_14116599c();
    if (lVar2 != 0) {
      FUN_148a7d4a2(lVar2,local_70);
      FUN_140619b9c(local_70,&local_98);
      local_88 = local_98;
      uStack_80 = uStack_90;
      local_98 = 0;
      uStack_90 = 0;
      local_28 = 0;
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(local_70);
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x350))(param_1,&local_88);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d93e24 FUN_148d93e24 body=1113 status=ok
// SIG undefined FUN_148d93e24(void)

void FUN_148d93e24(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  longlong *local_e8;
  void *pvStack_e0;
  int local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [16];
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  undefined4 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((char)param_1[0xde] == '\x01') {
    if ((longlong *)param_1[0xda] != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)param_1[0xda] + 0x38))();
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_e8);
      FUN_1446f470e(&local_40,L"SHIFT",1);
      if (local_e8 == local_40) {
        local_50 = 0;
        local_48 = 0;
        FUN_141509b10(&local_50,param_2);
        FUN_148d9427e(param_1,(int)param_1[0xb9],param_1 + 0xba,&local_50);
        goto LAB_148d93e88;
      }
    }
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    cVar3 = FUN_145e34e2c(param_1 + 0xbf,DAT_14cb977f0);
    if ((cVar3 == '\0') || ((int)uStack_60 < 2)) {
LAB_148d94256:
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_148d93e52;
    }
    (**(code **)(*param_1 + 0x2d8))(param_1,&local_78);
    if (local_78 == (longlong *)0x0) {
LAB_148d9422c:
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_70 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      goto LAB_148d94256;
    }
    (**(code **)(*local_78 + 0x18))(local_78,&local_88,&local_68);
    if (local_88 == 0) {
LAB_148d94202:
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_80 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
          }
        }
      }
      goto LAB_148d9422c;
    }
    (**(code **)(*param_1 + 0x180))(param_1);
    local_e8 = (longlong *)0x0;
    plVar4 = (longlong *)FUN_1401e3228();
    if (plVar4 == (longlong *)0x0) goto LAB_148d94202;
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_98);
    if (local_98 == (longlong *)0x0) {
LAB_148d941d8:
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_90 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      goto LAB_148d94202;
    }
    (**(code **)(*local_98 + 0x110))(local_98,&local_a8,(int)param_1[0xb9]);
    plVar4 = local_68;
    if (local_a8 == 0) {
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      goto LAB_148d941d8;
    }
    pvStack_e0 = (void *)0x0;
    lVar5 = (longlong)(int)uStack_60;
    local_d8 = (int)uStack_60;
    local_e8 = param_1;
    if (lVar5 == 0) {
      local_d4 = 0;
    }
    else {
      FUN_1446dd670(&pvStack_e0,uStack_60 & 0xffffffff,0);
      memcpy(pvStack_e0,plVar4,lVar5 * 2);
    }
    local_d0 = 0;
    local_c8 = 0;
    FUN_141509b10(&local_d0,param_2);
    FUN_1441c54de(local_b8,param_1,&local_e8);
    local_f8 = local_b8;
    (**(code **)(*local_78 + 0x1b0))(local_78,local_a8,local_88,local_a8);
    FUN_1449db362(local_b8);
    FUN_1449db362(&local_d0);
    if (pvStack_e0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    plVar4 = local_68;
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
        plVar4 = local_68;
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
          plVar4 = local_68;
        }
      }
    }
  }
  else {
LAB_148d93e52:
    local_e8 = (longlong *)0x0;
    pvStack_e0 = (void *)0x0;
    if (((int)param_2[1] == 0) || (plVar4 = (longlong *)*param_2, plVar4 == (longlong *)0x0))
    goto LAB_148d93e88;
    (**(code **)(*plVar4 + 0x60))(plVar4,0xffffffff,&local_e8);
    plVar4 = local_e8;
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_148d93e88:
  FUN_1449db362(param_2);
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d9427e FUN_148d9427e body=121 status=ok
// SIG undefined FUN_148d9427e(void)

void FUN_148d9427e(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1441c5656(param_1,local_28,param_2,param_3);
  if (((int)param_4[1] != 0) && (plVar1 = (longlong *)*param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d94300 FUN_148d94300 body=247 status=ok
// SIG undefined FUN_148d94300(void)

undefined8 FUN_148d94300(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((DAT_14cb0d2b0 != (longlong *)0x0) &&
     (lVar2 = (**(code **)(*param_1 + 0x180))(), plVar1 = DAT_14cb0d2b0, lVar2 != 0)) {
    uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar2 = FUN_147d81b3a(plVar1,uVar3);
    plVar1 = DAT_14cb0d2b0;
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
      (**(code **)(*plVar1 + 0x500))(plVar1,uVar3,0);
      lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) &&
         (lVar2 = FUN_14583d3ae(), lVar2 != 0)) {
        FUN_148d92792(lVar2);
      }
      lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) &&
         ((lVar2 = FUN_140e5f22c(), lVar2 != 0 && (*(longlong *)(lVar2 + 0x30) != 0)))) {
        FUN_1441de86e();
      }
      *(undefined1 *)(param_1 + 0x106) = 0;
      *(undefined1 *)((longlong)param_1 + 0x344) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148d943f8 FUN_148d943f8 body=51 status=ok
// SIG undefined FUN_148d943f8(void)

undefined4 FUN_148d943f8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if ((lVar1 != 0) && (lVar1 = FUN_14021f720(lVar1), lVar1 != 0)) {
    return CONCAT31((int3)((uint)*(int *)(lVar1 + 0xec) >> 8),*(int *)(lVar1 + 0xec) != 0);
  }
  return 0;
}



// FUNCTION 148d9442c FUN_148d9442c body=48 status=ok
// SIG undefined FUN_148d9442c(void)

void FUN_148d9442c(undefined8 param_1,int param_2,char param_3)

{
  if (param_2 != 0) {
    FUN_1441c5d34();
    if (param_3 == '\0') {
      FUN_148d9829e(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 148d9445c FUN_148d9445c body=888 status=ok
// SIG undefined FUN_148d9445c(void)

void FUN_148d9445c(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  wchar_t **local_d8;
  longlong **local_d0;
  longlong **local_c8;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined1 local_a4 [4];
  longlong *local_a0 [2];
  undefined1 local_8c [4];
  longlong *local_88 [2];
  longlong *local_78 [2];
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  }
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_14583d3ae();
    if (lVar3 != 0) {
      local_58 = L"ConfirmLeavePartyHeader";
      local_50 = 0x17;
      FUN_1446e940c(local_78,&local_58);
      local_58 = L"OakOnlineSessionClient";
      local_50 = 0x16;
      FUN_1446e940c(local_88,&local_58);
      FUN_140208bae(local_68,local_88,local_78,L"Leave Party?");
      local_58 = L"ConfirmLeaveParty";
      local_50 = 0x11;
      FUN_1446e940c(local_88,&local_58);
      local_58 = L"OakOnlineSessionClient";
      local_50 = 0x16;
      FUN_1446e940c(local_a0,&local_58);
      FUN_140208bae(local_78,local_a0,local_88,L"Are you sure you want to leave the party?");
      local_58 = L"ConfirmLeavePartyYes";
      local_50 = 0x14;
      FUN_1446e940c(local_a0,&local_58);
      local_58 = L"OakOnlineSessionClient";
      local_50 = 0x16;
      FUN_1446e940c(local_8c,&local_58);
      FUN_140208bae(local_88,local_8c,local_a0,L"Leave Party");
      local_58 = L"ConfirmLeavePartyNo";
      local_50 = 0x13;
      FUN_1446e940c(local_8c,&local_58);
      local_58 = L"OakOnlineSessionClient";
      local_50 = 0x16;
      FUN_1446e940c(local_a4,&local_58);
      FUN_140208bae(local_a0,local_a4,local_8c,L"Cancel");
      local_b8 = (undefined8 *)0x0;
      local_b0 = 0;
      FUN_1446efa72(&local_b8,0,3,0x10);
      puVar1 = local_b8;
      local_b0 = 3;
      *local_b8 = &PTR_LAB_14b98cfe0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_b8[2] = lVar4;
      *local_b8 = &PTR_FUN_14b98c8e0;
      local_b8[3] = 0;
      FUN_14485c47a(local_b8 + 3,param_1);
      puVar1[4] = FUN_148d9829e;
      local_58 = (wchar_t *)0x0;
      local_50 = 0;
      FUN_148d9de0a(&local_58,&local_b8);
      local_d8 = &local_58;
      local_d0 = local_88;
      local_c8 = local_a0;
      FUN_148d8e71a(lVar3,0xffffffff,local_68,local_78);
      FUN_1449db362(&local_b8);
      if (local_a0[0] != (longlong *)0x0) {
        (**(code **)(*local_a0[0] + 0x10))();
      }
      if (local_88[0] != (longlong *)0x0) {
        (**(code **)(*local_88[0] + 0x10))();
      }
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      if (local_68[0] != (longlong *)0x0) {
        (**(code **)(*local_68[0] + 0x10))();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d947f2 FUN_148d947f2 body=394 status=ok
// SIG undefined FUN_148d947f2(void)

void FUN_148d947f2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(longlong *)(param_1 + 0x900) == 0) || (*(longlong *)(param_1 + 0x908) == 0)) ||
      (*(int *)(*(longlong *)(param_1 + 0x908) + 8) < 1)) && (0 < *(int *)(param_1 + 0x910))) {
    *(int *)(param_1 + 0x910) = *(int *)(param_1 + 0x910) + -1;
    uVar5 = FUN_1401cb356();
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar3 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_48[2] = lVar6;
    *local_48 = &PTR_FUN_14b98b540;
    local_48[3] = 0;
    FUN_14485c47a(local_48 + 3,param_1);
    puVar3[4] = FUN_148d9497e;
    local_58 = 0x40a00000;
    FUN_1405f67fc(uVar5,&local_38,&local_48,
                  L"UOakOnlineSessionClient_ProcessRestoreNetworkModeTimer");
    *(undefined8 *)(param_1 + 0x900) = local_38;
    local_38 = 0;
    plVar2 = *(longlong **)(param_1 + 0x908);
    *(longlong **)(param_1 + 0x908) = local_30;
    local_30 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d9497e FUN_148d9497e body=146 status=ok
// SIG undefined FUN_148d9497e(void)

undefined8 FUN_148d9497e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x348))(param_1,0);
  FUN_1401cb356();
  local_20 = param_1[0x120];
  local_18 = param_1[0x121];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_20);
  plVar2 = (longlong *)param_1[0x121];
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d94a12 FUN_148d94a12 body=103 status=ok
// SIG undefined FUN_148d94a12(void)

void FUN_148d94a12(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b94be4();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148da0caa(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d94a7a FUN_148d94a7a body=386 status=ok
// SIG undefined FUN_148d94a7a(void)

longlong * FUN_148d94a7a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d94b8b:
    *puVar5 = &PTR_LAB_14b4edcd0;
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
    *puVar5 = &PTR_FUN_14b98b740;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d94b8b;
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
    *puVar5 = &PTR_LAB_14b4edcd0;
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
    *puVar5 = &PTR_FUN_14b98b740;
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



// FUNCTION 148d94bfc FUN_148d94bfc body=386 status=ok
// SIG undefined FUN_148d94bfc(void)

longlong * FUN_148d94bfc(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d94d0d:
    *puVar5 = &PTR_LAB_14b4e4ea0;
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
    *puVar5 = &PTR_FUN_14b98b7b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d94d0d;
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
    *puVar5 = &PTR_LAB_14b4e4ea0;
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
    *puVar5 = &PTR_FUN_14b98b7b0;
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



// FUNCTION 148d94d7e FUN_148d94d7e body=145 status=ok
// SIG undefined FUN_148d94d7e(void)

void FUN_148d94d7e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14124f12c(param_1 + 6);
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
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148d94e10 FUN_148d94e10 body=91 status=ok
// SIG undefined FUN_148d94e10(void)

longlong FUN_148d94e10(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x88) == '\x01') {
      if (*(char *)(param_1 + 0x88) != '\0') {
        FUN_148d94d7e(param_1);
      }
      FUN_148d954e8(param_1,param_2);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x88) == '\0') {
        return param_1;
      }
      FUN_148d94d7e(param_1);
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x88) = uVar1;
  }
  return param_1;
}



// FUNCTION 148d94e6c FUN_148d94e6c body=1659 status=ok
// SIG undefined FUN_148d94e6c(void)

void FUN_148d94e6c(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_218 [32];
  undefined ***local_1f8;
  undefined **local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong *plStack_1a0;
  void *local_190;
  int local_188;
  undefined4 local_184;
  undefined **local_180;
  longlong *local_178;
  longlong *plStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  longlong *local_80;
  longlong *plStack_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_190 = (void *)0x0;
  local_188 = *(int *)(param_2 + 1);
  lVar15 = (longlong)local_188;
  _Src = (void *)*param_2;
  if (lVar15 == 0) {
    local_184 = 0;
  }
  else {
    FUN_1446dd670(&local_190,local_188,0);
    memcpy(local_190,_Src,lVar15 * 2);
  }
  plVar4 = (longlong *)param_2[2];
  plVar5 = (longlong *)param_2[3];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_2[4];
  plVar7 = (longlong *)param_2[5];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0 || iVar3 == -1) goto LAB_148d94f28;
  local_1e0 = param_1;
  plVar9 = (longlong *)FUN_140a68038(1);
  if (plVar9 == (longlong *)0x0) {
    local_1a8 = (longlong *)0x0;
    plStack_1a0 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_1a8);
    plVar16 = local_1a8;
    if ((local_1a8 != (longlong *)0x0) &&
       (*(int *)(param_2 + 7) != *(int *)((longlong)param_2 + 100))) {
      uVar8 = (uint)((ulonglong)DAT_14cb97810 >> 0x10);
      uVar14 = (uint)DAT_14cb97810 & 0xffff;
      puVar13 = param_2 + 0xd;
      if ((undefined8 *)param_2[0xe] != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)param_2[0xe];
      }
      iVar11 = *(int *)((longlong)puVar13 +
                       (ulonglong)
                       (*(int *)(param_2 + 0xf) - 1U &
                       (int)((ulonglong)DAT_14cb97810 >> 0x20) +
                       ((uint)DAT_14cb97810 << 0x10 | uVar14) + (uVar8 << 0x13 | uVar8 & 0xffff) +
                       (uVar14 >> 4)) * 4);
      if (iVar11 != -1) {
        do {
          lVar15 = param_2[6] + (longlong)iVar11 * 0x38;
          if (*(longlong *)(param_2[6] + (longlong)iVar11 * 0x38) == DAT_14cb97810) {
            if (lVar15 + 8 != 0 && lVar15 != 0) {
              FUN_140b74056(lVar15 + 8,local_1b8);
              (**(code **)(*plVar16 + 0x18))(plVar16,&local_180,local_1b8);
              plVar16 = local_178;
              local_1e8 = local_180;
              local_180 = (undefined **)0x0;
              if (local_178 != (longlong *)0x0) {
                local_178 = (longlong *)0x0;
              }
              if (local_1b8[0] != 0) {
                FUN_1400020a8();
              }
              goto LAB_148d94ff0;
            }
            break;
          }
          iVar11 = *(int *)(lVar15 + 0x30);
        } while (iVar11 != -1);
      }
    }
  }
  local_1e8 = (undefined **)0x0;
  plVar16 = (longlong *)0x0;
LAB_148d94ff0:
  local_180 = &PTR_FUN_14b4c3b18;
  local_178 = (longlong *)0x0;
  plStack_170 = (longlong *)0x0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = &PTR_FUN_14b4c3b20;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = FUN_1414a827a();
  plVar10 = plStack_170;
  local_100 = 0;
  local_f8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_f4 = 0xffffffff00000080;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_a4 = 0xffffffff00000080;
  local_9c = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = (longlong *)0x0;
  plStack_78 = (longlong *)0x0;
  local_70 = 0;
  local_68 = 9999;
  plVar12 = plVar5;
  local_178 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar12 = plVar7;
    local_178 = plVar6;
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_170 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        puVar13 = (undefined8 *)*plStack_170;
        plStack_170 = plVar12;
        (*(code *)*puVar13)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_170;
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          plVar12 = plStack_170;
        }
      }
    }
  }
  plStack_170 = plVar12;
  if (plVar9 == (longlong *)0x0) {
    FUN_1446f470e(local_1b8,L"NotShift",1);
  }
  else {
    (**(code **)(*plVar9 + 0x10))(plVar9,local_1b8);
  }
  plVar10 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar9 = plStack_78;
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b98ba70;
  plVar10[2] = (longlong)&PTR_FUN_14b98ba90;
  plVar10[3] = local_1b8[0];
  plVar10[4] = (longlong)local_1e8;
  plVar10[5] = (longlong)plVar16;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_80 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    if (plStack_78 != (longlong *)0x0) {
      plStack_78 = (longlong *)0x0;
LAB_148d952c1:
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if (plVar10 != (longlong *)0x0) goto LAB_148d9534e;
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (plVar10 == plStack_78) {
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
    else {
      bVar17 = plStack_78 != (longlong *)0x0;
      plStack_78 = plVar10;
      if (bVar17) goto LAB_148d952c1;
    }
LAB_148d9534e:
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
  FUN_145cba9f8(&local_158,DAT_14cb977f0,&local_190,2);
  if (local_1a8 == (longlong *)0x0) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_1f8 = &local_180;
    local_1d8 = plVar6;
    local_1d0 = plVar7;
    FUN_1441c29a0(local_1e0,1,iVar3,&local_1d8);
  }
  else {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_1f8 = &local_180;
    local_1c8 = plVar4;
    local_1c0 = plVar5;
    (**(code **)(*local_1a8 + 0x348))
              (local_1a8,CONCAT71((int7)((ulonglong)local_1f8 >> 8),1),iVar3,&local_1c8);
  }
  FUN_14124efea(&local_180);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar16 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  plVar4 = plStack_1a0;
  if (plStack_1a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_1a0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_1a0)(plStack_1a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_148d94f28:
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (local_190 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d954e8 FUN_148d954e8 body=211 status=ok
// SIG undefined FUN_148d954e8(void)

undefined8 * FUN_148d954e8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
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
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = param_2[4];
  lVar2 = param_2[5];
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_1412c5fc6(param_1 + 6,param_2 + 6);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 148d955bc FUN_148d955bc body=17 status=ok
// SIG undefined FUN_148d955bc(void)

void FUN_148d955bc(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  wchar_t *pwVar3;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  wchar_t *pwStack_38;
  undefined4 uStack_30;
  ulonglong uStack_28;
  
  plVar1 = *(longlong **)(param_1 + 0x598);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == '\x05') {
    pwStack_38 = L"HostLostQuit";
    uStack_30 = 0xc;
    FUN_1446e940c(auStack_3c,&pwStack_38);
    pwStack_38 = L"GbxNetwork";
    uStack_30 = 10;
    FUN_1446e940c(auStack_40,&pwStack_38);
    pwVar3 = L"Your connection to the host was lost. The host quit the game.";
  }
  else if (param_2 == '\x04') {
    pwStack_38 = L"HostLostNewParty";
    uStack_30 = 0x10;
    FUN_1446e940c(auStack_3c,&pwStack_38);
    pwStack_38 = L"GbxNetwork";
    uStack_30 = 10;
    FUN_1446e940c(auStack_40,&pwStack_38);
    pwVar3 = L"The host chose to end the session to join a new party.";
  }
  else {
    if (param_2 != '\x03') goto LAB_148a7cfe1;
    pwStack_38 = L"HostLostModeChange";
    uStack_30 = 0x12;
    FUN_1446e940c(auStack_3c,&pwStack_38);
    pwStack_38 = L"GbxNetwork";
    uStack_30 = 10;
    FUN_1446e940c(auStack_40,&pwStack_38);
    pwVar3 = L"The host chose to end the session to play a different network mode.";
  }
  FUN_140208bae(&pwStack_38,auStack_40,auStack_3c,pwVar3);
  FUN_140008f88(plVar1 + 4,&pwStack_38);
  if (pwStack_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwStack_38 + 0x10))();
  }
LAB_148a7cfe1:
  cVar2 = FUN_144a7c5f6(plVar1 + 4);
  if (cVar2 == '\0') {
    if (*(int *)((longlong)plVar1 + 0x6c) != -1) {
      if (plVar1[0xc] != 0) {
        FUN_1400020a8();
      }
      plVar1[0xc] = 0;
      plVar1[0xd] = -0x100000000;
    }
    (**(code **)(*plVar1 + 0x150))(plVar1);
  }
  if ((uStack_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d955ea FUN_148d955ea body=325 status=ok
// SIG undefined FUN_148d955ea(void)

void FUN_148d955ea(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b98bc20;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  *(undefined1 *)(plVar4 + 5) = 0;
  iVar3 = DAT_14cb970bc + 1;
  *(int *)((longlong)plVar4 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar3;
  plVar4[6] = param_1;
  *(undefined1 *)(plVar4 + 7) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b98bc40;
  *(undefined1 *)(plVar4 + 8) = param_2;
  *(undefined1 *)((longlong)plVar4 + 0x41) = param_3;
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_148da276c(&local_50,plVar1);
  local_40 = plVar1;
  local_38 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d95744 FUN_148d95744 body=202 status=ok
// SIG undefined FUN_148d95744(void)

void FUN_148d95744(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    local_48 = FUN_148d959a2;
    local_40 = 0;
    FUN_148d95820(local_38,param_1);
    FUN_148a7be2c(lVar2,local_38);
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x31);
    local_48 = FUN_148d959c6;
    local_40 = 0;
    FUN_148d95820(local_58,param_1);
    FUN_145f78eee(lVar2,local_58,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d95820 FUN_148d95820 body=386 status=ok
// SIG undefined FUN_148d95820(void)

longlong * FUN_148d95820(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d95931:
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
    *puVar5 = &PTR_FUN_14b98bca0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d95931;
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
    *puVar5 = &PTR_FUN_14b98bca0;
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



// FUNCTION 148d959a2 FUN_148d959a2 body=35 status=ok
// SIG undefined FUN_148d959a2(void)

void FUN_148d959a2(longlong param_1)

{
  FUN_141521eca(*(undefined8 *)(param_1 + 0x20),1);
  FUN_148d95a50(param_1);
  return;
}



// FUNCTION 148d959c6 FUN_148d959c6 body=137 status=ok
// SIG undefined FUN_148d959c6(void)

void FUN_148d959c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar3 + 0x598) != 0) {
    *(undefined8 *)(lVar3 + 0x598) = 0;
    plVar4 = *(longlong **)(lVar3 + 0x5a0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x5a0) = 0;
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
  FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x1e0);
  FUN_141521da0(*(undefined8 *)(param_1 + 0x20));
  FUN_141521eca(*(undefined8 *)(param_1 + 0x20),1);
  FUN_148d95a50(param_1);
  return;
}



// FUNCTION 148d95a50 FUN_148d95a50 body=109 status=ok
// SIG undefined FUN_148d95a50(void)

void FUN_148d95a50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
  if (lVar1 != 0) {
    FUN_147d811a6(DAT_14cb0d2b0,lVar1,*(undefined8 *)(lVar1 + 0x38));
  }
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14094c9c2();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_146063400();
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 148d95ad0 FUN_148d95ad0 body=98 status=ok
// SIG undefined FUN_148d95ad0(void)

void FUN_148d95ad0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14094c9c2();
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
      if (*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) {
        FUN_14571a702();
      }
      FUN_148da7c0a(lVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 148d95b32 FUN_148d95b32 body=270 status=ok
// SIG undefined FUN_148d95b32(void)

void FUN_148d95b32(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b98c230;
  plVar1 = plVar3 + 2;
  FUN_148da3b66(plVar1,param_1);
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_148da3cb0(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d95c52 FUN_148d95c52 body=233 status=ok
// SIG undefined FUN_148d95c52(void)

void FUN_148d95c52(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  plVar3 = (longlong *)FUN_148da3d57();
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_148da3ed0(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d95d4e FUN_148d95d4e body=513 status=ok
// SIG undefined FUN_148d95d4e(void)

void FUN_148d95d4e(longlong param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 unaff_RBX;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  code *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar6 = *(longlong *)(lVar5 + 0x598);
  if (lVar6 != 0) {
    uVar4 = *(undefined1 *)(param_1 + 0x44);
    local_48 = FUN_148d960e6;
    local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
    FUN_148d95f64(local_38,param_1);
    FUN_145f78eee(lVar6,local_38,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar4) & 0xffffffff);
    goto LAB_148d95dda;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  plVar8 = (longlong *)FUN_14001cc68(0x2a0,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b98b970;
  pcVar1 = (code *)(plVar8 + 2);
  FUN_145ef5286(pcVar1,lVar5);
  local_48 = pcVar1;
  local_40 = plVar8;
  FUN_148da1ccc(&local_48,pcVar1);
  if (plVar8 == (longlong *)0x0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(lVar5 + 0x598) = 0x10;
    plVar9 = *(longlong **)(lVar5 + 0x5a0);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(lVar5 + 0x5a0) = 0;
LAB_148d95f27:
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000148d95f14:
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    lVar5 = *(longlong *)(param_1 + 0x20);
    *(code **)(lVar5 + 0x598) = pcVar1;
    plVar9 = *(longlong **)(lVar5 + 0x5a0);
    if (plVar8 == plVar9) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar9 = plVar8;
        goto joined_r0x000148d95f14;
      }
    }
    else {
      *(longlong **)(lVar5 + 0x5a0) = plVar8;
      if (plVar9 != (longlong *)0x0) goto LAB_148d95f27;
    }
  }
  plVar8 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x598);
  local_48 = (code *)&LAB_148d962cc;
  local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
  FUN_148d9614a(local_58,param_1);
  FUN_145d53592(uVar7,param_1 + 0x30,*(undefined1 *)(param_1 + 0x40),local_58);
LAB_148d95dda:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d95f64 FUN_148d95f64 body=386 status=ok
// SIG undefined FUN_148d95f64(void)

longlong * FUN_148d95f64(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d96075:
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
    *puVar5 = &PTR_FUN_14b98bf50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d96075;
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
    *puVar5 = &PTR_FUN_14b98bf50;
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



// FUNCTION 148d960e6 FUN_148d960e6 body=100 status=ok
// SIG undefined FUN_148d960e6(void)

void FUN_148d960e6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar3 + 0x598) != 0) {
    *(undefined8 *)(lVar3 + 0x598) = 0;
    plVar4 = *(longlong **)(lVar3 + 0x5a0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x5a0) = 0;
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
  FUN_148d95d4e(param_1);
  return;
}



// FUNCTION 148d9614a FUN_148d9614a body=386 status=ok
// SIG undefined FUN_148d9614a(void)

longlong * FUN_148d9614a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d9625b:
    *puVar5 = &PTR_LAB_14b98c030;
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
    *puVar5 = &PTR_FUN_14b98bfc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d9625b;
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
    *puVar5 = &PTR_LAB_14b98c030;
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
    *puVar5 = &PTR_FUN_14b98bfc0;
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



// FUNCTION 148d962d6 FUN_148d962d6 body=351 status=ok
// SIG undefined FUN_148d962d6(void)

void FUN_148d962d6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x1e0);
  FUN_141521da0(*(undefined8 *)(param_1 + 0x20));
  FUN_141521eca(*(undefined8 *)(param_1 + 0x20),0);
  FUN_145dcdb2c(*(undefined8 *)(param_1 + 0x20));
  FUN_148d96436(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x308))(*(longlong **)(param_1 + 0x20),local_20);
  if (local_20[0] == 2) {
    if ((*(longlong **)(param_1 + 0x20))[0x11f] != 0) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
        lVar2 = FUN_14116599c();
        if (lVar2 != 0) {
          lVar3 = *(longlong *)(param_1 + 0x20);
          if (*(longlong *)(lVar3 + 0x8f8) != 0) {
            FUN_14480f766(lVar2 + 0x70);
            lVar3 = *(longlong *)(param_1 + 0x20);
          }
          *(undefined8 *)(lVar3 + 0x8f8) = 0;
        }
      }
    }
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar2 = FUN_14094c9c2();
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
        cVar1 = FUN_145dcdb0a();
        if (cVar1 != '\0') {
          lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
          if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
            lVar2 = FUN_14094c9c2();
            if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
              FUN_148da76c4(*(longlong *)(lVar2 + 0x30),1);
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d96436 FUN_148d96436 body=96 status=ok
// SIG undefined FUN_148d96436(void)

void FUN_148d96436(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = DAT_14cb977f8;
  if (*(longlong *)(param_1 + 0x598) != 0) {
    local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x38);
  }
  FUN_148da0a1a(param_1 + 0x4d0,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d96498 FUN_148d96498 body=130 status=ok
// SIG undefined FUN_148d96498(void)

void FUN_148d96498(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) == 2)) {
    local_40 = FUN_148d9651c;
    local_38 = 0;
    FUN_148d95f64(local_30,param_1);
    FUN_148a7af70(lVar1,param_2,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d9651c FUN_148d9651c body=223 status=ok
// SIG undefined FUN_148d9651c(void)

void FUN_148d9651c(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == '\0') && (*(char *)(param_1 + 0x42) == '\0')) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    local_40 = L"UpdateNetworkFailed";
    local_38 = 0x13;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"OakOnlineSessionClient";
    local_38 = 0x16;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"A problem occurred while changing network options.")
    ;
    FUN_148d90230(uVar1,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  FUN_141521da0(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d965fc FUN_148d965fc body=952 status=ok
// SIG undefined FUN_148d965fc(void)

void FUN_148d965fc(longlong *param_1,int *param_2,char param_3)

{
  wchar_t *pwVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  wchar_t **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  undefined4 local_90;
  undefined1 local_84 [4];
  longlong *local_80 [2];
  undefined1 local_6c [4];
  wchar_t *local_68;
  longlong *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = param_1[0xb5];
  iVar4 = *param_2;
  cVar6 = FUN_1461eb1de();
  if (cVar6 == '\0') {
    lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar8 != 0) {
      iVar7 = FUN_14490d72a(lVar8);
      if (iVar7 == 3) goto LAB_148d968b9;
    }
    FUN_14127bdbc(param_1,&local_58);
    iVar7 = (int)local_50;
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if ((((int)lVar9 != iVar4) && (param_3 != '\0')) && (0 < iVar7)) {
      lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x1f0) != 0)) {
        lVar9 = FUN_14583d3ae();
        if (lVar9 != 0) {
          local_58 = L"ConfirmDestructiveNetworkModeChangeHeader";
          local_50._0_4_ = 0x29;
          FUN_1446e940c(local_80,&local_58);
          local_58 = L"OakOnlineSessionClient";
          local_50._0_4_ = 0x16;
          FUN_1446e940c(local_6c,&local_58);
          FUN_140208bae(&local_68,local_6c,local_80,L"Kick Networked Players");
          local_58 = L"ConfirmDestructiveNetworkModeChange";
          local_50._0_4_ = 0x23;
          FUN_1446e940c(local_6c,&local_58);
          local_58 = L"OakOnlineSessionClient";
          local_50._0_4_ = 0x16;
          FUN_1446e940c(local_84,&local_58);
          FUN_140208bae(local_80,local_84,local_6c,
                        L"This action will disconnect all players. Are you sure you want to continue?"
                       );
          uVar10 = FUN_140e82300();
          uVar11 = FUN_140e82300();
          local_98 = (undefined8 *)0x0;
          local_90 = 0;
          FUN_1446efa72(&local_98,0,3,0x10);
          puVar5 = local_98;
          local_90 = 3;
          *local_98 = &PTR_LAB_14b98c110;
          local_98[1] = *(undefined8 *)param_2;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar8 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar8 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar8;
          local_98[2] = lVar13;
          *local_98 = &PTR_FUN_14b98c0a0;
          local_98[3] = 0;
          FUN_14485c47a(local_98 + 3,param_1);
          puVar5[4] = FUN_148d969b6;
          local_58 = (wchar_t *)0x0;
          local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
          FUN_148d9de0a(&local_58,&local_98);
          local_b8 = &local_58;
          local_b0 = uVar11;
          local_a8 = uVar10;
          FUN_148d8e71a(lVar9,0xffffffff,&local_68,local_80);
          FUN_1449db362(&local_98);
          if (local_80[0] != (longlong *)0x0) {
            (**(code **)(*local_80[0] + 0x10))();
          }
          if (local_68 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_68 + 0x10))();
          }
        }
      }
      goto LAB_148d96930;
    }
  }
LAB_148d968b9:
  local_80[0] = param_1;
  plVar12 = (longlong *)FUN_148da38aa(local_80,param_2);
  pwVar1 = (wchar_t *)(plVar12 + 2);
  local_68 = pwVar1;
  local_60 = plVar12;
  FUN_148da3a34(&local_68,pwVar1);
  local_58 = pwVar1;
  local_50 = plVar12;
  if (plVar12 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_58);
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar3 = (int *)((longlong)plVar12 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  plVar12 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar12 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_148d96930:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d969b6 FUN_148d969b6 body=242 status=ok
// SIG undefined FUN_148d969b6(void)

void FUN_148d969b6(undefined8 param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_3;
  if (param_2 == 0) {
    local_50 = param_1;
    plVar3 = (longlong *)FUN_148da3adb(&local_50,&local_28);
    plVar1 = plVar3 + 2;
    local_48 = plVar1;
    local_40 = plVar3;
    FUN_148da3a34(&local_48,plVar1);
    local_38 = plVar1;
    local_30 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      FUN_145db4d00(param_1,&local_38);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_145db4d00(param_1);
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
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
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



// FUNCTION 148d96ab0 FUN_148d96ab0 body=189 status=ok
// SIG undefined FUN_148d96ab0(void)

void FUN_148d96ab0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if ((*param_2 != 0) && (*(int *)(param_1 + 0x30) == 2)) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      *(undefined8 *)(lVar3 + 0x598) = 0;
      plVar4 = *(longlong **)(lVar3 + 0x5a0);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(lVar3 + 0x5a0) = 0;
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
      *(undefined8 *)(param_1 + 0x30) = DAT_14cb97820;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    local_20 = param_2[2];
    local_28 = *(undefined8 *)param_2;
    FUN_1441c7f44(param_1,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d96b9c FUN_148d96b9c body=396 status=ok
// SIG undefined FUN_148d96b9c(void)

void FUN_148d96b9c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_70 [8];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
  if (lVar4 != 0) {
    iVar3 = FUN_14490d72a(lVar4);
    if (iVar3 == 3) {
      plVar1 = *(longlong **)(param_1 + 0x20);
      lVar4 = (**(code **)(*plVar1 + 0x180))(plVar1);
      uVar2 = *(undefined8 *)(lVar4 + 0x38);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
      (**(code **)(*plVar1 + 0x2b0))(plVar1,uVar5,uVar2);
      *(undefined1 *)(param_1 + 0x18) = 1;
      goto LAB_148d96cd2;
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
    lVar4 = FUN_14116599c();
    if (lVar4 != 0) {
      FUN_148a7d4a2(lVar4,local_70);
      FUN_140619b9c(local_70,&local_98);
      local_88 = local_98;
      uStack_80 = uStack_90;
      local_98 = 0;
      uStack_90 = 0;
      local_28 = 0;
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(local_70);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x308))(*(longlong **)(param_1 + 0x20),local_70);
  *(undefined8 *)(param_1 + 0x38) = local_70[0];
  if ((int)local_70[0] == 1) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x350))
                      (*(longlong **)(param_1 + 0x20),&local_88);
    if (iVar3 != 0) goto LAB_148d96d11;
LAB_148d96c85:
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    if ((int)local_70[0] != 2) goto LAB_148d96c85;
LAB_148d96d11:
    *(undefined8 *)(param_1 + 0x30) = DAT_14cb977f8;
    FUN_148d95d4e(param_1);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_148d96cd2:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d96d2a FUN_148d96d2a body=243 status=ok
// SIG undefined FUN_148d96d2a(void)

void FUN_148d96d2a(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  local_21 = param_2;
  plVar3 = (longlong *)FUN_148da3f77(&local_50,&local_21);
  plVar1 = plVar3 + 2;
  local_48 = plVar1;
  local_40 = plVar3;
  FUN_148da4100(&local_48,plVar1);
  local_38 = plVar1;
  local_30 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d96e30 FUN_148d96e30 body=120 status=ok
// SIG undefined FUN_148d96e30(void)

void FUN_148d96e30(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x5a8) != 2) {
    puVar1 = &DAT_14cb97818;
    if (*(char *)(param_1 + 0x5b8) != '\0') {
      puVar1 = (undefined8 *)(param_1 + 0x5b0);
    }
    local_10 = *puVar1;
    if ((int)local_10 != 2) {
      local_10 = DAT_14cb97818;
    }
    FUN_148d965fc(param_1,&local_10,1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d96eaa FUN_148d96eaa body=325 status=ok
// SIG undefined FUN_148d96eaa(void)

void FUN_148d96eaa(undefined8 param_1,char param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a5dc74(local_48);
  if (param_2 == '\x01') {
    local_38 = L"DiscordInviteError_UnknownError";
    local_30 = 0x1f;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    pwVar1 = L"Unable to join. Unknown error.";
  }
  else {
    if (param_2 != '\0') goto LAB_148d96fb1;
    local_38 = L"DiscordInviteError_SessionNotFound";
    local_30 = 0x22;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    pwVar1 = L"Unable to join. The game session could not be found.";
  }
  FUN_140208bae(&local_38,local_50,local_4c,pwVar1);
  FUN_140008f88(local_48,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
LAB_148d96fb1:
  FUN_148d90230(param_1,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d96ff0 FUN_148d96ff0 body=229 status=ok
// SIG undefined FUN_148d96ff0(void)

void FUN_148d96ff0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      uVar2 = FUN_140e82300();
      uVar3 = FUN_140e82300();
      local_68 = 0;
      local_60 = 0;
      FUN_148d9de0a(&local_68,param_4);
      local_58 = 0;
      local_50 = 0;
      FUN_148d9de0a(&local_58,&local_68);
      local_88 = &local_58;
      local_80 = uVar3;
      local_78 = uVar2;
      FUN_148d8e71a(lVar1,0xffffffff,param_2,param_3);
      FUN_1449db362(&local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d970d6 FUN_148d970d6 body=275 status=ok
// SIG undefined FUN_148d970d6(void)

void FUN_148d970d6(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  local_34 = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_148da41a8(plVar3,&local_60,&local_34,param_3);
  plVar1 = plVar3 + 2;
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_148da4360(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1449db362(param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d971ea FUN_148d971ea body=137 status=ok
// SIG undefined FUN_148d971ea(void)

void FUN_148d971ea(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_40 = FUN_148d973f6;
    local_38 = 0;
    FUN_148d97274(local_30,param_1);
    FUN_148a7b18a(lVar1,*(undefined4 *)(param_1 + 0x30),local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d97274 FUN_148d97274 body=386 status=ok
// SIG undefined FUN_148d97274(void)

longlong * FUN_148d97274(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d97385:
    *puVar5 = &PTR_LAB_14b4ede90;
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
    *puVar5 = &PTR_FUN_14b98c4c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d97385;
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
    *puVar5 = &PTR_LAB_14b4ede90;
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
    *puVar5 = &PTR_FUN_14b98c4c0;
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



// FUNCTION 148d973f6 FUN_148d973f6 body=303 status=ok
// SIG undefined FUN_148d973f6(void)

void FUN_148d973f6(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    cVar3 = FUN_148d97526(param_1);
    if (cVar3 != '\0') {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      local_40 = (code *)0x14b987abc;
      local_38 = 0x1b;
      FUN_1446e940c(local_44,&local_40);
      local_40 = (code *)0x14b985026;
      local_38 = 0x16;
      FUN_1446e940c(local_48,&local_40);
      FUN_140208bae(&local_40,local_48,local_44,
                    L"New player cannot play online. Switching network mode.");
      FUN_145e0eb76(uVar1,&local_40);
      if (local_40 != (code *)0x0) {
        (**(code **)(*(longlong *)local_40 + 0x10))();
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
      if (lVar2 != 0) {
        local_40 = FUN_148d97798;
        local_38 = 0;
        FUN_148d97616(local_58,param_1);
        FUN_145f78eee(lVar2,local_58,0);
      }
      goto LAB_148d97422;
    }
    *(int *)(param_1 + 0x48) = param_2;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_148d97422:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d97526 FUN_148d97526 body=238 status=ok
// SIG undefined FUN_148d97526(void)

ulonglong FUN_148d97526(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = (longlong *)0x0;
  if ((param_2 < 0xc) && ((0xf60U >> (param_2 & 0x1f) & 1) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x308))(*(longlong **)(param_1 + 0x20),&local_28)
    ;
    if (((int)local_28 == 2) &&
       (cVar1 = FUN_14127c006(*(undefined8 *)(param_1 + 0x20)), cVar1 != '\0')) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
      if (lVar2 == 0) {
        local_28 = 0;
        uStack_20 = 0;
        plVar3 = (longlong *)CONCAT71((int7)((ulonglong)&local_28 >> 8),1);
        lVar2 = 0;
      }
      else {
        plVar3 = &local_28;
        FUN_14101ca58(lVar2,plVar3);
        lVar2 = (longlong)(int)uStack_20;
        if (lVar2 == 0) {
          lVar2 = 0;
          plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
        }
        else {
          lVar4 = 0;
          do {
            cVar1 = *(char *)(local_28 + 0x10 + lVar4);
            plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),cVar1);
            if (cVar1 != '\x01') break;
            bVar5 = lVar2 * 0x38 + -0x38 != lVar4;
            lVar4 = lVar4 + 0x38;
          } while (bVar5);
        }
      }
      FUN_14101c9fb(local_28,lVar2);
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      plVar3 = (longlong *)0x0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar3 & 0xffffffff;
}



// FUNCTION 148d97616 FUN_148d97616 body=386 status=ok
// SIG undefined FUN_148d97616(void)

longlong * FUN_148d97616(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d97727:
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
    *puVar5 = &PTR_FUN_14b98c530;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d97727;
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
    *puVar5 = &PTR_FUN_14b98c530;
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



// FUNCTION 148d97798 FUN_148d97798 body=494 status=ok
// SIG undefined FUN_148d97798(void)

void FUN_148d97798(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar4 + 0x598) != 0) {
    *(undefined8 *)(lVar4 + 0x598) = 0;
    plVar6 = *(longlong **)(lVar4 + 0x5a0);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(lVar4 + 0x5a0) = 0;
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
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  plVar6 = (longlong *)FUN_14001cc68(0x2a0,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b98b970;
  pcVar2 = (code *)(plVar6 + 2);
  FUN_145ef5286(pcVar2,uVar5);
  local_38 = pcVar2;
  local_30 = plVar6;
  FUN_148da1ccc(&local_38,pcVar2);
  if (plVar6 == (longlong *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(lVar4 + 0x598) = 0x10;
    plVar7 = *(longlong **)(lVar4 + 0x5a0);
    if (plVar7 == (longlong *)0x0) goto LAB_148d97875;
    *(undefined8 *)(lVar4 + 0x5a0) = 0;
LAB_148d9794b:
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148d97875;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    lVar4 = *(longlong *)(param_1 + 0x20);
    *(code **)(lVar4 + 0x598) = pcVar2;
    plVar7 = *(longlong **)(lVar4 + 0x5a0);
    if (plVar6 != plVar7) {
      *(longlong **)(lVar4 + 0x5a0) = plVar6;
      if (plVar7 == (longlong *)0x0) goto LAB_148d97875;
      goto LAB_148d9794b;
    }
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_148d97875;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar7 = plVar6;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_148d97875:
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x598);
  local_38 = FUN_148d97b0a;
  local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
  FUN_148d97988(local_48,param_1);
  FUN_145d53592(uVar5,&DAT_14cb97820,0,local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d97988 FUN_148d97988 body=386 status=ok
// SIG undefined FUN_148d97988(void)

longlong * FUN_148d97988(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d97a99:
    *puVar5 = &PTR_LAB_14b98c030;
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
    *puVar5 = &PTR_FUN_14b98c5a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d97a99;
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
    *puVar5 = &PTR_LAB_14b98c030;
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
    *puVar5 = &PTR_FUN_14b98c5a0;
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



// FUNCTION 148d97b0a FUN_148d97b0a body=615 status=ok
// SIG undefined FUN_148d97b0a(void)

void FUN_148d97b0a(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*param_2 == 0) {
    FUN_1447f69b6(lVar3 + 0x1e0);
    FUN_141521da0(*(undefined8 *)(param_1 + 0x20));
    FUN_141521eca(*(undefined8 *)(param_1 + 0x20),0);
    FUN_145dcdb2c(*(undefined8 *)(param_1 + 0x20));
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
    if (lVar3 != 0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      local_28 = 3;
      plVar4 = *(longlong **)(param_1 + 0x10);
      if (plVar4 == (longlong *)0x0) {
LAB_148d97cfd:
        *local_30 = &PTR_LAB_14b4ede90;
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
        local_30[2] = lVar9;
        *local_30 = &PTR_FUN_14b98c610;
        local_30[3] = 0;
        local_30[4] = 0;
        local_30[5] = param_1;
      }
      else {
        iVar8 = (int)plVar4[1];
        do {
          if (iVar8 == 0) goto LAB_148d97cfd;
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
        uVar5 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        *local_30 = &PTR_LAB_14b4ede90;
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
        local_30[2] = lVar9;
        *local_30 = &PTR_FUN_14b98c610;
        local_30[3] = uVar5;
        local_30[4] = plVar4;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        local_30[5] = param_1;
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
      FUN_148a7b18a(lVar3,*(undefined4 *)(param_1 + 0x30),&local_30);
    }
  }
  else {
    if (*(longlong *)(lVar3 + 0x598) != 0) {
      *(undefined8 *)(lVar3 + 0x598) = 0;
      plVar4 = *(longlong **)(lVar3 + 0x5a0);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(lVar3 + 0x5a0) = 0;
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
    FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x1e0);
    FUN_141521da0(*(undefined8 *)(param_1 + 0x20));
    FUN_141521eca(*(undefined8 *)(param_1 + 0x20),0);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d97d92 FUN_148d97d92 body=275 status=ok
// SIG undefined FUN_148d97d92(void)

void FUN_148d97d92(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  local_34 = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_148da4ece(plVar3,&local_60,&local_34,param_3);
  plVar1 = plVar3 + 2;
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_148da5084(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1449db362(param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d97ea6 FUN_148d97ea6 body=452 status=ok
// SIG undefined FUN_148d97ea6(void)

void FUN_148d97ea6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    local_28 = 3;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
LAB_148d97fd2:
      *local_30 = &PTR_LAB_149e06450;
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
      local_30[2] = lVar9;
      *local_30 = &PTR_FUN_14b98c710;
      local_30[3] = 0;
      local_30[4] = 0;
      local_30[5] = param_1;
    }
    else {
      iVar8 = (int)plVar4[1];
      do {
        if (iVar8 == 0) goto LAB_148d97fd2;
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
      uVar5 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *local_30 = &PTR_LAB_149e06450;
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
      local_30[2] = lVar9;
      *local_30 = &PTR_FUN_14b98c710;
      local_30[3] = uVar5;
      local_30[4] = plVar4;
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      local_30[5] = param_1;
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
    FUN_148a7b912(lVar3,*(undefined4 *)(param_1 + 0x30),&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d980ac FUN_148d980ac body=431 status=ok
// SIG undefined FUN_148d980ac(void)

void FUN_148d980ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  if (puVar6 == (undefined8 *)0x0) {
LAB_148d980d6:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    iVar4 = *(int *)(puVar6 + 1);
    do {
      if (iVar4 == 0) goto LAB_148d980d6;
      LOCK();
      iVar3 = *(int *)(puVar6 + 1);
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(puVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
  }
  lVar7 = 0;
  if (puVar6 != (undefined8 *)0x0) {
    lVar7 = *(longlong *)(param_2 + 8);
  }
  plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b98c860;
  local_40 = plVar5 + 2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined1 *)(plVar5 + 5) = 0;
  iVar4 = DAT_14cb970bc + 1;
  *(int *)((longlong)plVar5 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar4;
  plVar5[6] = param_1;
  *(undefined1 *)(plVar5 + 7) = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b98c880;
  plVar5[8] = lVar7;
  plVar5[9] = (longlong)puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  local_50 = local_40;
  local_48 = plVar5;
  FUN_148da54c4(&local_50,local_40);
  local_38 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar6 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar6)(puVar6);
      LOCK();
      piVar2 = (int *)((longlong)puVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d98272 FUN_148d98272 body=43 status=ok
// SIG undefined FUN_148d98272(void)

void FUN_148d98272(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (lVar1 != 0) {
    FUN_148a7bd7c(lVar1,*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 148d9829e FUN_148d9829e body=488 status=ok
// SIG undefined FUN_148d9829e(void)

void FUN_148d9829e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) goto LAB_148d982b8;
  lVar5 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar5 == 0) {
LAB_148d983f9:
    cVar4 = FUN_1461eb1de(param_1);
    if (cVar4 == '\0') goto LAB_148d982b8;
  }
  else {
    lVar6 = FUN_1403ca142();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_148d983f9;
    cVar4 = FUN_1461eb1de(param_1);
    if (cVar4 == '\0') {
      FUN_144a5dc74(&local_30);
      FUN_148d31758(lVar5,0,&local_30);
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x10))();
      }
      goto LAB_148d982b8;
    }
    FUN_148d318c8(lVar5);
  }
  plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b98c950;
  plVar1 = plVar7 + 2;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(undefined1 *)(plVar7 + 5) = 0;
  iVar3 = DAT_14cb970bc + 1;
  *(int *)((longlong)plVar7 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar3;
  plVar7[6] = (longlong)param_1;
  *(undefined1 *)(plVar7 + 7) = 0;
  plVar7[2] = (longlong)&PTR_FUN_14b98c970;
  local_40 = plVar1;
  local_38 = plVar7;
  FUN_148da588e(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_38 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_148d982b8:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d98488 FUN_148d98488 body=143 status=ok
// SIG undefined FUN_148d98488(void)

void FUN_148d98488(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1461eb1de(*(undefined8 *)(param_1 + 0x20));
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
    if (lVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    else {
      local_40 = FUN_148d9869a;
      local_38 = 0;
      FUN_148d98518(local_30,param_1);
      FUN_145f78eee(lVar1,local_30,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d98518 FUN_148d98518 body=386 status=ok
// SIG undefined FUN_148d98518(void)

longlong * FUN_148d98518(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d98629:
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
    *puVar5 = &PTR_FUN_14b98c9c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d98629;
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
    *puVar5 = &PTR_FUN_14b98c9c0;
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



// FUNCTION 148d9869a FUN_148d9869a body=114 status=ok
// SIG undefined FUN_148d9869a(void)

void FUN_148d9869a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar3 + 0x598) != 0) {
    *(undefined8 *)(lVar3 + 0x598) = 0;
    plVar4 = *(longlong **)(lVar3 + 0x5a0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x5a0) = 0;
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
  FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x1e0);
  FUN_1461e4046(param_1);
  return;
}



// FUNCTION 148d9870c FUN_148d9870c body=467 status=ok
// SIG undefined FUN_148d9870c(void)

void FUN_148d9870c(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined1 local_b0;
  undefined2 **local_a8;
  undefined2 *local_98;
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78;
  longlong *plStack_70;
  longlong local_68 [2];
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar4 = FUN_140b6cfe6();
  if (cVar4 != '\0') {
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    local_b8 = &local_78;
    cVar4 = FUN_145eef516(uVar5,param_2,local_68 + 2,local_68);
    if (cVar4 != '\0') {
      uVar7 = 0xffff00ff;
      if (DAT_14cbcdf28 == param_3) {
        uVar7 = 0xff00ffff;
      }
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(param_4 + 1) != 0) {
        puVar9 = (undefined2 *)*param_4;
      }
      puVar8 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        puVar8 = local_58;
      }
      FUN_1400d3e84(local_68,&local_98);
      puVar6 = &DAT_149dfb77a;
      if ((int)local_90 != 0) {
        puVar6 = local_98;
      }
      local_b8 = (longlong *)puVar9;
      FUN_140002266(local_88,L"%s:%s: %s",puVar6,puVar8);
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_98 = (undefined2 *)0x4000000000000000;
      local_90 = 0x4000000000000000;
      local_b0 = 1;
      local_b8 = local_88;
      local_a8 = &local_98;
      FUN_147d8078a(DAT_14cb0d2b0,0xffffffff,0x40e00000,uVar7);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
    }
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d988f2 FUN_148d988f2 body=340 status=ok
// SIG undefined FUN_148d988f2(void)

void FUN_148d988f2(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b98ca30;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  *(undefined1 *)(plVar4 + 5) = 0;
  iVar3 = DAT_14cb970bc + 1;
  *(int *)((longlong)plVar4 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar3;
  plVar4[6] = param_1;
  *(undefined1 *)(plVar4 + 7) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b98ca50;
  *(undefined4 *)(plVar4 + 8) = param_2;
  *(undefined4 *)((longlong)plVar4 + 0x44) = param_3;
  *(undefined1 *)(plVar4 + 9) = param_4;
  local_58 = plVar1;
  local_50 = plVar4;
  FUN_148da5d40(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d98a5e FUN_148d98a5e body=565 status=ok
// SIG undefined FUN_148d98a5e(void)

void FUN_148d98a5e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 **local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar8 = FUN_1458ff3f0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30));
  if (iVar8 == *(int *)(param_1 + 0x34)) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x34) != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    local_38 = (undefined4 *)0x0;
    uStack_30 = 1;
    FUN_1446f48e2(&local_38,0);
    *local_38 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = 3;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
LAB_148d98bf0:
      *local_48 = &PTR_LAB_14b4eddb0;
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
      local_48[2] = lVar9;
      *local_48 = &PTR_FUN_14b98cac0;
      local_48[3] = 0;
      local_48[4] = 0;
      local_48[5] = param_1;
    }
    else {
      iVar8 = (int)plVar4[1];
      do {
        if (iVar8 == 0) goto LAB_148d98bf0;
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
      uVar5 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *local_48 = &PTR_LAB_14b4eddb0;
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
      local_48[2] = lVar9;
      *local_48 = &PTR_FUN_14b98cac0;
      local_48[3] = uVar5;
      local_48[4] = plVar4;
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      local_48[5] = param_1;
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
    local_58 = 0;
    local_50 = &local_48;
    FUN_145d54248(uVar3,&local_38,0,*(undefined1 *)(param_1 + 0x38));
    if (local_38 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d98ca6 FUN_148d98ca6 body=162 status=ok
// SIG undefined FUN_148d98ca6(void)

void FUN_148d98ca6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (lVar1 == 0) {
    FUN_148d98fcc(*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x34));
    FUN_145ec8e38(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x34));
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_40 = FUN_148d98ecc;
    local_38 = 0;
    FUN_148d98d4a(local_30,param_1);
    FUN_148a7cdea(lVar1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d98d4a FUN_148d98d4a body=386 status=ok
// SIG undefined FUN_148d98d4a(void)

longlong * FUN_148d98d4a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148d98e5b:
    *puVar5 = &PTR_LAB_14b98cba0;
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
    *puVar5 = &PTR_FUN_14b98cb30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d98e5b;
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
    *puVar5 = &PTR_LAB_14b98cba0;
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
    *puVar5 = &PTR_FUN_14b98cb30;
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



// FUNCTION 148d98ecc FUN_148d98ecc body=255 status=ok
// SIG undefined FUN_148d98ecc(void)

void FUN_148d98ecc(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 1) {
    if (*(char *)(param_1 + 0x38) != '\x01') goto LAB_148d98f42;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    local_38 = param_1 + 0x34;
    FUN_148d9927c(local_30,uVar1,FUN_148d99342,param_1 + 0x30);
    uVar2 = 1;
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        FUN_148d98fcc(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                      *(undefined4 *)(param_1 + 0x34));
        FUN_145ec8e38(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                      *(undefined4 *)(param_1 + 0x34));
      }
      else if (*(char *)(param_1 + 0x38) == '\x01') {
        FUN_1441c8e40(*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_148d98f42;
    }
    if (*(char *)(param_1 + 0x38) != '\x01') goto LAB_148d98f42;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    local_38 = param_1 + 0x34;
    FUN_148d9927c(local_30,uVar1,FUN_148d99396,param_1 + 0x30);
    uVar2 = 2;
  }
  FUN_148d9901e(uVar1,uVar2,local_30);
  FUN_1449db362(local_30);
LAB_148d98f42:
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d98fcc FUN_148d98fcc body=81 status=ok
// SIG undefined FUN_148d98fcc(void)

void FUN_148d98fcc(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x360);
    }
    lVar1 = FUN_14127aa70(uVar2,param_2);
    if (lVar1 != 0) {
      FUN_148a9572a(lVar1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148d9901e FUN_148d9901e body=604 status=ok
// SIG undefined FUN_148d9901e(void)

void FUN_148d9901e(undefined8 param_1,int param_2,undefined8 param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  longlong *local_58 [2];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a5dc74(local_58);
  FUN_144a5dc74(local_68);
  if (param_2 == 1) {
    local_48 = L"ConfirmCrossplayChangeKickPlayersHeader";
    local_40 = 0x27;
    FUN_1446e940c(local_6c,&local_48);
    local_48 = L"OakOnlineSessionClient";
    local_40 = 0x16;
    FUN_1446e940c(local_70,&local_48);
    FUN_140208bae(&local_48,local_70,local_6c,L"Kick Players");
    FUN_140008f88(local_58,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    local_48 = L"ConfirmCrossplayChangeKickPlayersBody";
    local_40 = 0x25;
    FUN_1446e940c(local_6c,&local_48);
    local_48 = L"OakOnlineSessionClient";
    local_40 = 0x16;
    FUN_1446e940c(local_70,&local_48);
    pwVar1 = 
    L"Disabling crossplay will kick all cross-platform players. Are you sure you want to continue?";
  }
  else {
    local_48 = L"ConfirmCrossplayChangeLeaveSessionHeader";
    local_40 = 0x28;
    FUN_1446e940c(local_6c,&local_48);
    local_48 = L"OakOnlineSessionClient";
    local_40 = 0x16;
    FUN_1446e940c(local_70,&local_48);
    FUN_140208bae(&local_48,local_70,local_6c,L"Leave Party");
    FUN_140008f88(local_58,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    local_48 = L"ConfirmCrossplayChangeLeaveSessionBody";
    local_40 = 0x26;
    FUN_1446e940c(local_6c,&local_48);
    local_48 = L"OakOnlineSessionClient";
    local_40 = 0x16;
    FUN_1446e940c(local_70,&local_48);
    pwVar1 = 
    L"Disabling crossplay will remove you from the party. Are you sure you want to continue?";
  }
  FUN_140208bae(&local_48,local_70,local_6c,pwVar1);
  FUN_140008f88(local_68,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_148d96ff0(param_1,local_58,local_68,param_3);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d9927c FUN_148d9927c body=197 status=ok
// SIG undefined FUN_148d9927c(void)

longlong *
FUN_148d9927c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14b98cc80;
  *(undefined4 *)(puVar1 + 1) = *param_4;
  *(undefined4 *)((longlong)puVar1 + 0xc) = *param_5;
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
  *puVar1 = &PTR_FUN_14b98cc10;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = param_3;
  return param_1;
}



// FUNCTION 148d99342 FUN_148d99342 body=83 status=ok
// SIG undefined FUN_148d99342(void)

void FUN_148d99342(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x598) != 0) {
    FUN_148d90d74(*(longlong *)(param_1 + 0x598),param_3,param_4);
  }
  FUN_148d98fcc(param_1,param_3,param_4);
  FUN_145ec8e38(param_1,param_3,param_4);
  return;
}



// FUNCTION 148d99396 FUN_148d99396 body=68 status=ok
// SIG undefined FUN_148d99396(void)

void FUN_148d99396(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 != 0) {
    return;
  }
  FUN_148d9829e(param_1,0);
  FUN_148d98fcc(param_1,param_3,param_4);
  FUN_145ec8e38(param_1,param_3,param_4);
  return;
}



// FUNCTION 148d993da FUN_148d993da body=210 status=ok
// SIG undefined FUN_148d993da(void)

undefined8 FUN_148d993da(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = (**(code **)(*param_1 + 0x2d0))();
  if ((lVar3 == 0) || (lVar4 = (**(code **)(*param_1 + 0x180))(param_1), lVar4 == 0)) {
    return 0;
  }
  iVar1 = *(int *)(lVar3 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x38);
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar3 + lVar7);
      if (lVar5 == 0) {
        return 0;
      }
      lVar5 = FUN_140334a94(lVar5,lVar4);
      if (lVar5 == 0) {
        return 0;
      }
      if (*(longlong *)(lVar5 + 0x398) == 0) {
        return 0;
      }
      lVar6 = FUN_144a7b4ca();
      if (*(longlong *)(lVar5 + 0x398) == 0) {
        return 0;
      }
      if (lVar6 == 0) {
        return 0;
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x398) + 0x10);
      if (lVar5 == 0) {
        return 0;
      }
      if (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) {
        return 0;
      }
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30) {
        return 0;
      }
      cVar2 = FUN_1403b06dc();
      if (cVar2 == '\0') {
        return 0;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return 1;
}



// FUNCTION 148d994ac FUN_148d994ac body=298 status=ok
// SIG undefined FUN_148d994ac(void)

void FUN_148d994ac(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b98ccf0;
  plVar1 = plVar3 + 2;
  local_68 = param_4;
  FUN_148da63fc(plVar1,param_1,param_2,param_3);
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_148da6566(&local_58,plVar1);
  plVar1 = local_50;
  local_48 = local_58;
  local_40 = local_50;
  if (local_50 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  }
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d995d8 FUN_148d995d8 body=47 status=ok
// SIG undefined FUN_148d995d8(void)

void FUN_148d995d8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (lVar1 != 0) {
    FUN_1441be788(lVar1,param_1 + 0x30,*(undefined4 *)(param_1 + 0x40));
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 148d99608 FUN_148d99608 body=299 status=ok
// SIG undefined FUN_148d99608(void)

void FUN_148d99608(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)FUN_14001cc68(0x40,0x10);
  local_30[1] = (longlong)&DAT_100000001;
  *local_30 = (longlong)&PTR_FUN_14b98cd70;
  local_38 = local_30 + 2;
  local_30[3] = 0;
  local_30[4] = 0;
  *(undefined1 *)(local_30 + 5) = 0;
  iVar4 = DAT_14cb970bc + 1;
  *(int *)((longlong)local_30 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar4;
  local_30[6] = param_1;
  *(undefined1 *)(local_30 + 7) = 0;
  local_30[2] = (longlong)&PTR_FUN_14b98cd90;
  FUN_148da66b0(&local_38);
  plVar3 = local_30;
  local_28 = local_38;
  local_20 = local_30;
  if (local_30 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_28);
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d99734 FUN_148d99734 body=40 status=ok
// SIG undefined FUN_148d99734(void)

void FUN_148d99734(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 148d9975c FUN_148d9975c body=1224 status=ok
// SIG undefined FUN_148d9975c(void)

void FUN_148d9975c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  longlong *local_98 [2];
  undefined8 *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = FUN_145da44aa(param_2);
  if (lVar4 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_78 = L"DialogChoice_Yes";
    local_70 = 0x10;
    FUN_1446e940c(&local_88,&local_78);
    local_78 = L"OakOnlineSessionClient";
    local_70 = 0x16;
    FUN_1446e940c(local_98,&local_78);
    FUN_140208bae(&local_78,local_98,&local_88,&DAT_149e06384);
    FUN_1446ddc76(&local_68,&DAT_14a179933,1);
    local_60 = 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,1);
    FUN_145da4fc8(&local_58,0);
    lVar6 = local_58;
    FUN_14023423e(local_58,&local_78);
    *(undefined1 *)(lVar6 + 0x18) = local_60;
    *(undefined8 *)(lVar6 + 0x10) = local_68;
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    local_78 = L"DialogChoice_No";
    local_70 = 0xf;
    FUN_1446e940c(&local_88,&local_78);
    local_78 = L"OakOnlineSessionClient";
    local_70 = 0x16;
    FUN_1446e940c(local_98,&local_78);
    FUN_140208bae(&local_78,local_98,&local_88,&DAT_149e06338);
    FUN_1446ddc76(&local_68,&DAT_14a179937,1);
    uVar2 = uStack_50;
    local_60 = 1;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_145da4fc8(&local_58,uVar2 & 0xffffffff);
    }
    lVar5 = local_58;
    lVar6 = lVar6 * 0x20;
    FUN_14023423e(local_58 + lVar6,&local_78);
    *(undefined1 *)(lVar5 + 0x18 + lVar6) = local_60;
    *(undefined8 *)(lVar5 + 0x10 + lVar6) = local_68;
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    local_78 = L"DialogChoice_NoRemind";
    local_70 = 0x15;
    FUN_1446e940c(&local_88,&local_78);
    local_78 = L"OakOnlineSessionClient";
    local_70 = 0x16;
    FUN_1446e940c(local_98,&local_78);
    FUN_140208bae(&local_78,local_98,&local_88,L"No, and don\'t ask again");
    FUN_1446ddc76(&local_68,"NoRemind",1);
    uVar2 = uStack_50;
    local_60 = 1;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_145da4fc8(&local_58,uVar2 & 0xffffffff);
    }
    lVar5 = local_58;
    lVar6 = lVar6 * 0x20;
    FUN_14023423e(local_58 + lVar6,&local_78);
    *(undefined1 *)(lVar5 + 0x18 + lVar6) = local_60;
    *(undefined8 *)(lVar5 + 0x10 + lVar6) = local_68;
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    puVar1 = local_88;
    local_80 = 3;
    *local_88 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_88[2] = lVar5;
    *local_88 = &PTR_FUN_14b98cdf0;
    local_88[3] = 0;
    FUN_14485c47a(local_88 + 3,param_1);
    puVar1[4] = param_1;
    local_78 = L"dlgNATHelp_Header";
    local_70 = 0x11;
    FUN_1446e940c(local_9c,&local_78);
    local_78 = L"OakOnlineSessionClient";
    local_70 = 0x16;
    FUN_1446e940c(local_a0,&local_78);
    FUN_140208bae(local_98,local_a0,local_9c,L"Strict NAT Detected");
    local_78 = L"dlgNATHelp_Body";
    local_70 = 0xf;
    FUN_1446e940c(local_9c,&local_78);
    local_78 = L"OakOnlineSessionClient";
    local_70 = 0x16;
    FUN_1446e940c(local_a0,&local_78);
    FUN_140208bae(&local_78,local_a0,local_9c,
                  L"Your NAT type is Strict, which may prevent you from joining and hearing others. An Open NAT type is recommended for the best online experience. View information on changing NAT settings?"
                 );
    local_c0 = 0;
    local_b0 = 1;
    local_b8 = 0;
    local_c8 = &local_88;
    FUN_1459dd948(lVar4,local_98,&local_78,&local_58);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    FUN_1449db362(&local_88);
    FUN_140e0067b(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d99c26 FUN_148d99c26 body=509 status=ok
// SIG undefined FUN_148d99c26(void)

void FUN_148d99c26(longlong *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong local_68 [2];
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_6c = param_2;
  lVar2 = (**(code **)(*param_1 + 0x2d0))();
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
    lVar4 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar4);
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0xe0) == local_6c)) {
        lVar2 = FUN_14030d4a0();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) goto LAB_148d99cae;
        break;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar4);
  }
  lVar6 = 0;
LAB_148d99cae:
  uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = FUN_140cb1480(uVar3);
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) &&
       (lVar4 = FUN_140d6e14c(), lVar4 != 0)) && ((lVar6 != 0 && (lVar2 != 0)))) &&
     (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
    FUN_140b6fd58(lVar2,&local_58,local_6c);
    if ((longlong)local_50 == 0) {
      local_50 = 0;
    }
    else {
      lVar2 = (longlong)local_50 * 0x38;
      plVar7 = local_58;
      do {
        FUN_140b74390(param_1,local_68);
        cVar1 = FUN_143f3ac8a(local_68,plVar7 + 4);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        if (((cVar1 == '\0') || (plVar7[2] == 0)) ||
           (cVar1 = FUN_140b70752(lVar4,local_6c), cVar1 == '\0')) {
          if ((*plVar7 != 0) &&
             (cVar1 = FUN_140b70752(lVar4,local_6c), plVar5 = plVar7, cVar1 != '\0'))
          goto LAB_148d99db1;
        }
        else {
          plVar5 = plVar7 + 2;
LAB_148d99db1:
          FUN_148da826a(lVar6,*plVar5);
        }
        plVar7 = plVar7 + 7;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    FUN_140cb1696(local_58,local_50);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d9a016 FUN_148d9a016 body=17 status=ok
// SIG undefined FUN_148d9a016(void)

void FUN_148d9a016(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar4 = *(longlong *)(param_1 + 0x598);
  if (lVar4 == 0) {
    return;
  }
  if (((*(longlong *)(lVar4 + 0x170) == 0) ||
      (plVar3 = *(longlong **)(lVar4 + 0x178), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    return;
  }
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) {
      cVar6 = FUN_1414e62ca(0);
      goto joined_r0x000148d90f6b;
    }
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar11 = iVar7 == iVar5;
    if (bVar11) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar11);
  cVar6 = FUN_1414e62ca(*(undefined8 *)(lVar4 + 0x170));
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
joined_r0x000148d90f6b:
  if (cVar6 == '\0') {
    plVar3 = *(longlong **)(lVar4 + 0x178);
    if (plVar3 != (longlong *)0x0) {
      iVar7 = (int)plVar3[1];
      while (iVar7 != 0) {
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar11 = iVar7 == iVar5;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
        if (bVar11) {
          FUN_1441df376(*(undefined8 *)(lVar4 + 0x170));
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return;
          }
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000148d90f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
    FUN_1441df376(0);
    return;
  }
  cVar6 = FUN_145d53b76(lVar4);
  if (cVar6 != '\0') {
    return;
  }
  lVar8 = FUN_148a7b16c(lVar4);
  if (lVar8 == 0) {
    return;
  }
  uVar9 = (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x180))();
  lVar8 = FUN_140334a94(lVar8,uVar9);
  if (lVar8 != 0) {
    lVar10 = FUN_144a5dd5e();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        == lVar10 + 0x30)) goto LAB_148d90fe1;
  }
  lVar8 = 0;
LAB_148d90fe1:
  FUN_148d8fb58(lVar4,lVar8);
  return;
}



// FUNCTION 148d9a02e FUN_148d9a02e body=38 status=ok
// SIG undefined FUN_148d9a02e(void)

undefined8 FUN_148d9a02e(undefined8 param_1,int param_2)

{
  FUN_145875f60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9a054 FUN_148d9a054 body=38 status=ok
// SIG undefined FUN_148d9a054(void)

undefined8 FUN_148d9a054(undefined8 param_1,int param_2)

{
  FUN_14154de72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9a07a FUN_148d9a07a body=38 status=ok
// SIG undefined FUN_148d9a07a(void)

undefined8 FUN_148d9a07a(undefined8 param_1,int param_2)

{
  FUN_145cbdb6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9a0a0 FUN_148d9a0a0 body=38 status=ok
// SIG undefined FUN_148d9a0a0(void)

undefined8 FUN_148d9a0a0(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9a0c6 FUN_148d9a0c6 body=38 status=ok
// SIG undefined FUN_148d9a0c6(void)

undefined8 FUN_148d9a0c6(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9a0ec FUN_148d9a0ec body=29 status=ok
// SIG undefined FUN_148d9a0ec(void)

undefined8 FUN_148d9a0ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9a10a FUN_148d9a10a body=38 status=ok
// SIG undefined FUN_148d9a10a(void)

undefined8 FUN_148d9a10a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_LeaveParty",1);
  return param_2;
}



// FUNCTION 148d9a130 FUN_148d9a130 body=48 status=ok
// SIG undefined FUN_148d9a130(void)

void FUN_148d9a130(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148d9a160 FUN_148d9a160 body=38 status=ok
// SIG undefined FUN_148d9a160(void)

undefined8 FUN_148d9a160(undefined8 param_1,int param_2)

{
  FUN_145875f60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9a186 FUN_148d9a186 body=31 status=ok
// SIG undefined FUN_148d9a186(void)

undefined8 FUN_148d9a186(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9a1ba FUN_148d9a1ba body=85 status=ok
// SIG undefined FUN_148d9a1ba(void)

void FUN_148d9a1ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988cc0;
  return;
}



// FUNCTION 148d9a210 FUN_148d9a210 body=118 status=ok
// SIG undefined FUN_148d9a210(void)

void FUN_148d9a210(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b988cc0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d9a277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d9a286 FUN_148d9a286 body=101 status=ok
// SIG undefined FUN_148d9a286(void)

undefined8 FUN_148d9a286(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ea8946(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d9a2ec FUN_148d9a2ec body=45 status=ok
// SIG undefined FUN_148d9a2ec(void)

longlong FUN_148d9a2ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145875e70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9a31a FUN_148d9a31a body=54 status=ok
// SIG undefined FUN_148d9a31a(void)

longlong FUN_148d9a31a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 148d9a350 FUN_148d9a350 body=29 status=ok
// SIG undefined FUN_148d9a350(void)

undefined8 FUN_148d9a350(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9a388 FUN_148d9a388 body=29 status=ok
// SIG undefined FUN_148d9a388(void)

bool FUN_148d9a388(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d9a3a6 FUN_148d9a3a6 body=26 status=ok
// SIG undefined FUN_148d9a3a6(void)

bool FUN_148d9a3a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d9a3c0 FUN_148d9a3c0 body=24 status=ok
// SIG undefined FUN_148d9a3c0(void)

bool FUN_148d9a3c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d9a3d8 FUN_148d9a3d8 body=93 status=ok
// SIG undefined FUN_148d9a3d8(void)

void FUN_148d9a3d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d9a436 FUN_148d9a436 body=93 status=ok
// SIG undefined FUN_148d9a436(void)

void FUN_148d9a436(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d9a494 FUN_148d9a494 body=126 status=ok
// SIG undefined FUN_148d9a494(void)

void FUN_148d9a494(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b988de0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d9a503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d9a512 FUN_148d9a512 body=35 status=ok
// SIG undefined FUN_148d9a512(void)

void FUN_148d9a512(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d9a531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148d9a536 FUN_148d9a536 body=142 status=ok
// SIG undefined FUN_148d9a536(void)

bool FUN_148d9a536(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d9a5c6 FUN_148d9a5c6 body=25 status=ok
// SIG undefined FUN_148d9a5c6(void)

void FUN_148d9a5c6(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d9a5db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 148d9a5e0 FUN_148d9a5e0 body=25 status=ok
// SIG undefined FUN_148d9a5e0(void)

void FUN_148d9a5e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d9a5f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 148d9a5f9 FUN_148d9a5f9 body=175 status=ok
// SIG undefined FUN_148d9a5f9(void)

undefined8 FUN_148d9a5f9(undefined8 param_1)

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
  local_b8 = FUN_1459f34c6();
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



// FUNCTION 148d9a6aa FUN_148d9a6aa body=68 status=ok
// SIG undefined FUN_148d9a6aa(void)

undefined8 * FUN_148d9a6aa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b988f90;
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



// FUNCTION 148d9a6f2 FUN_148d9a6f2 body=81 status=ok
// SIG undefined FUN_148d9a6f2(void)

undefined8 FUN_148d9a6f2(longlong param_1)

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



// FUNCTION 148d9a74a FUN_148d9a74a body=91 status=ok
// SIG undefined FUN_148d9a74a(void)

bool FUN_148d9a74a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148d9a77a;
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
LAB_148d9a77a:
  return lVar6 == param_2;
}



// FUNCTION 148d9a7a6 FUN_148d9a7a6 body=118 status=ok
// SIG undefined FUN_148d9a7a6(void)

void FUN_148d9a7a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98d050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988f90;
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



// FUNCTION 148d9a81c FUN_148d9a81c body=118 status=ok
// SIG undefined FUN_148d9a81c(void)

void FUN_148d9a81c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98d050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988f90;
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



// FUNCTION 148d9a892 FUN_148d9a892 body=156 status=ok
// SIG undefined FUN_148d9a892(void)

void FUN_148d9a892(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b98d050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b988f90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d9a91e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d9a92e FUN_148d9a92e body=98 status=ok
// SIG undefined FUN_148d9a92e(void)

void FUN_148d9a92e(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148d9a977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d9a986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148d9a992 FUN_148d9a992 body=380 status=ok
// SIG undefined FUN_148d9a992(void)

longlong * FUN_148d9a992(longlong *param_1,undefined8 *param_2)

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
LAB_148d9aa9c:
    *puVar3 = &PTR_LAB_14b3ecf50;
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
    *puVar3 = &PTR_FUN_14b989000;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_148d8d406;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148d9aa9c;
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
    *puVar3 = &PTR_LAB_14b3ecf50;
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
    *puVar3 = &PTR_FUN_14b989000;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_148d8d406;
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



// FUNCTION 148d9ab0e FUN_148d9ab0e body=64 status=ok
// SIG undefined FUN_148d9ab0e(void)

undefined8 * FUN_148d9ab0e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b989000;
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



// FUNCTION 148d9ab52 FUN_148d9ab52 body=81 status=ok
// SIG undefined FUN_148d9ab52(void)

undefined8 FUN_148d9ab52(longlong param_1)

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



// FUNCTION 148d9abaa FUN_148d9abaa body=89 status=ok
// SIG undefined FUN_148d9abaa(void)

bool FUN_148d9abaa(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148d9abf5;
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
LAB_148d9abf5:
  return lVar6 == param_2;
}



// FUNCTION 148d9ac20 FUN_148d9ac20 body=118 status=ok
// SIG undefined FUN_148d9ac20(void)

void FUN_148d9ac20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989000;
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



// FUNCTION 148d9ac96 FUN_148d9ac96 body=118 status=ok
// SIG undefined FUN_148d9ac96(void)

void FUN_148d9ac96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989000;
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



// FUNCTION 148d9ad0c FUN_148d9ad0c body=156 status=ok
// SIG undefined FUN_148d9ad0c(void)

void FUN_148d9ad0c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b989000;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d9ad98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d9ada8 FUN_148d9ada8 body=98 status=ok
// SIG undefined FUN_148d9ada8(void)

void FUN_148d9ada8(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148d9adf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d9ae00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148d9ae0a FUN_148d9ae0a body=94 status=ok
// SIG undefined FUN_148d9ae0a(void)

ulonglong FUN_148d9ae0a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148d9ae5d:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d9ae5d;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 148d9ae84 FUN_148d9ae84 body=103 status=ok
// SIG undefined FUN_148d9ae84(void)

void FUN_148d9ae84(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b8da8c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148d9aeec(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d9aeec FUN_148d9aeec body=76 status=ok
// SIG undefined FUN_148d9aeec(void)

void FUN_148d9aeec(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b8da8c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148d9af29;
    }
  }
  lVar2 = 0;
LAB_148d9af29:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148d9af38 FUN_148d9af38 body=9 status=ok
// SIG undefined FUN_148d9af38(void)

void FUN_148d9af38(longlong param_1)

{
  FUN_141072d6a(param_1 + 0x10);
  return;
}



// FUNCTION 148d9af42 FUN_148d9af42 body=29 status=ok
// SIG undefined FUN_148d9af42(void)

undefined8 FUN_148d9af42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9af60 FUN_148d9af60 body=150 status=ok
// SIG undefined FUN_148d9af60(void)

void FUN_148d9af60(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1b8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1b8)) {
      uVar5 = uVar4 / 0x1b8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1b8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148d9aff8 FUN_148d9aff8 body=181 status=ok
// SIG undefined FUN_148d9aff8(void)

longlong FUN_148d9aff8(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_148d9b090;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148d9b0ae(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_148d9b090:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148d9b0ae FUN_148d9b0ae body=284 status=ok
// SIG undefined FUN_148d9b0ae(void)

undefined4 * FUN_148d9b0ae(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148d9b1cc(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  FUN_1489be05c(0,0);
  local_40[6] = 0xffffffff;
  cVar1 = FUN_148d9b2b2(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148d9b3d0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d9b1cc FUN_148d9b1cc body=229 status=ok
// SIG undefined FUN_148d9b1cc(void)

int * FUN_148d9b1cc(longlong *param_1,int *param_2)

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



// FUNCTION 148d9b2b2 FUN_148d9b2b2 body=172 status=ok
// SIG undefined FUN_148d9b2b2(void)

undefined8 FUN_148d9b2b2(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1489be05c(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148d9b35e(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148d9b35e FUN_148d9b35e body=114 status=ok
// SIG undefined FUN_148d9b35e(void)

void FUN_148d9b35e(longlong *param_1,int param_2)

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



// FUNCTION 148d9b3d0 FUN_148d9b3d0 body=422 status=ok
// SIG undefined FUN_148d9b3d0(void)

void FUN_148d9b3d0(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 148d9b578 FUN_148d9b578 body=132 status=ok
// SIG undefined FUN_148d9b578(void)

void FUN_148d9b578(longlong param_1,int param_2)

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



// FUNCTION 148d9b5fe FUN_148d9b5fe body=9 status=ok
// SIG undefined FUN_148d9b5fe(void)

void FUN_148d9b5fe(longlong param_1)

{
  FUN_148ab6000(param_1 + 0x10);
  return;
}



// FUNCTION 148d9b608 FUN_148d9b608 body=29 status=ok
// SIG undefined FUN_148d9b608(void)

undefined8 FUN_148d9b608(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9b626 FUN_148d9b626 body=167 status=ok
// SIG undefined FUN_148d9b626(void)

void FUN_148d9b626(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d9b6a1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d9b6a1;
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
LAB_148d9b6a1:
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
                    /* WARNING: Could not recover jumptable at 0x000148d9b6c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d9b6cd FUN_148d9b6cd body=163 status=ok
// SIG undefined FUN_148d9b6cd(void)

void FUN_148d9b6cd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9897a0;
  uVar1 = DAT_14cbcdf28;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[0xb] = uVar1;
  *(undefined1 *)(puVar2 + 0xc) = 1;
  puVar2[2] = &PTR_FUN_14b9897c0;
  puVar2[0xd] = param_1;
  puVar2[0x12] = 0;
  *(undefined4 *)(puVar2 + 0x13) = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0xa4) = 0;
  puVar2[0x16] = 0;
  *(undefined4 *)(puVar2 + 0x17) = 0;
  return;
}



// FUNCTION 148d9b77a FUN_148d9b77a body=29 status=ok
// SIG undefined FUN_148d9b77a(void)

undefined8 FUN_148d9b77a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9b798 FUN_148d9b798 body=38 status=ok
// SIG undefined FUN_148d9b798(void)

undefined8 FUN_148d9b798(undefined8 param_1,int param_2)

{
  FUN_148d9bc6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d9b7be FUN_148d9b7be body=477 status=ok
// SIG undefined FUN_148d9b7be(void)

void FUN_148d9b7be(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_1;
  FUN_148d9bcb2(param_1[0xb] + 0x510,param_1);
  lVar4 = FUN_143f39178(param_1[0xb]);
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    lVar5 = FUN_140b6d0be();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      local_a0 = param_1;
      FUN_148d9c1ca(&local_80,param_1);
      FUN_1448b6402(lVar4 + 0x1e0,local_a8,&local_80);
      FUN_1449db362(&local_80);
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,&local_80);
  plVar1 = param_1 + 0xc;
  FUN_148d9be28(plVar1,&local_80);
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(&local_80);
  plVar2 = param_1 + 0xe;
  local_a0 = (longlong *)0x100000000;
  local_90 = 0xffffffff;
  iStack_8c = 0;
  uStack_88 = 0;
  uStack_98 = plVar2;
  if ((int)param_1[0x11] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_a0);
    iVar6 = (int)param_1[0x11];
  }
  uStack_60 = CONCAT44(uStack_84,uStack_88);
  local_68 = local_90;
  iStack_64 = iStack_8c;
  local_78 = (undefined4)local_a0;
  uStack_74 = local_a0._4_4_;
  uStack_70 = (undefined4)uStack_98;
  uStack_6c = uStack_98._4_4_;
  local_80 = plVar1;
  if ((iStack_8c != iVar6) || (uStack_98 != plVar2)) {
    do {
      if (((int)param_1[6] != 0) && (plVar3 = (longlong *)param_1[5], plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,(longlong)iStack_64 * 0x18 + *local_80,param_1[9]);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar2 || iStack_64 != iVar6));
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


