// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144051550 FUN_144051550 body=48 status=ok
// SIG undefined FUN_144051550(void)

longlong FUN_144051550(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b08;
  FUN_14589434e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440515ea FUN_1440515ea body=57 status=ok
// SIG undefined FUN_1440515ea(void)

void FUN_1440515ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad1d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad1d8 =
         FUN_140002ddd(FUN_1465e5a97,uVar1,L"OakOnlineSettingEditCondition_ConnectedToShift");
  }
  return;
}



// FUNCTION 144051632 FUN_144051632 body=57 status=ok
// SIG undefined FUN_144051632(void)

void FUN_144051632(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad1f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad1f0 =
         FUN_140002ddd(FUN_1465e5b2d,uVar1,L"OakOnlineSettingEditCondition_ShiftFriendSyncEnabled");
  }
  return;
}



// FUNCTION 14405167a FUN_14405167a body=57 status=ok
// SIG undefined FUN_14405167a(void)

void FUN_14405167a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad208 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad208 =
         FUN_140002ddd(FUN_1465e5bc3,uVar1,L"OakOnlineSettingEditCondition_CommunicationPrivilege");
  }
  return;
}



// FUNCTION 1440516c2 FUN_1440516c2 body=57 status=ok
// SIG undefined FUN_1440516c2(void)

void FUN_1440516c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad220 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad220 = FUN_140002ddd(FUN_1465e5c59,uVar1,L"OakOnlineSettingEditCondition_Ozone");
  }
  return;
}



// FUNCTION 14405170a FUN_14405170a body=57 status=ok
// SIG undefined FUN_14405170a(void)

void FUN_14405170a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad238 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad238 =
         FUN_140002ddd(FUN_1465e5cef,uVar1,L"OakOnlineSettingEditCondition_ShiftProfileVisibility");
  }
  return;
}



// FUNCTION 144051788 FUN_144051788 body=81 status=ok
// SIG undefined FUN_144051788(void)

void FUN_144051788(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  *(undefined4 *)((longlong)param_2 + 0x74) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined4 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb8) = 0;
  return;
}



// FUNCTION 1440517da FUN_1440517da body=201 status=ok
// SIG undefined FUN_1440517da(void)

void FUN_1440517da(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0xb0);
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
  plVar3 = *(longlong **)(param_2 + 0xa0);
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
  plVar3 = *(longlong **)(param_2 + 0x30);
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
                    /* WARNING: Could not recover jumptable at 0x000144051853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1440518a4 FUN_1440518a4 body=516 status=ok
// SIG undefined FUN_1440518a4(void)

undefined8 FUN_1440518a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      uVar4 = *(undefined8 *)(param_3 + lVar14);
      lVar5 = *(longlong *)(param_3 + 8 + lVar14);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + 8 + lVar14);
      *(undefined8 *)(param_2 + lVar14) = uVar4;
      *(longlong *)(param_2 + 8 + lVar14) = lVar5;
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
      lVar5 = param_3 + lVar14;
      uVar8 = *(undefined4 *)(lVar5 + 0x14);
      uVar9 = *(undefined4 *)(lVar5 + 0x18);
      uVar10 = *(undefined4 *)(lVar5 + 0x1c);
      puVar3 = (undefined4 *)(param_2 + 0x10 + lVar14);
      *puVar3 = *(undefined4 *)(lVar5 + 0x10);
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      *(undefined8 *)(param_2 + 0x20 + lVar14) = *(undefined8 *)(lVar5 + 0x20);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      lVar7 = *(longlong *)(lVar5 + 0x30);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + 0x30 + lVar14);
      *(undefined8 *)(param_2 + 0x28 + lVar14) = uVar4;
      *(longlong *)(param_2 + 0x30 + lVar14) = lVar7;
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
      lVar7 = param_2 + 0xb8 + lVar14;
      puVar12 = (undefined8 *)(lVar5 + 0x38);
      puVar13 = (undefined8 *)(lVar7 + -0x80);
      for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined4 *)(lVar7 + -0x28) = *(undefined4 *)(lVar5 + 0x90);
      uVar4 = *(undefined8 *)(lVar5 + 0x98);
      lVar7 = *(longlong *)(lVar5 + 0xa0);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + 0xa0 + lVar14);
      *(undefined8 *)(param_2 + 0x98 + lVar14) = uVar4;
      *(longlong *)(param_2 + 0xa0 + lVar14) = lVar7;
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
      uVar4 = *(undefined8 *)(lVar5 + 0xa8);
      lVar7 = *(longlong *)(lVar5 + 0xb0);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + 0xb0 + lVar14);
      *(undefined8 *)(param_2 + 0xa8 + lVar14) = uVar4;
      *(longlong *)(param_2 + 0xb0 + lVar14) = lVar7;
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
      *(undefined4 *)(param_2 + 0xb8 + lVar14) = *(undefined4 *)(lVar5 + 0xb8);
      lVar14 = lVar14 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144051aa8 FUN_144051aa8 body=201 status=ok
// SIG undefined FUN_144051aa8(void)

void FUN_144051aa8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xb0);
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
  plVar3 = *(longlong **)(param_1 + 0xa0);
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
                    /* WARNING: Could not recover jumptable at 0x000144051b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144051bc6 FUN_144051bc6 body=57 status=ok
// SIG undefined FUN_144051bc6(void)

void FUN_144051bc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad580 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad580 = FUN_140002ddd(FUN_1465e6763,uVar1,L"OakPickupActorDef");
  }
  return;
}



// FUNCTION 144051c1c FUN_144051c1c body=57 status=ok
// SIG undefined FUN_144051c1c(void)

void FUN_144051c1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad5c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad5c8 = FUN_140002ddd(FUN_1465e687c,uVar1,L"OakPlayerAudioProvider");
  }
  return;
}



// FUNCTION 144051c64 FUN_144051c64 body=57 status=ok
// SIG undefined FUN_144051c64(void)

void FUN_144051c64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad5e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad5e0 = FUN_140002ddd(FUN_1465e6913,uVar1,L"OakPlayerAudioProviderDef");
  }
  return;
}



// FUNCTION 144051cd6 FUN_144051cd6 body=4804 status=ok
// SIG undefined FUN_144051cd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144051cd6(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad1b0 = (ulonglong)uVar2;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7bd680);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7bdc60);
  FUN_1446f470e(&DAT_14cbad248,L"UNSET",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7be1f0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7be560,1,0);
  local_60 = "onlinecharacterprefs";
  local_58 = 0x14;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cbad280 = 0;
  uRam000000014cbad288 = 0;
  _DAT_14cbad290 = 0;
  DAT_14cbad298 = 0;
  uRam000000014cbad2a0 = 0;
  FUN_1446ddda2(&DAT_14cbad280,"onlinecharacterprefs",0);
  atexit((_func_5014 *)&LAB_14404fc38);
  _DAT_14cbad2a8 = 0;
  uRam000000014cbad2b0 = 0;
  _DAT_14cbad2b8 = 0;
  DAT_14cbad2c0 = 0;
  uRam000000014cbad2c8 = 0;
  FUN_1446ddda2(&DAT_14cbad2a8,"oak.onlinecharacterprefs",0);
  atexit((_func_5014 *)&LAB_14404fc49);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7be950,1,0);
  FUN_140056680(&DAT_14cbad2e8,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_14404fc5a);
  FUN_1446f470e(&DAT_14cbad2f8,L"Party",1);
  FUN_1446f470e(&DAT_14cbad300,&DAT_149e063b2,1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7bee10,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7beee0,1,0);
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b7c0530;
  local_78 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7c05f0,3,&PTR_FUN_14b7c0550);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7c0e60,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7c11c0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7c1420);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7c1600);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7c1d00,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7c1da0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7c2cc0,2,0);
  _DAT_14cbad4e0 = 0x47efffffe0000000;
  _DAT_14cbad4e8 = 0x47efffffe0000000;
  _DAT_14cbad4f0 = 0x47efffffe0000000;
  _DAT_14cbad4f8 = 0x47efffffe0000000;
  _DAT_14cbad500 = 0x47efffffe0000000;
  _DAT_14cbad508 = 0x47efffffe0000000;
  _DAT_14cbad510 = 0x47efffffe0000000;
  _DAT_14cbad518 = 0x47efffffe0000000;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7c3b10,2,0);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cbad550);
  if (cVar1 == '\0') {
    _DAT_14cbad550 = 0;
    uRam000000014cbad558 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7c4bd0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7c4c70);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7c4ff0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7c5270);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7c5380);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7c5480);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b7c56a0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7c56c0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7c5990,1,&PTR_FUN_14b7c5960);
  FUN_14098d3d2(FUN_14404fdbe,L"/Script/OakGame",L"ECharacterSelectPhase",&DAT_14cbad650);
  local_60 = "Cash";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad668 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbad670,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14404fdf5);
  _DAT_14cbad684 = 0;
  FUN_14052b5e0(&DAT_14cbad680,"PlayerAwareness",0);
  _DAT_14cbad690 = "PlayerAwareness";
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad698 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6a0 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6a8 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6b0 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6b8 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6c0 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6c8 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6d0 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6d8 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6e0 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6e8 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6f0 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad6f8 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad700 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad708 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad710 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad718 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad720 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbad728 = (ulonglong)uVar2;
  local_60 = "init";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "update";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "config_update";
  local_58 = 0xd;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "deinit";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&DAT_14cbad770,L"Client_NotifyLastDeathLocationAndMap",1);
  FUN_1446f470e(&DAT_14cbad780,L"Client_PlayEchoLog",1);
  FUN_1446f470e(&DAT_14cbad790,L"Client_RequestDLCEntitlements",1);
  FUN_1446f470e(&DAT_14cbad7a0,L"Client_ShowDLCLockedMessage",1);
  FUN_1446f470e(&DAT_14cbad7b0,L"Client_ShowDLCUpsellDialogue",1);
  FUN_1446f470e(&DAT_14cbad7c0,L"Client_UnlockEchoLog",1);
  FUN_1446f470e(&DAT_14cbad7d0,L"ClientBroadcastPersonalVehiclePermission",1);
  FUN_1446f470e(&DAT_14cbad7e0,L"ClientCallBlackMarketCooldownEvent",1);
  FUN_1446f470e(&DAT_14cbad7f0,L"ClientCallVendingMachineUsabilityFunction",1);
  FUN_1446f470e(&DAT_14cbad800,L"ClientCancelPing",1);
  FUN_1446f470e(&DAT_14cbad810,L"ClientCloseItemContainers",1);
  FUN_1446f470e(&DAT_14cbad820,L"ClientCreatePing",1);
  FUN_1446f470e(&DAT_14cbad830,L"ClientDiscoveryNotifyLocationDiscoveredStateChanged",1);
  FUN_1446f470e(&DAT_14cbad840,L"ClientEntitlementDisconnect",1);
  FUN_1446f470e(&DAT_14cbad850,L"ClientForceCharacterSelectionAfterCountdown",1);
  FUN_1446f470e(&DAT_14cbad860,L"ClientGameHostDisconnecting",1);
  FUN_1446f470e(&DAT_14cbad870,L"ClientNotifyExitingVehicle",1);
  FUN_1446f470e(&DAT_14cbad880,L"ClientNotifyNewGameEnded",1);
  FUN_1446f470e(&DAT_14cbad890,L"ClientNotifyTeleporting",1);
  FUN_1446f470e(&DAT_14cbad8a0,L"ClientOpenItemContainer",1);
  FUN_1446f470e(&DAT_14cbad8b0,L"ClientOpenMissionAcceptMenu",1);
  FUN_1446f470e(&DAT_14cbad8c0,L"ClientSendAllPlayersRequiredNotification",1);
  FUN_1446f470e(&DAT_14cbad8d0,L"ClientStartInGameCredits",1);
  FUN_1446f470e(&DAT_14cbad8e0,L"ClientStartPlatformActivity",1);
  FUN_1446f470e(&DAT_14cbad8f0,L"ClientStopInGameCredits",1);
  FUN_1446f470e(&DAT_14cbad900,L"ClientStopPlatformActivity",1);
  FUN_1446f470e(&DAT_14cbad910,L"ClientSyncVendingMachineTimer",1);
  FUN_1446f470e(&DAT_14cbad920,L"ClientTakeAllLostLoot",1);
  FUN_1446f470e(&DAT_14cbad950,L"Multicast_CheckpointActivated",1);
  FUN_1446f470e(&DAT_14cbad968,L"OnBossDimmedStateUpdatedRPC",1);
  FUN_1446f470e(&DAT_14cbad978,L"OnBossInvulnerabilityStateUpdatedRPC",1);
  FUN_1446f470e(&DAT_14cbad9f8,L"RequestTeleportToPlayer",1);
  FUN_1446f470e(&DAT_14cbada08,L"RequestTeleportToStation",1);
  FUN_1446f470e(&DAT_14cbada18,L"Server_PlayEchoLog",1);
  FUN_1446f470e(&DAT_14cbada28,L"ServerActivateDevPerk",1);
  FUN_1446f470e(&DAT_14cbada38,L"ServerActivateMission",1);
  FUN_1446f470e(&DAT_14cbada48,L"ServerCallLostLootEvent",1);
  FUN_1446f470e(&DAT_14cbada58,L"ServerCallVendingEvent",1);
  FUN_1446f470e(&DAT_14cbada68,L"ServerCameraTransition",1);
  FUN_1446f470e(&DAT_14cbada78,L"ServerCancelPing",1);
  FUN_1446f470e(&DAT_14cbada88,L"ServerCreatePing",1);
  FUN_1446f470e(&DAT_14cbada98,L"ServerCycleTrackedMission",1);
  FUN_1446f470e(&DAT_14cbadaa8,L"ServerDeleteJunkById",1);
  FUN_1446f470e(&DAT_14cbadab8,L"ServerDiscoveryMakeNonAuthoritativeDiscovery",1);
  FUN_1446f470e(&DAT_14cbadac8,L"ServerIncrementChallengeForPlayer",1);
  FUN_1446f470e(&DAT_14cbadad8,L"ServerInterruptTravelCountdown",1);
  FUN_1446f470e(&DAT_14cbadae8,L"ServerIOTDBought",1);
  FUN_1446f470e(&DAT_14cbadaf8,L"ServerLogInventoryState",1);
  FUN_1446f470e(&DAT_14cbadb08,L"ServerNotifyCharacterReadyForGameplay",1);
  FUN_1446f470e(&DAT_14cbadb18,L"ServerNotifyCharacterSelectFinished",1);
  FUN_1446f470e(&DAT_14cbadb28,L"ServerNotifyCharacterSelectStarted",1);
  FUN_1446f470e(&DAT_14cbadb38,L"ServerNotifyReadyForTeleport",1);
  FUN_1446f470e(&DAT_14cbadb48,L"ServerNotifyTeleportFailed",1);
  FUN_1446f470e(&DAT_14cbadb58,L"ServerNotifyTeleportScreenActive",1);
  FUN_1446f470e(&DAT_14cbadb68,L"ServerOnItemContainerMenuClosed",1);
  FUN_1446f470e(&DAT_14cbadb78,L"ServerOnRefillAmmo",1);
  FUN_1446f470e(&DAT_14cbadb88,L"ServerPingNewGameState",1);
  FUN_1446f470e(&DAT_14cbadb98,L"ServerPlayIdleDialog",1);
  FUN_1446f470e(&DAT_14cbadba8,L"ServerPuppetIt",1);
  FUN_1446f470e(&DAT_14cbadbb8,L"ServerPurchaseBuybackItem",1);
  FUN_1446f470e(&DAT_14cbadbc8,L"ServerPurchaseShopItem",1);
  FUN_1446f470e(&DAT_14cbadbd8,L"ServerReportDiscoveredPoAState",1);
  FUN_1446f470e(&DAT_14cbadbe8,L"ServerRequestAbandonMission",1);
  FUN_1446f470e(&DAT_14cbadbf8,L"ServerRequestEndMissionReplay",1);
  FUN_1446f470e(&DAT_14cbadc08,L"ServerRequestPersonalVehicle",1);
  FUN_1446f470e(&DAT_14cbadc18,L"ServerRequestPlayTraitMission",1);
  FUN_1446f470e(&DAT_14cbadc28,L"ServerRequestReplayMission",1);
  FUN_1446f470e(&DAT_14cbadc38,L"ServerRequestTrackMission",1);
  FUN_1446f470e(&DAT_14cbadc48,L"ServerRerollBlackMarketParts",1);
  FUN_1446f470e(&DAT_14cbadc58,L"ServerSellItem",1);
  FUN_1446f470e(&DAT_14cbadc68,L"ServerSetBestGrappleable",1);
  FUN_1446f470e(&DAT_14cbadc78,L"ServerSetBestTarget",1);
  FUN_1446f470e(&DAT_14cbadc88,L"ServerSetBulletMagnetismSettings",1);
  FUN_1446f470e(&DAT_14cbadc98,L"ServerSetCurrentVendingMachineUsable",1);
  FUN_1446f470e(&DAT_14cbadca8,L"ServerSetFullyAimingAtTarget",1);
  FUN_1446f470e(&DAT_14cbadcb8,L"ServerSetPersonalVehicleDef",1);
  FUN_1446f470e(&DAT_14cbadcc8,L"ServerSetRemoteCameraInfo",1);
  FUN_1446f470e(&DAT_14cbadcd8,L"ServerSetVehicleHoverDriveDef",1);
  FUN_1446f470e(&DAT_14cbadce8,L"ServerStartUsing_ObjectHosted",1);
  FUN_1446f470e(&DAT_14cbadcf8,L"ServerStopUsing_ObjectHosted",1);
  FUN_1446f470e(&DAT_14cbadd08,L"ServerSwitchActiveCharacterProfile",1);
  FUN_1446f470e(&DAT_14cbadd18,L"ServerTransferFirmware",1);
  FUN_1446f470e(&DAT_14cbadd28,L"ServerUnpuppet",1);
  FUN_1446f470e(&DAT_14cbadd38,L"ServerUpdateOakCamera",1);
  FUN_1446f470e(&DAT_14cbadd48,L"ServerUseJunkObject",1);
  FUN_1446f470e(&DAT_14cbadd58,L"ServerUseObject",1);
  FUN_1446f470e(&DAT_14cbadd70,L"ShakeUI",1);
  uStack_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7cf640,1,&PTR_FUN_14b7cf5f0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144052fad FUN_144052fad body=55 status=ok
// SIG undefined FUN_144052fad(void)

void FUN_144052fad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbadfc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbadfc0 = FUN_14171c317(FUN_1465ea61e,uVar1,L"EPlayerEncounterEndReason");
  }
  return;
}



// FUNCTION 144052fe4 FUN_144052fe4 body=55 status=ok
// SIG undefined FUN_144052fe4(void)

void FUN_144052fe4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae008 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae008 = FUN_14171c317(FUN_1465ea6ab,uVar1,L"EPlayerMetricsEvent");
  }
  return;
}



// FUNCTION 14405305f FUN_14405305f body=55 status=ok
// SIG undefined FUN_14405305f(void)

void FUN_14405305f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae148 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae148 = FUN_14171c317(FUN_1465eaa32,uVar1,L"EPuppetAttackStyle");
  }
  return;
}



// FUNCTION 144053096 FUN_144053096 body=47 status=ok
// SIG undefined FUN_144053096(void)

longlong FUN_144053096(void)

{
  if (DAT_14cbae2e8 == 0) {
    FUN_14000fc22(&DAT_14cbae2e8,&PTR_FUN_14b7d78e0);
  }
  return DAT_14cbae2e8;
}



// FUNCTION 1440530db FUN_1440530db body=47 status=ok
// SIG undefined FUN_1440530db(void)

longlong FUN_1440530db(void)

{
  if (DAT_14cbae308 == 0) {
    FUN_14000fc22(&DAT_14cbae308,&PTR_FUN_14b7d7a48);
  }
  return DAT_14cbae308;
}



// FUNCTION 14405311f FUN_14405311f body=47 status=ok
// SIG undefined FUN_14405311f(void)

longlong FUN_14405311f(void)

{
  if (DAT_14cbae338 == 0) {
    FUN_14000fc22(&DAT_14cbae338,&PTR_FUN_14b7d7d28);
  }
  return DAT_14cbae338;
}



// FUNCTION 14405314e FUN_14405314e body=735 status=ok
// SIG undefined FUN_14405314e(void)

void FUN_14405314e(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_144053320;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_144053320:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x860))(param_1,&local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14405342e FUN_14405342e body=2920 status=ok
// SIG undefined FUN_14405342e(void)

void FUN_14405342e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae3f8) {
    FUN_144b3d300(&DAT_14cbae3f8);
    if (DAT_14cbae3f8 == -1) {
      FUN_1446f470e(&DAT_14cbae3f0,L"ExperienceState",1);
      _Init_thread_footer(&DAT_14cbae3f8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae404) {
    FUN_144b3d300(&DAT_14cbae404);
    if (DAT_14cbae404 == -1) {
      FUN_1446f470e(&DAT_14cbae3fc,L"PlayerDifficulty",1);
      _Init_thread_footer(&DAT_14cbae404);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae410) {
    FUN_144b3d300(&DAT_14cbae410);
    if (DAT_14cbae410 == -1) {
      FUN_1446f470e(&DAT_14cbae408,L"TravelStatus",1);
      _Init_thread_footer(&DAT_14cbae410);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae41c) {
    FUN_144b3d300(&DAT_14cbae41c);
    if (DAT_14cbae41c == -1) {
      FUN_1446f470e(&DAT_14cbae414,L"bInZoneTransition",1);
      _Init_thread_footer(&DAT_14cbae41c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae428) {
    FUN_144b3d300(&DAT_14cbae428);
    if (DAT_14cbae428 == -1) {
      FUN_1446f470e(&DAT_14cbae420,L"bInNoSignal_NoTravelZone",1);
      _Init_thread_footer(&DAT_14cbae428);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae434) {
    FUN_144b3d300(&DAT_14cbae434);
    if (DAT_14cbae434 == -1) {
      FUN_1446f470e(&DAT_14cbae42c,L"bInNoSignal_WorldSettings_NoTravelZone",1);
      _Init_thread_footer(&DAT_14cbae434);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae440) {
    FUN_144b3d300(&DAT_14cbae440);
    if (DAT_14cbae440 == -1) {
      FUN_1446f470e(&DAT_14cbae438,L"RestrictPlayerNamesZone",1);
      _Init_thread_footer(&DAT_14cbae440);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae44c) {
    FUN_144b3d300(&DAT_14cbae44c);
    if (DAT_14cbae44c == -1) {
      FUN_1446f470e(&DAT_14cbae444,L"AmmoNeeds",1);
      _Init_thread_footer(&DAT_14cbae44c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae458) {
    FUN_144b3d300(&DAT_14cbae458);
    if (DAT_14cbae458 == -1) {
      FUN_1446f470e(&DAT_14cbae450,L"BackpackItems",1);
      _Init_thread_footer(&DAT_14cbae458);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae464) {
    FUN_144b3d300(&DAT_14cbae464);
    if (DAT_14cbae464 == -1) {
      FUN_1446f470e(&DAT_14cbae45c,L"BackpackContainer",1);
      _Init_thread_footer(&DAT_14cbae464);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae470) {
    FUN_144b3d300(&DAT_14cbae470);
    if (DAT_14cbae470 == -1) {
      FUN_1446f470e(&DAT_14cbae468,L"BankItems",1);
      _Init_thread_footer(&DAT_14cbae470);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae47c) {
    FUN_144b3d300(&DAT_14cbae47c);
    if (DAT_14cbae47c == -1) {
      FUN_1446f470e(&DAT_14cbae474,L"BankContainer",1);
      _Init_thread_footer(&DAT_14cbae47c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae488) {
    FUN_144b3d300(&DAT_14cbae488);
    if (DAT_14cbae488 == -1) {
      FUN_1446f470e(&DAT_14cbae480,L"HighestUnlockedMayhemLevel",1);
      _Init_thread_footer(&DAT_14cbae488);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae494) {
    FUN_144b3d300(&DAT_14cbae494);
    if (DAT_14cbae494 == -1) {
      FUN_1446f470e(&DAT_14cbae48c,L"MusicThreat",1);
      _Init_thread_footer(&DAT_14cbae494);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae4a0) {
    FUN_144b3d300(&DAT_14cbae4a0);
    if (DAT_14cbae4a0 == -1) {
      FUN_1446f470e(&DAT_14cbae498,L"CriticalMusicThreat",1);
      _Init_thread_footer(&DAT_14cbae4a0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae4ac) {
    FUN_144b3d300(&DAT_14cbae4ac);
    if (DAT_14cbae4ac == -1) {
      FUN_1446f470e(&DAT_14cbae4a4,L"bMinibossCombat",1);
      _Init_thread_footer(&DAT_14cbae4ac);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae4b8) {
    FUN_144b3d300(&DAT_14cbae4b8);
    if (DAT_14cbae4b8 == -1) {
      FUN_1446f470e(&DAT_14cbae4b0,L"MusicCombatZone",1);
      _Init_thread_footer(&DAT_14cbae4b8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae4c4) {
    FUN_144b3d300(&DAT_14cbae4c4);
    if (DAT_14cbae4c4 == -1) {
      FUN_1446f470e(&DAT_14cbae4bc,L"bDrivingVehicle",1);
      _Init_thread_footer(&DAT_14cbae4c4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae4d0) {
    FUN_144b3d300(&DAT_14cbae4d0);
    if (DAT_14cbae4d0 == -1) {
      FUN_1446f470e(&DAT_14cbae4c8,L"GenericProperties",1);
      _Init_thread_footer(&DAT_14cbae4d0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae4dc) {
    FUN_144b3d300(&DAT_14cbae4dc);
    if (DAT_14cbae4dc == -1) {
      FUN_1446f470e(&DAT_14cbae4d4,L"BuddyIndex",1);
      _Init_thread_footer(&DAT_14cbae4dc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae4e8) {
    FUN_144b3d300(&DAT_14cbae4e8);
    if (DAT_14cbae4e8 == -1) {
      FUN_1446f470e(&DAT_14cbae4e0,L"CurrentCharacterSelectPhase",1);
      _Init_thread_footer(&DAT_14cbae4e8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae4f4) {
    FUN_144b3d300(&DAT_14cbae4f4);
    if (DAT_14cbae4f4 == -1) {
      FUN_1446f470e(&DAT_14cbae4ec,L"BlackMarketCooldownTimestamp",1);
      _Init_thread_footer(&DAT_14cbae4f4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae500) {
    FUN_144b3d300(&DAT_14cbae500);
    if (DAT_14cbae500 == -1) {
      FUN_1446f470e(&DAT_14cbae4f8,L"bBlackMarketMachineDiscovered",1);
      _Init_thread_footer(&DAT_14cbae500);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae50c) {
    FUN_144b3d300(&DAT_14cbae50c);
    if (DAT_14cbae50c == -1) {
      FUN_1446f470e(&DAT_14cbae504,L"ReplicatedLostLootSlots",1);
      _Init_thread_footer(&DAT_14cbae50c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae518) {
    FUN_144b3d300(&DAT_14cbae518);
    if (DAT_14cbae518 == -1) {
      FUN_1446f470e(&DAT_14cbae510,L"ReplicatedChallengeCompletion",1);
      _Init_thread_footer(&DAT_14cbae518);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae524) {
    FUN_144b3d300(&DAT_14cbae524);
    if (DAT_14cbae524 == -1) {
      FUN_1446f470e(&DAT_14cbae51c,L"ChallengeObjectiveStates",1);
      _Init_thread_footer(&DAT_14cbae524);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae530) {
    FUN_144b3d300(&DAT_14cbae530);
    if (DAT_14cbae530 == -1) {
      FUN_1446f470e(&DAT_14cbae528,L"DiscoveryPinningState",1);
      _Init_thread_footer(&DAT_14cbae530);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae53c) {
    FUN_144b3d300(&DAT_14cbae53c);
    if (DAT_14cbae53c == -1) {
      FUN_1446f470e(&DAT_14cbae534,L"bIsBusyInMenu",1);
      _Init_thread_footer(&DAT_14cbae53c);
      return;
    }
  }
  return;
}



// FUNCTION 144053ffa FUN_144053ffa body=55 status=ok
// SIG undefined FUN_144053ffa(void)

void FUN_144053ffa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae5c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae5c8 = FUN_140002ddd(FUN_144054031,uVar1,L"OakProfileSaveHeader");
  }
  return;
}



// FUNCTION 144054031 FUN_144054031 body=47 status=ok
// SIG undefined FUN_144054031(void)

longlong FUN_144054031(void)

{
  if (DAT_14cbae5c0 == 0) {
    FUN_14086a14e(&DAT_14cbae5c0,&PTR_FUN_14b7da1c8);
  }
  return DAT_14cbae5c0;
}



// FUNCTION 144054060 FUN_144054060 body=48 status=ok
// SIG undefined FUN_144054060(void)

void FUN_144054060(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a8;
  *puVar1 = &PTR_FUN_14b7dbf80;
  return;
}



// FUNCTION 14405409c FUN_14405409c body=227 status=ok
// SIG undefined FUN_14405409c(void)

longlong FUN_14405409c(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbae5f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a82a90;
    local_38 = &LAB_144054091;
    local_40 = &LAB_144054094;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/OakGame",L"OakProgression_ProgressRoleShared",&DAT_14cbae5f0,
                  &DAT_144054090);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae5f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144054180 FUN_144054180 body=47 status=ok
// SIG undefined FUN_144054180(void)

longlong FUN_144054180(void)

{
  if (DAT_14cbae5f8 == 0) {
    FUN_14073dd9a(&DAT_14cbae5f8,&PTR_FUN_14b7da328);
  }
  return DAT_14cbae5f8;
}



// FUNCTION 1440541b0 FUN_1440541b0 body=48 status=ok
// SIG undefined FUN_1440541b0(void)

longlong FUN_1440541b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440541e0 FUN_1440541e0 body=48 status=ok
// SIG undefined FUN_1440541e0(void)

longlong FUN_1440541e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x748;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054210 FUN_144054210 body=48 status=ok
// SIG undefined FUN_144054210(void)

longlong FUN_144054210(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x750;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054240 FUN_144054240 body=48 status=ok
// SIG undefined FUN_144054240(void)

longlong FUN_144054240(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x878;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054270 FUN_144054270 body=48 status=ok
// SIG undefined FUN_144054270(void)

longlong FUN_144054270(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1100;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440542a0 FUN_1440542a0 body=48 status=ok
// SIG undefined FUN_1440542a0(void)

longlong FUN_1440542a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1108;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440542d0 FUN_1440542d0 body=48 status=ok
// SIG undefined FUN_1440542d0(void)

longlong FUN_1440542d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1118;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054300 FUN_144054300 body=48 status=ok
// SIG undefined FUN_144054300(void)

longlong FUN_144054300(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1120;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054330 FUN_144054330 body=48 status=ok
// SIG undefined FUN_144054330(void)

longlong FUN_144054330(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1128;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054360 FUN_144054360 body=48 status=ok
// SIG undefined FUN_144054360(void)

longlong FUN_144054360(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1130;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054390 FUN_144054390 body=48 status=ok
// SIG undefined FUN_144054390(void)

longlong FUN_144054390(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1138;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440543c0 FUN_1440543c0 body=48 status=ok
// SIG undefined FUN_1440543c0(void)

longlong FUN_1440543c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1140;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440543f0 FUN_1440543f0 body=48 status=ok
// SIG undefined FUN_1440543f0(void)

longlong FUN_1440543f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1148;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054420 FUN_144054420 body=48 status=ok
// SIG undefined FUN_144054420(void)

longlong FUN_144054420(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1150;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054450 FUN_144054450 body=48 status=ok
// SIG undefined FUN_144054450(void)

longlong FUN_144054450(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1158;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054480 FUN_144054480 body=48 status=ok
// SIG undefined FUN_144054480(void)

longlong FUN_144054480(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1160;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440544b0 FUN_1440544b0 body=48 status=ok
// SIG undefined FUN_1440544b0(void)

longlong FUN_1440544b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1168;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440544e0 FUN_1440544e0 body=48 status=ok
// SIG undefined FUN_1440544e0(void)

longlong FUN_1440544e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1170;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054510 FUN_144054510 body=48 status=ok
// SIG undefined FUN_144054510(void)

longlong FUN_144054510(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1178;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054540 FUN_144054540 body=48 status=ok
// SIG undefined FUN_144054540(void)

longlong FUN_144054540(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1180;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054570 FUN_144054570 body=48 status=ok
// SIG undefined FUN_144054570(void)

longlong FUN_144054570(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1188;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440545a0 FUN_1440545a0 body=48 status=ok
// SIG undefined FUN_1440545a0(void)

longlong FUN_1440545a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1190;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440545d0 FUN_1440545d0 body=48 status=ok
// SIG undefined FUN_1440545d0(void)

longlong FUN_1440545d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1198;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054600 FUN_144054600 body=48 status=ok
// SIG undefined FUN_144054600(void)

longlong FUN_144054600(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x11b0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054630 FUN_144054630 body=48 status=ok
// SIG undefined FUN_144054630(void)

longlong FUN_144054630(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a20;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054660 FUN_144054660 body=48 status=ok
// SIG undefined FUN_144054660(void)

longlong FUN_144054660(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a28;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054690 FUN_144054690 body=48 status=ok
// SIG undefined FUN_144054690(void)

longlong FUN_144054690(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a30;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440546c0 FUN_1440546c0 body=48 status=ok
// SIG undefined FUN_1440546c0(void)

longlong FUN_1440546c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a38;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440546f0 FUN_1440546f0 body=48 status=ok
// SIG undefined FUN_1440546f0(void)

longlong FUN_1440546f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a40;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054720 FUN_144054720 body=48 status=ok
// SIG undefined FUN_144054720(void)

longlong FUN_144054720(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a48;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054750 FUN_144054750 body=48 status=ok
// SIG undefined FUN_144054750(void)

longlong FUN_144054750(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ac8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054780 FUN_144054780 body=48 status=ok
// SIG undefined FUN_144054780(void)

longlong FUN_144054780(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ad0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440547b0 FUN_1440547b0 body=48 status=ok
// SIG undefined FUN_1440547b0(void)

longlong FUN_1440547b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b68;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440547e0 FUN_1440547e0 body=48 status=ok
// SIG undefined FUN_1440547e0(void)

longlong FUN_1440547e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b70;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054810 FUN_144054810 body=48 status=ok
// SIG undefined FUN_144054810(void)

longlong FUN_144054810(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x698;
  FUN_1457e5e9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054840 FUN_144054840 body=48 status=ok
// SIG undefined FUN_144054840(void)

longlong FUN_144054840(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x6a0;
  FUN_1457e5e9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054878 FUN_144054878 body=38 status=ok
// SIG undefined FUN_144054878(void)

undefined8 FUN_144054878(undefined8 param_1,int param_2)

{
  thunk_FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14405489e FUN_14405489e body=48 status=ok
// SIG undefined FUN_14405489e(void)

longlong FUN_14405489e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440548ce FUN_1440548ce body=48 status=ok
// SIG undefined FUN_1440548ce(void)

longlong FUN_1440548ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440548fe FUN_1440548fe body=48 status=ok
// SIG undefined FUN_1440548fe(void)

longlong FUN_1440548fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1538;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14405492e FUN_14405492e body=48 status=ok
// SIG undefined FUN_14405492e(void)

longlong FUN_14405492e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1540;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054a28 FUN_144054a28 body=29 status=ok
// SIG undefined FUN_144054a28(void)

undefined8 FUN_144054a28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144054a88 FUN_144054a88 body=216 status=ok
// SIG undefined FUN_144054a88(void)

undefined8 FUN_144054a88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      FUN_1447715ec(param_2 + lVar16 + 8,param_3 + lVar16 + 8);
      lVar1 = param_2 + lVar16;
      lVar2 = param_3 + lVar16;
      FUN_1447715ec(lVar1 + 0x30,lVar2 + 0x30);
      uVar4 = *(undefined4 *)(lVar2 + 0x5c);
      uVar5 = *(undefined4 *)(lVar2 + 0x60);
      uVar6 = *(undefined4 *)(lVar2 + 100);
      uVar7 = *(undefined4 *)(lVar2 + 0x68);
      uVar8 = *(undefined4 *)(lVar2 + 0x6c);
      uVar9 = *(undefined4 *)(lVar2 + 0x70);
      uVar10 = *(undefined4 *)(lVar2 + 0x74);
      uVar11 = *(undefined4 *)(lVar2 + 0x74);
      uVar12 = *(undefined4 *)(lVar2 + 0x78);
      uVar13 = *(undefined4 *)(lVar2 + 0x7c);
      uVar14 = *(undefined4 *)(lVar2 + 0x80);
      *(undefined4 *)(lVar1 + 0x58) = *(undefined4 *)(lVar2 + 0x58);
      *(undefined4 *)(lVar1 + 0x5c) = uVar4;
      *(undefined4 *)(lVar1 + 0x60) = uVar5;
      *(undefined4 *)(lVar1 + 100) = uVar6;
      *(undefined4 *)(lVar1 + 0x68) = uVar7;
      *(undefined4 *)(lVar1 + 0x6c) = uVar8;
      *(undefined4 *)(lVar1 + 0x70) = uVar9;
      *(undefined4 *)(lVar1 + 0x74) = uVar10;
      *(undefined4 *)(lVar1 + 0x74) = uVar11;
      *(undefined4 *)(lVar1 + 0x78) = uVar12;
      *(undefined4 *)(lVar1 + 0x7c) = uVar13;
      *(undefined4 *)(lVar1 + 0x80) = uVar14;
      uVar3 = *(undefined8 *)(lVar2 + 0x8d);
      *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(lVar2 + 0x88);
      *(undefined8 *)(lVar1 + 0x8d) = uVar3;
      if (param_2 != param_3) {
        if (*(char *)(param_3 + 0xa0 + lVar16) == '\x01') {
          *(undefined8 *)(param_2 + 0x98 + lVar16) = *(undefined8 *)(param_3 + 0x98 + lVar16);
          uVar15 = 1;
        }
        else {
          if (*(char *)(param_2 + 0xa0 + lVar16) != '\x01') goto LAB_144054b41;
          uVar15 = 0;
        }
        *(undefined1 *)(param_2 + 0xa0 + lVar16) = uVar15;
      }
LAB_144054b41:
      lVar16 = lVar16 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144054b88 FUN_144054b88 body=59 status=ok
// SIG undefined FUN_144054b88(void)

undefined8 FUN_144054b88(longlong *param_1)

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



// FUNCTION 144054bd4 FUN_144054bd4 body=88 status=ok
// SIG undefined FUN_144054bd4(void)

void FUN_144054bd4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x15) == '\x01') {
    if (*(char *)(param_2 + 0x14) == '\x01') {
      *(undefined1 *)(param_2 + 0x14) = 0;
    }
    *param_2 = &PTR_FUN_14b0703c0;
    if (param_2[9] != 0) {
      FUN_1400020a8();
    }
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x15) = 0;
  }
  return;
}



// FUNCTION 144054cc9 FUN_144054cc9 body=3443 status=ok
// SIG undefined FUN_144054cc9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144054cc9(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = L"AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbade68 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbade70);
  if (cVar1 == '\0') {
    _DAT_14cbade70 = 0;
    uRam000000014cbade78 = 0;
  }
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbade80 = 0x47efffffe0000000;
  _DAT_14cbade88 = 0x47efffffe0000000;
  _DAT_14cbade90 = 0x47efffffe0000000;
  _DAT_14cbade98 = 0x47efffffe0000000;
  _DAT_14cbadea0 = 0x47efffffe0000000;
  _DAT_14cbadea8 = 0x47efffffe0000000;
  _DAT_14cbadeb0 = 0x47efffffe0000000;
  _DAT_14cbadeb8 = 0x47efffffe0000000;
  local_70 = 
  L"慃桳眀慥潰彮灤彳獥楴慭整戀獡捩挀慨汬湥敧猀捯慩l桰瑯彯潭敤最湥牥捩瑟獡k慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadec0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbadec8,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144052f9c);
  local_70 = L"潢敮䜀戀砀䄀琀琀爀椀戀甀琀攀䐀攀昀";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbadedc = 0;
  FUN_14052b5e0(&DAT_14cbaded8,"PlayerAwareness",0);
  _DAT_14cbadee8 = "PlayerAwareness";
  local_70 = L"basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadef0 = (ulonglong)uVar2;
  local_70 = L"challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadef8 = (ulonglong)uVar2;
  local_70 = L"online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf00 = (ulonglong)uVar2;
  local_70 = L"social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf08 = (ulonglong)uVar2;
  local_70 = L"alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf10 = (ulonglong)uVar2;
  local_70 = L"photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf18 = (ulonglong)uVar2;
  local_70 = L"generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf20 = (ulonglong)uVar2;
  local_70 = L"mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf28 = (ulonglong)uVar2;
  local_70 = 
  L"慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf30 = (ulonglong)uVar2;
  local_70 = L"respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf38 = (ulonglong)uVar2;
  local_70 = L"tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf40 = (ulonglong)uVar2;
  local_70 = L"special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf48 = (ulonglong)uVar2;
  local_70 = L"generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf50 = (ulonglong)uVar2;
  local_70 = L"vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf58 = (ulonglong)uVar2;
  local_70 = L"ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf60 = (ulonglong)uVar2;
  local_70 = L"INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf68 = (ulonglong)uVar2;
  local_70 = L"NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf70 = (ulonglong)uVar2;
  local_70 = L"MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf78 = (ulonglong)uVar2;
  local_70 = L"collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbadf80 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbadf88,L"UNSET",1);
  local_70 = L"湩瑩";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = L"update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = L"config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = L"deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cbadf90,L"Party",1);
  FUN_1446f470e(&DAT_14cbadf98,&DAT_149e063b2,1);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7d45b0,1,0);
  FUN_14098d3d2(FUN_144052fad,L"/Script/OakGame",L"EPlayerEncounterEndReason",&DAT_14cbadfb8);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7d4700,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7d47d0,1,0);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14b7d52b0;
  local_98 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7d5320,2,&PTR_FUN_14b7d52d0);
  local_70 = L"獕e慔杲瑥潌正圀慥潰nGpsGeneratorSettings_TargetingOwner";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbae078 = (ulonglong)uVar2;
  local_70 = L"Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbae080 = (ulonglong)uVar2;
  local_70 = L"TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbae088 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbae090,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14405301b);
  FUN_140056680(&DAT_14cbae0a0,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14405302c);
  FUN_140056680(&DAT_14cbae0b0,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14405303d);
  FUN_140056680(&DAT_14cbae0c0,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14405304e);
  FUN_1446f470e(&DAT_14cbae0d0,L"LIMB_GORED",1);
  _DAT_14cbae0d8 = 0x4072c00000000000;
  _DAT_14cbae0e0 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbae0e8,L"body",1);
  FUN_1446f470e(&DAT_14cbae0f0,L"title_card",1);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7d5480,1,&PTR_FUN_14b7d5450);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7d55b0);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14b7d59e0;
  local_98 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7d5a00,1,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7d6240,1,&PTR_FUN_14b7d61c0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7d6860,1,0);
  FUN_1446f470e(&DAT_14cbae290,L"NotifyWatchedGenericPropertyDelta",1);
  FUN_1446f470e(&DAT_14cbae320,L"Server_CreateDiscoveryPin",1);
  FUN_1446f470e(&DAT_14cbae330,L"Server_GrantNewCharacterSkipMissionRewards",1);
  FUN_1446f470e(&DAT_14cbae340,L"Server_RemoveAllDiscoveryPins",1);
  FUN_1446f470e(&DAT_14cbae350,L"Server_RemoveDiscoveryPin",1);
  FUN_1446f470e(&DAT_14cbae360,L"ServerEnteredWorldRegion",1);
  FUN_1446f470e(&DAT_14cbae370,L"ServerSetCurrentCharacterSelectPhase",1);
  FUN_1446f470e(&DAT_14cbae380,L"ServerSetGbxActorParts",1);
  FUN_1446f470e(&DAT_14cbae390,L"ServerSetPlayerBusyInMenu",1);
  FUN_1446f470e(&DAT_14cbae3a0,L"ServerSetPlayerProfileDifficulty",1);
  FUN_1446f470e(&DAT_14cbae3b0,L"ServerSetTravelStatus",1);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7d9d20,1,&PTR_FUN_14b7d9c80);
  local_70 = L"Online";
  local_68 = 6;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Online";
  local_68 = 6;
  FUN_140208c1e(&DAT_14cbae540,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144053f96);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_140208c1e(&DAT_14cbae550,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144053faa);
  local_70 = L"Away";
  local_68 = 4;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Away";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cbae560,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144053fbe);
  local_70 = L"DoNotDisturb";
  local_68 = 0xc;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Do Not Disturb";
  local_68 = 0xe;
  FUN_140208c1e(&DAT_14cbae570,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144053fd2);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cbae580,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144053fe6);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7da0a0,1,0);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7da160,1,0);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7da200);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7da370,2,0);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7daa10,1,0);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7dad20);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144055a42 FUN_144055a42 body=227 status=ok
// SIG undefined FUN_144055a42(void)

longlong FUN_144055a42(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbae6c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145bba682;
    local_38 = &LAB_144055b26;
    local_40 = FUN_144055b29;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/OakGame",L"OakRadioSystem",&DAT_14cbae6c0,&DAT_144055a40);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae6c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144055b29 FUN_144055b29 body=35 status=ok
// SIG undefined FUN_144055b29(void)

void FUN_144055b29(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1486e4fa0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7e3160;
  return;
}



// FUNCTION 144055b51 FUN_144055b51 body=47 status=ok
// SIG undefined FUN_144055b51(void)

longlong FUN_144055b51(void)

{
  if (DAT_14cbae6c8 == 0) {
    FUN_14073dd9a(&DAT_14cbae6c8,&PTR_LAB_14b7e3118);
  }
  return DAT_14cbae6c8;
}



// FUNCTION 144055b80 FUN_144055b80 body=55 status=ok
// SIG undefined FUN_144055b80(void)

void FUN_144055b80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae8c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae8c0 = FUN_14171c317(FUN_1465ec0ca,uVar1,L"EOakShiftProfileVisibility");
  }
  return;
}



// FUNCTION 144055bb7 FUN_144055bb7 body=55 status=ok
// SIG undefined FUN_144055bb7(void)

void FUN_144055bb7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae990 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae990 = FUN_14171c317(FUN_1465ec4b8,uVar1,L"ESingularityTarget");
  }
  return;
}



// FUNCTION 144055bee FUN_144055bee body=55 status=ok
// SIG undefined FUN_144055bee(void)

void FUN_144055bee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae9a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae9a8 = FUN_14171c317(FUN_1465ec4e7,uVar1,L"ESpinDirection");
  }
  return;
}



// FUNCTION 144055c25 FUN_144055c25 body=55 status=ok
// SIG undefined FUN_144055c25(void)

void FUN_144055c25(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae9c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae9c0 = FUN_14171c317(FUN_1465ec516,uVar1,L"ERiseType");
  }
  return;
}



// FUNCTION 144055ca0 FUN_144055ca0 body=55 status=ok
// SIG undefined FUN_144055ca0(void)

void FUN_144055ca0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaeca8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaeca8 = FUN_14171c317(FUN_1465ed0f8,uVar1,L"EOakActionSkillResourceRefillMode");
  }
  return;
}



// FUNCTION 144055cd7 FUN_144055cd7 body=55 status=ok
// SIG undefined FUN_144055cd7(void)

void FUN_144055cd7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaecc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaecc0 = FUN_14171c317(FUN_1465ed129,uVar1,L"EOakActionSkillResourcePoolType");
  }
  return;
}



// FUNCTION 144055d0e FUN_144055d0e body=55 status=ok
// SIG undefined FUN_144055d0e(void)

void FUN_144055d0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaecd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaecd8 = FUN_14171c317(FUN_1465ed158,uVar1,L"EOakSkillTravelType");
  }
  return;
}



// FUNCTION 144055d45 FUN_144055d45 body=55 status=ok
// SIG undefined FUN_144055d45(void)

void FUN_144055d45(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaecf0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaecf0 = FUN_14171c317(FUN_1465ed187,uVar1,L"EPrimeStackDetonationType");
  }
  return;
}



// FUNCTION 144055d7c FUN_144055d7c body=55 status=ok
// SIG undefined FUN_144055d7c(void)

void FUN_144055d7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaed08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaed08 = FUN_14171c317(FUN_1465ed1b6,uVar1,L"EStasisOpResult");
  }
  return;
}



// FUNCTION 144055db3 FUN_144055db3 body=55 status=ok
// SIG undefined FUN_144055db3(void)

void FUN_144055db3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaed20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaed20 = FUN_14171c317(FUN_1465ed1e5,uVar1,L"EStasisOpQueryResult");
  }
  return;
}



// FUNCTION 144055e1e FUN_144055e1e body=38 status=ok
// SIG undefined FUN_144055e1e(void)

undefined8 FUN_144055e1e(undefined8 param_1,int param_2)

{
  FUN_1458f994e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144055e44 FUN_144055e44 body=48 status=ok
// SIG undefined FUN_144055e44(void)

longlong FUN_144055e44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145a39bd6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144055e74 FUN_144055e74 body=48 status=ok
// SIG undefined FUN_144055e74(void)

longlong FUN_144055e74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145a39bd6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144055ea4 FUN_144055ea4 body=48 status=ok
// SIG undefined FUN_144055ea4(void)

longlong FUN_144055ea4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140de7ffa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144055edc FUN_144055edc body=48 status=ok
// SIG undefined FUN_144055edc(void)

longlong FUN_144055edc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140de7ffa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144055f14 FUN_144055f14 body=48 status=ok
// SIG undefined FUN_144055f14(void)

longlong FUN_144055f14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144055f44 FUN_144055f44 body=48 status=ok
// SIG undefined FUN_144055f44(void)

longlong FUN_144055f44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x748;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144055f74 FUN_144055f74 body=48 status=ok
// SIG undefined FUN_144055f74(void)

longlong FUN_144055f74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x750;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144055fa4 FUN_144055fa4 body=48 status=ok
// SIG undefined FUN_144055fa4(void)

longlong FUN_144055fa4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x878;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144055fd4 FUN_144055fd4 body=48 status=ok
// SIG undefined FUN_144055fd4(void)

longlong FUN_144055fd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1100;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056004 FUN_144056004 body=48 status=ok
// SIG undefined FUN_144056004(void)

longlong FUN_144056004(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1108;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056034 FUN_144056034 body=48 status=ok
// SIG undefined FUN_144056034(void)

longlong FUN_144056034(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1118;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056064 FUN_144056064 body=48 status=ok
// SIG undefined FUN_144056064(void)

longlong FUN_144056064(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1120;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056094 FUN_144056094 body=48 status=ok
// SIG undefined FUN_144056094(void)

longlong FUN_144056094(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1128;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440560c4 FUN_1440560c4 body=48 status=ok
// SIG undefined FUN_1440560c4(void)

longlong FUN_1440560c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1130;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440560f4 FUN_1440560f4 body=48 status=ok
// SIG undefined FUN_1440560f4(void)

longlong FUN_1440560f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1138;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056124 FUN_144056124 body=48 status=ok
// SIG undefined FUN_144056124(void)

longlong FUN_144056124(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1140;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056154 FUN_144056154 body=48 status=ok
// SIG undefined FUN_144056154(void)

longlong FUN_144056154(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1148;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056184 FUN_144056184 body=48 status=ok
// SIG undefined FUN_144056184(void)

longlong FUN_144056184(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1150;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440561b4 FUN_1440561b4 body=48 status=ok
// SIG undefined FUN_1440561b4(void)

longlong FUN_1440561b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1158;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440561e4 FUN_1440561e4 body=48 status=ok
// SIG undefined FUN_1440561e4(void)

longlong FUN_1440561e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1160;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056214 FUN_144056214 body=48 status=ok
// SIG undefined FUN_144056214(void)

longlong FUN_144056214(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1168;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056244 FUN_144056244 body=48 status=ok
// SIG undefined FUN_144056244(void)

longlong FUN_144056244(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1170;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056274 FUN_144056274 body=48 status=ok
// SIG undefined FUN_144056274(void)

longlong FUN_144056274(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1178;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440562a4 FUN_1440562a4 body=48 status=ok
// SIG undefined FUN_1440562a4(void)

longlong FUN_1440562a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1180;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440562d4 FUN_1440562d4 body=48 status=ok
// SIG undefined FUN_1440562d4(void)

longlong FUN_1440562d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1188;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056304 FUN_144056304 body=48 status=ok
// SIG undefined FUN_144056304(void)

longlong FUN_144056304(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1190;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056334 FUN_144056334 body=48 status=ok
// SIG undefined FUN_144056334(void)

longlong FUN_144056334(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1198;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056364 FUN_144056364 body=48 status=ok
// SIG undefined FUN_144056364(void)

longlong FUN_144056364(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x11b0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056394 FUN_144056394 body=48 status=ok
// SIG undefined FUN_144056394(void)

longlong FUN_144056394(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a20;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440563c4 FUN_1440563c4 body=48 status=ok
// SIG undefined FUN_1440563c4(void)

longlong FUN_1440563c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a28;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440563f4 FUN_1440563f4 body=48 status=ok
// SIG undefined FUN_1440563f4(void)

longlong FUN_1440563f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a30;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056424 FUN_144056424 body=48 status=ok
// SIG undefined FUN_144056424(void)

longlong FUN_144056424(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a38;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056454 FUN_144056454 body=48 status=ok
// SIG undefined FUN_144056454(void)

longlong FUN_144056454(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a40;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056484 FUN_144056484 body=48 status=ok
// SIG undefined FUN_144056484(void)

longlong FUN_144056484(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a48;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440564b4 FUN_1440564b4 body=48 status=ok
// SIG undefined FUN_1440564b4(void)

longlong FUN_1440564b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ac8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440564e4 FUN_1440564e4 body=48 status=ok
// SIG undefined FUN_1440564e4(void)

longlong FUN_1440564e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ad0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056514 FUN_144056514 body=48 status=ok
// SIG undefined FUN_144056514(void)

longlong FUN_144056514(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b68;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056544 FUN_144056544 body=48 status=ok
// SIG undefined FUN_144056544(void)

longlong FUN_144056544(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b70;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056574 FUN_144056574 body=48 status=ok
// SIG undefined FUN_144056574(void)

longlong FUN_144056574(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440565a4 FUN_1440565a4 body=48 status=ok
// SIG undefined FUN_1440565a4(void)

longlong FUN_1440565a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440565d4 FUN_1440565d4 body=48 status=ok
// SIG undefined FUN_1440565d4(void)

longlong FUN_1440565d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1538;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144056604 FUN_144056604 body=48 status=ok
// SIG undefined FUN_144056604(void)

longlong FUN_144056604(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1540;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14405667a FUN_14405667a body=57 status=ok
// SIG undefined FUN_14405667a(void)

void FUN_14405667a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae6f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae6f8 = FUN_140002ddd(FUN_1465ebdb8,uVar1,L"OakRewardsSetCustomData_Mission");
  }
  return;
}



// FUNCTION 1440566ea FUN_1440566ea body=716 status=ok
// SIG undefined FUN_1440566ea(void)

void FUN_1440566ea(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b7ee740;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[1] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 2) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 1440569d6 FUN_1440569d6 body=57 status=ok
// SIG undefined FUN_1440569d6(void)

void FUN_1440569d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae960 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae960 = FUN_140002ddd(FUN_1465ec3c2,uVar1,L"OakSingularityAudioProvider");
  }
  return;
}



// FUNCTION 144056a1e FUN_144056a1e body=198 status=ok
// SIG undefined FUN_144056a1e(void)

void FUN_144056a1e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x138);
  param_2[1] = 0;
  param_2[9] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  param_2[0xd] = 0;
  param_2[0x13] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0xffffffff00000080;
  param_2[0x17] = 0;
  param_2[0x23] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined8 *)((longlong)param_2 + 0x124) = 0xffffffff00000080;
  param_2[0x27] = 0;
  *param_2 = &PTR_FUN_14b7eec60;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  return;
}



// FUNCTION 144056af0 FUN_144056af0 body=57 status=ok
// SIG undefined FUN_144056af0(void)

void FUN_144056af0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae978 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae978 = FUN_140002ddd(FUN_1465ec459,uVar1,L"OakSingularityAudioProviderDef");
  }
  return;
}



// FUNCTION 144056b52 FUN_144056b52 body=57 status=ok
// SIG undefined FUN_144056b52(void)

void FUN_144056b52(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae9f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae9f0 = FUN_140002ddd(FUN_1465ec5dc,uVar1,L"OakSingularityDef");
  }
  return;
}



// FUNCTION 144056c38 FUN_144056c38 body=2724 status=ok
// SIG undefined FUN_144056c38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144056c38(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae670 = (ulonglong)uVar2;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e2c30,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e2d00,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e30b0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e3430,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7e3820);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cbae708);
  if (cVar1 == '\0') {
    _DAT_14cbae708 = 0;
    uRam000000014cbae710 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cbae718 = 0x47efffffe0000000;
  _DAT_14cbae720 = 0x47efffffe0000000;
  _DAT_14cbae728 = 0x47efffffe0000000;
  _DAT_14cbae730 = 0x47efffffe0000000;
  _DAT_14cbae738 = 0x47efffffe0000000;
  _DAT_14cbae740 = 0x47efffffe0000000;
  _DAT_14cbae748 = 0x47efffffe0000000;
  _DAT_14cbae750 = 0x47efffffe0000000;
  _DAT_14cbae75c = 0;
  FUN_14052b5e0(&DAT_14cbae758,"PlayerAwareness",0);
  _DAT_14cbae768 = "PlayerAwareness";
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae770 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae778 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae780 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae788 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae790 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae798 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7a0 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7a8 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7b0 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7b8 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7c0 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7c8 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7d0 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7d8 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7e0 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7e8 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7f0 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae7f8 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbae800 = (ulonglong)uVar2;
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e3ae0,1,&PTR_FUN_14b7e3ab0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e40e0,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7e4190);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7e43e0);
  FUN_1446f470e(&DAT_14cbae898,L"UNSET",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e4780,1,0);
  FUN_14098d3d2(FUN_144055b80,L"/Script/OakGame",L"EOakShiftProfileVisibility",&DAT_14cbae8b8);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e4b90,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e5220,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e58f0,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7e59b0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7e5ba0);
  ppuStack_70 = &PTR_FUN_14b7e6cf0;
  local_78 = 2;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7e6d50);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7e6e30);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e70e0,1,0);
  local_60 = "Use";
  local_58 = 3;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaea30 = (ulonglong)uVar2;
  local_60 = "Sight";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaea38 = (ulonglong)uVar2;
  local_60 = "TargetLock";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaea40 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbaea48,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144055c5c);
  FUN_140056680(&DAT_14cbaea58,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144055c6d);
  FUN_140056680(&DAT_14cbaea68,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144055c7e);
  FUN_140056680(&DAT_14cbaea78,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144055c8f);
  FUN_1446f470e(&DAT_14cbaea88,L"LIMB_GORED",1);
  _DAT_14cbaea90 = 0x4072c00000000000;
  _DAT_14cbaea98 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbaeaa0,L"body",1);
  FUN_1446f470e(&DAT_14cbaeaa8,L"title_card",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e93c0,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e9940,1,&PTR_FUN_14b7e98f0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7e99e0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7e9fc0,1,&PTR_FUN_14b7e9f90);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7ea120,1,&PTR_FUN_14b7ea0f0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7ea1e0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7eaa90,1,&PTR_FUN_14b7eaa60);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7eba10,2,&PTR_FUN_14b7eb9c0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7ecb80,1,&PTR_FUN_14b7ecb50);
  lVar3 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b7ecd20 + lVar3),L"/Script/OakGame",
                  *(undefined8 *)(&UNK_14b7ecd28 + lVar3),
                  *(undefined8 *)((longlong)&PTR_FUN_14b7ecd30 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x70);
  FUN_14098d3d2(FUN_144055d45,L"/Script/OakGame",L"EPrimeStackDetonationType",&DAT_14cbaece8);
  ppuStack_70 = &PTR_FUN_14b7edf40;
  local_68 = 2;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7edfb0,1,&PTR_FUN_14b7edf80);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440576e0 FUN_1440576e0 body=47 status=ok
// SIG undefined FUN_1440576e0(void)

longlong FUN_1440576e0(void)

{
  if (DAT_14cbaede0 == 0) {
    FUN_14000fc22(&DAT_14cbaede0,&PTR_FUN_14b7f2fd0);
  }
  return DAT_14cbaede0;
}



// FUNCTION 144057725 FUN_144057725 body=47 status=ok
// SIG undefined FUN_144057725(void)

longlong FUN_144057725(void)

{
  if (DAT_14cbaee38 == 0) {
    FUN_14000fc22(&DAT_14cbaee38,&PTR_FUN_14b7f3978);
  }
  return DAT_14cbaee38;
}



// FUNCTION 14405776a FUN_14405776a body=55 status=ok
// SIG undefined FUN_14405776a(void)

void FUN_14405776a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaefe0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaefe0 = FUN_140002ddd(FUN_1440577a1,uVar1,L"OakStartProfileMissionRewardsDef");
  }
  return;
}



// FUNCTION 1440577a1 FUN_1440577a1 body=47 status=ok
// SIG undefined FUN_1440577a1(void)

longlong FUN_1440577a1(void)

{
  if (DAT_14cbaefd8 == 0) {
    FUN_14086a14e(&DAT_14cbaefd8,&PTR_FUN_14b7f7590);
  }
  return DAT_14cbaefd8;
}



// FUNCTION 1440577d0 FUN_1440577d0 body=48 status=ok
// SIG undefined FUN_1440577d0(void)

void FUN_1440577d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b7fe160;
  return;
}



// FUNCTION 144057802 FUN_144057802 body=227 status=ok
// SIG undefined FUN_144057802(void)

longlong FUN_144057802(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaeff0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1440578e6;
    local_40 = &LAB_1440578e9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/OakGame",L"NexusConfigStore_StartProfileMissionRewards",&DAT_14cbaeff0,
                  &DAT_144057800);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaeff0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440578f9 FUN_1440578f9 body=47 status=ok
// SIG undefined FUN_1440578f9(void)

longlong FUN_1440578f9(void)

{
  if (DAT_14cbaeff8 == 0) {
    FUN_14073dd9a(&DAT_14cbaeff8,&PTR_LAB_14b7f7648);
  }
  return DAT_14cbaeff8;
}



// FUNCTION 144057928 FUN_144057928 body=55 status=ok
// SIG undefined FUN_144057928(void)

void FUN_144057928(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf010 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf010 = FUN_14171c317(FUN_1465edfec,uVar1,L"EStaticMeshFactReactionType");
  }
  return;
}



// FUNCTION 14405795f FUN_14405795f body=55 status=ok
// SIG undefined FUN_14405795f(void)

void FUN_14405795f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf040 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf040 = FUN_14171c317(FUN_1465ee0a2,uVar1,L"ESEAppDefaultsProperty");
  }
  return;
}



// FUNCTION 144057996 FUN_144057996 body=55 status=ok
// SIG undefined FUN_144057996(void)

void FUN_144057996(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf110 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf110 = FUN_14171c317(FUN_1465ee52b,uVar1,L"EElementalModifierType");
  }
  return;
}



// FUNCTION 1440579cd FUN_1440579cd body=55 status=ok
// SIG undefined FUN_1440579cd(void)

void FUN_1440579cd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf378 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf378 = FUN_14171c317(FUN_1465eedb8,uVar1,L"EThroughCollisionTeamAttitude");
  }
  return;
}



// FUNCTION 144057a04 FUN_144057a04 body=48 status=ok
// SIG undefined FUN_144057a04(void)

longlong FUN_144057a04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140b86d4c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057a34 FUN_144057a34 body=48 status=ok
// SIG undefined FUN_144057a34(void)

longlong FUN_144057a34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140b86d4c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057a64 FUN_144057a64 body=48 status=ok
// SIG undefined FUN_144057a64(void)

longlong FUN_144057a64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057a94 FUN_144057a94 body=48 status=ok
// SIG undefined FUN_144057a94(void)

longlong FUN_144057a94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057ac4 FUN_144057ac4 body=48 status=ok
// SIG undefined FUN_144057ac4(void)

longlong FUN_144057ac4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057af4 FUN_144057af4 body=48 status=ok
// SIG undefined FUN_144057af4(void)

longlong FUN_144057af4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057b24 FUN_144057b24 body=48 status=ok
// SIG undefined FUN_144057b24(void)

longlong FUN_144057b24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057b54 FUN_144057b54 body=48 status=ok
// SIG undefined FUN_144057b54(void)

longlong FUN_144057b54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057b84 FUN_144057b84 body=48 status=ok
// SIG undefined FUN_144057b84(void)

longlong FUN_144057b84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xbf0;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057bb4 FUN_144057bb4 body=48 status=ok
// SIG undefined FUN_144057bb4(void)

longlong FUN_144057bb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc30;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057be4 FUN_144057be4 body=48 status=ok
// SIG undefined FUN_144057be4(void)

longlong FUN_144057be4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc38;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057c14 FUN_144057c14 body=48 status=ok
// SIG undefined FUN_144057c14(void)

longlong FUN_144057c14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057c44 FUN_144057c44 body=48 status=ok
// SIG undefined FUN_144057c44(void)

longlong FUN_144057c44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057c74 FUN_144057c74 body=48 status=ok
// SIG undefined FUN_144057c74(void)

longlong FUN_144057c74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057ca4 FUN_144057ca4 body=48 status=ok
// SIG undefined FUN_144057ca4(void)

longlong FUN_144057ca4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057cd4 FUN_144057cd4 body=48 status=ok
// SIG undefined FUN_144057cd4(void)

longlong FUN_144057cd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057d04 FUN_144057d04 body=48 status=ok
// SIG undefined FUN_144057d04(void)

longlong FUN_144057d04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057d34 FUN_144057d34 body=48 status=ok
// SIG undefined FUN_144057d34(void)

longlong FUN_144057d34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x840;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057d64 FUN_144057d64 body=48 status=ok
// SIG undefined FUN_144057d64(void)

longlong FUN_144057d64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x848;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057d94 FUN_144057d94 body=48 status=ok
// SIG undefined FUN_144057d94(void)

longlong FUN_144057d94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057dc4 FUN_144057dc4 body=38 status=ok
// SIG undefined FUN_144057dc4(void)

undefined8 FUN_144057dc4(undefined8 param_1,int param_2)

{
  FUN_140bd4d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057e82 FUN_144057e82 body=57 status=ok
// SIG undefined FUN_144057e82(void)

void FUN_144057e82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaef68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaef68 = FUN_140002ddd(FUN_1465ede39,uVar1,L"OakSpawnPointDef");
  }
  return;
}



// FUNCTION 144057eca FUN_144057eca body=29 status=ok
// SIG undefined FUN_144057eca(void)

undefined8 FUN_144057eca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144057f6a FUN_144057f6a body=86 status=ok
// SIG undefined FUN_144057f6a(void)

undefined8 FUN_144057f6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      if (*(char *)(param_3 + -8) == '\0') {
        *(undefined1 *)(param_2 + -8) = 0;
        *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      }
      FUN_148b9d8c8(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144057fe8 FUN_144057fe8 body=59 status=ok
// SIG undefined FUN_144057fe8(void)

undefined8 FUN_144057fe8(longlong *param_1)

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



// FUNCTION 14405802e FUN_14405802e body=143 status=ok
// SIG undefined FUN_14405802e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14405802e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b7fe2c0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a171dc0;
    if ((*(char *)(param_2 + 2) != '\0') &&
       (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *plVar1 = (longlong)DAT_14c9a0ea0;
      DAT_14c9a0ea0 = plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 144058110 FUN_144058110 body=154 status=ok
// SIG undefined FUN_144058110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144058110(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b7fe2c0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440581aa FUN_1440581aa body=55 status=ok
// SIG undefined FUN_1440581aa(void)

void FUN_1440581aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaefe0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaefe0 = FUN_140002ddd(FUN_1440577a1,uVar1,L"OakStartProfileMissionRewardsDef");
  }
  return;
}



// FUNCTION 1440581e2 FUN_1440581e2 body=118 status=ok
// SIG undefined FUN_1440581e2(void)

undefined8 FUN_1440581e2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cbcdcf0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cbcdcf0,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14405825a FUN_14405825a body=117 status=ok
// SIG undefined FUN_14405825a(void)

undefined8 * FUN_14405825a(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1440583e8 FUN_1440583e8 body=295 status=ok
// SIG undefined FUN_1440583e8(void)

void FUN_1440583e8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 0xf,0,0x198);
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0x200000000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0x200000000;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *param_2 = &PTR_FUN_14b6ff190;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 2;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x111) = 0;
  *(undefined8 *)((longlong)param_2 + 0x104) = 0;
  *(undefined8 *)((longlong)param_2 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x13c) = 0xffffffff;
  param_2[0x28] = 0xffffffffffffffff;
  param_2[0x35] = 0x200000000;
  *(undefined1 *)(param_2 + 0x31) = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined1 *)((longlong)param_2 + 0x1bc) = 0;
  param_2[0x39] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  *(undefined8 *)((longlong)param_2 + 0x205) = 0;
  return;
}



// FUNCTION 14405856e FUN_14405856e body=57 status=ok
// SIG undefined FUN_14405856e(void)

void FUN_14405856e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf170 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf170 = FUN_140002ddd(FUN_1465ee753,uVar1,L"OakStatusEffectGraphNodeSettings_Mirror");
  }
  return;
}



// FUNCTION 1440585ee FUN_1440585ee body=57 status=ok
// SIG undefined FUN_1440585ee(void)

void FUN_1440585ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf1e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf1e8 = FUN_140002ddd(FUN_1465eea0d,uVar1,L"OakStatusEffectNotifyEventData_Core_Death");
  }
  return;
}



// FUNCTION 1440586b0 FUN_1440586b0 body=2695 status=ok
// SIG undefined FUN_1440586b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440586b0(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446f470e(&DAT_14cbaeda0,L"UNSET",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f2c20,1,0);
  local_60 = "UnixSocketPath";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaedc0 = (ulonglong)uVar2;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f2f80,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f37e0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f3880,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f3930);
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaee30 = (ulonglong)uVar2;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f4c00,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f4d50);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f5440,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f54f0,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f5a40,1,&PTR_FUN_14b7f59f0);
  _DAT_14cbaeef0 = 0x47efffffe0000000;
  _DAT_14cbaeef8 = 0x47efffffe0000000;
  _DAT_14cbaef00 = 0x47efffffe0000000;
  _DAT_14cbaef08 = 0x47efffffe0000000;
  _DAT_14cbaef10 = 0x47efffffe0000000;
  _DAT_14cbaef18 = 0x47efffffe0000000;
  _DAT_14cbaef20 = 0x47efffffe0000000;
  _DAT_14cbaef28 = 0x47efffffe0000000;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f6820,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f68f0,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f6990);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f71d0,1,0);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cbaef98);
  if (cVar1 == '\0') {
    _DAT_14cbaef98 = 0;
    uRam000000014cbaefa0 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbaefac = 0;
  FUN_14052b5e0(&DAT_14cbaefa8,"PlayerAwareness",0);
  _DAT_14cbaefb8 = "PlayerAwareness";
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f7400);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f76c0,1,&PTR_FUN_14b7f7690);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14b7f7f30;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f7f50,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14b7f8270;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f8290);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 5;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7f8fb0,1,&PTR_FUN_14b7f8ee0);
  FUN_14098d3d2(FUN_144057996,L"/Script/OakGame",L"EElementalModifierType",&DAT_14cbaf108);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f9180);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f93a0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f9470);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f9590);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f96d0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f9ad0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f9cc0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7f9fb0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7fa140);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7fa200);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7fa2c0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7fa800,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7fab60,1,0);
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf260 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf268 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf270 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf278 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf280 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf288 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf290 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf298 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2a0 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2a8 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2b0 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2b8 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2c0 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2c8 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2d0 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2d8 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2e0 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2e8 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbaf2f0 = (ulonglong)uVar2;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7faf60,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7fb340,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7fb4a0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7fb7f0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7fbb70,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14b7fc2b0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7fc2d0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7fc650,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7fcf50,1,&PTR_FUN_14b7fcf00);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7fd660,1,&PTR_FUN_14b7fd5e0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144059138 FUN_144059138 body=55 status=ok
// SIG undefined FUN_144059138(void)

void FUN_144059138(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf4c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf4c8 = FUN_14171c317(FUN_1465efa41,uVar1,L"EOakTrackerObjectIconType");
  }
  return;
}



// FUNCTION 14405916f FUN_14405916f body=55 status=ok
// SIG undefined FUN_14405916f(void)

void FUN_14405916f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf4e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf4e0 = FUN_14171c317(FUN_1465efa72,uVar1,L"EOakTrackerObjectDiscoveryBehavior");
  }
  return;
}



// FUNCTION 1440591a6 FUN_1440591a6 body=55 status=ok
// SIG undefined FUN_1440591a6(void)

void FUN_1440591a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf510 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf510 = FUN_14171c317(FUN_1465efaf8,uVar1,L"ETrackerObjectDiscoveryType");
  }
  return;
}



// FUNCTION 1440591f7 FUN_1440591f7 body=55 status=ok
// SIG undefined FUN_1440591f7(void)

void FUN_1440591f7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf718 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf718 = FUN_14171c317(FUN_1465efee0,uVar1,L"EOakTraitStyle");
  }
  return;
}



// FUNCTION 14405922e FUN_14405922e body=55 status=ok
// SIG undefined FUN_14405922e(void)

void FUN_14405922e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf910 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf910 = FUN_14171c317(FUN_1465f0793,uVar1,L"EPlayerTravelStatus");
  }
  return;
}



// FUNCTION 144059265 FUN_144059265 body=55 status=ok
// SIG undefined FUN_144059265(void)

void FUN_144059265(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf928 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf928 = FUN_14171c317(FUN_1465f07c2,uVar1,L"EOakTravelStatus");
  }
  return;
}



// FUNCTION 14405929c FUN_14405929c body=55 status=ok
// SIG undefined FUN_14405929c(void)

void FUN_14405929c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf940 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf940 = FUN_14171c317(FUN_1465f07f1,uVar1,L"EOakTravelStatusMissionReplayState");
  }
  return;
}



// FUNCTION 144059320 FUN_144059320 body=48 status=ok
// SIG undefined FUN_144059320(void)

longlong FUN_144059320(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145f7cdd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144059350 FUN_144059350 body=48 status=ok
// SIG undefined FUN_144059350(void)

longlong FUN_144059350(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145f7cdd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144059380 FUN_144059380 body=48 status=ok
// SIG undefined FUN_144059380(void)

longlong FUN_144059380(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_145f7cdd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440593b0 FUN_1440593b0 body=48 status=ok
// SIG undefined FUN_1440593b0(void)

longlong FUN_1440593b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_145f7cdd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440593e0 FUN_1440593e0 body=48 status=ok
// SIG undefined FUN_1440593e0(void)

longlong FUN_1440593e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_145f7cdd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144059410 FUN_144059410 body=48 status=ok
// SIG undefined FUN_144059410(void)

longlong FUN_144059410(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_145f7cdd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144059440 FUN_144059440 body=48 status=ok
// SIG undefined FUN_144059440(void)

longlong FUN_144059440(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4f0;
  FUN_145f7cdd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144059470 FUN_144059470 body=48 status=ok
// SIG undefined FUN_144059470(void)

longlong FUN_144059470(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4f8;
  FUN_145f7cdd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440594a0 FUN_1440594a0 body=48 status=ok
// SIG undefined FUN_1440594a0(void)

longlong FUN_1440594a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440594d0 FUN_1440594d0 body=48 status=ok
// SIG undefined FUN_1440594d0(void)

longlong FUN_1440594d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144059500 FUN_144059500 body=48 status=ok
// SIG undefined FUN_144059500(void)

longlong FUN_144059500(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144059530 FUN_144059530 body=48 status=ok
// SIG undefined FUN_144059530(void)

longlong FUN_144059530(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144059560 FUN_144059560 body=48 status=ok
// SIG undefined FUN_144059560(void)

longlong FUN_144059560(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144059590 FUN_144059590 body=48 status=ok
// SIG undefined FUN_144059590(void)

longlong FUN_144059590(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440595c0 FUN_1440595c0 body=48 status=ok
// SIG undefined FUN_1440595c0(void)

longlong FUN_1440595c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440595f0 FUN_1440595f0 body=48 status=ok
// SIG undefined FUN_1440595f0(void)

longlong FUN_1440595f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144059678 FUN_144059678 body=210 status=ok
// SIG undefined FUN_144059678(void)

void FUN_144059678(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2 + 2,0,0x100);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b80d110;
  uVar1 = DAT_14c8464e8;
  param_2[3] = DAT_14c8464e0;
  param_2[4] = uVar1;
  param_2[5] = DAT_14c8464f0;
  param_2[6] = 0x447a000045bb8000;
  param_2[7] = 0x453b800044fa0000;
  *(undefined1 *)(param_2 + 8) = 1;
  *(undefined1 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x12] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x10] = DAT_14c8464e0;
  param_2[0x11] = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0x200000000;
  *(undefined1 *)((longlong)param_2 + 0xa9) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined8 *)((longlong)param_2 + 0xfb) = 0;
  *(undefined8 *)((longlong)param_2 + 0x103) = 0;
  return;
}



// FUNCTION 144059756 FUN_144059756 body=57 status=ok
// SIG undefined FUN_144059756(void)

void FUN_144059756(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf540 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf540 = FUN_140002ddd(FUN_1465ef90f,uVar1,L"OakTrackerObjectLocationDef");
  }
  return;
}



// FUNCTION 144059862 FUN_144059862 body=57 status=ok
// SIG undefined FUN_144059862(void)

void FUN_144059862(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf748 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf748 = FUN_140002ddd(FUN_1465efde8,uVar1,L"OakTraitDef");
  }
  return;
}



// FUNCTION 144059918 FUN_144059918 body=57 status=ok
// SIG undefined FUN_144059918(void)

void FUN_144059918(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf7c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf7c0 = FUN_140002ddd(FUN_1465f018e,uVar1,L"OakTraitPoolDef");
  }
  return;
}



// FUNCTION 1440599b2 FUN_1440599b2 body=3031 status=ok
// SIG undefined FUN_1440599b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440599b2(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbaf468);
  if (cVar1 == '\0') {
    _DAT_14cbaf468 = 0;
    uRam000000014cbaf470 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf478 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b802ba0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8031a0,1,0);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14b803650;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b803690,1,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b8043f0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b804460,1,&PTR_FUN_14b804410);
  _DAT_14cbaf568 = 0x47efffffe0000000;
  _DAT_14cbaf570 = 0x47efffffe0000000;
  _DAT_14cbaf578 = 0x47efffffe0000000;
  _DAT_14cbaf580 = 0x47efffffe0000000;
  _DAT_14cbaf588 = 0x47efffffe0000000;
  _DAT_14cbaf590 = 0x47efffffe0000000;
  _DAT_14cbaf598 = 0x47efffffe0000000;
  _DAT_14cbaf5a0 = 0x47efffffe0000000;
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf5a8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbaf5b0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1440591e6);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf5c4 = 0;
  FUN_14052b5e0(&DAT_14cbaf5c0,"PlayerAwareness",0);
  _DAT_14cbaf5d0 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf5d8 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf5e0 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf5e8 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf5f0 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf5f8 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf600 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf608 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf610 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf618 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf620 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf628 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf630 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf638 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf640 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf648 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf650 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf658 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf660 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf668 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbaf670,L"UNSET",1);
  local_70 = "init";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cbaf678,L"Party",1);
  FUN_1446f470e(&DAT_14cbaf680);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b804510);
  _DAT_14cbaf6a4 = 0;
  FUN_14052b5e0(&DAT_14cbaf6a0,"State",0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b804980,1,&PTR_FUN_14b804950);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b804b40);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b805090;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b805100,1,&PTR_FUN_14b8050b0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b805450,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8059a0,1,&PTR_FUN_14b805920);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b805ed0,1,&PTR_FUN_14b805e80);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8063b0,1,&PTR_FUN_14b806330);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b806c00,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b807520,1,0);
  local_78 = 3;
  ppuStack_80 = &PTR_FUN_14b807b70;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b807bd0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8087e0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b809000,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b809820,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b80a040,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b80a890,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b80abf0,1,0);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbaf9f8 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafa00 = (ulonglong)uVar2;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafa08 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbafa10,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1440592dc);
  FUN_140056680(&DAT_14cbafa20,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1440592ed);
  FUN_140056680(&DAT_14cbafa30,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1440592fe);
  FUN_140056680(&DAT_14cbafa40,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14405930f);
  FUN_1446f470e(&DAT_14cbafa50,L"LIMB_GORED",1);
  _DAT_14cbafa58 = 0x4072c00000000000;
  _DAT_14cbafa60 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbafa68,L"body",1);
  FUN_1446f470e(&DAT_14cbafa70,L"title_card",1);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b80b070,1,0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b80b4f0,1,0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b80b980,1,0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b80be00,1,0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b80c290,1,0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b80c710,1,0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b80cb90,1,0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14405a59c FUN_14405a59c body=227 status=ok
// SIG undefined FUN_14405a59c(void)

longlong FUN_14405a59c(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbafb20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411d02ec;
    local_38 = &LAB_14405a58d;
    local_40 = &LAB_14405a590;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIBigMapRole",&DAT_14cbafb20,&DAT_14405a58c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbafb20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14405a680 FUN_14405a680 body=47 status=ok
// SIG undefined FUN_14405a680(void)

longlong FUN_14405a680(void)

{
  if (DAT_14cbafb28 == 0) {
    FUN_14073dd9a(&DAT_14cbafb28,&PTR_FUN_14b810578);
  }
  return DAT_14cbafb28;
}



// FUNCTION 14405b109 FUN_14405b109 body=55 status=ok
// SIG undefined FUN_14405b109(void)

void FUN_14405b109(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb06b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb06b8 = FUN_14171c317(FUN_1465f13f8,uVar1,L"EOakBankState");
  }
  return;
}



// FUNCTION 14405b189 FUN_14405b189 body=55 status=ok
// SIG undefined FUN_14405b189(void)

void FUN_14405b189(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0920 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0920 = FUN_14171c317(FUN_1465f1a6c,uVar1,L"EOakUI_CompassAreaState");
  }
  return;
}



// FUNCTION 14405b1c0 FUN_14405b1c0 body=55 status=ok
// SIG undefined FUN_14405b1c0(void)

void FUN_14405b1c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb09f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb09f8 = FUN_14171c317(FUN_1465f1a9b,uVar1,L"ECustomizationType");
  }
  return;
}



// FUNCTION 14405b210 FUN_14405b210 body=55 status=ok
// SIG undefined FUN_14405b210(void)

void FUN_14405b210(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0b18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0b18 = FUN_14171c317(FUN_1465f2012,uVar1,L"EOakUIStatGroupOrder");
  }
  return;
}



// FUNCTION 14405b247 FUN_14405b247 body=55 status=ok
// SIG undefined FUN_14405b247(void)

void FUN_14405b247(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0bf8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0bf8 = FUN_14171c317(FUN_1465f22c6,uVar1,L"OptionEntryType");
  }
  return;
}



// FUNCTION 14405b286 FUN_14405b286 body=38 status=ok
// SIG undefined FUN_14405b286(void)

undefined8 FUN_14405b286(undefined8 param_1,int param_2)

{
  FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14405b362 FUN_14405b362 body=71 status=ok
// SIG undefined FUN_14405b362(void)

undefined8 * FUN_14405b362(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14405b41a FUN_14405b41a body=57 status=ok
// SIG undefined FUN_14405b41a(void)

void FUN_14405b41a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0ad0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0ad0 = FUN_140002ddd(FUN_1465f1f1d,uVar1,L"OakUIBlackboard_HudIndicators");
  }
  return;
}



// FUNCTION 14405b48c FUN_14405b48c body=57 status=ok
// SIG undefined FUN_14405b48c(void)

void FUN_14405b48c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0b88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0b88 = FUN_140002ddd(FUN_1465f213a,uVar1,L"OakMissionTransaction_Tracking");
  }
  return;
}



// FUNCTION 14405b57c FUN_14405b57c body=10759 status=ok
// SIG undefined FUN_14405b57c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14405b57c(void)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8105c0,1,0);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafb38 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbafb40,L"available");
  atexit((_func_5014 *)&LAB_14405a6af);
  FUN_140056680(&DAT_14cbafb50,L"synced");
  atexit((_func_5014 *)&LAB_14405a6c0);
  FUN_140056680(&DAT_14cbafb60,L"offline");
  atexit((_func_5014 *)&LAB_14405a6d1);
  FUN_140056680(&DAT_14cbafb70,L"incompatible");
  atexit((_func_5014 *)&LAB_14405a6e2);
  FUN_140056680(&DAT_14cbafb80,L"conflict");
  atexit((_func_5014 *)&LAB_14405a6f3);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b811560);
  FUN_1400b22c2(&DAT_14cbafbc0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14405a7df);
  _DAT_14cbafbd4 = 0;
  FUN_14052b5e0(&DAT_14cbafbd0,"character",0);
  _DAT_14cbafbe0 = 0;
  FUN_14052b5e0(&DAT_14cbafbdc,"profile",0);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafbe8 = (ulonglong)uVar2;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafbf0 = (ulonglong)uVar2;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafbf8 = (ulonglong)uVar2;
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc00 = (ulonglong)uVar2;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc08 = (ulonglong)uVar2;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc10 = (ulonglong)uVar2;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc18 = (ulonglong)uVar2;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc20 = (ulonglong)uVar2;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc28 = (ulonglong)uVar2;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc30 = (ulonglong)uVar2;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc38 = (ulonglong)uVar2;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc40 = (ulonglong)uVar2;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc48 = (ulonglong)uVar2;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc50 = (ulonglong)uVar2;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc58 = (ulonglong)uVar2;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc60 = (ulonglong)uVar2;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc68 = (ulonglong)uVar2;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafc70 = (ulonglong)uVar2;
  _DAT_14cbafc78 = 0;
  uRam000000014cbafc80 = 0;
  _DAT_14cbafc88 = 0;
  DAT_14cbafc90 = 0;
  uRam000000014cbafc98 = 0;
  FUN_1446ddda2(&DAT_14cbafc78,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_14405a7f0);
  local_70 = "num_rows_override";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafca0 = (ulonglong)uVar2;
  local_70 = "show_capacity_text";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafca8 = (ulonglong)uVar2;
  local_70 = "num_columns_override";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafcb0 = (ulonglong)uVar2;
  local_70 = "sort_list_config";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafcb8 = (ulonglong)uVar2;
  local_70 = "filter_list_config";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafcc0 = (ulonglong)uVar2;
  local_70 = "default_sort_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafcc8 = (ulonglong)uVar2;
  local_70 = "enable_filter";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafcd0 = (ulonglong)uVar2;
  local_70 = "enable_sort";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafcd8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbafce0,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_14405a801);
  FUN_1400b22c2(&DAT_14cbafcf0,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_14405a812);
  FUN_1400b22c2(&DAT_14cbafd00,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14405a823);
  FUN_1400b22c2(&DAT_14cbafd10,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14405a834);
  local_70 = "ITEM_CARD";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafd20 = (ulonglong)uVar2;
  local_70 = "ITEM_CARD_COMPARE";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafd28 = (ulonglong)uVar2;
  local_70 = "MENU_FULL_BACKPACK";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafd30 = (ulonglong)uVar2;
  local_70 = "MENU_POPUP_BACKPACK";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafd38 = (ulonglong)uVar2;
  local_70 = "MENU_PLAYER_STATS";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafd40 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbafd48,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14405a845);
  FUN_1400b22c2(&DAT_14cbafd58,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_14405a856);
  FUN_1400b22c2(&DAT_14cbafd68,"mark-dropdown");
  atexit((_func_5014 *)&LAB_14405a867);
  FUN_1400b22c2(&DAT_14cbafd78,"item-dropdown");
  atexit((_func_5014 *)&LAB_14405a878);
  FUN_1400b22c2(&DAT_14cbafd88,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14405a889);
  FUN_1400b22c2(&DAT_14cbafd98,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_14405a89a);
  FUN_1400b22c2(&DAT_14cbafda8,"Popup");
  atexit((_func_5014 *)&LAB_14405a8ab);
  FUN_1400b22c2(&DAT_14cbafdb8,"Fullsize");
  atexit((_func_5014 *)&LAB_14405a8bc);
  FUN_1400b22c2(&DAT_14cbafdc8,"EchoLogs");
  atexit((_func_5014 *)&LAB_14405a8cd);
  FUN_1400b22c2(&DAT_14cbafdd8,"PlayerStats");
  atexit((_func_5014 *)&LAB_14405a8de);
  FUN_1400b22c2(&DAT_14cbafde8,"RewardCenter");
  atexit((_func_5014 *)&LAB_14405a8ef);
  FUN_140056680(&DAT_14cbafdf8,L"reset");
  atexit((_func_5014 *)&LAB_14405a900);
  local_70 = "add_on_activate";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe08 = (ulonglong)uVar2;
  local_70 = "remove_on_deactivate";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe10 = (ulonglong)uVar2;
  local_70 = "filter_selected";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe18 = (ulonglong)uVar2;
  local_70 = "hide_messages_on_deactivate";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe20 = (ulonglong)uVar2;
  local_70 = "drop_action_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe28 = (ulonglong)uVar2;
  local_70 = "equip_action_supported";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe30 = (ulonglong)uVar2;
  local_70 = "unequip_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe38 = (ulonglong)uVar2;
  local_70 = "compare_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe40 = (ulonglong)uVar2;
  local_70 = "mark_item_action_supported";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe48 = (ulonglong)uVar2;
  local_70 = "mark_multiple_items_supported";
  local_68 = 0x1d;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe50 = (ulonglong)uVar2;
  local_70 = "remote_inventory_action_supported";
  local_68 = 0x21;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe58 = (ulonglong)uVar2;
  local_70 = "unequip_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe60 = (ulonglong)uVar2;
  local_70 = "equip_message_ident";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe68 = (ulonglong)uVar2;
  local_70 = "swap_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe70 = (ulonglong)uVar2;
  local_70 = "drop_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe78 = (ulonglong)uVar2;
  local_70 = "cant_equip_message_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe80 = (ulonglong)uVar2;
  local_70 = "insufficient_space_error_ident";
  local_68 = 0x1e;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe88 = (ulonglong)uVar2;
  local_70 = "multiple_item_deposit_ident";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe90 = (ulonglong)uVar2;
  local_70 = "deposit_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafe98 = (ulonglong)uVar2;
  local_70 = "incomplete_deposit_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafea0 = (ulonglong)uVar2;
  local_70 = "backpack_class_html";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafea8 = (ulonglong)uVar2;
  local_70 = "standin_config";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafeb0 = (ulonglong)uVar2;
  local_70 = "player_standin_tag";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafeb8 = (ulonglong)uVar2;
  local_70 = "echo_bot_standin_tag";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafec0 = (ulonglong)uVar2;
  local_70 = "sortable_numeric_stats";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafec8 = (ulonglong)uVar2;
  local_70 = "escape_hold_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafed0 = (ulonglong)uVar2;
  local_70 = "max_visible_items";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbafed8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbafee0,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_14405a911);
  FUN_140056680(&DAT_14cbafef0,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_14405a922);
  FUN_140056680(&DAT_14cbaff00,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_14405a933);
  FUN_140056680(&DAT_14cbaff10,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_14405a944);
  FUN_140056680(&DAT_14cbaff20,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_14405a955);
  FUN_140056680(&DAT_14cbaff30,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_14405a966);
  FUN_140056680(&DAT_14cbaff40,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_14405a977);
  FUN_140056680(&DAT_14cbaff50,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_14405a988);
  FUN_140056680(&DAT_14cbaff60,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_14405a999);
  FUN_140056680(&DAT_14cbaff70,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_14405a9aa);
  FUN_140056680(&DAT_14cbaff80,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_14405a9bb);
  FUN_140056680(&DAT_14cbaff90,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_14405a9cc);
  FUN_140056680(&DAT_14cbaffa0,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_14405a9dd);
  FUN_140056680(&DAT_14cbaffb0,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_14405a9ee);
  FUN_140056680(&DAT_14cbaffc0,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_14405a9ff);
  FUN_140056680(&DAT_14cbaffd0,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_14405aa10);
  FUN_140056680(&DAT_14cbaffe0,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_14405aa21);
  FUN_140056680(&DAT_14cbafff0,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_14405aa32);
  FUN_140056680(&DAT_14cbb0000,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_14405aa43);
  FUN_140056680(&DAT_14cbb0010,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_14405aa54);
  FUN_140056680(&DAT_14cbb0020,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_14405aa65);
  FUN_140056680(&DAT_14cbb0030,L"SelectText");
  atexit((_func_5014 *)&LAB_14405aa76);
  FUN_140056680(&DAT_14cbb0040,L"CompareHint");
  atexit((_func_5014 *)&LAB_14405aa87);
  FUN_140056680(&DAT_14cbb0050,L"EquipHint");
  atexit((_func_5014 *)&LAB_14405aa98);
  FUN_140056680(&DAT_14cbb0060,L"UnequipHint");
  atexit((_func_5014 *)&LAB_14405aaa9);
  FUN_140056680(&DAT_14cbb0070,L"DropHint");
  atexit((_func_5014 *)&LAB_14405aaba);
  FUN_140056680(&DAT_14cbb0080,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_14405aacb);
  FUN_140056680(&DAT_14cbb0090,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_14405aadc);
  FUN_140056680(&DAT_14cbb00a0,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_14405aaed);
  FUN_140056680(&DAT_14cbb00b0,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_14405aafe);
  FUN_140056680(&DAT_14cbb00c0,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_14405ab0f);
  FUN_140056680(&DAT_14cbb00d0,L"BackText");
  atexit((_func_5014 *)&LAB_14405ab20);
  FUN_140056680(&DAT_14cbb00e0,L"SellHint");
  atexit((_func_5014 *)&LAB_14405ab31);
  FUN_140056680(&DAT_14cbb00f0,L"BuyHint");
  atexit((_func_5014 *)&LAB_14405ab42);
  FUN_140056680(&DAT_14cbb0100,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_14405ab53);
  FUN_140056680(&DAT_14cbb0110,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_14405ab64);
  FUN_1400b22c2(&DAT_14cbb0120,"trash");
  atexit((_func_5014 *)&LAB_14405ab75);
  FUN_1400b22c2(&DAT_14cbb0130,"favorite");
  atexit((_func_5014 *)&LAB_14405ab86);
  FUN_1400b22c2(&DAT_14cbb0140,"bankdeposit");
  atexit((_func_5014 *)&LAB_14405ab97);
  FUN_1400b22c2(&DAT_14cbb0150,"taggroup1");
  atexit((_func_5014 *)&LAB_14405aba8);
  FUN_1400b22c2(&DAT_14cbb0160,"taggroup2");
  atexit((_func_5014 *)&LAB_14405abb9);
  FUN_1400b22c2(&DAT_14cbb0170,"taggroup3");
  atexit((_func_5014 *)&LAB_14405abca);
  FUN_1400b22c2(&DAT_14cbb0180,"taggroup4");
  atexit((_func_5014 *)&LAB_14405abdb);
  local_70 = "trash";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0190 = (ulonglong)uVar2;
  local_70 = "favorite";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0198 = (ulonglong)uVar2;
  local_70 = "bankdeposit";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb01a0 = (ulonglong)uVar2;
  local_70 = "taggroup1";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb01a8 = (ulonglong)uVar2;
  local_70 = "taggroup2";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb01b0 = (ulonglong)uVar2;
  local_70 = "taggroup3";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb01b8 = (ulonglong)uVar2;
  local_70 = "taggroup4";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb01c0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb01c8,"OpenBackpack");
  atexit((_func_5014 *)&LAB_14405abec);
  FUN_1400b22c2(&DAT_14cbb01d8,"CloseBackpack");
  atexit((_func_5014 *)&LAB_14405abfd);
  FUN_1400b22c2(&DAT_14cbb01e8,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_14405ac0e);
  FUN_1400b22c2(&DAT_14cbb01f8,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_14405ac1f);
  FUN_1400b22c2(&DAT_14cbb0208,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_14405ac30);
  FUN_1400b22c2(&DAT_14cbb0218,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_14405ac41);
  FUN_1400b22c2(&DAT_14cbb0228,"CompareStart");
  atexit((_func_5014 *)&LAB_14405ac52);
  FUN_1400b22c2(&DAT_14cbb0238,"CompareStop");
  atexit((_func_5014 *)&LAB_14405ac63);
  FUN_1400b22c2(&DAT_14cbb0248,"UnequipItem");
  atexit((_func_5014 *)&LAB_14405ac74);
  FUN_1400b22c2(&DAT_14cbb0258,"EquipItem");
  atexit((_func_5014 *)&LAB_14405ac85);
  FUN_1400b22c2(&DAT_14cbb0268,"DropItem");
  atexit((_func_5014 *)&LAB_14405ac96);
  FUN_1400b22c2(&DAT_14cbb0278,"MarkItem");
  atexit((_func_5014 *)&LAB_14405aca7);
  FUN_1400b22c2(&DAT_14cbb0288,"Error");
  atexit((_func_5014 *)&LAB_14405acb8);
  FUN_1400b22c2(&DAT_14cbb0298,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_14405acc9);
  FUN_1400b22c2(&DAT_14cbb02a8,"ElementFocused");
  atexit((_func_5014 *)&LAB_14405acda);
  FUN_1400b22c2(&DAT_14cbb02b8,"ElementClicked");
  atexit((_func_5014 *)&LAB_14405aceb);
  FUN_1400b22c2(&DAT_14cbb02c8,"EscapeInput");
  atexit((_func_5014 *)&LAB_14405acfc);
  FUN_1400b22c2(&DAT_14cbb02d8,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_14405ad0d);
  FUN_1400b22c2(&DAT_14cbb02e8,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_14405ad1e);
  FUN_1400b22c2(&DAT_14cbb02f8,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_14405ad2f);
  FUN_1400b22c2(&DAT_14cbb0308,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_14405ad40);
  FUN_1400b22c2(&DAT_14cbb0318,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_14405ad51);
  FUN_1400b22c2(&DAT_14cbb0328,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_14405ad62);
  FUN_1400b22c2(&DAT_14cbb0338,"MarkItemBank");
  atexit((_func_5014 *)&LAB_14405ad73);
  FUN_1400b22c2(&DAT_14cbb0348,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_14405ad84);
  FUN_1400b22c2(&DAT_14cbb0358,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_14405ad95);
  FUN_1400b22c2(&DAT_14cbb0368,"ClickPistol");
  atexit((_func_5014 *)&LAB_14405ada6);
  FUN_1400b22c2(&DAT_14cbb0378,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_14405adb7);
  FUN_1400b22c2(&DAT_14cbb0388,"ClickSMG");
  atexit((_func_5014 *)&LAB_14405adc8);
  FUN_1400b22c2(&DAT_14cbb0398,"ClickShotgun");
  atexit((_func_5014 *)&LAB_14405add9);
  FUN_1400b22c2(&DAT_14cbb03a8,"ClickSniper");
  atexit((_func_5014 *)&LAB_14405adea);
  FUN_1400b22c2(&DAT_14cbb03b8,"ClickRepKit");
  atexit((_func_5014 *)&LAB_14405adfb);
  FUN_1400b22c2(&DAT_14cbb03c8,"ClickGrenade");
  atexit((_func_5014 *)&LAB_14405ae0c);
  FUN_1400b22c2(&DAT_14cbb03d8,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_14405ae1d);
  FUN_1400b22c2(&DAT_14cbb03e8,"ClickClassMod");
  atexit((_func_5014 *)&LAB_14405ae2e);
  FUN_1400b22c2(&DAT_14cbb03f8,"ClickGadget");
  atexit((_func_5014 *)&LAB_14405ae3f);
  FUN_1400b22c2(&DAT_14cbb0408,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_14405ae50);
  FUN_1400b22c2(&DAT_14cbb0418,"ClickShield");
  atexit((_func_5014 *)&LAB_14405ae61);
  FUN_1400b22c2(&DAT_14cbb0428,"EquipPistol");
  atexit((_func_5014 *)&LAB_14405ae72);
  FUN_1400b22c2(&DAT_14cbb0438,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_14405ae83);
  FUN_1400b22c2(&DAT_14cbb0448,"EquipSMG");
  atexit((_func_5014 *)&LAB_14405ae94);
  FUN_1400b22c2(&DAT_14cbb0458,"EquipShotgun");
  atexit((_func_5014 *)&LAB_14405aea5);
  FUN_1400b22c2(&DAT_14cbb0468,"EquipSniper");
  atexit((_func_5014 *)&LAB_14405aeb6);
  FUN_1400b22c2(&DAT_14cbb0478,"EquipRepKit");
  atexit((_func_5014 *)&LAB_14405aec7);
  FUN_1400b22c2(&DAT_14cbb0488,"EquipGrenade");
  atexit((_func_5014 *)&LAB_14405aed8);
  FUN_1400b22c2(&DAT_14cbb0498,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_14405aee9);
  FUN_1400b22c2(&DAT_14cbb04a8,"EquipClassMod");
  atexit((_func_5014 *)&LAB_14405aefa);
  FUN_1400b22c2(&DAT_14cbb04b8,"EquipGadget");
  atexit((_func_5014 *)&LAB_14405af0b);
  FUN_1400b22c2(&DAT_14cbb04c8,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_14405af1c);
  FUN_1400b22c2(&DAT_14cbb04d8,"EquipShield");
  atexit((_func_5014 *)&LAB_14405af2d);
  FUN_1400b22c2(&DAT_14cbb04e8,"weapon");
  atexit((_func_5014 *)&LAB_14405af3e);
  FUN_1400b22c2(&DAT_14cbb04f8,"weapon_ps");
  atexit((_func_5014 *)&LAB_14405af4f);
  FUN_1400b22c2(&DAT_14cbb0508,"weapon_ar");
  atexit((_func_5014 *)&LAB_14405af60);
  FUN_1400b22c2(&DAT_14cbb0518,"weapon_sg");
  atexit((_func_5014 *)&LAB_14405af71);
  FUN_1400b22c2(&DAT_14cbb0528,"weapon_sr");
  atexit((_func_5014 *)&LAB_14405af82);
  FUN_1400b22c2(&DAT_14cbb0538,"weapon_sm");
  atexit((_func_5014 *)&LAB_14405af93);
  FUN_1400b22c2(&DAT_14cbb0548,"grenade_gadget");
  atexit((_func_5014 *)&LAB_14405afa4);
  FUN_1400b22c2(&DAT_14cbb0558,"shield");
  atexit((_func_5014 *)&LAB_14405afb5);
  FUN_1400b22c2(&DAT_14cbb0568,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_14405afc6);
  FUN_1400b22c2(&DAT_14cbb0578,"repair_kit");
  atexit((_func_5014 *)&LAB_14405afd7);
  FUN_1400b22c2(&DAT_14cbb0588,"classmod");
  atexit((_func_5014 *)&LAB_14405afe8);
  FUN_1400b22c2(&DAT_14cbb0598,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_14405aff9);
  FUN_1400b22c2(&DAT_14cbb05a8,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_14405b00a);
  FUN_1400b22c2(&DAT_14cbb05b8,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_14405b01b);
  FUN_1400b22c2(&DAT_14cbb05c8,"classmod_paladin");
  atexit((_func_5014 *)&LAB_14405b02c);
  FUN_1400b22c2(&DAT_14cbb05d8,"gadget");
  atexit((_func_5014 *)&LAB_14405b03d);
  FUN_1400b22c2(&DAT_14cbb05e8,"enhancement");
  atexit((_func_5014 *)&LAB_14405b04e);
  FUN_140056680(&DAT_14cbb05f8,L"recent");
  atexit((_func_5014 *)&LAB_14405b05f);
  FUN_140056680(&DAT_14cbb0608,L"type");
  atexit((_func_5014 *)&LAB_14405b070);
  FUN_140056680(&DAT_14cbb0618,L"level");
  atexit((_func_5014 *)&LAB_14405b081);
  FUN_140056680(&DAT_14cbb0628,L"base_name");
  atexit((_func_5014 *)&LAB_14405b092);
  FUN_140056680(&DAT_14cbb0638,L"first_letter");
  atexit((_func_5014 *)&LAB_14405b0a3);
  FUN_140056680(&DAT_14cbb0648,L"value");
  atexit((_func_5014 *)&LAB_14405b0b4);
  FUN_140056680(&DAT_14cbb0658,L"rarity");
  atexit((_func_5014 *)&LAB_14405b0c5);
  FUN_140056680(&DAT_14cbb0668,L"manufacturer");
  atexit((_func_5014 *)&LAB_14405b0d6);
  _Src = DAT_14cbafbc0;
  DAT_14cbb0678 = (void *)0x0;
  lVar4 = (longlong)DAT_14cbafbc8;
  _DAT_14cbb0680 = DAT_14cbafbc8;
  if (lVar4 == 0) {
    _DAT_14cbb0684 = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbb0678,DAT_14cbafbc8,0);
    memcpy(DAT_14cbb0678,_Src,lVar4 * 2);
  }
  atexit((_func_5014 *)&LAB_14405b0e7);
  FUN_140056680(&DAT_14cbb0688,L"healing");
  atexit((_func_5014 *)&LAB_14405b0f8);
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0698 = (ulonglong)uVar2;
  local_70 = "partial";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb06a0 = (ulonglong)uVar2;
  local_70 = "all";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb06a8 = (ulonglong)uVar2;
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b8116d0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8116f0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b811c80);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbb0728);
  if (cVar1 == '\0') {
    _DAT_14cbb0728 = 0;
    uRam000000014cbb0730 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0738 = 0x47efffffe0000000;
  _DAT_14cbb0740 = 0x47efffffe0000000;
  _DAT_14cbb0748 = 0x47efffffe0000000;
  _DAT_14cbb0750 = 0x47efffffe0000000;
  _DAT_14cbb0758 = 0x47efffffe0000000;
  _DAT_14cbb0760 = 0x47efffffe0000000;
  _DAT_14cbb0768 = 0x47efffffe0000000;
  _DAT_14cbb0770 = 0x47efffffe0000000;
  _DAT_14cbb077c = 0;
  FUN_14052b5e0(&DAT_14cbb0778,"PlayerAwareness",0);
  _DAT_14cbb0788 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0790 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0798 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07a0 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07a8 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07b0 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07b8 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07c0 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07c8 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07d0 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07d8 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07e0 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07e8 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07f0 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb07f8 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0800 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0808 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0810 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0818 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0820 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbb0828,L"UNSET",1);
  FUN_140056680(&DAT_14cbb0830,L"incomplete");
  atexit((_func_5014 *)&LAB_14405b140);
  FUN_140056680(&DAT_14cbb0840,L"eridium_reward");
  atexit((_func_5014 *)&LAB_14405b151);
  FUN_140056680(&DAT_14cbb0850,L"rank_complete");
  atexit((_func_5014 *)&LAB_14405b162);
  FUN_140056680(&DAT_14cbb0860,L"challenge_complete");
  atexit((_func_5014 *)&LAB_14405b173);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8133e0);
  FUN_14098d3d2(FUN_14405b189,L"/Script/OakGame",L"EOakUI_CompassAreaState",&DAT_14cbb0918);
  _DAT_14cbb0934 = 0;
  FUN_14052b5e0(&DAT_14cbb0930,"MENU_CUSTOMIZATION_CHARACTER",0);
  _DAT_14cbb0940 = "MENU_CUSTOMIZATION_CHARACTER";
  _DAT_14cbb094c = 0;
  FUN_14052b5e0(&DAT_14cbb0948,"MENU_CUSTOMIZATION_ECHO");
  _DAT_14cbb0958 = "MENU_CUSTOMIZATION_ECHO";
  _DAT_14cbb0964 = 0;
  FUN_14052b5e0(&DAT_14cbb0960,"MENU_CUSTOMIZATION_VEHICLE");
  _DAT_14cbb0970 = "MENU_CUSTOMIZATION_VEHICLE";
  _DAT_14cbb097c = 0;
  FUN_14052b5e0(&DAT_14cbb0978,"MENU_CUSTOMIZATION_WEAPON");
  _DAT_14cbb0988 = "MENU_CUSTOMIZATION_WEAPON";
  _DAT_14cbb0994 = 0;
  FUN_14052b5e0(&DAT_14cbb0990,&DAT_14b417908);
  _DAT_14cbb09a0 = &DAT_14b417908;
  _DAT_14cbb09ac = 0;
  FUN_14052b5e0(&DAT_14cbb09a8,"detailed_list");
  _DAT_14cbb09b8 = "detailed_list";
  ram0x00014cbb09c4 = 0;
  FUN_14052b5e0(&DAT_14cbb09c0,&DAT_14b81bdf4);
  _DAT_14cbb09d0 = &DAT_14b81bdf4;
  _DAT_14cbb09dc = 0;
  FUN_14052b5e0(&DAT_14cbb09d8);
  _DAT_14cbb09e8 = "backpack";
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b813ea0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b813ec0);
  FUN_1400b22c2(&DAT_14cbb0a68,"#echo_logs_region_unknown");
  atexit((_func_5014 *)&LAB_14405b1f7);
  iVar3 = DAT_14cbb0a70 + -1;
  if (DAT_14cbb0a70 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_70,iVar3,DAT_14cbb0a68,1);
  _DAT_14cbb0a78 = local_70;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b814600);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b814740);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b814a80);
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0ae0 = (ulonglong)uVar2;
  local_70 = "init";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cbb0ae8,L"Party",1);
  FUN_1446f470e(&DAT_14cbb0af0,&DAT_149e063b2,1);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b814d20);
  FUN_14098d3d2(FUN_14405b210,L"/Script/OakGame",L"EOakUIStatGroupOrder",&DAT_14cbb0b10);
  _DAT_14cbb0b2c = 0;
  FUN_14052b5e0(&DAT_14cbb0b28,"Missions",0);
  _DAT_14cbb0b38 = 0;
  FUN_14052b5e0(&DAT_14cbb0b34,"Timer",0);
  _DAT_14cbb0b44 = 0;
  FUN_14052b5e0(&DAT_14cbb0b40,"Percent",0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b815280);
  local_70 = "audio_calibration";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0bc8 = (ulonglong)uVar2;
  local_70 = "brightness_calibration";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0bd0 = (ulonglong)uVar2;
  local_70 = "brightness_calibration_ftc";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0bd8 = (ulonglong)uVar2;
  local_70 = "safe_area_calibration";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0be0 = (ulonglong)uVar2;
  local_70 = "options_accessibility";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0be8 = (ulonglong)uVar2;
  FUN_14098d3d2(FUN_14405b247,L"/Script/OakGame",L"OptionEntryType",&DAT_14cbb0bf0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b815690);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8158c0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b815a10);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b815d00);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 6;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b817060);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14405e8ae FUN_14405e8ae body=55 status=ok
// SIG undefined FUN_14405e8ae(void)

void FUN_14405e8ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb1920 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb1920 = FUN_14171c317(FUN_1465f32a4,uVar1,L"ETransferMenuState");
  }
  return;
}



// FUNCTION 14405e8e5 FUN_14405e8e5 body=55 status=ok
// SIG undefined FUN_14405e8e5(void)

void FUN_14405e8e5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb1980 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb1980 = FUN_14171c317(FUN_1465f3498,uVar1,L"EOakUI_CosmeticType");
  }
  return;
}



// FUNCTION 14405e91c FUN_14405e91c body=55 status=ok
// SIG undefined FUN_14405e91c(void)

void FUN_14405e91c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb19f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb19f8 = FUN_14171c317(FUN_1465f3726,uVar1,L"EAmmoRegenState");
  }
  return;
}



// FUNCTION 14405e953 FUN_14405e953 body=55 status=ok
// SIG undefined FUN_14405e953(void)

void FUN_14405e953(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb1a10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb1a10 = FUN_14171c317(FUN_1465f3755,uVar1,L"EAmmoRegenPool");
  }
  return;
}



// FUNCTION 14405e98c FUN_14405e98c body=227 status=ok
// SIG undefined FUN_14405e98c(void)

longlong FUN_14405e98c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb1be0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14634e584;
    local_28 = &LAB_14634e58a;
    local_38 = &LAB_14405ea70;
    local_40 = FUN_14405ea73;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUICurveAnimator",&DAT_14cbb1be0,&DAT_14405e98a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb1be0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14405ea73 FUN_14405ea73 body=171 status=ok
// SIG undefined FUN_14405ea73(void)

void FUN_14405ea73(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b820e60;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  puVar1[7] = &PTR_FUN_14b00bdf8;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0xac) = 0x404;
  puVar1[8] = &DAT_14a176f00;
  *(undefined4 *)(puVar1 + 0x1e) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 14405eb29 FUN_14405eb29 body=47 status=ok
// SIG undefined FUN_14405eb29(void)

longlong FUN_14405eb29(void)

{
  if (DAT_14cbb1be8 == 0) {
    FUN_14073dd9a(&DAT_14cbb1be8,&PTR_LAB_14b820e18);
  }
  return DAT_14cbb1be8;
}



// FUNCTION 14405ebbe FUN_14405ebbe body=137 status=ok
// SIG undefined FUN_14405ebbe(void)

undefined8 * FUN_14405ebbe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b820e60;
  plVar1 = param_1 + 0x1d;
  if (*(int *)(param_1 + 0x1e) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14405ec18;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14405ec18:
  FUN_14051f4c4(param_1 + 7);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14405ed68 FUN_14405ed68 body=10957 status=ok
// SIG undefined FUN_14405ed68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14405ed68(void)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d10 = (ulonglong)uVar2;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d18 = (ulonglong)uVar2;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d20 = (ulonglong)uVar2;
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d28 = (ulonglong)uVar2;
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d30 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d38 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d40 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d48 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d50 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d58 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d60 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d68 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d70 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d78 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d80 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d88 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d90 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0d98 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0da0 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0da8 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0db0 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0db8 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0dc0 = (ulonglong)uVar2;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b81d320);
  FUN_1400b22c2(&DAT_14cbb0e40,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14405df84);
  _DAT_14cbb0e54 = 0;
  FUN_14052b5e0(&DAT_14cbb0e50,"character");
  _DAT_14cbb0e60 = 0;
  FUN_14052b5e0(&DAT_14cbb0e5c,"profile");
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0e68 = (ulonglong)uVar2;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0e70 = (ulonglong)uVar2;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0e78 = (ulonglong)uVar2;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0e80 = (ulonglong)uVar2;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0e88 = (ulonglong)uVar2;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0e90 = (ulonglong)uVar2;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0e98 = (ulonglong)uVar2;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0ea0 = (ulonglong)uVar2;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0ea8 = (ulonglong)uVar2;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0eb0 = (ulonglong)uVar2;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0eb8 = (ulonglong)uVar2;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0ec0 = (ulonglong)uVar2;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0ec8 = (ulonglong)uVar2;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0ed0 = (ulonglong)uVar2;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0ed8 = (ulonglong)uVar2;
  _DAT_14cbb0ee0 = 0;
  uRam000000014cbb0ee8 = 0;
  _DAT_14cbb0ef0 = 0;
  DAT_14cbb0ef8 = 0;
  uRam000000014cbb0f00 = 0;
  FUN_1446ddda2(&DAT_14cbb0ee0,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_14405df95);
  local_70 = "num_rows_override";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f08 = (ulonglong)uVar2;
  local_70 = "show_capacity_text";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f10 = (ulonglong)uVar2;
  local_70 = "num_columns_override";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f18 = (ulonglong)uVar2;
  local_70 = "sort_list_config";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f20 = (ulonglong)uVar2;
  local_70 = "filter_list_config";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f28 = (ulonglong)uVar2;
  local_70 = "default_sort_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f30 = (ulonglong)uVar2;
  local_70 = "enable_filter";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f38 = (ulonglong)uVar2;
  local_70 = "enable_sort";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f40 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb0f48,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_14405dfa6);
  FUN_1400b22c2(&DAT_14cbb0f58,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_14405dfb7);
  FUN_1400b22c2(&DAT_14cbb0f68,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14405dfc8);
  FUN_1400b22c2(&DAT_14cbb0f78,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14405dfd9);
  local_70 = "ITEM_CARD";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f88 = (ulonglong)uVar2;
  local_70 = "ITEM_CARD_COMPARE";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f90 = (ulonglong)uVar2;
  local_70 = "MENU_FULL_BACKPACK";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0f98 = (ulonglong)uVar2;
  local_70 = "MENU_POPUP_BACKPACK";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0fa0 = (ulonglong)uVar2;
  local_70 = "MENU_PLAYER_STATS";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb0fa8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb0fb0,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14405dfea);
  FUN_1400b22c2(&DAT_14cbb0fc0,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_14405dffb);
  FUN_1400b22c2(&DAT_14cbb0fd0,"mark-dropdown");
  atexit((_func_5014 *)&LAB_14405e00c);
  FUN_1400b22c2(&DAT_14cbb0fe0,"item-dropdown");
  atexit((_func_5014 *)&LAB_14405e01d);
  FUN_1400b22c2(&DAT_14cbb0ff0,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14405e02e);
  FUN_1400b22c2(&DAT_14cbb1000,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_14405e03f);
  FUN_1400b22c2(&DAT_14cbb1010,"Popup");
  atexit((_func_5014 *)&LAB_14405e050);
  FUN_1400b22c2(&DAT_14cbb1020,"Fullsize");
  atexit((_func_5014 *)&LAB_14405e061);
  FUN_1400b22c2(&DAT_14cbb1030,"EchoLogs");
  atexit((_func_5014 *)&LAB_14405e072);
  FUN_1400b22c2(&DAT_14cbb1040,"PlayerStats");
  atexit((_func_5014 *)&LAB_14405e083);
  FUN_1400b22c2(&DAT_14cbb1050,"RewardCenter");
  atexit((_func_5014 *)&LAB_14405e094);
  FUN_140056680(&DAT_14cbb1060,L"reset");
  atexit((_func_5014 *)&LAB_14405e0a5);
  local_70 = "add_on_activate";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1070 = (ulonglong)uVar2;
  local_70 = "remove_on_deactivate";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1078 = (ulonglong)uVar2;
  local_70 = "filter_selected";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1080 = (ulonglong)uVar2;
  local_70 = "hide_messages_on_deactivate";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1088 = (ulonglong)uVar2;
  local_70 = "drop_action_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1090 = (ulonglong)uVar2;
  local_70 = "equip_action_supported";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1098 = (ulonglong)uVar2;
  local_70 = "unequip_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10a0 = (ulonglong)uVar2;
  local_70 = "compare_action_supported";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10a8 = (ulonglong)uVar2;
  local_70 = "mark_item_action_supported";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10b0 = (ulonglong)uVar2;
  local_70 = "mark_multiple_items_supported";
  local_68 = 0x1d;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10b8 = (ulonglong)uVar2;
  local_70 = "remote_inventory_action_supported";
  local_68 = 0x21;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10c0 = (ulonglong)uVar2;
  local_70 = "unequip_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10c8 = (ulonglong)uVar2;
  local_70 = "equip_message_ident";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10d0 = (ulonglong)uVar2;
  local_70 = "swap_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10d8 = (ulonglong)uVar2;
  local_70 = "drop_message_ident";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10e0 = (ulonglong)uVar2;
  local_70 = "cant_equip_message_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10e8 = (ulonglong)uVar2;
  local_70 = "insufficient_space_error_ident";
  local_68 = 0x1e;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10f0 = (ulonglong)uVar2;
  local_70 = "multiple_item_deposit_ident";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb10f8 = (ulonglong)uVar2;
  local_70 = "deposit_message_ident";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1100 = (ulonglong)uVar2;
  local_70 = "incomplete_deposit_ident";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1108 = (ulonglong)uVar2;
  local_70 = "backpack_class_html";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1110 = (ulonglong)uVar2;
  local_70 = "standin_config";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1118 = (ulonglong)uVar2;
  local_70 = "player_standin_tag";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1120 = (ulonglong)uVar2;
  local_70 = "echo_bot_standin_tag";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1128 = (ulonglong)uVar2;
  local_70 = "sortable_numeric_stats";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1130 = (ulonglong)uVar2;
  local_70 = "escape_hold_supported";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1138 = (ulonglong)uVar2;
  local_70 = "max_visible_items";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1140 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbb1148,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_14405e0b6);
  FUN_140056680(&DAT_14cbb1158,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_14405e0c7);
  FUN_140056680(&DAT_14cbb1168,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_14405e0d8);
  FUN_140056680(&DAT_14cbb1178,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_14405e0e9);
  FUN_140056680(&DAT_14cbb1188,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_14405e0fa);
  FUN_140056680(&DAT_14cbb1198,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_14405e10b);
  FUN_140056680(&DAT_14cbb11a8,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_14405e11c);
  FUN_140056680(&DAT_14cbb11b8,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_14405e12d);
  FUN_140056680(&DAT_14cbb11c8,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_14405e13e);
  FUN_140056680(&DAT_14cbb11d8,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_14405e14f);
  FUN_140056680(&DAT_14cbb11e8,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_14405e160);
  FUN_140056680(&DAT_14cbb11f8,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_14405e171);
  FUN_140056680(&DAT_14cbb1208,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_14405e182);
  FUN_140056680(&DAT_14cbb1218,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_14405e193);
  FUN_140056680(&DAT_14cbb1228,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_14405e1a4);
  FUN_140056680(&DAT_14cbb1238,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_14405e1b5);
  FUN_140056680(&DAT_14cbb1248,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_14405e1c6);
  FUN_140056680(&DAT_14cbb1258,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_14405e1d7);
  FUN_140056680(&DAT_14cbb1268,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_14405e1e8);
  FUN_140056680(&DAT_14cbb1278,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_14405e1f9);
  FUN_140056680(&DAT_14cbb1288,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_14405e20a);
  FUN_140056680(&DAT_14cbb1298,L"SelectText");
  atexit((_func_5014 *)&LAB_14405e21b);
  FUN_140056680(&DAT_14cbb12a8,L"CompareHint");
  atexit((_func_5014 *)&LAB_14405e22c);
  FUN_140056680(&DAT_14cbb12b8,L"EquipHint");
  atexit((_func_5014 *)&LAB_14405e23d);
  FUN_140056680(&DAT_14cbb12c8,L"UnequipHint");
  atexit((_func_5014 *)&LAB_14405e24e);
  FUN_140056680(&DAT_14cbb12d8,L"DropHint");
  atexit((_func_5014 *)&LAB_14405e25f);
  FUN_140056680(&DAT_14cbb12e8,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_14405e270);
  FUN_140056680(&DAT_14cbb12f8,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_14405e281);
  FUN_140056680(&DAT_14cbb1308,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_14405e292);
  FUN_140056680(&DAT_14cbb1318,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_14405e2a3);
  FUN_140056680(&DAT_14cbb1328,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_14405e2b4);
  FUN_140056680(&DAT_14cbb1338,L"BackText");
  atexit((_func_5014 *)&LAB_14405e2c5);
  FUN_140056680(&DAT_14cbb1348,L"SellHint");
  atexit((_func_5014 *)&LAB_14405e2d6);
  FUN_140056680(&DAT_14cbb1358,L"BuyHint");
  atexit((_func_5014 *)&LAB_14405e2e7);
  FUN_140056680(&DAT_14cbb1368,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_14405e2f8);
  FUN_140056680(&DAT_14cbb1378,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_14405e309);
  FUN_1400b22c2(&DAT_14cbb1388,"trash");
  atexit((_func_5014 *)&LAB_14405e31a);
  FUN_1400b22c2(&DAT_14cbb1398,"favorite");
  atexit((_func_5014 *)&LAB_14405e32b);
  FUN_1400b22c2(&DAT_14cbb13a8,"bankdeposit");
  atexit((_func_5014 *)&LAB_14405e33c);
  FUN_1400b22c2(&DAT_14cbb13b8,"taggroup1");
  atexit((_func_5014 *)&LAB_14405e34d);
  FUN_1400b22c2(&DAT_14cbb13c8,"taggroup2");
  atexit((_func_5014 *)&LAB_14405e35e);
  FUN_1400b22c2(&DAT_14cbb13d8,"taggroup3");
  atexit((_func_5014 *)&LAB_14405e36f);
  FUN_1400b22c2(&DAT_14cbb13e8,"taggroup4");
  atexit((_func_5014 *)&LAB_14405e380);
  local_70 = "trash";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb13f8 = (ulonglong)uVar2;
  local_70 = "favorite";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1400 = (ulonglong)uVar2;
  local_70 = "bankdeposit";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1408 = (ulonglong)uVar2;
  local_70 = "taggroup1";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1410 = (ulonglong)uVar2;
  local_70 = "taggroup2";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1418 = (ulonglong)uVar2;
  local_70 = "taggroup3";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1420 = (ulonglong)uVar2;
  local_70 = "taggroup4";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1428 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb1430,"OpenBackpack");
  atexit((_func_5014 *)&LAB_14405e391);
  FUN_1400b22c2(&DAT_14cbb1440,"CloseBackpack");
  atexit((_func_5014 *)&LAB_14405e3a2);
  FUN_1400b22c2(&DAT_14cbb1450,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_14405e3b3);
  FUN_1400b22c2(&DAT_14cbb1460,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_14405e3c4);
  FUN_1400b22c2(&DAT_14cbb1470,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_14405e3d5);
  FUN_1400b22c2(&DAT_14cbb1480,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_14405e3e6);
  FUN_1400b22c2(&DAT_14cbb1490,"CompareStart");
  atexit((_func_5014 *)&LAB_14405e3f7);
  FUN_1400b22c2(&DAT_14cbb14a0,"CompareStop");
  atexit((_func_5014 *)&LAB_14405e408);
  FUN_1400b22c2(&DAT_14cbb14b0,"UnequipItem");
  atexit((_func_5014 *)&LAB_14405e419);
  FUN_1400b22c2(&DAT_14cbb14c0,"EquipItem");
  atexit((_func_5014 *)&LAB_14405e42a);
  FUN_1400b22c2(&DAT_14cbb14d0,"DropItem");
  atexit((_func_5014 *)&LAB_14405e43b);
  FUN_1400b22c2(&DAT_14cbb14e0,"MarkItem");
  atexit((_func_5014 *)&LAB_14405e44c);
  FUN_1400b22c2(&DAT_14cbb14f0,"Error");
  atexit((_func_5014 *)&LAB_14405e45d);
  FUN_1400b22c2(&DAT_14cbb1500,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_14405e46e);
  FUN_1400b22c2(&DAT_14cbb1510,"ElementFocused");
  atexit((_func_5014 *)&LAB_14405e47f);
  FUN_1400b22c2(&DAT_14cbb1520,"ElementClicked");
  atexit((_func_5014 *)&LAB_14405e490);
  FUN_1400b22c2(&DAT_14cbb1530,"EscapeInput");
  atexit((_func_5014 *)&LAB_14405e4a1);
  FUN_1400b22c2(&DAT_14cbb1540,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_14405e4b2);
  FUN_1400b22c2(&DAT_14cbb1550,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_14405e4c3);
  FUN_1400b22c2(&DAT_14cbb1560,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_14405e4d4);
  FUN_1400b22c2(&DAT_14cbb1570,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_14405e4e5);
  FUN_1400b22c2(&DAT_14cbb1580,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_14405e4f6);
  FUN_1400b22c2(&DAT_14cbb1590,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_14405e507);
  FUN_1400b22c2(&DAT_14cbb15a0,"MarkItemBank");
  atexit((_func_5014 *)&LAB_14405e518);
  FUN_1400b22c2(&DAT_14cbb15b0,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_14405e529);
  FUN_1400b22c2(&DAT_14cbb15c0,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_14405e53a);
  FUN_1400b22c2(&DAT_14cbb15d0,"ClickPistol");
  atexit((_func_5014 *)&LAB_14405e54b);
  FUN_1400b22c2(&DAT_14cbb15e0,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_14405e55c);
  FUN_1400b22c2(&DAT_14cbb15f0,"ClickSMG");
  atexit((_func_5014 *)&LAB_14405e56d);
  FUN_1400b22c2(&DAT_14cbb1600,"ClickShotgun");
  atexit((_func_5014 *)&LAB_14405e57e);
  FUN_1400b22c2(&DAT_14cbb1610,"ClickSniper");
  atexit((_func_5014 *)&LAB_14405e58f);
  FUN_1400b22c2(&DAT_14cbb1620,"ClickRepKit");
  atexit((_func_5014 *)&LAB_14405e5a0);
  FUN_1400b22c2(&DAT_14cbb1630,"ClickGrenade");
  atexit((_func_5014 *)&LAB_14405e5b1);
  FUN_1400b22c2(&DAT_14cbb1640,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_14405e5c2);
  FUN_1400b22c2(&DAT_14cbb1650,"ClickClassMod");
  atexit((_func_5014 *)&LAB_14405e5d3);
  FUN_1400b22c2(&DAT_14cbb1660,"ClickGadget");
  atexit((_func_5014 *)&LAB_14405e5e4);
  FUN_1400b22c2(&DAT_14cbb1670,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_14405e5f5);
  FUN_1400b22c2(&DAT_14cbb1680,"ClickShield");
  atexit((_func_5014 *)&LAB_14405e606);
  FUN_1400b22c2(&DAT_14cbb1690,"EquipPistol");
  atexit((_func_5014 *)&LAB_14405e617);
  FUN_1400b22c2(&DAT_14cbb16a0,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_14405e628);
  FUN_1400b22c2(&DAT_14cbb16b0,"EquipSMG");
  atexit((_func_5014 *)&LAB_14405e639);
  FUN_1400b22c2(&DAT_14cbb16c0,"EquipShotgun");
  atexit((_func_5014 *)&LAB_14405e64a);
  FUN_1400b22c2(&DAT_14cbb16d0,"EquipSniper");
  atexit((_func_5014 *)&LAB_14405e65b);
  FUN_1400b22c2(&DAT_14cbb16e0,"EquipRepKit");
  atexit((_func_5014 *)&LAB_14405e66c);
  FUN_1400b22c2(&DAT_14cbb16f0,"EquipGrenade");
  atexit((_func_5014 *)&LAB_14405e67d);
  FUN_1400b22c2(&DAT_14cbb1700,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_14405e68e);
  FUN_1400b22c2(&DAT_14cbb1710,"EquipClassMod");
  atexit((_func_5014 *)&LAB_14405e69f);
  FUN_1400b22c2(&DAT_14cbb1720,"EquipGadget");
  atexit((_func_5014 *)&LAB_14405e6b0);
  FUN_1400b22c2(&DAT_14cbb1730,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_14405e6c1);
  FUN_1400b22c2(&DAT_14cbb1740,"EquipShield");
  atexit((_func_5014 *)&LAB_14405e6d2);
  FUN_1400b22c2(&DAT_14cbb1750,"weapon");
  atexit((_func_5014 *)&LAB_14405e6e3);
  FUN_1400b22c2(&DAT_14cbb1760,"weapon_ps");
  atexit((_func_5014 *)&LAB_14405e6f4);
  FUN_1400b22c2(&DAT_14cbb1770,"weapon_ar");
  atexit((_func_5014 *)&LAB_14405e705);
  FUN_1400b22c2(&DAT_14cbb1780,"weapon_sg");
  atexit((_func_5014 *)&LAB_14405e716);
  FUN_1400b22c2(&DAT_14cbb1790,"weapon_sr");
  atexit((_func_5014 *)&LAB_14405e727);
  FUN_1400b22c2(&DAT_14cbb17a0,"weapon_sm");
  atexit((_func_5014 *)&LAB_14405e738);
  FUN_1400b22c2(&DAT_14cbb17b0,"grenade_gadget");
  atexit((_func_5014 *)&LAB_14405e749);
  FUN_1400b22c2(&DAT_14cbb17c0,"shield");
  atexit((_func_5014 *)&LAB_14405e75a);
  FUN_1400b22c2(&DAT_14cbb17d0,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_14405e76b);
  FUN_1400b22c2(&DAT_14cbb17e0,"repair_kit");
  atexit((_func_5014 *)&LAB_14405e77c);
  FUN_1400b22c2(&DAT_14cbb17f0,"classmod");
  atexit((_func_5014 *)&LAB_14405e78d);
  FUN_1400b22c2(&DAT_14cbb1800,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_14405e79e);
  FUN_1400b22c2(&DAT_14cbb1810,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_14405e7af);
  FUN_1400b22c2(&DAT_14cbb1820,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_14405e7c0);
  FUN_1400b22c2(&DAT_14cbb1830,"classmod_paladin");
  atexit((_func_5014 *)&LAB_14405e7d1);
  FUN_1400b22c2(&DAT_14cbb1840,"gadget");
  atexit((_func_5014 *)&LAB_14405e7e2);
  FUN_1400b22c2(&DAT_14cbb1850,"enhancement");
  atexit((_func_5014 *)&LAB_14405e7f3);
  FUN_140056680(&DAT_14cbb1860,L"recent");
  atexit((_func_5014 *)&LAB_14405e804);
  FUN_140056680(&DAT_14cbb1870,L"type");
  atexit((_func_5014 *)&LAB_14405e815);
  FUN_140056680(&DAT_14cbb1880,L"level");
  atexit((_func_5014 *)&LAB_14405e826);
  FUN_140056680(&DAT_14cbb1890,L"base_name");
  atexit((_func_5014 *)&LAB_14405e837);
  FUN_140056680(&DAT_14cbb18a0,L"first_letter");
  atexit((_func_5014 *)&LAB_14405e848);
  FUN_140056680(&DAT_14cbb18b0,L"value");
  atexit((_func_5014 *)&LAB_14405e859);
  FUN_140056680(&DAT_14cbb18c0,L"rarity");
  atexit((_func_5014 *)&LAB_14405e86a);
  FUN_140056680(&DAT_14cbb18d0,L"manufacturer");
  atexit((_func_5014 *)&LAB_14405e87b);
  _Src = DAT_14cbb0e40;
  DAT_14cbb18e0 = (void *)0x0;
  lVar3 = (longlong)DAT_14cbb0e48;
  _DAT_14cbb18e8 = DAT_14cbb0e48;
  if (lVar3 == 0) {
    _DAT_14cbb18ec = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbb18e0,DAT_14cbb0e48,0);
    memcpy(DAT_14cbb18e0,_Src,lVar3 * 2);
  }
  atexit((_func_5014 *)&LAB_14405e88c);
  FUN_140056680(&DAT_14cbb18f0,L"healing");
  atexit((_func_5014 *)&LAB_14405e89d);
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1900 = (ulonglong)uVar2;
  local_70 = "partial";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1908 = (ulonglong)uVar2;
  local_70 = "all";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1910 = (ulonglong)uVar2;
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b81e040;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b81e060);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b81f010;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b81f030);
  ppuStack_80 = &PTR_FUN_14b81f310;
  local_88 = 1;
  uStack_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b81f350);
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1a38 = (ulonglong)uVar2;
  local_70 = "state_add_primary";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1a40 = (ulonglong)uVar2;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1a48 = (ulonglong)uVar2;
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1a50 = (ulonglong)uVar2;
  local_70 = "set_menu_state";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1a58 = (ulonglong)uVar2;
  local_70 = "set_active_options";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1a60 = (ulonglong)uVar2;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b81f850,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b81f900);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbb1aa0);
  if (cVar1 == '\0') {
    _DAT_14cbb1aa0 = 0;
    uRam000000014cbb1aa8 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1ab0 = 0x47efffffe0000000;
  _DAT_14cbb1ab8 = 0x47efffffe0000000;
  _DAT_14cbb1ac0 = 0x47efffffe0000000;
  _DAT_14cbb1ac8 = 0x47efffffe0000000;
  _DAT_14cbb1ad0 = 0x47efffffe0000000;
  _DAT_14cbb1ad8 = 0x47efffffe0000000;
  _DAT_14cbb1ae0 = 0x47efffffe0000000;
  _DAT_14cbb1ae8 = 0x47efffffe0000000;
  _DAT_14cbb1af4 = 0;
  FUN_14052b5e0(&DAT_14cbb1af0,"PlayerAwareness",0);
  _DAT_14cbb1b00 = "PlayerAwareness";
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b81fe00);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8201d0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b820520,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8208c0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b820c30,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b820cf0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b820db0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b821130,1,0);
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1bf8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbb1c00,L"UNSET",1);
  local_70 = "init";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cbb1c08,L"Party",1);
  FUN_1446f470e(&DAT_14cbb1c10,&DAT_149e063b2,1);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b821590,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b821a00,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b821e90,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b822310,1,0);
  FUN_1400b22c2(&DAT_14cbb1c78,"tint_siren");
  atexit((_func_5014 *)&LAB_14405eb58);
  FUN_1400b22c2(&DAT_14cbb1c88,"tint_health");
  atexit((_func_5014 *)&LAB_14405eb69);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b822cc0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b823e40,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8244d0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b824940,1,0);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1d90 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1d98 = (ulonglong)uVar2;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1da0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbb1da8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14405eb7a);
  FUN_140056680(&DAT_14cbb1db8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14405eb8b);
  FUN_140056680(&DAT_14cbb1dc8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14405eb9c);
  FUN_140056680(&DAT_14cbb1dd8,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14405ebad);
  FUN_1446f470e(&DAT_14cbb1de8,L"LIMB_GORED",1);
  _DAT_14cbb1df0 = 0x4072c00000000000;
  _DAT_14cbb1df8 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbb1e00,L"body",1);
  FUN_1446f470e(&DAT_14cbb1e08,L"title_card",1);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b825030,1,0);
  local_70 = "Standard";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1e48 = (ulonglong)uVar2;
  local_70 = "PrologueSkip";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1e50 = (ulonglong)uVar2;
  local_70 = "UltimateVaultHunterSkip";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1e58 = (ulonglong)uVar2;
  local_70 = "SkipToDLC_Cowbell";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1e60 = (ulonglong)uVar2;
  local_70 = "SkipToDLC_Harmonica";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb1e68 = (ulonglong)uVar2;
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b825590,1,0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440618af FUN_1440618af body=55 status=ok
// SIG undefined FUN_1440618af(void)

void FUN_1440618af(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb20c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb20c0 = FUN_14171c317(FUN_1465f4b33,uVar1,L"EOakUI_CompassIconUpdateType");
  }
  return;
}



// FUNCTION 1440619b2 FUN_1440619b2 body=47 status=ok
// SIG undefined FUN_1440619b2(void)

void FUN_1440619b2(void)

{
  DAT_14cbb27a0 = 0;
  if (DAT_14cbb2798 != 0) {
    FUN_1400020a8();
  }
  FUN_14615b7ea(&DAT_14cbb2758);
  return;
}



// FUNCTION 144061a52 FUN_144061a52 body=4357 status=ok
// SIG undefined FUN_144061a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144061a52(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1e90 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb1e98,"tint_siren");
  atexit((_func_5014 *)&LAB_144061838);
  FUN_1400b22c2(&DAT_14cbb1ea8,"tint_health");
  atexit((_func_5014 *)&LAB_144061849);
  _DAT_14cbb1eb8 = 0x47efffffe0000000;
  _DAT_14cbb1ec0 = 0x47efffffe0000000;
  _DAT_14cbb1ec8 = 0x47efffffe0000000;
  _DAT_14cbb1ed0 = 0x47efffffe0000000;
  _DAT_14cbb1ed8 = 0x47efffffe0000000;
  _DAT_14cbb1ee0 = 0x47efffffe0000000;
  _DAT_14cbb1ee8 = 0x47efffffe0000000;
  _DAT_14cbb1ef0 = 0x47efffffe0000000;
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "Use";
  local_58 = 3;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1ef8 = (ulonglong)uVar2;
  local_60 = "Sight";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f00 = (ulonglong)uVar2;
  local_60 = "TargetLock";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f08 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cbb1f10);
  if (cVar1 == '\0') {
    _DAT_14cbb1f10 = 0;
    uRam000000014cbb1f18 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbb1f24 = 0;
  FUN_14052b5e0(&DAT_14cbb1f20,"PlayerAwareness",0);
  _DAT_14cbb1f30 = "PlayerAwareness";
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f38 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f40 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f48 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f50 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f58 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f60 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f68 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f70 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f78 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f80 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f88 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f90 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1f98 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1fa0 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1fa8 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1fb0 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1fb8 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1fc0 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb1fc8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbb1fd0,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14406185a);
  FUN_140056680(&DAT_14cbb1fe0,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14406186b);
  FUN_140056680(&DAT_14cbb1ff0,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14406187c);
  FUN_140056680(&DAT_14cbb2000,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14406188d);
  FUN_1446f470e(&DAT_14cbb2010,L"LIMB_GORED",1);
  _DAT_14cbb2018 = 0x4072c00000000000;
  _DAT_14cbb2020 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbb2028,L"body",1);
  FUN_1446f470e(&DAT_14cbb2030,L"title_card",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8282f0,1,0);
  local_60 = "Cash";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbb2088 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb2090,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14406189e);
  FUN_1446f470e(&DAT_14cbb20a0,L"UNSET",1);
  local_60 = "init";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "update";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "config_update";
  local_58 = 0xd;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "deinit";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&DAT_14cbb20a8,L"Party",1);
  FUN_1446f470e(&DAT_14cbb20b0,&DAT_149e063b2,1);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14b828950;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b828970,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b828de0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b829260,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8296d0,1,0);
  _DAT_14cbb2134 = 0;
  FUN_14052b5e0(&DAT_14cbb2130,"profile",0);
  _DAT_14cbb2140 = 0;
  FUN_14052b5e0(&DAT_14cbb213c,"input",0);
  _DAT_14cbb214c = 0;
  FUN_14052b5e0(&DAT_14cbb2148,"cursor",0);
  _DAT_14cbb2158 = 0;
  FUN_14052b5e0(&DAT_14cbb2154,"invert_x_axis",0);
  _DAT_14cbb2164 = 0;
  FUN_14052b5e0(&DAT_14cbb2160,"invert_y_axis",0);
  _DAT_14cbb2170 = 0;
  FUN_14052b5e0(&DAT_14cbb216c,"sensitivity",0);
  _DAT_14cbb217c = 0;
  FUN_14052b5e0(&DAT_14cbb2178,"friction_default",0);
  _DAT_14cbb2188 = 0;
  FUN_14052b5e0(&DAT_14cbb2184,"pc_scroll_sensitivity",0);
  _DAT_14cbb2194 = 0;
  FUN_14052b5e0(&DAT_14cbb2190,"max_idle_time",0);
  _DAT_14cbb21a0 = 0;
  FUN_14052b5e0(&DAT_14cbb219c,"show_idle_flash",0);
  FUN_1400b22c2(&DAT_14cbb21a8,"hover");
  atexit((_func_5014 *)&LAB_1440618e6);
  FUN_1400b22c2(&DAT_14cbb21b8,"press");
  atexit((_func_5014 *)&LAB_1440618f7);
  FUN_1400b22c2(&DAT_14cbb21c8,"popup");
  atexit((_func_5014 *)&LAB_144061908);
  FUN_1400b22c2(&DAT_14cbb21d8,"scroll");
  atexit((_func_5014 *)&LAB_144061919);
  FUN_1400b22c2(&DAT_14cbb21e8,"invisible");
  atexit((_func_5014 *)&LAB_14406192a);
  FUN_1400b22c2(&DAT_14cbb21f8,&DAT_14b82978f);
  atexit((_func_5014 *)&LAB_14406193b);
  FUN_1400b22c2(&DAT_14cbb2208,"idle_flash");
  atexit((_func_5014 *)&LAB_14406194c);
  FUN_1400b22c2(&DAT_14cbb2218,&DAT_149e62dd2);
  atexit((_func_5014 *)&LAB_14406195d);
  FUN_1400b22c2(&DAT_14cbb2228,"GBX-BUTTON");
  atexit((_func_5014 *)&LAB_14406196e);
  FUN_1400b22c2(&DAT_14cbb2238,"GBX-DROPDOWN");
  atexit((_func_5014 *)&LAB_14406197f);
  FUN_1400b22c2(&DAT_14cbb2248,"GBX-SLIDER");
  atexit((_func_5014 *)&LAB_144061990);
  FUN_1400b22c2(&DAT_14cbb2258,"GBX-TEXT-INPUT");
  atexit((_func_5014 *)&LAB_1440619a1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b829c10,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82a2d0,1,&PTR_FUN_14b82a2a0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82a750,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82abc0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82b030,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82bcd0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82c1c0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82c630,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82caa0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82d1a0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82d6a0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82dc80,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82e720,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82eb90,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82f2a0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82f810,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b82fc70,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8300e0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b830550,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b830e30,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8312a0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b831a00,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b831e70,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b832360,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8328c0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b832d30,1,0);
  FUN_1400b22c2(&DAT_14cbb2608,"autoregion");
  atexit((_func_5014 *)&LAB_1440619e1);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8331a0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b833610,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b833aa0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b833f10,1,0);
  _DAT_14cbb267c = 0;
  _DAT_14cbb2680 = 0;
  FUN_14052b5e0(&DAT_14cbb2678,"Missions",0);
  _DAT_14cbb2688 = 0;
  _DAT_14cbb268c = 0;
  FUN_14052b5e0(&DAT_14cbb2684,"Timer",0);
  _DAT_14cbb2694 = 0;
  _DAT_14cbb2698 = 0;
  FUN_14052b5e0(&DAT_14cbb2690,"Percent",0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b834370,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b834830,1,0);
  _DAT_14cbb26d4 = 0;
  _DAT_14cbb26d8 = 0;
  FUN_14052b5e0(&DAT_14cbb26d0,"contract",0);
  _DAT_14cbb26e0 = 0;
  _DAT_14cbb26e4 = 0;
  FUN_14052b5e0(&DAT_14cbb26dc,"replay",0);
  _DAT_14cbb26ec = 0;
  _DAT_14cbb26f0 = 0;
  FUN_14052b5e0(&DAT_14cbb26e8,"missions",0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b834cb0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b835590,1,0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144062d89 FUN_144062d89 body=47 status=ok
// SIG undefined FUN_144062d89(void)

longlong FUN_144062d89(void)

{
  if (DAT_14cbb2ed0 == 0) {
    FUN_14000fc22(&DAT_14cbb2ed0,&PTR_FUN_14b837e08);
  }
  return DAT_14cbb2ed0;
}



// FUNCTION 144062dcd FUN_144062dcd body=47 status=ok
// SIG undefined FUN_144062dcd(void)

longlong FUN_144062dcd(void)

{
  if (DAT_14cbb2f38 == 0) {
    FUN_14000fc22(&DAT_14cbb2f38,&PTR_FUN_14b838ed0);
  }
  return DAT_14cbb2f38;
}



// FUNCTION 144062e11 FUN_144062e11 body=47 status=ok
// SIG undefined FUN_144062e11(void)

longlong FUN_144062e11(void)

{
  if (DAT_14cbb2f78 == 0) {
    FUN_14000fc22(&DAT_14cbb2f78,&PTR_FUN_14b839438);
  }
  return DAT_14cbb2f78;
}



// FUNCTION 144062e40 FUN_144062e40 body=728 status=ok
// SIG undefined FUN_144062e40(void)

void FUN_144062e40(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar2 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar2 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar4)(plVar2);
          if (cVar7 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,&local_30);
            goto LAB_144063012;
          }
        }
        puVar8 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_30,puVar8,(int)plVar2[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar2[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_30,lVar3,1);
      }
      else {
        (*pcVar4)(plVar2,&local_30,lVar3);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_30);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_30);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar4)(uVar5,param_2,&local_30);
    }
  }
LAB_144063012:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459ba9e8(param_1,1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406320c FUN_14406320c body=95 status=ok
// SIG undefined FUN_14406320c(void)

void FUN_14406320c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14b7d42f0;
  puVar1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(puVar1 + 7);
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  *puVar1 = &PTR_FUN_14b83da90;
  puVar1[6] = &PTR_FUN_14b83dd50;
  puVar1[7] = &PTR_LAB_14b83dde0;
  return;
}



// FUNCTION 14406326c FUN_14406326c body=227 status=ok
// SIG undefined FUN_14406326c(void)

longlong FUN_14406326c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb3350 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_144063209;
    local_40 = FUN_14406320c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_Takedown",&DAT_14cbb3350,&DAT_144063208);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3350;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144063350 FUN_144063350 body=47 status=ok
// SIG undefined FUN_144063350(void)

longlong FUN_144063350(void)

{
  if (DAT_14cbb3358 == 0) {
    FUN_14073dd9a(&DAT_14cbb3358,&PTR_FUN_14b83da48);
  }
  return DAT_14cbb3358;
}



// FUNCTION 144063384 FUN_144063384 body=115 status=ok
// SIG undefined FUN_144063384(void)

void FUN_144063384(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14b7d42f0;
  puVar1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(puVar1 + 7);
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  *puVar1 = &PTR_FUN_14b83df00;
  puVar1[6] = &PTR_FUN_14b83e1c0;
  puVar1[7] = &PTR_FUN_14b83e250;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  return;
}



// FUNCTION 1440633f8 FUN_1440633f8 body=227 status=ok
// SIG undefined FUN_1440633f8(void)

longlong FUN_1440633f8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb3368 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_144063381;
    local_40 = FUN_144063384;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_TakedownTimer",&DAT_14cbb3368,
                  &DAT_144063380);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3368;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440634dc FUN_1440634dc body=47 status=ok
// SIG undefined FUN_1440634dc(void)

longlong FUN_1440634dc(void)

{
  if (DAT_14cbb3370 == 0) {
    FUN_14073dd9a(&DAT_14cbb3370,&PTR_FUN_14b83deb8);
  }
  return DAT_14cbb3370;
}



// FUNCTION 14406350c FUN_14406350c body=154 status=ok
// SIG undefined FUN_14406350c(void)

void FUN_14406350c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b83df00;
  param_1[6] = &PTR_FUN_14b83e1c0;
  param_1[7] = &PTR_FUN_14b83e250;
  plVar3 = param_1 + 0xd;
  if (*(int *)(param_1 + 0xe) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_144063570;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_144063570:
  plVar3 = (longlong *)param_1[0xc];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_140af926c(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1440635a6 FUN_1440635a6 body=47 status=ok
// SIG undefined FUN_1440635a6(void)

longlong FUN_1440635a6(void)

{
  if (DAT_14cbb33b8 == 0) {
    FUN_14000fc22(&DAT_14cbb33b8,&PTR_FUN_14b83ec50);
  }
  return DAT_14cbb33b8;
}



// FUNCTION 1440635d6 FUN_1440635d6 body=764 status=ok
// SIG undefined FUN_1440635d6(void)

void FUN_1440635d6(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_48);
            goto LAB_1440637a8;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_48,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_48,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_48,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
LAB_1440637a8:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = &LAB_1442a3f6c;
  local_38 = 0;
  FUN_1442a3c66(local_48 + 0x120,local_30,param_1);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440638d3 FUN_1440638d3 body=47 status=ok
// SIG undefined FUN_1440638d3(void)

longlong FUN_1440638d3(void)

{
  if (DAT_14cbb33c0 == 0) {
    FUN_14000fc22(&DAT_14cbb33c0,&PTR_FUN_14b83ecf8);
  }
  return DAT_14cbb33c0;
}



// FUNCTION 144063902 FUN_144063902 body=743 status=ok
// SIG undefined FUN_144063902(void)

void FUN_144063902(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_144063ad4;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_144063ad4:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 != 0) {
    FUN_145a5d05e(param_1,*(undefined8 *)(local_30 + 0x398));
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144063bea FUN_144063bea body=47 status=ok
// SIG undefined FUN_144063bea(void)

longlong FUN_144063bea(void)

{
  if (DAT_14cbb33c8 == 0) {
    FUN_14000fc22(&DAT_14cbb33c8,&PTR_FUN_14b83edb8);
  }
  return DAT_14cbb33c8;
}



// FUNCTION 144063c1a FUN_144063c1a body=731 status=ok
// SIG undefined FUN_144063c1a(void)

void FUN_144063c1a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_144063dec;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_144063dec:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1442a3c12(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


